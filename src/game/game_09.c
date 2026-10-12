#include "game.h"

/* 088CA2D0 */
void func_088CA2D0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CA2D0:;
    sp = sp - 16;
    v1 = 0x100000u;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+248);
    v0 = v0 | v1;
    a0 = v0 & 0x800;
    cnd_ = a0 == 0;
    ST32(s0+248, v0);
    if (cnd_) { goto L_088CA37C; }
    goto L_088CA308;
L_088CA308:;
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088CA380; }
    goto L_088CA314;
L_088CA314:;
    v1 = LD32(s0+372);
    cnd_ = v1 == 0;
    a0 = D_08B2BEC4 - (-16700);
    if (cnd_) { goto L_088CA33C; }
    goto L_088CA320;
L_088CA320:;
    v0 = LD32(v1+16);
    goto L_088CA324;
L_088CA324:;
    cnd_ = v0 == s1;
    if (cnd_) { goto L_088CA380; }
    goto L_088CA32C;
L_088CA32C:;
    v1 = LD32(v1+20);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+16); goto L_088CA324; }
    goto L_088CA338;
L_088CA338:;
    a0 = D_08B2BEC4 - (-16700);
    goto L_088CA33C;
L_088CA33C:;
    a0 = a0 - 16700;
    { rv_t r_ = func_08AA37A0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA344;
L_088CA344:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088CA37C; }
    goto L_088CA34C;
L_088CA34C:;
    v1 = LD32(s2);
    ST32(v0+16, s1);
    ST32(v0, v1);
    v0 = LD32(s2+4);
    a0 = LD32(s0+372);
    ST32(a1+4, v0);
    v1 = LD32(s2+8);
    ST32(a1+20, a0);
    ST32(a1+8, v1);
    v0 = LD32(s2+12);
    ST32(s0+372, a1);
    ST32(a1+12, v0);
    goto L_088CA37C;
L_088CA37C:;
    goto L_088CA380;
L_088CA380:;
    sp = sp + 16;
    return;
}

/* 088CA394 */
u64 func_088CA394(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CA394:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    t3 = s3 < 0x1u;
    v0 = t3 & v0;
    t4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CA420; }
    goto L_088CA3CC;
L_088CA3CC:;
    t0 = D_08B2BEB8 - (-16712);
    t1 = D_08B2BEC4 - (-16700);
    a1 = D_08B2BEA4 - (-16732);
    a3 = t0 - 16712;
    a2 = t1 - 16700;
    v0 = 12;
    v1 = 32;
    ST32(a3+8, v0);
    a0 = a1 - 16732;
    t2 = 16;
    ST32(a2+8, v1);
    v0 = 8;
    v1 = (u32)-1;
    ST32(a0+4, v0);
    ST32(a0+12, v1);
    ST32(a0+16, 0);
    ST32(a1-16732, 0);
    ST32(a2+4, t2);
    ST32(t0-16712, 0);
    ST32(t1-16700, 0);
    ST32(a3+4, t2);
    goto L_088CA420;
L_088CA420:;
    s2 = t4 < 0x1u;
    v0 = t3 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088CA464; }
    goto L_088CA430;
L_088CA430:;
    v0 = D_08B2BEC4 - (-16700);
    s0 = LD32(v0-16700);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088CA464; }
    goto L_088CA440;
L_088CA440:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CA5D0; }
    goto L_088CA44C;
L_088CA44C:;
    s1 = LD32(s0+12);
    goto L_088CA450;
L_088CA450:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088CA5B8; }
    goto L_088CA458;
L_088CA458:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA460;
L_088CA460:;
    v0 = s3 < 0x1u;
    goto L_088CA464;
L_088CA464:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088CA4A4; }
    goto L_088CA470;
L_088CA470:;
    v0 = D_08B2BEB8 - (-16712);
    s0 = LD32(v0-16712);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = s3 < 0x1u; goto L_088CA4A4; }
    goto L_088CA480;
L_088CA480:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CA5A8; }
    goto L_088CA48C;
L_088CA48C:;
    s1 = LD32(s0+12);
    goto L_088CA490;
L_088CA490:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088CA590; }
    goto L_088CA498;
L_088CA498:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA4A0;
L_088CA4A0:;
    v0 = s3 < 0x1u;
    goto L_088CA4A4;
L_088CA4A4:;
    v0 = v0 & s2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CA548; }
    goto L_088CA4B0;
L_088CA4B0:;
    v0 = D_08B2BEA4 - (-16732);
    s4 = LD32(v0-16732);
    cnd_ = s4 == 0;
    if (cnd_) {  goto L_088CA54C; }
    goto L_088CA4C0;
L_088CA4C0:;
    a0 = LD32(s4);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s4+4); goto L_088CA528; }
    goto L_088CA4CC;
L_088CA4CC:;
    v0 = LD32(a0-4);
    v1 = 400;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s2 = a0 + v0;
    goto L_088CA4E0;
L_088CA4E0:;
    cnd_ = a0 == s2;
    s1 = s2 - 400;
    if (cnd_) { goto L_088CA51C; }
    goto L_088CA4E8;
L_088CA4E8:;
    a0 = LD32(s1+388);
    s2 = s1 + 0;
    cnd_ = a0 == 0;
    s3 = s1 + 388;
    if (cnd_) { goto L_088CA508; }
    goto L_088CA4F8;
L_088CA4F8:;
    s0 = LD32(a0);
    { u64 r_ = func_088B692C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA500;
L_088CA500:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CA4F8; }
    goto L_088CA508;
L_088CA508:;
    ST32(s3, 0);
    a0 = s1 + 288;
    { rv_t r_ = func_088B8B58(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA514;
L_088CA514:;
    a0 = LD32(s4);
    goto L_088CA4E0;
L_088CA51C:;
    a0 = a0 - 16;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA524;
L_088CA524:;
    a0 = LD32(s4+4);
    goto L_088CA528;
L_088CA528:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088CA57C; }
    goto L_088CA530;
L_088CA530:;
    s0 = LD32(s4+12);
    goto L_088CA534;
L_088CA534:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088CA564; }
    goto L_088CA53C;
L_088CA53C:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA544;
L_088CA544:;
    goto L_088CA548;
L_088CA548:;
    goto L_088CA54C;
L_088CA54C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088CA564:;
    a0 = s0 + 0;
    func_08AB6168(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CA56C;
L_088CA56C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA574;
L_088CA574:;
    goto L_088CA53C;
L_088CA57C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA588;
L_088CA588:;
    s0 = LD32(s4+12);
    goto L_088CA534;
L_088CA590:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088CA598;
L_088CA598:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5A0;
L_088CA5A0:;
    goto L_088CA498;
L_088CA5A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5B0;
L_088CA5B0:;
    s1 = LD32(s0+12);
    goto L_088CA490;
L_088CA5B8:;
    a0 = s1 + 0;
    func_08AA3740(a0, t1, t2, t3);
    goto L_088CA5C0;
L_088CA5C0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5C8;
L_088CA5C8:;
    goto L_088CA458;
L_088CA5D0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA5D8;
L_088CA5D8:;
    s1 = LD32(s0+12);
    goto L_088CA450;
}

/* 088CA5E0 */
float func_088CA5E0(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088CA5E0:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088CA60C; }
    goto L_088CA5F8;
L_088CA5F8:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088CA60C; }
    goto L_088CA60C;
L_088CA60C:;
    return f0;
}

/* 088CA614 */
rv_t func_088CA614(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CA614:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088CA394(a0, a1, a2, a3, t0, t1, t2, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA628;
L_088CA628:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CA634 */
rv_t func_088CA634(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CA634:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088CA394(a0, a1, a2, a3, t0, t1, t2, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA648;
L_088CA648:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CA654 */
u32 func_088CA654(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CA654:;
    sp = sp - 32;
    s2 = a0 + 0;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA674;
L_088CA674:;
    s1 = v0 + 0;
    v0 = 8;
    ST32(s1, v0);
    a0 = 128;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA688;
L_088CA688:;
    s0 = LD32(s1);
    ST32(s1+4, v0);
    a0 = s0 << 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA698;
L_088CA698:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_088CA6B4; }
    goto L_088CA6A4;
L_088CA6A4:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_088CA6AC;
L_088CA6AC:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_088CA6AC; }
    goto L_088CA6B4;
L_088CA6B4:;
    v0 = D_08AEC8BC - (-14148);
    v1 = D_08AEC8C0 - (-14144);
    f9 = BITSF(LD32(v0-14148));
    f0 = BITSF(LD32(v1-14144));
    ST32(s1+8, a0);
    fcc = FCMP(f9, f0, 14);
    cnd_ = !fcc;
    a1 = 0 + 0;
    if (cnd_) { goto L_088CA7A4; }
    goto L_088CA6D8;
L_088CA6D8:;
    v0 = D_08AEC8C4 - (-14140);
    f14 = BITSF(LD32(v0-14140));
    f12 = f0;
    t0 = v0 - 14140;
    f13 = f9;
    f15 = f0;
    goto L_088CA6F0;
L_088CA6F0:;
    fcc = FCMP(f13, f0, 14);
    cnd_ = !fcc;
    f7 = f13;
    if (cnd_) { goto L_088CA790; }
    goto L_088CA700;
L_088CA700:;
    f11 = BITSF(LD32(t0));
    v0 = D_08AEC8B8 - (-14152);
    v1 = D_08AEC8C4 - (-14140);
    f6 = f15;
    a3 = v0 - 14152;
    a2 = v1 - 14140;
    f8 = f15;
    f10 = f13;
    goto L_088CA720;
L_088CA720:;
    fcc = FCMP(f10, f6, 14);
    cnd_ = !fcc;
    f1 = f10;
    if (cnd_) { goto L_088CA77C; }
    goto L_088CA730;
L_088CA730:;
    f2 = BITSF(LD32(a3));
    f5 = BITSF(LD32(a2));
    f4 = f9 * f2;
    f3 = f7 * f2;
    goto L_088CA740;
L_088CA740:;
    v0 = LD32(s1+8);
    a0 = a1 << 4;
    f0 = f1 * f2;
    v0 = v0 + a0;
    ST32(v0, FBITS(f4));
    f1 = f1 + f5;
    a1 = a1 + 1;
    v1 = LD32(s1+8);
    fcc = FCMP(f1, f6, 14);
    v1 = v1 + a0;
    ST32(v1+4, FBITS(f3));
    v0 = LD32(s1+8);
    v0 = v0 + a0;
    cnd_ = fcc;
    ST32(v0+8, FBITS(f0));
    if (cnd_) { goto L_088CA740; }
    goto L_088CA77C;
L_088CA77C:;
    f7 = f7 + f11;
    fcc = FCMP(f7, f8, 14);
    cnd_ = fcc;
    f6 = f8;
    if (cnd_) { goto L_088CA720; }
    goto L_088CA790;
L_088CA790:;
    f9 = f9 + f14;
    fcc = FCMP(f9, f12, 14);
    cnd_ = fcc;
    f0 = f12;
    if (cnd_) { goto L_088CA6F0; }
    goto L_088CA7A4;
L_088CA7A4:;
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2));
    s0 = 12;
    a0 = 192;
    ST32(v1, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+8));
    ST32(v0+4, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+16));
    ST32(v1+8, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2));
    ST32(v0+16, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+8));
    ST32(v1+20, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+20));
    ST32(v0+24, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2));
    ST32(v1+32, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+12));
    ST32(v0+36, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+16));
    ST32(v1+40, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2));
    ST32(v0+48, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+12));
    ST32(v1+52, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+20));
    ST32(v0+56, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+4));
    ST32(v1+64, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+8));
    ST32(v0+68, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+16));
    ST32(v1+72, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+4));
    ST32(v0+80, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+8));
    ST32(v1+84, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+20));
    ST32(v0+88, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+4));
    ST32(v1+96, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+12));
    ST32(v0+100, FBITS(f0));
    v1 = LD32(s1+4);
    f0 = BITSF(LD32(s2+16));
    ST32(v1+104, FBITS(f0));
    v0 = LD32(s1+4);
    f0 = BITSF(LD32(s2+4));
    ST32(v0+112, FBITS(f0));
    f0 = BITSF(LD32(s2+12));
    v1 = LD32(s1+4);
    ST32(v1+116, FBITS(f0));
    f1 = BITSF(LD32(s2+20));
    v0 = LD32(s1+4);
    ST32(v0+120, FBITS(f1));
    ST32(s1+20, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA8D4;
L_088CA8D4:;
    v1 = LD32(s1+20);
    ST32(s1+24, v0);
    a0 = v1 << 1;
    a0 = a0 + v1;
    a0 = a0 << 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA8EC;
L_088CA8EC:;
    a2 = LD32(s1+20);
    a0 = LD32(s1+24);
    ST32(s1+28, v0);
    a1 = D_08B2BEE0 - (-16672);
    a2 = a2 << 4;
    a1 = a1 - 16672;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA908;
L_088CA908:;
    v1 = LD32(s1+20);
    a0 = LD32(s1+28);
    a1 = D_08AD8228 - (-32216);
    a2 = v1 << 1;
    a2 = a2 + v1;
    a2 = a2 << 1;
    a1 = a1 - 32216;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CA928;
L_088CA928:;
    ST32(s1+12, s0);
    a0 = 384;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CA934;
L_088CA934:;
    v1 = LD32(s1+12);
    ST32(s1+16, v0);
    cnd_ = v1 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_088CAA00; }
    goto L_088CA944;
L_088CA944:;
    v0 = D_08B16064 - (24676);
    v1 = D_08B1607C - (24700);
    t1 = v0 + 24676;
    t2 = v1 + 24700;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[12]=(float)1;v[13]=(float)1;v[14]=(float)1;v[15]=(float)1;}
    a1 = t0 << 1;
    goto L_088CA95C;
L_088CA95C:;
    v1 = a1 + t1;
    a2 = LD32(s1+16);
    v0 = LD_U8(v1);
    a3 = t0 << 5;
    a2 = a3 + a2;
    ST16(a2+16, v0);
    a1 = a1 + t2;
    t0 = t0 + 1;
    v0 = LD_U8(v1+1);
    a0 = LD32(s1+24);
    ST16(a2+18, v0);
    v1 = LD_U8(a1+1);
    v0 = LD_U8(a1);
    v1 = v1 << 4;
    v0 = v0 << 4;
    v1 = a0 + v1;
    a0 = a0 + v0;
    {u32 a_=v1+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a0+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp);
    a0 = LD32(s1+16);
    ST32(a2, v0);
    a0 = a0 + a3;
    v0 = LD32(sp+4);
    ST32(a2+4, v0);
    v1 = LD32(sp+8);
    ST32(a2+8, v1);
    v0 = LD32(sp+12);
    ST32(a2+12, v0);
    {u32 a_=a0+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {float s0=v[12];float t0=v[0];float d0=s0/t0;v[8]=d0;}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[8];v[4]=s0*t0;v[5]=s1*t0;v[6]=s2*t0;}
    {u32 a_=a0+(0);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(s1+12);
    v0 = t0 < v0;
    cnd_ = v0 != 0;
    a1 = t0 << 1;
    if (cnd_) { goto L_088CA95C; }
    goto L_088CAA00;
L_088CAA00:;
    v0 = s1 + 0;
    sp = sp + 32;
    return v0;
}

/* 088CAA1C */
void func_088CAA1C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAA1C:;
    sp = sp - 16;
    s2 = a1 + 4;
    s1 = a0 + 0;
    a0 = s2 + 0;
    s0 = a1 + 0;
    v0 = func_088CA654(a0, t1, t2, t3);
    goto L_088CAA44;
L_088CAA44:;
    ST32(s1, v0);
    a1 = s2 + 0;
    a0 = s1 + 0;
    func_088CAA80(a0, a1);
    goto L_088CAA54;
L_088CAA54:;
    v1 = LD32(s0);
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CAA64;
L_088CAA64:;
    ST32(s1+32, v0);
    sp = sp + 16;
    return;
}

/* 088CAA80 */
void func_088CAA80(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAA80:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    v0 = D_08AEC8C8 - (-14136);
    f4 = BITSF(LD32(v0-14136));
    f1 = f1 - f0;
    v0 = a0 + 16;
    sp = sp - 16;
    f1 = f1 * f4;
    ST32(a0+4, FBITS(f1));
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1+12));
    f0 = f0 - f1;
    f0 = f0 * f4;
    ST32(a0+8, FBITS(f0));
    f0 = BITSF(LD32(a1+16));
    f1 = BITSF(LD32(a1+20));
    f1 = f1 - f0;
    f1 = f1 * f4;
    ST32(a0+12, FBITS(f1));
    f6 = BITSF(LD32(a1+20));
    f1 = BITSF(LD32(a1));
    f5 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1+16));
    f1 = f1 + f5;
    f2 = f2 + f3;
    f0 = f0 + f6;
    f1 = f1 * f4;
    f2 = f2 * f4;
    f0 = f0 * f4;
    ST32(a0+16, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f2));
    sp = sp + 16;
    return;
}

/* 088CAB10 */
rv_t func_088CAB10(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_088CAB10:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a3 = D_08B2BEE0 - (-16672);
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    a2 = a3 - 16672;
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    v1 = a2 + 16;
    if (cnd_) { goto L_088CABFC; }
    goto L_088CAB34;
L_088CAB34:;
    v0 = D_08AEC8D0 - (-14128);
    f0 = BITSF(LD32(v0-14128));
    ST32(a2+4, 0);
    v0 = D_08AEC8CC - (-14132);
    ST32(a2+8, 0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    v1 = a2 + 32;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, 0);
    v1 = a2 + 48;
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, 0);
    v1 = a2 + 64;
    f1 = BITSF(LD32(v0-14132));
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    v1 = a2 + 80;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    v1 = a2 + 96;
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, 0);
    v1 = a2 + 112;
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, 0);
    v1 = a2 + 128;
    ST32(v1+8, 0);
    ST32(v1+4, FBITS(f0));
    v1 = a2 + 144;
    ST32(v1+4, FBITS(f0));
    ST32(v1+8, 0);
    v1 = a2 + 160;
    ST32(a2+32, 0);
    ST32(a2+48, 0);
    ST32(a3-16672, FBITS(f1));
    ST32(a2+16, FBITS(f1));
    ST32(a2+64, FBITS(f0));
    ST32(a2+80, FBITS(f0));
    ST32(a2+96, 0);
    ST32(a2+112, 0);
    ST32(a2+128, 0);
    ST32(a2+144, 0);
    ST32(a2+160, 0);
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, 0);
    v1 = a2 + 176;
    ST32(a2+176, 0);
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, 0);
    goto L_088CABFC;
L_088CABFC:;
    return (rv_t){ v0, v1, f0 };
}

/* 088CAC04 */
rv_t func_088CAC04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAC04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088CAB10(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CAC18;
L_088CAC18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CAC24 */
void func_088CAC24(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAC24:;
    sp = sp - 16;
    v1 = 1;
    v0 = D_08B2BFA0 - (-16480);
    ST8(v0-16480, v1);
    func_0890118C(a0, a1, f12);
    goto L_088CAC3C;
L_088CAC3C:;
    sp = sp + 16;
    return;
}

/* 088CAC48 */
void func_088CAC48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAC48:;
    sp = sp - 16;
    func_089012F0(a0, a1, a2, a3, t0, t1, t2);
    goto L_088CAC58;
L_088CAC58:;
    sp = sp + 16;
    return;
}

/* 088CAC64 */
void func_088CAC64(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAC64:;
    sp = sp - 16;
    v0 = D_08B2BFA0 - (-16480);
    ST8(v0-16480, 0);
    func_08901334();
    goto L_088CAC78;
L_088CAC78:;
    sp = sp + 16;
    return;
}

/* 088CAC84 */
void func_088CAC84(void)
{
L_088CAC84:;
    return;
}

/* 088CAC8C */
void func_088CAC8C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CAC8C:;
    sp = sp - 32;
    s3 = D_08B2BFDC - (-16420);
    s0 = LD32(s3-16420);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088CACFC; }
    goto L_088CACB0;
L_088CACB0:;
    a0 = LD32(s0+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CAD54; }
    goto L_088CACBC;
L_088CACBC:;
    s2 = LD32(s0);
    goto L_088CACC0;
L_088CACC0:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088CACF0; }
    goto L_088CACC8;
L_088CACC8:;
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088CACE8; }
    goto L_088CACD4;
L_088CACD4:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CAD28; }
    goto L_088CACE0;
L_088CACE0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088CAD18; }
    goto L_088CACE8;
L_088CACE8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CACF0;
L_088CACF0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CACF8;
L_088CACF8:;
    ST32(s3-16420, 0);
    goto L_088CACFC;
L_088CACFC:;
    sp = sp + 32;
    return;
L_088CAD18:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CAD20;
L_088CAD20:;
    goto L_088CACE8;
L_088CAD28:;
    func_08AA5FC8(a0);
    goto L_088CAD30;
L_088CAD30:;
    a0 = LD32(s1+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CAD44; }
    goto L_088CAD3C;
L_088CAD3C:;
    s1 = LD32(s2);
    goto L_088CACE0;
L_088CAD44:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CAD4C;
L_088CAD4C:;
    s1 = LD32(s2);
    goto L_088CACE0;
L_088CAD54:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CAD5C;
L_088CAD5C:;
    s2 = LD32(s0);
    goto L_088CACC0;
}

/* 088CAD64 */
void func_088CAD64(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAD64:;
    sp = sp - 16;
    func_088CAC8C(t1, t2, t3);
    goto L_088CAD74;
L_088CAD74:;
    sp = sp + 16;
    return;
}

/* 088CAD80 */
void func_088CAD80(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAD80:;
    sp = sp - 16;
    v0 = D_08B2BFA4 - (-16476);
    ST8(v0-16476, a0);
    func_08903460();
    goto L_088CAD94;
L_088CAD94:;
    sp = sp + 16;
    return;
}

/* 088CADA0 */
void func_088CADA0(u32 a0)
{
    float f12 = 0, f13 = 0, f14 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CADA0:;
    f14 = BITSF(LD32(a0+8));
    f12 = BITSF(LD32(a0));
    f13 = BITSF(LD32(a0+4));
    sp = sp - 16;
    func_088CADC8(f12, f13, f14);
    goto L_088CADBC;
L_088CADBC:;
    sp = sp + 16;
    return;
}

/* 088CADC8 */
void func_088CADC8(float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CADC8:;
    sp = sp - 16;
    a1 = D_08AEC8D4 - (-14124);
    f1 = BITSF(0);
    f0 = BITSF(LD32(a1-14124));
    a0 = D_08B2BFA8 - (-16472);
    v0 = a0 - 16472;
    f2 = f12 * f0;
    a2 = D_08AEC8D8 - (-14120);
    ST32(v0+4, FBITS(f13));
    fcc = FCMP(f1, f2, 12);
    ST32(v0+8, FBITS(f14));
    ST32(v0+12, FBITS(f1));
    cnd_ = !fcc;
    ST32(a0-16472, FBITS(f12));
    if (cnd_) { goto L_088CAEB4; }
    goto L_088CAE04;
L_088CAE04:;
    f0 = BITSF(LD32(a2-14120));
    f0 = f2 + f0;
    goto L_088CAE0C;
L_088CAE0C:;
    f0 = BITSF(F2I(f0, 1));
    v0 = a0 - 16472;
    f2 = BITSF(LD32(a1-14124));
    f1 = BITSF(0);
    a3 = FBITS(f0);
    f0 = BITSF(LD32(v0+4));
    f2 = f0 * f2;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v1 = a3 << 8;
    if (cnd_) { goto L_088CAEA8; }
    goto L_088CAE38;
L_088CAE38:;
    f0 = BITSF(LD32(a2-14120));
    f0 = f2 + f0;
    goto L_088CAE40;
L_088CAE40:;
    f0 = BITSF(F2I(f0, 1));
    v0 = a0 - 16472;
    f2 = BITSF(LD32(a1-14124));
    f1 = BITSF(0);
    a0 = FBITS(f0);
    f0 = BITSF(LD32(v0+8));
    v1 = v1 + a0;
    f2 = f0 * f2;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v1 = v1 << 8;
    if (cnd_) { goto L_088CAE9C; }
    goto L_088CAE70;
L_088CAE70:;
    f0 = BITSF(LD32(a2-14120));
    f0 = f2 + f0;
    goto L_088CAE78;
L_088CAE78:;
    f0 = BITSF(F2I(f0, 1));
    v0 = D_08B2BFB8 - (-16456);
    a3 = FBITS(f0);
    v1 = v1 + a3;
    ST32(v0-16456, v1);
    func_08903460();
    goto L_088CAE90;
L_088CAE90:;
    sp = sp + 16;
    return;
L_088CAE9C:;
    f0 = BITSF(LD32(a2-14120));
    f0 = f2 - f0;
    goto L_088CAE78;
L_088CAEA8:;
    f0 = BITSF(LD32(a2-14120));
    f0 = f2 - f0;
    goto L_088CAE40;
L_088CAEB4:;
    f0 = BITSF(LD32(a2-14120));
    f0 = f2 - f0;
    goto L_088CAE0C;
}

/* 088CAEC0 */
void func_088CAEC0(float f12)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAEC0:;
    sp = sp - 16;
    v0 = D_08B2BFBC - (-16452);
    ST32(v0-16452, FBITS(f12));
    func_088CAF78();
    goto L_088CAED4;
L_088CAED4:;
    sp = sp + 16;
    return;
}

/* 088CAEE0 */
void func_088CAEE0(float f12)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAEE0:;
    sp = sp - 16;
    v0 = D_08B2BFC0 - (-16448);
    ST32(v0-16448, FBITS(f12));
    func_088CAF78();
    goto L_088CAEF4;
L_088CAEF4:;
    sp = sp + 16;
    return;
}

/* 088CAF00 */
void func_088CAF00(float f12)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAF00:;
    sp = sp - 16;
    v0 = D_08B2BFC4 - (-16444);
    ST32(v0-16444, FBITS(f12));
    func_08903460();
    goto L_088CAF14;
L_088CAF14:;
    sp = sp + 16;
    return;
}

/* 088CAF20 */
void func_088CAF20(float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAF20:;
    sp = sp - 16;
    v0 = D_08AEC8DC - (-14116);
    f1 = BITSF(0);
    f0 = BITSF(LD32(v0-14116));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088CAF60; }
    goto L_088CAF44;
L_088CAF44:;
    f12 = f0;
    goto L_088CAF48;
L_088CAF48:;
    v0 = D_08B2BFCC - (-16436);
    goto L_088CAF4C;
L_088CAF4C:;
    ST32(v0-16436, FBITS(f12));
    func_08903460();
    goto L_088CAF54;
L_088CAF54:;
    sp = sp + 16;
    return;
L_088CAF60:;
    fcc = FCMP(f12, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f1; goto L_088CAF48; }
    goto L_088CAF70;
L_088CAF70:;
    v0 = D_08B2BFCC - (-16436);
    goto L_088CAF4C;
}

/* 088CAF78 */
void func_088CAF78(void)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CAF78:;
    sp = sp - 16;
    v0 = D_08B2BFC0 - (-16448);
    v1 = D_08B2BFBC - (-16452);
    f2 = BITSF(LD32(v0-16448));
    f0 = BITSF(LD32(v1-16452));
    f1 = BITSF(0);
    f2 = f2 - f0;
    fcc = FCMP(f2, f1, 2);
    cnd_ = fcc;
    v0 = D_08AEC8E0 - (-14112);
    if (cnd_) { goto L_088CAFCC; }
    goto L_088CAFA8;
L_088CAFA8:;
    f0 = BITSF(LD32(v0-14112));
    v0 = D_08B2BFC8 - (-16440);
    f0 = f0 / f2;
    ST32(v0-16440, FBITS(f0));
    goto L_088CAFB8;
L_088CAFB8:;
    func_08903460();
    goto L_088CAFC0;
L_088CAFC0:;
    sp = sp + 16;
    return;
L_088CAFCC:;
    f0 = BITSF(LD32(v0-14112));
    v1 = D_08B2BFC8 - (-16440);
    ST32(v1-16440, FBITS(f0));
    goto L_088CAFB8;
}

/* 088CAFDC */
void func_088CAFDC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088CAFDC:;
    sp = sp - 48;
    s2 = D_08B2BFDC - (-16420);
    a0 = a0 & 0xff;
    s0 = LD32(s2-16420);
    s1 = D_08B2BFD0 - (-16432);
    v0 = 0 < s0;
    cnd_ = a0 == v0;
    ST8(s1-16432, a0);
    if (cnd_) { goto L_088CB034; }
    goto L_088CB020;
L_088CB020:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088CB390; }
    goto L_088CB028;
L_088CB028:;
    v0 = LD_U8(s1-16432);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088CB068; }
    goto L_088CB034;
L_088CB034:;
    func_08903460();
    goto L_088CB03C;
L_088CB03C:;
    sp = sp + 48;
    return;
L_088CB068:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB070;
L_088CB070:;
    s1 = v0 + 0;
    ST32(v0, 0);
    a0 = 16;
    s3 = s2 - 16420;
    ST32(v0+4, 0);
    v0 = D_08AEC8E4 - (-14108);
    ST32(s1+8, 0);
    f22 = BITSF(LD32(v0-14108));
    v0 = D_08B2BFC4 - (-16444);
    f20 = BITSF(LD32(v0-16444));
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB09C;
L_088CB09C:;
    v1 = 2;
    ST32(v0+12, 0);
    a0 = 8;
    f21 = BITSF(FBITS(f22) ^ 0x80000000u);
    ST32(s1+4, v1);
    f23 = BITSF(FBITS(f20) ^ 0x80000000u);
    ST32(s1, v0);
    ST32(v0, 0);
    ST32(s1+12, 0);
    ST32(s1+16, FBITS(f22));
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB0C8;
L_088CB0C8:;
    s0 = LD32(s1);
    ST32(s1+8, v0);
    v1 = 0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088CB0E0; }
    goto L_088CB0DC;
L_088CB0DC:;
    v1 = LD32(s0);
    goto L_088CB0E0;
L_088CB0E0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088CB34C; }
    goto L_088CB0E8;
L_088CB0E8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088CB0F4; }
    goto L_088CB0F0;
L_088CB0F0:;
    v1 = LD32(v0);
    goto L_088CB0F4;
L_088CB0F4:;
    v0 = LD32(v1+8);
    cnd_ = v0 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_088CB138; }
    goto L_088CB100;
L_088CB100:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088CB138; }
    goto L_088CB114;
L_088CB114:;
    s0 = v0 + 0;
    goto L_088CB118;
L_088CB118:;
    v0 = LD32(v0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CB138; }
    goto L_088CB124;
L_088CB124:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    if (cnd_) { s0 = v0 + 0; goto L_088CB118; }
    goto L_088CB138;
L_088CB138:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB140;
L_088CB140:;
    ST32(v0+8, 0);
    v1 = v0 + 0;
    v0 = LD32(s0+8);
    ST32(v1, FBITS(f23));
    ST32(v1+8, v0);
    v0 = LD32(s0+8);
    ST32(v1+4, FBITS(f21));
    cnd_ = v0 == 0;
    ST32(v1+12, 0);
    if (cnd_) { goto L_088CB168; }
    goto L_088CB164;
L_088CB164:;
    ST32(v0+12, v1);
    goto L_088CB168;
L_088CB168:;
    ST32(v1+12, s0);
    ST32(s0+8, v1);
    goto L_088CB170;
L_088CB170:;
    f12 = BITSF(0);
    a0 = s1 + 0;
    f13 = f12;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_088CB180;
L_088CB180:;
    a0 = s1 + 0;
    f12 = f20;
    f13 = f22;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_088CB190;
L_088CB190:;
    f12 = f20 + f20;
    f13 = f22 + f22;
    a0 = s1 + 0;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_088CB1A0;
L_088CB1A0:;
    a0 = LD32(s1);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CB1B0; }
    goto L_088CB1AC;
L_088CB1AC:;
    v0 = LD32(a0);
    goto L_088CB1B0;
L_088CB1B0:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+4); goto L_088CB248; }
    goto L_088CB1B8;
L_088CB1B8:;
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088CB1C4; }
    goto L_088CB1C0;
L_088CB1C0:;
    a2 = LD32(a0);
    goto L_088CB1C4;
L_088CB1C4:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CB1D0; }
    goto L_088CB1CC;
L_088CB1CC:;
    v0 = LD32(a0);
    goto L_088CB1D0;
L_088CB1D0:;
    v0 = LD32(v0+8);
    v1 = 0 + 0;
    f0 = BITSF(LD32(v0));
    cnd_ = a0 == 0;
    f1 = f0 + f0;
    if (cnd_) { goto L_088CB1E8; }
    goto L_088CB1E4;
L_088CB1E4:;
    v1 = LD32(a0);
    goto L_088CB1E8;
L_088CB1E8:;
    v1 = LD32(v1+8);
    a1 = 0 + 0;
    v0 = LD32(v1+8);
    f0 = BITSF(LD32(v0));
    f0 = f1 - f0;
    cnd_ = a0 == 0;
    ST32(a2, FBITS(f0));
    if (cnd_) { goto L_088CB208; }
    goto L_088CB204;
L_088CB204:;
    a1 = LD32(a0);
    goto L_088CB208;
L_088CB208:;
    v0 = LD32(a1+8);
    cnd_ = v0 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088CB228; }
    goto L_088CB214;
L_088CB214:;
    v1 = v0 + 0;
    goto L_088CB218;
L_088CB218:;
    v0 = LD32(v1+8);
    a0 = v1 + 0;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088CB218; }
    goto L_088CB228;
L_088CB228:;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(v0));
    v1 = LD32(v0+12);
    f0 = f0 + f0;
    f1 = BITSF(LD32(v1));
    f0 = f0 - f1;
    ST32(a0, FBITS(f0));
    a1 = LD32(s1+4);
    goto L_088CB248;
L_088CB248:;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088CB334; }
    goto L_088CB254;
L_088CB254:;
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088CB2E4; }
    goto L_088CB25C;
L_088CB25C:;
    v0 = D_08AEC8E4 - (-14108);
    f20 = BITSF(LD32(v0-14108));
    goto L_088CB264;
L_088CB264:;
    f0 = BITSF(s0);
    v0 = s0 >> 1;
    v1 = a1 - 1;
    a2 = s0 & 0x1;
    a2 = a2 | v0;
    a1 = v1 & 0x1;
    v0 = v1 >> 1;
    a0 = s1 + 0;
    a1 = a1 | v0;
    cnd_ = (s32)s0 < 0;
    f2 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088CB324; }
    goto L_088CB290;
L_088CB290:;
    f1 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088CB314; }
    goto L_088CB29C;
L_088CB29C:;
    f0 = f20 / f0;
    f12 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s1+16));
    f0 = f2 * f0;
    f2 = f20 - f0;
    f1 = f1 * f0;
    f12 = f12 * f2;
    f12 = f12 + f1;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB2C0;
L_088CB2C0:;
    v1 = LD32(s1+4);
    a0 = LD32(s1+8);
    v0 = s0 << 2;
    s0 = s0 + 1;
    a1 = v1 + 0;
    v0 = v0 + a0;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    ST32(v0, FBITS(f0));
    if (cnd_) { goto L_088CB264; }
    goto L_088CB2E4;
L_088CB2E4:;
    ST32(s3, s1);
    v1 = D_08B2BFD4 - (-16428);
    v0 = v1 - 16428;
    s0 = LD32(s2-16420);
    f12 = BITSF(LD32(v0+4));
    f13 = BITSF(LD32(v1-16428));
    a0 = s0 + 0;
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_088CB304;
L_088CB304:;
    a0 = s0 + 0;
    func_08AABAF0(a0);
    goto L_088CB30C;
L_088CB30C:;
    goto L_088CB034;
L_088CB314:;
    f1 = BITSF(a1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088CB29C;
L_088CB324:;
    f1 = BITSF(a2);
    f2 = (float)(s32)FBITS(f1);
    f2 = f2 + f2;
    goto L_088CB290;
L_088CB334:;
    f12 = BITSF(0);
    a0 = s1 + 0;
    { rv_t r_ = func_08AAB110(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB340;
L_088CB340:;
    v0 = LD32(s1+8);
    ST32(v0, FBITS(f0));
    goto L_088CB2E4;
L_088CB34C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CB374; }
    goto L_088CB354;
L_088CB354:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB35C;
L_088CB35C:;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0, FBITS(f23));
    ST32(v0+4, FBITS(f21));
    ST32(s0, v0);
    goto L_088CB170;
L_088CB374:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB37C;
L_088CB37C:;
    ST32(v0+12, 0);
    s0 = v0 + 0;
    ST32(v0, 0);
    ST32(s1, v0);
    goto L_088CB354;
L_088CB390:;
    a0 = s0 + 0;
    func_08AABCA0(a0, t1, t2, t3);
    goto L_088CB398;
L_088CB398:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CB3A0;
L_088CB3A0:;
    ST32(s2-16420, 0);
    goto L_088CB028;
}

/* 088CB3A8 */
void func_088CB3A8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CB3A8:;
    sp = sp - 32;
    s3 = D_08B2BFDC - (-16420);
    s1 = D_08B2BFD4 - (-16428);
    s2 = s1 - 16428;
    v0 = LD32(a0);
    s0 = LD32(s3-16420);
    ST32(s1-16428, v0);
    v0 = LD32(a0+4);
    a0 = s0 + 0;
    cnd_ = s0 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_088CB40C; }
    goto L_088CB3E8;
L_088CB3E8:;
    func_08903460();
    goto L_088CB3F0;
L_088CB3F0:;
    sp = sp + 32;
    return;
L_088CB40C:;
    func_08AABCA0(a0, t1, t2, t3);
    goto L_088CB414;
L_088CB414:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CB41C;
L_088CB41C:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB424;
L_088CB424:;
    s0 = v0 + 0;
    v0 = D_08B2BFC4 - (-16444);
    f13 = BITSF(LD32(v0-16444));
    f12 = BITSF(0);
    v0 = D_08AEC8E8 - (-14104);
    f15 = BITSF(LD32(v0-14104));
    ST32(s0, 0);
    f14 = f12;
    a1 = 2;
    ST32(s0+4, 0);
    a0 = s0 + 0;
    ST32(s0+8, 0);
    func_08AAB844(a0, a1, 0, 0, 0, f12, f13, f14, f15);
    goto L_088CB458;
L_088CB458:;
    f12 = BITSF(LD32(s2+4));
    f13 = BITSF(LD32(s1-16428));
    a0 = s0 + 0;
    ST32(s3-16420, s0);
    func_08AAB9C8(a0, 0, 0, 0, f12, f13);
    goto L_088CB46C;
L_088CB46C:;
    a0 = s0 + 0;
    func_08AABAF0(a0);
    goto L_088CB474;
L_088CB474:;
    goto L_088CB3E8;
}

/* 088CB47C */
rv_t func_088CB47C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
L_088CB47C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    v1 = D_08B2BFD4 - (-16428);
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    a2 = v1 - 16428;
    if (cnd_) { goto L_088CB4AC; }
    goto L_088CB49C;
L_088CB49C:;
    v0 = D_08AEC914 - (-14060);
    f0 = BITSF(LD32(v0-14060));
    ST32(a2+4, FBITS(f0));
    ST32(v1-16428, FBITS(f0));
    goto L_088CB4AC;
L_088CB4AC:;
    return (rv_t){ v0, v1, f0 };
}

/* 088CB4B4 */
rv_t func_088CB4B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CB4B4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088CB47C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CB4C8;
L_088CB4C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CB4D4 */
void func_088CB4D4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CB4D4:;
    sp = sp - 16;
    func_08A639F4(a2, a3, t0, t1, t2, t3);
    goto L_088CB4E4;
L_088CB4E4:;
    sp = sp + 16;
    return;
}

/* 088CB4F0 */
void func_088CB4F0(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CB4F0:;
    sp = sp - 16;
    func_088CB50C(t1, t2, t3);
    goto L_088CB500;
L_088CB500:;
    sp = sp + 16;
    return;
}

/* 088CB50C */
void func_088CB50C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CB50C:;
    sp = sp - 16;
    v0 = D_08B2BFEC - (-16404);
    s2 = 4;
    s1 = v0 - 16404;
    goto L_088CB52C;
L_088CB52C:;
    s0 = LD32(s1);
    s2 = s2 - 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CB568; }
    goto L_088CB53C;
L_088CB53C:;
    ST32(s1, 0);
    goto L_088CB540;
L_088CB540:;
    cnd_ = (s32)s2 >= 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_088CB52C; }
    goto L_088CB548;
L_088CB548:;
    v0 = D_08B2BFE8 - (-16408);
    ST8(v0-16408, 0);
    sp = sp + 16;
    return;
L_088CB568:;
    func_088CD6D8(a0, t1, t2, t3);
    goto L_088CB570;
L_088CB570:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CB578;
L_088CB578:;
    ST32(s1, 0);
    goto L_088CB540;
}

/* 088CB580 */
float func_088CB580(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CB580:;
    sp = sp - 16;
    v0 = D_08B2BFE4 - (-16412);
    f0 = f12;
    v1 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v1 = LD32(v1);
    v0 = a0 & 0xffff;
    cnd_ = v1 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088CB5BC; }
    goto L_088CB5B4;
L_088CB5B4:;
    f12 = BITSF(LD32(v1+112));
    f12 = f0 * f12;
    goto L_088CB5BC;
L_088CB5BC:;
    f0 = func_088CB5D0(a0, f12);
    goto L_088CB5C4;
L_088CB5C4:;
    sp = sp + 16;
    return f0;
}

/* 088CB5D0 */
float func_088CB5D0(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CB5D0:;
    sp = sp - 32;
    s0 = a0 & 0xffff;
    a0 = s0 + 0;
    f21 = f12;
    f0 = func_08A63D10(a0, f12);
    goto L_088CB5F4;
L_088CB5F4:;
    f20 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f20; goto L_088CB65C; }
    goto L_088CB60C;
L_088CB60C:;
    v0 = D_08B2BFE4 - (-16412);
    a0 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    a0 = a0 << 2;
    a0 = a0 + v0;
    v1 = LD32(a0);
    a1 = s0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    f20 = f0;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088CB658; }
    goto L_088CB640;
L_088CB640:;
    v0 = func_088CD768(a0, a1, a2, a3);
    goto L_088CB648;
L_088CB648:;
    cnd_ = v0 == 0;
    f0 = f20;
    if (cnd_) { goto L_088CB65C; }
    goto L_088CB650;
L_088CB650:;
    f0 = BITSF(LD32(v0+8));
    f20 = f0 * f21;
    goto L_088CB658;
L_088CB658:;
    f0 = f20;
    goto L_088CB65C;
L_088CB65C:;
    sp = sp + 32;
    return f0;
}

/* 088CB674 */
float func_088CB674(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CB674:;
    sp = sp - 32;
    f0 = BITSF(0);
    s2 = a1 + 0;
    s1 = a0 + 0;
    f22 = f12;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CB730; }
    goto L_088CB6AC;
L_088CB6AC:;
    f21 = f0;
    cnd_ = a1 == 0;
    f20 = f0;
    if (cnd_) { goto L_088CB71C; }
    goto L_088CB6B8;
L_088CB6B8:;
    f23 = f0;
    goto L_088CB6BC;
L_088CB6BC:;
    s0 = LD_U16(s1);
    f0 = f20;
    fcc = FCMP(f20, f23, 2);
    cnd_ = s0 == 0;
    v1 = 10;
    if (cnd_) { goto L_088CB71C; }
    goto L_088CB6D0;
L_088CB6D0:;
    cnd_ = s0 == v1;
    if (cnd_) { goto L_088CB758; }
    goto L_088CB6D8;
L_088CB6D8:;
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CB704; }
    goto L_088CB6E0;
L_088CB6E0:;
    v0 = LD_U16(s1-2);
    a1 = s0 + 0;
    f12 = f22;
    cnd_ = v0 == v1;
    a0 = v0 + 0;
    if (cnd_) { goto L_088CB700; }
    goto L_088CB6F4;
L_088CB6F4:;
    f0 = func_088CD41C(a0, a1, f12);
    goto L_088CB6FC;
L_088CB6FC:;
    f20 = f20 + f0;
    goto L_088CB700;
L_088CB700:;
    a0 = s0 + 0;
    goto L_088CB704;
L_088CB704:;
    f12 = f22;
    f0 = func_088CB580(a0, f12);
    goto L_088CB70C;
L_088CB70C:;
    f20 = f20 + f0;
    goto L_088CB710;
L_088CB710:;
    s2 = s2 - 1;
    cnd_ = s2 != 0;
    s1 = s1 + 2;
    if (cnd_) { goto L_088CB6BC; }
    goto L_088CB71C;
L_088CB71C:;
    fcc = FCMP(f21, f20, 14);
    cnd_ = fcc;
    f0 = f20;
    if (cnd_) { goto L_088CB730; }
    goto L_088CB72C;
L_088CB72C:;
    f0 = f21;
    goto L_088CB730;
L_088CB730:;
    sp = sp + 32;
    return f0;
L_088CB758:;
    fcc = FCMP(f21, f20, 14);
    f20 = BITSF(0);
    cnd_ = !fcc;
    if (cnd_) { f0 = f21; goto L_088CB768; }
    goto L_088CB768;
L_088CB768:;
    f21 = f0;
    goto L_088CB710;
}

/* 088CB770 */
u32 func_088CB770(u32 a0, u32 a2, u32 a3, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088CB770:;
    v0 = a3 < 0x1u;
    v1 = a2 < 0x1u;
    sp = sp - 64;
    v1 = v1 | v0;
    v0 = 0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f23 = f13;
    f22 = f12;
    f21 = f14;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088CBA9C; }
    goto L_088CB7D0;
L_088CB7D0:;
    v0 = LD32(a3+112);
    f24 = BITSF(LD32(a2));
    f25 = BITSF(LD32(a2+4));
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088CBB18; }
    goto L_088CB7E8;
L_088CB7E8:;
    f0 = BITSF(LD32(s1+8));
    v0 = D_08B2BFE4 - (-16412);
    v1 = LD32(v0-16412);
    f0 = f0 / f1;
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    f27 = f24 + f0;
    f0 = func_088CD94C(a0);
    goto L_088CB814;
L_088CB814:;
    v0 = LD32(s2+116);
    f20 = f0;
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088CBAFC; }
    goto L_088CB828;
L_088CB828:;
    f1 = f20 / f0;
    v0 = D_08AEC91C - (-14052);
    v1 = D_08B160C4 - (24772);
    f0 = BITSF(LD32(v0-14052));
    v0 = LD_U8(v1+24772);
    f2 = f0;
    cnd_ = v0 != 0;
    f26 = f25 + f1;
    if (cnd_) { goto L_088CBAEC; }
    goto L_088CB848;
L_088CB848:;
    f0 = f20 * f21;
    f1 = BITSF(LD32(s1+8));
    a0 = sp + 0;
    if (s0 == 0) s0 = sp;
    f1 = f1 * f21;
    f0 = f0 * f2;
    f20 = f22 + f1;
    f21 = f23 + f0;
    func_089013C4(a0);
    goto L_088CB86C;
L_088CB86C:;
    f3 = BITSF(LD32(s0+8));
    fcc = FCMP(f22, f3, 12);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CBA9C; }
    goto L_088CB880;
L_088CB880:;
    f5 = BITSF(LD32(s0+12));
    fcc = FCMP(f23, f5, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088CBAA0; }
    goto L_088CB894;
L_088CB894:;
    f4 = BITSF(LD32(s0));
    fcc = FCMP(f4, f20, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_088CBAA4; }
    goto L_088CB8A8;
L_088CB8A8:;
    f6 = BITSF(LD32(s0+4));
    fcc = FCMP(f6, f21, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_088CBAA4; }
    goto L_088CB8BC;
L_088CB8BC:;
    fcc = FCMP(f22, f4, 12);
    cnd_ = !fcc;
    f0 = f20 - f22;
    if (cnd_) { goto L_088CB8E4; }
    goto L_088CB8CC;
L_088CB8CC:;
    f1 = f4 - f22;
    f2 = f27 - f24;
    f22 = f4;
    f1 = f1 / f0;
    f2 = f2 * f1;
    f24 = f24 + f2;
    goto L_088CB8E4;
L_088CB8E4:;
    fcc = FCMP(f3, f20, 12);
    cnd_ = !fcc;
    f0 = f20 - f22;
    if (cnd_) { goto L_088CB90C; }
    goto L_088CB8F4;
L_088CB8F4:;
    f1 = f3 - f22;
    f2 = f27 - f24;
    f20 = f3;
    f1 = f1 / f0;
    f2 = f2 * f1;
    f27 = f24 + f2;
    goto L_088CB90C;
L_088CB90C:;
    fcc = FCMP(f23, f6, 12);
    cnd_ = !fcc;
    f0 = f21 - f23;
    if (cnd_) { goto L_088CB934; }
    goto L_088CB91C;
L_088CB91C:;
    f1 = f6 - f23;
    f2 = f26 - f25;
    f23 = f6;
    f1 = f1 / f0;
    f2 = f2 * f1;
    f25 = f25 + f2;
    goto L_088CB934;
L_088CB934:;
    fcc = FCMP(f5, f21, 12);
    cnd_ = !fcc;
    v0 = D_08B2C018 - (-16360);
    if (cnd_) { goto L_088CB960; }
    goto L_088CB944;
L_088CB944:;
    f0 = f21 - f23;
    f1 = f5 - f23;
    f2 = f26 - f25;
    f21 = f5;
    f1 = f1 / f0;
    f2 = f2 * f1;
    f26 = f25 + f2;
    goto L_088CB960;
L_088CB960:;
    v1 = LD32(s2+100);
    a2 = LD32(v0-16360);
    s0 = D_08B2C12C - (-16084);
    v0 = D_08B160C8 - (24776);
    a0 = LD32(v0+24776);
    v0 = s0 - 16084;
    ST32(v0+80, v1);
    v1 = 1;
    a1 = a2 & 0x6000;
    ST8(v0+93, v1);
    v1 = D_08B2C010 - (-16368);
    ST32(v0+56, FBITS(f26));
    ST32(v0+84, a0);
    ST32(v0+32, FBITS(f24));
    ST32(v0+48, FBITS(f25));
    ST32(v0+36, FBITS(f27));
    ST8(v0+92, 0);
    ST32(v0+44, FBITS(f24));
    ST32(v0+52, FBITS(f25));
    ST32(v0+40, FBITS(f27));
    ST32(v0+60, FBITS(f26));
    cnd_ = a1 == 0;
    s1 = LD32(v1-16368);
    if (cnd_) { goto L_088CBA68; }
    goto L_088CB9BC;
L_088CB9BC:;
    v1 = s1 >> 24;
    f0 = BITSF(v1);
    v0 = a2 & 0x4000;
    cnd_ = v0 == 0;
    f0 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088CBAE0; }
    goto L_088CB9D0;
L_088CB9D0:;
    v0 = D_08AD82E0 - (-32032);
    f2 = BITSF(LD32(v0-32032));
    goto L_088CB9D8;
L_088CB9D8:;
    f2 = f2 * f0;
    v0 = D_08AEC920 - (-14048);
    f0 = BITSF(LD32(v0-14048));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEC924 - (-14044);
    if (cnd_) { goto L_088CBAD4; }
    goto L_088CB9FC;
L_088CB9FC:;
    f0 = BITSF(LD32(v0-14044));
    f0 = f2 + f0;
    goto L_088CBA04;
L_088CBA04:;
    f0 = BITSF(F2I(f0, 1));
    v0 = D_08B160BC - (24764);
    v1 = D_08B160C0 - (24768);
    f1 = BITSF(LD32(v0+24764));
    a0 = FBITS(f0);
    f0 = BITSF(LD32(v1+24768));
    f2 = f22 + f1;
    f1 = f23 + f1;
    f3 = f20 + f0;
    f0 = f21 + f0;
    v0 = s0 - 16084;
    v1 = a0 << 24;
    ST32(v0+64, v1);
    a0 = v0 + 0;
    a1 = 0 + 0;
    ST32(v0+16, FBITS(f1));
    ST32(v0+24, FBITS(f0));
    ST32(v0+4, FBITS(f3));
    ST32(v0+20, FBITS(f1));
    ST32(v0+28, FBITS(f0));
    ST32(v0+12, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(s0-16084, FBITS(f2));
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CBA64;
L_088CBA64:;
    v0 = s0 - 16084;
    goto L_088CBA68;
L_088CBA68:;
    ST32(v0+64, s1);
    a0 = v0 + 0;
    a1 = 1;
    ST32(v0+16, FBITS(f23));
    ST32(v0+24, FBITS(f21));
    ST32(v0+4, FBITS(f20));
    ST32(v0+20, FBITS(f23));
    ST32(v0+28, FBITS(f21));
    ST32(v0+12, FBITS(f22));
    ST32(v0+8, FBITS(f20));
    ST32(s0-16084, FBITS(f22));
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CBA98;
L_088CBA98:;
    v0 = 1;
    goto L_088CBA9C;
L_088CBA9C:;
    goto L_088CBAA0;
L_088CBAA0:;
    goto L_088CBAA4;
L_088CBAA4:;
    sp = sp + 64;
    return v0;
L_088CBAD4:;
    f0 = BITSF(LD32(v0-14044));
    f0 = f2 - f0;
    goto L_088CBA04;
L_088CBAE0:;
    v0 = D_08AD82DC - (-32036);
    f2 = BITSF(LD32(v0-32036));
    goto L_088CB9D8;
L_088CBAEC:;
    f0 = func_08901428();
    goto L_088CBAF4;
L_088CBAF4:;
    f2 = f0;
    goto L_088CB848;
L_088CBAFC:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088CB828;
L_088CBB18:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_088CB7E8;
}

/* 088CBB34 */
rv_t func_088CBB34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[576] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 576);
L_088CBB34:;
    sp = sp - 576;
    v0 = D_08B2BFE8 - (-16408);
    s1 = a0 + 0;
    s0 = a1 + 0;
    f21 = f13;
    f20 = f12;
    v1 = LD_U8(v0-16408);
    ST32(sp+556, a3);
    v0 = a2 + 0;
    ST32(sp+560, t0);
    ST32(sp+564, t1);
    ST32(sp+568, t2);
    cnd_ = v1 == 0;
    ST32(sp+572, t3);
    if (cnd_) { goto L_088CBBC8; }
    goto L_088CBB80;
L_088CBB80:;
    cnd_ = a2 == 0;
    v1 = a1 & 0x1000;
    if (cnd_) { goto L_088CBBC8; }
    goto L_088CBB88;
L_088CBB88:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = sp + 556;
    a3 = 255;
    cnd_ = v1 != 0;
    t0 = 1;
    if (cnd_) { goto L_088CBBE4; }
    goto L_088CBBA0;
L_088CBBA0:;
    a0 = v0 + 0;
    v0 = D_08AEC928 - (-14040);
    f14 = BITSF(LD32(v0-14040));
    f12 = f20;
    f13 = f21;
    a2 = s1 + 0;
    a3 = s0 + 0;
    a1 = 0 + 0;
    f15 = f14;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CBBC8;
L_088CBBC8:;
    sp = sp + 576;
    return (rv_t){ v0, v1, f0 };
L_088CBBE4:;
    func_08837534(a0, a1, a2, a3, t0);
    goto L_088CBBEC;
L_088CBBEC:;
    v0 = sp + 0;
    goto L_088CBBA0;
}

/* 088CBBF4 */
rv_t func_088CBBF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[576] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 576);
L_088CBBF4:;
    sp = sp - 576;
    v0 = D_08B2BFE8 - (-16408);
    s1 = a0 + 0;
    s0 = a1 + 0;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    v1 = LD_U8(v0-16408);
    ST32(sp+556, a3);
    v0 = a2 + 0;
    ST32(sp+560, t0);
    ST32(sp+564, t1);
    ST32(sp+568, t2);
    cnd_ = v1 == 0;
    ST32(sp+572, t3);
    if (cnd_) { goto L_088CBC90; }
    goto L_088CBC48;
L_088CBC48:;
    cnd_ = a2 == 0;
    v1 = a1 & 0x1000;
    if (cnd_) { goto L_088CBC90; }
    goto L_088CBC50;
L_088CBC50:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = sp + 556;
    a3 = 255;
    cnd_ = v1 != 0;
    t0 = 1;
    if (cnd_) { goto L_088CBCB0; }
    goto L_088CBC68;
L_088CBC68:;
    a0 = v0 + 0;
    v0 = D_08AEC92C - (-14036);
    f14 = BITSF(LD32(v0-14036));
    f12 = f20;
    f13 = f21;
    f15 = f22;
    a2 = s1 + 0;
    a3 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CBC90;
L_088CBC90:;
    sp = sp + 576;
    return (rv_t){ v0, v1, f0 };
L_088CBCB0:;
    func_08837534(a0, a1, a2, a3, t0);
    goto L_088CBCB8;
L_088CBCB8:;
    v0 = sp + 0;
    goto L_088CBC68;
}

/* 088CBCC0 */
rv_t func_088CBCC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 544);
L_088CBCC0:;
    sp = sp - 544;
    s0 = a1 + 0;
    a1 = D_08AD82D0 - (-32048);
    t0 = a0 + 0;
    a0 = sp + 0;
    s2 = a3 + 0;
    a1 = a1 - 32048;
    s1 = a2 + 0;
    a2 = 255;
    f23 = f15;
    a3 = 1;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CBD1C;
L_088CBD1C:;
    a1 = s0 + 0;
    f12 = f20;
    f13 = f21;
    f14 = f22;
    f15 = f23;
    a2 = s1 + 0;
    a3 = s2 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CBD40;
L_088CBD40:;
    sp = sp + 544;
    return (rv_t){ v0, v1, f0 };
}

/* 088CBD68 */
rv_t func_088CBD68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_088CBD68:;
    sp = sp - 320;
    v0 = D_08B2BFE8 - (-16408);
    s1 = a0 + 0;
    s0 = a1 + 0;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    v1 = LD_U8(v0-16408);
    ST32(sp+300, a3);
    v0 = a2 + 0;
    ST32(sp+304, t0);
    ST32(sp+308, t1);
    ST32(sp+312, t2);
    cnd_ = v1 == 0;
    ST32(sp+316, t3);
    if (cnd_) { goto L_088CBE04; }
    goto L_088CBDBC;
L_088CBDBC:;
    cnd_ = a2 == 0;
    v1 = a1 & 0x1000;
    if (cnd_) { goto L_088CBE04; }
    goto L_088CBDC4;
L_088CBDC4:;
    a1 = a2 + 0;
    a0 = sp + 0;
    a2 = sp + 300;
    a3 = 255;
    cnd_ = v1 != 0;
    t0 = 1;
    if (cnd_) { goto L_088CBE24; }
    goto L_088CBDDC;
L_088CBDDC:;
    a0 = v0 + 0;
    v0 = D_08AEC934 - (-14028);
    f14 = BITSF(LD32(v0-14028));
    f12 = f20;
    f13 = f21;
    f15 = f22;
    a2 = s1 + 0;
    a3 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088CBCC0(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CBE04;
L_088CBE04:;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_088CBE24:;
    func_08837508(a0, a1, a2, a3, t0);
    goto L_088CBE2C;
L_088CBE2C:;
    v0 = sp + 0;
    goto L_088CBDDC;
}

/* 088CBE34 */
rv_t func_088CBE34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 560);
L_088CBE34:;
    sp = sp - 560;
    v0 = D_08B2BFE8 - (-16408);
    t4 = a3 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    f23 = f13;
    f22 = f12;
    f21 = f15;
    f20 = f14;
    v1 = LD_U8(v0-16408);
    v0 = 0 + 0;
    ST32(sp+544, t0);
    ST32(sp+548, t1);
    ST32(sp+552, t2);
    cnd_ = v1 == 0;
    ST32(sp+556, t3);
    if (cnd_) { goto L_088CBEDC; }
    goto L_088CBE98;
L_088CBE98:;
    cnd_ = a3 == 0;
    v1 = a2 & 0x1000;
    if (cnd_) { goto L_088CBEDC; }
    goto L_088CBEA0;
L_088CBEA0:;
    a1 = a3 + 0;
    a0 = sp + 0;
    a3 = 255;
    t0 = 1;
    cnd_ = v1 != 0;
    a2 = sp + 544;
    if (cnd_) { goto L_088CBF04; }
    goto L_088CBEB8;
L_088CBEB8:;
    a3 = s0 | 0x100;
    a0 = t4 + 0;
    a1 = s1 + 0;
    f12 = f22;
    f13 = f23;
    f14 = f20;
    f15 = f21;
    a2 = s2 + 0;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CBEDC;
L_088CBEDC:;
    sp = sp + 560;
    return (rv_t){ v0, v1, f0 };
L_088CBF04:;
    func_08837534(a0, a1, a2, a3, t0);
    goto L_088CBF0C;
L_088CBF0C:;
    t4 = sp + 0;
    goto L_088CBEB8;
}

/* 088CBF14 */
float func_088CBF14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088CBF14:;
    sp = sp - 48;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CBF30; }
    goto L_088CBF20;
L_088CBF20:;
    v1 = LD_U16(a0);
    v0 = 0xe000;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = a0 + 2; goto L_088CBF44; }
    goto L_088CBF30;
L_088CBF30:;
    v0 = D_08AEC938 - (-14024);
    f0 = BITSF(LD32(v0-14024));
    goto L_088CBF38;
L_088CBF38:;
    sp = sp + 48;
    return f0;
L_088CBF44:;
    a1 = 0 + 0;
    a3 = 0xe000;
    goto L_088CBF4C;
L_088CBF4C:;
    v1 = LD_U16(a0);
    a2 = sp + a1;
    cnd_ = v1 == a3;
    v0 = (s32)a1 < 9;
    if (cnd_) { goto L_088CBF80; }
    goto L_088CBF5C;
L_088CBF5C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = sp + a1; goto L_088CBF84; }
    goto L_088CBF64;
L_088CBF64:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = sp + a1; goto L_088CBF84; }
    goto L_088CBF6C;
L_088CBF6C:;
    v0 = LD_U8(a0);
    a1 = a1 + 1;
    a0 = a0 + 2;
    ST8(a2, v0);
    goto L_088CBF4C;
L_088CBF80:;
    v0 = sp + a1;
    goto L_088CBF84;
L_088CBF84:;
    ST8(v0, 0);
    a0 = sp + 0;
    a1 = sp + 16;
    { rv_t r_ = func_088375C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CBF94;
L_088CBF94:;
    f0 = BITSF(LD32(sp+16));
    goto L_088CBF38;
}

/* 088CBF9C */
u64 func_088CBF9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088CBF9C:;
    sp = sp - 48;
    s4 = a2 + 0;
    s3 = t0 + 0;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s0 = a0 + 0;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088CC1BC; }
    goto L_088CBFD0;
L_088CBFD0:;
    v0 = LD32(a3);
    ST32(a0, v0);
    v1 = LD32(a3+4);
    ST32(a0+4, v1);
    v0 = LD32(a3+8);
    ST32(a0+8, v0);
    v1 = LD32(a3+12);
    ST32(a0+12, v1);
    goto L_088CBFF0;
L_088CBFF0:;
    v0 = s3 & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08B159FC - (23036);
    if (cnd_) { goto L_088CC074; }
    goto L_088CBFFC;
L_088CBFFC:;
    v1 = D_08B306F0 - (1776);
    cnd_ = s1 == 0;
    v0 = D_08B306EC - (1772);
    if (cnd_) { goto L_088CC048; }
    goto L_088CC008;
L_088CC008:;
    f0 = BITSF(LD32(v1+1776));
    f1 = BITSF(LD32(v0+1772));
    f3 = BITSF(LD32(s0));
    f4 = (float)(s32)FBITS(f0);
    f5 = (float)(s32)FBITS(f1);
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+12));
    f0 = f0 * f4;
    f3 = f3 * f4;
    f2 = f2 * f5;
    f1 = f1 * f5;
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f3));
    ST32(s0+4, FBITS(f1));
    ST32(s0+12, FBITS(f2));
    goto L_088CC048;
L_088CC048:;
    f3 = BITSF(LD32(v1+1776));
    f1 = BITSF(LD32(s2));
    f0 = BITSF(LD32(v0+1772));
    f2 = (float)(s32)FBITS(f3);
    f4 = (float)(s32)FBITS(f0);
    f1 = f1 * f2;
    ST32(s2, FBITS(f1));
    f0 = BITSF(LD32(s4));
    f0 = f0 * f4;
    ST32(s4, FBITS(f0));
    v0 = D_08B159FC - (23036);
    goto L_088CC074;
L_088CC074:;
    a1 = LD32(v0+23036);
    v1 = (s3 >> 4) & 0x1;
    a0 = a1 + 60;
    v0 = 0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CC140; }
    goto L_088CC090;
L_088CC090:;
    cnd_ = s1 == 0;
    v0 = D_08B306F0 - (1776);
    if (cnd_) { goto L_088CC15C; }
    goto L_088CC098;
L_088CC098:;
    f3 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(a1+60));
    f1 = BITSF(LD32(s0));
    f5 = (float)(s32)FBITS(f3);
    f2 = BITSF(LD32(s0+8));
    v0 = D_08B306EC - (1772);
    f3 = BITSF(LD32(v0+1772));
    f0 = f0 * f5;
    f4 = BITSF(LD32(s0+4));
    f7 = (float)(s32)FBITS(f3);
    f6 = BITSF(LD32(s0+12));
    f1 = f1 * f0;
    ST32(s0, FBITS(f1));
    f0 = BITSF(LD32(a0+8));
    f0 = f0 * f5;
    f1 = f1 + f0;
    ST32(s0, FBITS(f1));
    f0 = BITSF(LD32(a1+60));
    f0 = f0 * f5;
    f2 = f2 * f0;
    ST32(s0+8, FBITS(f2));
    f0 = BITSF(LD32(a0+8));
    f0 = f0 * f5;
    f2 = f2 + f0;
    ST32(s0+8, FBITS(f2));
    f0 = BITSF(LD32(a0+4));
    f0 = f0 * f7;
    f4 = f4 * f0;
    ST32(s0+4, FBITS(f4));
    f0 = BITSF(LD32(a0+12));
    f0 = f0 * f7;
    f4 = f4 + f0;
    ST32(s0+4, FBITS(f4));
    f0 = BITSF(LD32(a0+4));
    f0 = f0 * f7;
    f6 = f6 * f0;
    ST32(s0+12, FBITS(f6));
    f0 = BITSF(LD32(a0+12));
    f0 = f0 * f7;
    f6 = f6 + f0;
    ST32(s0+12, FBITS(f6));
    goto L_088CC13C;
L_088CC13C:;
    goto L_088CC140;
L_088CC140:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_088CC15C:;
    f2 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(a1+60));
    f1 = BITSF(LD32(s2));
    f3 = (float)(s32)FBITS(f2);
    v0 = D_08B306EC - (1772);
    f2 = BITSF(LD32(v0+1772));
    f0 = f0 * f3;
    f4 = (float)(s32)FBITS(f2);
    f1 = f1 * f0;
    ST32(s2, FBITS(f1));
    f0 = BITSF(LD32(a0+8));
    f0 = f0 * f3;
    f1 = f1 + f0;
    ST32(s2, FBITS(f1));
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(s4));
    f0 = f0 * f4;
    f1 = f1 * f0;
    ST32(s4, FBITS(f1));
    f0 = BITSF(LD32(a0+12));
    f0 = f0 * f4;
    f1 = f1 + f0;
    ST32(s4, FBITS(f1));
    goto L_088CC13C;
L_088CC1BC:;
    a0 = sp + 0;
    func_089013C4(a0);
    goto L_088CC1C4;
L_088CC1C4:;
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(s0+4, v1);
    ST32(s0, v0);
    ST32(s0+8, a0);
    ST32(s0+12, a1);
    goto L_088CBFF0;
}

/* 088CC1E8 */
rv_t func_088CC1E8(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CC1E8:;
    sp = sp - 16;
    v0 = D_08B2BFE4 - (-16412);
    v1 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088CC21C; }
    goto L_088CC214;
L_088CC214:;
    f0 = BITSF(LD32(v1+112));
    f13 = f13 * f0;
    goto L_088CC21C;
L_088CC21C:;
    { rv_t r_ = func_088CC230(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CC224;
L_088CC224:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CC230 */
rv_t func_088CC230(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088CC230:;
    sp = sp - 96;
    s7 = a0 + 0;
    s6 = 0 + 0;
    s5 = 0 + 0;
    s4 = 3;
    s2 = s7 + 0;
    s0 = 0 + 0;
    f24 = BITSF(0);
    f23 = f12;
    f22 = f13;
    f21 = f24;
    f20 = f24;
    ST32(sp, a1);
    ST32(sp+4, a2);
    ST32(sp+8, a3);
    v0 = func_088342C0();
    goto L_088CC2B0;
L_088CC2B0:;
    v0 = v0 ^ 0x7;
    a0 = 45;
    f12 = f22;
    s3 = v0 < 0x1u;
    f0 = func_088CB5D0(a0, f12);
    goto L_088CC2C4;
L_088CC2C4:;
    s1 = LD_U16(s7);
    cnd_ = s1 == 0;
    f25 = f0;
    if (cnd_) { goto L_088CC4C0; }
    goto L_088CC2D0;
L_088CC2D0:;
    fp = 32;
    goto L_088CC2D4;
L_088CC2D4:;
    v0 = 10;
    cnd_ = s1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088CC67C; }
    goto L_088CC2E0;
L_088CC2E0:;
    f12 = f22;
    f0 = func_088CB5D0(a0, f12);
    goto L_088CC2E8;
L_088CC2E8:;
    f1 = f21 + f20;
    f2 = f1 + f0;
    fcc = FCMP(f23, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088CC650; }
    goto L_088CC300;
L_088CC300:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_088CC5C8; }
    goto L_088CC308;
L_088CC308:;
    a1 = LD_U16(s2+2);
    v1 = a1 ^ 0x3002;
    v0 = a1 ^ 0x21;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    a0 = s2 + 2;
    if (cnd_) { goto L_088CC490; }
    goto L_088CC328;
L_088CC328:;
    v1 = a1 ^ 0x3f;
    v0 = a1 ^ 0x30fc;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_088CC494; }
    goto L_088CC344;
L_088CC344:;
    v1 = a1 ^ 0x300d;
    v0 = a1 ^ 0x300f;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_088CC494; }
    goto L_088CC360;
L_088CC360:;
    v1 = a1 ^ 0x29;
    v0 = s1 ^ 0x300c;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_088CC494; }
    goto L_088CC37C;
L_088CC37C:;
    v1 = s1 ^ 0x300e;
    v0 = s1 ^ 0x28;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_088CC494; }
    goto L_088CC398;
L_088CC398:;
    v1 = s1 - 65;
    v0 = s1 - 97;
    v1 = v1 < 0x1au;
    v0 = v0 < 0x1au;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = a1 - 65; goto L_088CC404; }
    goto L_088CC3B4;
L_088CC3B4:;
    v0 = s1 - 48;
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    v1 = a1 - 65;
    if (cnd_) { goto L_088CC404; }
    goto L_088CC3C4;
L_088CC3C4:;
    v0 = s1 + 223;
    v0 = v0 & 0xffff;
    v0 = v0 < 0x1au;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088CC404; }
    goto L_088CC3D8;
L_088CC3D8:;
    v0 = s1 + 191;
    v0 = v0 & 0xffff;
    v0 = v0 < 0x1au;
    cnd_ = v0 != 0;
    v0 = a1 - 97;
    if (cnd_) { goto L_088CC408; }
    goto L_088CC3EC;
L_088CC3EC:;
    v0 = s1 + 240;
    v0 = v0 & 0xffff;
    v0 = v0 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = f21 + f0; goto L_088CC46C; }
    goto L_088CC400;
L_088CC400:;
    v1 = a1 - 65;
    goto L_088CC404;
L_088CC404:;
    v0 = a1 - 97;
    goto L_088CC408;
L_088CC408:;
    v1 = v1 < 0x1au;
    v0 = v0 < 0x1au;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = s2 + 2; goto L_088CC490; }
    goto L_088CC41C;
L_088CC41C:;
    v0 = a1 - 48;
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s2 + 2; goto L_088CC490; }
    goto L_088CC42C;
L_088CC42C:;
    v0 = a1 + 223;
    v0 = v0 & 0xffff;
    v0 = v0 < 0x1au;
    cnd_ = v0 != 0;
    a0 = s2 + 2;
    if (cnd_) { goto L_088CC490; }
    goto L_088CC440;
L_088CC440:;
    v0 = a1 + 191;
    v0 = v0 & 0xffff;
    v0 = v0 < 0x1au;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088CC490; }
    goto L_088CC454;
L_088CC454:;
    v0 = a1 + 240;
    v0 = v0 & 0xffff;
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_088CC494; }
    goto L_088CC468;
L_088CC468:;
    f0 = f21 + f0;
    goto L_088CC46C;
L_088CC46C:;
    fcc = FCMP(f0, f23, 14);
    cnd_ = !fcc;
    a0 = s2 + 2;
    if (cnd_) { goto L_088CC490; }
    goto L_088CC47C;
L_088CC47C:;
    s5 = s5 + s0;
    s6 = a0 + 0;
    f24 = f21;
    s4 = 3;
    s0 = 0 + 0;
    goto L_088CC490;
L_088CC490:;
    a1 = LD_U16(a0);
    goto L_088CC494;
L_088CC494:;
    v1 = s1 ^ fp;
    v0 = 1;
    s2 = a0 + 0;
    f12 = f22;
    a0 = s1 + 0;
    if (v1 != 0) s0 = v0;
    s1 = a1 + 0;
    f21 = f2;
    f0 = func_088CD41C(a0, a1, f12);
    goto L_088CC4B8;
L_088CC4B8:;
    cnd_ = s1 != 0;
    f20 = f0;
    if (cnd_) { goto L_088CC2D4; }
    goto L_088CC4C0;
L_088CC4C0:;
    cnd_ = s1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088CC4E8; }
    goto L_088CC4C8;
L_088CC4C8:;
    v1 = LD_U16(s6);
    v0 = 32;
    s2 = s6 + 0;
    cnd_ = v1 == v0;
    f21 = f24;
    if (cnd_) { goto L_088CC5AC; }
    goto L_088CC4DC;
L_088CC4DC:;
    v0 = 3;
    goto L_088CC4E0;
L_088CC4E0:;
    cnd_ = s4 == v0;
    if (cnd_) { goto L_088CC584; }
    goto L_088CC4E8;
L_088CC4E8:;
    v0 = s4 ^ 0x1;
    goto L_088CC4EC;
L_088CC4EC:;
    v0 = 0 < v0;
    v1 = s1 < 0x1u;
    v1 = v1 | v0;
    v0 = LD32(sp);
    a0 = s5 + s0;
    cnd_ = v0 == 0;
    if (v1 != 0) s5 = a0;
    if (cnd_) { goto L_088CC50C; }
    goto L_088CC508;
L_088CC508:;
    ST32(v0, FBITS(f21));
    goto L_088CC50C;
L_088CC50C:;
    v1 = LD32(sp+4);
    cnd_ = v1 != 0;
    if (cnd_) { ST32(v1, s5); goto L_088CC518; }
    goto L_088CC518;
L_088CC518:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_088CC53C; }
    goto L_088CC524;
L_088CC524:;
    cnd_ = s3 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CC530; }
    goto L_088CC52C;
L_088CC52C:;
    v0 = a1 + 0;
    goto L_088CC530;
L_088CC530:;
    v1 = LD32(sp+8);
    ST8(v1, v0);
    v0 = s2 + 0;
    goto L_088CC53C;
L_088CC53C:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088CC584:;
    cnd_ = s3 != 0;
    v0 = s4 ^ 0x1;
    if (cnd_) { goto L_088CC4EC; }
    goto L_088CC58C;
L_088CC58C:;
    a0 = LD_U16(s2-2);
    a1 = 45;
    f12 = f22;
    f0 = func_088CD41C(a0, a1, f12);
    goto L_088CC59C;
L_088CC59C:;
    f21 = f24 + f0;
    a1 = 1;
    f21 = f21 + f25;
    goto L_088CC4E8;
L_088CC5AC:;
    v1 = 32;
    s2 = s2 + 2;
    goto L_088CC5B4;
L_088CC5B4:;
    v0 = LD_U16(s2);
    cnd_ = v0 == v1;
    if (cnd_) { s2 = s2 + 2; goto L_088CC5B4; }
    goto L_088CC5C0;
L_088CC5C0:;
    v0 = 3;
    goto L_088CC4E0;
L_088CC5C8:;
    cnd_ = s1 == fp;
    v0 = 45;
    if (cnd_) { goto L_088CC634; }
    goto L_088CC5D0;
L_088CC5D0:;
    cnd_ = s1 == v0;
    a0 = s2 + 2;
    if (cnd_) { goto L_088CC624; }
    goto L_088CC5D8;
L_088CC5D8:;
    f0 = BITSF(0);
    fcc = FCMP(f21, f0, 2);
    cnd_ = !fcc;
    v1 = 1;
    if (cnd_) { goto L_088CC5F0; }
    goto L_088CC5EC;
L_088CC5EC:;
    v1 = 0 + 0;
    goto L_088CC5F0;
L_088CC5F0:;
    v0 = s4 ^ 0x3;
    v0 = v0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_088CC494; }
    goto L_088CC604;
L_088CC604:;
    f0 = f1 + f25;
    fcc = FCMP(f0, f23, 14);
    cnd_ = !fcc;
    if (cnd_) { a1 = LD_U16(a0); goto L_088CC494; }
    goto L_088CC618;
L_088CC618:;
    s6 = s2 + 0;
    f24 = f21;
    goto L_088CC490;
L_088CC624:;
    s6 = a0 + 0;
    f24 = f2;
    s4 = 2;
    goto L_088CC5D8;
L_088CC634:;
    s6 = s2 + 2;
    s5 = s5 + s0;
    a0 = s6 + 0;
    f24 = f21;
    s4 = 1;
    s0 = 0 + 0;
    goto L_088CC5D8;
L_088CC650:;
    cnd_ = s6 != 0;
    f12 = f22;
    if (cnd_) { goto L_088CC4C0; }
    goto L_088CC658;
L_088CC658:;
    s0 = LD_U16(s7);
    s6 = s7 + 2;
    a0 = s0 + 0;
    f0 = func_088CB5D0(a0, f12);
    goto L_088CC668;
L_088CC668:;
    s0 = s0 ^ 0x20;
    f24 = f0;
    s0 = 0 < s0;
    s4 = 4;
    goto L_088CC4C0;
L_088CC67C:;
    s6 = s2 + 2;
    f24 = f21;
    s4 = 0 + 0;
    goto L_088CC4C0;
}

/* 088CC68C */
float func_088CC68C(u32 a0, u32 a1, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088CC68C:;
    sp = sp - 64;
    a1 = a1 & 0x80;
    f24 = f12;
    f23 = f15;
    f22 = f13;
    f21 = f14;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088CC718; }
    goto L_088CC6C4;
L_088CC6C4:;
    v0 = LD_U16(a0);
    cnd_ = v0 == 0;
    f0 = f12;
    if (cnd_) { goto L_088CC6EC; }
    goto L_088CC6D0;
L_088CC6D0:;
    v1 = v0 + 0;
    a1 = 10;
    goto L_088CC6D8;
L_088CC6D8:;
    cnd_ = v1 == a1;
    a0 = a0 + 2;
    if (cnd_) { goto L_088CC710; }
    goto L_088CC6E0;
L_088CC6E0:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088CC6D8; }
    goto L_088CC6EC;
L_088CC6EC:;
    sp = sp + 64;
    return f0;
L_088CC710:;
    f0 = f0 + f23;
    goto L_088CC6E0;
L_088CC718:;
    v0 = LD_U16(a0);
    f20 = BITSF(0);
    cnd_ = v0 == 0;
    f25 = f20;
    if (cnd_) { goto L_088CC760; }
    goto L_088CC728;
L_088CC728:;
    f12 = f22;
    f13 = f21;
    a1 = sp + 4;
    a2 = sp + 8;
    a3 = sp + 0;
    { rv_t r_ = func_088CC230(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CC740;
L_088CC740:;
    fcc = FCMP(f20, f25, 2);
    a0 = v0 + 0;
    cnd_ = !fcc;
    f0 = f20 + f23;
    if (cnd_) { goto L_088CC754; }
    goto L_088CC750;
L_088CC750:;
    f0 = f20 + f24;
    goto L_088CC754;
L_088CC754:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    f20 = f0;
    if (cnd_) { goto L_088CC728; }
    goto L_088CC760;
L_088CC760:;
    f0 = f20;
    goto L_088CC6EC;
}

/* 088CC768 */
float func_088CC768(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088CC768:;
    sp = sp - 48;
    a1 = a1 & 0x80;
    v1 = a0 + 0;
    f22 = f13;
    f21 = f12;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088CC798; }
    goto L_088CC790;
L_088CC790:;
    v0 = D_08AD82E4 - (-32028);
    f21 = BITSF(LD32(v0-32028));
    goto L_088CC798;
L_088CC798:;
    v0 = LD_U16(v1);
    f20 = BITSF(0);
    cnd_ = v0 != 0;
    f0 = f20;
    if (cnd_) { goto L_088CC7C0; }
    goto L_088CC7A8;
L_088CC7A8:;
    sp = sp + 48;
    return f0;
L_088CC7C0:;
    f12 = f21;
    f13 = f22;
    a1 = sp + 4;
    a2 = sp + 8;
    a3 = sp + 0;
    { rv_t r_ = func_088CC230(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CC7D8;
L_088CC7D8:;
    f1 = BITSF(LD32(sp+4));
    a0 = v0 + 0;
    fcc = FCMP(f1, f20, 14);
    cnd_ = fcc;
    f0 = f20;
    if (cnd_) { goto L_088CC7F4; }
    goto L_088CC7F0;
L_088CC7F0:;
    f0 = f1;
    goto L_088CC7F4;
L_088CC7F4:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    f20 = f0;
    if (cnd_) { goto L_088CC7C0; }
    goto L_088CC800;
L_088CC800:;
    f0 = f20;
    goto L_088CC7A8;
}

/* 088CC808 */
rv_t func_088CC808(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_088CC808:;
    sp = sp - 176;
    v0 = D_08B2BFE8 - (-16408);
    v1 = D_08B2C018 - (-16360);
    fp = 0 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a3 + 0;
    s0 = a1 + 0;
    f22 = f14;
    f21 = f15;
    t0 = LD_U8(v0-16408);
    v0 = D_08B2C010 - (-16368);
    ST32(v0-16368, a2);
    v0 = D_08B2C014 - (-16364);
    ST32(sp+20, FBITS(f12));
    ST32(sp+24, FBITS(f13));
    ST32(v0-16364, a2);
    cnd_ = t0 == 0;
    ST32(v1-16360, a3);
    if (cnd_) { goto L_088CC960; }
    goto L_088CC8AC;
L_088CC8AC:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CC964; }
    goto L_088CC8B4;
L_088CC8B4:;
    f0 = func_088CBF14(a0);
    goto L_088CC8BC;
L_088CC8BC:;
    v0 = D_08B2BFE4 - (-16412);
    v1 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    s6 = LD32(v1);
    f21 = f21 * f0;
    v0 = D_08B160C4 - (24772);
    f0 = BITSF(LD32(s6+112));
    v1 = LD_U8(v0+24772);
    f29 = f21;
    cnd_ = v1 != 0;
    f21 = f21 * f0;
    if (cnd_) { goto L_088CCF40; }
    goto L_088CC8F4;
L_088CC8F4:;
    v0 = D_08AEC93C - (-14020);
    f20 = BITSF(LD32(v0-14020));
    goto L_088CC8FC;
L_088CC8FC:;
    a0 = s6 + 0;
    f0 = func_088CD94C(a0);
    goto L_088CC904;
L_088CC904:;
    f0 = f0 * f21;
    a3 = s0 + 0;
    a0 = sp + 0;
    a1 = sp + 20;
    a2 = sp + 24;
    t0 = s1 + 0;
    f25 = f0 * f20;
    { u64 r_ = func_088CBF9C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CC924;
L_088CC924:;
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    f20 = BITSF(0);
    f28 = f25 * f22;
    f24 = f1 - f0;
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f24, f20, 14);
    cnd_ = fcc;
    f23 = f1 - f0;
    if (cnd_) { goto L_088CC960; }
    goto L_088CC950;
L_088CC950:;
    fcc = FCMP(f23, f20, 14);
    cnd_ = !fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_088CC9C4; }
    goto L_088CC960;
L_088CC960:;
    v0 = 0 + 0;
    goto L_088CC964;
L_088CC964:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_088CC9C4:;
    a1 = s1 + 0;
    f12 = f25;
    f13 = f24;
    f14 = f21;
    f15 = f28;
    f0 = func_088CC68C(a0, a1, f12, f13, f14, f15);
    goto L_088CC9DC;
L_088CC9DC:;
    v0 = s1 & 0x100;
    f1 = BITSF(LD32(sp+24));
    ST32(sp+40, v0);
    f2 = f0;
    v0 = D_08B2C000 - (-16384);
    f0 = BITSF(LD32(sp+20));
    ST32(v0-16384, FBITS(f1));
    v1 = D_08B2C008 - (-16376);
    f27 = f0;
    v0 = LD32(sp+40);
    ST32(v1-16376, FBITS(f0));
    v1 = s1 & 0x80;
    f22 = f1;
    cnd_ = v0 == 0;
    ST32(sp+68, v1);
    if (cnd_) { goto L_088CCA30; }
    goto L_088CCA18;
L_088CCA18:;
    cnd_ = v1 != 0;
    if (cnd_) { f27 = f20; goto L_088CCA20; }
    goto L_088CCA20;
L_088CCA20:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f27 = f27 + f0;
    f22 = f22 + f1;
    goto L_088CCA30;
L_088CCA30:;
    v0 = s1 & 0x40;
    cnd_ = v0 == 0;
    v1 = s1 & 0x20;
    if (cnd_) { goto L_088CCA5C; }
    goto L_088CCA3C;
L_088CCA3C:;
    v0 = LD32(sp+40);
    cnd_ = v0 == 0;
    v0 = D_08AEC940 - (-14016);
    if (cnd_) { goto L_088CCF30; }
    goto L_088CCA48;
L_088CCA48:;
    f0 = f23 - f2;
    f1 = BITSF(LD32(v0-14016));
    f0 = f0 * f1;
    f22 = f22 + f0;
    goto L_088CCA58;
L_088CCA58:;
    v1 = s1 & 0x20;
    goto L_088CCA5C;
L_088CCA5C:;
    cnd_ = v1 == 0;
    ST32(sp+44, v1);
    if (cnd_) { goto L_088CCA80; }
    goto L_088CCA64;
L_088CCA64:;
    v0 = LD32(sp+40);
    cnd_ = v0 == 0;
    if (cnd_) { f22 = f22 - f2; goto L_088CCA78; }
    goto L_088CCA70;
L_088CCA70:;
    f0 = f23 - f2;
    f22 = f22 + f0;
    goto L_088CCA78;
L_088CCA78:;
    v1 = D_08B2C000 - (-16384);
    ST32(v1-16384, FBITS(f22));
    goto L_088CCA80;
L_088CCA80:;
    v0 = D_08AEC940 - (-14016);
    v1 = s1 & 0x8;
    f30 = BITSF(LD32(v0-14016));
    v0 = s1 & 0x4;
    ST32(sp+60, v0);
    v0 = s1 & 0x800;
    s0 = s2 + 0;
    ST32(sp+64, v1);
    v1 = s1 & 0x400;
    ST32(sp+56, v0);
    ST32(sp+52, v1);
    goto L_088CCAAC;
L_088CCAAC:;
    v0 = LD32(sp+68);
    cnd_ = v0 != 0;
    f12 = f24;
    if (cnd_) { goto L_088CCAC0; }
    goto L_088CCAB8;
L_088CCAB8:;
    v0 = D_08AD82E4 - (-32028);
    f12 = BITSF(LD32(v0-32028));
    goto L_088CCAC0;
L_088CCAC0:;
    a0 = s0 + 0;
    f13 = f21;
    a1 = sp + 28;
    a2 = sp + 32;
    a3 = sp + 16;
    { rv_t r_ = func_088CC230(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CCAD8;
L_088CCAD8:;
    s4 = v0 + 0;
    v1 = LD32(sp+60);
    v0 = LD_U16(v0);
    f20 = f27;
    f1 = f22 + f25;
    cnd_ = v1 == 0;
    s7 = v0 < 0x1u;
    if (cnd_) { goto L_088CCB0C; }
    goto L_088CCAF4;
L_088CCAF4:;
    v0 = LD32(sp+40);
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+28));
    if (cnd_) { goto L_088CCF24; }
    goto L_088CCB00;
L_088CCB00:;
    f0 = f24 - f0;
    f0 = f0 * f30;
    f20 = f27 + f0;
    goto L_088CCB0C;
L_088CCB0C:;
    v1 = LD32(sp+64);
    cnd_ = v1 == 0;
    v1 = LD32(sp+56);
    if (cnd_) { goto L_088CCB30; }
    goto L_088CCB18;
L_088CCB18:;
    v0 = LD32(sp+40);
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+28));
    if (cnd_) { goto L_088CCF1C; }
    goto L_088CCB24;
L_088CCB24:;
    f0 = f24 - f0;
    f20 = f20 + f0;
    goto L_088CCB2C;
L_088CCB2C:;
    v1 = LD32(sp+56);
    goto L_088CCB30;
L_088CCB30:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_088CCF10; }
    goto L_088CCB38;
L_088CCB38:;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088CCF10; }
    goto L_088CCB44;
L_088CCB44:;
    cnd_ = s7 != 0;
    v0 = 10;
    if (cnd_) { goto L_088CCF10; }
    goto L_088CCB4C;
L_088CCB4C:;
    v1 = LD_U16(s4-2);
    cnd_ = v1 == v0;
    f0 = BITSF(LD32(sp+28));
    if (cnd_) { goto L_088CCF10; }
    goto L_088CCB58;
L_088CCB58:;
    f23 = f24 - f0;
    goto L_088CCB5C;
L_088CCB5C:;
    f0 = BITSF(LD32(sp+12));
    fcc = FCMP(f22, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = s4 + 0; goto L_088CCC14; }
    goto L_088CCB70;
L_088CCB70:;
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { s0 = s4 + 0; goto L_088CCC14; }
    goto L_088CCB84;
L_088CCB84:;
    v0 = s0 < s4;
    ST32(sp+36, 0);
    f26 = BITSF(0);
    cnd_ = v0 == 0;
    ST32(sp+48, 0);
    if (cnd_) { goto L_088CCBE0; }
    goto L_088CCB98;
L_088CCB98:;
    f0 = BITSF(LD32(sp+8));
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    v0 = D_08AEC93C - (-14020);
    if (cnd_) { goto L_088CCBE0; }
    goto L_088CCBAC;
L_088CCBAC:;
    f31 = BITSF(LD32(v0-14020));
    s2 = LD_U16(s0);
    goto L_088CCBB4;
L_088CCBB4:;
    v0 = 10;
    cnd_ = s2 != v0;
    a0 = s6 + 0;
    if (cnd_) { goto L_088CCDE4; }
    goto L_088CCBC0;
L_088CCBC0:;
    s0 = s0 + 2;
    v0 = s0 < s4;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_088CCBE0; }
    goto L_088CCBD0;
L_088CCBD0:;
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    if (cnd_) { s2 = LD_U16(s0); goto L_088CCBB4; }
    goto L_088CCBE0;
L_088CCBE0:;
    v0 = LD_U8(sp+16);
    cnd_ = v0 != 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_088CCD44; }
    goto L_088CCBEC;
L_088CCBEC:;
    v0 = D_08B2C008 - (-16376);
    f0 = BITSF(LD32(v0-16376));
    v0 = D_08B2C004 - (-16380);
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(v0-16380, FBITS(f20));
    if (cnd_) { goto L_088CCC10; }
    goto L_088CCC08;
L_088CCC08:;
    v1 = D_08B2C008 - (-16376);
    ST32(v1-16376, FBITS(f20));
    goto L_088CCC10;
L_088CCC10:;
    s0 = s4 + 0;
    goto L_088CCC14;
L_088CCC14:;
    cnd_ = s7 == 0;
    f22 = f22 + f28;
    if (cnd_) { goto L_088CCAAC; }
    goto L_088CCC1C;
L_088CCC1C:;
    v0 = LD32(sp+44);
    cnd_ = v0 != 0;
    v0 = D_08B159FC - (23036);
    if (cnd_) { goto L_088CCC30; }
    goto L_088CCC28;
L_088CCC28:;
    v1 = D_08B2C000 - (-16384);
    ST32(v1-16384, FBITS(f22));
    goto L_088CCC30;
L_088CCC30:;
    a1 = LD32(v0+23036);
    v1 = (s1 >> 4) & 0x1;
    a0 = a1 + 60;
    v0 = 0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = s1 & 0x1;
    if (cnd_) { goto L_088CCCD8; }
    goto L_088CCC4C;
L_088CCC4C:;
    v1 = D_08B306F0 - (1776);
    f0 = BITSF(LD32(v1+1776));
    v0 = D_08B306EC - (1772);
    f1 = BITSF(LD32(v0+1772));
    f8 = (float)(s32)FBITS(f0);
    f2 = BITSF(LD32(a1+60));
    f7 = (float)(s32)FBITS(f1);
    f6 = BITSF(LD32(a0+12));
    v0 = D_08AEC93C - (-14020);
    f2 = f2 * f8;
    f5 = BITSF(LD32(v0-14020));
    f6 = f6 * f7;
    v0 = D_08B2C000 - (-16384);
    f4 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v0-16384));
    f5 = f5 / f2;
    f1 = BITSF(LD32(a0+8));
    v0 = D_08B2C004 - (-16380);
    v1 = D_08B2C008 - (-16376);
    f3 = BITSF(LD32(v0-16380));
    f2 = BITSF(LD32(v1-16376));
    v1 = D_08B2C000 - (-16384);
    f0 = f0 - f6;
    f4 = f4 * f7;
    f1 = f1 * f8;
    f0 = f0 / f4;
    f2 = f2 - f1;
    f3 = f3 - f1;
    ST32(v1-16384, FBITS(f0));
    f2 = f2 * f5;
    f5 = f3 * f5;
    ST32(v0-16380, FBITS(f5));
    v0 = D_08B2C008 - (-16376);
    ST32(v0-16376, FBITS(f2));
    v0 = s1 & 0x1;
    goto L_088CCCD8;
L_088CCCD8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = fp + 0; goto L_088CC964; }
    goto L_088CCCE0;
L_088CCCE0:;
    v0 = D_08B306F0 - (1776);
    f0 = BITSF(LD32(v0+1776));
    v1 = D_08AEC93C - (-14020);
    v0 = D_08B306EC - (1772);
    f1 = (float)(s32)FBITS(f0);
    f2 = BITSF(LD32(v1-14020));
    f0 = BITSF(LD32(v0+1772));
    v1 = D_08B2C000 - (-16384);
    f2 = f2 / f1;
    f3 = BITSF(LD32(v1-16384));
    v0 = D_08B2C004 - (-16380);
    v1 = D_08B2C008 - (-16376);
    f1 = BITSF(LD32(v1-16376));
    v1 = D_08B2C000 - (-16384);
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-16380));
    f1 = f1 * f2;
    f3 = f3 / f4;
    f0 = f0 * f2;
    ST32(v1-16384, FBITS(f3));
    ST32(v0-16380, FBITS(f0));
    v0 = D_08B2C008 - (-16376);
    ST32(v0-16376, FBITS(f1));
    v0 = fp + 0;
    goto L_088CC964;
L_088CCD44:;
    a1 = 45;
    a2 = s1 + 0;
    a3 = sp + 36;
    v0 = func_088CD768(a0, a1, a2, a3);
    goto L_088CCD54;
L_088CCD54:;
    a0 = LD_U16(s0-2);
    a1 = 45;
    f12 = f21;
    s5 = v0 + 0;
    f0 = func_088CD41C(a0, a1, f12);
    goto L_088CCD68;
L_088CCD68:;
    f20 = f20 + f0;
    v0 = LD32(sp+52);
    cnd_ = v0 != 0;
    f23 = f20;
    if (cnd_) { goto L_088CCDAC; }
    goto L_088CCD78;
L_088CCD78:;
    v1 = D_08B2C00C - (-16372);
    v0 = LD_U8(v1-16372);
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(sp+36); goto L_088CCDC0; }
    goto L_088CCD88;
L_088CCD88:;
    f12 = f20;
    a0 = sp + 0;
    f13 = f22;
    f14 = f29;
    a1 = s3 + 0;
    a2 = 45;
    v0 = func_08A63A44(a1, a2, f12, f13, f14);
    goto L_088CCDA4;
L_088CCDA4:;
    v0 = fp | v0;
    goto L_088CCDA8;
L_088CCDA8:;
    fp = 0 < v0;
    goto L_088CCDAC;
L_088CCDAC:;
    a0 = 45;
    f12 = f21;
    f0 = func_088CB5D0(a0, f12);
    goto L_088CCDB8;
L_088CCDB8:;
    f20 = f23 + f0;
    goto L_088CCBEC;
L_088CCDC0:;
    f12 = f20;
    a2 = s5 + 0;
    a0 = sp + 0;
    f13 = f22;
    f14 = f21;
    a1 = s3 + 0;
    v0 = func_088CB770(a0, a2, a3, f12, f13, f14);
    goto L_088CCDDC;
L_088CCDDC:;
    v0 = fp | v0;
    goto L_088CCDA8;
L_088CCDE4:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    a3 = sp + 36;
    v0 = func_088CD768(a0, a1, a2, a3);
    goto L_088CCDF4;
L_088CCDF4:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_088CCBC0; }
    goto L_088CCDFC;
L_088CCDFC:;
    v0 = s2 ^ 0x20;
    a0 = v0 < 0x1u;
    cnd_ = a0 == 0;
    f20 = f20 + f26;
    if (cnd_) { goto L_088CCE84; }
    goto L_088CCE0C;
L_088CCE0C:;
    v1 = LD32(sp+48);
    cnd_ = v1 != 0;
    v1 = LD32(sp+52);
    if (cnd_) { goto L_088CCE88; }
    goto L_088CCE18;
L_088CCE18:;
    f2 = BITSF(0);
    fcc = FCMP(f23, f2, 2);
    cnd_ = fcc;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_088CCE88; }
    goto L_088CCE2C;
L_088CCE2C:;
    f0 = BITSF(F2I(f23, 1));
    v0 = v0 - 1;
    v1 = (s32)v0 < 2;
    ST32(sp+32, v0);
    cnd_ = v1 != 0;
    f0 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088CCE7C; }
    goto L_088CCE44;
L_088CCE44:;
    f1 = BITSF(v0);
    v0 = D_08AEC940 - (-14016);
    v0 = v0 - 14016;
    f0 = (float)(s32)FBITS(f1);
    f0 = f31 / f0;
    f1 = f23 * f0;
    fcc = FCMP(f2, f1, 12);
    f2 = BITSF(LD32(v0));
    f0 = f1 + f2;
    cnd_ = fcc;
    f0 = BITSF(F2I(f0, 1));
    if (cnd_) { goto L_088CCE78; }
    goto L_088CCE70;
L_088CCE70:;
    f0 = f1 - f2;
    f0 = BITSF(F2I(f0, 1));
    goto L_088CCE78;
L_088CCE78:;
    f0 = (float)(s32)FBITS(f0);
    goto L_088CCE7C;
L_088CCE7C:;
    f23 = f23 - f0;
    f20 = f20 + f0;
    goto L_088CCE84;
L_088CCE84:;
    v1 = LD32(sp+52);
    goto L_088CCE88;
L_088CCE88:;
    cnd_ = v1 != 0;
    ST32(sp+48, a0);
    if (cnd_) { goto L_088CCEC4; }
    goto L_088CCE90;
L_088CCE90:;
    v1 = D_08B2C00C - (-16372);
    v0 = LD_U8(v1-16372);
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(sp+36); goto L_088CCEEC; }
    goto L_088CCEA0;
L_088CCEA0:;
    a0 = sp + 0;
    f12 = f20;
    f13 = f22;
    f14 = f29;
    a1 = s3 + 0;
    a2 = s2 + 0;
    v0 = func_08A63A44(a1, a2, f12, f13, f14);
    goto L_088CCEBC;
L_088CCEBC:;
    v0 = fp | v0;
    goto L_088CCEC0;
L_088CCEC0:;
    fp = 0 < v0;
    goto L_088CCEC4;
L_088CCEC4:;
    a0 = s2 + 0;
    f12 = f21;
    f0 = func_088CB5D0(a0, f12);
    goto L_088CCED0;
L_088CCED0:;
    a1 = LD_U16(s0+2);
    a0 = s2 + 0;
    f12 = f21;
    f20 = f20 + f0;
    f0 = func_088CD41C(a0, a1, f12);
    goto L_088CCEE4;
L_088CCEE4:;
    f26 = f0;
    goto L_088CCBC0;
L_088CCEEC:;
    a2 = s5 + 0;
    a0 = sp + 0;
    f12 = f20;
    f13 = f22;
    f14 = f21;
    a1 = s3 + 0;
    v0 = func_088CB770(a0, a2, a3, f12, f13, f14);
    goto L_088CCF08;
L_088CCF08:;
    v0 = fp | v0;
    goto L_088CCEC0;
L_088CCF10:;
    f23 = BITSF(0);
    ST32(sp+32, 0);
    goto L_088CCB5C;
L_088CCF1C:;
    f20 = f20 - f0;
    goto L_088CCB2C;
L_088CCF24:;
    f0 = f0 * f30;
    f20 = f27 - f0;
    goto L_088CCB0C;
L_088CCF30:;
    f0 = BITSF(LD32(v0-14016));
    f0 = f2 * f0;
    f22 = f22 - f0;
    goto L_088CCA58;
L_088CCF40:;
    f0 = func_08901428();
    goto L_088CCF48;
L_088CCF48:;
    f20 = f0;
    goto L_088CC8FC;
}

/* 088CCF50 */
rv_t func_088CCF50(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f14 = 0, f15 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088CCF50:;
    sp = sp - 80;
    v0 = D_08B2BFE8 - (-16408);
    s4 = a0 + 0;
    s3 = a1 + 0;
    s0 = a2 + 0;
    f23 = f12;
    v1 = LD_U8(v0-16408);
    cnd_ = v1 == 0;
    f20 = f13;
    if (cnd_) { goto L_088CD11C; }
    goto L_088CCF9C;
L_088CCF9C:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CD11C; }
    goto L_088CCFA4;
L_088CCFA4:;
    s2 = D_08B2BFE4 - (-16412);
    f0 = func_088CBF14(a0);
    goto L_088CCFAC;
L_088CCFAC:;
    v0 = LD32(s2-16412);
    s1 = D_08B2BFEC - (-16404);
    v1 = s1 - 16404;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    f20 = f20 * f0;
    v0 = D_08B160C4 - (24772);
    f0 = BITSF(LD32(a0+112));
    v1 = LD_U8(v0+24772);
    cnd_ = v1 != 0;
    f20 = f20 * f0;
    if (cnd_) { goto L_088CD10C; }
    goto L_088CCFDC;
L_088CCFDC:;
    v0 = D_08AEC944 - (-14012);
    f22 = BITSF(LD32(v0-14012));
    goto L_088CCFE4;
L_088CCFE4:;
    v0 = LD32(s2-16412);
    v1 = s1 - 16404;
    f21 = BITSF(0);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    f0 = func_088CD94C(a0);
    goto L_088CD000;
L_088CD000:;
    f0 = f0 * f20;
    a3 = s3 + 0;
    a0 = sp + 0;
    a1 = sp + 16;
    a2 = sp + 20;
    t0 = s0 + 0;
    f22 = f0 * f22;
    ST32(sp+16, FBITS(f21));
    ST32(sp+20, FBITS(f21));
    { u64 r_ = func_088CBF9C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD028;
L_088CD028:;
    f15 = f22 * f23;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+12));
    f13 = f1 - f0;
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f13, f21, 14);
    cnd_ = fcc;
    f2 = f2 - f0;
    if (cnd_) { goto L_088CD060; }
    goto L_088CD050;
L_088CD050:;
    fcc = FCMP(f2, f21, 14);
    cnd_ = !fcc;
    a0 = s4 + 0;
    if (cnd_) { goto L_088CD094; }
    goto L_088CD060;
L_088CD060:;
    f0 = f21;
    goto L_088CD064;
L_088CD064:;
    goto L_088CD068;
L_088CD068:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088CD094:;
    f12 = f22;
    f14 = f20;
    a1 = s0 + 0;
    f0 = func_088CC68C(a0, a1, f12, f13, f14, f15);
    goto L_088CD0A4;
L_088CD0A4:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    a0 = (s0 >> 4) & 0x1;
    v1 = v1 + 60;
    v0 = 0 < v1;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    f4 = f0;
    if (cnd_) { goto L_088CD0E8; }
    goto L_088CD0C4;
L_088CD0C4:;
    v0 = D_08B306EC - (1772);
    f3 = BITSF(LD32(v0+1772));
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(v1+4));
    f2 = (float)(s32)FBITS(f3);
    f0 = f0 * f2;
    f1 = f1 * f2;
    f4 = f4 - f0;
    f4 = f4 / f1;
    goto L_088CD0E8;
L_088CD0E8:;
    v0 = s0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = f4; goto L_088CD064; }
    goto L_088CD0F4;
L_088CD0F4:;
    v0 = D_08B306EC - (1772);
    f0 = BITSF(LD32(v0+1772));
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 / f1;
    f0 = f4;
    goto L_088CD064;
L_088CD10C:;
    f0 = func_08901428();
    goto L_088CD114;
L_088CD114:;
    f22 = f0;
    goto L_088CCFE4;
L_088CD11C:;
    f0 = BITSF(0);
    goto L_088CD068;
}

/* 088CD128 */
float func_088CD128(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088CD128:;
    sp = sp - 80;
    v0 = D_08B2BFE8 - (-16408);
    s3 = a0 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD_U8(v0-16408);
    cnd_ = v1 == 0;
    f20 = f12;
    if (cnd_) { goto L_088CD1DC; }
    goto L_088CD160;
L_088CD160:;
    cnd_ = a0 == 0;
    v0 = D_08B2BFE4 - (-16412);
    if (cnd_) { goto L_088CD1DC; }
    goto L_088CD168;
L_088CD168:;
    v1 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    s0 = LD32(v1);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    f0 = func_088CBF14(a0);
    goto L_088CD18C;
L_088CD18C:;
    f20 = f20 * f0;
    f0 = BITSF(LD32(s0+112));
    a3 = s1 + 0;
    a0 = sp + 0;
    a1 = sp + 16;
    a2 = sp + 20;
    t0 = s2 + 0;
    f20 = f20 * f0;
    { u64 r_ = func_088CBF9C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD1B0;
L_088CD1B0:;
    f3 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+8));
    fcc = FCMP(f2, f3, 14);
    cnd_ = fcc;
    f1 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_088CD1DC; }
    goto L_088CD1C8;
L_088CD1C8:;
    f0 = BITSF(LD32(sp+12));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f0 = f2 - f3;
    if (cnd_) { goto L_088CD200; }
    goto L_088CD1DC;
L_088CD1DC:;
    f0 = BITSF(0);
    goto L_088CD1E0;
L_088CD1E0:;
    sp = sp + 80;
    return f0;
L_088CD200:;
    v0 = D_08B159FC - (23036);
    s1 = LD32(v0+23036);
    v1 = D_08B306F0 - (1776);
    v0 = FBITS(f0);
    f1 = BITSF(LD32(v1+1776));
    f13 = f20;
    v0 = (v0 >> 0) & 0x7fffffff;
    f12 = BITSF(v0);
    a0 = s3 + 0;
    s0 = s1 + 60;
    a1 = s2 + 0;
    f20 = (float)(s32)FBITS(f1);
    f0 = func_088CC768(a0, a1, f12, f13);
    goto L_088CD234;
L_088CD234:;
    v1 = (s2 >> 4) & 0x1;
    v0 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    f2 = f0;
    if (cnd_) { goto L_088CD260; }
    goto L_088CD248;
L_088CD248:;
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s1+60));
    f0 = f0 * f20;
    f1 = f1 * f20;
    f2 = f2 - f0;
    f2 = f2 / f1;
    goto L_088CD260;
L_088CD260:;
    v0 = s2 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f2 = f2 / f20; goto L_088CD26C; }
    goto L_088CD26C;
L_088CD26C:;
    f0 = f2;
    goto L_088CD1E0;
}

/* 088CD274 */
void func_088CD274(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    u8 stack_[816] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 816);
L_088CD274:;
    sp = sp - 816;
    v0 = D_08B2BFE8 - (-16408);
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    f23 = f15;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    v1 = LD_U8(v0-16408);
    ST32(sp+800, t0);
    ST32(sp+804, t1);
    ST32(sp+808, t2);
    cnd_ = v1 == 0;
    ST32(sp+812, t3);
    if (cnd_) { goto L_088CD394; }
    goto L_088CD2D0;
L_088CD2D0:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CD34C; }
    goto L_088CD2D8;
L_088CD2D8:;
    v0 = a2 & 0x1000;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = D_08AD82D8 - (-32040); goto L_088CD374; }
    goto L_088CD2E4;
L_088CD2E4:;
    a1 = a3 + 0;
    a2 = sp + 800;
    a0 = sp + 0;
    a3 = 255;
    t0 = 1;
    func_08837508(a0, a1, a2, a3, t0);
    goto L_088CD2FC;
L_088CD2FC:;
    a0 = 0 + 0;
    goto L_088CD300;
L_088CD300:;
    a1 = sp + 256;
    goto L_088CD304;
L_088CD304:;
    v0 = sp + a0;
    v1 = LD_U8(v0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 255;
    v1 = v1 << 24;
    v1 = (u32)((s32)v1 >> 24);
    ST16(a1, v1);
    cnd_ = v0 != 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_088CD304; }
    goto L_088CD328;
L_088CD328:;
    a0 = s1 + 0;
    f12 = f20;
    f13 = f21;
    f14 = f22;
    f15 = f23;
    a1 = s2 + 0;
    a2 = s0 + 0;
    a3 = sp + 256;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CD34C;
L_088CD34C:;
    sp = sp + 816;
    return;
L_088CD374:;
    t0 = a3 + 0;
    a1 = a1 - 32040;
    a0 = sp + 0;
    a2 = 255;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CD38C;
L_088CD38C:;
    a0 = 0 + 0;
    goto L_088CD300;
L_088CD394:;
    v0 = 0 + 0;
    goto L_088CD34C;
}

/* 088CD39C */
float func_088CD39C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CD39C:;
    sp = sp - 32;
    v0 = D_08B2BFE4 - (-16412);
    f0 = BITSF(0);
    v1 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    s0 = LD32(v1);
    cnd_ = s0 == 0;
    v0 = D_08B160C4 - (24772);
    if (cnd_) { goto L_088CD3F8; }
    goto L_088CD3D4;
L_088CD3D4:;
    v1 = LD_U8(v0+24772);
    cnd_ = v1 != 0;
    v0 = D_08AEC948 - (-14008);
    if (cnd_) { goto L_088CD40C; }
    goto L_088CD3E0;
L_088CD3E0:;
    f20 = BITSF(LD32(v0-14008));
    goto L_088CD3E4;
L_088CD3E4:;
    a0 = s0 + 0;
    f0 = func_088CD94C(a0);
    goto L_088CD3EC;
L_088CD3EC:;
    f1 = BITSF(LD32(s0+112));
    f0 = f0 * f1;
    f0 = f0 * f20;
    goto L_088CD3F8;
L_088CD3F8:;
    sp = sp + 32;
    return f0;
L_088CD40C:;
    f0 = func_08901428();
    goto L_088CD414;
L_088CD414:;
    f20 = f0;
    goto L_088CD3E4;
}

/* 088CD41C */
float func_088CD41C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CD41C:;
    sp = sp - 32;
    v0 = D_08B2BFE4 - (-16412);
    s2 = a0 & 0xffff;
    s1 = a1 & 0xffff;
    s0 = 0 + 0;
    f20 = BITSF(0);
    v1 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    f21 = f12;
    if (cnd_) { goto L_088CD470; }
    goto L_088CD46C;
L_088CD46C:;
    s0 = LD32(v1+116);
    goto L_088CD470;
L_088CD470:;
    cnd_ = s0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088CD4D0; }
    goto L_088CD478;
L_088CD478:;
    a1 = s2 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = func_088CD768(a0, a1, a2, a3);
    goto L_088CD488;
L_088CD488:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088CD4D4; }
    goto L_088CD490;
L_088CD490:;
    v1 = LD_U16(v0+14);
    v0 = 0xffff;
    cnd_ = v1 == v0;
    v0 = v1 << 1;
    if (cnd_) { goto L_088CD4D4; }
    goto L_088CD4A0;
L_088CD4A0:;
    s0 = s0 + v0;
    v1 = LD_U16(s0);
    v0 = (u32)-1;
    v1 = v1 - 1;
    cnd_ = v1 == v0;
    s0 = s0 + 2;
    if (cnd_) { goto L_088CD4D4; }
    goto L_088CD4B8;
L_088CD4B8:;
    a0 = (u32)-1;
    goto L_088CD4BC;
L_088CD4BC:;
    v0 = LD_U16(s0);
    cnd_ = v0 == s1;
    v1 = v1 - 1;
    if (cnd_) { goto L_088CD508; }
    goto L_088CD4C8;
L_088CD4C8:;
    cnd_ = v1 != a0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088CD4BC; }
    goto L_088CD4D0;
L_088CD4D0:;
    a0 = s2 + 0;
    goto L_088CD4D4;
L_088CD4D4:;
    a1 = s1 + 0;
    f12 = f21;
    f0 = func_08A63D04();
    goto L_088CD4E0;
L_088CD4E0:;
    f20 = f20 + f0;
    f0 = f20;
    sp = sp + 32;
    return f0;
L_088CD508:;
    s0 = (u32)(s32)LD_S16(s0+2);
    f0 = BITSF(s0);
    f1 = (float)(s32)FBITS(f0);
    f20 = f1 * f21;
    goto L_088CD4D0;
}

/* 088CD51C */
u32 func_088CD51C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088CD51C:;
    v1 = D_08B2BFEC - (-16404);
    a3 = (u32)-1;
    a2 = 0 + 0;
    a1 = v1 - 16404;
    v0 = LD32(a1);
    goto L_088CD530;
L_088CD530:;
    cnd_ = v0 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_088CD580; }
    goto L_088CD538;
L_088CD538:;
    a2 = a2 + 1;
    v0 = (s32)a2 < 5;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_088CD530; }
    goto L_088CD548;
L_088CD548:;
    cnd_ = (s32)a3 < 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088CD578; }
    goto L_088CD550;
L_088CD550:;
    v1 = v1 - 16404;
    v0 = a3 << 2;
    v0 = v0 + v1;
    ST32(v0, a0);
    v1 = D_08B2BFE4 - (-16412);
    a0 = 1;
    v0 = D_08B2BFE8 - (-16408);
    a1 = 1;
    ST8(v0-16408, a0);
    ST32(v1-16412, a3);
    goto L_088CD578;
L_088CD578:;
    v0 = a1 + 0;
    return v0;
L_088CD580:;
    a3 = a2 + 0;
    goto L_088CD548;
}

/* 088CD588 */
u32 func_088CD588(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088CD588:;
    v0 = D_08B2BFE4 - (-16412);
    v1 = LD32(v0-16412);
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = 1;
    ST32(a1+116, a0);
    return v0;
}

/* 088CD5B0 */
void func_088CD5B0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_088CD5B0:;
    v1 = D_08B2BFEC - (-16404);
    v0 = a0 << 2;
    a1 = a0 + 0;
    v1 = v1 - 16404;
    a0 = (u32)-1;
    cnd_ = a1 == a0;
    v0 = v0 + v1;
    if (cnd_) { goto L_088CD5E0; }
    goto L_088CD5CC;
L_088CD5CC:;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    v0 = D_08B2BFE4 - (-16412);
    if (cnd_) { goto L_088CD5E4; }
    goto L_088CD5D8;
L_088CD5D8:;
    ST32(v0-16412, a1);
    return;
L_088CD5E0:;
    v0 = D_08B2BFE4 - (-16412);
    goto L_088CD5E4;
L_088CD5E4:;
    ST32(v0-16412, 0);
    return;
}

/* 088CD5EC */
void func_088CD5EC(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088CD5EC:;
    v0 = D_08B2BFEC - (-16404);
    v0 = v0 - 16404;
    v1 = a0 << 2;
    v1 = v1 + v0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088CD614; }
    goto L_088CD608;
L_088CD608:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { ST32(v1+112, FBITS(f12)); goto L_088CD614; }
    goto L_088CD614;
L_088CD614:;
    return;
}

/* 088CD61C */
u64 func_088CD61C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CD61C:;
    sp = sp - 16;
    { u64 r_ = func_088CD638(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD62C;
L_088CD62C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CD638 */
u64 func_088CD638(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CD638:;
    sp = sp - 16;
    v0 = D_08B2BFEC - (-16404);
    s2 = a0 + 0;
    s1 = v0 - 16404;
    s0 = 0 + 0;
    v0 = LD32(s1);
    goto L_088CD660;
L_088CD660:;
    a0 = s2 + 0;
    s1 = s1 + 4;
    cnd_ = v0 == 0;
    a1 = v0 + 12;
    if (cnd_) { goto L_088CD680; }
    goto L_088CD670;
L_088CD670:;
    { u64 r_ = func_08A89724(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD678;
L_088CD678:;
    cnd_ = v0 == 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_088CD694; }
    goto L_088CD680;
L_088CD680:;
    s0 = s0 + 1;
    v0 = (s32)s0 < 5;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_088CD660; }
    goto L_088CD690;
L_088CD690:;
    v1 = (u32)-1;
    goto L_088CD694;
L_088CD694:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CD6B0 */
u64 func_088CD6B0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088CD6B0:;
    v1 = D_08B160C8 - (24776);
    v0 = LD32(v1+24776);
    ST32(v1+24776, a0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CD6C0 */
void func_088CD6C0(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_088CD6C0:;
    v0 = D_08AEC950 - (-14000);
    f0 = BITSF(LD32(v0-14000));
    ST32(a0+4, 0);
    ST32(a0+112, FBITS(f0));
    ST32(a0+116, 0);
    return;
}

/* 088CD6D8 */
void func_088CD6D8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CD6D8:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = LD32(a0+116);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CD758; }
    goto L_088CD6F8;
L_088CD6F8:;
    a1 = LD32(s1+4);
    goto L_088CD6FC;
L_088CD6FC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088CD748; }
    goto L_088CD704;
L_088CD704:;
    v1 = LD32(a1-4);
    v0 = v1 << 5;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s0 = a1 + v0;
    goto L_088CD718;
L_088CD718:;
    cnd_ = a1 == s0;
    s0 = s0 - 124;
    if (cnd_) { goto L_088CD73C; }
    goto L_088CD720;
L_088CD720:;
    v0 = LD32(s0+104);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088CD718; }
    goto L_088CD72C;
L_088CD72C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD734;
L_088CD734:;
    a1 = LD32(s1+4);
    goto L_088CD718;
L_088CD73C:;
    a0 = a1 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD744;
L_088CD744:;
    goto L_088CD748;
L_088CD748:;
    sp = sp + 16;
    return;
L_088CD758:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD760;
L_088CD760:;
    a1 = LD32(s1+4);
    goto L_088CD6FC;
}

/* 088CD768 */
u32 func_088CD768(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CD768:;
    sp = sp - 32;
    s0 = a1 & 0xffff;
    v1 = 0 + 0;
    s3 = a0 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088CD7B0; }
    goto L_088CD798;
L_088CD798:;
    a1 = a2 + 0;
    a0 = s0 + 0;
    a2 = a3 + 0;
    v0 = func_08A63C28(a0);
    goto L_088CD7A8;
L_088CD7A8:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088CD7D0; }
    goto L_088CD7B0;
L_088CD7B0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_088CD7D0:;
    v0 = s0 < 0x61u;
    v0 = v0 ^ 0x1;
    v1 = (s2 >> 9) & 0x1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+8); goto L_088CD800; }
    goto L_088CD7E8;
L_088CD7E8:;
    v0 = s0 < 0x7bu;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+8); goto L_088CD800; }
    goto L_088CD7F4;
L_088CD7F4:;
    v0 = s0 - 32;
    s0 = v0 & 0xffff;
    v0 = LD32(s3+8);
    goto L_088CD800;
L_088CD800:;
    a2 = LD32(s3+4);
    v1 = v0 << 5;
    v1 = v1 - v0;
    v1 = v1 << 2;
    v1 = a2 + v1;
    v0 = a2 < v1;
    cnd_ = v0 == 0;
    v0 = 13;
    if (cnd_) { goto L_088CD8C0; }
    goto L_088CD820;
L_088CD820:;
    t1 = v1 + 0;
    t2 = s0 << 4;
    v1 = LD_U16(a2+108);
    goto L_088CD82C;
L_088CD82C:;
    v0 = s0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a2 + 124; goto L_088CD8B0; }
    goto L_088CD838;
L_088CD838:;
    a0 = LD_U16(a2+110);
    v0 = a0 < s0;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a2 + 124; goto L_088CD8B0; }
    goto L_088CD848;
L_088CD848:;
    a1 = LD32(a2+120);
    v0 = a0 - v1;
    v0 = v0 + 1;
    cnd_ = v0 == a1;
    if (cnd_) { goto L_088CD930; }
    goto L_088CD85C;
L_088CD85C:;
    cnd_ = v1 == s0;
    if (cnd_) { goto L_088CD930; }
    goto L_088CD864;
L_088CD864:;
    cnd_ = a0 == s0;
    a1 = a1 - 1;
    if (cnd_) { goto L_088CD90C; }
    goto L_088CD86C;
L_088CD86C:;
    t0 = LD32(a2+104);
    a3 = 0 + 0;
    v0 = a1 + a3;
    goto L_088CD878;
L_088CD878:;
    a0 = v0 >> 1;
    v1 = a0 << 4;
    v1 = v1 + t0;
    v0 = LD_U16(v1+12);
    cnd_ = v0 == s0;
    v1 = s0 < v0;
    if (cnd_) { goto L_088CD8F4; }
    goto L_088CD890;
L_088CD890:;
    cnd_ = v1 == 0;
    if (cnd_) { a3 = a0 + 0; goto L_088CD89C; }
    goto L_088CD898;
L_088CD898:;
    a1 = a0 + 0;
    goto L_088CD89C;
L_088CD89C:;
    v0 = a1 - a3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = a1 + a3;
    if (cnd_) { goto L_088CD878; }
    goto L_088CD8AC;
L_088CD8AC:;
    a2 = a2 + 124;
    goto L_088CD8B0;
L_088CD8B0:;
    v0 = a2 < t1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD_U16(a2+108); goto L_088CD82C; }
    goto L_088CD8BC;
L_088CD8BC:;
    v0 = 13;
    goto L_088CD8C0;
L_088CD8C0:;
    cnd_ = s0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088CD7B0; }
    goto L_088CD8C8;
L_088CD8C8:;
    v0 = func_08A63DB0();
    goto L_088CD8D0;
L_088CD8D0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088CD7B0; }
    goto L_088CD8D8;
L_088CD8D8:;
    a0 = s3 + 0;
    a1 = v0 + 0;
    a2 = s2 + 0;
    a3 = s1 + 0;
    v0 = func_088CD768(a0, a1, a2, a3);
    goto L_088CD8EC;
L_088CD8EC:;
    v1 = v0 + 0;
    goto L_088CD7B0;
L_088CD8F4:;
    cnd_ = s1 != 0;
    if (cnd_) { ST32(s1, a2); goto L_088CD8FC; }
    goto L_088CD8FC;
L_088CD8FC:;
    v0 = a0 & 0xffff;
    v0 = v0 << 4;
    v1 = t0 + v0;
    goto L_088CD7B0;
L_088CD90C:;
    cnd_ = s1 != 0;
    if (cnd_) { ST32(s1, a2); goto L_088CD914; }
    goto L_088CD914;
L_088CD914:;
    v0 = LD_U16(a2+120);
    v1 = LD32(a2+104);
    v0 = v0 - 1;
    v0 = v0 & 0xffff;
    v0 = v0 << 4;
    v1 = v1 + v0;
    goto L_088CD7B0;
L_088CD930:;
    cnd_ = s1 != 0;
    if (cnd_) { ST32(s1, a2); goto L_088CD938; }
    goto L_088CD938;
L_088CD938:;
    v0 = LD32(a2+104);
    v1 = v1 << 4;
    v0 = v0 + t2;
    v1 = v0 - v1;
    goto L_088CD7B0;
}

/* 088CD94C */
float func_088CD94C(u32 a0)
{
    float f0 = 0;
L_088CD94C:;
    f0 = BITSF(LD32(a0));
    return f0;
}

/* 088CD954 */
rv_t func_088CD954(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088CD954:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = a0 + 32;
    v1 = 1;
    ST32(v0+8, FBITS(f0));
    ST8(a0+28, v1);
    ST32(a0+32, FBITS(f2));
    ST32(v0+4, FBITS(f1));
    ST32(a0+44, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST8(a0+24, 0);
    ST8(a0+25, 0);
    ST8(a0+26, 0);
    ST8(a0+27, v1);
    ST8(a0+29, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 088CD9B4 */
u64 func_088CD9B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CD9B4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CD9D0;
L_088CD9D0:;
    a0 = s0 + 16;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_088CD9D8;
L_088CD9D8:;
    a0 = s0 + 20;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_088CD9E0;
L_088CD9E0:;
    s1 = LD32(s0+4);
    cnd_ = s1 != 0;
    a0 = 10;
    if (cnd_) { goto L_088CDA34; }
    goto L_088CD9EC;
L_088CD9EC:;
    a0 = s0 + 8;
    func_08AA2994(a0, 0, 0, 0);
    goto L_088CD9F4;
L_088CD9F4:;
    a0 = s0 + 0;
    func_08901420();
    goto L_088CD9FC;
L_088CD9FC:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CDA24; }
    goto L_088CDA08;
L_088CDA08:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDA10;
L_088CDA10:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088CDA24:;
    func_08AB6660(a0, 0, 0, 0);
    goto L_088CDA2C;
L_088CDA2C:;
    goto L_088CDA08;
L_088CDA34:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDA3C;
L_088CDA3C:;
    a0 = s1 + 28;
    func_08AB54BC(a0, 0, 0, 0);
    goto L_088CDA44;
L_088CDA44:;
    ST32(s1+28, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDA4C;
L_088CDA4C:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDA54;
L_088CDA54:;
    goto L_088CD9EC;
}

/* 088CDA5C */
void func_088CDA5C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CDA5C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 10;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDA7C;
L_088CDA7C:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CDAA4; }
    goto L_088CDA88;
L_088CDA88:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDA90;
L_088CDA90:;
    sp = sp + 16;
    return;
L_088CDAA4:;
    v1 = LD32(s1+12);
    v0 = 1;
    ST8(s0+24, v0);
    a1 = v1 + 0;
    ST32(s0+12, v1);
    func_08AB66D0(a0, a1, 0, 0, 0);
    goto L_088CDABC;
L_088CDABC:;
    goto L_088CDA88;
}

/* 088CDAC4 */
void func_088CDAC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CDAC4:;
    sp = sp - 32;
    v0 = LD_U8(a0+26);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088CDB04; }
    goto L_088CDAE8;
L_088CDAE8:;
    goto L_088CDAEC;
L_088CDAEC:;
    sp = sp + 32;
    return;
L_088CDB04:;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDB0C;
L_088CDB0C:;
    v0 = D_08B2AA0C - (-22004);
    a2 = LD32(v0-22004);
    v1 = 1;
    ST8(s1+26, v1);
    a1 = a2 + 0;
    a0 = s1 + 0;
    ST32(s1+44, a2);
    ST8(s1+25, 0);
    func_088CDA5C(a0, a1);
    goto L_088CDB30;
L_088CDB30:;
    a1 = LD32(s1+12);
    a0 = s1 + 16;
    func_08AA56E0(a0, a1, 0, 0, 0);
    goto L_088CDB3C;
L_088CDB3C:;
    a1 = LD32(s1+12);
    a0 = s1 + 20;
    func_08AA56E0(a0, a1, 0, 0, 0);
    goto L_088CDB48;
L_088CDB48:;
    v1 = LD32(s1+12);
    cnd_ = (s32)v1 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088CDB80; }
    goto L_088CDB54;
L_088CDB54:;
    v0 = LD32(s1+16);
    goto L_088CDB58;
L_088CDB58:;
    v0 = v0 + a0;
    ST8(v0, 0);
    v1 = LD32(s1+20);
    v1 = v1 + a0;
    ST8(v1, 0);
    a0 = a0 + 1;
    v1 = LD32(s1+12);
    v0 = (s32)a0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_088CDB58; }
    goto L_088CDB80;
L_088CDB80:;
    cnd_ = (s32)v1 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088CDBB8; }
    goto L_088CDB88;
L_088CDB88:;
    s2 = 0 + 0;
    goto L_088CDB8C;
L_088CDB8C:;
    s0 = LD32(s1);
    s3 = s3 + 1;
    s0 = s0 + s2;
    a0 = s0 + 4;
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_088CDBA0;
L_088CDBA0:;
    ST32(s0+12, 0);
    ST32(s0+8, 0);
    v0 = LD32(s1+12);
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    s2 = s2 + 40;
    if (cnd_) { goto L_088CDB8C; }
    goto L_088CDBB8;
L_088CDBB8:;
    a0 = s1 + 0;
    func_088CDD80(a0);
    goto L_088CDBC0;
L_088CDBC0:;
    a0 = s1 + 0;
    func_088CDE2C(a0);
    goto L_088CDBC8;
L_088CDBC8:;
    v0 = D_08B2C09C - (-16228);
    v1 = D_08B2C0C8 - (-16184);
    a0 = s1 + 0;
    ST8(v0-16228, 0);
    ST16(v1-16184, 0);
    func_08901418();
    goto L_088CDBE0;
L_088CDBE0:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDBE8;
L_088CDBE8:;
    goto L_088CDAEC;
}

/* 088CDBF0 */
void func_088CDBF0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CDBF0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDC0C;
L_088CDC0C:;
    a0 = s0 + 16;
    ST32(s0+44, 0);
    func_08AA0D64(a0, 0, 0, 0);
    goto L_088CDC18;
L_088CDC18:;
    a0 = s0 + 20;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_088CDC20;
L_088CDC20:;
    s1 = LD32(s0+4);
    cnd_ = s1 != 0;
    a0 = 10;
    if (cnd_) { goto L_088CDC80; }
    goto L_088CDC2C;
L_088CDC2C:;
    a0 = s0 + 8;
    func_08AA2994(a0, 0, 0, 0);
    goto L_088CDC34;
L_088CDC34:;
    a0 = s0 + 0;
    func_08901420();
    goto L_088CDC3C;
L_088CDC3C:;
    v0 = LD_U8(s0+24);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CDC70; }
    goto L_088CDC48;
L_088CDC48:;
    ST8(s0+26, 0);
    goto L_088CDC4C;
L_088CDC4C:;
    ST32(s0+12, 0);
    ST8(s0+24, 0);
    ST8(s0+25, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDC5C;
L_088CDC5C:;
    sp = sp + 16;
    return;
L_088CDC70:;
    func_08AB6660(a0, 0, 0, 0);
    goto L_088CDC78;
L_088CDC78:;
    ST8(s0+26, 0);
    goto L_088CDC4C;
L_088CDC80:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDC88;
L_088CDC88:;
    a0 = s1 + 28;
    func_08AB54BC(a0, 0, 0, 0);
    goto L_088CDC90;
L_088CDC90:;
    ST32(s1+28, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDC98;
L_088CDC98:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDCA0;
L_088CDCA0:;
    ST32(s0+4, 0);
    goto L_088CDC2C;
}

/* 088CDCA8 */
u32 func_088CDCA8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CDCA8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDCC0;
L_088CDCC0:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDCC8;
L_088CDCC8:;
    a0 = 32;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CDCD0;
L_088CDCD0:;
    a0 = D_08AEC994 - (-13932);
    v1 = D_08AEC990 - (-13936);
    f1 = BITSF(LD32(v1-13936));
    f0 = BITSF(LD32(a0-13932));
    v1 = v0 + 4;
    ST32(v0, 0);
    ST32(v0+4, FBITS(f1));
    ST32(v1+20, FBITS(f0));
    ST32(v1+16, FBITS(f1));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(v1+12, FBITS(f0));
    ST32(s0+4, v0);
    ST32(v0+28, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDD0C;
L_088CDD0C:;
    v0 = LD32(s0+4);
    sp = sp + 16;
    return v0;
}

/* 088CDD20 */
u32 func_088CDD20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CDD20:;
    sp = sp - 16;
    s2 = a0 + 0;
    s0 = a0 + 8;
    a0 = 10;
    s1 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDD48;
L_088CDD48:;
    a0 = s0 + 0;
    func_08AA2994(a0, 0, 0, 0);
    goto L_088CDD50;
L_088CDD50:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_088CDD5C;
L_088CDD5C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CDD64;
L_088CDD64:;
    v0 = LD32(s2+8);
    sp = sp + 16;
    return v0;
}

/* 088CDD80 */
void func_088CDD80(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CDD80:;
    v1 = LD32(a0+12);
    cnd_ = (s32)v1 <= 0;
    sp = sp - 32;
    if (cnd_) { goto L_088CDE1C; }
    goto L_088CDD8C;
L_088CDD8C:;
    v0 = D_08AEC998 - (-13928);
    f6 = BITSF(LD32(v0-13928));
    a0 = LD32(a0);
    a1 = v1 + 0;
    goto L_088CDD9C;
L_088CDD9C:;
    v1 = LD32(a0);
    a1 = a1 - 1;
    v0 = v1 + 4;
    f5 = BITSF(LD32(v0+20));
    f4 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+16));
    f2 = f2 + f4;
    f0 = f0 + f3;
    f1 = f1 + f5;
    f2 = f2 * f6;
    f0 = f0 * f6;
    f1 = f1 * f6;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    f3 = BITSF(LD32(a0+28));
    f4 = BITSF(LD32(a0+32));
    f5 = BITSF(LD32(a0+36));
    f2 = f2 + f3;
    f0 = f0 + f4;
    f1 = f1 + f5;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(a0+16, FBITS(f2));
    ST32(a0+20, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(a0+24, FBITS(f1));
    cnd_ = a1 != 0;
    a0 = a0 + 40;
    if (cnd_) { goto L_088CDD9C; }
    goto L_088CDE1C;
L_088CDE1C:;
    sp = sp + 32;
    return;
}

/* 088CDE24 */
void func_088CDE24(void)
{
L_088CDE24:;
    return;
}

/* 088CDE2C */
void func_088CDE2C(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CDE2C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = LD32(a0+12);
    cnd_ = (s32)s1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088CDE6C; }
    goto L_088CDE50;
L_088CDE50:;
    a1 = s0 + 0;
    goto L_088CDE54;
L_088CDE54:;
    a0 = s2 + 0;
    s0 = s0 + 1;
    func_088CDE24();
    goto L_088CDE60;
L_088CDE60:;
    v0 = (s32)s0 < (s32)s1;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088CDE54; }
    goto L_088CDE6C;
L_088CDE6C:;
    sp = sp + 16;
    return;
}

/* 088CDE84 */
u64 func_088CDE84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CDE84:;
    sp = sp - 32;
    s3 = a1 << 1;
    v0 = s3 + a1;
    s1 = a0 + 0;
    v0 = v0 << 2;
    s0 = a1 + 0;
    v1 = LD32(a0+44);
    a0 = LD32(v1+16);
    v1 = D_08B230A8 - (12456);
    v0 = v0 + a0;
    a0 = LD32(v0+8);
    v0 = (a0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    s2 = LD_U8(v1+12456);
    if (cnd_) { goto L_088CDEF4; }
    goto L_088CDED4;
L_088CDED4:;
    a1 = D_08B2C0F9 - (-16135);
    v1 = LD_U8(a1-16135);
    v0 = (a0 >> 2) & 0x1;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == v1;
    s4 = D_08B2C0F8 - (-16136);
    if (cnd_) { goto L_088CE038; }
    goto L_088CDEEC;
L_088CDEEC:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_088CDF14; }
    goto L_088CDEF4;
L_088CDEF4:;
    goto L_088CDEF8;
L_088CDEF8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088CDF14:;
    ST8(a1-16135, v0);
    s4 = D_08B2C0F8 - (-16136);
    goto L_088CDF1C;
L_088CDF1C:;
    func_088CEF2C();
    goto L_088CDF24;
L_088CDF24:;
    v0 = LD32(s1+16);
    goto L_088CDF28;
L_088CDF28:;
    ST8(s4-16136, 0);
    a0 = v0 + s0;
    v1 = LD_U8(a0);
    v0 = v1 & 0xff;
    v0 = v0 & s2;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+20); goto L_088CDF50; }
    goto L_088CDF44;
L_088CDF44:;
    v0 = v1 | s2;
    ST8(a0, v0);
    a0 = LD32(s1+20);
    goto L_088CDF50;
L_088CDF50:;
    a2 = s3 + s0;
    v1 = s0 << 2;
    a0 = a0 + s0;
    v0 = LD_U8(a0);
    a2 = a2 << 2;
    v1 = v1 + s0;
    v0 = v0 | s2;
    ST8(a0, v0);
    v1 = v1 << 3;
    a1 = LD32(s1+44);
    a0 = LD32(s1);
    a3 = LD32(a1+16);
    a0 = a0 + v1;
    v0 = LD32(a1+32);
    a2 = a2 + a3;
    v1 = LD32(a2+4);
    t0 = LD32(a0+4);
    v0 = v0 | v1;
    ST32(a1+32, v0);
    a3 = LD32(a0+8);
    cnd_ = a3 == 0;
    t2 = 1;
    if (cnd_) { goto L_088CDEF4; }
    goto L_088CDFA8;
L_088CDFA8:;
    a2 = LD32(t0);
    goto L_088CDFAC;
L_088CDFAC:;
    v0 = LD32(s1+12);
    a3 = a3 - 1;
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 != 0;
    t0 = t0 + 4;
    if (cnd_) { goto L_088CDFD0; }
    goto L_088CDFC0;
L_088CDFC0:;
    cnd_ = a3 != 0;
    if (cnd_) { a2 = LD32(t0); goto L_088CDFAC; }
    goto L_088CDFC8;
L_088CDFC8:;
    goto L_088CDEF8;
L_088CDFD0:;
    v1 = LD32(s1+16);
    v0 = a2 << 1;
    v0 = v0 + a2;
    v1 = v1 + a2;
    t1 = v0 << 2;
    v0 = LD_U8(v1);
    a0 = v0 | s2;
    v0 = v0 & 0xff;
    v0 = v0 & s2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+20); goto L_088CE024; }
    goto L_088CDFFC;
L_088CDFFC:;
    ST8(v1, a0);
    a1 = LD32(s1+44);
    v1 = LD32(a1+16);
    a0 = LD32(a1+36);
    v1 = t1 + v1;
    v0 = LD32(v1);
    v0 = t2 << (v0 & 31);
    a0 = a0 | v0;
    ST32(a1+36, a0);
    v1 = LD32(s1+20);
    goto L_088CE024;
L_088CE024:;
    v1 = v1 + a2;
    v0 = LD_U8(v1);
    v0 = v0 | s2;
    ST8(v1, v0);
    goto L_088CDFC0;
L_088CE038:;
    v0 = LD_U8(s4-16136);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_088CDF28; }
    goto L_088CE044;
L_088CE044:;
    goto L_088CDF1C;
}

/* 088CE04C */
void func_088CE04C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088CE04C:;
    sp = sp - 48;
    v0 = D_08B230A8 - (12456);
    s1 = a2 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    a2 = LD_U8(v0+12456);
    if (cnd_) { goto L_088CE0BC; }
    goto L_088CE074;
L_088CE074:;
    a0 = LD32(a0+16);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_088CE0C0; }
    goto L_088CE080;
L_088CE080:;
    v0 = LD32(s0+20);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088CE0C0; }
    goto L_088CE08C;
L_088CE08C:;
    v0 = LD_U8(s0+27);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CE12C; }
    goto L_088CE098;
L_088CE098:;
    cnd_ = a1 == 0;
    v0 = D_08B159FC - (23036);
    if (cnd_) { goto L_088CE124; }
    goto L_088CE0A0;
L_088CE0A0:;
    cnd_ = s1 == 0;
    v0 = D_08AEC99C - (-13924);
    if (cnd_) { goto L_088CE0D0; }
    goto L_088CE0A8;
L_088CE0A8:;
    func_088CEF2C();
    goto L_088CE0B0;
L_088CE0B0:;
    a1 = LD32(s1);
    a0 = s0 + 0;
    { u64 r_ = func_088CDE84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CE0BC;
L_088CE0BC:;
    goto L_088CE0C0;
L_088CE0C0:;
    sp = sp + 48;
    return;
L_088CE0D0:;
    v1 = D_08AEC9A0 - (-13920);
    f0 = BITSF(LD32(v0-13924));
    f1 = BITSF(LD32(v1-13920));
    a0 = sp + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+12, FBITS(f1));
    f0 = func_08AA0F30(a0, a1);
    goto L_088CE0FC;
L_088CE0FC:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088CE0C0; }
    goto L_088CE108;
L_088CE108:;
    a2 = ((u32)(uintptr_t)func_08AB6768) - (26472);
    a0 = s0 + 0;
    a2 = a2 + 26472;
    a1 = sp + 0;
    { rv_t r_ = func_088CE404(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CE11C;
L_088CE11C:;
    goto L_088CE0C0;
L_088CE124:;
    a1 = LD32(v0+23036);
    goto L_088CE0A0;
L_088CE12C:;
    cnd_ = (s32)v1 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088CE0BC; }
    goto L_088CE134;
L_088CE134:;
    a0 = a0 + a1;
    v1 = LD_U8(a0);
    a1 = a1 + 1;
    v1 = v1 | a2;
    ST8(a0, v1);
    v0 = LD32(s0+12);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CE0C0; }
    goto L_088CE158;
L_088CE158:;
    a0 = LD32(s0+16);
    goto L_088CE134;
}

/* 088CE160 */
void func_088CE160(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088CE160:;
    a3 = LD32(a0+12);
    cnd_ = a3 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088CE1CC; }
    goto L_088CE16C;
L_088CE16C:;
    a0 = LD32(a0+16);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CE1CC; }
    goto L_088CE178;
L_088CE178:;
    v0 = LD32(a1+20);
    cnd_ = v0 == 0;
    v0 = D_08B230A8 - (12456);
    if (cnd_) { goto L_088CE1CC; }
    goto L_088CE184;
L_088CE184:;
    v1 = LD_U8(v0+12456);
    a2 = 0 + 0;
    cnd_ = (s32)a3 <= 0;
    t0 = ~(0 | v1);
    if (cnd_) { goto L_088CE1CC; }
    goto L_088CE194;
L_088CE194:;
    a0 = a0 + a2;
    v0 = LD_U8(a0);
    v0 = v0 & t0;
    ST8(a0, v0);
    v1 = LD32(a1+20);
    v1 = v1 + a2;
    v0 = LD_U8(v1);
    a2 = a2 + 1;
    a0 = (s32)a2 < (s32)a3;
    v0 = v0 & t0;
    cnd_ = a0 == 0;
    ST8(v1, v0);
    if (cnd_) { goto L_088CE1CC; }
    goto L_088CE1C4;
L_088CE1C4:;
    a0 = LD32(a1+16);
    goto L_088CE194;
L_088CE1CC:;
    return;
}

/* 088CE1D4 */
void func_088CE1D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088CE1D4:;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088CE230; }
    goto L_088CE1E0;
L_088CE1E0:;
    a0 = LD32(a0+16);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CE230; }
    goto L_088CE1EC;
L_088CE1EC:;
    v0 = LD32(a1+20);
    cnd_ = v0 == 0;
    v0 = D_08B230A8 - (12456);
    if (cnd_) { goto L_088CE230; }
    goto L_088CE1F8;
L_088CE1F8:;
    a3 = LD_U8(v0+12456);
    cnd_ = (s32)v1 <= 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088CE230; }
    goto L_088CE204;
L_088CE204:;
    a0 = a0 + a2;
    v1 = LD_U8(a0);
    a2 = a2 + 1;
    v1 = v1 | a3;
    ST8(a0, v1);
    v0 = LD32(a1+12);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CE230; }
    goto L_088CE228;
L_088CE228:;
    a0 = LD32(a1+16);
    goto L_088CE204;
L_088CE230:;
    return;
}

/* 088CE238 */
void func_088CE238(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088CE238:;
    sp = sp - 48;
    a2 = LD32(a0+12);
    cnd_ = a2 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088CE2E4; }
    goto L_088CE25C;
L_088CE25C:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088CE2E8; }
    goto L_088CE268;
L_088CE268:;
    v0 = LD32(a0+20);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088CE2E8; }
    goto L_088CE274;
L_088CE274:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    a0 = LD_U8(a0+29);
    v0 = D_08B230A8 - (12456);
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    cnd_ = a0 != 0;
    s2 = LD_U8(v0+12456);
    if (cnd_) { goto L_088CE338; }
    goto L_088CE2A4;
L_088CE2A4:;
    cnd_ = (s32)a2 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088CE2DC; }
    goto L_088CE2AC;
L_088CE2AC:;
    s3 = ~(0 | s2);
    v1 = LD32(s0+20);
    goto L_088CE2B4;
L_088CE2B4:;
    a1 = s1 + 0;
    v1 = v1 + s1;
    v0 = LD_U8(v1);
    v0 = v0 & s2;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088CE300; }
    goto L_088CE2CC;
L_088CE2CC:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)a2;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+20); goto L_088CE2B4; }
    goto L_088CE2DC;
L_088CE2DC:;
    a0 = sp + 0;
    func_0881CBAC(a0);
    goto L_088CE2E4;
L_088CE2E4:;
    goto L_088CE2E8;
L_088CE2E8:;
    sp = sp + 48;
    return;
L_088CE300:;
    v0 = func_088CE9B8(a0, a1);
    goto L_088CE308;
L_088CE308:;
    cnd_ = v0 == 0;
    v1 = LD32(s0+16);
    if (cnd_) { goto L_088CE328; }
    goto L_088CE310;
L_088CE310:;
    v1 = v1 + s1;
    v0 = LD_U8(v1);
    v0 = v0 | s2;
    goto L_088CE31C;
L_088CE31C:;
    ST8(v1, v0);
    a2 = LD32(s0+12);
    goto L_088CE2CC;
L_088CE328:;
    v1 = v1 + s1;
    v0 = LD_U8(v1);
    v0 = v0 & s3;
    goto L_088CE31C;
L_088CE338:;
    a0 = s0 + 32;
    func_0881CBAC(a0);
    goto L_088CE340;
L_088CE340:;
    a2 = LD32(s0+12);
    goto L_088CE2A4;
}

/* 088CE348 */
u32 func_088CE348(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_088CE348:;
    cnd_ = a1 == a2;
    t1 = 1;
    if (cnd_) { goto L_088CE398; }
    goto L_088CE350;
L_088CE350:;
    v1 = LD32(a0);
    v0 = a1 << 2;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    t0 = LD32(v0+8);
    cnd_ = (s32)t0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088CE394; }
    goto L_088CE370;
L_088CE370:;
    v1 = LD32(v0+4);
    v0 = LD32(v1);
    goto L_088CE378;
L_088CE378:;
    a3 = a3 + 1;
    a0 = (s32)a3 < (s32)t0;
    v1 = v1 + 4;
    cnd_ = a2 == v0;
    t1 = 1;
    if (cnd_) { goto L_088CE398; }
    goto L_088CE38C;
L_088CE38C:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088CE378; }
    goto L_088CE394;
L_088CE394:;
    t1 = 0 + 0;
    goto L_088CE398;
L_088CE398:;
    v0 = t1 + 0;
    return v0;
}

/* 088CE3A0 */
void func_088CE3A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CE3A0:;
    sp = sp - 16;
    v0 = D_08B2C221 - (-15839);
    v1 = LD_U8(v0-15839);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088CE3D4; }
    goto L_088CE3BC;
L_088CE3BC:;
    v0 = D_08B2C0F4 - (-16140);
    v0 = LD32(v0-16140);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CE3E4; }
    goto L_088CE3CC;
L_088CE3CC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CE3D4;
L_088CE3D4:;
    goto L_088CE3D8;
L_088CE3D8:;
    sp = sp + 16;
    return;
L_088CE3E4:;
    func_089013EC();
    goto L_088CE3EC;
L_088CE3EC:;
    a0 = s0 + 0;
    func_089013F4();
    goto L_088CE3F4;
L_088CE3F4:;
    a0 = s0 + 0;
    func_08901410();
    goto L_088CE3FC;
L_088CE3FC:;
    goto L_088CE3D8;
}

/* 088CE404 */
rv_t func_088CE404(u32 a0, u32 a1, u32 a2, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CE404:;
    v1 = LD32(a1);
    sp = sp - 16;
    v0 = D_08B2C0A8 - (-16216);
    ST32(v0-16216, v1);
    t2 = v0 - 16216;
    t0 = a2 + 0;
    t3 = a0 + 0;
    s1 = D_08B2C0A0 - (-16224);
    a2 = ((u32)(uintptr_t)func_08AB6808) - (26632);
    a2 = a2 + 26632;
    a3 = 0 + 0;
    v0 = LD32(a1+4);
    t4 = LD32(a0+4);
    s0 = LD32(s1-16224);
    ST32(t2+4, v0);
    a0 = t4 + 0;
    v0 = LD32(a1+8);
    ST32(s1-16224, t3);
    ST32(t2+8, v0);
    v0 = D_08B2C0A4 - (-16220);
    v1 = LD32(a1+12);
    ST32(v0-16220, t0);
    ST32(t2+12, v1);
    t0 = LD32(a1+16);
    ST32(t2+16, t0);
    v0 = LD32(a1+20);
    cnd_ = t4 != 0;
    ST32(t2+20, v0);
    if (cnd_) { goto L_088CE498; }
    goto L_088CE480;
L_088CE480:;
    ST32(s1-16224, s0);
    goto L_088CE484;
L_088CE484:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088CE498:;
    { rv_t r_ = func_08832E1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CE4A0;
L_088CE4A0:;
    ST32(s1-16224, s0);
    goto L_088CE484;
}

/* 088CE4A8 */
u64 func_088CE4A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_088CE4A8:;
    v0 = LD_U8(a0+26);
    cnd_ = v0 == 0;
    v1 = a1 << 1;
    if (cnd_) { goto L_088CE550; }
    goto L_088CE4B4;
L_088CE4B4:;
    v0 = LD32(a0+44);
    v1 = v1 + a1;
    a0 = LD32(v0+16);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v1 = LD32(v1+8);
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a3 = D_08B2C0C8 - (-16184);
    if (cnd_) { goto L_088CE550; }
    goto L_088CE4D8;
L_088CE4D8:;
    v0 = LD_U16(a3-16184);
    cnd_ = v0 == 0;
    t1 = D_08B2C0C0 - (-16192);
    if (cnd_) { goto L_088CE524; }
    goto L_088CE4E4;
L_088CE4E4:;
    a2 = LD_U16(t1-16192);
    v0 = 0xffff;
    t0 = (v1 >> 2) & 0x1;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088CE510; }
    goto L_088CE4F8;
L_088CE4F8:;
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+8);
    v1 = (v1 >> 2) & 0x1;
    goto L_088CE510;
L_088CE510:;
    cnd_ = t0 == v1;
    a0 = LD_U16(a3-16184);
    if (cnd_) { goto L_088CE528; }
    goto L_088CE518;
L_088CE518:;
    cnd_ = t0 != 0;
    if (cnd_) { goto L_088CE550; }
    goto L_088CE520;
L_088CE520:;
    ST16(a3-16184, 0);
    goto L_088CE524;
L_088CE524:;
    a0 = LD_U16(a3-16184);
    goto L_088CE528;
L_088CE528:;
    v0 = 4;
    v1 = a0 & 0xffff;
    cnd_ = v1 == v0;
    v0 = t1 - 16192;
    if (cnd_) { goto L_088CE558; }
    goto L_088CE538;
L_088CE538:;
    v1 = v1 << 1;
    v1 = v1 + v0;
    a0 = a0 + 1;
    v0 = D_08B2C0C8 - (-16184);
    ST16(v0-16184, a0);
    ST16(v1, a1);
    goto L_088CE550;
L_088CE550:;
    return (u64)v0 | ((u64)v1 << 32);
L_088CE558:;
    v0 = (u32)-1;
    ST16(t1-16192, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CE564 */
u64 func_088CE564(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088CE564:;
    v0 = LD_U8(a0+26);
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088CE5F4; }
    goto L_088CE570;
L_088CE570:;
    a0 = LD32(a0+44);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v1 = LD32(a0+16);
    v0 = v0 << 2;
    v0 = v0 + v1;
    v0 = LD32(v0+8);
    v1 = (v0 >> 1) & 0x1;
    cnd_ = v1 != 0;
    v0 = (v0 >> 2) & 0x1;
    if (cnd_) { goto L_088CE5F4; }
    goto L_088CE598;
L_088CE598:;
    cnd_ = v0 != 0;
    v0 = D_08B2C0F0 - (-16144);
    if (cnd_) { goto L_088CE5FC; }
    goto L_088CE5A0;
L_088CE5A0:;
    v1 = D_08B2C0F0 - (-16144);
    v0 = LD_U8(v1-16144);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a2+16); goto L_088CE5C8; }
    goto L_088CE5B0;
L_088CE5B0:;
    v0 = 1;
    ST8(v1-16144, v0);
    v1 = (u32)-1;
    v0 = D_08B160D0 - (24784);
    ST32(v0+24784, v1);
    v1 = LD32(a2+16);
    goto L_088CE5C8;
L_088CE5C8:;
    v0 = D_08B230A8 - (12456);
    a0 = LD_U8(v0+12456);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CE5E8; }
    goto L_088CE5D8;
L_088CE5D8:;
    v1 = v1 + a1;
    v0 = LD_U8(v1);
    v0 = v0 & a0;
    v0 = 0 < v0;
    goto L_088CE5E8;
L_088CE5E8:;
    cnd_ = v0 == 0;
    v0 = D_08B160D0 - (24784);
    if (cnd_) { goto L_088CE5F4; }
    goto L_088CE5F0;
L_088CE5F0:;
    ST32(v0+24784, a1);
    goto L_088CE5F4;
L_088CE5F4:;
    return (u64)v0 | ((u64)v1 << 32);
L_088CE5FC:;
    v1 = LD_U8(v0-16144);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088CE5F4; }
    goto L_088CE608;
L_088CE608:;
    v1 = LD32(a2+16);
    goto L_088CE5C8;
}

/* 088CE610 */
u64 func_088CE610(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_088CE610:;
    t1 = D_08B2C0C8 - (-16184);
    v0 = LD_U16(t1-16184);
    a2 = 0 + 0;
    cnd_ = v0 == 0;
    t0 = t1 + 0;
    if (cnd_) { goto L_088CE654; }
    goto L_088CE624;
L_088CE624:;
    v0 = D_08B2C0C0 - (-16192);
    a3 = v0 - 16192;
    v1 = a2 << 1;
    goto L_088CE630;
L_088CE630:;
    v0 = v1 + a3;
    a0 = LD_U16(v0);
    v1 = v1 + a1;
    a2 = a2 + 1;
    ST16(v1, a0);
    v0 = LD_U16(t0-16184);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = a2 << 1;
    if (cnd_) { goto L_088CE630; }
    goto L_088CE654;
L_088CE654:;
    v1 = LD_U16(t1-16184);
    v0 = v1 < 0x4u;
    cnd_ = v0 == 0;
    v0 = D_08B2C0C8 - (-16184);
    if (cnd_) { goto L_088CE678; }
    goto L_088CE664;
L_088CE664:;
    v0 = v1 << 1;
    v0 = v0 + a1;
    v1 = (u32)-1;
    ST16(v0, v1);
    v0 = D_08B2C0C8 - (-16184);
    goto L_088CE678;
L_088CE678:;
    ST16(v0-16184, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CE680 */
void func_088CE680(u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_088CE680:;
    v0 = a1 & 0xffff;
    v0 = v0 < 0x11u;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 16; goto L_088CE690; }
    goto L_088CE690;
L_088CE690:;
    v0 = D_08B2C0EE - (-16146);
    ST16(v0-16146, a1);
    return;
}

/* 088CE69C */
u64 func_088CE69C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_088CE69C:;
    v0 = LD_U8(a0+26);
    cnd_ = v0 == 0;
    v1 = a1 << 1;
    if (cnd_) { goto L_088CE748; }
    goto L_088CE6A8;
L_088CE6A8:;
    v0 = LD32(a0+44);
    v1 = v1 + a1;
    a0 = LD32(v0+16);
    v1 = v1 << 2;
    v1 = v1 + a0;
    v1 = LD32(v1+8);
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a3 = D_08B2C0EC - (-16148);
    if (cnd_) { goto L_088CE748; }
    goto L_088CE6CC;
L_088CE6CC:;
    v0 = LD_U16(a3-16148);
    cnd_ = v0 == 0;
    t1 = D_08B2C0CC - (-16180);
    if (cnd_) { goto L_088CE718; }
    goto L_088CE6D8;
L_088CE6D8:;
    a2 = LD_U16(t1-16180);
    v0 = 0xffff;
    t0 = (v1 >> 2) & 0x1;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088CE704; }
    goto L_088CE6EC;
L_088CE6EC:;
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+8);
    v1 = (v1 >> 2) & 0x1;
    goto L_088CE704;
L_088CE704:;
    cnd_ = t0 == v1;
    a0 = LD_U16(a3-16148);
    if (cnd_) { goto L_088CE71C; }
    goto L_088CE70C;
L_088CE70C:;
    cnd_ = t0 != 0;
    if (cnd_) { goto L_088CE748; }
    goto L_088CE714;
L_088CE714:;
    ST16(a3-16148, 0);
    goto L_088CE718;
L_088CE718:;
    a0 = LD_U16(a3-16148);
    goto L_088CE71C;
L_088CE71C:;
    v0 = D_08B2C0EE - (-16146);
    v1 = LD_U16(v0-16146);
    a2 = a0 & 0xffff;
    cnd_ = a2 == v1;
    v0 = t1 - 16180;
    if (cnd_) { goto L_088CE750; }
    goto L_088CE730;
L_088CE730:;
    v1 = a2 << 1;
    v1 = v1 + v0;
    a0 = a0 + 1;
    v0 = D_08B2C0EC - (-16148);
    ST16(v0-16148, a0);
    ST16(v1, a1);
    goto L_088CE748;
L_088CE748:;
    return (u64)v0 | ((u64)v1 << 32);
L_088CE750:;
    v0 = (u32)-1;
    ST16(t1-16180, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CE75C */
u32 func_088CE75C(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_088CE75C:;
    v0 = D_08B2C0CC - (-16180);
    v1 = LD_U16(v0-16180);
    v0 = 0xffff;
    cnd_ = v1 == v0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088CE7E8; }
    goto L_088CE770;
L_088CE770:;
    t2 = 1;
    t1 = D_08B2C0EC - (-16148);
    v0 = LD_U16(t1-16148);
    a2 = 0 + 0;
    goto L_088CE780;
L_088CE780:;
    cnd_ = v0 == 0;
    t0 = t1 + 0;
    if (cnd_) { goto L_088CE7B8; }
    goto L_088CE788;
L_088CE788:;
    v0 = D_08B2C0CC - (-16180);
    a3 = v0 - 16180;
    v1 = a2 << 1;
    goto L_088CE794;
L_088CE794:;
    v0 = v1 + a3;
    a0 = LD_U16(v0);
    v1 = v1 + a1;
    a2 = a2 + 1;
    ST16(v1, a0);
    v0 = LD_U16(t0-16148);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = a2 << 1;
    if (cnd_) { goto L_088CE794; }
    goto L_088CE7B8;
L_088CE7B8:;
    v1 = LD_U16(t1-16148);
    v0 = v1 < 0x10u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08B2C0EC - (-16148); goto L_088CE7DC; }
    goto L_088CE7C8;
L_088CE7C8:;
    v0 = v1 << 1;
    v0 = v0 + a1;
    v1 = (u32)-1;
    ST16(v0, v1);
    v0 = D_08B2C0EC - (-16148);
    goto L_088CE7DC;
L_088CE7DC:;
    ST16(v0-16148, 0);
    v0 = t2 + 0;
    return v0;
L_088CE7E8:;
    t1 = D_08B2C0EC - (-16148);
    v0 = LD_U16(t1-16148);
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088CE780; }
    goto L_088CE7F8;
L_088CE7F8:;
    t2 = 1;
    goto L_088CE780;
}

/* 088CE800 */
rv_t func_088CE800(u32 a0, u32 a1, u32 a2, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CE800:;
    sp = sp - 16;
    a3 = a0 + 0;
    s1 = a2 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088CE968; }
    goto L_088CE81C;
L_088CE81C:;
    a2 = LD32(a2);
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    if (cnd_) { a2 = ((u32)(uintptr_t)func_08AB6790) - (26512); goto L_088CE96C; }
    goto L_088CE82C;
L_088CE82C:;
    cnd_ = (s32)a2 < 0;
    if (cnd_) { a2 = ((u32)(uintptr_t)func_08AB6790) - (26512); goto L_088CE96C; }
    goto L_088CE834;
L_088CE834:;
    v0 = LD32(a0+12);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = ((u32)(uintptr_t)func_08AB6790) - (26512); goto L_088CE96C; }
    goto L_088CE844;
L_088CE844:;
    v1 = LD32(a0+44);
    v0 = a2 << 1;
    v0 = v0 + a2;
    a0 = LD32(v1+16);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+8);
    v1 = (v1 >> 2) & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = ((u32)(uintptr_t)func_08AB6790) - (26512); goto L_088CE96C; }
    goto L_088CE86C;
L_088CE86C:;
    v1 = LD32(a3+16);
    v0 = D_08B230A8 - (12456);
    a0 = LD_U8(v0+12456);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CE890; }
    goto L_088CE880;
L_088CE880:;
    v1 = v1 + a2;
    v0 = LD_U8(v1);
    v0 = v0 & a0;
    v0 = 0 < v0;
    goto L_088CE890;
L_088CE890:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = ((u32)(uintptr_t)func_08AB6790) - (26512); goto L_088CE96C; }
    goto L_088CE898;
L_088CE898:;
    a0 = LD32(a3);
    v0 = a2 << 2;
    v0 = v0 + a2;
    v0 = v0 << 3;
    v0 = v0 + a0;
    v1 = LD32(v0);
    f2 = BITSF(LD32(v0+28));
    f1 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(v1+4));
    v0 = v0 + 28;
    f0 = f0 + f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_088CE968; }
    goto L_088CE8D4;
L_088CE8D4:;
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(a1));
    f0 = f0 + f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a2 = ((u32)(uintptr_t)func_08AB6790) - (26512); goto L_088CE96C; }
    goto L_088CE8F0;
L_088CE8F0:;
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a1+12));
    f0 = f0 + f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a2 = ((u32)(uintptr_t)func_08AB6790) - (26512);
    if (cnd_) { goto L_088CE96C; }
    goto L_088CE910;
L_088CE910:;
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(a1+8));
    f0 = f0 + f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088CE96C; }
    goto L_088CE92C;
L_088CE92C:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(a1+20));
    f0 = f0 + f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    s0 = D_08B160D0 - (24784);
    if (cnd_) { goto L_088CE970; }
    goto L_088CE94C;
L_088CE94C:;
    f0 = BITSF(LD32(v1+20));
    f1 = BITSF(LD32(a1+16));
    f0 = f0 + f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_088CE9A4; }
    goto L_088CE968;
L_088CE968:;
    a2 = ((u32)(uintptr_t)func_08AB6790) - (26512);
    goto L_088CE96C;
L_088CE96C:;
    s0 = D_08B160D0 - (24784);
    goto L_088CE970;
L_088CE970:;
    v0 = (u32)-1;
    v1 = D_08B2C0F0 - (-16144);
    a0 = a3 + 0;
    a2 = a2 + 26512;
    ST32(s0+24784, v0);
    ST8(v1-16144, 0);
    { rv_t r_ = func_088CE404(a0, a1, a2, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CE98C;
L_088CE98C:;
    cnd_ = s1 == 0;
    v0 = LD32(s0+24784);
    if (cnd_) { goto L_088CE998; }
    goto L_088CE994;
L_088CE994:;
    ST32(s1, v0);
    goto L_088CE998;
L_088CE998:;
    v0 = LD32(s0+24784);
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    goto L_088CE9A4;
L_088CE9A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CE9B8 */
u32 func_088CE9B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CE9B8:;
    sp = sp - 16;
    v0 = a1 << 2;
    v0 = v0 + a1;
    v1 = LD_U8(a0+28);
    a1 = v0 << 3;
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_088CE9E4; }
    goto L_088CE9D8;
L_088CE9D8:;
    goto L_088CE9DC;
L_088CE9DC:;
    sp = sp + 16;
    return v0;
L_088CE9E4:;
    a0 = LD32(a0);
    a0 = a1 + a0;
    v0 = LD32(a0);
    a0 = a0 + 16;
    f12 = BITSF(LD32(v0+28));
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CE9FC;
L_088CE9FC:;
    goto L_088CE9DC;
}

/* 088CEA04 */
u64 func_088CEA04(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088CEA04:;
    v1 = LD32(a0+44);
    v0 = a1 << 1;
    v0 = v0 + a1;
    cnd_ = v1 == 0;
    v0 = v0 << 2;
    if (cnd_) { goto L_088CEA4C; }
    goto L_088CEA18;
L_088CEA18:;
    v1 = LD32(v1+16);
    v1 = v0 + v1;
    v0 = LD32(v1+8);
    v1 = (v0 >> 2) & 0x1;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 != 0;
    a0 = D_08B160CC - (24780);
    if (cnd_) { goto L_088CEA4C; }
    goto L_088CEA34;
L_088CEA34:;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(a0+24780, a1); goto L_088CEA4C; }
    goto L_088CEA3C;
L_088CEA3C:;
    v1 = LD32(a0+24780);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(a0+24780, a1); goto L_088CEA4C; }
    goto L_088CEA4C;
L_088CEA4C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CEA54 */
u64 func_088CEA54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088CEA54:;
    v1 = LD32(a0+44);
    v0 = a1 << 1;
    v0 = v0 + a1;
    cnd_ = v1 == 0;
    v0 = v0 << 2;
    if (cnd_) { goto L_088CEAA0; }
    goto L_088CEA68;
L_088CEA68:;
    v1 = LD32(v1+16);
    v1 = v0 + v1;
    v0 = LD32(v1+8);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    a0 = D_08B160CC - (24780);
    if (cnd_) { goto L_088CEAA0; }
    goto L_088CEA80;
L_088CEA80:;
    v1 = LD32(a0+24780);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(a0+24780, a1); goto L_088CEA90; }
    goto L_088CEA90;
L_088CEA90:;
    return (u64)v0 | ((u64)v1 << 32);
L_088CEA98:;
    ST32(a0+24780, a1);
    return (u64)v0 | ((u64)v1 << 32);
L_088CEAA0:;
    a0 = D_08B160CC - (24780);
    goto L_088CEA98;
}

/* 088CEAA8 */
u32 func_088CEAA8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088CEAA8:;
    sp = sp - 80;
    s3 = a3 & 0xff;
    s0 = a0 + 0;
    cnd_ = (s32)a2 < 0;
    if (cnd_) { goto L_088CEBCC; }
    goto L_088CEACC;
L_088CEACC:;
    v0 = LD32(a0+12);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_088CEBD0; }
    goto L_088CEADC;
L_088CEADC:;
    v1 = LD32(a0+44);
    v0 = a2 << 1;
    v0 = v0 + a2;
    a0 = LD32(v1+16);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0+8);
    v1 = (v1 >> 2) & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_088CEBD0; }
    goto L_088CEB04;
L_088CEB04:;
    v0 = a2 << 2;
    a0 = LD32(s0);
    v0 = v0 + a2;
    v0 = v0 << 3;
    a0 = a0 + v0;
    v1 = a0 + 28;
    f3 = BITSF(LD32(a0+28));
    f5 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    f3 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    a0 = LD32(a0);
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f1));
    cnd_ = a0 == 0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_088CEBCC; }
    goto L_088CEB54;
L_088CEB54:;
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f0, f3, 14);
    cnd_ = !fcc;
    a0 = a0 + 4;
    if (cnd_) { goto L_088CEBCC; }
    goto L_088CEB68;
L_088CEB68:;
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f3, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+4); goto L_088CEBD0; }
    goto L_088CEB7C;
L_088CEB7C:;
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+4); goto L_088CEBD0; }
    goto L_088CEB90;
L_088CEB90:;
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+4); goto L_088CEBD0; }
    goto L_088CEBA4;
L_088CEBA4:;
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+4); goto L_088CEBD0; }
    goto L_088CEBB8;
L_088CEBB8:;
    f0 = BITSF(LD32(a0+20));
    fcc = FCMP(f2, f0, 14);
    cnd_ = fcc;
    v0 = a2 + 0;
    if (cnd_) { goto L_088CEBE4; }
    goto L_088CEBCC;
L_088CEBCC:;
    v1 = LD32(s0+4);
    goto L_088CEBD0;
L_088CEBD0:;
    s2 = D_08B160CC - (24780);
    v0 = (u32)-1;
    cnd_ = v1 != 0;
    ST32(s2+24780, v0);
    if (cnd_) { goto L_088CEC00; }
    goto L_088CEBE0;
L_088CEBE0:;
    v0 = LD32(s2+24780);
    goto L_088CEBE4;
L_088CEBE4:;
    sp = sp + 80;
    return v0;
L_088CEC00:;
    v0 = D_08AEC9A4 - (-13916);
    v1 = D_08AEC9A8 - (-13912);
    f0 = BITSF(LD32(v0-13916));
    f1 = BITSF(LD32(v1-13912));
    s1 = sp + 16;
    a0 = s1 + 0;
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+16, FBITS(f0));
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+28, FBITS(f1));
    f0 = func_08AA0F30(a0, a1);
    goto L_088CEC34;
L_088CEC34:;
    cnd_ = s3 == 0;
    if (cnd_) { a2 = ((u32)(uintptr_t)func_08AB67B8) - (26552); goto L_088CEC5C; }
    goto L_088CEC3C;
L_088CEC3C:;
    a2 = ((u32)(uintptr_t)func_08AB67E0) - (26592);
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = a2 + 26592;
    goto L_088CEC4C;
L_088CEC4C:;
    { rv_t r_ = func_088CE404(a0, a1, a2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CEC54;
L_088CEC54:;
    v0 = LD32(s2+24780);
    goto L_088CEBE4;
L_088CEC5C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = a2 + 26552;
    goto L_088CEC4C;
}

/* 088CEC6C */
rv_t func_088CEC6C(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEC6C:;
    sp = sp - 16;
    a1 = a1 << 2;
    a3 = D_08B2C0A8 - (-16216);
    v0 = LD32(a0+8);
    a1 = a1 + v0;
    a2 = LD32(a1);
    a1 = LD32(a0);
    a0 = a3 - 16216;
    v0 = a2 << 2;
    v0 = v0 + a2;
    v0 = v0 << 3;
    v0 = v0 + a1;
    v1 = LD32(v0);
    f2 = BITSF(LD32(v0+28));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(v1+4));
    v0 = v0 + 28;
    f0 = f0 + f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_088CED5C; }
    goto L_088CECC8;
L_088CECC8:;
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(a3-16216));
    f0 = f0 + f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) {  goto L_088CED60; }
    goto L_088CECE4;
L_088CECE4:;
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a0+12));
    f0 = f0 + f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088CED60; }
    goto L_088CED04;
L_088CED04:;
    f0 = BITSF(LD32(v1+12));
    f1 = BITSF(LD32(a0+8));
    f0 = f0 + f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088CED60; }
    goto L_088CED20;
L_088CED20:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(a0+20));
    f0 = f0 + f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088CED60; }
    goto L_088CED40;
L_088CED40:;
    f0 = BITSF(LD32(v1+20));
    f1 = BITSF(LD32(a0+16));
    f0 = f0 + f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = a2 + 0;
    if (cnd_) { goto L_088CED68; }
    goto L_088CED5C;
L_088CED5C:;
    goto L_088CED60;
L_088CED60:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088CED68:;
    v0 = D_08B2C0A4 - (-16220);
    v1 = LD32(v0-16220);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CED78;
L_088CED78:;
    goto L_088CED60;
}

/* 088CED80 */
u32 func_088CED80(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088CED80:;
    v0 = LD32(a0);
    v1 = a1 << 2;
    v1 = v1 + a1;
    v1 = v1 << 3;
    v1 = v1 + v0;
    v0 = LD32(v1);
    return v0;
}

/* 088CED9C */
u32 func_088CED9C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_088CED9C:;
    v0 = LD32(a0);
    v1 = a1 << 2;
    v1 = v1 + a1;
    v1 = v1 << 3;
    v0 = v0 + v1;
    v0 = v0 + 16;
    return v0;
}

/* 088CEDB8 */
u64 func_088CEDB8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088CEDB8:;
    v1 = LD32(a0+44);
    v0 = a1 << 1;
    v0 = v0 + a1;
    a0 = v0 << 2;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088CEDE0; }
    goto L_088CEDD0;
L_088CEDD0:;
    v0 = LD32(v1+16);
    v0 = a0 + v0;
    v1 = LD32(v0+8);
    v0 = (v1 >> 2) & 0x1;
    goto L_088CEDE0;
L_088CEDE0:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CEDE8 */
void func_088CEDE8(void)
{
L_088CEDE8:;
    return;
}

/* 088CEDF0 */
void func_088CEDF0(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEDF0:;
    a0 = D_08B2C0FC - (-16132);
    sp = sp - 16;
    a0 = a0 - 16132;
    func_088CDBF0(a0);
    goto L_088CEE04;
L_088CEE04:;
    sp = sp + 16;
    return;
}

/* 088CEE10 */
void func_088CEE10(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEE10:;
    sp = sp - 16;
    func_088CEDF0();
    goto L_088CEE20;
L_088CEE20:;
    func_088CEDE8();
    goto L_088CEE28;
L_088CEE28:;
    sp = sp + 16;
    return;
}

/* 088CEE34 */
void func_088CEE34(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEE34:;
    a0 = D_08B2C0FC - (-16132);
    sp = sp - 16;
    a0 = a0 - 16132;
    func_088CE3A0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CEE48;
L_088CEE48:;
    sp = sp + 16;
    return;
}

/* 088CEE54 */
void func_088CEE54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEE54:;
    sp = sp - 16;
    v0 = D_08B160D4 - (24788);
    v1 = 1;
    t0 = LD_U8(v0+24788);
    v0 = D_08B2C0F8 - (-16136);
    a3 = a0 + 0;
    ST8(v0-16136, v1);
    a0 = D_08B2C0FC - (-16132);
    v0 = D_08B2C0F9 - (-16135);
    a2 = a1 + 0;
    a0 = a0 - 16132;
    ST8(v0-16135, 0);
    cnd_ = t0 == 0;
    a1 = a3 + 0;
    if (cnd_) { goto L_088CEEAC; }
    goto L_088CEE90;
L_088CEE90:;
    func_088CE04C(a0, a1, a2);
    goto L_088CEE98;
L_088CEE98:;
    func_088CEF6C();
    goto L_088CEEA0;
L_088CEEA0:;
    sp = sp + 16;
    return;
L_088CEEAC:;
    func_088CEF4C();
    goto L_088CEEB4;
L_088CEEB4:;
    goto L_088CEE98;
}

/* 088CEEBC */
void func_088CEEBC(u32 a0)
{
L_088CEEBC:;
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    ST32(a0+8, 0);
    return;
}

/* 088CEED0 */
void func_088CEED0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEED0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 10;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CEEE8;
L_088CEEE8:;
    a0 = s0 + 4;
    func_08AA2B7C(a0, 0, 0, 0);
    goto L_088CEEF0;
L_088CEEF0:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088CEF14; }
    goto L_088CEEFC;
L_088CEEFC:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CEF04;
L_088CEF04:;
    sp = sp + 16;
    return;
L_088CEF14:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CEF24;
L_088CEF24:;
    goto L_088CEEFC;
}

/* 088CEF2C */
void func_088CEF2C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEF2C:;
    a0 = D_08B2C0FC - (-16132);
    sp = sp - 16;
    a0 = a0 - 16132;
    func_088CE160(a0);
    goto L_088CEF40;
L_088CEF40:;
    sp = sp + 16;
    return;
}

/* 088CEF4C */
void func_088CEF4C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEF4C:;
    a0 = D_08B2C0FC - (-16132);
    sp = sp - 16;
    a0 = a0 - 16132;
    func_088CE1D4(a0);
    goto L_088CEF60;
L_088CEF60:;
    sp = sp + 16;
    return;
}

/* 088CEF6C */
void func_088CEF6C(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEF6C:;
    a0 = D_08B2C0FC - (-16132);
    sp = sp - 16;
    a0 = a0 - 16132;
    func_088CE238(a0);
    goto L_088CEF80;
L_088CEF80:;
    sp = sp + 16;
    return;
}

/* 088CEF8C */
rv_t func_088CEF8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CEF8C:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B2C0FC - (-16132);
    cnd_ = v0 != 0;
    a0 = a0 - 16132;
    if (cnd_) { goto L_088CEFF8; }
    goto L_088CEFC0;
L_088CEFC0:;
    v0 = s1 < 0x1u;
    goto L_088CEFC4;
L_088CEFC4:;
    a0 = D_08B2C0FC - (-16132);
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = a0 - 16132;
    if (cnd_) { goto L_088CEFE8; }
    goto L_088CEFD4;
L_088CEFD4:;
    goto L_088CEFD8;
L_088CEFD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088CEFE8:;
    { u64 r_ = func_088CD9B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CEFF0;
L_088CEFF0:;
    goto L_088CEFD8;
L_088CEFF8:;
    { rv_t r_ = func_088CD954(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CF000;
L_088CF000:;
    v0 = s1 < 0x1u;
    goto L_088CEFC4;
}

/* 088CF008 */
rv_t func_088CF008(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF008:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088CEF8C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CF01C;
L_088CF01C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CF028 */
rv_t func_088CF028(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF028:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088CEF8C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CF03C;
L_088CF03C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CF048 */
void func_088CF048(u32 a0, float f12, float f13, float f14, float f15)
{
L_088CF048:;
    f15 = f13 + f15;
    f14 = f12 + f14;
    ST32(a0+44, FBITS(f12));
    ST32(a0+60, FBITS(f15));
    ST32(a0+40, FBITS(f14));
    ST32(a0+32, FBITS(f12));
    ST32(a0+48, FBITS(f13));
    ST32(a0+36, FBITS(f14));
    ST32(a0+52, FBITS(f13));
    ST32(a0+56, FBITS(f15));
    return;
}

/* 088CF074 */
void func_088CF074(u32 a0, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0;
L_088CF074:;
    f15 = f13 + f15;
    f14 = f12 + f14;
    v0 = 1;
    ST8(a0+93, v0);
    ST32(a0+8, FBITS(f14));
    ST32(a0+12, FBITS(f12));
    ST32(a0+28, FBITS(f15));
    ST32(a0, FBITS(f12));
    ST32(a0+16, FBITS(f13));
    ST32(a0+4, FBITS(f14));
    ST32(a0+20, FBITS(f13));
    ST32(a0+24, FBITS(f15));
    return;
}

/* 088CF0A8 */
void func_088CF0A8(u32 a0, float f12, float f13, float f14, float f15, float f16)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CF0A8:;
    sp = sp - 32;
    v0 = D_08AEC9B4 - (-13900);
    {vr0=0.63661977236f;}
    f23 = f12;
    s0 = a0 + 0;
    f22 = f13;
    f2 = BITSF(LD32(v0-13900));
    v0 = FBITS(f16);
    {v[8]=BITSF(v0);}
    f0 = f14 * f2;
    f1 = f15 * f2;
    {vr4=BITSF(v0);}
    {float s0=vr4;float t0=vr0;float d0=s0*t0;vr4=d0;}
    {float s0=v[8];float t0=vr0;float d0=s0*t0;vr0=d0;}
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);vr4=d0;}
    f12 = f0;
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f13 = f1;
    {v0=FBITS(vr4);}
    f20 = BITSF(v0);
    f21 = f0;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_088CF128;
L_088CF128:;
    a0 = 0 + 0;
    v1 = s0 + 0;
    goto L_088CF130;
L_088CF130:;
    f3 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+16));
    a0 = a0 + 1;
    f0 = f20 * f3;
    f1 = f20 * f2;
    f3 = f21 * f3;
    f2 = f21 * f2;
    f0 = f23 + f0;
    f1 = f22 + f1;
    v0 = a0 < 0x4u;
    f0 = f0 - f2;
    f1 = f1 + f3;
    ST32(v1, FBITS(f0));
    ST32(v1+16, FBITS(f1));
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088CF130; }
    goto L_088CF170;
L_088CF170:;
    ST8(s0+93, 0);
    sp = sp + 32;
    { v[0]=vr0;v[4]=vr4;return; }
    v[0]=vr0;v[4]=vr4;
}

/* 088CF194 */
u64 func_088CF194(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF194:;
    sp = sp - 16;
    s0 = a1 & 0xff;
    s1 = a0 + 0;
    { u64 r_ = func_089072C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF1B0;
L_088CF1B0:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088CF1C4; }
    goto L_088CF1B8;
L_088CF1B8:;
    ST32(s1+88, 0);
    ST8(s1+92, 0);
    ST8(s1+93, 0);
    goto L_088CF1C4;
L_088CF1C4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CF1D4 */
void func_088CF1D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CF1D4:;
    sp = sp - 32;
    v0 = D_08B2C1BC - (-15940);
    ST8(v0-15940, 0);
    s2 = 1;
    func_08901434(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088CF1FC;
L_088CF1FC:;
    s0 = 0 + 0;
    func_0884A58C(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088CF204;
L_088CF204:;
    v0 = D_08B2C220 - (-15840);
    v1 = D_08B160E0 - (24800);
    s3 = v0 - 15840;
    s1 = v1 + 24800;
    goto L_088CF214;
L_088CF214:;
    v0 = s0 + s3;
    a0 = LD32(s1);
    ST8(v0, s2);
    a1 = v0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CF234;
L_088CF234:;
    v1 = (s32)s0 < 16;
    cnd_ = v1 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_088CF214; }
    goto L_088CF240;
L_088CF240:;
    sp = sp + 32;
    return;
}

/* 088CF25C */
void func_088CF25C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF25C:;
    sp = sp - 16;
    func_0884A5D4(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CF26C;
L_088CF26C:;
    func_08901478();
    goto L_088CF274;
L_088CF274:;
    sp = sp + 16;
    return;
}

/* 088CF280 */
void func_088CF280(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF280:;
    sp = sp - 16;
    func_08901480(t1, t2, t3);
    goto L_088CF290;
L_088CF290:;
    sp = sp + 16;
    return;
}

/* 088CF29C */
void func_088CF29C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF29C:;
    sp = sp - 16;
    s0 = D_08B2C20C - (-15860);
    func_089014BC(t1, t2, t3);
    goto L_088CF2B0;
L_088CF2B0:;
    v1 = (u32)-1;
    a1 = LD32(s0-15860);
    v0 = D_08B160DC - (24796);
    ST32(v0+24796, v1);
    cnd_ = a1 != 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088CF2E8; }
    goto L_088CF2C8;
L_088CF2C8:;
    v0 = s0 - 15860;
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    func_0884A624(a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088CF2D8;
L_088CF2D8:;
    sp = sp + 16;
    return;
L_088CF2E8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF2F0;
L_088CF2F0:;
    ST32(s0-15860, 0);
    goto L_088CF2C8;
}

/* 088CF2F8 */
void func_088CF2F8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF2F8:;
    sp = sp - 16;
    v0 = D_08B2C1C4 - (-15932);
    v0 = v0 - 15932;
    v1 = 10;
    goto L_088CF30C;
L_088CF30C:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_088CF30C; }
    goto L_088CF31C;
L_088CF31C:;
    a0 = 1;
    v0 = D_08B2C1F8 - (-15880);
    ST8(v0-15880, a0);
    v1 = D_08B2C1F0 - (-15888);
    v0 = D_08B2C1F4 - (-15884);
    ST32(v1-15888, 0);
    v1 = D_08B2C1FC - (-15876);
    ST32(v0-15884, 0);
    v0 = D_08B2C200 - (-15872);
    ST32(v1-15876, 0);
    v1 = D_08B2C204 - (-15868);
    ST32(v0-15872, 0);
    v0 = D_08B2C208 - (-15864);
    ST32(v1-15868, 0);
    ST32(v0-15864, 0);
    func_0884A724(a1, a2, a3, t0, t1, t2, t3, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CF35C;
L_088CF35C:;
    func_08901758(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088CF364;
L_088CF364:;
    sp = sp + 16;
    return;
}

/* 088CF370 */
u64 func_088CF370(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF370:;
    sp = sp - 16;
    func_0884A7D4(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CF380;
L_088CF380:;
    { u64 r_ = func_08901774(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF388;
L_088CF388:;
    v0 = D_08B2C1F8 - (-15880);
    ST8(v0-15880, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CF39C */
void func_088CF39C(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF39C:;
    sp = sp - 16;
    func_0890179C();
    goto L_088CF3AC;
L_088CF3AC:;
    sp = sp + 16;
    return;
}

/* 088CF3B8 */
rv_t func_088CF3B8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_088CF3B8:;
    sp = sp - 400;
    s5 = a1 + 0;
    s4 = a2 + 0;
    s3 = a0 + 0;
    f4 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f4, f1, 14);
    cnd_ = fcc;
    ST32(sp+192, a3);
    if (cnd_) { goto L_088CF748; }
    goto L_088CF40C;
L_088CF40C:;
    f5 = BITSF(LD32(a0+12));
    f2 = BITSF(LD32(a0+8));
    fcc = FCMP(f5, f2, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_088CF74C; }
    goto L_088CF424;
L_088CF424:;
    f6 = BITSF(LD32(a0+20));
    f3 = BITSF(LD32(a0+16));
    fcc = FCMP(f6, f3, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_088CF74C; }
    goto L_088CF43C;
L_088CF43C:;
    v0 = D_08AEC9B8 - (-13896);
    f1 = f1 + f4;
    f2 = f2 + f5;
    f3 = f3 + f6;
    f0 = BITSF(LD32(v0-13896));
    f8 = BITSF(LD32(a1));
    f7 = BITSF(LD32(a1+4));
    f3 = f3 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f9 = BITSF(LD32(a1+8));
    v0 = FBITS(f4);
    v1 = FBITS(f5);
    {v[0]=BITSF(v0);}
    a0 = FBITS(f6);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f1 = f1 + f8;
    f2 = f2 + f7;
    f3 = f3 + f9;
    a1 = D_08B15A00 - (23040);
    v0 = LD32(a1+23040);
    ST32(sp, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    s0 = 0 + 0;
    {t0=FBITS(v[0]);}
    ST32(sp+4, FBITS(f2));
    f20 = BITSF(t0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    cnd_ = (s32)v0 <= 0;
    ST32(sp+24, FBITS(f6));
    if (cnd_) { goto L_088CF748; }
    goto L_088CF4C4;
L_088CF4C4:;
    v1 = D_08B22E88 - (11912);
    s2 = v1 + 11912;
    s7 = D_08B15A04 - (23044);
    s6 = D_08B159FC - (23036);
    s1 = 1;
    fp = D_08B15A0C - (23052);
    v0 = LD32(s7+23044);
    goto L_088CF4E0;
L_088CF4E0:;
    a0 = sp + 0;
    f12 = f20;
    cnd_ = s0 == v0;
    v1 = s1 << (s0 & 31);
    if (cnd_) { goto L_088CF510; }
    goto L_088CF4F0;
L_088CF4F0:;
    v0 = D_08B230A8 - (12456);
    ST8(v0+12456, v1);
    v1 = D_08B230AC - (12460);
    v1 = v1 + 12460;
    ST8(fp+23052, s1);
    ST32(s6+23036, s2);
    ST32(s7+23044, s0);
    ST8(v1+4, s1);
    goto L_088CF510;
L_088CF510:;
    v1 = LD32(s6+23036);
    s0 = s0 + 1;
    v0 = LD_U8(v1+132);
    cnd_ = v0 != 0;
    s2 = s2 + 136;
    if (cnd_) { goto L_088CF7C0; }
    goto L_088CF524;
L_088CF524:;
    a0 = D_08B15A00 - (23040);
    v0 = LD32(a0+23040);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    v0 = LD32(s7+23044);
    if (cnd_) { goto L_088CF4E0; }
    goto L_088CF538;
L_088CF538:;
    v0 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CF74C; }
    goto L_088CF544;
L_088CF544:;
    f9 = BITSF(LD32(s5+8));
    goto L_088CF548;
L_088CF548:;
    f8 = BITSF(LD32(s5));
    f7 = BITSF(LD32(s5+4));
    s2 = sp + 32;
    a2 = 0 + 0;
    a1 = s2 + 0;
    t1 = s2 + 0;
    t0 = s2 + 0;
    a3 = s2 + 0;
    v0 = LD32(s4);
    v1 = LD32(s4+4);
    a0 = LD32(s4+32);
    {u32 a_=sp+(224);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {v[104]=BITSF(v0);}
    {u32 a_=sp+(256);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {v[105]=BITSF(v1);}
    v0 = LD32(s4+8);
    v1 = LD32(s4+12);
    {v[106]=BITSF(v0);}
    {v[100]=BITSF(v1);}
    v0 = LD32(s4+16);
    v1 = LD32(s4+20);
    {v[101]=BITSF(v0);}
    v0 = LD32(s4+24);
    {v[102]=BITSF(v1);}
    {v[96]=BITSF(v0);}
    v1 = LD32(s4+28);
    {v[97]=BITSF(v1);}
    {v[98]=BITSF(a0);}
    goto L_088CF5BC;
L_088CF5BC:;
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s3)); goto L_088CF5CC; }
    goto L_088CF5C8;
L_088CF5C8:;
    f0 = BITSF(LD32(s3+4));
    goto L_088CF5CC;
L_088CF5CC:;
    v0 = a2 & 0x2;
    ST32(a3, FBITS(f0));
    cnd_ = v0 == 0;
    v1 = t0 + 0;
    if (cnd_) { goto L_088CF7B8; }
    goto L_088CF5DC;
L_088CF5DC:;
    f0 = BITSF(LD32(s3+12));
    goto L_088CF5E0;
L_088CF5E0:;
    v0 = a2 & 0x4;
    ST32(v1+4, FBITS(f0));
    cnd_ = v0 == 0;
    v1 = t1 + 0;
    if (cnd_) { goto L_088CF7B0; }
    goto L_088CF5F0;
L_088CF5F0:;
    f0 = BITSF(LD32(s3+20));
    goto L_088CF5F4;
L_088CF5F4:;
    ST32(v1+8, FBITS(f0));
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(208);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    {v[20]=BITSF(v0);}
    {float s0=v[104];float s1=v[105];float s2=v[106];float s3=v[107];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    v0 = LD32(a1+8);
    {v[21]=BITSF(v1);}
    {float s0=v[100];float s1=v[101];float s2=v[102];float s3=v[103];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[22]=BITSF(v0);}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[16]);}
    {a0=FBITS(v[17]);}
    {v0=FBITS(v[18]);}
    f2 = BITSF(v1);
    f3 = BITSF(v0);
    f0 = BITSF(a0);
    f4 = f2 + f8;
    f5 = f3 + f9;
    f0 = f0 + f7;
    a2 = a2 + 1;
    v0 = a2 < 0x8u;
    ST32(sp+128, v1);
    a3 = a3 + 12;
    t0 = t0 + 12;
    ST32(sp+132, a0);
    t1 = t1 + 12;
    ST32(sp+136, FBITS(f3));
    ST32(sp, v1);
    ST32(sp+4, a0);
    ST32(sp+8, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f0));
    ST32(a1, FBITS(f4));
    ST32(a1+4, FBITS(f0));
    ST32(sp+24, FBITS(f5));
    ST32(a1+8, FBITS(f5));
    cnd_ = v0 != 0;
    a1 = a1 + 12;
    if (cnd_) { goto L_088CF5BC; }
    goto L_088CF698;
L_088CF698:;
    v0 = D_08AD8598 - (-31336);
    a2 = v0 - 31336;
    v1 = a2 & 0x3;
    a3 = sp + 144;
    cnd_ = v1 == 0;
    t0 = a2 + 48;
    if (cnd_) { goto L_088CF77C; }
    goto L_088CF6B0;
L_088CF6B0:;
    v0 = t0 + 0;
    goto L_088CF6B4;
L_088CF6B4:;
    a1 = LDU32(a2);
    t0 = LDU32(a2+4);
    v1 = LDU32(a2+8);
    a0 = LDU32(a2+12);
    STU32(a3, a1);
    STU32(a3+4, t0);
    STU32(a3+8, v1);
    STU32(a3+12, a0);
    a2 = a2 + 16;
    cnd_ = a2 != v0;
    a3 = a3 + 16;
    if (cnd_) { goto L_088CF6B4; }
    goto L_088CF700;
L_088CF700:;
    s1 = 0 + 0;
    goto L_088CF704;
L_088CF704:;
    s0 = sp + 0;
    goto L_088CF708;
L_088CF708:;
    v0 = LD_U16(s0+144);
    v1 = LD_U16(s0+146);
    a2 = LD32(sp+192);
    a0 = v0 << 1;
    a1 = v1 << 1;
    a0 = a0 + v0;
    a1 = a1 + v1;
    a0 = a0 << 2;
    a1 = a1 << 2;
    a0 = s2 + a0;
    a1 = s2 + a1;
    s1 = s1 + 1;
    func_088CF39C();
    goto L_088CF73C;
L_088CF73C:;
    v0 = s1 < 0xcu;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088CF708; }
    goto L_088CF748;
L_088CF748:;
    goto L_088CF74C;
L_088CF74C:;
    sp = sp + 400;
    return (rv_t){ v0, v1, f0 };
L_088CF77C:;
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
    if (cnd_) { goto L_088CF77C; }
    goto L_088CF7A8;
L_088CF7A8:;
    s1 = 0 + 0;
    goto L_088CF704;
L_088CF7B0:;
    f0 = BITSF(LD32(s3+16));
    goto L_088CF5F4;
L_088CF7B8:;
    f0 = BITSF(LD32(s3+8));
    goto L_088CF5E0;
L_088CF7C0:;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CF7D4;
L_088CF7D4:;
    {u32 a_=sp+(272);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(320);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088CF524; }
    goto L_088CF7E8;
L_088CF7E8:;
    f9 = BITSF(LD32(s5+8));
    goto L_088CF548;
}

/* 088CF7F0 */
void func_088CF7F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CF7F0:;
    sp = sp - 32;
    s2 = D_08B2C20C - (-15860);
    v0 = LD32(s2-15860);
    s3 = s2 - 15860;
    s0 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CF838; }
    goto L_088CF81C;
L_088CF81C:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088CF880; }
    goto L_088CF824;
L_088CF824:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088CF838; }
    goto L_088CF82C;
L_088CF82C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF834;
L_088CF834:;
    ST32(s2-15860, 0);
    goto L_088CF838;
L_088CF838:;
    a0 = s0 + 0;
    ST32(s3+8, 0);
    cnd_ = s0 == 0;
    ST32(s3+4, 0);
    if (cnd_) { goto L_088CF8B4; }
    goto L_088CF848;
L_088CF848:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF850;
L_088CF850:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s3+8, v1);
    ST32(s3+4, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CF864;
L_088CF864:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    ST32(s2-15860, v0);
    if (cnd_) { goto L_088CF8A4; }
    goto L_088CF874;
L_088CF874:;
    ST32(s3+4, 0);
    ST32(s3+8, 0);
    goto L_088CF87C;
L_088CF87C:;
    goto L_088CF880;
L_088CF880:;
    v1 = (u32)-1;
    v0 = D_08B160DC - (24796);
    ST32(v0+24796, v1);
    sp = sp + 32;
    return;
L_088CF8A4:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF8AC;
L_088CF8AC:;
    goto L_088CF880;
L_088CF8B4:;
    ST32(s2-15860, 0);
    goto L_088CF87C;
}

/* 088CF8BC */
u64 func_088CF8BC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF8BC:;
    v1 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    sp = sp - 16;
    a1 = a1 < 0x1u;
    v1 = v1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08B2C218 - (-15848);
    s1 = D_08B2C20C - (-15860);
    a0 = a1 & a0;
    v0 = D_08B2C12C - (-16084);
    a1 = a1 & v1;
    v0 = v0 - 16084;
    v1 = s1 - 15860;
    cnd_ = a1 == 0;
    a3 = t0 - 15848;
    if (cnd_) { goto L_088CF924; }
    goto L_088CF904;
L_088CF904:;
    ST32(v1+8, 0);
    ST8(v0+93, 0);
    ST32(s1-15860, 0);
    ST32(t0-15848, 0);
    ST32(a3+4, 0);
    ST32(v1+4, 0);
    ST32(v0+88, 0);
    ST8(v0+92, 0);
    goto L_088CF924;
L_088CF924:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088CF948; }
    goto L_088CF92C;
L_088CF92C:;
    v0 = LD32(s1-15860);
    s0 = s1 - 15860;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088CF958; }
    goto L_088CF93C;
L_088CF93C:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_088CF948;
L_088CF948:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088CF958:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF960;
L_088CF960:;
    ST32(s1-15860, 0);
    goto L_088CF93C;
}

/* 088CF968 */
rv_t func_088CF968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF968:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088CF8BC(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF97C;
L_088CF97C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CF988 */
rv_t func_088CF988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CF988:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088CF8BC(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CF99C;
L_088CF99C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CF9A8 */
void func_088CF9A8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_088CF9A8:;
    v0 = D_08B2C230 - (-15824);
    a0 = 1;
    ST8(v0-15824, a0);
    v1 = D_08B2C234 - (-15820);
    v0 = D_08B2C6E8 - (-14616);
    ST32(v1-15820, 0);
    ST32(v0-14616, 0);
    return;
}

/* 088CF9C8 */
u64 func_088CF9C8(u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, t0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CF9C8:;
    sp = sp - 32;
    v1 = D_08B2C230 - (-15824);
    v0 = LD_U8(v1-15824);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088CFA84; }
    goto L_088CF9E0;
L_088CF9E0:;
    v0 = D_08B2C234 - (-15820);
    a0 = LD32(v0-15820);
    cnd_ = a0 == 0;
    ST8(v1-15824, 0);
    if (cnd_) { goto L_088CFA80; }
    goto L_088CF9F0;
L_088CF9F0:;
    a1 = D_08B2C238 - (-15816);
    v1 = LD32(a1-15816);
    t0 = 1;
    v0 = (s32)t0 < (s32)a0;
    cnd_ = v0 == 0;
    ST32(sp, v1);
    if (cnd_) { goto L_088CFA78; }
    goto L_088CFA08;
L_088CFA08:;
    v0 = a1 - 15816;
    t3 = a0 + 0;
    t2 = v0 + 4;
    goto L_088CFA14;
L_088CFA14:;
    v1 = LD32(sp);
    t1 = LD32(t2);
    a1 = sp + 0;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088CFA64; }
    goto L_088CFA28;
L_088CFA28:;
    a2 = LD32(t1+4);
    goto L_088CFA2C;
L_088CFA2C:;
    v0 = LD32(v1+4);
    a0 = a2 < v0;
    v0 = v0 < a2;
    cnd_ = v0 != 0;
    a1 = v1 + 12;
    if (cnd_) { goto L_088CFA58; }
    goto L_088CFA40;
L_088CFA40:;
    v0 = (u32)((s32)t0 >> (a3 & 31));
    cnd_ = a0 != 0;
    v0 = v0 & 0x1;
    if (cnd_) { goto L_088CFA54; }
    goto L_088CFA4C;
L_088CFA4C:;
    cnd_ = v0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_088CFA58; }
    goto L_088CFA54;
L_088CFA54:;
    a1 = v1 + 8;
    goto L_088CFA58;
L_088CFA58:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088CFA2C; }
    goto L_088CFA64;
L_088CFA64:;
    t0 = t0 + 1;
    v0 = (s32)t0 < (s32)t3;
    ST32(a1, t1);
    cnd_ = v0 != 0;
    t2 = t2 + 4;
    if (cnd_) { goto L_088CFA14; }
    goto L_088CFA78;
L_088CFA78:;
    a0 = LD32(sp);
    { u64 r_ = func_088CFE48(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFA80;
L_088CFA80:;
    goto L_088CFA84;
L_088CFA84:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CFA8C */
u32 func_088CFA8C(u32 a0, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFA8C:;
    sp = sp - 16;
    s0 = D_08B2C6E8 - (-14616);
    v0 = LD32(s0-14616);
    s2 = D_08B2C234 - (-15820);
    v0 = a0 + v0;
    v0 = v0 < 0x4001u;
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CFACC; }
    goto L_088CFABC;
L_088CFABC:;
    v0 = LD32(s2-15820);
    v0 = (s32)v0 < 300;
    cnd_ = v0 != 0;
    a1 = LD32(s2-15820);
    if (cnd_) { goto L_088CFAE0; }
    goto L_088CFACC;
L_088CFACC:;
    { u64 r_ = func_088CF9C8(a2, a3, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFAD4;
L_088CFAD4:;
    func_088CF9A8();
    goto L_088CFADC;
L_088CFADC:;
    a1 = LD32(s2-15820);
    goto L_088CFAE0;
L_088CFAE0:;
    a0 = LD32(s0-14616);
    v1 = D_08B2C6EC - (-14612);
    a2 = a1 << 2;
    a3 = a0 + s1;
    a1 = a1 + 1;
    v1 = v1 - 14612;
    ST32(s0-14616, a3);
    v0 = D_08B2C238 - (-15816);
    a0 = a0 + v1;
    ST32(s2-15820, a1);
    v0 = v0 - 15816;
    a2 = a2 + v0;
    v0 = a0 + 0;
    ST32(a2, a0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    sp = sp + 16;
    return v0;
}

/* 088CFB38 */
u64 func_088CFB38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088CFB38:;
    sp = sp - 32;
    v0 = D_08B2C230 - (-15824);
    s3 = a1 + 0;
    v1 = LD_U8(v0-15824);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088CFBCC; }
    goto L_088CFB68;
L_088CFB68:;
    v0 = D_08AEC9BC - (-13892);
    f0 = BITSF(LD32(a0+108));
    f1 = BITSF(LD32(v0-13892));
    s2 = LD32(a0+8);
    s4 = 0 + 0;
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_088CFBEC; }
    goto L_088CFB8C;
L_088CFB8C:;
    s4 = 1;
    goto L_088CFB90;
L_088CFB90:;
    a0 = 24;
    v0 = func_088CFA8C(a0, a2, a3, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CFB98;
L_088CFB98:;
    ST32(v0+16, s1);
    a0 = s2 + 0;
    s0 = v0 + 0;
    ST32(v0+20, s3);
    ST32(v0, 0);
    v0 = func_0890EC2C(a0);
    goto L_088CFBB0;
L_088CFBB0:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_08835410(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFBBC;
L_088CFBBC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s4 + 0;
    v0 = func_088CFDF4(a0, a1, a2);
    goto L_088CFBCC;
L_088CFBCC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088CFBEC:;
    v0 = func_0890ED94(a0);
    goto L_088CFBF4;
L_088CFBF4:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088CFB90; }
    goto L_088CFC00;
L_088CFC00:;
    s4 = 1;
    goto L_088CFB90;
}

/* 088CFC08 */
u64 func_088CFC08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_088CFC08:;
    sp = sp - 128;
    v0 = D_08B2C230 - (-15824);
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = a0 + 0;
    v1 = LD_U8(v0-15824);
    cnd_ = v1 == 0;
    f20 = f12;
    if (cnd_) { goto L_088CFDB0; }
    goto L_088CFC4C;
L_088CFC4C:;
    v0 = D_08AEC9C0 - (-13888);
    f1 = BITSF(LD32(a0+248));
    f0 = BITSF(LD32(v0-13888));
    f14 = BITSF(LD32(a2+32));
    f2 = BITSF(LD32(a2));
    f3 = BITSF(LD32(a2+4));
    f4 = BITSF(LD32(a2+8));
    f5 = BITSF(LD32(a2+12));
    f6 = BITSF(LD32(a2+16));
    f7 = BITSF(LD32(a2+20));
    f8 = BITSF(LD32(a2+24));
    f9 = BITSF(LD32(a2+28));
    fcc = FCMP(f1, f0, 2);
    f12 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f13 = BITSF(LD32(t1+8));
    f10 = BITSF(LD32(t1));
    f11 = BITSF(LD32(t1+4));
    ST32(sp+16, FBITS(f2));
    s6 = 0 + 0;
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+28, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f7));
    ST32(sp+40, FBITS(f8));
    ST32(sp+44, FBITS(f9));
    ST32(sp+48, FBITS(f14));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f12));
    ST32(sp+64, FBITS(f10));
    ST32(sp+68, FBITS(f11));
    ST32(sp+72, FBITS(f13));
    cnd_ = fcc;
    s2 = LD32(a0+16);
    if (cnd_) { goto L_088CFDDC; }
    goto L_088CFCE0;
L_088CFCE0:;
    s6 = 1;
    goto L_088CFCE4;
L_088CFCE4:;
    v1 = LD32(s2+8);
    goto L_088CFCE8;
L_088CFCE8:;
    a0 = 92;
    v0 = 2;
    s1 = 1;
    if (v1 == 0) s1 = v0;
    v0 = func_088CFA8C(a0, a2, a3, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088CFCFC;
L_088CFCFC:;
    f0 = BITSF(LD32(sp+4));
    v1 = v0 + 20;
    s0 = v0 + 0;
    ST32(v1+4, FBITS(f0));
    v0 = v0 + 32;
    a1 = s0 + 76;
    f0 = BITSF(LD32(sp+8));
    ST32(s0, s1);
    a0 = s2 + 0;
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(sp));
    ST32(s0+16, s3);
    ST32(s0+20, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+48));
    ST32(v0+4, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    ST32(v0+32, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+32));
    ST32(v0+12, FBITS(f1));
    ST32(v0+16, FBITS(f0));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+40));
    ST32(v0+20, FBITS(f1));
    ST32(v0+24, FBITS(f0));
    f1 = BITSF(LD32(sp+44));
    f0 = BITSF(LD32(sp+16));
    ST32(v0+28, FBITS(f1));
    ST32(s0+32, FBITS(f0));
    f0 = BITSF(LD32(sp+68));
    f1 = BITSF(LD32(sp+64));
    ST32(s0+68, s4);
    ST32(a1+4, FBITS(f0));
    f0 = BITSF(LD32(sp+72));
    ST32(s0+76, FBITS(f1));
    ST32(s0+72, s5);
    ST32(a1+8, FBITS(f0));
    ST32(s0+88, FBITS(f20));
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFDA0;
L_088CFDA0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s6 + 0;
    v0 = func_088CFDF4(a0, a1, a2);
    goto L_088CFDB0;
L_088CFDB0:;
    sp = sp + 128;
    return (u64)v0 | ((u64)v1 << 32);
L_088CFDDC:;
    a0 = s2 + 0;
    { u64 r_ = func_088F3F3C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFDE4;
L_088CFDE4:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+8); goto L_088CFCE8; }
    goto L_088CFDEC;
L_088CFDEC:;
    s6 = 1;
    goto L_088CFCE4;
}

/* 088CFDF4 */
u32 func_088CFDF4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFDF4:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 1;
    s0 = a2 & 0xff;
    v0 = func_089017A4(a0);
    goto L_088CFE18;
L_088CFE18:;
    v0 = v0 << 16;
    cnd_ = s0 == 0;
    s1 = s1 | v0;
    if (cnd_) { goto L_088CFE2C; }
    goto L_088CFE24;
L_088CFE24:;
    v0 = 0x80000000u;
    s1 = s1 | v0;
    goto L_088CFE2C;
L_088CFE2C:;
    ST32(s2+4, s1);
    sp = sp + 16;
    return v0;
}

/* 088CFE48 */
u64 func_088CFE48(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFE48:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+8);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CFEC4; }
    goto L_088CFE64;
L_088CFE64:;
    v0 = LD32(s0);
    goto L_088CFE68;
L_088CFE68:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088CFEB4; }
    goto L_088CFE70;
L_088CFE70:;
    cnd_ = (s32)v0 < 0;
    v0 = (s32)v0 < 3;
    if (cnd_) { goto L_088CFE88; }
    goto L_088CFE78;
L_088CFE78:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+12); goto L_088CFE8C; }
    goto L_088CFE80;
L_088CFE80:;
    a0 = s0 + 0;
    { u64 r_ = func_088CFEF4(a0, t3, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFE88;
L_088CFE88:;
    a0 = LD32(s0+12);
    goto L_088CFE8C;
L_088CFE8C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088CFEA4; }
    goto L_088CFE94;
L_088CFE94:;
    goto L_088CFE98;
L_088CFE98:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088CFEA4:;
    { u64 r_ = func_088CFE48(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFEAC;
L_088CFEAC:;
    goto L_088CFE98;
L_088CFEB4:;
    a0 = s0 + 0;
    { u64 r_ = func_088CFED4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFEBC;
L_088CFEBC:;
    a0 = LD32(s0+12);
    goto L_088CFE8C;
L_088CFEC4:;
    { u64 r_ = func_088CFE48(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088CFECC;
L_088CFECC:;
    v0 = LD32(s0);
    goto L_088CFE68;
}

/* 088CFED4 */
u64 func_088CFED4(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFED4:;
    sp = sp - 16;
    a1 = LD32(a0+20);
    a0 = LD32(a0+16);
    { rv_t r_ = func_088D1050(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CFEE8;
L_088CFEE8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CFEF4 */
u64 func_088CFEF4(u32 a0, u32 t3, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFEF4:;
    sp = sp - 16;
    t1 = a0 + 0;
    a1 = t1 + 20;
    f12 = BITSF(LD32(a0+88));
    a3 = LD32(t1+68);
    t0 = LD32(t1+72);
    a0 = LD32(a0+16);
    a2 = t1 + 32;
    t2 = 1;
    t1 = t1 + 76;
    { rv_t r_ = func_08819660(a0, a1, a2, a3, t0, t1, t2, t3, f12, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CFF24;
L_088CFF24:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088CFF30 */
void func_088CFF30(void)
{
L_088CFF30:;
    return;
}

/* 088CFF38 */
rv_t func_088CFF38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFF38:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    func_088CFF30();
    goto L_088CFF4C;
L_088CFF4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CFF58 */
rv_t func_088CFF58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFF58:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    func_088CFF30();
    goto L_088CFF6C;
L_088CFF6C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088CFF78 */
rv_t func_088CFF78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
L_088CFF78:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    a2 = D_08B306FC - (1788);
    a1 = a1 & a0;
    cnd_ = a1 == 0;
    v1 = a2 + 1788;
    if (cnd_) { goto L_088CFFD8; }
    goto L_088CFF98;
L_088CFF98:;
    v0 = D_08AECA44 - (-13756);
    f1 = BITSF(LD32(v0-13756));
    v0 = D_08AECA50 - (-13744);
    f0 = BITSF(LD32(v0-13744));
    v0 = D_08AECA48 - (-13752);
    ST32(a2+1788, 0);
    ST32(v1+24, FBITS(f0));
    f0 = BITSF(LD32(v0-13752));
    v0 = D_08AECA4C - (-13748);
    ST8(v1+28, 0);
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-13748));
    ST32(v1+16, FBITS(f1));
    ST32(v1+20, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+12, FBITS(f1));
    goto L_088CFFD8;
L_088CFFD8:;
    return (rv_t){ v0, v1, f0 };
}

/* 088CFFE0 */
rv_t func_088CFFE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088CFFE0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088CFF78(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088CFFF4;
L_088CFFF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D0000 */
void func_088D0000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0000:;
    sp = sp - 16;
    t0 = a0 + 0;
    s1 = a3 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_088D0050; }
    goto L_088D0024;
L_088D0024:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088D002C;
L_088D002C:;
    a0 = v0 + 40;
    a2 = v0 + 36;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088D005C; }
    goto L_088D0044;
L_088D0044:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088D002C; }
    goto L_088D0050;
L_088D0050:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D0084; }
    goto L_088D005C;
L_088D005C:;
    cnd_ = a3 == 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_088D0070; }
    goto L_088D0064;
L_088D0064:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    func_088D066C(a0, a1, a2, t1, t2, t3);
    goto L_088D0070;
L_088D0070:;
    sp = sp + 16;
    return;
L_088D0084:;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D008C;
L_088D008C:;
    a3 = v0 + 0;
    goto L_088D005C;
}

/* 088D0094 */
u32 func_088D0094(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D0094:;
    sp = sp - 32;
    s5 = a2 + 0;
    s4 = a0 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_088D0178; }
    goto L_088D00C8;
L_088D00C8:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088D00FC; }
    goto L_088D00D4;
L_088D00D4:;
    v1 = v0 + 0;
    goto L_088D00D8;
L_088D00D8:;
    a0 = v1 + 40;
    s2 = v1 + 36;
    v1 = LD32(v1);
    v0 = s3 < v1;
    cnd_ = v1 == s3;
    if (v0 == 0) s2 = a0;
    if (cnd_) { goto L_088D0178; }
    goto L_088D00F0;
L_088D00F0:;
    v0 = LD32(s2);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D00D8; }
    goto L_088D00FC;
L_088D00FC:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0104;
L_088D0104:;
    s1 = v0 + 4;
    s0 = v0 + 0;
    a2 = s5 + 0;
    a0 = s1 + 0;
    a1 = s3 + 0;
    func_088D0390(a0, a1, a2, 0, 0, 0);
    goto L_088D011C;
L_088D011C:;
    ST32(s0, s3);
    v0 = LD32(s4+4);
    ST32(s0+36, 0);
    v0 = v0 + 1;
    ST32(s0+40, 0);
    ST32(s4+4, v0);
    cnd_ = s1 == 0;
    ST32(s2, s0);
    if (cnd_) { goto L_088D0178; }
    goto L_088D013C;
L_088D013C:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D014C;
L_088D014C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+8, s3); goto L_088D0154; }
    goto L_088D0154;
L_088D0154:;
    sp = sp + 32;
    return v0;
L_088D0178:;
    v0 = 0 + 0;
    goto L_088D0154;
}

/* 088D0180 */
void func_088D0180(void)
{
L_088D0180:;
    return;
}

/* 088D0188 */
void func_088D0188(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0188:;
    sp = sp - 16;
    v0 = D_08B3071C - (1820);
    s1 = v0 + 1820;
    s0 = LD32(v0+1820);
    cnd_ = s0 == 0;
    s2 = s1 + 0;
    if (cnd_) { goto L_088D01E0; }
    goto L_088D01B0;
L_088D01B0:;
    v0 = LD32(s0+36);
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088D0234; }
    goto L_088D01C0;
L_088D01C0:;
    v0 = LD32(s0+40);
    goto L_088D01C4;
L_088D01C4:;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088D0224; }
    goto L_088D01D0;
L_088D01D0:;
    a0 = s0 + 4;
    { rv_t r_ = func_088D04EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D01D8;
L_088D01D8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D01E0;
L_088D01E0:;
    v0 = LD32(s2+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0214; }
    goto L_088D01EC;
L_088D01EC:;
    ST32(s2+16, 0);
    goto L_088D01F0;
L_088D01F0:;
    ST32(s1, 0);
    ST32(s2+12, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return;
L_088D0214:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D021C;
L_088D021C:;
    ST32(s2+16, 0);
    goto L_088D01F0;
L_088D0224:;
    func_08AB6830(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D022C;
L_088D022C:;
    goto L_088D01D0;
L_088D0234:;
    func_08AB6830(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D023C;
L_088D023C:;
    v0 = LD32(s0+40);
    goto L_088D01C4;
}

/* 088D0244 */
void func_088D0244(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0244:;
    sp = sp - 16;
    func_088D0188(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D0254;
L_088D0254:;
    func_088D0180();
    goto L_088D025C;
L_088D025C:;
    sp = sp + 16;
    return;
}

/* 088D0268 */
u64 func_088D0268(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0268:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D02B0; }
    goto L_088D0290;
L_088D0290:;
    v1 = D_08B3071C - (1820);
    v0 = v1 + 1820;
    ST32(v1+1820, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_088D02B0;
L_088D02B0:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D0310; }
    goto L_088D02C0;
L_088D02C0:;
    v0 = D_08B3071C - (1820);
    s0 = LD32(v0+1820);
    cnd_ = s0 == 0;
    s1 = v0 + 1820;
    if (cnd_) { goto L_088D02F8; }
    goto L_088D02D0;
L_088D02D0:;
    a1 = LD32(s0+36);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D0340; }
    goto L_088D02DC;
L_088D02DC:;
    a1 = LD32(s0+40);
    goto L_088D02E0;
L_088D02E0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D0330; }
    goto L_088D02E8;
L_088D02E8:;
    a0 = s0 + 4;
    { rv_t r_ = func_088D04EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D02F0;
L_088D02F0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D02F8;
L_088D02F8:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D0320; }
    goto L_088D0304;
L_088D0304:;
    ST32(s1+16, 0);
    goto L_088D0308;
L_088D0308:;
    ST32(s1+12, 0);
    goto L_088D0310;
L_088D0310:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D0320:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0328;
L_088D0328:;
    ST32(s1+16, 0);
    goto L_088D0308;
L_088D0330:;
    a0 = s1 + 0;
    func_08AB6830(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D0338;
L_088D0338:;
    goto L_088D02E8;
L_088D0340:;
    a0 = s1 + 0;
    func_08AB6830(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D0348;
L_088D0348:;
    a1 = LD32(s0+40);
    goto L_088D02E0;
}

/* 088D0350 */
rv_t func_088D0350(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0350:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088D0268(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0364;
L_088D0364:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D0370 */
rv_t func_088D0370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0370:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088D0268(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0384;
L_088D0384:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D0390 */
void func_088D0390(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D0390:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = D_08AF7C80 - (31872);
    ST32(a0+8, a1);
    v0 = v0 + 31872;
    a3 = sp + 0;
    a1 = 0 + 0;
    ST32(a0+4, 0);
    ST32(a0+12, 0);
    v1 = LD32(a2+28);
    a0 = LD32(a2+32);
    ST32(s1, v0);
    v1 = v1 + a0;
    ST32(sp+4, v1);
    ST32(s1+16, 0);
    ST32(s1+20, 0);
    ST32(s1+24, 0);
    ST32(s1+28, 0);
    ST32(sp, 0);
    goto L_088D03E8;
L_088D03E8:;
    v0 = LD32(sp+4);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    ST8(a3, v1);
    a3 = a3 + 1;
    v0 = LD32(sp+4);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D03E8; }
    goto L_088D0410;
L_088D0410:;
    a3 = LD32(sp);
    v0 = a3 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D04C8; }
    goto L_088D0420;
L_088D0420:;
    v0 = a3 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D04A4; }
    goto L_088D042C;
L_088D042C:;
    v0 = a3 & 0x4;
    cnd_ = v0 == 0;
    v0 = a3 & 0x8;
    if (cnd_) { goto L_088D0468; }
    goto L_088D0438;
L_088D0438:;
    a1 = s1 + 12;
    a2 = 0 + 0;
    goto L_088D0440;
L_088D0440:;
    v0 = LD32(sp+4);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(sp+4, v0);
    ST8(a1, v1);
    cnd_ = a0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_088D0440; }
    goto L_088D0464;
L_088D0464:;
    v0 = a3 & 0x8;
    goto L_088D0468;
L_088D0468:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D0484; }
    goto L_088D0470;
L_088D0470:;
    sp = sp + 32;
    return;
L_088D0484:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D048C;
L_088D048C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 4;
    func_0889DC94(a0, a1);
    goto L_088D049C;
L_088D049C:;
    ST32(s1+20, s0);
    goto L_088D0470;
L_088D04A4:;
    a0 = 4;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D04AC;
L_088D04AC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 4;
    func_0890ED78(a0, a1);
    goto L_088D04BC;
L_088D04BC:;
    ST32(s1+28, s0);
    a3 = LD32(sp);
    goto L_088D042C;
L_088D04C8:;
    a0 = 68;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D04D0;
L_088D04D0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = sp + 4;
    func_0889DC94(a0, a1);
    goto L_088D04E0;
L_088D04E0:;
    ST32(s1+16, s0);
    a3 = LD32(sp);
    goto L_088D0420;
}

/* 088D04EC */
rv_t func_088D04EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D04EC:;
    sp = sp - 16;
    v0 = D_08AF7C80 - (31872);
    s0 = a0 + 0;
    v0 = v0 + 31872;
    v1 = LD32(a0+16);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D0590; }
    goto L_088D0514;
L_088D0514:;
    v0 = LD32(s0+20);
    goto L_088D0518;
L_088D0518:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0578; }
    goto L_088D0520;
L_088D0520:;
    v0 = LD32(s0+24);
    goto L_088D0524;
L_088D0524:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0560; }
    goto L_088D052C;
L_088D052C:;
    v0 = LD32(s0+28);
    goto L_088D0530;
L_088D0530:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0548; }
    goto L_088D0538;
L_088D0538:;
    goto L_088D053C;
L_088D053C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D0548:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0558;
L_088D0558:;
    goto L_088D053C;
L_088D0560:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0570;
L_088D0570:;
    v0 = LD32(s0+28);
    goto L_088D0530;
L_088D0578:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0588;
L_088D0588:;
    v0 = LD32(s0+24);
    goto L_088D0524;
L_088D0590:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D05A0;
L_088D05A0:;
    v0 = LD32(s0+20);
    goto L_088D0518;
}

/* 088D05A8 */
rv_t func_088D05A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D05A8:;
    sp = sp - 16;
    v0 = D_08AF7C80 - (31872);
    s0 = a0 + 0;
    v0 = v0 + 31872;
    v1 = LD32(a0+16);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D0654; }
    goto L_088D05D0;
L_088D05D0:;
    v0 = LD32(s0+20);
    goto L_088D05D4;
L_088D05D4:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D063C; }
    goto L_088D05DC;
L_088D05DC:;
    v0 = LD32(s0+24);
    goto L_088D05E0;
L_088D05E0:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0624; }
    goto L_088D05E8;
L_088D05E8:;
    v0 = LD32(s0+28);
    goto L_088D05EC;
L_088D05EC:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D060C; }
    goto L_088D05F4;
L_088D05F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D05FC;
L_088D05FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D060C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D061C;
L_088D061C:;
    goto L_088D05F4;
L_088D0624:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0634;
L_088D0634:;
    v0 = LD32(s0+28);
    goto L_088D05EC;
L_088D063C:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D064C;
L_088D064C:;
    v0 = LD32(s0+24);
    goto L_088D05E0;
L_088D0654:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0664;
L_088D0664:;
    v0 = LD32(s0+20);
    goto L_088D05D4;
}

/* 088D066C */
void func_088D066C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D066C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a2 + 0;
    cnd_ = a2 == 0;
    ST32(a0+4, a1);
    if (cnd_) { goto L_088D06BC; }
    goto L_088D0690;
L_088D0690:;
    v0 = LD32(s2+24);
    a0 = 40;
    cnd_ = v0 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_088D06D4; }
    goto L_088D06A0;
L_088D06A0:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D06A8;
L_088D06A8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    s0 = v0 + 0;
    func_0884B4EC(a0, a1);
    goto L_088D06B8;
L_088D06B8:;
    ST32(s2+24, s0);
    goto L_088D06BC;
L_088D06BC:;
    goto L_088D06C0;
L_088D06C0:;
    sp = sp + 16;
    return;
L_088D06D4:;
    a0 = v0 + 0;
    func_0884B568(a0, a1);
    goto L_088D06DC;
L_088D06DC:;
    goto L_088D06C0;
}

/* 088D06E4 */
void func_088D06E4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_088D06E4:;
    sp = sp - 128;
    v0 = D_08AF7C70 - (31856);
    v1 = 999;
    v0 = v0 + 31856;
    s1 = (u32)-1;
    a1 = 1;
    s0 = a0 + 0;
    a2 = 0 + 0;
    ST32(a0, v0);
    ST32(s0+124, v1);
    ST32(s0+120, v1);
    ST32(s0+20, s1);
    a0 = a0 + 128;
    func_0889C644(a0, a1, a2, t1, t2, t3);
    goto L_088D0728;
L_088D0728:;
    a0 = s0 + 0;
    ST32(s0+116, 0);
    func_0890EC1C(a0);
    goto L_088D0734;
L_088D0734:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    v0 = D_08AECA64 - (-13724);
    v1 = D_08AECA68 - (-13720);
    f2 = BITSF(LD32(v0-13724));
    f3 = BITSF(LD32(v1-13720));
    {v0=FBITS(v[50]);}
    f10 = BITSF(v0);
    {v0=FBITS(v[58]);}
    f9 = BITSF(v0);
    v0 = s0 + 32;
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST16(s0+24, s1);
    {a0=FBITS(v[54]);}
    f11 = BITSF(a0);
    ST32(s0+4, 0);
    {a0=FBITS(v[48]);}
    f4 = BITSF(a0);
    ST32(s0+8, 0);
    {a0=FBITS(v[49]);}
    f7 = BITSF(a0);
    ST32(s0+12, 0);
    {a0=FBITS(v[52]);}
    f8 = BITSF(a0);
    ST32(s0+16, 0);
    {a0=FBITS(v[53]);}
    f5 = BITSF(a0);
    ST32(v0+20, FBITS(f3));
    {a0=FBITS(v[56]);}
    f6 = BITSF(a0);
    ST32(v0+8, FBITS(f2));
    v1 = s0 + 68;
    {a0=FBITS(v[57]);}
    ST32(v0+16, FBITS(f2));
    ST32(v0+4, FBITS(f3));
    ST32(v0+12, FBITS(f3));
    v0 = D_08AECA70 - (-13712);
    f0 = BITSF(LD32(v0-13712));
    v0 = D_08AECA6C - (-13716);
    ST32(s0+64, FBITS(f2));
    ST32(s0+32, FBITS(f2));
    ST32(s0+56, FBITS(f2));
    ST32(s0+60, FBITS(f2));
    ST32(v1+32, FBITS(f9));
    ST32(v1+4, FBITS(f7));
    ST32(v1+8, FBITS(f10));
    ST32(v1+12, FBITS(f8));
    ST32(v1+16, FBITS(f5));
    ST32(v1+20, FBITS(f11));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, a0);
    ST32(s0+112, FBITS(f0));
    f0 = BITSF(LD32(v0-13716));
    ST32(s0+68, FBITS(f4));
    ST32(s0+108, FBITS(f0));
    sp = sp + 128;
    return;
}

/* 088D082C */
void func_088D082C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_088D082C:;
    sp = sp - 128;
    v0 = D_08AF7C70 - (31856);
    v1 = 999;
    v0 = v0 + 31856;
    s2 = (u32)-1;
    a2 = 0 + 0;
    s0 = a0 + 0;
    ST32(s0+124, v1);
    ST32(s0+120, v1);
    ST32(a0, v0);
    a0 = a0 + 128;
    ST32(s0+20, s2);
    s1 = a1 + 0;
    a1 = 1;
    func_0889C644(a0, a1, a2, t1, t2, t3);
    goto L_088D0878;
L_088D0878:;
    a0 = s0 + 0;
    ST32(s0+116, 0);
    func_0890EC1C(a0);
    goto L_088D0884;
L_088D0884:;
    ST32(s0+4, s1);
    a0 = D_08B3071C - (1820);
    a1 = s1 + 0;
    a0 = a0 + 1820;
    a2 = 1;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D089C;
L_088D089C:;
    {float m00=1.f;float m01=0.f;float m02=0.f;float m03=0.f;float m10=0.f;float m11=1.f;float m12=0.f;float m13=0.f;float m20=0.f;float m21=0.f;float m22=1.f;float m23=0.f;float m30=0.f;float m31=0.f;float m32=0.f;float m33=1.f;v[48]=m00;v[49]=m01;v[50]=m02;v[51]=m03;v[52]=m10;v[53]=m11;v[54]=m12;v[55]=m13;v[56]=m20;v[57]=m21;v[58]=m22;v[59]=m23;v[60]=m30;v[61]=m31;v[62]=m32;v[63]=m33;}
    ST32(s0+8, v0);
    v1 = D_08AECA84 - (-13692);
    a0 = D_08AECA88 - (-13688);
    v0 = D_08AECA90 - (-13680);
    f2 = BITSF(LD32(v1-13692));
    f3 = BITSF(LD32(a0-13688));
    f0 = BITSF(LD32(v0-13680));
    {v1=FBITS(v[50]);}
    {a1=FBITS(v[54]);}
    f10 = BITSF(v1);
    f11 = BITSF(a1);
    {v1=FBITS(v[58]);}
    {a1=FBITS(v[48]);}
    f9 = BITSF(v1);
    f4 = BITSF(a1);
    {a1=FBITS(v[49]);}
    f7 = BITSF(a1);
    {a1=FBITS(v[52]);}
    f8 = BITSF(a1);
    {a1=FBITS(v[53]);}
    f5 = BITSF(a1);
    {a1=FBITS(v[56]);}
    f6 = BITSF(a1);
    a0 = s0 + 68;
    v1 = s0 + 32;
    v0 = D_08AECA8C - (-13684);
    {u32 a_=sp+(48);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(64);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(80);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(96);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    ST16(s0+24, s2);
    {a1=FBITS(v[57]);}
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+32, FBITS(f2));
    ST32(v1+20, FBITS(f3));
    ST32(v1+8, FBITS(f2));
    ST32(v1+16, FBITS(f2));
    ST32(v1+4, FBITS(f3));
    ST32(v1+12, FBITS(f3));
    ST32(s0+64, FBITS(f2));
    ST32(s0+56, FBITS(f2));
    ST32(s0+60, FBITS(f2));
    ST32(a0+32, FBITS(f9));
    ST32(a0+4, FBITS(f7));
    ST32(a0+8, FBITS(f10));
    ST32(a0+12, FBITS(f8));
    ST32(a0+16, FBITS(f5));
    ST32(a0+20, FBITS(f11));
    ST32(a0+24, FBITS(f6));
    ST32(a0+28, a1);
    ST32(s0+112, FBITS(f0));
    f0 = BITSF(LD32(v0-13684));
    ST32(s0+68, FBITS(f4));
    ST32(s0+108, FBITS(f0));
    sp = sp + 128;
    return;
}

/* 088D0994 */
rv_t func_088D0994(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0994:;
    sp = sp - 16;
    v0 = D_08AF7C70 - (31856);
    v0 = v0 + 31856;
    s0 = a0 + 0;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088D09C8; }
    goto L_088D09B8;
L_088D09B8:;
    ST32(v1+316, 0);
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D09E0; }
    goto L_088D09C8;
L_088D09C8:;
    a0 = s0 + 128;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D09D0;
L_088D09D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D09E0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D09F0;
L_088D09F0:;
    goto L_088D09C8;
}

/* 088D09F8 */
rv_t func_088D09F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D09F8:;
    sp = sp - 16;
    v0 = D_08AF7C70 - (31856);
    v0 = v0 + 31856;
    s0 = a0 + 0;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088D0A2C; }
    goto L_088D0A1C;
L_088D0A1C:;
    ST32(v1+316, 0);
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0A4C; }
    goto L_088D0A2C;
L_088D0A2C:;
    a0 = s0 + 128;
    { u64 r_ = func_0889C6DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0A34;
L_088D0A34:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0A3C;
L_088D0A3C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D0A4C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0A5C;
L_088D0A5C:;
    goto L_088D0A2C;
}

/* 088D0A64 */
rv_t func_088D0A64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0A64:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D0A98; }
    goto L_088D0A84;
L_088D0A84:;
    ST32(v0+316, 0);
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0AE4; }
    goto L_088D0A94;
L_088D0A94:;
    ST32(s0+12, 0);
    goto L_088D0A98;
L_088D0A98:;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_088D0AC4; }
    goto L_088D0AA4;
L_088D0AA4:;
    a0 = D_08B3071C - (1820);
    a1 = s1 + 0;
    a2 = 1;
    ST32(s0+4, s1);
    cnd_ = s1 != 0;
    a0 = a0 + 1820;
    if (cnd_) { goto L_088D0AD4; }
    goto L_088D0ABC;
L_088D0ABC:;
    ST32(s0+8, 0);
    goto L_088D0AC0;
L_088D0AC0:;
    goto L_088D0AC4;
L_088D0AC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D0AD4:;
    { u64 r_ = func_08AACF00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0ADC;
L_088D0ADC:;
    ST32(s0+8, v0);
    goto L_088D0AC0;
L_088D0AE4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0AF4;
L_088D0AF4:;
    ST32(s0+12, 0);
    goto L_088D0A98;
}

/* 088D0AFC */
void func_088D0AFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0AFC:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D0B2C; }
    goto L_088D0B1C;
L_088D0B1C:;
    ST32(v0+316, 0);
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D0B44; }
    goto L_088D0B2C;
L_088D0B2C:;
    ST32(s0+12, s1);
    goto L_088D0B30;
L_088D0B30:;
    sp = sp + 16;
    return;
L_088D0B44:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0B54;
L_088D0B54:;
    ST32(s0+12, s1);
    goto L_088D0B30;
}

/* 088D0B5C */
rv_t func_088D0B5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f13 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088D0B5C:;
    sp = sp - 48;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    f20 = f12;
    if (cnd_) { goto L_088D0BA0; }
    goto L_088D0B98;
L_088D0B98:;
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    goto L_088D0BA0;
L_088D0BA0:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088D0C34; }
    goto L_088D0BAC;
L_088D0BAC:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D0BBC; }
    goto L_088D0BB8;
L_088D0BB8:;
    v1 = LD32(v0+64);
    goto L_088D0BBC;
L_088D0BBC:;
    cnd_ = v1 == s2;
    if (cnd_) { goto L_088D0C14; }
    goto L_088D0BC4;
L_088D0BC4:;
    a2 = 0 + 0;
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0BCC;
L_088D0BCC:;
    a0 = LD32(s0+12);
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    f13 = BITSF(FBITS(f20) ^ 0x80000000u);
    if (cnd_) { goto L_088D0BF0; }
    goto L_088D0BDC;
L_088D0BDC:;
    f12 = BITSF(0);
    goto L_088D0BE0;
L_088D0BE0:;
    a0 = a0 + 4;
    a1 = s3 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_0880D060(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0BF0;
L_088D0BF0:;
    goto L_088D0BF4;
L_088D0BF4:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088D0C14:;
    a0 = a0 + 4;
    { u64 r_ = func_0880D47C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0C1C;
L_088D0C1C:;
    cnd_ = v0 == s3;
    v0 = D_08AECA94 - (-13676);
    if (cnd_) { goto L_088D0BF0; }
    goto L_088D0C24;
L_088D0C24:;
    a0 = LD32(s0+12);
    f13 = BITSF(FBITS(f20) ^ 0x80000000u);
    f12 = BITSF(LD32(v0-13676));
    goto L_088D0BE0;
L_088D0C34:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0C3C;
L_088D0C3C:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0C4C;
L_088D0C4C:;
    cnd_ = s1 == 0;
    ST32(s0+12, s1);
    if (cnd_) { goto L_088D0BF0; }
    goto L_088D0C54;
L_088D0C54:;
    f13 = BITSF(FBITS(f20) ^ 0x80000000u);
    f12 = BITSF(0);
    a0 = s1 + 4;
    a1 = s3 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_0880D060(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0C6C;
L_088D0C6C:;
    v1 = LD32(s0+16);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088D0BF4; }
    goto L_088D0C78;
L_088D0C78:;
    v0 = LD32(s0+12);
    ST32(v0+316, v1);
    goto L_088D0BF4;
}

/* 088D0C84 */
float func_088D0C84(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f13 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0C84:;
    sp = sp - 16;
    f13 = BITSF(0);
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 4;
    if (cnd_) { goto L_088D0CA8; }
    goto L_088D0C9C;
L_088D0C9C:;
    goto L_088D0CA0;
L_088D0CA0:;
    sp = sp + 16;
    return f0;
L_088D0CA8:;
    { rv_t r_ = func_0880D060(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0CB0;
L_088D0CB0:;
    goto L_088D0CA0;
}

/* 088D0CB8 */
float func_088D0CB8(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0CB8:;
    sp = sp - 16;
    f0 = f12;
    f12 = f13;
    v0 = LD32(a0+12);
    f13 = f14;
    f14 = f0;
    cnd_ = v0 != 0;
    a0 = v0 + 4;
    if (cnd_) { goto L_088D0CE8; }
    goto L_088D0CDC;
L_088D0CDC:;
    goto L_088D0CE0;
L_088D0CE0:;
    sp = sp + 16;
    return f0;
L_088D0CE8:;
    f0 = func_0880CF50(a0, a1, a2, f12, f13, f14);
    goto L_088D0CF0;
L_088D0CF0:;
    goto L_088D0CE0;
}

/* 088D0CF8 */
u32 func_088D0CF8(u32 a0)
{
    u32 v0 = 0;
L_088D0CF8:;
    v0 = LD32(a0+8);
    v0 = 0 < v0;
    return v0;
}

/* 088D0D04 */
rv_t func_088D0D04(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0D04:;
    sp = sp - 16;
    a3 = 0 + 0;
    s1 = a0 + 32;
    s0 = a0 + 0;
    s2 = s0 + 56;
    v1 = s0 + 68;
    a0 = s1 + 0;
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a1+4));
    ST32(s2+8, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    ST32(s0+56, FBITS(f2));
    f0 = BITSF(LD32(a2+32));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    f3 = BITSF(LD32(a2+12));
    f4 = BITSF(LD32(a2+16));
    f5 = BITSF(LD32(a2+20));
    f6 = BITSF(LD32(a2+24));
    f7 = BITSF(LD32(a2+28));
    ST32(v1+32, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(v1+8, FBITS(f2));
    ST32(v1+12, FBITS(f3));
    ST32(v1+16, FBITS(f4));
    ST32(v1+20, FBITS(f5));
    ST32(v1+24, FBITS(f6));
    ST32(v1+28, FBITS(f7));
    f0 = BITSF(LD32(a2));
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    ST32(s0+68, FBITS(f0));
    if (cnd_) { goto L_088D0DB0; }
    goto L_088D0D98;
L_088D0D98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D0DB0:;
    a1 = LD32(v0+16);
    a1 = a1 + 4;
    { u64 r_ = func_088F7724(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0DBC;
L_088D0DBC:;
    f0 = BITSF(LD32(s0+56));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s0+32));
    f3 = BITSF(LD32(s1+12));
    f1 = f1 + f0;
    f4 = BITSF(LD32(s1+8));
    f5 = BITSF(LD32(s1+20));
    f6 = BITSF(LD32(s1+16));
    ST32(s1+4, FBITS(f1));
    f0 = BITSF(LD32(s0+56));
    f2 = f2 + f0;
    ST32(s0+32, FBITS(f2));
    f0 = BITSF(LD32(s2+4));
    f3 = f3 + f0;
    ST32(s1+12, FBITS(f3));
    f0 = BITSF(LD32(s2+4));
    f4 = f4 + f0;
    ST32(s1+8, FBITS(f4));
    f0 = BITSF(LD32(s2+8));
    f5 = f5 + f0;
    ST32(s1+20, FBITS(f5));
    f0 = BITSF(LD32(s2+8));
    f6 = f6 + f0;
    ST32(s1+16, FBITS(f6));
    goto L_088D0D98;
}

/* 088D0E20 */
u64 func_088D0E20(u32 a0, u32 t1, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D0E20:;
    sp = sp - 16;
    s0 = D_08B2C0FC - (-16132);
    s0 = s0 - 16132;
    a2 = ((u32)(uintptr_t)func_08AB68B0) - (26800);
    s1 = a0 + 0;
    a1 = a0 + 32;
    a2 = a2 + 26800;
    a0 = s0 + 0;
    s1 = s1 + 24;
    { rv_t r_ = func_088CE404(a0, a1, a2, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D0E54;
L_088D0E54:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_088CE610(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D0E60;
L_088D0E60:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D0E74 */
void func_088D0E74(u32 a0)
{
    u32 v0 = 0;
L_088D0E74:;
    v0 = (u32)-1;
    ST16(a0+24, v0);
    return;
}

/* 088D0E80 */
u64 func_088D0E80(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_088D0E80:;
    v0 = LD32(a0+116);
    v0 = v0 & 0x40;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088D0EF8; }
    goto L_088D0E90;
L_088D0E90:;
    v0 = D_08B230A8 - (12456);
    t2 = LD_U8(v0+12456);
    v1 = D_08B2C0FC - (-16132);
    v1 = v1 - 16132;
    a0 = a0 + 24;
    t4 = 0 + 0;
    t0 = 0 + 0;
    t3 = 0xffff;
    a1 = LD_U16(a0);
    goto L_088D0EB4;
L_088D0EB4:;
    t0 = t0 + 1;
    t1 = (s32)t0 < 4;
    cnd_ = a1 == t3;
    a0 = a0 + 2;
    if (cnd_) { goto L_088D0EF4; }
    goto L_088D0EC4;
L_088D0EC4:;
    v0 = LD32(v1+16);
    a3 = 0 + 0;
    a2 = t2 & 0xff;
    cnd_ = v0 == 0;
    a1 = v0 + a1;
    if (cnd_) { goto L_088D0EE4; }
    goto L_088D0ED8;
L_088D0ED8:;
    v0 = LD_U8(a1);
    v0 = v0 & a2;
    a3 = 0 < v0;
    goto L_088D0EE4;
L_088D0EE4:;
    cnd_ = a3 != 0;
    if (cnd_) { t4 = 1; goto L_088D0EF4; }
    goto L_088D0EEC;
L_088D0EEC:;
    cnd_ = t1 != 0;
    if (cnd_) { a1 = LD_U16(a0); goto L_088D0EB4; }
    goto L_088D0EF4;
L_088D0EF4:;
    v1 = t4 + 0;
    goto L_088D0EF8;
L_088D0EF8:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D0F00 */
rv_t func_088D0F00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr20 = v[20], vr21 = v[21], vr22 = v[22], vr32 = v[32], vr33 = v[33], vr34 = v[34], vr35 = v[35], vr36 = v[36], vr37 = v[37], vr38 = v[38], vr39 = v[39];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088D0F00:;
    sp = sp - 80;
    a2 = a0 + 68;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    v0 = LD32(a0+8);
    v1 = LD32(a0+68);
    {vr32=BITSF(v1);}
    t0 = LD32(v0+16);
    v1 = LD32(a2+8);
    v0 = LD32(a2+4);
    a1 = t0 + 4;
    f1 = BITSF(LD32(a1+12));
    f6 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(a1+20));
    f0 = BITSF(LD32(a1+4));
    f5 = BITSF(LD32(a1+8));
    f4 = BITSF(LD32(a1+16));
    {vr33=BITSF(v0);}
    f5 = f5 + f1;
    v0 = LD32(a2+16);
    {vr34=BITSF(v1);}
    f6 = f6 + f0;
    v1 = LD32(a2+12);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f4 = f4 + f2;
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {vr32=BITSF(v1);}
    {vr33=BITSF(v0);}
    v0 = D_08AECA98 - (-13672);
    f0 = BITSF(LD32(v0-13672));
    a3 = a0 + 56;
    v1 = LD32(a2+20);
    f4 = f4 * f0;
    f6 = f6 * f0;
    f5 = f5 * f0;
    v0 = LD32(a2+24);
    a1 = LD32(a2+32);
    f7 = BITSF(LD32(a3+4));
    f8 = BITSF(LD32(a0+56));
    f9 = BITSF(LD32(a3+8));
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {vr34=BITSF(v1);}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;v[23]=d3;}
    v1 = LD32(a2+28);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=vr36;float s1=vr37;float s2=vr38;float s3=vr39;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr32=d0;vr33=d1;vr34=d2;vr35=d3;}
    {vr32=BITSF(v0);}
    v0 = FBITS(f6);
    {vr33=BITSF(v1);}
    {vr20=BITSF(v0);}
    {vr34=BITSF(a1);}
    v0 = FBITS(f5);
    {float s0=vr32;float s1=vr33;float s2=vr34;float s3=vr35;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {vr21=BITSF(v0);}
    v0 = FBITS(f4);
    {vr22=BITSF(v0);}
    {float t0=vr20;float t1=vr21;float t2=vr22;float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f0 = BITSF(v0);
    f8 = f8 + f2;
    f9 = f9 + f3;
    f7 = f7 + f0;
    f12 = BITSF(LD32(t0+28));
    a0 = sp + 0;
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f7));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f4));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    ST32(sp+8, FBITS(f9));
    { rv_t r_ = func_08AA33C8(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1044;
L_088D1044:;
    sp = sp + 80;
    { v[20]=vr20;v[21]=vr21;v[22]=vr22;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;return (rv_t){ v0, v1, f0 }; }
    v[20]=vr20;v[21]=vr21;v[22]=vr22;v[32]=vr32;v[33]=vr33;v[34]=vr34;v[35]=vr35;
}

/* 088D1050 */
rv_t func_088D1050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[416] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 416);
L_088D1050:;
    sp = sp - 416;
    v0 = D_08B2C222 - (-15838);
    s2 = a1 + 0;
    v1 = LD_U8(v0-15838);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088D11D0; }
    goto L_088D1090;
L_088D1090:;
    s4 = LD32(a0+8);
    s0 = LD32(a0+12);
    v0 = s4 < 0x1u;
    v1 = s0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088D11D4; }
    goto L_088D10AC;
L_088D10AC:;
    v0 = D_08AECA9C - (-13668);
    f0 = BITSF(LD32(a0+56));
    f1 = BITSF(LD32(v0-13668));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) {  goto L_088D11D4; }
    goto L_088D10C8;
L_088D10C8:;
    cnd_ = s4 == 0;
    if (cnd_) { v1 = LD32(a0+116); goto L_088D1384; }
    goto L_088D10D0;
L_088D10D0:;
    v0 = LD32(s4+4);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088D11D4; }
    goto L_088D10E0;
L_088D10E0:;
    cnd_ = a1 != 0;
    v0 = D_08B2C230 - (-15824);
    if (cnd_) { goto L_088D1164; }
    goto L_088D10E8;
L_088D10E8:;
    v0 = D_08B15A00 - (23040);
    s0 = LD32(v0+23040);
    v0 = (u32)-1;
    s0 = s0 - 1;
    cnd_ = s0 == v0;
    v0 = s0 << 4;
    if (cnd_) { goto L_088D1158; }
    goto L_088D1100;
L_088D1100:;
    v0 = v0 + s0;
    v1 = D_08B22E88 - (11912);
    v0 = v0 << 3;
    v1 = v1 + 11912;
    s5 = v0 + v1;
    s7 = D_08B15A04 - (23044);
    s6 = 1;
    fp = D_08B15A0C - (23052);
    goto L_088D1120;
L_088D1120:;
    v0 = LD32(s1+16);
    a0 = 0 < v0;
    cnd_ = a0 == 0;
    s2 = s2 << 1;
    if (cnd_) { goto L_088D1240; }
    goto L_088D1130;
L_088D1130:;
    v1 = D_08B21180 - (4480);
    v0 = LD_U8(v1+4480);
    cnd_ = v0 == 0;
    v0 = LD32(s7+23044);
    if (cnd_) { goto L_088D1244; }
    goto L_088D1140;
L_088D1140:;
    cnd_ = s0 == v0;
    v1 = D_08B159FC - (23036);
    if (cnd_) { goto L_088D1270; }
    goto L_088D1148;
L_088D1148:;
    s0 = s0 - 1;
    goto L_088D114C;
L_088D114C:;
    v0 = (u32)-1;
    cnd_ = s0 != v0;
    s5 = s5 - 136;
    if (cnd_) { goto L_088D1120; }
    goto L_088D1158;
L_088D1158:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_088D11D4; }
    goto L_088D1160;
L_088D1160:;
    v0 = D_08B2C230 - (-15824);
    goto L_088D1164;
L_088D1164:;
    v1 = LD_U8(v0-15824);
    cnd_ = v1 != 0;
    v0 = D_08AECAA0 - (-13664);
    if (cnd_) { goto L_088D122C; }
    goto L_088D1170;
L_088D1170:;
    f2 = BITSF(LD32(s1+108));
    f0 = BITSF(LD32(v0-13664));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AECAA4 - (-13660);
    if (cnd_) { goto L_088D1220; }
    goto L_088D1190;
L_088D1190:;
    f0 = BITSF(LD32(v0-13660));
    f0 = f2 + f0;
    goto L_088D1198;
L_088D1198:;
    f0 = BITSF(F2I(f0, 1));
    v1 = LD32(s1+116);
    v0 = FBITS(f0);
    a2 = v0 << 24;
    v0 = v1 & 0x80;
    cnd_ = v0 == 0;
    v0 = v1 & 0x20;
    if (cnd_) { goto L_088D1200; }
    goto L_088D11B4;
L_088D11B4:;
    v0 = 0x800000u;
    v0 = v0 | 0x8080;
    goto L_088D11BC;
L_088D11BC:;
    a2 = a2 | v0;
    goto L_088D11C0;
L_088D11C0:;
    a0 = s4 + 0;
    a1 = s1 + 0;
    a3 = s2 + 0;
    { u64 r_ = func_08A65094(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D11D0;
L_088D11D0:;
    goto L_088D11D4;
L_088D11D4:;
    sp = sp + 416;
    return (rv_t){ v0, v1, f0 };
L_088D1200:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B2A8C0 - (-22336); goto L_088D1214; }
    goto L_088D1208;
L_088D1208:;
    v0 = LD32(s1+104);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    goto L_088D11BC;
L_088D1214:;
    v1 = LD32(v0-22336);
    a2 = a2 | v1;
    goto L_088D11C0;
L_088D1220:;
    f0 = BITSF(LD32(v0-13660));
    f0 = f2 - f0;
    goto L_088D1198;
L_088D122C:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_088CFB38(a0, a1, a2, a3, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D1238;
L_088D1238:;
    goto L_088D11D4;
L_088D1240:;
    v0 = LD32(s7+23044);
    goto L_088D1244;
L_088D1244:;
    cnd_ = s0 == v0;
    v1 = D_08B159FC - (23036);
    if (cnd_) { goto L_088D1270; }
    goto L_088D124C;
L_088D124C:;
    v0 = s6 << (s0 & 31);
    a1 = D_08B230A8 - (12456);
    ST8(a1+12456, v0);
    v0 = D_08B230AC - (12460);
    v0 = v0 + 12460;
    ST8(fp+23052, s6);
    ST32(v1+23036, s5);
    ST32(s7+23044, s0);
    ST8(v0+4, s6);
    goto L_088D1270;
L_088D1270:;
    v1 = LD32(v1+23036);
    v0 = LD_U8(v1+132);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_088D114C; }
    goto L_088D1280;
L_088D1280:;
    v0 = LD32(s1+124);
    s3 = LD32(v1+128);
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_088D129C; }
    goto L_088D1294;
L_088D1294:;
    cnd_ = s3 != v0;
    if (cnd_) { s0 = s0 - 1; goto L_088D114C; }
    goto L_088D129C;
L_088D129C:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s1+120); goto L_088D12C4; }
    goto L_088D12A4;
L_088D12A4:;
    v0 = LD32(s1+16);
    a0 = LD32(v0+316);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D1374; }
    goto L_088D12B4;
L_088D12B4:;
    v0 = LD32(v0+232);
    goto L_088D12B8;
L_088D12B8:;
    cnd_ = v0 == s3;
    if (cnd_) { s0 = s0 - 1; goto L_088D114C; }
    goto L_088D12C0;
L_088D12C0:;
    v0 = LD32(s1+120);
    goto L_088D12C4;
L_088D12C4:;
    cnd_ = s3 == v0;
    a1 = 0xffff;
    if (cnd_) { goto L_088D1148; }
    goto L_088D12CC;
L_088D12CC:;
    v0 = LD_U16(s1+24);
    cnd_ = v0 == a1;
    v1 = LD32(s1+116);
    if (cnd_) { goto L_088D1328; }
    goto L_088D12D8;
L_088D12D8:;
    v0 = v1 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D1310; }
    goto L_088D12E4;
L_088D12E4:;
    v0 = v1 & 0x800;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D12F8; }
    goto L_088D12F0;
L_088D12F0:;
    s2 = s2 | 0x1;
    goto L_088D1148;
L_088D12F8:;
    a0 = s1 + 0;
    { rv_t r_ = func_088D0F00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1300;
L_088D1300:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_088D114C; }
    goto L_088D1308;
L_088D1308:;
    s2 = s2 | 0x1;
    goto L_088D1148;
L_088D1310:;
    a0 = s1 + 0;
    { u64 r_ = func_088D0E80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D1318;
L_088D1318:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_088D114C; }
    goto L_088D1320;
L_088D1320:;
    v1 = LD32(s1+116);
    goto L_088D12E4;
L_088D1328:;
    v0 = v1 & 0x800;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D135C; }
    goto L_088D1334;
L_088D1334:;
    v0 = v1 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = s2 | 0x1; goto L_088D1148; }
    goto L_088D1340;
L_088D1340:;
    a0 = D_08B2C0FC - (-16132);
    a0 = a0 - 16132;
    a1 = s1 + 32;
    a2 = s1 + 20;
    { rv_t r_ = func_088CE800(a0, a1, a2, t1, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1354;
L_088D1354:;
    v0 = v0 & 0xff;
    goto L_088D1300;
L_088D135C:;
    a0 = s1 + 0;
    { rv_t r_ = func_088D0F00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1364;
L_088D1364:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_088D114C; }
    goto L_088D136C;
L_088D136C:;
    v1 = LD32(s1+116);
    goto L_088D1334;
L_088D1374:;
    { u64 r_ = func_08AA3390(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D137C;
L_088D137C:;
    goto L_088D12B8;
L_088D1384:;
    v0 = v1 & 0x81;
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088D1430; }
    goto L_088D1390;
L_088D1390:;
    v0 = v1 & 0x80;
    cnd_ = v0 != 0;
    s4 = 0x4000000u;
    if (cnd_) { goto L_088D1850; }
    goto L_088D139C;
L_088D139C:;
    v0 = v1 & 0x20;
    cnd_ = v0 != 0;
    v0 = D_08B2A8C0 - (-22336);
    if (cnd_) { goto L_088D1848; }
    goto L_088D13A8;
L_088D13A8:;
    a0 = LD32(a0+104);
    goto L_088D13AC;
L_088D13AC:;
    v0 = a0 >> 16;
    v1 = v0 & 0xff;
    f0 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f12 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088D182C; }
    goto L_088D13C0;
L_088D13C0:;
    a1 = D_08AECAA8 - (-13656);
    f0 = BITSF(LD32(a1-13656));
    v0 = a0 >> 8;
    v1 = v0 & 0xff;
    f12 = f12 * f0;
    f0 = BITSF(v1);
    cnd_ = (s32)v1 < 0;
    f13 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088D1810; }
    goto L_088D13E0;
L_088D13E0:;
    v1 = a0 & 0xff;
    f0 = BITSF(LD32(a1-13656));
    f2 = BITSF(v1);
    f13 = f13 * f0;
    cnd_ = (s32)v1 < 0;
    f1 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088D17F4; }
    goto L_088D13F8;
L_088D13F8:;
    f14 = BITSF(LD32(a1-13656));
    a0 = s0 + 0;
    a1 = 1;
    f14 = f1 * f14;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08809B24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D141C;
L_088D141C:;
    v1 = LD32(s1+116);
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_088D1430;
L_088D1430:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = v1 & 0x40;
    if (cnd_) { goto L_088D1448; }
    goto L_088D143C;
L_088D143C:;
    v0 = 0x40000000u;
    s4 = s4 | v0;
    v0 = v1 & 0x40;
    goto L_088D1448;
L_088D1448:;
    cnd_ = v0 == 0;
    v0 = v1 & 0x400;
    if (cnd_) { goto L_088D145C; }
    goto L_088D1450;
L_088D1450:;
    v0 = 0x20000000u;
    s4 = s4 | v0;
    v0 = v1 & 0x400;
    goto L_088D145C;
L_088D145C:;
    cnd_ = v0 == 0;
    v0 = v1 & 0x800;
    if (cnd_) { goto L_088D1470; }
    goto L_088D1464;
L_088D1464:;
    v0 = 0x8000000u;
    s4 = s4 | v0;
    v0 = v1 & 0x800;
    goto L_088D1470;
L_088D1470:;
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s1+108));
    if (cnd_) { goto L_088D1480; }
    goto L_088D1478;
L_088D1478:;
    v0 = 0x10000000u;
    s4 = s4 | v0;
    goto L_088D1480;
L_088D1480:;
    a0 = s0 + 0;
    a1 = 1;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08809AB8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D149C;
L_088D149C:;
    v0 = LD32(s1+116);
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = v0 & 0x200;
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088D17DC; }
    goto L_088D14B8;
L_088D14B8:;
    v0 = s1 + 68;
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(s1+68));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+16, FBITS(f0));
    v0 = s1 + 56;
    s2 = s0 + 76;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1+56));
    f1 = BITSF(LD32(v0+4));
    a1 = LD32(s0+16);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    cnd_ = a1 == 0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_088D1554; }
    goto L_088D152C;
L_088D152C:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s2 + 0;
    if (cnd_) { goto L_088D1558; }
    goto L_088D1540;
L_088D1540:;
    v0 = LD32(s2+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AECAAC - (-13652);
    if (cnd_) { goto L_088D17B8; }
    goto L_088D1550;
L_088D1550:;
    ST32(s0+220, s3);
    goto L_088D1554;
L_088D1554:;
    a0 = s2 + 0;
    goto L_088D1558;
L_088D1558:;
    a1 = sp + 64;
    a2 = sp + 80;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_08816684(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1574;
L_088D1574:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088D1794; }
    goto L_088D1580;
L_088D1580:;
    {v[112]=BITSF(LD32(sp+(80)));}
    {v[113]=BITSF(LD32(sp+(84)));}
    {v[114]=BITSF(LD32(sp+(88)));}
    {v[115]=BITSF(LD32(sp+(92)));}
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
    {ST32(sp+(96),FBITS(v[96]));}
    {ST32(sp+(100),FBITS(v[97]));}
    {ST32(sp+(104),FBITS(v[98]));}
    {ST32(sp+(108),FBITS(v[100]));}
    {ST32(sp+(112),FBITS(v[101]));}
    {ST32(sp+(116),FBITS(v[102]));}
    {ST32(sp+(120),FBITS(v[104]));}
    {ST32(sp+(124),FBITS(v[105]));}
    {ST32(sp+(128),FBITS(v[106]));}
    {u32 a_=sp+(256);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    f2 = BITSF(LD32(sp));
    {v[48]=BITSF(v0);}
    {u32 a_=sp+(288);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+24);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(240);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[50]=BITSF(v0);}
    v1 = LD32(sp+28);
    v0 = LD32(sp+32);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+36);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(sp+44);
    v0 = LD32(sp+48);
    {v[33]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+64);
    {v[34]=BITSF(v0);}
    {v[20]=BITSF(v1);}
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    {v[21]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[16]);}
    f1 = BITSF(v1);
    {a1=FBITS(v[17]);}
    f0 = BITSF(a1);
    f2 = f2 + f1;
    f1 = BITSF(LD32(sp+4));
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+8));
    ST32(sp+176, v1);
    f0 = f0 + f5;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f0));
    ST32(sp, FBITS(f2));
    ST32(sp+180, a1);
    ST32(sp+184, v0);
    ST32(sp+160, v1);
    ST32(sp+164, a1);
    ST32(sp+168, v0);
    ST32(sp+144, FBITS(f2));
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
    {v[116]=BITSF(LD32(sp+(108)));}
    {v[117]=BITSF(LD32(sp+(112)));}
    {v[118]=BITSF(LD32(sp+(116)));}
    {v[120]=BITSF(LD32(sp+(120)));}
    {v[121]=BITSF(LD32(sp+(124)));}
    {v[122]=BITSF(LD32(sp+(128)));}
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
    {ST32(sp+(192),FBITS(v[80]));}
    {ST32(sp+(196),FBITS(v[81]));}
    {ST32(sp+(200),FBITS(v[82]));}
    {ST32(sp+(204),FBITS(v[84]));}
    {ST32(sp+(208),FBITS(v[85]));}
    {ST32(sp+(212),FBITS(v[86]));}
    {ST32(sp+(216),FBITS(v[88]));}
    {ST32(sp+(220),FBITS(v[89]));}
    {ST32(sp+(224),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+192));
    f1 = BITSF(LD32(sp+196));
    ST32(sp+16, FBITS(f0));
    f0 = BITSF(LD32(sp+200));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    f1 = BITSF(LD32(sp+204));
    f0 = BITSF(LD32(sp+208));
    ST32(sp+28, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    f1 = BITSF(LD32(sp+212));
    f0 = BITSF(LD32(sp+216));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    f1 = BITSF(LD32(sp+220));
    f0 = BITSF(LD32(sp+224));
    ST32(sp+44, FBITS(f1));
    ST32(sp+48, FBITS(f0));
    goto L_088D1794;
L_088D1794:;
    f12 = BITSF(LD32(s1+112));
    a0 = s0 + 0;
    a2 = sp + 16;
    a3 = s4 + 0;
    a1 = sp + 0;
    goto L_088D17A8;
L_088D17A8:;
    { rv_t r_ = func_088067CC(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D17B0;
L_088D17B0:;
    goto L_088D11D4;
L_088D17B8:;
    f12 = BITSF(LD32(v0-13652));
    a0 = s2 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D17C8;
L_088D17C8:;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_088D1550;
L_088D17DC:;
    f12 = BITSF(LD32(s1+112));
    a1 = s1 + 56;
    a2 = s1 + 68;
    a0 = s0 + 0;
    a3 = s4 + 0;
    goto L_088D17A8;
L_088D17F4:;
    v0 = a0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_088D13F8;
L_088D1810:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f13 = (float)(s32)FBITS(f2);
    f13 = f13 + f13;
    goto L_088D13E0;
L_088D182C:;
    v0 = v0 & 0x1;
    v1 = v1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f12 = (float)(s32)FBITS(f2);
    f12 = f12 + f12;
    goto L_088D13C0;
L_088D1848:;
    a0 = LD32(v0-22336);
    goto L_088D13AC;
L_088D1850:;
    v0 = D_08AECAA4 - (-13660);
    f12 = BITSF(LD32(v0-13660));
    a0 = s0 + 0;
    a1 = 1;
    f13 = f12;
    f14 = f12;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08809B24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D187C;
L_088D187C:;
    v1 = LD32(s1+116);
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    goto L_088D1430;
}

/* 088D1894 */
void func_088D1894(void)
{
L_088D1894:;
    return;
}

/* 088D189C */
rv_t func_088D189C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[400] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 400);
L_088D189C:;
    sp = sp - 400;
    t2 = a1 + 0;
    t1 = a2 + 0;
    s5 = t0 + 0;
    s4 = a3 + 0;
    v1 = LD32(a0+8);
    cnd_ = v1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_088D18E4; }
    goto L_088D18D8;
L_088D18D8:;
    a0 = LD32(v1+16);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088D1C60; }
    goto L_088D18E4;
L_088D18E4:;
    s0 = LD32(s2+12);
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D1BF0; }
    goto L_088D18F0;
L_088D18F0:;
    v0 = LD32(s2+116);
    v0 = v0 & 0x200;
    cnd_ = v0 == 0;
    s1 = s0 + 76;
    if (cnd_) { goto L_088D1C48; }
    goto L_088D1900;
L_088D1900:;
    f0 = BITSF(LD32(t1));
    f1 = BITSF(LD32(t1+4));
    f2 = BITSF(LD32(t1+8));
    f8 = BITSF(LD32(t1+32));
    f3 = BITSF(LD32(t1+12));
    f4 = BITSF(LD32(t1+16));
    f5 = BITSF(LD32(t1+20));
    f6 = BITSF(LD32(t1+24));
    f7 = BITSF(LD32(t1+28));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    f2 = BITSF(LD32(t2+8));
    f0 = BITSF(LD32(t2));
    f1 = BITSF(LD32(t2+4));
    a1 = LD32(s0+16);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    cnd_ = a1 == 0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_088D1990; }
    goto L_088D1968;
L_088D1968:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s1 + 0;
    if (cnd_) { goto L_088D1994; }
    goto L_088D197C;
L_088D197C:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AECAB0 - (-13648);
    if (cnd_) { goto L_088D1C14; }
    goto L_088D198C;
L_088D198C:;
    ST32(s0+220, s3);
    goto L_088D1990;
L_088D1990:;
    a0 = s1 + 0;
    goto L_088D1994;
L_088D1994:;
    a1 = sp + 64;
    a2 = sp + 80;
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = func_08816684(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D19B0;
L_088D19B0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_088D1BD4; }
    goto L_088D19BC;
L_088D19BC:;
    {v[112]=BITSF(LD32(sp+(80)));}
    {v[113]=BITSF(LD32(sp+(84)));}
    {v[114]=BITSF(LD32(sp+(88)));}
    {v[115]=BITSF(LD32(sp+(92)));}
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
    {ST32(sp+(96),FBITS(v[96]));}
    {ST32(sp+(100),FBITS(v[97]));}
    {ST32(sp+(104),FBITS(v[98]));}
    {ST32(sp+(108),FBITS(v[100]));}
    {ST32(sp+(112),FBITS(v[101]));}
    {ST32(sp+(116),FBITS(v[102]));}
    {ST32(sp+(120),FBITS(v[104]));}
    {ST32(sp+(124),FBITS(v[105]));}
    {ST32(sp+(128),FBITS(v[106]));}
    {u32 a_=sp+(256);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    f2 = BITSF(LD32(sp));
    {v[48]=BITSF(v0);}
    {u32 a_=sp+(288);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+24);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(240);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[50]=BITSF(v0);}
    v1 = LD32(sp+28);
    v0 = LD32(sp+32);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(sp+36);
    {v[49]=BITSF(v0);}
    v0 = LD32(sp+40);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(sp+44);
    v0 = LD32(sp+48);
    {v[33]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+64);
    {v[34]=BITSF(v0);}
    {v[20]=BITSF(v1);}
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    {v[21]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f2 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+4));
    ST32(sp+176, FBITS(f4));
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+8));
    ST32(sp, FBITS(f2));
    f0 = f0 + f5;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+148, FBITS(f1));
    ST32(sp+152, FBITS(f0));
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f5));
    ST32(sp+160, FBITS(f4));
    ST32(sp+164, v0);
    ST32(sp+168, FBITS(f5));
    ST32(sp+144, FBITS(f2));
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
    {v[116]=BITSF(LD32(sp+(108)));}
    {v[117]=BITSF(LD32(sp+(112)));}
    {v[118]=BITSF(LD32(sp+(116)));}
    {v[120]=BITSF(LD32(sp+(120)));}
    {v[121]=BITSF(LD32(sp+(124)));}
    {v[122]=BITSF(LD32(sp+(128)));}
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
    {ST32(sp+(192),FBITS(v[80]));}
    {ST32(sp+(196),FBITS(v[81]));}
    {ST32(sp+(200),FBITS(v[82]));}
    {ST32(sp+(204),FBITS(v[84]));}
    {ST32(sp+(208),FBITS(v[85]));}
    {ST32(sp+(212),FBITS(v[86]));}
    {ST32(sp+(216),FBITS(v[88]));}
    {ST32(sp+(220),FBITS(v[89]));}
    {ST32(sp+(224),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+192));
    f1 = BITSF(LD32(sp+196));
    ST32(sp+16, FBITS(f0));
    f0 = BITSF(LD32(sp+200));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    f1 = BITSF(LD32(sp+204));
    f0 = BITSF(LD32(sp+208));
    ST32(sp+28, FBITS(f1));
    ST32(sp+32, FBITS(f0));
    f1 = BITSF(LD32(sp+212));
    f0 = BITSF(LD32(sp+216));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    f1 = BITSF(LD32(sp+220));
    f0 = BITSF(LD32(sp+224));
    ST32(sp+44, FBITS(f1));
    ST32(sp+48, FBITS(f0));
    goto L_088D1BD4;
L_088D1BD4:;
    a0 = LD32(s2+12);
    a2 = sp + 16;
    a3 = s4 + 0;
    t0 = s5 + 0;
    a1 = sp + 0;
    goto L_088D1BE8;
L_088D1BE8:;
    { rv_t r_ = func_08808B24(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1BF0;
L_088D1BF0:;
    goto L_088D1BF4;
L_088D1BF4:;
    sp = sp + 400;
    return (rv_t){ v0, v1, f0 };
L_088D1C14:;
    f12 = BITSF(LD32(v0-13648));
    a0 = s1 + 0;
    a2 = 0 + 0;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_088155D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1C34;
L_088D1C34:;
    {u32 a_=sp+(352);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_088D198C;
L_088D1C48:;
    a0 = s0 + 0;
    a1 = t2 + 0;
    a2 = t1 + 0;
    a3 = s4 + 0;
    t0 = s5 + 0;
    goto L_088D1BE8;
L_088D1C60:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1C6C;
L_088D1C6C:;
    goto L_088D1BF4;
}

/* 088D1C74 */
u32 func_088D1C74(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_088D1C74:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a0+12); goto L_088D1C88; }
    goto L_088D1C80;
L_088D1C80:;
    v0 = LD32(a0+4);
    return v0;
L_088D1C88:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D1C9C; }
    goto L_088D1C90;
L_088D1C90:;
    a0 = LD32(a0+16);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0+64); goto L_088D1C9C; }
    goto L_088D1C9C;
L_088D1C9C:;
    return v0;
}

/* 088D1CA4 */
rv_t func_088D1CA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D1CA4:;
    sp = sp - 16;
    t0 = t0 & 0xff;
    v1 = 0 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D1CD0; }
    goto L_088D1CC0;
L_088D1CC0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D1CD0:;
    { rv_t r_ = func_08807368(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1CD8;
L_088D1CD8:;
    v1 = 0 < v0;
    goto L_088D1CC0;
}

/* 088D1CE0 */
void func_088D1CE0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D1CE0:;
    sp = sp - 32;
    a2 = LD32(a0+116);
    v0 = a2 & 0x81;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+16); goto L_088D1DE8; }
    goto L_088D1D00;
L_088D1D00:;
    v0 = a2 & 0x80;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0+104); goto L_088D1D8C; }
    goto L_088D1D0C;
L_088D1D0C:;
    v0 = 128;
    f0 = BITSF(v0);
    v0 = D_08AECAB4 - (-13644);
    ST32(sp+12, 0);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-13644));
    f1 = f1 * f0;
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f1));
    ST32(sp+4, FBITS(f1));
    goto L_088D1D34;
L_088D1D34:;
    a2 = D_08B2A744 - (-22716);
    a1 = a2 - 22716;
    a0 = 0 + 0;
    v1 = a1 + 0;
    goto L_088D1D44;
L_088D1D44:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    ST32(v1+16, 0);
    ST32(v1+32, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D1D44; }
    goto L_088D1D60;
L_088D1D60:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    ST32(a2-22716, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(a1+32, FBITS(f1));
    ST32(a1+16, FBITS(f0));
    goto L_088D1D7C;
L_088D1D7C:;
    sp = sp + 32;
    return;
L_088D1D8C:;
    v0 = D_08AECAB4 - (-13644);
    f4 = BITSF(LD32(v0-13644));
    v0 = v1 >> 24;
    f6 = BITSF(v0);
    v0 = v1 & 0xff;
    f2 = BITSF(v0);
    v0 = (v1 >> 8) & 0xff;
    v1 = (v1 >> 16) & 0xff;
    f3 = BITSF(v0);
    f5 = BITSF(v1);
    f0 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f5);
    f3 = (float)(s32)FBITS(f6);
    f0 = f0 * f4;
    f1 = f1 * f4;
    f2 = f2 * f4;
    f3 = f3 * f4;
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    goto L_088D1D34;
L_088D1DE8:;
    cnd_ = v0 != 0;
    s1 = (a2 >> 8) & 0x1;
    if (cnd_) { goto L_088D1E2C; }
    goto L_088D1DF0;
L_088D1DF0:;
    cnd_ = s1 == 0;
    s0 = a0 + 128;
    if (cnd_) { goto L_088D1E08; }
    goto L_088D1DF8;
L_088D1DF8:;
    v0 = LD32(s0+20);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 != 0;
    a2 = s1 ^ 0x1;
    if (cnd_) { goto L_088D1E18; }
    goto L_088D1E08;
L_088D1E08:;
    a1 = a0 + 56;
    a0 = s0 + 0;
    func_0889C888(a0, a1);
    goto L_088D1E14;
L_088D1E14:;
    a2 = s1 ^ 0x1;
    goto L_088D1E18;
L_088D1E18:;
    a0 = s0 + 0;
    a1 = 1;
    func_0889C91C(a0, a1, a2);
    goto L_088D1E24;
L_088D1E24:;
    goto L_088D1D7C;
L_088D1E2C:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    func_08809FD0(a0, a1, t1, t2, t3);
    goto L_088D1E38;
L_088D1E38:;
    goto L_088D1D7C;
}

/* 088D1E40 */
void func_088D1E40(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_088D1E40:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+316, a1); goto L_088D1E4C; }
    goto L_088D1E4C;
L_088D1E4C:;
    ST32(a0+16, a1);
    return;
}

/* 088D1E54 */
void func_088D1E54(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D1E54:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 264;
    if (cnd_) { goto L_088D1E74; }
    goto L_088D1E68;
L_088D1E68:;
    goto L_088D1E6C;
L_088D1E6C:;
    sp = sp + 16;
    return;
L_088D1E74:;
    func_0881B1AC(a0, a1);
    goto L_088D1E7C;
L_088D1E7C:;
    goto L_088D1E6C;
}

/* 088D1E84 */
void func_088D1E84(u32 a0, float f12)
{
    u32 v0 = 0;
    int cnd_;
L_088D1E84:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+276, FBITS(f12)); goto L_088D1E90; }
    goto L_088D1E90;
L_088D1E90:;
    return;
}

/* 088D1E98 */
void func_088D1E98(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D1E98:;
    sp = sp - 16;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D1ED8; }
    goto L_088D1EB4;
L_088D1EB4:;
    v0 = LD32(s1+16);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088D1F28; }
    goto L_088D1EC0;
L_088D1EC0:;
    v0 = LD32(s1+20);
    goto L_088D1EC4;
L_088D1EC4:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088D1F18; }
    goto L_088D1ED0;
L_088D1ED0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D1ED8;
L_088D1ED8:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D1F08; }
    goto L_088D1EE4;
L_088D1EE4:;
    ST32(s0, 0);
    goto L_088D1EE8;
L_088D1EE8:;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 16;
    return;
L_088D1F08:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D1F10;
L_088D1F10:;
    ST32(s0, 0);
    goto L_088D1EE8;
L_088D1F18:;
    func_08AB68D4(a0, a1, t1, t2, t3);
    goto L_088D1F20;
L_088D1F20:;
    goto L_088D1ED0;
L_088D1F28:;
    func_08AB68D4(a0, a1, t1, t2, t3);
    goto L_088D1F30;
L_088D1F30:;
    v0 = LD32(s1+20);
    goto L_088D1EC4;
}

/* 088D1F38 */
void func_088D1F38(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D1F38:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s1 = LD32(a1);
    if (cnd_) { goto L_088D1FD4; }
    goto L_088D1F64;
L_088D1F64:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D1F98; }
    goto L_088D1F70;
L_088D1F70:;
    v1 = v0 + 0;
    goto L_088D1F74;
L_088D1F74:;
    a0 = v1 + 20;
    s0 = v1 + 16;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088D1FD4; }
    goto L_088D1F8C;
L_088D1F8C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D1F74; }
    goto L_088D1F98;
L_088D1F98:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D1FA0;
L_088D1FA0:;
    v1 = LD32(s2);
    ST32(v0+16, 0);
    ST32(v0+4, v1);
    a0 = LD32(s2+4);
    ST32(v0+20, 0);
    ST32(v0+8, a0);
    a1 = LD32(s2+8);
    ST32(v0, s1);
    ST32(v0+12, a1);
    v1 = LD32(s3+4);
    ST32(s0, v0);
    v1 = v1 + 1;
    ST32(s3+4, v1);
    goto L_088D1FD4;
L_088D1FD4:;
    sp = sp + 32;
    return;
}

/* 088D1FF0 */
u64 func_088D1FF0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D1FF0:;
    sp = sp - 16;
    v0 = func_088D205C(a0, a1);
    goto L_088D2000;
L_088D2000:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D200C; }
    goto L_088D2008;
L_088D2008:;
    v1 = LD32(v0+8);
    goto L_088D200C;
L_088D200C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D201C */
rv_t func_088D201C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D201C:;
    sp = sp - 16;
    s0 = a2 + 0;
    { u64 r_ = func_088D1FF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2030;
L_088D2030:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088D204C; }
    goto L_088D203C;
L_088D203C:;
    goto L_088D2040;
L_088D2040:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D204C:;
    { rv_t r_ = func_088D20C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2054;
L_088D2054:;
    goto L_088D2040;
}

/* 088D205C */
u32 func_088D205C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D205C:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_088D209C; }
    goto L_088D2070;
L_088D2070:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088D2078;
L_088D2078:;
    a0 = v0 + 20;
    a2 = v0 + 16;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088D20A8; }
    goto L_088D2090;
L_088D2090:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088D2078; }
    goto L_088D209C;
L_088D209C:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D20B8; }
    goto L_088D20A8;
L_088D20A8:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
L_088D20B8:;
    a2 = 1;
    v0 = func_08AB6944(a0, a1, a2);
    goto L_088D20C0;
L_088D20C0:;
    a3 = v0 + 0;
    goto L_088D20A8;
}

/* 088D20C8 */
rv_t func_088D20C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D20C8:;
    sp = sp - 32;
    v0 = D_08AECAB8 - (-13640);
    f12 = BITSF(LD32(v0-13640));
    f13 = f12;
    { rv_t r_ = func_088DBF24(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D20E0;
L_088D20E0:;
    a3 = D_08B25AC0 - (23232);
    v1 = (u32)-1;
    t0 = a3 + 23232;
    a0 = v0 + 0;
    cnd_ = v0 == v1;
    ST32(sp, v0);
    if (cnd_) { goto L_088D2168; }
    goto L_088D20F8;
L_088D20F8:;
    v1 = LD32(a3+23232);
    a2 = LD32(t0+4);
    v0 = D_08AECABC - (-13636);
    a1 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a1;
    v1 = v1 + a2;
    f2 = BITSF(LD32(v0-13636));
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AECAC0 - (-13632);
    f1 = BITSF(LD32(v0-13632));
    f12 = (float)(s32)FBITS(f0);
    v0 = D_08AECAC4 - (-13628);
    f0 = BITSF(LD32(v0-13628));
    f1 = f1 - f2;
    a2 = a2 + v1;
    f12 = f12 * f0;
    ST32(t0+4, a2);
    f12 = f12 * f1;
    ST32(a3+23232, v1);
    f12 = f12 + f2;
    f0 = func_088DB940(a0, f12);
    goto L_088D2154;
L_088D2154:;
    a0 = LD32(sp);
    a1 = 0 + 0;
    { rv_t r_ = func_088DB45C(a0, a1, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2160;
L_088D2160:;
    a0 = sp + 0;
    { u64 r_ = func_088DB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2168;
L_088D2168:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088D2174 */
void func_088D2174(void)
{
L_088D2174:;
    return;
}

/* 088D217C */
void func_088D217C(u32 t1, u32 t2, u32 t3)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D217C:;
    a0 = D_08B30734 - (1844);
    sp = sp - 16;
    a0 = a0 + 1844;
    func_088D1E98(a0, t1, t2, t3);
    goto L_088D2190;
L_088D2190:;
    sp = sp + 16;
    return;
}

/* 088D219C */
void func_088D219C(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D219C:;
    sp = sp - 16;
    func_088D217C(t1, t2, t3);
    goto L_088D21AC;
L_088D21AC:;
    func_088D2174();
    goto L_088D21B4;
L_088D21B4:;
    sp = sp + 16;
    return;
}

/* 088D21C0 */
u64 func_088D21C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D21C0:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D2208; }
    goto L_088D21E8;
L_088D21E8:;
    v1 = D_08B30734 - (1844);
    v0 = v1 + 1844;
    ST32(v1+1844, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_088D2208;
L_088D2208:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D2260; }
    goto L_088D2218;
L_088D2218:;
    v0 = D_08B30734 - (1844);
    s0 = LD32(v0+1844);
    cnd_ = s0 == 0;
    s1 = v0 + 1844;
    if (cnd_) { goto L_088D2248; }
    goto L_088D2228;
L_088D2228:;
    a1 = LD32(s0+16);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2290; }
    goto L_088D2234;
L_088D2234:;
    a1 = LD32(s0+20);
    goto L_088D2238;
L_088D2238:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2280; }
    goto L_088D2240;
L_088D2240:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2248;
L_088D2248:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D2270; }
    goto L_088D2254;
L_088D2254:;
    ST32(s1+16, 0);
    goto L_088D2258;
L_088D2258:;
    ST32(s1+12, 0);
    goto L_088D2260;
L_088D2260:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D2270:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2278;
L_088D2278:;
    ST32(s1+16, 0);
    goto L_088D2258;
L_088D2280:;
    a0 = s1 + 0;
    func_08AB68D4(a0, a1, t1, t2, t3);
    goto L_088D2288;
L_088D2288:;
    goto L_088D2240;
L_088D2290:;
    a0 = s1 + 0;
    func_08AB68D4(a0, a1, t1, t2, t3);
    goto L_088D2298;
L_088D2298:;
    a1 = LD32(s0+20);
    goto L_088D2238;
}

/* 088D22A0 */
rv_t func_088D22A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D22A0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088D21C0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D22B4;
L_088D22B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D22C0 */
rv_t func_088D22C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D22C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088D21C0(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D22D4;
L_088D22D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D22E0 */
void func_088D22E0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D22E0:;
    a0 = D_08B30750 - (1872);
    sp = sp - 16;
    a0 = a0 + 1872;
    func_088D2320(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D22F4;
L_088D22F4:;
    sp = sp + 16;
    return;
}

/* 088D2300 */
void func_088D2300(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2300:;
    a0 = D_08B30750 - (1872);
    sp = sp - 16;
    a0 = a0 + 1872;
    func_088D2748(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D2314;
L_088D2314:;
    sp = sp + 16;
    return;
}

/* 088D2320 */
void func_088D2320(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D2320:;
    sp = sp - 32;
    v1 = 1;
    s5 = D_08B3074C - (1868);
    v0 = ((u32)(uintptr_t)func_088D2A38) - (10808);
    s2 = a0 + 0;
    s1 = v0 + 10808;
    s0 = LD32(a0);
    ST8(s5+1868, v1);
    cnd_ = s0 == 0;
    ST8(a0+8, v1);
    if (cnd_) { goto L_088D2388; }
    goto L_088D2364;
L_088D2364:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2738; }
    goto L_088D2370;
L_088D2370:;
    a1 = LD32(s0+12);
    goto L_088D2374;
L_088D2374:;
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088D2728; }
    goto L_088D237C;
L_088D237C:;
    a0 = LD32(s0);
    goto L_088D2380;
L_088D2380:;
    t_ = s1;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2388;
L_088D2388:;
    a0 = LD32(s2+12);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = LD32(s2); goto L_088D23EC; }
    goto L_088D2394;
L_088D2394:;
    v0 = LD32(s2+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088D23D8; }
    goto L_088D23A0;
L_088D23A0:;
    v0 = s0 << 2;
    goto L_088D23A4;
L_088D23A4:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s2 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08AA4A58(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D23B8;
L_088D23B8:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D23C0;
L_088D23C0:;
    v0 = LD32(s2+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s2+12);
    if (cnd_) { goto L_088D23D8; }
    goto L_088D23D0;
L_088D23D0:;
    v0 = s0 << 2;
    goto L_088D23A4;
L_088D23D8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D2718; }
    goto L_088D23E0;
L_088D23E0:;
    ST32(s2+12, 0);
    goto L_088D23E4;
L_088D23E4:;
    ST32(s2+16, 0);
    s0 = LD32(s2);
    goto L_088D23EC;
L_088D23EC:;
    cnd_ = s0 == 0;
    ST8(s2+8, 0);
    if (cnd_) { goto L_088D2414; }
    goto L_088D23F4;
L_088D23F4:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2708; }
    goto L_088D2400;
L_088D2400:;
    a1 = LD32(s0+12);
    goto L_088D2404;
L_088D2404:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D26F8; }
    goto L_088D240C;
L_088D240C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2414;
L_088D2414:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D26E8; }
    goto L_088D2420;
L_088D2420:;
    s0 = LD32(s2+24);
    goto L_088D2424;
L_088D2424:;
    s1 = s2 + 24;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088D2A70) - (10864);
    ST8(s1+8, v0);
    s3 = v1 + 10864;
    ST32(s2+12, 0);
    ST32(s2+16, 0);
    ST32(s2+4, 0);
    cnd_ = s0 == 0;
    ST32(s2, 0);
    if (cnd_) { goto L_088D2470; }
    goto L_088D244C;
L_088D244C:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088D26D8; }
    goto L_088D2458;
L_088D2458:;
    a1 = LD32(s0+12);
    goto L_088D245C;
L_088D245C:;
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088D26C8; }
    goto L_088D2464;
L_088D2464:;
    a0 = LD32(s0);
    goto L_088D2468;
L_088D2468:;
    t_ = s3;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2470;
L_088D2470:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = LD32(s2+24); goto L_088D24D4; }
    goto L_088D247C;
L_088D247C:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088D24C0; }
    goto L_088D2488;
L_088D2488:;
    v0 = s0 << 2;
    goto L_088D248C;
L_088D248C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08AB69BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D24A0;
L_088D24A0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D24A8;
L_088D24A8:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_088D24C0; }
    goto L_088D24B8;
L_088D24B8:;
    v0 = s0 << 2;
    goto L_088D248C;
L_088D24C0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D26B8; }
    goto L_088D24C8;
L_088D24C8:;
    ST32(s1+12, 0);
    goto L_088D24CC;
L_088D24CC:;
    ST32(s1+16, 0);
    s0 = LD32(s2+24);
    goto L_088D24D4;
L_088D24D4:;
    cnd_ = s0 == 0;
    ST8(s1+8, 0);
    if (cnd_) { goto L_088D24FC; }
    goto L_088D24DC;
L_088D24DC:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D26A8; }
    goto L_088D24E8;
L_088D24E8:;
    a1 = LD32(s0+12);
    goto L_088D24EC;
L_088D24EC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2698; }
    goto L_088D24F4;
L_088D24F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D24FC;
L_088D24FC:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D2688; }
    goto L_088D2508;
L_088D2508:;
    s3 = LD32(s2+48);
    goto L_088D250C;
L_088D250C:;
    s0 = s2 + 48;
    v0 = ((u32)(uintptr_t)func_088D2AA8) - (10920);
    v1 = 1;
    ST32(s1, 0);
    s4 = v0 + 10920;
    ST8(s0+8, v1);
    ST32(s1+12, 0);
    ST32(s1+16, 0);
    cnd_ = s3 == 0;
    ST32(s1+4, 0);
    if (cnd_) { goto L_088D2558; }
    goto L_088D2534;
L_088D2534:;
    a1 = LD32(s3+8);
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D2678; }
    goto L_088D2540;
L_088D2540:;
    a1 = LD32(s3+12);
    goto L_088D2544;
L_088D2544:;
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D2668; }
    goto L_088D254C;
L_088D254C:;
    a0 = LD32(s3);
    goto L_088D2550;
L_088D2550:;
    t_ = s4;
    a1 = s3 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2558;
L_088D2558:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { s1 = LD32(s2+48); goto L_088D25BC; }
    goto L_088D2564;
L_088D2564:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088D25A8; }
    goto L_088D2570;
L_088D2570:;
    v0 = s1 << 2;
    goto L_088D2574;
L_088D2574:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    v0 = func_08AB6AA4(a0, a1);
    goto L_088D2588;
L_088D2588:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2590;
L_088D2590:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_088D25A8; }
    goto L_088D25A0;
L_088D25A0:;
    v0 = s1 << 2;
    goto L_088D2574;
L_088D25A8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D2658; }
    goto L_088D25B0;
L_088D25B0:;
    ST32(s0+12, 0);
    goto L_088D25B4;
L_088D25B4:;
    ST32(s0+16, 0);
    s1 = LD32(s2+48);
    goto L_088D25BC;
L_088D25BC:;
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_088D25E4; }
    goto L_088D25C4;
L_088D25C4:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2648; }
    goto L_088D25D0;
L_088D25D0:;
    a1 = LD32(s1+12);
    goto L_088D25D4;
L_088D25D4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2638; }
    goto L_088D25DC;
L_088D25DC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D25E4;
L_088D25E4:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D2628; }
    goto L_088D25F0;
L_088D25F0:;
    ST32(s0, 0);
    goto L_088D25F4;
L_088D25F4:;
    ST8(s5+1868, 0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 32;
    return;
L_088D2628:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2630;
L_088D2630:;
    ST32(s0, 0);
    goto L_088D25F4;
L_088D2638:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB6FC4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2640;
L_088D2640:;
    goto L_088D25DC;
L_088D2648:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB6FC4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2650;
L_088D2650:;
    a1 = LD32(s1+12);
    goto L_088D25D4;
L_088D2658:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2660;
L_088D2660:;
    ST32(s0+12, 0);
    goto L_088D25B4;
L_088D2668:;
    a2 = s4 + 0;
    func_08AB6EA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D2670;
L_088D2670:;
    a0 = LD32(s3);
    goto L_088D2550;
L_088D2678:;
    a2 = s4 + 0;
    func_08AB6EA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D2680;
L_088D2680:;
    a1 = LD32(s3+12);
    goto L_088D2544;
L_088D2688:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2690;
L_088D2690:;
    s3 = LD32(s2+48);
    goto L_088D250C;
L_088D2698:;
    a0 = s1 + 0;
    { u64 r_ = func_08AB6E38(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D26A0;
L_088D26A0:;
    goto L_088D24F4;
L_088D26A8:;
    a0 = s1 + 0;
    { u64 r_ = func_08AB6E38(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D26B0;
L_088D26B0:;
    a1 = LD32(s0+12);
    goto L_088D24EC;
L_088D26B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D26C0;
L_088D26C0:;
    ST32(s1+12, 0);
    goto L_088D24CC;
L_088D26C8:;
    a2 = s3 + 0;
    func_08AB6D1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D26D0;
L_088D26D0:;
    a0 = LD32(s0);
    goto L_088D2468;
L_088D26D8:;
    a2 = s3 + 0;
    func_08AB6D1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D26E0;
L_088D26E0:;
    a1 = LD32(s0+12);
    goto L_088D245C;
L_088D26E8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D26F0;
L_088D26F0:;
    s0 = LD32(s2+24);
    goto L_088D2424;
L_088D26F8:;
    a0 = s2 + 0;
    func_08AB6CAC(a0, a1, t1, t2, t3);
    goto L_088D2700;
L_088D2700:;
    goto L_088D240C;
L_088D2708:;
    a0 = s2 + 0;
    func_08AB6CAC(a0, a1, t1, t2, t3);
    goto L_088D2710;
L_088D2710:;
    a1 = LD32(s0+12);
    goto L_088D2404;
L_088D2718:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2720;
L_088D2720:;
    ST32(s2+12, 0);
    goto L_088D23E4;
L_088D2728:;
    a2 = s1 + 0;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D2730;
L_088D2730:;
    a0 = LD32(s0);
    goto L_088D2380;
L_088D2738:;
    a2 = s1 + 0;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D2740;
L_088D2740:;
    a1 = LD32(s0+12);
    goto L_088D2374;
}

/* 088D2748 */
void func_088D2748(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D2748:;
    sp = sp - 32;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088D2AE8) - (10984);
    s2 = v1 + 10984;
    s0 = a0 + 0;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    ST8(a0+8, v0);
    if (cnd_) { goto L_088D27A0; }
    goto L_088D277C;
L_088D277C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D28B0; }
    goto L_088D2788;
L_088D2788:;
    a1 = LD32(s1+12);
    goto L_088D278C;
L_088D278C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D28A0; }
    goto L_088D2794;
L_088D2794:;
    a0 = LD32(s1);
    goto L_088D2798;
L_088D2798:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D27A0;
L_088D27A0:;
    a0 = s0 + 0;
    func_08AA4B40(a0, t1, t2, t3);
    goto L_088D27A8;
L_088D27A8:;
    s1 = LD32(s0+24);
    s2 = s0 + 24;
    v0 = ((u32)(uintptr_t)func_088D2B24) - (11044);
    v1 = 1;
    ST8(s0+8, 0);
    s3 = v0 + 11044;
    cnd_ = s1 == 0;
    ST8(s2+8, v1);
    if (cnd_) { goto L_088D27EC; }
    goto L_088D27C8;
L_088D27C8:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088D2890; }
    goto L_088D27D4;
L_088D27D4:;
    a1 = LD32(s1+12);
    goto L_088D27D8;
L_088D27D8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088D2880; }
    goto L_088D27E0;
L_088D27E0:;
    a0 = LD32(s1);
    goto L_088D27E4;
L_088D27E4:;
    t_ = s3;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D27EC;
L_088D27EC:;
    a0 = s2 + 0;
    func_08AB6DA0(a0, 0, 0, 0);
    goto L_088D27F4;
L_088D27F4:;
    s1 = LD32(s0+48);
    v0 = ((u32)(uintptr_t)func_088D2B60) - (11104);
    s0 = s0 + 48;
    v1 = 1;
    ST8(s2+8, 0);
    s2 = v0 + 11104;
    cnd_ = s1 == 0;
    ST8(s0+8, v1);
    if (cnd_) { goto L_088D2838; }
    goto L_088D2814;
L_088D2814:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D2870; }
    goto L_088D2820;
L_088D2820:;
    a1 = LD32(s1+12);
    goto L_088D2824;
L_088D2824:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D2860; }
    goto L_088D282C;
L_088D282C:;
    a0 = LD32(s1);
    goto L_088D2830;
L_088D2830:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2838;
L_088D2838:;
    a0 = s0 + 0;
    func_08AB6F2C(a0, 0, 0, 0);
    goto L_088D2840;
L_088D2840:;
    ST8(s0+8, 0);
    sp = sp + 32;
    return;
L_088D2860:;
    a2 = s2 + 0;
    func_08AB6EA8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D2868;
L_088D2868:;
    a0 = LD32(s1);
    goto L_088D2830;
L_088D2870:;
    a2 = s2 + 0;
    func_08AB6EA8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D2878;
L_088D2878:;
    a1 = LD32(s1+12);
    goto L_088D2824;
L_088D2880:;
    a2 = s3 + 0;
    func_08AB6D1C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D2888;
L_088D2888:;
    a0 = LD32(s1);
    goto L_088D27E4;
L_088D2890:;
    a2 = s3 + 0;
    func_08AB6D1C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D2898;
L_088D2898:;
    a1 = LD32(s1+12);
    goto L_088D27D8;
L_088D28A0:;
    a2 = s2 + 0;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D28A8;
L_088D28A8:;
    a0 = LD32(s1);
    goto L_088D2798;
L_088D28B0:;
    a2 = s2 + 0;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D28B8;
L_088D28B8:;
    a1 = LD32(s1+12);
    goto L_088D278C;
}

/* 088D28C0 */
void func_088D28C0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D28C0:;
    sp = sp - 32;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088D2BA4) - (11172);
    s2 = v1 + 11172;
    s0 = a0 + 0;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    ST8(a0+8, v0);
    if (cnd_) { goto L_088D2918; }
    goto L_088D28F4;
L_088D28F4:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D2A28; }
    goto L_088D2900;
L_088D2900:;
    a1 = LD32(s1+12);
    goto L_088D2904;
L_088D2904:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D2A18; }
    goto L_088D290C;
L_088D290C:;
    a0 = LD32(s1);
    goto L_088D2910;
L_088D2910:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2918;
L_088D2918:;
    a0 = s0 + 0;
    func_08AA4B40(a0, t1, t2, t3);
    goto L_088D2920;
L_088D2920:;
    s1 = LD32(s0+24);
    s2 = s0 + 24;
    v0 = ((u32)(uintptr_t)func_088D2BB4) - (11188);
    v1 = 1;
    ST8(s0+8, 0);
    s3 = v0 + 11188;
    cnd_ = s1 == 0;
    ST8(s2+8, v1);
    if (cnd_) { goto L_088D2964; }
    goto L_088D2940;
L_088D2940:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088D2A08; }
    goto L_088D294C;
L_088D294C:;
    a1 = LD32(s1+12);
    goto L_088D2950;
L_088D2950:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088D29F8; }
    goto L_088D2958;
L_088D2958:;
    a0 = LD32(s1);
    goto L_088D295C;
L_088D295C:;
    t_ = s3;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2964;
L_088D2964:;
    a0 = s2 + 0;
    func_08AB6DA0(a0, 0, 0, 0);
    goto L_088D296C;
L_088D296C:;
    s1 = LD32(s0+48);
    v0 = ((u32)(uintptr_t)func_088D2BC4) - (11204);
    s0 = s0 + 48;
    v1 = 1;
    ST8(s2+8, 0);
    s2 = v0 + 11204;
    cnd_ = s1 == 0;
    ST8(s0+8, v1);
    if (cnd_) { goto L_088D29B0; }
    goto L_088D298C;
L_088D298C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D29E8; }
    goto L_088D2998;
L_088D2998:;
    a1 = LD32(s1+12);
    goto L_088D299C;
L_088D299C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D29D8; }
    goto L_088D29A4;
L_088D29A4:;
    a0 = LD32(s1);
    goto L_088D29A8;
L_088D29A8:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D29B0;
L_088D29B0:;
    a0 = s0 + 0;
    func_08AB6F2C(a0, 0, 0, 0);
    goto L_088D29B8;
L_088D29B8:;
    ST8(s0+8, 0);
    sp = sp + 32;
    return;
L_088D29D8:;
    a2 = s2 + 0;
    func_08AB6EA8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D29E0;
L_088D29E0:;
    a0 = LD32(s1);
    goto L_088D29A8;
L_088D29E8:;
    a2 = s2 + 0;
    func_08AB6EA8(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D29F0;
L_088D29F0:;
    a1 = LD32(s1+12);
    goto L_088D299C;
L_088D29F8:;
    a2 = s3 + 0;
    func_08AB6D1C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D2A00;
L_088D2A00:;
    a0 = LD32(s1);
    goto L_088D295C;
L_088D2A08:;
    a2 = s3 + 0;
    func_08AB6D1C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D2A10;
L_088D2A10:;
    a1 = LD32(s1+12);
    goto L_088D2950;
L_088D2A18:;
    a2 = s2 + 0;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D2A20;
L_088D2A20:;
    a0 = LD32(s1);
    goto L_088D2910;
L_088D2A28:;
    a2 = s2 + 0;
    func_08AB6C28(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D2A30;
L_088D2A30:;
    a1 = LD32(s1+12);
    goto L_088D2904;
}

/* 088D2A38 */
rv_t func_088D2A38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2A38:;
    v0 = LD32(a1);
    sp = sp - 16;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D2A58; }
    goto L_088D2A4C;
L_088D2A4C:;
    goto L_088D2A50;
L_088D2A50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D2A58:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2A68;
L_088D2A68:;
    goto L_088D2A50;
}

/* 088D2A70 */
rv_t func_088D2A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2A70:;
    v0 = LD32(a1);
    sp = sp - 16;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D2A90; }
    goto L_088D2A84;
L_088D2A84:;
    goto L_088D2A88;
L_088D2A88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D2A90:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2AA0;
L_088D2AA0:;
    goto L_088D2A88;
}

/* 088D2AA8 */
rv_t func_088D2AA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2AA8:;
    sp = sp - 16;
    s0 = LD32(a1);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D2AD0; }
    goto L_088D2AC0;
L_088D2AC0:;
    goto L_088D2AC4;
L_088D2AC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D2AD0:;
    func_088D3B4C(a0, t1, t2, t3);
    goto L_088D2AD8;
L_088D2AD8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2AE0;
L_088D2AE0:;
    goto L_088D2AC4;
}

/* 088D2AE8 */
rv_t func_088D2AE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2AE8:;
    sp = sp - 16;
    a1 = LD32(a1);
    v0 = LD_U8(a1+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D2B1C; }
    goto L_088D2B00;
L_088D2B00:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088D2B1C; }
    goto L_088D2B08;
L_088D2B08:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2B18;
L_088D2B18:;
    goto L_088D2B1C;
L_088D2B1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D2B24 */
rv_t func_088D2B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2B24:;
    sp = sp - 16;
    a1 = LD32(a1);
    v0 = LD_U8(a1+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D2B58; }
    goto L_088D2B3C;
L_088D2B3C:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088D2B58; }
    goto L_088D2B44;
L_088D2B44:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2B54;
L_088D2B54:;
    goto L_088D2B58;
L_088D2B58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D2B60 */
rv_t func_088D2B60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2B60:;
    sp = sp - 16;
    s0 = LD32(a1);
    v0 = LD_U8(s0+32);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D2B98; }
    goto L_088D2B7C;
L_088D2B7C:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D2B98; }
    goto L_088D2B84;
L_088D2B84:;
    func_088D3B4C(a0, t1, t2, t3);
    goto L_088D2B8C;
L_088D2B8C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2B94;
L_088D2B94:;
    goto L_088D2B98;
L_088D2B98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D2BA4 */
rv_t func_088D2BA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088D2BA4:;
    v1 = LD32(a1);
    v0 = 1;
    ST8(v1+4, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088D2BB4 */
rv_t func_088D2BB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088D2BB4:;
    v1 = LD32(a1);
    v0 = 1;
    ST8(v1+4, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088D2BC4 */
rv_t func_088D2BC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088D2BC4:;
    v1 = LD32(a1);
    v0 = 1;
    ST8(v1+32, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088D2BD4 */
u64 func_088D2BD4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2BD4:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_088D2C14; }
    goto L_088D2BE8;
L_088D2BE8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088D2BF0;
L_088D2BF0:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088D2C20; }
    goto L_088D2C08;
L_088D2C08:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088D2BF0; }
    goto L_088D2C14;
L_088D2C14:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D2C38; }
    goto L_088D2C20;
L_088D2C20:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D2C2C; }
    goto L_088D2C28;
L_088D2C28:;
    v0 = LD32(a3);
    goto L_088D2C2C;
L_088D2C2C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D2C38:;
    a2 = 1;
    { u64 r_ = func_08AB7034(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2C40;
L_088D2C40:;
    a3 = v0 + 0;
    goto L_088D2C20;
}

/* 088D2C48 */
void func_088D2C48(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D2C48:;
    sp = sp - 32;
    s2 = a0 + 0;
    v0 = LD_U8(a0+8);
    ST32(sp, a1);
    cnd_ = v0 != 0;
    s1 = LD32(a1+8);
    if (cnd_) { goto L_088D2CD0; }
    goto L_088D2C70;
L_088D2C70:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D2CA4; }
    goto L_088D2C7C;
L_088D2C7C:;
    v1 = v0 + 0;
    goto L_088D2C80;
L_088D2C80:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088D2CD0; }
    goto L_088D2C98;
L_088D2C98:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D2C80; }
    goto L_088D2CA4;
L_088D2CA4:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2CAC;
L_088D2CAC:;
    ST32(v0, s1);
    v1 = LD32(s2+4);
    a0 = LD32(sp);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    goto L_088D2CD0;
L_088D2CD0:;
    sp = sp + 32;
    return;
}

/* 088D2CE8 */
rv_t func_088D2CE8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2CE8:;
    sp = sp - 16;
    v0 = D_08B3074C - (1868);
    v1 = LD_U8(v0+1868);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D2D3C; }
    goto L_088D2D08;
L_088D2D08:;
    s1 = LD32(a1+8);
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088D2D64; }
    goto L_088D2D18;
L_088D2D18:;
    a0 = LD32(a0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088D2D50; }
    goto L_088D2D24;
L_088D2D24:;
    v1 = LD32(s0+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_088D2D3C;
L_088D2D3C:;
    goto L_088D2D40;
L_088D2D40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D2D50:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2D58;
L_088D2D58:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_088D2D24;
L_088D2D64:;
    { u64 r_ = func_08AA4A58(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2D6C;
L_088D2D6C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D2D3C; }
    goto L_088D2D74;
L_088D2D74:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2D7C;
L_088D2D7C:;
    goto L_088D2D40;
}

/* 088D2D84 */
u64 func_088D2D84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2D84:;
    sp = sp - 16;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    t0 = a0 + 24;
    if (cnd_) { goto L_088D2DC4; }
    goto L_088D2D98;
L_088D2D98:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088D2DA0;
L_088D2DA0:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088D2DD0; }
    goto L_088D2DB8;
L_088D2DB8:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088D2DA0; }
    goto L_088D2DC4;
L_088D2DC4:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D2DE8; }
    goto L_088D2DD0;
L_088D2DD0:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D2DDC; }
    goto L_088D2DD8;
L_088D2DD8:;
    v0 = LD32(a3);
    goto L_088D2DDC;
L_088D2DDC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D2DE8:;
    a2 = 1;
    { u64 r_ = func_08AB70AC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2DF0;
L_088D2DF0:;
    a3 = v0 + 0;
    goto L_088D2DD0;
}

/* 088D2DF8 */
void func_088D2DF8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D2DF8:;
    sp = sp - 32;
    s2 = a0 + 24;
    v0 = LD_U8(s2+8);
    ST32(sp, a1);
    cnd_ = v0 != 0;
    s1 = LD32(a1+8);
    if (cnd_) { goto L_088D2E80; }
    goto L_088D2E20;
L_088D2E20:;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_088D2E54; }
    goto L_088D2E2C;
L_088D2E2C:;
    v1 = v0 + 0;
    goto L_088D2E30;
L_088D2E30:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088D2E80; }
    goto L_088D2E48;
L_088D2E48:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D2E30; }
    goto L_088D2E54;
L_088D2E54:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2E5C;
L_088D2E5C:;
    ST32(v0, s1);
    v1 = LD32(s2+4);
    a0 = LD32(sp);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    goto L_088D2E80;
L_088D2E80:;
    sp = sp + 32;
    return;
}

/* 088D2E98 */
rv_t func_088D2E98(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2E98:;
    sp = sp - 16;
    v0 = D_08B3074C - (1868);
    s1 = a0 + 0;
    v1 = LD_U8(v0+1868);
    cnd_ = v1 != 0;
    s0 = a0 + 24;
    if (cnd_) { goto L_088D2EF8; }
    goto L_088D2EC0;
L_088D2EC0:;
    s2 = LD32(a1+8);
    v0 = LD_U8(s0+8);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088D2F24; }
    goto L_088D2ED4;
L_088D2ED4:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088D2F10; }
    goto L_088D2EE0;
L_088D2EE0:;
    v1 = LD32(s1+40);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s2);
    ST32(s1+40, v1);
    goto L_088D2EF8;
L_088D2EF8:;
    goto L_088D2EFC;
L_088D2EFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D2F10:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D2F18;
L_088D2F18:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_088D2EE0;
L_088D2F24:;
    { u64 r_ = func_08AB69BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2F2C;
L_088D2F2C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D2EF8; }
    goto L_088D2F34;
L_088D2F34:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D2F3C;
L_088D2F3C:;
    goto L_088D2EFC;
}

/* 088D2F44 */
u32 func_088D2F44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D2F44:;
    sp = sp - 16;
    v1 = LD32(a0+48);
    cnd_ = v1 == 0;
    t0 = a0 + 48;
    if (cnd_) { goto L_088D2F84; }
    goto L_088D2F58;
L_088D2F58:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088D2F60;
L_088D2F60:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088D2F90; }
    goto L_088D2F78;
L_088D2F78:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088D2F60; }
    goto L_088D2F84;
L_088D2F84:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D2FA8; }
    goto L_088D2F90;
L_088D2F90:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D2F9C; }
    goto L_088D2F98;
L_088D2F98:;
    v0 = LD32(a3);
    goto L_088D2F9C;
L_088D2F9C:;
    sp = sp + 16;
    return v0;
L_088D2FA8:;
    a2 = 1;
    v0 = func_08AB7124(a0, a1, a2);
    goto L_088D2FB0;
L_088D2FB0:;
    a3 = v0 + 0;
    goto L_088D2F90;
}

/* 088D2FB8 */
void func_088D2FB8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D2FB8:;
    sp = sp - 32;
    s2 = a0 + 48;
    v0 = LD_U8(s2+8);
    ST32(sp, a1);
    cnd_ = v0 != 0;
    s1 = LD32(a1);
    if (cnd_) { goto L_088D3040; }
    goto L_088D2FE0;
L_088D2FE0:;
    v0 = LD32(a0+48);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_088D3014; }
    goto L_088D2FEC;
L_088D2FEC:;
    v1 = v0 + 0;
    goto L_088D2FF0;
L_088D2FF0:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088D3040; }
    goto L_088D3008;
L_088D3008:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D2FF0; }
    goto L_088D3014;
L_088D3014:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D301C;
L_088D301C:;
    ST32(v0, s1);
    v1 = LD32(s2+4);
    a0 = LD32(sp);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    goto L_088D3040;
L_088D3040:;
    sp = sp + 32;
    return;
}

/* 088D3058 */
void func_088D3058(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3058:;
    sp = sp - 16;
    v0 = D_08B3074C - (1868);
    s1 = a0 + 0;
    v1 = LD_U8(v0+1868);
    cnd_ = v1 != 0;
    s0 = a0 + 48;
    if (cnd_) { goto L_088D30B8; }
    goto L_088D3080;
L_088D3080:;
    s2 = LD32(a1);
    v0 = LD_U8(s0+8);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088D30E4; }
    goto L_088D3094;
L_088D3094:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088D30D0; }
    goto L_088D30A0;
L_088D30A0:;
    v1 = LD32(s1+64);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s2);
    ST32(s1+64, v1);
    goto L_088D30B8;
L_088D30B8:;
    goto L_088D30BC;
L_088D30BC:;
    sp = sp + 16;
    return;
L_088D30D0:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D30D8;
L_088D30D8:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_088D30A0;
L_088D30E4:;
    v0 = func_08AB6AA4(a0, a1);
    goto L_088D30EC;
L_088D30EC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D30B8; }
    goto L_088D30F4;
L_088D30F4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D30FC;
L_088D30FC:;
    goto L_088D30BC;
}

/* 088D3104 */
void func_088D3104(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3104:;
    sp = sp - 16;
    v0 = D_08AF7CC0 - (31936);
    v0 = v0 + 31936;
    s0 = a0 + 0;
    ST32(a0, v0);
    ST8(s0+4, 0);
    a0 = a1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D312C;
L_088D312C:;
    ST32(s0+8, v0);
    sp = sp + 16;
    return;
}

/* 088D3140 */
void func_088D3140(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3140:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088D3104(a0, a1);
    goto L_088D3154;
L_088D3154:;
    v0 = D_08AF7CA8 - (31912);
    v0 = v0 + 31912;
    a2 = 100;
    ST32(s0, v0);
    v1 = 3;
    v0 = (u32)-1;
    ST32(s0+12, v1);
    a0 = D_08B30750 - (1872);
    a1 = s0 + 0;
    ST8(s0+77, a2);
    a0 = a0 + 1872;
    ST32(s0+80, v0);
    ST8(s0+76, a2);
    ST32(s0+20, 0);
    ST32(s0+16, 0);
    ST32(s0+28, 0);
    ST32(s0+24, 0);
    ST32(s0+36, 0);
    ST32(s0+32, 0);
    ST32(s0+44, 0);
    ST32(s0+40, 0);
    ST32(s0+52, 0);
    ST32(s0+48, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+68, 0);
    ST32(s0+64, 0);
    ST32(s0+72, 0);
    ST8(s0+78, 0);
    ST32(s0+84, 0);
    func_088D2C48(a0, a1, 0, 0, 0);
    goto L_088D31D0;
L_088D31D0:;
    sp = sp + 16;
    return;
}

/* 088D31E0 */
rv_t func_088D31E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D31E0:;
    sp = sp - 32;
    v0 = D_08AF7CA8 - (31912);
    v0 = v0 + 31912;
    s3 = a0 + 64;
    s2 = a0 + 0;
    s1 = 0 + 0;
    a1 = LD32(a0+64);
    cnd_ = a1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088D3240; }
    goto L_088D3218;
L_088D3218:;
    v0 = LD32(s3+4);
    goto L_088D321C;
L_088D321C:;
    v1 = s1 << 2;
    s1 = s1 + 1;
    v0 = v0 + v1;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    a0 = s0 + 4;
    if (cnd_) { goto L_088D3358; }
    goto L_088D3234;
L_088D3234:;
    v0 = s1 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_088D321C; }
    goto L_088D3240;
L_088D3240:;
    a0 = LD32(s2+84);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3248;
L_088D3248:;
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    a1 = s2 + 0;
    { rv_t r_ = func_088D2CE8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3258;
L_088D3258:;
    a0 = LD32(s3+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D3348; }
    goto L_088D3264;
L_088D3264:;
    s0 = s2 + 48;
    a0 = LD32(s0+4);
    goto L_088D326C;
L_088D326C:;
    ST32(s3+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+64, 0);
    if (cnd_) { goto L_088D3338; }
    goto L_088D3278;
L_088D3278:;
    ST32(s0+4, 0);
    goto L_088D327C;
L_088D327C:;
    s0 = s2 + 40;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    ST32(s2+48, 0);
    if (cnd_) { goto L_088D3328; }
    goto L_088D328C;
L_088D328C:;
    s1 = s2 + 32;
    a0 = LD32(s1+4);
    goto L_088D3294;
L_088D3294:;
    ST32(s0+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+40, 0);
    if (cnd_) { goto L_088D3318; }
    goto L_088D32A0;
L_088D32A0:;
    s0 = s2 + 24;
    a0 = LD32(s0+4);
    goto L_088D32A8;
L_088D32A8:;
    ST32(s1+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+32, 0);
    if (cnd_) { goto L_088D3308; }
    goto L_088D32B4;
L_088D32B4:;
    s1 = s2 + 16;
    a0 = LD32(s1+4);
    goto L_088D32BC;
L_088D32BC:;
    ST32(s0+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+24, 0);
    if (cnd_) { goto L_088D32F8; }
    goto L_088D32C8;
L_088D32C8:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D32CC;
L_088D32CC:;
    v0 = v0 + 31936;
    ST32(s2, v0);
    ST32(s1+4, 0);
    ST32(s2+16, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D32F8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3300;
L_088D3300:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D32CC;
L_088D3308:;
    s1 = s2 + 16;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3310;
L_088D3310:;
    a0 = LD32(s1+4);
    goto L_088D32BC;
L_088D3318:;
    s0 = s2 + 24;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3320;
L_088D3320:;
    a0 = LD32(s0+4);
    goto L_088D32A8;
L_088D3328:;
    s1 = s2 + 32;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3330;
L_088D3330:;
    a0 = LD32(s1+4);
    goto L_088D3294;
L_088D3338:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3340;
L_088D3340:;
    ST32(s0+4, 0);
    goto L_088D327C;
L_088D3348:;
    s0 = s2 + 48;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3350;
L_088D3350:;
    a0 = LD32(s0+4);
    goto L_088D326C;
L_088D3358:;
    func_0887A6A8(a0);
    goto L_088D3360;
L_088D3360:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3368;
L_088D3368:;
    a1 = LD32(s2+64);
    goto L_088D3234;
}

/* 088D3370 */
rv_t func_088D3370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D3370:;
    sp = sp - 32;
    v0 = D_08AF7CA8 - (31912);
    v0 = v0 + 31912;
    s3 = a0 + 64;
    s2 = a0 + 0;
    s1 = 0 + 0;
    a1 = LD32(a0+64);
    cnd_ = a1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_088D33D0; }
    goto L_088D33A8;
L_088D33A8:;
    v0 = LD32(s3+4);
    goto L_088D33AC;
L_088D33AC:;
    v1 = s1 << 2;
    s1 = s1 + 1;
    v0 = v0 + v1;
    s0 = LD32(v0);
    cnd_ = s0 != 0;
    a0 = s0 + 4;
    if (cnd_) { goto L_088D34F0; }
    goto L_088D33C4;
L_088D33C4:;
    v0 = s1 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_088D33AC; }
    goto L_088D33D0;
L_088D33D0:;
    a0 = LD32(s2+84);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D33D8;
L_088D33D8:;
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    a1 = s2 + 0;
    { rv_t r_ = func_088D2CE8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D33E8;
L_088D33E8:;
    a0 = LD32(s3+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D34E0; }
    goto L_088D33F4;
L_088D33F4:;
    s0 = s2 + 48;
    a0 = LD32(s0+4);
    goto L_088D33FC;
L_088D33FC:;
    ST32(s3+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+64, 0);
    if (cnd_) { goto L_088D34D0; }
    goto L_088D3408;
L_088D3408:;
    ST32(s0+4, 0);
    goto L_088D340C;
L_088D340C:;
    s0 = s2 + 40;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    ST32(s2+48, 0);
    if (cnd_) { goto L_088D34C0; }
    goto L_088D341C;
L_088D341C:;
    s1 = s2 + 32;
    a0 = LD32(s1+4);
    goto L_088D3424;
L_088D3424:;
    ST32(s0+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+40, 0);
    if (cnd_) { goto L_088D34B0; }
    goto L_088D3430;
L_088D3430:;
    s0 = s2 + 24;
    a0 = LD32(s0+4);
    goto L_088D3438;
L_088D3438:;
    ST32(s1+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+32, 0);
    if (cnd_) { goto L_088D34A0; }
    goto L_088D3444;
L_088D3444:;
    s1 = s2 + 16;
    a0 = LD32(s1+4);
    goto L_088D344C;
L_088D344C:;
    ST32(s0+4, 0);
    cnd_ = a0 != 0;
    ST32(s2+24, 0);
    if (cnd_) { goto L_088D3490; }
    goto L_088D3458;
L_088D3458:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D345C;
L_088D345C:;
    v0 = v0 + 31936;
    ST32(s2, v0);
    a0 = s2 + 0;
    ST32(s1+4, 0);
    ST32(s2+16, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3474;
L_088D3474:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D3490:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3498;
L_088D3498:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D345C;
L_088D34A0:;
    s1 = s2 + 16;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D34A8;
L_088D34A8:;
    a0 = LD32(s1+4);
    goto L_088D344C;
L_088D34B0:;
    s0 = s2 + 24;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D34B8;
L_088D34B8:;
    a0 = LD32(s0+4);
    goto L_088D3438;
L_088D34C0:;
    s1 = s2 + 32;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D34C8;
L_088D34C8:;
    a0 = LD32(s1+4);
    goto L_088D3424;
L_088D34D0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D34D8;
L_088D34D8:;
    ST32(s0+4, 0);
    goto L_088D340C;
L_088D34E0:;
    s0 = s2 + 48;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D34E8;
L_088D34E8:;
    a0 = LD32(s0+4);
    goto L_088D33FC;
L_088D34F0:;
    func_0887A6A8(a0);
    goto L_088D34F8;
L_088D34F8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3500;
L_088D3500:;
    a1 = LD32(s2+64);
    goto L_088D33C4;
}

/* 088D3508 */
u32 func_088D3508(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3508:;
    sp = sp - 16;
    v0 = (u32)-1;
    t0 = LD32(a0+16);
    cnd_ = t0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D3554; }
    goto L_088D3524;
L_088D3524:;
    v1 = LD32(a0+12);
    a0 = 1;
    cnd_ = v1 == a0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_088D36A4; }
    goto L_088D3534;
L_088D3534:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088D354C; }
    goto L_088D353C;
L_088D353C:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_088D35C4; }
    goto L_088D3544;
L_088D3544:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088D3564; }
    goto L_088D354C;
L_088D354C:;
    ST32(s0+80, 0);
    goto L_088D3550;
L_088D3550:;
    v0 = LD32(s0+80);
    goto L_088D3554;
L_088D3554:;
    sp = sp + 16;
    return v0;
L_088D3564:;
    cnd_ = t0 == a0;
    if (cnd_) { ST32(s0+80, 0); goto L_088D3550; }
    goto L_088D356C;
L_088D356C:;
    a1 = LD32(s0+84);
    v0 = LD32(a1+12);
    a0 = LD32(a1+16);
    v1 = LD32(v0);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_088D35B4; }
    goto L_088D3584;
L_088D3584:;
    a0 = LD32(s0+84);
    v0 = func_08836A20(a0);
    goto L_088D358C;
L_088D358C:;
    v1 = v0 + 0;
    v0 = LD32(s0+80);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_088D35A4; }
    goto L_088D359C;
L_088D359C:;
    ST32(s0+80, v1);
    goto L_088D3550;
L_088D35A4:;
    a0 = LD32(s0+84);
    v0 = func_08836A20(a0);
    goto L_088D35AC;
L_088D35AC:;
    v1 = v0 + 0;
    goto L_088D359C;
L_088D35B4:;
    a0 = a1 + 0;
    func_088368F4(a0);
    goto L_088D35BC;
L_088D35BC:;
    goto L_088D3584;
L_088D35C4:;
    t1 = 0 < t0;
    a3 = 0 + 0;
    cnd_ = t1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D35F8; }
    goto L_088D35D4;
L_088D35D4:;
    a1 = LD32(s0+36);
    goto L_088D35D8;
L_088D35D8:;
    v0 = a1 + a0;
    v1 = LD_U8(v0);
    a0 = a0 + 1;
    v0 = a0 < t0;
    cnd_ = v0 != 0;
    a3 = a3 + v1;
    if (cnd_) { goto L_088D35D8; }
    goto L_088D35F0;
L_088D35F0:;
    cnd_ = a3 != 0;
    a1 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088D3638; }
    goto L_088D35F8;
L_088D35F8:;
    a1 = D_08B25AC0 - (23232);
    v0 = LD32(a1+23232);
    a3 = a1 + 23232;
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a3+4, a0);
    ST32(a1+23232, v0);
    a2 = hi;
    ST32(s0+80, a2);
    goto L_088D3550;
L_088D3638:;
    v0 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = v0 >> 1;
    { u32 x_ = v1, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v0;
    ST32(a2+4, a0);
    a2 = 0 + 0;
    a0 = hi;
    cnd_ = t1 == 0;
    ST32(a1+23232, v0);
    if (cnd_) { goto L_088D3550; }
    goto L_088D3674;
L_088D3674:;
    a1 = LD32(s0+36);
    v0 = a1 + a2;
    goto L_088D367C;
L_088D367C:;
    v1 = LD_U8(v0);
    a0 = a0 - v1;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { ST32(s0+80, a2); goto L_088D3550; }
    goto L_088D368C;
L_088D368C:;
    a2 = a2 + 1;
    v0 = a2 < t0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = a1 + a2; goto L_088D367C; }
    goto L_088D369C;
L_088D369C:;
    v0 = LD32(s0+80);
    goto L_088D3554;
L_088D36A4:;
    v0 = LD32(s0+80);
    v0 = v0 + 1;
    { u32 x_ = v0, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    ST32(s0+80, v1);
    goto L_088D3550;
}

/* 088D36BC */
u32 func_088D36BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088D36BC:;
    v0 = LD32(a0+16);
    v1 = a1 << 2;
    a0 = a0 + 16;
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D36E0; }
    goto L_088D36D4;
L_088D36D4:;
    v0 = LD32(a0+4);
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_088D36E0;
L_088D36E0:;
    return v0;
}

/* 088D36E8 */
u64 func_088D36E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088D36E8:;
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D3724; }
    goto L_088D36F0;
L_088D36F0:;
    t0 = LD32(a0+64);
    cnd_ = t0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D3724; }
    goto L_088D36FC;
L_088D36FC:;
    a0 = LD32(a0+68);
    v1 = LD32(a0);
    goto L_088D3704;
L_088D3704:;
    a3 = a3 + 1;
    a2 = a3 < t0;
    v0 = LD32(v1);
    cnd_ = a1 == v0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088D3724; }
    goto L_088D3718;
L_088D3718:;
    cnd_ = a2 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088D3704; }
    goto L_088D3720;
L_088D3720:;
    v1 = 0 + 0;
    goto L_088D3724;
L_088D3724:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D372C */
rv_t func_088D372C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D372C:;
    sp = sp - 16;
    s1 = a3 + 0;
    s0 = a2 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088D3758; }
    goto L_088D3748;
L_088D3748:;
    v0 = D_08B2BB9C - (-17508);
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088D376C; }
    goto L_088D3758;
L_088D3758:;
    goto L_088D375C;
L_088D375C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D376C:;
    { u64 r_ = func_088D36E8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3774;
L_088D3774:;
    a3 = D_08B29170 - (-28304);
    a0 = v0 + 4;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a3 = a3 - 28304;
    if (cnd_) { goto L_088D3758; }
    goto L_088D3788;
L_088D3788:;
    a2 = LD_U16(s1+16);
    { rv_t r_ = func_0887A7F4(a0, a1, a2, a3, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3790;
L_088D3790:;
    goto L_088D375C;
}

/* 088D3798 */
void func_088D3798(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088D3798:;
    sp = sp - 48;
    s3 = a1 + 0;
    s0 = a0 + 0;
    func_088D3104(a0, a1);
    goto L_088D37C8;
L_088D37C8:;
    v1 = D_08AD87D8 - (-30760);
    v0 = D_08AF7C90 - (31888);
    v0 = v0 + 31888;
    s1 = v1 - 30760;
    ST32(s0, v0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    cnd_ = s1 == 0;
    ST32(s0+32, 0);
    if (cnd_) { goto L_088D39D4; }
    goto L_088D37F8;
L_088D37F8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3800;
L_088D3800:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3814;
L_088D3814:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_088D39C0; }
    goto L_088D381C;
L_088D381C:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_088D3824;
L_088D3824:;
    cnd_ = s3 == 0;
    v0 = D_08AD87F4 - (-30732);
    if (cnd_) { goto L_088D389C; }
    goto L_088D382C;
L_088D382C:;
    a0 = s3 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3834;
L_088D3834:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    s4 = sp + 0;
    if (cnd_) { goto L_088D3898; }
    goto L_088D3840;
L_088D3840:;
    v1 = LD32(sp+8);
    v0 = v0 + 1;
    s6 = sp + 0;
    if (v1 != 0) v0 = s2;
    s5 = v1 + v0;
    a0 = s5 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D385C;
L_088D385C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088D3898; }
    goto L_088D3864;
L_088D3864:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D399C; }
    goto L_088D3870;
L_088D3870:;
    ST32(s6, s1);
    goto L_088D3874;
L_088D3874:;
    a1 = s3 + 0;
    a0 = LD32(s4);
    v0 = LD32(s4+4);
    ST32(s6+8, s5);
    a0 = a0 + v0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D388C;
L_088D388C:;
    v1 = LD32(s4+4);
    v1 = v1 + s2;
    ST32(s4+4, v1);
    goto L_088D3898;
L_088D3898:;
    v0 = D_08AD87F4 - (-30732);
    goto L_088D389C;
L_088D389C:;
    a0 = v0 - 30732;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088D3914; }
    goto L_088D38A8;
L_088D38A8:;
    s5 = a0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D38B0;
L_088D38B0:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    s3 = sp + 0;
    if (cnd_) { goto L_088D3914; }
    goto L_088D38BC;
L_088D38BC:;
    v1 = LD32(sp+8);
    v0 = v0 + 1;
    s6 = sp + 0;
    if (v1 != 0) v0 = s2;
    s4 = v1 + v0;
    a0 = s4 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D38D8;
L_088D38D8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088D3914; }
    goto L_088D38E0;
L_088D38E0:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D3978; }
    goto L_088D38EC;
L_088D38EC:;
    ST32(s6, s1);
    goto L_088D38F0;
L_088D38F0:;
    a1 = s5 + 0;
    a0 = LD32(s3);
    v0 = LD32(s3+4);
    ST32(s6+8, s4);
    a0 = a0 + v0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3908;
L_088D3908:;
    v1 = LD32(s3+4);
    v1 = v1 + s2;
    ST32(s3+4, v1);
    goto L_088D3914;
L_088D3914:;
    a0 = LD32(sp);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D391C;
L_088D391C:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    ST32(s0+24, v0);
    if (cnd_) { goto L_088D3968; }
    goto L_088D3928;
L_088D3928:;
    a0 = D_08B30750 - (1872);
    a1 = s0 + 0;
    a0 = a0 + 1872;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    func_088D2DF8(a0, a1, 0, 0, 0);
    goto L_088D3940;
L_088D3940:;
    sp = sp + 48;
    return;
L_088D3968:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3970;
L_088D3970:;
    ST32(sp, 0);
    goto L_088D3928;
L_088D3978:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3980;
L_088D3980:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s6, s1); goto L_088D38F0; }
    goto L_088D398C;
L_088D398C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3994;
L_088D3994:;
    ST32(s6, s1);
    goto L_088D38F0;
L_088D399C:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D39A4;
L_088D39A4:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s6, s1); goto L_088D3874; }
    goto L_088D39B0;
L_088D39B0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D39B8;
L_088D39B8:;
    ST32(s6, s1);
    goto L_088D3874;
L_088D39C0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D39CC;
L_088D39CC:;
    goto L_088D3824;
L_088D39D4:;
    ST32(sp, 0);
    goto L_088D381C;
}

/* 088D39DC */
rv_t func_088D39DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D39DC:;
    v0 = D_08AF7C90 - (31888);
    v0 = v0 + 31888;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088D5534(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D39FC;
L_088D39FC:;
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    a1 = s0 + 0;
    { rv_t r_ = func_088D2E98(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3A0C;
L_088D3A0C:;
    v0 = LD32(s0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D3A34; }
    goto L_088D3A18;
L_088D3A18:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D3A1C;
L_088D3A1C:;
    v0 = v0 + 31936;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D3A34:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3A3C;
L_088D3A3C:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D3A1C;
}

/* 088D3A44 */
rv_t func_088D3A44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3A44:;
    v0 = D_08AF7C90 - (31888);
    v0 = v0 + 31888;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088D5534(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3A64;
L_088D3A64:;
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    a1 = s0 + 0;
    { rv_t r_ = func_088D2E98(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3A74;
L_088D3A74:;
    v0 = LD32(s0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D3AA4; }
    goto L_088D3A80;
L_088D3A80:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D3A84;
L_088D3A84:;
    v0 = v0 + 31936;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3A94;
L_088D3A94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D3AA4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3AAC;
L_088D3AAC:;
    v0 = D_08AF7CC0 - (31936);
    goto L_088D3A84;
}

/* 088D3AB4 */
u32 func_088D3AB4(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3AB4:;
    sp = sp - 16;
    a0 = LD32(a0+24);
    v0 = func_088DA8C0(a0);
    goto L_088D3AC4;
L_088D3AC4:;
    sp = sp + 16;
    return v0;
}

/* 088D3AD0 */
void func_088D3AD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3AD0:;
    sp = sp - 16;
    v0 = D_08AECAD4 - (-13612);
    s0 = a0 + 0;
    f0 = BITSF(LD32(v0-13612));
    v0 = D_08AECAD8 - (-13608);
    ST32(s0+16, 0);
    ST32(a0+4, FBITS(f0));
    a0 = a1 + 0;
    f0 = BITSF(LD32(v0-13608));
    v0 = D_08AECADC - (-13604);
    ST8(s0+20, 0);
    ST32(s0+8, FBITS(f0));
    f0 = BITSF(LD32(v0-13604));
    ST8(s0+21, 0);
    ST32(s0+12, FBITS(f0));
    ST8(s0+22, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST8(s0+32, 0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3B28;
L_088D3B28:;
    ST32(s0, v0);
    a0 = D_08B30750 - (1872);
    a1 = s0 + 0;
    a0 = a0 + 1872;
    func_088D2FB8(a0, a1, 0, 0, 0);
    goto L_088D3B3C;
L_088D3B3C:;
    sp = sp + 16;
    return;
}

/* 088D3B4C */
void func_088D3B4C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3B4C:;
    a1 = a0 + 0;
    a0 = D_08B30750 - (1872);
    sp = sp - 16;
    a0 = a0 + 1872;
    func_088D3058(a0, a1, t1, t2, t3);
    goto L_088D3B64;
L_088D3B64:;
    sp = sp + 16;
    return;
}

/* 088D3B70 */
u32 func_088D3B70(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3B70:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = LD32(a0+24);
    cnd_ = s0 != 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088D3BA0; }
    goto L_088D3B90;
L_088D3B90:;
    v0 = LD32(a0+28);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D3BB4; }
    goto L_088D3B9C;
L_088D3B9C:;
    v0 = s0 + 0;
    goto L_088D3BA0;
L_088D3BA0:;
    sp = sp + 16;
    return v0;
L_088D3BB4:;
    { u64 r_ = func_088E0698(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3BBC;
L_088D3BBC:;
    cnd_ = v0 == 0;
    ST32(s1+24, v0);
    if (cnd_) { goto L_088D3BCC; }
    goto L_088D3BC4;
L_088D3BC4:;
    s0 = v0 + 0;
    goto L_088D3B9C;
L_088D3BCC:;
    ST32(s1+28, 0);
    goto L_088D3B9C;
}

/* 088D3BD4 */
u64 func_088D3BD4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D3BD4:;
    sp = sp - 32;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D3D28; }
    goto L_088D3C08;
L_088D3C08:;
    v0 = s1 < 0x1u;
    goto L_088D3C0C;
L_088D3C0C:;
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D3CA0; }
    goto L_088D3C18;
L_088D3C18:;
    s3 = D_08B30750 - (1872);
    s2 = s3 + 1872;
    a1 = LD32(s2+48);
    cnd_ = a1 != 0;
    s0 = s2 + 48;
    if (cnd_) { goto L_088D3D18; }
    goto L_088D3C2C;
L_088D3C2C:;
    a0 = LD32(s0+12);
    goto L_088D3C30;
L_088D3C30:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D3D08; }
    goto L_088D3C38;
L_088D3C38:;
    a1 = LD32(s2+24);
    goto L_088D3C3C;
L_088D3C3C:;
    ST32(s0+16, 0);
    s1 = s2 + 24;
    cnd_ = a1 != 0;
    ST32(s0+12, 0);
    if (cnd_) { goto L_088D3CF8; }
    goto L_088D3C4C;
L_088D3C4C:;
    a0 = LD32(s1+12);
    goto L_088D3C50;
L_088D3C50:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D3CE8; }
    goto L_088D3C58;
L_088D3C58:;
    s0 = LD32(s3+1872);
    goto L_088D3C5C;
L_088D3C5C:;
    ST32(s1+16, 0);
    cnd_ = s0 == 0;
    ST32(s1+12, 0);
    if (cnd_) { goto L_088D3C88; }
    goto L_088D3C68;
L_088D3C68:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D3CD8; }
    goto L_088D3C74;
L_088D3C74:;
    a1 = LD32(s0+12);
    goto L_088D3C78;
L_088D3C78:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D3CC8; }
    goto L_088D3C80;
L_088D3C80:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3C88;
L_088D3C88:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D3CB8; }
    goto L_088D3C94;
L_088D3C94:;
    ST32(s2+16, 0);
    goto L_088D3C98;
L_088D3C98:;
    ST32(s2+12, 0);
    goto L_088D3CA0;
L_088D3CA0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088D3CB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3CC0;
L_088D3CC0:;
    ST32(s2+16, 0);
    goto L_088D3C98;
L_088D3CC8:;
    a0 = s2 + 0;
    func_08AB6CAC(a0, a1, t1, t2, t3);
    goto L_088D3CD0;
L_088D3CD0:;
    goto L_088D3C80;
L_088D3CD8:;
    a0 = s2 + 0;
    func_08AB6CAC(a0, a1, t1, t2, t3);
    goto L_088D3CE0;
L_088D3CE0:;
    a1 = LD32(s0+12);
    goto L_088D3C78;
L_088D3CE8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3CF0;
L_088D3CF0:;
    s0 = LD32(s3+1872);
    goto L_088D3C5C;
L_088D3CF8:;
    a0 = s1 + 0;
    { u64 r_ = func_08AB6E38(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3D00;
L_088D3D00:;
    a0 = LD32(s1+12);
    goto L_088D3C50;
L_088D3D08:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3D10;
L_088D3D10:;
    a1 = LD32(s2+24);
    goto L_088D3C3C;
L_088D3D18:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB6FC4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3D20;
L_088D3D20:;
    a0 = LD32(s0+12);
    goto L_088D3C30;
L_088D3D28:;
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    { u64 r_ = func_08AB6B8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3D34;
L_088D3D34:;
    v0 = s1 < 0x1u;
    goto L_088D3C0C;
}

/* 088D3D3C */
rv_t func_088D3D3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3D3C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088D3BD4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3D50;
L_088D3D50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D3D5C */
rv_t func_088D3D5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3D5C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088D3BD4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3D70;
L_088D3D70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D3D7C */
rv_t func_088D3D7C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3D7C:;
    sp = sp - 16;
    v0 = D_08B30798 - (1944);
    a3 = v0 + 1944;
    a1 = LD32(a3+4);
    t0 = a0 + 0;
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088D3DB4; }
    goto L_088D3D9C;
L_088D3D9C:;
    v0 = LD32(a3+16);
    v1 = LD32(a1);
    a2 = a1 + 0;
    v0 = v0 + 1;
    ST32(a3+4, v1);
    ST32(a3+16, v0);
    goto L_088D3DB4;
L_088D3DB4:;
    a0 = a2 + 0;
    ST32(t0, a2);
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D3DD0; }
    goto L_088D3DC4;
L_088D3DC4:;
    { rv_t r_ = func_088D4234(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3DCC;
L_088D3DCC:;
    v0 = 1;
    goto L_088D3DD0;
L_088D3DD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D3DDC */
rv_t func_088D3DDC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3DDC:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D3E08; }
    goto L_088D3DF8;
L_088D3DF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D3E08:;
    f0 = func_088D4278(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D3E10;
L_088D3E10:;
    v1 = D_08B30798 - (1944);
    v1 = v1 + 1944;
    v0 = LD32(v1+16);
    a1 = LD32(s0);
    a0 = LD32(v1+4);
    v0 = v0 - 1;
    ST32(v1+16, v0);
    ST32(a1, a0);
    ST32(s0, 0);
    ST32(v1+4, a1);
    goto L_088D3DF8;
}

/* 088D3E3C */
void func_088D3E3C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3E3C:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 8;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3E54;
L_088D3E54:;
    v1 = v0 + 0;
    ST32(s0, v0);
    v0 = 1;
    ST32(v1+4, 0);
    ST32(v1, 0);
    sp = sp + 16;
    return;
}

/* 088D3E78 */
u64 func_088D3E78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3E78:;
    sp = sp - 16;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088D3EB4; }
    goto L_088D3E94;
L_088D3E94:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D3EC8; }
    goto L_088D3EA0;
L_088D3EA0:;
    ST32(s0+4, 0);
    goto L_088D3EA4;
L_088D3EA4:;
    a0 = s0 + 0;
    ST32(s0, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3EB0;
L_088D3EB0:;
    ST32(s1, 0);
    goto L_088D3EB4;
L_088D3EB4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D3EC8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3ED0;
L_088D3ED0:;
    ST32(s0+4, 0);
    goto L_088D3EA4;
}

/* 088D3ED8 */
void func_088D3ED8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3ED8:;
    ST32(a0+8, 0);
    sp = sp - 16;
    ST8(a0, 0);
    ST8(a0+1, 0);
    ST32(a0+4, 0);
    { rv_t r_ = func_088D41C0(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3EF8;
L_088D3EF8:;
    sp = sp + 16;
    return;
}

/* 088D3F04 */
void func_088D3F04(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3F04:;
    sp = sp - 16;
    { rv_t r_ = func_088D41C0(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3F14;
L_088D3F14:;
    sp = sp + 16;
    return;
}

/* 088D3F20 */
rv_t func_088D3F20(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D3F20:;
    sp = sp - 16;
    s1 = 999;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    ST8(a0+1, 0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D3FC0; }
    goto L_088D3F48;
L_088D3F48:;
    v0 = LD_U8(s0+1);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D3F84; }
    goto L_088D3F54;
L_088D3F54:;
    v0 = LD32(s0+20);
    cnd_ = v0 == s1;
    v0 = D_08B2BB9C - (-17508);
    if (cnd_) { goto L_088D3F78; }
    goto L_088D3F60;
L_088D3F60:;
    v1 = LD32(v0-17508);
    a0 = 124;
    a1 = 0 + 0;
    a2 = 0 + 0;
    cnd_ = v1 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D3F94; }
    goto L_088D3F78;
L_088D3F78:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D41C0(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3F80;
L_088D3F80:;
    goto L_088D3F84;
L_088D3F84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D3F94:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D3F9C;
L_088D3F9C:;
    v1 = LD32(s0+20);
    ST32(v0+4, s1);
    a0 = v0 + 0;
    a1 = 1;
    ST32(v0, v1);
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3FB8;
L_088D3FB8:;
    goto L_088D3F78;
L_088D3FC0:;
    { rv_t r_ = func_088D44BC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D3FC8;
L_088D3FC8:;
    ST8(s0+1, v0);
    goto L_088D3F48;
}

/* 088D3FD0 */
float func_088D3FD0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D3FD0:;
    sp = sp - 32;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s0 = a0 + 0;
    ST32(a0+20, t1);
    ST32(a0+24, t2);
    ST16(a0+16, t0);
    cnd_ = a2 == 0;
    ST32(a0+12, a3);
    if (cnd_) { goto L_088D4068; }
    goto L_088D400C;
L_088D400C:;
    a0 = a0 + 8;
    func_088D3E3C(a0, t1, t2, t3);
    goto L_088D4014;
L_088D4014:;
    s1 = LD32(s0+8);
    cnd_ = s1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088D406C; }
    goto L_088D4020;
L_088D4020:;
    s2 = LD32(s3);
    cnd_ = s2 != 0;
    if (cnd_) { ST32(s1, s2); goto L_088D40D4; }
    goto L_088D402C;
L_088D402C:;
    cnd_ = s2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D4068; }
    goto L_088D4034;
L_088D4034:;
    s1 = LD32(s0+8);
    a2 = LD32(s3+4);
    t0 = LD32(s1+4);
    goto L_088D4040;
L_088D4040:;
    v1 = a3 << 3;
    a1 = a2 + v1;
    v0 = LD32(a1);
    v1 = t0 + v1;
    a3 = a3 + 1;
    ST32(v1, v0);
    a0 = a3 < s2;
    v0 = LD32(a1+4);
    cnd_ = a0 != 0;
    ST32(v1+4, v0);
    if (cnd_) { goto L_088D4040; }
    goto L_088D4068;
L_088D4068:;
    v0 = 1;
    goto L_088D406C;
L_088D406C:;
    ST8(s0+1, v0);
    a0 = s0 + 4;
    { rv_t r_ = func_088D3D7C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4078;
L_088D4078:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s4+56); goto L_088D40A0; }
    goto L_088D4080;
L_088D4080:;
    goto L_088D4084;
L_088D4084:;
    sp = sp + 32;
    return f0;
L_088D40A0:;
    a2 = 999;
    a3 = s0 + 0;
    a0 = s4 + 0;
    { rv_t r_ = func_088D372C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D40B0;
L_088D40B0:;
    a0 = s4 + 0;
    v0 = func_088D3508(a0);
    goto L_088D40B8;
L_088D40B8:;
    a0 = LD32(s0+4);
    a1 = v0 + 0;
    a2 = s4 + 0;
    a3 = s0 + 0;
    { rv_t r_ = func_088D4294(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D40CC;
L_088D40CC:;
    goto L_088D4084;
L_088D40D4:;
    a0 = s2 << 3;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D40DC;
L_088D40DC:;
    ST32(s1+4, v0);
    goto L_088D402C;
}

/* 088D40E4 */
float func_088D40E4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D40E4:;
    v0 = 1;
    ST8(a0+1, v0);
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = a0 + 4;
    s1 = a2 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_088D3D7C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4114;
L_088D4114:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    cnd_ = v0 != 0;
    a3 = s2 + 0;
    if (cnd_) { goto L_088D413C; }
    goto L_088D4124;
L_088D4124:;
    goto L_088D4128;
L_088D4128:;
    sp = sp + 16;
    return f0;
L_088D413C:;
    a0 = LD32(s2+4);
    f0 = func_088D4474(a0, a1, a2, a3);
    goto L_088D4144;
L_088D4144:;
    goto L_088D4128;
}

/* 088D414C */
void func_088D414C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D414C:;
    sp = sp - 16;
    { rv_t r_ = func_088D41C0(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D415C;
L_088D415C:;
    sp = sp + 16;
    return;
}

/* 088D4168 */
u32 func_088D4168(u32 a0, u32 a1, u32 t1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088D4168:;
    v1 = LD32(a0+8);
    cnd_ = v1 != 0;
    if (cnd_) { t1 = LD32(v1); goto L_088D417C; }
    goto L_088D4174;
L_088D4174:;
    v0 = LD32(a0+12);
    return v0;
L_088D417C:;
    cnd_ = t1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D41B0; }
    goto L_088D4184;
L_088D4184:;
    a2 = LD32(v1+4);
    t0 = a2 + 0;
    v1 = LD32(a2);
    goto L_088D4190;
L_088D4190:;
    v0 = a0 << 3;
    a0 = a0 + 1;
    a3 = a0 < t1;
    a2 = a2 + 8;
    cnd_ = v1 == a1;
    v0 = t0 + v0;
    if (cnd_) { goto L_088D41B8; }
    goto L_088D41A8;
L_088D41A8:;
    cnd_ = a3 != 0;
    if (cnd_) { v1 = LD32(a2); goto L_088D4190; }
    goto L_088D41B0;
L_088D41B0:;
    v0 = 999;
    return v0;
L_088D41B8:;
    v0 = LD32(v0+4);
    return v0;
}

/* 088D41C0 */
rv_t func_088D41C0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D41C0:;
    sp = sp - 16;
    v1 = 999;
    s0 = a0 + 0;
    v0 = (u32)-1;
    a1 = LD32(a0+4);
    ST16(s0+16, v0);
    a0 = a0 + 4;
    ST32(s0+12, v1);
    ST8(s0+1, 0);
    ST32(s0+20, v1);
    cnd_ = a1 != 0;
    ST32(s0+24, 0);
    if (cnd_) { goto L_088D4224; }
    goto L_088D41F8;
L_088D41F8:;
    v0 = LD32(s0+8);
    goto L_088D41FC;
L_088D41FC:;
    cnd_ = v0 != 0;
    a0 = s0 + 8;
    if (cnd_) { goto L_088D4214; }
    goto L_088D4204;
L_088D4204:;
    goto L_088D4208;
L_088D4208:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D4214:;
    { u64 r_ = func_088D3E78(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D421C;
L_088D421C:;
    goto L_088D4208;
L_088D4224:;
    { rv_t r_ = func_088D3DDC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D422C;
L_088D422C:;
    v0 = LD32(s0+8);
    goto L_088D41FC;
}

/* 088D4234 */
rv_t func_088D4234(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088D4234:;
    v0 = D_08AECAE0 - (-13600);
    f0 = BITSF(LD32(v0-13600));
    v1 = (u32)-1;
    v0 = 999;
    ST32(a0+44, FBITS(f0));
    ST32(a0+12, v0);
    ST32(a0+32, v1);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST8(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    ST32(a0+28, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 088D4278 */
float func_088D4278(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4278:;
    sp = sp - 16;
    { rv_t r_ = func_088D4738(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4288;
L_088D4288:;
    sp = sp + 16;
    return f0;
}

/* 088D4294 */
rv_t func_088D4294(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D4294:;
    sp = sp - 32;
    s4 = a3 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = a2 + 0;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { goto L_088D43C8; }
    goto L_088D42C4;
L_088D42C4:;
    a0 = a2 + 0;
    v0 = func_088D36BC(a0, a1);
    goto L_088D42CC;
L_088D42CC:;
    s3 = v0 + 0;
    v0 = LD32(s0+52);
    a1 = s1 << 2;
    a2 = LD32(s3);
    v0 = v0 + a1;
    a0 = LD32(v0);
    v0 = D_08AECAE4 - (-13596);
    f0 = BITSF(LD32(v0-13596));
    v1 = LD32(s0+44);
    ST32(s2+28, a0);
    a0 = s3 + 0;
    v1 = v1 + a1;
    ST32(s2, s0);
    ST32(s2+44, FBITS(f0));
    ST32(s2+4, s4);
    v0 = LD32(a2+8);
    t_ = v0;
    s0 = LD32(v1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4314;
L_088D4314:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = 100;
    if (cnd_) { goto L_088D4400; }
    goto L_088D4324;
L_088D4324:;
    v0 = LD_U8(s3+76);
    cnd_ = v0 == a0;
    a2 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088D4378; }
    goto L_088D4330;
L_088D4330:;
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
    v1 = LD_U8(s3+76);
    a0 = hi;
    a0 = a0 + 1;
    v1 = (s32)v1 < (s32)a0;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(s2+28, 0); goto L_088D43C0; }
    goto L_088D4378;
L_088D4378:;
    a0 = s2 + 36;
    { rv_t r_ = func_088D3D7C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4380;
L_088D4380:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088D43C4; }
    goto L_088D4388;
L_088D4388:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s2); goto L_088D43E8; }
    goto L_088D4390;
L_088D4390:;
    a1 = LD32(s3+56);
    goto L_088D4394;
L_088D4394:;
    a3 = s4 + 0;
    a2 = 999;
    a0 = s3 + 0;
    { rv_t r_ = func_088D372C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D43A4;
L_088D43A4:;
    a0 = s3 + 0;
    v0 = func_088D3508(a0);
    goto L_088D43AC;
L_088D43AC:;
    a0 = LD32(s2+36);
    a1 = v0 + 0;
    a2 = s3 + 0;
    a3 = s4 + 0;
    { rv_t r_ = func_088D4294(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D43C0;
L_088D43C0:;
    v0 = 1;
    goto L_088D43C4;
L_088D43C4:;
    ST8(s2+16, v0);
    goto L_088D43C8;
L_088D43C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D43E8:;
    a2 = LD32(s2+12);
    a1 = s0 + 0;
    a3 = s4 + 0;
    { rv_t r_ = func_088D372C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D43F8;
L_088D43F8:;
    a1 = LD32(s3+56);
    goto L_088D4394;
L_088D4400:;
    a1 = LD32(s3+12);
    a0 = s4 + 0;
    v0 = func_088D4168(a0, a1, 0);
    goto L_088D440C;
L_088D440C:;
    cnd_ = s0 != 0;
    ST32(s2+12, v0);
    if (cnd_) { goto L_088D4458; }
    goto L_088D4414;
L_088D4414:;
    a0 = LD32(s2+12);
    goto L_088D4418;
L_088D4418:;
    v0 = 999;
    cnd_ = a0 == v0;
    if (cnd_) { ST32(s2+8, s3); goto L_088D4434; }
    goto L_088D4424;
L_088D4424:;
    a1 = LD32(s3+28);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D4448; }
    goto L_088D4430;
L_088D4430:;
    ST32(s2+8, s3);
    goto L_088D4434;
L_088D4434:;
    a1 = s3 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_088D492C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4440;
L_088D4440:;
    v0 = 1;
    goto L_088D43C4;
L_088D4448:;
    func_088D57B0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D4450;
L_088D4450:;
    ST32(s2+8, s3);
    goto L_088D4434;
L_088D4458:;
    a0 = LD32(s2);
    a1 = s0 + 0;
    a2 = v0 + 0;
    a3 = s4 + 0;
    { rv_t r_ = func_088D372C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D446C;
L_088D446C:;
    a0 = LD32(s2+12);
    goto L_088D4418;
}

/* 088D4474 */
float func_088D4474(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4474:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088D44AC; }
    goto L_088D4488;
L_088D4488:;
    v0 = D_08AECAE8 - (-13592);
    f0 = BITSF(LD32(v0-13592));
    ST32(a0+4, a3);
    ST32(a0+12, a2);
    ST32(s0+8, a1);
    ST32(a0+44, FBITS(f0));
    { rv_t r_ = func_088D492C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D44A4;
L_088D44A4:;
    v0 = 1;
    ST8(s0+16, v0);
    goto L_088D44AC;
L_088D44AC:;
    sp = sp + 16;
    return f0;
}

/* 088D44BC */
rv_t func_088D44BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D44BC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+36);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D4604; }
    goto L_088D44D8;
L_088D44D8:;
    v0 = LD_U8(s0+16);
    goto L_088D44DC;
L_088D44DC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D44F8; }
    goto L_088D44E4;
L_088D44E4:;
    goto L_088D44E8;
L_088D44E8:;
    v0 = v0 & 0xff;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D44F8:;
    a0 = s0 + 0;
    { u64 r_ = func_088D4614(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D4500;
L_088D4500:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D45F4; }
    goto L_088D4508;
L_088D4508:;
    f1 = BITSF(LD32(s0+20));
    f2 = BITSF(0);
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_088D4554; }
    goto L_088D4520;
L_088D4520:;
    f0 = BITSF(LD32(v0-31332));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(s0+20, FBITS(f0));
    if (cnd_) { goto L_088D4540; }
    goto L_088D4538;
L_088D4538:;
    v0 = LD_U8(s0+16);
    goto L_088D44E4;
L_088D4540:;
    ST32(s0+20, FBITS(f2));
    a0 = s0 + 0;
    { rv_t r_ = func_088D467C(a0, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D454C;
L_088D454C:;
    v0 = LD_U8(s0+16);
    goto L_088D44E4;
L_088D4554:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D4738(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D455C;
L_088D455C:;
    a0 = LD32(s0);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D45EC; }
    goto L_088D4568;
L_088D4568:;
    a1 = LD32(s0+28);
    cnd_ = a1 != 0;
    if (cnd_) { a2 = LD32(s0+12); goto L_088D45DC; }
    goto L_088D4574;
L_088D4574:;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+16, 0); goto L_088D459C; }
    goto L_088D4580;
L_088D4580:;
    v1 = LD32(s0+24);
    v0 = LD32(a0+16);
    a1 = v1 + 1;
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+24, a1); goto L_088D45C4; }
    goto L_088D4598;
L_088D4598:;
    ST8(s0+16, 0);
    goto L_088D459C;
L_088D459C:;
    v0 = LD_U8(s0+16);
    goto L_088D45A0;
L_088D45A0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D44E8; }
    goto L_088D45A8;
L_088D45A8:;
    a0 = LD32(s0);
    a3 = LD32(s0+4);
    a2 = 999;
    a1 = LD32(a0+60);
    { rv_t r_ = func_088D372C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D45BC;
L_088D45BC:;
    v0 = LD_U8(s0+16);
    goto L_088D44E4;
L_088D45C4:;
    a2 = a0 + 0;
    a0 = s0 + 0;
    a3 = LD32(s0+4);
    { rv_t r_ = func_088D4294(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D45D4;
L_088D45D4:;
    v0 = LD_U8(s0+16);
    goto L_088D45A0;
L_088D45DC:;
    a3 = LD32(s0+4);
    { rv_t r_ = func_088D372C(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D45E4;
L_088D45E4:;
    a0 = LD32(s0);
    goto L_088D4574;
L_088D45EC:;
    ST8(s0+16, 0);
    goto L_088D44E4;
L_088D45F4:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D47E0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D45FC;
L_088D45FC:;
    v0 = LD_U8(s0+16);
    goto L_088D44E4;
L_088D4604:;
    { rv_t r_ = func_088D44BC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D460C;
L_088D460C:;
    v0 = LD_U8(s0+16);
    goto L_088D44DC;
}

/* 088D4614 */
u64 func_088D4614(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4614:;
    sp = sp - 16;
    v0 = LD32(a0+36);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088D4640; }
    goto L_088D462C;
L_088D462C:;
    v0 = LD_U8(v0+16);
    goto L_088D4630;
L_088D4630:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D4640:;
    f1 = BITSF(LD32(a0+40));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088D4664; }
    goto L_088D4658;
L_088D4658:;
    s0 = 1;
    goto L_088D465C;
L_088D465C:;
    v0 = s0 + 0;
    goto L_088D4630;
L_088D4664:;
    a0 = LD32(a0+32);
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D466C;
L_088D466C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s0 + 0; goto L_088D4630; }
    goto L_088D4674;
L_088D4674:;
    s0 = 1;
    goto L_088D465C;
}

/* 088D467C */
rv_t func_088D467C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D467C:;
    sp = sp - 32;
    s1 = (u32)-1;
    a1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+32);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D46B0; }
    goto L_088D46A8;
L_088D46A8:;
    { rv_t r_ = func_088DB45C(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D46B0;
L_088D46B0:;
    a1 = LD32(s0+8);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088D46F4; }
    goto L_088D46BC;
L_088D46BC:;
    v0 = LD32(a1+20);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a1+16); goto L_088D46D8; }
    goto L_088D46C8;
L_088D46C8:;
    v0 = LD_U8(v0+22);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088D46F8; }
    goto L_088D46D4;
L_088D46D4:;
    v0 = LD32(a1+16);
    goto L_088D46D8;
L_088D46D8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D46F4; }
    goto L_088D46E0;
L_088D46E0:;
    a2 = v0 + 0;
    v0 = LD_U16(v0);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D4708; }
    goto L_088D46F0;
L_088D46F0:;
    goto L_088D46F4;
L_088D46F4:;
    goto L_088D46F8;
L_088D46F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D4708:;
    f0 = func_088D4A90(a1, a2);
    goto L_088D4710;
L_088D4710:;
    a1 = LD32(s0+12);
    a0 = LD32(s0+8);
    f12 = f0;
    f20 = f0;
    { rv_t r_ = func_088D546C(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4724;
L_088D4724:;
    v0 = LD32(s0+32);
    cnd_ = v0 == s1;
    if (cnd_) { ST32(s0+40, FBITS(f20)); goto L_088D46F0; }
    goto L_088D4730;
L_088D4730:;
    goto L_088D46F4;
}

/* 088D4738 */
rv_t func_088D4738(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4738:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+36);
    cnd_ = v0 != 0;
    a0 = a0 + 36;
    if (cnd_) { goto L_088D47D0; }
    goto L_088D4754;
L_088D4754:;
    v1 = LD32(s0+32);
    goto L_088D4758;
L_088D4758:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = s0 + 32;
    if (cnd_) { goto L_088D476C; }
    goto L_088D4764;
L_088D4764:;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D476C;
L_088D476C:;
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    v0 = D_08AECAEC - (-13588);
    if (cnd_) { goto L_088D47A0; }
    goto L_088D4778;
L_088D4778:;
    a0 = LD32(s0+12);
    v0 = 999;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088D4794; }
    goto L_088D4788;
L_088D4788:;
    v0 = LD32(v1+28);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D47C0; }
    goto L_088D4794;
L_088D4794:;
    a0 = LD32(s0+8);
    { u64 r_ = func_088D5534(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D479C;
L_088D479C:;
    v0 = D_08AECAEC - (-13588);
    goto L_088D47A0;
L_088D47A0:;
    f0 = BITSF(LD32(v0-13588));
    ST32(s0+40, 0);
    ST8(s0+16, 0);
    ST32(s0+44, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D47C0:;
    func_088D57B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D47C8;
L_088D47C8:;
    goto L_088D4794;
L_088D47D0:;
    { rv_t r_ = func_088D3DDC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D47D8;
L_088D47D8:;
    v1 = LD32(s0+32);
    goto L_088D4758;
}

/* 088D47E0 */
rv_t func_088D47E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D47E0:;
    sp = sp - 32;
    v0 = (u32)-1;
    v1 = LD32(a0+32);
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088D48E0; }
    goto L_088D4804;
L_088D4804:;
    v0 = LD32(a0+8);
    s0 = LD32(v0+20);
    cnd_ = s0 == 0;
    f20 = BITSF(LD32(a0+44));
    if (cnd_) { goto L_088D4830; }
    goto L_088D4814;
L_088D4814:;
    a0 = s0 + 0;
    v0 = func_088D3B70(a0);
    goto L_088D481C;
L_088D481C:;
    a0 = v0 + 0;
    f0 = func_088E0858(a0);
    goto L_088D4824;
L_088D4824:;
    f1 = BITSF(LD32(s0+4));
    f1 = f1 * f0;
    f20 = f20 * f1;
    goto L_088D4830;
L_088D4830:;
    a0 = LD32(s1+32);
    f12 = f20;
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D483C;
L_088D483C:;
    cnd_ = s0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_088D48E4; }
    goto L_088D4844;
L_088D4844:;
    v0 = LD_U8(s0+20);
    cnd_ = v0 != 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_088D48E4; }
    goto L_088D4850;
L_088D4850:;
    a2 = LD32(s1+12);
    a0 = D_08B29024 - (-28636);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 28636;
    if (cnd_) { goto L_088D48E0; }
    goto L_088D4864;
L_088D4864:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28636);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D48B4; }
    goto L_088D4888;
L_088D4888:;
    a0 = LD32(a1);
    goto L_088D488C;
L_088D488C:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_088D490C; }
    goto L_088D48A4;
L_088D48A4:;
    a1 = LD32(a1+4);
    goto L_088D48A8;
L_088D48A8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_088D488C; }
    goto L_088D48B0;
L_088D48B0:;
    a0 = 0 + 0;
    goto L_088D48B4;
L_088D48B4:;
    cnd_ = a0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_088D48E4; }
    goto L_088D48BC;
L_088D48BC:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D48CC;
L_088D48CC:;
    v1 = D_08B16141 - (24897);
    a2 = LD_U8(v1+24897);
    a0 = LD32(s1+32);
    a1 = v0 + 0;
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D48E0;
L_088D48E0:;
    v0 = D_08B285A0 - (-31328);
    goto L_088D48E4;
L_088D48E4:;
    f0 = BITSF(LD32(s1+40));
    f1 = BITSF(LD32(v0-31328));
    f0 = f0 - f1;
    ST32(s1+40, FBITS(f0));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D490C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088D48A8; }
    goto L_088D4918;
L_088D4918:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_088D48A8; }
    goto L_088D4924;
L_088D4924:;
    goto L_088D48B4;
}

/* 088D492C */
rv_t func_088D492C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D492C:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s1 = LD32(a1+20);
    v0 = func_088D3AB4(a0);
    goto L_088D4950;
L_088D4950:;
    v1 = LD32(s0);
    cnd_ = v1 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D4974; }
    goto L_088D495C;
L_088D495C:;
    v0 = LD32(s0+24);
    v1 = LD32(v1+28);
    v0 = v0 << 2;
    v1 = v1 + v0;
    f0 = BITSF(LD32(v1));
    ST32(s0+20, FBITS(f0));
    goto L_088D4974;
L_088D4974:;
    { rv_t r_ = func_088DAF08(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D497C;
L_088D497C:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    ST32(s0+32, v0);
    if (cnd_) { goto L_088D49E4; }
    goto L_088D4988;
L_088D4988:;
    cnd_ = s1 == 0;
    f20 = BITSF(LD32(s0+44));
    if (cnd_) { goto L_088D49C4; }
    goto L_088D4990;
L_088D4990:;
    a0 = s1 + 0;
    v0 = func_088D3B70(a0);
    goto L_088D4998;
L_088D4998:;
    a0 = v0 + 0;
    f0 = func_088E0858(a0);
    goto L_088D49A0;
L_088D49A0:;
    f1 = BITSF(LD32(s1+4));
    a0 = s1 + 0;
    f20 = f1 * f0;
    v0 = func_088D3B70(a0);
    goto L_088D49B0;
L_088D49B0:;
    a0 = v0 + 0;
    v0 = func_088E0834(a0);
    goto L_088D49B8;
L_088D49B8:;
    v1 = 1;
    cnd_ = v0 == v1;
    v0 = D_08AECAF0 - (-13584);
    if (cnd_) { goto L_088D4A78; }
    goto L_088D49C4;
L_088D49C4:;
    a0 = LD32(s0+32);
    goto L_088D49C8;
L_088D49C8:;
    f12 = f20;
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D49D0;
L_088D49D0:;
    cnd_ = s1 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+20)); goto L_088D49E8; }
    goto L_088D49D8;
L_088D49D8:;
    v0 = LD_U8(s1+20);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+12); goto L_088D4A24; }
    goto L_088D49E4;
L_088D49E4:;
    f1 = BITSF(LD32(s0+20));
    goto L_088D49E8;
L_088D49E8:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088D4A14; }
    goto L_088D49FC;
L_088D49FC:;
    goto L_088D4A00;
L_088D4A00:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D4A14:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D467C(a0, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4A1C;
L_088D4A1C:;
    goto L_088D4A00;
L_088D4A24:;
    a0 = D_08B29024 - (-28636);
    a0 = a0 - 28636;
    a2 = 1;
    { u64 r_ = func_08AB719C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D4A34;
L_088D4A34:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D49E4; }
    goto L_088D4A3C;
L_088D4A3C:;
    v1 = LD32(v0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4A4C;
L_088D4A4C:;
    v1 = D_08B16141 - (24897);
    a0 = LD32(s0+32);
    a2 = LD_U8(v1+24897);
    a1 = v0 + 0;
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4A60;
L_088D4A60:;
    f13 = BITSF(LD32(s1+12));
    a0 = LD32(s0+32);
    f12 = BITSF(LD32(s1+8));
    { rv_t r_ = func_088DBAA8(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4A70;
L_088D4A70:;
    f1 = BITSF(LD32(s0+20));
    goto L_088D49E8;
L_088D4A78:;
    a0 = LD32(s0+32);
    f12 = BITSF(LD32(v0-13584));
    a1 = 0 + 0;
    func_088DBECC(a0, a1, f12);
    goto L_088D4A88;
L_088D4A88:;
    a0 = LD32(s0+32);
    goto L_088D49C8;
}

/* 088D4A90 */
float func_088D4A90(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4A90:;
    f1 = BITSF(LD32(a1+32));
    f0 = BITSF(0);
    sp = sp - 16;
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    a0 = a2 + 0;
    if (cnd_) { goto L_088D4AC0; }
    goto L_088D4AB0;
L_088D4AB0:;
    f0 = f1;
    sp = sp + 16;
    return f0;
L_088D4AC0:;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D4AC8;
L_088D4AC8:;
    f0 = BITSF(v0);
    v1 = D_08AECAF4 - (-13580);
    v0 = D_08AECAF8 - (-13576);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-13580));
    f2 = BITSF(LD32(v0-13576));
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f1; goto L_088D4AF4; }
    goto L_088D4AF4;
L_088D4AF4:;
    f1 = f2;
    goto L_088D4AB0;
}

/* 088D4AFC */
rv_t func_088D4AFC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D4AFC:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s2 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = v0 & v1;
    s3 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D4B7C; }
    goto L_088D4B30;
L_088D4B30:;
    v0 = s2 < 0x1u;
    v1 = s3 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D4B54; }
    goto L_088D4B44;
L_088D4B44:;
    v0 = D_08B30798 - (1944);
    a0 = LD32(v0+1944);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D4B6C; }
    goto L_088D4B54;
L_088D4B54:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D4B6C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D4B74;
L_088D4B74:;
    goto L_088D4B54;
L_088D4B7C:;
    s1 = D_08B30798 - (1944);
    a0 = 384;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4B88;
L_088D4B88:;
    s0 = s1 + 1944;
    v1 = 48;
    a0 = 8;
    t1 = s0 + 0;
    ST32(s1+1944, v0);
    ST32(s0+8, v1);
    ST32(s0+12, a0);
    cnd_ = v0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_088D4B30; }
    goto L_088D4BAC;
L_088D4BAC:;
    a3 = 0 + 0;
    t0 = 48;
    t2 = 7;
    a2 = 48;
    a1 = 0 + 0;
    goto L_088D4BC0;
L_088D4BC0:;
    v1 = LD32(t1);
    v0 = a3 + 1;
    a3 = v0 + 0;
    a0 = v1 + a2;
    v0 = (s32)v0 < (s32)t2;
    v1 = v1 + a1;
    ST32(v1, a0);
    a1 = a1 + t0;
    cnd_ = v0 != 0;
    a2 = a2 + t0;
    if (cnd_) { goto L_088D4BC0; }
    goto L_088D4BE8;
L_088D4BE8:;
    { s64 p_ = (s64)(s32)t2 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(t1);
    ST32(t1+16, 0);
    v1 = lo;
    v0 = v0 + v1;
    ST32(v0, 0);
    goto L_088D4B30;
}

/* 088D4C04 */
rv_t func_088D4C04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4C04:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088D4AFC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4C18;
L_088D4C18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D4C24 */
rv_t func_088D4C24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4C24:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088D4AFC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4C38;
L_088D4C38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D4C44 */
void func_088D4C44(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4C44:;
    sp = sp - 16;
    a0 = 60;
    s2 = 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4C64;
L_088D4C64:;
    s1 = v0 + 4;
    ST32(s1-4, s2);
    s0 = v0 + 0;
    a0 = s1 + 0;
    s0 = s0 + 32;
    func_088D3ED8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D4C7C;
L_088D4C7C:;
    a0 = s0 + 0;
    func_088D3ED8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D4C84;
L_088D4C84:;
    a0 = 16;
    v0 = D_08B307AC - (1964);
    ST32(v0+1964, s1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4C94;
L_088D4C94:;
    s0 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s0, v0);
    a0 = 8;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4CAC;
L_088D4CAC:;
    ST32(s0+4, v0);
    v1 = v0 + 0;
    a0 = 0 + 0;
    ST32(s0+8, s2);
    ST32(s0+12, 0);
    goto L_088D4CC0;
L_088D4CC0:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 2;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D4CC0; }
    goto L_088D4CD4;
L_088D4CD4:;
    v0 = D_08AF1BD0 - (7120);
    v1 = D_08B307B0 - (1968);
    v0 = v0 + 7120;
    ST32(v1+1968, s0);
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 088D4D00 */
void func_088D4D00(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D4D00:;
    sp = sp - 32;
    v0 = D_08B307B0 - (1968);
    v1 = ((u32)(uintptr_t)func_088D52A4) - (21156);
    s0 = v1 + 21156;
    a0 = LD32(v0+1968);
    ST32(sp+4, 0);
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D4D4C; }
    goto L_088D4D34;
L_088D4D34:;
    func_088D2300(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D4D3C;
L_088D4D3C:;
    sp = sp + 32;
    return;
L_088D4D4C:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4D68;
L_088D4D68:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D4D4C; }
    goto L_088D4D78;
L_088D4D78:;
    goto L_088D4D34;
}

/* 088D4D80 */
void func_088D4D80(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D4D80:;
    sp = sp - 32;
    s2 = D_08B307B0 - (1968);
    v0 = ((u32)(uintptr_t)func_088D52A4) - (21156);
    s0 = v0 + 21156;
    ST32(sp+4, 0);
    v1 = LD32(s2+1968);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D4E4C; }
    goto L_088D4DBC;
L_088D4DBC:;
    s1 = D_08B307AC - (1964);
    goto L_088D4DC0;
L_088D4DC0:;
    a0 = LD32(s1+1964);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+1968); goto L_088D4E08; }
    goto L_088D4DCC;
L_088D4DCC:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    a0 = LD32(s1+1964);
    goto L_088D4DE4;
L_088D4DE4:;
    cnd_ = a0 == s0;
    s0 = s0 - 28;
    if (cnd_) { goto L_088D4DFC; }
    goto L_088D4DEC;
L_088D4DEC:;
    a0 = s0 + 0;
    func_088D3F04(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D4DF4;
L_088D4DF4:;
    a0 = LD32(s1+1964);
    goto L_088D4DE4;
L_088D4DFC:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D4E04;
L_088D4E04:;
    a0 = LD32(s2+1968);
    goto L_088D4E08;
L_088D4E08:;
    cnd_ = a0 != 0;
    ST32(s1+1964, 0);
    if (cnd_) { goto L_088D4E34; }
    goto L_088D4E10;
L_088D4E10:;
    v0 = D_08B307B0 - (1968);
    goto L_088D4E14;
L_088D4E14:;
    ST32(v0+1968, 0);
    func_088D22E0(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D4E1C;
L_088D4E1C:;
    sp = sp + 32;
    return;
L_088D4E34:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4E44;
L_088D4E44:;
    v0 = D_08B307B0 - (1968);
    goto L_088D4E14;
L_088D4E4C:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4E68;
L_088D4E68:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D4E4C; }
    goto L_088D4E78;
L_088D4E78:;
    s1 = D_08B307AC - (1964);
    goto L_088D4DC0;
}

/* 088D4E80 */
void func_088D4E80(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D4E80:;
    sp = sp - 32;
    v0 = D_08B307B0 - (1968);
    v1 = ((u32)(uintptr_t)func_088D521C) - (21020);
    s0 = v1 + 21020;
    a0 = LD32(v0+1968);
    ST32(sp+4, 0);
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D4EC4; }
    goto L_088D4EB4;
L_088D4EB4:;
    goto L_088D4EB8;
L_088D4EB8:;
    sp = sp + 32;
    return;
L_088D4EC4:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4EE0;
L_088D4EE0:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D4EC4; }
    goto L_088D4EF0;
L_088D4EF0:;
    goto L_088D4EB8;
}

/* 088D4EF8 */
u32 func_088D4EF8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4EF8:;
    a1 = a0 + 0;
    a0 = D_08B30750 - (1872);
    sp = sp - 16;
    a0 = a0 + 1872;
    { u64 r_ = func_088D2BD4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D4F10;
L_088D4F10:;
    sp = sp + 16;
    return v0;
}

/* 088D4F1C */
void func_088D4F1C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4F1C:;
    sp = sp - 16;
    a3 = a2 + 0;
    t0 = 0xffff;
    a2 = a1 + 0;
    t1 = 999;
    a1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_088D4F4C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D4F40;
L_088D4F40:;
    sp = sp + 16;
    return;
}

/* 088D4F4C */
rv_t func_088D4F4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D4F4C:;
    sp = sp - 16;
    t3 = a0 + 0;
    t4 = a1 + 0;
    t5 = a2 + 0;
    s2 = a3 + 0;
    t0 = t0 & 0xffff;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088D4FD0; }
    goto L_088D4F78;
L_088D4F78:;
    v0 = LD_U8(a0+76);
    a0 = 100;
    cnd_ = v0 == a0;
    a2 = D_08B25AC0 - (23232);
    if (cnd_) { goto L_088D4FF4; }
    goto L_088D4F88;
L_088D4F88:;
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
    v1 = LD_U8(t3+76);
    a0 = hi;
    a0 = a0 + 1;
    v1 = (s32)v1 < (s32)a0;
    cnd_ = v1 == 0;
    v0 = D_08B307B0 - (1968);
    if (cnd_) { goto L_088D4FF8; }
    goto L_088D4FD0;
L_088D4FD0:;
    cnd_ = s2 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088D4FDC; }
    goto L_088D4FD8;
L_088D4FD8:;
    ST32(s2, v0);
    goto L_088D4FDC;
L_088D4FDC:;
    goto L_088D4FE0;
L_088D4FE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D4FF4:;
    v0 = D_08B307B0 - (1968);
    goto L_088D4FF8;
L_088D4FF8:;
    a1 = LD32(v0+1968);
    a2 = (u32)-1;
    v1 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D5030; }
    goto L_088D5014;
L_088D5014:;
    v0 = v1 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v0);
    v1 = v1 << 2;
    v1 = v1 + a0;
    a2 = LD32(v1);
    a0 = 1;
    goto L_088D5030;
L_088D5030:;
    cnd_ = s2 == 0;
    v0 = a0 & 0xff;
    if (cnd_) { goto L_088D503C; }
    goto L_088D5038;
L_088D5038:;
    ST32(s2, a2);
    goto L_088D503C;
L_088D503C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D4FE0; }
    goto L_088D5044;
L_088D5044:;
    s1 = D_08B307AC - (1964);
    s0 = a2 << 3;
    a0 = LD32(s1+1964);
    s0 = s0 - a2;
    s0 = s0 << 2;
    a0 = a0 + s0;
    a1 = t3 + 0;
    a2 = t4 + 0;
    a3 = t5 + 0;
    f0 = func_088D3FD0(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088D506C;
L_088D506C:;
    v0 = LD32(s1+1964);
    v1 = s2 < 0x1u;
    v0 = v0 + s0;
    ST8(v0, v1);
    goto L_088D4FDC;
}

/* 088D5080 */
rv_t func_088D5080(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D5080:;
    sp = sp - 16;
    s0 = a2 + 0;
    a2 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088D5138; }
    goto L_088D50A0;
L_088D50A0:;
    v0 = D_08B307B0 - (1968);
    a1 = a0 + 0;
    a0 = LD32(v0+1968);
    s2 = D_08B307AC - (1964);
    a3 = (u32)-1;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    t0 = v0 + 1;
    t1 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_088D50E4; }
    goto L_088D50D0;
L_088D50D0:;
    v0 = LD32(a0+4);
    ST32(a0+12, t0);
    t2 = 1;
    v0 = t1 + v0;
    a3 = LD32(v0);
    goto L_088D50E4;
L_088D50E4:;
    v0 = a3 << 3;
    cnd_ = s0 == 0;
    v1 = t2 & 0xff;
    if (cnd_) { goto L_088D50F4; }
    goto L_088D50F0;
L_088D50F0:;
    ST32(s0, a3);
    goto L_088D50F4;
L_088D50F4:;
    v0 = v0 - a3;
    cnd_ = v1 != 0;
    s1 = v0 << 2;
    if (cnd_) { goto L_088D5118; }
    goto L_088D5100;
L_088D5100:;
    goto L_088D5104;
L_088D5104:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D5118:;
    a0 = LD32(s2+1964);
    a0 = a0 + s1;
    f0 = func_088D40E4(a0, a1, a2);
    goto L_088D5124;
L_088D5124:;
    v0 = LD32(s2+1964);
    v1 = s0 < 0x1u;
    v0 = v0 + s1;
    ST8(v0, v1);
    goto L_088D5100;
L_088D5138:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088D5104; }
    goto L_088D5140;
L_088D5140:;
    v0 = (u32)-1;
    ST32(s0, v0);
    goto L_088D5104;
}

/* 088D514C */
rv_t func_088D514C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D514C:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = v1 << 3;
    v0 = v0 - v1;
    cnd_ = v1 == s1;
    a1 = v0 << 2;
    if (cnd_) { goto L_088D51A4; }
    goto L_088D5178;
L_088D5178:;
    v0 = D_08B307AC - (1964);
    a0 = LD32(v0+1964);
    a0 = a0 + a1;
    func_088D414C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D5188;
L_088D5188:;
    v0 = D_08B307B0 - (1968);
    a0 = LD32(v0+1968);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = LD32(s0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D51A0;
L_088D51A0:;
    ST32(s0, s1);
    goto L_088D51A4;
L_088D51A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D51B8 */
u64 func_088D51B8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088D51B8:;
    a1 = LD32(a0);
    v1 = D_08B307AC - (1964);
    a0 = LD32(v1+1964);
    v0 = a1 << 3;
    v0 = v0 - a1;
    v0 = v0 << 2;
    a0 = a0 + v0;
    v1 = 1;
    ST8(a0, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D51E0 */
u32 func_088D51E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_088D51E0:;
    v1 = D_08B307AC - (1964);
    a1 = LD32(v1+1964);
    v0 = a0 << 3;
    v0 = v0 - a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    v0 = LD_U8(a1+1);
    return v0;
}

/* 088D5200 */
u32 func_088D5200(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088D5200:;
    v0 = D_08B307B0 - (1968);
    v1 = LD32(v0+1968);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D5214; }
    goto L_088D5210;
L_088D5210:;
    v0 = LD32(v1+12);
    goto L_088D5214;
L_088D5214:;
    return v0;
}

/* 088D521C */
rv_t func_088D521C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D521C:;
    sp = sp - 16;
    v1 = D_08B307AC - (1964);
    s1 = a0 + 0;
    v0 = s1 << 3;
    v0 = v0 - s1;
    v0 = v0 << 2;
    a0 = LD32(v1+1964);
    s0 = a0 + v0;
    a0 = s0 + 0;
    { rv_t r_ = func_088D3F20(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5250;
L_088D5250:;
    v0 = LD_U8(s0+1);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D526C; }
    goto L_088D525C;
L_088D525C:;
    v0 = LD_U8(s0);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D527C; }
    goto L_088D5268;
L_088D5268:;
    goto L_088D526C;
L_088D526C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D527C:;
    func_088D414C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D5284;
L_088D5284:;
    v0 = D_08B307B0 - (1968);
    a0 = LD32(v0+1968);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D529C;
L_088D529C:;
    goto L_088D526C;
}

/* 088D52A4 */
rv_t func_088D52A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D52A4:;
    sp = sp - 32;
    v1 = D_08B307AC - (1964);
    v0 = a0 << 3;
    a1 = LD32(v1+1964);
    v0 = v0 - a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    v1 = LD_U8(a1);
    ST32(sp, a0);
    cnd_ = v1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088D52E0; }
    goto L_088D52D4;
L_088D52D4:;
    goto L_088D52D8;
L_088D52D8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D52E0:;
    { rv_t r_ = func_088D514C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D52E8;
L_088D52E8:;
    goto L_088D52D8;
}

/* 088D52F0 */
rv_t func_088D52F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088D52F0:;
    sp = sp - 48;
    v0 = 80;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D5460; }
    goto L_088D5318;
L_088D5318:;
    v0 = (s32)v1 < 81;
    cnd_ = v0 == 0;
    v0 = 128;
    if (cnd_) { goto L_088D538C; }
    goto L_088D5324;
L_088D5324:;
    v0 = v1 - 74;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D536C; }
    goto L_088D5334;
L_088D5334:;
    v0 = LD32(a0+24);
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    a1 = LD32(v0);
    { u64 r_ = func_088D2D84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5348;
L_088D5348:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D5368; }
    goto L_088D5350;
L_088D5350:;
    v1 = LD_U16(s0+16);
    v0 = 75;
    cnd_ = v1 == v0;
    a1 = 999;
    if (cnd_) { goto L_088D5384; }
    goto L_088D5360;
L_088D5360:;
    a2 = 0 + 0;
    { rv_t r_ = func_088D5080(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5368;
L_088D5368:;
    goto L_088D536C;
L_088D536C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088D5384:;
    a1 = LD32(s0+4);
    goto L_088D5360;
L_088D538C:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_088D536C; }
    goto L_088D5394;
L_088D5394:;
    s1 = LD32(a0+24);
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    a1 = LD32(s1);
    s2 = s1 + 12;
    { u64 r_ = func_088D2BD4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D53AC;
L_088D53AC:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_088D5368; }
    goto L_088D53B4;
L_088D53B4:;
    ST32(sp, 0);
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_088D5448; }
    goto L_088D53C4;
L_088D53C4:;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088D5400; }
    goto L_088D53CC;
L_088D53CC:;
    a3 = LD32(sp+4);
    a0 = a2 << 3;
    goto L_088D53D4;
L_088D53D4:;
    a1 = a0 + s2;
    v0 = LD32(a1);
    a0 = a3 + a0;
    a2 = a2 + 1;
    ST32(a0, v0);
    v1 = LD32(a1+4);
    ST32(a0+4, v1);
    v0 = LD32(s1+4);
    v0 = a2 < v0;
    cnd_ = v0 != 0;
    a0 = a2 << 3;
    if (cnd_) { goto L_088D53D4; }
    goto L_088D5400;
L_088D5400:;
    t1 = LD32(s0+4);
    t0 = LD_U16(s1+8);
    a0 = s3 + 0;
    a1 = sp + 0;
    a2 = 999;
    a3 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_088D4F4C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5420;
L_088D5420:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D5438; }
    goto L_088D542C;
L_088D542C:;
    ST32(sp+4, 0);
    goto L_088D5430;
L_088D5430:;
    ST32(sp, 0);
    goto L_088D5368;
L_088D5438:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5440;
L_088D5440:;
    ST32(sp+4, 0);
    goto L_088D5430;
L_088D5448:;
    a0 = v0 << 3;
    ST32(sp, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5454;
L_088D5454:;
    ST32(sp+4, v0);
    v0 = LD32(s1+4);
    goto L_088D53C4;
L_088D5460:;
    v0 = D_08B307B4 - (1972);
    ST32(v0+1972, 0);
    goto L_088D5368;
}

/* 088D546C */
rv_t func_088D546C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D546C:;
    sp = sp - 32;
    v0 = D_08B307B8 - (1976);
    v1 = D_08B307B4 - (1972);
    s4 = D_08B307C4 - (1988);
    s3 = D_08B307C0 - (1984);
    ST32(v0+1976, FBITS(f12));
    v0 = D_08B16124 - (24868);
    ST32(v1+1972, a0);
    v1 = D_08B307BC - (1980);
    s2 = a1 + 0;
    s1 = a0 + 0;
    ST32(v0+24868, a1);
    ST32(v1+1980, 0);
    ST32(s3+1984, 0);
    cnd_ = a0 == 0;
    ST8(s4+1988, 0);
    if (cnd_) { goto L_088D54F0; }
    goto L_088D54C4;
L_088D54C4:;
    s0 = LD32(a0+16);
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D54F0; }
    goto L_088D54D0;
L_088D54D0:;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D54D8;
L_088D54D8:;
    a1 = 10;
    a0 = s0 + 0;
    ST32(s3+1984, v0);
    { u64 r_ = func_088F9058(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D54E8;
L_088D54E8:;
    v0 = 0 < v0;
    ST8(s4+1988, v0);
    goto L_088D54F0;
L_088D54F0:;
    v0 = D_08B307D0 - (2000);
    v0 = LD32(v0+2000);
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088D5524; }
    goto L_088D5504;
L_088D5504:;
    goto L_088D5508;
L_088D5508:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D5524:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D552C;
L_088D552C:;
    goto L_088D5508;
}

/* 088D5534 */
u64 func_088D5534(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D5534:;
    sp = sp - 16;
    a1 = D_08B307B4 - (1972);
    v1 = LD32(a1+1972);
    cnd_ = a0 == v1;
    v0 = D_08B307D4 - (2004);
    if (cnd_) { goto L_088D5558; }
    goto L_088D554C;
L_088D554C:;
    goto L_088D5550;
L_088D5550:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D5558:;
    a2 = LD32(v0+2004);
    v1 = 999;
    v0 = D_08B16124 - (24868);
    ST32(v0+24868, v1);
    cnd_ = a2 == 0;
    ST32(a1+1972, 0);
    if (cnd_) { goto L_088D554C; }
    goto L_088D5570;
L_088D5570:;
    t_ = a2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5578;
L_088D5578:;
    goto L_088D5550;
}

/* 088D5580 */
void func_088D5580(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[528] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 528);
L_088D5580:;
    sp = sp - 528;
    v0 = D_08B307B4 - (1972);
    a0 = LD32(v0+1972);
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_088D56E0; }
    goto L_088D5598;
L_088D5598:;
    a2 = D_08B307C0 - (1984);
    a1 = LD32(a2+1984);
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_088D56E0; }
    goto L_088D55A8;
L_088D55A8:;
    a0 = LD32(a0+16);
    cnd_ = a0 == 0;
    v1 = D_08B307BC - (1980);
    if (cnd_) { goto L_088D56DC; }
    goto L_088D55B4;
L_088D55B4:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(v1+1980));
    v0 = D_08B307B8 - (1976);
    f2 = BITSF(LD32(v0+1976));
    f1 = f0 + f1;
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    ST32(v1+1980, FBITS(f1));
    if (cnd_) { goto L_088D56DC; }
    goto L_088D55DC;
L_088D55DC:;
    v0 = D_08B307C4 - (1988);
    v1 = LD_U8(v0+1988);
    cnd_ = v1 == 0;
    v0 = D_08B307C8 - (1992);
    if (cnd_) { goto L_088D5720; }
    goto L_088D55EC;
L_088D55EC:;
    f3 = BITSF(a1);
    f0 = (float)(s32)FBITS(f3);
    f0 = f1 * f0;
    f1 = BITSF(0);
    f2 = f0 / f2;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AECAFC - (-13572);
    if (cnd_) { goto L_088D5714; }
    goto L_088D5610;
L_088D5610:;
    f0 = BITSF(LD32(v0-13572));
    f0 = f2 + f0;
    goto L_088D5618;
L_088D5618:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(a2+1984);
    v1 = FBITS(f0);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D56E0; }
    goto L_088D5630;
L_088D5630:;
    v0 = v1 << 1;
    cnd_ = (s32)v1 <= 0;
    a0 = a0 + v0;
    if (cnd_) { goto L_088D5658; }
    goto L_088D563C;
L_088D563C:;
    a2 = 10;
    goto L_088D5640;
L_088D5640:;
    a1 = LD_U16(a0);
    v0 = a1 & 0xffff;
    cnd_ = v0 == a2;
    v1 = v1 - 1;
    if (cnd_) { goto L_088D565C; }
    goto L_088D5650;
L_088D5650:;
    cnd_ = (s32)v1 > 0;
    a0 = a0 - 2;
    if (cnd_) { goto L_088D5640; }
    goto L_088D5658;
L_088D5658:;
    a1 = LD_U16(a0);
    goto L_088D565C;
L_088D565C:;
    v1 = a1 & 0xffff;
    v0 = 10;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = 10; goto L_088D56F8; }
    goto L_088D566C;
L_088D566C:;
    v0 = v1 ^ 0xa;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v1 = v1 & v0;
    a3 = sp + 0;
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088D56BC; }
    goto L_088D5688;
L_088D5688:;
    v0 = (s32)a2 < 256;
    a0 = a0 + 2;
    cnd_ = v0 == 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_088D56BC; }
    goto L_088D5698;
L_088D5698:;
    ST16(a3, a1);
    a1 = LD_U16(a0);
    v0 = a1 & 0xffff;
    v1 = v0 ^ 0xa;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a3 = a3 + 2;
    if (cnd_) { goto L_088D5688; }
    goto L_088D56BC;
L_088D56BC:;
    v0 = D_08B307C8 - (1992);
    v0 = LD32(v0+1992);
    ST16(a3, 0);
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088D56E8; }
    goto L_088D56D0;
L_088D56D0:;
    a0 = sp + 0;
    goto L_088D56D4;
L_088D56D4:;
    func_088D5734(a0);
    goto L_088D56DC;
L_088D56DC:;
    goto L_088D56E0;
L_088D56E0:;
    sp = sp + 528;
    return;
L_088D56E8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D56F0;
L_088D56F0:;
    goto L_088D56E0;
L_088D56F8:;
    a0 = a0 + 2;
    goto L_088D56FC;
L_088D56FC:;
    a1 = LD_U16(a0);
    v0 = a1 & 0xffff;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = a0 + 2; goto L_088D56FC; }
    goto L_088D570C;
L_088D570C:;
    v1 = a1 & 0xffff;
    goto L_088D566C;
L_088D5714:;
    f0 = BITSF(LD32(v0-13572));
    f0 = f2 - f0;
    goto L_088D5618;
L_088D5720:;
    v0 = LD32(v0+1992);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D56D4; }
    goto L_088D572C;
L_088D572C:;
    goto L_088D56E8;
}

/* 088D5734 */
void func_088D5734(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D5734:;
    sp = sp - 32;
    v0 = D_08AECB00 - (-13568);
    s0 = a0 + 0;
    a0 = 0 + 0;
    f0 = BITSF(LD32(v0-13568));
    v0 = D_08AECB04 - (-13564);
    ST32(sp+4, 0);
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(v0-13564));
    v0 = D_08AECB08 - (-13560);
    ST32(sp+8, FBITS(f0));
    f0 = BITSF(LD32(v0-13560));
    ST32(sp+12, FBITS(f0));
    func_088CD5B0(a0);
    goto L_088D5774;
L_088D5774:;
    f12 = BITSF(0);
    v1 = D_08AECB10 - (-13552);
    v0 = D_08AECB0C - (-13556);
    f14 = BITSF(LD32(v0-13556));
    f15 = BITSF(LD32(v1-13552));
    a3 = s0 + 0;
    a0 = sp + 0;
    f13 = f12;
    a1 = (u32)-1;
    a2 = 197;
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D57A0;
L_088D57A0:;
    sp = sp + 32;
    return;
}

/* 088D57B0 */
void func_088D57B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D57B0:;
    sp = sp - 16;
    v0 = D_08B307CC - (1996);
    v0 = LD32(v0+1996);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D57D4; }
    goto L_088D57C8;
L_088D57C8:;
    goto L_088D57CC;
L_088D57CC:;
    sp = sp + 16;
    return;
L_088D57D4:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D57DC;
L_088D57DC:;
    goto L_088D57CC;
}

/* 088D57E4 */
void func_088D57E4(u32 a0)
{
L_088D57E4:;
    ST32(a0+8, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 088D57F4 */
u64 func_088D57F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D57F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 + 4;
    a0 = 9;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5810;
L_088D5810:;
    a0 = s0 + 0;
    func_08AB7230(a0, 0, 0, 0);
    goto L_088D5818;
L_088D5818:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5820;
L_088D5820:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D5830 */
u32 func_088D5830(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D5830:;
    sp = sp - 16;
    s1 = a0 + 4;
    s0 = a0 + 0;
    a0 = 9;
    s2 = a1 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5858;
L_088D5858:;
    a0 = s1 + 0;
    func_08AB7230(a0, 0, 0, 0);
    goto L_088D5860;
L_088D5860:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_08AB72A0(a0, a1, 0, 0, 0);
    goto L_088D586C;
L_088D586C:;
    ST32(s0, s2);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5874;
L_088D5874:;
    v0 = LD32(s0+4);
    sp = sp + 16;
    return v0;
}

/* 088D5890 */
void func_088D5890(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D5890:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 9;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D58A8;
L_088D58A8:;
    a0 = s0 + 4;
    func_08AB7230(a0, 0, 0, 0);
    goto L_088D58B0;
L_088D58B0:;
    ST32(s0, 0);
    ST32(s0+4, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D58BC;
L_088D58BC:;
    sp = sp + 16;
    return;
}

/* 088D58CC */
u64 func_088D58CC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_088D58CC:;
    a3 = LD32(a1);
    cnd_ = (s32)a3 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D58FC; }
    goto L_088D58D8;
L_088D58D8:;
    v0 = LD32(a1+4);
    a1 = v0 + 12;
    v0 = LD32(a1);
    goto L_088D58E4;
L_088D58E4:;
    cnd_ = v0 == a2;
    a1 = a1 + 272;
    if (cnd_) { goto L_088D590C; }
    goto L_088D58EC;
L_088D58EC:;
    v1 = v1 + 1;
    v0 = (s32)v1 < (s32)a3;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_088D58E4; }
    goto L_088D58FC;
L_088D58FC:;
    v0 = (u32)-1;
    ST32(a0, v0);
    goto L_088D5904;
L_088D5904:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_088D590C:;
    ST32(a0, v1);
    goto L_088D5904;
}

/* 088D5914 */
u64 func_088D5914(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088D5914:;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D594C; }
    goto L_088D5920;
L_088D5920:;
    a1 = LD32(a1);
    cnd_ = (s32)a1 < 0;
    if (cnd_) { goto L_088D594C; }
    goto L_088D592C;
L_088D592C:;
    v1 = LD32(a0);
    v0 = a1 << 4;
    v0 = v0 + a1;
    v1 = (s32)a1 < (s32)v1;
    cnd_ = v1 == 0;
    a2 = v0 << 4;
    if (cnd_) { goto L_088D594C; }
    goto L_088D5944;
L_088D5944:;
    v0 = LD32(a0+4);
    a3 = v0 + a2;
    goto L_088D594C;
L_088D594C:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D5954 */
void func_088D5954(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
L_088D5954:;
    v0 = D_08AECB14 - (-13548);
    f0 = BITSF(LD32(v0-13548));
    a0 = (u32)-1;
    v1 = D_08B307F8 - (2040);
    v0 = D_08B307E8 - (2024);
    ST32(v1+2040, FBITS(f0));
    v1 = D_08B30800 - (2048);
    ST32(v0+2024, a0);
    v0 = D_08B30804 - (2052);
    ST32(v1+2048, 0);
    v1 = D_08B307F4 - (2036);
    ST32(v0+2052, 0);
    v0 = D_08B307EC - (2028);
    ST32(v1+2036, 0);
    v1 = D_08B30808 - (2056);
    ST32(v0+2028, a0);
    v0 = D_08B3080C - (2060);
    ST32(v1+2056, 0);
    ST8(v0+2060, 0);
    return;
}

/* 088D59A4 */
void func_088D59A4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D59A4:;
    sp = sp - 16;
    a0 = 1;
    { rv_t r_ = func_088D6498(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D59B4;
L_088D59B4:;
    a0 = D_08B307D8 - (2008);
    a0 = a0 + 2008;
    func_088D5890(a0);
    goto L_088D59C0;
L_088D59C0:;
    a0 = (u32)-1;
    v0 = D_08B307E4 - (2020);
    ST32(v0+2020, a0);
    v1 = D_08B30808 - (2056);
    v0 = D_08B307F0 - (2032);
    ST32(v1+2056, 0);
    ST32(v0+2032, 0);
    sp = sp + 16;
    return;
}

/* 088D59E8 */
void func_088D59E8(void)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D59E8:;
    sp = sp - 16;
    s0 = D_08B3080C - (2060);
    a0 = 0 + 0;
    v0 = LD_U8(s0+2060);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D5A24; }
    goto L_088D5A04;
L_088D5A04:;
    func_088D59A4();
    goto L_088D5A0C;
L_088D5A0C:;
    func_088D5954();
    goto L_088D5A14;
L_088D5A14:;
    sp = sp + 16;
    return;
L_088D5A24:;
    func_088D7B70(a0);
    goto L_088D5A2C;
L_088D5A2C:;
    ST8(s0+2060, 0);
    goto L_088D5A04;
}

/* 088D5A34 */
void func_088D5A34(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D5A34:;
    sp = sp - 16;
    s0 = D_08B30808 - (2056);
    a0 = a0 & 0xff;
    v0 = LD32(s0+2056);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D5A68; }
    goto L_088D5A50;
L_088D5A50:;
    v0 = v0 + 1;
    ST32(s0+2056, v0);
    sp = sp + 16;
    return;
L_088D5A68:;
    func_088D7B14(a0);
    goto L_088D5A70;
L_088D5A70:;
    v0 = D_08B3080C - (2060);
    v1 = 1;
    ST8(v0+2060, v1);
    v0 = LD32(s0+2056);
    goto L_088D5A50;
}

/* 088D5A84 */
void func_088D5A84(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D5A84:;
    sp = sp - 16;
    s1 = D_08B3080C - (2060);
    v0 = a0 + 0;
    v1 = LD_U8(s1+2060);
    a0 = 0 + 0;
    s0 = v0 & 0xff;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088D5AF8; }
    goto L_088D5AAC;
L_088D5AAC:;
    f12 = BITSF(0);
    cnd_ = s0 != 0;
    v0 = LD_U8(s1+2060);
    if (cnd_) { goto L_088D5AC0; }
    goto L_088D5AB8;
L_088D5AB8:;
    cnd_ = v0 == 0;
    v0 = D_08AECB18 - (-13544);
    if (cnd_) { goto L_088D5AF0; }
    goto L_088D5AC0;
L_088D5AC0:;
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5AC8;
L_088D5AC8:;
    v1 = D_08B30808 - (2056);
    v0 = LD32(v1+2056);
    ST8(s1+2060, 0);
    v0 = v0 + 1;
    ST32(v1+2056, v0);
    sp = sp + 16;
    return;
L_088D5AF0:;
    f12 = BITSF(LD32(v0-13544));
    goto L_088D5AC0;
L_088D5AF8:;
    func_088D7B70(a0);
    goto L_088D5B00;
L_088D5B00:;
    goto L_088D5AAC;
}

/* 088D5B08 */
void func_088D5B08(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088D5B08:;
    sp = sp - 48;
    s2 = D_08B30808 - (2056);
    v0 = LD32(s2+2056);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+2056, v0);
    if (cnd_) { goto L_088D5C30; }
    goto L_088D5B48;
L_088D5B48:;
    fp = D_08B3080C - (2060);
    v0 = LD_U8(fp+2060);
    cnd_ = v0 != 0;
    s6 = D_08B30804 - (2052);
    if (cnd_) { goto L_088D5CF0; }
    goto L_088D5B58;
L_088D5B58:;
    v0 = LD32(s6+2052);
    cnd_ = (s32)v0 < 0;
    s1 = (u32)-1;
    if (cnd_) { goto L_088D5CDC; }
    goto L_088D5B64;
L_088D5B64:;
    v0 = D_08B30810 - (2064);
    s7 = v0 + 2064;
    s4 = (u32)-1;
    s5 = D_08B30800 - (2048);
    v0 = D_08B307E4 - (2020);
    goto L_088D5B78;
L_088D5B78:;
    cnd_ = s1 == s4;
    s3 = v0 + 2020;
    if (cnd_) { goto L_088D5BAC; }
    goto L_088D5B80;
L_088D5B80:;
    v0 = LD32(s5+2048);
    v0 = v0 + s1;
    v1 = (u32)((s32)v0 >> 31);
    v1 = v1 >> 29;
    v1 = v0 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v0 = v0 - v1;
    a0 = v0 << 1;
    a0 = a0 + v0;
    a0 = a0 << 2;
    s3 = a0 + s7;
    goto L_088D5BAC;
L_088D5BAC:;
    cnd_ = s1 == s4;
    a0 = LD32(s5+2048);
    if (cnd_) { goto L_088D5CD0; }
    goto L_088D5BB4;
L_088D5BB4:;
    a0 = a0 + s1;
    v1 = (u32)((s32)a0 >> 31);
    v1 = v1 >> 29;
    v1 = a0 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v1;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + s7;
    s0 = LD32(v0+4);
    goto L_088D5BE0;
L_088D5BE0:;
    a0 = s0 + 0;
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5BE8;
L_088D5BE8:;
    a0 = s3 + 0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088D5C70; }
    goto L_088D5BF4;
L_088D5BF4:;
    cnd_ = s0 == 0;
    v0 = LD32(s6+2052);
    if (cnd_) { goto L_088D5C70; }
    goto L_088D5BFC;
L_088D5BFC:;
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    v0 = D_08B307E4 - (2020);
    if (cnd_) { goto L_088D5B78; }
    goto L_088D5C0C;
L_088D5C0C:;
    a0 = 0 + 0;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5C14;
L_088D5C14:;
    v0 = (u32)-1;
    goto L_088D5C18;
L_088D5C18:;
    v1 = D_08B307EC - (2028);
    ST32(v1+2028, v0);
    v1 = D_08B307E4 - (2020);
    ST32(v1+2020, v0);
    { rv_t r_ = func_088D6A3C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5C2C;
L_088D5C2C:;
    ST8(fp+2060, 0);
    goto L_088D5C30;
L_088D5C30:;
    v0 = LD32(s2+2056);
    v1 = (s32)v0 < 0;
    if (v1 != 0) v0 = 0;
    ST32(s2+2056, v0);
    sp = sp + 48;
    return;
L_088D5C70:;
    v0 = func_088D7330(a0, a1);
    goto L_088D5C78;
L_088D5C78:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s6+2052); goto L_088D5BFC; }
    goto L_088D5C80;
L_088D5C80:;
    cnd_ = s1 == s4;
    a0 = s3 + 0;
    if (cnd_) { goto L_088D5CBC; }
    goto L_088D5C88;
L_088D5C88:;
    cnd_ = (s32)s1 <= 0;
    v0 = LD32(s5+2048);
    if (cnd_) { goto L_088D5C14; }
    goto L_088D5C90;
L_088D5C90:;
    a0 = LD32(s6+2052);
    v0 = v0 + s1;
    v1 = (u32)((s32)v0 >> 31);
    v1 = v1 >> 29;
    v1 = v0 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v0 = v0 - v1;
    a0 = a0 - s1;
    ST32(s5+2048, v0);
    ST32(s6+2052, a0);
    goto L_088D5C14;
L_088D5CBC:;
    a1 = s0 + 0;
    a2 = 1;
    func_088D6D5C(a0, a1, a2);
    goto L_088D5CC8;
L_088D5CC8:;
    v0 = (u32)-1;
    goto L_088D5C18;
L_088D5CD0:;
    v1 = D_08B307EC - (2028);
    s0 = LD32(v1+2028);
    goto L_088D5BE0;
L_088D5CDC:;
    v0 = 0 + 0;
    cnd_ = v0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088D5C18; }
    goto L_088D5CE8;
L_088D5CE8:;
    goto L_088D5C0C;
L_088D5CF0:;
    a0 = 0 + 0;
    func_088D7B70(a0);
    goto L_088D5CF8;
L_088D5CF8:;
    ST8(fp+2060, 0);
    goto L_088D5C30;
}

/* 088D5D00 */
rv_t func_088D5D00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D5D00:;
    sp = sp - 16;
    v0 = 115;
    v1 = LD_U16(a0+16);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 116;
    if (cnd_) { goto L_088D5D80; }
    goto L_088D5D18;
L_088D5D18:;
    cnd_ = v0 == 0;
    v0 = 116;
    if (cnd_) { goto L_088D5D68; }
    goto L_088D5D20;
L_088D5D20:;
    v0 = 114;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a0+24); goto L_088D5D38; }
    goto L_088D5D2C;
L_088D5D2C:;
    goto L_088D5D30;
L_088D5D30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D5D38:;
    v0 = LD_U8(v1+4);
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    a1 = 0 < v0;
    if (cnd_) { goto L_088D5D58; }
    goto L_088D5D48;
L_088D5D48:;
    a0 = a1 + 0;
    { rv_t r_ = func_088D6498(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5D50;
L_088D5D50:;
    goto L_088D5D30;
L_088D5D58:;
    { u64 r_ = func_088D61A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5D60;
L_088D5D60:;
    goto L_088D5D30;
L_088D5D68:;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_088D5D30; }
    goto L_088D5D70;
L_088D5D70:;
    { u64 r_ = func_088D6454(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5D78;
L_088D5D78:;
    goto L_088D5D30;
L_088D5D80:;
    v0 = LD32(a0+24);
    a0 = LD_U8(v0);
    { rv_t r_ = func_088D66EC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5D8C;
L_088D5D8C:;
    goto L_088D5D30;
}

/* 088D5D94 */
void func_088D5D94(void)
{
L_088D5D94:;
    return;
}

/* 088D5D9C */
void func_088D5D9C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088D5D9C:;
    sp = sp - 64;
    v0 = D_08B30808 - (2056);
    v1 = LD32(v0+2056);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088D5E10; }
    goto L_088D5DDC;
L_088D5DDC:;
    goto L_088D5DE0;
L_088D5DE0:;
    sp = sp + 64;
    return;
L_088D5E10:;
    s2 = D_08B307F0 - (2032);
    v0 = func_088D7EA4();
    goto L_088D5E18;
L_088D5E18:;
    a0 = LD32(s2+2032);
    v1 = 0 < v0;
    s0 = v0 + 0;
    v0 = 0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = D_08B307D8 - (2008);
    if (cnd_) { goto L_088D5E64; }
    goto L_088D5E34;
L_088D5E34:;
    cnd_ = a0 == s0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088D5E60; }
    goto L_088D5E3C;
L_088D5E3C:;
    v1 = D_08B307EC - (2028);
    ST32(v1+2028, v0);
    a0 = 0 + 0;
    v1 = D_08B307E4 - (2020);
    ST32(s2+2032, 0);
    ST32(v1+2020, v0);
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5E58;
L_088D5E58:;
    goto L_088D5DE0;
L_088D5E60:;
    v0 = D_08B307D8 - (2008);
    goto L_088D5E64;
L_088D5E64:;
    s1 = v0 + 2008;
    s3 = D_08B307E4 - (2020);
    a0 = 0 + 0;
    a1 = s1 + 0;
    func_088D5D94();
    goto L_088D5E78;
L_088D5E78:;
    v0 = LD32(s3+2020);
    s4 = 0 + 0;
    cnd_ = (s32)v0 < 0;
    s5 = s3 + 2020;
    if (cnd_) { goto L_088D5E98; }
    goto L_088D5E88;
L_088D5E88:;
    a0 = s1 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5E94;
L_088D5E94:;
    s4 = v0 + 0;
    goto L_088D5E98;
L_088D5E98:;
    v0 = D_08B30804 - (2052);
    v1 = LD32(v0+2052);
    cnd_ = v1 == 0;
    v1 = s0 < 0x1u;
    if (cnd_) { goto L_088D6104; }
    goto L_088D5EA8;
L_088D5EA8:;
    v0 = s4 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D5F30; }
    goto L_088D5EB8;
L_088D5EB8:;
    { rv_t r_ = func_088D6A3C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5EC0;
L_088D5EC0:;
    cnd_ = s4 == 0;
    v0 = D_08B307EC - (2028);
    if (cnd_) { goto L_088D5F24; }
    goto L_088D5EC8;
L_088D5EC8:;
    a0 = LD32(v0+2028);
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D5ED0;
L_088D5ED0:;
    cnd_ = v0 == 0;
    v0 = D_08B307F4 - (2036);
    if (cnd_) { goto L_088D5F28; }
    goto L_088D5ED8;
L_088D5ED8:;
    s0 = D_08B307F4 - (2036);
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(s4+16));
    f0 = BITSF(LD32(s0+2036));
    f1 = BITSF(LD32(v0-31328));
    f20 = BITSF(0);
    f0 = f0 + f1;
    fcc = FCMP(f2, f20, 2);
    cnd_ = fcc;
    ST32(s0+2036, FBITS(f0));
    if (cnd_) { goto L_088D5DDC; }
    goto L_088D5F04;
L_088D5F04:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088D5DE0; }
    goto L_088D5F14;
L_088D5F14:;
    a0 = 0 + 0;
    { rv_t r_ = func_088D6498(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5F1C;
L_088D5F1C:;
    ST32(s0+2036, FBITS(f20));
    goto L_088D5DDC;
L_088D5F24:;
    v0 = D_08B307F4 - (2036);
    goto L_088D5F28;
L_088D5F28:;
    ST32(v0+2036, 0);
    goto L_088D5DDC;
L_088D5F30:;
    v0 = func_088D7F68();
    goto L_088D5F38;
L_088D5F38:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D5EC0; }
    goto L_088D5F40;
L_088D5F40:;
    s1 = D_08B307F8 - (2040);
    f0 = func_088D7ED8();
    goto L_088D5F48;
L_088D5F48:;
    f20 = f0;
    f1 = BITSF(LD32(s1+2040));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    s0 = D_08B307FC - (2044);
    if (cnd_) { goto L_088D5FAC; }
    goto L_088D5F64;
L_088D5F64:;
    f1 = BITSF(LD32(s1+2040));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+2044, FBITS(f20)); goto L_088D5EC0; }
    goto L_088D5F7C;
L_088D5F7C:;
    fcc = FCMP(f1, f20, 14);
    cnd_ = fcc;
    f0 = BITSF(LD32(s0+2044));
    if (cnd_) { goto L_088D5F9C; }
    goto L_088D5F8C;
L_088D5F8C:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s0+2044, FBITS(f20)); goto L_088D5EC0; }
    goto L_088D5F9C;
L_088D5F9C:;
    { rv_t r_ = func_088D6A3C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D5FA4;
L_088D5FA4:;
    ST32(s0+2044, FBITS(f20));
    goto L_088D5EC0;
L_088D5FAC:;
    v0 = (u32)-1;
    ST32(sp, v0);
    v0 = func_088D6E10();
    goto L_088D5FB8;
L_088D5FB8:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_088D5FD0; }
    goto L_088D5FC4;
L_088D5FC4:;
    v0 = LD32(v0);
    a3 = LD32(v1+4);
    ST32(sp, v0);
    goto L_088D5FD0;
L_088D5FD0:;
    v1 = D_08B30800 - (2048);
    a0 = LD32(v1+2048);
    s2 = D_08B307EC - (2028);
    a1 = LD32(s2+2028);
    v0 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 29;
    v0 = a0 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08B30810 - (2064);
    v0 = v0 + 2064;
    v1 = v1 << 2;
    v1 = v1 + v0;
    s0 = LD_U8(v1+8);
    a0 = s3 + 2020;
    a2 = sp + 0;
    t0 = s0 + 0;
    f0 = func_088D7110(a0, a1, a2, a3, t0);
    goto L_088D6020;
L_088D6020:;
    cnd_ = s0 == 0;
    f22 = f0;
    if (cnd_) { goto L_088D60D8; }
    goto L_088D6028;
L_088D6028:;
    f3 = BITSF(0);
    cnd_ = s4 == 0;
    a1 = LD32(s2+2028);
    if (cnd_) { goto L_088D6040; }
    goto L_088D6034;
L_088D6034:;
    a0 = s4 + 0;
    f0 = func_088D7490(a0, a1);
    goto L_088D603C;
L_088D603C:;
    f3 = f0;
    goto L_088D6040;
L_088D6040:;
    f23 = BITSF(0);
    fcc = FCMP(f3, f23, 2);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+2040, FBITS(f20)); goto L_088D6090; }
    goto L_088D6054;
L_088D6054:;
    f0 = f20 / f3;
    v0 = D_08AECB1C - (-13540);
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(v0-13540));
    f2 = (float)(s32)FBITS(f1);
    f21 = f2 * f3;
    f0 = f21 + f0;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = f21 + f3; goto L_088D6080; }
    goto L_088D6080;
L_088D6080:;
    ST32(s1+2040, FBITS(f21));
    v0 = func_088D7FA4();
    goto L_088D6088;
L_088D6088:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D609C; }
    goto L_088D6090;
L_088D6090:;
    s0 = D_08B307FC - (2044);
    goto L_088D6094;
L_088D6094:;
    ST32(s0+2044, FBITS(f20));
    goto L_088D5F64;
L_088D609C:;
    f0 = func_088D7F20();
    goto L_088D60A4;
L_088D60A4:;
    fcc = FCMP(f23, f0, 12);
    cnd_ = !fcc;
    s0 = D_08B307FC - (2044);
    if (cnd_) { goto L_088D6094; }
    goto L_088D60B4;
L_088D60B4:;
    f1 = f0 - f22;
    fcc = FCMP(f21, f1, 14);
    cnd_ = fcc;
    f0 = f21;
    if (cnd_) { goto L_088D60CC; }
    goto L_088D60C8;
L_088D60C8:;
    f0 = f1;
    goto L_088D60CC;
L_088D60CC:;
    v0 = D_08B307F8 - (2040);
    ST32(v0+2040, FBITS(f0));
    goto L_088D6090;
L_088D60D8:;
    f0 = func_088D7F20();
    goto L_088D60E0;
L_088D60E0:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { s0 = D_08B307FC - (2044); goto L_088D6094; }
    goto L_088D60F8;
L_088D60F8:;
    f0 = f1 - f22;
    ST32(s1+2040, FBITS(f0));
    goto L_088D6090;
L_088D6104:;
    cnd_ = s4 == 0;
    v0 = D_08B307F4 - (2036);
    if (cnd_) { goto L_088D5F28; }
    goto L_088D610C;
L_088D610C:;
    v0 = func_088D7F68();
    goto L_088D6114;
L_088D6114:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D5EC0; }
    goto L_088D611C;
L_088D611C:;
    v0 = func_088D7FA4();
    goto L_088D6124;
L_088D6124:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D5EC0; }
    goto L_088D612C;
L_088D612C:;
    cnd_ = s0 != 0;
    s1 = D_08B307EC - (2028);
    if (cnd_) { goto L_088D6148; }
    goto L_088D6134;
L_088D6134:;
    v0 = (u32)-1;
    ST32(s1+2028, v0);
    goto L_088D613C;
L_088D613C:;
    ST32(s2+2032, 0);
    ST32(s3+2020, v0);
    goto L_088D5EC0;
L_088D6148:;
    f0 = func_088D7ED8();
    goto L_088D6150;
L_088D6150:;
    f20 = f0;
    f0 = func_088D7F20();
    goto L_088D6158;
L_088D6158:;
    a1 = LD32(s1+2028);
    a0 = s5 + 0;
    f20 = f0 - f20;
    v0 = func_088D6F88(a0, a1);
    goto L_088D6168;
L_088D6168:;
    v0 = v0 << 4;
    v0 = v0 + s4;
    f0 = BITSF(LD32(v0+60));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088D6194; }
    goto L_088D6184;
L_088D6184:;
    cnd_ = s0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088D5EC0; }
    goto L_088D618C;
L_088D618C:;
    ST32(s1+2028, v0);
    goto L_088D613C;
L_088D6194:;
    f12 = f20;
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D619C;
L_088D619C:;
    s0 = 0 + 0;
    goto L_088D6184;
}

/* 088D61A4 */
u64 func_088D61A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D61A4:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a0 + 0;
    a0 = sp + 0;
    { u64 r_ = func_088D75A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D61C0;
L_088D61C0:;
    s0 = s0 & 0xff;
    v0 = LD32(sp);
    a1 = s0 + 0;
    cnd_ = (s32)v0 >= 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088D61E4; }
    goto L_088D61D4;
L_088D61D4:;
    goto L_088D61D8;
L_088D61D8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088D61E4:;
    { u64 r_ = func_088D61F4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D61EC;
L_088D61EC:;
    goto L_088D61D8;
}

/* 088D61F4 */
u64 func_088D61F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D61F4:;
    sp = sp - 32;
    v0 = D_08B307E8 - (2024);
    s1 = a0 + 0;
    v1 = LD32(a0);
    ST32(v0+2024, v1);
    v0 = D_08B307E4 - (2020);
    v1 = LD32(v0+2020);
    a2 = LD32(a0);
    cnd_ = a2 == v1;
    s0 = a1 & 0xff;
    if (cnd_) { goto L_088D62F8; }
    goto L_088D623C;
L_088D623C:;
    v0 = D_08B30804 - (2052);
    goto L_088D6240;
L_088D6240:;
    t0 = LD32(v0+2052);
    cnd_ = (s32)t0 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D62A0; }
    goto L_088D624C;
L_088D624C:;
    s3 = D_08B30800 - (2048);
    a3 = LD32(s3+2048);
    a2 = LD32(s1);
    v0 = D_08B30810 - (2064);
    t1 = v0 + 2064;
    a0 = a3 + a1;
    goto L_088D6264;
L_088D6264:;
    v1 = (u32)((s32)a0 >> 31);
    v1 = v1 >> 29;
    v1 = a0 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v1;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + t1;
    v1 = LD32(v0);
    cnd_ = v1 == a2;
    a1 = a1 + 1;
    if (cnd_) { goto L_088D62D0; }
    goto L_088D6294;
L_088D6294:;
    v0 = (s32)a1 < (s32)t0;
    cnd_ = v0 != 0;
    a0 = a3 + a1;
    if (cnd_) { goto L_088D6264; }
    goto L_088D62A0;
L_088D62A0:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D6498(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D62A8;
L_088D62A8:;
    a2 = 0 + 0;
    a1 = 0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_088D6CE8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D62B8;
L_088D62B8:;
    a0 = s1 + 0;
    v0 = func_088D7060(a0);
    goto L_088D62C0;
L_088D62C0:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088D6CE8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D62D0;
L_088D62D0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088D62F8:;
    s6 = D_08B307EC - (2028);
    a0 = LD32(s6+2028);
    v0 = func_088D6F24(a0);
    goto L_088D6304;
L_088D6304:;
    cnd_ = v0 != 0;
    v0 = D_08B30804 - (2052);
    if (cnd_) { goto L_088D6240; }
    goto L_088D630C;
L_088D630C:;
    s4 = D_08B30804 - (2052);
    v0 = LD32(s4+2052);
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088D6384; }
    goto L_088D631C;
L_088D631C:;
    v0 = D_08B30810 - (2064);
    s5 = v0 + 2064;
    s3 = D_08B30800 - (2048);
    a0 = LD32(s3+2048);
    goto L_088D632C;
L_088D632C:;
    a0 = a0 + s2;
    v0 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 29;
    v0 = a0 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 << 2;
    s0 = v1 + s5;
    a0 = LD32(s0+4);
    v0 = func_088D6F24(a0);
    goto L_088D635C;
L_088D635C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D6444; }
    goto L_088D6364;
L_088D6364:;
    v1 = LD32(s0);
    v0 = LD32(s1);
    cnd_ = v1 != v0;
    v0 = LD32(s4+2052);
    if (cnd_) { goto L_088D6444; }
    goto L_088D6374;
L_088D6374:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s3+2048); goto L_088D632C; }
    goto L_088D6384;
L_088D6384:;
    v1 = LD32(s4+2052);
    goto L_088D6388;
L_088D6388:;
    cnd_ = v1 == 0;
    s0 = LD32(s6+2028);
    if (cnd_) { goto L_088D63D0; }
    goto L_088D6390;
L_088D6390:;
    v0 = D_08B30800 - (2048);
    a0 = LD32(v0+2048);
    v1 = v1 - 1;
    a0 = a0 + v1;
    v0 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 29;
    v0 = a0 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08B30810 - (2064);
    v1 = v1 << 2;
    v0 = v0 + 2064;
    v1 = v1 + v0;
    s0 = LD32(v1+4);
    goto L_088D63D0;
L_088D63D0:;
    a0 = s0 + 0;
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D63D8;
L_088D63D8:;
    cnd_ = v0 != 0;
    v0 = D_08B307F4 - (2036);
    if (cnd_) { goto L_088D641C; }
    goto L_088D63E0;
L_088D63E0:;
    v0 = s0 < 0xdu;
    cnd_ = v0 == 0;
    v1 = D_08AD87FC - (-30724);
    if (cnd_) { goto L_088D642C; }
    goto L_088D63EC;
L_088D63EC:;
    v0 = s0 << 2;
    v1 = v1 - 30724;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088D6404u: goto L_088D6404; case 0x088D6424u: goto L_088D6424; case 0x088D642Cu: goto L_088D642C; case 0x088D643Cu: goto L_088D643C; default: rs_break(0, 0x088d63fc); }
L_088D6404:;
    v0 = 4;
    goto L_088D6408;
L_088D6408:;
    a0 = s1 + 0;
    goto L_088D640C;
L_088D640C:;
    a1 = v0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088D6CE8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6418;
L_088D6418:;
    v0 = D_08B307F4 - (2036);
    goto L_088D641C;
L_088D641C:;
    ST32(v0+2036, 0);
    goto L_088D62D0;
L_088D6424:;
    v0 = 10;
    goto L_088D6408;
L_088D642C:;
    a0 = s1 + 0;
    v0 = func_088D7060(a0);
    goto L_088D6434;
L_088D6434:;
    a0 = s1 + 0;
    goto L_088D640C;
L_088D643C:;
    v0 = 7;
    goto L_088D6408;
L_088D6444:;
    a0 = s2 + 0;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D644C;
L_088D644C:;
    v1 = LD32(s4+2052);
    goto L_088D6388;
}

/* 088D6454 */
u64 func_088D6454(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D6454:;
    sp = sp - 16;
    v0 = D_08B307E4 - (2020);
    a1 = D_08B307E8 - (2024);
    v1 = LD32(v0+2020);
    cnd_ = (s32)v1 >= 0;
    a0 = a1 + 2024;
    if (cnd_) { goto L_088D647C; }
    goto L_088D6470;
L_088D6470:;
    v0 = LD32(a1+2024);
    cnd_ = (s32)v0 >= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D6488; }
    goto L_088D647C;
L_088D647C:;
    goto L_088D6480;
L_088D6480:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D6488:;
    { u64 r_ = func_088D61F4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6490;
L_088D6490:;
    goto L_088D6480;
}

/* 088D6498 */
rv_t func_088D6498(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088D6498:;
    sp = sp - 64;
    s5 = D_08B307E4 - (2020);
    v0 = LD32(s5+2020);
    s6 = a0 & 0xff;
    a0 = 0 + 0;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_088D66A4; }
    goto L_088D64D8;
L_088D64D8:;
    cnd_ = s6 != 0;
    v1 = D_08B30804 - (2052);
    if (cnd_) { goto L_088D65F0; }
    goto L_088D64E0;
L_088D64E0:;
    v0 = LD32(v1+2052);
    cnd_ = (s32)v0 < 0;
    s1 = (u32)-1;
    if (cnd_) { goto L_088D65F0; }
    goto L_088D64EC;
L_088D64EC:;
    v0 = D_08B30810 - (2064);
    fp = v0 + 2064;
    s4 = (u32)-1;
    s7 = D_08B30800 - (2048);
    goto L_088D64FC;
L_088D64FC:;
    cnd_ = s1 == s4;
    s2 = s5 + 2020;
    if (cnd_) { goto L_088D6530; }
    goto L_088D6504;
L_088D6504:;
    v0 = LD32(s7+2048);
    v0 = v0 + s1;
    v1 = (u32)((s32)v0 >> 31);
    v1 = v1 >> 29;
    v1 = v0 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v0 = v0 - v1;
    a0 = v0 << 1;
    a0 = a0 + v0;
    a0 = a0 << 2;
    s2 = a0 + fp;
    goto L_088D6530;
L_088D6530:;
    cnd_ = s1 == s4;
    a0 = LD32(s7+2048);
    if (cnd_) { goto L_088D66E0; }
    goto L_088D6538;
L_088D6538:;
    a0 = a0 + s1;
    v1 = (u32)((s32)a0 >> 31);
    v1 = v1 >> 29;
    v1 = a0 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v1;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + fp;
    s0 = LD32(v0+4);
    goto L_088D6564;
L_088D6564:;
    a0 = s0 + 0;
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D656C;
L_088D656C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D66B4; }
    goto L_088D6574;
L_088D6574:;
    a0 = s0 + 0;
    v0 = func_088D6F30(a0);
    goto L_088D657C;
L_088D657C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D658C; }
    goto L_088D6584;
L_088D6584:;
    cnd_ = s0 != 0;
    a0 = s1 + 1;
    if (cnd_) { goto L_088D66A4; }
    goto L_088D658C;
L_088D658C:;
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088D6688; }
    goto L_088D6594;
L_088D6594:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    v0 = func_088D6F88(a0, a1);
    goto L_088D65A0;
L_088D65A0:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_088D7330(a0, a1);
    goto L_088D65B0;
L_088D65B0:;
    cnd_ = v0 == 0;
    ST32(sp, s4);
    if (cnd_) { goto L_088D65C0; }
    goto L_088D65B8;
L_088D65B8:;
    v0 = LD32(s2);
    ST32(sp, v0);
    goto L_088D65C0;
L_088D65C0:;
    cnd_ = (s32)s1 >= 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088D6664; }
    goto L_088D65C8;
L_088D65C8:;
    a1 = s0 + 0;
    a2 = s3 + 0;
    v0 = func_088D726C(a0, a1, a2);
    goto L_088D65D4;
L_088D65D4:;
    cnd_ = v0 != 0;
    v1 = D_08B30804 - (2052);
    if (cnd_) { goto L_088D6664; }
    goto L_088D65DC;
L_088D65DC:;
    v0 = LD32(v1+2052);
    s1 = s1 + 1;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D64FC; }
    goto L_088D65F0;
L_088D65F0:;
    a0 = 0 + 0;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D65F8;
L_088D65F8:;
    cnd_ = s6 == 0;
    if (cnd_) { goto L_088D6654; }
    goto L_088D6600;
L_088D6600:;
    f12 = BITSF(0);
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D660C;
L_088D660C:;
    v0 = (u32)-1;
    v1 = D_08B307EC - (2028);
    ST32(v1+2028, v0);
    v1 = D_08B307F0 - (2032);
    ST32(s5+2020, v0);
    ST32(v1+2032, 0);
    goto L_088D6628;
L_088D6628:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088D6654:;
    { rv_t r_ = func_088D6A3C(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D665C;
L_088D665C:;
    goto L_088D6628;
L_088D6664:;
    a0 = s1 + 1;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D666C;
L_088D666C:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = s3 + 0;
    goto L_088D6678;
L_088D6678:;
    { u64 r_ = func_088D6CE8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6680;
L_088D6680:;
    goto L_088D6628;
L_088D6688:;
    a0 = s2 + 0;
    v0 = func_088D7060(a0);
    goto L_088D6690;
L_088D6690:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    v0 = func_088D7330(a0, a1);
    goto L_088D669C;
L_088D669C:;
    s3 = v0 < 0x1u;
    goto L_088D6594;
L_088D66A4:;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D66AC;
L_088D66AC:;
    goto L_088D6628;
L_088D66B4:;
    a0 = s2 + 0;
    v0 = func_088D7598();
    goto L_088D66BC;
L_088D66BC:;
    a0 = s1 + 1;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D66C4;
L_088D66C4:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_088D6F88(a0, a1);
    goto L_088D66D0;
L_088D66D0:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a2 = 1;
    goto L_088D6678;
L_088D66E0:;
    v0 = D_08B307EC - (2028);
    s0 = LD32(v0+2028);
    goto L_088D6564;
}

/* 088D66EC */
rv_t func_088D66EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088D66EC:;
    sp = sp - 64;
    v1 = a0 ^ 0x7;
    s2 = a0 ^ 0x4;
    v1 = 0 < v1;
    v0 = 0 < s2;
    v0 = v0 & v1;
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D6760; }
    goto L_088D672C;
L_088D672C:;
    v0 = 10;
    cnd_ = a0 == v0;
    s4 = D_08B30804 - (2052);
    if (cnd_) { goto L_088D6764; }
    goto L_088D6738;
L_088D6738:;
    goto L_088D673C;
L_088D673C:;
    goto L_088D6740;
L_088D6740:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088D6760:;
    s4 = D_08B30804 - (2052);
    goto L_088D6764;
L_088D6764:;
    v1 = LD32(s4+2052);
    s3 = (u32)-1;
    v0 = D_08B307F4 - (2036);
    ST32(v0+2036, 0);
    cnd_ = v1 == 0;
    ST32(sp, s3);
    if (cnd_) { goto L_088D6A24; }
    goto L_088D677C;
L_088D677C:;
    v0 = D_08B30800 - (2048);
    a0 = LD32(v0+2048);
    v1 = v1 - 1;
    a0 = a0 + v1;
    v0 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 29;
    v0 = a0 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08B30810 - (2064);
    v0 = v0 + 2064;
    v1 = v1 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    s0 = LD32(v1+4);
    ST32(sp, v0);
    goto L_088D67C4;
L_088D67C4:;
    a0 = s0 + 0;
    v0 = func_088D6F24(a0);
    goto L_088D67CC;
L_088D67CC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D673C; }
    goto L_088D67D4;
L_088D67D4:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_088D6740; }
    goto L_088D67E0;
L_088D67E0:;
    a0 = sp + 0;
    v0 = func_088D7598();
    goto L_088D67E8;
L_088D67E8:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088D6800; }
    goto L_088D67F0;
L_088D67F0:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D67FC;
L_088D67FC:;
    s0 = v0 + 0;
    goto L_088D6800;
L_088D6800:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D6738; }
    goto L_088D6808;
L_088D6808:;
    a1 = s1 + 0;
    v0 = func_088D73F0(a0, a1);
    goto L_088D6810;
L_088D6810:;
    cnd_ = v0 == 0;
    s5 = (u32)-1;
    if (cnd_) { goto L_088D69F4; }
    goto L_088D6818;
L_088D6818:;
    s5 = s1 + 0;
    goto L_088D681C;
L_088D681C:;
    v0 = (u32)-1;
    goto L_088D6820;
L_088D6820:;
    cnd_ = s5 == v0;
    v0 = LD32(s4+2052);
    if (cnd_) { goto L_088D6738; }
    goto L_088D6828;
L_088D6828:;
    cnd_ = (s32)v0 < 0;
    s0 = (u32)-1;
    if (cnd_) { goto L_088D6738; }
    goto L_088D6830;
L_088D6830:;
    s2 = sp + 16;
    v1 = D_08B307E4 - (2020);
    goto L_088D6838;
L_088D6838:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    v1 = v1 + 2020;
    if (cnd_) { goto L_088D687C; }
    goto L_088D6844;
L_088D6844:;
    v0 = D_08B30800 - (2048);
    v1 = LD32(v0+2048);
    v1 = v1 + s0;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 29;
    v0 = v1 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v1 = v1 - v0;
    a0 = v1 << 1;
    a0 = a0 + v1;
    v0 = D_08B30810 - (2064);
    a0 = a0 << 2;
    v0 = v0 + 2064;
    v1 = a0 + v0;
    goto L_088D687C;
L_088D687C:;
    v0 = LD32(v1);
    v1 = (u32)-1;
    cnd_ = s0 == v1;
    ST32(s2, v0);
    if (cnd_) { goto L_088D69E8; }
    goto L_088D688C;
L_088D688C:;
    v0 = D_08B30800 - (2048);
    a0 = LD32(v0+2048);
    a0 = a0 + s0;
    v0 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 29;
    v0 = a0 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08B30810 - (2064);
    v1 = v1 << 2;
    v0 = v0 + 2064;
    v1 = v1 + v0;
    s1 = LD32(v1+4);
    goto L_088D68C8;
L_088D68C8:;
    v1 = LD32(sp+16);
    v0 = LD32(sp);
    cnd_ = v1 != v0;
    v0 = LD32(s4+2052);
    if (cnd_) { goto L_088D6918; }
    goto L_088D68D8;
L_088D68D8:;
    v0 = s1 < 0xdu;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088D6910; }
    goto L_088D68E4;
L_088D68E4:;
    v1 = D_08AD8830 - (-30672);
    v0 = s1 << 2;
    v1 = v1 - 30672;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088D6900u: goto L_088D6900; case 0x088D690Cu: goto L_088D690C; case 0x088D69D0u: goto L_088D69D0; case 0x088D69D8u: goto L_088D69D8; case 0x088D69E0u: goto L_088D69E0; default: rs_break(0, 0x088d68f8); }
L_088D6900:;
    a0 = s2 + 0;
    v0 = func_088D7060(a0);
    goto L_088D6908;
L_088D6908:;
    s3 = v0 + 0;
    goto L_088D690C;
L_088D690C:;
    v0 = (u32)-1;
    goto L_088D6910;
L_088D6910:;
    cnd_ = s3 != v0;
    v0 = LD32(s4+2052);
    if (cnd_) { goto L_088D6930; }
    goto L_088D6918;
L_088D6918:;
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = D_08B307E4 - (2020);
    if (cnd_) { goto L_088D6838; }
    goto L_088D6928;
L_088D6928:;
    goto L_088D673C;
L_088D6930:;
    cnd_ = s1 == s5;
    if (cnd_) { goto L_088D69C0; }
    goto L_088D6938;
L_088D6938:;
    cnd_ = s3 == s5;
    s6 = (u32)-1;
    if (cnd_) { goto L_088D6950; }
    goto L_088D6940;
L_088D6940:;
    a0 = s3 + 0;
    a1 = s5 + 0;
    v0 = func_088D6FEC(a0, a1);
    goto L_088D694C;
L_088D694C:;
    s6 = v0 + 0;
    goto L_088D6950;
L_088D6950:;
    a0 = s2 + 0;
    v0 = func_088D7598();
    goto L_088D6958;
L_088D6958:;
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088D6970; }
    goto L_088D6960;
L_088D6960:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D696C;
L_088D696C:;
    s4 = v0 + 0;
    goto L_088D6970;
L_088D6970:;
    a0 = s1 + 0;
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6978;
L_088D6978:;
    a1 = 0 < s4;
    v1 = 0 + 0;
    a0 = s0 + 1;
    if (v0 != 0) v1 = a1;
    s0 = v1 + 0;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D6990;
L_088D6990:;
    cnd_ = s3 == s5;
    a2 = s0 + 0;
    if (cnd_) { goto L_088D69A8; }
    goto L_088D6998;
L_088D6998:;
    a1 = s6 + 0;
    a0 = sp + 0;
    { u64 r_ = func_088D6CE8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D69A4;
L_088D69A4:;
    s0 = 0 + 0;
    goto L_088D69A8;
L_088D69A8:;
    a1 = s5 + 0;
    a2 = s0 + 0;
    a0 = sp + 0;
    { u64 r_ = func_088D6CE8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D69B8;
L_088D69B8:;
    goto L_088D673C;
L_088D69C0:;
    a0 = s0 + 1;
    { rv_t r_ = func_088D6DE4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D69C8;
L_088D69C8:;
    goto L_088D673C;
L_088D69D0:;
    s3 = 10;
    goto L_088D690C;
L_088D69D8:;
    s3 = 4;
    goto L_088D690C;
L_088D69E0:;
    s3 = 7;
    goto L_088D690C;
L_088D69E8:;
    v0 = D_08B307EC - (2028);
    s1 = LD32(v0+2028);
    goto L_088D68C8;
L_088D69F4:;
    v0 = s1 ^ 0xa;
    v0 = v0 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088D6820; }
    goto L_088D6A0C;
L_088D6A0C:;
    a0 = s0 + 0;
    a1 = 7;
    v0 = func_088D73F0(a0, a1);
    goto L_088D6A18;
L_088D6A18:;
    v1 = 7;
    if (v0 != 0) s5 = v1;
    goto L_088D681C;
L_088D6A24:;
    v0 = D_08B307E4 - (2020);
    a0 = LD32(v0+2020);
    v1 = D_08B307EC - (2028);
    s0 = LD32(v1+2028);
    ST32(sp, a0);
    goto L_088D67C4;
}

/* 088D6A3C */
rv_t func_088D6A3C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088D6A3C:;
    sp = sp - 96;
    s4 = D_08B30804 - (2052);
    v0 = LD32(s4+2052);
    s5 = 1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D6B3C; }
    goto L_088D6A78;
L_088D6A78:;
    s2 = D_08B30800 - (2048);
    a0 = LD32(s2+2048);
    s6 = D_08B30810 - (2064);
    a1 = s6 + 2064;
    v1 = (u32)((s32)a0 >> 31);
    v1 = v1 >> 29;
    v1 = a0 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v1;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    s5 = LD_U8(v0+8);
    a0 = LD32(s2+2048);
    goto L_088D6AB4;
L_088D6AB4:;
    a2 = LD32(s4+2052);
    a3 = s6 + 2064;
    a1 = a0 + 1;
    v1 = a0 << 1;
    v0 = (u32)((s32)a1 >> 31);
    v1 = v1 + a0;
    v0 = v0 >> 29;
    v1 = v1 << 2;
    v0 = a1 + v0;
    s0 = v1 + a3;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a1 = a1 - v0;
    a2 = a2 - 1;
    a0 = s0 + 0;
    ST32(s2+2048, a1);
    s1 = 0 + 0;
    s3 = 0 + 0;
    ST32(s4+2052, a2);
    v0 = func_088D7598();
    goto L_088D6B00;
L_088D6B00:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088D6B18; }
    goto L_088D6B0C;
L_088D6B0C:;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6B14;
L_088D6B14:;
    s1 = v0 + 0;
    goto L_088D6B18;
L_088D6B18:;
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088D6B2C; }
    goto L_088D6B20;
L_088D6B20:;
    a1 = LD32(s0+4);
    v0 = func_088D7404(a0, a1);
    goto L_088D6B28;
L_088D6B28:;
    s3 = v0 + 0;
    goto L_088D6B2C;
L_088D6B2C:;
    cnd_ = s3 != 0;
    v0 = LD32(s4+2052);
    if (cnd_) { goto L_088D6BC4; }
    goto L_088D6B34;
L_088D6B34:;
    cnd_ = v0 != 0;
    a0 = LD32(s2+2048);
    if (cnd_) { goto L_088D6AB4; }
    goto L_088D6B3C;
L_088D6B3C:;
    s1 = D_08B307EC - (2028);
    a1 = LD32(s1+2028);
    s2 = D_08B307E4 - (2020);
    s0 = (u32)-1;
    a0 = s2 + 2020;
    a2 = sp + 16;
    t0 = s5 + 0;
    a3 = (u32)-1;
    ST32(sp+16, s0);
    f0 = func_088D7110(a0, a1, a2, a3, t0);
    goto L_088D6B64;
L_088D6B64:;
    f12 = f0;
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D6B6C;
L_088D6B6C:;
    v0 = D_08AECB20 - (-13536);
    f0 = BITSF(LD32(v0-13536));
    v1 = D_08B307F8 - (2040);
    v0 = D_08B307F0 - (2032);
    ST32(v1+2040, FBITS(f0));
    v1 = D_08B307F4 - (2036);
    ST32(s1+2028, s0);
    ST32(s2+2020, s0);
    ST32(v0+2032, 0);
    ST32(v1+2036, 0);
    goto L_088D6B98;
L_088D6B98:;
    goto L_088D6B9C;
L_088D6B9C:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088D6BC4:;
    s6 = D_08B307EC - (2028);
    a1 = LD32(s6+2028);
    a3 = LD32(s0+4);
    s2 = D_08B307E4 - (2020);
    t0 = s5 + 0;
    a0 = s2 + 2020;
    a2 = s0 + 0;
    f0 = func_088D7110(a0, a1, a2, a3, t0);
    goto L_088D6BE4;
L_088D6BE4:;
    f21 = f0;
    v0 = func_088D7EA4();
    goto L_088D6BEC;
L_088D6BEC:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = sp + 32; goto L_088D6C94; }
    goto L_088D6BF4;
L_088D6BF4:;
    v0 = D_08AECB20 - (-13536);
    goto L_088D6BF8;
L_088D6BF8:;
    a2 = LD32(s0+4);
    a1 = LD32(s0);
    f0 = BITSF(LD32(v0-13536));
    a0 = LD32(s3);
    v1 = D_08B307F8 - (2040);
    ST32(v1+2040, FBITS(f0));
    s5 = s2 + 2020;
    ST32(s6+2028, a2);
    ST32(s2+2020, a1);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6C20;
L_088D6C20:;
    v1 = D_08B307F0 - (2032);
    f0 = BITSF(LD32(s3+12));
    f20 = BITSF(LD32(s1+44));
    a1 = LD32(s6+2028);
    a0 = s5 + 0;
    f20 = f20 * f0;
    ST32(v1+2032, v0);
    v0 = func_088D70AC(a0, a1);
    goto L_088D6C40;
L_088D6C40:;
    a1 = v0 + 0;
    a0 = LD32(s3);
    f13 = f21;
    f12 = f20;
    s0 = v0 + 0;
    func_088D7CA4(a0, a1, f12, f13);
    goto L_088D6C58;
L_088D6C58:;
    a0 = LD32(s6+2028);
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6C60;
L_088D6C60:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D6B98; }
    goto L_088D6C68;
L_088D6C68:;
    cnd_ = s0 != 0;
    if (cnd_) {  goto L_088D6B9C; }
    goto L_088D6C70;
L_088D6C70:;
    v0 = LD32(s4+2052);
    cnd_ = v0 != 0;
    if (cnd_) {  goto L_088D6B9C; }
    goto L_088D6C7C;
L_088D6C7C:;
    a1 = LD32(s6+2028);
    a0 = s5 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088D6CE8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6C8C;
L_088D6C8C:;
    goto L_088D6B98;
L_088D6C94:;
    a1 = sp + 0;
    func_088D7E78(a0, a1);
    goto L_088D6C9C;
L_088D6C9C:;
    v0 = LD_U8(sp);
    cnd_ = v0 != 0;
    v0 = D_08AECB20 - (-13536);
    if (cnd_) { goto L_088D6BF8; }
    goto L_088D6CA8;
L_088D6CA8:;
    f0 = func_088D7F20();
    goto L_088D6CB0;
L_088D6CB0:;
    f20 = f0;
    f0 = func_088D7ED8();
    goto L_088D6CB8;
L_088D6CB8:;
    f20 = f20 - f0;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = f20; goto L_088D6CCC; }
    goto L_088D6CCC;
L_088D6CCC:;
    f0 = BITSF(0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = f0; goto L_088D6BF4; }
    goto L_088D6CE0;
L_088D6CE0:;
    v0 = D_08AECB20 - (-13536);
    goto L_088D6BF8;
}

/* 088D6CE8 */
u64 func_088D6CE8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_088D6CE8:;
    t2 = D_08B30804 - (2052);
    v1 = LD32(t2+2052);
    a3 = a0 + 0;
    t0 = a1 + 0;
    v0 = (s32)v1 < 8;
    t1 = v1 + 1;
    cnd_ = v0 == 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_088D6D54; }
    goto L_088D6D08;
L_088D6D08:;
    v0 = D_08B30800 - (2048);
    a0 = LD32(v0+2048);
    a1 = LD32(a3);
    ST32(t2+2052, t1);
    a0 = a0 + v1;
    v0 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 29;
    v0 = a0 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v0 = D_08B30810 - (2064);
    v1 = v1 << 2;
    v0 = v0 + 2064;
    v1 = v1 + v0;
    ST8(v1+8, a2);
    ST32(v1, a1);
    ST32(v1+4, t0);
    goto L_088D6D54;
L_088D6D54:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D6D5C */
void func_088D6D5C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_088D6D5C:;
    t2 = D_08B30804 - (2052);
    v0 = LD32(t2+2052);
    t3 = D_08B30800 - (2048);
    t0 = a1 + 0;
    t1 = v0 + 1;
    v0 = (s32)v0 < 8;
    cnd_ = v0 == 0;
    a3 = a2 & 0xff;
    if (cnd_) { goto L_088D6DDC; }
    goto L_088D6D7C;
L_088D6D7C:;
    a1 = LD32(t3+2048);
    a2 = LD32(a0);
    ST32(t2+2052, t1);
    a1 = a1 + 7;
    v0 = (u32)((s32)a1 >> 31);
    v0 = v0 >> 29;
    v0 = a1 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a1 = a1 - v0;
    v1 = (u32)((s32)a1 >> 31);
    v1 = v1 >> 29;
    v1 = a1 + v1;
    v1 = (v1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v1 = a1 - v1;
    a0 = v1 << 1;
    a0 = a0 + v1;
    v0 = D_08B30810 - (2064);
    a0 = a0 << 2;
    v0 = v0 + 2064;
    a0 = a0 + v0;
    ST32(t3+2048, a1);
    ST8(a0+8, a3);
    ST32(a0, a2);
    ST32(a0+4, t0);
    goto L_088D6DDC;
L_088D6DDC:;
    return;
}

/* 088D6DE4 */
rv_t func_088D6DE4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088D6DE4:;
    v1 = D_08B30804 - (2052);
    v0 = LD32(v1+2052);
    a0 = (s32)a0 < (s32)v0 ? a0 : v0;
    cnd_ = a0 != 0;
    ST32(v1+2052, a0);
    if (cnd_) { goto L_088D6E08; }
    goto L_088D6DF8;
L_088D6DF8:;
    v0 = D_08AECB24 - (-13532);
    f0 = BITSF(LD32(v0-13532));
    v1 = D_08B307F8 - (2040);
    ST32(v1+2040, FBITS(f0));
    goto L_088D6E08;
L_088D6E08:;
    return (rv_t){ v0, v1, f0 };
}

/* 088D6E10 */
u32 func_088D6E10(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D6E10:;
    sp = sp - 32;
    s4 = D_08B30804 - (2052);
    v0 = LD32(s4+2052);
    s1 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_088D6EC4; }
    goto L_088D6E3C;
L_088D6E3C:;
    v0 = D_08B30810 - (2064);
    s3 = v0 + 2064;
    s2 = D_08B30800 - (2048);
    a0 = LD32(s2+2048);
    goto L_088D6E4C;
L_088D6E4C:;
    a0 = a0 + s1;
    v0 = (u32)((s32)a0 >> 31);
    v0 = v0 >> 29;
    v0 = a0 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = a0 - v0;
    v1 = a0 << 1;
    v1 = v1 + a0;
    v1 = v1 << 2;
    s0 = v1 + s3;
    a0 = s0 + 0;
    v0 = func_088D7598();
    goto L_088D6E7C;
L_088D6E7C:;
    s1 = s1 + 1;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D6E9C; }
    goto L_088D6E90;
L_088D6E90:;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D6E98;
L_088D6E98:;
    v1 = v0 + 0;
    goto L_088D6E9C;
L_088D6E9C:;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D6EB4; }
    goto L_088D6EA4;
L_088D6EA4:;
    a1 = LD32(s0+4);
    v0 = func_088D73F0(a0, a1);
    goto L_088D6EAC;
L_088D6EAC:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D6EC8; }
    goto L_088D6EB4;
L_088D6EB4:;
    v0 = LD32(s4+2052);
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = LD32(s2+2048);
    if (cnd_) { goto L_088D6E4C; }
    goto L_088D6EC4;
L_088D6EC4:;
    a0 = 0 + 0;
    goto L_088D6EC8;
L_088D6EC8:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
}

/* 088D6EEC */
u64 func_088D6EEC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_088D6EEC:;
    v1 = a0 ^ 0x4;
    v0 = a0 ^ 0x7;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D6F1C; }
    goto L_088D6F08;
L_088D6F08:;
    v0 = 10;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = 1; goto L_088D6F14; }
    goto L_088D6F14;
L_088D6F14:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_088D6F1C:;
    a1 = 1;
    goto L_088D6F14;
}

/* 088D6F24 */
u32 func_088D6F24(u32 a0)
{
    u32 v0 = 0;
L_088D6F24:;
    v0 = a0 - 1;
    v0 = v0 < 0x3u;
    return v0;
}

/* 088D6F30 */
u32 func_088D6F30(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088D6F30:;
    v1 = a0 - 5;
    v0 = a0 ^ 0x8;
    a1 = a0 ^ 0x9;
    a2 = a0 + 0;
    v1 = v1 < 0x2u;
    a0 = a0 ^ 0xb;
    v0 = v0 < 0x1u;
    a0 = a0 < 0x1u;
    a1 = a1 < 0x1u;
    v1 = v1 | v0;
    a1 = a1 | a0;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D6F80; }
    goto L_088D6F64;
L_088D6F64:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = 1; goto L_088D6F78; }
    goto L_088D6F6C;
L_088D6F6C:;
    v0 = 12;
    cnd_ = a2 == v0;
    if (cnd_) { a0 = 1; goto L_088D6F78; }
    goto L_088D6F78;
L_088D6F78:;
    v0 = a0 + 0;
    return v0;
L_088D6F80:;
    a0 = 1;
    goto L_088D6F78;
}

/* 088D6F88 */
u32 func_088D6F88(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D6F88:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088D6FDC; }
    goto L_088D6F94;
L_088D6F94:;
    v0 = a1 < 0xdu;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_088D6FC0; }
    goto L_088D6FA0;
L_088D6FA0:;
    v1 = D_08AD8864 - (-30620);
    v0 = a1 << 2;
    v1 = v1 - 30620;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088D6FBCu: goto L_088D6FBC; case 0x088D6FCCu: goto L_088D6FCC; case 0x088D6FD4u: goto L_088D6FD4; default: rs_break(0, 0x088d6fb4); }
L_088D6FBC:;
    v0 = 2;
    goto L_088D6FC0;
L_088D6FC0:;
    sp = sp + 16;
    return v0;
L_088D6FCC:;
    v0 = 1;
    goto L_088D6FC0;
L_088D6FD4:;
    v0 = 3;
    goto L_088D6FC0;
L_088D6FDC:;
    v0 = func_088D7060(a0);
    goto L_088D6FE4;
L_088D6FE4:;
    a1 = v0 + 0;
    goto L_088D6F94;
}

/* 088D6FEC */
u32 func_088D6FEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088D6FEC:;
    a2 = 4;
    cnd_ = a0 == a2;
    a3 = 7;
    if (cnd_) { goto L_088D704C; }
    goto L_088D6FF8;
L_088D6FF8:;
    cnd_ = a0 == a3;
    v0 = 10;
    if (cnd_) { goto L_088D702C; }
    goto L_088D7000;
L_088D7000:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088D7014; }
    goto L_088D7008;
L_088D7008:;
    v1 = 5;
    goto L_088D700C;
L_088D700C:;
    v0 = v1 + 0;
    return v0;
L_088D7014:;
    cnd_ = a1 == a3;
    v1 = 12;
    if (cnd_) { goto L_088D700C; }
    goto L_088D701C;
L_088D701C:;
    cnd_ = a1 != a2;
    v1 = 11;
    if (cnd_) { goto L_088D7008; }
    goto L_088D7024;
L_088D7024:;
    goto L_088D700C;
L_088D702C:;
    cnd_ = a1 == a2;
    v1 = 8;
    if (cnd_) { goto L_088D700C; }
    goto L_088D7034;
L_088D7034:;
    v1 = 9;
    goto L_088D7038;
L_088D7038:;
    v0 = 10;
    cnd_ = a1 != v0;
    if (cnd_) { v1 = 5; goto L_088D700C; }
    goto L_088D7044;
L_088D7044:;
    goto L_088D700C;
L_088D704C:;
    v0 = 7;
    cnd_ = a1 == v0;
    v1 = 5;
    if (cnd_) { goto L_088D700C; }
    goto L_088D7058;
L_088D7058:;
    v1 = 6;
    goto L_088D7038;
}

/* 088D7060 */
u32 func_088D7060(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7060:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_088D7598();
    goto L_088D7074;
L_088D7074:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D7090; }
    goto L_088D7084;
L_088D7084:;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D708C;
L_088D708C:;
    v1 = v0 + 0;
    goto L_088D7090;
L_088D7090:;
    cnd_ = v1 == 0;
    v0 = 4;
    if (cnd_) { goto L_088D709C; }
    goto L_088D7098;
L_088D7098:;
    v0 = LD32(v1+264);
    goto L_088D709C;
L_088D709C:;
    sp = sp + 16;
    return v0;
}

/* 088D70AC */
u32 func_088D70AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D70AC:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_088D7598();
    goto L_088D70C8;
L_088D70C8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D70E4; }
    goto L_088D70D8;
L_088D70D8:;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D70E0;
L_088D70E0:;
    v1 = v0 + 0;
    goto L_088D70E4;
L_088D70E4:;
    a0 = v1 + 0;
    a1 = s1 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D70FC; }
    goto L_088D70F4;
L_088D70F4:;
    v0 = func_088D7530(a0, a1);
    goto L_088D70FC;
L_088D70FC:;
    sp = sp + 16;
    return v0;
}

/* 088D7110 */
float func_088D7110(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D7110:;
    sp = sp - 32;
    s5 = t0 & 0xff;
    s4 = a3 + 0;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = (s32)v0 >= 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_088D7244; }
    goto L_088D7150;
L_088D7150:;
    v0 = LD32(s0);
    cnd_ = (s32)v0 >= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D7220; }
    goto L_088D715C;
L_088D715C:;
    v0 = s2 | v1;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D7194; }
    goto L_088D716C;
L_088D716C:;
    cnd_ = s2 == v1;
    if (cnd_) { goto L_088D71CC; }
    goto L_088D7174;
L_088D7174:;
    cnd_ = s2 == 0;
    if (cnd_) { f0 = BITSF(LD32(v1+56)); goto L_088D7194; }
    goto L_088D717C;
L_088D717C:;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_088D71B4; }
    goto L_088D7184;
L_088D7184:;
    cnd_ = s5 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_088D71B4; }
    goto L_088D718C;
L_088D718C:;
    f0 = BITSF(LD32(v1+56));
    goto L_088D7190;
L_088D7190:;
    goto L_088D7194;
L_088D7194:;
    sp = sp + 32;
    return f0;
L_088D71B4:;
    a1 = s3 + 0;
    v0 = func_088D6F88(a0, a1);
    goto L_088D71BC;
L_088D71BC:;
    v0 = v0 << 4;
    goto L_088D71C0;
L_088D71C0:;
    v0 = v0 + s2;
    f0 = BITSF(LD32(v0+60));
    goto L_088D7190;
L_088D71CC:;
    a0 = s3 + 0;
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D71D4;
L_088D71D4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D7210; }
    goto L_088D71DC;
L_088D71DC:;
    a0 = s4 + 0;
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D71E4;
L_088D71E4:;
    cnd_ = v0 == 0;
    v0 = s4 << 4;
    if (cnd_) { goto L_088D7204; }
    goto L_088D71EC;
L_088D71EC:;
    cnd_ = s3 == s4;
    v0 = s3 << 4;
    if (cnd_) { goto L_088D7204; }
    goto L_088D71F4;
L_088D71F4:;
    a0 = s3 + 0;
    a1 = s4 + 0;
    v0 = func_088D6FEC(a0, a1);
    goto L_088D7200;
L_088D7200:;
    v0 = v0 << 4;
    goto L_088D7204;
L_088D7204:;
    v0 = v0 + s2;
    f0 = BITSF(LD32(v0+56));
    goto L_088D7190;
L_088D7210:;
    cnd_ = s5 == 0;
    v0 = s3 << 4;
    if (cnd_) { goto L_088D71C0; }
    goto L_088D7218;
L_088D7218:;
    v0 = s4 << 4;
    goto L_088D7204;
L_088D7220:;
    a0 = s0 + 0;
    v0 = func_088D7598();
    goto L_088D7228;
L_088D7228:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D715C; }
    goto L_088D7230;
L_088D7230:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D723C;
L_088D723C:;
    v1 = v0 + 0;
    goto L_088D715C;
L_088D7244:;
    v0 = func_088D7598();
    goto L_088D724C;
L_088D724C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D7264; }
    goto L_088D7254;
L_088D7254:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7260;
L_088D7260:;
    v1 = v0 + 0;
    goto L_088D7264;
L_088D7264:;
    s2 = v1 + 0;
    goto L_088D7150;
}

/* 088D726C */
u32 func_088D726C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088D726C:;
    sp = sp - 48;
    s2 = a2 & 0xff;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_088D7EA4();
    goto L_088D7298;
L_088D7298:;
    a0 = sp + 4;
    a1 = sp + 0;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088D72CC; }
    goto L_088D72A8;
L_088D72A8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_088D72CC:;
    func_088D7E78(a0, a1);
    goto L_088D72D4;
L_088D72D4:;
    v0 = LD_U8(sp);
    a0 = D_08B307E4 - (2020);
    a2 = s0 + 0;
    a0 = a0 + 2020;
    a3 = s1 + 0;
    t0 = s2 + 0;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_088D72A8; }
    goto L_088D72F4;
L_088D72F4:;
    v0 = D_08B307EC - (2028);
    a1 = LD32(v0+2028);
    f0 = func_088D7110(a0, a1, a2, a3, t0);
    goto L_088D7300;
L_088D7300:;
    f21 = f0;
    f0 = func_088D7F20();
    goto L_088D7308;
L_088D7308:;
    f20 = f0;
    f0 = func_088D7ED8();
    goto L_088D7310;
L_088D7310:;
    f20 = f20 - f0;
    fcc = FCMP(f21, f20, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_088D7328; }
    goto L_088D7324;
L_088D7324:;
    v0 = 0 + 0;
    goto L_088D7328;
L_088D7328:;
    v1 = v0 + 0;
    goto L_088D72A8;
}

/* 088D7330 */
u32 func_088D7330(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7330:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_088D7598();
    goto L_088D734C;
L_088D734C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088D7368; }
    goto L_088D735C;
L_088D735C:;
    { u64 r_ = func_088D5914(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7364;
L_088D7364:;
    v1 = v0 + 0;
    goto L_088D7368;
L_088D7368:;
    a0 = v1 + 0;
    a1 = s1 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D7380; }
    goto L_088D7378;
L_088D7378:;
    v0 = func_088D73F0(a0, a1);
    goto L_088D7380;
L_088D7380:;
    sp = sp + 16;
    return v0;
}

/* 088D7394 */
void func_088D7394(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7394:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 9;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D73AC;
L_088D73AC:;
    a0 = s0 + 260;
    func_08AB7324(a0, 0, 0, 0);
    goto L_088D73B4;
L_088D73B4:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D73BC;
L_088D73BC:;
    v1 = LD32(s0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D73E0; }
    goto L_088D73C8;
L_088D73C8:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return;
L_088D73E0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D73E8;
L_088D73E8:;
    ST32(s0, 0);
    goto L_088D73C8;
}

/* 088D73F0 */
u32 func_088D73F0(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_088D73F0:;
    a1 = a1 << 4;
    a1 = a1 + a0;
    v0 = LD32(a1+52);
    v0 = 0 < v0;
    return v0;
}

/* 088D7404 */
u32 func_088D7404(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_088D7404:;
    a1 = a1 << 4;
    a3 = a1 + a0;
    v0 = LD32(a3+52);
    t0 = D_08B25AC0 - (23232);
    t1 = t0 + 23232;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    t2 = 1;
    if (cnd_) { goto L_088D7488; }
    goto L_088D7424;
L_088D7424:;
    v0 = LD32(t0+23232);
    v1 = LD32(t1+4);
    a2 = LD32(a0+260);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    ST32(t0+23232, v0);
    a1 = v0 >> 1;
    ST32(t1+4, v1);
    v1 = LD32(a3+52);
    a0 = LD32(a3+48);
    { u32 x_ = a1, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = hi;
    v0 = v0 + a0;
    v0 = v0 << 4;
    v1 = a2 + v0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    a0 = a2 + v0;
    if (cnd_) { goto L_088D7480; }
    goto L_088D7478;
L_088D7478:;
    v0 = (u32)(s32)LD_S8(v1);
    t2 = v0 < 0x1u;
    goto L_088D7480;
L_088D7480:;
    a1 = 0 + 0;
    if (t2 == 0) a1 = a0;
    goto L_088D7488;
L_088D7488:;
    v0 = a1 + 0;
    return v0;
}

/* 088D7490 */
float func_088D7490(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_088D7490:;
    v0 = 7;
    cnd_ = a1 == v0;
    v0 = (s32)a1 < 8;
    if (cnd_) { goto L_088D7510; }
    goto L_088D749C;
L_088D749C:;
    cnd_ = v0 == 0;
    v0 = 10;
    if (cnd_) { goto L_088D74E8; }
    goto L_088D74A4;
L_088D74A4:;
    v0 = 4;
    cnd_ = a1 == v0;
    if (cnd_) { f2 = BITSF(LD32(a0+20)); goto L_088D74BC; }
    goto L_088D74B0;
L_088D74B0:;
    f0 = BITSF(0);
    goto L_088D74B4;
L_088D74B4:;
    return f0;
L_088D74BC:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088D74B4; }
    goto L_088D74D0;
L_088D74D0:;
    f1 = BITSF(LD32(a0+24));
    goto L_088D74D4;
L_088D74D4:;
    v0 = D_08AECB28 - (-13528);
    f0 = BITSF(LD32(v0-13528));
    f0 = f0 / f2;
    f0 = f0 * f1;
    return f0;
L_088D74E8:;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_088D74B0; }
    goto L_088D74F0;
L_088D74F0:;
    f2 = BITSF(LD32(a0+36));
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088D74B4; }
    goto L_088D7508;
L_088D7508:;
    f1 = BITSF(LD32(a0+40));
    goto L_088D74D4;
L_088D7510:;
    f2 = BITSF(LD32(a0+28));
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_088D74B4; }
    goto L_088D7528;
L_088D7528:;
    f1 = BITSF(LD32(a0+32));
    goto L_088D74D4;
}

/* 088D7530 */
u32 func_088D7530(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7530:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_088D6EEC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7550;
L_088D7550:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D7580; }
    goto L_088D7558;
L_088D7558:;
    v0 = LD32(s1+268);
    v1 = s0 << 4;
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    v1 = v1 + s1;
    if (cnd_) { goto L_088D757C; }
    goto L_088D756C;
L_088D756C:;
    v0 = LD32(v1+52);
    v0 = (s32)v0 < 2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D7584; }
    goto L_088D757C;
L_088D757C:;
    a0 = 1;
    goto L_088D7580;
L_088D7580:;
    goto L_088D7584;
L_088D7584:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
}

/* 088D7598 */
u32 func_088D7598(void)
{
    u32 v0 = 0;
L_088D7598:;
    v0 = D_08B307D8 - (2008);
    v0 = v0 + 2008;
    return v0;
}

/* 088D75A4 */
u64 func_088D75A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D75A4:;
    sp = sp - 16;
    a2 = a1 + 0;
    a1 = D_08B307D8 - (2008);
    a1 = a1 + 2008;
    s0 = a0 + 0;
    { u64 r_ = func_088D58CC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D75C4;
L_088D75C4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D75D8 */
u64 func_088D75D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D75D8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s3 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D7654; }
    goto L_088D7610;
L_088D7610:;
    v0 = s1 < 0x1u;
    goto L_088D7614;
L_088D7614:;
    v1 = s3 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a0 = D_08B307D8 - (2008);
    if (cnd_) { goto L_088D7644; }
    goto L_088D7624;
L_088D7624:;
    goto L_088D7628;
L_088D7628:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088D7644:;
    a0 = a0 + 2008;
    { u64 r_ = func_088D57F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D764C;
L_088D764C:;
    goto L_088D7628;
L_088D7654:;
    a0 = D_08B307D8 - (2008);
    a0 = a0 + 2008;
    func_088D57E4(a0);
    goto L_088D7660;
L_088D7660:;
    a0 = (u32)-1;
    v0 = D_08B307E8 - (2024);
    ST32(v0+2024, a0);
    v0 = D_08B307E4 - (2020);
    v1 = D_08B30810 - (2064);
    ST32(v0+2020, a0);
    s2 = v1 + 2064;
    s0 = 7;
    s4 = (u32)-1;
    goto L_088D7684;
L_088D7684:;
    a0 = s2 + 0;
    s0 = s0 - 1;
    func_08AB73A4(a0);
    goto L_088D7690;
L_088D7690:;
    cnd_ = s0 != s4;
    s2 = s2 + 12;
    if (cnd_) { goto L_088D7684; }
    goto L_088D7698;
L_088D7698:;
    v0 = s1 < 0x1u;
    goto L_088D7614;
}

/* 088D76A0 */
rv_t func_088D76A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D76A0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088D75D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D76B4;
L_088D76B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D76C0 */
rv_t func_088D76C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D76C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088D75D8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D76D4;
L_088D76D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D76E0 */
u64 func_088D76E0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D76E0:;
    sp = sp - 16;
    { u64 r_ = func_088D76FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D76F0;
L_088D76F0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D76FC */
u64 func_088D76FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D76FC:;
    ST32(a0, 0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 11;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7718;
L_088D7718:;
    a0 = s0 + 8;
    func_08AB73B0(a0, 0, 0, 0);
    goto L_088D7720;
L_088D7720:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7728;
L_088D7728:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D7740 */
void func_088D7740(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7740:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D77C8; }
    goto L_088D7760;
L_088D7760:;
    a0 = 11;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7768;
L_088D7768:;
    a0 = s0 + 8;
    a1 = s1 + 0;
    func_08AB73F0(a0, a1, 0, 0, 0);
    goto L_088D7774;
L_088D7774:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D777C;
L_088D777C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D77B8; }
    goto L_088D7788;
L_088D7788:;
    ST32(s0+4, s1);
    cnd_ = (s32)s1 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D77B8; }
    goto L_088D7794;
L_088D7794:;
    v1 = v0 + 0;
    a1 = (u32)-1;
    goto L_088D779C;
L_088D779C:;
    ST32(v1, a1);
    a0 = a0 + 1;
    v0 = LD32(s0+4);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D779C; }
    goto L_088D77B4;
L_088D77B4:;
    goto L_088D77B8;
L_088D77B8:;
    sp = sp + 16;
    return;
L_088D77C8:;
    { u64 r_ = func_088D76FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D77D0;
L_088D77D0:;
    goto L_088D7760;
}

/* 088D77D8 */
u32 func_088D77D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D77D8:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    ST8(a2, 0);
    if (cnd_) { goto L_088D7824; }
    goto L_088D77FC;
L_088D77FC:;
    v0 = LD32(s0+8);
    v1 = D_08B2C0FC - (-16132);
    cnd_ = v0 == 0;
    a0 = v1 - 16132;
    if (cnd_) { goto L_088D7820; }
    goto L_088D780C;
L_088D780C:;
    v1 = LD32(s0+4);
    v0 = LD32(a0+12);
    a2 = (u32)-1;
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D783C; }
    goto L_088D7820;
L_088D7820:;
    v1 = s0 + 0;
    goto L_088D7824;
L_088D7824:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_088D783C:;
    v0 = func_088CEAA8(a0, a1, a2, a3);
    goto L_088D7844;
L_088D7844:;
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D7820; }
    goto L_088D784C;
L_088D784C:;
    a0 = v0 << 2;
    v0 = LD32(s0+4);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_088D7824; }
    goto L_088D7860;
L_088D7860:;
    v1 = LD32(s0+8);
    v0 = 1;
    ST8(s1, v0);
    v1 = a0 + v1;
    v0 = LD32(v1);
    v0 = ~(0 | v0);
    if (v0 != 0) s0 = v1;
    goto L_088D7820;
}

/* 088D7880 */
void func_088D7880(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    int cnd_;
L_088D7880:;
    a3 = LD32(a0+8);
    cnd_ = a3 == 0;
    if (cnd_) { goto L_088D78A8; }
    goto L_088D788C;
L_088D788C:;
    cnd_ = (s32)a1 < 0;
    v1 = a1 << 2;
    if (cnd_) { goto L_088D78A8; }
    goto L_088D7894;
L_088D7894:;
    v0 = LD32(a0+4);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    v1 = v1 + a3;
    if (cnd_) { goto L_088D78A8; }
    goto L_088D78A4;
L_088D78A4:;
    ST32(v1, a2);
    goto L_088D78A8;
L_088D78A8:;
    return;
}

/* 088D78B0 */
void func_088D78B0(void)
{
L_088D78B0:;
    return;
}

/* 088D78B8 */
void func_088D78B8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D78B8:;
    a0 = D_08B30870 - (2160);
    sp = sp - 16;
    a0 = a0 + 2160;
    { u64 r_ = func_088D76FC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D78CC;
L_088D78CC:;
    sp = sp + 16;
    return;
}

/* 088D78D8 */
void func_088D78D8(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D78D8:;
    sp = sp - 16;
    func_088D78B8();
    goto L_088D78E8;
L_088D78E8:;
    func_088D78B0();
    goto L_088D78F0;
L_088D78F0:;
    sp = sp + 16;
    return;
}

/* 088D78FC */
u32 func_088D78FC(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D78FC:;
    sp = sp - 32;
    a1 = a0 + 0;
    a0 = D_08B30870 - (2160);
    a0 = a0 + 2160;
    a2 = sp + 0;
    ST8(sp, 0);
    v0 = func_088D77D8(a0, a1, a2);
    goto L_088D791C;
L_088D791C:;
    sp = sp + 32;
    return v0;
}

/* 088D7928 */
u64 func_088D7928(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7928:;
    v1 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    a1 = a1 < 0x1u;
    v0 = a0 < 0x1u;
    v1 = v1 < 0x1u;
    sp = sp - 16;
    a0 = D_08B30870 - (2160);
    v0 = a1 & v0;
    a1 = a1 & v1;
    a0 = a0 + 2160;
    cnd_ = a1 == 0;
    a2 = D_08B30870 - (2160);
    if (cnd_) { goto L_088D7968; }
    goto L_088D795C;
L_088D795C:;
    ST32(a0+8, 0);
    ST32(a2+2160, 0);
    ST32(a0+4, 0);
    goto L_088D7968;
L_088D7968:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D797C; }
    goto L_088D7970;
L_088D7970:;
    goto L_088D7974;
L_088D7974:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088D797C:;
    { u64 r_ = func_088D76E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7984;
L_088D7984:;
    goto L_088D7974;
}

/* 088D798C */
rv_t func_088D798C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D798C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088D7928(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D79A0;
L_088D79A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D79AC */
rv_t func_088D79AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D79AC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088D7928(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D79C0;
L_088D79C0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D79CC */
void func_088D79CC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D79CC:;
    sp = sp - 16;
    a0 = 64;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D79DC;
L_088D79DC:;
    a1 = v0 + 0;
    v0 = D_08AECB30 - (-13520);
    f0 = BITSF(LD32(v0-13520));
    v1 = 1;
    v0 = a1 + 0;
    a0 = (u32)-1;
    goto L_088D79F4;
L_088D79F4:;
    v1 = v1 - 1;
    ST32(v0, 0);
    ST32(v0+4, 0);
    ST32(v0+8, a0);
    ST8(v0+12, 0);
    ST32(v0+16, 0);
    ST32(v0+20, 0);
    ST32(v0+24, 0);
    ST32(v0+28, FBITS(f0));
    cnd_ = v1 != a0;
    v0 = v0 + 32;
    if (cnd_) { goto L_088D79F4; }
    goto L_088D7A20;
L_088D7A20:;
    v0 = D_08B3087C - (2172);
    ST32(v0+2172, a1);
    sp = sp + 16;
    return;
}

/* 088D7A34 */
void func_088D7A34(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7A34:;
    sp = sp - 16;
    v0 = D_08AECB34 - (-13516);
    s0 = D_08B3087C - (2172);
    f12 = BITSF(LD32(v0-13516));
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D7A50;
L_088D7A50:;
    v0 = LD32(s0+2172);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D7A70; }
    goto L_088D7A5C;
L_088D7A5C:;
    ST32(s0+2172, 0);
    goto L_088D7A60;
L_088D7A60:;
    sp = sp + 16;
    return;
L_088D7A70:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7A78;
L_088D7A78:;
    ST32(s0+2172, 0);
    goto L_088D7A60;
}

/* 088D7A80 */
void func_088D7A80(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D7A80:;
    sp = sp - 32;
    a0 = 0x6360000u;
    a0 = a0 | 0xee25;
    s2 = 0 + 0;
    s0 = D_08B1612C - (24876);
    f20 = BITSF(LD32(s0+24876));
    { u64 r_ = func_088E0698(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7AB0;
L_088D7AB0:;
    a0 = v0 + 0;
    f0 = func_088E0858(a0);
    goto L_088D7AB8;
L_088D7AB8:;
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(s0+24876, FBITS(f0));
    if (cnd_) { goto L_088D7ACC; }
    goto L_088D7AC8;
L_088D7AC8:;
    s2 = 1;
    goto L_088D7ACC;
L_088D7ACC:;
    s0 = 0 + 0;
    s1 = D_08B3087C - (2172);
    a0 = LD32(s1+2172);
    goto L_088D7AD8;
L_088D7AD8:;
    v0 = s0 << 5;
    a1 = s2 + 0;
    a0 = a0 + v0;
    s0 = s0 + 1;
    func_088D8018(a0, a1);
    goto L_088D7AEC;
L_088D7AEC:;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    a0 = LD32(s1+2172);
    if (cnd_) { goto L_088D7AD8; }
    goto L_088D7AF8;
L_088D7AF8:;
    sp = sp + 32;
    return;
}

/* 088D7B14 */
void func_088D7B14(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7B14:;
    sp = sp - 16;
    s2 = D_08B3087C - (2172);
    s1 = a0 & 0xff;
    s0 = 0 + 0;
    a0 = LD32(s2+2172);
    goto L_088D7B38;
L_088D7B38:;
    v0 = s0 << 5;
    a1 = s1 + 0;
    a0 = a0 + v0;
    s0 = s0 + 1;
    func_088D83D0(a0, a1);
    goto L_088D7B4C;
L_088D7B4C:;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    a0 = LD32(s2+2172);
    if (cnd_) { goto L_088D7B38; }
    goto L_088D7B58;
L_088D7B58:;
    sp = sp + 16;
    return;
}

/* 088D7B70 */
void func_088D7B70(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7B70:;
    sp = sp - 16;
    s2 = D_08B3087C - (2172);
    s1 = a0 & 0xff;
    s0 = 0 + 0;
    a0 = LD32(s2+2172);
    goto L_088D7B94;
L_088D7B94:;
    v0 = s0 << 5;
    a1 = s1 + 0;
    a0 = a0 + v0;
    s0 = s0 + 1;
    func_088D8498(a0, a1);
    goto L_088D7BA8;
L_088D7BA8:;
    v0 = s0 < 0x2u;
    cnd_ = v0 != 0;
    a0 = LD32(s2+2172);
    if (cnd_) { goto L_088D7B94; }
    goto L_088D7BB4;
L_088D7BB4:;
    sp = sp + 16;
    return;
}

/* 088D7BCC */
rv_t func_088D7BCC(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D7BCC:;
    sp = sp - 32;
    f21 = BITSF(0);
    s1 = a1 & 0xff;
    fcc = FCMP(f21, f13, 12);
    s0 = a0 + 0;
    a0 = 1;
    f22 = f12;
    f20 = f13;
    cnd_ = fcc;
    if (cnd_) { goto L_088D7C0C; }
    goto L_088D7C08;
L_088D7C08:;
    a0 = 0 + 0;
    goto L_088D7C0C;
L_088D7C0C:;
    func_088E1E30(a0);
    goto L_088D7C14;
L_088D7C14:;
    v0 = func_0890F1D0();
    goto L_088D7C1C;
L_088D7C1C:;
    v1 = D_08B30A34 - (2612);
    a0 = LD32(v1+2612);
    v1 = LD32(a0+12);
    v0 = v0 - v1;
    cnd_ = (s32)v0 <= 0;
    f12 = f20;
    if (cnd_) { goto L_088D7C9C; }
    goto L_088D7C34;
L_088D7C34:;
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D7C3C;
L_088D7C3C:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    cnd_ = s0 != 0;
    f13 = f20;
    if (cnd_) { goto L_088D7C6C; }
    goto L_088D7C4C;
L_088D7C4C:;
    goto L_088D7C50;
L_088D7C50:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D7C6C:;
    v0 = D_08B16128 - (24872);
    f12 = BITSF(LD32(v0+24872));
    v1 = D_08B30880 - (2176);
    a3 = LD32(v1+2176);
    v0 = D_08B3087C - (2172);
    a0 = LD32(v0+2172);
    f12 = f22 * f12;
    a3 = a3 << 5;
    a0 = a0 + a3;
    { u64 r_ = func_088D823C(a0, a1, a2, 0, 0, f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D7C94;
L_088D7C94:;
    goto L_088D7C50;
L_088D7C9C:;
    f12 = f21;
    goto L_088D7C34;
}

/* 088D7CA4 */
void func_088D7CA4(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D7CA4:;
    sp = sp - 32;
    f21 = BITSF(0);
    s1 = a1 & 0xff;
    fcc = FCMP(f21, f13, 12);
    s0 = a0 + 0;
    a0 = 1;
    f22 = f12;
    f20 = f13;
    cnd_ = fcc;
    if (cnd_) { goto L_088D7CE4; }
    goto L_088D7CE0;
L_088D7CE0:;
    a0 = 0 + 0;
    goto L_088D7CE4;
L_088D7CE4:;
    func_088E1E30(a0);
    goto L_088D7CEC;
L_088D7CEC:;
    v0 = func_0890F1D0();
    goto L_088D7CF4;
L_088D7CF4:;
    v1 = D_08B30A34 - (2612);
    a0 = LD32(v1+2612);
    v1 = LD32(a0+12);
    v0 = v0 - v1;
    cnd_ = (s32)v0 <= 0;
    f12 = f20;
    if (cnd_) { goto L_088D7D6C; }
    goto L_088D7D0C;
L_088D7D0C:;
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D7D14;
L_088D7D14:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    cnd_ = s0 == 0;
    f13 = f20;
    if (cnd_) { goto L_088D7D4C; }
    goto L_088D7D24;
L_088D7D24:;
    v0 = D_08B16128 - (24872);
    f12 = BITSF(LD32(v0+24872));
    v1 = D_08B30880 - (2176);
    a3 = LD32(v1+2176);
    v0 = D_08B3087C - (2172);
    a0 = LD32(v0+2172);
    f12 = f22 * f12;
    a3 = a3 << 5;
    a0 = a0 + a3;
    func_088D8318(a0, a1, a2, f12, f13);
    goto L_088D7D4C;
L_088D7D4C:;
    sp = sp + 32;
    return;
L_088D7D6C:;
    f12 = f21;
    goto L_088D7D0C;
}

/* 088D7D74 */
rv_t func_088D7D74(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7D74:;
    f0 = BITSF(0);
    sp = sp - 16;
    fcc = FCMP(f12, f0, 2);
    s1 = D_08B30880 - (2176);
    s0 = D_08B3087C - (2172);
    cnd_ = !fcc;
    if (cnd_) { goto L_088D7DE8; }
    goto L_088D7D98;
L_088D7D98:;
    v0 = LD32(s1+2176);
    a0 = LD32(s0+2172);
    v0 = v0 << 5;
    a0 = a0 + v0;
    { rv_t r_ = func_088D854C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D7DAC;
L_088D7DAC:;
    v0 = LD32(s1+2176);
    goto L_088D7DB0;
L_088D7DB0:;
    a0 = LD32(s0+2172);
    s0 = 1;
    v0 = s0 - v0;
    v0 = v0 << 5;
    a0 = a0 + v0;
    { rv_t r_ = func_088D854C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D7DC8;
L_088D7DC8:;
    v0 = LD32(s1+2176);
    s0 = s0 - v0;
    ST32(s1+2176, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D7DE8:;
    v0 = LD32(s1+2176);
    a0 = LD32(s0+2172);
    v0 = v0 << 5;
    a0 = a0 + v0;
    func_088D83BC(a0, f12);
    goto L_088D7DFC;
L_088D7DFC:;
    v0 = LD32(s1+2176);
    goto L_088D7DB0;
}

/* 088D7E04 */
u32 func_088D7E04(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7E04:;
    sp = sp - 16;
    v0 = D_08B30880 - (2176);
    v1 = D_08B3087C - (2172);
    a1 = LD32(v0+2176);
    a0 = 1;
    v0 = LD32(v1+2172);
    a0 = a0 - a1;
    a0 = a0 << 5;
    a0 = a0 + v0;
    v1 = LD32(a0+8);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D7E48; }
    goto L_088D7E3C;
L_088D7E3C:;
    { rv_t r_ = func_088D854C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D7E44;
L_088D7E44:;
    a1 = 1;
    goto L_088D7E48;
L_088D7E48:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088D7E58 */
u64 func_088D7E58(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_088D7E58:;
    v0 = D_08B30880 - (2176);
    v1 = LD32(v0+2176);
    a0 = D_08B3087C - (2172);
    v0 = LD32(a0+2172);
    v1 = v1 << 5;
    v1 = v1 + v0;
    v0 = LD32(v1+4);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D7E78 */
void func_088D7E78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
L_088D7E78:;
    v0 = D_08B30880 - (2176);
    v1 = LD32(v0+2176);
    a2 = D_08B3087C - (2172);
    v0 = LD32(a2+2172);
    v1 = v1 << 5;
    v1 = v1 + v0;
    a2 = LD_U8(v1+12);
    v0 = LD32(v1+4);
    ST8(a1, a2);
    ST32(a0, v0);
    return;
}

/* 088D7EA4 */
u32 func_088D7EA4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_088D7EA4:;
    v0 = D_08B30880 - (2176);
    v1 = LD32(v0+2176);
    a0 = D_08B3087C - (2172);
    v0 = LD32(a0+2172);
    v1 = v1 << 5;
    v1 = v1 + v0;
    a0 = LD32(v1+8);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D7ED0; }
    goto L_088D7ECC;
L_088D7ECC:;
    a1 = LD32(v1+24);
    goto L_088D7ED0;
L_088D7ED0:;
    v0 = a1 + 0;
    return v0;
}

/* 088D7ED8 */
float func_088D7ED8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7ED8:;
    sp = sp - 16;
    v1 = D_08B30880 - (2176);
    a0 = D_08B3087C - (2172);
    v0 = LD32(v1+2176);
    v1 = LD32(a0+2172);
    f0 = BITSF(0);
    v0 = v0 << 5;
    v0 = v0 + v1;
    a1 = LD32(v0+8);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088D7F14; }
    goto L_088D7F0C;
L_088D7F0C:;
    f0 = func_088DCCCC(a0);
    goto L_088D7F14;
L_088D7F14:;
    sp = sp + 16;
    return f0;
}

/* 088D7F20 */
float func_088D7F20(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D7F20:;
    sp = sp - 16;
    v1 = D_08B30880 - (2176);
    a0 = D_08B3087C - (2172);
    v0 = LD32(v1+2176);
    v1 = LD32(a0+2172);
    f0 = BITSF(0);
    v0 = v0 << 5;
    v0 = v0 + v1;
    a1 = LD32(v0+8);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088D7F5C; }
    goto L_088D7F54;
L_088D7F54:;
    f0 = func_088DCCF4(a0);
    goto L_088D7F5C;
L_088D7F5C:;
    sp = sp + 16;
    return f0;
}

/* 088D7F68 */
u32 func_088D7F68(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_088D7F68:;
    v0 = D_08B30880 - (2176);
    v1 = LD32(v0+2176);
    a0 = D_08B3087C - (2172);
    v0 = LD32(a0+2172);
    v1 = v1 << 5;
    v1 = v1 + v0;
    a0 = LD32(v1+8);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D7F9C; }
    goto L_088D7F90;
L_088D7F90:;
    v0 = LD32(v1);
    v0 = v0 - 2;
    a1 = v0 < 0x3u;
    goto L_088D7F9C;
L_088D7F9C:;
    v0 = a1 + 0;
    return v0;
}

/* 088D7FA4 */
u32 func_088D7FA4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
L_088D7FA4:;
    v0 = D_08B30880 - (2176);
    v1 = LD32(v0+2176);
    a0 = D_08B3087C - (2172);
    v0 = LD32(a0+2172);
    v1 = v1 << 5;
    v1 = v1 + v0;
    a0 = LD32(v1+8);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088D7FD0; }
    goto L_088D7FCC;
L_088D7FCC:;
    a1 = LD_U8(v1+12);
    goto L_088D7FD0;
L_088D7FD0:;
    v0 = a1 + 0;
    return v0;
}

/* 088D7FD8 */
u32 func_088D7FD8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088D7FD8:;
    v0 = D_08B3087C - (2172);
    v1 = LD32(v0+2172);
    a2 = 0 + 0;
    a1 = 0 + 0;
    a0 = v1 + 8;
    a3 = (u32)-1;
    goto L_088D7FF0;
L_088D7FF0:;
    v0 = LD32(a0);
    a1 = a1 + 1;
    v1 = a1 < 0x2u;
    v0 = v0 ^ a3;
    v0 = 0 < v0;
    a2 = a2 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 32;
    if (cnd_) { goto L_088D7FF0; }
    goto L_088D8010;
L_088D8010:;
    v0 = a2 + 0;
    return v0;
}

/* 088D8018 */
void func_088D8018(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8018:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v1 = LD32(a0);
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D8068; }
    goto L_088D803C;
L_088D803C:;
    v0 = v1 << 2;
    v1 = D_08AD8898 - (-30568);
    v1 = v1 - 30568;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088D8058u: goto L_088D8058; case 0x088D8068u: goto L_088D8068; case 0x088D8090u: goto L_088D8090; case 0x088D8104u: goto L_088D8104; case 0x088D8168u: goto L_088D8168; default: rs_break(0, 0x088d8050); }
L_088D8058:;
    a0 = s0 + 0;
    func_088D81A8(a0);
    goto L_088D8060;
L_088D8060:;
    cnd_ = s1 != 0;
    if (cnd_) { f12 = BITSF(LD32(s0+28)); goto L_088D807C; }
    goto L_088D8068;
L_088D8068:;
    goto L_088D806C;
L_088D806C:;
    sp = sp + 16;
    return;
L_088D807C:;
    a0 = s0 + 0;
    goto L_088D8080;
L_088D8080:;
    func_088D81F8(a0, f12);
    goto L_088D8088;
L_088D8088:;
    goto L_088D806C;
L_088D8090:;
    a0 = s0 + 0;
    func_088D81A8(a0);
    goto L_088D8098;
L_088D8098:;
    v0 = D_08B2859C - (-31332);
    f2 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(s0+16));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s0+16, FBITS(f0));
    if (cnd_) { goto L_088D80D4; }
    goto L_088D80BC;
L_088D80BC:;
    f12 = BITSF(LD32(s0+28));
    a0 = s0 + 0;
    func_088D81F8(a0, f12);
    goto L_088D80C8;
L_088D80C8:;
    v0 = 1;
    ST32(s0, v0);
    goto L_088D8068;
L_088D80D4:;
    f1 = BITSF(LD32(s0+20));
    v0 = D_08AECB40 - (-13504);
    f2 = BITSF(LD32(v0-13504));
    f1 = f0 / f1;
    f12 = BITSF(LD32(s0+28));
    a0 = s0 + 0;
    f0 = f2 - f1;
    f0 = f2 - f0;
    f0 = f0 * f0;
    f0 = f2 - f0;
    goto L_088D80FC;
L_088D80FC:;
    f12 = f0 * f12;
    goto L_088D8080;
L_088D8104:;
    a0 = s0 + 0;
    func_088D81A8(a0);
    goto L_088D810C;
L_088D810C:;
    v0 = D_08B2859C - (-31332);
    f2 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(s0+16));
    f1 = BITSF(0);
    f12 = f0 - f2;
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    ST32(s0+16, FBITS(f12));
    if (cnd_) { goto L_088D8140; }
    goto L_088D8130;
L_088D8130:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D854C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8138;
L_088D8138:;
    goto L_088D806C;
L_088D8140:;
    f0 = BITSF(LD32(s0+20));
    v0 = D_08AECB40 - (-13504);
    f1 = BITSF(LD32(v0-13504));
    f0 = f12 / f0;
    f12 = BITSF(LD32(s0+28));
    a0 = s0 + 0;
    f0 = f1 - f0;
    f0 = f0 * f0;
    f0 = f1 - f0;
    goto L_088D80FC;
L_088D8168:;
    a0 = s0 + 0;
    func_088D81A8(a0);
    goto L_088D8170;
L_088D8170:;
    v0 = D_08B2859C - (-31332);
    f2 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(s0+16));
    f1 = BITSF(0);
    f12 = f0 - f2;
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    ST32(s0+16, FBITS(f12));
    if (cnd_) { goto L_088D8140; }
    goto L_088D8194;
L_088D8194:;
    a0 = s0 + 0;
    a1 = 1;
    func_088D83D0(a0, a1);
    goto L_088D81A0;
L_088D81A0:;
    goto L_088D806C;
}

/* 088D81A8 */
void func_088D81A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D81A8:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    v1 = LD32(a0+8);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D81D8; }
    goto L_088D81C8;
L_088D81C8:;
    v0 = func_088DCC9C(a0);
    goto L_088D81D0;
L_088D81D0:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088D81E8; }
    goto L_088D81D8;
L_088D81D8:;
    goto L_088D81DC;
L_088D81DC:;
    sp = sp + 16;
    return;
L_088D81E8:;
    { rv_t r_ = func_088D854C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D81F0;
L_088D81F0:;
    goto L_088D81DC;
}

/* 088D81F8 */
void func_088D81F8(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D81F8:;
    sp = sp - 16;
    v0 = (u32)-1;
    f1 = f12;
    v1 = LD32(a0+8);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D8230; }
    goto L_088D8214;
L_088D8214:;
    v0 = D_08B16128 - (24872);
    f12 = BITSF(LD32(v0+24872));
    v1 = D_08B1612C - (24876);
    f0 = BITSF(LD32(v1+24876));
    f12 = f1 * f12;
    f12 = f12 * f0;
    { u64 r_ = func_088DCC54(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8230;
L_088D8230:;
    sp = sp + 16;
    return;
}

/* 088D823C */
u64 func_088D823C(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_088D823C:;
    sp = sp - 288;
    v0 = D_08AE68D8 - (26840);
    v0 = v0 + 26840;
    s2 = a1 + 0;
    a1 = a1 << 2;
    v1 = D_08AE68EC - (26860);
    a1 = a1 + v0;
    v0 = a2 + 0;
    s0 = a0 + 0;
    a2 = 256;
    a3 = 1;
    a0 = sp + 0;
    f20 = f13;
    t0 = LD32(v1+26860);
    t1 = LD32(a1);
    a1 = D_08AD88B0 - (-30544);
    a1 = a1 - 30544;
    f21 = f12;
    s1 = v0 & 0xff;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D82A4;
L_088D82A4:;
    a0 = sp + 0;
    a1 = 1;
    v0 = func_088DC9D0(a0, a1);
    goto L_088D82B0;
L_088D82B0:;
    v1 = (u32)-1;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == v1;
    ST32(s0+8, v0);
    if (cnd_) { goto L_088D82D0; }
    goto L_088D82C8;
L_088D82C8:;
    func_088DCA88(a0, a1, a2);
    goto L_088D82D0;
L_088D82D0:;
    v0 = 2;
    ST32(s0+4, s2);
    a0 = sp + 0;
    ST8(s0+12, s1);
    ST32(s0+20, FBITS(f20));
    ST32(s0+16, FBITS(f20));
    ST32(s0, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D82F0;
L_088D82F0:;
    ST32(s0+24, v0);
    ST32(s0+28, FBITS(f21));
    sp = sp + 288;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D8318 */
void func_088D8318(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D8318:;
    sp = sp - 32;
    s2 = a1 + 0;
    s0 = a0 + 0;
    a0 = a1 + 0;
    a1 = 1;
    s1 = a2 & 0xff;
    f21 = f12;
    f20 = f13;
    v0 = func_088DC9D0(a0, a1);
    goto L_088D8354;
L_088D8354:;
    v1 = (u32)-1;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    cnd_ = v0 == v1;
    ST32(s0+8, v0);
    if (cnd_) { goto L_088D8374; }
    goto L_088D836C;
L_088D836C:;
    func_088DCA88(a0, a1, a2);
    goto L_088D8374;
L_088D8374:;
    v0 = 2;
    ST8(s0+12, s1);
    a0 = s2 + 0;
    ST32(s0+20, FBITS(f20));
    ST32(s0+16, FBITS(f20));
    ST32(s0+4, 0);
    ST32(s0, v0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8394;
L_088D8394:;
    ST32(s0+24, v0);
    ST32(s0+28, FBITS(f21));
    sp = sp + 32;
    return;
}

/* 088D83BC */
void func_088D83BC(u32 a0, float f12)
{
    u32 v0 = 0;
L_088D83BC:;
    v0 = 3;
    ST32(a0+20, FBITS(f12));
    ST32(a0, v0);
    ST32(a0+16, FBITS(f12));
    return;
}

/* 088D83D0 */
void func_088D83D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D83D0:;
    sp = sp - 16;
    s1 = 5;
    a1 = a1 & 0xff;
    v1 = LD32(a0);
    cnd_ = v1 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D8424; }
    goto L_088D83F4;
L_088D83F4:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088D8454; }
    goto L_088D8400;
L_088D8400:;
    cnd_ = a1 == 0;
    if (cnd_) { a0 = 4; goto L_088D8438; }
    goto L_088D8408;
L_088D8408:;
    a0 = LD32(a0+8);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { ST32(s0, s1); goto L_088D8424; }
    goto L_088D8418;
L_088D8418:;
    func_088DCAD4(a0);
    goto L_088D8420;
L_088D8420:;
    ST32(s0, s1);
    goto L_088D8424;
L_088D8424:;
    goto L_088D8428;
L_088D8428:;
    sp = sp + 16;
    return;
L_088D8438:;
    cnd_ = v1 == a0;
    v0 = D_08AECB44 - (-13500);
    if (cnd_) { goto L_088D8424; }
    goto L_088D8440;
L_088D8440:;
    f0 = BITSF(LD32(v0-13500));
    ST32(s0, a0);
    ST32(s0+20, FBITS(f0));
    goto L_088D844C;
L_088D844C:;
    ST32(s0+16, FBITS(f0));
    goto L_088D8424;
L_088D8454:;
    cnd_ = a1 != 0;
    v0 = D_08AECB44 - (-13500);
    if (cnd_) { goto L_088D8488; }
    goto L_088D845C;
L_088D845C:;
    f2 = BITSF(LD32(v0-13500));
    f1 = BITSF(LD32(a0+16));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088D8428; }
    goto L_088D8474;
L_088D8474:;
    f0 = BITSF(LD32(a0+20));
    ST32(a0+20, FBITS(f2));
    f0 = f1 / f0;
    f0 = f0 * f2;
    goto L_088D844C;
L_088D8488:;
    { rv_t r_ = func_088D854C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8490;
L_088D8490:;
    goto L_088D8428;
}

/* 088D8498 */
void func_088D8498(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8498:;
    sp = sp - 16;
    s1 = 1;
    a1 = a1 & 0xff;
    v0 = LD32(a0);
    cnd_ = v0 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D84D4; }
    goto L_088D84BC;
L_088D84BC:;
    v0 = v0 - 2;
    cnd_ = a1 != 0;
    v0 = v0 < 0x2u;
    if (cnd_) { goto L_088D8524; }
    goto L_088D84C8;
L_088D84C8:;
    f12 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D84E8; }
    goto L_088D84D4;
L_088D84D4:;
    sp = sp + 16;
    return;
L_088D84E8:;
    func_088D81F8(a0, f12);
    goto L_088D84F0;
L_088D84F0:;
    v1 = LD32(s0+8);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D8508; }
    goto L_088D8500;
L_088D8500:;
    func_088DCAF8(a0);
    goto L_088D8508;
L_088D8508:;
    v0 = D_08AECB48 - (-13496);
    f0 = BITSF(LD32(v0-13496));
    v0 = 2;
    ST32(s0, v0);
    ST32(s0+20, FBITS(f0));
    ST32(s0+16, FBITS(f0));
    goto L_088D84D4;
L_088D8524:;
    f12 = BITSF(LD32(a0+28));
    func_088D81F8(a0, f12);
    goto L_088D852C;
L_088D852C:;
    v1 = LD32(s0+8);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D8544; }
    goto L_088D853C;
L_088D853C:;
    func_088DCAF8(a0);
    goto L_088D8544;
L_088D8544:;
    ST32(s0, s1);
    goto L_088D84D4;
}

/* 088D854C */
rv_t func_088D854C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D854C:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_088D8584; }
    goto L_088D8570;
L_088D8570:;
    { rv_t r_ = func_088DCB1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8578;
L_088D8578:;
    a0 = LD32(s0+8);
    { rv_t r_ = func_088DCB5C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8580;
L_088D8580:;
    ST32(s0+8, s1);
    goto L_088D8584;
L_088D8584:;
    ST32(s0+24, 0);
    ST32(s0, 0);
    ST32(s0+4, 0);
    ST8(s0+12, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D85A8 */
rv_t func_088D85A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_088D85A8:;
    sp = sp - 144;
    v0 = D_08B3089C - (2204);
    v1 = LD_U8(v0+2204);
    cnd_ = v1 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088D87A8; }
    goto L_088D85CC;
L_088D85CC:;
    f12 = BITSF(LD32(a1+52));
    s2 = a1 + 8;
    a0 = s2 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D85DC;
L_088D85DC:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088D8620; }
    goto L_088D85E4;
L_088D85E4:;
    v0 = D_08B309FC - (2556);
    a1 = LD32(v0+2556);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D8608; }
    goto L_088D85F4;
L_088D85F4:;
    v0 = D_08B30A00 - (2560);
    v1 = LD32(v0+2560);
    a0 = LD32(a1+12);
    v0 = LD32(v1+12);
    a0 = a0 + v0;
    goto L_088D8608;
L_088D8608:;
    v0 = D_08B30A04 - (2564);
    v1 = LD32(v0+2564);
    v0 = 1;
    v1 = v1 - a0;
    v1 = (s32)v1 < 5;
    if (v1 == 0) s1 = v0;
    goto L_088D8620;
L_088D8620:;
    a0 = s0 + 0;
    v0 = func_088D8CF8(a0);
    goto L_088D8628;
L_088D8628:;
    cnd_ = v0 != 0;
    v0 = LD_U8(s0+138);
    if (cnd_) { goto L_088D8798; }
    goto L_088D8630;
L_088D8630:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D8640; }
    goto L_088D8638;
L_088D8638:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088D8654; }
    goto L_088D8640;
L_088D8640:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_088D8654:;
    a0 = s0 + 0;
    func_088D8D08(a0);
    goto L_088D865C;
L_088D865C:;
    a0 = s0 + 0;
    v0 = func_088D8CF8(a0);
    goto L_088D8664;
L_088D8664:;
    ST8(s0+137, v0);
    goto L_088D8668;
L_088D8668:;
    a0 = s0 + 0;
    v0 = func_088D8CF8(a0);
    goto L_088D8670;
L_088D8670:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D8640; }
    goto L_088D8678;
L_088D8678:;
    v0 = LD_U8(s0+137);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D8770; }
    goto L_088D8684;
L_088D8684:;
    v0 = LD_U8(s0+138);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D8760; }
    goto L_088D8690;
L_088D8690:;
    a0 = s0 + 0;
    v0 = func_088D8CDC(a0);
    goto L_088D8698;
L_088D8698:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088D86EC; }
    goto L_088D86A0;
L_088D86A0:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { t0 = LD32(s0); goto L_088D8740; }
    goto L_088D86AC;
L_088D86AC:;
    v0 = LD_U8(v0+13);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_088D86DC; }
    goto L_088D86B8;
L_088D86B8:;
    v0 = LD_U8(s0+101);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+136); goto L_088D86E4; }
    goto L_088D86C4;
L_088D86C4:;
    v0 = LD_U8(s0+102);
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s0+104)); goto L_088D8730; }
    goto L_088D86D0;
L_088D86D0:;
    v0 = LD_U8(s0+103);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_088D8720; }
    goto L_088D86DC;
L_088D86DC:;
    ST8(s0+136, v0);
    goto L_088D86E0;
L_088D86E0:;
    v0 = LD_U8(s0+136);
    goto L_088D86E4;
L_088D86E4:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+132); goto L_088D8710; }
    goto L_088D86EC;
L_088D86EC:;
    a0 = s0 + 0;
    { u64 r_ = func_088D8C5C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D86F4;
L_088D86F4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D8640; }
    goto L_088D86FC;
L_088D86FC:;
    v1 = D_08B308A0 - (2208);
    v0 = LD32(v1+2208);
    v0 = v0 + 1;
    ST32(v1+2208, v0);
    goto L_088D8640;
L_088D8710:;
    a1 = s0 + 0;
    func_088DFDD4(a0, a1);
    goto L_088D8718;
L_088D8718:;
    ST8(s0+136, 0);
    goto L_088D86EC;
L_088D8720:;
    a0 = s0 + 108;
    v0 = func_088DC0D8(a0);
    goto L_088D8728;
L_088D8728:;
    ST8(s0+136, v0);
    goto L_088D86E0;
L_088D8730:;
    a0 = s2 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8738;
L_088D8738:;
    ST8(s0+136, v0);
    goto L_088D86E0;
L_088D8740:;
    a1 = D_08AD88B8 - (-30536);
    a1 = a1 - 30536;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8758;
L_088D8758:;
    goto L_088D86EC;
L_088D8760:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D8D30(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8768;
L_088D8768:;
    goto L_088D86EC;
L_088D8770:;
    a0 = s0 + 0;
    v0 = func_088D8CDC(a0);
    goto L_088D8778;
L_088D8778:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+132); goto L_088D8788; }
    goto L_088D8780;
L_088D8780:;
    ST8(s0+137, 0);
    goto L_088D8684;
L_088D8788:;
    a1 = s0 + 0;
    func_088DFDCC();
    goto L_088D8790;
L_088D8790:;
    ST8(s0+137, 0);
    goto L_088D8684;
L_088D8798:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D87A8; }
    goto L_088D87A0;
L_088D87A0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_088D8668; }
    goto L_088D87A8;
L_088D87A8:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D8D30(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D87B0;
L_088D87B0:;
    goto L_088D8640;
}

/* 088D87B8 */
rv_t func_088D87B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D87B8:;
    sp = sp - 16;
    a0 = a1 + 0;
    { rv_t r_ = func_088D8D30(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D87C8;
L_088D87C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D87D4 */
u32 func_088D87D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D87D4:;
    sp = sp - 16;
    v0 = 999;
    s2 = a0 + 0;
    s1 = a1 + 0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088D88D4; }
    goto L_088D87F8;
L_088D87F8:;
    v1 = D_08B16130 - (24880);
    v0 = LD32(v1+24880);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s2+8); goto L_088D8818; }
    goto L_088D880C;
L_088D880C:;
    v0 = a1 + 1;
    ST32(v1+24880, v0);
    goto L_088D8814;
L_088D8814:;
    v0 = LD_U8(s2+8);
    goto L_088D8818;
L_088D8818:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088D88B0; }
    goto L_088D8820;
L_088D8820:;
    v0 = LD32(s2);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_088D8854; }
    goto L_088D882C;
L_088D882C:;
    v1 = v0 + 0;
    goto L_088D8830;
L_088D8830:;
    a0 = v1 + 148;
    s0 = v1 + 144;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088D88CC; }
    goto L_088D8848;
L_088D8848:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D8830; }
    goto L_088D8854;
L_088D8854:;
    a0 = 152;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D885C;
L_088D885C:;
    a0 = v0 + 0;
    v0 = 999;
    ST32(a0+4, v0);
    v1 = a0 + 4;
    a1 = v1 + 0;
    ST32(a0, s1);
    v0 = LD32(s2+4);
    ST32(a0+144, 0);
    v0 = v0 + 1;
    ST32(a0+148, 0);
    ST32(s2+4, v0);
    ST32(s0, a0);
    cnd_ = v1 == 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_088D88CC; }
    goto L_088D8894;
L_088D8894:;
    v0 = 1;
    ST32(a0+4, s1);
    a0 = v1 + 0;
    ST8(v1+136, v0);
    v1 = (u32)-1;
    ST32(a1+132, v1);
    ST8(a1+138, 0);
    goto L_088D88B0;
L_088D88B0:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_088D88CC:;
    a0 = 0 + 0;
    goto L_088D88B0;
L_088D88D4:;
    s0 = D_08B16130 - (24880);
    goto L_088D88D8;
L_088D88D8:;
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    a1 = LD32(s0+24880);
    if (cnd_) { goto L_088D8910; }
    goto L_088D88E4;
L_088D88E4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088D88EC;
L_088D88EC:;
    a0 = v0 + 148;
    a2 = v0 + 144;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088D891C; }
    goto L_088D8904;
L_088D8904:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088D88EC; }
    goto L_088D8910;
L_088D8910:;
    a0 = LD32(s2+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088D8940; }
    goto L_088D891C;
L_088D891C:;
    cnd_ = a3 == 0;
    v0 = LD32(s0+24880);
    if (cnd_) { goto L_088D8930; }
    goto L_088D8924;
L_088D8924:;
    v0 = v0 + 1;
    ST32(s0+24880, v0);
    goto L_088D88D8;
L_088D8930:;
    s1 = v0 + 0;
    v0 = v0 + 1;
    ST32(s0+24880, v0);
    goto L_088D8814;
L_088D8940:;
    a2 = 1;
    { u64 r_ = func_08AAF1FC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8948;
L_088D8948:;
    a3 = v0 + 0;
    goto L_088D891C;
}

/* 088D8950 */
void func_088D8950(void)
{
L_088D8950:;
    return;
}

/* 088D8958 */
void func_088D8958(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D8958:;
    sp = sp - 32;
    v0 = D_08B30884 - (2180);
    s3 = v0 + 2180;
    v1 = 1;
    s2 = s3 + 0;
    s0 = LD32(v0+2180);
    v0 = ((u32)(uintptr_t)func_088D87B8) - (-30792);
    ST8(s3+8, v1);
    cnd_ = s0 == 0;
    s1 = v0 - 30792;
    if (cnd_) { goto L_088D89B8; }
    goto L_088D8994;
L_088D8994:;
    a1 = LD32(s0+144);
    cnd_ = a1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088D8AEC; }
    goto L_088D89A0;
L_088D89A0:;
    a1 = LD32(s0+148);
    goto L_088D89A4;
L_088D89A4:;
    cnd_ = a1 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088D8ADC; }
    goto L_088D89AC;
L_088D89AC:;
    a0 = LD32(s0);
    goto L_088D89B0;
L_088D89B0:;
    t_ = s1;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D89B8;
L_088D89B8:;
    v0 = LD32(s2+12);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_088D89E4; }
    goto L_088D89C4;
L_088D89C4:;
    v0 = LD32(s2+16);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088D8AA0; }
    goto L_088D89D0;
L_088D89D0:;
    a0 = LD32(s1+12);
    goto L_088D89D4;
L_088D89D4:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D8A90; }
    goto L_088D89DC;
L_088D89DC:;
    ST32(s1+16, 0);
    goto L_088D89E0;
L_088D89E0:;
    ST32(s1+12, 0);
    goto L_088D89E4;
L_088D89E4:;
    s0 = LD32(s3);
    ST8(s2+8, 0);
    s1 = s3 + 0;
    cnd_ = s0 == 0;
    s2 = s3 + 0;
    if (cnd_) { goto L_088D8A18; }
    goto L_088D89F8;
L_088D89F8:;
    a1 = LD32(s0+144);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D8A80; }
    goto L_088D8A04;
L_088D8A04:;
    a1 = LD32(s0+148);
    goto L_088D8A08;
L_088D8A08:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D8A70; }
    goto L_088D8A10;
L_088D8A10:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8A18;
L_088D8A18:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D8A60; }
    goto L_088D8A24;
L_088D8A24:;
    v0 = 0x10000u;
    goto L_088D8A28;
L_088D8A28:;
    v0 = v0 | 0x86a0;
    v1 = D_08B16130 - (24880);
    ST32(v1+24880, v0);
    ST32(s1, 0);
    ST32(s2+16, 0);
    ST32(s2+12, 0);
    ST32(s1+4, 0);
    sp = sp + 32;
    return;
L_088D8A60:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8A68;
L_088D8A68:;
    v0 = 0x10000u;
    goto L_088D8A28;
L_088D8A70:;
    a0 = s1 + 0;
    func_08AB7638(a0, a1, t1, t2, t3);
    goto L_088D8A78;
L_088D8A78:;
    goto L_088D8A10;
L_088D8A80:;
    a0 = s3 + 0;
    func_08AB7638(a0, a1, t1, t2, t3);
    goto L_088D8A88;
L_088D8A88:;
    a1 = LD32(s0+148);
    goto L_088D8A08;
L_088D8A90:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8A98;
L_088D8A98:;
    ST32(s1+16, 0);
    goto L_088D89E0;
L_088D8AA0:;
    v1 = LD32(s1+12);
    goto L_088D8AA4;
L_088D8AA4:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    v0 = v0 + v1;
    a1 = LD32(v0);
    s0 = s0 + 1;
    v0 = func_08AB7434(a0, a1);
    goto L_088D8ABC;
L_088D8ABC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8AC4;
L_088D8AC4:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_088D8AA4; }
    goto L_088D8AD4;
L_088D8AD4:;
    a0 = LD32(s1+12);
    goto L_088D89D4;
L_088D8ADC:;
    a2 = s1 + 0;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D8AE4;
L_088D8AE4:;
    a0 = LD32(s0);
    goto L_088D89B0;
L_088D8AEC:;
    a2 = s1 + 0;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D8AF4;
L_088D8AF4:;
    a1 = LD32(s0+148);
    goto L_088D89A4;
}

/* 088D8AFC */
void func_088D8AFC(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8AFC:;
    sp = sp - 16;
    func_088D8958(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D8B0C;
L_088D8B0C:;
    func_088D8950();
    goto L_088D8B14;
L_088D8B14:;
    sp = sp + 16;
    return;
}

/* 088D8B20 */
void func_088D8B20(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8B20:;
    sp = sp - 16;
    v0 = D_08B30884 - (2180);
    v1 = 1;
    s1 = v0 + 2180;
    s0 = LD32(v0+2180);
    v0 = ((u32)(uintptr_t)func_088D87B8) - (-30792);
    ST8(s1+8, v1);
    cnd_ = s0 == 0;
    s2 = v0 - 30792;
    if (cnd_) { goto L_088D8B88; }
    goto L_088D8B54;
L_088D8B54:;
    v0 = LD32(s0+144);
    a2 = s2 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088D8BBC; }
    goto L_088D8B68;
L_088D8B68:;
    v0 = LD32(s0+148);
    goto L_088D8B6C;
L_088D8B6C:;
    a2 = s2 + 0;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088D8BAC; }
    goto L_088D8B7C;
L_088D8B7C:;
    a0 = LD32(s0);
    goto L_088D8B80;
L_088D8B80:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8B88;
L_088D8B88:;
    a0 = s1 + 0;
    { u64 r_ = func_08AB75A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8B90;
L_088D8B90:;
    ST8(s1+8, 0);
    sp = sp + 16;
    return;
L_088D8BAC:;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D8BB4;
L_088D8BB4:;
    a0 = LD32(s0);
    goto L_088D8B80;
L_088D8BBC:;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D8BC4;
L_088D8BC4:;
    v0 = LD32(s0+148);
    goto L_088D8B6C;
}

/* 088D8BCC */
void func_088D8BCC(u32 a0)
{
    u32 v0 = 0;
L_088D8BCC:;
    v0 = 1;
    ST8(a0+138, v0);
    return;
}

/* 088D8BD8 */
void func_088D8BD8(u32 a0)
{
L_088D8BD8:;
    ST8(a0+138, 0);
    return;
}

/* 088D8BE0 */
void func_088D8BE0(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8BE0:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088D8BCC(a0);
    goto L_088D8BF4;
L_088D8BF4:;
    v0 = 1;
    ST8(s0+136, v0);
    sp = sp + 16;
    return;
}

/* 088D8C0C */
rv_t func_088D8C0C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8C0C:;
    sp = sp - 16;
    v0 = a0 + 0;
    v1 = v0 + 8;
    f0 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    a2 = LD32(a0+132);
    ST32(v0+8, FBITS(f0));
    v0 = (u32)-1;
    a0 = a2 + 0;
    a1 = v1 + 0;
    ST32(v1+4, FBITS(f1));
    cnd_ = a2 == v0;
    ST32(v1+8, FBITS(f2));
    if (cnd_) { goto L_088D8C50; }
    goto L_088D8C48;
L_088D8C48:;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8C50;
L_088D8C50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D8C5C */
u64 func_088D8C5C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8C5C:;
    sp = sp - 16;
    v0 = (u32)-1;
    a1 = 0 + 0;
    v1 = LD32(a0+132);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088D8C84; }
    goto L_088D8C78;
L_088D8C78:;
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8C80;
L_088D8C80:;
    a1 = v0 + 0;
    goto L_088D8C84;
L_088D8C84:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088D8C94 */
void func_088D8C94(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    float *v = vfpu_v;
L_088D8C94:;
    v0 = LD_U8(a0+96);
    a1 = a0 + 0;
    cnd_ = v0 == 0;
    v1 = a0 + 40;
    if (cnd_) { goto L_088D8CD0; }
    goto L_088D8CA4;
L_088D8CA4:;
    a0 = LD32(v1+8);
    v0 = LD32(a1+40);
    v1 = LD32(v1+4);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    ST32(a1+52, v0);
    return;
L_088D8CD0:;
    f0 = BITSF(LD32(a0+24));
    ST32(a0+52, FBITS(f0));
    return;
}

/* 088D8CDC */
u32 func_088D8CDC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8CDC:;
    sp = sp - 16;
    a0 = LD32(a0+132);
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8CEC;
L_088D8CEC:;
    sp = sp + 16;
    return v0;
}

/* 088D8CF8 */
u32 func_088D8CF8(u32 a0)
{
    u32 v0 = 0;
L_088D8CF8:;
    v0 = LD32(a0+132);
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    return v0;
}

/* 088D8D08 */
void func_088D8D08(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8D08:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_088DFD58(a0);
    goto L_088D8D1C;
L_088D8D1C:;
    ST32(s0+132, v0);
    sp = sp + 16;
    return;
}

/* 088D8D30 */
rv_t func_088D8D30(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8D30:;
    sp = sp - 16;
    a0 = a0 + 132;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8D40;
L_088D8D40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D8D4C */
u64 func_088D8D4C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D8D4C:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 32;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D8D9C; }
    goto L_088D8D7C;
L_088D8D7C:;
    v1 = D_08B30884 - (2180);
    v0 = v1 + 2180;
    ST32(v1+2180, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_088D8D9C;
L_088D8D9C:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088D8E3C; }
    goto L_088D8DAC;
L_088D8DAC:;
    s2 = D_08B30884 - (2180);
    s0 = LD32(s2+2180);
    s1 = s2 + 2180;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088D87B8) - (-30792);
    ST8(s1+8, v0);
    cnd_ = s0 == 0;
    s3 = v1 - 30792;
    if (cnd_) { goto L_088D8DF0; }
    goto L_088D8DCC;
L_088D8DCC:;
    a1 = LD32(s0+144);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088D8E94; }
    goto L_088D8DD8;
L_088D8DD8:;
    a1 = LD32(s0+148);
    goto L_088D8DDC;
L_088D8DDC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_088D8E84; }
    goto L_088D8DE4;
L_088D8DE4:;
    a0 = LD32(s0);
    goto L_088D8DE8;
L_088D8DE8:;
    t_ = s3;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8DF0;
L_088D8DF0:;
    a0 = s1 + 0;
    { u64 r_ = func_08AB75A0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8DF8;
L_088D8DF8:;
    s0 = LD32(s2+2180);
    cnd_ = s0 == 0;
    ST8(s1+8, 0);
    if (cnd_) { goto L_088D8E24; }
    goto L_088D8E04;
L_088D8E04:;
    a1 = LD32(s0+144);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D8E74; }
    goto L_088D8E10;
L_088D8E10:;
    a1 = LD32(s0+148);
    goto L_088D8E14;
L_088D8E14:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D8E64; }
    goto L_088D8E1C;
L_088D8E1C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8E24;
L_088D8E24:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D8E54; }
    goto L_088D8E30;
L_088D8E30:;
    ST32(s1+16, 0);
    goto L_088D8E34;
L_088D8E34:;
    ST32(s1+12, 0);
    goto L_088D8E3C;
L_088D8E3C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088D8E54:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8E5C;
L_088D8E5C:;
    ST32(s1+16, 0);
    goto L_088D8E34;
L_088D8E64:;
    a0 = s1 + 0;
    func_08AB7638(a0, a1, 0, 0, 0);
    goto L_088D8E6C;
L_088D8E6C:;
    goto L_088D8E1C;
L_088D8E74:;
    a0 = s1 + 0;
    func_08AB7638(a0, a1, 0, 0, 0);
    goto L_088D8E7C;
L_088D8E7C:;
    a1 = LD32(s0+148);
    goto L_088D8E14;
L_088D8E84:;
    a2 = s3 + 0;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D8E8C;
L_088D8E8C:;
    a0 = LD32(s0);
    goto L_088D8DE8;
L_088D8E94:;
    a2 = s3 + 0;
    func_08AB751C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D8E9C;
L_088D8E9C:;
    a1 = LD32(s0+148);
    goto L_088D8DDC;
}

/* 088D8EA4 */
rv_t func_088D8EA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8EA4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088D8D4C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8EB8;
L_088D8EB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D8EC4 */
rv_t func_088D8EC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8EC4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088D8D4C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D8ED8;
L_088D8ED8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088D8EE4 */
rv_t func_088D8EE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D8EE4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AD8908 - (-30456);
    v0 = v0 & 0xff;
    t0 = D_08B30A2E - (2606);
    cnd_ = v0 != 0;
    a0 = a0 - 30456;
    if (cnd_) { goto L_088D8F60; }
    goto L_088D8F04;
L_088D8F04:;
    v1 = LD_U8(t0+2606);
    v0 = D_08AD89AC - (-30292);
    a0 = D_08AD89B4 - (-30284);
    a1 = v0 - 30292;
    a0 = a0 - 30284;
    a2 = 0 + 0;
    cnd_ = v1 == 0;
    a3 = D_08B30A2D - (2605);
    if (cnd_) { goto L_088D8F30; }
    goto L_088D8F24;
L_088D8F24:;
    v0 = LD_U8(a3+2605);
    v1 = 1;
    if (v0 != 0) a2 = v1;
    goto L_088D8F30;
L_088D8F30:;
    v0 = a2 ^ 0x1;
    ST8(t0+2606, v0);
    cnd_ = v0 != 0;
    ST8(a3+2605, v0);
    if (cnd_) { goto L_088D8F48; }
    goto L_088D8F40;
L_088D8F40:;
    v0 = D_08AD89C4 - (-30268);
    a1 = v0 - 30268;
    goto L_088D8F48;
L_088D8F48:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8F50;
L_088D8F50:;
    goto L_088D8F54;
L_088D8F54:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D8F60:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D8F68;
L_088D8F68:;
    goto L_088D8F54;
}

/* 088D8F70 */
void func_088D8F70(u32 a0)
{
    u32 v0 = 0;
L_088D8F70:;
    v0 = a0 + 24;
    ST32(a0+4, 0);
    ST8(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    ST32(v0+20, 0);
    ST32(a0, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    return;
}

/* 088D8FA8 */
void func_088D8FA8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D8FA8:;
    sp = sp - 32;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088DADF0) - (-21008);
    s3 = D_08B308CC - (2252);
    s2 = v1 - 21008;
    s0 = a0 + 0;
    s1 = LD32(a0);
    s4 = LD32(s3+2252);
    ST8(a0+8, v0);
    cnd_ = s1 == 0;
    ST32(s3+2252, a0);
    if (cnd_) { goto L_088D9010; }
    goto L_088D8FEC;
L_088D8FEC:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D91A0; }
    goto L_088D8FF8;
L_088D8FF8:;
    a1 = LD32(s1+12);
    goto L_088D8FFC;
L_088D8FFC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D9190; }
    goto L_088D9004;
L_088D9004:;
    a0 = LD32(s1);
    goto L_088D9008;
L_088D9008:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9010;
L_088D9010:;
    a0 = s0 + 0;
    func_08AB7A4C(a0, t1, t2, t3);
    goto L_088D9018;
L_088D9018:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_088D9044; }
    goto L_088D9024;
L_088D9024:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9180; }
    goto L_088D9030;
L_088D9030:;
    a1 = LD32(s1+12);
    goto L_088D9034;
L_088D9034:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9170; }
    goto L_088D903C;
L_088D903C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9044;
L_088D9044:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D9160; }
    goto L_088D9050;
L_088D9050:;
    s1 = LD32(s0+24);
    goto L_088D9054;
L_088D9054:;
    ST32(s3+2252, s4);
    s2 = s0 + 24;
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    cnd_ = s1 == 0;
    ST32(s0, 0);
    if (cnd_) { goto L_088D9090; }
    goto L_088D9070;
L_088D9070:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9150; }
    goto L_088D907C;
L_088D907C:;
    a1 = LD32(s1+12);
    goto L_088D9080;
L_088D9080:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9140; }
    goto L_088D9088;
L_088D9088:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9090;
L_088D9090:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D9130; }
    goto L_088D909C;
L_088D909C:;
    s1 = LD32(s0);
    goto L_088D90A0;
L_088D90A0:;
    ST32(s2+16, 0);
    cnd_ = s1 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_088D90CC; }
    goto L_088D90AC;
L_088D90AC:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9120; }
    goto L_088D90B8;
L_088D90B8:;
    a1 = LD32(s1+12);
    goto L_088D90BC;
L_088D90BC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9110; }
    goto L_088D90C4;
L_088D90C4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D90CC;
L_088D90CC:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D9100; }
    goto L_088D90D8;
L_088D90D8:;
    ST32(s0+16, 0);
    goto L_088D90DC;
L_088D90DC:;
    ST32(s0+12, 0);
    sp = sp + 32;
    return;
L_088D9100:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9108;
L_088D9108:;
    ST32(s0+16, 0);
    goto L_088D90DC;
L_088D9110:;
    a0 = s0 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D9118;
L_088D9118:;
    goto L_088D90C4;
L_088D9120:;
    a0 = s0 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D9128;
L_088D9128:;
    a1 = LD32(s1+12);
    goto L_088D90BC;
L_088D9130:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9138;
L_088D9138:;
    s1 = LD32(s0);
    goto L_088D90A0;
L_088D9140:;
    a0 = s2 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D9148;
L_088D9148:;
    goto L_088D9088;
L_088D9150:;
    a0 = s2 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D9158;
L_088D9158:;
    a1 = LD32(s1+12);
    goto L_088D9080;
L_088D9160:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9168;
L_088D9168:;
    s1 = LD32(s0+24);
    goto L_088D9054;
L_088D9170:;
    a0 = s0 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D9178;
L_088D9178:;
    goto L_088D903C;
L_088D9180:;
    a0 = s0 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D9188;
L_088D9188:;
    a1 = LD32(s1+12);
    goto L_088D9034;
L_088D9190:;
    a2 = s2 + 0;
    func_08AB79C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D9198;
L_088D9198:;
    a0 = LD32(s1);
    goto L_088D9008;
L_088D91A0:;
    a2 = s2 + 0;
    func_08AB79C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D91A8;
L_088D91A8:;
    a1 = LD32(s1+12);
    goto L_088D8FFC;
}

/* 088D91B0 */
void func_088D91B0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D91B0:;
    sp = sp - 16;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088DADF0) - (-21008);
    s2 = v1 - 21008;
    s0 = a0 + 0;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    ST8(a0+8, v0);
    if (cnd_) { goto L_088D9204; }
    goto L_088D91E0;
L_088D91E0:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9324; }
    goto L_088D91EC;
L_088D91EC:;
    a1 = LD32(s1+12);
    goto L_088D91F0;
L_088D91F0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088D9314; }
    goto L_088D91F8;
L_088D91F8:;
    a0 = LD32(s1);
    goto L_088D91FC;
L_088D91FC:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9204;
L_088D9204:;
    a0 = s0 + 0;
    func_08AB7A4C(a0, t1, t2, t3);
    goto L_088D920C;
L_088D920C:;
    s1 = LD32(s0);
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_088D9238; }
    goto L_088D9218;
L_088D9218:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D9304; }
    goto L_088D9224;
L_088D9224:;
    a1 = LD32(s1+12);
    goto L_088D9228;
L_088D9228:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D92F4; }
    goto L_088D9230;
L_088D9230:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9238;
L_088D9238:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D92E4; }
    goto L_088D9244;
L_088D9244:;
    s2 = LD32(s0+24);
    goto L_088D9248;
L_088D9248:;
    ST32(s0+12, 0);
    s1 = s0 + 24;
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    cnd_ = s2 == 0;
    ST32(s0, 0);
    if (cnd_) { goto L_088D9280; }
    goto L_088D9260;
L_088D9260:;
    a1 = LD32(s2+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D92D4; }
    goto L_088D926C;
L_088D926C:;
    a1 = LD32(s2+12);
    goto L_088D9270;
L_088D9270:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088D92C4; }
    goto L_088D9278;
L_088D9278:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9280;
L_088D9280:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D92B4; }
    goto L_088D928C;
L_088D928C:;
    ST32(s1, 0);
    goto L_088D9290;
L_088D9290:;
    ST32(s1+12, 0);
    ST32(s1+16, 0);
    ST32(s1+4, 0);
    sp = sp + 16;
    return;
L_088D92B4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D92BC;
L_088D92BC:;
    ST32(s1, 0);
    goto L_088D9290;
L_088D92C4:;
    a0 = s1 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D92CC;
L_088D92CC:;
    goto L_088D9278;
L_088D92D4:;
    a0 = s1 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D92DC;
L_088D92DC:;
    a1 = LD32(s2+12);
    goto L_088D9270;
L_088D92E4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D92EC;
L_088D92EC:;
    s2 = LD32(s0+24);
    goto L_088D9248;
L_088D92F4:;
    a0 = s0 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D92FC;
L_088D92FC:;
    goto L_088D9230;
L_088D9304:;
    a0 = s0 + 0;
    func_08AB7958(a0, a1, 0, 0, 0);
    goto L_088D930C;
L_088D930C:;
    a1 = LD32(s1+12);
    goto L_088D9228;
L_088D9314:;
    a2 = s2 + 0;
    func_08AB79C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D931C;
L_088D931C:;
    a0 = LD32(s1);
    goto L_088D91FC;
L_088D9324:;
    a2 = s2 + 0;
    func_08AB79C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D932C;
L_088D932C:;
    a1 = LD32(s1+12);
    goto L_088D91F0;
}

/* 088D9334 */
u32 func_088D9334(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D9334:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a0 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088D9450; }
    goto L_088D9360;
L_088D9360:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088D9394; }
    goto L_088D936C;
L_088D936C:;
    v1 = v0 + 0;
    goto L_088D9370;
L_088D9370:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088D9450; }
    goto L_088D9388;
L_088D9388:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088D9370; }
    goto L_088D9394;
L_088D9394:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D939C;
L_088D939C:;
    ST32(v0, s1);
    a2 = v0 + 0;
    v1 = v0 + 4;
    v0 = LD32(s2+4);
    ST32(a2+8, 0);
    v0 = v0 + 1;
    ST32(a2+12, 0);
    ST32(s2+4, v0);
    cnd_ = v1 == 0;
    ST32(s0, a2);
    if (cnd_) { goto L_088D9450; }
    goto L_088D93C4;
L_088D93C4:;
    v0 = D_08B308BC - (2236);
    a3 = v0 + 2236;
    a1 = LD32(a3+12);
    v0 = LD32(a3+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U8(s2+8); goto L_088D9420; }
    goto L_088D93E0;
L_088D93E0:;
    v1 = a1 + 1;
    a0 = LD32(a3+4);
    ST32(a3+12, v1);
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    v0 = 1;
    ST32(s3, v1);
    ST32(a2+4, v1);
    goto L_088D9404;
L_088D9404:;
    sp = sp + 32;
    return v0;
L_088D9420:;
    v0 = (u32)-1;
    cnd_ = v1 == 0;
    ST32(s3, v0);
    if (cnd_) { goto L_088D946C; }
    goto L_088D942C;
L_088D942C:;
    a0 = LD32(s2+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_088D9458; }
    goto L_088D9438;
L_088D9438:;
    v1 = LD32(s2+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s2+16, v1);
    goto L_088D9450;
L_088D9450:;
    v0 = 0 + 0;
    goto L_088D9404;
L_088D9458:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9460;
L_088D9460:;
    ST32(s2+12, v0);
    a0 = v0 + 0;
    goto L_088D9438;
L_088D946C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08AB76A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9478;
L_088D9478:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_088D9404; }
    goto L_088D9480;
L_088D9480:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9488;
L_088D9488:;
    v0 = 0 + 0;
    goto L_088D9404;
}

/* 088D9490 */
rv_t func_088D9490(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D9490:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088D94DC; }
    goto L_088D94B0;
L_088D94B0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088D94B8;
L_088D94B8:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_088D94E8; }
    goto L_088D94D0;
L_088D94D0:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088D94B8; }
    goto L_088D94DC;
L_088D94DC:;
    a0 = LD32(s1+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088D9554; }
    goto L_088D94E8;
L_088D94E8:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088D9540; }
    goto L_088D94F0;
L_088D94F0:;
    v0 = D_08B308BC - (2236);
    a3 = LD32(a2);
    a2 = v0 + 2236;
    a1 = LD32(a2+12);
    v1 = ~(0 | a3);
    v1 = 0 < v1;
    v0 = (s32)0 < (s32)a1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088D9534; }
    goto L_088D9518;
L_088D9518:;
    a0 = LD32(a2+4);
    v1 = a1 - 1;
    v0 = v1 << 2;
    v0 = v0 + a0;
    ST32(a2+12, v1);
    ST32(v0, a3);
    a0 = s1 + 0;
    goto L_088D9534;
L_088D9534:;
    a1 = s0 + 0;
    { rv_t r_ = func_08AB78C0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D953C;
L_088D953C:;
    v0 = 1;
    goto L_088D9540;
L_088D9540:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088D9554:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AB7790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9560;
L_088D9560:;
    a2 = v0 + 0;
    goto L_088D94E8;
}

/* 088D9568 */
void func_088D9568(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088D9568:;
    a1 = D_08B308D0 - (2256);
    a1 = a1 + 2256;
    a0 = D_08B30900 - (2304);
    v0 = a1 + 24;
    a0 = a0 + 2304;
    ST32(a0+20, a1);
    sp = sp - 64;
    v1 = D_08B30A38 - (2616);
    ST32(a0+44, v0);
    v0 = D_08B308CC - (2252);
    ST32(v0+2252, a1);
    ST32(v1+2616, 0);
    s7 = D_08AF0F80 - (3968);
    v0 = func_0890F1D0();
    goto L_088D95CC;
L_088D95CC:;
    a0 = 16;
    s0 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D95D8;
L_088D95D8:;
    s1 = v0 + 0;
    v0 = s7 + 3968;
    ST32(s1, v0);
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D95EC;
L_088D95EC:;
    ST32(s1+4, v0);
    a0 = 0 + 0;
    ST32(s1+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s1+8, s0);
    if (cnd_) { goto L_088D9618; }
    goto L_088D9600;
L_088D9600:;
    v1 = v0 + 0;
    goto L_088D9604;
L_088D9604:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D9604; }
    goto L_088D9618;
L_088D9618:;
    v1 = D_08AF1BD0 - (7120);
    v0 = v1 + 7120;
    ST32(s1, v0);
    a0 = s0 + 0;
    v0 = D_08B30A34 - (2612);
    ST32(v0+2612, s1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9634;
L_088D9634:;
    a1 = v0 + 0;
    v1 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_088D9658; }
    goto L_088D9644;
L_088D9644:;
    a0 = (u32)-1;
    goto L_088D9648;
L_088D9648:;
    v0 = v0 - 1;
    ST8(v1, 0);
    cnd_ = v0 != a0;
    v1 = v1 + 1;
    if (cnd_) { goto L_088D9648; }
    goto L_088D9658;
L_088D9658:;
    a0 = 1400;
    v0 = D_08B308A4 - (2212);
    ST32(v0+2212, a1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9668;
L_088D9668:;
    a1 = D_08B308A8 - (2216);
    ST32(a1+2216, v0);
    a0 = 0 + 0;
    goto L_088D9674;
L_088D9674:;
    v0 = LD32(a1+2216);
    v0 = v0 + a0;
    a0 = a0 + 1;
    v1 = (s32)a0 < 1400;
    cnd_ = v1 != 0;
    ST8(v0, 0);
    if (cnd_) { goto L_088D9674; }
    goto L_088D968C;
L_088D968C:;
    fp = D_08B30A08 - (2568);
    v0 = func_0890EDCC(0, 0, 0);
    goto L_088D9694;
L_088D9694:;
    v1 = D_08B30A04 - (2564);
    ST32(v1+2564, v0);
    v0 = func_0890F220();
    goto L_088D96A0;
L_088D96A0:;
    a0 = 15360;
    ST32(fp+2568, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D96AC;
L_088D96AC:;
    s6 = v0 + 0;
    v0 = D_08AECB4C - (-13492);
    f20 = BITSF(LD32(v0-13492));
    s4 = D_08B45A9C - (23196);
    s5 = 0x400000u;
    s3 = 127;
    s2 = (u32)-1;
    s5 = s5 | 0x400;
    s1 = s4 + 23196;
    s0 = s6 + 76;
    goto L_088D96D4;
L_088D96D4:;
    a0 = (u32)-1;
    v0 = func_088DCD1C(a0);
    goto L_088D96DC;
L_088D96DC:;
    ST32(s0-76, s2);
    ST32(s0-72, 0);
    cnd_ = v0 == 0;
    ST32(s0-68, s2);
    if (cnd_) { goto L_088D9A4C; }
    goto L_088D96EC;
L_088D96EC:;
    f0 = BITSF(LD32(v0+12));
    ST32(s0-64, FBITS(f0));
    f1 = BITSF(LD32(v0+8));
    ST32(s0-60, FBITS(f1));
    goto L_088D96FC;
L_088D96FC:;
    ST32(s0-48, s5);
    s3 = s3 - 1;
    f0 = BITSF(LD32(s4+23196));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    ST32(s0-44, FBITS(f0));
    ST32(s0-32, 0);
    ST32(s0-28, 0);
    ST32(s0-40, FBITS(f1));
    ST32(s0-36, FBITS(f2));
    f0 = BITSF(LD32(s4+23196));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    ST32(s0-24, FBITS(f0));
    ST32(s0-20, FBITS(f1));
    ST32(s0-16, FBITS(f2));
    f0 = BITSF(LD32(s4+23196));
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    ST32(s0-12, FBITS(f0));
    ST32(s0-8, FBITS(f1));
    ST32(s0-4, FBITS(f2));
    ST32(s0+20, 0);
    ST32(s0+16, 0);
    ST32(s0+12, 0);
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    ST32(s0, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    ST32(s0+36, FBITS(f20));
    ST32(s0+40, 0);
    cnd_ = s3 != s2;
    s0 = s0 + 120;
    if (cnd_) { goto L_088D96D4; }
    goto L_088D9788;
L_088D9788:;
    a0 = 16;
    v0 = D_08B309F4 - (2548);
    ST32(v0+2548, s6);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9798;
L_088D9798:;
    s0 = v0 + 0;
    v0 = s7 + 3968;
    ST32(s0, v0);
    a0 = 512;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D97AC;
L_088D97AC:;
    ST32(s0+4, v0);
    v1 = 128;
    a0 = 0 + 0;
    ST32(s0+12, 0);
    ST32(s0+8, v1);
    v1 = v0 + 0;
    goto L_088D97C4;
L_088D97C4:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 128;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D97C4; }
    goto L_088D97D8;
L_088D97D8:;
    v1 = D_08AF1BD0 - (7120);
    v0 = v1 + 7120;
    ST32(s0, v0);
    a0 = 16;
    v0 = D_08B309F8 - (2552);
    ST32(v0+2552, s0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D97F4;
L_088D97F4:;
    s1 = v0 + 0;
    s0 = LD32(fp+2568);
    v0 = s7 + 3968;
    ST32(s1, v0);
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D980C;
L_088D980C:;
    ST32(s1+4, v0);
    a0 = 0 + 0;
    ST32(s1+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s1+8, s0);
    if (cnd_) { goto L_088D9838; }
    goto L_088D9820;
L_088D9820:;
    v1 = v0 + 0;
    goto L_088D9824;
L_088D9824:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D9824; }
    goto L_088D9838;
L_088D9838:;
    v1 = D_08AF1BD0 - (7120);
    v0 = v1 + 7120;
    ST32(s1, v0);
    a0 = 16;
    v0 = D_08B309FC - (2556);
    ST32(v0+2556, s1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9854;
L_088D9854:;
    s1 = v0 + 0;
    v0 = D_08B30A04 - (2564);
    a0 = LD32(v0+2564);
    v1 = LD32(fp+2568);
    v0 = s7 + 3968;
    ST32(s1, v0);
    s0 = a0 - v1;
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9878;
L_088D9878:;
    ST32(s1+4, v0);
    a0 = 0 + 0;
    ST32(s1+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s1+8, s0);
    if (cnd_) { goto L_088D98A4; }
    goto L_088D988C;
L_088D988C:;
    v1 = v0 + 0;
    goto L_088D9890;
L_088D9890:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D9890; }
    goto L_088D98A4;
L_088D98A4:;
    v1 = D_08AF1BD0 - (7120);
    v0 = v1 + 7120;
    ST32(s1, v0);
    a0 = 16;
    v0 = D_08B30A00 - (2560);
    ST32(v0+2560, s1);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D98C0;
L_088D98C0:;
    s0 = v0 + 0;
    v0 = s7 + 3968;
    ST32(s0, v0);
    a0 = 8;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D98D4;
L_088D98D4:;
    ST32(s0+4, v0);
    v1 = 2;
    a0 = 0 + 0;
    ST32(s0+12, 0);
    ST32(s0+8, v1);
    v1 = v0 + 0;
    goto L_088D98EC;
L_088D98EC:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 2;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088D98EC; }
    goto L_088D9900;
L_088D9900:;
    v0 = D_08AF1BD0 - (7120);
    v1 = v0 + 7120;
    v0 = D_08B30A30 - (2608);
    ST32(v0+2608, s0);
    v0 = D_08B30A14 - (2580);
    a3 = v0 + 2580;
    ST32(s0, v1);
    v1 = D_08B30A1C - (2588);
    a2 = v1 + 2588;
    a1 = 0 + 0;
    goto L_088D9928;
L_088D9928:;
    v0 = a1 << 2;
    a1 = a1 + 1;
    a0 = v0 + a2;
    v1 = a1 < 0x2u;
    v0 = v0 + a3;
    ST32(v0, 0);
    cnd_ = v1 != 0;
    ST32(a0, 0);
    if (cnd_) { goto L_088D9928; }
    goto L_088D9948;
L_088D9948:;
    a0 = 0x8340;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9950;
L_088D9950:;
    v1 = D_08B30A3C - (2620);
    ST32(v1+2620, v0);
    v1 = D_08AECB50 - (-13488);
    a0 = v0 + 0;
    f1 = BITSF(LD32(v1-13488));
    v0 = D_08AECB4C - (-13492);
    f0 = BITSF(LD32(v0-13492));
    a1 = (u32)-1;
    v0 = 1399;
    goto L_088D9974;
L_088D9974:;
    v0 = v0 - 1;
    ST32(a0, a1);
    ST32(a0+4, 0);
    ST32(a0+8, FBITS(f0));
    ST32(a0+12, FBITS(f0));
    ST32(a0+16, FBITS(f0));
    ST32(a0+20, FBITS(f1));
    cnd_ = (s32)v0 >= 0;
    a0 = a0 + 24;
    if (cnd_) { goto L_088D9974; }
    goto L_088D9998;
L_088D9998:;
    s0 = 0 + 0;
    func_088DF984(0, 0, 0);
    goto L_088D99A0;
L_088D99A0:;
    func_088D4C44(0, 0, 0);
    goto L_088D99A8;
L_088D99A8:;
    func_088D8950();
    goto L_088D99B0;
L_088D99B0:;
    func_088D79CC(0, 0, 0);
    goto L_088D99B8;
L_088D99B8:;
    func_088D5954();
    goto L_088D99C0;
L_088D99C0:;
    func_088E13F4(0, 0, 0);
    goto L_088D99C8;
L_088D99C8:;
    func_08A650B0(0, 0, 0);
    goto L_088D99D0;
L_088D99D0:;
    func_088D9DB0();
    goto L_088D99D8;
L_088D99D8:;
    v0 = D_08B30A24 - (2596);
    s1 = v0 + 2596;
    goto L_088D99E0;
L_088D99E0:;
    a0 = s0 + 0;
    s0 = s0 + 1;
    f0 = func_0890EF9C();
    goto L_088D99EC;
L_088D99EC:;
    v0 = (s32)s0 < 2;
    ST32(s1, FBITS(f0));
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_088D99E0; }
    goto L_088D99FC;
L_088D99FC:;
    a0 = D_08AD89CC - (-30260);
    a1 = ((u32)(uintptr_t)func_088D8EE4) - (-28956);
    a0 = a0 - 30260;
    a1 = a1 - 28956;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_088D9A18;
L_088D9A18:;
    sp = sp + 64;
    return;
L_088D9A4C:;
    ST32(s0-60, FBITS(f20));
    ST32(s0-64, FBITS(f20));
    goto L_088D96FC;
}

/* 088D9A58 */
void func_088D9A58(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D9A58:;
    sp = sp - 16;
    func_088D8B20(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D9A68;
L_088D9A68:;
    s0 = D_08B308CC - (2252);
    func_088DFAE0(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9A70;
L_088D9A70:;
    func_088D4D80(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9A78;
L_088D9A78:;
    func_088D9CE0();
    goto L_088D9A80;
L_088D9A80:;
    func_088D8958(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9A88;
L_088D9A88:;
    func_088D59A4();
    goto L_088D9A90;
L_088D9A90:;
    func_088D7A34();
    goto L_088D9A98;
L_088D9A98:;
    func_088E1494();
    goto L_088D9AA0;
L_088D9AA0:;
    a0 = D_08B30900 - (2304);
    a0 = a0 + 2304;
    func_088D91B0(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9AAC;
L_088D9AAC:;
    v0 = D_08B308D0 - (2256);
    v0 = v0 + 2256;
    a0 = v0 + 0;
    ST32(s0+2252, v0);
    func_088D91B0(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9AC0;
L_088D9AC0:;
    ST32(s0+2252, 0);
    { u64 r_ = func_088DCBD4(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9AC8;
L_088D9AC8:;
    v0 = D_08B30A34 - (2612);
    a0 = LD32(v0+2612);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088D9C04; }
    goto L_088D9AD8;
L_088D9AD8:;
    v0 = D_08B308A4 - (2212);
    goto L_088D9ADC;
L_088D9ADC:;
    a0 = LD32(v0+2212);
    v1 = D_08B30A38 - (2616);
    cnd_ = a0 != 0;
    ST32(v1+2616, 0);
    if (cnd_) { goto L_088D9BF4; }
    goto L_088D9AEC;
L_088D9AEC:;
    v0 = D_08B308A8 - (2216);
    goto L_088D9AF0;
L_088D9AF0:;
    a0 = LD32(v0+2216);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D9BE4; }
    goto L_088D9AFC;
L_088D9AFC:;
    v0 = D_08B309F4 - (2548);
    goto L_088D9B00;
L_088D9B00:;
    a0 = LD32(v0+2548);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D9BD4; }
    goto L_088D9B0C;
L_088D9B0C:;
    v0 = D_08B309F8 - (2552);
    goto L_088D9B10;
L_088D9B10:;
    a0 = LD32(v0+2552);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088D9BC0; }
    goto L_088D9B1C;
L_088D9B1C:;
    v0 = D_08B309FC - (2556);
    goto L_088D9B20;
L_088D9B20:;
    a0 = LD32(v0+2556);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088D9BAC; }
    goto L_088D9B2C;
L_088D9B2C:;
    v0 = D_08B30A00 - (2560);
    goto L_088D9B30;
L_088D9B30:;
    a0 = LD32(v0+2560);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088D9B98; }
    goto L_088D9B3C;
L_088D9B3C:;
    v0 = D_08B30A30 - (2608);
    goto L_088D9B40;
L_088D9B40:;
    a0 = LD32(v0+2608);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_088D9B84; }
    goto L_088D9B4C;
L_088D9B4C:;
    s0 = D_08B30A3C - (2620);
    a0 = LD32(s0+2620);
    goto L_088D9B54;
L_088D9B54:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088D9B74; }
    goto L_088D9B5C;
L_088D9B5C:;
    ST32(s0+2620, 0);
    func_0890EDEC(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_088D9B64;
L_088D9B64:;
    sp = sp + 16;
    return;
L_088D9B74:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9B7C;
L_088D9B7C:;
    goto L_088D9B5C;
L_088D9B84:;
    v0 = LD32(v1+4);
    t_ = v0;
    s0 = D_08B30A3C - (2620);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9B90;
L_088D9B90:;
    a0 = LD32(s0+2620);
    goto L_088D9B54;
L_088D9B98:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9BA4;
L_088D9BA4:;
    v0 = D_08B30A30 - (2608);
    goto L_088D9B40;
L_088D9BAC:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9BB8;
L_088D9BB8:;
    v0 = D_08B30A00 - (2560);
    goto L_088D9B30;
L_088D9BC0:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9BCC;
L_088D9BCC:;
    v0 = D_08B309FC - (2556);
    goto L_088D9B20;
L_088D9BD4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9BDC;
L_088D9BDC:;
    v0 = D_08B309F8 - (2552);
    goto L_088D9B10;
L_088D9BE4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9BEC;
L_088D9BEC:;
    v0 = D_08B309F4 - (2548);
    goto L_088D9B00;
L_088D9BF4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088D9BFC;
L_088D9BFC:;
    v0 = D_08B308A8 - (2216);
    goto L_088D9AF0;
L_088D9C04:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9C10;
L_088D9C10:;
    v0 = D_08B308A4 - (2212);
    goto L_088D9ADC;
}

/* 088D9C18 */
void func_088D9C18(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D9C18:;
    sp = sp - 32;
    func_088D8AFC(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088D9C28;
L_088D9C28:;
    func_088DFA58();
    goto L_088D9C30;
L_088D9C30:;
    func_088D4D00(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9C38;
L_088D9C38:;
    func_088D9CE0();
    goto L_088D9C40;
L_088D9C40:;
    func_088E152C();
    goto L_088D9C48;
L_088D9C48:;
    func_088D59E8();
    goto L_088D9C50;
L_088D9C50:;
    v0 = D_08B309F8 - (2552);
    a0 = LD32(v0+2552);
    ST32(sp+4, 0);
    v1 = ((u32)(uintptr_t)func_088DB0B8) - (-20296);
    s0 = v1 - 20296;
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D9CAC; }
    goto L_088D9C78;
L_088D9C78:;
    a0 = D_08B30900 - (2304);
    goto L_088D9C7C;
L_088D9C7C:;
    a0 = a0 + 2304;
    func_088D91B0(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9C84;
L_088D9C84:;
    func_0890EE08(0, 0, 0, 0, 0, 0, 0);
    goto L_088D9C8C;
L_088D9C8C:;
    v0 = D_08AECB54 - (-13484);
    f12 = BITSF(LD32(v0-13484));
    a0 = 1;
    func_088DA374(a0, f12);
    goto L_088D9C9C;
L_088D9C9C:;
    sp = sp + 32;
    return;
L_088D9CAC:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9CC8;
L_088D9CC8:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D9CAC; }
    goto L_088D9CD8;
L_088D9CD8:;
    a0 = D_08B30900 - (2304);
    goto L_088D9C7C;
}

/* 088D9CE0 */
void func_088D9CE0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D9CE0:;
    sp = sp - 32;
    v0 = D_08B309F8 - (2552);
    v1 = ((u32)(uintptr_t)func_088D9D58) - (-25256);
    s0 = v1 - 25256;
    a0 = LD32(v0+2552);
    ST32(sp+4, 0);
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D9D24; }
    goto L_088D9D14;
L_088D9D14:;
    goto L_088D9D18;
L_088D9D18:;
    sp = sp + 32;
    return;
L_088D9D24:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9D40;
L_088D9D40:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088D9D24; }
    goto L_088D9D50;
L_088D9D50:;
    goto L_088D9D18;
}

/* 088D9D58 */
rv_t func_088D9D58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D9D58:;
    v1 = a0 << 4;
    v1 = v1 - a0;
    sp = sp - 32;
    a1 = v1 << 3;
    v1 = (u32)-1;
    cnd_ = a0 == v1;
    ST32(sp, a0);
    if (cnd_) { goto L_088D9D94; }
    goto L_088D9D78;
L_088D9D78:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a1 + v1;
    v0 = LD32(v1+28);
    v0 = v0 & 0x1000;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088D9DA0; }
    goto L_088D9D94;
L_088D9D94:;
    goto L_088D9D98;
L_088D9D98:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088D9DA0:;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9DA8;
L_088D9DA8:;
    goto L_088D9D98;
}

/* 088D9DB0 */
void func_088D9DB0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D9DB0:;
    v0 = D_08B30900 - (2304);
    sp = sp - 16;
    v0 = v0 + 2304;
    v1 = D_08B308CC - (2252);
    ST32(v1+2252, v0);
    func_0890EE24();
    goto L_088D9DCC;
L_088D9DCC:;
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    func_088DF20C(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9DD8;
L_088D9DD8:;
    a0 = D_08B30750 - (1872);
    a0 = a0 + 1872;
    func_088D28C0(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9DE4;
L_088D9DE4:;
    sp = sp + 16;
    return;
}

/* 088D9DF0 */
void func_088D9DF0(u32 a0, float f12)
{
    u32 v0 = 0, s0 = 0;
    float f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088D9DF0:;
    sp = sp - 32;
    s0 = a0 + 0;
    s0 = s0 << 2;
    f20 = f12;
    func_0890EF94();
    goto L_088D9E10;
L_088D9E10:;
    v0 = D_08B30A24 - (2596);
    v0 = v0 + 2596;
    s0 = s0 + v0;
    ST32(s0, FBITS(f20));
    sp = sp + 32;
    return;
}

/* 088D9E34 */
float func_088D9E34(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_088D9E34:;
    v0 = D_08B30A24 - (2596);
    v0 = v0 + 2596;
    a0 = a0 << 2;
    a0 = a0 + v0;
    f0 = BITSF(LD32(a0));
    return f0;
}

/* 088D9E4C */
void func_088D9E4C(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088D9E4C:;
    sp = sp - 16;
    a1 = D_08B30A10 - (2576);
    v0 = LD32(a1+2576);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088D9E70; }
    goto L_088D9E64;
L_088D9E64:;
    ST32(a1+2576, a0);
    func_0890EF8C();
    goto L_088D9E6C;
L_088D9E6C:;
    goto L_088D9E70;
L_088D9E70:;
    sp = sp + 16;
    return;
}

/* 088D9E78 */
void func_088D9E78(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088D9E78:;
    sp = sp - 48;
    func_08A650D0();
    goto L_088D9E94;
L_088D9E94:;
    a0 = 1;
    f0 = func_088D9E34(a0);
    goto L_088D9E9C;
L_088D9E9C:;
    v0 = D_08B30A2E - (2606);
    v1 = LD_U8(v0+2606);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088DA178; }
    goto L_088D9EAC;
L_088D9EAC:;
    f12 = BITSF(0);
    fcc = FCMP(f0, f12, 2);
    cnd_ = !fcc;
    v0 = D_08B308AC - (2220);
    if (cnd_) { goto L_088DA164; }
    goto L_088D9EC0;
L_088D9EC0:;
    a0 = 0 + 0;
    f0 = func_088D9E34(a0);
    goto L_088D9EC8;
L_088D9EC8:;
    v0 = D_08B30A2D - (2605);
    v1 = LD_U8(v0+2605);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088DA138; }
    goto L_088D9ED8;
L_088D9ED8:;
    f12 = BITSF(0);
    fcc = FCMP(f0, f12, 2);
    cnd_ = !fcc;
    v0 = D_08B308B0 - (2224);
    if (cnd_) { goto L_088DA124; }
    goto L_088D9EEC;
L_088D9EEC:;
    v0 = D_08B16138 - (24888);
    goto L_088D9EF0;
L_088D9EF0:;
    v1 = LD_U8(v0+24888);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088DA114; }
    goto L_088D9EFC;
L_088D9EFC:;
    func_088DA2F8();
    goto L_088D9F04;
L_088D9F04:;
    func_088DFBE4();
    goto L_088D9F0C;
L_088D9F0C:;
    func_088D4E80(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9F14;
L_088D9F14:;
    v1 = D_08B30884 - (2180);
    s0 = LD32(v1+2180);
    v0 = D_08B308A0 - (2208);
    s2 = v1 + 2180;
    ST32(v0+2208, 0);
    v1 = ((u32)(uintptr_t)func_088D85A8) - (-31320);
    v0 = 1;
    s1 = v1 - 31320;
    cnd_ = s0 == 0;
    ST8(s2+8, v0);
    if (cnd_) { goto L_088D9F60; }
    goto L_088D9F3C;
L_088D9F3C:;
    a1 = LD32(s0+144);
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088DA104; }
    goto L_088D9F48;
L_088D9F48:;
    a1 = LD32(s0+148);
    goto L_088D9F4C;
L_088D9F4C:;
    cnd_ = a1 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088DA0F4; }
    goto L_088D9F54;
L_088D9F54:;
    a0 = LD32(s0);
    goto L_088D9F58;
L_088D9F58:;
    t_ = s1;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088D9F60;
L_088D9F60:;
    v0 = LD32(s2+12);
    cnd_ = v0 == 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_088D9F8C; }
    goto L_088D9F6C;
L_088D9F6C:;
    v0 = LD32(s2+16);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088DA0B8; }
    goto L_088D9F78;
L_088D9F78:;
    a0 = LD32(s1+12);
    goto L_088D9F7C;
L_088D9F7C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DA0A8; }
    goto L_088D9F84;
L_088D9F84:;
    ST32(s1+16, 0);
    goto L_088D9F88;
L_088D9F88:;
    ST32(s1+12, 0);
    goto L_088D9F8C;
L_088D9F8C:;
    s1 = D_08B309F8 - (2552);
    ST8(s2+8, 0);
    func_088D5D9C();
    goto L_088D9F98;
L_088D9F98:;
    func_088D7A80();
    goto L_088D9FA0;
L_088D9FA0:;
    func_088E1550(0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088D9FA8;
L_088D9FA8:;
    ST32(sp+4, 0);
    v0 = ((u32)(uintptr_t)func_088DA424) - (-23516);
    s0 = v0 - 23516;
    v1 = LD32(s1+2552);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA074; }
    goto L_088D9FCC;
L_088D9FCC:;
    v0 = D_08B16140 - (24896);
    goto L_088D9FD0;
L_088D9FD0:;
    v1 = LD_U8(v0+24896);
    cnd_ = v1 == 0;
    a1 = D_08B1613C - (24892);
    if (cnd_) { goto L_088DA01C; }
    goto L_088D9FDC;
L_088D9FDC:;
    v0 = D_08B285A4 - (-31324);
    f1 = BITSF(LD32(v0-31324));
    f0 = BITSF(LD32(a1+24892));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    v0 = LD32(s1+2552);
    if (cnd_) { goto L_088DA01C; }
    goto L_088D9FF8;
L_088D9FF8:;
    ST32(sp+4, 0);
    v1 = ((u32)(uintptr_t)func_088DA694) - (-22892);
    s0 = v1 - 22892;
    a0 = LD32(v0+12);
    ST32(a1+24892, FBITS(f1));
    a0 = a0 - 1;
    ST32(sp, v0);
    cnd_ = (s32)a0 >= 0;
    ST32(sp+4, a0);
    if (cnd_) { goto L_088DA040; }
    goto L_088DA01C;
L_088DA01C:;
    func_0890EE40();
    goto L_088DA024;
L_088DA024:;
    sp = sp + 48;
    return;
L_088DA040:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA05C;
L_088DA05C:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA040; }
    goto L_088DA06C;
L_088DA06C:;
    goto L_088DA01C;
L_088DA074:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA090;
L_088DA090:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA074; }
    goto L_088DA0A0;
L_088DA0A0:;
    v0 = D_08B16140 - (24896);
    goto L_088D9FD0;
L_088DA0A8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA0B0;
L_088DA0B0:;
    ST32(s1+16, 0);
    goto L_088D9F88;
L_088DA0B8:;
    v1 = LD32(s1+12);
    goto L_088DA0BC;
L_088DA0BC:;
    v0 = s0 << 2;
    a0 = s1 + 0;
    v0 = v0 + v1;
    a1 = LD32(v0);
    s0 = s0 + 1;
    v0 = func_08AB7434(a0, a1);
    goto L_088DA0D4;
L_088DA0D4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA0DC;
L_088DA0DC:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_088DA0BC; }
    goto L_088DA0EC;
L_088DA0EC:;
    a0 = LD32(s1+12);
    goto L_088D9F7C;
L_088DA0F4:;
    a2 = s1 + 0;
    func_08AB751C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DA0FC;
L_088DA0FC:;
    a0 = LD32(s0);
    goto L_088D9F58;
L_088DA104:;
    a2 = s1 + 0;
    func_08AB751C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DA10C;
L_088DA10C:;
    a1 = LD32(s0+148);
    goto L_088D9F4C;
L_088DA114:;
    func_088DA1A0();
    goto L_088DA11C;
L_088DA11C:;
    goto L_088D9EFC;
L_088DA124:;
    a0 = 0 + 0;
    ST32(v0+2224, FBITS(f0));
    func_088D9DF0(a0, f12);
    goto L_088DA130;
L_088DA130:;
    v0 = D_08B16138 - (24888);
    goto L_088D9EF0;
L_088DA138:;
    f20 = BITSF(0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    v0 = D_08B16138 - (24888);
    if (cnd_) { goto L_088D9EF0; }
    goto L_088DA14C;
L_088DA14C:;
    s0 = D_08B308B0 - (2224);
    f12 = BITSF(LD32(s0+2224));
    a0 = 0 + 0;
    func_088D9DF0(a0, f12);
    goto L_088DA15C;
L_088DA15C:;
    ST32(s0+2224, FBITS(f20));
    goto L_088D9EEC;
L_088DA164:;
    a0 = 1;
    ST32(v0+2220, FBITS(f0));
    func_088D9DF0(a0, f12);
    goto L_088DA170;
L_088DA170:;
    goto L_088D9EC0;
L_088DA178:;
    f20 = BITSF(0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    s0 = D_08B308AC - (2220);
    if (cnd_) { goto L_088D9EC0; }
    goto L_088DA18C;
L_088DA18C:;
    f12 = BITSF(LD32(s0+2220));
    a0 = 1;
    func_088D9DF0(a0, f12);
    goto L_088DA198;
L_088DA198:;
    ST32(s0+2220, FBITS(f20));
    goto L_088D9EC0;
}

/* 088DA1A0 */
void func_088DA1A0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DA1A0:;
    sp = sp - 16;
    v0 = D_08B15A00 - (23040);
    s1 = D_08B30930 - (2352);
    t1 = 0 + 0;
    a0 = LD32(v0+23040);
    cnd_ = (s32)a0 <= 0;
    ST32(s1+2352, 0);
    if (cnd_) { goto L_088DA278; }
    goto L_088DA1CC;
L_088DA1CC:;
    v0 = D_08B230AC - (12460);
    s3 = D_08B15A04 - (23044);
    s2 = D_08B159FC - (23036);
    s0 = v0 + 12460;
    t0 = LD32(s3+23044);
    v0 = D_08B30964 - (2404);
    a1 = LD32(s2+23036);
    v1 = D_08B30934 - (2356);
    t8 = v0 + 2404;
    v0 = D_08B22E88 - (11912);
    t9 = v1 + 2356;
    t5 = a0 + 0;
    t3 = v0 + 11912;
    t7 = D_08B230A8 - (12456);
    t4 = 1;
    t6 = D_08B15A0C - (23052);
    a3 = 0 + 0;
    v0 = a3 << 1;
    goto L_088DA214;
L_088DA214:;
    v1 = a3 << 3;
    v0 = v0 + a3;
    v1 = v1 + a3;
    v0 = v0 << 2;
    v1 = v1 << 2;
    a2 = v0 + t9;
    cnd_ = t1 == t0;
    v1 = v1 + t8;
    if (cnd_) { goto L_088DA24C; }
    goto L_088DA234;
L_088DA234:;
    v0 = t4 << (t1 & 31);
    ST8(t6+23052, t4);
    t0 = t1 + 0;
    a1 = t3 + 0;
    ST8(s0+4, t4);
    ST8(t7+12456, v0);
    goto L_088DA24C;
L_088DA24C:;
    v0 = LD_U8(a1+132);
    t1 = t1 + 1;
    a0 = a1 + 12;
    t2 = (s32)t1 < (s32)t5;
    cnd_ = v0 != 0;
    t3 = t3 + 136;
    if (cnd_) { goto L_088DA290; }
    goto L_088DA264;
L_088DA264:;
    cnd_ = t2 != 0;
    v0 = a3 << 1;
    if (cnd_) { goto L_088DA214; }
    goto L_088DA26C;
L_088DA26C:;
    ST32(s1+2352, a3);
    ST32(s2+23036, a1);
    ST32(s3+23044, t0);
    goto L_088DA278;
L_088DA278:;
    sp = sp + 16;
    return;
L_088DA290:;
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    ST32(a2, FBITS(f1));
    a3 = a3 + 1;
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    f0 = BITSF(LD32(a0+32));
    f1 = BITSF(LD32(a1+12));
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    f4 = BITSF(LD32(a0+12));
    f5 = BITSF(LD32(a0+16));
    f6 = BITSF(LD32(a0+20));
    f7 = BITSF(LD32(a0+24));
    f8 = BITSF(LD32(a0+28));
    ST32(v1+32, FBITS(f0));
    ST32(v1, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f3));
    ST32(v1+12, FBITS(f4));
    ST32(v1+16, FBITS(f5));
    ST32(v1+20, FBITS(f6));
    ST32(v1+24, FBITS(f7));
    ST32(v1+28, FBITS(f8));
    goto L_088DA264;
}

/* 088DA2F8 */
void func_088DA2F8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DA2F8:;
    sp = sp - 32;
    s3 = D_08B30930 - (2352);
    v0 = LD32(s3+2352);
    s2 = 0 + 0;
    s1 = 0 + 0;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_088DA350; }
    goto L_088DA324;
L_088DA324:;
    v0 = D_08B30934 - (2356);
    s0 = v0 + 2356;
    goto L_088DA32C;
L_088DA32C:;
    a0 = s0 + 0;
    v0 = func_088D78FC(a0);
    goto L_088DA334;
L_088DA334:;
    v1 = LD32(s3+2352);
    a0 = LD32(v0);
    s1 = s1 + 1;
    v1 = (s32)s1 < (s32)v1;
    if (a0 != 0) s2 = a0;
    cnd_ = v1 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_088DA32C; }
    goto L_088DA350;
L_088DA350:;
    a0 = s2 + 0;
    func_088D9E4C(a0);
    goto L_088DA358;
L_088DA358:;
    sp = sp + 32;
    return;
}

/* 088DA374 */
void func_088DA374(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DA374:;
    sp = sp - 32;
    s0 = a0 & 0xff;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088DA3D4; }
    goto L_088DA38C;
L_088DA38C:;
    a1 = D_08B1613C - (24892);
    f0 = BITSF(LD32(a1+24892));
    fcc = FCMP(f12, f0, 2);
    cnd_ = fcc;
    v0 = D_08B309F8 - (2552);
    if (cnd_) { goto L_088DA3CC; }
    goto L_088DA3A4;
L_088DA3A4:;
    a0 = LD32(v0+2552);
    ST32(sp+4, 0);
    v0 = ((u32)(uintptr_t)func_088DA694) - (-22892);
    s1 = v0 - 22892;
    v1 = LD32(a0+12);
    ST32(a1+24892, FBITS(f12));
    v1 = v1 - 1;
    ST32(sp, a0);
    cnd_ = (s32)v1 >= 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_088DA3F0; }
    goto L_088DA3CC;
L_088DA3CC:;
    func_0890EE40();
    goto L_088DA3D4;
L_088DA3D4:;
    v0 = D_08B16140 - (24896);
    ST8(v0+24896, s0);
    sp = sp + 32;
    return;
L_088DA3F0:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s1;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA40C;
L_088DA40C:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA3F0; }
    goto L_088DA41C;
L_088DA41C:;
    goto L_088DA3CC;
}

/* 088DA424 */
rv_t func_088DA424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DA424:;
    sp = sp - 32;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    ST32(sp, a0);
    if (cnd_) { goto L_088DA548; }
    goto L_088DA440;
L_088DA440:;
    v1 = D_08B309F4 - (2548);
    a1 = LD32(v1+2548);
    v0 = a0 << 4;
    v0 = v0 - a0;
    v0 = v0 << 3;
    s0 = a1 + v0;
    v1 = LD32(s0+28);
    v0 = v1 & 0x1000;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DA66C; }
    goto L_088DA468;
L_088DA468:;
    v0 = v1 & 0x100;
    cnd_ = v0 != 0;
    v0 = D_08AECB58 - (-13480);
    if (cnd_) { goto L_088DA484; }
    goto L_088DA474;
L_088DA474:;
    a0 = LD32(s0);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = D_08AECB58 - (-13480);
    if (cnd_) { goto L_088DA52C; }
    goto L_088DA484;
L_088DA484:;
    a0 = LD32(s0+28);
    f1 = BITSF(LD32(v0-13480));
    v0 = D_08AECB5C - (-13476);
    f0 = BITSF(LD32(v0-13476));
    v1 = a0 & 0x200;
    ST32(sp+12, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_088DA634; }
    goto L_088DA4A8;
L_088DA4A8:;
    v0 = a0 & 0x2000;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DA624; }
    goto L_088DA4B4;
L_088DA4B4:;
    f0 = BITSF(LD32(s0+12));
    a0 = LD32(sp);
    a1 = sp + 4;
    ST32(sp+4, FBITS(f0));
    v0 = func_08A650E0();
    goto L_088DA4C8;
L_088DA4C8:;
    s1 = v0 + 0;
    goto L_088DA4CC;
L_088DA4CC:;
    v1 = LD32(s0+28);
    v0 = 0x10000u;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v0 = v1 & 0x100;
    if (cnd_) { goto L_088DA4F0; }
    goto L_088DA4E0;
L_088DA4E0:;
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(s0+24));
    ST32(sp+8, FBITS(f0));
    ST32(sp+12, FBITS(f1));
    goto L_088DA4F0;
L_088DA4F0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DA5D0; }
    goto L_088DA4F8;
L_088DA4F8:;
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD_U8(s0+28); goto L_088DA5C0; }
    goto L_088DA500;
L_088DA500:;
    a0 = LD32(s0);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    ST8(s0+28, 0);
    if (cnd_) { goto L_088DA5A4; }
    goto L_088DA510;
L_088DA510:;
    v0 = D_08B30A2C - (2604);
    v1 = LD_U8(v0+2604);
    cnd_ = v1 == 0;
    f12 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_088DA590; }
    goto L_088DA520;
L_088DA520:;
    f12 = BITSF(LD32(sp+4));
    v0 = func_088DCDF4(f12);
    goto L_088DA528;
L_088DA528:;
    a0 = LD32(s0);
    goto L_088DA52C;
L_088DA52C:;
    s1 = (u32)-1;
    cnd_ = a0 == s1;
    if (cnd_) { goto L_088DA54C; }
    goto L_088DA538;
L_088DA538:;
    v0 = LD_U8(s0+28);
    v0 = v0 < 0xbu;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DA55C; }
    goto L_088DA548;
L_088DA548:;
    goto L_088DA54C;
L_088DA54C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DA55C:;
    func_0890EF00(a0);
    goto L_088DA564;
L_088DA564:;
    a0 = LD32(s0);
    f0 = func_088DC978(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DA56C;
L_088DA56C:;
    v0 = D_08B308A8 - (2216);
    v1 = LD32(v0+2216);
    a0 = LD32(s0+8);
    ST32(s0, s1);
    v1 = v1 + a0;
    v0 = LD_U8(v1);
    v0 = v0 - 1;
    ST8(v1, v0);
    goto L_088DA548;
L_088DA590:;
    f13 = BITSF(LD32(sp+8));
    f14 = BITSF(LD32(sp+12));
    { rv_t r_ = func_088DCDB4(a0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA59C;
L_088DA59C:;
    a0 = LD32(s0);
    goto L_088DA52C;
L_088DA5A4:;
    a0 = LD32(sp);
    f12 = BITSF(LD32(sp+4));
    f13 = BITSF(LD32(sp+8));
    f14 = BITSF(LD32(sp+12));
    { rv_t r_ = func_088DB584(a0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA5B8;
L_088DA5B8:;
    a0 = LD32(s0);
    goto L_088DA52C;
L_088DA5C0:;
    a0 = LD32(s0);
    v0 = v0 + 1;
    ST8(s0+28, v0);
    goto L_088DA52C;
L_088DA5D0:;
    cnd_ = s1 != 0;
    v0 = D_08B30A2C - (2604);
    if (cnd_) { goto L_088DA60C; }
    goto L_088DA5D8;
L_088DA5D8:;
    v1 = LD_U8(v0+2604);
    cnd_ = v1 == 0;
    a0 = LD32(s0);
    if (cnd_) { goto L_088DA5F4; }
    goto L_088DA5E4;
L_088DA5E4:;
    f12 = BITSF(LD32(sp+4));
    v0 = func_088DCDF4(f12);
    goto L_088DA5EC;
L_088DA5EC:;
    ST8(s0+28, 0);
    goto L_088DA528;
L_088DA5F4:;
    f12 = BITSF(LD32(sp+4));
    f13 = BITSF(LD32(sp+8));
    f14 = BITSF(LD32(sp+12));
    { rv_t r_ = func_088DCDB4(a0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA604;
L_088DA604:;
    ST8(s0+28, 0);
    goto L_088DA528;
L_088DA60C:;
    a0 = LD32(s0);
    { u64 r_ = func_0890EEE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA614;
L_088DA614:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = D_08B30A2C - (2604); goto L_088DA5D8; }
    goto L_088DA61C;
L_088DA61C:;
    v0 = LD_U8(s0+28);
    goto L_088DA5C0;
L_088DA624:;
    a0 = (a0 >> 14) & 0x3;
    f0 = func_088DC7D4(a0);
    goto L_088DA62C;
L_088DA62C:;
    ST32(sp+8, FBITS(f0));
    goto L_088DA4B4;
L_088DA634:;
    a0 = LD32(sp);
    a1 = sp + 4;
    a2 = sp + 8;
    a3 = sp + 12;
    v0 = func_088DC190(a0, a1, a2, a3, f12);
    goto L_088DA648;
L_088DA648:;
    a0 = LD32(sp);
    a1 = sp + 4;
    a2 = sp + 8;
    a3 = sp + 12;
    s1 = v0 + 0;
    v0 = func_08A650D8();
    goto L_088DA660;
L_088DA660:;
    v0 = s1 & v0;
    s1 = 0 < v0;
    goto L_088DA4CC;
L_088DA66C:;
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA674;
L_088DA674:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DA684; }
    goto L_088DA67C;
L_088DA67C:;
    v1 = LD32(s0+28);
    goto L_088DA468;
L_088DA684:;
    a0 = sp + 0;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA68C;
L_088DA68C:;
    goto L_088DA54C;
}

/* 088DA694 */
rv_t func_088DA694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DA694:;
    v0 = a0 << 4;
    sp = sp - 16;
    v0 = v0 - a0;
    a2 = (u32)-1;
    cnd_ = a0 == a2;
    a1 = v0 << 3;
    if (cnd_) { goto L_088DA700; }
    goto L_088DA6B0;
L_088DA6B0:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v0 = 0x20000u;
    a1 = a1 + v1;
    a0 = LD32(a1+28);
    v1 = 0x400000u;
    v1 = a0 & v1;
    a0 = a0 & v0;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DA704; }
    goto L_088DA6D8;
L_088DA6D8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088DA704; }
    goto L_088DA6E0;
L_088DA6E0:;
    v0 = LD32(a1);
    cnd_ = v0 == a2;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DA704; }
    goto L_088DA6EC;
L_088DA6EC:;
    v0 = D_08B1613C - (24892);
    f12 = BITSF(LD32(v0+24892));
    f0 = BITSF(LD32(a1+16));
    f12 = f12 * f0;
    { rv_t r_ = func_0890EF70(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA700;
L_088DA700:;
    goto L_088DA704;
L_088DA704:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DA70C */
rv_t func_088DA70C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DA70C:;
    v0 = a0 << 4;
    sp = sp - 16;
    v0 = v0 - a0;
    a2 = (u32)-1;
    a3 = 0x20000u;
    cnd_ = a0 == a2;
    a1 = v0 << 3;
    if (cnd_) { goto L_088DA764; }
    goto L_088DA72C;
L_088DA72C:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a1 + v1;
    v0 = LD32(v1+28);
    a0 = v0 | a3;
    v0 = v0 & a3;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DA768; }
    goto L_088DA74C;
L_088DA74C:;
    v0 = LD32(v1);
    ST32(v1+28, a0);
    cnd_ = v0 == a2;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DA768; }
    goto L_088DA75C;
L_088DA75C:;
    { u64 r_ = func_0890EF1C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA764;
L_088DA764:;
    goto L_088DA768;
L_088DA768:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DA770 */
rv_t func_088DA770(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DA770:;
    v0 = a0 << 4;
    sp = sp - 16;
    v0 = v0 - a0;
    a2 = (u32)-1;
    cnd_ = a0 == a2;
    a1 = v0 << 3;
    if (cnd_) { goto L_088DA7C4; }
    goto L_088DA78C;
L_088DA78C:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v0 = 0x20000u;
    a0 = a1 + v1;
    v1 = LD32(a0+28);
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v1 = (v1 & ~(0x1u << 17)) | ((0 & 0x1) << 17);
    if (cnd_) { goto L_088DA7C4; }
    goto L_088DA7AC;
L_088DA7AC:;
    v0 = LD32(a0);
    ST32(a0+28, v1);
    cnd_ = v0 == a2;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DA7C4; }
    goto L_088DA7BC;
L_088DA7BC:;
    { u64 r_ = func_0890EF38(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA7C4;
L_088DA7C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DA7D0 */
void func_088DA7D0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DA7D0:;
    sp = sp - 32;
    v0 = D_08B309F8 - (2552);
    v1 = ((u32)(uintptr_t)func_088DA70C) - (-22772);
    s0 = v1 - 22772;
    a0 = LD32(v0+2552);
    ST32(sp+4, 0);
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA814; }
    goto L_088DA804;
L_088DA804:;
    goto L_088DA808;
L_088DA808:;
    sp = sp + 32;
    return;
L_088DA814:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA830;
L_088DA830:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA814; }
    goto L_088DA840;
L_088DA840:;
    goto L_088DA808;
}

/* 088DA848 */
void func_088DA848(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DA848:;
    sp = sp - 32;
    v0 = D_08B309F8 - (2552);
    v1 = ((u32)(uintptr_t)func_088DA770) - (-22672);
    s0 = v1 - 22672;
    a0 = LD32(v0+2552);
    ST32(sp+4, 0);
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA88C; }
    goto L_088DA87C;
L_088DA87C:;
    goto L_088DA880;
L_088DA880:;
    sp = sp + 32;
    return;
L_088DA88C:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DA8A8;
L_088DA8A8:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DA88C; }
    goto L_088DA8B8;
L_088DA8B8:;
    goto L_088DA880;
}

/* 088DA8C0 */
u32 func_088DA8C0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DA8C0:;
    sp = sp - 16;
    v0 = D_08B308CC - (2252);
    a1 = a0 + 0;
    v1 = LD32(v0+2252);
    a2 = 1;
    v1 = v1 + 24;
    a0 = v1 + 0;
    { u64 r_ = func_08AB7790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA8E4;
L_088DA8E4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DA8F0; }
    goto L_088DA8EC;
L_088DA8EC:;
    v1 = LD32(v0);
    goto L_088DA8F0;
L_088DA8F0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088DA900 */
u32 func_088DA900(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088DA900:;
    sp = sp - 48;
    s4 = a0 + 0;
    a0 = a2 + 0;
    s5 = a1 + 0;
    s2 = a2 + 0;
    s1 = a2 + 0;
    s0 = a3 + 0;
    v0 = func_08A650E8();
    goto L_088DA940;
L_088DA940:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DA9BC; }
    goto L_088DA948;
L_088DA948:;
    v0 = (u32)(s32)LD_S8(s0);
    v1 = v0 ^ 0x2f;
    v0 = v0 ^ 0x5c;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DA98C; }
    goto L_088DA968;
L_088DA968:;
    s0 = s0 + 1;
    goto L_088DA96C;
L_088DA96C:;
    v0 = (u32)(s32)LD_S8(s0);
    v1 = v0 ^ 0x2f;
    v0 = v0 ^ 0x5c;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s0 + 1; goto L_088DA96C; }
    goto L_088DA98C;
L_088DA98C:;
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DA994;
L_088DA994:;
    s3 = v0 + 0;
    v0 = 0x7fff0000u;
    v0 = v0 | 0xffff;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_088DAB38; }
    goto L_088DA9A8;
L_088DA9A8:;
    s0 = D_08B308CC - (2252);
    goto L_088DA9AC;
L_088DA9AC:;
    a0 = LD32(s0+2252);
    cnd_ = a0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088DA9E8; }
    goto L_088DA9B8;
L_088DA9B8:;
    v1 = 0 + 0;
    goto L_088DA9BC;
L_088DA9BC:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_088DA9E8:;
    a2 = sp + 0;
    v0 = func_088D9334(a0, a1, a2, 0, 0, 0);
    goto L_088DA9F0;
L_088DA9F0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DA9BC; }
    goto L_088DA9FC;
L_088DA9FC:;
    a2 = LD32(sp);
    v1 = D_08AECB60 - (-13472);
    s6 = D_08B30A3C - (2620);
    f1 = BITSF(LD32(v1-13472));
    a3 = LD32(s6+2620);
    v0 = a2 << 1;
    v1 = D_08AECB64 - (-13468);
    v0 = v0 + a2;
    f0 = BITSF(LD32(v1-13468));
    v0 = v0 << 3;
    a3 = a3 + v0;
    v0 = (u32)-1;
    ST32(a3+20, FBITS(f0));
    a0 = s4 + 0;
    a1 = s5 + 0;
    ST32(a3, v0);
    ST32(a3+16, FBITS(f1));
    ST32(a3+4, 0);
    ST32(a3+8, FBITS(f1));
    ST32(a3+12, FBITS(f1));
    v0 = func_0890EE48(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_088DAA50;
L_088DAA50:;
    cnd_ = v0 == 0;
    a0 = LD32(s0+2252);
    if (cnd_) { goto L_088DAB0C; }
    goto L_088DAA58;
L_088DAA58:;
    cnd_ = s3 == 0;
    v1 = 1;
    if (cnd_) { goto L_088DA9BC; }
    goto L_088DAA60;
L_088DAA60:;
    v1 = LD32(s0+2252);
    ST32(sp+4, s2);
    s1 = v1 + 24;
    v0 = LD_U8(s1+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088DAAE0; }
    goto L_088DAA78;
L_088DAA78:;
    v0 = LD32(v1+24);
    cnd_ = v0 == 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_088DAAB0; }
    goto L_088DAA84;
L_088DAA84:;
    v1 = v0 + 0;
    goto L_088DAA88;
L_088DAA88:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s3 < v1;
    cnd_ = v1 == s3;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088DAAE0; }
    goto L_088DAAA4;
L_088DAAA4:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088DAA88; }
    goto L_088DAAB0;
L_088DAAB0:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DAAB8;
L_088DAAB8:;
    a0 = LD32(sp+4);
    ST32(v0, s3);
    a1 = v0 + 4;
    ST32(v0+4, a0);
    v1 = LD32(s1+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s1+4, v1);
    ST32(s0, v0);
    goto L_088DAAE0;
L_088DAAE0:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = 1; goto L_088DA9BC; }
    goto L_088DAAE8;
L_088DAAE8:;
    v0 = LD32(sp);
    a0 = LD32(s6+2620);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 3;
    v1 = v1 + a0;
    ST32(v1+4, s3);
    v1 = 1;
    goto L_088DA9BC;
L_088DAB0C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DAB28; }
    goto L_088DAB14;
L_088DAB14:;
    v1 = D_08B308B4 - (2228);
    goto L_088DAB18;
L_088DAB18:;
    v0 = LD32(v1+2228);
    v0 = v0 + s5;
    ST32(v1+2228, v0);
    goto L_088DA9B8;
L_088DAB28:;
    a1 = s2 + 0;
    { rv_t r_ = func_088D9490(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DAB30;
L_088DAB30:;
    v1 = D_08B308B4 - (2228);
    goto L_088DAB18;
L_088DAB38:;
    s0 = D_08B308CC - (2252);
    v0 = func_088DCE34();
    goto L_088DAB40;
L_088DAB40:;
    s2 = v0 + 0;
    goto L_088DA9AC;
}

/* 088DAB48 */
u32 func_088DAB48(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DAB48:;
    v0 = 0x7fff0000u;
    sp = sp - 32;
    v0 = v0 | 0xffff;
    s2 = D_08B308CC - (2252);
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DAC48; }
    goto L_088DAB74;
L_088DAB74:;
    v0 = LD32(s2+2252);
    a1 = s0 + 0;
    a2 = sp + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DABA8; }
    goto L_088DAB88;
L_088DAB88:;
    a1 = (u32)-1;
    goto L_088DAB8C;
L_088DAB8C:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_088DABA8:;
    v0 = func_088D9334(a0, a1, a2, t1, t2, t3);
    goto L_088DABB0;
L_088DABB0:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a3 = D_08B30A3C - (2620);
    if (cnd_) { goto L_088DAB88; }
    goto L_088DABBC;
L_088DABBC:;
    a1 = s1 + 0;
    cnd_ = s1 != 0;
    a2 = sp + 4;
    if (cnd_) { goto L_088DAC10; }
    goto L_088DABC8;
L_088DABC8:;
    a1 = LD32(sp);
    a0 = LD32(a3+2620);
    v1 = D_08AECB68 - (-13464);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    a0 = a0 + v0;
    v0 = D_08AECB6C - (-13460);
    f1 = BITSF(LD32(v1-13464));
    f0 = BITSF(LD32(v0-13460));
    v0 = (u32)-1;
    ST32(a0, v0);
    ST32(a0+20, FBITS(f0));
    ST32(a0+16, FBITS(f1));
    ST32(a0+4, 0);
    ST32(a0+8, FBITS(f1));
    ST32(a0+12, FBITS(f1));
    goto L_088DAB8C;
L_088DAC10:;
    a0 = LD32(s2+2252);
    ST32(sp+4, s0);
    a0 = a0 + 24;
    v0 = func_08AB7808(a0, a1, a2, 0, 0, 0);
    goto L_088DAC20;
L_088DAC20:;
    cnd_ = v0 == 0;
    a3 = D_08B30A3C - (2620);
    if (cnd_) { goto L_088DABC8; }
    goto L_088DAC28;
L_088DAC28:;
    v0 = LD32(sp);
    a0 = LD32(a3+2620);
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 3;
    v1 = v1 + a0;
    ST32(v1+4, s1);
    goto L_088DABC8;
L_088DAC48:;
    v0 = func_088DCE34();
    goto L_088DAC50;
L_088DAC50:;
    s0 = v0 + 0;
    goto L_088DAB74;
}

/* 088DAC58 */
u32 func_088DAC58(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DAC58:;
    sp = sp - 16;
    v0 = D_08B308CC - (2252);
    a1 = a0 + 0;
    v1 = LD32(v0+2252);
    a2 = 1;
    v0 = 0 + 0;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088DAC8C; }
    goto L_088DAC7C;
L_088DAC7C:;
    v0 = v0 & 0xff;
    sp = sp + 16;
    return v0;
L_088DAC8C:;
    { u64 r_ = func_08AB7790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DAC94;
L_088DAC94:;
    v0 = 0 < v0;
    goto L_088DAC7C;
}

/* 088DAC9C */
void func_088DAC9C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088DAC9C:;
    sp = sp - 48;
    v0 = a1 + 0;
    s3 = a0 + 0;
    s0 = (u32)-1;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088DADD8; }
    goto L_088DACC4;
L_088DACC4:;
    s2 = D_08B308CC - (2252);
    goto L_088DACC8;
L_088DACC8:;
    a0 = LD32(s2+2252);
    cnd_ = a0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_088DACF0; }
    goto L_088DACD4;
L_088DACD4:;
    goto L_088DACD8;
L_088DACD8:;
    sp = sp + 48;
    return;
L_088DACF0:;
    a2 = 1;
    { u64 r_ = func_08AB7790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DACF8;
L_088DACF8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DAD08; }
    goto L_088DAD00;
L_088DAD00:;
    s0 = LD32(v0);
    v1 = 1;
    goto L_088DAD08;
L_088DAD08:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088DACD8; }
    goto L_088DAD10;
L_088DAD10:;
    s1 = D_08B30A3C - (2620);
    v1 = LD32(s1+2620);
    a2 = s0 << 1;
    v0 = a2 + s0;
    v0 = v0 << 3;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = (u32)-1;
    a3 = s1 + 0;
    cnd_ = a0 == v0;
    t0 = (u32)-1;
    if (cnd_) { goto L_088DAD70; }
    goto L_088DAD3C;
L_088DAD3C:;
    a1 = LD32(a3+2620);
    v0 = a2 + s0;
    v0 = v0 << 3;
    v0 = v0 + a1;
    s0 = LD32(v0);
    a3 = s1 + 0;
    a0 = s0 << 1;
    v0 = a0 + s0;
    v0 = v0 << 3;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 != t0;
    a2 = a0 + 0;
    if (cnd_) { goto L_088DAD3C; }
    goto L_088DAD70;
L_088DAD70:;
    a0 = LD32(s2+2252);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088DACD8; }
    goto L_088DAD7C;
L_088DAD7C:;
    a1 = s3 + 0;
    a2 = sp + 0;
    v0 = func_088D9334(a0, a1, a2, 0, 0, 0);
    goto L_088DAD88;
L_088DAD88:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DACD8; }
    goto L_088DAD94;
L_088DAD94:;
    a1 = LD32(sp);
    a0 = LD32(s1+2620);
    v1 = D_08AECB70 - (-13456);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    a0 = a0 + v0;
    v0 = D_08AECB74 - (-13452);
    f1 = BITSF(LD32(v1-13456));
    f0 = BITSF(LD32(v0-13452));
    ST32(a0, s0);
    ST32(a0+16, FBITS(f1));
    ST32(a0+20, FBITS(f0));
    ST32(a0+4, 0);
    ST32(a0+8, FBITS(f1));
    ST32(a0+12, FBITS(f1));
    goto L_088DACD8;
L_088DADD8:;
    a0 = a2 + 0;
    v0 = func_088DA8C0(a0);
    goto L_088DADE0;
L_088DADE0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DACD8; }
    goto L_088DADE8;
L_088DADE8:;
    s2 = D_08B308CC - (2252);
    goto L_088DACC8;
}

/* 088DADF0 */
rv_t func_088DADF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DADF0:;
    sp = sp - 32;
    v0 = D_08B309F8 - (2552);
    s2 = a0 + 0;
    s1 = a1 + 0;
    ST32(sp+4, 0);
    a2 = LD32(v0+2552);
    a1 = LD32(a1);
    v0 = D_08B16148 - (24904);
    v1 = LD32(a2+12);
    ST32(v0+24904, a1);
    v0 = ((u32)(uintptr_t)func_088DB238) - (-19912);
    v1 = v1 - 1;
    s0 = v0 - 19912;
    ST32(sp, a2);
    cnd_ = (s32)v1 >= 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_088DAED4; }
    goto L_088DAE40;
L_088DAE40:;
    a0 = LD32(s1);
    v0 = func_088DCD1C(a0);
    goto L_088DAE48;
L_088DAE48:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088DAEBC; }
    goto L_088DAE50;
L_088DAE50:;
    v1 = LD32(v0);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088DAEBC; }
    goto L_088DAE60;
L_088DAE60:;
    s1 = D_08B308CC - (2252);
    goto L_088DAE64;
L_088DAE64:;
    a0 = LD32(s1+2252);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DAEAC; }
    goto L_088DAE70;
L_088DAE70:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088DAE88; }
    goto L_088DAE78;
L_088DAE78:;
    a1 = LD32(s0+4);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(s1+2252); goto L_088DAE9C; }
    goto L_088DAE84;
L_088DAE84:;
    goto L_088DAE88;
L_088DAE88:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DAE9C:;
    a0 = a0 + 24;
    { rv_t r_ = func_08AB78C0(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DAEA4;
L_088DAEA4:;
    goto L_088DAE88;
L_088DAEAC:;
    a1 = s2 + 0;
    { rv_t r_ = func_088D9490(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DAEB4;
L_088DAEB4:;
    goto L_088DAE70;
L_088DAEBC:;
    a0 = LD32(s1);
    { u64 r_ = func_0890EE64(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DAEC4;
L_088DAEC4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DAE88; }
    goto L_088DAECC;
L_088DAECC:;
    s1 = D_08B308CC - (2252);
    goto L_088DAE64;
L_088DAED4:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DAEF0;
L_088DAEF0:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DAED4; }
    goto L_088DAF00;
L_088DAF00:;
    goto L_088DAE40;
}

/* 088DAF08 */
rv_t func_088DAF08(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DAF08:;
    sp = sp - 32;
    v0 = D_08B308CC - (2252);
    a2 = 1;
    s3 = (u32)-1;
    s2 = (u32)-1;
    s1 = a0 + 0;
    a1 = s1 + 0;
    v1 = LD32(v0+2252);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088DAF64; }
    goto L_088DAF44;
L_088DAF44:;
    v0 = s3 + 0;
    goto L_088DAF48;
L_088DAF48:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DAF64:;
    { u64 r_ = func_08AB7790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DAF6C;
L_088DAF6C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DAF7C; }
    goto L_088DAF74;
L_088DAF74:;
    s2 = LD32(v0);
    v1 = 1;
    goto L_088DAF7C;
L_088DAF7C:;
    cnd_ = v1 == 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_088DAF48; }
    goto L_088DAF84;
L_088DAF84:;
    v0 = D_08B309F8 - (2552);
    a1 = LD32(v0+2552);
    a0 = s2 + 0;
    v0 = LD32(a1+12);
    v1 = LD32(a1+8);
    a2 = v0 + 1;
    t1 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    s3 = (u32)-1;
    if (cnd_) { goto L_088DAF44; }
    goto L_088DAFAC;
L_088DAFAC:;
    v1 = LD32(a1+4);
    ST32(a1+12, a2);
    v0 = D_08B309F4 - (2548);
    v1 = t1 + v1;
    s3 = LD32(v1);
    a1 = LD32(v0+2548);
    v0 = s3 << 4;
    v0 = v0 - s3;
    v0 = v0 << 3;
    s0 = a1 + v0;
    v0 = func_088DCD1C(a0);
    goto L_088DAFD8;
L_088DAFD8:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    t1 = D_08AECB78 - (-13448);
    ST32(s0, v0);
    ST32(s0+4, s1);
    cnd_ = v1 == 0;
    ST32(s0+8, s2);
    if (cnd_) { goto L_088DB0AC; }
    goto L_088DAFF4;
L_088DAFF4:;
    f1 = BITSF(LD32(v1+12));
    ST32(s0+12, FBITS(f1));
    f0 = BITSF(LD32(v1+8));
    goto L_088DB000;
L_088DB000:;
    v0 = 0x400000u;
    v0 = v0 | 0x400;
    ST32(s0+16, FBITS(f0));
    a1 = D_08B45A9C - (23196);
    v1 = a1 + 23196;
    ST32(s0+28, v0);
    a0 = s0 + 32;
    a3 = s0 + 52;
    f0 = BITSF(LD32(a1+23196));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(s0+32, FBITS(f0));
    a2 = s0 + 76;
    t0 = s0 + 64;
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    f1 = BITSF(LD32(a1+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(s0+52, FBITS(f1));
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f2));
    f0 = BITSF(LD32(a1+23196));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(s0+64, FBITS(f0));
    f0 = BITSF(LD32(t1-13448));
    ST32(t0+8, FBITS(f1));
    ST32(t0+4, FBITS(f2));
    ST32(a2+4, 0);
    ST32(s0+76, 0);
    ST32(a2+20, 0);
    ST32(a2+16, 0);
    ST32(a2+12, 0);
    ST32(a2+8, 0);
    ST32(a0+68, 0);
    ST32(a0+84, 0);
    ST32(a0+80, FBITS(f0));
    ST32(a0+72, 0);
    ST32(a0+76, 0);
    goto L_088DAF44;
L_088DB0AC:;
    f0 = BITSF(LD32(t1-13448));
    ST32(s0+12, FBITS(f0));
    goto L_088DB000;
}

/* 088DB0B8 */
rv_t func_088DB0B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DB0B8:;
    sp = sp - 16;
    v0 = a0 << 4;
    v0 = v0 - a0;
    s2 = (u32)-1;
    s1 = a0 + 0;
    a0 = v0 << 3;
    cnd_ = s1 == s2;
    if (cnd_) { goto L_088DB214; }
    goto L_088DB0E4;
L_088DB0E4:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    s0 = v1 + a0;
    v0 = LD32(s0);
    cnd_ = v0 == s2;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DB128; }
    goto L_088DB0FC;
L_088DB0FC:;
    func_0890EF00(a0);
    goto L_088DB104;
L_088DB104:;
    a0 = LD32(s0);
    f0 = func_088DC978(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DB10C;
L_088DB10C:;
    v0 = D_08B308A8 - (2216);
    v1 = LD32(v0+2216);
    a0 = LD32(s0+8);
    v1 = v1 + a0;
    v0 = LD_U8(v1);
    v0 = v0 - 1;
    ST8(v1, v0);
    goto L_088DB128;
L_088DB128:;
    a0 = (u32)-1;
    v0 = func_088DCD1C(a0);
    goto L_088DB130;
L_088DB130:;
    t2 = D_08AECB7C - (-13444);
    ST32(s0+8, s2);
    ST32(s0, s2);
    cnd_ = v0 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088DB22C; }
    goto L_088DB144;
L_088DB144:;
    f1 = BITSF(LD32(v0+12));
    ST32(s0+12, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    goto L_088DB150;
L_088DB150:;
    v1 = 0x400000u;
    v1 = v1 | 0x400;
    ST32(s0+28, v1);
    a0 = D_08B45A9C - (23196);
    v0 = a0 + 23196;
    ST32(s0+16, FBITS(f0));
    a2 = s0 + 32;
    t0 = s0 + 52;
    f0 = BITSF(LD32(a0+23196));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(s0+32, FBITS(f0));
    a3 = s0 + 76;
    t1 = s0 + 64;
    ST32(a2+4, FBITS(f1));
    a1 = s1 + 0;
    ST32(a2+8, FBITS(f2));
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    f1 = BITSF(LD32(a0+23196));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    ST32(s0+52, FBITS(f1));
    ST32(t0+8, FBITS(f0));
    ST32(t0+4, FBITS(f2));
    f0 = BITSF(LD32(a0+23196));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    v0 = D_08B309F8 - (2552);
    ST32(s0+64, FBITS(f0));
    ST32(t1+8, FBITS(f1));
    ST32(t1+4, FBITS(f2));
    v1 = LD32(v0+2552);
    ST32(a3+4, 0);
    ST32(s0+76, 0);
    ST32(a3+20, 0);
    ST32(a3+16, 0);
    ST32(a3+12, 0);
    ST32(a3+8, 0);
    f0 = BITSF(LD32(t2-13444));
    a3 = LD32(v1);
    ST32(a2+68, 0);
    ST32(a2+84, 0);
    ST32(a2+80, FBITS(f0));
    ST32(a2+72, 0);
    ST32(a2+76, 0);
    v0 = LD32(a3+8);
    t_ = v0;
    a0 = v1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB214;
L_088DB214:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DB22C:;
    f0 = BITSF(LD32(t2-13444));
    ST32(s0+12, FBITS(f0));
    goto L_088DB150;
}

/* 088DB238 */
rv_t func_088DB238(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DB238:;
    v1 = a0 << 4;
    v1 = v1 - a0;
    sp = sp - 32;
    a3 = v1 << 3;
    v1 = (u32)-1;
    cnd_ = a0 == v1;
    ST32(sp, a0);
    if (cnd_) { goto L_088DB278; }
    goto L_088DB258;
L_088DB258:;
    v0 = D_08B309F4 - (2548);
    a1 = LD32(v0+2548);
    v1 = D_08B16148 - (24904);
    a2 = LD32(v1+24904);
    a1 = a1 + a3;
    v0 = LD32(a1+8);
    cnd_ = v0 == a2;
    a0 = sp + 0;
    if (cnd_) { goto L_088DB284; }
    goto L_088DB278;
L_088DB278:;
    goto L_088DB27C;
L_088DB27C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DB284:;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB28C;
L_088DB28C:;
    goto L_088DB27C;
}

/* 088DB294 */
rv_t func_088DB294(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DB294:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = (u32)-1;
    v1 = LD32(a0);
    v0 = v1 << 4;
    v0 = v0 - v1;
    cnd_ = v1 == s1;
    a0 = v0 << 3;
    if (cnd_) { goto L_088DB3FC; }
    goto L_088DB2C4;
L_088DB2C4:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    s0 = v1 + a0;
    v0 = LD32(s0);
    cnd_ = v0 == s1;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DB308; }
    goto L_088DB2DC;
L_088DB2DC:;
    func_0890EF00(a0);
    goto L_088DB2E4;
L_088DB2E4:;
    a0 = LD32(s0);
    f0 = func_088DC978(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DB2EC;
L_088DB2EC:;
    v0 = D_08B308A8 - (2216);
    v1 = LD32(v0+2216);
    a0 = LD32(s0+8);
    v1 = v1 + a0;
    v0 = LD_U8(v1);
    v0 = v0 - 1;
    ST8(v1, v0);
    goto L_088DB308;
L_088DB308:;
    a0 = (u32)-1;
    v0 = func_088DCD1C(a0);
    goto L_088DB310;
L_088DB310:;
    t1 = D_08AECB80 - (-13440);
    ST32(s0+8, s1);
    ST32(s0, s1);
    cnd_ = v0 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088DB414; }
    goto L_088DB324;
L_088DB324:;
    f1 = BITSF(LD32(v0+12));
    ST32(s0+12, FBITS(f1));
    f0 = BITSF(LD32(v0+8));
    goto L_088DB330;
L_088DB330:;
    v0 = 0x400000u;
    v0 = v0 | 0x400;
    ST32(s0+28, v0);
    a0 = D_08B45A9C - (23196);
    v1 = a0 + 23196;
    ST32(s0+16, FBITS(f0));
    a1 = s0 + 32;
    a3 = s0 + 52;
    f0 = BITSF(LD32(a0+23196));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(s0+32, FBITS(f0));
    a2 = s0 + 76;
    t0 = s0 + 64;
    ST32(a1+4, FBITS(f1));
    v0 = D_08B309F8 - (2552);
    ST32(a1+8, FBITS(f2));
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    f1 = BITSF(LD32(a0+23196));
    f2 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    ST32(s0+52, FBITS(f1));
    ST32(a3+8, FBITS(f0));
    ST32(a3+4, FBITS(f2));
    f0 = BITSF(LD32(a0+23196));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(s0+64, FBITS(f0));
    ST32(t0+8, FBITS(f1));
    ST32(t0+4, FBITS(f2));
    v1 = LD32(v0+2552);
    ST32(a2+4, 0);
    a0 = v1 + 0;
    ST32(a2+20, 0);
    ST32(a2+16, 0);
    ST32(a2+12, 0);
    ST32(a2+8, 0);
    ST32(s0+76, 0);
    f0 = BITSF(LD32(t1-13440));
    v0 = LD32(v1);
    ST32(a1+68, 0);
    ST32(a1+84, 0);
    ST32(a1+80, FBITS(f0));
    ST32(a1+72, 0);
    ST32(a1+76, 0);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = LD32(s2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB3F4;
L_088DB3F4:;
    v0 = (u32)-1;
    ST32(s2, v0);
    goto L_088DB3FC;
L_088DB3FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DB414:;
    f0 = BITSF(LD32(t1-13440));
    ST32(s0+12, FBITS(f0));
    goto L_088DB330;
}

/* 088DB420 */
u64 func_088DB420(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088DB420:;
    v1 = LD32(a0);
    a2 = (u32)-1;
    v0 = v1 << 4;
    v0 = v0 - v1;
    cnd_ = v1 == a2;
    a1 = v0 << 3;
    if (cnd_) { goto L_088DB454; }
    goto L_088DB438;
L_088DB438:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a1 + v1;
    v0 = LD32(v1+28);
    v0 = v0 | 0x1000;
    ST32(v1+28, v0);
    ST32(a0, a2);
    goto L_088DB454;
L_088DB454:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088DB45C */
rv_t func_088DB45C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DB45C:;
    v0 = a0 << 4;
    sp = sp - 32;
    v0 = v0 - a0;
    a3 = (u32)-1;
    a2 = v0 << 3;
    s2 = a1 & 0xff;
    a1 = 0 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == a3;
    if (cnd_) { goto L_088DB4A8; }
    goto L_088DB490;
L_088DB490:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    s0 = v1 + a2;
    v0 = LD32(s0);
    cnd_ = v0 == a3;
    a1 = 1;
    if (cnd_) { goto L_088DB4C4; }
    goto L_088DB4A8;
L_088DB4A8:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DB4C4:;
    v0 = D_08AECB84 - (-13436);
    f1 = BITSF(LD32(v0-13436));
    v0 = D_08AECB88 - (-13432);
    f0 = BITSF(LD32(v0-13432));
    t0 = LD32(s0+28);
    t0 = (t0 & ~(0x1u << 8)) | ((s2 & 0x1) << 8);
    v1 = t0 & 0x200;
    ST32(s0+28, t0);
    a2 = sp + 4;
    a3 = sp + 8;
    a1 = sp + 0;
    t1 = t0 & 0x2000;
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    cnd_ = v1 != 0;
    ST32(sp, FBITS(f1));
    if (cnd_) { goto L_088DB558; }
    goto L_088DB504;
L_088DB504:;
    cnd_ = t1 != 0;
    a0 = (t0 >> 14) & 0x3;
    if (cnd_) { goto L_088DB548; }
    goto L_088DB50C;
L_088DB50C:;
    f0 = BITSF(LD32(s0+12));
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    v0 = func_08A650E0();
    goto L_088DB520;
L_088DB520:;
    s0 = v0 + 0;
    goto L_088DB524;
L_088DB524:;
    a0 = s1 + 0;
    cnd_ = s0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088DB4A8; }
    goto L_088DB530;
L_088DB530:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = BITSF(LD32(sp+8));
    { rv_t r_ = func_088DB584(a0, a1, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB540;
L_088DB540:;
    a1 = v0 + 0;
    goto L_088DB4A8;
L_088DB548:;
    f0 = func_088DC7D4(a0);
    goto L_088DB550;
L_088DB550:;
    ST32(sp+4, FBITS(f0));
    goto L_088DB50C;
L_088DB558:;
    v0 = func_088DC190(a0, a1, a2, a3, f12);
    goto L_088DB560;
L_088DB560:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = sp + 4;
    a3 = sp + 8;
    s0 = v0 + 0;
    v0 = func_08A650D8();
    goto L_088DB578;
L_088DB578:;
    v0 = s0 & v0;
    s0 = 0 < v0;
    goto L_088DB524;
}

/* 088DB584 */
rv_t func_088DB584(u32 a0, u32 a1, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088DB584:;
    sp = sp - 64;
    s6 = D_08B309F4 - (2548);
    s4 = a0 << 4;
    v0 = s4 - a0;
    v1 = LD32(s6+2548);
    v0 = v0 << 3;
    s2 = a0 + 0;
    s1 = v1 + v0;
    v0 = (u32)-1;
    v1 = 0 + 0;
    f22 = f14;
    f21 = f13;
    a0 = LD32(s1);
    cnd_ = a0 == v0;
    f20 = f12;
    if (cnd_) { goto L_088DB62C; }
    goto L_088DB5F0;
L_088DB5F0:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088DB62C:;
    s5 = D_08B308A8 - (2216);
    v1 = LD32(s5+2216);
    a0 = LD32(s1+8);
    v1 = v1 + a0;
    v0 = LD_U8(v1);
    v0 = v0 < 0x6u;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+28); goto L_088DB658; }
    goto L_088DB64C;
L_088DB64C:;
    v0 = D_08B1614C - (24908);
    ST32(v0+24908, a0);
    a1 = LD32(s1+28);
    goto L_088DB658;
L_088DB658:;
    a0 = s1 + 0;
    a1 = (a1 >> 21) & 0x1;
    v0 = func_088DC874(a0, a1);
    goto L_088DB664;
L_088DB664:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088DB674; }
    goto L_088DB66C;
L_088DB66C:;
    v1 = s0 + 0;
    goto L_088DB5F0;
L_088DB674:;
    a0 = LD32(s1+8);
    v0 = LD32(s5+2216);
    v0 = v0 + a0;
    v1 = LD_U8(v0);
    v1 = v1 + 1;
    ST8(v0, v1);
    s3 = LD32(s1+8);
    a0 = s3 + 0;
    v0 = func_088DCD1C(a0);
    goto L_088DB698;
L_088DB698:;
    cnd_ = v0 == 0;
    a2 = LD32(s1+28);
    if (cnd_) { goto L_088DB6AC; }
    goto L_088DB6A0;
L_088DB6A0:;
    v1 = LD32(v0);
    v0 = ~(0 | v1);
    if (v0 != 0) s3 = v1;
    goto L_088DB6AC;
L_088DB6AC:;
    v0 = ~(0 | s3);
    s0 = 0 < v0;
    v1 = a2 & 0x600;
    v0 = 1536;
    cnd_ = v1 == v0;
    s7 = 0 + 0;
    if (cnd_) { goto L_088DB83C; }
    goto L_088DB6C4;
L_088DB6C4:;
    cnd_ = s0 == 0;
    a2 = (a2 >> 21) & 0x1;
    if (cnd_) { goto L_088DB810; }
    goto L_088DB6CC;
L_088DB6CC:;
    a1 = LD32(s1);
    a0 = s3 + 0;
    a3 = s7 + 0;
    v0 = func_0890EEAC(a0, a1);
    goto L_088DB6DC;
L_088DB6DC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088DB810; }
    goto L_088DB6E4;
L_088DB6E4:;
    v0 = D_08B30A2C - (2604);
    v1 = LD_U8(v0+2604);
    cnd_ = v1 == 0;
    s3 = LD32(s1);
    if (cnd_) { goto L_088DB708; }
    goto L_088DB6F4;
L_088DB6F4:;
    v0 = LD32(s1+28);
    v1 = 0x10000u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s1+20)); goto L_088DB7E4; }
    goto L_088DB708;
L_088DB708:;
    cnd_ = s7 == 0;
    f12 = f20;
    if (cnd_) { goto L_088DB7CC; }
    goto L_088DB710;
L_088DB710:;
    a1 = s1 + 32;
    a0 = s3 + 0;
    v0 = func_0890EFB0();
    goto L_088DB71C;
L_088DB71C:;
    s0 = v0 + 0;
    cnd_ = s0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DB7B4; }
    goto L_088DB728;
L_088DB728:;
    s0 = v0 + 0;
    cnd_ = s0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DB7A0; }
    goto L_088DB734;
L_088DB734:;
    a1 = LD32(s1+28);
    a0 = s3 + 0;
    s0 = v0 + 0;
    a1 = (a1 >> 10) & 0x1;
    func_0890EFB8();
    goto L_088DB748;
L_088DB748:;
    cnd_ = s0 == 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_088DB5F0; }
    goto L_088DB750;
L_088DB750:;
    a0 = LD32(s6+2548);
    v0 = s4 - s2;
    v0 = v0 << 3;
    v0 = v0 + a0;
    v1 = LD32(v0+28);
    a0 = 0x400000u;
    v1 = v1 & a0;
    cnd_ = v1 == 0;
    f12 = BITSF(LD32(v0+16));
    if (cnd_) { goto L_088DB780; }
    goto L_088DB774;
L_088DB774:;
    v0 = D_08B1613C - (24892);
    f0 = BITSF(LD32(v0+24892));
    f12 = f12 * f0;
    goto L_088DB780;
L_088DB780:;
    a0 = s3 + 0;
    { rv_t r_ = func_0890EF70(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB788;
L_088DB788:;
    a1 = LD32(s1+28);
    a0 = s3 + 0;
    a1 = (a1 >> 8) & 0x1;
    v0 = func_0890EEC8(a0, a1);
    goto L_088DB798;
L_088DB798:;
    s0 = v0 + 0;
    goto L_088DB66C;
L_088DB7A0:;
    f12 = f20;
    a0 = s3 + 0;
    v0 = func_088DCDF4(f12);
    goto L_088DB7AC;
L_088DB7AC:;
    v0 = 0 < v0;
    goto L_088DB734;
L_088DB7B4:;
    f12 = BITSF(LD32(s1+44));
    f13 = BITSF(LD32(s1+48));
    a0 = s3 + 0;
    v0 = func_0890EFC0();
    goto L_088DB7C4;
L_088DB7C4:;
    v0 = 0 < v0;
    goto L_088DB728;
L_088DB7CC:;
    f13 = f21;
    f14 = f22;
    a0 = s3 + 0;
    { rv_t r_ = func_088DCDB4(a0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB7DC;
L_088DB7DC:;
    s0 = v0 + 0;
    goto L_088DB748;
L_088DB7E4:;
    f13 = BITSF(LD32(s1+24));
    a0 = s3 + 0;
    v0 = func_0890EFC8();
    goto L_088DB7F0;
L_088DB7F0:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DB7DC; }
    goto L_088DB7FC;
L_088DB7FC:;
    f12 = f20;
    a0 = s3 + 0;
    v0 = func_088DCDF4(f12);
    goto L_088DB808;
L_088DB808:;
    v0 = 0 < v0;
    goto L_088DB7DC;
L_088DB810:;
    a0 = LD32(s1);
    f0 = func_088DC978(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DB818;
L_088DB818:;
    v1 = LD32(s5+2216);
    a0 = LD32(s1+8);
    v0 = (u32)-1;
    ST32(s1, v0);
    v1 = v1 + a0;
    v0 = LD_U8(v1);
    v0 = v0 - 1;
    ST8(v1, v0);
    goto L_088DB66C;
L_088DB83C:;
    v0 = D_08B30A2C - (2604);
    v1 = LD_U8(v0+2604);
    s7 = 0 < v1;
    goto L_088DB6C4;
}

/* 088DB84C */
rv_t func_088DB84C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f13 = 0, f14 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088DB84C:;
    sp = sp - 48;
    s3 = a0 << 4;
    v0 = s3 - a0;
    s1 = v0 << 3;
    v0 = (u32)-1;
    s2 = D_08B309F4 - (2548);
    s0 = a0 + 0;
    f20 = f12;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DB910; }
    goto L_088DB888;
L_088DB888:;
    v0 = LD32(s2+2548);
    v0 = s1 + v0;
    a0 = LD32(v0+8);
    v0 = func_088DCD1C(a0);
    goto L_088DB898;
L_088DB898:;
    v1 = LD32(s2+2548);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DB8AC; }
    goto L_088DB8A4;
L_088DB8A4:;
    f0 = BITSF(LD32(v0+12));
    f20 = f20 * f0;
    goto L_088DB8AC;
L_088DB8AC:;
    v0 = s1 + v1;
    ST32(v0+12, FBITS(f20));
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DB8B8;
L_088DB8B8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DB914; }
    goto L_088DB8C0;
L_088DB8C0:;
    v0 = LD32(s2+2548);
    v0 = s1 + v0;
    v0 = LD32(v0+28);
    v1 = v0 & 0x200;
    cnd_ = v1 != 0;
    a1 = v0 & 0x2000;
    if (cnd_) { goto L_088DB914; }
    goto L_088DB8D8;
L_088DB8D8:;
    cnd_ = a1 != 0;
    a0 = (v0 >> 14) & 0x3;
    if (cnd_) { goto L_088DB930; }
    goto L_088DB8E0;
L_088DB8E0:;
    v0 = D_08AECB90 - (-13424);
    f0 = BITSF(LD32(v0-13424));
    a0 = LD32(s2+2548);
    goto L_088DB8EC;
L_088DB8EC:;
    v1 = s3 - s0;
    v1 = v1 << 3;
    v0 = D_08AECB8C - (-13428);
    v1 = v1 + a0;
    f14 = BITSF(LD32(v0-13428));
    a0 = LD32(v1);
    f12 = f20;
    f13 = f0;
    { rv_t r_ = func_088DCDB4(a0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB910;
L_088DB910:;
    goto L_088DB914;
L_088DB914:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088DB930:;
    f0 = func_088DC7D4(a0);
    goto L_088DB938;
L_088DB938:;
    a0 = LD32(s2+2548);
    goto L_088DB8EC;
}

/* 088DB940 */
float func_088DB940(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DB940:;
    v0 = a0 << 4;
    sp = sp - 32;
    v0 = v0 - a0;
    s1 = v0 << 3;
    v0 = (u32)-1;
    s2 = D_08B309F4 - (2548);
    s0 = a0 + 0;
    f20 = f12;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DB9EC; }
    goto L_088DB978;
L_088DB978:;
    v0 = LD32(s2+2548);
    v0 = s1 + v0;
    a0 = LD32(v0+8);
    ST32(v0+16, FBITS(f12));
    v0 = func_088DCD1C(a0);
    goto L_088DB98C;
L_088DB98C:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DB9B0; }
    goto L_088DB998;
L_088DB998:;
    v0 = LD32(s2+2548);
    f1 = BITSF(LD32(v1+8));
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+16));
    f0 = f0 * f1;
    ST32(v0+16, FBITS(f0));
    goto L_088DB9B0;
L_088DB9B0:;
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DB9B8;
L_088DB9B8:;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_088DB9EC; }
    goto L_088DB9C0;
L_088DB9C0:;
    v0 = LD32(s2+2548);
    a0 = s1 + v0;
    v1 = LD32(a0+28);
    v0 = 0x400000u;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = D_08B1613C - (24892);
    if (cnd_) { goto L_088DB9E4; }
    goto L_088DB9DC;
L_088DB9DC:;
    f0 = BITSF(LD32(v0+24892));
    f12 = f20 * f0;
    goto L_088DB9E4;
L_088DB9E4:;
    a0 = LD32(a0);
    { rv_t r_ = func_0890EF70(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DB9EC;
L_088DB9EC:;
    sp = sp + 32;
    return f0;
}

/* 088DBA08 */
rv_t func_088DBA08(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DBA08:;
    v0 = a0 << 4;
    sp = sp - 16;
    v0 = v0 - a0;
    t1 = (u32)-1;
    t0 = v0 << 3;
    cnd_ = a0 == t1;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_088DBA8C; }
    goto L_088DBA28;
L_088DBA28:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = v1 + t0;
    v0 = LD32(v1+28);
    a0 = v1 + 32;
    t0 = LD32(v1);
    v0 = v0 | 0x200;
    ST32(v1+28, v0);
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    a3 = LD32(v1+28);
    a3 = (a3 & ~(0x1u << 21)) | ((a2 & 0x1) << 21);
    ST32(v1+32, FBITS(f2));
    cnd_ = t0 == t1;
    ST32(v1+28, a3);
    if (cnd_) { goto L_088DBA8C; }
    goto L_088DBA70;
L_088DBA70:;
    v0 = D_08B30A2C - (2604);
    a0 = LD_U8(v0+2604);
    v1 = 0x10000u;
    cnd_ = a0 == 0;
    v0 = a3 & v1;
    if (cnd_) { goto L_088DBA8C; }
    goto L_088DBA84;
L_088DBA84:;
    cnd_ = v0 == 0;
    a0 = t0 + 0;
    if (cnd_) { goto L_088DBA98; }
    goto L_088DBA8C;
L_088DBA8C:;
    goto L_088DBA90;
L_088DBA90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DBA98:;
    v0 = func_0890EFB0();
    goto L_088DBAA0;
L_088DBAA0:;
    goto L_088DBA90;
}

/* 088DBAA8 */
rv_t func_088DBAA8(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DBAA8:;
    sp = sp - 32;
    v0 = (u32)-1;
    s0 = a0 + 0;
    f21 = f13;
    f20 = f12;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DBB78; }
    goto L_088DBAD8;
L_088DBAD8:;
    s2 = D_08B309F4 - (2548);
    v0 = LD32(s2+2548);
    s1 = a0 << 4;
    v1 = s1 - a0;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a0 = LD32(v1+8);
    v0 = func_088DCD1C(a0);
    goto L_088DBAF8;
L_088DBAF8:;
    a0 = D_08AECB94 - (-13420);
    f0 = BITSF(LD32(a0-13420));
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    v1 = v0 + 0;
    if (cnd_) { goto L_088DBB20; }
    goto L_088DBB10;
L_088DBB10:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08AD89D8 - (-30248); goto L_088DBBA0; }
    goto L_088DBB18;
L_088DBB18:;
    f20 = BITSF(LD32(v0+16));
    goto L_088DBB1C;
L_088DBB1C:;
    f0 = BITSF(LD32(a0-13420));
    goto L_088DBB20;
L_088DBB20:;
    fcc = FCMP(f21, f0, 2);
    cnd_ = !fcc;
    a0 = LD32(s2+2548);
    if (cnd_) { goto L_088DBB40; }
    goto L_088DBB30;
L_088DBB30:;
    cnd_ = v1 == 0;
    v0 = D_08AD89DC - (-30244);
    if (cnd_) { goto L_088DBB98; }
    goto L_088DBB38;
L_088DBB38:;
    f21 = BITSF(LD32(v1+20));
    goto L_088DBB3C;
L_088DBB3C:;
    a0 = LD32(s2+2548);
    goto L_088DBB40;
L_088DBB40:;
    v1 = D_08B30A2C - (2604);
    v0 = s1 - s0;
    a1 = LD_U8(v1+2604);
    v0 = v0 << 3;
    v0 = v0 + a0;
    ST32(v0+44, FBITS(f20));
    cnd_ = a1 == 0;
    ST32(v0+48, FBITS(f21));
    if (cnd_) { goto L_088DBB78; }
    goto L_088DBB60;
L_088DBB60:;
    a0 = LD32(v0);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    f12 = f20;
    if (cnd_) { goto L_088DBB78; }
    goto L_088DBB70;
L_088DBB70:;
    f13 = f21;
    v0 = func_0890EFC0();
    goto L_088DBB78;
L_088DBB78:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DBB98:;
    f21 = BITSF(LD32(v0-30244));
    goto L_088DBB3C;
L_088DBBA0:;
    f20 = BITSF(LD32(v0-30248));
    goto L_088DBB1C;
}

/* 088DBBA8 */
void func_088DBBA8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_088DBBA8:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    a3 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = D_08B309F4 - (2548);
    if (cnd_) { goto L_088DBC00; }
    goto L_088DBBC0;
L_088DBBC0:;
    v1 = LD32(v0+2548);
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a1+4));
    v1 = v1 + a3;
    v0 = v1 + 52;
    ST32(v0+8, FBITS(f1));
    a0 = v1 + 64;
    ST32(v0+4, FBITS(f0));
    ST32(v1+52, FBITS(f2));
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    ST32(a0+8, FBITS(f0));
    ST32(v1+64, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    goto L_088DBC00;
L_088DBC00:;
    return;
}

/* 088DBC08 */
void func_088DBC08(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088DBC08:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    a2 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_088DBC38; }
    goto L_088DBC20;
L_088DBC20:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a2 + v1;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 11)) | ((a1 & 0x1) << 11);
    ST32(v1+28, v0);
    goto L_088DBC38;
L_088DBC38:;
    return;
}

/* 088DBC40 */
void func_088DBC40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DBC40:;
    v0 = a0 << 4;
    sp = sp - 16;
    v0 = v0 - a0;
    t0 = (u32)-1;
    a2 = v0 << 3;
    cnd_ = a0 == t0;
    a3 = a1 & 0xff;
    if (cnd_) { goto L_088DBC9C; }
    goto L_088DBC60;
L_088DBC60:;
    v0 = D_08B309F4 - (2548);
    a0 = LD32(v0+2548);
    v1 = D_08B30A2C - (2604);
    a1 = LD_U8(v1+2604);
    v1 = a2 + a0;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 10)) | ((a3 & 0x1) << 10);
    cnd_ = a1 == 0;
    ST32(v1+28, v0);
    if (cnd_) { goto L_088DBC9C; }
    goto L_088DBC84;
L_088DBC84:;
    v0 = LD32(v1);
    a1 = a3 + 0;
    cnd_ = v0 == t0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DBC9C; }
    goto L_088DBC94;
L_088DBC94:;
    func_0890EFB8();
    goto L_088DBC9C;
L_088DBC9C:;
    sp = sp + 16;
    return;
}

/* 088DBCA8 */
void func_088DBCA8(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DBCA8:;
    v0 = a0 << 4;
    sp = sp - 16;
    v0 = v0 - a0;
    a3 = (u32)-1;
    cnd_ = a0 == a3;
    a2 = v0 << 3;
    if (cnd_) { goto L_088DBD08; }
    goto L_088DBCC4;
L_088DBCC4:;
    v0 = D_08B309F4 - (2548);
    a0 = LD32(v0+2548);
    v1 = D_08B30A2C - (2604);
    a1 = LD_U8(v1+2604);
    a0 = a2 + a0;
    v1 = LD32(a0+28);
    v0 = 0x10000u;
    ST32(a0+20, FBITS(f12));
    v1 = v1 | v0;
    ST32(a0+28, v1);
    cnd_ = a1 == 0;
    ST32(a0+24, FBITS(f13));
    if (cnd_) { goto L_088DBD08; }
    goto L_088DBCF4;
L_088DBCF4:;
    v0 = LD32(a0);
    cnd_ = v0 == a3;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DBD08; }
    goto L_088DBD00;
L_088DBD00:;
    v0 = func_0890EFC8();
    goto L_088DBD08;
L_088DBD08:;
    sp = sp + 16;
    return;
}

/* 088DBD14 */
u64 func_088DBD14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DBD14:;
    v0 = a0 << 4;
    sp = sp - 16;
    v0 = v0 - a0;
    a2 = (u32)-1;
    a1 = v0 << 3;
    cnd_ = a0 == a2;
    a3 = 0 + 0;
    if (cnd_) { goto L_088DBD58; }
    goto L_088DBD34;
L_088DBD34:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a1 + v1;
    v0 = LD32(v1);
    cnd_ = v0 == a2;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DBD58; }
    goto L_088DBD4C;
L_088DBD4C:;
    { u64 r_ = func_0890EEE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DBD54;
L_088DBD54:;
    a3 = v0 + 0;
    goto L_088DBD58;
L_088DBD58:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088DBD68 */
void func_088DBD68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088DBD68:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    a3 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a2 = a1 + 0;
    if (cnd_) { goto L_088DBDC0; }
    goto L_088DBD80;
L_088DBD80:;
    v1 = D_08B309F4 - (2548);
    v0 = LD32(v1+2548);
    a1 = LD32(a1);
    v0 = a3 + v0;
    ST32(v0+76, a1);
    a0 = v0 + 76;
    v1 = LD32(a2+4);
    ST32(a0+4, v1);
    v0 = LD32(a2+8);
    ST32(a0+8, v0);
    v1 = LD32(a2+12);
    ST32(a0+12, v1);
    v0 = LD32(a2+16);
    ST32(a0+16, v0);
    v1 = LD32(a2+20);
    ST32(a0+20, v1);
    goto L_088DBDC0;
L_088DBDC0:;
    return;
}

/* 088DBDC8 */
void func_088DBDC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088DBDC8:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    a2 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_088DBDF8; }
    goto L_088DBDE0;
L_088DBDE0:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a2 + v1;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 18)) | ((a1 & 0x1) << 18);
    ST32(v1+28, v0);
    goto L_088DBDF8;
L_088DBDF8:;
    return;
}

/* 088DBE00 */
void func_088DBE00(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088DBE00:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    a2 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_088DBE30; }
    goto L_088DBE18;
L_088DBE18:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a2 + v1;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 19)) | ((a1 & 0x1) << 19);
    ST32(v1+28, v0);
    goto L_088DBE30;
L_088DBE30:;
    return;
}

/* 088DBE38 */
void func_088DBE38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
L_088DBE38:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    a3 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a2 = a1 + 0;
    if (cnd_) { goto L_088DBE8C; }
    goto L_088DBE50;
L_088DBE50:;
    v0 = D_08B309F4 - (2548);
    a1 = LD32(v0+2548);
    v1 = LD32(a2);
    a1 = a3 + a1;
    ST32(a1+100, v1);
    a0 = a1 + 100;
    v0 = LD32(a2+4);
    ST32(a0+4, v0);
    v1 = LD32(a2+8);
    ST32(a0+8, v1);
    v0 = LD32(a2+12);
    ST32(a0+12, v0);
    f0 = BITSF(LD32(a2+12));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(a1+112, FBITS(f0));
    goto L_088DBE8C;
L_088DBE8C:;
    return;
}

/* 088DBE94 */
void func_088DBE94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088DBE94:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    a2 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_088DBEC4; }
    goto L_088DBEAC;
L_088DBEAC:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a2 + v1;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 20)) | ((a1 & 0x1) << 20);
    ST32(v1+28, v0);
    goto L_088DBEC4;
L_088DBEC4:;
    return;
}

/* 088DBECC */
void func_088DBECC(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DBECC:;
    v0 = a0 << 4;
    v0 = v0 - a0;
    sp = sp - 16;
    a2 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_088DBF08; }
    goto L_088DBEEC;
L_088DBEEC:;
    v0 = D_08B309F4 - (2548);
    v1 = LD32(v0+2548);
    v1 = a2 + v1;
    v0 = LD32(v1+28);
    v0 = (v0 & ~(0x1u << 22)) | ((a1 & 0x1) << 22);
    cnd_ = a1 == 0;
    ST32(v1+28, v0);
    if (cnd_) { goto L_088DBF14; }
    goto L_088DBF08;
L_088DBF08:;
    goto L_088DBF0C;
L_088DBF0C:;
    sp = sp + 16;
    return;
L_088DBF14:;
    f0 = func_088DB940(a0, f12);
    goto L_088DBF1C;
L_088DBF1C:;
    goto L_088DBF0C;
}

/* 088DBF24 */
rv_t func_088DBF24(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DBF24:;
    sp = sp - 32;
    s1 = a1 + 0;
    f21 = f12;
    f20 = f13;
    { rv_t r_ = func_088DAF08(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DBF4C;
L_088DBF4C:;
    s0 = v0 + 0;
    v0 = ~(0 | v0);
    cnd_ = v0 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_088DBF88; }
    goto L_088DBF5C;
L_088DBF5C:;
    a1 = s1 + 0;
    cnd_ = s1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DBF88; }
    goto L_088DBF68;
L_088DBF68:;
    v0 = D_08B16141 - (24897);
    a2 = LD_U8(v0+24897);
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DBF74;
L_088DBF74:;
    a0 = s0 + 0;
    f12 = f20;
    f13 = f21;
    { rv_t r_ = func_088DBAA8(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DBF84;
L_088DBF84:;
    v0 = s0 + 0;
    goto L_088DBF88;
L_088DBF88:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088DBFA4 */
float func_088DBFA4(u32 a0, u32 a1, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088DBFA4:;
    sp = sp - 48;
    f21 = f15;
    f20 = f14;
    { rv_t r_ = func_088DBF24(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DBFC4;
L_088DBFC4:;
    v1 = ~(0 | v0);
    s0 = 0 < v1;
    a0 = v0 + 0;
    f12 = f20;
    cnd_ = s0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_088DBFF8; }
    goto L_088DBFDC;
L_088DBFDC:;
    v0 = s0 + 0;
    goto L_088DBFE0;
L_088DBFE0:;
    sp = sp + 48;
    return f0;
L_088DBFF8:;
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DC000;
L_088DC000:;
    a0 = LD32(sp);
    f12 = f21;
    f0 = func_088DB940(a0, f12);
    goto L_088DC00C;
L_088DC00C:;
    a0 = LD32(sp);
    a1 = 0 + 0;
    { rv_t r_ = func_088DB45C(a0, a1, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DC018;
L_088DC018:;
    a0 = sp + 0;
    s0 = v0 + 0;
    { u64 r_ = func_088DB420(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DC024;
L_088DC024:;
    v0 = s0 + 0;
    goto L_088DBFE0;
}

/* 088DC02C */
rv_t func_088DC02C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DC02C:;
    v0 = D_08B30930 - (2352);
    v0 = LD32(v0+2352);
    sp = sp - 16;
    f12 = f12 * f12;
    cnd_ = (s32)v0 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088DC0C8; }
    goto L_088DC044;
L_088DC044:;
    f7 = BITSF(LD32(a0+8));
    f6 = BITSF(LD32(a0));
    f5 = BITSF(LD32(a0+4));
    a2 = v0 + 0;
    v0 = D_08B30934 - (2356);
    v0 = v0 + 2356;
    f2 = BITSF(LD32(v0));
    goto L_088DC060;
L_088DC060:;
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f2 = f6 - f2;
    f3 = f5 - f3;
    f4 = f7 - f4;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;v[3]=d3;}
    v1 = FBITS(f2);
    {vr0=BITSF(v1);}
    v1 = FBITS(f3);
    {vr1=BITSF(v1);}
    v1 = FBITS(f4);
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    a1 = a1 + 1;
    v1 = (s32)a1 < (s32)a2;
    fcc = FCMP(f0, f12, 12);
    v0 = v0 + 12;
    ST32(sp, FBITS(f2));
    a0 = 1;
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_088DC0CC; }
    goto L_088DC0C0;
L_088DC0C0:;
    cnd_ = v1 != 0;
    if (cnd_) { f2 = BITSF(LD32(v0)); goto L_088DC060; }
    goto L_088DC0C8;
L_088DC0C8:;
    a0 = 0 + 0;
    goto L_088DC0CC;
L_088DC0CC:;
    v0 = a0 + 0;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 088DC0D8 */
u32 func_088DC0D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_088DC0D8:;
    v0 = D_08B30930 - (2352);
    v0 = LD32(v0+2352);
    cnd_ = (s32)v0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DC184; }
    goto L_088DC0E8;
L_088DC0E8:;
    f2 = BITSF(LD32(a0));
    a2 = v0 + 0;
    v0 = D_08B30934 - (2356);
    v0 = v0 + 2356;
    goto L_088DC0F8;
L_088DC0F8:;
    f1 = BITSF(LD32(v0));
    v1 = v1 + 1;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    a1 = (s32)v1 < (s32)a2;
    if (cnd_) { goto L_088DC17C; }
    goto L_088DC110;
L_088DC110:;
    f0 = BITSF(LD32(a0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088DC17C; }
    goto L_088DC124;
L_088DC124:;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088DC17C; }
    goto L_088DC13C;
L_088DC13C:;
    f0 = BITSF(LD32(a0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_088DC17C; }
    goto L_088DC150;
L_088DC150:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a3 = 1;
    if (cnd_) { goto L_088DC17C; }
    goto L_088DC168;
L_088DC168:;
    f0 = BITSF(LD32(a0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088DC188; }
    goto L_088DC17C;
L_088DC17C:;
    cnd_ = a1 != 0;
    v0 = v0 + 12;
    if (cnd_) { goto L_088DC0F8; }
    goto L_088DC184;
L_088DC184:;
    a3 = 0 + 0;
    goto L_088DC188;
L_088DC188:;
    v0 = a3 + 0;
    return v0;
}

/* 088DC190 */
u32 func_088DC190(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_088DC190:;
    sp = sp - 192;
    v1 = D_08B309F4 - (2548);
    v0 = a0 << 4;
    v0 = v0 - a0;
    v0 = v0 << 3;
    s5 = D_08B30930 - (2352);
    s3 = 0 + 0;
    f23 = BITSF(0);
    f22 = f23;
    t0 = LD32(v1+2548);
    v1 = LD32(s5+2352);
    s1 = t0 + v0;
    v0 = LD32(s1+28);
    f26 = BITSF(LD32(s1+12));
    ST32(sp+60, a1);
    v0 = (v0 >> 10) & 0x1;
    s0 = s1 + 32;
    ST32(sp+64, a2);
    ST32(sp+68, a3);
    ST32(sp+72, v0);
    cnd_ = (s32)v1 <= 0;
    ST32(sp+48, FBITS(f23));
    if (cnd_) { goto L_088DC328; }
    goto L_088DC238;
L_088DC238:;
    v0 = D_08AECBB0 - (-13392);
    v1 = D_08AECBB4 - (-13388);
    f24 = BITSF(LD32(v0-13392));
    f29 = BITSF(LD32(v1-13388));
    v0 = D_08AECBC0 - (-13376);
    v1 = D_08AECBC4 - (-13372);
    f28 = BITSF(LD32(v0-13376));
    f27 = BITSF(LD32(v1-13372));
    v0 = D_08AECBAC - (-13396);
    f25 = BITSF(LD32(v0-13396));
    s6 = 0x100000u;
    v0 = D_08B30964 - (2404);
    s4 = v0 + 2404;
    fp = D_08B30934 - (2356);
    s7 = D_08AECBA8 - (-13400);
    s2 = 0 + 0;
    s6 = s6 | 0x800;
    goto L_088DC27C;
L_088DC27C:;
    v0 = fp + 2356;
    v0 = s2 + v0;
    f7 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 - f5;
    f2 = f2 - f6;
    f3 = f3 - f7;
    {u32 a_=sp+(80);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f1);
    v0 = FBITS(f2);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f4 = BITSF(LD32(s7-13400));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    ST32(sp+40, FBITS(f3));
    fcc = FCMP(f0, f4, 12);
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f3));
    if (cnd_) { goto L_088DC444; }
    goto L_088DC2FC;
L_088DC2FC:;
    f0 = BITSF(LD32(sp+48));
    f22 = f22 + f25;
    f23 = f23 + f24;
    f0 = f0 + f24;
    goto L_088DC30C;
L_088DC30C:;
    ST32(sp+48, FBITS(f0));
    goto L_088DC310;
L_088DC310:;
    v0 = LD32(s5+2352);
    s3 = s3 + 1;
    s2 = s2 + 12;
    v0 = (s32)s3 < (s32)v0;
    cnd_ = v0 != 0;
    s4 = s4 + 36;
    if (cnd_) { goto L_088DC27C; }
    goto L_088DC328;
L_088DC328:;
    v0 = LD32(s5+2352);
    cnd_ = v0 == 0;
    f22 = f22 * f26;
    if (cnd_) { goto L_088DC35C; }
    goto L_088DC334;
L_088DC334:;
    f1 = BITSF(v0);
    v0 = D_08AECBAC - (-13396);
    f2 = BITSF(LD32(sp+48));
    f0 = (float)(s32)FBITS(f1);
    f1 = BITSF(LD32(v0-13396));
    f1 = f1 / f0;
    f2 = f2 * f1;
    f22 = f22 * f1;
    f23 = f23 * f1;
    ST32(sp+48, FBITS(f2));
    goto L_088DC35C;
L_088DC35C:;
    f21 = BITSF(LD32(s0+84));
    fcc = FCMP(f22, f21, 14);
    cnd_ = !fcc;
    if (cnd_) { f21 = f22; goto L_088DC370; }
    goto L_088DC370;
L_088DC370:;
    f22 = BITSF(0);
    v1 = D_08AECBAC - (-13396);
    fcc = FCMP(f23, f22, 12);
    cnd_ = fcc;
    f0 = BITSF(LD32(v1-13396));
    if (cnd_) { goto L_088DC39C; }
    goto L_088DC388;
L_088DC388:;
    fcc = FCMP(f0, f23, 12);
    cnd_ = fcc;
    f22 = f0;
    if (cnd_) { goto L_088DC39C; }
    goto L_088DC398;
L_088DC398:;
    f22 = f23;
    goto L_088DC39C;
L_088DC39C:;
    v0 = D_08AECBAC - (-13396);
    f0 = BITSF(LD32(v0-13396));
    f20 = BITSF(0);
    a0 = sp + 48;
    a1 = sp + 52;
    a2 = sp + 56;
    ST32(sp+56, FBITS(f0));
    ST32(sp+52, FBITS(f20));
    f0 = func_088DD024(a0, a1, a2);
    goto L_088DC3C0;
L_088DC3C0:;
    fcc = FCMP(f21, f20, 2);
    v1 = LD32(sp+60);
    v0 = 1;
    ST32(v1, FBITS(f21));
    v1 = LD32(sp+64);
    ST32(v1, FBITS(f22));
    v1 = LD32(sp+68);
    ST32(v1, FBITS(f0));
    cnd_ = !fcc;
    ST32(sp+48, FBITS(f0));
    if (cnd_) { goto L_088DC3EC; }
    goto L_088DC3E8;
L_088DC3E8:;
    v0 = 0 + 0;
    goto L_088DC3EC;
L_088DC3EC:;
    sp = sp + 192;
    return v0;
L_088DC444:;
    v1 = LD32(s1+28);
    v0 = 0x40000u;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    v0 = v1 & s6;
    if (cnd_) { goto L_088DC4E0; }
    goto L_088DC458;
L_088DC458:;
    f0 = BITSF(LD32(s0+44));
    fcc = FCMP(f0, f5, 14);
    cnd_ = !fcc;
    v0 = s0 + 44;
    if (cnd_) { goto L_088DC4D0; }
    goto L_088DC46C;
L_088DC46C:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f5, f0, 14);
    cnd_ = !fcc;
    a0 = 0 + 0;
    if (cnd_) { goto L_088DC4D4; }
    goto L_088DC480;
L_088DC480:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f6, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = (v1 >> 19) & 0x1; goto L_088DC4D8; }
    goto L_088DC494;
L_088DC494:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f6, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = (v1 >> 19) & 0x1; goto L_088DC4D8; }
    goto L_088DC4A8;
L_088DC4A8:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = (v1 >> 19) & 0x1; goto L_088DC4D8; }
    goto L_088DC4BC;
L_088DC4BC:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f7, f0, 14);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_088DC4D4; }
    goto L_088DC4D0;
L_088DC4D0:;
    a0 = 0 + 0;
    goto L_088DC4D4;
L_088DC4D4:;
    v0 = (v1 >> 19) & 0x1;
    goto L_088DC4D8;
L_088DC4D8:;
    cnd_ = a0 == v0;
    v0 = v1 & s6;
    if (cnd_) { goto L_088DC310; }
    goto L_088DC4E0;
L_088DC4E0:;
    cnd_ = v0 == s6;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_088DC654; }
    goto L_088DC4E8;
L_088DC4E8:;
    f1 = BITSF(LD32(sp+4));
    ST32(sp+16, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    v0 = LD32(s1+28);
    goto L_088DC500;
L_088DC500:;
    v0 = v0 & 0x800;
    cnd_ = v0 == 0;
    if (cnd_) { f12 = BITSF(LD32(s0+12)); goto L_088DC640; }
    goto L_088DC50C;
L_088DC50C:;
    a0 = s0 + 20;
    a1 = sp + 16;
    f0 = func_088DC6F4(a0, a1);
    goto L_088DC518;
L_088DC518:;
    v0 = D_08B30A0C - (2572);
    goto L_088DC51C;
L_088DC51C:;
    v1 = LD32(v0+2572);
    v0 = 1;
    cnd_ = v1 == v0;
    f22 = f22 + f0;
    if (cnd_) { goto L_088DC548; }
    goto L_088DC52C;
L_088DC52C:;
    v1 = LD32(sp+72);
    cnd_ = v1 == 0;
    if (cnd_) { f0 = BITSF(LD32(sp+48)); goto L_088DC54C; }
    goto L_088DC538;
L_088DC538:;
    v0 = D_08B30A2C - (2604);
    v1 = LD_U8(v0+2604);
    cnd_ = v1 == 0;
    f12 = BITSF(LD32(sp));
    if (cnd_) { goto L_088DC558; }
    goto L_088DC548;
L_088DC548:;
    f0 = BITSF(LD32(sp+48));
    goto L_088DC54C;
L_088DC54C:;
    f23 = f23 + f24;
    f0 = f0 + f25;
    goto L_088DC30C;
L_088DC558:;
    f13 = BITSF(LD32(sp+8));
    f0 = func_08A9F5FC(f12, f13);
    goto L_088DC560;
L_088DC560:;
    f21 = f0;
    f12 = BITSF(LD32(s4+8));
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 2);
    cnd_ = !fcc;
    f13 = BITSF(LD32(s4+32));
    if (cnd_) { goto L_088DC58C; }
    goto L_088DC57C;
L_088DC57C:;
    fcc = FCMP(f13, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f21 = f21 - f0; goto L_088DC59C; }
    goto L_088DC58C;
L_088DC58C:;
    f0 = func_08A9F5FC(f12, f13);
    goto L_088DC594;
L_088DC594:;
    f21 = f21 - f0;
    f0 = BITSF(0);
    goto L_088DC59C;
L_088DC59C:;
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f21 = f21 + f29; goto L_088DC5AC; }
    goto L_088DC5AC;
L_088DC5AC:;
    v0 = D_08AECBB8 - (-13384);
    f0 = BITSF(LD32(v0-13384));
    f2 = f21 - f29;
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    f1 = f21 - f0;
    if (cnd_) { goto L_088DC5FC; }
    goto L_088DC5C8;
L_088DC5C8:;
    v0 = D_08AECBBC - (-13380);
    f3 = BITSF(LD32(v0-13380));
    fcc = FCMP(f3, f21, 12);
    cnd_ = fcc;
    f2 = f3 - f21;
    if (cnd_) { goto L_088DC5FC; }
    goto L_088DC5E0;
L_088DC5E0:;
    v0 = D_08AECBC0 - (-13376);
    f0 = BITSF(LD32(v0-13376));
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    f1 = f0 - f21;
    if (cnd_) { goto L_088DC5FC; }
    goto L_088DC5F8;
L_088DC5F8:;
    f2 = f21;
    goto L_088DC5FC;
L_088DC5FC:;
    f0 = BITSF(LD32(s0+12));
    fcc = FCMP(f20, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f1 + f28; goto L_088DC624; }
    goto L_088DC610;
L_088DC610:;
    f0 = f25 / f0;
    f0 = f20 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f1 = f1 + f28;
    goto L_088DC624;
L_088DC624:;
    f2 = f2 + f28;
    f0 = BITSF(LD32(sp+48));
    f1 = f1 * f27;
    f2 = f2 * f27;
    f0 = f0 + f1;
    f23 = f23 + f2;
    goto L_088DC30C;
L_088DC640:;
    f13 = BITSF(LD32(s0+16));
    f14 = f20;
    f0 = func_088DC6BC(f12, f13, f14);
    goto L_088DC64C;
L_088DC64C:;
    v0 = D_08B30A0C - (2572);
    goto L_088DC51C;
L_088DC654:;
    {v[112]=BITSF(LD32(s1+(100)));}
    {v[113]=BITSF(LD32(s1+(104)));}
    {v[114]=BITSF(LD32(s1+(108)));}
    {v[115]=BITSF(LD32(s1+(112)));}
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
    {ST32(sp+(16),FBITS(v[120]));}
    {ST32(sp+(20),FBITS(v[121]));}
    {ST32(sp+(24),FBITS(v[122]));}
    v0 = LD32(s1+28);
    goto L_088DC500;
}

/* 088DC6BC */
float func_088DC6BC(float f12, float f13, float f14)
{
    u32 v0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_088DC6BC:;
    fcc = FCMP(f14, f12, 12);
    f0 = BITSF(0);
    cnd_ = !fcc;
    if (cnd_) { f12 = f13 - f12; goto L_088DC6D8; }
    goto L_088DC6CC;
L_088DC6CC:;
    v0 = D_08AECBC8 - (-13368);
    f0 = BITSF(LD32(v0-13368));
    return f0;
L_088DC6D8:;
    fcc = FCMP(f14, f13, 12);
    cnd_ = !fcc;
    f13 = f13 - f14;
    if (cnd_) { goto L_088DC6EC; }
    goto L_088DC6E8;
L_088DC6E8:;
    f0 = f13 / f12;
    goto L_088DC6EC;
L_088DC6EC:;
    return f0;
}

/* 088DC6F4 */
float func_088DC6F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0, f14 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088DC6F4:;
    sp = sp - 64;
    s4 = a1 + 0;
    s3 = a0 + 12;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = sp + 0;
    goto L_088DC724;
L_088DC724:;
    a0 = s1 << 2;
    v0 = a0 + s4;
    a1 = LD32(v0);
    v1 = a0 + s3;
    f13 = BITSF(LD32(v1));
    a1 = (a1 >> 0) & 0x7fffffff;
    f0 = BITSF(a1);
    a0 = a0 + s2;
    f14 = BITSF(a1);
    fcc = FCMP(f13, f0, 12);
    s1 = s1 + 1;
    f0 = BITSF(0);
    cnd_ = fcc;
    ST32(s0, a1);
    if (cnd_) { goto L_088DC79C; }
    goto L_088DC75C;
L_088DC75C:;
    f12 = BITSF(LD32(a0));
    f0 = func_088DC6BC(f12, f13, f14);
    goto L_088DC764;
L_088DC764:;
    v0 = (s32)s1 < 3;
    ST32(s0+16, FBITS(f0));
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088DC724; }
    goto L_088DC774;
L_088DC774:;
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+16));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(sp+24));
    if (cnd_) { goto L_088DC7BC; }
    goto L_088DC78C;
L_088DC78C:;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f2; goto L_088DC79C; }
    goto L_088DC79C;
L_088DC79C:;
    goto L_088DC7A0;
L_088DC7A0:;
    sp = sp + 64;
    return f0;
L_088DC7BC:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088DC79C; }
    goto L_088DC7CC;
L_088DC7CC:;
    goto L_088DC7A0;
}

/* 088DC7D4 */
float func_088DC7D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_088DC7D4:;
    v0 = D_08B30A0C - (2572);
    v1 = LD32(v0+2572);
    a2 = 1;
    t2 = D_08B15A04 - (23044);
    cnd_ = v1 == a2;
    a1 = a0 + 0;
    if (cnd_) { goto L_088DC868; }
    goto L_088DC7EC;
L_088DC7EC:;
    v0 = D_08AECBD0 - (-13360);
    v1 = a0 << 4;
    a0 = LD32(t2+23044);
    f3 = BITSF(LD32(v0-13360));
    v1 = v1 + a1;
    v0 = D_08B22E88 - (11912);
    v1 = v1 << 3;
    v0 = v0 + 11912;
    t1 = a2 << (a1 & 31);
    t0 = v1 + v0;
    cnd_ = a1 == a0;
    a3 = D_08B159FC - (23036);
    if (cnd_) { goto L_088DC83C; }
    goto L_088DC81C;
L_088DC81C:;
    v0 = D_08B230A8 - (12456);
    ST8(v0+12456, t1);
    v1 = D_08B230B0 - (12464);
    v0 = D_08B15A0C - (23052);
    ST8(v1+12464, a2);
    ST32(t2+23044, a1);
    ST8(v0+23052, a2);
    ST32(a3+23036, t0);
    goto L_088DC83C;
L_088DC83C:;
    v0 = LD32(a3+23036);
    f0 = BITSF(0);
    f1 = BITSF(LD32(v0+60));
    f1 = f3 - f1;
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    f2 = BITSF(LD32(v0+68));
    if (cnd_) { goto L_088DC868; }
    goto L_088DC85C;
L_088DC85C:;
    f0 = f3 / f1;
    f0 = f2 * f0;
    return f0;
L_088DC868:;
    v0 = D_08AECBCC - (-13364);
    f0 = BITSF(LD32(v0-13364));
    return f0;
}

/* 088DC874 */
u32 func_088DC874(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088DC874:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_088DC8C8; }
    goto L_088DC880;
L_088DC880:;
    v0 = D_08B309FC - (2556);
    a2 = LD32(v0+2556);
    a3 = LD32(a2+12);
    v0 = LD32(a2+8);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088DC96C; }
    goto L_088DC89C;
L_088DC89C:;
    v1 = a3 + 1;
    a0 = LD32(a2+4);
    ST32(a2+12, v1);
    v0 = a3 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    v0 = 1;
    ST32(t0, v1);
    goto L_088DC8BC;
L_088DC8BC:;
    a2 = v0 & 0xff;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088DC914; }
    goto L_088DC8C8;
L_088DC8C8:;
    v0 = D_08B30A00 - (2560);
    a0 = LD32(v0+2560);
    a2 = LD32(a0+12);
    v0 = LD32(a0+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = (u32)-1; goto L_088DC91C; }
    goto L_088DC8E4;
L_088DC8E4:;
    v1 = a2 + 1;
    a1 = LD32(a0+4);
    ST32(a0+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    v0 = D_08B30A08 - (2568);
    a2 = 1;
    ST32(t0, a0);
    v1 = LD32(v0+2568);
    a0 = a0 + v1;
    ST32(t0, a0);
    goto L_088DC914;
L_088DC914:;
    v0 = a2 + 0;
    return v0;
L_088DC91C:;
    ST32(t0, v1);
    cnd_ = a1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088DC914; }
    goto L_088DC928;
L_088DC928:;
    v0 = D_08B309FC - (2556);
    a1 = LD32(v0+2556);
    a2 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_088DC964; }
    goto L_088DC944;
L_088DC944:;
    v1 = a2 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    v0 = 1;
    ST32(t0, v1);
    goto L_088DC964;
L_088DC964:;
    a2 = v0 & 0xff;
    goto L_088DC914;
L_088DC96C:;
    ST32(a0, v0);
    v0 = 0 + 0;
    goto L_088DC8BC;
}

/* 088DC978 */
float func_088DC978(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DC978:;
    sp = sp - 16;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { goto L_088DC9B4; }
    goto L_088DC984;
L_088DC984:;
    v1 = D_08B30A08 - (2568);
    v0 = LD32(v1+2568);
    v1 = a0 - v0;
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088DC9C0; }
    goto L_088DC99C;
L_088DC99C:;
    v0 = D_08B309FC - (2556);
    a2 = LD32(v0+2556);
    goto L_088DC9A4;
L_088DC9A4:;
    v0 = LD32(a2);
    v1 = LD32(v0+8);
    t_ = v1;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DC9B4;
L_088DC9B4:;
    sp = sp + 16;
    return f0;
L_088DC9C0:;
    v0 = D_08B30A00 - (2560);
    a2 = LD32(v0+2560);
    a1 = v1 + 0;
    goto L_088DC9A4;
}

/* 088DC9D0 */
u32 func_088DC9D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DC9D0:;
    sp = sp - 16;
    s1 = D_08B30A34 - (2612);
    a2 = a1 + 0;
    a1 = a0 + 0;
    a3 = LD32(s1+2612);
    v0 = LD32(a3+12);
    v1 = LD32(a3+8);
    t0 = v0 + 1;
    t1 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_088DCA24; }
    goto L_088DCA0C;
L_088DCA0C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_088DCA24:;
    v0 = LD32(a3+4);
    ST32(a3+12, t0);
    v0 = t1 + v0;
    s0 = LD32(v0);
    a0 = s0 + 0;
    v0 = func_0890EFD0(a1, a2);
    goto L_088DCA3C;
L_088DCA3C:;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DCA6C; }
    goto L_088DCA48;
L_088DCA48:;
    v0 = D_08B308A4 - (2212);
    v1 = LD32(v0+2212);
    v0 = D_08AECBD4 - (-13356);
    f12 = BITSF(LD32(v0-13356));
    v1 = v1 + s0;
    ST8(v1, 0);
    { u64 r_ = func_088DCC54(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DCA64;
L_088DCA64:;
    a0 = s0 + 0;
    goto L_088DCA0C;
L_088DCA6C:;
    v0 = LD32(s1+2612);
    v1 = LD32(v0);
    a2 = LD32(v1+8);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DCA80;
L_088DCA80:;
    a0 = (u32)-1;
    goto L_088DCA0C;
}

/* 088DCA88 */
void func_088DCA88(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCA88:;
    sp = sp - 16;
    v0 = (u32)-1;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_088DCAC4; }
    goto L_088DCAA8;
L_088DCAA8:;
    func_0890F04C(a1);
    goto L_088DCAB0;
L_088DCAB0:;
    v0 = D_08B308A4 - (2212);
    v1 = LD32(v0+2212);
    v0 = 1;
    v1 = v1 + s0;
    ST8(v1, v0);
    goto L_088DCAC4;
L_088DCAC4:;
    sp = sp + 16;
    return;
}

/* 088DCAD4 */
void func_088DCAD4(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCAD4:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DCAEC; }
    goto L_088DCAE4;
L_088DCAE4:;
    func_0890F0BC();
    goto L_088DCAEC;
L_088DCAEC:;
    sp = sp + 16;
    return;
}

/* 088DCAF8 */
void func_088DCAF8(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCAF8:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DCB10; }
    goto L_088DCB08;
L_088DCB08:;
    func_0890F0E0();
    goto L_088DCB10;
L_088DCB10:;
    sp = sp + 16;
    return;
}

/* 088DCB1C */
rv_t func_088DCB1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCB1C:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DCB4C; }
    goto L_088DCB34;
L_088DCB34:;
    func_0890F070();
    goto L_088DCB3C;
L_088DCB3C:;
    v1 = D_08B308A4 - (2212);
    v0 = LD32(v1+2212);
    v0 = v0 + s0;
    ST8(v0, 0);
    goto L_088DCB4C;
L_088DCB4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DCB5C */
rv_t func_088DCB5C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCB5C:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DCB94; }
    goto L_088DCB74;
L_088DCB74:;
    func_0890F104();
    goto L_088DCB7C;
L_088DCB7C:;
    v0 = D_08B30A34 - (2612);
    a0 = LD32(v0+2612);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DCB94;
L_088DCB94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DCBA4 */
u32 func_088DCBA4(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCBA4:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = 1;
    if (cnd_) { goto L_088DCBC4; }
    goto L_088DCBB8;
L_088DCBB8:;
    v0 = func_0890F128();
    goto L_088DCBC0;
L_088DCBC0:;
    a1 = v0 + 0;
    goto L_088DCBC4;
L_088DCBC4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088DCBD4 */
u64 func_088DCBD4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DCBD4:;
    sp = sp - 32;
    v0 = D_08B30A34 - (2612);
    v1 = ((u32)(uintptr_t)func_088DCB1C) - (-13540);
    s0 = v1 - 13540;
    a0 = LD32(v0+2612);
    ST32(sp+4, 0);
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DCC20; }
    goto L_088DCC08;
L_088DCC08:;
    { u64 r_ = func_0890F1D8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DCC10;
L_088DCC10:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088DCC20:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DCC3C;
L_088DCC3C:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DCC20; }
    goto L_088DCC4C;
L_088DCC4C:;
    goto L_088DCC08;
}

/* 088DCC54 */
u64 func_088DCC54(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCC54:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DCC90; }
    goto L_088DCC64;
L_088DCC64:;
    v1 = D_08AECBD8 - (-13352);
    f0 = BITSF(LD32(v1-13352));
    v0 = D_08AECBDC - (-13348);
    f1 = BITSF(LD32(v0-13348));
    f12 = f12 * f0;
    fcc = FCMP(f1, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f1; goto L_088DCC88; }
    goto L_088DCC88;
L_088DCC88:;
    { u64 r_ = func_0890F1F4(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DCC90;
L_088DCC90:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088DCC9C */
u32 func_088DCC9C(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCC9C:;
    sp = sp - 16;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088DCCBC; }
    goto L_088DCCB0;
L_088DCCB0:;
    v0 = func_0890F160();
    goto L_088DCCB8;
L_088DCCB8:;
    a1 = v0 + 0;
    goto L_088DCCBC;
L_088DCCBC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088DCCCC */
float func_088DCCCC(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCCCC:;
    sp = sp - 16;
    v0 = (u32)-1;
    f0 = BITSF(0);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DCCE8; }
    goto L_088DCCE0;
L_088DCCE0:;
    f0 = func_0890F188();
    goto L_088DCCE8;
L_088DCCE8:;
    sp = sp + 16;
    return f0;
}

/* 088DCCF4 */
float func_088DCCF4(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCCF4:;
    sp = sp - 16;
    v0 = (u32)-1;
    f0 = BITSF(0);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DCD10; }
    goto L_088DCD08;
L_088DCD08:;
    f0 = func_0890F1AC();
    goto L_088DCD10;
L_088DCD10:;
    sp = sp + 16;
    return f0;
}

/* 088DCD1C */
u32 func_088DCD1C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_088DCD1C:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    a1 = v0 << 3;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DCD40; }
    goto L_088DCD34;
L_088DCD34:;
    v0 = D_08B30A3C - (2620);
    v1 = LD32(v0+2620);
    v1 = v1 + a1;
    goto L_088DCD40;
L_088DCD40:;
    v0 = v1 + 0;
    return v0;
}

/* 088DCD48 */
u32 func_088DCD48(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCD48:;
    sp = sp - 16;
    v0 = D_08B308CC - (2252);
    a1 = a0 + 0;
    a2 = 1;
    s0 = (u32)-1;
    v1 = LD32(v0+2252);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088DCD84; }
    goto L_088DCD70;
L_088DCD70:;
    v0 = 0 + 0;
    goto L_088DCD78;
L_088DCD78:;
    sp = sp + 16;
    return v0;
L_088DCD84:;
    { u64 r_ = func_08AB7790(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DCD8C;
L_088DCD8C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088DCD9C; }
    goto L_088DCD94;
L_088DCD94:;
    s0 = LD32(v0);
    v1 = 1;
    goto L_088DCD9C;
L_088DCD9C:;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DCD70; }
    goto L_088DCDA4;
L_088DCDA4:;
    v0 = func_088DCD1C(a0);
    goto L_088DCDAC;
L_088DCDAC:;
    goto L_088DCD78;
}

/* 088DCDB4 */
rv_t func_088DCDB4(u32 a0, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCDB4:;
    sp = sp - 16;
    v0 = D_08AECBE0 - (-13344);
    f0 = BITSF(LD32(v0-13344));
    v0 = D_08AECBE4 - (-13340);
    f12 = f12 * f0;
    f0 = BITSF(LD32(v0-13340));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f0; goto L_088DCDE0; }
    goto L_088DCDE0;
L_088DCDE0:;
    { rv_t r_ = func_0890EF54(a0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DCDE8;
L_088DCDE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DCDF4 */
u32 func_088DCDF4(float f12)
{
    u32 v0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DCDF4:;
    sp = sp - 16;
    v0 = D_08AECBE8 - (-13336);
    f0 = BITSF(LD32(v0-13336));
    v0 = D_08AECBEC - (-13332);
    f12 = f12 * f0;
    f0 = BITSF(LD32(v0-13332));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f0; goto L_088DCE20; }
    goto L_088DCE20;
L_088DCE20:;
    v0 = func_0890EFA8();
    goto L_088DCE28;
L_088DCE28:;
    sp = sp + 16;
    return v0;
}

/* 088DCE34 */
u32 func_088DCE34(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DCE34:;
    sp = sp - 32;
    s2 = D_08B16144 - (24900);
    s4 = 0xffff;
    s3 = 0x10000000u;
    s1 = s2 + 0;
    a2 = LD32(s1+24900);
    goto L_088DCE64;
L_088DCE64:;
    v0 = s4 < a2;
    cnd_ = v0 == 0;
    v1 = a2 & 0xaaaa;
    if (cnd_) { goto L_088DCE7C; }
    goto L_088DCE70;
L_088DCE70:;
    ST32(s1+24900, 0);
    a2 = 0 + 0;
    v1 = a2 & 0xaaaa;
    goto L_088DCE7C;
L_088DCE7C:;
    v0 = a2 & 0x5555;
    v1 = v1 >> 1;
    v0 = v0 << 1;
    v0 = v0 | v1;
    a0 = v0 & 0xcccc;
    v0 = v0 & 0x3333;
    a0 = a0 >> 2;
    v0 = v0 << 2;
    v0 = v0 | a0;
    a1 = v0 & 0xf0f0;
    v0 = v0 & 0xf0f;
    v0 = v0 << 4;
    a1 = a1 >> 4;
    v0 = v0 | a1;
    v1 = v0 & 0xff;
    v1 = v1 << 8;
    v0 = v0 >> 8;
    v0 = v1 | v0;
    s0 = v0 + s3;
    a0 = s0 + 0;
    v0 = a2 + 1;
    ST32(s2+24900, v0);
    v0 = func_088DAC58(a0);
    goto L_088DCED8;
L_088DCED8:;
    cnd_ = v0 != 0;
    a2 = LD32(s1+24900);
    if (cnd_) { goto L_088DCE64; }
    goto L_088DCEE0;
L_088DCEE0:;
    v0 = s0 + 0;
    sp = sp + 32;
    return v0;
}

/* 088DCF04 */
rv_t func_088DCF04(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DCF04:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s3 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DCFD4; }
    goto L_088DCF38;
L_088DCF38:;
    s0 = s1 < 0x1u;
    goto L_088DCF3C;
L_088DCF3C:;
    v0 = s2 < 0x1u;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = D_08B308D0 - (2256);
    if (cnd_) { goto L_088DCFB8; }
    goto L_088DCF4C;
L_088DCF4C:;
    v0 = s3 < 0x1u;
    goto L_088DCF50;
L_088DCF50:;
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = D_08B30900 - (2304);
    if (cnd_) { goto L_088DCF78; }
    goto L_088DCF5C;
L_088DCF5C:;
    goto L_088DCF60;
L_088DCF60:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DCF78:;
    a0 = a0 + 2304;
    func_088D8FA8(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DCF80;
L_088DCF80:;
    a0 = D_08B308D0 - (2256);
    a0 = a0 + 2256;
    func_088D8FA8(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DCF8C;
L_088DCF8C:;
    a0 = D_08B308BC - (2236);
    v1 = a0 + 2236;
    v1 = LD32(v1+4);
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    cnd_ = v1 == 0;
    ST32(a0+2236, v0);
    if (cnd_) { goto L_088DCF5C; }
    goto L_088DCFA8;
L_088DCFA8:;
    a0 = v1 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DCFB0;
L_088DCFB0:;
    goto L_088DCF60;
L_088DCFB8:;
    a0 = a0 + 2256;
    func_088D8F70(a0);
    goto L_088DCFC0;
L_088DCFC0:;
    a0 = D_08B30900 - (2304);
    a0 = a0 + 2304;
    func_088D8F70(a0);
    goto L_088DCFCC;
L_088DCFCC:;
    v0 = s3 < 0x1u;
    goto L_088DCF50;
L_088DCFD4:;
    v0 = D_08AF0F80 - (3968);
    s0 = D_08B308BC - (2236);
    a0 = 5600;
    v0 = v0 + 3968;
    ST32(s0+2236, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DCFEC;
L_088DCFEC:;
    s0 = s0 + 2236;
    ST32(s0+4, v0);
    v1 = 1400;
    a0 = 0 + 0;
    ST32(s0+12, 0);
    ST32(s0+8, v1);
    v1 = v0 + 0;
    goto L_088DD008;
L_088DD008:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 1400;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088DD008; }
    goto L_088DD01C;
L_088DD01C:;
    s0 = s1 < 0x1u;
    goto L_088DCF3C;
}

/* 088DD024 */
float func_088DD024(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088DD024:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088DD050; }
    goto L_088DD03C;
L_088DD03C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_088DD050; }
    goto L_088DD050;
L_088DD050:;
    return f0;
}

/* 088DD058 */
rv_t func_088DD058(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD058:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088DCF04(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD06C;
L_088DD06C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DD078 */
rv_t func_088DD078(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD078:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088DCF04(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD08C;
L_088DD08C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DD098 */
void func_088DD098(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD098:;
    sp = sp - 16;
    v0 = D_08AECC00 - (-13312);
    v1 = 1;
    s0 = a0 + 0;
    f1 = BITSF(LD32(v0-13312));
    v0 = D_08AF7CF8 - (31992);
    v0 = v0 + 31992;
    ST32(a0, v0);
    v0 = D_08AECC04 - (-13308);
    a0 = a1 + 0;
    f0 = BITSF(LD32(v0-13308));
    v0 = 4;
    ST32(s0+60, v0);
    v0 = D_08AECC08 - (-13304);
    ST32(s0+48, FBITS(f0));
    f0 = BITSF(LD32(v0-13304));
    v0 = D_08AECC0C - (-13300);
    ST32(s0+56, FBITS(f1));
    ST32(s0+80, FBITS(f0));
    f0 = BITSF(LD32(v0-13300));
    ST8(s0+73, v1);
    ST32(s0+84, FBITS(f0));
    ST32(s0+24, FBITS(f1));
    ST32(s0+28, FBITS(f1));
    ST32(s0+32, FBITS(f1));
    ST32(s0+36, FBITS(f1));
    ST32(s0+52, FBITS(f1));
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+40, 0);
    ST32(s0+44, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST8(s0+72, 0);
    ST8(s0+74, 0);
    ST32(s0+76, 0);
    ST32(s0+92, 0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD140;
L_088DD140:;
    ST32(s0+88, v0);
    a0 = D_08B30A5C - (2652);
    a1 = s0 + 0;
    a0 = a0 + 2652;
    func_088DF51C(a0, a1, 0, 0, 0);
    goto L_088DD154;
L_088DD154:;
    sp = sp + 16;
    return;
}

/* 088DD164 */
rv_t func_088DD164(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD164:;
    sp = sp - 16;
    v0 = D_08AF7CF8 - (31992);
    v0 = v0 + 31992;
    s1 = a0 + 4;
    s0 = a0 + 0;
    ST32(a0, v0);
    a0 = LD32(a0+20);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD190;
L_088DD190:;
    a0 = LD32(s0+68);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD198;
L_088DD198:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DD1CC; }
    goto L_088DD1A4;
L_088DD1A4:;
    v0 = D_08AF7D18 - (32024);
    goto L_088DD1A8;
L_088DD1A8:;
    v0 = v0 + 32024;
    ST32(s1+4, 0);
    ST32(s0+4, 0);
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DD1CC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD1D4;
L_088DD1D4:;
    v0 = D_08AF7D18 - (32024);
    goto L_088DD1A8;
}

/* 088DD1DC */
rv_t func_088DD1DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD1DC:;
    sp = sp - 16;
    v0 = D_08AF7CF8 - (31992);
    v0 = v0 + 31992;
    s1 = a0 + 4;
    s0 = a0 + 0;
    ST32(a0, v0);
    a0 = LD32(a0+20);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD208;
L_088DD208:;
    a0 = LD32(s0+68);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD210;
L_088DD210:;
    v0 = LD32(s1+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DD24C; }
    goto L_088DD21C;
L_088DD21C:;
    v0 = D_08AF7D18 - (32024);
    goto L_088DD220;
L_088DD220:;
    v0 = v0 + 32024;
    ST32(s0, v0);
    a0 = s0 + 0;
    ST32(s1+4, 0);
    ST32(s0+4, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD238;
L_088DD238:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DD24C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD254;
L_088DD254:;
    v0 = D_08AF7D18 - (32024);
    goto L_088DD220;
}

/* 088DD25C */
rv_t func_088DD25C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int cnd_;
L_088DD25C:;
    a3 = D_08B25AC0 - (23232);
    v1 = LD32(a3+23232);
    t0 = a3 + 23232;
    a2 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a2;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AECC10 - (-13296);
    f2 = BITSF(LD32(a0+24));
    f1 = (float)(s32)FBITS(f0);
    f7 = BITSF(LD32(v0-13296));
    f0 = BITSF(LD32(a0+28));
    f3 = BITSF(LD32(a1));
    f1 = f1 * f7;
    f0 = f0 - f2;
    t1 = a0 + 0;
    v0 = v1 << 16;
    a0 = (u32)((s32)v1 >> 16);
    f1 = f1 * f0;
    a2 = a2 + v1;
    v0 = v0 + a0;
    v0 = v0 + a2;
    f2 = f2 + f1;
    v1 = v0 >> 1;
    f0 = BITSF(v1);
    f6 = BITSF(LD32(a1+4));
    f3 = f3 * f2;
    f4 = (float)(s32)FBITS(f0);
    a0 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    ST32(a1, FBITS(f3));
    f4 = f4 * f7;
    a2 = a2 + v0;
    f3 = BITSF(LD32(t1+32));
    f0 = BITSF(LD32(t1+36));
    v1 = v1 + a0;
    v1 = v1 + a2;
    f0 = f0 - f3;
    v0 = v1 >> 1;
    f1 = BITSF(v0);
    f5 = BITSF(LD32(a1+8));
    f4 = f4 * f0;
    f2 = (float)(s32)FBITS(f1);
    v0 = LD_U8(t1+74);
    a2 = a2 + v1;
    f3 = f3 + f4;
    f2 = f2 * f7;
    ST32(t0+4, a2);
    f6 = f6 * f3;
    ST32(a3+23232, v1);
    ST32(a1+4, FBITS(f6));
    f1 = BITSF(LD32(t1+40));
    f0 = BITSF(LD32(t1+44));
    f0 = f0 - f1;
    f2 = f2 * f0;
    f1 = f1 + f2;
    f5 = f5 + f1;
    cnd_ = v0 == 0;
    ST32(a1+8, FBITS(f5));
    if (cnd_) { goto L_088DD390; }
    goto L_088DD354;
L_088DD354:;
    v0 = LD_U8(a1+20);
    cnd_ = v0 == 0;
    v1 = a1 + 12;
    if (cnd_) { goto L_088DD3AC; }
    goto L_088DD360;
L_088DD360:;
    f2 = BITSF(LD32(t1+48));
    f1 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(t1+52));
    f1 = f1 + f2;
    v0 = D_08AECC14 - (-13292);
    f0 = f0 + f3;
    f2 = BITSF(LD32(v0-13292));
    f1 = f1 * f2;
    f0 = f0 * f2;
    ST32(a1+12, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    goto L_088DD390;
L_088DD390:;
    v0 = LD32(a1+24);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DD3A4; }
    goto L_088DD39C;
L_088DD39C:;
    v0 = LD32(t1+64);
    ST32(a1+24, v0);
    goto L_088DD3A4;
L_088DD3A4:;
    return (rv_t){ v0, v1, f0 };
L_088DD3AC:;
    v0 = LD32(t1+48);
    v1 = 1;
    ST8(a1+20, v1);
    ST32(a1+12, v0);
    v1 = LD32(t1+52);
    ST32(a1+16, v1);
    goto L_088DD390;
}

/* 088DD3C8 */
u32 func_088DD3C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD3C8:;
    sp = sp - 16;
    v0 = 0 + 0;
    a2 = LD32(a0+4);
    cnd_ = a2 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088DD428; }
    goto L_088DD3E4;
L_088DD3E4:;
    v1 = LD32(a0+60);
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_088DD4D8; }
    goto L_088DD3F4;
L_088DD3F4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+16, 0); goto L_088DD414; }
    goto L_088DD3FC;
L_088DD3FC:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_088DD498; }
    goto L_088DD408;
L_088DD408:;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_088DD438; }
    goto L_088DD410;
L_088DD410:;
    ST32(s0+16, 0);
    goto L_088DD414;
L_088DD414:;
    v0 = LD32(s0+16);
    v1 = LD32(s0+8);
    v0 = v0 << 2;
    v1 = v1 + v0;
    v0 = LD32(v1);
    goto L_088DD428;
L_088DD428:;
    sp = sp + 16;
    return v0;
L_088DD438:;
    cnd_ = a2 == v0;
    if (cnd_) { ST32(s0+16, 0); goto L_088DD414; }
    goto L_088DD440;
L_088DD440:;
    a1 = LD32(a0+20);
    v0 = LD32(a1+12);
    a0 = LD32(a1+16);
    v1 = LD32(v0);
    cnd_ = a0 == v1;
    if (cnd_) { goto L_088DD488; }
    goto L_088DD458;
L_088DD458:;
    a0 = LD32(s0+20);
    v0 = func_08836A20(a0);
    goto L_088DD460;
L_088DD460:;
    v1 = v0 + 0;
    v0 = LD32(s0+16);
    cnd_ = v0 == v1;
    if (cnd_) { goto L_088DD478; }
    goto L_088DD470;
L_088DD470:;
    ST32(s0+16, v1);
    goto L_088DD414;
L_088DD478:;
    a0 = LD32(s0+20);
    v0 = func_08836A20(a0);
    goto L_088DD480;
L_088DD480:;
    v1 = v0 + 0;
    goto L_088DD470;
L_088DD488:;
    a0 = a1 + 0;
    func_088368F4(a0);
    goto L_088DD490;
L_088DD490:;
    goto L_088DD458;
L_088DD498:;
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
    ST32(s0+16, a2);
    goto L_088DD414;
L_088DD4D8:;
    v0 = LD32(a0+16);
    v0 = v0 + 1;
    { u32 x_ = v0, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    ST32(s0+16, v1);
    goto L_088DD414;
}

/* 088DD4F0 */
u32 func_088DD4F0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088DD4F0:;
    v0 = LD32(a0+4);
    v1 = a1 << 2;
    a0 = a0 + 4;
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DD514; }
    goto L_088DD508;
L_088DD508:;
    v0 = LD32(a0+4);
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_088DD514;
L_088DD514:;
    return v0;
}

/* 088DD51C */
void func_088DD51C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD51C:;
    sp = sp - 16;
    s2 = a1 + 0;
    v1 = LD32(a0+60);
    cnd_ = v1 == a1;
    s1 = a0 + 0;
    if (cnd_) { goto L_088DD56C; }
    goto L_088DD540;
L_088DD540:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 5;
    if (cnd_) { goto L_088DD5F0; }
    goto L_088DD54C;
L_088DD54C:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088DD5E0; }
    goto L_088DD554;
L_088DD554:;
    v0 = 4;
    cnd_ = s2 == v0;
    v0 = 5;
    if (cnd_) { goto L_088DD5B4; }
    goto L_088DD560;
L_088DD560:;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_088DD584; }
    goto L_088DD568;
L_088DD568:;
    ST32(s1+60, s2);
    goto L_088DD56C;
L_088DD56C:;
    sp = sp + 16;
    return;
L_088DD584:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD58C;
L_088DD58C:;
    v1 = D_08AECC18 - (-13288);
    f0 = BITSF(LD32(v1-13288));
    ST32(s1+68, v0);
    ST32(v0+20, FBITS(f0));
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f0));
    ST32(v0+12, FBITS(f0));
    ST32(v0+16, FBITS(f0));
    goto L_088DD568;
L_088DD5B4:;
    v0 = LD32(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+60, s2); goto L_088DD56C; }
    goto L_088DD5C0;
L_088DD5C0:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD5C8;
L_088DD5C8:;
    a1 = LD32(s1+4);
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0883688C(a0, a1);
    goto L_088DD5D8;
L_088DD5D8:;
    ST32(s1+20, s0);
    goto L_088DD568;
L_088DD5E0:;
    a0 = LD32(a0+68);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD5E8;
L_088DD5E8:;
    ST32(s1+68, 0);
    goto L_088DD554;
L_088DD5F0:;
    a0 = LD32(a0+20);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD5F8;
L_088DD5F8:;
    ST32(s1+20, 0);
    goto L_088DD554;
}

/* 088DD600 */
u32 func_088DD600(u32 a0)
{
    u32 v0 = 0;
L_088DD600:;
    v0 = LD32(a0+68);
    return v0;
}

/* 088DD608 */
void func_088DD608(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD608:;
    sp = sp - 16;
    v0 = D_08AECC20 - (-13280);
    s0 = a0 + 0;
    f0 = BITSF(LD32(v0-13280));
    v0 = D_08AF7CD8 - (31960);
    v0 = v0 + 31960;
    ST32(s0+12, FBITS(f0));
    ST32(s0+8, FBITS(f0));
    ST32(a0, v0);
    a0 = a1 + 0;
    ST32(s0+4, 0);
    ST8(s0+16, 0);
    ST8(s0+24, 0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD648;
L_088DD648:;
    ST32(s0+20, v0);
    a0 = D_08B30A5C - (2652);
    a1 = s0 + 0;
    a0 = a0 + 2652;
    func_088DF6B4(a0, a1, 0, 0, 0);
    goto L_088DD65C;
L_088DD65C:;
    sp = sp + 16;
    return;
}

/* 088DD66C */
rv_t func_088DD66C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD66C:;
    v0 = D_08AF7CD8 - (31960);
    v0 = v0 + 31960;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B30A5C - (2652);
    a1 = s0 + 0;
    a0 = a0 + 2652;
    { rv_t r_ = func_088DF754(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD698;
L_088DD698:;
    v0 = D_08AF7D18 - (32024);
    v0 = v0 + 32024;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DD6B4 */
rv_t func_088DD6B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD6B4:;
    v0 = D_08AF7CD8 - (31960);
    v0 = v0 + 31960;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08B30A5C - (2652);
    a1 = s0 + 0;
    a0 = a0 + 2652;
    { rv_t r_ = func_088DF754(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD6E0;
L_088DD6E0:;
    v0 = D_08AF7D18 - (32024);
    v0 = v0 + 32024;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DD6F4;
L_088DD6F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DD704 */
rv_t func_088DD704(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD704:;
    sp = sp - 16;
    v0 = D_08B30A44 - (2628);
    a3 = v0 + 2628;
    a1 = LD32(a3+4);
    t0 = a0 + 0;
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088DD73C; }
    goto L_088DD724;
L_088DD724:;
    v0 = LD32(a3+16);
    v1 = LD32(a1);
    a2 = a1 + 0;
    v0 = v0 + 1;
    ST32(a3+4, v1);
    ST32(a3+16, v0);
    goto L_088DD73C;
L_088DD73C:;
    a0 = a2 + 0;
    ST32(t0, a2);
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DD758; }
    goto L_088DD74C;
L_088DD74C:;
    f0 = func_088DDD50(a0);
    goto L_088DD754;
L_088DD754:;
    v0 = 1;
    goto L_088DD758;
L_088DD758:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DD764 */
void func_088DD764(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD764:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DD790; }
    goto L_088DD780;
L_088DD780:;
    sp = sp + 16;
    return;
L_088DD790:;
    func_088DDDC4(a0);
    goto L_088DD798;
L_088DD798:;
    v1 = D_08B30A44 - (2628);
    v1 = v1 + 2628;
    v0 = LD32(v1+16);
    a1 = LD32(s0);
    a0 = LD32(v1+4);
    v0 = v0 - 1;
    ST32(v1+16, v0);
    ST32(a1, a0);
    ST32(s0, 0);
    ST32(v1+4, a1);
    goto L_088DD780;
}

/* 088DD7C4 */
void func_088DD7C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD7C4:;
    sp = sp - 16;
    a1 = 0 + 0;
    v1 = a0 + 0;
    ST32(a0+24, 0);
    goto L_088DD7D8;
L_088DD7D8:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(v1+28, 0);
    ST32(v1+44, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088DD7D8; }
    goto L_088DD7F0;
L_088DD7F0:;
    ST32(a0+60, 0);
    f0 = func_088DDCE0(a0);
    goto L_088DD7F8;
L_088DD7F8:;
    sp = sp + 16;
    return;
}

/* 088DD804 */
void func_088DD804(u32 a0)
{
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD804:;
    sp = sp - 16;
    f0 = func_088DDCE0(a0);
    goto L_088DD814;
L_088DD814:;
    sp = sp + 16;
    return;
}

/* 088DD820 */
rv_t func_088DD820(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DD820:;
    sp = sp - 32;
    ST8(a0+1, 0);
    s3 = a1 & 0xff;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a0 + 28;
    goto L_088DD84C;
L_088DD84C:;
    v0 = LD32(s0);
    a1 = s3 + 0;
    s2 = s2 + 1;
    s0 = s0 + 4;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DD894; }
    goto L_088DD864;
L_088DD864:;
    { rv_t r_ = func_088DE074(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD86C;
L_088DD86C:;
    a0 = v0 + 0;
    v0 = LD_U8(s1+1);
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    v1 = s2 < 0x4u;
    if (cnd_) { goto L_088DD888; }
    goto L_088DD880;
L_088DD880:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088DD88C; }
    goto L_088DD888;
L_088DD888:;
    a1 = 1;
    goto L_088DD88C;
L_088DD88C:;
    cnd_ = v1 != 0;
    ST8(s1+1, a1);
    if (cnd_) { goto L_088DD84C; }
    goto L_088DD894;
L_088DD894:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088DD8B0 */
float func_088DD8B0(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DD8B0:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088DD9E4; }
    goto L_088DD8D4;
L_088DD8D4:;
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    v1 = a0 + 4;
    v0 = 1;
    ST32(v1+8, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    ST8(a0+2, v0);
    goto L_088DD8F8;
L_088DD8F8:;
    v1 = LD32(s2+60);
    v0 = 1;
    ST32(s3+16, FBITS(f12));
    cnd_ = v1 == 0;
    ST8(s3+1, v0);
    if (cnd_) { goto L_088DD96C; }
    goto L_088DD90C;
L_088DD90C:;
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s2+4); goto L_088DD970; }
    goto L_088DD918;
L_088DD918:;
    a0 = s3 + 28;
    { rv_t r_ = func_088DD704(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD920;
L_088DD920:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DD944; }
    goto L_088DD928;
L_088DD928:;
    goto L_088DD92C;
L_088DD92C:;
    sp = sp + 32;
    return f0;
L_088DD944:;
    a0 = s2 + 0;
    v0 = func_088DD3C8(a0);
    goto L_088DD94C;
L_088DD94C:;
    a0 = LD32(s3+28);
    a1 = v0 + 0;
    a3 = s2 + 0;
    t0 = s3 + 0;
    a2 = 1;
    f0 = func_088DDDF4(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DD964;
L_088DD964:;
    goto L_088DD92C;
L_088DD96C:;
    v0 = LD32(s2+4);
    goto L_088DD970;
L_088DD970:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088DD928; }
    goto L_088DD978;
L_088DD978:;
    s0 = s3 + 0;
    goto L_088DD97C;
L_088DD97C:;
    v0 = s1 < 0x4u;
    cnd_ = v0 == 0;
    a0 = s0 + 28;
    if (cnd_) { goto L_088DD928; }
    goto L_088DD988;
L_088DD988:;
    { rv_t r_ = func_088DD704(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DD990;
L_088DD990:;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088DD9B8; }
    goto L_088DD99C;
L_088DD99C:;
    v0 = LD32(s2+4);
    goto L_088DD9A0;
L_088DD9A0:;
    s1 = s1 + 1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088DD97C; }
    goto L_088DD9B0;
L_088DD9B0:;
    goto L_088DD92C;
L_088DD9B8:;
    v0 = LD32(s0+28);
    ST32(v0+24, s1);
    v0 = func_088DD4F0(a0, a1);
    goto L_088DD9C4;
L_088DD9C4:;
    a0 = LD32(s0+28);
    a1 = v0 + 0;
    a2 = 1;
    a3 = s2 + 0;
    t0 = s3 + 0;
    f0 = func_088DDDF4(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DD9DC;
L_088DD9DC:;
    v0 = LD32(s2+4);
    goto L_088DD9A0;
L_088DD9E4:;
    ST8(a0+2, 0);
    goto L_088DD8F8;
}

/* 088DD9EC */
void func_088DD9EC(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DD9EC:;
    sp = sp - 16;
    a2 = a1 + 0;
    v0 = D_08AECC24 - (-13276);
    ST32(a0+24, a2);
    a2 = a2 + 8;
    a1 = LD32(a1+4);
    f12 = BITSF(LD32(v0-13276));
    f0 = func_088DD8B0(a0, a1, a2, f12);
    goto L_088DDA10;
L_088DDA10:;
    sp = sp + 16;
    return;
}

/* 088DDA1C */
float func_088DDA1C(u32 a0)
{
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DDA1C:;
    sp = sp - 16;
    f0 = func_088DDCE0(a0);
    goto L_088DDA2C;
L_088DDA2C:;
    sp = sp + 16;
    return f0;
}

/* 088DDA38 */
rv_t func_088DDA38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DDA38:;
    sp = sp - 32;
    v0 = a0 + 4;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    v1 = LD32(a0+60);
    ST32(a0+4, FBITS(f1));
    ST32(v0+8, FBITS(f0));
    cnd_ = v1 == 0;
    ST32(v0+4, FBITS(f2));
    if (cnd_) { goto L_088DDAA4; }
    goto L_088DDA80;
L_088DDA80:;
    s0 = a0 + 44;
    goto L_088DDA84;
L_088DDA84:;
    a0 = LD32(s0);
    a1 = s3 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_088DEBC0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DDA94;
L_088DDA94:;
    v0 = LD32(s2+60);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088DDA84; }
    goto L_088DDAA4;
L_088DDAA4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088DDAC0 */
rv_t func_088DDAC0(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DDAC0:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+60);
    cnd_ = v0 == 0;
    ST32(a0+16, FBITS(f12));
    if (cnd_) { goto L_088DDB10; }
    goto L_088DDAE8;
L_088DDAE8:;
    s0 = a0 + 44;
    a0 = LD32(s0);
    goto L_088DDAF0;
L_088DDAF0:;
    f12 = BITSF(LD32(s1+16));
    s2 = s2 + 1;
    s0 = s0 + 4;
    { rv_t r_ = func_088DEB5C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DDB00;
L_088DDB00:;
    v0 = LD32(s1+60);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_088DDAF0; }
    goto L_088DDB10;
L_088DDB10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DDB28 */
void func_088DDB28(u32 a0, float f12)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DDB28:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+60);
    cnd_ = v0 == 0;
    ST32(a0+20, FBITS(f12));
    if (cnd_) { goto L_088DDB78; }
    goto L_088DDB50;
L_088DDB50:;
    s0 = a0 + 44;
    a0 = LD32(s0);
    goto L_088DDB58;
L_088DDB58:;
    f12 = BITSF(LD32(s1+20));
    s2 = s2 + 1;
    s0 = s0 + 4;
    func_088DEB94(a0, f12);
    goto L_088DDB68;
L_088DDB68:;
    v0 = LD32(s1+60);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_088DDB58; }
    goto L_088DDB78;
L_088DDB78:;
    sp = sp + 16;
    return;
}

/* 088DDB90 */
u64 func_088DDB90(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DDB90:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = 0 + 0;
    s0 = a0 + 28;
    goto L_088DDBB0;
L_088DDBB0:;
    v0 = LD32(s0);
    s1 = s1 + 1;
    s0 = s0 + 4;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DDBDC; }
    goto L_088DDBC4;
L_088DDBC4:;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088DDBF8; }
    goto L_088DDBCC;
L_088DDBCC:;
    s2 = 1;
    v0 = s1 < 0x4u;
    goto L_088DDBD4;
L_088DDBD4:;
    cnd_ = v0 != 0;
    v1 = s2 + 0;
    if (cnd_) { goto L_088DDBB0; }
    goto L_088DDBDC;
L_088DDBDC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088DDBF8:;
    v0 = func_088DEB50(a0);
    goto L_088DDC00;
L_088DDC00:;
    cnd_ = v0 == 0;
    v0 = s1 < 0x4u;
    if (cnd_) { goto L_088DDBD4; }
    goto L_088DDC08;
L_088DDC08:;
    s2 = 1;
    goto L_088DDBD4;
}

/* 088DDC10 */
float func_088DDC10(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088DDC10:;
    f0 = BITSF(0);
    a0 = a0 + 28;
    v1 = 0 + 0;
    goto L_088DDC1C;
L_088DDC1C:;
    v0 = LD32(a0);
    v1 = v1 + 1;
    f1 = f0;
    a1 = v1 < 0x4u;
    cnd_ = v0 == 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088DDC54; }
    goto L_088DDC34;
L_088DDC34:;
    v0 = LD32(v0);
    f0 = BITSF(LD32(v0+84));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_088DDC4C; }
    goto L_088DDC4C;
L_088DDC4C:;
    cnd_ = a1 != 0;
    f0 = f1;
    if (cnd_) { goto L_088DDC1C; }
    goto L_088DDC54;
L_088DDC54:;
    return f0;
}

/* 088DDC5C */
void func_088DDC5C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_088DDC5C:;
    v0 = LD32(a0+60);
    v1 = v0 << 2;
    a2 = v0 + 1;
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    v1 = v1 + a0;
    if (cnd_) { goto L_088DDC7C; }
    goto L_088DDC74;
L_088DDC74:;
    ST32(v1+44, a1);
    ST32(a0+60, a2);
    goto L_088DDC7C;
L_088DDC7C:;
    return;
}

/* 088DDC84 */
u64 func_088DDC84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_088DDC84:;
    t0 = LD32(a0+60);
    t1 = 0 + 0;
    cnd_ = t0 == 0;
    a2 = t0 + 0;
    if (cnd_) { goto L_088DDCC0; }
    goto L_088DDC94;
L_088DDC94:;
    a3 = a0 + 0;
    goto L_088DDC98;
L_088DDC98:;
    v1 = LD32(a3+44);
    v0 = a2 << 2;
    t2 = v0 + a0;
    t1 = t1 + 1;
    cnd_ = v1 == a1;
    a2 = a2 - 1;
    if (cnd_) { goto L_088DDCC8; }
    goto L_088DDCB0;
L_088DDCB0:;
    v0 = t1 < t0;
    a3 = a3 + 4;
    cnd_ = v0 != 0;
    a2 = t0 + 0;
    if (cnd_) { goto L_088DDC98; }
    goto L_088DDCC0;
L_088DDCC0:;
    return (u64)v0 | ((u64)v1 << 32);
L_088DDCC8:;
    v0 = LD32(t2+40);
    ST32(a0+60, a2);
    t0 = a2 + 0;
    ST32(a3+44, v0);
    ST32(t2+40, 0);
    goto L_088DDCB0;
}

/* 088DDCE0 */
float func_088DDCE0(u32 a0)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DDCE0:;
    sp = sp - 16;
    v0 = D_08AECC28 - (-13272);
    s1 = 0 + 0;
    s0 = a0 + 0;
    f0 = BITSF(LD32(v0-13272));
    ST32(a0+24, 0);
    ST32(a0+20, FBITS(f0));
    ST8(a0+1, 0);
    ST8(a0+2, 0);
    ST32(a0+16, FBITS(f0));
    v0 = LD32(s0+28);
    goto L_088DDD18;
L_088DDD18:;
    a0 = s0 + 28;
    s1 = s1 + 1;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088DDD3C; }
    goto L_088DDD28;
L_088DDD28:;
    func_088DD764(a0);
    goto L_088DDD30;
L_088DDD30:;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+28); goto L_088DDD18; }
    goto L_088DDD3C;
L_088DDD3C:;
    sp = sp + 16;
    return f0;
}

/* 088DDD50 */
float func_088DDD50(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
L_088DDD50:;
    v0 = D_08AECC3C - (-13252);
    f0 = BITSF(LD32(v0-13252));
    v1 = a0 + 28;
    v0 = (u32)-1;
    ST32(a0+12, 0);
    a1 = a0 + 92;
    a2 = 0 + 0;
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST8(a0+8, 0);
    ST8(a0+9, 0);
    ST8(a0+10, 0);
    ST32(v1+24, 0);
    ST32(a0+88, v0);
    ST32(v1+4, FBITS(f0));
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+24, 0);
    ST32(a0+28, FBITS(f0));
    ST32(v1+8, 0);
    ST8(v1+20, 0);
    ST32(a0+84, 0);
    goto L_088DDDA8;
L_088DDDA8:;
    a2 = a2 + 1;
    v0 = a2 < 0x4u;
    ST32(a1, 0);
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_088DDDA8; }
    goto L_088DDDBC;
L_088DDDBC:;
    return f0;
}

/* 088DDDC4 */
void func_088DDDC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DDDC4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088DE30C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DDDD8;
L_088DDDD8:;
    a0 = LD32(s0+84);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DDDE0;
L_088DDDE0:;
    ST32(s0+84, 0);
    sp = sp + 16;
    return;
}

/* 088DDDF4 */
float func_088DDDF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088DDDF4:;
    sp = sp - 64;
    a2 = a2 & 0xff;
    s4 = t0 + 0;
    s3 = a1 + 0;
    s1 = a0 + 0;
    a0 = a3 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088DDE84; }
    goto L_088DDE28;
L_088DDE28:;
    ST32(s1, a3);
    cnd_ = a2 != 0;
    ST32(s1+4, t0);
    if (cnd_) { goto L_088DE024; }
    goto L_088DDE34;
L_088DDE34:;
    v1 = LD32(s3);
    goto L_088DDE38;
L_088DDE38:;
    v0 = LD32(v1+16);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DDE44;
L_088DDE44:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+28); goto L_088DDF78; }
    goto L_088DDE54;
L_088DDE54:;
    v1 = LD32(s3+60);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_088DDF04; }
    goto L_088DDE60;
L_088DDE60:;
    v0 = 5;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s3+4); goto L_088DDF04; }
    goto L_088DDE6C;
L_088DDE6C:;
    a0 = s1 + 92;
    { rv_t r_ = func_088DD704(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DDE74;
L_088DDE74:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+92); goto L_088DDEA4; }
    goto L_088DDE7C;
L_088DDE7C:;
    v0 = 1;
    goto L_088DDE80;
L_088DDE80:;
    ST8(s1+10, v0);
    goto L_088DDE84;
L_088DDE84:;
    goto L_088DDE88;
L_088DDE88:;
    sp = sp + 64;
    return f0;
L_088DDEA4:;
    v1 = LD32(s1+28);
    a0 = s3 + 0;
    ST32(a1+28, v1);
    v0 = LD32(s1+32);
    ST32(a1+32, v0);
    v1 = LD32(s1+36);
    ST32(a1+36, v1);
    v0 = LD32(s1+40);
    ST32(a1+40, v0);
    v1 = LD32(s1+44);
    ST32(a1+44, v1);
    v0 = LD32(s1+48);
    ST32(a1+48, v0);
    v1 = LD32(s1+52);
    ST32(a1+52, v1);
    v0 = func_088DD3C8(a0);
    goto L_088DDEE4;
L_088DDEE4:;
    a0 = LD32(s1+92);
    a1 = v0 + 0;
    a3 = s3 + 0;
    t0 = s4 + 0;
    a2 = 1;
    f0 = func_088DDDF4(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DDEFC;
L_088DDEFC:;
    v0 = 1;
    goto L_088DDE80;
L_088DDF04:;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088DDE7C; }
    goto L_088DDF0C;
L_088DDF0C:;
    s0 = s1 + 0;
    goto L_088DDF10;
L_088DDF10:;
    v0 = s2 < 0x4u;
    cnd_ = v0 == 0;
    a0 = s0 + 92;
    if (cnd_) { goto L_088DDE7C; }
    goto L_088DDF1C;
L_088DDF1C:;
    { rv_t r_ = func_088DD704(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DDF24;
L_088DDF24:;
    a1 = s2 + 0;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_088DDF4C; }
    goto L_088DDF30;
L_088DDF30:;
    v0 = LD32(s3+4);
    goto L_088DDF34;
L_088DDF34:;
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088DDF10; }
    goto L_088DDF44;
L_088DDF44:;
    v0 = 1;
    goto L_088DDE80;
L_088DDF4C:;
    v0 = LD32(s0+92);
    ST32(v0+24, s2);
    v0 = func_088DD4F0(a0, a1);
    goto L_088DDF58;
L_088DDF58:;
    a0 = LD32(s0+92);
    a1 = v0 + 0;
    a2 = 1;
    a3 = s3 + 0;
    t0 = s4 + 0;
    f0 = func_088DDDF4(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DDF70;
L_088DDF70:;
    v0 = LD32(s3+4);
    goto L_088DDF34;
L_088DDF78:;
    v1 = LD32(s1+32);
    a2 = LD32(s1+36);
    a3 = LD32(s1+40);
    t0 = LD32(s1+44);
    t1 = LD32(s1+48);
    t2 = LD32(s1+52);
    t3 = LD32(s3);
    ST32(sp, v0);
    a0 = s3 + 0;
    a1 = sp + 0;
    ST32(sp+4, v1);
    v0 = LD32(t3+8);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    t_ = v0;
    ST32(sp+24, t2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DDFC0;
L_088DDFC0:;
    v1 = LD32(s1);
    v0 = 5;
    a0 = LD32(v1+60);
    cnd_ = a0 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088DE010; }
    goto L_088DDFD4;
L_088DDFD4:;
    a2 = LD_U8(s3+16);
    goto L_088DDFD8;
L_088DDFD8:;
    a1 = s3 + 0;
    a0 = s1 + 0;
    a3 = sp + 0;
    f0 = func_088DE834(a0, a1, a2, a3);
    goto L_088DDFE8;
L_088DDFE8:;
    v0 = LD32(s1+88);
    v0 = ~(0 | v0);
    v0 = 0 < v0;
    cnd_ = v0 == 0;
    ST8(s1+10, v0);
    if (cnd_) { goto L_088DDE84; }
    goto L_088DDFFC;
L_088DDFFC:;
    a0 = s4 + 0;
    a1 = s1 + 0;
    func_088DDC5C(a0, a1);
    goto L_088DE008;
L_088DE008:;
    goto L_088DDE88;
L_088DE010:;
    a1 = sp + 0;
    a2 = s3 + 0;
    func_088DEC00(a0, a1, a2, 0, 0, 0);
    goto L_088DE01C;
L_088DE01C:;
    a2 = LD_U8(s3+16);
    goto L_088DDFD8;
L_088DE024:;
    v0 = LD32(s1+28);
    v1 = LD32(s1+32);
    a2 = LD32(s1+36);
    a3 = LD32(s1+40);
    t0 = LD32(s1+44);
    t1 = LD32(s1+48);
    t2 = LD32(s1+52);
    t3 = LD32(a0);
    ST32(s1+56, v0);
    ST32(s1+60, v1);
    ST32(s1+64, a2);
    ST32(s1+68, a3);
    ST32(s1+72, t0);
    ST32(s1+76, t1);
    ST32(s1+80, t2);
    v0 = LD32(t3+8);
    t_ = v0;
    a1 = s1 + 28;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE06C;
L_088DE06C:;
    v1 = LD32(s3);
    goto L_088DDE38;
}

/* 088DE074 */
rv_t func_088DE074(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DE074:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a1 & 0xff;
    s1 = 0 + 0;
    s0 = a0 + 92;
    v0 = LD32(s0);
    goto L_088DE0A0;
L_088DE0A0:;
    a1 = s2 + 0;
    s1 = s1 + 1;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088DE0C8; }
    goto L_088DE0B4;
L_088DE0B4:;
    { rv_t r_ = func_088DE074(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE0BC;
L_088DE0BC:;
    v1 = s1 < 0x4u;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_088DE0A0; }
    goto L_088DE0C8;
L_088DE0C8:;
    v0 = LD_U8(s3+10);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DE0F4; }
    goto L_088DE0D4;
L_088DE0D4:;
    v0 = v0 & 0xff;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DE0F4:;
    a0 = s3 + 0;
    v0 = func_088DE254(a0);
    goto L_088DE0FC;
L_088DE0FC:;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088DE244; }
    goto L_088DE104;
L_088DE104:;
    f1 = BITSF(LD32(s3+12));
    f2 = BITSF(0);
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_088DE150; }
    goto L_088DE11C;
L_088DE11C:;
    f0 = BITSF(LD32(v0-31332));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(s3+12, FBITS(f0));
    if (cnd_) { goto L_088DE13C; }
    goto L_088DE134;
L_088DE134:;
    v0 = LD_U8(s3+10);
    goto L_088DE0D4;
L_088DE13C:;
    ST32(s3+12, FBITS(f2));
    a0 = s3 + 0;
    f0 = func_088DE2DC(a0, 0.0f);
    goto L_088DE148;
L_088DE148:;
    v0 = LD_U8(s3+10);
    goto L_088DE0D4;
L_088DE150:;
    a0 = s3 + 0;
    { u64 r_ = func_088DE30C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DE158;
L_088DE158:;
    t1 = LD32(s3);
    v0 = 1;
    t2 = LD32(t1+60);
    cnd_ = t2 == v0;
    if (cnd_) { v1 = LD32(s3+24); goto L_088DE20C; }
    goto L_088DE16C;
L_088DE16C:;
    v0 = LD_U8(t1+72);
    goto L_088DE170;
L_088DE170:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DE204; }
    goto L_088DE178;
L_088DE178:;
    v0 = LD32(s3+56);
    v1 = LD32(s3+60);
    a0 = LD32(s3+64);
    a1 = LD32(s3+68);
    a2 = LD32(s3+72);
    a3 = LD32(s3+76);
    t0 = LD32(s3+80);
    ST32(s3+28, v0);
    ST32(s3+32, v1);
    ST32(s3+36, a0);
    ST32(s3+40, a1);
    ST32(s3+44, a2);
    ST32(s3+48, a3);
    cnd_ = t2 == 0;
    ST32(s3+52, t0);
    if (cnd_) { goto L_088DE1F0; }
    goto L_088DE1B4;
L_088DE1B4:;
    v0 = 5;
    cnd_ = t2 == v0;
    if (cnd_) { a0 = LD32(s3); goto L_088DE1F4; }
    goto L_088DE1C0;
L_088DE1C0:;
    ST32(s3+24, 0);
    a0 = t1 + 0;
    v0 = func_088DD3C8(a0);
    goto L_088DE1CC;
L_088DE1CC:;
    a3 = LD32(s3);
    goto L_088DE1D0;
L_088DE1D0:;
    t0 = LD32(s3+4);
    a0 = s3 + 0;
    a1 = v0 + 0;
    a2 = 1;
    goto L_088DE1E0;
L_088DE1E0:;
    f0 = func_088DDDF4(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DE1E8;
L_088DE1E8:;
    v0 = LD_U8(s3+10);
    goto L_088DE0D4;
L_088DE1F0:;
    a0 = LD32(s3);
    goto L_088DE1F4;
L_088DE1F4:;
    a1 = LD32(s3+24);
    v0 = func_088DD4F0(a0, a1);
    goto L_088DE1FC;
L_088DE1FC:;
    a3 = LD32(s3);
    goto L_088DE1D0;
L_088DE204:;
    ST8(s3+10, 0);
    goto L_088DE0D4;
L_088DE20C:;
    v0 = LD32(t1+4);
    a1 = v1 + 1;
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(t1+72); goto L_088DE170; }
    goto L_088DE220;
L_088DE220:;
    ST32(s3+24, a1);
    a0 = t1 + 0;
    v0 = func_088DD4F0(a0, a1);
    goto L_088DE22C;
L_088DE22C:;
    a3 = LD32(s3);
    t0 = LD32(s3+4);
    a0 = s3 + 0;
    a1 = v0 + 0;
    a2 = 0 + 0;
    goto L_088DE1E0;
L_088DE244:;
    a0 = s3 + 0;
    f0 = func_088DE394(a0, a1);
    goto L_088DE24C;
L_088DE24C:;
    v0 = LD_U8(s3+10);
    goto L_088DE0D4;
}

/* 088DE254 */
u32 func_088DE254(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DE254:;
    sp = sp - 16;
    v0 = LD32(a0+92);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0+88); goto L_088DE2AC; }
    goto L_088DE268;
L_088DE268:;
    a0 = a0 + 92;
    v1 = 0 + 0;
    v0 = LD32(a0);
    goto L_088DE274;
L_088DE274:;
    v1 = v1 + 1;
    a1 = v1 < 0x4u;
    cnd_ = v0 == 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088DE298; }
    goto L_088DE284;
L_088DE284:;
    v0 = LD_U8(v0+10);
    cnd_ = v0 != 0;
    a2 = 1;
    if (cnd_) { goto L_088DE29C; }
    goto L_088DE290;
L_088DE290:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088DE274; }
    goto L_088DE298;
L_088DE298:;
    a2 = 0 + 0;
    goto L_088DE29C;
L_088DE29C:;
    v0 = a2 + 0;
    sp = sp + 16;
    return v0;
L_088DE2AC:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088DE29C; }
    goto L_088DE2B8;
L_088DE2B8:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_088DE2CC; }
    goto L_088DE2C4;
L_088DE2C4:;
    a2 = a0 + 0;
    goto L_088DE29C;
L_088DE2CC:;
    a0 = v1 + 0;
    { u64 r_ = func_088DBD14(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DE2D4;
L_088DE2D4:;
    a0 = v0 + 0;
    goto L_088DE2C4;
}

/* 088DE2DC */
float func_088DE2DC(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DE2DC:;
    sp = sp - 16;
    v0 = (u32)-1;
    a1 = a0 + 0;
    v1 = LD32(a0+88);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088DE300; }
    goto L_088DE2F8;
L_088DE2F8:;
    a1 = LD_U8(a1+8);
    { rv_t r_ = func_088DB45C(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE300;
L_088DE300:;
    sp = sp + 16;
    return f0;
}

/* 088DE30C */
u64 func_088DE30C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DE30C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(s0+92);
    goto L_088DE330;
L_088DE330:;
    a0 = s0 + 92;
    s1 = s1 + 1;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088DE354; }
    goto L_088DE340;
L_088DE340:;
    func_088DD764(a0);
    goto L_088DE348;
L_088DE348:;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+92); goto L_088DE330; }
    goto L_088DE354;
L_088DE354:;
    v1 = LD32(s2+88);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { ST8(s2+10, 0); goto L_088DE37C; }
    goto L_088DE364;
L_088DE364:;
    a0 = s2 + 88;
    { rv_t r_ = func_088DB294(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE36C;
L_088DE36C:;
    a0 = LD32(s2+4);
    a1 = s2 + 0;
    { u64 r_ = func_088DDC84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DE378;
L_088DE378:;
    ST8(s2+10, 0);
    goto L_088DE37C;
L_088DE37C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088DE394 */
float func_088DE394(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DE394:;
    sp = sp - 32;
    v1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+88);
    cnd_ = v0 == v1;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_088DE3DC; }
    goto L_088DE3C0;
L_088DE3C0:;
    v0 = LD32(a0);
    v1 = 5;
    a0 = LD32(v0+60);
    cnd_ = a0 == v1;
    if (cnd_) { v0 = D_08B2859C - (-31332); goto L_088DE424; }
    goto L_088DE3D4;
L_088DE3D4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DE3F8; }
    goto L_088DE3DC;
L_088DE3DC:;
    goto L_088DE3E0;
L_088DE3E0:;
    sp = sp + 32;
    return f0;
L_088DE3F8:;
    a0 = LD32(s0+52);
    f0 = func_088E0858(a0);
    goto L_088DE400;
L_088DE400:;
    v0 = LD32(s0+4);
    f12 = BITSF(LD32(s0+16));
    a0 = LD32(s0+88);
    f1 = BITSF(LD32(v0+16));
    f12 = f12 * f1;
    f12 = f12 * f0;
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE41C;
L_088DE41C:;
    goto L_088DE3E0;
L_088DE424:;
    f20 = BITSF(LD32(v0-31332));
    cnd_ = a1 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088DE82C; }
    goto L_088DE430;
L_088DE430:;
    v0 = LD32(s0+84);
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(v0+4)); goto L_088DE454; }
    goto L_088DE44C;
L_088DE44C:;
    s1 = 1;
    f1 = BITSF(LD32(v0+4));
    goto L_088DE454;
L_088DE454:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    s2 = 1;
    if (cnd_) { goto L_088DE46C; }
    goto L_088DE468;
L_088DE468:;
    s2 = 0 + 0;
    goto L_088DE46C;
L_088DE46C:;
    a0 = LD32(s0);
    v0 = func_088DD600(a0);
    goto L_088DE474;
L_088DE474:;
    t0 = LD32(s0+84);
    f7 = BITSF(0);
    t1 = v0 + 0;
    f0 = BITSF(LD32(t0+16));
    f0 = f0 - f20;
    fcc = FCMP(f0, f7, 12);
    cnd_ = !fcc;
    ST32(t0+16, FBITS(f0));
    if (cnd_) { goto L_088DE7BC; }
    goto L_088DE498;
L_088DE498:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    a3 = a2 + 23232;
    a0 = LD32(a3+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    f8 = BITSF(LD32(t0+8));
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    ST32(t0, FBITS(f8));
    v0 = D_08AECC40 - (-13248);
    f1 = (float)(s32)FBITS(f0);
    a1 = LD32(s0);
    f5 = BITSF(LD32(v0-13248));
    f4 = BITSF(LD32(s0+56));
    f3 = BITSF(LD32(a1+24));
    f2 = BITSF(LD32(a1+28));
    f1 = f1 * f5;
    a1 = (u32)((s32)v1 >> 16);
    f2 = f2 - f3;
    v0 = v1 << 16;
    a0 = a0 + v1;
    v0 = v0 + a1;
    f1 = f1 * f2;
    f6 = BITSF(LD32(t0+32));
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f3 = f3 + f1;
    f0 = BITSF(v1);
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    f4 = f4 * f3;
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 + a0;
    f4 = f4 * f6;
    v0 = v1 >> 1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    ST32(t0+8, FBITS(f4));
    a0 = a0 + v1;
    f3 = (float)(s32)FBITS(f0);
    f2 = BITSF(LD32(t1));
    f0 = BITSF(LD32(t1+4));
    f1 = f1 * f5;
    f3 = f3 * f5;
    f0 = f0 - f2;
    ST32(a3+4, a0);
    f1 = f1 * f0;
    ST32(a2+23232, v1);
    f2 = f2 + f1;
    ST32(t0+16, FBITS(f2));
    f1 = BITSF(LD32(t1+8));
    f0 = BITSF(LD32(t1+12));
    f0 = f0 - f1;
    f3 = f3 * f0;
    f1 = f1 + f3;
    f2 = f2 * f1;
    fcc = FCMP(f7, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { s1 = 1; goto L_088DE7B4; }
    goto L_088DE598;
L_088DE598:;
    f0 = f4 - f8;
    f0 = f0 / f2;
    ST32(t0+24, FBITS(f0));
    goto L_088DE5A4;
L_088DE5A4:;
    f1 = BITSF(LD32(t0));
    goto L_088DE5A8;
L_088DE5A8:;
    f7 = BITSF(0);
    ST32(s0+16, FBITS(f1));
    f0 = BITSF(LD32(t0+20));
    f0 = f0 - f20;
    fcc = FCMP(f0, f7, 12);
    cnd_ = !fcc;
    ST32(t0+20, FBITS(f0));
    if (cnd_) { goto L_088DE744; }
    goto L_088DE5C8;
L_088DE5C8:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    a3 = a2 + 23232;
    a0 = LD32(a3+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    f8 = BITSF(LD32(t0+12));
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    ST32(t0+4, FBITS(f8));
    v0 = D_08AECC40 - (-13248);
    f1 = (float)(s32)FBITS(f0);
    a1 = LD32(s0);
    f5 = BITSF(LD32(v0-13248));
    f4 = BITSF(LD32(s0+60));
    f3 = BITSF(LD32(a1+32));
    f2 = BITSF(LD32(a1+36));
    f1 = f1 * f5;
    a1 = (u32)((s32)v1 >> 16);
    f2 = f2 - f3;
    v0 = v1 << 16;
    a0 = a0 + v1;
    v0 = v0 + a1;
    f1 = f1 * f2;
    f6 = BITSF(LD32(t0+36));
    v0 = v0 + a0;
    v1 = v0 >> 1;
    f3 = f3 + f1;
    f0 = BITSF(v1);
    a1 = (u32)((s32)v0 >> 16);
    v1 = v0 << 16;
    f4 = f4 * f3;
    a0 = a0 + v0;
    v1 = v1 + a1;
    v1 = v1 + a0;
    f4 = f4 * f6;
    v0 = v1 >> 1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    ST32(t0+12, FBITS(f4));
    a0 = a0 + v1;
    f3 = (float)(s32)FBITS(f0);
    f2 = BITSF(LD32(t1));
    f0 = BITSF(LD32(t1+4));
    f1 = f1 * f5;
    f3 = f3 * f5;
    f0 = f0 - f2;
    ST32(a3+4, a0);
    f1 = f1 * f0;
    ST32(a2+23232, v1);
    f2 = f2 + f1;
    ST32(t0+20, FBITS(f2));
    f1 = BITSF(LD32(t1+16));
    f0 = BITSF(LD32(t1+20));
    f0 = f0 - f1;
    f3 = f3 * f0;
    f1 = f1 + f3;
    f2 = f2 * f1;
    fcc = FCMP(f7, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { s2 = 1; goto L_088DE73C; }
    goto L_088DE6C8;
L_088DE6C8:;
    f0 = f4 - f8;
    f0 = f0 / f2;
    ST32(t0+28, FBITS(f0));
    goto L_088DE6D4;
L_088DE6D4:;
    f0 = BITSF(LD32(t0+4));
    goto L_088DE6D8;
L_088DE6D8:;
    cnd_ = s1 != 0;
    ST32(s0+20, FBITS(f0));
    if (cnd_) { goto L_088DE70C; }
    goto L_088DE6E0;
L_088DE6E0:;
    cnd_ = s2 == 0;
    if (cnd_) {  goto L_088DE3E0; }
    goto L_088DE6E8;
L_088DE6E8:;
    v0 = LD32(s0+84);
    v1 = LD32(s0+4);
    a0 = LD32(s0+88);
    f12 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1+20));
    f12 = f12 * f0;
    f0 = func_088DB940(a0, f12);
    goto L_088DE704;
L_088DE704:;
    goto L_088DE3E0;
L_088DE70C:;
    a0 = LD32(s0+52);
    f0 = func_088E0858(a0);
    goto L_088DE714;
L_088DE714:;
    v0 = LD32(s0+84);
    v1 = LD32(s0+4);
    a0 = LD32(s0+88);
    f12 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v1+16));
    f12 = f12 * f1;
    f12 = f12 * f0;
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE734;
L_088DE734:;
    goto L_088DE6E0;
L_088DE73C:;
    ST32(t0+4, FBITS(f4));
    goto L_088DE6D4;
L_088DE744:;
    f1 = BITSF(LD32(t0+12));
    f2 = BITSF(LD32(t0+4));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+4)); goto L_088DE6D8; }
    goto L_088DE75C;
L_088DE75C:;
    f3 = BITSF(LD32(t0+28));
    f0 = f3 * f20;
    f0 = f2 + f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(t0+4, FBITS(f0));
    if (cnd_) { goto L_088DE788; }
    goto L_088DE778;
L_088DE778:;
    fcc = FCMP(f7, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+12)); goto L_088DE7AC; }
    goto L_088DE788;
L_088DE788:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+4)); goto L_088DE6D8; }
    goto L_088DE798;
L_088DE798:;
    fcc = FCMP(f3, f7, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+4)); goto L_088DE6D8; }
    goto L_088DE7A8;
L_088DE7A8:;
    f0 = BITSF(LD32(t0+12));
    goto L_088DE7AC;
L_088DE7AC:;
    ST32(t0+4, FBITS(f0));
    goto L_088DE6D4;
L_088DE7B4:;
    ST32(t0, FBITS(f4));
    goto L_088DE5A4;
L_088DE7BC:;
    f1 = BITSF(LD32(t0+8));
    f2 = BITSF(LD32(t0));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    if (cnd_) { f1 = BITSF(LD32(t0)); goto L_088DE5A8; }
    goto L_088DE7D4;
L_088DE7D4:;
    f3 = BITSF(LD32(t0+24));
    f0 = f3 * f20;
    f0 = f2 + f0;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(t0, FBITS(f0));
    if (cnd_) { goto L_088DE800; }
    goto L_088DE7F0;
L_088DE7F0:;
    fcc = FCMP(f7, f3, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(t0+8)); goto L_088DE824; }
    goto L_088DE800;
L_088DE800:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(t0)); goto L_088DE5A8; }
    goto L_088DE810;
L_088DE810:;
    fcc = FCMP(f3, f7, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(t0)); goto L_088DE5A8; }
    goto L_088DE820;
L_088DE820:;
    f0 = BITSF(LD32(t0+8));
    goto L_088DE824;
L_088DE824:;
    ST32(t0, FBITS(f0));
    goto L_088DE5A4;
L_088DE82C:;
    v0 = LD32(s0+84);
    goto L_088DE44C;
}

/* 088DE834 */
float func_088DE834(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0, f13 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088DE834:;
    sp = sp - 64;
    s2 = a2 & 0xff;
    s1 = a0 + 0;
    s0 = a3 + 0;
    v0 = LD32(a1+4);
    a0 = v0 + 0;
    { rv_t r_ = func_088DAF08(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE868;
L_088DE868:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    ST32(s1+88, v0);
    if (cnd_) { goto L_088DE9C0; }
    goto L_088DE874;
L_088DE874:;
    f0 = BITSF(LD32(s0+8));
    a0 = LD32(s0+24);
    ST8(s1+8, s2);
    ST32(s1+12, FBITS(f0));
    f1 = BITSF(LD32(s0));
    ST32(s1+16, FBITS(f1));
    f0 = func_088E0858(a0);
    goto L_088DE890;
L_088DE890:;
    v0 = LD32(s1+4);
    f12 = BITSF(LD32(s0));
    a0 = LD32(s1+88);
    f1 = BITSF(LD32(v0+16));
    f12 = f12 * f1;
    f12 = f12 * f0;
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE8AC;
L_088DE8AC:;
    f1 = BITSF(LD32(s0+4));
    v0 = LD32(s1+4);
    a0 = LD32(s1+88);
    ST32(s1+20, FBITS(f1));
    f0 = BITSF(LD32(v0+20));
    f12 = BITSF(LD32(s0+4));
    f12 = f12 * f0;
    f0 = func_088DB940(a0, f12);
    goto L_088DE8CC;
L_088DE8CC:;
    v0 = LD_U8(s0+20);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+88); goto L_088DEB3C; }
    goto L_088DE8D8;
L_088DE8D8:;
    a0 = LD32(s1+52);
    goto L_088DE8DC;
L_088DE8DC:;
    s4 = 1;
    v0 = func_088E0834(a0);
    goto L_088DE8E4;
L_088DE8E4:;
    cnd_ = v0 == s4;
    v0 = D_08AECC44 - (-13244);
    if (cnd_) { goto L_088DEB24; }
    goto L_088DE8EC;
L_088DE8EC:;
    v1 = LD32(s1);
    goto L_088DE8F0;
L_088DE8F0:;
    v0 = 4;
    s3 = LD32(v1+76);
    cnd_ = s3 == v0;
    v0 = 3;
    if (cnd_) { goto L_088DEA6C; }
    goto L_088DE900;
L_088DE900:;
    cnd_ = s3 == v0;
    if (cnd_) { f1 = BITSF(LD32(s1+12)); goto L_088DE9AC; }
    goto L_088DE908;
L_088DE908:;
    a1 = LD32(s1+4);
    s2 = LD32(a1+24);
    cnd_ = s2 == 0;
    v0 = D_08B16141 - (24897);
    if (cnd_) { goto L_088DEA30; }
    goto L_088DE918;
L_088DE918:;
    v1 = s2 + 8;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(v1+4));
    a2 = LD_U8(v0+24897);
    a0 = LD32(s1+88);
    a1 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE944;
L_088DE944:;
    s0 = LD_U8(s2+96);
    cnd_ = s0 == 0;
    if (cnd_) { f12 = BITSF(LD32(s2+20)); goto L_088DEA1C; }
    goto L_088DE950;
L_088DE950:;
    a0 = LD32(s1+88);
    a1 = s2 + 28;
    a2 = s2 + 40;
    func_088DBBA8(a0, a1, a2);
    goto L_088DE960;
L_088DE960:;
    a0 = LD32(s1+88);
    goto L_088DE964;
L_088DE964:;
    a1 = s0 + 0;
    func_088DBC08(a0, a1);
    goto L_088DE96C;
L_088DE96C:;
    s0 = LD_U8(s2+98);
    a0 = LD32(s1+88);
    a1 = s0 + 0;
    func_088DBDC8(a0, a1);
    goto L_088DE97C;
L_088DE97C:;
    cnd_ = s0 != 0;
    if (cnd_) { a1 = LD_U8(s2+99); goto L_088DEA00; }
    goto L_088DE984;
L_088DE984:;
    s0 = LD_U8(s2+100);
    goto L_088DE988;
L_088DE988:;
    a0 = LD32(s1+88);
    a1 = s0 + 0;
    func_088DBE94(a0, a1);
    goto L_088DE994;
L_088DE994:;
    cnd_ = s0 != 0;
    a0 = LD32(s1+88);
    if (cnd_) { goto L_088DE9F0; }
    goto L_088DE99C;
L_088DE99C:;
    a1 = s3 ^ 0x2;
    a1 = 0 < a1;
    func_088DBC40(a0, a1);
    goto L_088DE9A8;
L_088DE9A8:;
    f1 = BITSF(LD32(s1+12));
    goto L_088DE9AC;
L_088DE9AC:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    if (cnd_) { a1 = LD_U8(s1+8); goto L_088DE9E0; }
    goto L_088DE9C0;
L_088DE9C0:;
    goto L_088DE9C4;
L_088DE9C4:;
    sp = sp + 64;
    return f0;
L_088DE9E0:;
    a0 = LD32(s1+88);
    { rv_t r_ = func_088DB45C(a0, a1, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DE9E8;
L_088DE9E8:;
    goto L_088DE9C4;
L_088DE9F0:;
    a1 = s2 + 80;
    func_088DBE38(a0, a1);
    goto L_088DE9F8;
L_088DE9F8:;
    a0 = LD32(s1+88);
    goto L_088DE99C;
L_088DEA00:;
    a0 = LD32(s1+88);
    func_088DBE00(a0, a1);
    goto L_088DEA08;
L_088DEA08:;
    a0 = LD32(s1+88);
    a1 = s2 + 56;
    func_088DBD68(a0, a1);
    goto L_088DEA14;
L_088DEA14:;
    s0 = LD_U8(s2+100);
    goto L_088DE988;
L_088DEA1C:;
    f13 = BITSF(LD32(s2+24));
    a0 = LD32(s1+88);
    { rv_t r_ = func_088DBAA8(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEA28;
L_088DEA28:;
    a0 = LD32(s1+88);
    goto L_088DE964;
L_088DEA30:;
    v0 = LD_U8(a1+2);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+88); goto L_088DE99C; }
    goto L_088DEA3C;
L_088DEA3C:;
    ST8(s1+9, s4);
    a1 = a1 + 4;
    a0 = LD32(s1+88);
    a2 = LD_U8(v1+73);
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEA50;
L_088DEA50:;
    v0 = LD32(s1);
    a0 = LD32(s1+88);
    f13 = BITSF(LD32(v0+84));
    f12 = BITSF(LD32(v0+80));
    { rv_t r_ = func_088DBAA8(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEA64;
L_088DEA64:;
    a0 = LD32(s1+88);
    goto L_088DE99C;
L_088DEA6C:;
    v0 = LD_U8(s0+20);
    cnd_ = v0 != 0;
    if (cnd_) { f1 = BITSF(LD32(s1+12)); goto L_088DE9AC; }
    goto L_088DEA78;
L_088DEA78:;
    a2 = D_08B25AC0 - (23232);
    a0 = LD32(a2+23232);
    a3 = a2 + 23232;
    a1 = LD32(a3+4);
    v0 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v0;
    a0 = a0 + a1;
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AECC4C - (-13236);
    v1 = D_08AECC48 - (-13240);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-13236));
    {v[4]=0.63661977236f;}
    v0 = D_08AECC44 - (-13244);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v1-13240));
    f2 = BITSF(LD32(v0-13244));
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f1 * f0;
    a1 = a1 + a0;
    ST32(a3+4, a1);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    v0 = D_08AECC50 - (-13232);
    f1 = BITSF(LD32(v0-13232));
    ST32(a2+23232, a0);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v0=FBITS(v[0]);}
    f13 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    f13 = f13 + f2;
    a0 = LD32(s1+88);
    f12 = f0 + f2;
    f13 = f13 * f1;
    f12 = f12 * f1;
    func_088DBCA8(a0, f12, f13);
    goto L_088DEB1C;
L_088DEB1C:;
    f1 = BITSF(LD32(s1+12));
    goto L_088DE9AC;
L_088DEB24:;
    a0 = LD32(s1+88);
    f12 = BITSF(LD32(v0-13244));
    a1 = 0 + 0;
    func_088DBECC(a0, a1, f12);
    goto L_088DEB34;
L_088DEB34:;
    v1 = LD32(s1);
    goto L_088DE8F0;
L_088DEB3C:;
    f12 = BITSF(LD32(s0+12));
    f13 = BITSF(LD32(s0+16));
    func_088DBCA8(a0, f12, f13);
    goto L_088DEB48;
L_088DEB48:;
    a0 = LD32(s1+52);
    goto L_088DE8DC;
}

/* 088DEB50 */
u32 func_088DEB50(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088DEB50:;
    v1 = LD32(a0);
    v0 = LD_U8(v1+13);
    return v0;
}

/* 088DEB5C */
rv_t func_088DEB5C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DEB5C:;
    sp = sp - 16;
    v0 = (u32)-1;
    a1 = a0 + 0;
    v1 = LD32(a0+88);
    f0 = f12;
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088DEB88; }
    goto L_088DEB7C;
L_088DEB7C:;
    f12 = BITSF(LD32(a1+16));
    f12 = f12 * f0;
    { rv_t r_ = func_088DB84C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEB88;
L_088DEB88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DEB94 */
void func_088DEB94(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DEB94:;
    sp = sp - 16;
    v0 = (u32)-1;
    v1 = LD32(a0+88);
    cnd_ = v1 == v0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088DEBB4; }
    goto L_088DEBAC;
L_088DEBAC:;
    f0 = func_088DB940(a0, f12);
    goto L_088DEBB4;
L_088DEBB4:;
    sp = sp + 16;
    return;
}

/* 088DEBC0 */
rv_t func_088DEBC0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DEBC0:;
    sp = sp - 16;
    v1 = a0 + 0;
    v0 = (u32)-1;
    a0 = LD32(a0+88);
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088DEBE8; }
    goto L_088DEBDC;
L_088DEBDC:;
    v0 = LD_U8(v1+9);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088DEBF0; }
    goto L_088DEBE8;
L_088DEBE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DEBF0:;
    a2 = LD_U8(v0+73);
    { rv_t r_ = func_088DBA08(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEBF8;
L_088DEBF8:;
    goto L_088DEBE8;
}

/* 088DEC00 */
void func_088DEC00(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DEC00:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    a0 = 40;
    v0 = LD32(s1+84);
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088DEC84; }
    goto L_088DEC2C;
L_088DEC2C:;
    f0 = BITSF(LD32(s0+4));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(s0));
    ST32(v0, FBITS(f1));
    f0 = BITSF(LD32(s0+4));
    ST32(v0+12, FBITS(f0));
    f1 = BITSF(LD32(s0));
    ST32(v0+8, FBITS(f1));
    f0 = BITSF(LD32(s2+8));
    ST32(v0+32, FBITS(f0));
    f1 = BITSF(LD32(s2+12));
    ST32(v0+28, 0);
    ST32(v0+36, FBITS(f1));
    ST32(v0+16, 0);
    ST32(v0+20, 0);
    ST32(v0+24, 0);
    sp = sp + 16;
    return;
L_088DEC84:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEC8C;
L_088DEC8C:;
    ST32(s1+84, v0);
    goto L_088DEC2C;
}

/* 088DEC94 */
rv_t func_088DEC94(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DEC94:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s2 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = v0 & v1;
    s3 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DED14; }
    goto L_088DECC8;
L_088DECC8:;
    v0 = s2 < 0x1u;
    v1 = s3 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DECEC; }
    goto L_088DECDC;
L_088DECDC:;
    v0 = D_08B30A44 - (2628);
    a0 = LD32(v0+2628);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DED04; }
    goto L_088DECEC;
L_088DECEC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088DED04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DED0C;
L_088DED0C:;
    goto L_088DECEC;
L_088DED14:;
    s1 = D_08B30A44 - (2628);
    a0 = 13824;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DED20;
L_088DED20:;
    s0 = s1 + 2628;
    v1 = 108;
    a0 = 128;
    t1 = s0 + 0;
    ST32(s1+2628, v0);
    ST32(s0+8, v1);
    ST32(s0+12, a0);
    cnd_ = v0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_088DECC8; }
    goto L_088DED44;
L_088DED44:;
    a3 = 0 + 0;
    t0 = 108;
    t2 = 127;
    a2 = 108;
    a1 = 0 + 0;
    goto L_088DED58;
L_088DED58:;
    v1 = LD32(t1);
    v0 = a3 + 1;
    a3 = v0 + 0;
    a0 = v1 + a2;
    v0 = (s32)v0 < (s32)t2;
    v1 = v1 + a1;
    ST32(v1, a0);
    a1 = a1 + t0;
    cnd_ = v0 != 0;
    a2 = a2 + t0;
    if (cnd_) { goto L_088DED58; }
    goto L_088DED80;
L_088DED80:;
    { s64 p_ = (s64)(s32)t2 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(t1);
    ST32(t1+16, 0);
    v1 = lo;
    v0 = v0 + v1;
    ST32(v0, 0);
    goto L_088DECC8;
}

/* 088DED9C */
rv_t func_088DED9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DED9C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088DEC94(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEDB0;
L_088DEDB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DEDBC */
rv_t func_088DEDBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DEDBC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088DEC94(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEDD0;
L_088DEDD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DEDDC */
void func_088DEDDC(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DEDDC:;
    a0 = D_08B30A5C - (2652);
    sp = sp - 16;
    a0 = a0 + 2652;
    func_088DEE1C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DEDF0;
L_088DEDF0:;
    sp = sp + 16;
    return;
}

/* 088DEDFC */
void func_088DEDFC(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DEDFC:;
    a0 = D_08B30A5C - (2652);
    sp = sp - 16;
    a0 = a0 + 2652;
    func_088DF0F4(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DEE10;
L_088DEE10:;
    sp = sp + 16;
    return;
}

/* 088DEE1C */
void func_088DEE1C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DEE1C:;
    sp = sp - 32;
    v1 = 1;
    s4 = D_08B30A58 - (2648);
    v0 = ((u32)(uintptr_t)func_088DF310) - (-3312);
    s2 = v0 - 3312;
    s1 = a0 + 0;
    s0 = LD32(a0);
    ST8(s4+2648, v1);
    cnd_ = s0 == 0;
    ST8(a0+8, v1);
    if (cnd_) { goto L_088DEE80; }
    goto L_088DEE5C;
L_088DEE5C:;
    a1 = LD32(s0+12);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF0E4; }
    goto L_088DEE68;
L_088DEE68:;
    a1 = LD32(s0+16);
    goto L_088DEE6C;
L_088DEE6C:;
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088DF0D4; }
    goto L_088DEE74;
L_088DEE74:;
    a0 = LD32(s0);
    goto L_088DEE78;
L_088DEE78:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEE80;
L_088DEE80:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = LD32(s1); goto L_088DEEE4; }
    goto L_088DEE8C;
L_088DEE8C:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088DEED0; }
    goto L_088DEE98;
L_088DEE98:;
    v0 = s0 << 2;
    goto L_088DEE9C;
L_088DEE9C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08AB7B60(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DEEB0;
L_088DEEB0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DEEB8;
L_088DEEB8:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_088DEED0; }
    goto L_088DEEC8;
L_088DEEC8:;
    v0 = s0 << 2;
    goto L_088DEE9C;
L_088DEED0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DF0C4; }
    goto L_088DEED8;
L_088DEED8:;
    ST32(s1+12, 0);
    goto L_088DEEDC;
L_088DEEDC:;
    ST32(s1+16, 0);
    s0 = LD32(s1);
    goto L_088DEEE4;
L_088DEEE4:;
    cnd_ = s0 == 0;
    ST8(s1+8, 0);
    if (cnd_) { goto L_088DEF0C; }
    goto L_088DEEEC;
L_088DEEEC:;
    a1 = LD32(s0+12);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF0B4; }
    goto L_088DEEF8;
L_088DEEF8:;
    a1 = LD32(s0+16);
    goto L_088DEEFC;
L_088DEEFC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF0A4; }
    goto L_088DEF04;
L_088DEF04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DEF0C;
L_088DEF0C:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DF094; }
    goto L_088DEF18;
L_088DEF18:;
    s2 = LD32(s1+24);
    goto L_088DEF1C;
L_088DEF1C:;
    s0 = s1 + 24;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088DF350) - (-3248);
    ST8(s0+8, v0);
    s3 = v1 - 3248;
    ST32(s1+12, 0);
    ST32(s1+16, 0);
    ST32(s1+4, 0);
    cnd_ = s2 == 0;
    ST32(s1, 0);
    if (cnd_) { goto L_088DEF68; }
    goto L_088DEF44;
L_088DEF44:;
    a1 = LD32(s2+8);
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DF084; }
    goto L_088DEF50;
L_088DEF50:;
    a1 = LD32(s2+12);
    goto L_088DEF54;
L_088DEF54:;
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DF074; }
    goto L_088DEF5C;
L_088DEF5C:;
    a0 = LD32(s2);
    goto L_088DEF60;
L_088DEF60:;
    t_ = s3;
    a1 = s2 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DEF68;
L_088DEF68:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { s1 = LD32(s1+24); goto L_088DEFCC; }
    goto L_088DEF74;
L_088DEF74:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088DEFB8; }
    goto L_088DEF80;
L_088DEF80:;
    v0 = s2 << 2;
    goto L_088DEF84;
L_088DEF84:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s2 = s2 + 1;
    { u64 r_ = func_08AB7C48(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DEF98;
L_088DEF98:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DEFA0;
L_088DEFA0:;
    v0 = LD32(s0+16);
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_088DEFB8; }
    goto L_088DEFB0;
L_088DEFB0:;
    v0 = s2 << 2;
    goto L_088DEF84;
L_088DEFB8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DF064; }
    goto L_088DEFC0;
L_088DEFC0:;
    ST32(s0+12, 0);
    goto L_088DEFC4;
L_088DEFC4:;
    ST32(s0+16, 0);
    s1 = LD32(s1+24);
    goto L_088DEFCC;
L_088DEFCC:;
    cnd_ = s1 == 0;
    ST8(s0+8, 0);
    if (cnd_) { goto L_088DEFF4; }
    goto L_088DEFD4;
L_088DEFD4:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF054; }
    goto L_088DEFE0;
L_088DEFE0:;
    a1 = LD32(s1+12);
    goto L_088DEFE4;
L_088DEFE4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF044; }
    goto L_088DEFEC;
L_088DEFEC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DEFF4;
L_088DEFF4:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DF034; }
    goto L_088DF000;
L_088DF000:;
    ST32(s0, 0);
    goto L_088DF004;
L_088DF004:;
    ST8(s4+2648, 0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+4, 0);
    sp = sp + 32;
    return;
L_088DF034:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF03C;
L_088DF03C:;
    ST32(s0, 0);
    goto L_088DF004;
L_088DF044:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB8010(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF04C;
L_088DF04C:;
    goto L_088DEFEC;
L_088DF054:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB8010(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF05C;
L_088DF05C:;
    a1 = LD32(s1+12);
    goto L_088DEFE4;
L_088DF064:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF06C;
L_088DF06C:;
    ST32(s0+12, 0);
    goto L_088DEFC4;
L_088DF074:;
    a2 = s3 + 0;
    func_08AB7EF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF07C;
L_088DF07C:;
    a0 = LD32(s2);
    goto L_088DEF60;
L_088DF084:;
    a2 = s3 + 0;
    func_08AB7EF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF08C;
L_088DF08C:;
    a1 = LD32(s2+12);
    goto L_088DEF54;
L_088DF094:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF09C;
L_088DF09C:;
    s2 = LD32(s1+24);
    goto L_088DEF1C;
L_088DF0A4:;
    a0 = s1 + 0;
    func_08AB7E84(a0, a1, t1, t2, t3);
    goto L_088DF0AC;
L_088DF0AC:;
    goto L_088DEF04;
L_088DF0B4:;
    a0 = s1 + 0;
    func_08AB7E84(a0, a1, t1, t2, t3);
    goto L_088DF0BC;
L_088DF0BC:;
    a1 = LD32(s0+16);
    goto L_088DEEFC;
L_088DF0C4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF0CC;
L_088DF0CC:;
    ST32(s1+12, 0);
    goto L_088DEEDC;
L_088DF0D4:;
    a2 = s2 + 0;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF0DC;
L_088DF0DC:;
    a0 = LD32(s0);
    goto L_088DEE78;
L_088DF0E4:;
    a2 = s2 + 0;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF0EC;
L_088DF0EC:;
    a1 = LD32(s0+16);
    goto L_088DEE6C;
}

/* 088DF0F4 */
void func_088DF0F4(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DF0F4:;
    sp = sp - 32;
    v0 = 1;
    s3 = D_08B30A8C - (2700);
    v1 = ((u32)(uintptr_t)func_088DF388) - (-3192);
    s2 = v1 - 3192;
    s0 = a0 + 0;
    s1 = LD32(a0);
    ST8(a0+8, v0);
    cnd_ = s1 == 0;
    ST32(s3+2700, a0);
    if (cnd_) { goto L_088DF154; }
    goto L_088DF130;
L_088DF130:;
    a1 = LD32(s1+12);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF1FC; }
    goto L_088DF13C;
L_088DF13C:;
    a1 = LD32(s1+16);
    goto L_088DF140;
L_088DF140:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088DF1EC; }
    goto L_088DF148;
L_088DF148:;
    a0 = LD32(s1);
    goto L_088DF14C;
L_088DF14C:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF154;
L_088DF154:;
    a0 = s0 + 0;
    func_08AB7DEC(a0, t1, t2, t3);
    goto L_088DF15C;
L_088DF15C:;
    s1 = LD32(s0+24);
    s2 = s0 + 24;
    v0 = ((u32)(uintptr_t)func_088DF450) - (-2992);
    v1 = 1;
    ST8(s0+8, 0);
    s0 = v0 - 2992;
    cnd_ = s1 == 0;
    ST8(s2+8, v1);
    if (cnd_) { goto L_088DF1A0; }
    goto L_088DF17C;
L_088DF17C:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088DF1DC; }
    goto L_088DF188;
L_088DF188:;
    a1 = LD32(s1+12);
    goto L_088DF18C;
L_088DF18C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088DF1CC; }
    goto L_088DF194;
L_088DF194:;
    a0 = LD32(s1);
    goto L_088DF198;
L_088DF198:;
    t_ = s0;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF1A0;
L_088DF1A0:;
    a0 = s2 + 0;
    func_08AB7F78(a0, 0, 0, 0);
    goto L_088DF1A8;
L_088DF1A8:;
    ST8(s2+8, 0);
    ST32(s3+2700, 0);
    sp = sp + 32;
    return;
L_088DF1CC:;
    a2 = s0 + 0;
    func_08AB7EF4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DF1D4;
L_088DF1D4:;
    a0 = LD32(s1);
    goto L_088DF198;
L_088DF1DC:;
    a2 = s0 + 0;
    func_08AB7EF4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DF1E4;
L_088DF1E4:;
    a1 = LD32(s1+12);
    goto L_088DF18C;
L_088DF1EC:;
    a2 = s2 + 0;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF1F4;
L_088DF1F4:;
    a0 = LD32(s1);
    goto L_088DF14C;
L_088DF1FC:;
    a2 = s2 + 0;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF204;
L_088DF204:;
    a1 = LD32(s1+16);
    goto L_088DF140;
}

/* 088DF20C */
void func_088DF20C(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF20C:;
    sp = sp - 16;
    v0 = 1;
    v1 = ((u32)(uintptr_t)func_088DF48C) - (-2932);
    s2 = v1 - 2932;
    s0 = a0 + 0;
    s1 = LD32(a0);
    cnd_ = s1 == 0;
    ST8(a0+8, v0);
    if (cnd_) { goto L_088DF260; }
    goto L_088DF23C;
L_088DF23C:;
    a1 = LD32(s1+12);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF300; }
    goto L_088DF248;
L_088DF248:;
    a1 = LD32(s1+16);
    goto L_088DF24C;
L_088DF24C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_088DF2F0; }
    goto L_088DF254;
L_088DF254:;
    a0 = LD32(s1);
    goto L_088DF258;
L_088DF258:;
    t_ = s2;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF260;
L_088DF260:;
    a0 = s0 + 0;
    func_08AB7DEC(a0, t1, t2, t3);
    goto L_088DF268;
L_088DF268:;
    s1 = LD32(s0+24);
    s2 = s0 + 24;
    v0 = ((u32)(uintptr_t)func_088DF498) - (-2920);
    v1 = 1;
    ST8(s0+8, 0);
    s0 = v0 - 2920;
    cnd_ = s1 == 0;
    ST8(s2+8, v1);
    if (cnd_) { goto L_088DF2AC; }
    goto L_088DF288;
L_088DF288:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088DF2E0; }
    goto L_088DF294;
L_088DF294:;
    a1 = LD32(s1+12);
    goto L_088DF298;
L_088DF298:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_088DF2D0; }
    goto L_088DF2A0;
L_088DF2A0:;
    a0 = LD32(s1);
    goto L_088DF2A4;
L_088DF2A4:;
    t_ = s0;
    a1 = s1 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF2AC;
L_088DF2AC:;
    a0 = s2 + 0;
    func_08AB7F78(a0, 0, 0, 0);
    goto L_088DF2B4;
L_088DF2B4:;
    ST8(s2+8, 0);
    sp = sp + 16;
    return;
L_088DF2D0:;
    a2 = s0 + 0;
    func_08AB7EF4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DF2D8;
L_088DF2D8:;
    a0 = LD32(s1);
    goto L_088DF2A4;
L_088DF2E0:;
    a2 = s0 + 0;
    func_08AB7EF4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DF2E8;
L_088DF2E8:;
    a1 = LD32(s1+12);
    goto L_088DF298;
L_088DF2F0:;
    a2 = s2 + 0;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF2F8;
L_088DF2F8:;
    a0 = LD32(s1);
    goto L_088DF258;
L_088DF300:;
    a2 = s2 + 0;
    func_08AB7D68(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DF308;
L_088DF308:;
    a1 = LD32(s1+16);
    goto L_088DF24C;
}

/* 088DF310 */
rv_t func_088DF310(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF310:;
    sp = sp - 16;
    a1 = LD32(a1);
    v0 = LD32(a1+92);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a1+92, v0);
    if (cnd_) { goto L_088DF344; }
    goto L_088DF32C;
L_088DF32C:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088DF344; }
    goto L_088DF334;
L_088DF334:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF344;
L_088DF344:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DF350 */
rv_t func_088DF350(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF350:;
    v0 = LD32(a1);
    sp = sp - 16;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DF370; }
    goto L_088DF364;
L_088DF364:;
    goto L_088DF368;
L_088DF368:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DF370:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF380;
L_088DF380:;
    goto L_088DF368;
}

/* 088DF388 */
rv_t func_088DF388(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF388:;
    sp = sp - 16;
    v0 = LD_U8(a1+4);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088DF408; }
    goto L_088DF3A4;
L_088DF3A4:;
    a0 = LD32(a1);
    v0 = LD32(a0+92);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+92, v0);
    if (cnd_) { goto L_088DF3D0; }
    goto L_088DF3B8;
L_088DF3B8:;
    cnd_ = a0 == 0;
    v0 = D_08B30A8C - (2700);
    if (cnd_) { goto L_088DF3D4; }
    goto L_088DF3C0;
L_088DF3C0:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF3D0;
L_088DF3D0:;
    v0 = D_08B30A8C - (2700);
    goto L_088DF3D4;
L_088DF3D4:;
    s0 = LD32(v0+2700);
    v1 = LD_U8(s0+8);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088DF430; }
    goto L_088DF3E4;
L_088DF3E4:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088DF41C; }
    goto L_088DF3F0;
L_088DF3F0:;
    v1 = LD32(s0+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_088DF408;
L_088DF408:;
    goto L_088DF40C;
L_088DF40C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DF41C:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF424;
L_088DF424:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_088DF3F0;
L_088DF430:;
    a1 = s1 + 0;
    { u64 r_ = func_08AB7B60(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF438;
L_088DF438:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088DF40C; }
    goto L_088DF440;
L_088DF440:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF448;
L_088DF448:;
    goto L_088DF40C;
}

/* 088DF450 */
rv_t func_088DF450(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF450:;
    sp = sp - 16;
    a1 = LD32(a1);
    v0 = LD_U8(a1+24);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DF484; }
    goto L_088DF468;
L_088DF468:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088DF484; }
    goto L_088DF470;
L_088DF470:;
    v0 = LD32(a1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF480;
L_088DF480:;
    goto L_088DF484;
L_088DF484:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DF48C */
rv_t func_088DF48C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088DF48C:;
    v0 = 1;
    ST8(a1+4, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088DF498 */
rv_t func_088DF498(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088DF498:;
    v1 = LD32(a1);
    v0 = 1;
    ST8(v1+24, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088DF4A8 */
u64 func_088DF4A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF4A8:;
    sp = sp - 16;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_088DF4E8; }
    goto L_088DF4BC;
L_088DF4BC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088DF4C4;
L_088DF4C4:;
    a0 = v0 + 16;
    a2 = v0 + 12;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088DF4F4; }
    goto L_088DF4DC;
L_088DF4DC:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088DF4C4; }
    goto L_088DF4E8;
L_088DF4E8:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088DF50C; }
    goto L_088DF4F4;
L_088DF4F4:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DF500; }
    goto L_088DF4FC;
L_088DF4FC:;
    v0 = LD32(a3);
    goto L_088DF500;
L_088DF500:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088DF50C:;
    a2 = 1;
    { u64 r_ = func_08AB8080(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF514;
L_088DF514:;
    a3 = v0 + 0;
    goto L_088DF4F4;
}

/* 088DF51C */
void func_088DF51C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DF51C:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    s1 = LD32(a1+88);
    if (cnd_) { goto L_088DF5C0; }
    goto L_088DF548;
L_088DF548:;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088DF57C; }
    goto L_088DF554;
L_088DF554:;
    v1 = v0 + 0;
    goto L_088DF558;
L_088DF558:;
    a0 = v1 + 16;
    s0 = v1 + 12;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088DF5C0; }
    goto L_088DF570;
L_088DF570:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088DF558; }
    goto L_088DF57C;
L_088DF57C:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF584;
L_088DF584:;
    ST32(v0, s1);
    a0 = v0 + 0;
    v1 = v0 + 4;
    v0 = LD32(s2+4);
    ST32(a0+12, 0);
    v0 = v0 + 1;
    ST32(a0+16, 0);
    ST32(s2+4, v0);
    ST32(s0, a0);
    cnd_ = v1 == 0;
    ST8(v1+4, 0);
    if (cnd_) { goto L_088DF5C0; }
    goto L_088DF5B0;
L_088DF5B0:;
    v0 = LD32(s3+92);
    ST32(a0+4, s3);
    v0 = v0 + 1;
    ST32(s3+92, v0);
    goto L_088DF5C0;
L_088DF5C0:;
    sp = sp + 32;
    return;
}

/* 088DF5DC */
void func_088DF5DC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF5DC:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a2 + 0;
    a2 = 1;
    s0 = a0 + 0;
    { u64 r_ = func_08AB8080(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF600;
L_088DF600:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088DF62C; }
    goto L_088DF60C;
L_088DF60C:;
    s0 = LD32(v0);
    v0 = func_08AB80F8(a0, a1, 0, 0, 0);
    goto L_088DF614;
L_088DF614:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088DF62C; }
    goto L_088DF61C;
L_088DF61C:;
    v0 = LD32(s0+92);
    ST32(v1, s0);
    v0 = v0 + 1;
    ST32(s0+92, v0);
    goto L_088DF62C;
L_088DF62C:;
    sp = sp + 16;
    return;
}

/* 088DF640 */
u32 func_088DF640(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF640:;
    sp = sp - 16;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    t0 = a0 + 24;
    if (cnd_) { goto L_088DF680; }
    goto L_088DF654;
L_088DF654:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088DF65C;
L_088DF65C:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088DF68C; }
    goto L_088DF674;
L_088DF674:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088DF65C; }
    goto L_088DF680;
L_088DF680:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088DF6A4; }
    goto L_088DF68C;
L_088DF68C:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DF698; }
    goto L_088DF694;
L_088DF694:;
    v0 = LD32(a3);
    goto L_088DF698;
L_088DF698:;
    sp = sp + 16;
    return v0;
L_088DF6A4:;
    a2 = 1;
    v0 = func_08AB81A4(a0, a1, a2);
    goto L_088DF6AC;
L_088DF6AC:;
    a3 = v0 + 0;
    goto L_088DF68C;
}

/* 088DF6B4 */
void func_088DF6B4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DF6B4:;
    sp = sp - 32;
    s2 = a0 + 24;
    v0 = LD_U8(s2+8);
    ST32(sp, a1);
    cnd_ = v0 != 0;
    s1 = LD32(a1+20);
    if (cnd_) { goto L_088DF73C; }
    goto L_088DF6DC;
L_088DF6DC:;
    v0 = LD32(a0+24);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_088DF710; }
    goto L_088DF6E8;
L_088DF6E8:;
    v1 = v0 + 0;
    goto L_088DF6EC;
L_088DF6EC:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088DF73C; }
    goto L_088DF704;
L_088DF704:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088DF6EC; }
    goto L_088DF710;
L_088DF710:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF718;
L_088DF718:;
    ST32(v0, s1);
    v1 = LD32(s2+4);
    a0 = LD32(sp);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(s2+4, v1);
    ST32(v0+4, a0);
    ST32(s0, v0);
    goto L_088DF73C;
L_088DF73C:;
    sp = sp + 32;
    return;
}

/* 088DF754 */
rv_t func_088DF754(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF754:;
    sp = sp - 16;
    v0 = D_08B30A58 - (2648);
    s1 = a0 + 0;
    v1 = LD_U8(v0+2648);
    cnd_ = v1 != 0;
    s0 = a0 + 24;
    if (cnd_) { goto L_088DF7B4; }
    goto L_088DF77C;
L_088DF77C:;
    s2 = LD32(a1+20);
    v0 = LD_U8(s0+8);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_088DF7E0; }
    goto L_088DF790;
L_088DF790:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088DF7CC; }
    goto L_088DF79C;
L_088DF79C:;
    v1 = LD32(s1+40);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s2);
    ST32(s1+40, v1);
    goto L_088DF7B4;
L_088DF7B4:;
    goto L_088DF7B8;
L_088DF7B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DF7CC:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF7D4;
L_088DF7D4:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_088DF79C;
L_088DF7E0:;
    { u64 r_ = func_08AB7C48(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF7E8;
L_088DF7E8:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088DF7B4; }
    goto L_088DF7F0;
L_088DF7F0:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF7F8;
L_088DF7F8:;
    goto L_088DF7B8;
}

/* 088DF800 */
u64 func_088DF800(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF800:;
    sp = sp - 16;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088DF90C; }
    goto L_088DF830;
L_088DF830:;
    v0 = s1 < 0x1u;
    goto L_088DF834;
L_088DF834:;
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DF8A8; }
    goto L_088DF840;
L_088DF840:;
    s0 = D_08B30A5C - (2652);
    s2 = s0 + 2652;
    a1 = LD32(s2+24);
    cnd_ = a1 != 0;
    s1 = s2 + 24;
    if (cnd_) { goto L_088DF8FC; }
    goto L_088DF854;
L_088DF854:;
    a0 = LD32(s1+12);
    goto L_088DF858;
L_088DF858:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DF8EC; }
    goto L_088DF860;
L_088DF860:;
    s0 = LD32(s0+2652);
    goto L_088DF864;
L_088DF864:;
    ST32(s1+16, 0);
    cnd_ = s0 == 0;
    ST32(s1+12, 0);
    if (cnd_) { goto L_088DF890; }
    goto L_088DF870;
L_088DF870:;
    a1 = LD32(s0+12);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF8DC; }
    goto L_088DF87C;
L_088DF87C:;
    a1 = LD32(s0+16);
    goto L_088DF880;
L_088DF880:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088DF8CC; }
    goto L_088DF888;
L_088DF888:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF890;
L_088DF890:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088DF8BC; }
    goto L_088DF89C;
L_088DF89C:;
    ST32(s2+16, 0);
    goto L_088DF8A0;
L_088DF8A0:;
    ST32(s2+12, 0);
    goto L_088DF8A8;
L_088DF8A8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088DF8BC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF8C4;
L_088DF8C4:;
    ST32(s2+16, 0);
    goto L_088DF8A0;
L_088DF8CC:;
    a0 = s2 + 0;
    func_08AB7E84(a0, a1, t1, t2, t3);
    goto L_088DF8D4;
L_088DF8D4:;
    goto L_088DF888;
L_088DF8DC:;
    a0 = s2 + 0;
    func_08AB7E84(a0, a1, t1, t2, t3);
    goto L_088DF8E4;
L_088DF8E4:;
    a1 = LD32(s0+16);
    goto L_088DF880;
L_088DF8EC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF8F4;
L_088DF8F4:;
    s0 = LD32(s0+2652);
    goto L_088DF864;
L_088DF8FC:;
    a0 = s1 + 0;
    { u64 r_ = func_08AB8010(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF904;
L_088DF904:;
    a0 = LD32(s1+12);
    goto L_088DF858;
L_088DF90C:;
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    func_08AB7D30(a0);
    goto L_088DF918;
L_088DF918:;
    v0 = s1 < 0x1u;
    goto L_088DF834;
}

/* 088DF920 */
rv_t func_088DF920(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF920:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088DF800(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF934;
L_088DF934:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DF940 */
rv_t func_088DF940(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF940:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088DF800(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF954;
L_088DF954:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088DF960 */
u64 func_088DF960(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DF960:;
    a1 = a0 + 0;
    a0 = D_08B30A5C - (2652);
    sp = sp - 16;
    a0 = a0 + 2652;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DF978;
L_088DF978:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088DF984 */
void func_088DF984(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DF984:;
    sp = sp - 32;
    s2 = (u32)-1;
    s1 = 127;
    func_088E0250(t1, t2, t3);
    goto L_088DF9A8;
L_088DF9A8:;
    a0 = 8196;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF9B0;
L_088DF9B0:;
    s3 = v0 + 4;
    v0 = 128;
    ST32(s3-4, v0);
    s0 = s3 + 0;
    goto L_088DF9C0;
L_088DF9C0:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_088DD7C4(a0);
    goto L_088DF9CC;
L_088DF9CC:;
    cnd_ = s1 != s2;
    s0 = s0 + 64;
    if (cnd_) { goto L_088DF9C0; }
    goto L_088DF9D4;
L_088DF9D4:;
    a0 = 16;
    v0 = D_08B30A94 - (2708);
    ST32(v0+2708, s3);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF9E4;
L_088DF9E4:;
    s0 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s0, v0);
    a0 = 512;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DF9FC;
L_088DF9FC:;
    ST32(s0+4, v0);
    v1 = 128;
    a0 = 0 + 0;
    ST32(s0+12, 0);
    ST32(s0+8, v1);
    v1 = v0 + 0;
    goto L_088DFA14;
L_088DFA14:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 128;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088DFA14; }
    goto L_088DFA28;
L_088DFA28:;
    v0 = D_08AF1BD0 - (7120);
    v1 = D_08B30A98 - (2712);
    v0 = v0 + 7120;
    ST32(v1+2712, s0);
    ST32(s0, v0);
    sp = sp + 32;
    return;
}

/* 088DFA58 */
void func_088DFA58(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DFA58:;
    sp = sp - 32;
    func_088E02A8();
    goto L_088DFA68;
L_088DFA68:;
    v0 = D_08B30A98 - (2712);
    a0 = LD32(v0+2712);
    cnd_ = a0 == 0;
    v1 = ((u32)(uintptr_t)func_088E01FC) - (508);
    if (cnd_) { goto L_088DFA94; }
    goto L_088DFA78;
L_088DFA78:;
    ST32(sp+4, 0);
    s0 = v1 + 508;
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DFAAC; }
    goto L_088DFA94;
L_088DFA94:;
    func_088DEDFC(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DFA9C;
L_088DFA9C:;
    sp = sp + 32;
    return;
L_088DFAAC:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DFAC8;
L_088DFAC8:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DFAAC; }
    goto L_088DFAD8;
L_088DFAD8:;
    goto L_088DFA94;
}

/* 088DFAE0 */
void func_088DFAE0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DFAE0:;
    sp = sp - 32;
    s2 = D_08B30A98 - (2712);
    a0 = LD32(s2+2712);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088DFB20; }
    goto L_088DFB00;
L_088DFB00:;
    ST32(sp+4, 0);
    v1 = ((u32)(uintptr_t)func_088E01FC) - (508);
    s0 = v1 + 508;
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DFBB0; }
    goto L_088DFB20;
L_088DFB20:;
    s1 = D_08B30A94 - (2708);
    goto L_088DFB24;
L_088DFB24:;
    a0 = LD32(s1+2708);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+2712); goto L_088DFB64; }
    goto L_088DFB30;
L_088DFB30:;
    v0 = LD32(a0-4);
    v0 = v0 << 6;
    s0 = a0 + v0;
    a0 = LD32(s1+2708);
    goto L_088DFB40;
L_088DFB40:;
    cnd_ = a0 == s0;
    s0 = s0 - 64;
    if (cnd_) { goto L_088DFB58; }
    goto L_088DFB48;
L_088DFB48:;
    a0 = s0 + 0;
    func_088DD804(a0);
    goto L_088DFB50;
L_088DFB50:;
    a0 = LD32(s1+2708);
    goto L_088DFB40;
L_088DFB58:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DFB60;
L_088DFB60:;
    a0 = LD32(s2+2712);
    goto L_088DFB64;
L_088DFB64:;
    cnd_ = a0 != 0;
    ST32(s1+2708, 0);
    if (cnd_) { goto L_088DFB98; }
    goto L_088DFB6C;
L_088DFB6C:;
    v0 = D_08B30A98 - (2712);
    goto L_088DFB70;
L_088DFB70:;
    ST32(v0+2712, 0);
    func_088E02CC(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088DFB78;
L_088DFB78:;
    func_088DEDDC(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088DFB80;
L_088DFB80:;
    sp = sp + 32;
    return;
L_088DFB98:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DFBA8;
L_088DFBA8:;
    v0 = D_08B30A98 - (2712);
    goto L_088DFB70;
L_088DFBB0:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DFBCC;
L_088DFBCC:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DFBB0; }
    goto L_088DFBDC;
L_088DFBDC:;
    s1 = D_08B30A94 - (2708);
    goto L_088DFB24;
}

/* 088DFBE4 */
void func_088DFBE4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088DFBE4:;
    sp = sp - 32;
    s1 = D_08B30A90 - (2704);
    v0 = func_088E0288();
    goto L_088DFBFC;
L_088DFBFC:;
    v1 = D_08B30A98 - (2712);
    a0 = LD32(v1+2712);
    cnd_ = a0 == 0;
    ST8(s1+2704, v0);
    if (cnd_) { goto L_088DFC2C; }
    goto L_088DFC0C;
L_088DFC0C:;
    ST32(sp+4, 0);
    v1 = ((u32)(uintptr_t)func_088E0160) - (352);
    s0 = v1 + 352;
    v0 = LD32(a0+12);
    ST32(sp, a0);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DFC44; }
    goto L_088DFC2C;
L_088DFC2C:;
    ST8(s1+2704, 0);
    goto L_088DFC30;
L_088DFC30:;
    sp = sp + 32;
    return;
L_088DFC44:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    a0 = LD32(v1+4);
    v0 = v0 << 2;
    v0 = v0 + a0;
    t_ = s0;
    a0 = LD32(v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DFC60;
L_088DFC60:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_088DFC44; }
    goto L_088DFC70;
L_088DFC70:;
    ST8(s1+2704, 0);
    goto L_088DFC30;
}

/* 088DFC78 */
rv_t func_088DFC78(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DFC78:;
    sp = sp - 16;
    a3 = a0 + 0;
    s1 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088DFD48; }
    goto L_088DFC98;
L_088DFC98:;
    v0 = LD_U8(a0+13);
    cnd_ = v0 == 0;
    v0 = D_08B30A98 - (2712);
    if (cnd_) { goto L_088DFCAC; }
    goto L_088DFCA4;
L_088DFCA4:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088DFD14; }
    goto L_088DFCAC;
L_088DFCAC:;
    a1 = LD32(v0+2712);
    s0 = (u32)-1;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088DFCF0; }
    goto L_088DFCBC;
L_088DFCBC:;
    v1 = LD32(a1+12);
    v0 = LD32(a1+8);
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088DFCEC; }
    goto L_088DFCD0;
L_088DFCD0:;
    v0 = v1 + 1;
    a0 = LD32(a1+4);
    ST32(a1+12, v0);
    v1 = v1 << 2;
    v1 = v1 + a0;
    s0 = LD32(v1);
    a0 = 1;
    goto L_088DFCEC;
L_088DFCEC:;
    v0 = a0 & 0xff;
    goto L_088DFCF0;
L_088DFCF0:;
    cnd_ = s1 != 0;
    if (cnd_) { ST32(s1, s0); goto L_088DFCF8; }
    goto L_088DFCF8;
L_088DFCF8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088DFD14; }
    goto L_088DFD00;
L_088DFD00:;
    s2 = D_08B30A94 - (2708);
    a0 = LD32(s2+2708);
    cnd_ = a0 != 0;
    s0 = s0 << 6;
    if (cnd_) { goto L_088DFD28; }
    goto L_088DFD10;
L_088DFD10:;
    goto L_088DFD14;
L_088DFD14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DFD28:;
    a0 = a0 + s0;
    a1 = a3 + 0;
    f0 = func_088DD8B0(a0, a1, a2, f12);
    goto L_088DFD34;
L_088DFD34:;
    v0 = LD32(s2+2708);
    v1 = s1 < 0x1u;
    v0 = v0 + s0;
    ST8(v0, v1);
    goto L_088DFD10;
L_088DFD48:;
    cnd_ = a1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088DFD10; }
    goto L_088DFD50;
L_088DFD50:;
    ST32(a1, v0);
    goto L_088DFD10;
}

/* 088DFD58 */
u32 func_088DFD58(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088DFD58:;
    v0 = LD32(a0+4);
    v1 = (u32)-1;
    cnd_ = v0 == 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_088DFDC4; }
    goto L_088DFD68;
L_088DFD68:;
    v0 = D_08B30A98 - (2712);
    a0 = LD32(v0+2712);
    cnd_ = a0 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088DFDC4; }
    goto L_088DFD78;
L_088DFD78:;
    v0 = D_08B30A94 - (2708);
    a2 = LD32(v0+2708);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_088DFDC4; }
    goto L_088DFD88;
L_088DFD88:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_088DFDC4; }
    goto L_088DFDA4;
L_088DFDA4:;
    v1 = LD32(a0+4);
    ST32(a0+12, a3);
    v1 = t0 + v1;
    a1 = LD32(v1);
    v0 = a1 << 6;
    v0 = a2 + v0;
    ST8(v0, 0);
    v1 = a1 + 0;
    goto L_088DFDC4;
L_088DFDC4:;
    v0 = v1 + 0;
    return v0;
}

/* 088DFDCC */
void func_088DFDCC(void)
{
L_088DFDCC:;
    return;
}

/* 088DFDD4 */
void func_088DFDD4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DFDD4:;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    sp = sp - 16;
    s2 = D_08B30A94 - (2708);
    s1 = a0 << 6;
    s0 = a1 + 0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088DFE18; }
    goto L_088DFE00;
L_088DFE00:;
    goto L_088DFE04;
L_088DFE04:;
    sp = sp + 16;
    return;
L_088DFE18:;
    a0 = LD32(s2+2708);
    a0 = a0 + s1;
    f0 = func_088DDA1C(a0);
    goto L_088DFE24;
L_088DFE24:;
    a0 = LD32(s2+2708);
    a1 = s0 + 0;
    a0 = a0 + s1;
    func_088DD9EC(a0, a1);
    goto L_088DFE34;
L_088DFE34:;
    goto L_088DFE04;
}

/* 088DFE3C */
rv_t func_088DFE3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DFE3C:;
    sp = sp - 16;
    v0 = (u32)-1;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == v0;
    s1 = D_08B30A98 - (2712);
    if (cnd_) { goto L_088DFE88; }
    goto L_088DFE60;
L_088DFE60:;
    v0 = LD32(s1+2712);
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088DFE84; }
    goto L_088DFE6C;
L_088DFE6C:;
    v0 = D_08B30A94 - (2708);
    v1 = LD32(v0+2708);
    a0 = a0 << 6;
    cnd_ = v1 != 0;
    a0 = v1 + a0;
    if (cnd_) { goto L_088DFE9C; }
    goto L_088DFE80;
L_088DFE80:;
    v0 = (u32)-1;
    goto L_088DFE84;
L_088DFE84:;
    ST32(s0, v0);
    goto L_088DFE88;
L_088DFE88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DFE9C:;
    f0 = func_088DDA1C(a0);
    goto L_088DFEA4;
L_088DFEA4:;
    a0 = LD32(s1+2712);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = LD32(s0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088DFEB8;
L_088DFEB8:;
    v0 = (u32)-1;
    goto L_088DFE84;
}

/* 088DFEC0 */
rv_t func_088DFEC0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DFEC0:;
    sp = sp - 16;
    v0 = D_08B30A98 - (2712);
    s1 = D_08B30A94 - (2708);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088DFEF0; }
    goto L_088DFEE4;
L_088DFEE4:;
    v0 = LD32(s1+2708);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_088DFF04; }
    goto L_088DFEF0;
L_088DFEF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088DFF04:;
    a0 = a0 << 6;
    a0 = v0 + a0;
    { u64 r_ = func_088DDB90(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DFF10;
L_088DFF10:;
    cnd_ = v0 != 0;
    v0 = LD32(s0);
    if (cnd_) { goto L_088DFF38; }
    goto L_088DFF18;
L_088DFF18:;
    v1 = LD32(s1+2708);
    a0 = 1;
    v0 = v0 << 6;
    v1 = v1 + v0;
    v0 = (u32)-1;
    ST8(v1, a0);
    ST32(s0, v0);
    goto L_088DFEF0;
L_088DFF38:;
    a0 = LD32(s1+2708);
    v0 = v0 << 6;
    a0 = a0 + v0;
    f0 = func_088DDA1C(a0);
    goto L_088DFF48;
L_088DFF48:;
    v0 = LD32(s0);
    goto L_088DFF18;
}

/* 088DFF50 */
u64 func_088DFF50(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088DFF50:;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    a2 = 0 + 0;
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088DFF7C; }
    goto L_088DFF64;
L_088DFF64:;
    v0 = D_08B30A94 - (2708);
    a0 = LD32(v0+2708);
    v1 = a1 << 6;
    cnd_ = a0 == 0;
    v1 = a0 + v1;
    if (cnd_) { goto L_088DFF7C; }
    goto L_088DFF78;
L_088DFF78:;
    a2 = LD_U8(v1+1);
    goto L_088DFF7C;
L_088DFF7C:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088DFF84 */
u64 func_088DFF84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DFF84:;
    sp = sp - 16;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088DFFB0; }
    goto L_088DFF9C;
L_088DFF9C:;
    v0 = D_08B30A94 - (2708);
    v1 = LD32(v0+2708);
    a0 = a0 << 6;
    cnd_ = v1 != 0;
    a0 = v1 + a0;
    if (cnd_) { goto L_088DFFC0; }
    goto L_088DFFB0;
L_088DFFB0:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088DFFC0:;
    { u64 r_ = func_088DDB90(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088DFFC8;
L_088DFFC8:;
    a1 = v0 + 0;
    goto L_088DFFB0;
}

/* 088DFFD0 */
rv_t func_088DFFD0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088DFFD0:;
    sp = sp - 16;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088E0000; }
    goto L_088DFFE8;
L_088DFFE8:;
    v0 = D_08B30A94 - (2708);
    v1 = LD32(v0+2708);
    a0 = a0 << 6;
    cnd_ = v1 != 0;
    a0 = v1 + a0;
    if (cnd_) { goto L_088E0008; }
    goto L_088DFFFC;
L_088DFFFC:;
    goto L_088E0000;
L_088E0000:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E0008:;
    { rv_t r_ = func_088DDA38(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E0010;
L_088E0010:;
    goto L_088E0000;
}

/* 088E0018 */
float func_088E0018(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0018:;
    sp = sp - 16;
    v0 = D_08B30A98 - (2712);
    f0 = BITSF(0);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    v0 = D_08B30A94 - (2708);
    if (cnd_) { goto L_088E0044; }
    goto L_088E0034;
L_088E0034:;
    v1 = LD32(v0+2708);
    a0 = a0 << 6;
    cnd_ = v1 != 0;
    a0 = v1 + a0;
    if (cnd_) { goto L_088E0050; }
    goto L_088E0044;
L_088E0044:;
    goto L_088E0048;
L_088E0048:;
    sp = sp + 16;
    return f0;
L_088E0050:;
    f0 = func_088DDC10(a0);
    goto L_088E0058;
L_088E0058:;
    goto L_088E0048;
}

/* 088E0060 */
rv_t func_088E0060(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0060:;
    sp = sp - 16;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088E0090; }
    goto L_088E0078;
L_088E0078:;
    v0 = D_08B30A94 - (2708);
    v1 = LD32(v0+2708);
    a0 = a0 << 6;
    cnd_ = v1 != 0;
    a0 = v1 + a0;
    if (cnd_) { goto L_088E0098; }
    goto L_088E008C;
L_088E008C:;
    goto L_088E0090;
L_088E0090:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E0098:;
    { rv_t r_ = func_088DDAC0(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E00A0;
L_088E00A0:;
    goto L_088E0090;
}

/* 088E00A8 */
float func_088E00A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
L_088E00A8:;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088E00CC; }
    goto L_088E00B8;
L_088E00B8:;
    v0 = D_08B30A94 - (2708);
    a0 = LD32(v0+2708);
    v1 = a1 << 6;
    cnd_ = a0 != 0;
    v1 = a0 + v1;
    if (cnd_) { goto L_088E00D8; }
    goto L_088E00CC;
L_088E00CC:;
    v0 = D_08AECC54 - (-13228);
    f0 = BITSF(LD32(v0-13228));
    return f0;
L_088E00D8:;
    f0 = BITSF(LD32(v1+16));
    return f0;
}

/* 088E00E0 */
void func_088E00E0(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E00E0:;
    sp = sp - 16;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088E0110; }
    goto L_088E00F8;
L_088E00F8:;
    v0 = D_08B30A94 - (2708);
    v1 = LD32(v0+2708);
    a0 = a0 << 6;
    cnd_ = v1 != 0;
    a0 = v1 + a0;
    if (cnd_) { goto L_088E0118; }
    goto L_088E010C;
L_088E010C:;
    goto L_088E0110;
L_088E0110:;
    sp = sp + 16;
    return;
L_088E0118:;
    func_088DDB28(a0, f12);
    goto L_088E0120;
L_088E0120:;
    goto L_088E0110;
}

/* 088E0128 */
float func_088E0128(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
L_088E0128:;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088E014C; }
    goto L_088E0138;
L_088E0138:;
    v0 = D_08B30A94 - (2708);
    a0 = LD32(v0+2708);
    v1 = a1 << 6;
    cnd_ = a0 != 0;
    v1 = a0 + v1;
    if (cnd_) { goto L_088E0158; }
    goto L_088E014C;
L_088E014C:;
    v0 = D_08AECC58 - (-13224);
    f0 = BITSF(LD32(v0-13224));
    return f0;
L_088E0158:;
    f0 = BITSF(LD32(v1+20));
    return f0;
}

/* 088E0160 */
rv_t func_088E0160(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0160:;
    sp = sp - 16;
    s2 = D_08B30A98 - (2712);
    v0 = LD32(s2+2712);
    s1 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E019C; }
    goto L_088E0184;
L_088E0184:;
    v1 = D_08B30A94 - (2708);
    a1 = LD32(v1+2708);
    v0 = a0 << 6;
    s0 = a1 + v0;
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088E01B4; }
    goto L_088E019C;
L_088E019C:;
    goto L_088E01A0;
L_088E01A0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E01B4:;
    v0 = D_08B30A90 - (2704);
    a1 = LD_U8(v0+2704);
    { rv_t r_ = func_088DD820(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E01C0;
L_088E01C0:;
    v0 = LD_U8(s0+1);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E01A0; }
    goto L_088E01CC;
L_088E01CC:;
    v0 = LD_U8(s0);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088E01A0; }
    goto L_088E01D8;
L_088E01D8:;
    f0 = func_088DDA1C(a0);
    goto L_088E01E0;
L_088E01E0:;
    a0 = LD32(s2+2712);
    v0 = LD32(a0);
    v1 = LD32(v0+8);
    t_ = v1;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E01F4;
L_088E01F4:;
    goto L_088E01A0;
}

/* 088E01FC */
rv_t func_088E01FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E01FC:;
    sp = sp - 32;
    v0 = D_08B30A98 - (2712);
    v1 = LD32(v0+2712);
    cnd_ = v1 == 0;
    ST32(sp, a0);
    if (cnd_) { goto L_088E0234; }
    goto L_088E0214;
L_088E0214:;
    v0 = D_08B30A94 - (2708);
    v1 = LD32(v0+2708);
    a0 = a0 << 6;
    cnd_ = v1 == 0;
    v0 = v1 + a0;
    if (cnd_) { goto L_088E0234; }
    goto L_088E0228;
L_088E0228:;
    v0 = LD_U8(v0);
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088E0240; }
    goto L_088E0234;
L_088E0234:;
    goto L_088E0238;
L_088E0238:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088E0240:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E0248;
L_088E0248:;
    goto L_088E0238;
}

/* 088E0250 */
void func_088E0250(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0250:;
    sp = sp - 16;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E0264;
L_088E0264:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_088E0A2C(a0);
    goto L_088E0270;
L_088E0270:;
    v0 = D_08B30ACC - (2764);
    ST32(v0+2764, s0);
    sp = sp + 16;
    return;
}

/* 088E0288 */
u32 func_088E0288(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0288:;
    sp = sp - 16;
    v0 = D_08B30ACC - (2764);
    a0 = LD32(v0+2764);
    v0 = func_088E0A54(a0);
    goto L_088E029C;
L_088E029C:;
    sp = sp + 16;
    return v0;
}

/* 088E02A8 */
void func_088E02A8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f12 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E02A8:;
    f12 = BITSF(0);
    a0 = 0x5c130000u;
    sp = sp - 16;
    a0 = a0 | 0xd641;
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E02C0;
L_088E02C0:;
    sp = sp + 16;
    return;
}

/* 088E02CC */
void func_088E02CC(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E02CC:;
    sp = sp - 32;
    v1 = 1;
    s6 = D_08B30AD0 - (2768);
    s3 = D_08B30AB4 - (2740);
    v0 = ((u32)(uintptr_t)func_088E0658) - (1624);
    s2 = v0 + 1624;
    s1 = s3 + 2740;
    s0 = LD32(s3+2740);
    ST8(s1+8, v1);
    cnd_ = s0 == 0;
    ST8(s6+2768, v1);
    if (cnd_) { goto L_088E0340; }
    goto L_088E0318;
L_088E0318:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088E0608; }
    goto L_088E0324;
L_088E0324:;
    a1 = LD32(s0+12);
    goto L_088E0328;
L_088E0328:;
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088E05F8; }
    goto L_088E0330;
L_088E0330:;
    a0 = LD32(s0);
    goto L_088E0334;
L_088E0334:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E033C;
L_088E033C:;
    s1 = s3 + 2740;
    goto L_088E0340;
L_088E0340:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = LD32(s3+2740); goto L_088E03A4; }
    goto L_088E034C;
L_088E034C:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088E0390; }
    goto L_088E0358;
L_088E0358:;
    v0 = s0 << 2;
    goto L_088E035C;
L_088E035C:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    v0 = func_08AB821C(a0, a1);
    goto L_088E0370;
L_088E0370:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0378;
L_088E0378:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_088E0390; }
    goto L_088E0388;
L_088E0388:;
    v0 = s0 << 2;
    goto L_088E035C;
L_088E0390:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E05E8; }
    goto L_088E0398;
L_088E0398:;
    ST32(s1+16, 0);
    goto L_088E039C;
L_088E039C:;
    ST32(s1+12, 0);
    s0 = LD32(s3+2740);
    goto L_088E03A4;
L_088E03A4:;
    v0 = s3 + 2740;
    ST8(v0+8, 0);
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088E03D4; }
    goto L_088E03B4;
L_088E03B4:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E05D8; }
    goto L_088E03C0;
L_088E03C0:;
    a1 = LD32(s0+12);
    goto L_088E03C4;
L_088E03C4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E05C8; }
    goto L_088E03CC;
L_088E03CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E03D4;
L_088E03D4:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E05B8; }
    goto L_088E03E0;
L_088E03E0:;
    s2 = D_08B30A9C - (2716);
    s0 = LD32(s2+2716);
    goto L_088E03E8;
L_088E03E8:;
    v0 = s3 + 2740;
    s4 = s2 + 2716;
    v1 = ((u32)(uintptr_t)func_088E0618) - (1560);
    ST32(v0+4, 0);
    v0 = 1;
    s5 = v1 + 1560;
    ST32(s1+16, 0);
    ST32(s3+2740, 0);
    ST8(s4+8, v0);
    cnd_ = s0 == 0;
    ST32(s1+12, 0);
    if (cnd_) { goto L_088E0438; }
    goto L_088E0414;
L_088E0414:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_088E05A8; }
    goto L_088E0420;
L_088E0420:;
    a1 = LD32(s0+12);
    goto L_088E0424;
L_088E0424:;
    cnd_ = a1 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_088E0598; }
    goto L_088E042C;
L_088E042C:;
    a0 = LD32(s0);
    goto L_088E0430;
L_088E0430:;
    t_ = s5;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E0438;
L_088E0438:;
    s1 = s2 + 2716;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = LD32(s2+2716); goto L_088E04A0; }
    goto L_088E0448;
L_088E0448:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088E048C; }
    goto L_088E0454;
L_088E0454:;
    v0 = s0 << 2;
    goto L_088E0458;
L_088E0458:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    v0 = func_08AB8304(a0, a1);
    goto L_088E046C;
L_088E046C:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0474;
L_088E0474:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_088E048C; }
    goto L_088E0484;
L_088E0484:;
    v0 = s0 << 2;
    goto L_088E0458;
L_088E048C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E0588; }
    goto L_088E0494;
L_088E0494:;
    ST32(s1+16, 0);
    goto L_088E0498;
L_088E0498:;
    ST32(s1+12, 0);
    s0 = LD32(s2+2716);
    goto L_088E04A0;
L_088E04A0:;
    v0 = s2 + 2716;
    ST8(v0+8, 0);
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088E04D0; }
    goto L_088E04B0;
L_088E04B0:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E0578; }
    goto L_088E04BC;
L_088E04BC:;
    a1 = LD32(s0+12);
    goto L_088E04C0;
L_088E04C0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E0568; }
    goto L_088E04C8;
L_088E04C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E04D0;
L_088E04D0:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E0558; }
    goto L_088E04DC;
L_088E04DC:;
    s3 = D_08B30ACC - (2764);
    s0 = LD32(s3+2764);
    goto L_088E04E4;
L_088E04E4:;
    v0 = s2 + 2716;
    ST32(s1+16, 0);
    ST32(v0+4, 0);
    ST32(s2+2716, 0);
    ST8(s6+2768, 0);
    cnd_ = s0 == 0;
    ST32(s1+12, 0);
    if (cnd_) { goto L_088E051C; }
    goto L_088E0500;
L_088E0500:;
    a0 = LD32(s0+4);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E0548; }
    goto L_088E050C;
L_088E050C:;
    ST32(s0+4, 0);
    goto L_088E0510;
L_088E0510:;
    a0 = s0 + 0;
    ST32(s0, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E051C;
L_088E051C:;
    ST32(s3+2764, 0);
    sp = sp + 32;
    return;
L_088E0548:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0550;
L_088E0550:;
    ST32(s0+4, 0);
    goto L_088E0510;
L_088E0558:;
    s3 = D_08B30ACC - (2764);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0560;
L_088E0560:;
    s0 = LD32(s3+2764);
    goto L_088E04E4;
L_088E0568:;
    a0 = s1 + 0;
    func_08AB8564(a0, a1, t1, t2, t3);
    goto L_088E0570;
L_088E0570:;
    goto L_088E04C8;
L_088E0578:;
    a0 = v0 + 0;
    func_08AB8564(a0, a1, t1, t2, t3);
    goto L_088E0580;
L_088E0580:;
    a1 = LD32(s0+12);
    goto L_088E04C0;
L_088E0588:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0590;
L_088E0590:;
    ST32(s1+16, 0);
    goto L_088E0498;
L_088E0598:;
    a2 = s5 + 0;
    func_08AB84E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E05A0;
L_088E05A0:;
    a0 = LD32(s0);
    goto L_088E0430;
L_088E05A8:;
    a2 = s5 + 0;
    func_08AB84E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E05B0;
L_088E05B0:;
    a1 = LD32(s0+12);
    goto L_088E0424;
L_088E05B8:;
    s2 = D_08B30A9C - (2716);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E05C0;
L_088E05C0:;
    s0 = LD32(s2+2716);
    goto L_088E03E8;
L_088E05C8:;
    a0 = s1 + 0;
    func_08AB8470(a0, a1, t1, t2, t3);
    goto L_088E05D0;
L_088E05D0:;
    goto L_088E03CC;
L_088E05D8:;
    a0 = v0 + 0;
    func_08AB8470(a0, a1, t1, t2, t3);
    goto L_088E05E0;
L_088E05E0:;
    a1 = LD32(s0+12);
    goto L_088E03C4;
L_088E05E8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E05F0;
L_088E05F0:;
    ST32(s1+16, 0);
    goto L_088E039C;
L_088E05F8:;
    a2 = s2 + 0;
    func_08AB83EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E0600;
L_088E0600:;
    a0 = LD32(s0);
    goto L_088E0334;
L_088E0608:;
    a2 = s2 + 0;
    func_08AB83EC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E0610;
L_088E0610:;
    a1 = LD32(s0+12);
    goto L_088E0328;
}

/* 088E0618 */
rv_t func_088E0618(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0618:;
    sp = sp - 16;
    s0 = LD32(a1);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088E0640; }
    goto L_088E0630;
L_088E0630:;
    goto L_088E0634;
L_088E0634:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E0640:;
    func_088E0C64(a0, t1, t2, t3);
    goto L_088E0648;
L_088E0648:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0650;
L_088E0650:;
    goto L_088E0634;
}

/* 088E0658 */
rv_t func_088E0658(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0658:;
    sp = sp - 16;
    s0 = LD32(a1);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088E0680; }
    goto L_088E0670;
L_088E0670:;
    goto L_088E0674;
L_088E0674:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E0680:;
    func_088E111C(a0, t1, t2, t3);
    goto L_088E0688;
L_088E0688:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0690;
L_088E0690:;
    goto L_088E0674;
}

/* 088E0698 */
u64 func_088E0698(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0698:;
    sp = sp - 16;
    t0 = D_08B30A9C - (2716);
    v1 = LD32(t0+2716);
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088E06DC; }
    goto L_088E06B0;
L_088E06B0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088E06B8;
L_088E06B8:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088E06EC; }
    goto L_088E06D0;
L_088E06D0:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088E06B8; }
    goto L_088E06DC;
L_088E06DC:;
    v0 = t0 + 2716;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088E0704; }
    goto L_088E06EC;
L_088E06EC:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E06F8; }
    goto L_088E06F4;
L_088E06F4:;
    v0 = LD32(a3);
    goto L_088E06F8;
L_088E06F8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088E0704:;
    a2 = 1;
    { u64 r_ = func_08AB85D4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E070C;
L_088E070C:;
    a3 = v0 + 0;
    goto L_088E06EC;
}

/* 088E0714 */
u64 func_088E0714(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0714:;
    sp = sp - 16;
    t0 = D_08B30AB4 - (2740);
    v1 = LD32(t0+2740);
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088E0758; }
    goto L_088E072C;
L_088E072C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_088E0734;
L_088E0734:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_088E0768; }
    goto L_088E074C;
L_088E074C:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_088E0734; }
    goto L_088E0758;
L_088E0758:;
    v0 = t0 + 2740;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088E0780; }
    goto L_088E0768;
L_088E0768:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E0774; }
    goto L_088E0770;
L_088E0770:;
    v0 = LD32(a3);
    goto L_088E0774;
L_088E0774:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088E0780:;
    a2 = 1;
    { u64 r_ = func_08AB864C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0788;
L_088E0788:;
    a3 = v0 + 0;
    goto L_088E0768;
}

/* 088E0790 */
u64 func_088E0790(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E0790:;
    sp = sp - 32;
    f20 = f12;
    { u64 r_ = func_088E0714(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E07B0;
L_088E07B0:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E07CC; }
    goto L_088E07BC;
L_088E07BC:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088E07E8; }
    goto L_088E07C8;
L_088E07C8:;
    v0 = 1;
    goto L_088E07CC;
L_088E07CC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088E07E8:;
    v0 = LD32(s1+4);
    goto L_088E07EC;
L_088E07EC:;
    v1 = s2 << 2;
    s2 = s2 + 1;
    v0 = v0 + v1;
    s0 = LD32(v0);
    a0 = LD32(s0+16);
    { u64 r_ = func_088E0698(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0804;
L_088E0804:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_088E081C; }
    goto L_088E0814;
L_088E0814:;
    { u64 r_ = func_088E0F40(a0, a1, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E081C;
L_088E081C:;
    v0 = LD32(s1);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_088E07EC; }
    goto L_088E082C;
L_088E082C:;
    v0 = 1;
    goto L_088E07CC;
}

/* 088E0834 */
u32 func_088E0834(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0834:;
    sp = sp - 16;
    v0 = D_08B30ACC - (2764);
    a1 = a0 + 0;
    a0 = LD32(v0+2764);
    v0 = func_088E0B90(a1);
    goto L_088E084C;
L_088E084C:;
    sp = sp + 16;
    return v0;
}

/* 088E0858 */
float func_088E0858(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0858:;
    v0 = D_08B30ACC - (2764);
    a1 = a0 + 0;
    a0 = LD32(v0+2764);
    sp = sp - 16;
    f0 = func_088E0BA4(a0, a1);
    goto L_088E0874;
L_088E0874:;
    sp = sp + 16;
    return f0;
}

/* 088E0880 */
void func_088E0880(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0880:;
    v0 = D_08B30ACC - (2764);
    a0 = LD32(v0+2764);
    sp = sp - 16;
    func_088E0B60(a0);
    goto L_088E0898;
L_088E0898:;
    sp = sp + 16;
    return;
}

/* 088E08A4 */
void func_088E08A4(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E08A4:;
    v0 = D_08B30ACC - (2764);
    a0 = LD32(v0+2764);
    sp = sp - 16;
    func_088E0B78(a0);
    goto L_088E08BC;
L_088E08BC:;
    sp = sp + 16;
    return;
}

/* 088E08C8 */
void func_088E08C8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E08C8:;
    sp = sp - 32;
    s2 = D_08B30A9C - (2716);
    v1 = s2 + 2716;
    v0 = LD_U8(v1+8);
    ST32(sp, a0);
    cnd_ = v0 != 0;
    s0 = LD32(a0+60);
    if (cnd_) { goto L_088E0958; }
    goto L_088E08F4;
L_088E08F4:;
    v0 = LD32(s2+2716);
    cnd_ = v0 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_088E0928; }
    goto L_088E0900;
L_088E0900:;
    v1 = v0 + 0;
    goto L_088E0904;
L_088E0904:;
    a0 = v1 + 12;
    s1 = v1 + 8;
    v1 = LD32(v1);
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_088E0958; }
    goto L_088E091C;
L_088E091C:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088E0904; }
    goto L_088E0928;
L_088E0928:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E0930;
L_088E0930:;
    ST32(v0, s0);
    a0 = s2 + 2716;
    v1 = LD32(a0+4);
    a1 = LD32(sp);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(a0+4, v1);
    ST32(v0+4, a1);
    ST32(s1, v0);
    goto L_088E0958;
L_088E0958:;
    sp = sp + 32;
    return;
}

/* 088E0970 */
void func_088E0970(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0970:;
    sp = sp - 16;
    v0 = D_08B30A9C - (2716);
    v1 = D_08B30AD0 - (2768);
    s0 = v0 + 2716;
    v0 = LD_U8(v1+2768);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_088E09D0; }
    goto L_088E0998;
L_088E0998:;
    s1 = LD32(a1+60);
    v0 = LD_U8(s0+8);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088E09F8; }
    goto L_088E09AC;
L_088E09AC:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088E09E4; }
    goto L_088E09B8;
L_088E09B8:;
    v1 = LD32(s0+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_088E09D0;
L_088E09D0:;
    goto L_088E09D4;
L_088E09D4:;
    sp = sp + 16;
    return;
L_088E09E4:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E09EC;
L_088E09EC:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_088E09B8;
L_088E09F8:;
    v0 = func_08AB8304(a0, a1);
    goto L_088E0A00;
L_088E0A00:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E09D0; }
    goto L_088E0A08;
L_088E0A08:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0A10;
L_088E0A10:;
    goto L_088E09D4;
}

/* 088E0A18 */
u64 func_088E0A18(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_088E0A18:;
    v0 = D_08B30ACC - (2764);
    a0 = LD32(v0+2764);
    v1 = 1;
    ST8(a0+20, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088E0A2C */
void func_088E0A2C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088E0A2C:;
    v1 = D_08AECC60 - (-13216);
    f0 = BITSF(LD32(v1-13216));
    v0 = 1;
    ST8(a0+20, v0);
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, 0);
    ST32(a0, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    return;
}

/* 088E0A54 */
u32 func_088E0A54(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E0A54:;
    sp = sp - 32;
    v1 = 0 + 0;
    v0 = LD_U8(a0+20);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088E0B40; }
    goto L_088E0A7C;
L_088E0A7C:;
    v1 = LD32(a0);
    v0 = D_08AECC64 - (-13212);
    ST8(a0+20, 0);
    s2 = 0 + 0;
    cnd_ = v1 == 0;
    f20 = BITSF(LD32(v0-13212));
    if (cnd_) { goto L_088E0ADC; }
    goto L_088E0A94;
L_088E0A94:;
    a0 = LD32(a0+4);
    s0 = s2 << 2;
    goto L_088E0A9C;
L_088E0A9C:;
    v0 = a0 + s0;
    a0 = LD32(v0);
    s2 = s2 + 1;
    func_088E0C80(a0);
    goto L_088E0AAC;
L_088E0AAC:;
    a0 = LD32(s1+4);
    s0 = a0 + s0;
    v0 = LD32(s0);
    f0 = BITSF(LD32(v0+32));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f0; goto L_088E0ACC; }
    goto L_088E0ACC;
L_088E0ACC:;
    v1 = LD32(s1);
    v0 = s2 < v1;
    cnd_ = v0 != 0;
    s0 = s2 << 2;
    if (cnd_) { goto L_088E0A9C; }
    goto L_088E0ADC;
L_088E0ADC:;
    v0 = LD32(s1+16);
    s2 = 0 + 0;
    v0 = v0 + 1;
    cnd_ = v1 == 0;
    ST32(s1+16, v0);
    if (cnd_) { goto L_088E0B3C; }
    goto L_088E0AF0;
L_088E0AF0:;
    a0 = LD32(s1+4);
    goto L_088E0AF4;
L_088E0AF4:;
    s0 = s2 << 2;
    v0 = a0 + s0;
    a0 = LD32(v0);
    a1 = LD32(s1+16);
    f12 = f20;
    s2 = s2 + 1;
    func_088E0E9C(a0, a1, f12);
    goto L_088E0B10;
L_088E0B10:;
    v1 = LD32(s1+4);
    f1 = BITSF(LD32(s1+8));
    v0 = LD32(s1);
    s0 = v1 + s0;
    a0 = v1 + 0;
    v1 = LD32(s0);
    v0 = s2 < v0;
    f0 = BITSF(LD32(v1+20));
    f0 = f0 * f1;
    cnd_ = v0 != 0;
    ST32(v1+20, FBITS(f0));
    if (cnd_) { goto L_088E0AF4; }
    goto L_088E0B3C;
L_088E0B3C:;
    v1 = 1;
    goto L_088E0B40;
L_088E0B40:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
}

/* 088E0B60 */
void func_088E0B60(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088E0B60:;
    v0 = LD32(a0+12);
    v1 = 1;
    ST8(a0+20, v1);
    v0 = v0 + 1;
    ST32(a0+12, v0);
    return;
}

/* 088E0B78 */
void func_088E0B78(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_088E0B78:;
    v0 = LD32(a0+12);
    v1 = 1;
    ST8(a0+20, v1);
    v0 = v0 - 1;
    ST32(a0+12, v0);
    return;
}

/* 088E0B90 */
u32 func_088E0B90(u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_088E0B90:;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088E0B9C; }
    goto L_088E0B98;
L_088E0B98:;
    v0 = LD_U8(a1+15);
    goto L_088E0B9C;
L_088E0B9C:;
    return v0;
}

/* 088E0BA4 */
float func_088E0BA4(u32 a0, u32 a1)
{
    float f0 = 0;
    int cnd_;
L_088E0BA4:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088E0BB4; }
    goto L_088E0BAC;
L_088E0BAC:;
    f0 = BITSF(LD32(a1+20));
    return f0;
L_088E0BB4:;
    f0 = BITSF(LD32(a0+8));
    return f0;
}

/* 088E0BBC */
void func_088E0BBC(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_088E0BBC:;
    v0 = D_08AECC70 - (-13200);
    f1 = BITSF(LD32(v0-13200));
    v0 = D_08AECC74 - (-13196);
    f0 = BITSF(LD32(v0-13196));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST8(a0+15, 0);
    ST32(a0, FBITS(f1));
    ST8(a0+12, 0);
    ST8(a0+13, 0);
    ST8(a0+14, 0);
    return;
}

/* 088E0BEC */
void func_088E0BEC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0BEC:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_088E0BBC(a0);
    goto L_088E0C08;
L_088E0C08:;
    v0 = D_08AECC7C - (-13188);
    f0 = BITSF(LD32(v0-13188));
    ST32(s0+16, 0);
    a0 = s1 + 0;
    ST32(s0+52, FBITS(f0));
    ST32(s0+20, FBITS(f0));
    ST32(s0+32, FBITS(f0));
    ST32(s0+40, FBITS(f0));
    ST32(s0+44, FBITS(f0));
    ST32(s0+48, FBITS(f0));
    ST32(s0+24, 0);
    ST8(s0+28, 0);
    ST8(s0+36, 0);
    ST32(s0+56, 0);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0C44;
L_088E0C44:;
    ST32(s0+60, v0);
    a0 = s0 + 0;
    func_088E08C8(a0, 0, 0, 0);
    goto L_088E0C50;
L_088E0C50:;
    sp = sp + 16;
    return;
}

/* 088E0C64 */
void func_088E0C64(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E0C64:;
    sp = sp - 16;
    func_088E0970(a0, t1, t2, t3);
    goto L_088E0C74;
L_088E0C74:;
    sp = sp + 16;
    return;
}

/* 088E0C80 */
void func_088E0C80(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E0C80:;
    sp = sp - 32;
    f2 = BITSF(0);
    f1 = BITSF(LD32(a0+56));
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    s0 = a0 + 0;
    if (cnd_) { goto L_088E0DAC; }
    goto L_088E0CAC;
L_088E0CAC:;
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v0-31332));
    v1 = LD_U8(a0+28);
    s1 = D_08AECC80 - (-13184);
    f20 = f0 / f1;
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    f1 = BITSF(LD32(s1-13184));
    if (cnd_) { goto L_088E0E40; }
    goto L_088E0CCC;
L_088E0CCC:;
    f0 = BITSF(LD32(s0+32));
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s0+36); goto L_088E0D08; }
    goto L_088E0CE0;
L_088E0CE0:;
    f0 = f0 - f20;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s0+32, FBITS(f0));
    if (cnd_) { goto L_088E0D00; }
    goto L_088E0CF4;
L_088E0CF4:;
    v0 = LD_U8(s0+14);
    cnd_ = v0 == 0;
    ST32(s0+32, FBITS(f2));
    if (cnd_) { goto L_088E0E2C; }
    goto L_088E0D00;
L_088E0D00:;
    a0 = 1;
    goto L_088E0D04;
L_088E0D04:;
    v0 = LD_U8(s0+36);
    goto L_088E0D08;
L_088E0D08:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(s0+40));
    if (cnd_) { goto L_088E0DD4; }
    goto L_088E0D10;
L_088E0D10:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { f2 = BITSF(LD32(s1-13184)); goto L_088E0D54; }
    goto L_088E0D24;
L_088E0D24:;
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s0+40, FBITS(f0));
    if (cnd_) { goto L_088E0D4C; }
    goto L_088E0D38;
L_088E0D38:;
    v0 = LD_U8(s0+13);
    cnd_ = v0 != 0;
    ST32(s0+40, FBITS(f1));
    if (cnd_) { goto L_088E0D4C; }
    goto L_088E0D44;
L_088E0D44:;
    v0 = 1;
    ST8(s0+13, v0);
    goto L_088E0D4C;
L_088E0D4C:;
    a0 = 1;
    goto L_088E0D50;
L_088E0D50:;
    f2 = BITSF(LD32(s1-13184));
    goto L_088E0D54;
L_088E0D54:;
    f0 = BITSF(LD32(s0+52));
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    f0 = f0 + f20;
    if (cnd_) { goto L_088E0DA0; }
    goto L_088E0D68;
L_088E0D68:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    ST32(s0+52, FBITS(f0));
    if (cnd_) { goto L_088E0D7C; }
    goto L_088E0D78;
L_088E0D78:;
    ST32(s0+52, FBITS(f2));
    goto L_088E0D7C;
L_088E0D7C:;
    f3 = BITSF(LD32(s0+52));
    f0 = BITSF(LD32(s0+44));
    f1 = BITSF(LD32(s0+48));
    f2 = f2 - f3;
    a0 = 1;
    f1 = f1 * f3;
    f0 = f0 * f2;
    f0 = f0 + f1;
    ST32(s0, FBITS(f0));
    goto L_088E0DA0;
L_088E0DA0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E0DC4; }
    goto L_088E0DA8;
L_088E0DA8:;
    ST32(s0+56, 0);
    goto L_088E0DAC;
L_088E0DAC:;
    goto L_088E0DB0;
L_088E0DB0:;
    sp = sp + 32;
    return;
L_088E0DC4:;
    { u64 r_ = func_088E0A18(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0DCC;
L_088E0DCC:;
    goto L_088E0DB0;
L_088E0DD4:;
    f1 = BITSF(LD32(s1-13184));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    f2 = BITSF(LD32(s1-13184));
    if (cnd_) { goto L_088E0D54; }
    goto L_088E0DE8;
L_088E0DE8:;
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s0+40, FBITS(f0));
    if (cnd_) { goto L_088E0E00; }
    goto L_088E0DFC;
L_088E0DFC:;
    ST32(s0+40, FBITS(f1));
    goto L_088E0E00;
L_088E0E00:;
    v0 = LD_U8(s0+13);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_088E0D50; }
    goto L_088E0E0C;
L_088E0E0C:;
    f1 = BITSF(LD32(s0+40));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST8(s0+13, 0); goto L_088E0D50; }
    goto L_088E0E24;
L_088E0E24:;
    f2 = BITSF(LD32(s1-13184));
    goto L_088E0D54;
L_088E0E2C:;
    v0 = 1;
    ST8(s0+14, v0);
    func_088E0880();
    goto L_088E0E38;
L_088E0E38:;
    a0 = 1;
    goto L_088E0D04;
L_088E0E40:;
    f0 = BITSF(LD32(s0+32));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD_U8(s0+36); goto L_088E0D08; }
    goto L_088E0E54;
L_088E0E54:;
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s0+32, FBITS(f0));
    if (cnd_) { goto L_088E0E6C; }
    goto L_088E0E68;
L_088E0E68:;
    ST32(s0+32, FBITS(f1));
    goto L_088E0E6C;
L_088E0E6C:;
    v0 = LD_U8(s0+14);
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_088E0D04; }
    goto L_088E0E78;
L_088E0E78:;
    f0 = BITSF(LD32(s0+32));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s0+36); goto L_088E0D08; }
    goto L_088E0E8C;
L_088E0E8C:;
    ST8(s0+14, 0);
    func_088E08A4();
    goto L_088E0E94;
L_088E0E94:;
    a0 = 1;
    goto L_088E0D04;
}

/* 088E0E9C */
void func_088E0E9C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E0E9C:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+24);
    cnd_ = v0 == a1;
    f20 = f12;
    if (cnd_) { goto L_088E0ECC; }
    goto L_088E0EBC;
L_088E0EBC:;
    v0 = LD_U8(a0+13);
    cnd_ = v0 == 0;
    ST32(s0+24, a1);
    if (cnd_) { goto L_088E0EE0; }
    goto L_088E0EC8;
L_088E0EC8:;
    ST32(a0+20, 0);
    goto L_088E0ECC;
L_088E0ECC:;
    sp = sp + 32;
    return;
L_088E0EE0:;
    f0 = BITSF(LD32(a0));
    v0 = LD32(a0+16);
    ST32(s0+20, FBITS(f0));
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E0F20; }
    goto L_088E0EF4;
L_088E0EF4:;
    v0 = D_08AECC84 - (-13180);
    f3 = BITSF(LD32(s0+32));
    f0 = BITSF(LD32(v0-13180));
    f1 = BITSF(LD32(s0+20));
    f2 = BITSF(LD32(s0+40));
    f0 = f0 - f3;
    f1 = f1 * f2;
    f0 = f20 + f0;
    f1 = f1 * f0;
    ST32(s0+20, FBITS(f1));
    goto L_088E0ECC;
L_088E0F20:;
    func_088E0E9C(a0, a1, f12);
    goto L_088E0F28;
L_088E0F28:;
    v0 = LD32(s0+16);
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(v0+20));
    f0 = f0 * f1;
    ST32(s0+20, FBITS(f0));
    goto L_088E0EF4;
}

/* 088E0F40 */
u64 func_088E0F40(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E0F40:;
    sp = sp - 32;
    s2 = D_08AECC88 - (-13176);
    s1 = a1 + 0;
    s0 = a0 + 0;
    f20 = BITSF(0);
    fcc = FCMP(f12, f20, 2);
    v0 = LD32(a1+4);
    v1 = LD_U8(a1+12);
    ST32(a0+4, v0);
    v0 = LD32(a1+8);
    a1 = LD_U8(a1+15);
    ST8(a0+12, v1);
    ST32(a0+8, v0);
    ST8(a0+15, a1);
    cnd_ = fcc;
    ST32(a0+56, FBITS(f12));
    if (cnd_) { goto L_088E0FDC; }
    goto L_088E0F94;
L_088E0F94:;
    v0 = LD_U8(s1+14);
    f0 = BITSF(LD32(a0));
    ST8(a0+28, v0);
    ST32(a0+44, FBITS(f0));
    v0 = LD_U8(s1+13);
    f1 = BITSF(LD32(s1));
    ST32(a0+52, FBITS(f20));
    ST8(a0+36, v0);
    ST32(a0+48, FBITS(f1));
    goto L_088E0FB8;
L_088E0FB8:;
    { u64 r_ = func_088E0A18(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E0FC0;
L_088E0FC0:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088E0FDC:;
    a1 = LD_U8(s1+14);
    func_088E1028(a0, a1);
    goto L_088E0FE4;
L_088E0FE4:;
    v0 = LD_U8(s1+13);
    f0 = f20;
    ST8(s0+13, v0);
    cnd_ = v0 != 0;
    ST8(s0+36, v0);
    if (cnd_) { goto L_088E1000; }
    goto L_088E0FF8;
L_088E0FF8:;
    s2 = D_08AECC88 - (-13176);
    f0 = BITSF(LD32(s2-13176));
    goto L_088E1000;
L_088E1000:;
    ST32(s0+40, FBITS(f0));
    { u64 r_ = func_088E0A18(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E1008;
L_088E1008:;
    f1 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s2-13176));
    ST32(s0+48, FBITS(f1));
    ST32(s0+52, FBITS(f0));
    ST32(s0, FBITS(f1));
    { u64 r_ = func_088E0A18(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E1020;
L_088E1020:;
    goto L_088E0FB8;
}

/* 088E1028 */
void func_088E1028(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1028:;
    sp = sp - 16;
    s0 = a1 & 0xff;
    v0 = LD_U8(a0+14);
    cnd_ = v0 == s0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088E1070; }
    goto L_088E1048;
L_088E1048:;
    cnd_ = s0 == 0;
    ST8(a0+14, s0);
    if (cnd_) { goto L_088E1084; }
    goto L_088E1050;
L_088E1050:;
    func_088E0880();
    goto L_088E1058;
L_088E1058:;
    f0 = BITSF(0);
    cnd_ = s0 != 0;
    ST8(s1+28, s0);
    if (cnd_) { goto L_088E106C; }
    goto L_088E1064;
L_088E1064:;
    v0 = D_08AECC8C - (-13172);
    f0 = BITSF(LD32(v0-13172));
    goto L_088E106C;
L_088E106C:;
    ST32(s1+32, FBITS(f0));
    goto L_088E1070;
L_088E1070:;
    sp = sp + 16;
    return;
L_088E1084:;
    func_088E08A4();
    goto L_088E108C;
L_088E108C:;
    goto L_088E1058;
}

/* 088E1094 */
void func_088E1094(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1094:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E10AC;
L_088E10AC:;
    a0 = v0 + 0;
    { u64 r_ = func_088E0698(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E10B4;
L_088E10B4:;
    ST32(s0+16, v0);
    { u64 r_ = func_088E0A18(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E10BC;
L_088E10BC:;
    sp = sp + 16;
    return;
}

/* 088E10CC */
void func_088E10CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E10CC:;
    sp = sp - 32;
    s0 = a0 + 0;
    ST32(a0+4, 0);
    ST32(s0, 0);
    ST32(s0+8, 0);
    a0 = a1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E10F0;
L_088E10F0:;
    a0 = D_08B30AB4 - (2740);
    ST32(s0+12, v0);
    a0 = a0 + 2740;
    a1 = v0 + 0;
    a2 = sp + 0;
    ST32(sp, s0);
    func_08AB86C4(a0, a1, a2, 0, 0, 0);
    goto L_088E110C;
L_088E110C:;
    sp = sp + 32;
    return;
}

/* 088E111C */
void func_088E111C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E111C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_088E1194(a0, t1, t2, t3);
    goto L_088E1130;
L_088E1130:;
    v0 = D_08B30AD0 - (2768);
    v1 = LD_U8(v0+2768);
    a0 = D_08B30AB4 - (2740);
    cnd_ = v1 == 0;
    a0 = a0 + 2740;
    if (cnd_) { goto L_088E1178; }
    goto L_088E1144;
L_088E1144:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E1168; }
    goto L_088E1150;
L_088E1150:;
    ST32(s0, 0);
    goto L_088E1154;
L_088E1154:;
    ST32(s0+4, 0);
    sp = sp + 16;
    return;
L_088E1168:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E1170;
L_088E1170:;
    ST32(s0, 0);
    goto L_088E1154;
L_088E1178:;
    a1 = LD32(s0+12);
    func_08AB877C(a0, a1, 0, 0, 0);
    goto L_088E1180;
L_088E1180:;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088E1150; }
    goto L_088E118C;
L_088E118C:;
    goto L_088E1168;
}

/* 088E1194 */
void func_088E1194(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1194:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088E11EC; }
    goto L_088E11B4;
L_088E11B4:;
    a0 = LD32(s1+4);
    goto L_088E11B8;
L_088E11B8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E11DC; }
    goto L_088E11C0;
L_088E11C0:;
    ST32(s1, 0);
    goto L_088E11C4;
L_088E11C4:;
    ST32(s1+4, 0);
    sp = sp + 16;
    return;
L_088E11DC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E11E4;
L_088E11E4:;
    ST32(s1, 0);
    goto L_088E11C4;
L_088E11EC:;
    v0 = LD32(s1+4);
    goto L_088E11F0;
L_088E11F0:;
    v1 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    a0 = LD32(v0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E1204;
L_088E1204:;
    v0 = LD32(s1);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_088E11F0; }
    goto L_088E1214;
L_088E1214:;
    a0 = LD32(s1+4);
    goto L_088E11B8;
}

/* 088E121C */
u64 func_088E121C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E121C:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    a2 = s3 < 0x1u;
    v0 = a2 & v0;
    a3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E1290; }
    goto L_088E1250;
L_088E1250:;
    a0 = D_08B30A9C - (2716);
    a1 = D_08B30AB4 - (2740);
    v0 = a0 + 2716;
    v1 = a1 + 2740;
    ST32(v0+4, 0);
    ST32(v0+16, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(a0+2716, 0);
    ST32(v0+20, 0);
    ST32(a1+2740, 0);
    ST32(v1+20, 0);
    ST32(v1+4, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+16, 0);
    goto L_088E1290;
L_088E1290:;
    s1 = a3 < 0x1u;
    v0 = a2 & s1;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_088E12E8; }
    goto L_088E12A0;
L_088E12A0:;
    v0 = D_08B30AB4 - (2740);
    s0 = LD32(v0+2740);
    cnd_ = s0 == 0;
    s2 = v0 + 2740;
    if (cnd_) { goto L_088E12D0; }
    goto L_088E12B0;
L_088E12B0:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E13A4; }
    goto L_088E12BC;
L_088E12BC:;
    a1 = LD32(s0+12);
    goto L_088E12C0;
L_088E12C0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E1394; }
    goto L_088E12C8;
L_088E12C8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E12D0;
L_088E12D0:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E1384; }
    goto L_088E12DC;
L_088E12DC:;
    ST32(s2+16, 0);
    goto L_088E12E0;
L_088E12E0:;
    ST32(s2+12, 0);
    v0 = s3 < 0x1u;
    goto L_088E12E8;
L_088E12E8:;
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E133C; }
    goto L_088E12F4;
L_088E12F4:;
    v0 = D_08B30A9C - (2716);
    s0 = LD32(v0+2716);
    cnd_ = s0 == 0;
    s1 = v0 + 2716;
    if (cnd_) { goto L_088E1324; }
    goto L_088E1304;
L_088E1304:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E1374; }
    goto L_088E1310;
L_088E1310:;
    a1 = LD32(s0+12);
    goto L_088E1314;
L_088E1314:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088E1364; }
    goto L_088E131C;
L_088E131C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E1324;
L_088E1324:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E1354; }
    goto L_088E1330;
L_088E1330:;
    ST32(s1+16, 0);
    goto L_088E1334;
L_088E1334:;
    ST32(s1+12, 0);
    goto L_088E133C;
L_088E133C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_088E1354:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E135C;
L_088E135C:;
    ST32(s1+16, 0);
    goto L_088E1334;
L_088E1364:;
    a0 = s1 + 0;
    func_08AB8564(a0, a1, t1, t2, t3);
    goto L_088E136C;
L_088E136C:;
    goto L_088E131C;
L_088E1374:;
    a0 = s1 + 0;
    func_08AB8564(a0, a1, t1, t2, t3);
    goto L_088E137C;
L_088E137C:;
    a1 = LD32(s0+12);
    goto L_088E1314;
L_088E1384:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E138C;
L_088E138C:;
    ST32(s2+16, 0);
    goto L_088E12E0;
L_088E1394:;
    a0 = s2 + 0;
    func_08AB8470(a0, a1, t1, t2, t3);
    goto L_088E139C;
L_088E139C:;
    goto L_088E12C8;
L_088E13A4:;
    a0 = s2 + 0;
    func_08AB8470(a0, a1, t1, t2, t3);
    goto L_088E13AC;
L_088E13AC:;
    a1 = LD32(s0+12);
    goto L_088E12C0;
}

/* 088E13B4 */
rv_t func_088E13B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E13B4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_088E121C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E13C8;
L_088E13C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E13D4 */
rv_t func_088E13D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E13D4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_088E121C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E13E8;
L_088E13E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088E13F4 */
void func_088E13F4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E13F4:;
    sp = sp - 16;
    s0 = D_08B30AD4 - (2772);
    a0 = LD32(s0+2772);
    s1 = s0 + 2772;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088E1484; }
    goto L_088E1414;
L_088E1414:;
    v1 = D_08AECC90 - (-13168);
    f0 = BITSF(LD32(v1-13168));
    ST32(s1+20, 0);
    v0 = D_08B30B28 - (2856);
    v0 = v0 + 2856;
    ST32(s1+16, FBITS(f0));
    a0 = (u32)-1;
    v1 = 1;
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    ST32(s1+12, 0);
    goto L_088E1440;
L_088E1440:;
    v1 = v1 - 1;
    ST32(v0, a0);
    ST32(v0+12, a0);
    ST32(v0+4, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 24;
    if (cnd_) { goto L_088E1440; }
    goto L_088E1458;
L_088E1458:;
    v0 = D_08B30AF8 - (2808);
    ST32(v0+2808, 0);
    v1 = D_08B30AFC - (2812);
    v0 = D_08B30B00 - (2816);
    ST32(v1+2812, 0);
    ST8(v0+2816, 0);
    sp = sp + 16;
    return;
L_088E1484:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E148C;
L_088E148C:;
    ST32(s0+2772, 0);
    goto L_088E1414;
}

/* 088E1494 */
void func_088E1494(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1494:;
    sp = sp - 16;
    a0 = 19;
    s0 = 1;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E14B4;
L_088E14B4:;
    v0 = D_08B30B28 - (2856);
    s1 = v0 + 2856;
    goto L_088E14BC;
L_088E14BC:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_088E2034(a0);
    goto L_088E14C8;
L_088E14C8:;
    cnd_ = (s32)s0 >= 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_088E14BC; }
    goto L_088E14D0;
L_088E14D0:;
    s0 = D_08B30AF0 - (2800);
    a0 = s0 + 2800;
    s2 = D_08B30AF4 - (2804);
    func_08AB8814(a0, 0, 0, 0);
    goto L_088E14E0;
L_088E14E0:;
    s1 = LD32(s2+2804);
    v0 = D_08B30AEC - (2796);
    ST32(s0+2800, 0);
    cnd_ = s1 != 0;
    ST32(v0+2796, 0);
    if (cnd_) { goto L_088E1514; }
    goto L_088E14F4;
L_088E14F4:;
    ST32(s2+2804, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E14FC;
L_088E14FC:;
    sp = sp + 16;
    return;
L_088E1514:;
    a0 = s1 + 0;
    func_0882F864(a0);
    goto L_088E151C;
L_088E151C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088E1524;
L_088E1524:;
    goto L_088E14F4;
}

/* 088E152C */
void func_088E152C(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E152C:;
    sp = sp - 16;
    func_088E1494();
    goto L_088E153C;
L_088E153C:;
    func_088E13F4(0, 0, 0);
    goto L_088E1544;
L_088E1544:;
    sp = sp + 16;
    return;
}

/* 088E1550 */
void func_088E1550(u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088E1550:;
    sp = sp - 64;
    v0 = D_08B30AD4 - (2772);
    v1 = LD32(v0+2772);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088E15A4; }
    goto L_088E159C;
L_088E159C:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_088E15A4;
L_088E15A4:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = D_08B3089C - (2204);
    if (cnd_) { goto L_088E15C4; }
    goto L_088E15B0;
L_088E15B0:;
    v0 = D_08B30AEC - (2796);
    v1 = LD32(v0+2796);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088E18C4; }
    goto L_088E15C0;
L_088E15C0:;
    v0 = D_08B3089C - (2204);
    goto L_088E15C4;
L_088E15C4:;
    v1 = LD_U8(v0+2204);
    a0 = D_08B28BCC - (-29748);
    v0 = LD_U8(a0-29748);
    v1 = 0 < v1;
    a2 = 1;
    if (v0 != 0) v1 = a2;
    cnd_ = v1 != 0;
    a3 = D_08B15A04 - (23044);
    if (cnd_) { goto L_088E1900; }
    goto L_088E15E4;
L_088E15E4:;
    v0 = LD32(a3+23044);
    cnd_ = v0 == 0;
    a1 = D_08B159FC - (23036);
    if (cnd_) { goto L_088E161C; }
    goto L_088E15F0;
L_088E15F0:;
    v0 = D_08B230A8 - (12456);
    ST8(v0+12456, a2);
    v0 = D_08B22E88 - (11912);
    v0 = v0 + 11912;
    a0 = 1;
    v1 = D_08B230B0 - (12464);
    ST32(a1+23036, v0);
    v0 = D_08B15A0C - (23052);
    ST8(v1+12464, a0);
    ST32(a3+23044, 0);
    ST8(v0+23052, a0);
    goto L_088E161C;
L_088E161C:;
    v0 = LD32(a1+23036);
    s7 = D_08B30B00 - (2816);
    v1 = LD_U8(s7+2816);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    s5 = D_08B30B04 - (2820);
    v0 = s5 + 2820;
    ST32(v0+8, FBITS(f0));
    ST32(s5+2820, FBITS(f1));
    cnd_ = v1 != 0;
    ST32(v0+4, FBITS(f2));
    if (cnd_) { goto L_088E176C; }
    goto L_088E164C;
L_088E164C:;
    v1 = D_08B30AF8 - (2808);
    v0 = LD32(v1+2808);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08B30AF0 - (2800);
    if (cnd_) { goto L_088E1988; }
    goto L_088E1660;
L_088E1660:;
    f2 = BITSF(LD32(s5+2820));
    a1 = LD32(v0+2800);
    v0 = D_08B30B28 - (2856);
    a0 = v0 + 2856;
    a3 = 0 + 0;
    t0 = 88;
    v1 = 1;
    v0 = LD32(a0);
    goto L_088E1680;
L_088E1680:;
    v1 = v1 - 1;
    cnd_ = (s32)v0 < 0;
    a0 = a0 + 24;
    if (cnd_) { goto L_088E1720; }
    goto L_088E168C;
L_088E168C:;
    { s64 p_ = (s64)(s32)v0 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = s5 + 2820;
    v0 = lo;
    v0 = a1 + v0;
    f0 = BITSF(LD32(v0+44));
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    v0 = v0 + 44;
    if (cnd_) { goto L_088E171C; }
    goto L_088E16B0;
L_088E16B0:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a3 = 1; goto L_088E1720; }
    goto L_088E16C4;
L_088E16C4:;
    f1 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a3 = 1; goto L_088E1720; }
    goto L_088E16DC;
L_088E16DC:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { a3 = 1; goto L_088E1720; }
    goto L_088E16F0;
L_088E16F0:;
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a3 = 1; goto L_088E1720; }
    goto L_088E1708;
L_088E1708:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088E1720; }
    goto L_088E171C;
L_088E171C:;
    a3 = 1;
    goto L_088E1720;
L_088E1720:;
    cnd_ = (s32)v1 >= 0;
    if (cnd_) { v0 = LD32(a0); goto L_088E1680; }
    goto L_088E1728;
L_088E1728:;
    s0 = D_08B30B58 - (2904);
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(s0+2904));
    f1 = BITSF(LD32(v0-31332));
    f1 = f0 - f1;
    cnd_ = a3 != 0;
    ST32(s0+2904, FBITS(f1));
    if (cnd_) { goto L_088E1758; }
    goto L_088E1744;
L_088E1744:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v1 = D_08AECC9C - (-13156);
    if (cnd_) { goto L_088E1770; }
    goto L_088E1758;
L_088E1758:;
    func_088E19A8(a3, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E1760;
L_088E1760:;
    v0 = D_08AECC94 - (-13164);
    f0 = BITSF(LD32(v0-13164));
    ST32(s0+2904, FBITS(f0));
    goto L_088E176C;
L_088E176C:;
    v1 = D_08AECC9C - (-13156);
    goto L_088E1770;
L_088E1770:;
    v0 = D_08AECC98 - (-13160);
    f22 = BITSF(LD32(v1-13156));
    f23 = BITSF(LD32(v0-13160));
    v1 = D_08B30B28 - (2856);
    f21 = BITSF(0);
    s1 = v1 + 2856;
    s6 = 88;
    s3 = s1 + 24;
    fp = (u32)-1;
    s2 = 1;
    goto L_088E1798;
L_088E1798:;
    s0 = LD32(s1);
    cnd_ = s0 == fp;
    v0 = D_08AECC98 - (-13160);
    if (cnd_) { goto L_088E186C; }
    goto L_088E17A4;
L_088E17A4:;
    v1 = (u32)-2;
    cnd_ = s0 == v1;
    f20 = BITSF(LD32(v0-13160));
    if (cnd_) { goto L_088E1950; }
    goto L_088E17B0;
L_088E17B0:;
    { s64 p_ = (s64)(s32)s0 * (s32)s6; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s4 = D_08B30AF0 - (2800);
    a0 = LD32(s4+2800);
    a1 = s5 + 2820;
    s0 = lo;
    a0 = a0 + s0;
    { rv_t r_ = func_088E20C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E17CC;
L_088E17CC:;
    v0 = LD32(s4+2800);
    a1 = D_08B30AD4 - (2772);
    a1 = a1 + 2772;
    s0 = s0 + v0;
    f1 = f0;
    a0 = LD32(s1+4);
    f0 = BITSF(LD32(s0+16));
    v1 = LD32(a1+12);
    cnd_ = a0 == v1;
    f20 = f0 * f1;
    if (cnd_) { goto L_088E1930; }
    goto L_088E17F4;
L_088E17F4:;
    v1 = LD32(s3);
    goto L_088E17F8;
L_088E17F8:;
    cnd_ = (s32)v1 < 0;
    if (cnd_) { f2 = BITSF(LD32(s1+20)); goto L_088E1810; }
    goto L_088E1800;
L_088E1800:;
    v0 = LD32(s3+4);
    cnd_ = v0 == 0;
    { s64 p_ = (s64)(s32)v1 * (s32)s6; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_088E1910; }
    goto L_088E180C;
L_088E180C:;
    f2 = BITSF(LD32(s1+20));
    goto L_088E1810;
L_088E1810:;
    fcc = FCMP(f21, f2, 12);
    cnd_ = !fcc;
    v0 = LD_U8(s7+2816);
    if (cnd_) { goto L_088E1840; }
    goto L_088E1820;
L_088E1820:;
    f0 = f22 - f2;
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(v0-31332));
    f0 = f0 + f0;
    f1 = f2 - f1;
    f20 = f20 * f0;
    ST32(s1+20, FBITS(f1));
    v0 = LD_U8(s7+2816);
    goto L_088E1840;
L_088E1840:;
    cnd_ = v0 == 0;
    v0 = D_08B30AFC - (2812);
    if (cnd_) { goto L_088E1854; }
    goto L_088E1848;
L_088E1848:;
    f0 = BITSF(LD32(v0+2812));
    f0 = f0 + f0;
    f20 = f20 * f0;
    goto L_088E1854;
L_088E1854:;
    a0 = LD32(s1);
    f0 = func_088E1F58(a0);
    goto L_088E185C;
L_088E185C:;
    f20 = f20 * f0;
    a0 = s1 + 0;
    f12 = f20;
    func_088E2080(a0, f12);
    goto L_088E186C;
L_088E186C:;
    s2 = s2 - 1;
    s3 = s3 - 24;
    cnd_ = (s32)s2 >= 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_088E1798; }
    goto L_088E187C;
L_088E187C:;
    v0 = LD_U8(s7+2816);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E18C4; }
    goto L_088E1888;
L_088E1888:;
    v1 = D_08B30AFC - (2812);
    f1 = BITSF(LD32(v1+2812));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088E18C8; }
    goto L_088E18A4;
L_088E18A4:;
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v0-31332));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(v1+2812, FBITS(f0));
    if (cnd_) { goto L_088E1900; }
    goto L_088E18C0;
L_088E18C0:;
    goto L_088E18C4;
L_088E18C4:;
    goto L_088E18C8;
L_088E18C8:;
    sp = sp + 64;
    return;
L_088E1900:;
    func_088E1DDC();
    goto L_088E1908;
L_088E1908:;
    goto L_088E18C4;
L_088E1910:;
    a0 = LD32(s4+2800);
    a1 = s5 + 2820;
    v0 = lo;
    a0 = a0 + v0;
    { rv_t r_ = func_088E20C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E1924;
L_088E1924:;
    f0 = f23 - f0;
    goto L_088E1928;
L_088E1928:;
    f20 = f20 * f0;
    goto L_088E180C;
L_088E1930:;
    v0 = LD32(s3);
    cnd_ = (s32)v0 >= 0;
    if (cnd_) { v1 = LD32(s3); goto L_088E17F8; }
    goto L_088E193C;
L_088E193C:;
    f0 = f23 - f1;
    f1 = BITSF(LD32(a1+16));
    f0 = f0 * f1;
    f20 = f20 + f0;
    goto L_088E17F4;
L_088E1950:;
    v0 = LD32(s3);
    cnd_ = (s32)v0 < 0;
    { s64 p_ = (s64)(s32)v0 * (s32)s6; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_088E1978; }
    goto L_088E195C;
L_088E195C:;
    v1 = D_08B30AF0 - (2800);
    a0 = LD32(v1+2800);
    a1 = s5 + 2820;
    v0 = lo;
    a0 = a0 + v0;
    { rv_t r_ = func_088E20C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E1974;
L_088E1974:;
    f20 = f20 - f0;
    goto L_088E1978;
L_088E1978:;
    a1 = D_08B30AD4 - (2772);
    a1 = a1 + 2772;
    f0 = BITSF(LD32(a1+16));
    goto L_088E1928;
L_088E1988:;
    v0 = func_088D7FD8();
    goto L_088E1990;
L_088E1990:;
    cnd_ = v0 == 0;
    v0 = D_08B30AF0 - (2800);
    if (cnd_) { goto L_088E1660; }
    goto L_088E1998;
L_088E1998:;
    func_088E1DDC();
    goto L_088E19A0;
L_088E19A0:;
    v1 = D_08AECC9C - (-13156);
    goto L_088E1770;
}

/* 088E19A8 */
void func_088E19A8(u32 a3, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088E19A8:;
    sp = sp - 64;
    a1 = D_08B30B10 - (2832);
    a0 = (u32)-1;
    v1 = a1 + 2832;
    v0 = 1;
    goto L_088E19DC;
L_088E19DC:;
    v0 = v0 - 1;
    ST32(v1, a0);
    cnd_ = (s32)v0 >= 0;
    v1 = v1 + 12;
    if (cnd_) { goto L_088E19DC; }
    goto L_088E19EC;
L_088E19EC:;
    a0 = D_08B30AD4 - (2772);
    v1 = LD32(a0+2772);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088E1A04; }
    goto L_088E19FC;
L_088E19FC:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_088E1A04;
L_088E1A04:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v0 = D_08B30AF4 - (2804);
    if (cnd_) { goto L_088E1A30; }
    goto L_088E1A10;
L_088E1A10:;
    v0 = a0 + 2772;
    a0 = LD32(v0+12);
    v1 = a1 + 2832;
    v0 = (u32)-2;
    ST32(a1+2832, v0);
    ST32(v1+8, a0);
    ST32(v1+4, 0);
    v0 = D_08B30AF4 - (2804);
    goto L_088E1A30;
L_088E1A30:;
    a0 = LD32(v0+2804);
    cnd_ = a0 != 0;
    v0 = D_08B30B04 - (2820);
    if (cnd_) { goto L_088E1B30; }
    goto L_088E1A3C;
L_088E1A3C:;
    v0 = D_08B30B28 - (2856);
    goto L_088E1A40;
L_088E1A40:;
    s1 = v0 + 2856;
    s2 = 0 + 0;
    s4 = (u32)-1;
    s3 = 0 + 0;
    s0 = s1 + 0;
    s6 = D_08B30B10 - (2832);
    s5 = s1 + 0;
    goto L_088E1A5C;
L_088E1A5C:;
    v0 = LD32(s0);
    cnd_ = v0 == s4;
    if (cnd_) { s2 = s2 + 1; goto L_088E1AB0; }
    goto L_088E1A68;
L_088E1A68:;
    a2 = 0 + 0;
    t0 = (u32)-1;
    a3 = s3 + s5;
    a0 = s6 + 2832;
    goto L_088E1A78;
L_088E1A78:;
    v0 = LD32(a0);
    a2 = a2 + 1;
    cnd_ = v0 == t0;
    a1 = (s32)a2 < 2;
    if (cnd_) { goto L_088E1A98; }
    goto L_088E1A88;
L_088E1A88:;
    v1 = LD32(a0+8);
    v0 = LD32(a3+4);
    cnd_ = v1 == v0;
    if (cnd_) { s2 = s2 + 1; goto L_088E1AB0; }
    goto L_088E1A98;
L_088E1A98:;
    cnd_ = a1 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_088E1A78; }
    goto L_088E1AA0;
L_088E1AA0:;
    v0 = 1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E1B20; }
    goto L_088E1AAC;
L_088E1AAC:;
    s2 = s2 + 1;
    goto L_088E1AB0;
L_088E1AB0:;
    v0 = (s32)s2 < 2;
    s0 = s0 + 24;
    s3 = s3 + 24;
    cnd_ = v0 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_088E1A5C; }
    goto L_088E1AC4;
L_088E1AC4:;
    v0 = D_08B30B10 - (2832);
    s1 = v0 + 2832;
    s2 = (u32)-1;
    s0 = 1;
    v0 = LD32(s1);
    goto L_088E1AD8;
L_088E1AD8:;
    s0 = s0 - 1;
    s1 = s1 + 12;
    cnd_ = v0 == s2;
    a0 = v0 + 0;
    if (cnd_) { goto L_088E1AF0; }
    goto L_088E1AE8;
L_088E1AE8:;
    v0 = func_088E1CC4(a0);
    goto L_088E1AF0;
L_088E1AF0:;
    cnd_ = (s32)s0 >= 0;
    if (cnd_) { v0 = LD32(s1); goto L_088E1AD8; }
    goto L_088E1AF8;
L_088E1AF8:;
    sp = sp + 64;
    return;
L_088E1B20:;
    a0 = s1 + 0;
    func_088E2034(a0);
    goto L_088E1B28;
L_088E1B28:;
    s2 = s2 + 1;
    goto L_088E1AB0;
L_088E1B30:;
    v1 = v0 + 2820;
    f1 = BITSF(LD32(v0+2820));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    a2 = ((u32)(uintptr_t)func_088E1B70) - (7024);
    a2 = a2 + 7024;
    a1 = sp + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+16, FBITS(f2));
    ST32(sp+4, FBITS(f1));
    ST32(sp+12, FBITS(f0));
    ST32(sp+20, FBITS(f2));
    func_0882F89C(a0, a1, a2, a3, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088E1B68;
L_088E1B68:;
    v0 = D_08B30B28 - (2856);
    goto L_088E1A40;
}

/* 088E1B70 */
rv_t func_088E1B70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1B70:;
    sp = sp - 16;
    v0 = D_08B30AEC - (2796);
    s0 = a0 & 0xffff;
    v1 = LD32(v0+2796);
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    v0 = 88;
    if (cnd_) { goto L_088E1BB0; }
    goto L_088E1B98;
L_088E1B98:;
    goto L_088E1B9C;
L_088E1B9C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088E1BB0:;
    { s64 p_ = (s64)(s32)s0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B30AF0 - (2800);
    a0 = LD32(v1+2800);
    a1 = D_08B30B04 - (2820);
    a1 = a1 + 2820;
    v0 = lo;
    s1 = a0 + v0;
    a0 = s1 + 0;
    { rv_t r_ = func_088E20C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088E1BD4;
L_088E1BD4:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088E1B9C; }
    goto L_088E1BEC;
L_088E1BEC:;
    v0 = D_08B30B10 - (2832);
    a0 = v0 + 2832;
    a1 = 0 + 0;
    a3 = (u32)-1;
    goto L_088E1BFC;
L_088E1BFC:;
    v0 = LD32(a0);
    a1 = a1 + 1;
    cnd_ = v0 == a3;
    a2 = (s32)a1 < 2;
    if (cnd_) { goto L_088E1C1C; }
    goto L_088E1C0C;
L_088E1C0C:;
    v1 = LD32(a0+8);
    v0 = LD32(s1+12);
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(a0+4)); goto L_088E1CA8; }
    goto L_088E1C1C;
L_088E1C1C:;
    cnd_ = a2 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_088E1BFC; }
    goto L_088E1C24;
L_088E1C24:;
    a3 = D_08B30B10 - (2832);
    a2 = a3 + 2832;
    v1 = 0 + 0;
    a0 = (u32)-1;
    t0 = a2 + 12;
    a1 = a2 + 0;
    goto L_088E1C3C;
L_088E1C3C:;
    v0 = LD32(a1);
    cnd_ = v0 == a0;
    if (cnd_) { goto L_088E1C74; }
    goto L_088E1C48;
L_088E1C48:;
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_088E1C74; }
    goto L_088E1C5C;
L_088E1C5C:;
    v1 = v1 + 1;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    a1 = a1 + 12;
    if (cnd_) { goto L_088E1C3C; }
    goto L_088E1C6C;
L_088E1C6C:;
    goto L_088E1B9C;
L_088E1C74:;
    cnd_ = v1 != 0;
    if (cnd_) { ST32(a1, s0); goto L_088E1C98; }
    goto L_088E1C7C;
L_088E1C7C:;
    v0 = LD32(a3+2832);
    v1 = LD32(a2+8);
    a0 = LD32(a2+4);
    ST32(a2+12, v0);
    ST32(t0+8, v1);
    ST32(t0+4, a0);
    ST32(a1, s0);
    goto L_088E1C98;
L_088E1C98:;
    v0 = LD32(s1+12);
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, v0);
    goto L_088E1B98;
L_088E1CA8:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088E1B9C; }
    goto L_088E1CB8;
L_088E1CB8:;
    ST32(a0+4, FBITS(f1));
    ST32(a0, s0);
    goto L_088E1B9C;
}

/* 088E1CC4 */
u32 func_088E1CC4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088E1CC4:;
    sp = sp - 32;
    s1 = a0 + 0;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { goto L_088E1DD0; }
    goto L_088E1CE4;
L_088E1CE4:;
    v0 = 88;
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B30AF0 - (2800);
    a0 = LD32(v1+2800);
    v0 = lo;
    v0 = v0 + a0;
    s2 = LD32(v0+12);
    goto L_088E1D00;
L_088E1D00:;
    s3 = D_08B30B28 - (2856);
    s0 = (u32)-1;
    a0 = 0 + 0;
    a2 = s3 + 2856;
    goto L_088E1D10;
L_088E1D10:;
    v0 = ~(0 | s0);
    a1 = v0 < 0x1u;
    v0 = LD32(a2+4);
    cnd_ = v0 == s2;
    if (cnd_) { ST32(a2, s1); goto L_088E1DA8; }
    goto L_088E1D24;
L_088E1D24:;
    v0 = LD32(a2);
    v0 = ~(0 | v0);
    v0 = v0 < 0x1u;
    v0 = v0 & a1;
    if (v0 != 0) s0 = a0;
    a0 = a0 + 1;
    v0 = (s32)a0 < 2;
    cnd_ = v0 != 0;
    a2 = a2 + 24;
    if (cnd_) { goto L_088E1D10; }
    goto L_088E1D48;
L_088E1D48:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_088E1DAC; }
    goto L_088E1D54;
L_088E1D54:;
    cnd_ = (s32)s1 < 0;
    v0 = 88;
    if (cnd_) { goto L_088E1DC4; }
    goto L_088E1D5C;
L_088E1D5C:;
    { s64 p_ = (s64)(s32)s1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = D_08B30AF0 - (2800);
    v1 = LD32(a0+2800);
    v0 = lo;
    v1 = v1 + v0;
    a1 = LD32(v1);
    goto L_088E1D74;
L_088E1D74:;
    cnd_ = a1 == 0;
    a0 = s0 << 1;
    if (cnd_) { goto L_088E1D8C; }
    goto L_088E1D7C;
L_088E1D7C:;
    a0 = a1 + 0;
    v0 = func_0890F218(a0);
    goto L_088E1D84;
L_088E1D84:;
    a1 = v0 + 0;
    a0 = s0 << 1;
    goto L_088E1D8C;
L_088E1D8C:;
    a0 = a0 + s0;
    a0 = a0 << 3;
    v0 = s3 + 2856;
    a0 = a0 + v0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    v0 = func_088E1FB0(a0, a1, a2, a3);
    goto L_088E1DA8;
L_088E1DA8:;
    goto L_088E1DAC;
L_088E1DAC:;
    sp = sp + 32;
    return v0;
L_088E1DC4:;
    v0 = D_08B30AD4 - (2772);
    a1 = LD32(v0+2772);
    goto L_088E1D74;
L_088E1DD0:;
    v0 = D_08B30AE0 - (2784);
    s2 = LD32(v0+2784);
    goto L_088E1D00;
}

/* 088E1DDC */
void func_088E1DDC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1DDC:;
    sp = sp - 16;
    v0 = D_08B30B28 - (2856);
    s1 = v0 + 2856;
    s0 = 1;
    goto L_088E1DF8;
L_088E1DF8:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_088E2034(a0);
    goto L_088E1E04;
L_088E1E04:;
    cnd_ = (s32)s0 >= 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_088E1DF8; }
    goto L_088E1E0C;
L_088E1E0C:;
    v0 = D_08B30B00 - (2816);
    v1 = D_08B30AFC - (2812);
    ST8(v0+2816, 0);
    ST32(v1+2812, 0);
    sp = sp + 16;
    return;
}

/* 088E1E30 */
void func_088E1E30(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088E1E30:;
    sp = sp - 16;
    s1 = D_08B30B28 - (2856);
    v0 = s1 + 2856;
    a0 = a0 & 0xff;
    a1 = v0 + 12;
    a2 = (u32)-1;
    s0 = 0 + 0;
    v1 = 1;
    goto L_088E1E5C;
L_088E1E5C:;
    v0 = LD32(a1);
    v1 = v1 - 1;
    a1 = a1 + 24;
    v0 = v0 ^ a2;
    v0 = 0 < v0;
    cnd_ = (s32)v1 >= 0;
    s0 = s0 + v0;
    if (cnd_) { goto L_088E1E5C; }
    goto L_088E1E78;
L_088E1E78:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088E1EE8; }
    goto L_088E1E80;
L_088E1E80:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088E1E9C; }
    goto L_088E1E88;
L_088E1E88:;
    v0 = func_088D7FD8();
    goto L_088E1E90;
L_088E1E90:;
    v1 = 2;
    cnd_ = v0 == v1;
    v1 = D_08B30AF8 - (2808);
    if (cnd_) { goto L_088E1EAC; }
    goto L_088E1E9C;
L_088E1E9C:;
    v0 = func_088D7FD8();
    goto L_088E1EA4;
L_088E1EA4:;
    cnd_ = v0 == 0;
    v1 = D_08B30AF8 - (2808);
    if (cnd_) { goto L_088E1EF8; }
    goto L_088E1EAC;
L_088E1EAC:;
    v0 = LD32(v1+2808);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088E1EE8; }
    goto L_088E1EBC;
L_088E1EBC:;
    a0 = D_08B30B00 - (2816);
    v0 = LD_U8(a0+2816);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088E1EEC; }
    goto L_088E1ECC;
L_088E1ECC:;
    v0 = D_08AECCA0 - (-13152);
    f0 = BITSF(LD32(v0-13152));
    v1 = D_08B30AFC - (2812);
    v0 = 1;
    ST32(v1+2812, FBITS(f0));
    ST8(a0+2816, v0);
    goto L_088E1EE8;
L_088E1EE8:;
    goto L_088E1EEC;
L_088E1EEC:;
    sp = sp + 16;
    return;
L_088E1EF8:;
    v0 = func_0890F1D0();
    goto L_088E1F00;
L_088E1F00:;
    v1 = D_08B30A34 - (2612);
    a0 = LD32(v1+2612);
    a1 = LD32(a0+12);
    cnd_ = v0 != a1;
    if (cnd_) { v1 = D_08B30AF8 - (2808); goto L_088E1EAC; }
    goto L_088E1F14;
L_088E1F14:;
    v0 = 1;
    cnd_ = s0 == v0;
    a0 = s1 + 2856;
    if (cnd_) { goto L_088E1F48; }
    goto L_088E1F20;
L_088E1F20:;
    f1 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = a0 + 24; goto L_088E1F38; }
    goto L_088E1F38;
L_088E1F38:;
    func_088E2034(a0);
    goto L_088E1F40;
L_088E1F40:;
    v1 = D_08B30AF8 - (2808);
    goto L_088E1EAC;
L_088E1F48:;
    func_088E1DDC();
    goto L_088E1F50;
L_088E1F50:;
    goto L_088E1EE8;
}
