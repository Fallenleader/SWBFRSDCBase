#include "game.h"

/* 08A814A4 */
u32 func_08A814A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A814A4:;
    cnd_ = (s32)a1 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A814CC; }
    goto L_08A814AC;
L_08A814AC:;
    v0 = a0 + a3;
    goto L_08A814B0;
L_08A814B0:;
    v1 = (u32)(s32)LD_S8(v0);
    v0 = a3 + 1;
    a3 = v0 + 0;
    cnd_ = v1 == 0;
    a2 = (s32)v0 < (s32)a1;
    if (cnd_) { goto L_08A814D0; }
    goto L_08A814C4;
L_08A814C4:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = a0 + a3; goto L_08A814B0; }
    goto L_08A814CC;
L_08A814CC:;
    v0 = (u32)-1;
    goto L_08A814D0;
L_08A814D0:;
    return v0;
}

/* 08A814D8 */
void func_08A814D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A814D8:;
    sp = sp - 32;
    s6 = t0 + 0;
    s5 = t3 + 0;
    s4 = t2 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = t1 != 0;
    if (cnd_) { goto L_08A81558; }
    goto L_08A8151C;
L_08A8151C:;
    v0 = D_08C320DC - (8412);
    a1 = LD32(v0+8412);
    v1 = 1;
    cnd_ = a1 == v1;
    v0 = 1;
    if (cnd_) { goto L_08A8155C; }
    goto L_08A81530;
L_08A81530:;
    goto L_08A81534;
L_08A81534:;
    sp = sp + 32;
    return;
L_08A81558:;
    v0 = 1;
    goto L_08A8155C;
L_08A8155C:;
    ST32(s0, v0);
    func_08A81370(a0, t1, t2, t3);
    goto L_08A81564;
L_08A81564:;
    a0 = s0 + 0;
    v0 = func_08A7FA00(0, 0);
    goto L_08A8156C;
L_08A8156C:;
    a0 = s0 + 12;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81578;
L_08A81578:;
    a0 = s0 + 48;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81584;
L_08A81584:;
    a0 = s0 + 84;
    a1 = s3 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81590;
L_08A81590:;
    v1 = D_08AE8EBC - (-28996);
    v1 = v1 - 28996;
    v0 = (u32)-1;
    ST32(s0+1176, v1);
    a1 = v1 + 0;
    a0 = s0 + 0;
    ST32(s0+1156, v0);
    ST32(s0+1200, v0);
    ST32(s0+1160, s4);
    ST32(s0+1172, s5);
    ST32(s0+1208, s6);
    ST32(s0+1164, 0);
    ST32(s0+1184, 0);
    ST32(s0+124, 0);
    ST32(s0+128, 0);
    ST32(s0+8, 0);
    ST32(s0+1152, 0);
    ST32(s0+1188, 0);
    func_08A8293C(a0, a1);
    goto L_08A815DC;
L_08A815DC:;
    v0 = 128;
    ST16(s0+1484, v0);
    ST32(s0+1488, 0);
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A815EC;
L_08A815EC:;
    a0 = v0 + 0;
    func_08A88DE4(a0);
    goto L_08A815F4;
L_08A815F4:;
    func_08A6B610();
    goto L_08A815FC;
L_08A815FC:;
    goto L_08A81534;
}

/* 08A81604 */
float func_08A81604(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A81604:;
    sp = sp - 16;
    s2 = D_08C32C84 - (11396);
    s1 = D_08B1DC44 - (-9148);
    v0 = LD32(a0+128);
    cnd_ = (s32)v0 <= 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A81644; }
    goto L_08A8162C;
L_08A8162C:;
    a0 = LD32(s1-9148);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81634;
L_08A81634:;
    v1 = LD32(s0+128);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A8167C; }
    goto L_08A81644;
L_08A81644:;
    a2 = LD32(s2+11396);
    goto L_08A81648;
L_08A81648:;
    v0 = LD32(s0+1160);
    a3 = LD32(s0+1172);
    a0 = s0 + 0;
    t_ = v0;
    a1 = 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8165C;
L_08A8165C:;
    a0 = s0 + 0;
    f0 = func_08A820AC(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A81664;
L_08A81664:;
    sp = sp + 16;
    return f0;
L_08A8167C:;
    a0 = LD32(s1-9148);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81684;
L_08A81684:;
    a1 = LD32(s1-9148);
    a0 = LD32(s0+124);
    a2 = v0 + 0;
    { u64 r_ = func_08A89BD8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81694;
L_08A81694:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s2+11396); goto L_08A81648; }
    goto L_08A8169C;
L_08A8169C:;
    a0 = LD32(s1-9148);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A816A4;
L_08A816A4:;
    a1 = LD32(s0+124);
    a0 = s0 + 0;
    a1 = a1 + v0;
    func_08A8293C(a0, a1);
    goto L_08A816B4;
L_08A816B4:;
    a2 = LD32(s2+11396);
    a3 = LD32(s0+1172);
    v0 = LD32(s0+1160);
    a0 = s0 + 0;
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A816CC;
L_08A816CC:;
    a2 = LD32(s2+11396);
    goto L_08A81648;
}

/* 08A816D4 */
u32 func_08A816D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A816D4:;
    a3 = a0 + 0;
    a0 = (u32)(s32)LD_S8(a0);
    t2 = a1 + 0;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A8172C; }
    goto L_08A816E8;
L_08A816E8:;
    t0 = 0x9ccf0000u;
    v0 = D_08AE9044 - (-28604);
    a2 = a0 + 0;
    t1 = v0 - 28604;
    t0 = t0 | 0x9319;
    goto L_08A816FC;
L_08A816FC:;
    v0 = a2 + t1;
    { s64 p_ = (s64)(s32)a1 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = LD_U8(v0);
    a3 = a3 + 1;
    a0 = (u32)(s32)LD_S8(a3);
    v1 = v1 & 0x1;
    v0 = a2 + 32;
    if (v1 != 0) a2 = v0;
    a1 = lo;
    a1 = a1 + a2;
    cnd_ = a0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A816FC; }
    goto L_08A8172C;
L_08A8172C:;
    { u32 x_ = a1, y_ = t2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = hi;
    return v0;
}

/* 08A81738 */
u32 func_08A81738(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08A81738:;
    sp = sp - 160;
    s0 = a0 + 12;
    a1 = 20;
    s1 = a0 + 0;
    a0 = s0 + 0;
    v0 = func_08A816D4(a0, a1);
    goto L_08A81760;
L_08A81760:;
    a3 = v0 + 0;
    v0 = D_08C32C88 - (11400);
    a1 = LD32(v0+11400);
    cnd_ = a1 == 0;
    s2 = sp + 16;
    if (cnd_) { goto L_08A81850; }
    goto L_08A81774;
L_08A81774:;
    a0 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8177C;
L_08A8177C:;
    v1 = 28910;
    goto L_08A81780;
L_08A81780:;
    v1 = WSBH(v1);
    v0 = 2;
    a0 = s2 + 0;
    ST16(sp+2, v1);
    ST8(sp+1, v0);
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81798;
L_08A81798:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A81820; }
    goto L_08A817A4;
L_08A817A4:;
    s0 = LD32(s1+1200);
    goto L_08A817A8;
L_08A817A8:;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a0 = 2;
    if (cnd_) { goto L_08A81800; }
    goto L_08A817B4;
L_08A817B4:;
    a0 = LD32(s1+1200);
    a1 = sp + 0;
    a2 = 16;
    v0 = sceNetInetConnect(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A817C4;
L_08A817C4:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A817E8; }
    goto L_08A817CC;
L_08A817CC:;
    goto L_08A817D0;
L_08A817D0:;
    v0 = v1 + 0;
    sp = sp + 160;
    return v0;
L_08A817E8:;
    a0 = LD32(s1+1200);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A817F0;
L_08A817F0:;
    v1 = (u32)-1;
    ST32(s1+1200, v1);
    v1 = 3;
    goto L_08A817CC;
L_08A81800:;
    a1 = 1;
    a2 = 6;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8180C;
L_08A8180C:;
    ST32(s1+1200, v0);
    cnd_ = v0 != s0;
    v1 = 1;
    if (cnd_) { goto L_08A817B4; }
    goto L_08A81818;
L_08A81818:;
    goto L_08A817D0;
L_08A81820:;
    a0 = s2 + 0;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81828;
L_08A81828:;
    cnd_ = v0 == 0;
    v1 = 2;
    if (cnd_) { goto L_08A817CC; }
    goto L_08A81830;
L_08A81830:;
    v0 = LD32(v0+12);
    v1 = LD32(v0);
    v0 = LDU32(v1);
    STU32(sp+4, v0);
    s0 = LD32(s1+1200);
    goto L_08A817A8;
L_08A81850:;
    a1 = D_08AE8ED0 - (-28976);
    a1 = a1 - 28976;
    a2 = s0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A81864;
L_08A81864:;
    v1 = 28910;
    goto L_08A81780;
}

/* 08A8186C */
void func_08A8186C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A8186C:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A818E4; }
    goto L_08A81894;
L_08A81894:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8189C;
L_08A8189C:;
    a0 = LD32(s2);
    s0 = v0 + 1;
    a1 = s1 + 0;
    a2 = s0 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A818B0;
L_08A818B0:;
    v0 = LD32(s3);
    v1 = LD32(s2);
    v0 = v0 + s0;
    v1 = v1 + s0;
    ST32(s3, v0);
    ST32(s2, v1);
    sp = sp + 32;
    return;
L_08A818E4:;
    v0 = D_08AE8EBC - (-28996);
    s1 = v0 - 28996;
    goto L_08A81894;
}

/* 08A818F0 */
void func_08A818F0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
L_08A818F0:;
    v1 = LD32(a0);
    ST8(v1, a1);
    v0 = LD32(a2);
    v1 = LD32(a0);
    v0 = v0 + 1;
    v1 = v1 + 1;
    ST32(a2, v0);
    ST32(a0, v1);
    return;
}

/* 08A81914 */
void func_08A81914(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A81914:;
    sp = sp - 16;
    v0 = LD32(a0);
    ST32(sp, a1);
    v1 = LDU32(sp);
    STU32(v0, v1);
    v1 = LD32(a2);
    v0 = LD32(a0);
    v1 = v1 + 4;
    v0 = v0 + 4;
    ST32(a2, v1);
    ST32(a0, v0);
    sp = sp + 16;
    return;
}

/* 08A81950 */
void func_08A81950(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A81950:;
    v0 = WSBW(a1);
    a3 = v0 & 0xff00;
    a3 = a3 << 8;
    a1 = v0 << 24;
    v1 = v0 >> 8;
    a1 = a1 | a3;
    v1 = v1 & 0xff00;
    a1 = a1 | v1;
    v0 = v0 >> 24;
    sp = sp - 16;
    a1 = a1 | v0;
    func_08A81914(a0, a1, a2);
    goto L_08A81984;
L_08A81984:;
    sp = sp + 16;
    return;
}

/* 08A81990 */
void func_08A81990(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A81990:;
    sp = sp - 16;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    func_08A87AE0(a0, a1, a2);
    goto L_08A819B8;
L_08A819B8:;
    v0 = LD32(s2);
    v1 = LD32(s0);
    v0 = v0 + s1;
    v1 = v1 + s1;
    ST32(s2, v0);
    ST32(s0, v1);
    sp = sp + 16;
    return;
}

/* 08A819E8 */
void func_08A819E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A819E8:;
    sp = sp - 32;
    s4 = 0x2c0b0000u;
    s4 = s4 | 0x2c1;
    s3 = a0 + 0;
    s2 = 0 + 0;
    s1 = 1;
    s0 = s3 + 113;
    v0 = func_08A88E1C();
    goto L_08A81A20;
L_08A81A20:;
    a1 = 0x2c0b0000u;
    a1 = a1 | 0x2c1;
    { s64 p_ = (s64)(s32)v0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = (u32)((s32)v0 >> 31);
    a1 = hi;
    a1 = (u32)((s32)a1 >> 4);
    a1 = a1 - v1;
    a0 = a1 << 1;
    a0 = a0 + a1;
    v1 = a0 << 5;
    v1 = v1 - a0;
    v0 = v0 - v1;
    v0 = v0 + 33;
    ST8(s3+116, v0);
    goto L_08A81A58;
L_08A81A58:;
    a0 = (u32)(s32)LD_S8(s0+3);
    v1 = (u32)(s32)LD_S8(s3+116);
    v0 = s1 ^ a0;
    v0 = v0 & 0x1;
    a1 = v1 + 0;
    v0 = v0 ^ s2;
    v1 = v1 & 0x1;
    v0 = v0 ^ v1;
    v1 = (s32)a1 < 79;
    a0 = (s32)a0 < (s32)a1;
    v0 = v0 ^ v1;
    s2 = v0 ^ a0;
    v0 = func_08A88E1C();
    goto L_08A81A8C;
L_08A81A8C:;
    { s64 p_ = (s64)(s32)v0 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = (u32)((s32)v0 >> 31);
    a1 = hi;
    a1 = (u32)((s32)a1 >> 4);
    a1 = a1 - v1;
    a0 = a1 << 1;
    a0 = a0 + a1;
    v1 = a0 << 5;
    v1 = v1 - a0;
    v0 = v0 - v1;
    v0 = v0 + 33;
    a0 = v0 & 0x1;
    cnd_ = s2 == 0;
    ST8(s0+4, v0);
    if (cnd_) { goto L_08A81B08; }
    goto L_08A81AC4;
L_08A81AC4:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD_U8(s0+4); goto L_08A81AFC; }
    goto L_08A81ACC;
L_08A81ACC:;
    s1 = s1 + 1;
    goto L_08A81AD0;
L_08A81AD0:;
    v0 = (s32)s1 < 8;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A81A58; }
    goto L_08A81ADC;
L_08A81ADC:;
    sp = sp + 32;
    return;
L_08A81AFC:;
    v0 = v0 + 1;
    ST8(s0+4, v0);
    goto L_08A81ACC;
L_08A81B08:;
    cnd_ = a0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08A81AD0; }
    goto L_08A81B10;
L_08A81B10:;
    v0 = LD_U8(s0+4);
    goto L_08A81AFC;
}

/* 08A81B18 */
u32 func_08A81B18(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A81B18:;
    sp = sp - 32;
    s5 = a1 + 0;
    s4 = a2 + 0;
    s2 = 1;
    s1 = a0 + 0;
    a0 = LD32(s1+1200);
    goto L_08A81B4C;
L_08A81B4C:;
    a1 = s5 + 0;
    a2 = s4 + 0;
    a3 = 0 + 0;
    s2 = s2 - 1;
    v0 = sceNetInetSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81B60;
L_08A81B60:;
    v1 = ~(0 | s2);
    s3 = v0 + 0;
    v1 = v1 >> 31;
    v0 = (s32)v0 < 1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A81BAC; }
    goto L_08A81B7C;
L_08A81B7C:;
    f0 = func_08A820AC(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A81B84;
L_08A81B84:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 2;
    t0 = 0 + 0;
    { rv_t r_ = func_08A81BEC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A81B9C;
L_08A81B9C:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A81BDC; }
    goto L_08A81BA4;
L_08A81BA4:;
    cnd_ = (s32)s2 >= 0;
    if (cnd_) { a0 = LD32(s1+1200); goto L_08A81B4C; }
    goto L_08A81BAC;
L_08A81BAC:;
    cnd_ = (s32)s3 <= 0;
    v0 = 3;
    if (cnd_) { goto L_08A81BB8; }
    goto L_08A81BB4;
L_08A81BB4:;
    v0 = 0 + 0;
    goto L_08A81BB8;
L_08A81BB8:;
    sp = sp + 32;
    return v0;
L_08A81BDC:;
    a0 = s1 + 0;
    f0 = func_08A81604(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A81BE4;
L_08A81BE4:;
    v0 = s0 + 0;
    goto L_08A81BB8;
}

/* 08A81BEC */
rv_t func_08A81BEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[832] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 832);
L_08A81BEC:;
    sp = sp - 832;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A81E08; }
    goto L_08A81C20;
L_08A81C20:;
    cnd_ = s1 == 0;
    v0 = D_08AE8EBC - (-28996);
    if (cnd_) { goto L_08A81E00; }
    goto L_08A81C28;
L_08A81C28:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81C30;
L_08A81C30:;
    v0 = v0 < 0x101u;
    cnd_ = v0 == 0;
    v1 = 6;
    if (cnd_) { goto L_08A81C60; }
    goto L_08A81C3C;
L_08A81C3C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81C44;
L_08A81C44:;
    v0 = v0 < 0x101u;
    cnd_ = v0 == 0;
    v1 = 6;
    if (cnd_) { goto L_08A81C60; }
    goto L_08A81C50;
L_08A81C50:;
    a0 = s0 + 0;
    v0 = func_08A81738(a0);
    goto L_08A81C58;
L_08A81C58:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A81C84; }
    goto L_08A81C60;
L_08A81C60:;
    v0 = v1 + 0;
    sp = sp + 832;
    return (rv_t){ v0, v1, f0 };
L_08A81C84:;
    ST32(s0+1476, s3);
    a0 = s0 + 0;
    s3 = WSBW(s3);
    func_08A819E8(a0);
    goto L_08A81C94;
L_08A81C94:;
    v0 = 2;
    v1 = sp + 18;
    a0 = sp + 784;
    a1 = 0 + 0;
    a2 = sp + 788;
    ST32(sp+788, v0);
    ST32(sp+784, v1);
    func_08A818F0(a0, a1, a2);
    goto L_08A81CB4;
L_08A81CB4:;
    a0 = sp + 784;
    a1 = 1;
    a2 = sp + 788;
    func_08A818F0(a0, a1, a2);
    goto L_08A81CC4;
L_08A81CC4:;
    a0 = sp + 784;
    a1 = 3;
    a2 = sp + 788;
    func_08A818F0(a0, a1, a2);
    goto L_08A81CD4;
L_08A81CD4:;
    a1 = LD32(s0+1208);
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A81950(a0, a1, a2);
    goto L_08A81CE4;
L_08A81CE4:;
    a1 = s0 + 12;
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A8186C(a0, a1, a2);
    goto L_08A81CF4;
L_08A81CF4:;
    a1 = s0 + 48;
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A8186C(a0, a1, a2);
    goto L_08A81D04;
L_08A81D04:;
    a3 = sp + 788;
    a1 = s0 + 116;
    a0 = sp + 784;
    a2 = 8;
    func_08A81990(a0, a1, a2, a3);
    goto L_08A81D18;
L_08A81D18:;
    a1 = s1 + 0;
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A8186C(a0, a1, a2);
    goto L_08A81D28;
L_08A81D28:;
    a1 = s2 + 0;
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A8186C(a0, a1, a2);
    goto L_08A81D38;
L_08A81D38:;
    a1 = s3 + 0;
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A81914(a0, a1, a2);
    goto L_08A81D48;
L_08A81D48:;
    v1 = LD32(s0+1476);
    v0 = v1 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+1188); goto L_08A81DEC; }
    goto L_08A81D58;
L_08A81D58:;
    v0 = v1 & 0x80;
    cnd_ = v0 != 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_08A81DD8; }
    goto L_08A81D64;
L_08A81D64:;
    v0 = LD_U16(sp+788);
    goto L_08A81D68;
L_08A81D68:;
    a0 = LD32(s0+1200);
    a2 = LD32(sp+788);
    v0 = WSBH(v0);
    v0 = v0 & 0xffff;
    a1 = sp + 16;
    a3 = 0 + 0;
    ST16(sp+16, v0);
    ST16(sp, v0);
    v0 = sceNetInetSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81D8C;
L_08A81D8C:;
    cnd_ = (s32)v0 <= 0;
    v0 = 3;
    if (cnd_) { goto L_08A81DC8; }
    goto L_08A81D94;
L_08A81D94:;
    v1 = LD32(s0+124);
    ST32(s0, v0);
    cnd_ = v1 == 0;
    ST32(s0+1480, 0);
    if (cnd_) { goto L_08A81DAC; }
    goto L_08A81DA4;
L_08A81DA4:;
    v1 = 0 + 0;
    goto L_08A81C60;
L_08A81DAC:;
    a0 = 4096;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A81DB4;
L_08A81DB4:;
    ST32(s0+124, v0);
    cnd_ = v0 == 0;
    v1 = 5;
    if (cnd_) { goto L_08A81C60; }
    goto L_08A81DC0;
L_08A81DC0:;
    ST32(s0+128, 0);
    goto L_08A81DA4;
L_08A81DC8:;
    a0 = s0 + 0;
    f0 = func_08A820AC(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A81DD0;
L_08A81DD0:;
    v1 = 3;
    goto L_08A81C60;
L_08A81DD8:;
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A81950(a0, a1, a2);
    goto L_08A81DE4;
L_08A81DE4:;
    v0 = LD_U16(sp+788);
    goto L_08A81D68;
L_08A81DEC:;
    a0 = sp + 784;
    a2 = sp + 788;
    func_08A81914(a0, a1, a2);
    goto L_08A81DF8;
L_08A81DF8:;
    v1 = LD32(s0+1476);
    goto L_08A81D58;
L_08A81E00:;
    s1 = v0 - 28996;
    goto L_08A81C28;
L_08A81E08:;
    v0 = D_08AE8EBC - (-28996);
    s2 = v0 - 28996;
    goto L_08A81C20;
}

/* 08A81E14 */
u64 func_08A81E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A81E14:;
    sp = sp - 96;
    v0 = D_08AE8EE4 - (-28956);
    v0 = v0 - 28956;
    s4 = a3 + 0;
    s3 = a1 & 0xffff;
    s2 = a2 & 0xffff;
    s0 = 1;
    v1 = LD32(a0);
    t0 = LDU32(v0);
    t1 = LDU32(v0+4);
    STU32(sp+16, t0);
    STU32(sp+20, t1);
    cnd_ = v1 == s0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A81E80; }
    goto L_08A81E78;
L_08A81E78:;
    f0 = func_08A820AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81E80;
L_08A81E80:;
    a0 = 2;
    a1 = 2;
    a2 = 17;
    v0 = sceNetInetSocket(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81E90;
L_08A81E90:;
    a0 = v0 + 0;
    ST32(s1+1200, v0);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_08A81EC4; }
    goto L_08A81EA4;
L_08A81EA4:;
    a1 = 0xffff;
    a2 = 32;
    a3 = sp + 48;
    t0 = 4;
    ST32(sp+48, s0);
    v0 = sceNetInetSetsockopt(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81EBC;
L_08A81EBC:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A81EEC; }
    goto L_08A81EC4;
L_08A81EC4:;
    v0 = v1 + 0;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_08A81EEC:;
    s0 = 2;
    ST8(sp+1, s0);
    v0 = func_08A6B4AC();
    goto L_08A81EF8;
L_08A81EF8:;
    a0 = LD32(s1+1488);
    cnd_ = a0 != 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_08A81FA0; }
    goto L_08A81F04;
L_08A81F04:;
    v0 = s2 - s3;
    goto L_08A81F08;
L_08A81F08:;
    v0 = (s32)v0 < 501;
    cnd_ = v0 != 0;
    v0 = s2 < s3;
    if (cnd_) { goto L_08A81F20; }
    goto L_08A81F14;
L_08A81F14:;
    v0 = s3 + 500;
    s2 = v0 & 0xffff;
    v0 = s2 < s3;
    goto L_08A81F20;
L_08A81F20:;
    cnd_ = v0 != 0;
    s0 = s3 + 0;
    if (cnd_) { goto L_08A81F84; }
    goto L_08A81F28;
L_08A81F28:;
    s3 = 1;
    s5 = D_08AE8EEC - (-28948);
    v0 = WSBH(s0);
    goto L_08A81F34;
L_08A81F34:;
    a1 = sp + 16;
    a2 = 8;
    a3 = 0 + 0;
    t0 = sp + 0;
    t1 = 16;
    cnd_ = s4 == s3;
    ST16(sp+2, v0);
    if (cnd_) { goto L_08A81F98; }
    goto L_08A81F50;
L_08A81F50:;
    a0 = LD32(s1+1200);
    a1 = s5 - 28948;
    a2 = 10;
    a3 = 0 + 0;
    t0 = sp + 0;
    t1 = 16;
    goto L_08A81F68;
L_08A81F68:;
    v0 = sceNetInetSendto(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81F70;
L_08A81F70:;
    v0 = s0 + 1;
    s0 = v0 & 0xffff;
    v1 = s2 < s0;
    cnd_ = v1 == 0;
    v0 = WSBH(s0);
    if (cnd_) { goto L_08A81F34; }
    goto L_08A81F84;
L_08A81F84:;
    ST32(s1, 0);
    v0 = func_08A6B620(0, 0, 0, 0, 0, 0, 0);
    goto L_08A81F8C;
L_08A81F8C:;
    ST32(s1+1204, v0);
    v1 = 0 + 0;
    goto L_08A81EC4;
L_08A81F98:;
    a0 = LD32(s1+1200);
    goto L_08A81F68;
L_08A81FA0:;
    ST8(sp+33, s0);
    v0 = sceNetInetInetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81FA8;
L_08A81FA8:;
    a1 = sp + 32;
    a0 = LD32(s1+1200);
    a2 = 16;
    ST32(sp+36, v0);
    ST16(sp+34, 0);
    v0 = sceNetInetBind(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A81FC0;
L_08A81FC0:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A81EC4; }
    goto L_08A81FC8;
L_08A81FC8:;
    v0 = s2 - s3;
    goto L_08A81F08;
}

/* 08A81FD0 */
float func_08A81FD0(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A81FD0:;
    sp = sp - 16;
    s2 = 0 + 0;
    v0 = LD32(a0+1152);
    cnd_ = (s32)v0 <= 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A82018; }
    goto L_08A81FF4;
L_08A81FF4:;
    s0 = a0 + 132;
    goto L_08A81FF8;
L_08A81FF8:;
    a1 = LD32(s0);
    a0 = s1 + 0;
    s2 = s2 + 1;
    { rv_t r_ = func_08A81438(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82008;
L_08A82008:;
    v0 = LD32(s1+1152);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_08A81FF8; }
    goto L_08A82018;
L_08A82018:;
    ST32(s1+1152, 0);
    sp = sp + 16;
    return f0;
}

/* 08A82034 */
void func_08A82034(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A82034:;
    sp = sp - 16;
    s1 = 0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A82068; }
    goto L_08A82054;
L_08A82054:;
    sp = sp + 16;
    return;
L_08A82068:;
    a0 = LD32(s0+8);
    v0 = func_08A83A88(a0);
    goto L_08A82070;
L_08A82070:;
    v0 = (s32)s1 < (s32)v0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A8209C; }
    goto L_08A82080;
L_08A82080:;
    a0 = LD32(s0+8);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A82088;
L_08A82088:;
    a1 = LD32(v0);
    a0 = s0 + 0;
    { rv_t r_ = func_08A81438(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82094;
L_08A82094:;
    goto L_08A82068;
L_08A8209C:;
    a0 = LD32(s0+8);
    { u64 r_ = func_08A83A24(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A820A4;
L_08A820A4:;
    ST32(s0+8, 0);
    goto L_08A82054;
}

/* 08A820AC */
float func_08A820AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A820AC:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(a0+124);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A82120; }
    goto L_08A820D0;
L_08A820D0:;
    v0 = LD32(s0+1200);
    goto L_08A820D4;
L_08A820D4:;
    ST32(s0+124, 0);
    a0 = v0 + 0;
    cnd_ = v0 == s1;
    ST32(s0+128, 0);
    if (cnd_) { goto L_08A820EC; }
    goto L_08A820E4;
L_08A820E4:;
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A820EC;
L_08A820EC:;
    v0 = 1;
    ST32(s0, v0);
    a0 = s0 + 0;
    ST32(s0+1200, s1);
    func_08A82034(a0);
    goto L_08A82100;
L_08A82100:;
    ST32(s0+1156, s1);
    a0 = s0 + 0;
    f0 = func_08A81FD0(a0, 0, 0);
    goto L_08A8210C;
L_08A8210C:;
    sp = sp + 16;
    return f0;
L_08A82120:;
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A82128;
L_08A82128:;
    v0 = LD32(s0+1200);
    goto L_08A820D4;
}

/* 08A82130 */
void func_08A82130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A82130:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_08A820AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A82144;
L_08A82144:;
    a0 = s0 + 0;
    func_08A812F4(a0);
    goto L_08A8214C;
L_08A8214C:;
    a0 = s0 + 0;
    func_08A7FA5C();
    goto L_08A82154;
L_08A82154:;
    v0 = LD32(s0+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A82174; }
    goto L_08A82160;
L_08A82160:;
    ST32(s0+4, 0);
    goto L_08A82164;
L_08A82164:;
    sp = sp + 16;
    return;
L_08A82174:;
    { u64 r_ = func_08A83A24(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8217C;
L_08A8217C:;
    ST32(s0+4, 0);
    goto L_08A82164;
}

/* 08A82184 */
void func_08A82184(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A82184:;
    sp = sp - 32;
    s2 = a0 + 84;
    s0 = a0 + 0;
    a0 = s2 + 0;
    s3 = a1 + 0;
    s1 = a2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A821B4;
L_08A821B4:;
    t0 = v0 + 0;
    cnd_ = (s32)s1 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A82234; }
    goto L_08A821C0;
L_08A821C0:;
    { s32 x_ = (s32)a3, y_ = (s32)t0; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v0 = (u32)((s32)a3 >> 31);
    v0 = v0 >> 29;
    v0 = a3 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v0 = a3 - v0;
    a0 = s3 + a3;
    v0 = v0 + s0;
    v1 = LD_U8(a0);
    a2 = LD_U8(v0+116);
    a2 = a2 ^ v1;
    a1 = hi;
    a1 = s2 + a1;
    v1 = (u32)(s32)LD_S8(a1);
    { s64 p_ = (s64)(s32)a3 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a3 = a3 + 1;
    a0 = (s32)a3 < (s32)s1;
    v1 = lo;
    v0 = (u32)((s32)v1 >> 31);
    v0 = v0 >> 29;
    v0 = v1 + v0;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v1 = v1 - v0;
    v1 = v1 + s0;
    v1 = v1 + 112;
    v0 = LD_U8(v1+4);
    v0 = v0 ^ a2;
    cnd_ = a0 != 0;
    ST8(v1+4, v0);
    if (cnd_) { goto L_08A821C0; }
    goto L_08A82234;
L_08A82234:;
    a1 = s0 + 116;
    a0 = s0 + 1212;
    a2 = 8;
    func_08A7EBBC(a0, a1, a2);
    goto L_08A82244;
L_08A82244:;
    sp = sp + 32;
    return;
}

/* 08A82260 */
u32 func_08A82260(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
L_08A82260:;
    a1 = a0 & 0x2;
    v1 = 9;
    v0 = 5;
    if (a1 != 0) v0 = v1;
    a2 = a0 & 0x8;
    v1 = v0 + 4;
    if (a2 != 0) v0 = v1;
    a1 = a0 & 0x10;
    v1 = v0 + 2;
    if (a1 != 0) v0 = v1;
    a0 = a0 & 0x20;
    v1 = v0 + 2;
    if (a0 != 0) v0 = v1;
    return v0;
}

/* 08A82298 */
u32 func_08A82298(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A82298:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_08A822C0; }
    goto L_08A822B4;
L_08A822B4:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A822E8; }
    goto L_08A822C0;
L_08A822C0:;
    cnd_ = s0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A822D0; }
    goto L_08A822C8;
L_08A822C8:;
    v0 = (u32)(s32)LD_S8(s1);
    v1 = v0 < 0x1u;
    goto L_08A822D0;
L_08A822D0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A822E8:;
    a1 = s0 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A822F0;
L_08A822F0:;
    s0 = s0 - v0;
    s1 = s1 + v0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A822D0; }
    goto L_08A82308;
L_08A82308:;
    v0 = func_08A814A4(a0, a1);
    goto L_08A82310;
L_08A82310:;
    s1 = s1 + v0;
    s0 = s0 - v0;
    cnd_ = (s32)v0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A822D0; }
    goto L_08A82320;
L_08A82320:;
    cnd_ = (s32)s0 <= 0;
    if (cnd_) { goto L_08A822C0; }
    goto L_08A82328;
L_08A82328:;
    v0 = (u32)(s32)LD_S8(s1);
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A822E8; }
    goto L_08A82334;
L_08A82334:;
    goto L_08A822C0;
}

/* 08A8233C */
u32 func_08A8233C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A8233C:;
    sp = sp - 48;
    s4 = a0 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a2 + 0;
    a0 = LD32(a0+8);
    v0 = func_08A83A88(a0);
    goto L_08A82380;
L_08A82380:;
    cnd_ = (s32)v0 <= 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08A823DC; }
    goto L_08A82388;
L_08A82388:;
    s5 = 1;
    s6 = 2;
    s7 = 255;
    fp = (u32)-1;
    a0 = LD32(s4+8);
    goto L_08A8239C;
L_08A8239C:;
    a1 = s2 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A823A4;
L_08A823A4:;
    v1 = LD32(v0+4);
    cnd_ = v1 == s5;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08A8245C; }
    goto L_08A823B0;
L_08A823B0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A8241C; }
    goto L_08A823B8;
L_08A823B8:;
    s1 = s1 + 2;
    cnd_ = v1 != s6;
    s0 = s0 - 2;
    if (cnd_) { goto L_08A82414; }
    goto L_08A823C4;
L_08A823C4:;
    cnd_ = (s32)s0 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A823E0; }
    goto L_08A823CC;
L_08A823CC:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)s3;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s4+8); goto L_08A8239C; }
    goto L_08A823DC;
L_08A823DC:;
    v1 = 1;
    goto L_08A823E0;
L_08A823E0:;
    goto L_08A823E4;
L_08A823E4:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_08A82414:;
    v1 = 0 + 0;
    goto L_08A823E0;
L_08A8241C:;
    cnd_ = v1 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A823E0; }
    goto L_08A82424;
L_08A82424:;
    cnd_ = (s32)s0 <= 0;
    s0 = s0 - 1;
    if (cnd_) { goto L_08A823E0; }
    goto L_08A8242C;
L_08A8242C:;
    v0 = LD_U8(s1);
    cnd_ = v0 != s7;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A823C4; }
    goto L_08A82438;
L_08A82438:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A82444;
L_08A82444:;
    s0 = s0 - v0;
    v1 = 0 + 0;
    cnd_ = v0 != fp;
    s1 = s1 + v0;
    if (cnd_) { goto L_08A823C4; }
    goto L_08A82454;
L_08A82454:;
    goto L_08A823E4;
L_08A8245C:;
    s1 = s1 + 1;
    s0 = s0 - 1;
    goto L_08A823C4;
}

/* 08A82468 */
void func_08A82468(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A82468:;
    v0 = (s32)a2 < 5;
    cnd_ = v0 != 0;
    a2 = a2 - 5;
    if (cnd_) { goto L_08A824B4; }
    goto L_08A82474;
L_08A82474:;
    v0 = LD_U8(a1);
    a1 = a1 + 1;
    v0 = v0 & 0x10;
    v1 = LDU32(a1);
    STU32(a3, v1);
    a2 = (s32)a2 < 2;
    cnd_ = v0 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A824C4; }
    goto L_08A8249C;
L_08A8249C:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A824BC; }
    goto L_08A824A4;
L_08A824A4:;
    v0 = (u32)(s32)LD_S8(a1);
    v1 = (u32)(s32)LD_S8(a1+1);
    ST8(t0, v0);
    ST8(t0+1, v1);
    goto L_08A824B4;
L_08A824B4:;
    return;
L_08A824BC:;
    return;
L_08A824C4:;
    v0 = LD_U16(a0+1192);
    ST16(t0, v0);
    return;
}

/* 08A824D0 */
u32 func_08A824D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A824D0:;
    sp = sp - 64;
    s5 = a0 + 0;
    s4 = a1 + 0;
    a0 = s4 + 0;
    s1 = a3 + 0;
    s0 = a2 + 0;
    s0 = s0 + 5;
    s3 = LD_U8(a2);
    ST32(sp+8, t0);
    a1 = s3 + 0;
    func_08A80500(a0, a1);
    goto L_08A82524;
L_08A82524:;
    v0 = s3 & 0x10;
    ST32(sp+12, s1);
    cnd_ = v0 == 0;
    s1 = s1 - 5;
    if (cnd_) { goto L_08A8253C; }
    goto L_08A82534;
L_08A82534:;
    s0 = s0 + 2;
    s1 = s1 - 2;
    goto L_08A8253C;
L_08A8253C:;
    v0 = s3 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp+4, 0); goto L_08A82560; }
    goto L_08A82548;
L_08A82548:;
    v0 = LDU32(s0);
    STU32(sp+4, v0);
    s1 = s1 - 4;
    s0 = s0 + 4;
    goto L_08A82560;
L_08A82560:;
    v0 = s3 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(s5+1192); goto L_08A827E4; }
    goto L_08A8256C;
L_08A8256C:;
    a2 = (u32)(s32)LD_S8(s0);
    v0 = (u32)(s32)LD_S8(s0+1);
    ST8(sp+2, a2);
    ST8(sp+3, v0);
    s1 = s1 - 2;
    s0 = s0 + 2;
    goto L_08A82584;
L_08A82584:;
    a2 = LD_U16(sp+2);
    a1 = LD32(sp+4);
    a0 = s4 + 0;
    func_08A80508(a0, a1, a2);
    goto L_08A82594;
L_08A82594:;
    v0 = s3 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s4 + 0; goto L_08A827BC; }
    goto L_08A825A0;
L_08A825A0:;
    v0 = s3 & 0x40;
    goto L_08A825A4;
L_08A825A4:;
    cnd_ = v0 != 0;
    v0 = (u32)(s32)(s8)s3;
    if (cnd_) { goto L_08A82680; }
    goto L_08A825AC;
L_08A825AC:;
    cnd_ = (s32)v0 < 0;
    v1 = LD32(sp+12);
    if (cnd_) { goto L_08A825E8; }
    goto L_08A825B4;
L_08A825B4:;
    v0 = v1 - s1;
    sp = sp + 64;
    return v0;
L_08A825E8:;
    v0 = (u32)(s32)LD_S8(s0);
    v1 = (s32)0 < (s32)s1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A82628; }
    goto L_08A82600;
L_08A82600:;
    a0 = s4 + 0;
    v0 = func_08A80524(a0);
    goto L_08A82608;
L_08A82608:;
    v0 = v0 | 0x2;
    v0 = v0 & 0xff;
    a0 = s4 + 0;
    a1 = v0 + 0;
    s1 = s1 - 1;
    func_08A8051C(a0, a1);
    goto L_08A82620;
L_08A82620:;
    v1 = LD32(sp+12);
    goto L_08A825B4;
L_08A82628:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A82630;
L_08A82630:;
    s2 = v0 + 1;
    a1 = s0 + 0;
    s0 = s0 + s2;
    a2 = s0 + 0;
    a0 = s4 + 0;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A82648;
L_08A82648:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A82650;
L_08A82650:;
    s1 = s1 - s2;
    s2 = v0 + 1;
    s0 = s0 + s2;
    v0 = (u32)(s32)LD_S8(s0);
    s1 = s1 - s2;
    v1 = (s32)0 < (s32)s1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A82628; }
    goto L_08A82678;
L_08A82678:;
    goto L_08A82600;
L_08A82680:;
    a0 = LD32(s5+8);
    s2 = 0 + 0;
    v0 = func_08A83A88(a0);
    goto L_08A8268C;
L_08A8268C:;
    cnd_ = (s32)v0 <= 0;
    s6 = v0 + 0;
    if (cnd_) { goto L_08A826D8; }
    goto L_08A82694;
L_08A82694:;
    s7 = 1;
    fp = 2;
    a0 = LD32(s5+8);
    goto L_08A826A0;
L_08A826A0:;
    a1 = s2 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A826A8;
L_08A826A8:;
    v1 = LD32(v0+4);
    cnd_ = v1 == s7;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A827A0; }
    goto L_08A826B4;
L_08A826B4:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A82730; }
    goto L_08A826C0;
L_08A826C0:;
    cnd_ = v1 == fp;
    if (cnd_) { s1 = s1 - 2; goto L_08A826FC; }
    goto L_08A826C8;
L_08A826C8:;
    s2 = s2 + 1;
    goto L_08A826CC;
L_08A826CC:;
    v0 = (s32)s2 < (s32)s6;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s5+8); goto L_08A826A0; }
    goto L_08A826D8;
L_08A826D8:;
    a0 = s4 + 0;
    v0 = func_08A80524(a0);
    goto L_08A826E0;
L_08A826E0:;
    v0 = v0 | 0x1;
    v0 = v0 & 0xff;
    a1 = v0 + 0;
    a0 = s4 + 0;
    func_08A8051C(a0, a1);
    goto L_08A826F4;
L_08A826F4:;
    v0 = (u32)(s32)(s8)s3;
    goto L_08A825AC;
L_08A826FC:;
    a0 = (u32)(s32)LD_S8(s0);
    a2 = (u32)(s32)LD_S8(s0+1);
    ST8(sp, a0);
    ST8(sp+1, a2);
    a0 = s4 + 0;
    s0 = s0 + 2;
    a2 = LD_U16(sp);
    a1 = LD32(a1);
    a2 = WSBH(a2);
    a2 = a2 & 0xffff;
    func_08A7FB30(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A82728;
L_08A82728:;
    s2 = s2 + 1;
    goto L_08A826CC;
L_08A82730:;
    cnd_ = v1 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A826CC; }
    goto L_08A82738;
L_08A82738:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    v0 = 255;
    if (cnd_) { goto L_08A82750; }
    goto L_08A82744;
L_08A82744:;
    v0 = LD_U8(s0);
    s1 = s1 - 1;
    s0 = s0 + 1;
    goto L_08A82750;
L_08A82750:;
    a2 = 255;
    cnd_ = v0 == a2;
    v0 = v0 << 2;
    if (cnd_) { goto L_08A82778; }
    goto L_08A8275C;
L_08A8275C:;
    v0 = v0 + s5;
    a1 = LD32(a1);
    a2 = LD32(v0+132);
    a0 = s4 + 0;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A82770;
L_08A82770:;
    s2 = s2 + 1;
    goto L_08A826CC;
L_08A82778:;
    a1 = LD32(a1);
    a2 = s0 + 0;
    a0 = s4 + 0;
    func_08A7FADC(a0, a1, a2, 0, 0);
    goto L_08A82788;
L_08A82788:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A82790;
L_08A82790:;
    v0 = v0 + 1;
    s1 = s1 - v0;
    s0 = s0 + v0;
    goto L_08A826C8;
L_08A827A0:;
    a2 = LD_U8(s0);
    a1 = LD32(v0);
    a0 = s4 + 0;
    s0 = s0 + 1;
    func_08A7FB30(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A827B4;
L_08A827B4:;
    s1 = s1 - 1;
    goto L_08A826C8;
L_08A827BC:;
    a1 = LDU32(s0);
    STU32(sp+4, a1);
    s0 = s0 + 4;
    a1 = LD32(sp+4);
    s1 = s1 - 4;
    func_08A80514(a0, a1);
    goto L_08A827DC;
L_08A827DC:;
    v0 = s3 & 0x40;
    goto L_08A825A4;
L_08A827E4:;
    ST16(sp+2, v0);
    goto L_08A82584;
}

/* 08A827EC */
rv_t func_08A827EC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A827EC:;
    sp = sp - 48;
    t1 = 0 + 0;
    s4 = a0 + 0;
    s3 = a1 + 0;
    s2 = a2 + 0;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { goto L_08A828E8; }
    goto L_08A8281C;
L_08A8281C:;
    s1 = LD_U8(a1);
    a0 = s1 + 0;
    v0 = func_08A82260(a0);
    goto L_08A82828;
L_08A82828:;
    s0 = v0 + 0;
    v0 = (s32)s2 < (s32)v0;
    v1 = s1 & 0x40;
    cnd_ = v0 != 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A828E8; }
    goto L_08A8283C;
L_08A8283C:;
    a1 = s3 + s0;
    a2 = s2 - s0;
    cnd_ = v1 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A82924; }
    goto L_08A8284C;
L_08A8284C:;
    v0 = (u32)(s32)(s8)s1;
    goto L_08A82850;
L_08A82850:;
    a1 = s2 - s0;
    cnd_ = (s32)v0 < 0;
    a0 = s3 + s0;
    if (cnd_) { goto L_08A8290C; }
    goto L_08A8285C;
L_08A8285C:;
    a1 = D_08AE8EF8 - (-28936);
    goto L_08A82860;
L_08A82860:;
    a0 = s3 + 1;
    a2 = 4;
    a1 = a1 - 28936;
    v0 = func_08A87A5C(a0, a1, a2);
    goto L_08A82870;
L_08A82870:;
    a3 = sp + 4;
    t0 = sp + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a2 = s2 + 0;
    cnd_ = v0 == 0;
    t1 = (u32)-1;
    if (cnd_) { goto L_08A828E8; }
    goto L_08A8288C;
L_08A8288C:;
    func_08A82468(a0, a1, a2, a3, t0);
    goto L_08A82894;
L_08A82894:;
    a2 = LD_U16(sp);
    a1 = LD32(sp+4);
    a0 = s4 + 0;
    v0 = func_08A80448(a1, a2, 0, 0, 0);
    goto L_08A828A4;
L_08A828A4:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    v0 = func_08A8052C(a0);
    goto L_08A828B0;
L_08A828B0:;
    a2 = s3 + 0;
    a3 = s2 + 0;
    t0 = 1;
    a0 = s4 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    t1 = (u32)-2;
    if (cnd_) { goto L_08A828E8; }
    goto L_08A828CC;
L_08A828CC:;
    v0 = func_08A824D0(a0, a1, a2, a3, t0);
    goto L_08A828D4;
L_08A828D4:;
    s0 = v0 + 0;
    a0 = s4 + 0;
    a1 = s1 + 0;
    f0 = func_08A810A0(a0, a1, 0, 0, 0);
    goto L_08A828E4;
L_08A828E4:;
    t1 = s0 + 0;
    goto L_08A828E8;
L_08A828E8:;
    v0 = t1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A8290C:;
    v0 = func_08A82298(a0, a1);
    goto L_08A82914;
L_08A82914:;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A828E8; }
    goto L_08A8291C;
L_08A8291C:;
    a1 = D_08AE8EF8 - (-28936);
    goto L_08A82860;
L_08A82924:;
    v0 = func_08A8233C(a0, a1, a2);
    goto L_08A8292C;
L_08A8292C:;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A828E8; }
    goto L_08A82934;
L_08A82934:;
    v0 = (u32)(s32)(s8)s1;
    goto L_08A82850;
}

/* 08A8293C */
void func_08A8293C(u32 a0, u32 a1)
{
L_08A8293C:;
    ST32(a0+1196, a1);
    return;
}

/* 08A82944 */
rv_t func_08A82944(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A82944:;
    sp = sp - 48;
    s1 = a0 + 0;
    v1 = LD32(a0+1480);
    s4 = LD32(a0+124);
    s3 = LD32(a0+128);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    a3 = s4 + 0;
    if (cnd_) { goto L_08A829DC; }
    goto L_08A82984;
L_08A82984:;
    v0 = v1 << 2;
    v1 = D_08AE8F00 - (-28928);
    v1 = v1 - 28928;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A829A0u: goto L_08A829A0; case 0x08A82A78u: goto L_08A82A78; case 0x08A82B04u: goto L_08A82B04; case 0x08A82BACu: goto L_08A82BAC; case 0x08A82C34u: goto L_08A82C34; default: rs_break(0, 0x08a82998); }
L_08A829A0:;
    cnd_ = (s32)s3 <= 0;
    if (cnd_) { goto L_08A829DC; }
    goto L_08A829A8;
L_08A829A8:;
    v0 = LD_U8(s4);
    v0 = v0 ^ 0xec;
    s0 = v0 + 2;
    v1 = (s32)s3 < (s32)s0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A829DC; }
    goto L_08A829C0;
L_08A829C0:;
    a1 = s4 + s0;
    v0 = LD_U8(a1-1);
    a2 = v0 ^ 0xea;
    s0 = s0 + a2;
    v0 = (s32)s3 < (s32)s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A82A34; }
    goto L_08A829DC;
L_08A829DC:;
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A829F4; }
    goto L_08A829E4;
L_08A829E4:;
    cnd_ = s3 != 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_08A82A20; }
    goto L_08A829EC;
L_08A829EC:;
    ST32(s1+128, s3);
    goto L_08A829F0;
L_08A829F0:;
    v1 = 0 + 0;
    goto L_08A829F4;
L_08A829F4:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A82A20:;
    a1 = s4 + 0;
    a2 = s3 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A82A2C;
L_08A82A2C:;
    ST32(s1+128, s3);
    goto L_08A829F0;
L_08A82A34:;
    a0 = s1 + 0;
    func_08A82184(a0, a1, a2);
    goto L_08A82A3C;
L_08A82A3C:;
    v0 = 1;
    ST32(s1+1480, v0);
    s3 = s3 - s0;
    a0 = s1 + 1212;
    v0 = (u32)(s32)LD_S8(s4+1);
    v1 = (u32)(s32)LD_S8(s4+2);
    ST8(s1+1484, v0);
    ST8(s1+1485, v1);
    s4 = s4 + s0;
    a1 = s4 + 0;
    v0 = LD_U16(s1+1484);
    a2 = s3 + 0;
    v0 = WSBH(v0);
    ST16(s1+1484, v0);
    func_08A7ED80(a0, a1, a2);
    goto L_08A82A78;
L_08A82A78:;
    v0 = (s32)s3 < 6;
    cnd_ = v0 == 0;
    s5 = D_08C32C84 - (11396);
    if (cnd_) { goto L_08A82A8C; }
    goto L_08A82A84;
L_08A82A84:;
    a3 = LD32(s1+124);
    goto L_08A829DC;
L_08A82A8C:;
    v0 = LDU32(s4);
    STU32(s1+1184, v0);
    a0 = s1 + 0;
    v0 = LD32(s1+1160);
    a2 = LD32(s5+11396);
    a3 = LD32(s1+1172);
    a1 = 6;
    t_ = v0;
    s6 = 0xffff;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82AB8;
L_08A82AB8:;
    a2 = (u32)(s32)LD_S8(s4+4);
    v0 = (u32)(s32)LD_S8(s4+5);
    ST8(s1+1192, a2);
    ST8(s1+1193, v0);
    s2 = s4 + 6;
    v0 = LD_U16(s1+1192);
    cnd_ = v0 == s6;
    s0 = s3 - 6;
    if (cnd_) { goto L_08A82D38; }
    goto L_08A82AD8;
L_08A82AD8:;
    v0 = LD32(s1+1476);
    goto L_08A82ADC;
L_08A82ADC:;
    s4 = s2 + 0;
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s3 = s0 + 0;
    if (cnd_) { goto L_08A82D20; }
    goto L_08A82AEC;
L_08A82AEC:;
    v0 = LD_U16(s1+1192);
    cnd_ = v0 == s6;
    v0 = 2;
    if (cnd_) { goto L_08A82D20; }
    goto L_08A82AF8;
L_08A82AF8:;
    v1 = (u32)-1;
    ST32(s1+1480, v0);
    ST32(s1+1156, v1);
    goto L_08A82B04;
L_08A82B04:;
    v1 = LD32(s1+1156);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A82CF0; }
    goto L_08A82B14;
L_08A82B14:;
    s5 = (u32)-1;
    goto L_08A82B18;
L_08A82B18:;
    a0 = LD32(s1+8);
    v0 = func_08A83A88(a0);
    goto L_08A82B20;
L_08A82B20:;
    v1 = LD32(s1+1156);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    v0 = (s32)s3 < 2;
    if (cnd_) { goto L_08A82B84; }
    goto L_08A82B30;
L_08A82B30:;
    cnd_ = v0 != 0;
    s2 = s4 + 1;
    if (cnd_) { goto L_08A82B84; }
    goto L_08A82B38;
L_08A82B38:;
    a1 = s3 - 1;
    a0 = s2 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A82B44;
L_08A82B44:;
    cnd_ = v0 == s5;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A82B84; }
    goto L_08A82B4C;
L_08A82B4C:;
    v0 = LD_U8(s4);
    a1 = s2 + 0;
    a0 = s1 + 0;
    ST32(sp+4, v0);
    { rv_t r_ = func_08A813A8(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82B60;
L_08A82B60:;
    a1 = sp + 0;
    a0 = LD32(s1+8);
    ST32(sp, v0);
    func_08A83AC4(a0, a1, 0, 0, 0);
    goto L_08A82B70;
L_08A82B70:;
    v1 = s3 - s0;
    v0 = s4 + s0;
    s4 = v0 + 1;
    s3 = v1 - 1;
    goto L_08A82B18;
L_08A82B84:;
    a0 = LD32(s1+8);
    v0 = func_08A83A88(a0);
    goto L_08A82B8C;
L_08A82B8C:;
    v1 = LD32(s1+1156);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(s1+124); goto L_08A829DC; }
    goto L_08A82B9C;
L_08A82B9C:;
    v0 = 3;
    v1 = (u32)-1;
    ST32(s1+1480, v0);
    ST32(s1+1156, v1);
    goto L_08A82BAC;
L_08A82BAC:;
    a0 = LD32(s1+1156);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A82CCC; }
    goto L_08A82BBC;
L_08A82BBC:;
    v1 = LD32(s1+1152);
    v0 = (s32)v1 < (s32)a0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A82C24; }
    goto L_08A82BCC;
L_08A82BCC:;
    s5 = (u32)-1;
    goto L_08A82BD0;
L_08A82BD0:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A82BDC;
L_08A82BDC:;
    cnd_ = v0 == s5;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A82CC0; }
    goto L_08A82BE4;
L_08A82BE4:;
    v0 = LD32(s1+1152);
    a1 = s4 + 0;
    a0 = s1 + 0;
    s0 = v0 << 2;
    v0 = v0 + 1;
    ST32(s1+1152, v0);
    s0 = s0 + s1;
    s3 = s3 - s2;
    { rv_t r_ = func_08A813A8(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82C08;
L_08A82C08:;
    a0 = LD32(s1+1156);
    v1 = LD32(s1+1152);
    ST32(s0+132, v0);
    v0 = (s32)v1 < (s32)a0;
    cnd_ = v0 != 0;
    s4 = s4 + s2;
    if (cnd_) { goto L_08A82BD0; }
    goto L_08A82C20;
L_08A82C20:;
    v0 = (s32)v1 < (s32)a0;
    goto L_08A82C24;
L_08A82C24:;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(s1+124); goto L_08A829DC; }
    goto L_08A82C2C;
L_08A82C2C:;
    v0 = 4;
    ST32(s1+1480, v0);
    goto L_08A82C34;
L_08A82C34:;
    v0 = (s32)s3 < 5;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = LD32(s1+124); goto L_08A829DC; }
    goto L_08A82C40;
L_08A82C40:;
    s5 = (u32)-2;
    s2 = (u32)-1;
    goto L_08A82C48;
L_08A82C48:;
    a0 = s1 + 0;
    a1 = s4 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_08A827EC(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82C58;
L_08A82C58:;
    s0 = v0 + 0;
    cnd_ = v0 == s5;
    v1 = 5;
    if (cnd_) { goto L_08A829F4; }
    goto L_08A82C64;
L_08A82C64:;
    cnd_ = v0 == s2;
    if (cnd_) { v0 = 5; goto L_08A82C88; }
    goto L_08A82C6C;
L_08A82C6C:;
    a3 = LD32(s1+124);
    s4 = s4 + v0;
    if (a3 == 0) s0 = 0;
    cnd_ = s0 != 0;
    s3 = s3 - v0;
    if (cnd_) { goto L_08A82C48; }
    goto L_08A82C80;
L_08A82C80:;
    goto L_08A829DC;
L_08A82C88:;
    ST32(s1+1480, v0);
    v0 = 2;
    a0 = s1 + 0;
    ST32(s1, v0);
    v0 = D_08C32C84 - (11396);
    a1 = 3;
    a2 = LD32(v0+11396);
    v1 = LD32(s1+1160);
    a3 = LD32(s1+1172);
    s3 = s3 - 5;
    t_ = v1;
    s4 = s4 + 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82CB8;
L_08A82CB8:;
    a3 = LD32(s1+124);
    goto L_08A829DC;
L_08A82CC0:;
    a0 = LD32(s1+1156);
    v1 = LD32(s1+1152);
    goto L_08A82C20;
L_08A82CCC:;
    cnd_ = (s32)s3 <= 0;
    if (cnd_) { a3 = LD32(s1+124); goto L_08A829DC; }
    goto L_08A82CD4;
L_08A82CD4:;
    v0 = LD_U8(s4);
    ST32(s1+1152, 0);
    s4 = s4 + 1;
    a0 = v0 + 0;
    ST32(s1+1156, v0);
    s3 = s3 - 1;
    goto L_08A82BBC;
L_08A82CF0:;
    cnd_ = (s32)s3 <= 0;
    a0 = 8;
    if (cnd_) { goto L_08A82A84; }
    goto L_08A82CF8;
L_08A82CF8:;
    a1 = LD_U8(s4);
    a2 = 0 + 0;
    ST32(s1+1156, a1);
    v0 = func_08A8399C(a0, a1, a2, t1, t2, t3);
    goto L_08A82D08;
L_08A82D08:;
    ST32(s1+8, v0);
    cnd_ = v0 == 0;
    v1 = 5;
    if (cnd_) { goto L_08A829F4; }
    goto L_08A82D14;
L_08A82D14:;
    s4 = s4 + 1;
    s3 = s3 - 1;
    goto L_08A82B14;
L_08A82D20:;
    a3 = LD32(s1+124);
    v0 = 5;
    v1 = 2;
    ST32(s1+1480, v0);
    ST32(s1, v1);
    goto L_08A829DC;
L_08A82D38:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A82D44;
L_08A82D44:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A82A84; }
    goto L_08A82D50;
L_08A82D50:;
    a1 = s2 + 0;
    func_08A8293C(a0, a1);
    goto L_08A82D58;
L_08A82D58:;
    a3 = LD32(s1+1172);
    a2 = LD32(s5+11396);
    v0 = LD32(s1+1160);
    a0 = s1 + 0;
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82D70;
L_08A82D70:;
    a3 = LD32(s1+124);
    cnd_ = a3 != 0;
    if (cnd_) { v0 = LD32(s1+1476); goto L_08A82ADC; }
    goto L_08A82D7C;
L_08A82D7C:;
    v1 = 0 + 0;
    goto L_08A829F4;
}

/* 08A82D84 */
u32 func_08A82D84(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A82D84:;
    sp = sp - 64;
    s4 = a0 + 0;
    s3 = a2 - 1;
    s1 = a1 + 1;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    s6 = LD_U8(a1);
    if (cnd_) { goto L_08A82E8C; }
    goto L_08A82DC4;
L_08A82DC4:;
    a0 = 8;
    goto L_08A82DC8;
L_08A82DC8:;
    a1 = s6 + 0;
    a2 = 0 + 0;
    v0 = func_08A8399C(a0, a1, a2, t1, t2, t3);
    goto L_08A82DD4;
L_08A82DD4:;
    ST32(s4+8, v0);
    cnd_ = v0 == 0;
    v1 = 5;
    if (cnd_) { goto L_08A82E5C; }
    goto L_08A82DE0;
L_08A82DE0:;
    cnd_ = s6 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08A82E58; }
    goto L_08A82DE8;
L_08A82DE8:;
    s7 = (u32)-1;
    goto L_08A82DEC;
L_08A82DEC:;
    s2 = s1 + 1;
    v0 = (s32)s3 < 2;
    a1 = s3 - 1;
    s5 = s5 + 1;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    v1 = 4;
    if (cnd_) { goto L_08A82E5C; }
    goto L_08A82E08;
L_08A82E08:;
    v0 = func_08A814A4(a0, a1);
    goto L_08A82E10;
L_08A82E10:;
    s0 = v0 + 0;
    a1 = s2 + 0;
    a0 = s4 + 0;
    cnd_ = v0 == s7;
    v1 = 4;
    if (cnd_) { goto L_08A82E5C; }
    goto L_08A82E24;
L_08A82E24:;
    v0 = LD_U8(s1);
    ST32(sp+4, v0);
    { rv_t r_ = func_08A813A8(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82E30;
L_08A82E30:;
    a1 = sp + 0;
    a0 = LD32(s4+8);
    ST32(sp, v0);
    func_08A83AC4(a0, a1, 0, 0, 0);
    goto L_08A82E40;
L_08A82E40:;
    a0 = s3 - s0;
    v0 = s1 + s0;
    v1 = (s32)s5 < (s32)s6;
    s1 = v0 + 1;
    cnd_ = v1 != 0;
    s3 = a0 - 1;
    if (cnd_) { goto L_08A82DEC; }
    goto L_08A82E58;
L_08A82E58:;
    v1 = 0 + 0;
    goto L_08A82E5C;
L_08A82E5C:;
    v0 = v1 + 0;
    sp = sp + 64;
    return v0;
L_08A82E8C:;
    func_08A82034(a0);
    goto L_08A82E94;
L_08A82E94:;
    a0 = 8;
    goto L_08A82DC8;
}

/* 08A82E9C */
rv_t func_08A82E9C(u32 a0, u32 a1, u32 a2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A82E9C:;
    sp = sp - 64;
    v0 = (s32)a2 < 2;
    s3 = a0 + 0;
    s1 = a2 + 0;
    a2 = 4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A82FBC; }
    goto L_08A82ED8;
L_08A82ED8:;
    s5 = LD_U8(a1+1);
    s7 = LD_U8(a1);
    s1 = s1 - 2;
    s0 = a1 + 2;
    cnd_ = s5 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A82FB0; }
    goto L_08A82EF0;
L_08A82EF0:;
    s6 = (u32)-1;
    a1 = s1 + 0;
    goto L_08A82EF8;
L_08A82EF8:;
    a0 = s0 + 0;
    v0 = func_08A814A4(a0, a1);
    goto L_08A82F00;
L_08A82F00:;
    s1 = s1 - v0;
    v1 = (s32)s1 < 11;
    s1 = s1 - 10;
    s4 = s4 + 1;
    a1 = s1 + 0;
    s2 = s0 + 0;
    cnd_ = v0 == s6;
    a2 = 4;
    if (cnd_) { goto L_08A82FBC; }
    goto L_08A82F20;
L_08A82F20:;
    cnd_ = v1 != 0;
    s0 = s0 + v0;
    if (cnd_) { goto L_08A82FBC; }
    goto L_08A82F28;
L_08A82F28:;
    v0 = LDU32(s0+6);
    STU32(sp+8, v0);
    a3 = LDU32(s0);
    STU32(sp+4, a3);
    v0 = LD32(sp+8);
    a2 = (u32)(s32)LD_S8(s0+4);
    a3 = (u32)(s32)LD_S8(s0+5);
    ST8(sp, a2);
    ST8(sp+1, a3);
    s0 = s0 + 10;
    a0 = s0 + 0;
    v0 = WSBW(v0);
    ST32(sp+8, v0);
    v0 = func_08A814A4(a0, a1);
    goto L_08A82F70;
L_08A82F70:;
    s1 = s1 - v0;
    t1 = s0 + 0;
    a1 = s2 + 0;
    a0 = s3 + 0;
    s0 = s0 + v0;
    cnd_ = v0 == s6;
    a2 = 4;
    if (cnd_) { goto L_08A82FBC; }
    goto L_08A82F8C;
L_08A82F8C:;
    a3 = LD_U16(sp);
    v1 = LD32(s3+1168);
    t2 = LD32(s3+1172);
    a2 = LD32(sp+4);
    t_ = v1;
    t0 = LD32(sp+8);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A82FA4;
L_08A82FA4:;
    v0 = (s32)s4 < (s32)s5;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A82EF8; }
    goto L_08A82FB0;
L_08A82FB0:;
    cnd_ = s7 != 0;
    if (cnd_) { v0 = LD32(s3+1168); goto L_08A82FEC; }
    goto L_08A82FB8;
L_08A82FB8:;
    a2 = 0 + 0;
    goto L_08A82FBC;
L_08A82FBC:;
    v0 = a2 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08A82FEC:;
    t2 = LD32(s3+1172);
    a0 = s3 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t_ = v0;
    t1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8300C;
L_08A8300C:;
    a2 = 0 + 0;
    goto L_08A82FBC;
}

/* 08A83014 */
rv_t func_08A83014(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A83014:;
    sp = sp - 144;
    v0 = (s32)a2 < 11;
    s5 = a0 + 0;
    s2 = a2 + 0;
    s0 = a1 + 0;
    a1 = 4;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A83124; }
    goto L_08A83054;
L_08A83054:;
    v0 = LDU32(s0);
    STU32(sp+80, v0);
    v0 = (u32)(s32)LD_S8(s0+4);
    v1 = (u32)(s32)LD_S8(s0+5);
    ST8(sp, v0);
    ST8(sp+1, v1);
    a1 = LD32(sp+80);
    a2 = LD_U16(sp);
    v0 = func_08A810E8(a0, a1, a2);
    goto L_08A83080;
L_08A83080:;
    s1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A83124; }
    goto L_08A83090;
L_08A83090:;
    a1 = s1 + 0;
    a0 = s5 + 0;
    v0 = func_08A81278(a0, a1);
    goto L_08A8309C;
L_08A8309C:;
    s7 = v0 + 0;
    v0 = LDU32(s0+6);
    STU32(sp+84, v0);
    s2 = s2 - 11;
    s1 = 0 + 0;
    v0 = LD32(sp+84);
    s4 = LD_U8(s0+10);
    s0 = s0 + 11;
    v0 = WSBW(v0);
    cnd_ = s4 == 0;
    ST32(sp+84, v0);
    if (cnd_) { goto L_08A83118; }
    goto L_08A830D0;
L_08A830D0:;
    s6 = (u32)-1;
    s3 = sp + 16;
    goto L_08A830D8;
L_08A830D8:;
    a0 = s0 + 0;
    cnd_ = (s32)s2 <= 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A83118; }
    goto L_08A830E4;
L_08A830E4:;
    s1 = s1 + 1;
    v0 = func_08A814A4(a0, a1);
    goto L_08A830EC;
L_08A830EC:;
    a0 = v0 + 0;
    v1 = (s32)s1 < (s32)s4;
    v0 = (s32)s1 < 16;
    v1 = v1 & v0;
    s2 = s2 - a0;
    cnd_ = a0 == s6;
    a1 = 4;
    if (cnd_) { goto L_08A83124; }
    goto L_08A83108;
L_08A83108:;
    ST32(s3, s0);
    s3 = s3 + 4;
    cnd_ = v1 != 0;
    s0 = s0 + a0;
    if (cnd_) { goto L_08A830D8; }
    goto L_08A83118;
L_08A83118:;
    v0 = LD32(s5+1164);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A83154; }
    goto L_08A83124;
L_08A83124:;
    v0 = a1 + 0;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08A83154:;
    t1 = LD32(s5+1172);
    a2 = LD32(sp+84);
    a1 = s7 + 0;
    a0 = s5 + 0;
    a3 = s1 + 0;
    t_ = v0;
    t0 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83170;
L_08A83170:;
    a1 = 0 + 0;
    goto L_08A83124;
}

/* 08A83178 */
u32 func_08A83178(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A83178:;
    sp = sp - 32;
    a2 = (s32)a2 < 6;
    a3 = 4;
    s0 = a0 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A831E0; }
    goto L_08A83194;
L_08A83194:;
    v0 = (u32)(s32)LD_S8(a1+4);
    v1 = (u32)(s32)LD_S8(a1+5);
    ST8(sp, v0);
    ST8(sp+1, v1);
    v0 = LDU32(a1);
    STU32(sp+4, v0);
    a2 = LD_U16(sp);
    a1 = LD32(sp+4);
    v0 = func_08A810E8(a0, a1, a2);
    goto L_08A831C0;
L_08A831C0:;
    v1 = (u32)-1;
    a1 = v0 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == v1;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A831E0; }
    goto L_08A831D4;
L_08A831D4:;
    func_08A811EC(a0, a1);
    goto L_08A831DC;
L_08A831DC:;
    a3 = 0 + 0;
    goto L_08A831E0;
L_08A831E0:;
    v0 = a3 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A831F4 */
rv_t func_08A831F4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A831F4:;
    sp = sp - 48;
    v0 = (s32)a2 < 5;
    a3 = sp + 4;
    t0 = sp + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    v1 = 4;
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A832B4; }
    goto L_08A83230;
L_08A83230:;
    func_08A82468(a0, a1, a2, a3, t0);
    goto L_08A83238;
L_08A83238:;
    a1 = LD32(sp+4);
    a2 = LD_U16(sp);
    a0 = s0 + 0;
    v0 = func_08A810E8(a0, a1, a2);
    goto L_08A83248;
L_08A83248:;
    s2 = v0 + 0;
    a1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s2 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A832E8; }
    goto L_08A8325C;
L_08A8325C:;
    a0 = s0 + 0;
    v0 = func_08A81278(a0, a1);
    goto L_08A83264;
L_08A83264:;
    s1 = v0 + 0;
    goto L_08A83268;
L_08A83268:;
    a2 = s4 + 0;
    a3 = s3 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    t0 = 0 + 0;
    v0 = func_08A824D0(a0, a1, a2, a3, t0);
    goto L_08A83280;
L_08A83280:;
    cnd_ = (s32)v0 < 0;
    v1 = 4;
    if (cnd_) { goto L_08A832B4; }
    goto L_08A83288;
L_08A83288:;
    v0 = (u32)-1;
    a0 = s0 + 0;
    cnd_ = s2 == v0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A832D8; }
    goto L_08A83298;
L_08A83298:;
    v0 = LD32(s0+1160);
    goto L_08A8329C;
L_08A8329C:;
    a3 = LD32(s0+1172);
    a0 = s0 + 0;
    a2 = s1 + 0;
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A832B0;
L_08A832B0:;
    v1 = 0 + 0;
    goto L_08A832B4;
L_08A832B4:;
    goto L_08A832B8;
L_08A832B8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A832D8:;
    f0 = func_08A810A0(a0, a1, 0, 0, 0);
    goto L_08A832E0;
L_08A832E0:;
    v0 = LD32(s0+1160);
    goto L_08A8329C;
L_08A832E8:;
    a2 = LD_U16(sp);
    a1 = LD32(sp+4);
    v0 = func_08A80448(a1, a2, 0, 0, 0);
    goto L_08A832F4;
L_08A832F4:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    v0 = func_08A8052C(a0);
    goto L_08A83300;
L_08A83300:;
    cnd_ = v0 == 0;
    v1 = 5;
    if (cnd_) { goto L_08A83268; }
    goto L_08A83308;
L_08A83308:;
    goto L_08A832B8;
}

/* 08A83310 */
rv_t func_08A83310(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A83310:;
    sp = sp - 32;
    s1 = 0 + 0;
    a2 = LD32(a0+128);
    v0 = (s32)a2 < 3;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A833E8; }
    goto L_08A83334;
L_08A83334:;
    a1 = LD32(s0+124);
    v0 = (u32)(s32)LD_S8(a1);
    v1 = (u32)(s32)LD_S8(a1+1);
    ST8(sp, v0);
    ST8(sp+1, v1);
    v0 = LD_U16(sp);
    v0 = WSBH(v0);
    v0 = v0 & 0xffff;
    v1 = v0 < 0x1001u;
    cnd_ = v1 == 0;
    ST16(sp, v0);
    if (cnd_) { goto L_08A834B8; }
    goto L_08A83360;
L_08A83360:;
    v0 = (s32)a2 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A833EC; }
    goto L_08A8336C;
L_08A8336C:;
    v1 = (u32)(s32)LD_S8(a1+2);
    v0 = v1 < 0x7u;
    cnd_ = v0 == 0;
    v0 = LD_U16(sp);
    if (cnd_) { goto L_08A833B8; }
    goto L_08A8337C;
L_08A8337C:;
    v0 = v1 << 2;
    v1 = D_08AE8F14 - (-28908);
    v1 = v1 - 28908;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A83398u: goto L_08A83398; case 0x08A833B4u: goto L_08A833B4; case 0x08A83424u: goto L_08A83424; case 0x08A83440u: goto L_08A83440; case 0x08A83464u: goto L_08A83464; case 0x08A83480u: goto L_08A83480; case 0x08A8349Cu: goto L_08A8349C; default: rs_break(0, 0x08a83390); }
L_08A83398:;
    a2 = LD_U16(sp);
    a1 = a1 + 3;
    a0 = s0 + 0;
    a2 = a2 - 3;
    v0 = func_08A82D84(a0, a1, a2, t1, t2, t3);
    goto L_08A833AC;
L_08A833AC:;
    s1 = v0 + 0;
    goto L_08A833B0;
L_08A833B0:;
    a2 = LD32(s0+128);
    goto L_08A833B4;
L_08A833B4:;
    v0 = LD_U16(sp);
    goto L_08A833B8;
L_08A833B8:;
    a2 = a2 - v0;
    cnd_ = a2 == 0;
    ST32(s0+128, a2);
    if (cnd_) { goto L_08A833D0; }
    goto L_08A833C4;
L_08A833C4:;
    a0 = LD32(s0+124);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A83414; }
    goto L_08A833D0;
L_08A833D0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08A83404; }
    goto L_08A833D8;
L_08A833D8:;
    v0 = LD32(s0+128);
    v1 = (s32)v0 < 3;
    cnd_ = v1 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A83334; }
    goto L_08A833E8;
L_08A833E8:;
    v1 = s1 + 0;
    goto L_08A833EC;
L_08A833EC:;
    goto L_08A833F0;
L_08A833F0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A83404:;
    a0 = s0 + 0;
    f0 = func_08A81604(a0, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A8340C;
L_08A8340C:;
    v1 = s1 + 0;
    goto L_08A833EC;
L_08A83414:;
    a1 = a0 + v0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8341C;
L_08A8341C:;
    goto L_08A833D0;
L_08A83424:;
    a2 = LD_U16(sp);
    a1 = a1 + 3;
    a0 = s0 + 0;
    a2 = a2 - 3;
    { rv_t r_ = func_08A831F4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83438;
L_08A83438:;
    s1 = v0 + 0;
    goto L_08A833B0;
L_08A83440:;
    a2 = LD_U16(sp);
    a0 = LD32(s0+1200);
    a1 = LD32(s0+124);
    a3 = 0 + 0;
    v0 = sceNetInetSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A83454;
L_08A83454:;
    cnd_ = (s32)v0 > 0;
    v1 = 3;
    if (cnd_) { goto L_08A833B0; }
    goto L_08A8345C;
L_08A8345C:;
    goto L_08A833F0;
L_08A83464:;
    a2 = LD_U16(sp);
    a1 = a1 + 3;
    a0 = s0 + 0;
    a2 = a2 - 3;
    v0 = func_08A83178(a0, a1, a2);
    goto L_08A83478;
L_08A83478:;
    s1 = v0 + 0;
    goto L_08A833B0;
L_08A83480:;
    a2 = LD_U16(sp);
    a1 = a1 + 3;
    a0 = s0 + 0;
    a2 = a2 - 3;
    { rv_t r_ = func_08A83014(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83494;
L_08A83494:;
    s1 = v0 + 0;
    goto L_08A833B0;
L_08A8349C:;
    a2 = LD_U16(sp);
    a1 = a1 + 3;
    a0 = s0 + 0;
    a2 = a2 - 3;
    { rv_t r_ = func_08A82E9C(a0, a1, a2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A834B0;
L_08A834B0:;
    s1 = v0 + 0;
    goto L_08A833B0;
L_08A834B8:;
    s1 = 4;
    goto L_08A83404;
}

/* 08A834C0 */
rv_t func_08A834C0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A834C0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+1200);
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A834DC;
L_08A834DC:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A834FC; }
    goto L_08A834E4;
L_08A834E4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A834FC:;
    s1 = LD32(s0+128);
    a1 = LD32(s0+124);
    a0 = LD32(s0+1200);
    a2 = 4096;
    a2 = a2 - s1;
    a1 = a1 + s1;
    a3 = 0 + 0;
    v0 = sceNetInetRecv(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8351C;
L_08A8351C:;
    a2 = v0 + 0;
    v0 = v0 + 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A835C0; }
    goto L_08A83530;
L_08A83530:;
    v0 = LD32(s0+128);
    v1 = LD32(s0);
    a2 = v0 + a2;
    v0 = 2;
    cnd_ = v1 == v0;
    ST32(s0+128, a2);
    if (cnd_) { goto L_08A83554; }
    goto L_08A83548;
L_08A83548:;
    v0 = LD32(s0+1480);
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_08A83570; }
    goto L_08A83554;
L_08A83554:;
    a1 = LD32(s0+124);
    a2 = a2 - s1;
    a0 = s0 + 1212;
    a1 = a1 + s1;
    func_08A7ED80(a0, a1, a2);
    goto L_08A83568;
L_08A83568:;
    v1 = LD32(s0);
    v0 = 3;
    goto L_08A83570;
L_08A83570:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A835A8; }
    goto L_08A83578;
L_08A83578:;
    v1 = LD32(s0);
    goto L_08A8357C;
L_08A8357C:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+128); goto L_08A83590; }
    goto L_08A83588;
L_08A83588:;
    v1 = 0 + 0;
    goto L_08A834E4;
L_08A83590:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A834E4; }
    goto L_08A83598;
L_08A83598:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A83310(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A835A0;
L_08A835A0:;
    v1 = v0 + 0;
    goto L_08A834E4;
L_08A835A8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A82944(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A835B0;
L_08A835B0:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A834E4; }
    goto L_08A835B8;
L_08A835B8:;
    v1 = LD32(s0);
    goto L_08A8357C;
L_08A835C0:;
    a0 = s0 + 0;
    f0 = func_08A81604(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A835C8;
L_08A835C8:;
    v1 = 3;
    goto L_08A834E4;
}

/* 08A835D0 */
u32 func_08A835D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A835D0:;
    sp = sp - 80;
    v0 = a2 + 0;
    s3 = a3 + 0;
    s2 = 1;
    a2 = 0 + 0;
    a3 = 2;
    s1 = t0 + 0;
    t0 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0);
    ST32(sp+36, a1);
    a1 = 0 + 0;
    cnd_ = v1 == s2;
    ST16(sp, v0);
    if (cnd_) { goto L_08A836B8; }
    goto L_08A8361C;
L_08A8361C:;
    v0 = s1 + 9;
    v0 = v0 & 0xffff;
    v0 = WSBH(v0);
    v0 = v0 & 0xffff;
    v1 = 2;
    ST16(sp+16, v0);
    a1 = sp + 16;
    a0 = s0 + 0;
    ST8(sp+18, v1);
    ST16(sp+32, v0);
    v0 = LDU32(sp+36);
    STU32(sp+19, v0);
    v0 = (u32)(s32)LD_S8(sp);
    v1 = (u32)(s32)LD_S8(sp+1);
    ST8(sp+23, v0);
    ST8(sp+24, v1);
    a2 = 9;
    v0 = func_08A81B18(a0, a1, a2, t0, t1, t2, t3);
    goto L_08A8366C;
L_08A8366C:;
    a0 = v0 + 0;
    a1 = s3 + 0;
    a2 = s1 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A836A0; }
    goto L_08A83680;
L_08A83680:;
    goto L_08A83684;
L_08A83684:;
    v0 = a0 + 0;
    sp = sp + 80;
    return v0;
L_08A836A0:;
    a0 = LD32(s0+1200);
    v0 = sceNetInetSend(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A836A8;
L_08A836A8:;
    v0 = (s32)v0 < 0;
    a0 = 3;
    if (v0 == 0) a0 = 0;
    goto L_08A83680;
L_08A836B8:;
    { rv_t r_ = func_08A81BEC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A836C0;
L_08A836C0:;
    v1 = LD32(s0);
    cnd_ = v1 != s2;
    a0 = 3;
    if (cnd_) { goto L_08A8361C; }
    goto L_08A836CC;
L_08A836CC:;
    goto L_08A83684;
}

/* 08A836D4 */
u32 func_08A836D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A836D4:;
    sp = sp - 48;
    v0 = (u32)-3;
    ST8(sp, v0);
    v0 = (u32)-4;
    t1 = WSBW(a3);
    ST8(sp+1, v0);
    v0 = 30;
    v1 = 106;
    ST8(sp+2, v0);
    v0 = 102;
    a2 = a2 & 0xffff;
    ST8(sp+3, v0);
    v0 = (u32)-78;
    a3 = sp + 0;
    ST8(sp+4, v1);
    ST8(sp+5, v0);
    ST32(sp+16, t1);
    v0 = LDU32(sp+16);
    STU32(sp+6, v0);
    t0 = 10;
    v0 = func_08A835D0(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A83734;
L_08A83734:;
    sp = sp + 48;
    return v0;
}

/* 08A83740 */
rv_t func_08A83740(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[1552] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1552);
L_08A83740:;
    sp = sp - 1552;
    v0 = 16;
    s0 = a0 + 0;
    ST32(sp+1520, v0);
    goto L_08A8375C;
L_08A8375C:;
    a0 = LD32(s0+1200);
    goto L_08A83760;
L_08A83760:;
    s1 = (u32)-1;
    { u64 r_ = func_08A6B358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83768;
L_08A83768:;
    a3 = 0 + 0;
    t0 = sp + 1504;
    t1 = sp + 1520;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    a2 = 1499;
    if (cnd_) { goto L_08A83800; }
    goto L_08A83780;
L_08A83780:;
    a0 = LD32(s0+1200);
    v0 = sceNetInetRecvfrom(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A83788;
L_08A83788:;
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8375C; }
    goto L_08A83790;
L_08A83790:;
    a2 = LD_U16(sp+1506);
    a1 = LD32(sp+1508);
    v0 = func_08A810E8(a0, a1, a2);
    goto L_08A8379C;
L_08A8379C:;
    cnd_ = v0 != s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8375C; }
    goto L_08A837A4;
L_08A837A4:;
    a1 = LD32(sp+1508);
    a2 = LD_U16(sp+1506);
    v0 = func_08A80448(a1, a2, 0, 0, 0);
    goto L_08A837B0;
L_08A837B0:;
    a0 = v0 + 0;
    s1 = v0 + 0;
    v0 = func_08A8052C(a0);
    goto L_08A837BC;
L_08A837BC:;
    a0 = s1 + 0;
    a1 = 17;
    cnd_ = v0 != 0;
    v1 = 5;
    if (cnd_) { goto L_08A837E8; }
    goto L_08A837CC;
L_08A837CC:;
    func_08A80500(a0, a1);
    goto L_08A837D4;
L_08A837D4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    f0 = func_08A810A0(a0, a1, 0, 0, 0);
    goto L_08A837E0;
L_08A837E0:;
    a0 = LD32(s0+1200);
    goto L_08A83760;
L_08A837E8:;
    v0 = v1 + 0;
    sp = sp + 1552;
    return (rv_t){ v0, v1, f0 };
L_08A83800:;
    v0 = func_08A6B620(a1, a2, a3, t0, t1, 0, 0);
    goto L_08A83808;
L_08A83808:;
    v1 = LD32(s0+1204);
    v0 = v0 - v1;
    v0 = v0 < 0x7d1u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A83824; }
    goto L_08A8381C;
L_08A8381C:;
    v1 = 0 + 0;
    goto L_08A837E8;
L_08A83824:;
    a0 = LD32(s0+1200);
    v0 = sceNetInetClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8382C;
L_08A8382C:;
    v0 = (u32)-1;
    ST32(s0+1200, v0);
    v1 = D_08C32C84 - (11396);
    v0 = 1;
    ST32(s0, v0);
    a0 = s0 + 0;
    a1 = 3;
    a2 = LD32(v1+11396);
    v0 = LD32(s0+1160);
    t_ = v0;
    a3 = LD32(s0+1172);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83858;
L_08A83858:;
    v1 = 0 + 0;
    goto L_08A837E8;
}

/* 08A83860 */
rv_t func_08A83860(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83860:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08A81298(a0);
    goto L_08A83874;
L_08A83874:;
    v0 = 1;
    v1 = LD32(s0);
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A83898; }
    goto L_08A83884;
L_08A83884:;
    a0 = s0 + 0;
    cnd_ = v1 == 0;
    v0 = v1 < 0x4u;
    if (cnd_) { goto L_08A838BC; }
    goto L_08A83890;
L_08A83890:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A838AC; }
    goto L_08A83898;
L_08A83898:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A838AC:;
    { rv_t r_ = func_08A834C0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A838B4;
L_08A838B4:;
    a1 = v0 + 0;
    goto L_08A83898;
L_08A838BC:;
    { rv_t r_ = func_08A83740(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A838C4;
L_08A838C4:;
    a1 = v0 + 0;
    goto L_08A83898;
}

/* 08A838CC */
void func_08A838CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A838CC:;
    sp = sp - 16;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A838F4; }
    goto L_08A838E4;
L_08A838E4:;
    goto L_08A838E8;
L_08A838E8:;
    sp = sp + 16;
    return;
L_08A838F4:;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A838FC;
L_08A838FC:;
    v1 = LD32(s0+16);
    t_ = v1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83908;
L_08A83908:;
    goto L_08A838E8;
}

/* 08A83910 */
void func_08A83910(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83910:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    v1 = LD32(a0+12);
    a1 = LD32(a0+8);
    a0 = LD32(a0+20);
    v0 = v0 + v1;
    { s64 p_ = (s64)(s32)v0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    ST32(s0+4, v0);
    v0 = func_08A6AF98(a0, a1, t1, t2, t3);
    goto L_08A83944;
L_08A83944:;
    ST32(s0+20, v0);
    sp = sp + 16;
    return;
}

/* 08A83958 */
void func_08A83958(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83958:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = a2 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83978;
L_08A83978:;
    a0 = v0 + 0;
    a2 = LD32(s0+8);
    a1 = s1 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A83988;
L_08A83988:;
    sp = sp + 16;
    return;
}

/* 08A8399C */
u32 func_08A8399C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A8399C:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = 24;
    s1 = a1 + 0;
    s0 = a2 + 0;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A839C8;
L_08A839C8:;
    s2 = v0 + 0;
    v0 = 8;
    if (s1 == 0) s1 = v0;
    ST32(s2+16, s0);
    ST32(s2, 0);
    ST32(s2+4, s1);
    ST32(s2+8, s3);
    cnd_ = s1 != 0;
    ST32(s2+12, s1);
    if (cnd_) { goto L_08A83A10; }
    goto L_08A839EC;
L_08A839EC:;
    ST32(s2+20, 0);
    goto L_08A839F0;
L_08A839F0:;
    v0 = s2 + 0;
    sp = sp + 32;
    return v0;
L_08A83A10:;
    { s64 p_ = (s64)(s32)s1 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83A1C;
L_08A83A1C:;
    ST32(s2+20, v0);
    goto L_08A839F0;
}

/* 08A83A24 */
u64 func_08A83A24(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83A24:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A83A64; }
    goto L_08A83A44;
L_08A83A44:;
    a1 = s0 + 0;
    goto L_08A83A48;
L_08A83A48:;
    a0 = s1 + 0;
    func_08A838CC(a0, a1);
    goto L_08A83A50;
L_08A83A50:;
    v0 = LD32(s1);
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A83A48; }
    goto L_08A83A64;
L_08A83A64:;
    a0 = LD32(s1+20);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83A6C;
L_08A83A6C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83A74;
L_08A83A74:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A83A88 */
u32 func_08A83A88(u32 a0)
{
    u32 v0 = 0;
L_08A83A88:;
    v0 = LD32(a0);
    return v0;
}

/* 08A83A90 */
u64 func_08A83A90(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08A83A90:;
    cnd_ = (s32)a1 < 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A83ABC; }
    goto L_08A83A98;
L_08A83A98:;
    v0 = LD32(a0);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A83ABC; }
    goto L_08A83AA8;
L_08A83AA8:;
    v0 = LD32(a0+8);
    v1 = LD32(a0+20);
    { s64 p_ = (s64)(s32)v0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v1 = v1 + v0;
    goto L_08A83ABC;
L_08A83ABC:;
    v0 = v1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A83AC4 */
void func_08A83AC4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83AC4:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A83AD8; }
    goto L_08A83AD0;
L_08A83AD0:;
    a2 = LD32(a0);
    func_08A83AE4(a0, a1, a2, t1, t2, t3);
    goto L_08A83AD8;
L_08A83AD8:;
    sp = sp + 16;
    return;
}

/* 08A83AE4 */
void func_08A83AE4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A83AE4:;
    sp = sp - 32;
    s4 = a1 + 0;
    s2 = a2 + 0;
    v1 = LD32(a0);
    v0 = LD32(a0+4);
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A83BA0; }
    goto L_08A83B18;
L_08A83B18:;
    s3 = v1 + 1;
    v0 = (s32)s2 < (s32)v1;
    a1 = s2 + 1;
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s1, s3);
    if (cnd_) { goto L_08A83B60; }
    goto L_08A83B30;
L_08A83B30:;
    a0 = s1 + 0;
    goto L_08A83B34;
L_08A83B34:;
    a1 = s4 + 0;
    a2 = s2 + 0;
    func_08A83958(a0, a1, a2);
    goto L_08A83B40;
L_08A83B40:;
    sp = sp + 32;
    return;
L_08A83B60:;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83B68;
L_08A83B68:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83B78;
L_08A83B78:;
    v1 = LD32(s1+8);
    a2 = s3 - s2;
    a2 = a2 - 1;
    { s64 p_ = (s64)(s32)a2 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = s0 + 0;
    a2 = lo;
    a1 = v0 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83B98;
L_08A83B98:;
    a0 = s1 + 0;
    goto L_08A83B34;
L_08A83BA0:;
    func_08A83910(a0, t1, t2, t3);
    goto L_08A83BA8;
L_08A83BA8:;
    v1 = LD32(s1);
    goto L_08A83B18;
}

/* 08A83BB0 */
u64 func_08A83BB0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A83BB0:;
    sp = sp - 32;
    s3 = a0 + 0;
    s1 = LD32(a0);
    v0 = s1 - 1;
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08A83C04; }
    goto L_08A83BE0;
L_08A83BE0:;
    v0 = s1 - 1;
    ST32(s3, v0);
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A83C04:;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83C0C;
L_08A83C0C:;
    a0 = s3 + 0;
    a1 = s2 + 1;
    s0 = v0 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83C1C;
L_08A83C1C:;
    v1 = LD32(s3+8);
    a2 = s1 - s2;
    a2 = a2 - 1;
    { s64 p_ = (s64)(s32)a2 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = s0 + 0;
    a2 = lo;
    a1 = v0 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83C3C;
L_08A83C3C:;
    s1 = LD32(s3);
    goto L_08A83BE0;
}

/* 08A83C44 */
u64 func_08A83C44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83C44:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_08A838CC(a0, a1);
    goto L_08A83C60;
L_08A83C60:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A83BB0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83C6C;
L_08A83C6C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A83C80 */
void func_08A83C80(u32 a0, u32 a1, u32 a2)
{
    u32 s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83C80:;
    sp = sp - 16;
    s2 = a1 + 0;
    a1 = a2 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08A838CC(a0, a1);
    goto L_08A83CA8;
L_08A83CA8:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    func_08A83958(a0, a1, a2);
    goto L_08A83CB8;
L_08A83CB8:;
    sp = sp + 16;
    return;
}

/* 08A83CD0 */
void func_08A83CD0(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83CD0:;
    sp = sp - 16;
    v0 = a0 + 0;
    a3 = a1 + 0;
    a2 = LD32(a0+8);
    a1 = LD32(v0);
    a0 = LD32(a0+20);
    func_08A88510(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A83CF0;
L_08A83CF0:;
    sp = sp + 16;
    return;
}

/* 08A83CFC */
rv_t func_08A83CFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A83CFC:;
    sp = sp - 48;
    v0 = 1;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a3 + 0;
    cnd_ = a0 == 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08A83DB4; }
    goto L_08A83D34;
L_08A83D34:;
    s0 = LD32(a0);
    cnd_ = s0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A83D94; }
    goto L_08A83D40;
L_08A83D40:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A83DBC; }
    goto L_08A83D48;
L_08A83D48:;
    a1 = a3 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83D50;
L_08A83D50:;
    a3 = LD32(s2+8);
    a2 = s0 - s1;
    a0 = s3 + 0;
    a1 = v0 + 0;
    t0 = s4 + 0;
    t1 = sp + 0;
    { rv_t r_ = func_08A83FC8(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83D6C;
L_08A83D6C:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A83DB4; }
    goto L_08A83D74;
L_08A83D74:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A83D94; }
    goto L_08A83D80;
L_08A83D80:;
    v0 = LD32(s2+20);
    v1 = LD32(s2+8);
    v0 = a1 - v0;
    { s32 x_ = (s32)v0, y_ = (s32)v1; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v0 = lo;
    goto L_08A83D94;
L_08A83D94:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A83DB4:;
    v0 = (u32)-1;
    goto L_08A83D94;
L_08A83DBC:;
    a1 = a3 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83DC4;
L_08A83DC4:;
    a3 = LD32(s2+8);
    a2 = s0 - s1;
    a0 = s3 + 0;
    a1 = v0 + 0;
    t0 = s4 + 0;
    { rv_t r_ = func_08A83F38(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83DDC;
L_08A83DDC:;
    goto L_08A83D6C;
}

/* 08A83DE4 */
u64 func_08A83DE4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A83DE4:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A83E40; }
    goto L_08A83E14;
L_08A83E14:;
    a1 = s0 + 0;
    goto L_08A83E18;
L_08A83E18:;
    a0 = s1 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83E20;
L_08A83E20:;
    a0 = v0 + 0;
    t_ = s3;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83E2C;
L_08A83E2C:;
    v0 = LD32(s1);
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_08A83E18; }
    goto L_08A83E40;
L_08A83E40:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A83E5C */
rv_t func_08A83E5C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A83E5C:;
    sp = sp - 32;
    s4 = a1 + 0;
    s3 = a0 + 0;
    v0 = LD32(a0);
    s1 = v0 - 1;
    cnd_ = (s32)s1 < 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_08A83EC0; }
    goto L_08A83E90;
L_08A83E90:;
    a1 = s1 + 0;
    goto L_08A83E94;
L_08A83E94:;
    a0 = s3 + 0;
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83E9C;
L_08A83E9C:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    s0 = v0 + 0;
    t_ = s4;
    s1 = s1 - 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83EB0;
L_08A83EB0:;
    cnd_ = v0 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A83EC8; }
    goto L_08A83EB8;
L_08A83EB8:;
    cnd_ = (s32)s1 >= 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08A83E94; }
    goto L_08A83EC0;
L_08A83EC0:;
    s0 = 0 + 0;
    v0 = s0 + 0;
    goto L_08A83EC8;
L_08A83EC8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A83EE8 */
void func_08A83EE8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A83EE8:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = func_08A83A88(a0);
    goto L_08A83F00;
L_08A83F00:;
    s0 = v0 - 1;
    cnd_ = (s32)s0 < 0;
    if (cnd_) { goto L_08A83F28; }
    goto L_08A83F0C;
L_08A83F0C:;
    a1 = s0 + 0;
    goto L_08A83F10;
L_08A83F10:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    { u64 r_ = func_08A83C44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A83F1C;
L_08A83F1C:;
    cnd_ = (s32)s0 >= 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A83F10; }
    goto L_08A83F24;
L_08A83F24:;
    goto L_08A83F28;
L_08A83F28:;
    sp = sp + 16;
    return;
}

/* 08A83F38 */
rv_t func_08A83F38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A83F38:;
    sp = sp - 32;
    s5 = a0 + 0;
    s4 = a2 + 0;
    s3 = a3 + 0;
    s2 = t0 + 0;
    s1 = 0 + 0;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { goto L_08A83F9C; }
    goto L_08A83F70;
L_08A83F70:;
    s0 = a1 + 0;
    a1 = s0 + 0;
    goto L_08A83F78;
L_08A83F78:;
    t_ = s2;
    a0 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A83F80;
L_08A83F80:;
    s1 = s1 + 1;
    a0 = s0 + 0;
    v1 = (s32)s1 < (s32)s4;
    cnd_ = v0 == 0;
    s0 = s0 + s3;
    if (cnd_) { goto L_08A83FA0; }
    goto L_08A83F94;
L_08A83F94:;
    cnd_ = v1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A83F78; }
    goto L_08A83F9C;
L_08A83F9C:;
    a0 = 0 + 0;
    goto L_08A83FA0;
L_08A83FA0:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A83FC8 */
rv_t func_08A83FC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A83FC8:;
    sp = sp - 48;
    s1 = a2 - 1;
    s7 = t1 + 0;
    s6 = a0 + 0;
    s5 = a1 + 0;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = 0 + 0;
    cnd_ = (s32)s1 < 0;
    ST32(t1, 0);
    if (cnd_) { goto L_08A84058; }
    goto L_08A84018;
L_08A84018:;
    fp = 1;
    v0 = s2 + s1;
    goto L_08A84020;
L_08A84020:;
    s0 = (u32)((s32)v0 >> 1);
    { s64 p_ = (s64)(s32)s0 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = s6 + 0;
    a0 = lo;
    t_ = s4;
    a0 = s5 + a0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A84038;
L_08A84038:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s7, fp); goto L_08A84040; }
    goto L_08A84040;
L_08A84040:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { s2 = s0 + 1; goto L_08A8404C; }
    goto L_08A84048;
L_08A84048:;
    s1 = s0 - 1;
    goto L_08A8404C;
L_08A8404C:;
    v0 = (s32)s1 < (s32)s2;
    cnd_ = v0 == 0;
    v0 = s2 + s1;
    if (cnd_) { goto L_08A84020; }
    goto L_08A84058;
L_08A84058:;
    { s64 p_ = (s64)(s32)s2 * (s32)s3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = s5 + v0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A84094 */
u32 func_08A84094(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t2, u32 t3)
{
    u32 v0 = 0, t1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A84094:;
    v0 = a3 + 0;
    sp = sp - 16;
    t1 = t0 + 0;
    a3 = a2 + 0;
    t0 = v0 + 0;
    a2 = 4;
    v0 = func_08A840C0(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A840B4;
L_08A840B4:;
    sp = sp + 16;
    return v0;
}

/* 08A840C0 */
u32 func_08A840C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A840C0:;
    sp = sp - 48;
    s5 = a0 + 0;
    a0 = 20;
    s2 = a1 + 0;
    s7 = a3 + 0;
    s6 = t0 + 0;
    s4 = a2 + 0;
    s3 = t1 + 0;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A84108;
L_08A84108:;
    a0 = s2 << 2;
    s1 = v0 + 0;
    { u64 r_ = func_08A6AF74(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A84114;
L_08A84114:;
    ST32(s1, v0);
    cnd_ = (s32)s2 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8414C; }
    goto L_08A84120;
L_08A84120:;
    a0 = s5 + 0;
    a1 = s4 + 0;
    a2 = s3 + 0;
    v0 = func_08A8399C(a0, a1, a2, 0, 0, 0);
    goto L_08A84130;
L_08A84130:;
    a1 = LD32(s1);
    v1 = s0 << 2;
    s0 = s0 + 1;
    v1 = v1 + a1;
    a0 = (s32)s0 < (s32)s2;
    cnd_ = a0 != 0;
    ST32(v1, v0);
    if (cnd_) { goto L_08A84120; }
    goto L_08A8414C;
L_08A8414C:;
    ST32(s1+4, s2);
    v0 = s1 + 0;
    ST32(s1+8, s3);
    ST32(s1+16, s6);
    ST32(s1+12, s7);
    sp = sp + 48;
    return v0;
}

/* 08A8418C */
void func_08A8418C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8418C:;
    sp = sp - 16;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A841E8; }
    goto L_08A841A4;
L_08A841A4:;
    v0 = LD32(a0+4);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A841D8; }
    goto L_08A841B0;
L_08A841B0:;
    v1 = LD32(s1);
    goto L_08A841B4;
L_08A841B4:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    a0 = LD32(v0);
    { u64 r_ = func_08A83A24(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A841C8;
L_08A841C8:;
    v0 = LD32(s1+4);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A841B4; }
    goto L_08A841D8;
L_08A841D8:;
    a0 = LD32(s1);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A841E0;
L_08A841E0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A6AFBC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A841E8;
L_08A841E8:;
    sp = sp + 16;
    return;
}

/* 08A841FC */
u32 func_08A841FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A841FC:;
    sp = sp - 16;
    v0 = 0 + 0;
    s2 = 0 + 0;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A84258; }
    goto L_08A84220;
L_08A84220:;
    v0 = LD32(a0+4);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A84254; }
    goto L_08A8422C;
L_08A8422C:;
    v1 = LD32(s1);
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = func_08A83A88(a0);
    goto L_08A84244;
L_08A84244:;
    v1 = LD32(s1+4);
    v1 = (s32)s0 < (s32)v1;
    cnd_ = v1 != 0;
    s2 = s2 + v0;
    if (cnd_) { goto L_08A8422C; }
    goto L_08A84254;
L_08A84254:;
    v0 = s2 + 0;
    goto L_08A84258;
L_08A84258:;
    sp = sp + 16;
    return v0;
}

/* 08A84270 */
void func_08A84270(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A84270:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A842E8; }
    goto L_08A84294;
L_08A84294:;
    v0 = LD32(s0+12);
    t_ = v0;
    a1 = LD32(s0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A842A0;
L_08A842A0:;
    v1 = LD32(s0);
    s2 = v0 << 2;
    a2 = LD32(s0+16);
    v1 = s2 + v1;
    a0 = LD32(v1);
    a1 = s1 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_08A83CFC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A842C4;
L_08A842C4:;
    v1 = (u32)-1;
    a1 = s1 + 0;
    cnd_ = v0 == v1;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A84300; }
    goto L_08A842D4;
L_08A842D4:;
    v0 = LD32(s0);
    a1 = s1 + 0;
    v0 = s2 + v0;
    a0 = LD32(v0);
    func_08A83C80(a0, a1, a2);
    goto L_08A842E8;
L_08A842E8:;
    goto L_08A842EC;
L_08A842EC:;
    sp = sp + 16;
    return;
L_08A84300:;
    v0 = LD32(s0);
    v0 = s2 + v0;
    a0 = LD32(v0);
    func_08A83AC4(a0, a1, 0, 0, 0);
    goto L_08A84310;
L_08A84310:;
    goto L_08A842EC;
}

/* 08A84318 */
rv_t func_08A84318(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A84318:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A84394; }
    goto L_08A84340;
L_08A84340:;
    v0 = LD32(s0+12);
    t_ = v0;
    a1 = LD32(s0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8434C;
L_08A8434C:;
    v1 = LD32(s0);
    s2 = v0 << 2;
    a2 = LD32(s0+16);
    v1 = s2 + v1;
    a0 = LD32(v1);
    a1 = s1 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_08A83CFC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A84370;
L_08A84370:;
    v1 = (u32)-1;
    a1 = v0 + 0;
    cnd_ = v0 == v1;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A84394; }
    goto L_08A84380;
L_08A84380:;
    v0 = LD32(s0);
    v0 = s2 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_08A83C44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A84390;
L_08A84390:;
    a2 = 1;
    goto L_08A84394;
L_08A84394:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A843B0 */
rv_t func_08A843B0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A843B0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A8442C; }
    goto L_08A843D8;
L_08A843D8:;
    v0 = LD32(s0+12);
    t_ = v0;
    a1 = LD32(s0+4);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A843E4;
L_08A843E4:;
    v1 = LD32(s0);
    s2 = v0 << 2;
    a2 = LD32(s0+16);
    v1 = s2 + v1;
    a0 = LD32(v1);
    a1 = s1 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_08A83CFC(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A84408;
L_08A84408:;
    v1 = (u32)-1;
    a1 = v0 + 0;
    cnd_ = v0 == v1;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A8442C; }
    goto L_08A84418;
L_08A84418:;
    v0 = LD32(s0);
    v0 = s2 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_08A83A90(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A84428;
L_08A84428:;
    a2 = v0 + 0;
    goto L_08A8442C;
L_08A8442C:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A84448 */
void func_08A84448(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A84448:;
    v0 = a0 < 0x1u;
    v1 = a1 < 0x1u;
    sp = sp - 32;
    v0 = v0 | v1;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A844B8; }
    goto L_08A8447C;
L_08A8447C:;
    v0 = LD32(a0+4);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A844B8; }
    goto L_08A84488;
L_08A84488:;
    v1 = LD32(s1);
    goto L_08A8448C;
L_08A8448C:;
    v0 = s0 << 2;
    a1 = s3 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a2 = s2 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_08A83DE4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A844A8;
L_08A844A8:;
    v0 = LD32(s1+4);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_08A8448C; }
    goto L_08A844B8;
L_08A844B8:;
    sp = sp + 32;
    return;
}

/* 08A844D4 */
rv_t func_08A844D4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A844D4:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8453C; }
    goto L_08A84504;
L_08A84504:;
    v0 = LD32(s1);
    goto L_08A84508;
L_08A84508:;
    v1 = s0 << 2;
    a1 = s3 + 0;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a2 = s2 + 0;
    s0 = s0 + 1;
    { rv_t r_ = func_08A83E5C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A84524;
L_08A84524:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A84540; }
    goto L_08A8452C;
L_08A8452C:;
    v0 = LD32(s1+4);
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A84508; }
    goto L_08A8453C;
L_08A8453C:;
    v1 = 0 + 0;
    goto L_08A84540;
L_08A84540:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A84560 */
void func_08A84560(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
L_08A84560:;
    v1 = 0x67450000u;
    a1 = 0xefcd0000u;
    a2 = 0x98ba0000u;
    v0 = 0x10320000u;
    v1 = v1 | 0x2301;
    a1 = a1 | 0xab89;
    a2 = a2 | 0xdcfe;
    v0 = v0 | 0x5476;
    ST32(a0+12, v0);
    ST32(a0, v1);
    ST32(a0+4, a1);
    ST32(a0+8, a2);
    ST32(a0+20, 0);
    ST32(a0+16, 0);
    return;
}

/* 08A8459C */
void func_08A8459C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A8459C:;
    sp = sp - 32;
    v1 = a2 << 3;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+16);
    a0 = v0 + v1;
    v1 = a0 < v1;
    ST32(s0+16, a0);
    cnd_ = v1 == 0;
    a2 = (v0 >> 3) & 0x3f;
    if (cnd_) { goto L_08A845EC; }
    goto L_08A845E0;
L_08A845E0:;
    v0 = LD32(s0+20);
    v0 = v0 + 1;
    ST32(s0+20, v0);
    goto L_08A845EC;
L_08A845EC:;
    a0 = LD32(s0+20);
    v0 = 64;
    s2 = v0 - a2;
    v1 = s3 >> 29;
    a0 = a0 + v1;
    v0 = s3 < s2;
    ST32(s0+20, a0);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A84644; }
    goto L_08A84610;
L_08A84610:;
    a0 = s0 + a2;
    a1 = s4 + s1;
    a2 = s3 - s1;
    a0 = a0 + 24;
    func_08A85330(a0, a1, a2);
    goto L_08A84624;
L_08A84624:;
    sp = sp + 32;
    return;
L_08A84644:;
    a0 = s0 + a2;
    a0 = a0 + 24;
    a2 = s2 + 0;
    func_08A85330(a0, a1, a2);
    goto L_08A84654;
L_08A84654:;
    a1 = s0 + 24;
    a0 = s0 + 0;
    func_08A84740(a0, a1);
    goto L_08A84660;
L_08A84660:;
    v0 = s2 + 63;
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    s1 = s2 + 0;
    if (cnd_) { goto L_08A84678; }
    goto L_08A84670;
L_08A84670:;
    a2 = 0 + 0;
    goto L_08A84610;
L_08A84678:;
    a1 = s4 + s1;
    goto L_08A8467C;
L_08A8467C:;
    a0 = s0 + 0;
    s1 = s1 + 64;
    func_08A84740(a0, a1);
    goto L_08A84688;
L_08A84688:;
    v0 = s1 + 63;
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    a1 = s4 + s1;
    if (cnd_) { goto L_08A8467C; }
    goto L_08A84698;
L_08A84698:;
    a2 = 0 + 0;
    goto L_08A84610;
}

/* 08A846A0 */
void func_08A846A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A846A0:;
    sp = sp - 32;
    a2 = 8;
    s1 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    a1 = a1 + 16;
    func_08A85284(a0, a1, a2);
    goto L_08A846C8;
L_08A846C8:;
    a1 = D_08B1DC48 - (-9144);
    v0 = LD32(s0+16);
    a1 = a1 - 9144;
    a0 = s0 + 0;
    a3 = (v0 >> 3) & 0x3f;
    v1 = a3 < 0x38u;
    v0 = 56;
    cnd_ = v1 != 0;
    a2 = v0 - a3;
    if (cnd_) { goto L_08A846F4; }
    goto L_08A846EC;
L_08A846EC:;
    v0 = 120;
    a2 = v0 - a3;
    goto L_08A846F4;
L_08A846F4:;
    func_08A8459C(a0, a1, a2);
    goto L_08A846FC;
L_08A846FC:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 8;
    func_08A8459C(a0, a1, a2);
    goto L_08A8470C;
L_08A8470C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 16;
    func_08A85284(a0, a1, a2);
    goto L_08A8471C;
L_08A8471C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 88;
    func_08A8534C(a0, a1, a2);
    goto L_08A8472C;
L_08A8472C:;
    sp = sp + 32;
    return;
}

/* 08A84740 */
void func_08A84740(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A84740:;
    sp = sp - 128;
    a2 = 64;
    s0 = a0 + 0;
    t9 = LD32(a0+8);
    t7 = LD32(a0+12);
    fp = LD32(a0+4);
    a0 = sp + 0;
    s7 = LD32(s0);
    ST32(sp+64, t7);
    ST32(sp+68, t9);
    func_08A852D4(a0, a1, a2);
    goto L_08A84794;
L_08A84794:;
    v1 = ~(0 | fp);
    t9 = LD32(sp+68);
    t7 = LD32(sp+64);
    t8 = LD32(sp);
    v0 = fp & t9;
    v1 = v1 & t7;
    v0 = v0 | v1;
    v0 = v0 + t8;
    v1 = 0xd76a0000u;
    v0 = s7 + v0;
    v1 = v1 | 0xa478;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    s4 = LD32(sp+4);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + s4;
    v1 = 0xe8c70000u;
    v0 = t7 + v0;
    v1 = v1 | 0xb756;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    s6 = LD32(sp+8);
    v1 = ~(0 | t7);
    v1 = v1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + s6;
    v1 = 0x24200000u;
    v0 = t9 + v0;
    v1 = v1 | 0x70db;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    s1 = LD32(sp+12);
    v1 = ~(0 | t9);
    v1 = v1 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + s1;
    v1 = 0xc1bd0000u;
    v0 = fp + v0;
    v1 = v1 | 0xceee;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    s5 = LD32(sp+16);
    v1 = ~(0 | fp);
    v1 = v1 & t7;
    v0 = fp & t9;
    v0 = v0 | v1;
    v0 = v0 + s5;
    v1 = 0xf57c0000u;
    v0 = s7 + v0;
    v1 = v1 | 0xfaf;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    t4 = LD32(sp+20);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t4;
    v1 = 0x47870000u;
    v0 = t7 + v0;
    v1 = v1 | 0xc62a;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    s2 = LD32(sp+24);
    v1 = ~(0 | t7);
    v1 = v1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + s2;
    v1 = 0xa8300000u;
    v0 = t9 + v0;
    v1 = v1 | 0x4613;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    t1 = LD32(sp+28);
    v1 = ~(0 | t9);
    v1 = v1 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + t1;
    v1 = 0xfd460000u;
    v0 = fp + v0;
    v1 = v1 | 0x9501;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    t5 = LD32(sp+32);
    v1 = ~(0 | fp);
    v1 = v1 & t7;
    v0 = fp & t9;
    v0 = v0 | v1;
    v0 = v0 + t5;
    v1 = 0x69800000u;
    v0 = s7 + v0;
    v1 = v1 | 0x98d8;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    s3 = LD32(sp+36);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + s3;
    v1 = 0x8b440000u;
    v0 = t7 + v0;
    v1 = v1 | 0xf7af;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    t2 = LD32(sp+40);
    v1 = ~(0 | t7);
    v1 = v1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + t2;
    v1 = 0xffff0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x5bb1;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    t6 = LD32(sp+44);
    v1 = ~(0 | t9);
    v1 = v1 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + t6;
    v1 = 0x895c0000u;
    v0 = fp + v0;
    v1 = v1 | 0xd7be;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    a3 = LD32(sp+48);
    v1 = ~(0 | fp);
    v1 = v1 & t7;
    v0 = fp & t9;
    v0 = v0 | v1;
    v0 = v0 + a3;
    v1 = 0x6b900000u;
    v0 = s7 + v0;
    v1 = v1 | 0x1122;
    s7 = v0 + v1;
    s7 = ROTR(s7, 25);
    s7 = s7 + fp;
    t3 = LD32(sp+52);
    v1 = ~(0 | s7);
    v1 = v1 & t9;
    v0 = s7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t3;
    v1 = 0xfd980000u;
    v0 = t7 + v0;
    v1 = v1 | 0x7193;
    t7 = v0 + v1;
    t7 = ROTR(t7, 20);
    t7 = t7 + s7;
    a2 = LD32(sp+56);
    a1 = ~(0 | t7);
    v1 = a1 & fp;
    v0 = t7 & s7;
    v0 = v0 | v1;
    v0 = v0 + a2;
    v1 = 0xa6790000u;
    v0 = t9 + v0;
    v1 = v1 | 0x438e;
    t9 = v0 + v1;
    t9 = ROTR(t9, 15);
    t9 = t9 + t7;
    t0 = LD32(sp+60);
    a0 = ~(0 | t9);
    v1 = a0 & s7;
    v0 = t9 & t7;
    v0 = v0 | v1;
    v0 = v0 + t0;
    v1 = 0x49b40000u;
    v0 = fp + v0;
    v1 = v1 | 0x821;
    fp = v0 + v1;
    fp = ROTR(fp, 10);
    fp = fp + t9;
    a1 = t9 & a1;
    v0 = fp & t7;
    v0 = v0 | a1;
    v0 = v0 + s4;
    v1 = 0xf61e0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x2562;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    a0 = fp & a0;
    v0 = s7 & t9;
    v0 = v0 | a0;
    v0 = v0 + s2;
    v1 = 0xc0400000u;
    v0 = t7 + v0;
    v1 = v1 | 0xb340;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t6;
    v1 = 0x265e0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x5a51;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + t8;
    v1 = 0xe9b60000u;
    v0 = fp + v0;
    v1 = v1 | 0xc7aa;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v1 = ~(0 | t7);
    v1 = t9 & v1;
    v0 = fp & t7;
    v0 = v0 | v1;
    v0 = v0 + t4;
    v1 = 0xd62f0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x105d;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    v1 = ~(0 | t9);
    v1 = fp & v1;
    v0 = s7 & t9;
    v0 = v0 | v1;
    v0 = v0 + t2;
    v1 = 0x2440000u;
    v0 = t7 + v0;
    v1 = v1 | 0x1453;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t0;
    v1 = 0xd8a10000u;
    v0 = t9 + v0;
    v1 = v1 | 0xe681;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + s5;
    v1 = 0xe7d30000u;
    v0 = fp + v0;
    v1 = v1 | 0xfbc8;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v1 = ~(0 | t7);
    v1 = t9 & v1;
    v0 = fp & t7;
    v0 = v0 | v1;
    v0 = v0 + s3;
    v1 = 0x21e10000u;
    v0 = s7 + v0;
    v1 = v1 | 0xcde6;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    v1 = ~(0 | t9);
    v1 = fp & v1;
    v0 = s7 & t9;
    v0 = v0 | v1;
    v0 = v0 + a2;
    v1 = 0xc3370000u;
    v0 = t7 + v0;
    v1 = v1 | 0x7d6;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + s1;
    v1 = 0xf4d50000u;
    v0 = t9 + v0;
    v1 = v1 | 0xd87;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + t5;
    v1 = 0x455a0000u;
    v0 = fp + v0;
    v1 = v1 | 0x14ed;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v1 = ~(0 | t7);
    v1 = t9 & v1;
    v0 = fp & t7;
    v0 = v0 | v1;
    v0 = v0 + t3;
    v1 = 0xa9e30000u;
    v0 = s7 + v0;
    v1 = v1 | 0xe905;
    s7 = v0 + v1;
    s7 = ROTR(s7, 27);
    s7 = s7 + fp;
    v1 = ~(0 | t9);
    v1 = fp & v1;
    v0 = s7 & t9;
    v0 = v0 | v1;
    v0 = v0 + s6;
    v1 = 0xfcef0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xa3f8;
    t7 = v0 + v1;
    t7 = ROTR(t7, 23);
    t7 = t7 + s7;
    v1 = ~(0 | fp);
    v1 = s7 & v1;
    v0 = t7 & fp;
    v0 = v0 | v1;
    v0 = v0 + t1;
    v1 = 0x676f0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x2d9;
    t9 = v0 + v1;
    t9 = ROTR(t9, 18);
    t9 = t9 + t7;
    v1 = ~(0 | s7);
    v1 = t7 & v1;
    v0 = t9 & s7;
    v0 = v0 | v1;
    v0 = v0 + a3;
    v1 = 0x8d2a0000u;
    v0 = fp + v0;
    v1 = v1 | 0x4c8a;
    fp = v0 + v1;
    fp = ROTR(fp, 12);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + t4;
    v1 = 0xfffa0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x3942;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + t5;
    v1 = 0x87710000u;
    v0 = t7 + v0;
    v1 = v1 | 0xf681;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + t6;
    v1 = 0x6d9d0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x6122;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + a2;
    v1 = 0xfde50000u;
    v0 = fp + v0;
    v1 = v1 | 0x380c;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + s4;
    v1 = 0xa4be0000u;
    v0 = s7 + v0;
    v1 = v1 | 0xea44;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + s5;
    v1 = 0x4bde0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xcfa9;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + t1;
    v1 = 0xf6bb0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x4b60;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + t2;
    v1 = 0xbebf0000u;
    v0 = fp + v0;
    v1 = v1 | 0xbc70;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + t3;
    v1 = 0x289b0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x7ec6;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + t8;
    v1 = 0xeaa10000u;
    v0 = t7 + v0;
    v1 = v1 | 0x27fa;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + s1;
    v1 = 0xd4ef0000u;
    v0 = t9 + v0;
    v1 = v1 | 0x3085;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + s2;
    v1 = 0x4880000u;
    v0 = fp + v0;
    v1 = v1 | 0x1d05;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = fp ^ t9;
    v0 = v0 ^ t7;
    v0 = v0 + s3;
    v1 = 0xd9d40000u;
    v0 = s7 + v0;
    v1 = v1 | 0xd039;
    s7 = v0 + v1;
    s7 = ROTR(s7, 28);
    s7 = s7 + fp;
    v0 = s7 ^ fp;
    v0 = v0 ^ t9;
    v0 = v0 + a3;
    v1 = 0xe6db0000u;
    v0 = t7 + v0;
    v1 = v1 | 0x99e5;
    t7 = v0 + v1;
    t7 = ROTR(t7, 21);
    t7 = t7 + s7;
    v0 = t7 ^ s7;
    v0 = v0 ^ fp;
    v0 = v0 + t0;
    v1 = 0x1fa20000u;
    v0 = t9 + v0;
    v1 = v1 | 0x7cf8;
    t9 = v0 + v1;
    t9 = ROTR(t9, 16);
    t9 = t9 + t7;
    v0 = t9 ^ t7;
    v0 = v0 ^ s7;
    v0 = v0 + s6;
    v1 = 0xc4ac0000u;
    v0 = fp + v0;
    v1 = v1 | 0x5665;
    fp = v0 + v1;
    fp = ROTR(fp, 9);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + t8;
    v1 = 0xf4290000u;
    v0 = s7 + v0;
    v1 = v1 | 0x2244;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + t1;
    v1 = 0x432a0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xff97;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + a2;
    v1 = 0xab940000u;
    v0 = t9 + v0;
    v1 = v1 | 0x23a7;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + t4;
    v1 = 0xfc930000u;
    v0 = fp + v0;
    v1 = v1 | 0xa039;
    fp = v0 + v1;
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + a3;
    v1 = 0x655b0000u;
    v0 = s7 + v0;
    v1 = v1 | 0x59c3;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + s1;
    v1 = 0x8f0c0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xcc92;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + t2;
    v1 = 0xffef0000u;
    v0 = t9 + v0;
    v1 = v1 | 0xf47d;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + s4;
    v1 = 0x85840000u;
    v0 = fp + v0;
    v1 = v1 | 0x5dd1;
    fp = v0 + v1;
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + t5;
    v1 = 0x6fa80000u;
    v0 = s7 + v0;
    v1 = v1 | 0x7e4f;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + t0;
    v1 = 0xfe2c0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xe6e0;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + s2;
    v1 = 0xa3010000u;
    v0 = t9 + v0;
    v1 = v1 | 0x4314;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + t3;
    v1 = 0x4e080000u;
    v0 = fp + v0;
    v1 = v1 | 0x11a1;
    fp = v0 + v1;
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v0 = ~(0 | t7);
    v0 = fp | v0;
    v0 = t9 ^ v0;
    v0 = v0 + s5;
    v1 = 0xf7530000u;
    v0 = s7 + v0;
    v1 = v1 | 0x7e82;
    s7 = v0 + v1;
    s7 = ROTR(s7, 26);
    s7 = s7 + fp;
    v0 = ~(0 | t9);
    v0 = s7 | v0;
    v0 = fp ^ v0;
    v0 = v0 + t6;
    v1 = 0xbd3a0000u;
    v0 = t7 + v0;
    v1 = v1 | 0xf235;
    t7 = v0 + v1;
    t7 = ROTR(t7, 22);
    t7 = t7 + s7;
    v0 = ~(0 | fp);
    v0 = t7 | v0;
    v0 = s7 ^ v0;
    v0 = v0 + s6;
    v1 = 0x2ad70000u;
    v0 = t9 + v0;
    v1 = v1 | 0xd2bb;
    t9 = v0 + v1;
    t9 = ROTR(t9, 17);
    t9 = t9 + t7;
    v0 = ~(0 | s7);
    v0 = t9 | v0;
    v0 = t7 ^ v0;
    v0 = v0 + s3;
    v1 = 0xeb860000u;
    v0 = fp + v0;
    v1 = v1 | 0xd391;
    a2 = LD32(s0);
    a3 = LD32(s0+8);
    fp = v0 + v1;
    v1 = LD32(s0+4);
    v0 = LD32(s0+12);
    fp = ROTR(fp, 11);
    fp = fp + t9;
    v1 = v1 + fp;
    a2 = a2 + s7;
    a3 = a3 + t9;
    v0 = v0 + t7;
    ST32(s0+12, v0);
    a0 = sp + 0;
    a1 = 0 + 0;
    ST32(s0, a2);
    a2 = 64;
    ST32(s0+4, v1);
    ST32(s0+8, a3);
    func_08A8534C(a0, a1, a2);
    goto L_08A85254;
L_08A85254:;
    sp = sp + 128;
    return;
}

/* 08A85284 */
void func_08A85284(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A85284:;
    t1 = a0 + 0;
    cnd_ = a2 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A852CC; }
    goto L_08A85290;
L_08A85290:;
    a3 = a1 + 0;
    goto L_08A85294;
L_08A85294:;
    v0 = LD_U8(a3);
    a0 = t1 + t0;
    t0 = t0 + 4;
    ST8(a0, v0);
    a1 = t0 < a2;
    v0 = LD32(a3);
    v0 = v0 >> 8;
    ST8(a0+1, v0);
    v1 = LD_U16(a3+2);
    ST8(a0+2, v1);
    v0 = LD_U8(a3+3);
    a3 = a3 + 4;
    cnd_ = a1 != 0;
    ST8(a0+3, v0);
    if (cnd_) { goto L_08A85294; }
    goto L_08A852CC;
L_08A852CC:;
    return;
}

/* 08A852D4 */
void func_08A852D4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A852D4:;
    t1 = a2 + 0;
    t2 = a1 + 0;
    cnd_ = a2 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A85328; }
    goto L_08A852E4;
L_08A852E4:;
    a3 = a0 + 0;
    goto L_08A852E8;
L_08A852E8:;
    v0 = t2 + t0;
    a0 = LD_U8(v0+1);
    v1 = LD_U8(v0);
    a1 = LD_U8(v0+2);
    a2 = LD_U8(v0+3);
    a0 = a0 << 8;
    v1 = v1 | a0;
    a1 = a1 << 16;
    v1 = v1 | a1;
    a2 = a2 << 24;
    t0 = t0 + 4;
    v1 = v1 | a2;
    v0 = t0 < t1;
    ST32(a3, v1);
    cnd_ = v0 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A852E8; }
    goto L_08A85328;
L_08A85328:;
    return;
}

/* 08A85330 */
void func_08A85330(u32 a0, u32 a1, u32 a2)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85330:;
    sp = sp - 16;
    func_08A87AE0(a0, a1, a2);
    goto L_08A85340;
L_08A85340:;
    sp = sp + 16;
    return;
}

/* 08A8534C */
void func_08A8534C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8534C:;
    sp = sp - 16;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8535C;
L_08A8535C:;
    sp = sp + 16;
    return;
}

/* 08A85368 */
void func_08A85368(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A85368:;
    sp = sp - 32;
    s3 = D_08AE8F30 - (-28880);
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = a1 + 0;
    goto L_08A85390;
L_08A85390:;
    v0 = s2 + s1;
    a2 = LD_U8(v0);
    a0 = s0 + 0;
    a1 = s3 - 28880;
    s1 = s1 + 1;
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A853A8;
L_08A853A8:;
    v1 = s1 < 0x10u;
    cnd_ = v1 != 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_08A85390; }
    goto L_08A853B4;
L_08A853B4:;
    sp = sp + 32;
    return;
}

/* 08A853D0 */
void func_08A853D0(u32 a0, u32 a1, u32 a2)
{
    u32 s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A853D0:;
    sp = sp - 128;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = sp + 0;
    s2 = a2 + 0;
    func_08A84560(a0);
    goto L_08A853F8;
L_08A853F8:;
    a2 = s1 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    s0 = sp + 96;
    func_08A8459C(a0, a1, a2);
    goto L_08A8540C;
L_08A8540C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_08A846A0(a0, a1);
    goto L_08A85418;
L_08A85418:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    func_08A85368(a0, a1, 0, 0, 0, 0, 0);
    goto L_08A85424;
L_08A85424:;
    sp = sp + 128;
    return;
}

/* 08A8543C */
rv_t func_08A8543C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8543C:;
    sp = sp - 16;
    s1 = D_08C32C90 - (11408);
    v0 = LD_U8(s1+11408);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A854B0; }
    goto L_08A85458;
L_08A85458:;
    s0 = D_08B1DC8C - (-9076);
    v0 = LD32(s0-9076);
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    v0 = ((u32)(uintptr_t)func_08A9DF48) - (-8376);
    if (cnd_) { goto L_08A85490; }
    goto L_08A8546C;
L_08A8546C:;
    v0 = LD32(s0-9076);
    v0 = v0 + 4;
    goto L_08A85474;
L_08A85474:;
    t_ = v1;
    ST32(s0-9076, v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8547C;
L_08A8547C:;
    v0 = LD32(s0-9076);
    v1 = LD32(v0);
    cnd_ = v1 != 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08A85474; }
    goto L_08A8548C;
L_08A8548C:;
    v0 = ((u32)(uintptr_t)func_08A9DF48) - (-8376);
    goto L_08A85490;
L_08A85490:;
    v0 = v0 - 8376;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A854AC; }
    goto L_08A8549C;
L_08A8549C:;
    a0 = D_08B1E49C - (-7012);
    a0 = a0 - 7012;
    { rv_t r_ = func_08A9DF48(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A854A8;
L_08A854A8:;
    v0 = 1;
    goto L_08A854AC;
L_08A854AC:;
    ST8(s1+11408, v0);
    goto L_08A854B0;
L_08A854B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A854C4 */
void func_08A854C4(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A854C4:;
    v0 = ((u32)(uintptr_t)func_08A9DD34) - (-8908);
    sp = sp - 16;
    a0 = D_08B1E49C - (-7012);
    a1 = D_08C32C94 - (11412);
    v0 = v0 - 8908;
    a0 = a0 - 7012;
    cnd_ = v0 == 0;
    a1 = a1 + 11412;
    if (cnd_) { goto L_08A854F0; }
    goto L_08A854E8;
L_08A854E8:;
    { rv_t r_ = func_08A9DD34(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A854F0;
L_08A854F0:;
    v0 = D_08B20444 - (1092);
    v1 = LD32(v0+1092);
    cnd_ = v1 == 0;
    a0 = v0 + 1092;
    if (cnd_) { goto L_08A85518; }
    goto L_08A85500;
L_08A85500:;
    v0 = 0x0u;
    v0 = v0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8551C; }
    goto L_08A85510;
L_08A85510:;
    rs_break(0xDEAD, 0x08a85510); /* call to address 0x00000000 (unresolved weak symbol) */
    goto L_08A85518;
L_08A85518:;
    goto L_08A8551C;
L_08A8551C:;
    sp = sp + 16;
    return;
}

/* 08A85524 */
void func_08A85524(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85524:;
    sp = sp - 16;
    v0 = D_08B20154 - (340);
    v0 = v0 + 340;
    v1 = (u32)-1;
    a0 = LD32(v0-4);
    cnd_ = a0 == v1;
    s0 = v0 - 4;
    if (cnd_) { goto L_08A85568; }
    goto L_08A8554C;
L_08A8554C:;
    v1 = a0 + 0;
    s1 = (u32)-1;
    goto L_08A85554;
L_08A85554:;
    t_ = v1;
    s0 = s0 - 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8555C;
L_08A8555C:;
    v0 = LD32(s0);
    cnd_ = v0 != s1;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A85554; }
    goto L_08A85568;
L_08A85568:;
    sp = sp + 16;
    return;
}

/* 08A8557C */
u32 func_08A8557C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8557C:;
    sp = sp - 16;
    v1 = 1;
    s2 = a1 + 0;
    s0 = a2 + 0;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A8569C; }
    goto L_08A855A0;
L_08A855A0:;
    v1 = (s32)a0 < 2;
    cnd_ = v1 != 0;
    a1 = 2;
    if (cnd_) { goto L_08A85684; }
    goto L_08A855AC;
L_08A855AC:;
    cnd_ = a0 == a1;
    if (cnd_) { goto L_08A85674; }
    goto L_08A855B4;
L_08A855B4:;
    cnd_ = (s32)a0 < 0;
    v0 = (u32)-9;
    if (cnd_) { goto L_08A85614; }
    goto L_08A855BC;
L_08A855BC:;
    a2 = 1;
    cnd_ = s0 == a2;
    s1 = 1;
    if (cnd_) { goto L_08A855E0; }
    goto L_08A855C8;
L_08A855C8:;
    a3 = (s32)s0 < 2;
    cnd_ = a3 != 0;
    t0 = 2;
    if (cnd_) { goto L_08A85664; }
    goto L_08A855D4;
L_08A855D4:;
    cnd_ = s0 == t0;
    s1 = 2;
    if (cnd_) { goto L_08A855E0; }
    goto L_08A855DC;
L_08A855DC:;
    s1 = s0 + 0;
    goto L_08A855E0;
L_08A855E0:;
    t1 = 1;
    cnd_ = a0 == t1;
    t2 = (s32)a0 < 2;
    if (cnd_) { goto L_08A85654; }
    goto L_08A855EC;
L_08A855EC:;
    cnd_ = t2 != 0;
    t3 = 2;
    if (cnd_) { goto L_08A8563C; }
    goto L_08A855F4;
L_08A855F4:;
    cnd_ = a0 == t3;
    if (cnd_) { goto L_08A8562C; }
    goto L_08A855FC;
L_08A855FC:;
    v0 = a0 + 0;
    goto L_08A85600;
L_08A85600:;
    a2 = s2 + 0;
    goto L_08A85604;
L_08A85604:;
    a3 = (u32)((s32)s2 >> 31);
    a0 = v0 + 0;
    t0 = s1 + 0;
    { u64 r_ = sceIoLseek(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85614;
L_08A85614:;
    sp = sp + 16;
    return v0;
L_08A8562C:;
    v0 = sceKernelStderr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85634;
L_08A85634:;
    a2 = s2 + 0;
    goto L_08A85604;
L_08A8563C:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = a0 + 0; goto L_08A85600; }
    goto L_08A85644;
L_08A85644:;
    v0 = sceKernelStdin(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8564C;
L_08A8564C:;
    a2 = s2 + 0;
    goto L_08A85604;
L_08A85654:;
    v0 = sceKernelStdout(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8565C;
L_08A8565C:;
    a2 = s2 + 0;
    goto L_08A85604;
L_08A85664:;
    cnd_ = s0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A855E0; }
    goto L_08A8566C;
L_08A8566C:;
    s1 = s0 + 0;
    goto L_08A855E0;
L_08A85674:;
    v0 = sceKernelStderr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8567C;
L_08A8567C:;
    a0 = v0 + 0;
    goto L_08A855B4;
L_08A85684:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A855B4; }
    goto L_08A8568C;
L_08A8568C:;
    v0 = sceKernelStdin(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85694;
L_08A85694:;
    a0 = v0 + 0;
    goto L_08A855B4;
L_08A8569C:;
    v0 = sceKernelStdout(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A856A4;
L_08A856A4:;
    a0 = v0 + 0;
    goto L_08A855B4;
}

/* 08A856AC */
u64 func_08A856AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A856AC:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = ((u32)(uintptr_t)func_08A88040) - (-32704);
    v1 = a0 - 32704;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A85748; }
    goto L_08A856CC;
L_08A856CC:;
    { rv_t r_ = func_08A88040(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A856D4;
L_08A856D4:;
    s0 = v0 + 0;
    v0 = func_08A870E0();
    goto L_08A856DC;
L_08A856DC:;
    a2 = D_08AE8F38 - (-28872);
    v1 = D_08AE8F40 - (-28864);
    a1 = a2 - 28872;
    cnd_ = s0 == v0;
    a0 = v1 - 28864;
    if (cnd_) { goto L_08A85700; }
    goto L_08A856F0;
L_08A856F0:;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A856F8;
L_08A856F8:;
    a0 = s1 + 0;
    v0 = sceKernelExitThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85700;
L_08A85700:;
    a0 = s0 + 0;
    func_08A88F94(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A85708;
L_08A85708:;
    a0 = s0 + 0;
    v0 = func_08A8825C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08A85710;
L_08A85710:;
    s0 = v0 + 0;
    v0 = sceKernelGetModuleId(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85718;
L_08A85718:;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = sp + 0;
    t0 = 0 + 0;
    cnd_ = v0 == s0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A85748; }
    goto L_08A85730;
L_08A85730:;
    v0 = sceKernelStopModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85738;
L_08A85738:;
    a0 = s0 + 0;
    v0 = sceKernelUnloadModule(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85740;
L_08A85740:;
    a0 = s1 + 0;
    v0 = sceKernelExitThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85748;
L_08A85748:;
    a0 = 1;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    v0 = ModuleMgrForUser_8F2DF740(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85760;
L_08A85760:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A85774 */
u32 func_08A85774(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85774:;
    sp = sp - 16;
    s0 = D_08C32CB0 - (11440);
    v1 = LD32(s0+11440);
    s2 = a0 + 0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A8580C; }
    goto L_08A85798;
L_08A85798:;
    v1 = 0x0u;
    a0 = v1 + 0;
    cnd_ = a0 == 0;
    s1 = 0x10000u;
    if (cnd_) { goto L_08A857C0; }
    goto L_08A857A8;
L_08A857A8:;
    a3 = LD32(v1);
    cnd_ = a3 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A8584C; }
    goto L_08A857B4;
L_08A857B4:;
    s1 = a3 << 10;
    cnd_ = s1 == 0;
    v0 = LD32(s0+11440);
    if (cnd_) { goto L_08A85810; }
    goto L_08A857C0;
L_08A857C0:;
    v0 = D_08AE8F70 - (-28816);
    a0 = 2;
    a1 = v0 - 28816;
    a2 = 3;
    a3 = s1 + 0;
    t0 = 4096;
    v0 = sceKernelAllocPartitionMemory(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A857DC;
L_08A857DC:;
    v1 = D_08C32CB8 - (11448);
    a0 = v0 + 0;
    cnd_ = (s32)v0 <= 0;
    ST32(v1+11448, v0);
    if (cnd_) { goto L_08A8580C; }
    goto L_08A857EC;
L_08A857EC:;
    v0 = sceKernelGetBlockHeadAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A857F4;
L_08A857F4:;
    a3 = v0 + s1;
    a2 = D_08C32CB4 - (11444);
    a1 = D_08C32CAC - (11436);
    ST32(a2+11444, a3);
    ST32(a1+11436, v0);
    ST32(s0+11440, v0);
    goto L_08A8580C;
L_08A8580C:;
    v0 = LD32(s0+11440);
    goto L_08A85810;
L_08A85810:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (u32)-1; goto L_08A8584C; }
    goto L_08A85818;
L_08A85818:;
    a2 = D_08C32CAC - (11436);
    a1 = LD32(a2+11436);
    a0 = a1 + s2;
    t0 = a0 < v0;
    cnd_ = t0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A8584C; }
    goto L_08A85830;
L_08A85830:;
    t3 = D_08C32CB4 - (11444);
    t2 = LD32(t3+11444);
    t1 = t2 < a0;
    cnd_ = t1 != 0;
    if (cnd_) { goto L_08A85850; }
    goto L_08A85844;
L_08A85844:;
    v0 = a1 + 0;
    ST32(a2+11436, a0);
    goto L_08A8584C;
L_08A8584C:;
    goto L_08A85850;
L_08A85850:;
    sp = sp + 16;
    return v0;
}

/* 08A85864 */
u32 func_08A85864(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85864:;
    sp = sp - 16;
    v1 = 1;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A858F8; }
    goto L_08A85884;
L_08A85884:;
    v1 = (s32)a0 < 2;
    cnd_ = v1 != 0;
    a1 = 2;
    if (cnd_) { goto L_08A858E0; }
    goto L_08A85890;
L_08A85890:;
    cnd_ = a0 == a1;
    if (cnd_) { goto L_08A858D0; }
    goto L_08A85898;
L_08A85898:;
    v0 = a0 + 0;
    goto L_08A8589C;
L_08A8589C:;
    cnd_ = (s32)v0 < 0;
    v1 = (u32)-9;
    if (cnd_) { goto L_08A858B8; }
    goto L_08A858A4;
L_08A858A4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    v0 = sceIoRead(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A858B4;
L_08A858B4:;
    v1 = v0 + 0;
    goto L_08A858B8;
L_08A858B8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A858D0:;
    v0 = sceKernelStderr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A858D8;
L_08A858D8:;
    goto L_08A8589C;
L_08A858E0:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = a0 + 0; goto L_08A8589C; }
    goto L_08A858E8;
L_08A858E8:;
    v0 = sceKernelStdin(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A858F0;
L_08A858F0:;
    goto L_08A8589C;
L_08A858F8:;
    v0 = sceKernelStdout(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85900;
L_08A85900:;
    goto L_08A8589C;
}

/* 08A85908 */
u32 func_08A85908(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85908:;
    sp = sp - 16;
    v1 = 1;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A8599C; }
    goto L_08A85928;
L_08A85928:;
    v1 = (s32)a0 < 2;
    cnd_ = v1 != 0;
    a1 = 2;
    if (cnd_) { goto L_08A85984; }
    goto L_08A85934;
L_08A85934:;
    cnd_ = a0 == a1;
    if (cnd_) { goto L_08A85974; }
    goto L_08A8593C;
L_08A8593C:;
    v0 = a0 + 0;
    goto L_08A85940;
L_08A85940:;
    cnd_ = (s32)v0 < 0;
    v1 = (u32)-9;
    if (cnd_) { goto L_08A8595C; }
    goto L_08A85948;
L_08A85948:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    v0 = sceIoWrite(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85958;
L_08A85958:;
    v1 = v0 + 0;
    goto L_08A8595C;
L_08A8595C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A85974:;
    v0 = sceKernelStderr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8597C;
L_08A8597C:;
    goto L_08A85940;
L_08A85984:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = a0 + 0; goto L_08A85940; }
    goto L_08A8598C;
L_08A8598C:;
    v0 = sceKernelStdin(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85994;
L_08A85994:;
    goto L_08A85940;
L_08A8599C:;
    v0 = sceKernelStdout(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A859A4;
L_08A859A4:;
    goto L_08A85940;
}

/* 08A859AC */
u32 func_08A859AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A859AC:;
    sp = sp - 16;
    v1 = 1;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_08A85A20; }
    goto L_08A859BC;
L_08A859BC:;
    v1 = (s32)a0 < 2;
    cnd_ = v1 != 0;
    a1 = 2;
    if (cnd_) { goto L_08A85A08; }
    goto L_08A859C8;
L_08A859C8:;
    cnd_ = a0 == a1;
    if (cnd_) { goto L_08A859F8; }
    goto L_08A859D0;
L_08A859D0:;
    v0 = a0 + 0;
    goto L_08A859D4;
L_08A859D4:;
    cnd_ = (s32)v0 < 0;
    v1 = (u32)-9;
    if (cnd_) { goto L_08A859E8; }
    goto L_08A859DC;
L_08A859DC:;
    a0 = v0 + 0;
    v0 = sceIoClose(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A859E4;
L_08A859E4:;
    v1 = v0 + 0;
    goto L_08A859E8;
L_08A859E8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A859F8:;
    v0 = sceKernelStderr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85A00;
L_08A85A00:;
    goto L_08A859D4;
L_08A85A08:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = a0 + 0; goto L_08A859D4; }
    goto L_08A85A10;
L_08A85A10:;
    v0 = sceKernelStdin(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85A18;
L_08A85A18:;
    goto L_08A859D4;
L_08A85A20:;
    v0 = sceKernelStdout(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85A28;
L_08A85A28:;
    goto L_08A859D4;
}

/* 08A85A30 */
u32 func_08A85A30(u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A85A30:;
    v1 = 8192;
    v0 = 0 + 0;
    ST32(a1+4, v1);
    return v0;
}

/* 08A85A40 */
u32 func_08A85A40(void)
{
    u32 v0 = 0;
L_08A85A40:;
    v0 = 1;
    return v0;
}

/* 08A85A48 */
u32 func_08A85A48(void)
{
    u32 v0 = 0;
L_08A85A48:;
    v0 = (u32)-1;
    return v0;
}

/* 08A85A50 */
u32 func_08A85A50(void)
{
    u32 v0 = 0;
L_08A85A50:;
    v0 = (u32)-1;
    return v0;
}

/* 08A85A58 */
rv_t func_08A85A58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85A58:;
    sp = sp - 16;
    s0 = D_08C32CB8 - (11448);
    v1 = LD32(s0+11448);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A85A84; }
    goto L_08A85A74;
L_08A85A74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A85A84:;
    v0 = sceKernelFreePartitionMemory(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85A8C;
L_08A85A8C:;
    ST32(s0+11448, 0);
    goto L_08A85A74;
}

/* 08A85A94 */
u64 func_08A85A94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85A94:;
    sp = sp - 16;
    v0 = sceKernelLibcTime(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85AA4;
L_08A85AA4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A85AB0 */
rv_t func_08A85AB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85AB0:;
    sp = sp - 16;
    a2 = 0x3050000u;
    s1 = a0 + 0;
    a0 = a2 | 0x10;
    s0 = a1 + 0;
    v0 = sceKernelSetCompiledSdkVersion(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85AD4;
L_08A85AD4:;
    a1 = 0x30000u;
    a0 = a1 | 0x306;
    v0 = sceKernelSetCompilerVersion(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85AE0;
L_08A85AE0:;
    v1 = 0x0u;
    a2 = v1 + 0;
    v0 = ((u32)(uintptr_t)func_08A85B84) - (23428);
    t2 = 0x0u;
    t3 = 0x0u;
    t5 = D_08B161BC - (25020);
    a1 = v0 + 23428;
    t1 = 0 + 0;
    v1 = t2 + 0;
    t4 = t3 + 0;
    t6 = t5 + 25020;
    cnd_ = a2 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08A85B78; }
    goto L_08A85B14;
L_08A85B14:;
    a2 = 32;
    a3 = 0x40000u;
    cnd_ = v1 == 0;
    t0 = 0x80000000u;
    if (cnd_) { goto L_08A85B28; }
    goto L_08A85B24;
L_08A85B24:;
    a2 = LD32(t2);
    goto L_08A85B28;
L_08A85B28:;
    cnd_ = t4 == 0;
    if (cnd_) { goto L_08A85B38; }
    goto L_08A85B30;
L_08A85B30:;
    t2 = LD32(t3);
    a3 = t2 << 10;
    goto L_08A85B38;
L_08A85B38:;
    cnd_ = t6 == 0;
    t3 = 0x80000000u;
    if (cnd_) { goto L_08A85B48; }
    goto L_08A85B40;
L_08A85B40:;
    t4 = LD32(t5+25020);
    t0 = t4 | t3;
    goto L_08A85B48;
L_08A85B48:;
    v0 = sceKernelCreateThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85B50;
L_08A85B50:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = s0 + 0;
    v0 = sceKernelStartThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85B60;
L_08A85B60:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A85B78:;
    a3 = D_08AE8FB4 - (-28748);
    a0 = a3 - 28748;
    goto L_08A85B14;
}

/* 08A85B84 */
rv_t func_08A85B84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1008] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1008);
L_08A85B84:;
    v1 = 0x0u;
    sp = sp - 1008;
    a2 = v1 + 0;
    s5 = sp + 80;
    s3 = a0 + 0;
    s2 = a1 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A85BC8; }
    goto L_08A85BBC;
L_08A85BBC:;
    a0 = LD32(v1);
    cnd_ = a0 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08A85BD4; }
    goto L_08A85BC8;
L_08A85BC8:;
    a0 = 0 + 0;
    v0 = func_08A85774(a0, t1, t2, t3);
    goto L_08A85BD0;
L_08A85BD0:;
    s4 = 0 + 0;
    goto L_08A85BD4;
L_08A85BD4:;
    cnd_ = (s32)s3 <= 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_08A85C14; }
    goto L_08A85BDC;
L_08A85BDC:;
    s1 = sp + 0;
    ST32(s1, s0);
    goto L_08A85BE4;
L_08A85BE4:;
    a0 = s0 + 0;
    s4 = s4 + 1;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85BF0;
L_08A85BF0:;
    a2 = s0 + v0;
    s0 = a2 + 1;
    v1 = s0 - s2;
    a1 = (s32)s4 < 20;
    v0 = (s32)v1 < (s32)s3;
    cnd_ = a1 == 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08A85C14; }
    goto L_08A85C0C;
L_08A85C0C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, s0); goto L_08A85BE4; }
    goto L_08A85C14;
L_08A85C14:;
    t1 = s4 << 2;
    a3 = ((u32)(uintptr_t)func_08A882E0) - (-32032);
    t0 = t1 + sp;
    v0 = a3 - 32032;
    cnd_ = v0 == 0;
    ST32(t0, 0);
    if (cnd_) { goto L_08A85CE4; }
    goto L_08A85C2C;
L_08A85C2C:;
    a0 = s5 + 0;
    { rv_t r_ = func_08A882E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A85C34;
L_08A85C34:;
    t2 = ((u32)(uintptr_t)func_08A85AB0) - (23216);
    a0 = t2 + 23216;
    v0 = sceKernelGetModuleIdByAddress(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85C40;
L_08A85C40:;
    a0 = v0 + 0;
    a1 = s5 + 0;
    v0 = func_08A88150(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A85C4C;
L_08A85C4C:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08A85CB4; }
    goto L_08A85C54;
L_08A85C54:;
    ST32(psp_k0+4, s5);
    a1 = ((u32)(uintptr_t)func_08AD26EC) - (9964);
    a0 = a1 + 9964;
    { u64 r_ = func_08A85E78(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85C64;
L_08A85C64:;
    func_08804000(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A85C6C;
L_08A85C6C:;
    a0 = 0x0u;
    s5 = a0 + 0;
    cnd_ = s5 == 0;
    a2 = 0x0u;
    if (cnd_) { goto L_08A85C88; }
    goto L_08A85C7C;
L_08A85C7C:;
    a0 = a2 + 0;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A85C9C; }
    goto L_08A85C88;
L_08A85C88:;
    a0 = s4 + 0;
    goto L_08A85C8C;
L_08A85C8C:;
    a1 = sp + 0;
    v0 = func_088FDED8(0, 0);
    goto L_08A85C94;
L_08A85C94:;
    a0 = v0 + 0;
    { rv_t r_ = func_08A85FC0(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A85C9C;
L_08A85C9C:;
    { u64 r_ = func_08A85E78(a0, 0, a2, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85CA4;
L_08A85CA4:;
    rs_break(0xDEAD, 0x08a85ca4); /* call to address 0x00000000 (unresolved weak symbol) */
    goto L_08A85CAC;
L_08A85CAC:;
    a0 = s4 + 0;
    goto L_08A85C8C;
L_08A85CB4:;
    a0 = 1;
    v0 = sceKernelExitThread(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85CBC;
L_08A85CBC:;
    v0 = 1;
    sp = sp + 1008;
    return (rv_t){ v0, v1, f0 };
L_08A85CE4:;
    a0 = s5 + 616;
    t4 = s5 + 708;
    t3 = s5 + 800;
    ST32(s5+8, t4);
    v0 = s5 + 20;
    a1 = 24;
    ST32(s5+12, t3);
    ST32(s5, 0);
    ST32(s5+4, a0);
    ST32(s5+16, 0);
    goto L_08A85D0C;
L_08A85D0C:;
    a1 = a1 - 1;
    ST8(v0, 0);
    cnd_ = (s32)a1 >= 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_08A85D0C; }
    goto L_08A85D1C;
L_08A85D1C:;
    t6 = D_08AE8FC0 - (-28736);
    t5 = t6 - 28736;
    ST32(s5+52, t5);
    a2 = s5 + 124;
    a1 = 0 + 0;
    ST32(s5+48, 0);
    ST32(s5+56, 0);
    ST32(s5+60, 0);
    ST32(s5+64, 0);
    ST32(s5+68, 0);
    ST32(s5+72, 0);
    ST32(s5+76, 0);
    ST32(s5+80, 0);
    ST32(s5+84, 0);
    ST32(s5+88, 0);
    ST32(s5+92, 0);
    ST8(s5+96, 0);
    goto L_08A85D60;
L_08A85D60:;
    s0 = a2 + a1;
    a1 = a1 + 1;
    t7 = a1 < 0x24u;
    cnd_ = t7 != 0;
    ST8(s0, 0);
    if (cnd_) { goto L_08A85D60; }
    goto L_08A85D74;
L_08A85D74:;
    t1 = 0;
    t0 = 1;
    v0 = 13070;
    v1 = (u32)-21555;
    t9 = 4660;
    t8 = (u32)-6547;
    s3 = (u32)-8468;
    s2 = 5;
    s1 = 11;
    ST32(s5+168, t0);
    ST32(s5+172, t1);
    a1 = 0 + 0;
    a2 = 276;
    ST16(s5+176, v0);
    ST16(s5+178, v1);
    ST16(s5+180, t9);
    ST16(s5+182, t8);
    ST16(s5+184, s3);
    ST16(s5+186, s2);
    ST16(s5+188, s1);
    ST32(s5+160, 0);
    ST32(s5+192, 0);
    ST32(s5+196, 0);
    ST32(s5+200, 0);
    ST32(s5+204, 0);
    ST32(s5+208, 0);
    ST32(s5+212, 0);
    ST32(s5+252, 0);
    ST32(s5+256, 0);
    ST32(s5+260, 0);
    ST32(s5+264, 0);
    ST32(s5+268, 0);
    ST32(s5+272, 0);
    ST32(s5+276, 0);
    ST32(s5+280, 0);
    ST32(s5+284, 0);
    ST32(s5+288, 0);
    ST8(s5+216, 0);
    ST8(s5+224, 0);
    ST32(s5+248, 0);
    ST32(s5+328, 0);
    ST32(s5+332, 0);
    ST32(s5+336, 0);
    ST32(s5+340, 0);
    ST32(s5+596, 0);
    ST32(s5+468, 0);
    ST32(s5+600, 0);
    ST32(s5+604, 0);
    ST32(s5+608, 0);
    ST32(s5+612, 0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85E40;
L_08A85E40:;
    ST32(s5+892, 0);
    goto L_08A85C54;
}

/* 08A85E48 */
void func_08A85E48(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85E48:;
    v1 = D_08AE8F6C - (-28820);
    sp = sp - 16;
    a0 = v1 - 28820;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A85E68; }
    goto L_08A85E5C;
L_08A85E5C:;
    a0 = LD32(v1-28820);
    t_ = a0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A85E68;
L_08A85E68:;
    v0 = 0 + 0;
    sp = sp + 16;
    return;
}

/* 08A85E78 */
u64 func_08A85E78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A85E78:;
    sp = sp - 32;
    s3 = a0 + 0;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85E98;
L_08A85E98:;
    s2 = v0 + 0;
    { rv_t r_ = func_08A88040(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A85EA0;
L_08A85EA0:;
    s0 = LD32(v0+328);
    s1 = v0 + 0;
    cnd_ = s0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A85F40; }
    goto L_08A85EB0;
L_08A85EB0:;
    v1 = LD32(s0+4);
    v0 = (s32)v1 < 32;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = v1 << 2; goto L_08A85F08; }
    goto L_08A85EC0;
L_08A85EC0:;
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85EC8;
L_08A85EC8:;
    a0 = s1 + 0;
    a1 = 268;
    { u64 r_ = func_08A87514(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85ED4;
L_08A85ED4:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A85F24; }
    goto L_08A85EE0;
L_08A85EE0:;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85EE8;
L_08A85EE8:;
    s2 = v0 + 0;
    v0 = LD32(s1+328);
    ST32(s0+4, 0);
    v1 = 0 + 0;
    ST32(s0, v0);
    ST32(s0+264, 0);
    ST32(s1+328, s0);
    v0 = v1 << 2;
    goto L_08A85F08;
L_08A85F08:;
    v0 = v0 + s0;
    v1 = v1 + 1;
    ST32(v0+8, s3);
    a0 = s2 + 0;
    ST32(s0+4, v1);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A85F20;
L_08A85F20:;
    v0 = 0 + 0;
    goto L_08A85F24;
L_08A85F24:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A85F40:;
    s0 = v0 + 332;
    ST32(v0+328, s0);
    goto L_08A85EB0;
}

/* 08A85F4C */
u64 func_08A85F4C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85F4C:;
    sp = sp - 16;
    a1 = 0 + 0;
    { u64 r_ = func_08A8AF94(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85F5C;
L_08A85F5C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A85F68 */
rv_t func_08A85F68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A85F68:;
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 10;
    { u64 r_ = func_08A8B198(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A85F7C;
L_08A85F7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A85F88:;
    { rv_t r_ = func_08A85FC0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A85FC0 */
rv_t func_08A85FC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A85FC0:;
    sp = sp - 48;
    s6 = a0 + 0;
    { rv_t r_ = func_08A88040(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A85FF0;
L_08A85FF0:;
    s5 = LD32(v0+328);
    cnd_ = s5 == 0;
    s7 = 1;
    if (cnd_) { goto L_08A8609C; }
    goto L_08A85FFC;
L_08A85FFC:;
    v0 = LD32(s5+4);
    goto L_08A86000;
L_08A86000:;
    s3 = 0 + 0;
    s4 = s5 + 136;
    s0 = v0 - 1;
    v1 = s7 << (s0 & 31);
    v0 = (s32)s0 < 0;
    cnd_ = (s32)s0 < 0;
    if (v0 == 0) s3 = v1;
    if (cnd_) { goto L_08A86074; }
    goto L_08A8601C;
L_08A8601C:;
    v1 = s0 << 2;
    v0 = v1 + s5;
    s1 = v0 + 8;
    s2 = v1 + 0;
    goto L_08A86040;
L_08A86040:;
    v0 = LD32(s4+128);
    a1 = s2 + s4;
    v0 = v0 & s3;
    cnd_ = v0 == 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_08A86088; }
    goto L_08A86054;
L_08A86054:;
    v0 = LD32(s1);
    t_ = v0;
    a1 = LD32(a1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86060;
L_08A86060:;
    s0 = s0 - 1;
    s2 = s2 - 4;
    goto L_08A86068;
L_08A86068:;
    s1 = s1 - 4;
    cnd_ = (s32)s0 >= 0;
    s3 = (u32)((s32)s3 >> 1);
    if (cnd_) { goto L_08A86040; }
    goto L_08A86074;
L_08A86074:;
    s5 = LD32(s5);
    cnd_ = s5 != 0;
    if (cnd_) { v0 = LD32(s5+4); goto L_08A86000; }
    goto L_08A86080;
L_08A86080:;
    goto L_08A8609C;
L_08A86088:;
    v0 = LD32(s1);
    t_ = v0;
    s0 = s0 - 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86094;
L_08A86094:;
    s2 = s2 - 4;
    goto L_08A86068;
L_08A8609C:;
    a0 = s6 + 0;
    { u64 r_ = func_08A856AC(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A860A4;
L_08A860A4:;
    { rv_t r_ = func_08A860C0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A860C0 */
rv_t func_08A860C0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A860C0:;
    sp = sp - 16;
    v1 = 0 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A86168; }
    goto L_08A860DC;
L_08A860DC:;
    v0 = func_08A870E0();
    goto L_08A860E4;
L_08A860E4:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A861E0; }
    goto L_08A860F0;
L_08A860F0:;
    v0 = LD_U16(s0+12);
    goto L_08A860F4;
L_08A860F4:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A86168; }
    goto L_08A860FC;
L_08A860FC:;
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A861D0; }
    goto L_08A86108;
L_08A86108:;
    v0 = LD32(s0+44);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A861B8; }
    goto L_08A86114;
L_08A86114:;
    v0 = LD_U16(s0+12);
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A8619C; }
    goto L_08A86124;
L_08A86124:;
    v1 = LD32(s0+48);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s0+68); goto L_08A86158; }
    goto L_08A86130;
L_08A86130:;
    v0 = s0 + 64;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+48, 0); goto L_08A86154; }
    goto L_08A8613C;
L_08A8613C:;
    v0 = func_08A870E0();
    goto L_08A86144;
L_08A86144:;
    a1 = LD32(s0+48);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A86150;
L_08A86150:;
    ST32(s0+48, 0);
    goto L_08A86154;
L_08A86154:;
    v0 = LD32(s0+68);
    goto L_08A86158;
L_08A86158:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A86180; }
    goto L_08A86160;
L_08A86160:;
    ST16(s0+12, 0);
    v1 = s1 + 0;
    goto L_08A86168;
L_08A86168:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A86180:;
    v0 = func_08A870E0();
    goto L_08A86188;
L_08A86188:;
    a1 = LD32(s0+68);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A86194;
L_08A86194:;
    ST32(s0+68, 0);
    goto L_08A86160;
L_08A8619C:;
    v0 = func_08A870E0();
    goto L_08A861A4;
L_08A861A4:;
    a1 = LD32(s0+16);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A861B0;
L_08A861B0:;
    ST32(s0+16, 0);
    goto L_08A86124;
L_08A861B8:;
    t_ = v0;
    a0 = LD32(s0+28);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A861C0;
L_08A861C0:;
    v0 = (s32)v0 < 0;
    v1 = (u32)-1;
    if (v0 != 0) s1 = v1;
    goto L_08A86114;
L_08A861D0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A861D8;
L_08A861D8:;
    s1 = v0 + 0;
    goto L_08A86108;
L_08A861E0:;
    v0 = func_08A870E0();
    goto L_08A861E8;
L_08A861E8:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A861F0;
L_08A861F0:;
    v0 = LD_U16(s0+12);
    goto L_08A860F4;
}

/* 08A861F8 */
rv_t func_08A861F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A861F8:;
    sp = sp - 16;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A862D8; }
    goto L_08A86214;
L_08A86214:;
    v0 = func_08A870E0();
    goto L_08A8621C;
L_08A8621C:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A862C0; }
    goto L_08A86228;
L_08A86228:;
    v1 = (u32)(s32)LD_S16(s1+12);
    goto L_08A8622C;
L_08A8622C:;
    v0 = v1 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_08A86290; }
    goto L_08A86238;
L_08A86238:;
    s2 = LD32(s1+16);
    cnd_ = s2 == 0;
    v1 = v1 & 0x3;
    if (cnd_) { goto L_08A8628C; }
    goto L_08A86244;
L_08A86244:;
    v0 = LD32(s1);
    ST32(s1, s2);
    s0 = v0 - s2;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A8625C; }
    goto L_08A86258;
L_08A86258:;
    v0 = LD32(s1+20);
    goto L_08A8625C;
L_08A8625C:;
    cnd_ = (s32)s0 <= 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08A8628C; }
    goto L_08A86264;
L_08A86264:;
    v0 = LD32(s1+36);
    goto L_08A86268;
L_08A86268:;
    a0 = LD32(s1+28);
    a1 = s2 + 0;
    t_ = v0;
    a2 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86278;
L_08A86278:;
    s0 = s0 - v0;
    cnd_ = (s32)v0 <= 0;
    s2 = s2 + v0;
    if (cnd_) { goto L_08A862AC; }
    goto L_08A86284;
L_08A86284:;
    cnd_ = (s32)s0 > 0;
    if (cnd_) { v0 = LD32(s1+36); goto L_08A86268; }
    goto L_08A8628C;
L_08A8628C:;
    v1 = 0 + 0;
    goto L_08A86290;
L_08A86290:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A862AC:;
    v0 = LD_U16(s1+12);
    v1 = (u32)-1;
    v0 = v0 | 0x40;
    ST16(s1+12, v0);
    goto L_08A86290;
L_08A862C0:;
    v0 = func_08A870E0();
    goto L_08A862C8;
L_08A862C8:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A862D0;
L_08A862D0:;
    v1 = (u32)(s32)LD_S16(s1+12);
    goto L_08A8622C;
L_08A862D8:;
    v0 = D_08B1E010 - (-8176);
    a0 = LD32(v0-8176);
    a1 = ((u32)(uintptr_t)func_08A861F8) - (25080);
    a1 = a1 + 25080;
    { rv_t r_ = func_08A86F4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A862EC;
L_08A862EC:;
    v1 = v0 + 0;
    goto L_08A86290;
}

/* 08A862F4 */
void func_08A862F4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
L_08A862F4:;
    v0 = ((u32)(uintptr_t)func_08A896F4) - (-26892);
    v0 = v0 - 26892;
    ST32(a0+44, v0);
    v0 = ((u32)(uintptr_t)func_08A89578) - (-27272);
    v0 = v0 - 27272;
    ST32(a0+32, v0);
    v1 = ((u32)(uintptr_t)func_08A895F0) - (-27152);
    v0 = ((u32)(uintptr_t)func_08A8967C) - (-27012);
    v1 = v1 - 27152;
    v0 = v0 - 27012;
    ST16(a0+12, a1);
    ST16(a0+14, a2);
    ST32(a0+36, v1);
    ST32(a0+40, v0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+16, 0);
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    ST32(a0+28, a0);
    return;
}

/* 08A8634C */
rv_t func_08A8634C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8634C:;
    a1 = ((u32)(uintptr_t)func_08A861F8) - (25080);
    sp = sp - 16;
    a1 = a1 + 25080;
    { rv_t r_ = func_08A86F4C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86360;
L_08A86360:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A8636C */
void func_08A8636C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8636C:;
    sp = sp - 16;
    v0 = ((u32)(uintptr_t)func_08A8634C) - (25420);
    v0 = v0 + 25420;
    v1 = a0 + 616;
    a3 = a0 + 0;
    s0 = a0 + 0;
    ST32(a0+60, v0);
    v0 = 1;
    a1 = 4;
    ST32(a0+56, v0);
    v0 = 3;
    a2 = 0 + 0;
    ST32(a0+608, v0);
    ST32(a0+612, v1);
    ST32(a0+604, 0);
    a0 = LD32(a0+4);
    func_08A862F4(a0, a1, a2);
    goto L_08A863B8;
L_08A863B8:;
    a0 = LD32(s0+8);
    a3 = s0 + 0;
    a1 = 9;
    a2 = 1;
    func_08A862F4(a0, a1, a2);
    goto L_08A863CC;
L_08A863CC:;
    a0 = LD32(s0+12);
    a3 = s0 + 0;
    a1 = 10;
    a2 = 2;
    func_08A862F4(a0, a1, a2);
    goto L_08A863E0;
L_08A863E0:;
    sp = sp + 16;
    return;
}

/* 08A863F0 */
rv_t func_08A863F0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A863F0:;
    { s64 p_ = (s64)(s32)a2 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 32;
    s2 = lo;
    s5 = a2 + 0;
    a2 = 0 + 0;
    s4 = a1 + 0;
    s1 = a3 + 0;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A864C0; }
    goto L_08A86430;
L_08A86430:;
    a2 = LD32(a3+4);
    cnd_ = (s32)a2 < 0;
    if (cnd_) { ST32(a3+4, 0); goto L_08A86504; }
    goto L_08A8643C;
L_08A8643C:;
    v0 = a2 < s2;
    s0 = a2 + 0;
    s3 = a0 + 0;
    cnd_ = v0 == 0;
    s6 = s2 + 0;
    if (cnd_) { goto L_08A86494; }
    goto L_08A86450;
L_08A86450:;
    a1 = LD32(s1);
    goto L_08A86454;
L_08A86454:;
    a0 = s3 + 0;
    a2 = s0 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A86460;
L_08A86460:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    s2 = s2 - s0;
    v1 = v1 + s0;
    ST32(s1, v1);
    s3 = s3 + s0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8647C;
L_08A8647C:;
    cnd_ = v0 != 0;
    v0 = s6 - s2;
    if (cnd_) { goto L_08A864EC; }
    goto L_08A86484;
L_08A86484:;
    s0 = LD32(s1+4);
    v0 = s0 < s2;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A86454; }
    goto L_08A86494;
L_08A86494:;
    a1 = LD32(s1);
    a2 = s2 + 0;
    a0 = s3 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A864A4;
L_08A864A4:;
    v1 = LD32(s1+4);
    v0 = LD32(s1);
    a2 = s5 + 0;
    v1 = v1 - s2;
    v0 = v0 + s2;
    ST32(s1, v0);
    ST32(s1+4, v1);
    goto L_08A864C0;
L_08A864C0:;
    goto L_08A864C4;
L_08A864C4:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A864EC:;
    { u32 x_ = v0, y_ = s4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    cnd_ = s4 == 0;
    if (cnd_) { rs_break(0x7, 0x08a864f4); goto L_08A864F8; }
    goto L_08A864F8;
L_08A864F8:;
    a2 = lo;
    goto L_08A864C4;
L_08A86504:;
    a2 = 0 + 0;
    goto L_08A8643C;
}

/* 08A8650C */
u32 func_08A8650C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8650C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A86630; }
    goto L_08A86528;
L_08A86528:;
    func_08A87FB8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A86530;
L_08A86530:;
    t2 = s0 - 8;
    v1 = LD32(t2+4);
    t5 = D_08B1E018 - (-8168);
    t3 = t5 - 8168;
    t0 = v1 + 0;
    t0 = (t0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a0 = t2 + t0;
    t1 = LD32(a0+4);
    v0 = LD32(t3+8);
    cnd_ = a0 == v0;
    t1 = (t1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_08A8672C; }
    goto L_08A8655C;
L_08A8655C:;
    v0 = v1 & 0x1;
    ST32(a0+4, t1);
    cnd_ = v0 != 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_08A86590; }
    goto L_08A8656C;
L_08A8656C:;
    a1 = LD32(s0-8);
    v0 = t3 + 8;
    t2 = t2 - a1;
    v1 = LD32(t2+8);
    cnd_ = v1 == v0;
    t0 = t0 + a1;
    if (cnd_) { goto L_08A86724; }
    goto L_08A86584;
L_08A86584:;
    a3 = LD32(t2+12);
    ST32(a3+8, v1);
    ST32(v1+12, a3);
    goto L_08A86590;
L_08A86590:;
    v1 = a0 + t1;
    v0 = LD32(v1+4);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = t0 | 0x1;
    if (cnd_) { goto L_08A865D0; }
    goto L_08A865A4;
L_08A865A4:;
    cnd_ = t4 != 0;
    t0 = t0 + t1;
    if (cnd_) { goto L_08A8671C; }
    goto L_08A865AC;
L_08A865AC:;
    v1 = LD32(a0+8);
    v0 = D_08B1E020 - (-8160);
    v0 = v0 - 8160;
    cnd_ = v1 == v0;
    if (cnd_) { t4 = 1; goto L_08A86708; }
    goto L_08A865C0;
L_08A865C0:;
    a3 = LD32(a0+12);
    ST32(a3+8, v1);
    ST32(v1+12, a3);
    goto L_08A865CC;
L_08A865CC:;
    v0 = t0 | 0x1;
    goto L_08A865D0;
L_08A865D0:;
    v1 = t2 + t0;
    ST32(t2+4, v0);
    cnd_ = t4 != 0;
    ST32(v1, t0);
    if (cnd_) { goto L_08A86628; }
    goto L_08A865E0;
L_08A865E0:;
    v0 = t0 < 0x200u;
    cnd_ = v0 == 0;
    a2 = t0 >> 9;
    if (cnd_) { goto L_08A86644; }
    goto L_08A865EC;
L_08A865EC:;
    a0 = t0 >> 3;
    a1 = t5 - 8168;
    v0 = a0 << 3;
    a3 = v0 + a1;
    v1 = LD32(a1+4);
    a0 = a0 >> 2;
    v0 = 1;
    a2 = LD32(a3+8);
    v0 = v0 << (a0 & 31);
    v1 = v1 | v0;
    ST32(a1+4, v1);
    goto L_08A86618;
L_08A86618:;
    ST32(t2+12, a3);
    ST32(t2+8, a2);
    ST32(a2+12, t2);
    ST32(a3+8, t2);
    goto L_08A86628;
L_08A86628:;
    a0 = s1 + 0;
    v0 = func_08A87FF4(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A86630;
L_08A86630:;
    sp = sp + 16;
    return v0;
L_08A86644:;
    cnd_ = a2 == 0;
    a0 = t0 >> 3;
    if (cnd_) { goto L_08A8669C; }
    goto L_08A8664C;
L_08A8664C:;
    v1 = t0 >> 6;
    v0 = a2 < 0x5u;
    cnd_ = v0 != 0;
    a0 = v1 + 56;
    if (cnd_) { goto L_08A8669C; }
    goto L_08A8665C;
L_08A8665C:;
    v0 = a2 < 0x15u;
    cnd_ = v0 != 0;
    a0 = a2 + 91;
    if (cnd_) { goto L_08A8669C; }
    goto L_08A86668;
L_08A86668:;
    v1 = t0 >> 12;
    v0 = a2 < 0x55u;
    cnd_ = v0 != 0;
    a0 = v1 + 110;
    if (cnd_) { goto L_08A8669C; }
    goto L_08A86678;
L_08A86678:;
    v1 = t0 >> 15;
    v0 = a2 < 0x155u;
    cnd_ = v0 != 0;
    a0 = v1 + 119;
    if (cnd_) { goto L_08A8669C; }
    goto L_08A86688;
L_08A86688:;
    v0 = t0 >> 18;
    v1 = a2 < 0x555u;
    cnd_ = v1 != 0;
    a0 = v0 + 124;
    if (cnd_) { goto L_08A8669C; }
    goto L_08A86698;
L_08A86698:;
    a0 = 126;
    goto L_08A8669C;
L_08A8669C:;
    a1 = t5 - 8168;
    v0 = a0 << 3;
    a3 = v0 + a1;
    a2 = LD32(a3+8);
    cnd_ = a2 == a3;
    if (cnd_) { v0 = LD32(a1+4); goto L_08A866F0; }
    goto L_08A866B4;
L_08A866B4:;
    v0 = LD32(a2+4);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = t0 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(a2+12); goto L_08A86618; }
    goto L_08A866C8;
L_08A866C8:;
    a2 = LD32(a2+8);
    goto L_08A866CC;
L_08A866CC:;
    cnd_ = a2 == a3;
    if (cnd_) { a3 = LD32(a2+12); goto L_08A86618; }
    goto L_08A866D4;
L_08A866D4:;
    v0 = LD32(a2+4);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = t0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+8); goto L_08A866CC; }
    goto L_08A866E8;
L_08A866E8:;
    a3 = LD32(a2+12);
    goto L_08A86618;
L_08A866F0:;
    a0 = a0 >> 2;
    v1 = 1;
    v1 = v1 << (a0 & 31);
    v0 = v0 | v1;
    ST32(a1+4, v0);
    goto L_08A86618;
L_08A86708:;
    ST32(v1+12, t2);
    ST32(v1+8, t2);
    ST32(t2+12, v1);
    ST32(t2+8, v1);
    goto L_08A865CC;
L_08A8671C:;
    v1 = LD32(a0+8);
    goto L_08A865C0;
L_08A86724:;
    t4 = 1;
    goto L_08A86590;
L_08A8672C:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    t0 = t0 + t1;
    if (cnd_) { goto L_08A86754; }
    goto L_08A86738;
L_08A86738:;
    a1 = LD32(s0-8);
    t2 = t2 - a1;
    a3 = LD32(t2+12);
    a2 = LD32(t2+8);
    t0 = t0 + a1;
    ST32(a3+8, a2);
    ST32(a2+12, a3);
    goto L_08A86754;
L_08A86754:;
    v0 = D_08B1E420 - (-7136);
    v1 = LD32(v0-7136);
    a0 = t0 | 0x1;
    ST32(t3+8, t2);
    v1 = t0 < v1;
    cnd_ = v1 != 0;
    ST32(t2+4, a0);
    if (cnd_) { goto L_08A86628; }
    goto L_08A86770;
L_08A86770:;
    v0 = D_08C32CC0 - (11456);
    a1 = LD32(v0+11456);
    a0 = s1 + 0;
    func_08A86788(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A86780;
L_08A86780:;
    goto L_08A86628;
}

/* 08A86788 */
void func_08A86788(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A86788:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a1 + 0;
    func_08A87FB8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A867AC;
L_08A867AC:;
    v0 = D_08B1E018 - (-8168);
    s3 = v0 - 8168;
    v1 = LD32(s3+8);
    v0 = 4096;
    cnd_ = v0 == 0;
    if (cnd_) { rs_break(0x7, 0x08a867c0); goto L_08A867C4; }
    goto L_08A867C4;
L_08A867C4:;
    s1 = LD32(v1+4);
    a0 = s2 + 0;
    s1 = (s1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    s0 = s1 - s0;
    s0 = s0 + 4079;
    { u32 x_ = s0, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s0 = lo;
    s0 = s0 - 1;
    s0 = s0 << 12;
    v0 = (s32)s0 < 4096;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A86810; }
    goto L_08A867F4;
L_08A867F4:;
    v0 = func_08A89318(a0, a1, 0, 0, 0);
    goto L_08A867FC;
L_08A867FC:;
    a1 = v0 + 0;
    v0 = LD32(s3+8);
    v0 = v0 + s1;
    cnd_ = a1 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A86838; }
    goto L_08A86810;
L_08A86810:;
    v0 = func_08A87FF4(a1, a2, a3, 0, 0, 0, 0);
    goto L_08A86818;
L_08A86818:;
    v0 = 0 + 0;
    goto L_08A8681C;
L_08A8681C:;
    sp = sp + 32;
    return;
L_08A86838:;
    a1 = 0 - s0;
    a0 = s2 + 0;
    v0 = func_08A89318(a0, a1, 0, 0, 0);
    goto L_08A86844;
L_08A86844:;
    v1 = (u32)-1;
    a0 = s2 + 0;
    a1 = 0 + 0;
    cnd_ = v0 == v1;
    a2 = D_08C32CCC - (11468);
    if (cnd_) { goto L_08A86884; }
    goto L_08A86858;
L_08A86858:;
    a1 = LD32(s3+8);
    v1 = s1 - s0;
    v1 = v1 | 0x1;
    ST32(a1+4, v1);
    a0 = s2 + 0;
    v0 = LD32(a2+11468);
    v0 = v0 - s0;
    ST32(a2+11468, v0);
    v0 = func_08A87FF4(a1, a2, 0, 0, 0, 0, 0);
    goto L_08A8687C;
L_08A8687C:;
    v0 = 1;
    goto L_08A8681C;
L_08A86884:;
    v0 = func_08A89318(a0, a1, 0, 0, 0);
    goto L_08A8688C;
L_08A8688C:;
    a2 = LD32(s3+8);
    a1 = v0 + 0;
    a0 = s2 + 0;
    s1 = v0 - a2;
    v0 = (s32)s1 < 16;
    cnd_ = v0 != 0;
    a3 = s1 | 0x1;
    if (cnd_) { goto L_08A86810; }
    goto L_08A868A8;
L_08A868A8:;
    v0 = D_08B1E424 - (-7132);
    v1 = LD32(v0-7132);
    v0 = D_08C32CCC - (11468);
    v1 = a1 - v1;
    ST32(v0+11468, v1);
    ST32(a2+4, a3);
    goto L_08A86810;
}

/* 08A868C4 */
u32 func_08A868C4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A868C4:;
    sp = sp - 112;
    s6 = a2 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = func_08A870E0();
    goto L_08A86900;
L_08A86900:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A86D4C; }
    goto L_08A8690C;
L_08A8690C:;
    v0 = LD_U16(s0+12);
    goto L_08A86910;
L_08A86910:;
    v1 = 264;
    v0 = v0 & 0x108;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08A86D3C; }
    goto L_08A86920;
L_08A86920:;
    s4 = LD32(s0+40);
    goto L_08A86924;
L_08A86924:;
    a0 = (u32)-1;
    cnd_ = s4 == 0;
    v0 = 29;
    if (cnd_) { goto L_08A86950; }
    goto L_08A86930;
L_08A86930:;
    v0 = 1;
    cnd_ = s2 == v0;
    v0 = (s32)s2 < 2;
    if (cnd_) { goto L_08A86C98; }
    goto L_08A8693C;
L_08A8693C:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A86C88; }
    goto L_08A86944;
L_08A86944:;
    cnd_ = s2 == v0;
    if (cnd_) { a2 = LD32(s0+16); goto L_08A86984; }
    goto L_08A8694C;
L_08A8694C:;
    v0 = 22;
    goto L_08A86950;
L_08A86950:;
    ST32(s1, v0);
    goto L_08A86954;
L_08A86954:;
    v0 = a0 + 0;
    sp = sp + 112;
    return v0;
L_08A86984:;
    s7 = 0 + 0;
    goto L_08A86988;
L_08A86988:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A86C78; }
    goto L_08A86990;
L_08A86990:;
    a0 = LD_U16(s0+12);
    goto L_08A86994;
L_08A86994:;
    v1 = a0 & 0xffff;
    v0 = v1 & 0x81a;
    cnd_ = v0 != 0;
    v0 = v1 & 0x400;
    if (cnd_) { goto L_08A869C0; }
    goto L_08A869A4;
L_08A869A4:;
    cnd_ = v0 != 0;
    v0 = ((u32)(uintptr_t)func_08A8967C) - (-27012);
    if (cnd_) { goto L_08A86A88; }
    goto L_08A869AC;
L_08A869AC:;
    v0 = v0 - 27012;
    cnd_ = s4 == v0;
    if (cnd_) { a1 = (u32)(s32)LD_S16(s0+14); goto L_08A86A40; }
    goto L_08A869B8;
L_08A869B8:;
    v0 = a0 | 0x800;
    goto L_08A869BC;
L_08A869BC:;
    ST16(s0+12, v0);
    goto L_08A869C0;
L_08A869C0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A861F8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A869C8;
L_08A869C8:;
    cnd_ = v0 != 0;
    a1 = s6 + 0;
    if (cnd_) { goto L_08A86A38; }
    goto L_08A869D0;
L_08A869D0:;
    a0 = LD32(s0+28);
    t_ = s4;
    a2 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A869DC;
L_08A869DC:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a0 = (u32)-1;
    if (cnd_) { goto L_08A86954; }
    goto L_08A869E8;
L_08A869E8:;
    v1 = LD32(s0+48);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD_U16(s0+12); goto L_08A86A1C; }
    goto L_08A869F4;
L_08A869F4:;
    v0 = s0 + 64;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+48, 0); goto L_08A86A18; }
    goto L_08A86A00;
L_08A86A00:;
    v0 = func_08A870E0();
    goto L_08A86A08;
L_08A86A08:;
    a1 = LD32(s0+48);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A86A14;
L_08A86A14:;
    ST32(s0+48, 0);
    goto L_08A86A18;
L_08A86A18:;
    v0 = LD_U16(s0+12);
    goto L_08A86A1C;
L_08A86A1C:;
    v1 = LD32(s0+16);
    ST32(s0+4, 0);
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    a0 = 0 + 0;
    ST16(s0+12, v0);
    ST32(s0, v1);
    goto L_08A86954;
L_08A86A38:;
    a0 = (u32)-1;
    goto L_08A86954;
L_08A86A40:;
    cnd_ = (s32)a1 < 0;
    v0 = a0 | 0x800;
    if (cnd_) { goto L_08A869BC; }
    goto L_08A86A48;
L_08A86A48:;
    a0 = s1 + 0;
    a2 = sp + 0;
    v0 = func_08A86DB4(a0, a1, a2);
    goto L_08A86A54;
L_08A86A54:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD_U16(s0+12); goto L_08A869B8; }
    goto L_08A86A5C;
L_08A86A5C:;
    v0 = LD32(sp+4);
    v1 = 0x8000;
    v0 = v0 & 0xf000;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD_U16(s0+12); goto L_08A86A78; }
    goto L_08A86A70;
L_08A86A70:;
    a0 = LD_U16(s0+12);
    goto L_08A869B8;
L_08A86A78:;
    v1 = 1024;
    ST32(s0+76, v1);
    v0 = v0 | 0x400;
    ST16(s0+12, v0);
    goto L_08A86A88;
L_08A86A88:;
    cnd_ = s2 != 0;
    s5 = s6 + 0;
    if (cnd_) { goto L_08A86C58; }
    goto L_08A86A90;
L_08A86A90:;
    cnd_ = s7 != 0;
    a0 = LD_U16(s0+12);
    if (cnd_) { goto L_08A86C4C; }
    goto L_08A86A98;
L_08A86A98:;
    v0 = a0 & 0x1000;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A86C28; }
    goto L_08A86AA4;
L_08A86AA4:;
    s3 = LD32(s0+80);
    goto L_08A86AA8;
L_08A86AA8:;
    a1 = LD32(s0+4);
    a3 = LD32(s0+48);
    cnd_ = a3 == 0;
    s3 = s3 - a1;
    if (cnd_) { goto L_08A86C10; }
    goto L_08A86AB8;
L_08A86AB8:;
    v0 = LD32(s0+60);
    s3 = s3 - v0;
    goto L_08A86AC0;
L_08A86AC0:;
    cnd_ = a3 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_08A86C14; }
    goto L_08A86AC8;
L_08A86AC8:;
    v0 = LD32(s0+56);
    a2 = LD32(s0+16);
    v1 = LD32(s0+60);
    s3 = s3 + a1;
    s1 = v0 - a2;
    s3 = s3 - s1;
    s1 = s1 + v1;
    goto L_08A86AE4;
L_08A86AE4:;
    v1 = a0 ^ 0x2000;
    v0 = (s32)s5 < (s32)s3;
    v1 = (v1 >> 13) & 0x1;
    v0 = v0 ^ 0x1;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v0 = s3 + s1;
    if (cnd_) { goto L_08A86B60; }
    goto L_08A86B00;
L_08A86B00:;
    v0 = s5 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+76); goto L_08A86B64; }
    goto L_08A86B0C;
L_08A86B0C:;
    v0 = s5 - s3;
    v1 = s1 - v0;
    v0 = a2 + v0;
    ST32(s0, v0);
    cnd_ = a3 == 0;
    ST32(s0+4, v1);
    if (cnd_) { goto L_08A86B4C; }
    goto L_08A86B24;
L_08A86B24:;
    v0 = s0 + 64;
    cnd_ = a3 == v0;
    if (cnd_) { ST32(s0+48, 0); goto L_08A86B4C; }
    goto L_08A86B30;
L_08A86B30:;
    v0 = func_08A870E0();
    goto L_08A86B38;
L_08A86B38:;
    a1 = LD32(s0+48);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A86B44;
L_08A86B44:;
    a0 = LD_U16(s0+12);
    ST32(s0+48, 0);
    goto L_08A86B4C;
L_08A86B4C:;
    v0 = a0 + 0;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    a0 = 0 + 0;
    ST16(s0+12, v0);
    goto L_08A86954;
L_08A86B60:;
    v0 = LD32(s0+76);
    goto L_08A86B64;
L_08A86B64:;
    a0 = LD32(s0+28);
    a2 = 0 + 0;
    v0 = 0 - v0;
    s3 = s5 & v0;
    t_ = s4;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86B7C;
L_08A86B7C:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08A869C0; }
    goto L_08A86B88;
L_08A86B88:;
    v0 = LD32(s0+16);
    v1 = LD32(s0+48);
    ST32(s0+4, 0);
    cnd_ = v1 == 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08A86BC0; }
    goto L_08A86B9C;
L_08A86B9C:;
    v0 = s0 + 64;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+48, 0); goto L_08A86BC0; }
    goto L_08A86BA8;
L_08A86BA8:;
    v0 = func_08A870E0();
    goto L_08A86BB0;
L_08A86BB0:;
    a1 = LD32(s0+48);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A86BBC;
L_08A86BBC:;
    ST32(s0+48, 0);
    goto L_08A86BC0;
L_08A86BC0:;
    v0 = LD_U16(s0+12);
    s1 = s5 - s3;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    cnd_ = s1 != 0;
    ST16(s0+12, v0);
    if (cnd_) { goto L_08A86BDC; }
    goto L_08A86BD4;
L_08A86BD4:;
    a0 = 0 + 0;
    goto L_08A86954;
L_08A86BDC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86BE4;
L_08A86BE4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A869C0; }
    goto L_08A86BEC;
L_08A86BEC:;
    v1 = LD32(s0+4);
    v0 = v1 < s1;
    cnd_ = v0 != 0;
    v1 = v1 - s1;
    if (cnd_) { goto L_08A869C0; }
    goto L_08A86BFC;
L_08A86BFC:;
    v0 = LD32(s0);
    ST32(s0+4, v1);
    v0 = v0 + s1;
    ST32(s0, v0);
    goto L_08A86BD4;
L_08A86C10:;
    v0 = LD32(s0);
    goto L_08A86C14;
L_08A86C14:;
    a2 = LD32(s0+16);
    s1 = v0 - a2;
    s3 = s3 - s1;
    s1 = s1 + a1;
    goto L_08A86AE4;
L_08A86C28:;
    a1 = 0 + 0;
    t_ = s4;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86C34;
L_08A86C34:;
    s3 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s3 == v0;
    if (cnd_) { goto L_08A869C0; }
    goto L_08A86C44;
L_08A86C44:;
    a0 = LD_U16(s0+12);
    goto L_08A86AA8;
L_08A86C4C:;
    a1 = LD32(s0+4);
    a3 = LD32(s0+48);
    goto L_08A86AC0;
L_08A86C58:;
    a1 = (u32)(s32)LD_S16(s0+14);
    a0 = s1 + 0;
    a2 = sp + 0;
    v0 = func_08A86DB4(a0, a1, a2);
    goto L_08A86C68;
L_08A86C68:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A869C0; }
    goto L_08A86C70;
L_08A86C70:;
    s5 = v0 + s6;
    goto L_08A86A90;
L_08A86C78:;
    a0 = s0 + 0;
    func_08A87184(a0);
    goto L_08A86C80;
L_08A86C80:;
    a0 = LD_U16(s0+12);
    goto L_08A86994;
L_08A86C88:;
    cnd_ = s2 == 0;
    if (cnd_) { a2 = LD32(s0+16); goto L_08A86984; }
    goto L_08A86C90;
L_08A86C90:;
    a0 = (u32)-1;
    goto L_08A8694C;
L_08A86C98:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86CA0;
L_08A86CA0:;
    a0 = LD_U16(s0+12);
    v0 = a0 & 0x1000;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+28); goto L_08A86D18; }
    goto L_08A86CB0;
L_08A86CB0:;
    s3 = LD32(s0+80);
    goto L_08A86CB4;
L_08A86CB4:;
    v1 = a0 & 0xffff;
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    v0 = v1 & 0x8;
    if (cnd_) { goto L_08A86CF8; }
    goto L_08A86CC4;
L_08A86CC4:;
    a1 = LD32(s0+4);
    a3 = LD32(s0+48);
    cnd_ = a3 == 0;
    s3 = s3 - a1;
    if (cnd_) { goto L_08A86CF0; }
    goto L_08A86CD4;
L_08A86CD4:;
    v0 = LD32(s0+60);
    a2 = LD32(s0+16);
    s3 = s3 - v0;
    goto L_08A86CE0;
L_08A86CE0:;
    s6 = s6 + s3;
    s2 = 0 + 0;
    s7 = 1;
    goto L_08A86988;
L_08A86CF0:;
    a2 = LD32(s0+16);
    goto L_08A86CE0;
L_08A86CF8:;
    cnd_ = v0 == 0;
    a2 = LD32(s0+16);
    if (cnd_) { goto L_08A86CE0; }
    goto L_08A86D00;
L_08A86D00:;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A86CE0; }
    goto L_08A86D0C;
L_08A86D0C:;
    v0 = v0 - a2;
    s3 = s3 + v0;
    goto L_08A86CE0;
L_08A86D18:;
    a1 = 0 + 0;
    t_ = s4;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86D24;
L_08A86D24:;
    s3 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s3 == v0;
    a0 = (u32)-1;
    if (cnd_) { goto L_08A86954; }
    goto L_08A86D34;
L_08A86D34:;
    a0 = LD_U16(s0+12);
    goto L_08A86CB4;
L_08A86D3C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86D44;
L_08A86D44:;
    s4 = LD32(s0+40);
    goto L_08A86924;
L_08A86D4C:;
    v0 = func_08A870E0();
    goto L_08A86D54;
L_08A86D54:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A86D5C;
L_08A86D5C:;
    v0 = LD_U16(s0+12);
    goto L_08A86910;
}

/* 08A86D64 */
u32 func_08A86D64(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A86D64:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A86D88;
L_08A86D88:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    v0 = func_08A868C4(a0, a1, a2, a3);
    goto L_08A86D9C;
L_08A86D9C:;
    sp = sp + 16;
    return v0;
}

/* 08A86DB4 */
u32 func_08A86DB4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A86DB4:;
    sp = sp - 16;
    v0 = a1 + 0;
    a1 = a2 + 0;
    s1 = a0 + 0;
    a0 = v0 + 0;
    s0 = D_08C38BEC - (-29716);
    ST32(s0-29716, 0);
    v0 = func_08A85A30(a1);
    goto L_08A86DE0;
L_08A86DE0:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s0-29716);
    if (cnd_) { goto L_08A86E08; }
    goto L_08A86DF0;
L_08A86DF0:;
    goto L_08A86DF4;
L_08A86DF4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A86E08:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, v0); goto L_08A86DF0; }
    goto L_08A86E10;
L_08A86E10:;
    goto L_08A86DF4;
}

/* 08A86E18 */
u32 func_08A86E18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A86E18:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = func_08A870E0();
    goto L_08A86E34;
L_08A86E34:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A86F04; }
    goto L_08A86E40;
L_08A86E40:;
    v0 = LD32(s0+40);
    goto L_08A86E44;
L_08A86E44:;
    cnd_ = v0 == 0;
    v0 = 29;
    if (cnd_) { goto L_08A86EF8; }
    goto L_08A86E4C;
L_08A86E4C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86E54;
L_08A86E54:;
    v1 = LD_U16(s0+12);
    v0 = v1 & 0x1000;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+40); goto L_08A86ED0; }
    goto L_08A86E64;
L_08A86E64:;
    a2 = LD32(s0+80);
    goto L_08A86E68;
L_08A86E68:;
    v1 = v1 & 0xffff;
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    v0 = v1 & 0x8;
    if (cnd_) { goto L_08A86EAC; }
    goto L_08A86E78;
L_08A86E78:;
    v0 = LD32(s0+4);
    v1 = LD32(s0+48);
    cnd_ = v1 == 0;
    a2 = a2 - v0;
    if (cnd_) { goto L_08A86E90; }
    goto L_08A86E88;
L_08A86E88:;
    v0 = LD32(s0+60);
    a2 = a2 - v0;
    goto L_08A86E90;
L_08A86E90:;
    v1 = a2 + 0;
    goto L_08A86E94;
L_08A86E94:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A86EAC:;
    cnd_ = v0 == 0;
    v1 = a2 + 0;
    if (cnd_) { goto L_08A86E94; }
    goto L_08A86EB4;
L_08A86EB4:;
    v1 = LD32(s0);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = a2 + 0; goto L_08A86E94; }
    goto L_08A86EC0;
L_08A86EC0:;
    v0 = LD32(s0+16);
    v0 = v1 - v0;
    a2 = a2 + v0;
    goto L_08A86E90;
L_08A86ED0:;
    a0 = LD32(s0+28);
    a2 = 1;
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A86EE0;
L_08A86EE0:;
    a2 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A86E94; }
    goto L_08A86EF0;
L_08A86EF0:;
    v1 = LD_U16(s0+12);
    goto L_08A86E68;
L_08A86EF8:;
    v1 = (u32)-1;
    ST32(s1, v0);
    goto L_08A86E94;
L_08A86F04:;
    v0 = func_08A870E0();
    goto L_08A86F0C;
L_08A86F0C:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A86F14;
L_08A86F14:;
    v0 = LD32(s0+40);
    goto L_08A86E44;
}

/* 08A86F1C */
u32 func_08A86F1C(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A86F1C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A86F30;
L_08A86F30:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    v0 = func_08A86E18(a0, a1);
    goto L_08A86F3C;
L_08A86F3C:;
    sp = sp + 16;
    return v0;
}

/* 08A86F4C */
rv_t func_08A86F4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A86F4C:;
    sp = sp - 32;
    s5 = D_08B1E010 - (-8176);
    v0 = LD32(s5-8176);
    s4 = a1 + 0;
    s3 = 0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A86FC4; }
    goto L_08A86F80;
L_08A86F80:;
    s2 = a0 + 604;
    cnd_ = s2 == 0;
    v0 = LD32(s5-8176);
    if (cnd_) { goto L_08A86FC8; }
    goto L_08A86F8C;
L_08A86F8C:;
    s1 = LD32(s2+4);
    goto L_08A86F90;
L_08A86F90:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 < 0;
    s0 = LD32(s2+8);
    if (cnd_) { goto L_08A86FB8; }
    goto L_08A86F9C;
L_08A86F9C:;
    v0 = (u32)(s32)LD_S16(s0+12);
    goto L_08A86FA0;
L_08A86FA0:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    cnd_ = v0 != 0;
    s0 = s0 + 92;
    if (cnd_) { goto L_08A87044; }
    goto L_08A86FB0;
L_08A86FB0:;
    cnd_ = (s32)s1 >= 0;
    if (cnd_) { v0 = (u32)(s32)LD_S16(s0+12); goto L_08A86FA0; }
    goto L_08A86FB8;
L_08A86FB8:;
    s2 = LD32(s2);
    cnd_ = s2 != 0;
    if (cnd_) { s1 = LD32(s2+4); goto L_08A86F90; }
    goto L_08A86FC4;
L_08A86FC4:;
    v0 = LD32(s5-8176);
    goto L_08A86FC8;
L_08A86FC8:;
    s2 = v0 + 604;
    cnd_ = s2 == 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_08A87010; }
    goto L_08A86FD4;
L_08A86FD4:;
    s1 = LD32(s2+4);
    goto L_08A86FD8;
L_08A86FD8:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 < 0;
    s0 = LD32(s2+8);
    if (cnd_) { goto L_08A87000; }
    goto L_08A86FE4;
L_08A86FE4:;
    v0 = (u32)(s32)LD_S16(s0+12);
    goto L_08A86FE8;
L_08A86FE8:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    cnd_ = v0 != 0;
    s0 = s0 + 92;
    if (cnd_) { goto L_08A87034; }
    goto L_08A86FF8;
L_08A86FF8:;
    cnd_ = (s32)s1 >= 0;
    if (cnd_) { v0 = (u32)(s32)LD_S16(s0+12); goto L_08A86FE8; }
    goto L_08A87000;
L_08A87000:;
    s2 = LD32(s2);
    cnd_ = s2 != 0;
    if (cnd_) { s1 = LD32(s2+4); goto L_08A86FD8; }
    goto L_08A8700C;
L_08A8700C:;
    v0 = s3 + 0;
    goto L_08A87010;
L_08A87010:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A87034:;
    t_ = s4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8703C;
L_08A8703C:;
    s3 = s3 | v0;
    goto L_08A86FF8;
L_08A87044:;
    t_ = s4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8704C;
L_08A8704C:;
    s3 = s3 | v0;
    goto L_08A86FB0;
}

/* 08A87054 */
rv_t func_08A87054(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A87054:;
    { s64 p_ = (s64)(s32)a2 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 48;
    v1 = a0 + 0;
    v0 = sp + 16;
    s2 = a1 + 0;
    a0 = a3 + 0;
    s1 = lo;
    ST32(sp+16, v1);
    a1 = sp + 0;
    v1 = 1;
    s0 = a2 + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+20, s1);
    ST32(sp+8, s1);
    { rv_t r_ = func_08A9004C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A870A4;
L_08A870A4:;
    cnd_ = v0 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A870C8; }
    goto L_08A870AC;
L_08A870AC:;
    cnd_ = s2 == 0;
    if (cnd_) { rs_break(0x7, 0x08a870b0); goto L_08A870B4; }
    goto L_08A870B4;
L_08A870B4:;
    v0 = LD32(sp+8);
    v0 = s1 - v0;
    { u32 x_ = v0, y_ = s2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s0 = lo;
    v0 = s0 + 0;
    goto L_08A870C8;
L_08A870C8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A870E0 */
u32 func_08A870E0(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A870E0:;
    cnd_ = psp_k0 == 0;
    v0 = D_08B1E010 - (-8176);
    if (cnd_) { goto L_08A87100; }
    goto L_08A870E8;
L_08A870E8:;
    v0 = LD32(psp_k0+4);
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A870FC; }
    goto L_08A870F4;
L_08A870F4:;
    v0 = v1 + 0;
    return v0;
L_08A870FC:;
    v0 = D_08B1E010 - (-8176);
    goto L_08A87100;
L_08A87100:;
    v1 = LD32(v0-8176);
    goto L_08A870F4;
}

/* 08A87108 */
u32 func_08A87108(u32 a0)
{
    u32 v0 = 0;
L_08A87108:;
    v0 = D_08AE9044 - (-28604);
    v0 = v0 - 28604;
    a0 = a0 + v0;
    v0 = LD_U8(a0);
    v0 = v0 & 0x4;
    return v0;
}

/* 08A87120 */
u32 func_08A87120(u32 a0)
{
    u32 v0 = 0;
L_08A87120:;
    v0 = D_08AE9044 - (-28604);
    v0 = v0 - 28604;
    a0 = a0 + v0;
    v0 = LD_U8(a0);
    v0 = v0 & 0x8;
    return v0;
}

/* 08A87138 */
u32 func_08A87138(u32 a0)
{
    u32 v0 = 0;
L_08A87138:;
    v0 = D_08AE9044 - (-28604);
    v0 = v0 - 28604;
    a0 = a0 + v0;
    v0 = LD_U8(a0);
    v0 = v0 & 0x1;
    return v0;
}

/* 08A87150 */
u32 func_08A87150(u32 a0)
{
    u32 v0 = 0;
L_08A87150:;
    v0 = a0 - 48;
    v0 = v0 < 0xau;
    return v0;
}

/* 08A8715C */
u64 func_08A8715C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A8715C:;
    v0 = D_08AE9044 - (-28604);
    v0 = v0 - 28604;
    v1 = a0 + v0;
    a0 = a0 < 0x100u;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A8717C; }
    goto L_08A87174;
L_08A87174:;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    goto L_08A8717C;
L_08A8717C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A87184 */
void func_08A87184(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A87184:;
    sp = sp - 96;
    v1 = LD_U16(a0+12);
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A871DC; }
    goto L_08A871AC;
L_08A871AC:;
    v1 = a0 + 67;
    v0 = 1;
    ST32(a0+20, v0);
    ST32(a0+16, v1);
    ST32(a0, v1);
    goto L_08A871C0;
L_08A871C0:;
    goto L_08A871C4;
L_08A871C4:;
    sp = sp + 96;
    return;
L_08A871DC:;
    v0 = (u32)(s32)LD_S16(a0+14);
    cnd_ = (s32)v0 < 0;
    v0 = v1 | 0x800;
    if (cnd_) { goto L_08A872E0; }
    goto L_08A871E8;
L_08A871E8:;
    v0 = func_08A870E0();
    goto L_08A871F0;
L_08A871F0:;
    a1 = (u32)(s32)LD_S16(s0+14);
    a0 = v0 + 0;
    a2 = sp + 0;
    v0 = func_08A86DB4(a0, a1, a2);
    goto L_08A87200;
L_08A87200:;
    cnd_ = (s32)v0 < 0;
    a0 = 0x8000;
    if (cnd_) { goto L_08A872D8; }
    goto L_08A87208;
L_08A87208:;
    v0 = LD32(sp+4);
    s2 = 1024;
    v0 = v0 & 0xf000;
    v1 = v0 ^ 0x2000;
    cnd_ = v0 == a0;
    s3 = v1 < 0x1u;
    if (cnd_) { goto L_08A872B8; }
    goto L_08A87220;
L_08A87220:;
    v0 = LD_U16(s0+12);
    goto L_08A87224;
L_08A87224:;
    v0 = v0 | 0x800;
    goto L_08A87228;
L_08A87228:;
    ST16(s0+12, v0);
    v0 = func_08A870E0();
    goto L_08A87230;
L_08A87230:;
    a0 = v0 + 0;
    a1 = 1024;
    { u64 r_ = func_08A87514(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8723C;
L_08A8723C:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A87294; }
    goto L_08A87244;
L_08A87244:;
    v0 = func_08A870E0();
    goto L_08A8724C;
L_08A8724C:;
    a0 = LD_U16(s0+12);
    v1 = ((u32)(uintptr_t)func_08A8634C) - (25420);
    v1 = v1 + 25420;
    a0 = a0 | 0x80;
    ST32(v0+60, v1);
    ST16(s0+12, a0);
    ST32(s0+16, s1);
    ST32(s0+20, s2);
    cnd_ = s3 == 0;
    ST32(s0, s1);
    if (cnd_) { goto L_08A871C0; }
    goto L_08A87274;
L_08A87274:;
    a0 = (u32)(s32)LD_S16(s0+14);
    v0 = func_08A85A40();
    goto L_08A8727C;
L_08A8727C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A871C4; }
    goto L_08A87284;
L_08A87284:;
    v0 = LD_U16(s0+12);
    v0 = v0 | 0x1;
    ST16(s0+12, v0);
    goto L_08A871C4;
L_08A87294:;
    v0 = LD_U16(s0+12);
    a0 = s0 + 67;
    v1 = 1;
    v0 = v0 | 0x2;
    ST32(s0+20, v1);
    ST16(s0+12, v0);
    ST32(s0+16, a0);
    ST32(s0, a0);
    goto L_08A871C0;
L_08A872B8:;
    v1 = LD32(s0+40);
    v0 = ((u32)(uintptr_t)func_08A8967C) - (-27012);
    v0 = v0 - 27012;
    cnd_ = v1 != v0;
    v0 = LD_U16(s0+12);
    if (cnd_) { goto L_08A87224; }
    goto L_08A872CC;
L_08A872CC:;
    ST32(s0+76, s2);
    v0 = v0 | 0x400;
    goto L_08A87228;
L_08A872D8:;
    v1 = LD_U16(s0+12);
    v0 = v1 | 0x800;
    goto L_08A872E0;
L_08A872E0:;
    s3 = 0 + 0;
    s2 = 1024;
    goto L_08A87228;
}

/* 08A872EC */
void func_08A872EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A872EC:;
    sp = sp - 48;
    v0 = D_08B1E018 - (-8168);
    s7 = v0 - 8168;
    v0 = D_08C32CC0 - (11456);
    fp = a0 + 0;
    s6 = D_08B1E424 - (-7132);
    s5 = (u32)-1;
    s4 = LD32(s7+8);
    v1 = LD32(v0+11456);
    v0 = LD32(s6-7132);
    s3 = LD32(s4+4);
    a1 = a1 + v1;
    s1 = a1 + 16;
    s3 = (s3 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    cnd_ = v0 == s5;
    s2 = s4 + s3;
    if (cnd_) { goto L_08A8735C; }
    goto L_08A87354;
L_08A87354:;
    s1 = a1 + 4111;
    s1 = (s1 & ~(0xfffu << 0)) | ((0 & 0xfff) << 0);
    goto L_08A8735C;
L_08A8735C:;
    a1 = s1 + 0;
    v0 = func_08A89318(a0, a1, t1, t2, t3);
    goto L_08A87364;
L_08A87364:;
    cnd_ = v0 == s5;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A87380; }
    goto L_08A8736C;
L_08A8736C:;
    v0 = v0 < s2;
    cnd_ = v0 == 0;
    s5 = D_08C32CCC - (11468);
    if (cnd_) { goto L_08A873B0; }
    goto L_08A87378;
L_08A87378:;
    cnd_ = s4 == s7;
    v0 = LD32(s5+11468);
    if (cnd_) { goto L_08A873B4; }
    goto L_08A87380;
L_08A87380:;
    sp = sp + 48;
    return;
L_08A873B0:;
    v0 = LD32(s5+11468);
    goto L_08A873B4;
L_08A873B4:;
    v0 = v0 + s1;
    cnd_ = s0 == s2;
    ST32(s5+11468, v0);
    if (cnd_) { goto L_08A874F4; }
    goto L_08A873C0;
L_08A873C0:;
    v1 = LD32(s6-7132);
    goto L_08A873C4;
L_08A873C4:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s5+11468);
    if (cnd_) { goto L_08A874EC; }
    goto L_08A873D0;
L_08A873D0:;
    v1 = s0 - s2;
    v0 = v0 + v1;
    ST32(s5+11468, v0);
    goto L_08A873DC;
L_08A873DC:;
    v0 = s0 + 8;
    v1 = v0 & 0xf;
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A873F8; }
    goto L_08A873EC;
L_08A873EC:;
    v0 = 16;
    s2 = v0 - v1;
    s0 = s0 + s2;
    goto L_08A873F8;
L_08A873F8:;
    v0 = s0 + s1;
    v0 = v0 & 0xfff;
    v1 = 4096;
    v1 = v1 - v0;
    s2 = s2 + v1;
    a0 = fp + 0;
    a1 = s2 + 0;
    v0 = func_08A89318(a0, a1, 0, 0, 0);
    goto L_08A87418;
L_08A87418:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { s2 = 0 + 0; goto L_08A874E4; }
    goto L_08A87428;
L_08A87428:;
    v1 = LD32(s5+11468);
    v0 = a0 - s0;
    v0 = v0 + s2;
    a1 = D_08B1E018 - (-8168);
    v1 = v1 + s2;
    a0 = a1 - 8168;
    v0 = v0 | 0x1;
    ST32(s5+11468, v1);
    ST32(a0+8, s0);
    cnd_ = s4 == a0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08A87498; }
    goto L_08A87454;
L_08A87454:;
    v0 = s3 < 0x10u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s4+4); goto L_08A8746C; }
    goto L_08A87460;
L_08A87460:;
    v0 = 1;
    ST32(s0+4, v0);
    goto L_08A87380;
L_08A8746C:;
    s3 = s3 - 12;
    s3 = (s3 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    v0 = v0 & 0x1;
    a0 = s4 + s3;
    v1 = 5;
    v0 = v0 | s3;
    a1 = s3 < 0x10u;
    ST32(s4+4, v0);
    ST32(a0+8, v1);
    cnd_ = a1 == 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08A874D0; }
    goto L_08A87498;
L_08A87498:;
    a3 = D_08C32CC4 - (11460);
    goto L_08A8749C;
L_08A8749C:;
    t0 = D_08C32CC8 - (11464);
    a0 = LD32(s5+11468);
    v1 = LD32(a3+11460);
    v0 = LD32(t0+11464);
    a1 = v1 + 0;
    a2 = v0 + 0;
    v1 = v1 < a0;
    v0 = v0 < a0;
    if (v0 != 0) a2 = a0;
    if (v1 != 0) a1 = a0;
    ST32(a3+11460, a1);
    ST32(t0+11464, a2);
    goto L_08A87380;
L_08A874D0:;
    a1 = s4 + 8;
    a0 = fp + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A874DC;
L_08A874DC:;
    a3 = D_08C32CC4 - (11460);
    goto L_08A8749C;
L_08A874E4:;
    a0 = s0 + 0;
    goto L_08A87428;
L_08A874EC:;
    ST32(s6-7132, s0);
    goto L_08A873DC;
L_08A874F4:;
    v0 = s0 & 0xfff;
    cnd_ = v0 != 0;
    v1 = LD32(s6-7132);
    if (cnd_) { goto L_08A873C4; }
    goto L_08A87500;
L_08A87500:;
    v1 = LD32(s7+8);
    v0 = s1 + s3;
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    goto L_08A87498;
}

/* 08A87514 */
u64 func_08A87514(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A87514:;
    sp = sp - 32;
    v0 = a1 + 19;
    v1 = v0 < 0x1fu;
    v0 = (v0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    s1 = 16;
    if (v1 == 0) s1 = v0;
    a1 = s1 < a1;
    v0 = s1 >> 31;
    v0 = v0 | a1;
    v1 = 0 + 0;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A875BC; }
    goto L_08A87558;
L_08A87558:;
    func_08A87FB8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A87560;
L_08A87560:;
    v0 = s1 < 0x1f8u;
    cnd_ = v0 == 0;
    a0 = s1 >> 9;
    if (cnd_) { goto L_08A879B4; }
    goto L_08A8756C;
L_08A8756C:;
    s3 = D_08B1E018 - (-8168);
    v0 = s3 - 8168;
    a0 = s1 + v0;
    s0 = LD32(a0+12);
    cnd_ = s0 == a0;
    t1 = s1 >> 3;
    if (cnd_) { goto L_08A875DC; }
    goto L_08A87584;
L_08A87584:;
    v1 = LD32(s0+4);
    t2 = LD32(s0+12);
    t0 = LD32(s0+8);
    v1 = (v1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    a0 = s2 + 0;
    ST32(t2+8, t0);
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    goto L_08A875AC;
L_08A875AC:;
    ST32(t0+12, t2);
    goto L_08A875B0;
L_08A875B0:;
    v0 = func_08A87FF4(a1, a2, a3, t0, t1, t2, t3);
    goto L_08A875B8;
L_08A875B8:;
    v1 = s0 + 8;
    goto L_08A875BC;
L_08A875BC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A875DC:;
    t1 = t1 + 2;
    goto L_08A875E0;
L_08A875E0:;
    t3 = D_08B1E020 - (-8160);
    a2 = t3 - 8160;
    s0 = LD32(a2+8);
    cnd_ = s0 == a2;
    v0 = (u32)((s32)t1 >> 31);
    if (cnd_) { goto L_08A8767C; }
    goto L_08A875F4;
L_08A875F4:;
    a1 = LD32(s0+4);
    a1 = (a1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a3 = a1 - s1;
    v0 = (s32)a3 < 16;
    cnd_ = v0 == 0;
    if (cnd_) { t1 = s0 + s1; goto L_08A87984; }
    goto L_08A8760C;
L_08A8760C:;
    ST32(a2+12, a2);
    cnd_ = (s32)a3 < 0;
    ST32(a2+8, a2);
    if (cnd_) { goto L_08A87630; }
    goto L_08A87618;
L_08A87618:;
    v1 = s0 + a1;
    v0 = LD32(v1+4);
    a0 = s2 + 0;
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    goto L_08A875B0;
L_08A87630:;
    v0 = a1 < 0x200u;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = a1 >> 9; goto L_08A878C0; }
    goto L_08A8763C;
L_08A8763C:;
    a0 = a1 >> 3;
    v0 = a0 << 3;
    a1 = a2 - 8;
    t2 = v0 + a1;
    v1 = LD32(a1+4);
    a0 = a0 >> 2;
    v0 = 1;
    t0 = LD32(t2+8);
    v0 = v0 << (a0 & 31);
    v1 = v1 | v0;
    ST32(a1+4, v1);
    goto L_08A87668;
L_08A87668:;
    ST32(s0+12, t2);
    ST32(s0+8, t0);
    ST32(t0+12, s0);
    ST32(t2+8, s0);
    v0 = (u32)((s32)t1 >> 31);
    goto L_08A8767C;
L_08A8767C:;
    s3 = D_08B1E018 - (-8168);
    v1 = s3 - 8168;
    v0 = v0 >> 30;
    a1 = LD32(v1+4);
    v0 = t1 + v0;
    v0 = (u32)((s32)v0 >> 2);
    v1 = 1;
    a2 = v1 << (v0 & 31);
    a0 = a1 < a2;
    cnd_ = a0 != 0;
    s0 = s3 - 8168;
    if (cnd_) { goto L_08A877C0; }
    goto L_08A876A8;
L_08A876A8:;
    v0 = a2 & a1;
    cnd_ = v0 != 0;
    v0 = D_08B1E018 - (-8168);
    if (cnd_) { goto L_08A876E4; }
    goto L_08A876B4;
L_08A876B4:;
    v0 = t1 + 0;
    a2 = a2 << 1;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v1 = a2 & a1;
    cnd_ = v1 != 0;
    t1 = v0 + 4;
    if (cnd_) { goto L_08A876E0; }
    goto L_08A876CC;
L_08A876CC:;
    a0 = a1 + 0;
    goto L_08A876D0;
L_08A876D0:;
    a2 = a2 << 1;
    v0 = a2 & a0;
    cnd_ = v0 == 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08A876D0; }
    goto L_08A876E0;
L_08A876E0:;
    v0 = D_08B1E018 - (-8168);
    goto L_08A876E4;
L_08A876E4:;
    t2 = v0 - 8168;
    t4 = t2 + 0;
    v0 = t1 << 3;
    goto L_08A876F0;
L_08A876F0:;
    a0 = v0 + t2;
    t0 = t1 + 0;
    v1 = a0 + 0;
    s0 = LD32(v1+12);
    goto L_08A87700;
L_08A87700:;
    cnd_ = s0 == v1;
    v0 = (s32)t1 < 63;
    if (cnd_) { goto L_08A87738; }
    goto L_08A87708;
L_08A87708:;
    a1 = LD32(s0+4);
    goto L_08A8770C;
L_08A8770C:;
    a1 = (a1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a3 = a1 - s1;
    v0 = (s32)a3 < 16;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = LD32(s0+12); goto L_08A8787C; }
    goto L_08A87720;
L_08A87720:;
    cnd_ = (s32)a3 >= 0;
    if (cnd_) { v1 = s0 + a1; goto L_08A8785C; }
    goto L_08A87728;
L_08A87728:;
    s0 = LD32(s0+12);
    cnd_ = s0 != v1;
    if (cnd_) { a1 = LD32(s0+4); goto L_08A8770C; }
    goto L_08A87734;
L_08A87734:;
    v0 = (s32)t1 < 63;
    goto L_08A87738;
L_08A87738:;
    cnd_ = v0 == 0;
    v1 = v1 + 8;
    if (cnd_) { goto L_08A87748; }
    goto L_08A87740;
L_08A87740:;
    v1 = v1 + 8;
    t1 = t1 + 1;
    goto L_08A87748;
L_08A87748:;
    t1 = t1 + 1;
    v0 = t1 & 0x3;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v1+12); goto L_08A87700; }
    goto L_08A87758;
L_08A87758:;
    v0 = t0 & 0x3;
    goto L_08A8775C;
L_08A8775C:;
    a0 = a0 - 8;
    cnd_ = v0 == 0;
    t0 = t0 - 1;
    if (cnd_) { goto L_08A87848; }
    goto L_08A87768;
L_08A87768:;
    v0 = LD32(a0+8);
    cnd_ = v0 == a0;
    v0 = t0 & 0x3;
    if (cnd_) { goto L_08A8775C; }
    goto L_08A87774;
L_08A87774:;
    s3 = D_08B1E018 - (-8168);
    v0 = s3 - 8168;
    v1 = LD32(v0+4);
    a2 = a2 << 1;
    v0 = v1 < a2;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s3 - 8168; goto L_08A877C0; }
    goto L_08A87790;
L_08A87790:;
    cnd_ = a2 == 0;
    v0 = a2 & v1;
    if (cnd_) { goto L_08A877BC; }
    goto L_08A87798;
L_08A87798:;
    cnd_ = v0 != 0;
    v0 = t1 << 3;
    if (cnd_) { goto L_08A876F0; }
    goto L_08A877A0;
L_08A877A0:;
    v1 = LD32(t4+4);
    goto L_08A877A4;
L_08A877A4:;
    a2 = a2 << 1;
    v0 = a2 & v1;
    cnd_ = v0 == 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08A877A4; }
    goto L_08A877B4;
L_08A877B4:;
    v0 = t1 << 3;
    goto L_08A876F0;
L_08A877BC:;
    s0 = s3 - 8168;
    goto L_08A877C0;
L_08A877C0:;
    v0 = LD32(s0+8);
    v1 = LD32(v0+4);
    v1 = (v1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a3 = v1 - s1;
    v0 = (s32)a3 < 16;
    v1 = v1 < s1;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    a2 = s3 - 8168;
    if (cnd_) { goto L_08A87814; }
    goto L_08A877E4;
L_08A877E4:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    func_08A872EC(a0, a1, t1, t2, t3);
    goto L_08A877F0;
L_08A877F0:;
    v0 = LD32(s0+8);
    v1 = LD32(v0+4);
    v1 = (v1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a3 = v1 - s1;
    v0 = (s32)a3 < 16;
    v1 = v1 < s1;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a2 = s3 - 8168;
    if (cnd_) { goto L_08A87838; }
    goto L_08A87814;
L_08A87814:;
    s0 = LD32(a2+8);
    a1 = a3 | 0x1;
    v0 = s1 | 0x1;
    v1 = s0 + s1;
    ST32(s0+4, v0);
    a0 = s2 + 0;
    ST32(v1+4, a1);
    ST32(a2+8, v1);
    goto L_08A875B0;
L_08A87838:;
    a0 = s2 + 0;
    v0 = func_08A87FF4(0, a2, a3, 0, 0, 0, 0);
    goto L_08A87840;
L_08A87840:;
    v1 = 0 + 0;
    goto L_08A875BC;
L_08A87848:;
    v0 = LD32(t2+4);
    v1 = ~(0 | a2);
    v0 = v0 & v1;
    ST32(t2+4, v0);
    goto L_08A87774;
L_08A8785C:;
    v0 = LD32(v1+4);
    t2 = LD32(s0+12);
    t0 = LD32(s0+8);
    v0 = v0 | 0x1;
    ST32(v1+4, v0);
    a0 = s2 + 0;
    ST32(t2+8, t0);
    goto L_08A875AC;
L_08A8787C:;
    t0 = LD32(s0+8);
    t1 = s0 + s1;
    v0 = t3 - 8160;
    v1 = t1 + a3;
    a1 = s1 | 0x1;
    a2 = a3 | 0x1;
    a0 = s2 + 0;
    ST32(t2+8, t0);
    ST32(t0+12, t2);
    ST32(s0+4, a1);
    ST32(v0+8, t1);
    ST32(v0+12, t1);
    ST32(v1, a3);
    ST32(t1+4, a2);
    ST32(t1+8, v0);
    ST32(t1+12, v0);
    goto L_08A875B0;
L_08A878C0:;
    cnd_ = a2 == 0;
    a0 = a1 >> 3;
    if (cnd_) { goto L_08A87918; }
    goto L_08A878C8;
L_08A878C8:;
    v1 = a1 >> 6;
    v0 = a2 < 0x5u;
    cnd_ = v0 != 0;
    a0 = v1 + 56;
    if (cnd_) { goto L_08A87918; }
    goto L_08A878D8;
L_08A878D8:;
    v0 = a2 < 0x15u;
    cnd_ = v0 != 0;
    a0 = a2 + 91;
    if (cnd_) { goto L_08A87918; }
    goto L_08A878E4;
L_08A878E4:;
    v1 = a1 >> 12;
    v0 = a2 < 0x55u;
    cnd_ = v0 != 0;
    a0 = v1 + 110;
    if (cnd_) { goto L_08A87918; }
    goto L_08A878F4;
L_08A878F4:;
    v0 = a1 >> 15;
    v1 = a2 < 0x155u;
    cnd_ = v1 != 0;
    a0 = v0 + 119;
    if (cnd_) { goto L_08A87918; }
    goto L_08A87904;
L_08A87904:;
    v0 = a1 >> 18;
    v1 = a2 < 0x555u;
    cnd_ = v1 != 0;
    a0 = v0 + 124;
    if (cnd_) { goto L_08A87918; }
    goto L_08A87914;
L_08A87914:;
    a0 = 126;
    goto L_08A87918;
L_08A87918:;
    a2 = s3 - 8168;
    v0 = a0 << 3;
    t2 = v0 + a2;
    t0 = LD32(t2+8);
    cnd_ = t0 == t2;
    if (cnd_) { v0 = LD32(a2+4); goto L_08A8796C; }
    goto L_08A87930;
L_08A87930:;
    v0 = LD32(t0+4);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = LD32(t0+12); goto L_08A87668; }
    goto L_08A87944;
L_08A87944:;
    t0 = LD32(t0+8);
    goto L_08A87948;
L_08A87948:;
    cnd_ = t0 == t2;
    if (cnd_) { t2 = LD32(t0+12); goto L_08A87668; }
    goto L_08A87950;
L_08A87950:;
    v0 = LD32(t0+4);
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(t0+8); goto L_08A87948; }
    goto L_08A87964;
L_08A87964:;
    t2 = LD32(t0+12);
    goto L_08A87668;
L_08A8796C:;
    a0 = a0 >> 2;
    v1 = 1;
    v1 = v1 << (a0 & 31);
    v0 = v0 | v1;
    ST32(a2+4, v0);
    goto L_08A87668;
L_08A87984:;
    v0 = t1 + a3;
    v1 = s1 | 0x1;
    a1 = a3 | 0x1;
    a0 = s2 + 0;
    ST32(s0+4, v1);
    ST32(a2+12, t1);
    ST32(a2+8, t1);
    ST32(v0, a3);
    ST32(t1+4, a1);
    ST32(t1+8, a2);
    ST32(t1+12, a2);
    goto L_08A875B0;
L_08A879B4:;
    cnd_ = a0 == 0;
    t1 = s1 >> 3;
    if (cnd_) { goto L_08A87A0C; }
    goto L_08A879BC;
L_08A879BC:;
    v1 = s1 >> 6;
    v0 = a0 < 0x5u;
    cnd_ = v0 != 0;
    t1 = v1 + 56;
    if (cnd_) { goto L_08A87A0C; }
    goto L_08A879CC;
L_08A879CC:;
    v0 = a0 < 0x15u;
    cnd_ = v0 != 0;
    t1 = a0 + 91;
    if (cnd_) { goto L_08A87A0C; }
    goto L_08A879D8;
L_08A879D8:;
    v1 = s1 >> 12;
    v0 = a0 < 0x55u;
    cnd_ = v0 != 0;
    t1 = v1 + 110;
    if (cnd_) { goto L_08A87A0C; }
    goto L_08A879E8;
L_08A879E8:;
    v1 = s1 >> 15;
    v0 = a0 < 0x155u;
    cnd_ = v0 != 0;
    t1 = v1 + 119;
    if (cnd_) { goto L_08A87A0C; }
    goto L_08A879F8;
L_08A879F8:;
    v0 = s1 >> 18;
    v1 = a0 < 0x555u;
    cnd_ = v1 != 0;
    t1 = v0 + 124;
    if (cnd_) { goto L_08A87A0C; }
    goto L_08A87A08;
L_08A87A08:;
    t1 = 126;
    goto L_08A87A0C;
L_08A87A0C:;
    s3 = D_08B1E018 - (-8168);
    v1 = t1 << 3;
    v0 = s3 - 8168;
    v1 = v1 + v0;
    s0 = LD32(v1+12);
    cnd_ = s0 == v1;
    if (cnd_) { t1 = t1 + 1; goto L_08A875E0; }
    goto L_08A87A28;
L_08A87A28:;
    a1 = LD32(s0+4);
    goto L_08A87A2C;
L_08A87A2C:;
    a1 = (a1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a3 = a1 - s1;
    v0 = (s32)a3 < 16;
    cnd_ = v0 == 0;
    if (cnd_) { t1 = t1 - 1; goto L_08A87A54; }
    goto L_08A87A40;
L_08A87A40:;
    cnd_ = (s32)a3 >= 0;
    if (cnd_) { v1 = s0 + a1; goto L_08A8785C; }
    goto L_08A87A48;
L_08A87A48:;
    s0 = LD32(s0+12);
    cnd_ = s0 != v1;
    if (cnd_) { a1 = LD32(s0+4); goto L_08A87A2C; }
    goto L_08A87A54;
L_08A87A54:;
    t1 = t1 + 1;
    goto L_08A875E0;
}

/* 08A87A5C */
u32 func_08A87A5C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A87A5C:;
    v0 = a2 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a2 - 1; goto L_08A87AA0; }
    goto L_08A87A68;
L_08A87A68:;
    v0 = a0 | a1;
    v0 = v0 & 0x3;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a2 - 1; goto L_08A87AA0; }
    goto L_08A87A78;
L_08A87A78:;
    v1 = LD32(a0);
    v0 = LD32(a1);
    cnd_ = v1 != v0;
    if (cnd_) { a2 = a2 - 1; goto L_08A87AA0; }
    goto L_08A87A88;
L_08A87A88:;
    a2 = a2 - 4;
    v0 = a2 < 0x4u;
    a0 = a0 + 4;
    cnd_ = v0 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A87A78; }
    goto L_08A87A9C;
L_08A87A9C:;
    a2 = a2 - 1;
    goto L_08A87AA0;
L_08A87AA0:;
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A87AD8; }
    goto L_08A87AAC;
L_08A87AAC:;
    t0 = (u32)-1;
    v1 = LD_U8(a0);
    goto L_08A87AB4;
L_08A87AB4:;
    v0 = LD_U8(a1);
    a2 = a2 - 1;
    a0 = a0 + 1;
    a1 = a1 + 1;
    cnd_ = v1 != v0;
    a3 = v1 - v0;
    if (cnd_) { goto L_08A87AD8; }
    goto L_08A87ACC;
L_08A87ACC:;
    cnd_ = a2 != t0;
    if (cnd_) { v1 = LD_U8(a0); goto L_08A87AB4; }
    goto L_08A87AD4;
L_08A87AD4:;
    a3 = 0 + 0;
    goto L_08A87AD8;
L_08A87AD8:;
    v0 = a3 + 0;
    return v0;
}

/* 08A87AE0 */
void func_08A87AE0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A87AE0:;
    v0 = a1 | a0;
    v0 = v0 & 0x3;
    cnd_ = v0 != 0;
    t2 = a0 + 0;
    if (cnd_) { goto L_08A87B84; }
    goto L_08A87AF0;
L_08A87AF0:;
    t0 = a2 >> 4;
    t1 = a1 + 0;
    a2 = a2 & 0xf;
    cnd_ = t0 == 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08A87B34; }
    goto L_08A87B04;
L_08A87B04:;
    v0 = LD32(t1);
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    a1 = LD32(t1+12);
    t0 = t0 - 1;
    ST32(a3, v0);
    t1 = t1 + 16;
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    ST32(a3+12, a1);
    cnd_ = t0 != 0;
    a3 = a3 + 16;
    if (cnd_) { goto L_08A87B04; }
    goto L_08A87B34;
L_08A87B34:;
    t0 = a2 >> 2;
    cnd_ = t0 == 0;
    a2 = a2 & 0x3;
    if (cnd_) { goto L_08A87B58; }
    goto L_08A87B40;
L_08A87B40:;
    v0 = LD32(t1);
    t0 = t0 - 1;
    t1 = t1 + 4;
    ST32(a3, v0);
    cnd_ = t0 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A87B40; }
    goto L_08A87B58;
L_08A87B58:;
    v1 = a3 + 0;
    cnd_ = (s32)a2 <= 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_08A87B7C; }
    goto L_08A87B64;
L_08A87B64:;
    v0 = LD_U8(a1);
    a2 = a2 - 1;
    a1 = a1 + 1;
    ST8(v1, v0);
    cnd_ = (s32)a2 > 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A87B64; }
    goto L_08A87B7C;
L_08A87B7C:;
    v0 = t2 + 0;
    return;
L_08A87B84:;
    v0 = (u32)((s32)a2 >> 31);
    v0 = v0 >> 30;
    v0 = a2 + v0;
    t0 = (u32)((s32)v0 >> 2);
    v1 = t0 << 2;
    a2 = a2 - v1;
    cnd_ = t0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A87BC4; }
    goto L_08A87BA4;
L_08A87BA4:;
    t0 = t0 - 1;
    v0 = LDU32(a1);
    a1 = a1 + 4;
    STU32(v1, v0);
    cnd_ = t0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A87BA4; }
    goto L_08A87BC4;
L_08A87BC4:;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { goto L_08A87B7C; }
    goto L_08A87BCC;
L_08A87BCC:;
    v0 = LD_U8(a1);
    a2 = a2 - 1;
    a1 = a1 + 1;
    ST8(v1, v0);
    cnd_ = (s32)a2 > 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A87BCC; }
    goto L_08A87BE4;
L_08A87BE4:;
    goto L_08A87B7C;
L_08A87BEC:;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return;
}

/* 08A87C00 */
u64 func_08A87C00(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A87C00:;
    v0 = a1 < a0;
    cnd_ = v0 == 0;
    t2 = a0 + 0;
    if (cnd_) { goto L_08A87D6C; }
    goto L_08A87C0C;
L_08A87C0C:;
    v1 = a1 + a2;
    v0 = a0 < v1;
    cnd_ = v0 == 0;
    v0 = a2 < 0x8u;
    if (cnd_) { goto L_08A87D70; }
    goto L_08A87C1C;
L_08A87C1C:;
    t2 = a0 + a2;
    a0 = v1 + 0;
    t1 = a2 + 0;
    cnd_ = v0 != 0;
    v1 = t2 + 0;
    if (cnd_) { goto L_08A87CD0; }
    goto L_08A87C30;
L_08A87C30:;
    v0 = a0 ^ t2;
    v0 = v0 & 0x3;
    cnd_ = v0 != 0;
    v0 = (u32)((s32)a2 >> 31);
    if (cnd_) { goto L_08A87D20; }
    goto L_08A87C40;
L_08A87C40:;
    a1 = a0 & 0x3;
    cnd_ = a1 == 0;
    t0 = t1 >> 4;
    if (cnd_) { goto L_08A87C64; }
    goto L_08A87C4C;
L_08A87C4C:;
    v0 = LWL(v0, a0-1);
    t1 = a2 - a1;
    v1 = t2 - a1;
    a0 = a0 - a1;
    SWL(t2-1, v0);
    t0 = t1 >> 4;
    goto L_08A87C64;
L_08A87C64:;
    a3 = v1 + 0;
    a2 = a0 + 0;
    cnd_ = t0 == 0;
    t1 = t1 & 0xf;
    if (cnd_) { goto L_08A87CA4; }
    goto L_08A87C74;
L_08A87C74:;
    a2 = a2 - 16;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    a3 = a3 - 16;
    t0 = t0 - 1;
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    cnd_ = t0 != 0;
    ST32(a3+12, a1);
    if (cnd_) { goto L_08A87C74; }
    goto L_08A87CA4;
L_08A87CA4:;
    t0 = t1 >> 2;
    cnd_ = t0 == 0;
    t1 = t1 & 0x3;
    if (cnd_) { goto L_08A87CC8; }
    goto L_08A87CB0;
L_08A87CB0:;
    a2 = a2 - 4;
    v0 = LD32(a2);
    a3 = a3 - 4;
    t0 = t0 - 1;
    cnd_ = t0 != 0;
    ST32(a3, v0);
    if (cnd_) { goto L_08A87CB0; }
    goto L_08A87CC8;
L_08A87CC8:;
    v1 = a3 + 0;
    goto L_08A87CCC;
L_08A87CCC:;
    a0 = a2 + 0;
    goto L_08A87CD0;
L_08A87CD0:;
    cnd_ = (s32)t1 <= 0;
    if (cnd_) { goto L_08A87D18; }
    goto L_08A87CD8;
L_08A87CD8:;
    goto L_08A87D00;
L_08A87D00:;
    a0 = a0 - 1;
    v0 = LD_U8(a0);
    v1 = v1 - 1;
    t1 = t1 - 1;
    cnd_ = (s32)t1 > 0;
    ST8(v1, v0);
    if (cnd_) { goto L_08A87D00; }
    goto L_08A87D18;
L_08A87D18:;
    v0 = t2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A87D20:;
    v0 = v0 >> 30;
    v0 = a2 + v0;
    t0 = (u32)((s32)v0 >> 2);
    v1 = t0 << 2;
    t1 = a2 - v1;
    a3 = t2 + 0;
    cnd_ = t0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A87CC8; }
    goto L_08A87D40;
L_08A87D40:;
    t0 = t0 - 1;
    goto L_08A87D44;
L_08A87D44:;
    a2 = a2 - 4;
    a3 = a3 - 4;
    v0 = LDU32(a2);
    STU32(a3, v0);
    cnd_ = t0 != 0;
    if (cnd_) { t0 = t0 - 1; goto L_08A87D44; }
    goto L_08A87D64;
L_08A87D64:;
    v1 = a3 + 0;
    goto L_08A87CCC;
L_08A87D6C:;
    v0 = a2 < 0x8u;
    goto L_08A87D70;
L_08A87D70:;
    cnd_ = v0 != 0;
    a0 = t2 + 0;
    if (cnd_) { goto L_08A87E60; }
    goto L_08A87D78;
L_08A87D78:;
    v0 = a1 ^ t2;
    v0 = v0 & 0x3;
    cnd_ = v0 != 0;
    v0 = (u32)((s32)a2 >> 31);
    if (cnd_) { goto L_08A87EA0; }
    goto L_08A87D88;
L_08A87D88:;
    v1 = a1 & 0x3;
    cnd_ = v1 == 0;
    t1 = a2 >> 4;
    if (cnd_) { goto L_08A87DB4; }
    goto L_08A87D94;
L_08A87D94:;
    v0 = 4;
    v0 = v0 - v1;
    a2 = a2 - v0;
    v1 = LWR(v1, a1);
    a0 = t2 + v0;
    a1 = a1 + v0;
    SWR(t2, v1);
    t1 = a2 >> 4;
    goto L_08A87DB4;
L_08A87DB4:;
    t0 = a0 + 0;
    a3 = a1 + 0;
    cnd_ = t1 == 0;
    a2 = a2 & 0xf;
    if (cnd_) { goto L_08A87E30; }
    goto L_08A87DC4;
L_08A87DC4:;
    goto L_08A87E00;
L_08A87E00:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    t1 = t1 - 1;
    ST32(t0, v0);
    a3 = a3 + 16;
    ST32(t0+4, v1);
    ST32(t0+8, a0);
    ST32(t0+12, a1);
    cnd_ = t1 != 0;
    t0 = t0 + 16;
    if (cnd_) { goto L_08A87E00; }
    goto L_08A87E30;
L_08A87E30:;
    t1 = a2 >> 2;
    cnd_ = t1 == 0;
    a2 = a2 & 0x3;
    if (cnd_) { goto L_08A87E58; }
    goto L_08A87E3C;
L_08A87E3C:;
    goto L_08A87E40;
L_08A87E40:;
    v0 = LD32(a3);
    t1 = t1 - 1;
    a3 = a3 + 4;
    ST32(t0, v0);
    cnd_ = t1 != 0;
    t0 = t0 + 4;
    if (cnd_) { goto L_08A87E40; }
    goto L_08A87E58;
L_08A87E58:;
    a0 = t0 + 0;
    goto L_08A87E5C;
L_08A87E5C:;
    a1 = a3 + 0;
    goto L_08A87E60;
L_08A87E60:;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { goto L_08A87E98; }
    goto L_08A87E68;
L_08A87E68:;
    goto L_08A87E80;
L_08A87E80:;
    v0 = LD_U8(a1);
    a2 = a2 - 1;
    a1 = a1 + 1;
    ST8(a0, v0);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A87E80; }
    goto L_08A87E98;
L_08A87E98:;
    v0 = t2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A87EA0:;
    v0 = v0 >> 30;
    v0 = a2 + v0;
    t1 = (u32)((s32)v0 >> 2);
    v1 = t1 << 2;
    a3 = a1 + 0;
    a2 = a2 - v1;
    cnd_ = t1 == 0;
    t0 = t2 + 0;
    if (cnd_) { goto L_08A87E58; }
    goto L_08A87EC0;
L_08A87EC0:;
    t1 = t1 - 1;
    v0 = LDU32(a3);
    a3 = a3 + 4;
    STU32(t0, v0);
    cnd_ = t1 != 0;
    t0 = t0 + 4;
    if (cnd_) { goto L_08A87EC0; }
    goto L_08A87EE0;
L_08A87EE0:;
    a0 = t0 + 0;
    goto L_08A87E5C;
L_08A87EE8:;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return (u64)v0 | ((u64)v1 << 32);
}

/* 08A87F00 */
u64 func_08A87F00(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A87F00:;
    v0 = a2 < 0x10u;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A87F98; }
    goto L_08A87F0C;
L_08A87F0C:;
    a3 = a0 & 0x3;
    cnd_ = a3 == 0;
    if (cnd_) { a1 = a1 & 0xff; goto L_08A87F40; }
    goto L_08A87F18;
L_08A87F18:;
    v0 = a3 < 0x4u;
    cnd_ = v0 == 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A87F3C; }
    goto L_08A87F24;
L_08A87F24:;
    v0 = a3 < 0x4u;
    ST8(v1, a1);
    a2 = a2 - 1;
    v1 = v1 + 1;
    cnd_ = v0 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A87F24; }
    goto L_08A87F3C;
L_08A87F3C:;
    a1 = a1 & 0xff;
    goto L_08A87F40;
L_08A87F40:;
    a3 = v1 + 0;
    cnd_ = a1 == 0;
    t0 = a1 + 0;
    if (cnd_) { goto L_08A87F5C; }
    goto L_08A87F4C;
L_08A87F4C:;
    v0 = a1 << 8;
    t0 = a1 | v0;
    v1 = t0 << 16;
    t0 = t0 | v1;
    goto L_08A87F5C;
L_08A87F5C:;
    v0 = a2 >> 3;
    cnd_ = v0 == 0;
    a2 = a2 & 0x7;
    if (cnd_) { goto L_08A87F7C; }
    goto L_08A87F68;
L_08A87F68:;
    v0 = v0 - 1;
    ST32(a3, t0);
    ST32(a3+4, t0);
    cnd_ = v0 != 0;
    a3 = a3 + 8;
    if (cnd_) { goto L_08A87F68; }
    goto L_08A87F7C;
L_08A87F7C:;
    v0 = a2 < 0x4u;
    cnd_ = v0 != 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_08A87F98; }
    goto L_08A87F88;
L_08A87F88:;
    ST32(a3, t0);
    a2 = a2 - 4;
    a3 = a3 + 4;
    v1 = a3 + 0;
    goto L_08A87F98;
L_08A87F98:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A87FB0; }
    goto L_08A87FA0;
L_08A87FA0:;
    a2 = a2 - 1;
    ST8(v1, a1);
    cnd_ = a2 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A87FA0; }
    goto L_08A87FB0;
L_08A87FB0:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A87FB8 */
void func_08A87FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A87FB8:;
    sp = sp - 16;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A87FC8;
L_08A87FC8:;
    a1 = D_08C32CF4 - (11508);
    a0 = v0 + 0;
    v0 = LD32(a1+11508);
    cnd_ = v0 != 0;
    v1 = v0 + 1;
    if (cnd_) { goto L_08A87FE4; }
    goto L_08A87FDC;
L_08A87FDC:;
    v0 = D_08C32CF8 - (11512);
    ST32(v0+11512, a0);
    goto L_08A87FE4;
L_08A87FE4:;
    ST32(a1+11508, v1);
    sp = sp + 16;
    return;
}

/* 08A87FF4 */
u32 func_08A87FF4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A87FF4:;
    v1 = D_08C32CF4 - (11508);
    v0 = LD32(v1+11508);
    sp = sp - 16;
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(v1+11508, v0);
    if (cnd_) { goto L_08A8801C; }
    goto L_08A88010;
L_08A88010:;
    goto L_08A88014;
L_08A88014:;
    sp = sp + 16;
    return v0;
L_08A8801C:;
    v0 = D_08C32CF8 - (11512);
    a0 = LD32(v0+11512);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88028;
L_08A88028:;
    goto L_08A88014;
L_08A88030:;
    { rv_t r_ = func_08A88040(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return v0;
}

/* 08A88040 */
rv_t func_08A88040(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A88040:;
    sp = sp - 16;
    cnd_ = psp_k0 == 0;
    if (cnd_) { goto L_08A88134; }
    goto L_08A88050;
L_08A88050:;
    s0 = LD32(psp_k0+4);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = D_08AD2D80 - (11648); goto L_08A88138; }
    goto L_08A8805C;
L_08A8805C:;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88064;
L_08A88064:;
    a2 = LD32(s0+892);
    a0 = v0 + 0;
    v1 = D_08C32CFC - (11516);
    v0 = (u32)((s32)a2 >> 31);
    v0 = v0 >> 27;
    v0 = a2 + v0;
    v0 = (v0 & ~(0x1fu << 0)) | ((0 & 0x1f) << 0);
    v1 = v1 + 11516;
    cnd_ = v1 == 0;
    v0 = a2 - v0;
    if (cnd_) { goto L_08A880AC; }
    goto L_08A8808C;
L_08A8808C:;
    a3 = v0 << 2;
    a1 = a3 + v1;
    goto L_08A88094;
L_08A88094:;
    v0 = LD32(a1+132);
    cnd_ = v0 == a2;
    if (cnd_) { goto L_08A88124; }
    goto L_08A880A0;
L_08A880A0:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    a1 = a3 + v1;
    if (cnd_) { goto L_08A88094; }
    goto L_08A880AC;
L_08A880AC:;
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A880B4;
L_08A880B4:;
    v0 = D_08AD2D80 - (11648);
    v0 = v0 + 11648;
    cnd_ = v0 == 0;
    a0 = D_08AE9148 - (-28344);
    if (cnd_) { goto L_08A8810C; }
    goto L_08A880C4;
L_08A880C4:;
    a0 = a0 - 28344;
    goto L_08A88100;
L_08A88100:;
    a1 = D_08AE916C - (-28308);
    a1 = a1 - 28308;
    v0 = sceKernelPrintf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8810C;
L_08A8810C:;
    v0 = D_08B1E010 - (-8176);
    goto L_08A88110;
L_08A88110:;
    v0 = LD32(v0-8176);
    goto L_08A88114;
L_08A88114:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A88124:;
    s0 = LD32(a1+4);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8812C;
L_08A8812C:;
    v0 = s0 + 0;
    goto L_08A88114;
L_08A88134:;
    v0 = D_08AD2D80 - (11648);
    goto L_08A88138;
L_08A88138:;
    a0 = D_08AE917C - (-28292);
    v0 = v0 + 11648;
    cnd_ = v0 != 0;
    a0 = a0 - 28292;
    if (cnd_) { goto L_08A88100; }
    goto L_08A88148;
L_08A88148:;
    v0 = D_08B1E010 - (-8176);
    goto L_08A88110;
}

/* 08A88150 */
u32 func_08A88150(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A88150:;
    sp = sp - 32;
    s3 = a1 + 0;
    s1 = a0 + 0;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88178;
L_08A88178:;
    a0 = v0 + 0;
    v0 = (u32)((s32)s1 >> 31);
    v0 = v0 >> 27;
    v0 = s1 + v0;
    v1 = D_08C32CFC - (11516);
    v0 = (v0 & ~(0x1fu << 0)) | ((0 & 0x1f) << 0);
    s0 = v1 + 11516;
    ST32(s3+892, s1);
    cnd_ = s0 == 0;
    s4 = s1 - v0;
    if (cnd_) { goto L_08A881C8; }
    goto L_08A881A0;
L_08A881A0:;
    a1 = s4 << 2;
    v0 = a1 + s0;
    goto L_08A881A8;
L_08A881A8:;
    v1 = LD32(v0+132);
    cnd_ = v1 == 0;
    if (cnd_) { ST32(v0+4, s3); goto L_08A88254; }
    goto L_08A881B4;
L_08A881B4:;
    cnd_ = v1 == s1;
    s2 = s0 + 0;
    if (cnd_) { goto L_08A88244; }
    goto L_08A881BC;
L_08A881BC:;
    s0 = LD32(s0);
    cnd_ = s0 != 0;
    v0 = a1 + s0;
    if (cnd_) { goto L_08A881A8; }
    goto L_08A881C8;
L_08A881C8:;
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A881D0;
L_08A881D0:;
    cnd_ = s0 == 0;
    v0 = D_08B1E010 - (-8176);
    if (cnd_) { goto L_08A881FC; }
    goto L_08A881D8;
L_08A881D8:;
    v0 = 0 + 0;
    goto L_08A881DC;
L_08A881DC:;
    sp = sp + 32;
    return v0;
L_08A881FC:;
    a0 = LD32(v0-8176);
    a1 = 260;
    { u64 r_ = func_08A87514(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A88208;
L_08A88208:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 260;
    s0 = v0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8821C;
L_08A8821C:;
    v1 = s4 << 2;
    v1 = v1 + s0;
    ST32(v1+4, s3);
    ST32(v1+132, s1);
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88230;
L_08A88230:;
    ST32(s2, s0);
    a0 = v0 + 0;
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8823C;
L_08A8823C:;
    v0 = 0 + 0;
    goto L_08A881DC;
L_08A88244:;
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8824C;
L_08A8824C:;
    v0 = (u32)-1;
    goto L_08A881DC;
L_08A88254:;
    ST32(v0+132, s1);
    goto L_08A881C8;
}

/* 08A8825C */
u32 func_08A8825C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8825C:;
    sp = sp - 16;
    s0 = LD32(a0+892);
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88270;
L_08A88270:;
    a0 = v0 + 0;
    v0 = (u32)((s32)s0 >> 31);
    v0 = v0 >> 27;
    v0 = s0 + v0;
    v1 = D_08C32CFC - (11516);
    v0 = (v0 & ~(0x1fu << 0)) | ((0 & 0x1f) << 0);
    v1 = v1 + 11516;
    cnd_ = v1 == 0;
    v0 = s0 - v0;
    if (cnd_) { goto L_08A882B4; }
    goto L_08A88294;
L_08A88294:;
    a2 = v0 << 2;
    a1 = a2 + v1;
    goto L_08A8829C;
L_08A8829C:;
    v0 = LD32(a1+132);
    cnd_ = v0 == s0;
    if (cnd_) { ST32(a1+132, 0); goto L_08A882D0; }
    goto L_08A882A8;
L_08A882A8:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    a1 = a2 + v1;
    if (cnd_) { goto L_08A8829C; }
    goto L_08A882B4;
L_08A882B4:;
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A882BC;
L_08A882BC:;
    v0 = (u32)-1;
    goto L_08A882C0;
L_08A882C0:;
    sp = sp + 16;
    return v0;
L_08A882D0:;
    ST32(a1+4, 0);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A882D8;
L_08A882D8:;
    v0 = s0 + 0;
    goto L_08A882C0;
}

/* 08A882E0 */
rv_t func_08A882E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A882E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = s0 + 800;
    a0 = a0 + 616;
    v0 = s0 + 708;
    a1 = 24;
    ST32(s0+12, v1);
    ST32(s0, 0);
    ST32(s0+4, a0);
    ST32(s0+16, 0);
    ST32(s0+8, v0);
    v0 = s0 + 20;
    goto L_08A88340;
L_08A88340:;
    a1 = a1 - 1;
    ST8(v0, 0);
    cnd_ = (s32)a1 >= 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_08A88340; }
    goto L_08A88350;
L_08A88350:;
    v0 = D_08AE919C - (-28260);
    v0 = v0 - 28260;
    ST32(s0+52, v0);
    a2 = s0 + 124;
    a1 = 0 + 0;
    ST32(s0+48, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+76, 0);
    ST32(s0+80, 0);
    ST32(s0+84, 0);
    ST32(s0+88, 0);
    ST32(s0+92, 0);
    ST8(s0+96, 0);
    goto L_08A883C0;
L_08A883C0:;
    v1 = a2 + a1;
    a1 = a1 + 1;
    v0 = a1 < 0x24u;
    cnd_ = v0 != 0;
    ST8(v1, 0);
    if (cnd_) { goto L_08A883C0; }
    goto L_08A883D4;
L_08A883D4:;
    v1 = 0;
    v0 = 1;
    ST32(s0+168, v0);
    ST32(s0+172, v1);
    v0 = 13070;
    v1 = 4660;
    ST16(s0+176, v0);
    v0 = (u32)-21555;
    a1 = 0 + 0;
    ST16(s0+178, v0);
    v0 = (u32)-6547;
    a2 = 276;
    ST16(s0+180, v1);
    v1 = (u32)-8468;
    ST16(s0+182, v0);
    v0 = 5;
    ST16(s0+184, v1);
    v1 = 11;
    ST16(s0+188, v1);
    ST16(s0+186, v0);
    ST32(s0+160, 0);
    ST32(s0+192, 0);
    ST32(s0+196, 0);
    ST32(s0+200, 0);
    ST32(s0+204, 0);
    ST32(s0+208, 0);
    ST32(s0+212, 0);
    ST32(s0+252, 0);
    ST32(s0+256, 0);
    ST32(s0+260, 0);
    ST32(s0+264, 0);
    ST32(s0+268, 0);
    ST32(s0+272, 0);
    ST32(s0+276, 0);
    ST32(s0+280, 0);
    ST32(s0+284, 0);
    ST32(s0+288, 0);
    ST8(s0+216, 0);
    ST8(s0+224, 0);
    ST32(s0+248, 0);
    ST32(s0+328, 0);
    ST32(s0+332, 0);
    ST32(s0+336, 0);
    ST32(s0+340, 0);
    ST32(s0+596, 0);
    ST32(s0+468, 0);
    ST32(s0+600, 0);
    ST32(s0+604, 0);
    ST32(s0+608, 0);
    ST32(s0+612, 0);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A884A0;
L_08A884A0:;
    ST32(s0+892, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A884B4:;
    { rv_t r_ = func_08A884C0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A884C0 */
rv_t func_08A884C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A884C0:;
    sp = sp - 48;
    s0 = a0 + 0;
    ST32(sp+20, a1);
    ST32(sp+24, a2);
    ST32(sp+28, a3);
    ST32(sp+32, t0);
    ST32(sp+36, t1);
    ST32(sp+40, t2);
    ST32(sp+44, t3);
    v0 = func_08A870E0();
    goto L_08A884F0;
L_08A884F0:;
    a1 = s0 + 0;
    a0 = LD32(v0+8);
    a2 = sp + 20;
    { rv_t r_ = func_08A8B38C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88500;
L_08A88500:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 08A88510 */
void func_08A88510(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08A88510:;
    sp = sp - 96;
    ST32(sp, a1);
    s6 = a3 + 0;
    s5 = a0 + 0;
    s4 = a2 + 0;
    goto L_08A8854C;
L_08A8854C:;
    v0 = s5 & 0x3;
    cnd_ = v0 != 0;
    fp = 2;
    if (cnd_) { goto L_08A8856C; }
    goto L_08A88558;
L_08A88558:;
    v1 = s4 ^ 0x4;
    v0 = s4 & 0x3;
    cnd_ = v0 == 0;
    fp = 0 < v1;
    if (cnd_) { goto L_08A8856C; }
    goto L_08A88568;
L_08A88568:;
    fp = 2;
    goto L_08A8856C;
L_08A8856C:;
    v1 = LD32(sp);
    v0 = v1 < 0x7u;
    cnd_ = v0 != 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08A88D00; }
    goto L_08A8857C;
L_08A8857C:;
    v1 = LD32(sp);
    a0 = LD32(sp);
    v0 = v1 >> 1;
    { s64 p_ = (s64)(s32)v0 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 < 0x8u;
    s3 = a0 - 1;
    v0 = lo;
    cnd_ = v1 != 0;
    s2 = s5 + v0;
    if (cnd_) { goto L_08A885E0; }
    goto L_08A885A0;
L_08A885A0:;
    { s64 p_ = (s64)(s32)s3 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = a0 < 0x29u;
    s0 = s5 + 0;
    v0 = lo;
    cnd_ = v1 == 0;
    s7 = s5 + v0;
    if (cnd_) { goto L_08A88B5C; }
    goto L_08A885B8;
L_08A885B8:;
    a0 = s0 + 0;
    t_ = s6;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A885C4;
L_08A885C4:;
    cnd_ = (s32)v0 < 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A88B30; }
    goto L_08A885CC;
L_08A885CC:;
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A885D4;
L_08A885D4:;
    cnd_ = (s32)v0 <= 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A88B14; }
    goto L_08A885DC;
L_08A885DC:;
    s2 = a0 + 0;
    goto L_08A885E0;
L_08A885E0:;
    cnd_ = fp != 0;
    v0 = (s32)fp < 2;
    if (cnd_) { goto L_08A88AAC; }
    goto L_08A885E8;
L_08A885E8:;
    v1 = LD32(s5);
    v0 = LD32(s2);
    ST32(s5, v0);
    ST32(s2, v1);
    { s64 p_ = (s64)(s32)s3 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    goto L_08A885FC;
L_08A885FC:;
    s3 = s5 + s4;
    v1 = (s32)fp < 2;
    a3 = s3 + 0;
    ST32(sp+28, s3);
    v0 = lo;
    s2 = s5 + v0;
    s1 = s2 + 0;
    ST32(sp+24, v1);
    goto L_08A8861C;
L_08A8861C:;
    s0 = s1 < s3;
    cnd_ = s0 == 0;
    if (cnd_) { a1 = s5 + 0; goto L_08A889FC; }
    goto L_08A88628;
L_08A88628:;
    s7 = (s32)fp < 2;
    goto L_08A8862C;
L_08A8862C:;
    cnd_ = s0 != 0;
    a1 = s5 + 0;
    if (cnd_) { goto L_08A88774; }
    goto L_08A88634;
L_08A88634:;
    a0 = s1 + 0;
    t_ = s6;
    ST32(sp+32, a3);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88640;
L_08A88640:;
    a1 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a3 = LD32(sp+32);
    if (cnd_) { goto L_08A886E4; }
    goto L_08A8864C;
L_08A8864C:;
    cnd_ = a1 != 0;
    if (cnd_) { s1 = s1 - s4; goto L_08A88678; }
    goto L_08A88654;
L_08A88654:;
    v1 = 1;
    cnd_ = fp != 0;
    ST32(sp+8, v1);
    if (cnd_) { goto L_08A88680; }
    goto L_08A88660;
L_08A88660:;
    v1 = LD32(s1);
    v0 = LD32(s2);
    ST32(s1, v0);
    ST32(s2, v1);
    s2 = s2 - s4;
    goto L_08A88674;
L_08A88674:;
    s1 = s1 - s4;
    goto L_08A88678;
L_08A88678:;
    s0 = s1 < s3;
    goto L_08A8862C;
L_08A88680:;
    a2 = s4 + 0;
    a1 = s1 + 0;
    cnd_ = s7 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A886BC; }
    goto L_08A88690;
L_08A88690:;
    a2 = s4 >> 2;
    goto L_08A88694;
L_08A88694:;
    v1 = LD32(a1);
    v0 = LD32(a0);
    a2 = a2 - 1;
    ST32(a1, v0);
    a1 = a1 + 4;
    ST32(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A88694; }
    goto L_08A886B4;
L_08A886B4:;
    s2 = s2 - s4;
    goto L_08A88674;
L_08A886BC:;
    v1 = (u32)(s32)LD_S8(a1);
    v0 = LD_U8(a0);
    a2 = a2 - 1;
    ST8(a1, v0);
    a1 = a1 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A886BC; }
    goto L_08A886DC;
L_08A886DC:;
    s2 = s2 - s4;
    goto L_08A88674;
L_08A886E4:;
    cnd_ = fp != 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A88710; }
    goto L_08A886EC;
L_08A886EC:;
    v1 = LD32(s3);
    v0 = LD32(s1);
    ST32(s3, v0);
    ST32(s1, v1);
    v1 = 1;
    goto L_08A88700;
L_08A88700:;
    s3 = s3 + s4;
    s1 = s1 - s4;
    ST32(sp+8, v1);
    goto L_08A8861C;
L_08A88710:;
    a2 = s4 + 0;
    a1 = s3 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A8874C; }
    goto L_08A88720;
L_08A88720:;
    a2 = s4 >> 2;
    goto L_08A88724;
L_08A88724:;
    v1 = LD32(a1);
    v0 = LD32(a0);
    a2 = a2 - 1;
    ST32(a1, v0);
    a1 = a1 + 4;
    ST32(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A88724; }
    goto L_08A88744;
L_08A88744:;
    v1 = 1;
    goto L_08A88700;
L_08A8874C:;
    v1 = (u32)(s32)LD_S8(a1);
    v0 = LD_U8(a0);
    a2 = a2 - 1;
    ST8(a1, v0);
    a1 = a1 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A8874C; }
    goto L_08A8876C;
L_08A8876C:;
    v1 = 1;
    goto L_08A88700;
L_08A88774:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08A88918; }
    goto L_08A88780;
L_08A88780:;
    a1 = s3 - a3;
    t0 = a1 + 0;
    { s64 p_ = (s64)(s32)v0 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = a3 - s5;
    a1 = (s32)a1 < (s32)v0 ? a1 : v0;
    v1 = lo;
    cnd_ = (s32)a1 <= 0;
    s7 = s5 + v1;
    if (cnd_) { goto L_08A887D8; }
    goto L_08A887A0;
L_08A887A0:;
    v1 = s3 - a1;
    v0 = (s32)fp < 2;
    a3 = a1 + 0;
    a2 = s5 + 0;
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A888E4; }
    goto L_08A887B8;
L_08A887B8:;
    v1 = (u32)(s32)LD_S8(a2);
    v0 = LD_U8(a0);
    a3 = a3 - 1;
    ST8(a2, v0);
    a2 = a2 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a3 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A887B8; }
    goto L_08A887D8;
L_08A887D8:;
    v1 = s7 - s2;
    goto L_08A887DC;
L_08A887DC:;
    s0 = s2 - s1;
    a1 = v1 - s4;
    v0 = s0 < a1;
    if (v0 != 0) a1 = s0;
    cnd_ = (s32)a1 <= 0;
    v1 = s7 - a1;
    if (cnd_) { goto L_08A88828; }
    goto L_08A887F4;
L_08A887F4:;
    v0 = (s32)fp < 2;
    a3 = a1 + 0;
    a2 = s3 + 0;
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A888B0; }
    goto L_08A88808;
L_08A88808:;
    v1 = (u32)(s32)LD_S8(a2);
    v0 = LD_U8(a0);
    a3 = a3 - 1;
    ST8(a2, v0);
    a2 = a2 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a3 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A88808; }
    goto L_08A88828;
L_08A88828:;
    v0 = s4 < t0;
    goto L_08A8882C;
L_08A8882C:;
    cnd_ = v0 != 0;
    if (cnd_) { { u32 x_ = t0, y_ = s4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } } goto L_08A88888; }
    goto L_08A88834;
L_08A88834:;
    v0 = s4 < s0;
    goto L_08A88838;
L_08A88838:;
    cnd_ = v0 == 0;
    s5 = s7 - s0;
    if (cnd_) { goto L_08A88858; }
    goto L_08A88840;
L_08A88840:;
    { u32 x_ = s0, y_ = s4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    cnd_ = s4 == 0;
    if (cnd_) { rs_break(0x7, 0x08a88848); goto L_08A8884C; }
    goto L_08A8884C;
L_08A8884C:;
    v0 = lo;
    ST32(sp, v0);
    goto L_08A8854C;
L_08A88858:;
    goto L_08A8885C;
L_08A8885C:;
    sp = sp + 96;
    return;
L_08A88888:;
    a0 = s5 + 0;
    a2 = s4 + 0;
    a3 = s6 + 0;
    cnd_ = s4 == 0;
    if (cnd_) { rs_break(0x7, 0x08a88898); goto L_08A8889C; }
    goto L_08A8889C;
L_08A8889C:;
    a1 = lo;
    func_08A88510(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08A888A8;
L_08A888A8:;
    v0 = s4 < s0;
    goto L_08A88838;
L_08A888B0:;
    a1 = a1 >> 2;
    a0 = s3 + 0;
    a2 = v1 + 0;
    goto L_08A888BC;
L_08A888BC:;
    v1 = LD32(a0);
    v0 = LD32(a2);
    a1 = a1 - 1;
    ST32(a0, v0);
    a0 = a0 + 4;
    ST32(a2, v1);
    cnd_ = (s32)a1 > 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_08A888BC; }
    goto L_08A888DC;
L_08A888DC:;
    v0 = s4 < t0;
    goto L_08A8882C;
L_08A888E4:;
    a1 = a1 >> 2;
    a2 = v1 + 0;
    a0 = s5 + 0;
    goto L_08A888F0;
L_08A888F0:;
    v1 = LD32(a0);
    v0 = LD32(a2);
    a1 = a1 - 1;
    ST32(a0, v0);
    a0 = a0 + 4;
    ST32(a2, v1);
    cnd_ = (s32)a1 > 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_08A888F0; }
    goto L_08A88910;
L_08A88910:;
    v1 = s7 - s2;
    goto L_08A887DC;
L_08A88918:;
    s2 = LD32(sp+28);
    { s64 p_ = (s64)(s32)v0 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = lo;
    v1 = s5 + v1;
    v0 = s2 < v1;
    cnd_ = v0 == 0;
    s7 = v1 + 0;
    if (cnd_) { goto L_08A88858; }
    goto L_08A88934;
L_08A88934:;
    s3 = (s32)fp < 2;
    s0 = s2 + 0;
    goto L_08A8893C;
L_08A8893C:;
    v0 = s5 < s0;
    cnd_ = v0 == 0;
    s1 = s0 - s4;
    if (cnd_) { goto L_08A889E4; }
    goto L_08A88948;
L_08A88948:;
    a0 = s1 + 0;
    t_ = s6;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88954;
L_08A88954:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { s2 = s2 + s4; goto L_08A889E8; }
    goto L_08A8895C;
L_08A8895C:;
    cnd_ = fp != 0;
    a2 = s4 + 0;
    if (cnd_) { goto L_08A8897C; }
    goto L_08A88964;
L_08A88964:;
    v1 = LD32(s0);
    v0 = LD32(s1);
    ST32(s0, v0);
    ST32(s1, v1);
    s0 = s1 + 0;
    goto L_08A8893C;
L_08A8897C:;
    a1 = s0 + 0;
    cnd_ = s3 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A889BC; }
    goto L_08A88988;
L_08A88988:;
    a0 = s0 + 0;
    a1 = s4 >> 2;
    a2 = s1 + 0;
    goto L_08A88994;
L_08A88994:;
    v1 = LD32(a0);
    v0 = LD32(a2);
    a1 = a1 - 1;
    ST32(a0, v0);
    a0 = a0 + 4;
    ST32(a2, v1);
    cnd_ = (s32)a1 > 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_08A88994; }
    goto L_08A889B4;
L_08A889B4:;
    s0 = s1 + 0;
    goto L_08A8893C;
L_08A889BC:;
    v1 = (u32)(s32)LD_S8(a1);
    v0 = LD_U8(a0);
    a2 = a2 - 1;
    ST8(a1, v0);
    a1 = a1 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A889BC; }
    goto L_08A889DC;
L_08A889DC:;
    s0 = s1 + 0;
    goto L_08A8893C;
L_08A889E4:;
    s2 = s2 + s4;
    goto L_08A889E8;
L_08A889E8:;
    v0 = s2 < s7;
    cnd_ = v0 != 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_08A8893C; }
    goto L_08A889F4;
L_08A889F4:;
    goto L_08A8885C;
L_08A889FC:;
    a0 = s3 + 0;
    t_ = s6;
    ST32(sp+32, a3);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88A08;
L_08A88A08:;
    a1 = v0 + 0;
    cnd_ = (s32)v0 > 0;
    a3 = LD32(sp+32);
    if (cnd_) { goto L_08A88628; }
    goto L_08A88A14;
L_08A88A14:;
    cnd_ = a1 != 0;
    if (cnd_) { s3 = s3 + s4; goto L_08A8861C; }
    goto L_08A88A1C;
L_08A88A1C:;
    a0 = 1;
    cnd_ = fp != 0;
    ST32(sp+8, a0);
    if (cnd_) { goto L_08A88A44; }
    goto L_08A88A28;
L_08A88A28:;
    v1 = LD32(a3);
    v0 = LD32(s3);
    ST32(a3, v0);
    ST32(s3, v1);
    a3 = a3 + s4;
    goto L_08A88A3C;
L_08A88A3C:;
    s3 = s3 + s4;
    goto L_08A8861C;
L_08A88A44:;
    v0 = LD32(sp+24);
    a2 = s4 + 0;
    a1 = a3 + 0;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A88A84; }
    goto L_08A88A58;
L_08A88A58:;
    a2 = s4 >> 2;
    goto L_08A88A5C;
L_08A88A5C:;
    v1 = LD32(a1);
    v0 = LD32(a0);
    a2 = a2 - 1;
    ST32(a1, v0);
    a1 = a1 + 4;
    ST32(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A88A5C; }
    goto L_08A88A7C;
L_08A88A7C:;
    a3 = a3 + s4;
    goto L_08A88A3C;
L_08A88A84:;
    v1 = (u32)(s32)LD_S8(a1);
    v0 = LD_U8(a0);
    a2 = a2 - 1;
    ST8(a1, v0);
    a1 = a1 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A88A84; }
    goto L_08A88AA4;
L_08A88AA4:;
    a3 = a3 + s4;
    goto L_08A88A3C;
L_08A88AAC:;
    a2 = s4 + 0;
    a1 = s5 + 0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A88AE4; }
    goto L_08A88ABC;
L_08A88ABC:;
    v1 = (u32)(s32)LD_S8(a1);
    v0 = LD_U8(a0);
    a2 = a2 - 1;
    ST8(a1, v0);
    a1 = a1 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A88ABC; }
    goto L_08A88ADC;
L_08A88ADC:;
    { s64 p_ = (s64)(s32)s3 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    goto L_08A885FC;
L_08A88AE4:;
    a1 = s4 >> 2;
    a2 = s5 + 0;
    goto L_08A88AEC;
L_08A88AEC:;
    v1 = LD32(a2);
    v0 = LD32(a0);
    a1 = a1 - 1;
    ST32(a2, v0);
    a2 = a2 + 4;
    ST32(a0, v1);
    cnd_ = (s32)a1 > 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08A88AEC; }
    goto L_08A88B0C;
L_08A88B0C:;
    { s64 p_ = (s64)(s32)s3 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    goto L_08A885FC;
L_08A88B14:;
    a0 = s0 + 0;
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88B20;
L_08A88B20:;
    v0 = (s32)v0 < 0;
    a0 = s0 + 0;
    if (v0 == 0) a0 = s7;
    goto L_08A885DC;
L_08A88B30:;
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88B38;
L_08A88B38:;
    cnd_ = (s32)v0 < 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A885DC; }
    goto L_08A88B40;
L_08A88B40:;
    a0 = s0 + 0;
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88B4C;
L_08A88B4C:;
    v0 = (s32)v0 < 0;
    a0 = s7 + 0;
    if (v0 == 0) a0 = s0;
    goto L_08A885DC;
L_08A88B5C:;
    v0 = a0 >> 3;
    { s64 p_ = (s64)(s32)v0 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = s5 + 0;
    v1 = lo;
    s0 = s5 + v1;
    a1 = s0 + 0;
    t_ = s6;
    ST32(sp+4, v1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88B7C;
L_08A88B7C:;
    a0 = LD32(sp+4);
    a0 = a0 << 1;
    ST32(sp+12, a0);
    cnd_ = (s32)v0 < 0;
    s1 = s5 + a0;
    if (cnd_) { goto L_08A88CD0; }
    goto L_08A88B90;
L_08A88B90:;
    a0 = s0 + 0;
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88B9C;
L_08A88B9C:;
    cnd_ = (s32)v0 <= 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08A88CB4; }
    goto L_08A88BA4;
L_08A88BA4:;
    v0 = LD32(sp+4);
    a1 = s2 + 0;
    s0 = v1 + 0;
    v0 = s2 - v0;
    a0 = v0 + 0;
    t_ = s6;
    ST32(sp+16, v0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88BC0;
L_08A88BC0:;
    v1 = LD32(sp+4);
    cnd_ = (s32)v0 < 0;
    s1 = s2 + v1;
    if (cnd_) { goto L_08A88C84; }
    goto L_08A88BCC;
L_08A88BCC:;
    a0 = s2 + 0;
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88BD8;
L_08A88BD8:;
    cnd_ = (s32)v0 <= 0;
    v1 = s2 + 0;
    if (cnd_) { goto L_08A88C68; }
    goto L_08A88BE0;
L_08A88BE0:;
    v0 = LD32(sp+4);
    a0 = LD32(sp+12);
    s2 = v1 + 0;
    s1 = s7 - v0;
    a0 = s7 - a0;
    a1 = s1 + 0;
    t_ = s6;
    ST32(sp+20, a0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88C00;
L_08A88C00:;
    cnd_ = (s32)v0 < 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A88C3C; }
    goto L_08A88C08;
L_08A88C08:;
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88C10;
L_08A88C10:;
    cnd_ = (s32)v0 <= 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A88C20; }
    goto L_08A88C18;
L_08A88C18:;
    s7 = a0 + 0;
    goto L_08A885B8;
L_08A88C20:;
    a0 = LD32(sp+20);
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88C2C;
L_08A88C2C:;
    a0 = LD32(sp+20);
    v0 = (s32)v0 < 0;
    if (v0 == 0) a0 = s7;
    goto L_08A88C18;
L_08A88C3C:;
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88C44;
L_08A88C44:;
    cnd_ = (s32)v0 < 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A88C18; }
    goto L_08A88C4C;
L_08A88C4C:;
    a0 = LD32(sp+20);
    t_ = s6;
    a1 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88C58;
L_08A88C58:;
    a0 = LD32(sp+20);
    v0 = (s32)v0 < 0;
    if (v0 != 0) a0 = s7;
    goto L_08A88C18;
L_08A88C68:;
    a0 = LD32(sp+16);
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88C74;
L_08A88C74:;
    v1 = LD32(sp+16);
    v0 = (s32)v0 < 0;
    if (v0 == 0) v1 = s1;
    goto L_08A88BE0;
L_08A88C84:;
    a0 = s2 + 0;
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88C90;
L_08A88C90:;
    cnd_ = (s32)v0 < 0;
    v1 = s2 + 0;
    if (cnd_) { goto L_08A88BE0; }
    goto L_08A88C98;
L_08A88C98:;
    a0 = LD32(sp+16);
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88CA4;
L_08A88CA4:;
    v1 = LD32(sp+16);
    v0 = (s32)v0 < 0;
    if (v0 != 0) v1 = s1;
    goto L_08A88BE0;
L_08A88CB4:;
    a0 = s5 + 0;
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88CC0;
L_08A88CC0:;
    v0 = (s32)v0 < 0;
    v1 = s5 + 0;
    if (v0 == 0) v1 = s1;
    goto L_08A88BA4;
L_08A88CD0:;
    a0 = s0 + 0;
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88CDC;
L_08A88CDC:;
    cnd_ = (s32)v0 < 0;
    v1 = s0 + 0;
    if (cnd_) { goto L_08A88BA4; }
    goto L_08A88CE4;
L_08A88CE4:;
    a0 = s5 + 0;
    t_ = s6;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88CF0;
L_08A88CF0:;
    v0 = (s32)v0 < 0;
    v1 = s1 + 0;
    if (v0 == 0) v1 = s5;
    goto L_08A88BA4;
L_08A88D00:;
    { s64 p_ = (s64)(s32)v1 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s2 = s5 + s4;
    v1 = lo;
    v1 = s5 + v1;
    v0 = s2 < v1;
    cnd_ = v0 == 0;
    s7 = v1 + 0;
    if (cnd_) { goto L_08A88858; }
    goto L_08A88D1C;
L_08A88D1C:;
    s3 = (s32)fp < 2;
    s0 = s2 + 0;
    goto L_08A88D24;
L_08A88D24:;
    v0 = s5 < s0;
    cnd_ = v0 == 0;
    s1 = s0 - s4;
    if (cnd_) { goto L_08A88DCC; }
    goto L_08A88D30;
L_08A88D30:;
    a0 = s1 + 0;
    t_ = s6;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A88D3C;
L_08A88D3C:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { s2 = s2 + s4; goto L_08A88DD0; }
    goto L_08A88D44;
L_08A88D44:;
    cnd_ = fp != 0;
    a2 = s4 + 0;
    if (cnd_) { goto L_08A88D64; }
    goto L_08A88D4C;
L_08A88D4C:;
    v1 = LD32(s0);
    v0 = LD32(s1);
    ST32(s0, v0);
    ST32(s1, v1);
    s0 = s1 + 0;
    goto L_08A88D24;
L_08A88D64:;
    a1 = s0 + 0;
    cnd_ = s3 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A88DA4; }
    goto L_08A88D70;
L_08A88D70:;
    a0 = s0 + 0;
    a1 = s4 >> 2;
    a2 = s1 + 0;
    goto L_08A88D7C;
L_08A88D7C:;
    v1 = LD32(a0);
    v0 = LD32(a2);
    a1 = a1 - 1;
    ST32(a0, v0);
    a0 = a0 + 4;
    ST32(a2, v1);
    cnd_ = (s32)a1 > 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_08A88D7C; }
    goto L_08A88D9C;
L_08A88D9C:;
    s0 = s1 + 0;
    goto L_08A88D24;
L_08A88DA4:;
    v1 = (u32)(s32)LD_S8(a1);
    v0 = LD_U8(a0);
    a2 = a2 - 1;
    ST8(a1, v0);
    a1 = a1 + 1;
    ST8(a0, v1);
    cnd_ = (s32)a2 > 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A88DA4; }
    goto L_08A88DC4;
L_08A88DC4:;
    s0 = s1 + 0;
    goto L_08A88D24;
L_08A88DCC:;
    s2 = s2 + s4;
    goto L_08A88DD0;
L_08A88DD0:;
    v0 = s2 < s7;
    cnd_ = v0 != 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_08A88D24; }
    goto L_08A88DDC;
L_08A88DDC:;
    goto L_08A8885C;
}

/* 08A88DE4 */
void func_08A88DE4(u32 a0)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A88DE4:;
    sp = sp - 16;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A88E00;
L_08A88E00:;
    ST32(v0+168, s0);
    ST32(v0+172, s1);
    sp = sp + 16;
    return;
}

/* 08A88E1C */
u32 func_08A88E1C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A88E1C:;
    sp = sp - 16;
    v0 = func_08A870E0();
    goto L_08A88E2C;
L_08A88E2C:;
    s0 = v0 + 0;
    v0 = func_08A870E0();
    goto L_08A88E34;
L_08A88E34:;
    a2 = LD32(v0+168);
    a3 = LD32(v0+172);
    a0 = 0x4c950000u;
    a0 = a0 | 0x7f2d;
    a1 = 0x58510000u;
    a1 = a1 | 0xf42d;
    { s64 p_ = (s64)(s32)a2 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t0 = lo;
    { u64 p_ = (u64)a2 * a0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = hi;
    v0 = lo;
    { s64 p_ = (s64)(s32)a3 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t0 = t0 + v1;
    v0 = v0 + 1;
    a2 = v0 < 0x1u;
    a0 = lo;
    v1 = t0 + a0;
    v1 = v1 + a2;
    ST32(s0+168, v0);
    ST32(s0+172, v1);
    v0 = func_08A870E0();
    goto L_08A88E8C;
L_08A88E8C:;
    v1 = LD32(v0+172);
    v0 = LD32(v0+168);
    v0 = v1 >> 0;
    v0 = (v0 & ~(0x1u << 31)) | ((0 & 0x1) << 31);
    sp = sp + 16;
    return v0;
}

/* 08A88EAC */
void func_08A88EAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A88EAC:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A88EF0; }
    goto L_08A88ED0;
L_08A88ED0:;
    a0 = s0 + 0;
    goto L_08A88ED4;
L_08A88ED4:;
    a1 = s1 + 0;
    v0 = func_08A8650C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88EDC;
L_08A88EDC:;
    sp = sp + 16;
    return;
L_08A88EF0:;
    func_08A88EAC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88EF8;
L_08A88EF8:;
    a0 = s0 + 0;
    goto L_08A88ED4;
}

/* 08A88F00 */
void func_08A88F00(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A88F00:;
    sp = sp - 32;
    s2 = a0 + 604;
    s3 = a0 + 0;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08A88F68; }
    goto L_08A88F24;
L_08A88F24:;
    s1 = LD32(s2+4);
    goto L_08A88F28;
L_08A88F28:;
    s1 = s1 - 1;
    cnd_ = (s32)s1 < 0;
    s0 = LD32(s2+8);
    if (cnd_) { goto L_08A88F5C; }
    goto L_08A88F34;
L_08A88F34:;
    v0 = LD_U16(s0+12);
    v0 = v0 & 0x80;
    cnd_ = v0 == 0;
    s1 = s1 - 1;
    if (cnd_) { goto L_08A88F54; }
    goto L_08A88F44;
L_08A88F44:;
    v0 = LD32(s0+16);
    a0 = s3 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A88F84; }
    goto L_08A88F54;
L_08A88F54:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 92;
    if (cnd_) { goto L_08A88F34; }
    goto L_08A88F5C;
L_08A88F5C:;
    s2 = LD32(s2);
    cnd_ = s2 != 0;
    if (cnd_) { s1 = LD32(s2+4); goto L_08A88F28; }
    goto L_08A88F68;
L_08A88F68:;
    sp = sp + 32;
    return;
L_08A88F84:;
    v0 = func_08A8650C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A88F8C;
L_08A88F8C:;
    ST32(s0+16, 0);
    goto L_08A88F54;
}

/* 08A88F94 */
void func_08A88F94(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A88F94:;
    sp = sp - 16;
    v0 = D_08B1E010 - (-8176);
    v1 = LD32(v0-8176);
    cnd_ = a0 == v1;
    s1 = a0 + 0;
    if (cnd_) { goto L_08A8903C; }
    goto L_08A88FB8;
L_08A88FB8:;
    a2 = LD32(a0+64);
    cnd_ = a2 != 0;
    if (cnd_) { v0 = LD32(a0+68); goto L_08A890E4; }
    goto L_08A88FC4;
L_08A88FC4:;
    a1 = LD32(s1+72);
    goto L_08A88FC8;
L_08A88FC8:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s1+76); goto L_08A88FE8; }
    goto L_08A88FD0;
L_08A88FD0:;
    s0 = LD32(a1);
    a0 = s1 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A88FDC;
L_08A88FDC:;
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A88FD0; }
    goto L_08A88FE4;
L_08A88FE4:;
    v1 = LD32(s1+76);
    goto L_08A88FE8;
L_08A88FE8:;
    cnd_ = v1 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A89090; }
    goto L_08A88FF0;
L_08A88FF0:;
    a1 = LD32(s1+328);
    goto L_08A88FF4;
L_08A88FF4:;
    cnd_ = a1 == 0;
    if (cnd_) { a1 = LD32(s1+84); goto L_08A89028; }
    goto L_08A88FFC;
L_08A88FFC:;
    s2 = s1 + 332;
    cnd_ = a1 == s2;
    if (cnd_) { a1 = LD32(s1+84); goto L_08A89028; }
    goto L_08A89008;
L_08A89008:;
    s0 = a1 + 0;
    a1 = s0 + 0;
    goto L_08A89010;
L_08A89010:;
    s0 = LD32(s0);
    a0 = s1 + 0;
    v0 = func_08A8650C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8901C;
L_08A8901C:;
    cnd_ = s0 != s2;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A89010; }
    goto L_08A89024;
L_08A89024:;
    a1 = LD32(s1+84);
    goto L_08A89028;
L_08A89028:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A89080; }
    goto L_08A89030;
L_08A89030:;
    v0 = LD32(s1+56);
    goto L_08A89034;
L_08A89034:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+60); goto L_08A89054; }
    goto L_08A8903C;
L_08A8903C:;
    goto L_08A89040;
L_08A89040:;
    sp = sp + 16;
    return;
L_08A89054:;
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8905C;
L_08A8905C:;
    a0 = s1 + 0;
    func_08A88F00(a0, 0, 0, 0, 0, 0, 0);
    goto L_08A89064;
L_08A89064:;
    a1 = LD32(s1+604);
    cnd_ = a1 == 0;
    if (cnd_) {  goto L_08A89040; }
    goto L_08A89070;
L_08A89070:;
    a0 = s1 + 0;
    func_08A88EAC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A89078;
L_08A89078:;
    goto L_08A89040;
L_08A89080:;
    a0 = s1 + 0;
    v0 = func_08A8650C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A89088;
L_08A89088:;
    v0 = LD32(s1+56);
    goto L_08A89034;
L_08A89090:;
    v0 = s2 << 2;
    v0 = v0 + v1;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A890C0; }
    goto L_08A890A4;
L_08A890A4:;
    a1 = s0 + 0;
    goto L_08A890A8;
L_08A890A8:;
    s0 = LD32(s0);
    a0 = s1 + 0;
    v0 = func_08A8650C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A890B4;
L_08A890B4:;
    cnd_ = s0 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08A890A8; }
    goto L_08A890BC;
L_08A890BC:;
    s2 = s2 + 1;
    goto L_08A890C0;
L_08A890C0:;
    v0 = (s32)s2 < 15;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+76); goto L_08A890D4; }
    goto L_08A890CC;
L_08A890CC:;
    v1 = LD32(s1+76);
    goto L_08A89090;
L_08A890D4:;
    a0 = s1 + 0;
    v0 = func_08A8650C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A890DC;
L_08A890DC:;
    a1 = LD32(s1+328);
    goto L_08A88FF4;
L_08A890E4:;
    a1 = a2 + 0;
    ST32(a2+4, v0);
    v0 = 1;
    v1 = LD32(a0+68);
    v0 = v0 << (v1 & 31);
    ST32(a2+8, v0);
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A89100;
L_08A89100:;
    a1 = LD32(s1+72);
    goto L_08A88FC8;
}

/* 08A89108 */
rv_t func_08A89108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A89108:;
    sp = sp - 16;
    v0 = 9;
    v1 = LD_U16(a0+12);
    v1 = v1 & 0x9;
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A89134; }
    goto L_08A89124;
L_08A89124:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A89134:;
    { rv_t r_ = func_08A861F8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8913C;
L_08A8913C:;
    a1 = v0 + 0;
    goto L_08A89124;
}

/* 08A89144 */
rv_t func_08A89144(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A89144:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A89158;
L_08A89158:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A892C8; }
    goto L_08A89164;
L_08A89164:;
    a0 = LD_U16(s0+12);
    goto L_08A89168;
L_08A89168:;
    ST32(s0+4, 0);
    v1 = a0 & 0xffff;
    v0 = v1 & 0x20;
    cnd_ = v0 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A891F4; }
    goto L_08A8917C;
L_08A8917C:;
    v0 = v1 & 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_08A89280; }
    goto L_08A89188;
L_08A89188:;
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    v0 = v1 & 0x8;
    if (cnd_) { goto L_08A891F4; }
    goto L_08A89194;
L_08A89194:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A89254; }
    goto L_08A8919C;
L_08A8919C:;
    v0 = a0 | 0x4;
    ST16(s0+12, v0);
    goto L_08A891A4;
L_08A891A4:;
    v0 = LD32(s0+16);
    goto L_08A891A8;
L_08A891A8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A89244; }
    goto L_08A891B0;
L_08A891B0:;
    v0 = LD_U16(s0+12);
    goto L_08A891B4;
L_08A891B4:;
    v0 = v0 & 0x3;
    cnd_ = v0 != 0;
    v0 = D_08B1E010 - (-8176);
    if (cnd_) { goto L_08A8922C; }
    goto L_08A891C0;
L_08A891C0:;
    a1 = LD32(s0+16);
    goto L_08A891C4;
L_08A891C4:;
    v0 = LD32(s0+32);
    a0 = LD32(s0+28);
    ST32(s0, a1);
    t_ = v0;
    a2 = LD32(s0+20);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A891D8;
L_08A891D8:;
    v1 = v0 + 0;
    v0 = LD_U16(s0+12);
    ST32(s0+4, v1);
    a1 = 0 + 0;
    v0 = (v0 & ~(0x1u << 13)) | ((0 & 0x1) << 13);
    cnd_ = (s32)v1 <= 0;
    ST16(s0+12, v0);
    if (cnd_) { goto L_08A89208; }
    goto L_08A891F4;
L_08A891F4:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A89208:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = v0 | 0x40; goto L_08A89220; }
    goto L_08A89210;
L_08A89210:;
    v0 = v0 | 0x20;
    ST16(s0+12, v0);
    goto L_08A89218;
L_08A89218:;
    a1 = (u32)-1;
    goto L_08A891F4;
L_08A89220:;
    ST16(s0+12, v0);
    ST32(s0+4, 0);
    goto L_08A89218;
L_08A8922C:;
    a0 = LD32(v0-8176);
    a1 = ((u32)(uintptr_t)func_08A89108) - (-28408);
    a1 = a1 - 28408;
    { rv_t r_ = func_08A86F4C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8923C;
L_08A8923C:;
    a1 = LD32(s0+16);
    goto L_08A891C4;
L_08A89244:;
    a0 = s0 + 0;
    func_08A87184(a0);
    goto L_08A8924C;
L_08A8924C:;
    v0 = LD_U16(s0+12);
    goto L_08A891B4;
L_08A89254:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A861F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8925C;
L_08A8925C:;
    cnd_ = v0 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A891F4; }
    goto L_08A89264;
L_08A89264:;
    v0 = LD_U16(s0+12);
    ST32(s0+8, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST16(s0+12, v0);
    a0 = v0 + 0;
    ST32(s0+24, 0);
    goto L_08A8919C;
L_08A89280:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s0+16); goto L_08A891A8; }
    goto L_08A89288;
L_08A89288:;
    v0 = s0 + 64;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+60); goto L_08A892AC; }
    goto L_08A89294;
L_08A89294:;
    v0 = func_08A870E0();
    goto L_08A8929C;
L_08A8929C:;
    a1 = LD32(s0+48);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A892A8;
L_08A892A8:;
    v0 = LD32(s0+60);
    goto L_08A892AC;
L_08A892AC:;
    ST32(s0+48, 0);
    cnd_ = v0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08A891A4; }
    goto L_08A892B8;
L_08A892B8:;
    v0 = LD32(s0+56);
    a1 = 0 + 0;
    ST32(s0, v0);
    goto L_08A891F4;
L_08A892C8:;
    v0 = func_08A870E0();
    goto L_08A892D0;
L_08A892D0:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A892D8;
L_08A892D8:;
    a0 = LD_U16(s0+12);
    goto L_08A89168;
}

/* 08A892E0 */
void func_08A892E0(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A892E0:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A892F4;
L_08A892F4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = func_08A868C4(a0, a1, a2, a3);
    goto L_08A89308;
L_08A89308:;
    sp = sp + 16;
    return;
}

/* 08A89318 */
u32 func_08A89318(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A89318:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = D_08C38BEC - (-29716);
    ST32(s0-29716, 0);
    v0 = func_08A85774(a0, t1, t2, t3);
    goto L_08A8933C;
L_08A8933C:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s0-29716);
    if (cnd_) { goto L_08A89364; }
    goto L_08A8934C;
L_08A8934C:;
    goto L_08A89350;
L_08A89350:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A89364:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, v0); goto L_08A8934C; }
    goto L_08A8936C;
L_08A8936C:;
    goto L_08A89350;
}

/* 08A89374 */
float func_08A89374(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
L_08A89374:;
    a1 = FBITS(f12);
    v0 = (a1 >> 23) & 0xff;
    v0 = v0 - 127;
    v1 = (s32)v0 < 23;
    cnd_ = v1 == 0;
    if (cnd_) { a1 = (a1 & ~(0x7fffffffu << 0)) | ((0 & 0x7fffffff) << 0); goto L_08A893E0; }
    goto L_08A8938C;
L_08A8938C:;
    v1 = 0x7f0000u;
    v1 = v1 | 0xffff;
    cnd_ = (s32)v0 < 0;
    f0 = f12;
    if (cnd_) { goto L_08A893D4; }
    goto L_08A8939C;
L_08A8939C:;
    a2 = FBITS(f12);
    v0 = (u32)((s32)v1 >> (v0 & 31));
    v1 = ~(0 | v0);
    a2 = (a2 & ~(0x7fffffffu << 0)) | ((0 & 0x7fffffff) << 0);
    v0 = a1 & v0;
    f0 = BITSF(a2);
    cnd_ = v0 != 0;
    v1 = a1 & v1;
    if (cnd_) { goto L_08A893C4; }
    goto L_08A893BC;
L_08A893BC:;
    ST32(a0, FBITS(f12));
    return f0;
L_08A893C4:;
    f0 = BITSF(v1);
    ST32(a0, v1);
    f0 = f12 - f0;
    return f0;
L_08A893D4:;
    a1 = (a1 & ~(0x7fffffffu << 0)) | ((0 & 0x7fffffff) << 0);
    ST32(a0, a1);
    return f0;
L_08A893E0:;
    f0 = BITSF(a1);
    ST32(a0, FBITS(f12));
    return f0;
}

/* 08A893EC */
void func_08A893EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A893EC:;
    v1 = a1 - 1;
    sp = sp - 144;
    if (a1 == 0) v1 = 0;
    v0 = 520;
    s1 = a2 + 0;
    s0 = a1 + 0;
    ST32(sp+124, a3);
    ST32(sp+16, a0);
    ST32(sp, a0);
    ST32(sp+128, t0);
    ST32(sp+132, t1);
    ST32(sp+136, t2);
    ST32(sp+140, t3);
    ST16(sp+12, v0);
    ST32(sp+20, v1);
    ST32(sp+8, v1);
    v0 = func_08A870E0();
    goto L_08A8943C;
L_08A8943C:;
    a0 = v0 + 0;
    a1 = sp + 0;
    a2 = s1 + 0;
    a3 = sp + 124;
    { rv_t r_ = func_08A8B408(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A89450;
L_08A89450:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A89460; }
    goto L_08A89458;
L_08A89458:;
    v1 = LD32(sp);
    ST8(v1, 0);
    goto L_08A89460;
L_08A89460:;
    sp = sp + 144;
    return;
}

/* 08A89470 */
rv_t func_08A89470(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A89470:;
    sp = sp - 144;
    v0 = 520;
    v1 = 0x7fff0000u;
    v1 = v1 | 0xffff;
    ST16(sp+12, v0);
    v0 = (u32)-1;
    ST32(sp+20, v1);
    ST32(sp+8, v1);
    s0 = a1 + 0;
    ST32(sp+128, t0);
    ST32(sp+132, t1);
    ST32(sp+136, t2);
    ST32(sp+140, t3);
    ST32(sp+120, a2);
    ST32(sp+124, a3);
    ST32(sp+16, a0);
    ST32(sp, a0);
    ST16(sp+14, v0);
    v0 = func_08A870E0();
    goto L_08A894C4;
L_08A894C4:;
    a0 = v0 + 0;
    a2 = s0 + 0;
    a1 = sp + 0;
    a3 = sp + 120;
    { rv_t r_ = func_08A8B408(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A894D8;
L_08A894D8:;
    v1 = LD32(sp);
    ST8(v1, 0);
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
}

/* 08A894F0 */
rv_t func_08A894F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A894F0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A894F8 */
rv_t func_08A894F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A894F8:;
    sp = sp - 144;
    v0 = 4;
    ST32(sp+120, a2);
    ST32(sp+124, a3);
    ST32(sp+128, t0);
    ST32(sp+132, t1);
    ST32(sp+136, t2);
    ST32(sp+140, t3);
    ST32(sp+16, a0);
    ST32(sp, a0);
    s0 = a1 + 0;
    ST16(sp+12, v0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A89534;
L_08A89534:;
    v1 = ((u32)(uintptr_t)func_08A894F0) - (-27408);
    v1 = v1 - 27408;
    ST32(sp+32, v1);
    ST32(sp+20, v0);
    ST32(sp+4, v0);
    ST32(sp+48, 0);
    ST32(sp+68, 0);
    v0 = func_08A870E0();
    goto L_08A89554;
L_08A89554:;
    a0 = v0 + 0;
    a2 = s0 + 0;
    a1 = sp + 0;
    a3 = sp + 120;
    { rv_t r_ = func_08A8D0C0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A89568;
L_08A89568:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
}

/* 08A89578 */
rv_t func_08A89578(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A89578:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = func_08A870E0();
    goto L_08A8959C;
L_08A8959C:;
    a1 = (u32)(s32)LD_S16(s2+14);
    a0 = v0 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    v0 = func_08A914CC(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A895B0;
L_08A895B0:;
    cnd_ = (s32)v0 < 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A895E0; }
    goto L_08A895B8;
L_08A895B8:;
    v0 = LD32(s2+80);
    v0 = v0 + v1;
    ST32(s2+80, v0);
    goto L_08A895C4;
L_08A895C4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A895E0:;
    v0 = LD_U16(s2+12);
    v0 = (v0 & ~(0x1u << 12)) | ((0 & 0x1) << 12);
    ST16(s2+12, v0);
    goto L_08A895C4;
}

/* 08A895F0 */
rv_t func_08A895F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A895F0:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    v1 = LD_U16(a0+12);
    v0 = v1 & 0x100;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A89658; }
    goto L_08A8961C;
L_08A8961C:;
    v0 = v1 + 0;
    v0 = (v0 & ~(0x1u << 12)) | ((0 & 0x1) << 12);
    ST16(s0+12, v0);
    v0 = func_08A870E0();
    goto L_08A8962C;
L_08A8962C:;
    a1 = (u32)(s32)LD_S16(s0+14);
    a2 = s1 + 0;
    a3 = s2 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_08A8E7D4(a0, a1, a2, a3, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A89640;
L_08A89640:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A89658:;
    v0 = func_08A870E0();
    goto L_08A89660;
L_08A89660:;
    a1 = (u32)(s32)LD_S16(s0+14);
    a0 = v0 + 0;
    a2 = 0 + 0;
    a3 = 2;
    v0 = func_08A9045C(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A89674;
L_08A89674:;
    v1 = LD_U16(s0+12);
    goto L_08A8961C;
}

/* 08A8967C */
rv_t func_08A8967C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8967C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = func_08A870E0();
    goto L_08A896A0;
L_08A896A0:;
    a1 = (u32)(s32)LD_S16(s2+14);
    a0 = v0 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    v0 = func_08A9045C(a0, a1, a2, a3, 0, 0, 0, 0);
    goto L_08A896B4;
L_08A896B4:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD_U16(s2+12);
    if (cnd_) { goto L_08A896EC; }
    goto L_08A896C4;
L_08A896C4:;
    ST32(s2+80, v1);
    v0 = v0 | 0x1000;
    goto L_08A896CC;
L_08A896CC:;
    ST16(s2+12, v0);
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A896EC:;
    v0 = (v0 & ~(0x1u << 12)) | ((0 & 0x1) << 12);
    goto L_08A896CC;
}

/* 08A896F4 */
rv_t func_08A896F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A896F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A89708;
L_08A89708:;
    a0 = v0 + 0;
    a1 = (u32)(s32)LD_S16(s0+14);
    { u64 r_ = func_08A8E95C(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A89714;
L_08A89714:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A89724 */
u64 func_08A89724(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
L_08A89724:;
    t0 = a0 + 0;
    t1 = a1 + 0;
    t5 = D_08AE9044 - (-28604);
    goto L_08A89730;
L_08A89730:;
    t4 = LD_U8(t0);
    a1 = t5 - 28604;
    t0 = t0 + 1;
    a2 = (u32)(s32)(s8)t4;
    v0 = a2 + a1;
    cnd_ = a2 == 0;
    t3 = a2 + 32;
    if (cnd_) { goto L_08A897B8; }
    goto L_08A8974C;
L_08A8974C:;
    t2 = LD_U8(t1);
    a0 = LD_U8(v0);
    v1 = (u32)(s32)(s8)t2;
    a1 = v1 + a1;
    v0 = LD_U8(a1);
    a0 = a0 & 0x1;
    a3 = v1 + 32;
    v0 = v0 & 0x1;
    if (a0 != 0) a2 = t3;
    if (v0 != 0) v1 = a3;
    cnd_ = a2 == v1;
    t1 = t1 + 1;
    if (cnd_) { goto L_08A89730; }
    goto L_08A8977C;
L_08A8977C:;
    v0 = t4 & 0xff;
    a2 = t2 & 0xff;
    v1 = t5 - 28604;
    a3 = a2 + v1;
    v1 = v0 + v1;
    a0 = LD_U8(v1);
    a1 = LD_U8(a3);
    t0 = v0 + 32;
    a0 = a0 & 0x1;
    a1 = a1 & 0x1;
    v1 = a2 + 32;
    if (a0 != 0) v0 = t0;
    if (a1 != 0) a2 = v1;
    v0 = v0 - a2;
    return (u64)v0 | ((u64)v1 << 32);
L_08A897B8:;
    t2 = LD_U8(t1);
    goto L_08A8977C;
}

/* 08A897C0 */
void func_08A897C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A897C0:;
    sp = sp - 16;
    v0 = a0 & 0x3;
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A89834; }
    goto L_08A897D8;
L_08A897D8:;
    v0 = LD32(a0);
    v1 = 0xfefe0000u;
    v1 = v1 | 0xfeff;
    v1 = v0 + v1;
    a0 = 0x80800000u;
    v0 = ~(0 | v0);
    a0 = a0 | 0x8080;
    v1 = v1 & v0;
    v1 = v1 & a0;
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A89834; }
    goto L_08A89804;
L_08A89804:;
    a3 = 0xfefe0000u;
    a2 = 0x80800000u;
    a3 = a3 | 0xfeff;
    a2 = a2 | 0x8080;
    a0 = a0 + 4;
    goto L_08A89818;
L_08A89818:;
    v0 = LD32(a0);
    v1 = ~(0 | v0);
    v0 = v0 + a3;
    v0 = v0 & v1;
    v0 = v0 & a2;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = a0 + 4; goto L_08A89818; }
    goto L_08A89834;
L_08A89834:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A89850; }
    goto L_08A89840;
L_08A89840:;
    a0 = a0 + 1;
    goto L_08A89844;
L_08A89844:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = a0 + 1; goto L_08A89844; }
    goto L_08A89850;
L_08A89850:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A89858;
L_08A89858:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 08A8986C */
u64 func_08A8986C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A8986C:;
    v0 = a0 & 0x3;
    a2 = a0 + 0;
    cnd_ = v0 != 0;
    a3 = a1 & 0xff;
    if (cnd_) { goto L_08A89924; }
    goto L_08A8987C;
L_08A8987C:;
    t2 = 0 + 0;
    a1 = 0 + 0;
    goto L_08A89884;
L_08A89884:;
    a1 = a1 + 1;
    v0 = t2 << 8;
    v1 = a1 < 0x4u;
    cnd_ = v1 != 0;
    t2 = v0 | a3;
    if (cnd_) { goto L_08A89884; }
    goto L_08A89898;
L_08A89898:;
    a0 = LD32(a2);
    t0 = 0xfefe0000u;
    t0 = t0 | 0xfeff;
    v0 = a0 + t0;
    v1 = ~(0 | a0);
    a1 = 0x80800000u;
    v0 = v0 & v1;
    a1 = a1 | 0x8080;
    v0 = v0 & a1;
    cnd_ = v0 != 0;
    v0 = a0 ^ t2;
    if (cnd_) { goto L_08A89920; }
    goto L_08A898C4;
L_08A898C4:;
    v1 = v0 + t0;
    v0 = ~(0 | v0);
    v1 = v1 & v0;
    v1 = v1 & a1;
    cnd_ = v1 != 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08A89924; }
    goto L_08A898DC;
L_08A898DC:;
    t1 = 0xfefe0000u;
    t1 = t1 | 0xfeff;
    t0 = a1 + 0;
    a2 = a2 + 4;
    goto L_08A898EC;
L_08A898EC:;
    a0 = LD32(a2);
    v1 = a0 ^ t2;
    v0 = a0 + t1;
    a0 = ~(0 | a0);
    a1 = ~(0 | v1);
    v0 = v0 & a0;
    v1 = v1 + t1;
    v1 = v1 & a1;
    v0 = v0 & t0;
    cnd_ = v0 != 0;
    v1 = v1 & t0;
    if (cnd_) { goto L_08A89920; }
    goto L_08A89918;
L_08A89918:;
    cnd_ = v1 == 0;
    if (cnd_) { a2 = a2 + 4; goto L_08A898EC; }
    goto L_08A89920;
L_08A89920:;
    a0 = a2 + 0;
    goto L_08A89924;
L_08A89924:;
    v1 = LD_U8(a0);
    v0 = v1 & 0xff;
    cnd_ = v0 == 0;
    v1 = v1 & 0xff;
    if (cnd_) { goto L_08A8995C; }
    goto L_08A89934;
L_08A89934:;
    cnd_ = v0 == a3;
    v1 = v1 ^ a3;
    if (cnd_) { goto L_08A89960; }
    goto L_08A8993C;
L_08A8993C:;
    a0 = a0 + 1;
    goto L_08A89940;
L_08A89940:;
    v1 = LD_U8(a0);
    v0 = v1 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = v1 & 0xff; goto L_08A8995C; }
    goto L_08A89950;
L_08A89950:;
    cnd_ = v0 != a3;
    if (cnd_) { a0 = a0 + 1; goto L_08A89940; }
    goto L_08A89958;
L_08A89958:;
    v1 = v1 & 0xff;
    goto L_08A8995C;
L_08A8995C:;
    v1 = v1 ^ a3;
    goto L_08A89960;
L_08A89960:;
    v0 = 0 + 0;
    if (v1 == 0) v0 = a0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A8996C */
u64 func_08A8996C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A8996C:;
    v0 = a0 | a1;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = LD_U8(a0);
    if (cnd_) { goto L_08A899B8; }
    goto L_08A8997C;
L_08A8997C:;
    a3 = LD_U8(a1);
    cnd_ = a2 == 0;
    a0 = a0 + 2;
    if (cnd_) { goto L_08A899AC; }
    goto L_08A89988;
L_08A89988:;
    cnd_ = a2 != a3;
    v0 = LD_U8(a0-1);
    if (cnd_) { goto L_08A899AC; }
    goto L_08A89990;
L_08A89990:;
    v1 = LD_U8(a1+1);
    cnd_ = v0 == 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_08A899A4; }
    goto L_08A8999C;
L_08A8999C:;
    cnd_ = v0 == v1;
    a2 = LD_U8(a0);
    if (cnd_) { goto L_08A8997C; }
    goto L_08A899A4;
L_08A899A4:;
    v0 = v0 - v1;
    return (u64)v0 | ((u64)v1 << 32);
L_08A899AC:;
    v0 = a2 - a3;
    return (u64)v0 | ((u64)v1 << 32);
L_08A899B4:;
    a2 = LD_U8(a0);
    goto L_08A899B8;
L_08A899B8:;
    a3 = LD_U8(a1);
    a0 = a0 + 1;
    v1 = 0 < a2;
    v0 = a2 ^ a3;
    v0 = v0 < 0x1u;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A899B4; }
    goto L_08A899D8;
L_08A899D8:;
    goto L_08A899AC;
}

/* 08A899E0 */
u64 func_08A899E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A899E0:;
    v0 = a1 | a0;
    v0 = v0 & 0x3;
    t2 = a0 + 0;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A89A5C; }
    goto L_08A899F4;
L_08A899F4:;
    a3 = LD32(a1);
    v0 = 0xfefe0000u;
    v0 = v0 | 0xfeff;
    v0 = a3 + v0;
    a0 = ~(0 | a3);
    v1 = 0x80800000u;
    v0 = v0 & a0;
    v1 = v1 | 0x8080;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a2 = t2 + 0;
    if (cnd_) { goto L_08A89A58; }
    goto L_08A89A20;
L_08A89A20:;
    t1 = 0xfefe0000u;
    a0 = a3 + 0;
    t1 = t1 | 0xfeff;
    t0 = v1 + 0;
    goto L_08A89A30;
L_08A89A30:;
    ST32(a2, a0);
    a1 = a1 + 4;
    v0 = LD32(a1);
    v1 = v0 + t1;
    a0 = v0 + 0;
    v0 = ~(0 | v0);
    v1 = v1 & v0;
    v1 = v1 & t0;
    cnd_ = v1 == 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_08A89A30; }
    goto L_08A89A58;
L_08A89A58:;
    v1 = a2 + 0;
    goto L_08A89A5C;
L_08A89A5C:;
    v0 = LD_U8(a1);
    a1 = a1 + 1;
    ST8(v1, v0);
    cnd_ = v0 != 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A89A5C; }
    goto L_08A89A70;
L_08A89A70:;
    v0 = t2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A89A78 */
u32 func_08A89A78(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A89A78:;
    a2 = LD_U8(a0);
    cnd_ = a2 == 0;
    t2 = a0 + 0;
    if (cnd_) { goto L_08A89AD4; }
    goto L_08A89A84;
L_08A89A84:;
    t1 = LD_U8(a1);
    goto L_08A89A88;
L_08A89A88:;
    v0 = (u32)(s32)(s8)t1;
    cnd_ = v0 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08A89ADC; }
    goto L_08A89A94;
L_08A89A94:;
    a3 = v0 + 0;
    t0 = (u32)(s32)(s8)a2;
    goto L_08A89A9C;
L_08A89A9C:;
    cnd_ = t0 == a3;
    if (cnd_) { a2 = LD_U8(v1); goto L_08A89AB8; }
    goto L_08A89AA4;
L_08A89AA4:;
    v1 = v1 + 1;
    a2 = LD_U8(v1);
    v0 = (u32)(s32)(s8)a2;
    cnd_ = v0 != 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_08A89A9C; }
    goto L_08A89AB8;
L_08A89AB8:;
    v0 = (u32)(s32)(s8)a2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A89AD4; }
    goto L_08A89AC4;
L_08A89AC4:;
    a0 = a0 + 1;
    v0 = LD_U8(a0);
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A89A88; }
    goto L_08A89AD4;
L_08A89AD4:;
    v0 = a0 - t2;
    return v0;
L_08A89ADC:;
    a2 = LD_U8(a1);
    goto L_08A89AB8;
}

/* 08A89AE4 */
u64 func_08A89AE4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A89AE4:;
    v0 = a0 + 1;
    goto L_08A89AE8;
L_08A89AE8:;
    v1 = LD_U8(a0);
    cnd_ = v1 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A89AE8; }
    goto L_08A89AF4;
L_08A89AF4:;
    v0 = a0 - v0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A89AFC */
u32 func_08A89AFC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    int cnd_;
L_08A89AFC:;
    t1 = a2 + 0;
    t2 = a0 + 0;
    t3 = a1 + 0;
    v0 = 0 + 0;
    t7 = D_08AE9044 - (-28604);
    cnd_ = a2 != 0;
    t6 = (u32)-1;
    if (cnd_) { goto L_08A89B20; }
    goto L_08A89B18;
L_08A89B18:;
    return v0;
L_08A89B20:;
    t1 = t1 - 1;
    goto L_08A89B24;
L_08A89B24:;
    cnd_ = t1 == t6;
    v0 = t7 - 28604;
    if (cnd_) { goto L_08A89BCC; }
    goto L_08A89B2C;
L_08A89B2C:;
    t5 = LD_U8(t2);
    t4 = LD_U8(t3);
    t2 = t2 + 1;
    a2 = (u32)(s32)(s8)t5;
    a0 = (u32)(s32)(s8)t4;
    a3 = a0 + v0;
    v0 = a2 + v0;
    v1 = LD_U8(v0);
    a1 = LD_U8(a3);
    t0 = a2 + 32;
    v1 = v1 & 0x1;
    a1 = a1 & 0x1;
    v0 = a0 + 32;
    a3 = a2 + 0;
    if (v1 != 0) a2 = t0;
    v1 = a0 + 0;
    if (a1 != 0) a0 = v0;
    cnd_ = a2 != a0;
    t3 = t3 + 1;
    if (cnd_) { goto L_08A89B90; }
    goto L_08A89B78;
L_08A89B78:;
    cnd_ = t1 == 0;
    a2 = t5 & 0xff;
    if (cnd_) { goto L_08A89B94; }
    goto L_08A89B80;
L_08A89B80:;
    cnd_ = a3 == 0;
    a1 = t4 & 0xff;
    if (cnd_) { goto L_08A89B98; }
    goto L_08A89B88;
L_08A89B88:;
    cnd_ = v1 != 0;
    if (cnd_) { t1 = t1 - 1; goto L_08A89B24; }
    goto L_08A89B90;
L_08A89B90:;
    a2 = t5 & 0xff;
    goto L_08A89B94;
L_08A89B94:;
    a1 = t4 & 0xff;
    goto L_08A89B98;
L_08A89B98:;
    v0 = t7 - 28604;
    a3 = a1 + v0;
    v0 = a2 + v0;
    v1 = LD_U8(v0);
    a0 = LD_U8(a3);
    v0 = a1 + 32;
    t0 = a2 + 32;
    v1 = v1 & 0x1;
    a0 = a0 & 0x1;
    if (v1 != 0) a2 = t0;
    if (a0 != 0) a1 = v0;
    v0 = a2 - a1;
    return v0;
L_08A89BCC:;
    t5 = LD_U8(t2);
    t4 = LD_U8(t3);
    goto L_08A89B90;
}

/* 08A89BD8 */
u64 func_08A89BD8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A89BD8:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A89C48; }
    goto L_08A89BE0;
L_08A89BE0:;
    v0 = a0 | a1;
    v0 = v0 & 0x3;
    cnd_ = v0 != 0;
    v0 = a2 + 0;
    if (cnd_) { goto L_08A89C1C; }
    goto L_08A89BF0;
L_08A89BF0:;
    v0 = a2 < 0x4u;
    a3 = a0 + 0;
    cnd_ = v0 != 0;
    t0 = a1 + 0;
    if (cnd_) { goto L_08A89C10; }
    goto L_08A89C00;
L_08A89C00:;
    v1 = LD32(a0);
    v0 = LD32(a1);
    cnd_ = v1 == v0;
    t1 = 0xfefe0000u;
    if (cnd_) { goto L_08A89C9C; }
    goto L_08A89C10;
L_08A89C10:;
    a0 = a3 + 0;
    goto L_08A89C14;
L_08A89C14:;
    a1 = t0 + 0;
    v0 = a2 + 0;
    goto L_08A89C1C;
L_08A89C1C:;
    cnd_ = v0 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A89C90; }
    goto L_08A89C24;
L_08A89C24:;
    a3 = LD_U8(a0);
    t0 = LD_U8(a1);
    v1 = (u32)(s32)(s8)a3;
    v0 = (u32)(s32)(s8)t0;
    cnd_ = v1 == v0;
    t1 = a3 + 0;
    if (cnd_) { goto L_08A89C50; }
    goto L_08A89C3C;
L_08A89C3C:;
    v1 = a3 & 0xff;
    goto L_08A89C40;
L_08A89C40:;
    v0 = t0 & 0xff;
    v0 = v1 - v0;
    goto L_08A89C48;
L_08A89C48:;
    return (u64)v0 | ((u64)v1 << 32);
L_08A89C50:;
    a0 = a0 + 1;
    a1 = a1 + 1;
    cnd_ = a2 == 0;
    v0 = (u32)(s32)(s8)t1;
    if (cnd_) { goto L_08A89C88; }
    goto L_08A89C60;
L_08A89C60:;
    cnd_ = v0 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A89C88; }
    goto L_08A89C68;
L_08A89C68:;
    a3 = LD_U8(a0);
    t0 = LD_U8(a1);
    v1 = (u32)(s32)(s8)a3;
    v0 = (u32)(s32)(s8)t0;
    cnd_ = v1 == v0;
    t1 = a3 + 0;
    if (cnd_) { goto L_08A89C50; }
    goto L_08A89C80;
L_08A89C80:;
    v1 = a3 & 0xff;
    goto L_08A89C40;
L_08A89C88:;
    v0 = 0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A89C90:;
    a3 = LD_U8(a0);
    t0 = LD_U8(a1);
    goto L_08A89C3C;
L_08A89C9C:;
    a1 = 0x80800000u;
    t1 = t1 | 0xfeff;
    a1 = a1 | 0x8080;
    a2 = a2 - 4;
    goto L_08A89CAC;
L_08A89CAC:;
    cnd_ = a2 == 0;
    a0 = a2 < 0x4u;
    if (cnd_) { goto L_08A89C88; }
    goto L_08A89CB4;
L_08A89CB4:;
    v0 = LD32(a3);
    t0 = t0 + 4;
    v1 = ~(0 | v0);
    v0 = v0 + t1;
    v0 = v0 & v1;
    v0 = v0 & a1;
    cnd_ = v0 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A89C88; }
    goto L_08A89CD4;
L_08A89CD4:;
    cnd_ = a0 != 0;
    if (cnd_) { a0 = a3 + 0; goto L_08A89C14; }
    goto L_08A89CDC;
L_08A89CDC:;
    v1 = LD32(a3);
    v0 = LD32(t0);
    cnd_ = v1 == v0;
    if (cnd_) { a2 = a2 - 4; goto L_08A89CAC; }
    goto L_08A89CEC;
L_08A89CEC:;
    a0 = a3 + 0;
    goto L_08A89C14;
}

/* 08A89CF4 */
u64 func_08A89CF4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A89CF4:;
    v0 = a2 < 0x4u;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08A89D4C; }
    goto L_08A89D00;
L_08A89D00:;
    t2 = a2 & 0x3;
    a2 = a2 - t2;
    goto L_08A89D08;
L_08A89D08:;
    v0 = LD_U8(a1);
    a3 = LD_U8(a1+1);
    t0 = LD_U8(a1+2);
    t1 = LD_U8(a1+3);
    a2 = a2 - 4;
    ST8(v1, v0);
    cnd_ = v0 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08A89E70; }
    goto L_08A89D28;
L_08A89D28:;
    cnd_ = a3 == 0;
    ST8(v1+1, a3);
    if (cnd_) { goto L_08A89E64; }
    goto L_08A89D30;
L_08A89D30:;
    cnd_ = t0 == 0;
    ST8(v1+2, t0);
    if (cnd_) { goto L_08A89E58; }
    goto L_08A89D38;
L_08A89D38:;
    cnd_ = t1 == 0;
    ST8(v1+3, t1);
    if (cnd_) { goto L_08A89D9C; }
    goto L_08A89D40;
L_08A89D40:;
    cnd_ = a2 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A89D08; }
    goto L_08A89D48;
L_08A89D48:;
    a2 = t2 + 0;
    goto L_08A89D4C;
L_08A89D4C:;
    a2 = v1 + a2;
    cnd_ = v1 == a2;
    if (cnd_) { goto L_08A89D74; }
    goto L_08A89D58;
L_08A89D58:;
    v0 = LD_U8(a1);
    goto L_08A89D5C;
L_08A89D5C:;
    a1 = a1 + 1;
    ST8(v1, v0);
    cnd_ = v0 == 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A89D7C; }
    goto L_08A89D6C;
L_08A89D6C:;
    cnd_ = v1 != a2;
    if (cnd_) { v0 = LD_U8(a1); goto L_08A89D5C; }
    goto L_08A89D74;
L_08A89D74:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A89D7C:;
    cnd_ = v1 == a2;
    if (cnd_) { goto L_08A89D74; }
    goto L_08A89D84;
L_08A89D84:;
    ST8(v1, 0);
    goto L_08A89D88;
L_08A89D88:;
    v1 = v1 + 1;
    cnd_ = v1 != a2;
    if (cnd_) { ST8(v1, 0); goto L_08A89D88; }
    goto L_08A89D94;
L_08A89D94:;
    goto L_08A89D74;
L_08A89D9C:;
    a2 = a2 + t2;
    cnd_ = a2 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08A89DD0; }
    goto L_08A89DA8;
L_08A89DA8:;
    v0 = v1 & 0x3;
    cnd_ = v0 == 0;
    v0 = a2 < 0x10u;
    if (cnd_) { goto L_08A89DD4; }
    goto L_08A89DB4;
L_08A89DB4:;
    ST8(v1, 0);
    goto L_08A89DB8;
L_08A89DB8:;
    a2 = a2 - 1;
    v1 = v1 + 1;
    cnd_ = a2 == 0;
    v0 = v1 & 0x3;
    if (cnd_) { goto L_08A89DD0; }
    goto L_08A89DC8;
L_08A89DC8:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(v1, 0); goto L_08A89DB8; }
    goto L_08A89DD0;
L_08A89DD0:;
    v0 = a2 < 0x10u;
    goto L_08A89DD4;
L_08A89DD4:;
    cnd_ = v0 != 0;
    v0 = a2 < 0x8u;
    if (cnd_) { goto L_08A89E00; }
    goto L_08A89DDC;
L_08A89DDC:;
    a2 = a2 - 16;
    v1 = v1 + 16;
    v0 = a2 < 0x10u;
    ST32(v1-16, 0);
    ST32(v1-12, 0);
    ST32(v1-8, 0);
    cnd_ = v0 == 0;
    ST32(v1-4, 0);
    if (cnd_) { goto L_08A89DDC; }
    goto L_08A89DFC;
L_08A89DFC:;
    v0 = a2 < 0x8u;
    goto L_08A89E00;
L_08A89E00:;
    cnd_ = v0 != 0;
    v0 = a2 < 0x4u;
    if (cnd_) { goto L_08A89E1C; }
    goto L_08A89E08;
L_08A89E08:;
    ST32(v1, 0);
    a2 = a2 - 8;
    ST32(v1+4, 0);
    v1 = v1 + 8;
    v0 = a2 < 0x4u;
    goto L_08A89E1C;
L_08A89E1C:;
    cnd_ = v0 != 0;
    v0 = a2 < 0x2u;
    if (cnd_) { goto L_08A89E34; }
    goto L_08A89E24;
L_08A89E24:;
    ST32(v1, 0);
    a2 = a2 - 4;
    v1 = v1 + 4;
    v0 = a2 < 0x2u;
    goto L_08A89E34;
L_08A89E34:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A89E48; }
    goto L_08A89E3C;
L_08A89E3C:;
    ST16(v1, 0);
    a2 = a2 - 2;
    v1 = v1 + 2;
    goto L_08A89E48;
L_08A89E48:;
    cnd_ = a2 != 0;
    if (cnd_) { ST8(v1, 0); goto L_08A89D74; }
    goto L_08A89E50;
L_08A89E50:;
    goto L_08A89D74;
L_08A89E58:;
    a2 = a2 + 1;
    v1 = v1 - 1;
    goto L_08A89D9C;
L_08A89E64:;
    a2 = a2 + 1;
    v1 = v1 - 1;
    goto L_08A89E58;
L_08A89E70:;
    a2 = a2 + 1;
    v1 = v1 - 1;
    goto L_08A89E64;
}

/* 08A89E7C */
u32 func_08A89E7C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A89E7C:;
    sp = sp - 16;
    v0 = a0 + 0;
    s1 = a1 + 0;
    s0 = 0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A89ED4; }
    goto L_08A89E9C;
L_08A89E9C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A89EA8;
L_08A89EA8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s0 + 0; goto L_08A89EC0; }
    goto L_08A89EB0;
L_08A89EB0:;
    s0 = v0 + 0;
    v0 = v0 + 1;
    goto L_08A89E9C;
L_08A89EBC:;
    v0 = s0 + 0;
    goto L_08A89EC0;
L_08A89EC0:;
    sp = sp + 16;
    return v0;
L_08A89ED4:;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A89EDC;
L_08A89EDC:;
    s0 = v0 + 0;
    goto L_08A89EBC;
}

/* 08A89EE4 */
u64 func_08A89EE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A89EE4:;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A89F00; }
    goto L_08A89EF0;
L_08A89EF0:;
    v0 = (u32)(s32)LD_S8(a1);
    if (v0 != 0) a0 = 0;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A89F00:;
    v0 = a1 + a2;
    goto L_08A89F04;
L_08A89F04:;
    v1 = (u32)(s32)LD_S8(v0);
    a3 = a0 + a2;
    v0 = a0 + 0;
    cnd_ = v1 == 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_08A89F38; }
    goto L_08A89F18;
L_08A89F18:;
    v0 = (u32)(s32)LD_S8(a3);
    cnd_ = v1 == v0;
    v0 = a1 + a2;
    if (cnd_) { goto L_08A89F04; }
    goto L_08A89F24;
L_08A89F24:;
    a0 = a0 + 1;
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 0 + 0; goto L_08A89F00; }
    goto L_08A89F34;
L_08A89F34:;
    v0 = 0 + 0;
    goto L_08A89F38;
L_08A89F38:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A89F40 */
u64 func_08A89F40(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A89F40:;
    sp = sp - 128;
    a3 = 0 + 0;
    t1 = 0 + 0;
    ST32(sp+8, a2);
    ST32(sp+12, 0);
    ST32(sp+20, a1);
    s7 = a0 + 0;
    s4 = 0 + 0;
    s5 = 0 + 0;
    goto L_08A89F8C;
L_08A89F8C:;
    v0 = LD32(sp+20);
    a2 = LD_U8(v0);
    v1 = (u32)(s32)(s8)a2;
    v0 = v1 < 0x2eu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A8A040; }
    goto L_08A89FA4;
L_08A89FA4:;
    v1 = D_08AE91E8 - (-28184);
    v1 = v1 - 28184;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A89FBCu: goto L_08A89FBC; case 0x08A89FC4u: goto L_08A89FC4; case 0x08A89FDCu: goto L_08A89FDC; case 0x08A8A03Cu: goto L_08A8A03C; case 0x08A8AF84u: goto L_08A8AF84; default: rs_break(0, 0x08a89fb4); }
L_08A89FBC:;
    v1 = 1;
    ST32(sp+12, v1);
    goto L_08A89FC4;
L_08A89FC4:;
    a0 = LD32(sp+20);
    a0 = a0 + 1;
    ST32(sp+20, a0);
    a2 = LD_U8(a0);
    cnd_ = a2 != 0;
    v1 = (u32)(s32)(s8)a2;
    if (cnd_) { goto L_08A8A040; }
    goto L_08A89FDC;
L_08A89FDC:;
    ST32(sp+20, a1);
    goto L_08A89FE0;
L_08A89FE0:;
    v1 = LD32(sp+8);
    goto L_08A89FE4;
L_08A89FE4:;
    cnd_ = v1 == 0;
    a0 = LD32(sp+20);
    if (cnd_) { goto L_08A89FF0; }
    goto L_08A89FEC;
L_08A89FEC:;
    ST32(v1, a0);
    goto L_08A89FF0;
L_08A89FF0:;
    a0 = LD32(sp+12);
    v0 = s4 + 0;
    cnd_ = a0 == 0;
    v1 = s5 + 0;
    if (cnd_) { goto L_08A8A00C; }
    goto L_08A8A000;
L_08A8A000:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_08A93F54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A00C;
L_08A8A00C:;
    sp = sp + 128;
    return (u64)v0 | ((u64)v1 << 32);
L_08A8A03C:;
    v1 = (u32)(s32)(s8)a2;
    goto L_08A8A040;
L_08A8A040:;
    v0 = 48;
    cnd_ = v1 == v0;
    if (cnd_) { t1 = 1; goto L_08A8AF54; }
    goto L_08A8A04C;
L_08A8A04C:;
    a0 = (u32)(s32)(s8)a2;
    goto L_08A8A050;
L_08A8A050:;
    v0 = (s32)a0 < 48;
    fp = LD32(sp+20);
    s2 = 0 + 0;
    ST32(sp+24, 0);
    t0 = 0 + 0;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A8A0C8; }
    goto L_08A8A06C;
L_08A8A06C:;
    v0 = (s32)a0 < 58;
    cnd_ = v0 == 0;
    v0 = 46;
    if (cnd_) { goto L_08A8A0CC; }
    goto L_08A8A078;
L_08A8A078:;
    v0 = (s32)s1 < 9;
    goto L_08A8A07C;
L_08A8A07C:;
    cnd_ = v0 == 0;
    v0 = (s32)s1 < 16;
    if (cnd_) { goto L_08A8AF34; }
    goto L_08A8A084;
L_08A8A084:;
    v1 = LD32(sp+24);
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    v0 = v0 + a0;
    v0 = v0 - 48;
    ST32(sp+24, v0);
    goto L_08A8A0A0;
L_08A8A0A0:;
    a0 = LD32(sp+20);
    goto L_08A8A0A4;
L_08A8A0A4:;
    a0 = a0 + 1;
    ST32(sp+20, a0);
    a0 = (u32)(s32)LD_S8(a0);
    v0 = (s32)a0 < 48;
    cnd_ = v0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A8A0C8; }
    goto L_08A8A0BC;
L_08A8A0BC:;
    v0 = (s32)a0 < 58;
    cnd_ = v0 != 0;
    v0 = (s32)s1 < 9;
    if (cnd_) { goto L_08A8A07C; }
    goto L_08A8A0C8;
L_08A8A0C8:;
    v0 = 46;
    goto L_08A8A0CC;
L_08A8A0CC:;
    cnd_ = a0 == v0;
    s6 = s1 + 0;
    if (cnd_) { goto L_08A8ADE8; }
    goto L_08A8A0D4;
L_08A8A0D4:;
    v1 = a0 ^ 0x45;
    goto L_08A8A0D8;
L_08A8A0D8:;
    v0 = a0 ^ 0x65;
    goto L_08A8A0DC;
L_08A8A0DC:;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_08A8A1EC; }
    goto L_08A8A0F0;
L_08A8A0F0:;
    v0 = s1 | a3;
    v0 = v0 | t1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp+20, a1); goto L_08A89FE0; }
    goto L_08A8A100;
L_08A8A100:;
    a1 = LD32(sp+20);
    v0 = a1 + 1;
    ST32(sp+20, v0);
    a0 = (u32)(s32)LD_S8(v0);
    v0 = 43;
    cnd_ = a0 == v0;
    t2 = 0 + 0;
    if (cnd_) { goto L_08A8ADD4; }
    goto L_08A8A11C;
L_08A8A11C:;
    v0 = 45;
    cnd_ = a0 == v0;
    if (cnd_) { t2 = 1; goto L_08A8ADD4; }
    goto L_08A8A128;
L_08A8A128:;
    v0 = a0 - 48;
    v0 = v0 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp+20, a1); goto L_08A8A1EC; }
    goto L_08A8A138;
L_08A8A138:;
    v0 = 48;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = LD32(sp+20); goto L_08A8ADB8; }
    goto L_08A8A144;
L_08A8A144:;
    v0 = a0 - 49;
    goto L_08A8A148;
L_08A8A148:;
    v0 = v0 < 0x9u;
    cnd_ = v0 == 0;
    ST32(sp+16, 0);
    if (cnd_) { goto L_08A8A1EC; }
    goto L_08A8A154;
L_08A8A154:;
    a2 = LD32(sp+20);
    a0 = a0 - 48;
    ST32(sp+16, a0);
    v0 = a2 + 1;
    ST32(sp+20, v0);
    a0 = (u32)(s32)LD_S8(v0);
    v0 = (s32)a0 < 48;
    cnd_ = v0 != 0;
    v0 = (s32)a0 < 58;
    if (cnd_) { goto L_08A8A1C0; }
    goto L_08A8A178;
L_08A8A178:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+20); goto L_08A8A1C4; }
    goto L_08A8A180;
L_08A8A180:;
    v1 = LD32(sp+16);
    goto L_08A8A184;
L_08A8A184:;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v1 = LD32(sp+20);
    v0 = v0 << 1;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(sp+20, v1);
    v0 = v0 - 48;
    a0 = (u32)(s32)LD_S8(v1);
    v1 = (s32)a0 < 48;
    cnd_ = v1 != 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_08A8A1C0; }
    goto L_08A8A1B4;
L_08A8A1B4:;
    v0 = (s32)a0 < 58;
    cnd_ = v0 != 0;
    v1 = LD32(sp+16);
    if (cnd_) { goto L_08A8A184; }
    goto L_08A8A1C0;
L_08A8A1C0:;
    a0 = LD32(sp+20);
    goto L_08A8A1C4;
L_08A8A1C4:;
    v0 = 0x980000u;
    v0 = v0 | 0x967f;
    v1 = a0 - a2;
    a0 = LD32(sp+16);
    v1 = (s32)v1 < 9;
    if (v1 == 0) a0 = v0;
    cnd_ = t2 == 0;
    ST32(sp+16, a0);
    if (cnd_) { goto L_08A8A1EC; }
    goto L_08A8A1E4;
L_08A8A1E4:;
    a0 = 0 - a0;
    ST32(sp+16, a0);
    goto L_08A8A1EC;
L_08A8A1EC:;
    cnd_ = s1 == 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A8ADA4; }
    goto L_08A8A1F4;
L_08A8A1F4:;
    a0 = LD32(sp+24);
    if (s6 == 0) s6 = s1;
    v0 = v0 - t0;
    ST32(sp+16, v0);
    v0 = 16;
    s0 = (s32)s1 < (s32)v0 ? s1 : v0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A210;
L_08A8A210:;
    a3 = v1 + 0;
    v1 = LD32(sp+24);
    cnd_ = (s32)v1 < 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A8AD7C; }
    goto L_08A8A220;
L_08A8A220:;
    v0 = (s32)s0 < 10;
    s4 = a2 + 0;
    cnd_ = v0 != 0;
    s5 = a3 + 0;
    if (cnd_) { goto L_08A8A280; }
    goto L_08A8A230;
L_08A8A230:;
    v1 = D_08AE99C8 - (-26168);
    v1 = v1 - 26168;
    v0 = s0 << 3;
    v0 = v0 + v1;
    a0 = LD32(v0-72);
    a1 = LD32(v0-68);
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A24C;
L_08A8A24C:;
    a0 = s2 + 0;
    s4 = v0 + 0;
    s5 = v1 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A25C;
L_08A8A25C:;
    cnd_ = (s32)s2 < 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A8AD5C; }
    goto L_08A8A264;
L_08A8A264:;
    a0 = s4 + 0;
    goto L_08A8A268;
L_08A8A268:;
    a1 = s5 + 0;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A278;
L_08A8A278:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    goto L_08A8A280;
L_08A8A280:;
    v0 = (s32)s1 < 16;
    cnd_ = v0 == 0;
    ST32(sp+48, 0);
    if (cnd_) { goto L_08A8A2C0; }
    goto L_08A8A28C;
L_08A8A28C:;
    a0 = LD32(sp+16);
    cnd_ = a0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A89FE4; }
    goto L_08A8A298;
L_08A8A298:;
    cnd_ = (s32)a0 <= 0;
    v0 = (s32)a0 < 23;
    if (cnd_) { goto L_08A8AD20; }
    goto L_08A8A2A0;
L_08A8A2A0:;
    cnd_ = v0 != 0;
    v1 = 15;
    if (cnd_) { goto L_08A8ACFC; }
    goto L_08A8A2A8;
L_08A8A2A8:;
    a0 = LD32(sp+16);
    v1 = v1 - s1;
    v0 = v1 + 22;
    v0 = (s32)v0 < (s32)a0;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = D_08AE99C8 - (-26168); goto L_08A8ACA0; }
    goto L_08A8A2C0;
L_08A8A2C0:;
    a0 = LD32(sp+16);
    goto L_08A8A2C4;
L_08A8A2C4:;
    v0 = s1 - s0;
    s2 = a0 + v0;
    cnd_ = (s32)s2 <= 0;
    v1 = s2 & 0xf;
    if (cnd_) { goto L_08A8AB48; }
    goto L_08A8A2D4;
L_08A8A2D4:;
    cnd_ = v1 == 0;
    if (cnd_) { s2 = (s2 & ~(0xfu << 0)) | ((0 & 0xf) << 0); goto L_08A8A30C; }
    goto L_08A8A2DC;
L_08A8A2DC:;
    v0 = D_08AE99C8 - (-26168);
    v0 = v0 - 26168;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = LD32(v1+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A300;
L_08A8A300:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    s2 = (s2 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    goto L_08A8A30C;
L_08A8A30C:;
    cnd_ = s2 == 0;
    t0 = LD32(sp+24);
    if (cnd_) { goto L_08A8A448; }
    goto L_08A8A314;
L_08A8A314:;
    v0 = (s32)s2 < 309;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = (u32)((s32)s2 >> 4); goto L_08A8A388; }
    goto L_08A8A320;
L_08A8A320:;
    v0 = 34;
    goto L_08A8A324;
L_08A8A324:;
    ST32(s7, v0);
    s4 = D_08AE9AF0 - (-25872);
    s4 = LD32(s4-25872);
    s5 = D_08AE9AF4 - (-25868);
    s5 = LD32(s5-25868);
    goto L_08A8A338;
L_08A8A338:;
    v0 = LD32(sp+48);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08A89FE4; }
    goto L_08A8A344;
L_08A8A344:;
    a1 = LD32(sp+40);
    goto L_08A8A348;
L_08A8A348:;
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A350;
L_08A8A350:;
    a1 = LD32(sp+44);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A35C;
L_08A8A35C:;
    a1 = LD32(sp+52);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A368;
L_08A8A368:;
    a1 = LD32(sp+48);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A374;
L_08A8A374:;
    a1 = LD32(sp+56);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A380;
L_08A8A380:;
    v1 = LD32(sp+8);
    goto L_08A89FE4;
L_08A8A388:;
    cnd_ = s2 == 0;
    t0 = LD32(sp+24);
    if (cnd_) { goto L_08A8A448; }
    goto L_08A8A390;
L_08A8A390:;
    v0 = (s32)s2 < 2;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8A3E0; }
    goto L_08A8A39C;
L_08A8A39C:;
    v1 = D_08AE9A90 - (-25968);
    s3 = v1 - 25968;
    goto L_08A8A3A4;
L_08A8A3A4:;
    v0 = s2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = (u32)((s32)s2 >> 1); goto L_08A8A3D0; }
    goto L_08A8A3B0;
L_08A8A3B0:;
    a0 = LD32(s3);
    a1 = LD32(s3+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A3C4;
L_08A8A3C4:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    s2 = (u32)((s32)s2 >> 1);
    goto L_08A8A3D0;
L_08A8A3D0:;
    v0 = (s32)s2 < 2;
    s0 = s0 + 1;
    cnd_ = v0 == 0;
    s3 = s3 + 8;
    if (cnd_) { goto L_08A8A3A4; }
    goto L_08A8A3E0;
L_08A8A3E0:;
    a0 = D_08AE9A90 - (-25968);
    v1 = a0 - 25968;
    v0 = s0 << 3;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(v0+4);
    v1 = 0xfcb00000u;
    s5 = v1 + s5;
    a2 = s4 + 0;
    a3 = s5 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A40C;
L_08A8A40C:;
    s5 = v1 + 0;
    v1 = 0x7ff00000u;
    s4 = v0 + 0;
    s2 = s5 & v1;
    v0 = 0x7ca00000u;
    v0 = v0 < s2;
    cnd_ = v0 != 0;
    v0 = 0x7c900000u;
    if (cnd_) { goto L_08A8A320; }
    goto L_08A8A42C;
L_08A8A42C:;
    v0 = v0 < s2;
    cnd_ = v0 == 0;
    v0 = 0x3500000u;
    if (cnd_) { goto L_08A8AB40; }
    goto L_08A8A438;
L_08A8A438:;
    s5 = 0x7fef0000u;
    s5 = s5 | 0xffff;
    s4 = (u32)-1;
    goto L_08A8A444;
L_08A8A444:;
    t0 = LD32(sp+24);
    goto L_08A8A448;
L_08A8A448:;
    a0 = s7 + 0;
    a1 = fp + 0;
    a2 = s6 + 0;
    a3 = s1 + 0;
    v0 = func_08A90854(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_08A8A45C;
L_08A8A45C:;
    v1 = 0xf0000u;
    a0 = v0 + 12;
    v1 = v1 | 0xffff;
    ST32(sp+48, v0);
    ST32(sp+64, a0);
    ST32(sp+60, v1);
    v0 = LD32(sp+48);
    goto L_08A8A478;
L_08A8A478:;
    a0 = s7 + 0;
    a1 = LD32(v0+4);
    v0 = func_08A90660(a0, a1, 0, 0, 0, 0);
    goto L_08A8A484;
L_08A8A484:;
    v1 = LD32(sp+48);
    a1 = LD32(sp+64);
    a0 = v0 + 12;
    a2 = LD32(v1+16);
    ST32(sp+44, v0);
    a2 = a2 << 2;
    a2 = a2 + 8;
    func_08A87AE0(a0, a1, a2);
    goto L_08A8A4A4;
L_08A8A4A4:;
    a0 = s7 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    t0 = sp + 0;
    t1 = sp + 4;
    v0 = func_08A912C8(a0, a2, a3, t0, t1, 0, 0);
    goto L_08A8A4BC;
L_08A8A4BC:;
    a0 = s7 + 0;
    a1 = 1;
    ST32(sp+40, v0);
    v0 = func_08A90AB4(a0, a1, 0, 0, 0, 0);
    goto L_08A8A4CC;
L_08A8A4CC:;
    a0 = LD32(sp+16);
    cnd_ = (s32)a0 < 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8AB28; }
    goto L_08A8A4D8;
L_08A8A4D8:;
    s1 = a0 + 0;
    a2 = 0 + 0;
    s2 = 0 + 0;
    s6 = a0 + 0;
    goto L_08A8A4E8;
L_08A8A4E8:;
    v0 = LD32(sp);
    cnd_ = (s32)v0 < 0;
    if (cnd_) { s1 = s1 - v0; goto L_08A8A4F8; }
    goto L_08A8A4F4;
L_08A8A4F4:;
    s2 = s2 + v0;
    goto L_08A8A4F8;
L_08A8A4F8:;
    a0 = LD32(sp+4);
    s0 = v0 + 1075;
    v0 = v0 + a0;
    v1 = v0 - 1;
    v1 = (s32)v1 < -1022;
    cnd_ = v1 != 0;
    s3 = s2 + 0;
    if (cnd_) { goto L_08A8A51C; }
    goto L_08A8A514;
L_08A8A514:;
    v0 = 54;
    s0 = v0 - a0;
    goto L_08A8A51C;
L_08A8A51C:;
    s1 = s1 + s0;
    s2 = s2 + s0;
    v1 = (s32)s1 < (s32)s2 ? s1 : s2;
    v1 = (s32)v1 < (s32)s3 ? v1 : s3;
    cnd_ = (s32)v1 <= 0;
    if (cnd_) { goto L_08A8A540; }
    goto L_08A8A534;
L_08A8A534:;
    s3 = s3 - v1;
    s2 = s2 - v1;
    s1 = s1 - v1;
    goto L_08A8A540;
L_08A8A540:;
    cnd_ = (s32)a2 <= 0;
    a1 = LD32(sp+52);
    if (cnd_) { goto L_08A8A578; }
    goto L_08A8A548;
L_08A8A548:;
    a0 = s7 + 0;
    v0 = func_08A90D00(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8A550;
L_08A8A550:;
    a2 = LD32(sp+40);
    a0 = s7 + 0;
    a1 = v0 + 0;
    ST32(sp+52, v0);
    v0 = func_08A90AE8(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8A564;
L_08A8A564:;
    s0 = v0 + 0;
    a1 = LD32(sp+40);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A574;
L_08A8A574:;
    ST32(sp+40, s0);
    goto L_08A8A578;
L_08A8A578:;
    cnd_ = (s32)s2 <= 0;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_08A8A590; }
    goto L_08A8A580;
L_08A8A580:;
    a2 = s2 + 0;
    a0 = s7 + 0;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8A58C;
L_08A8A58C:;
    ST32(sp+40, v0);
    goto L_08A8A590;
L_08A8A590:;
    cnd_ = (s32)s6 <= 0;
    a1 = LD32(sp+44);
    if (cnd_) { goto L_08A8A5A8; }
    goto L_08A8A598;
L_08A8A598:;
    a2 = s6 + 0;
    a0 = s7 + 0;
    v0 = func_08A90D00(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8A5A4;
L_08A8A5A4:;
    ST32(sp+44, v0);
    goto L_08A8A5A8;
L_08A8A5A8:;
    cnd_ = (s32)s1 <= 0;
    a1 = LD32(sp+44);
    if (cnd_) { goto L_08A8A5C0; }
    goto L_08A8A5B0;
L_08A8A5B0:;
    a2 = s1 + 0;
    a0 = s7 + 0;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8A5BC;
L_08A8A5BC:;
    ST32(sp+44, v0);
    goto L_08A8A5C0;
L_08A8A5C0:;
    cnd_ = (s32)s3 <= 0;
    a1 = LD32(sp+52);
    if (cnd_) { goto L_08A8A5D8; }
    goto L_08A8A5C8;
L_08A8A5C8:;
    a2 = s3 + 0;
    a0 = s7 + 0;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8A5D4;
L_08A8A5D4:;
    ST32(sp+52, v0);
    goto L_08A8A5D8;
L_08A8A5D8:;
    a1 = LD32(sp+40);
    a2 = LD32(sp+44);
    a0 = s7 + 0;
    v0 = func_08A90FB8(a0, a1, a2);
    goto L_08A8A5E8;
L_08A8A5E8:;
    s6 = LD32(v0+12);
    a1 = LD32(sp+52);
    ST32(v0+12, 0);
    a0 = v0 + 0;
    ST32(sp+56, v0);
    v0 = func_08A90F50(a0, a1);
    goto L_08A8A600;
L_08A8A600:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08A8AAE0; }
    goto L_08A8A608;
L_08A8A608:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_08A8A9F4; }
    goto L_08A8A610;
L_08A8A610:;
    a1 = LD32(sp+52);
    { u64 r_ = func_08A9142C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A618;
L_08A8A618:;
    a2 = D_08AE91B0 - (-28240);
    a2 = LD32(a2-28240);
    a3 = D_08AE91B4 - (-28236);
    a3 = LD32(a3-28236);
    a0 = v0 + 0;
    a1 = v1 + 0;
    s0 = v0 + 0;
    s1 = v1 + 0;
    { u64 r_ = func_08A93D1C(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A63C;
L_08A8A63C:;
    cnd_ = (s32)v0 <= 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8A908; }
    goto L_08A8A644;
L_08A8A644:;
    a2 = D_08AE91C8 - (-28216);
    a2 = LD32(a2-28216);
    a3 = D_08AE91CC - (-28212);
    a3 = LD32(a3-28212);
    a1 = s1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A65C;
L_08A8A65C:;
    s0 = v0 + 0;
    s1 = v1 + 0;
    s2 = v0 + 0;
    cnd_ = s6 != 0;
    s3 = v1 + 0;
    if (cnd_) { goto L_08A8A684; }
    goto L_08A8A670;
L_08A8A670:;
    a0 = s0 + 0;
    goto L_08A8A674;
L_08A8A674:;
    a1 = s1 + 0;
    { u64 r_ = func_08A93F54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A67C;
L_08A8A67C:;
    s2 = v0 + 0;
    s3 = v1 + 0;
    goto L_08A8A684;
L_08A8A684:;
    fp = 0x7ff00000u;
    goto L_08A8A688;
L_08A8A688:;
    a0 = s5 & fp;
    v0 = 0x7fe00000u;
    cnd_ = a0 == v0;
    ST32(sp+24, a0);
    if (cnd_) { goto L_08A8A85C; }
    goto L_08A8A698;
L_08A8A698:;
    v1 = LD32(sp+24);
    v0 = 0x3400000u;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A8A720; }
    goto L_08A8A6AC;
L_08A8A6AC:;
    a2 = D_08AE91B8 - (-28232);
    a2 = LD32(a2-28232);
    a3 = D_08AE91BC - (-28228);
    a3 = LD32(a3-28228);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_08A93C0C(a0, a1, a2, a3);
    goto L_08A8A6C8;
L_08A8A6C8:;
    cnd_ = (s32)v0 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8A71C; }
    goto L_08A8A6D0;
L_08A8A6D0:;
    a2 = D_08AE91C8 - (-28216);
    a2 = LD32(a2-28216);
    a3 = D_08AE91CC - (-28212);
    a3 = LD32(a3-28212);
    a1 = s1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A6E8;
L_08A8A6E8:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    v0 = func_08A93E80(a0, a1);
    goto L_08A8A6F4;
L_08A8A6F4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A6FC;
L_08A8A6FC:;
    s2 = v0 + 0;
    cnd_ = s6 != 0;
    s3 = v1 + 0;
    if (cnd_) { goto L_08A8A71C; }
    goto L_08A8A708;
L_08A8A708:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A93F54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A714;
L_08A8A714:;
    s2 = v0 + 0;
    s3 = v1 + 0;
    goto L_08A8A71C;
L_08A8A71C:;
    a0 = s4 + 0;
    goto L_08A8A720;
L_08A8A720:;
    a1 = s5 + 0;
    { u64 r_ = func_08A91134(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A728;
L_08A8A728:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A73C;
L_08A8A73C:;
    a0 = v0 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A750;
L_08A8A750:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    goto L_08A8A758;
L_08A8A758:;
    v0 = LD32(sp+24);
    a0 = 0x7ff00000u;
    s2 = s5 & a0;
    cnd_ = v0 == s2;
    if (cnd_) { a1 = s1 + 0; goto L_08A8A7A4; }
    goto L_08A8A76C;
L_08A8A76C:;
    a1 = LD32(sp+40);
    goto L_08A8A770;
L_08A8A770:;
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A778;
L_08A8A778:;
    a1 = LD32(sp+44);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A784;
L_08A8A784:;
    a1 = LD32(sp+52);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A790;
L_08A8A790:;
    a1 = LD32(sp+56);
    a0 = s7 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A79C;
L_08A8A79C:;
    v0 = LD32(sp+48);
    goto L_08A8A478;
L_08A8A7A4:;
    a0 = s0 + 0;
    v0 = func_08A93E80(a0, a1);
    goto L_08A8A7AC;
L_08A8A7AC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A7B4;
L_08A8A7B4:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A7C8;
L_08A8A7C8:;
    s0 = v0 + 0;
    cnd_ = s6 != 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_08A8A7E8; }
    goto L_08A8A7D4;
L_08A8A7D4:;
    cnd_ = s4 != 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08A8A7E8; }
    goto L_08A8A7DC;
L_08A8A7DC:;
    v0 = (v0 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8A834; }
    goto L_08A8A7E8;
L_08A8A7E8:;
    a2 = D_08AE91D0 - (-28208);
    a2 = LD32(a2-28208);
    a3 = D_08AE91D4 - (-28204);
    a3 = LD32(a3-28204);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8A804;
L_08A8A804:;
    cnd_ = (s32)v0 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8A344; }
    goto L_08A8A80C;
L_08A8A80C:;
    a2 = D_08AE91D8 - (-28200);
    a2 = LD32(a2-28200);
    a3 = D_08AE91DC - (-28196);
    a3 = LD32(a3-28196);
    a1 = s1 + 0;
    v0 = func_08A93B84(a0, a1, a2, a3);
    goto L_08A8A824;
L_08A8A824:;
    cnd_ = (s32)v0 <= 0;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_08A8A770; }
    goto L_08A8A82C;
L_08A8A82C:;
    goto L_08A8A348;
L_08A8A834:;
    a2 = D_08AE91E0 - (-28192);
    a2 = LD32(a2-28192);
    a3 = D_08AE91E4 - (-28188);
    a3 = LD32(a3-28188);
    a1 = v1 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8A84C;
L_08A8A84C:;
    cnd_ = (s32)v0 >= 0;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_08A8A770; }
    goto L_08A8A854;
L_08A8A854:;
    goto L_08A8A348;
L_08A8A85C:;
    v0 = s4 + 0;
    v1 = s5 + 0;
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = 0xfcb00000u;
    s5 = v0 + s5;
    a0 = s4 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_08A91134(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A880;
L_08A8A880:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A894;
L_08A8A894:;
    a0 = v0 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A8A8;
L_08A8A8A8:;
    s4 = v0 + 0;
    v0 = 0x7c9f0000u;
    s5 = v1 + 0;
    v0 = v0 | 0xffff;
    v1 = v1 & fp;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = 0x3500000u;
    if (cnd_) { goto L_08A8A900; }
    goto L_08A8A8C8;
L_08A8A8C8:;
    v1 = LD32(sp+36);
    v0 = 0x7fef0000u;
    v0 = v0 | 0xffff;
    cnd_ = v1 == v0;
    a0 = LD32(sp+32);
    if (cnd_) { goto L_08A8A8EC; }
    goto L_08A8A8DC;
L_08A8A8DC:;
    s5 = 0x7fef0000u;
    goto L_08A8A8E0;
L_08A8A8E0:;
    s5 = s5 | 0xffff;
    s4 = (u32)-1;
    goto L_08A8A76C;
L_08A8A8EC:;
    v0 = (u32)-1;
    cnd_ = a0 != v0;
    s5 = 0x7fef0000u;
    if (cnd_) { goto L_08A8A8E0; }
    goto L_08A8A8F8;
L_08A8A8F8:;
    v0 = 34;
    goto L_08A8A324;
L_08A8A900:;
    s5 = v0 + s5;
    goto L_08A8A758;
L_08A8A908:;
    cnd_ = s6 == 0;
    if (cnd_) { goto L_08A8A92C; }
    goto L_08A8A910;
L_08A8A910:;
    s0 = D_08AE91B8 - (-28232);
    s0 = LD32(s0-28232);
    s1 = D_08AE91BC - (-28228);
    s1 = LD32(s1-28228);
    s2 = s0 + 0;
    s3 = s1 + 0;
    goto L_08A8A684;
L_08A8A92C:;
    cnd_ = s4 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A8A948; }
    goto L_08A8A934;
L_08A8A934:;
    v0 = s5 + 0;
    v0 = (v0 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8A994; }
    goto L_08A8A944;
L_08A8A944:;
    v0 = 1;
    goto L_08A8A948;
L_08A8A948:;
    cnd_ = s4 == v0;
    if (cnd_) { goto L_08A8A978; }
    goto L_08A8A950;
L_08A8A950:;
    s0 = D_08AE91B8 - (-28232);
    s0 = LD32(s0-28232);
    s1 = D_08AE91BC - (-28228);
    s1 = LD32(s1-28228);
    s2 = D_08AE91C0 - (-28224);
    s2 = LD32(s2-28224);
    s3 = D_08AE91C4 - (-28220);
    s3 = LD32(s3-28220);
    fp = 0x7ff00000u;
    goto L_08A8A688;
L_08A8A978:;
    cnd_ = s5 != 0;
    if (cnd_) { goto L_08A8A950; }
    goto L_08A8A980;
L_08A8A980:;
    v0 = 34;
    goto L_08A8A984;
L_08A8A984:;
    s4 = 0 + 0;
    s5 = 0 + 0;
    ST32(s7, v0);
    goto L_08A8A338;
L_08A8A994:;
    a2 = D_08AE91B8 - (-28232);
    a2 = LD32(a2-28232);
    a3 = D_08AE91BC - (-28228);
    a3 = LD32(a3-28228);
    a1 = s1 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8A9AC;
L_08A8A9AC:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08A8A9DC; }
    goto L_08A8A9B4;
L_08A8A9B4:;
    a2 = D_08AE91C8 - (-28216);
    a2 = LD32(a2-28216);
    a3 = D_08AE91CC - (-28212);
    a3 = LD32(a3-28212);
    a0 = s0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8A9D0;
L_08A8A9D0:;
    s0 = v0 + 0;
    s1 = v1 + 0;
    goto L_08A8A670;
L_08A8A9DC:;
    s0 = D_08AE91C8 - (-28216);
    s0 = LD32(s0-28216);
    s1 = D_08AE91CC - (-28212);
    s1 = LD32(s1-28212);
    a0 = s0 + 0;
    goto L_08A8A674;
L_08A8A9F4:;
    cnd_ = s6 == 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08A8AAB0; }
    goto L_08A8A9FC;
L_08A8A9FC:;
    v1 = LD32(sp+60);
    v0 = (v0 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    cnd_ = v0 == v1;
    a0 = (u32)-1;
    if (cnd_) { goto L_08A8AA90; }
    goto L_08A8AA0C;
L_08A8AA0C:;
    v0 = s4 & 0x1;
    goto L_08A8AA10;
L_08A8AA10:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_08A8A348; }
    goto L_08A8AA18;
L_08A8AA18:;
    cnd_ = s6 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A8AA68; }
    goto L_08A8AA20;
L_08A8AA20:;
    a1 = s5 + 0;
    { u64 r_ = func_08A91134(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AA28;
L_08A8AA28:;
    a2 = v0 + 0;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AA3C;
L_08A8AA3C:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s4 = v0 + 0;
    s5 = v1 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AA58;
L_08A8AA58:;
    cnd_ = v0 != 0;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_08A8A348; }
    goto L_08A8AA60;
L_08A8AA60:;
    v0 = 34;
    goto L_08A8A984;
L_08A8AA68:;
    a1 = s5 + 0;
    { u64 r_ = func_08A91134(a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AA70;
L_08A8AA70:;
    a0 = v0 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AA84;
L_08A8AA84:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    goto L_08A8A344;
L_08A8AA90:;
    cnd_ = s4 != a0;
    v0 = s4 & 0x1;
    if (cnd_) { goto L_08A8AA10; }
    goto L_08A8AA98;
L_08A8AA98:;
    v0 = 0x7ff00000u;
    v1 = s5 & v0;
    v0 = 0x100000u;
    s5 = v1 + v0;
    s4 = 0 + 0;
    goto L_08A8A344;
L_08A8AAB0:;
    v0 = (v0 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    cnd_ = v0 != 0;
    v0 = s4 & 0x1;
    if (cnd_) { goto L_08A8AA10; }
    goto L_08A8AABC;
L_08A8AABC:;
    cnd_ = s4 != 0;
    a0 = 0x7ff00000u;
    if (cnd_) { goto L_08A8AA10; }
    goto L_08A8AAC4;
L_08A8AAC4:;
    v1 = s5 & a0;
    v0 = 0xfff00000u;
    v0 = v1 + v0;
    v1 = LD32(sp+60);
    s4 = (u32)-1;
    s5 = v0 | v1;
    goto L_08A8A344;
L_08A8AAE0:;
    cnd_ = s6 != 0;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_08A8A348; }
    goto L_08A8AAE8;
L_08A8AAE8:;
    cnd_ = s4 != 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08A8A348; }
    goto L_08A8AAF0;
L_08A8AAF0:;
    v0 = (v0 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    cnd_ = v0 != 0;
    a0 = s7 + 0;
    if (cnd_) { goto L_08A8A348; }
    goto L_08A8AAFC;
L_08A8AAFC:;
    a1 = LD32(sp+56);
    a2 = 1;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8AB08;
L_08A8AB08:;
    a1 = LD32(sp+52);
    a0 = v0 + 0;
    ST32(sp+56, v0);
    v0 = func_08A90F50(a0, a1);
    goto L_08A8AB18;
L_08A8AB18:;
    cnd_ = (s32)v0 > 0;
    a0 = 0x7ff00000u;
    if (cnd_) { goto L_08A8AAC4; }
    goto L_08A8AB20;
L_08A8AB20:;
    a1 = LD32(sp+40);
    goto L_08A8A348;
L_08A8AB28:;
    v0 = LD32(sp+16);
    s6 = 0 + 0;
    s1 = 0 + 0;
    s2 = 0 - v0;
    a2 = s2 + 0;
    goto L_08A8A4E8;
L_08A8AB40:;
    s5 = v0 + s5;
    goto L_08A8A444;
L_08A8AB48:;
    cnd_ = (s32)s2 >= 0;
    t0 = LD32(sp+24);
    if (cnd_) { goto L_08A8A448; }
    goto L_08A8AB50;
L_08A8AB50:;
    s2 = 0 - s2;
    v1 = s2 & 0xf;
    cnd_ = v1 == 0;
    if (cnd_) { s2 = (s2 & ~(0xfu << 0)) | ((0 & 0xf) << 0); goto L_08A8AB90; }
    goto L_08A8AB60;
L_08A8AB60:;
    v0 = D_08AE99C8 - (-26168);
    v0 = v0 - 26168;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a2 = LD32(v1);
    a3 = LD32(v1+4);
    a0 = s4 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AB84;
L_08A8AB84:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    s2 = (s2 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    goto L_08A8AB90;
L_08A8AB90:;
    cnd_ = s2 == 0;
    t0 = LD32(sp+24);
    if (cnd_) { goto L_08A8A448; }
    goto L_08A8AB98;
L_08A8AB98:;
    s2 = (u32)((s32)s2 >> 4);
    v0 = (s32)s2 < 32;
    cnd_ = v0 == 0;
    v0 = (s32)s2 < 2;
    if (cnd_) { goto L_08A8A980; }
    goto L_08A8ABA8;
L_08A8ABA8:;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8ABF4; }
    goto L_08A8ABB0;
L_08A8ABB0:;
    v0 = D_08AE9AB8 - (-25928);
    s3 = v0 - 25928;
    goto L_08A8ABB8;
L_08A8ABB8:;
    v0 = s2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = (u32)((s32)s2 >> 1); goto L_08A8ABE4; }
    goto L_08A8ABC4;
L_08A8ABC4:;
    a0 = LD32(s3);
    a1 = LD32(s3+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8ABD8;
L_08A8ABD8:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    s2 = (u32)((s32)s2 >> 1);
    goto L_08A8ABE4;
L_08A8ABE4:;
    v0 = (s32)s2 < 2;
    s0 = s0 + 1;
    cnd_ = v0 == 0;
    s3 = s3 + 8;
    if (cnd_) { goto L_08A8ABB8; }
    goto L_08A8ABF4;
L_08A8ABF4:;
    a0 = D_08AE9AB8 - (-25928);
    v1 = a0 - 25928;
    v0 = s0 << 3;
    v0 = v0 + v1;
    s2 = LD32(v0);
    s3 = LD32(v0+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    a0 = s2 + 0;
    ST32(sp+32, s4);
    ST32(sp+36, s5);
    a1 = s3 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AC28;
L_08A8AC28:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s4 = v0 + 0;
    s5 = v1 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AC44;
L_08A8AC44:;
    cnd_ = v0 != 0;
    t0 = LD32(sp+24);
    if (cnd_) { goto L_08A8A448; }
    goto L_08A8AC4C;
L_08A8AC4C:;
    a0 = LD32(sp+32);
    a1 = LD32(sp+36);
    s5 = 0 + 0;
    s4 = 1;
    a2 = a0 + 0;
    a3 = a1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AC68;
L_08A8AC68:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AC7C;
L_08A8AC7C:;
    a0 = v0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AC90;
L_08A8AC90:;
    cnd_ = v0 != 0;
    t0 = LD32(sp+24);
    if (cnd_) { goto L_08A8A448; }
    goto L_08A8AC98;
L_08A8AC98:;
    v0 = 34;
    goto L_08A8A984;
L_08A8ACA0:;
    s0 = s0 - 26168;
    v0 = v1 << 3;
    v0 = v0 + s0;
    a0 = LD32(v0);
    a1 = LD32(v0+4);
    v0 = LD32(sp+16);
    a2 = s4 + 0;
    a3 = s5 + 0;
    v0 = v0 - v1;
    ST32(sp+16, v0);
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8ACCC;
L_08A8ACCC:;
    a3 = v1 + 0;
    a0 = LD32(sp+16);
    a2 = a0 << 3;
    a2 = a2 + s0;
    a0 = LD32(a2);
    a1 = LD32(a2+4);
    a2 = v0 + 0;
    goto L_08A8ACE8;
L_08A8ACE8:;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8ACF0;
L_08A8ACF0:;
    s4 = v0 + 0;
    goto L_08A8ACF4;
L_08A8ACF4:;
    s5 = v1 + 0;
    goto L_08A89FE0;
L_08A8ACFC:;
    v0 = D_08AE99C8 - (-26168);
    v1 = a0 << 3;
    v0 = v0 - 26168;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = LD32(v1+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    goto L_08A8ACE8;
L_08A8AD20:;
    v1 = LD32(sp+16);
    v0 = (s32)v1 < -22;
    cnd_ = v0 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08A8A2C4; }
    goto L_08A8AD30;
L_08A8AD30:;
    v0 = D_08AE99C8 - (-26168);
    v1 = v1 << 3;
    v0 = v0 - 26168;
    v0 = v0 - v1;
    a2 = LD32(v0);
    a3 = LD32(v0+4);
    a0 = s4 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AD54;
L_08A8AD54:;
    s4 = v0 + 0;
    goto L_08A8ACF4;
L_08A8AD5C:;
    a2 = D_08AE91A8 - (-28248);
    a2 = LD32(a2-28248);
    a3 = D_08AE91AC - (-28244);
    a3 = LD32(a3-28244);
    a1 = v1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AD74;
L_08A8AD74:;
    a0 = s4 + 0;
    goto L_08A8A268;
L_08A8AD7C:;
    a0 = a2 + 0;
    a1 = a3 + 0;
    a2 = D_08AE91A8 - (-28248);
    a2 = LD32(a2-28248);
    a3 = D_08AE91AC - (-28244);
    a3 = LD32(a3-28244);
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AD98;
L_08A8AD98:;
    a2 = v0 + 0;
    a3 = v1 + 0;
    goto L_08A8A220;
L_08A8ADA4:;
    v0 = a3 | t1;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A89FE4; }
    goto L_08A8ADB0;
L_08A8ADB0:;
    ST32(sp+20, a1);
    goto L_08A89FE0;
L_08A8ADB8:;
    a0 = a0 + 1;
    ST32(sp+20, a0);
    a0 = (u32)(s32)LD_S8(a0);
    cnd_ = a0 == v0;
    if (cnd_) { a0 = LD32(sp+20); goto L_08A8ADB8; }
    goto L_08A8ADCC;
L_08A8ADCC:;
    v0 = a0 - 49;
    goto L_08A8A148;
L_08A8ADD4:;
    v1 = LD32(sp+20);
    v1 = v1 + 1;
    ST32(sp+20, v1);
    a0 = (u32)(s32)LD_S8(v1);
    goto L_08A8A128;
L_08A8ADE8:;
    v0 = LD32(sp+20);
    v0 = v0 + 1;
    ST32(sp+20, v0);
    cnd_ = s1 != 0;
    a0 = (u32)(s32)LD_S8(v0);
    if (cnd_) { goto L_08A8AF1C; }
    goto L_08A8ADFC;
L_08A8ADFC:;
    v0 = 48;
    cnd_ = a0 == v0;
    v1 = LD32(sp+20);
    if (cnd_) { goto L_08A8AF00; }
    goto L_08A8AE08;
L_08A8AE08:;
    v0 = a0 - 49;
    goto L_08A8AE0C;
L_08A8AE0C:;
    v0 = v0 < 0x9u;
    cnd_ = v0 == 0;
    v1 = a0 ^ 0x45;
    if (cnd_) { goto L_08A8A0D8; }
    goto L_08A8AE18;
L_08A8AE18:;
    fp = LD32(sp+20);
    t0 = a3 + 0;
    a2 = a0 - 48;
    a3 = 0 + 0;
    goto L_08A8AE28;
L_08A8AE28:;
    cnd_ = a2 == 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A8AE98; }
    goto L_08A8AE30;
L_08A8AE30:;
    v1 = 1;
    v0 = (s32)v1 < (s32)a3;
    cnd_ = v0 == 0;
    t0 = t0 + a3;
    if (cnd_) { goto L_08A8AE70; }
    goto L_08A8AE40;
L_08A8AE40:;
    v1 = a3 - 1;
    v0 = (s32)s1 < 9;
    goto L_08A8AE48;
L_08A8AE48:;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A8AEE0; }
    goto L_08A8AE50;
L_08A8AE50:;
    a0 = LD32(sp+24);
    v0 = a0 << 2;
    v0 = v0 + a0;
    v0 = v0 << 1;
    ST32(sp+24, v0);
    goto L_08A8AE64;
L_08A8AE64:;
    v1 = v1 - 1;
    goto L_08A8AE68;
L_08A8AE68:;
    cnd_ = v1 != 0;
    v0 = (s32)s1 < 9;
    if (cnd_) { goto L_08A8AE48; }
    goto L_08A8AE70;
L_08A8AE70:;
    v0 = (s32)s1 < 9;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A8AEC0; }
    goto L_08A8AE7C;
L_08A8AE7C:;
    v1 = LD32(sp+24);
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    v0 = v0 + a2;
    ST32(sp+24, v0);
    a3 = 0 + 0;
    goto L_08A8AE98;
L_08A8AE98:;
    a0 = LD32(sp+20);
    a0 = a0 + 1;
    ST32(sp+20, a0);
    a0 = (u32)(s32)LD_S8(a0);
    v0 = a0 - 48;
    v1 = v0 < 0xau;
    cnd_ = v1 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A8AE28; }
    goto L_08A8AEB8;
L_08A8AEB8:;
    v1 = a0 ^ 0x45;
    goto L_08A8A0D8;
L_08A8AEC0:;
    v0 = (s32)s1 < 17;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A8AE98; }
    goto L_08A8AECC;
L_08A8AECC:;
    v0 = s2 << 2;
    v0 = v0 + s2;
    v0 = v0 << 1;
    s2 = v0 + a2;
    goto L_08A8AE98;
L_08A8AEE0:;
    v0 = (s32)s1 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = v1 - 1; goto L_08A8AE68; }
    goto L_08A8AEEC;
L_08A8AEEC:;
    v0 = s2 << 2;
    v0 = v0 + s2;
    s2 = v0 << 1;
    goto L_08A8AE64;
L_08A8AEFC:;
    v1 = LD32(sp+20);
    goto L_08A8AF00;
L_08A8AF00:;
    v1 = v1 + 1;
    ST32(sp+20, v1);
    a0 = (u32)(s32)LD_S8(v1);
    cnd_ = a0 == v0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A8AEFC; }
    goto L_08A8AF14;
L_08A8AF14:;
    v0 = a0 - 49;
    goto L_08A8AE0C;
L_08A8AF1C:;
    a2 = a0 - 48;
    v0 = a2 < 0xau;
    cnd_ = v0 != 0;
    v1 = a0 ^ 0x45;
    if (cnd_) { goto L_08A8AE28; }
    goto L_08A8AF2C;
L_08A8AF2C:;
    v0 = a0 ^ 0x65;
    goto L_08A8A0DC;
L_08A8AF34:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+20); goto L_08A8A0A4; }
    goto L_08A8AF3C;
L_08A8AF3C:;
    v0 = s2 << 2;
    v0 = v0 + s2;
    v0 = v0 << 1;
    v0 = v0 + a0;
    s2 = v0 - 48;
    goto L_08A8A0A0;
L_08A8AF54:;
    v1 = 48;
    a0 = LD32(sp+20);
    goto L_08A8AF5C;
L_08A8AF5C:;
    a0 = a0 + 1;
    ST32(sp+20, a0);
    a2 = LD_U8(a0);
    v0 = (u32)(s32)(s8)a2;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(sp+20); goto L_08A8AF5C; }
    goto L_08A8AF74;
L_08A8AF74:;
    cnd_ = v0 != 0;
    a0 = (u32)(s32)(s8)a2;
    if (cnd_) { goto L_08A8A050; }
    goto L_08A8AF7C;
L_08A8AF7C:;
    v1 = LD32(sp+8);
    goto L_08A89FE4;
L_08A8AF84:;
    v0 = LD32(sp+20);
    v0 = v0 + 1;
    ST32(sp+20, v0);
    goto L_08A89F8C;
}

/* 08A8AF94 */
u64 func_08A8AF94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8AF94:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A8AFB0;
L_08A8AFB0:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_08A89F40(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8AFC0;
L_08A8AFC0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A8AFD4 */
rv_t func_08A8AFD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8AFD4:;
    sp = sp - 16;
    v0 = D_08AE9044 - (-28604);
    t7 = a1 + 0;
    s0 = a0 + 0;
    t9 = a2 + 0;
    a0 = v0 - 28604;
    t1 = a1 + 0;
    t8 = 0 + 0;
    goto L_08A8AFF8;
L_08A8AFF8:;
    t0 = (u32)(s32)LD_S8(t1);
    v1 = t0 + a0;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    t1 = t1 + 1;
    if (cnd_) { goto L_08A8AFF8; }
    goto L_08A8B010;
L_08A8B010:;
    v0 = 45;
    cnd_ = t0 == v0;
    v0 = 43;
    if (cnd_) { goto L_08A8B18C; }
    goto L_08A8B01C;
L_08A8B01C:;
    cnd_ = t0 == v0;
    if (cnd_) { t0 = (u32)(s32)LD_S8(t1); goto L_08A8B184; }
    goto L_08A8B024;
L_08A8B024:;
    v1 = a3 ^ 0x10;
    v1 = v1 < 0x1u;
    v0 = a3 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = 48;
    if (cnd_) { goto L_08A8B044; }
    goto L_08A8B03C;
L_08A8B03C:;
    cnd_ = t0 == v0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(t1); goto L_08A8B158; }
    goto L_08A8B044;
L_08A8B044:;
    cnd_ = a3 != 0;
    v0 = 0x7fff0000u;
    if (cnd_) { goto L_08A8B060; }
    goto L_08A8B04C;
L_08A8B04C:;
    a3 = 8;
    v1 = t0 ^ 0x30;
    v0 = 10;
    if (v1 != 0) a3 = v0;
    v0 = 0x7fff0000u;
    goto L_08A8B060;
L_08A8B060:;
    v0 = v0 | 0xffff;
    v1 = 0x80000000u;
    if (t8 == 0) v1 = v0;
    { u32 x_ = v1, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = D_08AE9044 - (-28604);
    cnd_ = a3 == 0;
    if (cnd_) { rs_break(0x7, 0x08a8b078); goto L_08A8B07C; }
    goto L_08A8B07C;
L_08A8B07C:;
    t6 = v0 - 28604;
    t2 = 0 + 0;
    t3 = 0 + 0;
    t5 = hi;
    t4 = lo;
    goto L_08A8B090;
L_08A8B090:;
    v0 = t0 + t6;
    v1 = LD_U8(v0);
    a2 = t0 - 87;
    a1 = t0 - 55;
    v0 = v1 & 0x4;
    a0 = v1 & 0x1;
    t0 = t0 - 48;
    cnd_ = v0 != 0;
    v1 = v1 & 0x3;
    if (cnd_) { goto L_08A8B0C0; }
    goto L_08A8B0B4;
L_08A8B0B4:;
    t0 = a1 + 0;
    cnd_ = v1 == 0;
    if (a0 == 0) t0 = a2;
    if (cnd_) { goto L_08A8B110; }
    goto L_08A8B0C0;
L_08A8B0C0:;
    v0 = t2 ^ t4;
    a1 = t3 >> 31;
    a0 = t4 < t2;
    a2 = (s32)t5 < (s32)t0;
    v0 = v0 < 0x1u;
    v1 = (s32)t0 < (s32)a3;
    a1 = a1 | a0;
    cnd_ = v1 == 0;
    v0 = v0 & a2;
    if (cnd_) { goto L_08A8B110; }
    goto L_08A8B0E4;
L_08A8B0E4:;
    cnd_ = a1 != 0;
    t3 = (u32)-1;
    if (cnd_) { goto L_08A8B104; }
    goto L_08A8B0EC;
L_08A8B0EC:;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = (u32)(s32)LD_S8(t1); goto L_08A8B108; }
    goto L_08A8B0F4;
L_08A8B0F4:;
    { s64 p_ = (s64)(s32)t2 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t3 = 1;
    t2 = lo;
    t2 = t2 + t0;
    goto L_08A8B104;
L_08A8B104:;
    t0 = (u32)(s32)LD_S8(t1);
    goto L_08A8B108;
L_08A8B108:;
    t1 = t1 + 1;
    goto L_08A8B090;
L_08A8B110:;
    v0 = 0 - t2;
    cnd_ = (s32)t3 < 0;
    if (t8 != 0) t2 = v0;
    if (cnd_) { goto L_08A8B13C; }
    goto L_08A8B11C;
L_08A8B11C:;
    cnd_ = t9 == 0;
    v0 = t1 - 1;
    if (cnd_) { goto L_08A8B12C; }
    goto L_08A8B124;
L_08A8B124:;
    if (t3 != 0) t7 = v0;
    ST32(t9, t7);
    goto L_08A8B12C;
L_08A8B12C:;
    v0 = t2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A8B13C:;
    v1 = 34;
    v0 = 0x7fff0000u;
    ST32(s0, v1);
    v0 = v0 | 0xffff;
    t2 = 0x80000000u;
    if (t8 == 0) t2 = v0;
    goto L_08A8B11C;
L_08A8B158:;
    v1 = v0 ^ 0x58;
    v0 = v0 ^ 0x78;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8B044; }
    goto L_08A8B174;
L_08A8B174:;
    t0 = (u32)(s32)LD_S8(t1+1);
    a3 = 16;
    t1 = t1 + 2;
    goto L_08A8B044;
L_08A8B184:;
    t1 = t1 + 1;
    goto L_08A8B024;
L_08A8B18C:;
    t0 = (u32)(s32)LD_S8(t1);
    t8 = 1;
    goto L_08A8B184;
}

/* 08A8B198 */
u64 func_08A8B198(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8B198:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A8B1BC;
L_08A8B1BC:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    { rv_t r_ = func_08A8AFD4(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8B1D0;
L_08A8B1D0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A8B1E8 */
void func_08A8B1E8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A8B1E8:;
    v0 = LD_U8(a0);
    a3 = a0 + 0;
    cnd_ = v0 == 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08A8B238; }
    goto L_08A8B1F8;
L_08A8B1F8:;
    a1 = v0 + 0;
    v0 = D_08AE9044 - (-28604);
    t0 = v0 - 28604;
    goto L_08A8B204;
L_08A8B204:;
    a1 = (u32)(s32)(s8)a1;
    v0 = a1 + t0;
    v1 = LD_U8(v0);
    a0 = (v1 >> 1) & 0x1;
    a0 = a0 << 5;
    v1 = v1 & 0x2;
    cnd_ = v1 == 0;
    a0 = a1 - a0;
    if (cnd_) { goto L_08A8B228; }
    goto L_08A8B224;
L_08A8B224:;
    ST8(a2, a0);
    goto L_08A8B228;
L_08A8B228:;
    a2 = a2 + 1;
    v0 = LD_U8(a2);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A8B204; }
    goto L_08A8B238;
L_08A8B238:;
    v0 = a3 + 0;
    return;
}

/* 08A8B240 */
u32 func_08A8B240(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
L_08A8B240:;
    v1 = D_08AE9044 - (-28604);
    v1 = v1 - 28604;
    v1 = a0 + v1;
    v0 = a0 + 0;
    a0 = LD_U8(v1);
    a1 = v0 + 32;
    a0 = a0 & 0x1;
    if (a0 != 0) v0 = a1;
    return v0;
}

/* 08A8B264 */
u32 func_08A8B264(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A8B264:;
    v0 = D_08AE9044 - (-28604);
    v0 = v0 - 28604;
    v1 = a0 < 0xffu;
    a1 = a0 + v0;
    a2 = a0 + 32;
    cnd_ = v1 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08A8B290; }
    goto L_08A8B280;
L_08A8B280:;
    v0 = LD_U8(a1);
    v0 = v0 & 0x1;
    if (v0 != 0) a0 = a2;
    v0 = a0 + 0;
    goto L_08A8B290;
L_08A8B290:;
    return v0;
}

/* 08A8B298 */
rv_t func_08A8B298(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8B298:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a1+8);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A8B2CC; }
    goto L_08A8B2B4;
L_08A8B2B4:;
    ST32(a1+4, 0);
    goto L_08A8B2B8;
L_08A8B2B8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A8B2CC:;
    { rv_t r_ = func_08A9004C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8B2D4;
L_08A8B2D4:;
    ST32(s0+4, 0);
    v1 = v0 + 0;
    ST32(s0+8, 0);
    goto L_08A8B2B8;
}

/* 08A8B2E4 */
rv_t func_08A8B2E4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1136] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1136);
L_08A8B2E4:;
    sp = sp - 1136;
    v1 = sp + 96;
    a3 = 1024;
    s1 = a0 + 0;
    v0 = LD_U16(a0+12);
    t0 = LD_U16(a0+14);
    t1 = LD32(a0+28);
    t2 = LD32(a0+36);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    a0 = sp + 0;
    ST16(sp+12, v0);
    ST16(sp+14, t0);
    ST32(sp+28, t1);
    ST32(sp+36, t2);
    ST32(sp+16, v1);
    ST32(sp+20, a3);
    ST32(sp, v1);
    ST32(sp+8, a3);
    ST32(sp+24, 0);
    { rv_t r_ = func_08A8B38C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8B340;
L_08A8B340:;
    s0 = v0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A8B35C; }
    goto L_08A8B34C;
L_08A8B34C:;
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8B354;
L_08A8B354:;
    v1 = (u32)-1;
    if (v0 != 0) s0 = v1;
    goto L_08A8B35C;
L_08A8B35C:;
    v1 = LD_U16(sp+12);
    v1 = v1 & 0x40;
    cnd_ = v1 == 0;
    v0 = s0 + 0;
    if (cnd_) { goto L_08A8B378; }
    goto L_08A8B36C;
L_08A8B36C:;
    v1 = LD_U16(s1+12);
    v1 = v1 | 0x40;
    ST16(s1+12, v1);
    goto L_08A8B378;
L_08A8B378:;
    sp = sp + 1136;
    return (rv_t){ v0, v1, f0 };
}

/* 08A8B38C */
rv_t func_08A8B38C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8B38C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A8B3B0;
L_08A8B3B0:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A8B3F0; }
    goto L_08A8B3BC;
L_08A8B3BC:;
    v0 = func_08A870E0();
    goto L_08A8B3C4;
L_08A8B3C4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    { rv_t r_ = func_08A8B408(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8B3D8;
L_08A8B3D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A8B3F0:;
    v0 = func_08A870E0();
    goto L_08A8B3F8;
L_08A8B3F8:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A8B400;
L_08A8B400:;
    goto L_08A8B3BC;
}

/* 08A8B408 */
rv_t func_08A8B408(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[656] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 656);
L_08A8B408:;
    sp = sp - 656;
    s0 = a2 + 0;
    ST32(sp+544, a1);
    ST32(sp+540, a0);
    ST32(sp+548, a3);
    v0 = func_08A90438();
    goto L_08A8B448;
L_08A8B448:;
    a0 = LD32(sp+544);
    v0 = LD32(v0);
    ST32(sp+576, 0);
    v1 = LD_U16(a0+12);
    ST32(sp+564, v0);
    a0 = 0 + 0;
    a1 = 0 + 0;
    v0 = v1 & 0x8;
    ST32(sp+568, a0);
    ST32(sp+572, a1);
    ST32(sp+588, 0);
    cnd_ = v0 == 0;
    ST32(sp+592, 0);
    if (cnd_) { goto L_08A8B48C; }
    goto L_08A8B47C;
L_08A8B47C:;
    a1 = LD32(sp+544);
    v0 = LD32(a1+16);
    cnd_ = v0 != 0;
    v1 = v1 & 0x1a;
    if (cnd_) { goto L_08A8B4A8; }
    goto L_08A8B48C;
L_08A8B48C:;
    a0 = LD32(sp+544);
    v0 = func_08A8E83C(a0);
    goto L_08A8B494;
L_08A8B494:;
    cnd_ = v0 != 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A8BA88; }
    goto L_08A8B49C;
L_08A8B49C:;
    a2 = LD32(sp+544);
    v1 = LD_U16(a2+12);
    v1 = v1 & 0x1a;
    goto L_08A8B4A8;
L_08A8B4A8:;
    v0 = 10;
    cnd_ = v1 == v0;
    v1 = LD32(sp+544);
    if (cnd_) { goto L_08A8CE00; }
    goto L_08A8B4B4;
L_08A8B4B4:;
    s2 = sp + 64;
    ST32(sp+48, s2);
    s3 = s0 + 0;
    ST32(sp+56, 0);
    ST32(sp+556, 0);
    ST32(sp+52, 0);
    goto L_08A8B4CC;
L_08A8B4CC:;
    a2 = LD_U8(s3);
    goto L_08A8B4D0;
L_08A8B4D0:;
    v0 = (u32)(s32)(s8)a2;
    v1 = v0 ^ 0x25;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    s4 = s3 + 0;
    if (cnd_) { goto L_08A8B510; }
    goto L_08A8B4EC;
L_08A8B4EC:;
    s3 = s3 + 1;
    goto L_08A8B4F0;
L_08A8B4F0:;
    a2 = LD_U8(s3);
    v0 = (u32)(s32)(s8)a2;
    v1 = v0 ^ 0x25;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { s3 = s3 + 1; goto L_08A8B4F0; }
    goto L_08A8B510;
L_08A8B510:;
    s1 = s3 - s4;
    cnd_ = s1 == 0;
    v0 = (u32)(s32)(s8)a2;
    if (cnd_) { goto L_08A8B55C; }
    goto L_08A8B51C;
L_08A8B51C:;
    ST32(s2+4, s1);
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s4);
    v0 = v0 + 1;
    v1 = v1 + s1;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8CDE4; }
    goto L_08A8B548;
L_08A8B548:;
    a0 = LD32(sp+556);
    goto L_08A8B54C;
L_08A8B54C:;
    a2 = LD_U8(s3);
    a0 = a0 + s1;
    ST32(sp+556, a0);
    v0 = (u32)(s32)(s8)a2;
    goto L_08A8B55C;
L_08A8B55C:;
    cnd_ = v0 == 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A8CDAC; }
    goto L_08A8B564;
L_08A8B564:;
    a2 = LD_U8(s3);
    s5 = (u32)-1;
    ST32(sp+552, 0);
    ST32(sp+580, 0);
    ST32(sp+560, 0);
    ST8(sp+16, 0);
    goto L_08A8B57C;
L_08A8B57C:;
    s7 = (u32)(s32)(s8)a2;
    s3 = s3 + 1;
    goto L_08A8B584;
L_08A8B584:;
    v1 = s7 - 32;
    goto L_08A8B588;
L_08A8B588:;
    v0 = v1 < 0x59u;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A8CD98; }
    goto L_08A8B594;
L_08A8B594:;
    v1 = D_08AE931C - (-27876);
    v1 = v1 - 27876;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A8B5ACu: goto L_08A8B5AC; case 0x08A8B5CCu: goto L_08A8B5CC; case 0x08A8B5E0u: goto L_08A8B5E0; case 0x08A8B604u: goto L_08A8B604; case 0x08A8B618u: goto L_08A8B618; case 0x08A8B624u: goto L_08A8B624; case 0x08A8B698u: goto L_08A8B698; case 0x08A8B6ACu: goto L_08A8B6AC; case 0x08A8B6E4u: goto L_08A8B6E4; case 0x08A8B6F0u: goto L_08A8B6F0; case 0x08A8C62Cu: goto L_08A8C62C; case 0x08A8C63Cu: goto L_08A8C63C; case 0x08A8C648u: goto L_08A8C648; case 0x08A8C6D4u: goto L_08A8C6D4; case 0x08A8C6E0u: goto L_08A8C6E0; case 0x08A8C768u: goto L_08A8C768; case 0x08A8C818u: goto L_08A8C818; case 0x08A8C89Cu: goto L_08A8C89C; case 0x08A8CB04u: goto L_08A8CB04; case 0x08A8CB14u: goto L_08A8CB14; case 0x08A8CB48u: goto L_08A8CB48; case 0x08A8CBE4u: goto L_08A8CBE4; case 0x08A8CC1Cu: goto L_08A8CC1C; case 0x08A8CC2Cu: goto L_08A8CC2C; case 0x08A8CD98u: goto L_08A8CD98; case 0x08A8CDD8u: goto L_08A8CDD8; default: rs_break(0, 0x08a8b5a4); }
L_08A8B5AC:;
    v0 = (u32)(s32)LD_S8(sp+16);
    cnd_ = v0 != 0;
    a2 = LD_U8(s3);
    if (cnd_) { goto L_08A8B57C; }
    goto L_08A8B5B8;
L_08A8B5B8:;
    v1 = 32;
    goto L_08A8B5BC;
L_08A8B5BC:;
    ST8(sp+16, v1);
    goto L_08A8B57C;
L_08A8B5C4:;
    a2 = LD_U8(s3);
    goto L_08A8B57C;
L_08A8B5CC:;
    a1 = LD32(sp+552);
    a2 = LD_U8(s3);
    a1 = a1 | 0x1;
    goto L_08A8B5D8;
L_08A8B5D8:;
    ST32(sp+552, a1);
    goto L_08A8B57C;
L_08A8B5E0:;
    v0 = LD32(sp+548);
    a2 = LD32(sp+548);
    v0 = LD32(v0);
    a2 = a2 + 4;
    ST32(sp+548, a2);
    cnd_ = (s32)v0 >= 0;
    ST32(sp+560, v0);
    if (cnd_) { goto L_08A8B5C4; }
    goto L_08A8B5FC;
L_08A8B5FC:;
    v0 = 0 - v0;
    ST32(sp+560, v0);
    goto L_08A8B604;
L_08A8B604:;
    v0 = LD32(sp+552);
    a2 = LD_U8(s3);
    v0 = v0 | 0x4;
    goto L_08A8B610;
L_08A8B610:;
    ST32(sp+552, v0);
    goto L_08A8B57C;
L_08A8B618:;
    a2 = LD_U8(s3);
    v1 = 43;
    goto L_08A8B5BC;
L_08A8B624:;
    s7 = (u32)(s32)LD_S8(s3);
    v0 = 42;
    cnd_ = s7 == v0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A8B678; }
    goto L_08A8B634;
L_08A8B634:;
    v0 = s7 - 48;
    v0 = v0 < 0xau;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8B66C; }
    goto L_08A8B644;
L_08A8B644:;
    v0 = s0 << 2;
    v0 = v0 + s0;
    v0 = v0 << 1;
    v0 = v0 + s7;
    s7 = (u32)(s32)LD_S8(s3);
    s0 = v0 - 48;
    v0 = s7 - 48;
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A8B644; }
    goto L_08A8B66C;
L_08A8B66C:;
    v0 = (u32)-1;
    s5 = (s32)s0 > (s32)v0 ? s0 : v0;
    goto L_08A8B584;
L_08A8B678:;
    v0 = LD32(sp+548);
    s5 = LD32(v0);
    v1 = v0 + 4;
    cnd_ = (s32)s5 >= 0;
    ST32(sp+548, v1);
    if (cnd_) { goto L_08A8B5C4; }
    goto L_08A8B68C;
L_08A8B68C:;
    a2 = LD_U8(s3);
    s5 = (u32)-1;
    goto L_08A8B57C;
L_08A8B698:;
    a0 = LD32(sp+552);
    a2 = LD_U8(s3);
    a0 = a0 | 0x80;
    goto L_08A8B6A4;
L_08A8B6A4:;
    ST32(sp+552, a0);
    goto L_08A8B57C;
L_08A8B6AC:;
    s0 = 0 + 0;
    goto L_08A8B6B0;
L_08A8B6B0:;
    v0 = s0 << 2;
    v0 = v0 + s0;
    v0 = v0 << 1;
    v0 = v0 + s7;
    s7 = (u32)(s32)LD_S8(s3);
    s0 = v0 - 48;
    s3 = s3 + 1;
    v0 = s7 - 48;
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    ST32(sp+560, s0);
    if (cnd_) { goto L_08A8B6B0; }
    goto L_08A8B6DC;
L_08A8B6DC:;
    v1 = s7 - 32;
    goto L_08A8B588;
L_08A8B6E4:;
    a1 = LD32(sp+552);
    a1 = a1 | 0x10;
    ST32(sp+552, a1);
    goto L_08A8B6F0;
L_08A8B6F0:;
    a2 = LD32(sp+552);
    v0 = a2 & 0x20;
    cnd_ = v0 == 0;
    a0 = LD32(sp+552);
    if (cnd_) { goto L_08A8C5D8; }
    goto L_08A8B700;
L_08A8B700:;
    v0 = LD32(sp+548);
    v0 = v0 + 7;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    s0 = LD32(v0);
    s1 = LD32(v0+4);
    v1 = v0 + 8;
    ST32(sp+548, v1);
    goto L_08A8B71C;
L_08A8B71C:;
    cnd_ = (s32)s1 < 0;
    v1 = 45;
    if (cnd_) { goto L_08A8C5C0; }
    goto L_08A8B724;
L_08A8B724:;
    a1 = 1;
    goto L_08A8B728;
L_08A8B728:;
    a0 = LD32(sp+552);
    a2 = LD32(sp+552);
    v1 = s0 | s1;
    v0 = 0 < s5;
    v1 = 0 < v1;
    v1 = v1 | v0;
    a0 = (a0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    v0 = (s32)s5 < 0;
    if (v0 == 0) a2 = a0;
    ST32(sp+580, s5);
    s4 = sp + 476;
    cnd_ = v1 == 0;
    ST32(sp+552, a2);
    if (cnd_) { goto L_08A8C598; }
    goto L_08A8B75C;
L_08A8B75C:;
    v0 = 1;
    cnd_ = a1 == v0;
    v0 = (s32)a1 < 2;
    if (cnd_) { goto L_08A8C518; }
    goto L_08A8B768;
L_08A8B768:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08A8C4C0; }
    goto L_08A8B770;
L_08A8B770:;
    cnd_ = a1 == v0;
    a1 = LD32(sp+588);
    if (cnd_) { goto L_08A8C488; }
    goto L_08A8B778;
L_08A8B778:;
    v0 = D_08AE92C0 - (-27968);
    goto L_08A8B77C;
L_08A8B77C:;
    s4 = v0 - 27968;
    goto L_08A8B780;
L_08A8B780:;
    a0 = s4 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8B788;
L_08A8B788:;
    s6 = v0 + 0;
    goto L_08A8B78C;
L_08A8B78C:;
    v0 = LD32(sp+580);
    goto L_08A8B790;
L_08A8B790:;
    v1 = LD_U8(sp+16);
    v0 = (s32)s6 > (s32)v0 ? s6 : v0;
    cnd_ = v1 == 0;
    ST32(sp+584, v0);
    if (cnd_) { goto L_08A8C46C; }
    goto L_08A8B7A0;
L_08A8B7A0:;
    v0 = v0 + 1;
    ST32(sp+584, v0);
    goto L_08A8B7A8;
L_08A8B7A8:;
    a2 = LD32(sp+552);
    fp = a2 & 0x84;
    cnd_ = fp != 0;
    v0 = (u32)(s32)(s8)v1;
    if (cnd_) { goto L_08A8B854; }
    goto L_08A8B7B8;
L_08A8B7B8:;
    v0 = LD32(sp+560);
    a0 = LD32(sp+584);
    s0 = v0 - a0;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8B850; }
    goto L_08A8B7CC;
L_08A8B7CC:;
    cnd_ = v0 != 0;
    a1 = D_08AE92A0 - (-28000);
    if (cnd_) { goto L_08A8B818; }
    goto L_08A8B7D4;
L_08A8B7D4:;
    s5 = a1 - 28000;
    s1 = 16;
    ST32(s2+4, s1);
    goto L_08A8B7E0;
L_08A8B7E0:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s5);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8C450; }
    goto L_08A8B808;
L_08A8B808:;
    s0 = s0 - 16;
    goto L_08A8B80C;
L_08A8B80C:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s1); goto L_08A8B7E0; }
    goto L_08A8B818;
L_08A8B818:;
    ST32(s2+4, s0);
    a2 = D_08AE92A0 - (-28000);
    v0 = a2 - 28000;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + s0;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8C434; }
    goto L_08A8B84C;
L_08A8B84C:;
    v1 = LD_U8(sp+16);
    goto L_08A8B850;
L_08A8B850:;
    v0 = (u32)(s32)(s8)v1;
    goto L_08A8B854;
L_08A8B854:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+552);
    if (cnd_) { goto L_08A8C3CC; }
    goto L_08A8B85C;
L_08A8B85C:;
    v0 = 1;
    ST32(s2+4, v0);
    v1 = sp + 16;
    a0 = LD32(sp+52);
    v0 = LD32(sp+56);
    ST32(s2, v1);
    a0 = a0 + 1;
    v0 = v0 + 1;
    v1 = (s32)a0 < 8;
    ST32(sp+56, v0);
    s2 = s2 + 8;
    cnd_ = v1 == 0;
    ST32(sp+52, a0);
    if (cnd_) { goto L_08A8C3AC; }
    goto L_08A8B890;
L_08A8B890:;
    v0 = 128;
    goto L_08A8B894;
L_08A8B894:;
    cnd_ = fp == v0;
    if (cnd_) { a0 = LD32(sp+560); goto L_08A8C2E8; }
    goto L_08A8B89C;
L_08A8B89C:;
    a2 = LD32(sp+580);
    goto L_08A8B8A0;
L_08A8B8A0:;
    s0 = a2 - s6;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8B928; }
    goto L_08A8B8AC;
L_08A8B8AC:;
    cnd_ = v0 != 0;
    fp = D_08AE92B0 - (-27984);
    if (cnd_) { goto L_08A8B8F8; }
    goto L_08A8B8B4;
L_08A8B8B4:;
    s5 = fp - 27984;
    s1 = 16;
    ST32(s2+4, s1);
    goto L_08A8B8C0;
L_08A8B8C0:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s5);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8C2CC; }
    goto L_08A8B8E8;
L_08A8B8E8:;
    s0 = s0 - 16;
    goto L_08A8B8EC;
L_08A8B8EC:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s1); goto L_08A8B8C0; }
    goto L_08A8B8F8;
L_08A8B8F8:;
    ST32(s2+4, s0);
    v0 = fp - 27984;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + s0;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8C2B0; }
    goto L_08A8B928;
L_08A8B928:;
    v1 = LD32(sp+552);
    goto L_08A8B92C;
L_08A8B92C:;
    v0 = v1 & 0x100;
    cnd_ = v0 != 0;
    v0 = (s32)s7 < 102;
    if (cnd_) { goto L_08A8BB10; }
    goto L_08A8B938;
L_08A8B938:;
    ST32(s2+4, s6);
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s4);
    v0 = v0 + 1;
    v1 = v1 + s6;
    a0 = (s32)v0 < 8;
    s2 = s2 + 8;
    ST32(sp+56, v1);
    ST32(sp+52, v0);
    goto L_08A8B960;
L_08A8B960:;
    cnd_ = a0 == 0;
    a0 = LD32(sp+544);
    if (cnd_) { goto L_08A8BAF4; }
    goto L_08A8B968;
L_08A8B968:;
    a2 = LD32(sp+552);
    goto L_08A8B96C;
L_08A8B96C:;
    v0 = a2 & 0x4;
    cnd_ = v0 == 0;
    v1 = LD32(sp+560);
    if (cnd_) { goto L_08A8BA0C; }
    goto L_08A8B978;
L_08A8B978:;
    v0 = LD32(sp+560);
    v1 = LD32(sp+584);
    s0 = v0 - v1;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8BA08; }
    goto L_08A8B98C;
L_08A8B98C:;
    cnd_ = v0 != 0;
    a0 = D_08AE92A0 - (-28000);
    if (cnd_) { goto L_08A8B9D8; }
    goto L_08A8B994;
L_08A8B994:;
    s4 = a0 - 28000;
    s1 = 16;
    ST32(s2+4, s1);
    goto L_08A8B9A0;
L_08A8B9A0:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s4);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8BAD8; }
    goto L_08A8B9C8;
L_08A8B9C8:;
    s0 = s0 - 16;
    goto L_08A8B9CC;
L_08A8B9CC:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s1); goto L_08A8B9A0; }
    goto L_08A8B9D8;
L_08A8B9D8:;
    ST32(s2+4, s0);
    a1 = D_08AE92A0 - (-28000);
    v0 = a1 - 28000;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + s0;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8BABC; }
    goto L_08A8BA08;
L_08A8BA08:;
    v1 = LD32(sp+560);
    goto L_08A8BA0C;
L_08A8BA0C:;
    a2 = LD32(sp+584);
    a0 = LD32(sp+556);
    v0 = (s32)a2 > (s32)v1 ? a2 : v1;
    v1 = LD32(sp+56);
    a0 = a0 + v0;
    cnd_ = v1 != 0;
    ST32(sp+556, a0);
    if (cnd_) { goto L_08A8BA48; }
    goto L_08A8BA28;
L_08A8BA28:;
    a1 = LD32(sp+592);
    goto L_08A8BA2C;
L_08A8BA2C:;
    ST32(sp+52, 0);
    cnd_ = a1 == 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8B4CC; }
    goto L_08A8BA38;
L_08A8BA38:;
    a0 = a1 + 0;
    { rv_t r_ = func_088F9A14(a0, a1, a2, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BA40;
L_08A8BA40:;
    ST32(sp+592, 0);
    goto L_08A8B4CC;
L_08A8BA48:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BA54;
L_08A8BA54:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+592); goto L_08A8BA2C; }
    goto L_08A8BA5C;
L_08A8BA5C:;
    a2 = LD32(sp+592);
    goto L_08A8BA60;
L_08A8BA60:;
    cnd_ = a2 == 0;
    v1 = LD32(sp+544);
    if (cnd_) { goto L_08A8BA74; }
    goto L_08A8BA68;
L_08A8BA68:;
    a0 = a2 + 0;
    { rv_t r_ = func_088F9A14(a0, a1, a2, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BA70;
L_08A8BA70:;
    v1 = LD32(sp+544);
    goto L_08A8BA74;
L_08A8BA74:;
    a0 = LD32(sp+556);
    v0 = LD_U16(v1+12);
    v1 = (u32)-1;
    v0 = v0 & 0x40;
    if (v0 == 0) v1 = a0;
    goto L_08A8BA88;
L_08A8BA88:;
    v0 = v1 + 0;
    sp = sp + 656;
    return (rv_t){ v0, v1, f0 };
L_08A8BABC:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BAC8;
L_08A8BAC8:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+560);
    if (cnd_) { goto L_08A8BA0C; }
    goto L_08A8BAD0;
L_08A8BAD0:;
    a2 = LD32(sp+592);
    goto L_08A8BA60;
L_08A8BAD8:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BAE4;
L_08A8BAE4:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BAEC;
L_08A8BAEC:;
    s0 = s0 - 16;
    goto L_08A8B9CC;
L_08A8BAF4:;
    a1 = sp + 48;
    s2 = sp + 64;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BB00;
L_08A8BB00:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+552); goto L_08A8B96C; }
    goto L_08A8BB08;
L_08A8BB08:;
    a2 = LD32(sp+592);
    goto L_08A8BA60;
L_08A8BB10:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+528);
    if (cnd_) { goto L_08A8C084; }
    goto L_08A8BB18;
L_08A8BB18:;
    a0 = LD32(sp+568);
    a1 = LD32(sp+572);
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8BB2C;
L_08A8BB2C:;
    cnd_ = v0 != 0;
    a1 = LD32(sp+532);
    if (cnd_) { goto L_08A8BCA0; }
    goto L_08A8BB34;
L_08A8BB34:;
    s0 = 1;
    ST32(s2+4, s0);
    v0 = D_08AE92DC - (-27940);
    v0 = v0 - 27940;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + 1;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8BC84; }
    goto L_08A8BB6C;
L_08A8BB6C:;
    v0 = LD32(sp+532);
    goto L_08A8BB70;
L_08A8BB70:;
    v1 = LD32(sp+528);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s2+4, s0); goto L_08A8BB94; }
    goto L_08A8BB80;
L_08A8BB80:;
    a0 = LD32(sp+552);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    a2 = LD32(sp+552);
    if (cnd_) { goto L_08A8B96C; }
    goto L_08A8BB90;
L_08A8BB90:;
    ST32(s2+4, s0);
    goto L_08A8BB94;
L_08A8BB94:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    a1 = LD32(sp+564);
    v0 = v0 + 1;
    v1 = v1 + 1;
    a0 = (s32)v0 < 8;
    ST32(s2, a1);
    s2 = s2 + 8;
    ST32(sp+56, v1);
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8BC68; }
    goto L_08A8BBC0;
L_08A8BBC0:;
    v0 = LD32(sp+528);
    goto L_08A8BBC4;
L_08A8BBC4:;
    s0 = v0 - 1;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8B968; }
    goto L_08A8BBD0;
L_08A8BBD0:;
    cnd_ = v0 != 0;
    fp = D_08AE92B0 - (-27984);
    if (cnd_) { goto L_08A8BC1C; }
    goto L_08A8BBD8;
L_08A8BBD8:;
    s4 = fp - 27984;
    s1 = 16;
    ST32(s2+4, s1);
    goto L_08A8BBE4;
L_08A8BBE4:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s4);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8BC4C; }
    goto L_08A8BC0C;
L_08A8BC0C:;
    s0 = s0 - 16;
    goto L_08A8BC10;
L_08A8BC10:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s1); goto L_08A8BBE4; }
    goto L_08A8BC1C;
L_08A8BC1C:;
    ST32(s2+4, s0);
    v0 = fp - 27984;
    ST32(s2, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    v1 = v1 + 1;
    v0 = v0 + s0;
    goto L_08A8BC38;
L_08A8BC38:;
    ST32(sp+56, v0);
    a0 = (s32)v1 < 8;
    s2 = s2 + 8;
    goto L_08A8BC44;
L_08A8BC44:;
    ST32(sp+52, v1);
    goto L_08A8B960;
L_08A8BC4C:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BC58;
L_08A8BC58:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BC60;
L_08A8BC60:;
    s0 = s0 - 16;
    goto L_08A8BC10;
L_08A8BC68:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BC74;
L_08A8BC74:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BC7C;
L_08A8BC7C:;
    v0 = LD32(sp+528);
    goto L_08A8BBC4;
L_08A8BC84:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BC90;
L_08A8BC90:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BC98;
L_08A8BC98:;
    v0 = LD32(sp+532);
    goto L_08A8BB70;
L_08A8BCA0:;
    cnd_ = (s32)a1 <= 0;
    v1 = LD32(sp+528);
    if (cnd_) { goto L_08A8BEDC; }
    goto L_08A8BCA8;
L_08A8BCA8:;
    v0 = (s32)a1 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s2+4, a1); goto L_08A8BDFC; }
    goto L_08A8BCB4;
L_08A8BCB4:;
    ST32(s2+4, v1);
    a1 = v1 + 0;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s4);
    v0 = v0 + 1;
    v1 = v1 + a1;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8BDE0; }
    goto L_08A8BCE4;
L_08A8BCE4:;
    v0 = LD32(sp+532);
    s0 = v0 - a1;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8BD70; }
    goto L_08A8BCF4;
L_08A8BCF4:;
    cnd_ = v0 != 0;
    fp = D_08AE92B0 - (-27984);
    if (cnd_) { goto L_08A8BD40; }
    goto L_08A8BCFC;
L_08A8BCFC:;
    s1 = fp - 27984;
    s4 = 16;
    ST32(s2+4, s4);
    goto L_08A8BD08;
L_08A8BD08:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s1);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8BDC4; }
    goto L_08A8BD30;
L_08A8BD30:;
    s0 = s0 - 16;
    goto L_08A8BD34;
L_08A8BD34:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s4); goto L_08A8BD08; }
    goto L_08A8BD40;
L_08A8BD40:;
    ST32(s2+4, s0);
    v0 = fp - 27984;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + s0;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8BDA8; }
    goto L_08A8BD70;
L_08A8BD70:;
    v1 = LD32(sp+552);
    goto L_08A8BD74;
L_08A8BD74:;
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    a2 = LD32(sp+552);
    if (cnd_) { goto L_08A8B96C; }
    goto L_08A8BD80;
L_08A8BD80:;
    v1 = 1;
    ST32(s2+4, v1);
    v0 = D_08AE92E0 - (-27936);
    v0 = v0 - 27936;
    ST32(s2, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    v1 = v1 + 1;
    v0 = v0 + 1;
    goto L_08A8BC38;
L_08A8BDA8:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BDB4;
L_08A8BDB4:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BDBC;
L_08A8BDBC:;
    v1 = LD32(sp+552);
    goto L_08A8BD74;
L_08A8BDC4:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BDD0;
L_08A8BDD0:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BDD8;
L_08A8BDD8:;
    s0 = s0 - 16;
    goto L_08A8BD34;
L_08A8BDE0:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BDEC;
L_08A8BDEC:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BDF4;
L_08A8BDF4:;
    a1 = LD32(sp+528);
    goto L_08A8BCE4;
L_08A8BDFC:;
    t1 = a1 + 0;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s4);
    v0 = v0 + 1;
    v1 = v1 + a1;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8BEC0; }
    goto L_08A8BE28;
L_08A8BE28:;
    v1 = 1;
    ST32(s2+4, v1);
    v0 = D_08AE92E0 - (-27936);
    v0 = v0 - 27936;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s4 = s4 + t1;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    s2 = s2 + 8;
    v0 = v0 + 1;
    ST32(sp+56, v0);
    cnd_ = a0 == 0;
    ST32(sp+52, v1);
    if (cnd_) { goto L_08A8BEA4; }
    goto L_08A8BE64;
L_08A8BE64:;
    v0 = LD32(sp+532);
    goto L_08A8BE68;
L_08A8BE68:;
    a0 = LD32(sp+528);
    ST32(s2, s4);
    a0 = a0 - v0;
    ST32(s2+4, a0);
    s2 = s2 + 8;
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    v1 = v1 + 1;
    v0 = v0 + a0;
    a1 = (s32)v1 < 8;
    ST32(sp+56, v0);
    cnd_ = a1 != 0;
    ST32(sp+52, v1);
    if (cnd_) { goto L_08A8B968; }
    goto L_08A8BE9C;
L_08A8BE9C:;
    a0 = LD32(sp+544);
    goto L_08A8BAF4;
L_08A8BEA4:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BEB0;
L_08A8BEB0:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BEB8;
L_08A8BEB8:;
    v0 = LD32(sp+532);
    goto L_08A8BE68;
L_08A8BEC0:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8BECC;
L_08A8BECC:;
    cnd_ = v0 != 0;
    t1 = LD32(sp+532);
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8BED4;
L_08A8BED4:;
    s2 = sp + 64;
    goto L_08A8BE28;
L_08A8BEDC:;
    s0 = 1;
    ST32(s2+4, s0);
    v0 = D_08AE92DC - (-27940);
    v0 = v0 - 27940;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + 1;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8C068; }
    goto L_08A8BF14;
L_08A8BF14:;
    v0 = LD32(sp+532);
    goto L_08A8BF18;
L_08A8BF18:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s2+4, s0); goto L_08A8BF30; }
    goto L_08A8BF20;
L_08A8BF20:;
    v0 = LD32(sp+528);
    cnd_ = v0 == 0;
    a2 = LD32(sp+552);
    if (cnd_) { goto L_08A8B96C; }
    goto L_08A8BF2C;
L_08A8BF2C:;
    ST32(s2+4, s0);
    goto L_08A8BF30;
L_08A8BF30:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    a2 = LD32(sp+564);
    v0 = v0 + 1;
    v1 = v1 + 1;
    a0 = (s32)v0 < 8;
    ST32(s2, a2);
    s2 = s2 + 8;
    ST32(sp+56, v1);
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8C04C; }
    goto L_08A8BF5C;
L_08A8BF5C:;
    v0 = LD32(sp+532);
    goto L_08A8BF60;
L_08A8BF60:;
    s0 = 0 - v0;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8BFE8; }
    goto L_08A8BF6C;
L_08A8BF6C:;
    cnd_ = v0 != 0;
    fp = D_08AE92B0 - (-27984);
    if (cnd_) { goto L_08A8BFB8; }
    goto L_08A8BF74;
L_08A8BF74:;
    s1 = fp - 27984;
    s5 = 16;
    ST32(s2+4, s5);
    goto L_08A8BF80;
L_08A8BF80:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s1);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8C030; }
    goto L_08A8BFA8;
L_08A8BFA8:;
    s0 = s0 - 16;
    goto L_08A8BFAC;
L_08A8BFAC:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s5); goto L_08A8BF80; }
    goto L_08A8BFB8;
L_08A8BFB8:;
    ST32(s2+4, s0);
    v0 = fp - 27984;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + s0;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8C014; }
    goto L_08A8BFE8;
L_08A8BFE8:;
    a1 = LD32(sp+528);
    goto L_08A8BFEC;
L_08A8BFEC:;
    ST32(s2, s4);
    ST32(s2+4, a1);
    s2 = s2 + 8;
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    v1 = v1 + 1;
    v0 = v0 + a1;
    a0 = (s32)v1 < 8;
    ST32(sp+56, v0);
    goto L_08A8BC44;
L_08A8C014:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C020;
L_08A8C020:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C028;
L_08A8C028:;
    a1 = LD32(sp+528);
    goto L_08A8BFEC;
L_08A8C030:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C03C;
L_08A8C03C:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C044;
L_08A8C044:;
    s0 = s0 - 16;
    goto L_08A8BFAC;
L_08A8C04C:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C058;
L_08A8C058:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C060;
L_08A8C060:;
    v0 = LD32(sp+532);
    goto L_08A8BF60;
L_08A8C068:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C074;
L_08A8C074:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C07C;
L_08A8C07C:;
    v0 = LD32(sp+532);
    goto L_08A8BF18;
L_08A8C084:;
    v0 = (s32)v0 < 2;
    cnd_ = v0 != 0;
    a0 = LD32(sp+552);
    if (cnd_) { goto L_08A8C258; }
    goto L_08A8C090;
L_08A8C090:;
    v0 = LD_U8(s4);
    goto L_08A8C094;
L_08A8C094:;
    v1 = 2;
    s4 = s4 + 1;
    ST8(sp+480, v0);
    v0 = 46;
    ST8(sp+481, v0);
    v0 = sp + 480;
    ST32(s2+4, v1);
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + 2;
    cnd_ = a0 == 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8C23C; }
    goto L_08A8C0D8;
L_08A8C0D8:;
    a0 = LD32(sp+568);
    a1 = LD32(sp+572);
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = func_08A93AFC(a0, a1, a2, a3);
    goto L_08A8C0EC;
L_08A8C0EC:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+528);
    if (cnd_) { goto L_08A8C19C; }
    goto L_08A8C0F4;
L_08A8C0F4:;
    a0 = LD32(sp+528);
    ST32(s2, s4);
    v0 = a0 - 1;
    ST32(s2+4, v0);
    s2 = s2 + 8;
    v0 = LD32(sp+56);
    v1 = LD32(sp+52);
    v0 = v0 + a0;
    v1 = v1 + 1;
    v0 = v0 - 1;
    a0 = (s32)v1 < 8;
    ST32(sp+56, v0);
    goto L_08A8C124;
L_08A8C124:;
    cnd_ = a0 == 0;
    ST32(sp+52, v1);
    if (cnd_) { goto L_08A8C17C; }
    goto L_08A8C12C;
L_08A8C12C:;
    a1 = LD32(sp+576);
    goto L_08A8C130;
L_08A8C130:;
    v0 = sp + 32;
    ST32(s2, v0);
    ST32(s2+4, a1);
    s2 = s2 + 8;
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    v1 = v1 + 1;
    v0 = v0 + a1;
    a0 = (s32)v1 < 8;
    ST32(sp+56, v0);
    cnd_ = a0 != 0;
    ST32(sp+52, v1);
    if (cnd_) { goto L_08A8B968; }
    goto L_08A8C160;
L_08A8C160:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C16C;
L_08A8C16C:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C174;
L_08A8C174:;
    a2 = LD32(sp+552);
    goto L_08A8B96C;
L_08A8C17C:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    s2 = sp + 64;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C18C;
L_08A8C18C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+576); goto L_08A8C130; }
    goto L_08A8C194;
L_08A8C194:;
    a2 = LD32(sp+592);
    goto L_08A8BA60;
L_08A8C19C:;
    s0 = v0 - 1;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8C12C; }
    goto L_08A8C1A8;
L_08A8C1A8:;
    cnd_ = v0 != 0;
    fp = D_08AE92B0 - (-27984);
    if (cnd_) { goto L_08A8C1F4; }
    goto L_08A8C1B0;
L_08A8C1B0:;
    s4 = fp - 27984;
    s1 = 16;
    ST32(s2+4, s1);
    goto L_08A8C1BC;
L_08A8C1BC:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s4);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8C220; }
    goto L_08A8C1E4;
L_08A8C1E4:;
    s0 = s0 - 16;
    goto L_08A8C1E8;
L_08A8C1E8:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s1); goto L_08A8C1BC; }
    goto L_08A8C1F4;
L_08A8C1F4:;
    ST32(s2+4, s0);
    v0 = fp - 27984;
    ST32(s2, v0);
    s2 = s2 + 8;
    v0 = LD32(sp+56);
    v1 = LD32(sp+52);
    v0 = v0 + s0;
    ST32(sp+56, v0);
    v1 = v1 + 1;
    a0 = (s32)v1 < 8;
    goto L_08A8C124;
L_08A8C220:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C22C;
L_08A8C22C:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C234;
L_08A8C234:;
    s0 = s0 - 16;
    goto L_08A8C1E8;
L_08A8C23C:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C248;
L_08A8C248:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C250;
L_08A8C250:;
    goto L_08A8C0D8;
L_08A8C258:;
    v0 = a0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s4); goto L_08A8C094; }
    goto L_08A8C264;
L_08A8C264:;
    v0 = 1;
    ST32(s2+4, v0);
    v1 = LD32(sp+52);
    v0 = LD32(sp+56);
    ST32(s2, s4);
    v1 = v1 + 1;
    v0 = v0 + 1;
    a0 = (s32)v1 < 8;
    ST32(sp+56, v0);
    s2 = s2 + 8;
    cnd_ = a0 != 0;
    ST32(sp+52, v1);
    if (cnd_) { goto L_08A8C12C; }
    goto L_08A8C294;
L_08A8C294:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C2A0;
L_08A8C2A0:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C2A8;
L_08A8C2A8:;
    a1 = LD32(sp+576);
    goto L_08A8C130;
L_08A8C2B0:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C2BC;
L_08A8C2BC:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C2C4;
L_08A8C2C4:;
    v1 = LD32(sp+552);
    goto L_08A8B92C;
L_08A8C2CC:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C2D8;
L_08A8C2D8:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C2E0;
L_08A8C2E0:;
    s0 = s0 - 16;
    goto L_08A8B8EC;
L_08A8C2E8:;
    a1 = LD32(sp+584);
    s0 = a0 - a1;
    cnd_ = (s32)s0 <= 0;
    v0 = (s32)s0 < 17;
    if (cnd_) { goto L_08A8B89C; }
    goto L_08A8C2F8;
L_08A8C2F8:;
    cnd_ = v0 != 0;
    fp = D_08AE92B0 - (-27984);
    if (cnd_) { goto L_08A8C344; }
    goto L_08A8C300;
L_08A8C300:;
    s5 = fp - 27984;
    s1 = 16;
    ST32(s2+4, s1);
    goto L_08A8C30C;
L_08A8C30C:;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    ST32(s2, s5);
    v0 = v0 + 1;
    v1 = v1 + 16;
    a0 = (s32)v0 < 8;
    ST32(sp+56, v1);
    s2 = s2 + 8;
    cnd_ = a0 == 0;
    ST32(sp+52, v0);
    if (cnd_) { goto L_08A8C390; }
    goto L_08A8C334;
L_08A8C334:;
    s0 = s0 - 16;
    goto L_08A8C338;
L_08A8C338:;
    v0 = (s32)s0 < 17;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+4, s1); goto L_08A8C30C; }
    goto L_08A8C344;
L_08A8C344:;
    ST32(s2+4, s0);
    v0 = fp - 27984;
    v1 = LD32(sp+52);
    ST32(s2, v0);
    s2 = s2 + 8;
    v1 = v1 + 1;
    v0 = LD32(sp+56);
    a0 = (s32)v1 < 8;
    ST32(sp+52, v1);
    v0 = v0 + s0;
    cnd_ = a0 != 0;
    ST32(sp+56, v0);
    if (cnd_) { goto L_08A8B89C; }
    goto L_08A8C374;
L_08A8C374:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C380;
L_08A8C380:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C388;
L_08A8C388:;
    a2 = LD32(sp+580);
    goto L_08A8B8A0;
L_08A8C390:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C39C;
L_08A8C39C:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C3A4;
L_08A8C3A4:;
    s0 = s0 - 16;
    goto L_08A8C338;
L_08A8C3AC:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    s2 = sp + 64;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C3BC;
L_08A8C3BC:;
    cnd_ = v0 == 0;
    v0 = 128;
    if (cnd_) { goto L_08A8B894; }
    goto L_08A8C3C4;
L_08A8C3C4:;
    a2 = LD32(sp+592);
    goto L_08A8BA60;
L_08A8C3CC:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    v0 = 128;
    if (cnd_) { goto L_08A8B894; }
    goto L_08A8C3D8;
L_08A8C3D8:;
    v0 = 48;
    ST8(sp+480, v0);
    v0 = 2;
    v1 = sp + 480;
    ST8(sp+481, s7);
    ST32(s2+4, v0);
    a0 = LD32(sp+52);
    v0 = LD32(sp+56);
    ST32(s2, v1);
    a0 = a0 + 1;
    v0 = v0 + 2;
    v1 = (s32)a0 < 8;
    ST32(sp+56, v0);
    s2 = s2 + 8;
    cnd_ = v1 != 0;
    ST32(sp+52, a0);
    if (cnd_) { goto L_08A8B890; }
    goto L_08A8C418;
L_08A8C418:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C424;
L_08A8C424:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C42C;
L_08A8C42C:;
    v0 = 128;
    goto L_08A8B894;
L_08A8C434:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C440;
L_08A8C440:;
    cnd_ = v0 != 0;
    v1 = LD_U8(sp+16);
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C448;
L_08A8C448:;
    s2 = sp + 64;
    goto L_08A8B850;
L_08A8C450:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8C45C;
L_08A8C45C:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8C464;
L_08A8C464:;
    s0 = s0 - 16;
    goto L_08A8B80C;
L_08A8C46C:;
    a0 = LD32(sp+552);
    a1 = LD32(sp+584);
    v0 = a0 & 0x2;
    a1 = v0 + a1;
    ST32(sp+584, a1);
    goto L_08A8B7A8;
L_08A8C484:;
    a1 = LD32(sp+588);
    goto L_08A8C488;
L_08A8C488:;
    v0 = s0 & 0xf;
    a0 = s1 << 28;
    v0 = a1 + v0;
    v1 = LD_U8(v0);
    s0 = s0 >> 4;
    s0 = s0 | a0;
    s1 = s1 >> 4;
    s4 = s4 - 1;
    v0 = s0 | s1;
    cnd_ = v0 != 0;
    ST8(s4, v1);
    if (cnd_) { goto L_08A8C484; }
    goto L_08A8C4B4;
L_08A8C4B4:;
    v0 = sp - s4;
    goto L_08A8C4B8;
L_08A8C4B8:;
    s6 = v0 + 476;
    goto L_08A8B78C;
L_08A8C4C0:;
    cnd_ = a1 != 0;
    v0 = D_08AE92C0 - (-27968);
    if (cnd_) { goto L_08A8B77C; }
    goto L_08A8C4C8;
L_08A8C4C8:;
    v0 = s0 & 0x7;
    v1 = s1 << 29;
    s0 = s0 >> 3;
    s0 = s0 | v1;
    s1 = s1 >> 3;
    v1 = v0 + 48;
    s4 = s4 - 1;
    v0 = s0 | s1;
    cnd_ = v0 != 0;
    ST8(s4, v1);
    if (cnd_) { goto L_08A8C4C8; }
    goto L_08A8C4F0;
L_08A8C4F0:;
    a0 = LD32(sp+552);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    v0 = sp - s4;
    if (cnd_) { goto L_08A8C4B8; }
    goto L_08A8C500;
L_08A8C500:;
    v0 = 48;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = sp - s4; goto L_08A8C4B8; }
    goto L_08A8C50C;
L_08A8C50C:;
    s4 = s4 - 1;
    ST8(s4, v0);
    goto L_08A8C4B4;
L_08A8C518:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08A8C57C; }
    goto L_08A8C520;
L_08A8C520:;
    a0 = s0 + 0;
    goto L_08A8C524;
L_08A8C524:;
    a3 = 0;
    a2 = 10;
    a1 = s1 + 0;
    v0 = func_08A92ABC(a0, a1, a2, a3);
    goto L_08A8C534;
L_08A8C534:;
    v0 = v0 + 48;
    s4 = s4 - 1;
    ST8(s4, v0);
    a0 = s0 + 0;
    a3 = 0;
    a2 = 10;
    a1 = s1 + 0;
    { u64 r_ = func_08A92548(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8C554;
L_08A8C554:;
    s0 = v0 + 0;
    cnd_ = v1 != 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_08A8C520; }
    goto L_08A8C560;
L_08A8C560:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = s0 + 48; goto L_08A8C50C; }
    goto L_08A8C568;
L_08A8C568:;
    v0 = v0 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A8C524; }
    goto L_08A8C574;
L_08A8C574:;
    v0 = s0 + 48;
    goto L_08A8C50C;
L_08A8C57C:;
    cnd_ = s1 != 0;
    v0 = s0 + 48;
    if (cnd_) { goto L_08A8C50C; }
    goto L_08A8C584;
L_08A8C584:;
    v0 = s0 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08A8C524; }
    goto L_08A8C590;
L_08A8C590:;
    v0 = s0 + 48;
    goto L_08A8C50C;
L_08A8C598:;
    cnd_ = a1 != 0;
    v0 = sp - s4;
    if (cnd_) { goto L_08A8C4B8; }
    goto L_08A8C5A0;
L_08A8C5A0:;
    a2 = LD32(sp+552);
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    v0 = sp - s4;
    if (cnd_) { goto L_08A8C4B8; }
    goto L_08A8C5B0;
L_08A8C5B0:;
    v0 = 48;
    ST8(sp+475, v0);
    s4 = sp + 475;
    goto L_08A8C4B4;
L_08A8C5C0:;
    s0 = 0 - s0;
    s1 = 0 - s1;
    v0 = 0 < s0;
    s1 = s1 - v0;
    ST8(sp+16, v1);
    goto L_08A8B724;
L_08A8C5D8:;
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    a2 = LD32(sp+552);
    if (cnd_) { goto L_08A8C600; }
    goto L_08A8C5E4;
L_08A8C5E4:;
    v0 = LD32(sp+548);
    v1 = LD32(v0);
    a1 = v0 + 4;
    ST32(sp+548, a1);
    goto L_08A8C5F4;
L_08A8C5F4:;
    s0 = v1 + 0;
    s1 = (u32)((s32)v1 >> 31);
    goto L_08A8B71C;
L_08A8C600:;
    v0 = a2 & 0x40;
    cnd_ = v0 == 0;
    v0 = LD32(sp+548);
    if (cnd_) { goto L_08A8C61C; }
    goto L_08A8C60C;
L_08A8C60C:;
    v1 = (u32)(s32)LD_S16(v0);
    v0 = v0 + 4;
    ST32(sp+548, v0);
    goto L_08A8C5F4;
L_08A8C61C:;
    a0 = v0 + 4;
    v1 = LD32(v0);
    ST32(sp+548, a0);
    goto L_08A8C5F4;
L_08A8C62C:;
    a1 = LD32(sp+552);
    a2 = LD_U8(s3);
    a1 = a1 | 0x8;
    goto L_08A8B5D8;
L_08A8C63C:;
    v0 = LD32(sp+552);
    v0 = v0 | 0x10;
    ST32(sp+552, v0);
    goto L_08A8C648;
L_08A8C648:;
    v1 = LD32(sp+552);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+552); goto L_08A8C680; }
    goto L_08A8C658;
L_08A8C658:;
    a0 = LD32(sp+548);
    a0 = a0 + 7;
    a0 = (a0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    s0 = LD32(a0);
    s1 = LD32(a0+4);
    a0 = a0 + 8;
    goto L_08A8C670;
L_08A8C670:;
    ST32(sp+548, a0);
    goto L_08A8C674;
L_08A8C674:;
    a1 = 0 + 0;
    goto L_08A8C678;
L_08A8C678:;
    ST8(sp+16, 0);
    goto L_08A8B728;
L_08A8C680:;
    v0 = a1 & 0x10;
    cnd_ = v0 == 0;
    v1 = LD32(sp+552);
    if (cnd_) { goto L_08A8C6A4; }
    goto L_08A8C68C;
L_08A8C68C:;
    v0 = LD32(sp+548);
    s1 = 0 + 0;
    s0 = LD32(v0);
    a2 = v0 + 4;
    ST32(sp+548, a2);
    goto L_08A8C674;
L_08A8C6A4:;
    v0 = v1 & 0x40;
    cnd_ = v0 == 0;
    v0 = LD32(sp+548);
    if (cnd_) { goto L_08A8C6C0; }
    goto L_08A8C6B0;
L_08A8C6B0:;
    s1 = 0 + 0;
    s0 = LD_U16(v0);
    a0 = v0 + 4;
    goto L_08A8C670;
L_08A8C6C0:;
    s1 = 0 + 0;
    a1 = v0 + 4;
    s0 = LD32(v0);
    ST32(sp+548, a1);
    goto L_08A8C674;
L_08A8C6D4:;
    a2 = LD32(sp+552);
    a2 = a2 | 0x10;
    ST32(sp+552, a2);
    goto L_08A8C6E0;
L_08A8C6E0:;
    v1 = LD32(sp+552);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+552); goto L_08A8C714; }
    goto L_08A8C6F0;
L_08A8C6F0:;
    a0 = LD32(sp+548);
    a0 = a0 + 7;
    a0 = (a0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    s0 = LD32(a0);
    s1 = LD32(a0+4);
    a0 = a0 + 8;
    goto L_08A8C708;
L_08A8C708:;
    ST32(sp+548, a0);
    goto L_08A8C70C;
L_08A8C70C:;
    a1 = 1;
    goto L_08A8C678;
L_08A8C714:;
    v0 = a1 & 0x10;
    cnd_ = v0 == 0;
    v1 = LD32(sp+552);
    if (cnd_) { goto L_08A8C738; }
    goto L_08A8C720;
L_08A8C720:;
    v0 = LD32(sp+548);
    s1 = 0 + 0;
    s0 = LD32(v0);
    a2 = v0 + 4;
    ST32(sp+548, a2);
    goto L_08A8C70C;
L_08A8C738:;
    v0 = v1 & 0x40;
    cnd_ = v0 == 0;
    v0 = LD32(sp+548);
    if (cnd_) { goto L_08A8C754; }
    goto L_08A8C744;
L_08A8C744:;
    s1 = 0 + 0;
    s0 = LD_U16(v0);
    a0 = v0 + 4;
    goto L_08A8C708;
L_08A8C754:;
    s1 = 0 + 0;
    a1 = v0 + 4;
    s0 = LD32(v0);
    ST32(sp+548, a1);
    goto L_08A8C70C;
L_08A8C768:;
    v0 = D_08AE92E4 - (-27932);
    v0 = v0 - 27932;
    goto L_08A8C770;
L_08A8C770:;
    a2 = LD32(sp+552);
    ST32(sp+588, v0);
    v0 = a2 & 0x20;
    cnd_ = v0 == 0;
    a0 = LD32(sp+552);
    if (cnd_) { goto L_08A8C7C4; }
    goto L_08A8C784;
L_08A8C784:;
    v0 = LD32(sp+548);
    v0 = v0 + 7;
    v0 = (v0 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    s0 = LD32(v0);
    s1 = LD32(v0+4);
    v1 = v0 + 8;
    goto L_08A8C79C;
L_08A8C79C:;
    ST32(sp+548, v1);
    goto L_08A8C7A0;
L_08A8C7A0:;
    a0 = LD32(sp+552);
    v0 = s0 | s1;
    a1 = 2;
    cnd_ = v0 == 0;
    v1 = a0 & 0x1;
    if (cnd_) { goto L_08A8C678; }
    goto L_08A8C7B4;
L_08A8C7B4:;
    v0 = a0 | 0x2;
    if (v1 != 0) a0 = v0;
    ST32(sp+552, a0);
    goto L_08A8C678;
L_08A8C7C4:;
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    a2 = LD32(sp+552);
    if (cnd_) { goto L_08A8C7E8; }
    goto L_08A8C7D0;
L_08A8C7D0:;
    v0 = LD32(sp+548);
    s1 = 0 + 0;
    s0 = LD32(v0);
    a1 = v0 + 4;
    ST32(sp+548, a1);
    goto L_08A8C7A0;
L_08A8C7E8:;
    v0 = a2 & 0x40;
    cnd_ = v0 == 0;
    v0 = LD32(sp+548);
    if (cnd_) { goto L_08A8C808; }
    goto L_08A8C7F4;
L_08A8C7F4:;
    s1 = 0 + 0;
    s0 = LD_U16(v0);
    v0 = v0 + 4;
    ST32(sp+548, v0);
    goto L_08A8C7A0;
L_08A8C808:;
    s1 = 0 + 0;
    s0 = LD32(v0);
    v1 = v0 + 4;
    goto L_08A8C79C;
L_08A8C818:;
    v0 = 67;
    cnd_ = s7 == v0;
    s4 = sp + 128;
    if (cnd_) { goto L_08A8C834; }
    goto L_08A8C824;
L_08A8C824:;
    a2 = LD32(sp+552);
    v0 = a2 & 0x10;
    cnd_ = v0 == 0;
    v0 = LD32(sp+548);
    if (cnd_) { goto L_08A8C884; }
    goto L_08A8C834;
L_08A8C834:;
    s0 = sp + 496;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 8;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8C848;
L_08A8C848:;
    v1 = LD32(sp+548);
    a0 = LD32(sp+540);
    a3 = s0 + 0;
    a2 = LD32(v1);
    a1 = s4 + 0;
    v0 = func_08A8E1F0(a0, a1, a2, a3);
    goto L_08A8C860;
L_08A8C860:;
    s6 = v0 + 0;
    v0 = LD32(sp+548);
    v0 = v0 + 4;
    ST32(sp+548, v0);
    v0 = (u32)-1;
    cnd_ = s6 == v0;
    a2 = LD32(sp+592);
    if (cnd_) { goto L_08A8BA60; }
    goto L_08A8C87C;
L_08A8C87C:;
    ST8(sp+16, 0);
    goto L_08A8B78C;
L_08A8C884:;
    s6 = 1;
    v1 = LD_U8(v0);
    a0 = v0 + 4;
    ST32(sp+548, a0);
    ST8(sp+128, v1);
    goto L_08A8C87C;
L_08A8C89C:;
    v0 = (u32)-1;
    cnd_ = s5 == v0;
    v1 = s7 ^ 0x67;
    if (cnd_) { goto L_08A8CAFC; }
    goto L_08A8C8A8;
L_08A8C8A8:;
    v0 = s7 ^ 0x47;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 == 0;
    a1 = LD32(sp+552);
    if (cnd_) { goto L_08A8C8CC; }
    goto L_08A8C8C0;
L_08A8C8C0:;
    v0 = 1;
    if (s5 == 0) s5 = v0;
    goto L_08A8C8C8;
L_08A8C8C8:;
    a1 = LD32(sp+552);
    goto L_08A8C8CC;
L_08A8C8CC:;
    v0 = a1 & 0x8;
    cnd_ = v0 == 0;
    a1 = LD32(sp+548);
    if (cnd_) { goto L_08A8CAD4; }
    goto L_08A8C8D8;
L_08A8C8D8:;
    a2 = LD32(sp+548);
    a2 = a2 + 7;
    a2 = (a2 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    a0 = LD32(a2);
    a1 = LD32(a2+4);
    a2 = a2 + 8;
    ST32(sp+548, a2);
    ST32(sp+568, a0);
    ST32(sp+572, a1);
    goto L_08A8C8FC;
L_08A8C8FC:;
    a0 = LD32(sp+568);
    a1 = LD32(sp+572);
    v0 = func_08A91A8C(a0, a1);
    goto L_08A8C908;
L_08A8C908:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8C944; }
    goto L_08A8C910;
L_08A8C910:;
    a0 = LD32(sp+568);
    a1 = LD32(sp+572);
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8C924;
L_08A8C924:;
    cnd_ = (s32)v0 < 0;
    v1 = 45;
    if (cnd_) { goto L_08A8C93C; }
    goto L_08A8C92C;
L_08A8C92C:;
    v0 = D_08AE92F8 - (-27912);
    s4 = v0 - 27912;
    s6 = 3;
    goto L_08A8B78C;
L_08A8C93C:;
    ST8(sp+16, v1);
    goto L_08A8C92C;
L_08A8C944:;
    a0 = LD32(sp+568);
    a1 = LD32(sp+572);
    s6 = 3;
    v0 = func_08A91AC0(a0, a1);
    goto L_08A8C954;
L_08A8C954:;
    v1 = D_08AE92FC - (-27908);
    cnd_ = v0 != 0;
    s4 = v1 - 27908;
    if (cnd_) { goto L_08A8B78C; }
    goto L_08A8C960;
L_08A8C960:;
    a2 = LD32(sp+552);
    a0 = LD32(sp+540);
    v0 = sp + 528;
    a2 = a2 | 0x100;
    ST32(sp+552, a2);
    t2 = sp + 17;
    t0 = s5 + 0;
    a2 = LD32(sp+568);
    a3 = LD32(sp+572);
    t1 = LD32(sp+552);
    t3 = sp + 532;
    ST32(sp+4, v0);
    ST32(sp, s7);
    v0 = func_08A8CE20(a0, a2, a3, t0, t1, t2, t3, sp);
    goto L_08A8C998;
L_08A8C998:;
    a0 = s7 ^ 0x67;
    v1 = s7 ^ 0x47;
    s4 = v0 + 0;
    v1 = v1 < 0x1u;
    v0 = a0 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    t1 = LD32(sp+532);
    if (cnd_) { goto L_08A8C9DC; }
    goto L_08A8C9B8;
L_08A8C9B8:;
    v0 = (s32)t1 < -3;
    cnd_ = v0 != 0;
    s7 = 101;
    if (cnd_) { goto L_08A8C9D4; }
    goto L_08A8C9C4;
L_08A8C9C4:;
    v0 = (s32)s5 < (s32)t1;
    cnd_ = v0 == 0;
    s7 = 103;
    if (cnd_) { goto L_08A8C9E8; }
    goto L_08A8C9D0;
L_08A8C9D0:;
    s7 = 101;
    goto L_08A8C9D4;
L_08A8C9D4:;
    v0 = 69;
    if (a0 != 0) s7 = v0;
    goto L_08A8C9DC;
L_08A8C9DC:;
    v0 = (s32)s7 < 102;
    cnd_ = v0 != 0;
    if (cnd_) { t1 = t1 - 1; goto L_08A8CA88; }
    goto L_08A8C9E8;
L_08A8C9E8:;
    v0 = 102;
    cnd_ = s7 == v0;
    v1 = LD32(sp+528);
    if (cnd_) { goto L_08A8CA3C; }
    goto L_08A8C9F4;
L_08A8C9F4:;
    v0 = (s32)t1 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = v1 - t1;
    if (cnd_) { goto L_08A8CA2C; }
    goto L_08A8CA00;
L_08A8CA00:;
    a0 = LD32(sp+552);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    s6 = t1 + 0;
    if (cnd_) { goto L_08A8CA14; }
    goto L_08A8CA10;
L_08A8CA10:;
    s6 = t1 + 1;
    goto L_08A8CA14;
L_08A8CA14:;
    v0 = (u32)(s32)LD_S8(sp+17);
    goto L_08A8CA18;
L_08A8CA18:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+580);
    if (cnd_) { goto L_08A8B790; }
    goto L_08A8CA20;
L_08A8CA20:;
    v1 = 45;
    ST8(sp+16, v1);
    goto L_08A8B78C;
L_08A8CA2C:;
    cnd_ = (s32)t1 <= 0;
    s6 = v0 + 2;
    if (cnd_) { goto L_08A8CA14; }
    goto L_08A8CA34;
L_08A8CA34:;
    s6 = v1 + 1;
    goto L_08A8CA14;
L_08A8CA3C:;
    cnd_ = (s32)t1 <= 0;
    if (cnd_) { goto L_08A8CA68; }
    goto L_08A8CA44;
L_08A8CA44:;
    cnd_ = s5 != 0;
    s6 = t1 + 0;
    if (cnd_) { goto L_08A8CA5C; }
    goto L_08A8CA4C;
L_08A8CA4C:;
    a2 = LD32(sp+552);
    v0 = a2 & 0x1;
    cnd_ = v0 == 0;
    v0 = (u32)(s32)LD_S8(sp+17);
    if (cnd_) { goto L_08A8CA18; }
    goto L_08A8CA5C;
L_08A8CA5C:;
    v0 = t1 + s5;
    s6 = v0 + 1;
    goto L_08A8CA14;
L_08A8CA68:;
    cnd_ = s5 != 0;
    s6 = s5 + 2;
    if (cnd_) { goto L_08A8CA14; }
    goto L_08A8CA70;
L_08A8CA70:;
    v1 = LD32(sp+552);
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    s6 = 1;
    if (cnd_) { goto L_08A8CA14; }
    goto L_08A8CA80;
L_08A8CA80:;
    s6 = s5 + 2;
    goto L_08A8CA14;
L_08A8CA88:;
    a0 = sp + 32;
    a1 = t1 + 0;
    a2 = s7 + 0;
    ST32(sp+532, t1);
    v0 = func_08A8CFE8(a0, a1, a2);
    goto L_08A8CA9C;
L_08A8CA9C:;
    ST32(sp+576, v0);
    v0 = LD32(sp+528);
    a0 = LD32(sp+576);
    v1 = (s32)v0 < 2;
    cnd_ = v1 != 0;
    s6 = a0 + v0;
    if (cnd_) { goto L_08A8CABC; }
    goto L_08A8CAB4;
L_08A8CAB4:;
    s6 = s6 + 1;
    goto L_08A8CA14;
L_08A8CABC:;
    a1 = LD32(sp+552);
    v0 = a1 & 0x1;
    cnd_ = v0 == 0;
    v0 = (u32)(s32)LD_S8(sp+17);
    if (cnd_) { goto L_08A8CA18; }
    goto L_08A8CACC;
L_08A8CACC:;
    s6 = s6 + 1;
    goto L_08A8CA18;
L_08A8CAD4:;
    a1 = a1 + 7;
    a1 = (a1 & ~(0x7u << 0)) | ((0 & 0x7) << 0);
    v0 = a1 + 0;
    a0 = LD32(a1);
    a1 = LD32(a1+4);
    ST32(sp+568, a0);
    ST32(sp+572, a1);
    a1 = v0 + 8;
    ST32(sp+548, a1);
    goto L_08A8C8FC;
L_08A8CAFC:;
    s5 = 6;
    goto L_08A8C8C8;
L_08A8CB04:;
    v0 = LD32(sp+552);
    a2 = LD_U8(s3);
    v0 = v0 | 0x40;
    goto L_08A8B610;
L_08A8CB14:;
    a2 = LD_U8(s3);
    v0 = 108;
    v1 = (u32)(s32)(s8)a2;
    cnd_ = v1 == v0;
    a0 = LD32(sp+552);
    if (cnd_) { goto L_08A8CB30; }
    goto L_08A8CB28;
L_08A8CB28:;
    a0 = a0 | 0x10;
    goto L_08A8B6A4;
L_08A8CB30:;
    v1 = LD32(sp+552);
    s3 = s3 + 1;
    a2 = LD_U8(s3);
    v1 = v1 | 0x20;
    ST32(sp+552, v1);
    goto L_08A8B57C;
L_08A8CB48:;
    a1 = LD32(sp+552);
    v0 = a1 & 0x20;
    cnd_ = v0 == 0;
    v1 = LD32(sp+552);
    if (cnd_) { goto L_08A8CB80; }
    goto L_08A8CB58;
L_08A8CB58:;
    v0 = LD32(sp+548);
    a0 = LD32(sp+556);
    v1 = LD32(v0);
    a1 = (u32)((s32)a0 >> 31);
    a2 = v0 + 4;
    ST32(sp+548, a2);
    ST32(v1, a0);
    ST32(v1+4, a1);
    a2 = LD_U8(s3);
    goto L_08A8B4D0;
L_08A8CB80:;
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    a2 = LD32(sp+552);
    if (cnd_) { goto L_08A8CBA8; }
    goto L_08A8CB8C;
L_08A8CB8C:;
    v0 = LD32(sp+548);
    a1 = LD32(sp+556);
    v1 = LD32(v0);
    a0 = v0 + 4;
    ST32(sp+548, a0);
    ST32(v1, a1);
    goto L_08A8B4CC;
L_08A8CBA8:;
    v0 = a2 & 0x40;
    cnd_ = v0 == 0;
    v0 = LD32(sp+548);
    if (cnd_) { goto L_08A8CBCC; }
    goto L_08A8CBB4;
L_08A8CBB4:;
    a0 = LD32(sp+556);
    v1 = LD32(v0);
    v0 = v0 + 4;
    ST32(sp+548, v0);
    ST16(v1, a0);
    goto L_08A8B4CC;
L_08A8CBCC:;
    a2 = LD32(sp+556);
    v1 = LD32(v0);
    a1 = v0 + 4;
    ST32(sp+548, a1);
    ST32(v1, a2);
    goto L_08A8B4CC;
L_08A8CBE4:;
    v1 = LD32(sp+548);
    v0 = D_08AE9300 - (-27904);
    v0 = v0 - 27904;
    ST32(sp+588, v0);
    a2 = v1 + 4;
    s1 = 0 + 0;
    v0 = LD32(sp+552);
    s0 = LD32(v1);
    a1 = 2;
    v0 = v0 | 0x2;
    s7 = 120;
    ST32(sp+548, a2);
    ST32(sp+552, v0);
    goto L_08A8C678;
L_08A8CC1C:;
    a1 = LD32(sp+552);
    a2 = LD_U8(s3);
    a1 = a1 | 0x20;
    goto L_08A8B5D8;
L_08A8CC2C:;
    v0 = LD32(sp+548);
    s4 = LD32(v0);
    v1 = v0 + 4;
    ST8(sp+16, 0);
    cnd_ = s4 == 0;
    ST32(sp+548, v1);
    if (cnd_) { goto L_08A8CD88; }
    goto L_08A8CC44;
L_08A8CC44:;
    v0 = 83;
    cnd_ = s7 == v0;
    a0 = LD32(sp+552);
    if (cnd_) { goto L_08A8CC5C; }
    goto L_08A8CC50;
L_08A8CC50:;
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8CD54; }
    goto L_08A8CC5C;
L_08A8CC5C:;
    a0 = sp + 512;
    a1 = 0 + 0;
    a2 = 8;
    ST32(sp+536, s4);
    s1 = 0 + 0;
    s6 = 0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8CC78;
L_08A8CC78:;
    cnd_ = (s32)s5 < 0;
    fp = (u32)-1;
    if (cnd_) { goto L_08A8CD24; }
    goto L_08A8CC80;
L_08A8CC80:;
    v1 = LD32(sp+536);
    v0 = s1 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    a0 = LD32(sp+540);
    if (cnd_) { goto L_08A8CCC4; }
    goto L_08A8CC98;
L_08A8CC98:;
    a1 = sp + 128;
    a3 = sp + 512;
    v0 = func_08A8E1F0(a0, a1, a2, a3);
    goto L_08A8CCA4;
L_08A8CCA4:;
    cnd_ = v0 == fp;
    v1 = v0 + s6;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8CCAC;
L_08A8CCAC:;
    v0 = (s32)s5 < (s32)v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A8CCC4; }
    goto L_08A8CCB8;
L_08A8CCB8:;
    s6 = v1 + 0;
    cnd_ = v1 != s5;
    s1 = s1 + 1;
    if (cnd_) { goto L_08A8CC80; }
    goto L_08A8CCC4;
L_08A8CCC4:;
    cnd_ = s6 == 0;
    v0 = LD32(sp+580);
    if (cnd_) { goto L_08A8B790; }
    goto L_08A8CCCC;
L_08A8CCCC:;
    a0 = LD32(sp+540);
    a1 = s6 + 1;
    { u64 r_ = func_08A87514(a0, a1, a2, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8CCD8;
L_08A8CCD8:;
    cnd_ = v0 == 0;
    ST32(sp+592, v0);
    if (cnd_) { goto L_08A8BA70; }
    goto L_08A8CCE0;
L_08A8CCE0:;
    a2 = 8;
    a0 = sp + 512;
    a1 = 0 + 0;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8CCF0;
L_08A8CCF0:;
    a0 = LD32(sp+540);
    a1 = LD32(sp+592);
    t0 = sp + 512;
    a2 = sp + 536;
    a3 = s6 + 0;
    v0 = func_08A8E25C(a0, a1, a2, a3, t0);
    goto L_08A8CD08;
L_08A8CD08:;
    cnd_ = v0 != s6;
    a2 = LD32(sp+592);
    if (cnd_) { goto L_08A8BA60; }
    goto L_08A8CD10;
L_08A8CD10:;
    a1 = LD32(sp+592);
    v0 = a1 + s6;
    s4 = a1 + 0;
    ST8(v0, 0);
    goto L_08A8B78C;
L_08A8CD24:;
    a0 = LD32(sp+540);
    a1 = 0 + 0;
    a2 = sp + 536;
    a3 = 0 + 0;
    t0 = sp + 512;
    v0 = func_08A8E25C(a0, a1, a2, a3, t0);
    goto L_08A8CD3C;
L_08A8CD3C:;
    s6 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s6 == v0;
    a2 = LD32(sp+592);
    if (cnd_) { goto L_08A8BA60; }
    goto L_08A8CD4C;
L_08A8CD4C:;
    ST32(sp+536, s4);
    goto L_08A8CCC4;
L_08A8CD54:;
    cnd_ = (s32)s5 < 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A8B780; }
    goto L_08A8CD5C;
L_08A8CD5C:;
    a1 = 0 + 0;
    a2 = s5 + 0;
    v0 = func_08A90578(a0, a1, a2);
    goto L_08A8CD68;
L_08A8CD68:;
    cnd_ = v0 == 0;
    s6 = s5 + 0;
    if (cnd_) { goto L_08A8B78C; }
    goto L_08A8CD70;
L_08A8CD70:;
    s6 = v0 - s4;
    v0 = (s32)s5 < (s32)s6;
    cnd_ = v0 != 0;
    if (cnd_) { s6 = s5 + 0; goto L_08A8B78C; }
    goto L_08A8CD80;
L_08A8CD80:;
    v0 = LD32(sp+580);
    goto L_08A8B790;
L_08A8CD88:;
    v0 = D_08AE9314 - (-27884);
    s4 = v0 - 27884;
    s6 = 6;
    goto L_08A8B78C;
L_08A8CD98:;
    cnd_ = s7 == 0;
    s4 = sp + 128;
    if (cnd_) { goto L_08A8CDAC; }
    goto L_08A8CDA0;
L_08A8CDA0:;
    ST8(sp+128, s7);
    s6 = 1;
    goto L_08A8C87C;
L_08A8CDAC:;
    v0 = LD32(sp+56);
    cnd_ = v0 != 0;
    a0 = LD32(sp+544);
    if (cnd_) { goto L_08A8CDC0; }
    goto L_08A8CDB8;
L_08A8CDB8:;
    ST32(sp+52, 0);
    goto L_08A8BA5C;
L_08A8CDC0:;
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8CDC8;
L_08A8CDC8:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp+52, 0); goto L_08A8BA5C; }
    goto L_08A8CDD0;
L_08A8CDD0:;
    a2 = LD32(sp+592);
    goto L_08A8BA60;
L_08A8CDD8:;
    v0 = D_08AE9300 - (-27904);
    v0 = v0 - 27904;
    goto L_08A8C770;
L_08A8CDE4:;
    a0 = LD32(sp+544);
    a1 = sp + 48;
    { rv_t r_ = func_08A8B298(a0, a1, 0, 0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8CDF0;
L_08A8CDF0:;
    cnd_ = v0 != 0;
    s2 = sp + 64;
    if (cnd_) { goto L_08A8BA5C; }
    goto L_08A8CDF8;
L_08A8CDF8:;
    a0 = LD32(sp+556);
    goto L_08A8B54C;
L_08A8CE00:;
    v0 = (u32)(s32)LD_S16(v1+14);
    cnd_ = (s32)v0 < 0;
    a2 = LD32(sp+548);
    if (cnd_) { goto L_08A8B4B4; }
    goto L_08A8CE0C;
L_08A8CE0C:;
    a0 = v1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A8B2E4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8CE18;
L_08A8CE18:;
    v1 = v0 + 0;
    goto L_08A8BA88;
}

/* 08A8CE20 */
u32 func_08A8CE20(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80); memcpy(stack_ + 80, PTR(sp_in), 16); /* stack-passed arguments */
L_08A8CE20:;
    sp = sp - 80;
    v0 = 102;
    s5 = LD32(sp+80);
    fp = t1 + 0;
    s7 = a0 + 0;
    s6 = t3 + 0;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    s1 = 3;
    s0 = t2 + 0;
    cnd_ = s5 == v0;
    if (cnd_) { goto L_08A8CE94; }
    goto L_08A8CE78;
L_08A8CE78:;
    v1 = s5 ^ 0x65;
    v0 = s5 ^ 0x45;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    s4 = t0 + v1;
    s1 = 2;
    goto L_08A8CE94;
L_08A8CE94:;
    cnd_ = (s32)s3 < 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A8CFCC; }
    goto L_08A8CE9C;
L_08A8CE9C:;
    ST8(s0, 0);
    goto L_08A8CEA0;
L_08A8CEA0:;
    t0 = s1 + 0;
    v0 = sp + 16;
    a0 = s7 + 0;
    a2 = s2 + 0;
    a3 = s3 + 0;
    t1 = s4 + 0;
    t2 = s6 + 0;
    t3 = sp + 20;
    ST32(sp, v0);
    v0 = func_08A8EC00(a0, a2, a3, t0, t1, t2, t3, sp);
    goto L_08A8CEC8;
L_08A8CEC8:;
    s1 = v0 + 0;
    v1 = s5 ^ 0x67;
    v0 = s5 ^ 0x47;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    v0 = 102;
    if (cnd_) { goto L_08A8CEF8; }
    goto L_08A8CEE8;
L_08A8CEE8:;
    v0 = fp & 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(sp+16);
    if (cnd_) { goto L_08A8CF48; }
    goto L_08A8CEF4;
L_08A8CEF4:;
    v0 = 102;
    goto L_08A8CEF8;
L_08A8CEF8:;
    cnd_ = s5 == v0;
    s0 = s1 + s4;
    if (cnd_) { goto L_08A8CF88; }
    goto L_08A8CF00;
L_08A8CF00:;
    a0 = s2 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8CF14;
L_08A8CF14:;
    v1 = LD32(sp+16);
    if (v0 == 0) v1 = s0;
    v0 = v1 < s0;
    ST32(sp+16, v1);
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08A8CF48; }
    goto L_08A8CF2C;
L_08A8CF2C:;
    a1 = 48;
    goto L_08A8CF30;
L_08A8CF30:;
    v1 = a0 + 1;
    v0 = v1 < s0;
    ST8(a0, a1);
    a0 = v1 + 0;
    cnd_ = v0 != 0;
    ST32(sp+16, v1);
    if (cnd_) { goto L_08A8CF30; }
    goto L_08A8CF48;
L_08A8CF48:;
    v0 = LD32(sp+84);
    v1 = v1 - s1;
    ST32(v0, v1);
    v0 = s1 + 0;
    sp = sp + 80;
    return v0;
L_08A8CF88:;
    v1 = (u32)(s32)LD_S8(s1);
    v0 = 48;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = s2 + 0; goto L_08A8CFA4; }
    goto L_08A8CF98;
L_08A8CF98:;
    v0 = LD32(s6);
    goto L_08A8CF9C;
L_08A8CF9C:;
    s0 = s0 + v0;
    goto L_08A8CF00;
L_08A8CFA4:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a1 = s3 + 0;
    v0 = func_08A93AFC(a0, a1, a2, a3);
    goto L_08A8CFB4;
L_08A8CFB4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s6); goto L_08A8CF9C; }
    goto L_08A8CFBC;
L_08A8CFBC:;
    v0 = 1;
    v0 = v0 - s4;
    ST32(s6, v0);
    goto L_08A8CF98;
L_08A8CFCC:;
    a1 = s3 + 0;
    { u64 r_ = func_08A93F54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8CFD4;
L_08A8CFD4:;
    s2 = v0 + 0;
    s3 = v1 + 0;
    v0 = 45;
    ST8(s0, v0);
    goto L_08A8CEA0;
}

/* 08A8CFE8 */
u32 func_08A8CFE8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A8CFE8:;
    sp = sp - 48;
    t1 = a0 + 0;
    cnd_ = (s32)a1 < 0;
    ST8(a0, a2);
    if (cnd_) { goto L_08A8D0AC; }
    goto L_08A8CFF8;
L_08A8CFF8:;
    v0 = 43;
    ST8(a0+1, v0);
    a3 = a0 + 2;
    goto L_08A8D004;
L_08A8D004:;
    a2 = sp + 40;
    v0 = (s32)a1 < 10;
    cnd_ = v0 != 0;
    t2 = a2 + 0;
    if (cnd_) { goto L_08A8D090; }
    goto L_08A8D014;
L_08A8D014:;
    t0 = 0x66660000u;
    t0 = t0 | 0x6667;
    goto L_08A8D01C;
L_08A8D01C:;
    { s64 p_ = (s64)(s32)a1 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = (u32)((s32)a1 >> 31);
    a2 = a2 - 1;
    v1 = hi;
    v1 = (u32)((s32)v1 >> 2);
    v1 = v1 - a0;
    v0 = v1 << 2;
    v0 = v0 + v1;
    v0 = v0 << 1;
    v0 = a1 - v0;
    v0 = v0 + 48;
    a1 = v1 + 0;
    v1 = (s32)v1 < 10;
    cnd_ = v1 == 0;
    ST8(a2, v0);
    if (cnd_) { goto L_08A8D01C; }
    goto L_08A8D058;
L_08A8D058:;
    a2 = a2 - 1;
    v0 = a1 + 48;
    v1 = a2 < t2;
    cnd_ = v1 == 0;
    ST8(a2, v0);
    if (cnd_) { goto L_08A8D084; }
    goto L_08A8D06C;
L_08A8D06C:;
    v0 = LD_U8(a2);
    a2 = a2 + 1;
    v1 = a2 < t2;
    ST8(a3, v0);
    cnd_ = v1 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A8D06C; }
    goto L_08A8D084;
L_08A8D084:;
    v0 = a3 - t1;
    sp = sp + 48;
    return v0;
L_08A8D090:;
    v0 = 48;
    ST8(a3, v0);
    v1 = a1 + 48;
    a3 = a3 + 1;
    ST8(a3, v1);
    a3 = a3 + 1;
    goto L_08A8D084;
L_08A8D0AC:;
    v0 = 45;
    a1 = 0 - a1;
    a3 = a0 + 2;
    ST8(a0+1, v0);
    goto L_08A8D004;
}

/* 08A8D0C0 */
rv_t func_08A8D0C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[704] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 704);
L_08A8D0C0:;
    sp = sp - 704;
    ST32(sp+628, a0);
    ST32(sp+636, 0);
    ST32(sp+640, 0);
    ST32(sp+632, 0);
    fp = a3 + 0;
    s4 = a2 + 0;
    s3 = 0 + 0;
    s1 = a1 + 0;
    goto L_08A8D10C;
L_08A8D10C:;
    a0 = (u32)(s32)LD_S8(s4);
    goto L_08A8D110;
L_08A8D110:;
    v0 = LD32(sp+632);
    s4 = s4 + 1;
    cnd_ = a0 == 0;
    ST32(sp+624, a0);
    if (cnd_) { goto L_08A8D178; }
    goto L_08A8D120;
L_08A8D120:;
    v0 = 1;
    cnd_ = v0 == v0;
    v0 = D_08AE9044 - (-28604);
    if (cnd_) { goto L_08A8E034; }
    goto L_08A8D12C;
L_08A8D12C:;
    v0 = 37;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = LD_U8(s4); goto L_08A8D1C8; }
    goto L_08A8D138;
L_08A8D138:;
    v0 = LD32(s1+4);
    s2 = s3 + 0;
    cnd_ = (s32)v0 <= 0;
    s0 = s4 - 1;
    if (cnd_) { goto L_08A8D1A8; }
    goto L_08A8D148;
L_08A8D148:;
    a0 = LD32(s1);
    goto L_08A8D14C;
L_08A8D14C:;
    v1 = (u32)(s32)LD_S8(s0);
    v0 = LD_U8(a0);
    cnd_ = v0 != v1;
    v1 = a0 + 1;
    if (cnd_) { goto L_08A8D174; }
    goto L_08A8D15C;
L_08A8D15C:;
    v0 = LD32(s1+4);
    s3 = s2 + 1;
    v0 = v0 - 1;
    ST32(s1+4, v0);
    ST32(s1, v1);
    goto L_08A8D10C;
L_08A8D174:;
    v0 = LD32(sp+632);
    goto L_08A8D178;
L_08A8D178:;
    sp = sp + 704;
    return (rv_t){ v0, v1, f0 };
L_08A8D1A8:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D1B0;
L_08A8D1B0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A8D14C; }
    goto L_08A8D1B8;
L_08A8D1B8:;
    v1 = LD32(sp+632);
    goto L_08A8D1BC;
L_08A8D1BC:;
    v0 = (u32)-1;
    goto L_08A8D1C0;
L_08A8D1C0:;
    if (v1 != 0) v0 = v1;
    goto L_08A8D178;
L_08A8D1C8:;
    s6 = 0 + 0;
    s5 = 0 + 0;
    goto L_08A8D1D0;
L_08A8D1D0:;
    s0 = (u32)(s32)(s8)a1;
    v0 = s0 < 0x79u;
    cnd_ = v0 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_08A8DFF0; }
    goto L_08A8D1E0;
L_08A8D1E0:;
    v1 = D_08AE94AC - (-27476);
    v0 = s0 << 2;
    v1 = v1 - 27476;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A8D138u: goto L_08A8D138; case 0x08A8D1FCu: goto L_08A8D1FC; case 0x08A8D204u: goto L_08A8D204; case 0x08A8D210u: goto L_08A8D210; case 0x08A8D22Cu: goto L_08A8D22C; case 0x08A8D230u: goto L_08A8D230; case 0x08A8DE64u: goto L_08A8DE64; case 0x08A8DE68u: goto L_08A8DE68; case 0x08A8DE84u: goto L_08A8DE84; case 0x08A8DE90u: goto L_08A8DE90; case 0x08A8DE94u: goto L_08A8DE94; case 0x08A8DEB0u: goto L_08A8DEB0; case 0x08A8DEB4u: goto L_08A8DEB4; case 0x08A8DEBCu: goto L_08A8DEBC; case 0x08A8DED8u: goto L_08A8DED8; case 0x08A8DEE0u: goto L_08A8DEE0; case 0x08A8DF08u: goto L_08A8DF08; case 0x08A8DF20u: goto L_08A8DF20; case 0x08A8DF3Cu: goto L_08A8DF3C; case 0x08A8DFB8u: goto L_08A8DFB8; case 0x08A8DFD4u: goto L_08A8DFD4; case 0x08A8DFF0u: goto L_08A8DFF0; case 0x08A8E018u: goto L_08A8E018; default: rs_break(0, 0x08a8d1f4); }
L_08A8D1FC:;
    v0 = (u32)-1;
    goto L_08A8D178;
L_08A8D204:;
    a1 = LD_U8(s4);
    s5 = s5 | 0x10;
    goto L_08A8D1D0;
L_08A8D210:;
    v0 = s6 << 2;
    v0 = v0 + s6;
    v0 = v0 << 1;
    a1 = LD_U8(s4);
    v0 = v0 + s0;
    s6 = v0 - 48;
    goto L_08A8D1D0;
L_08A8D22C:;
    s5 = s5 | 0x1;
    goto L_08A8D230;
L_08A8D230:;
    s5 = s5 | 0x40;
    s0 = 0 + 0;
    goto L_08A8D238;
L_08A8D238:;
    v0 = LD32(s1+4);
    cnd_ = (s32)v0 <= 0;
    v0 = s5 & 0x40;
    if (cnd_) { goto L_08A8DE4C; }
    goto L_08A8D244;
L_08A8D244:;
    cnd_ = v0 != 0;
    v0 = s0 < 0x5u;
    if (cnd_) { goto L_08A8D2B0; }
    goto L_08A8D24C;
L_08A8D24C:;
    a0 = LD32(s1);
    v0 = D_08AE9044 - (-28604);
    a1 = v0 - 28604;
    v0 = LD_U8(a0);
    v0 = v0 + a1;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 == 0;
    v0 = s0 < 0x5u;
    if (cnd_) { goto L_08A8D2B0; }
    goto L_08A8D270;
L_08A8D270:;
    s2 = a1 + 0;
    v0 = LD32(s1+4);
    goto L_08A8D278;
L_08A8D278:;
    s3 = s3 + 1;
    v0 = v0 - 1;
    cnd_ = (s32)v0 <= 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A8DE34; }
    goto L_08A8D288;
L_08A8D288:;
    v0 = a0 + 1;
    ST32(s1, v0);
    a0 = LD32(s1);
    goto L_08A8D294;
L_08A8D294:;
    v0 = LD_U8(a0);
    v0 = v0 + s2;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A8D278; }
    goto L_08A8D2AC;
L_08A8D2AC:;
    v0 = s0 < 0x5u;
    goto L_08A8D2B0;
L_08A8D2B0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = (u32)(s32)LD_S8(s4); goto L_08A8D110; }
    goto L_08A8D2B8;
L_08A8D2B8:;
    v1 = D_08AE9690 - (-26992);
    v0 = s0 << 2;
    v1 = v1 - 26992;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A8D2D4u: goto L_08A8D2D4; case 0x08A8D478u: goto L_08A8D478; case 0x08A8D5C4u: goto L_08A8D5C4; case 0x08A8D89Cu: goto L_08A8D89C; case 0x08A8DB68u: goto L_08A8DB68; default: rs_break(0, 0x08a8d2cc); }
L_08A8D2D4:;
    v0 = 1;
    v1 = s5 & 0x1;
    cnd_ = v1 == 0;
    if (s6 == 0) s6 = v0;
    if (cnd_) { goto L_08A8D3E0; }
    goto L_08A8D2E4;
L_08A8D2E4:;
    s5 = s5 & 0x10;
    cnd_ = s5 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A8D2F8; }
    goto L_08A8D2F0;
L_08A8D2F0:;
    s2 = LD32(fp);
    fp = fp + 4;
    goto L_08A8D2F8;
L_08A8D2F8:;
    cnd_ = s6 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8D3A8; }
    goto L_08A8D300;
L_08A8D300:;
    s7 = (u32)-2;
    v1 = D_08B1E428 - (-7128);
    goto L_08A8D308;
L_08A8D308:;
    v0 = LD32(v1-7128);
    cnd_ = s0 == v0;
    t0 = s0 + sp;
    if (cnd_) { goto L_08A8D1B8; }
    goto L_08A8D314;
L_08A8D314:;
    v1 = LD32(s1);
    v0 = LD32(s1+4);
    a3 = LD_U8(v1);
    a0 = v1 + 1;
    v0 = v0 - 1;
    ST32(s1, a0);
    a2 = 8;
    a0 = sp + 0;
    ST32(s1+4, v0);
    a1 = 0 + 0;
    s0 = s0 + 1;
    ST8(t0+272, a3);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8D348;
L_08A8D348:;
    a0 = LD32(sp+628);
    a1 = s2 + 0;
    a2 = sp + 272;
    a3 = s0 + 0;
    t0 = sp + 0;
    v0 = func_08A904C4(a0, a1, a2, a3, t0);
    goto L_08A8D360;
L_08A8D360:;
    a0 = (u32)-1;
    cnd_ = v0 == a0;
    v1 = LD32(sp+632);
    if (cnd_) { goto L_08A8D1BC; }
    goto L_08A8D36C;
L_08A8D36C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A8D37C; }
    goto L_08A8D374;
L_08A8D374:;
    cnd_ = s5 == 0;
    if (cnd_) { ST32(s2, 0); goto L_08A8D37C; }
    goto L_08A8D37C;
L_08A8D37C:;
    cnd_ = v0 == s7;
    v0 = s2 + 4;
    if (cnd_) { goto L_08A8D394; }
    goto L_08A8D384;
L_08A8D384:;
    s3 = s3 + s0;
    if (s5 == 0) s2 = v0;
    s6 = s6 - 1;
    s0 = 0 + 0;
    goto L_08A8D394;
L_08A8D394:;
    v0 = LD32(s1+4);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8D3C0; }
    goto L_08A8D3A0;
L_08A8D3A0:;
    cnd_ = s6 != 0;
    v1 = D_08B1E428 - (-7128);
    if (cnd_) { goto L_08A8D308; }
    goto L_08A8D3A8;
L_08A8D3A8:;
    cnd_ = s5 != 0;
    if (cnd_) { a0 = (u32)(s32)LD_S8(s4); goto L_08A8D110; }
    goto L_08A8D3B0;
L_08A8D3B0:;
    v0 = LD32(sp+632);
    v0 = v0 + 1;
    ST32(sp+632, v0);
    goto L_08A8D10C;
L_08A8D3C0:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D3C8;
L_08A8D3C8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8D3A0; }
    goto L_08A8D3D0;
L_08A8D3D0:;
    cnd_ = s0 == 0;
    v1 = LD32(sp+632);
    if (cnd_) { goto L_08A8D3A8; }
    goto L_08A8D3D8;
L_08A8D3D8:;
    v0 = (u32)-1;
    goto L_08A8D1C0;
L_08A8D3E0:;
    v0 = s5 & 0x10;
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A8D448; }
    goto L_08A8D3EC;
L_08A8D3EC:;
    s0 = LD32(s1+4);
    goto L_08A8D3F0;
L_08A8D3F0:;
    v0 = (s32)s0 < (s32)s6;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A8D42C; }
    goto L_08A8D3FC;
L_08A8D3FC:;
    v0 = LD32(s1);
    s2 = s2 + s0;
    v0 = v0 + s0;
    ST32(s1, v0);
    s6 = s6 - s0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D414;
L_08A8D414:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s1+4); goto L_08A8D3F0; }
    goto L_08A8D41C;
L_08A8D41C:;
    cnd_ = s2 == 0;
    v1 = LD32(sp+632);
    if (cnd_) { goto L_08A8D1BC; }
    goto L_08A8D424;
L_08A8D424:;
    s3 = s3 + s2;
    goto L_08A8D10C;
L_08A8D42C:;
    v1 = LD32(s1);
    v0 = s0 - s6;
    ST32(s1+4, v0);
    v1 = v1 + s6;
    s2 = s2 + s6;
    ST32(s1, v1);
    goto L_08A8D424;
L_08A8D448:;
    a0 = LD32(fp);
    a2 = s6 + 0;
    a1 = 1;
    a3 = s1 + 0;
    { rv_t r_ = func_08A863F0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D45C;
L_08A8D45C:;
    cnd_ = v0 == 0;
    fp = fp + 4;
    if (cnd_) { goto L_08A8D1B8; }
    goto L_08A8D464;
L_08A8D464:;
    v1 = LD32(sp+632);
    s3 = s3 + v0;
    goto L_08A8D46C;
L_08A8D46C:;
    v1 = v1 + 1;
    ST32(sp+632, v1);
    goto L_08A8D10C;
L_08A8D478:;
    v0 = (u32)-1;
    v1 = s5 & 0x10;
    cnd_ = v1 == 0;
    if (s6 == 0) s6 = v0;
    if (cnd_) { goto L_08A8D514; }
    goto L_08A8D488;
L_08A8D488:;
    a0 = LD32(s1);
    s2 = sp + 16;
    v0 = LD_U8(a0);
    v0 = s2 + v0;
    v1 = (u32)(s32)LD_S8(v0);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8D174; }
    goto L_08A8D4A4;
L_08A8D4A4:;
    v0 = LD32(s1+4);
    goto L_08A8D4A8;
L_08A8D4A8:;
    v1 = a0 + 1;
    s6 = s6 - 1;
    v0 = v0 - 1;
    ST32(s1, v1);
    s0 = s0 + 1;
    cnd_ = s6 == 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A8D4E4; }
    goto L_08A8D4C4;
L_08A8D4C4:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8D4F4; }
    goto L_08A8D4CC;
L_08A8D4CC:;
    a0 = LD32(s1);
    goto L_08A8D4D0;
L_08A8D4D0:;
    v0 = LD_U8(a0);
    v0 = s2 + v0;
    v1 = (u32)(s32)LD_S8(v0);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A8D4A8; }
    goto L_08A8D4E4;
L_08A8D4E4:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+632);
    if (cnd_) { goto L_08A8D178; }
    goto L_08A8D4EC;
L_08A8D4EC:;
    s3 = s3 + s0;
    goto L_08A8D10C;
L_08A8D4F4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D4FC;
L_08A8D4FC:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A8D4D0; }
    goto L_08A8D504;
L_08A8D504:;
    cnd_ = s0 != 0;
    s3 = s3 + s0;
    if (cnd_) { goto L_08A8D10C; }
    goto L_08A8D50C;
L_08A8D50C:;
    v1 = LD32(sp+632);
    goto L_08A8D1BC;
L_08A8D514:;
    a1 = LD32(s1);
    s5 = sp + 16;
    s2 = LD32(fp);
    v1 = LD_U8(a1);
    fp = fp + 4;
    v1 = s5 + v1;
    v0 = (u32)(s32)LD_S8(v1);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_08A8D584; }
    goto L_08A8D538;
L_08A8D538:;
    v0 = LD32(s1+4);
    goto L_08A8D53C;
L_08A8D53C:;
    a0 = a1 + 1;
    s6 = s6 - 1;
    v0 = v0 - 1;
    ST32(s1+4, v0);
    v1 = LD_U8(a1);
    ST32(s1, a0);
    ST8(s2, v1);
    cnd_ = s6 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A8D584; }
    goto L_08A8D560;
L_08A8D560:;
    v0 = LD32(s1+4);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8D5A4; }
    goto L_08A8D56C;
L_08A8D56C:;
    a1 = LD32(s1);
    goto L_08A8D570;
L_08A8D570:;
    v0 = LD_U8(a1);
    v0 = s5 + v0;
    v1 = (u32)(s32)LD_S8(v0);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A8D53C; }
    goto L_08A8D584;
L_08A8D584:;
    s0 = s2 - s0;
    goto L_08A8D588;
L_08A8D588:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+632);
    if (cnd_) { goto L_08A8D178; }
    goto L_08A8D590;
L_08A8D590:;
    ST8(s2, 0);
    a0 = LD32(sp+632);
    a0 = a0 + 1;
    ST32(sp+632, a0);
    goto L_08A8D4EC;
L_08A8D5A4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D5AC;
L_08A8D5AC:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A8D570; }
    goto L_08A8D5B4;
L_08A8D5B4:;
    cnd_ = s2 != s0;
    s0 = s2 - s0;
    if (cnd_) { goto L_08A8D588; }
    goto L_08A8D5BC;
L_08A8D5BC:;
    v1 = LD32(sp+632);
    goto L_08A8D1BC;
L_08A8D5C4:;
    v0 = (u32)-1;
    v1 = s5 & 0x1;
    cnd_ = v1 != 0;
    if (s6 == 0) s6 = v0;
    if (cnd_) { goto L_08A8D71C; }
    goto L_08A8D5D4;
L_08A8D5D4:;
    v0 = s5 & 0x10;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A8D66C; }
    goto L_08A8D5E0;
L_08A8D5E0:;
    a0 = LD32(s1);
    v0 = D_08AE9044 - (-28604);
    a1 = v0 - 28604;
    v1 = LD_U8(a0);
    v1 = v1 + a1;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8D4EC; }
    goto L_08A8D604;
L_08A8D604:;
    s2 = a1 + 0;
    v0 = LD32(s1+4);
    goto L_08A8D60C;
L_08A8D60C:;
    v1 = a0 + 1;
    s6 = s6 - 1;
    v0 = v0 - 1;
    ST32(s1, v1);
    s0 = s0 + 1;
    cnd_ = s6 == 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A8D4EC; }
    goto L_08A8D628;
L_08A8D628:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8D654; }
    goto L_08A8D630;
L_08A8D630:;
    a0 = LD32(s1);
    goto L_08A8D634;
L_08A8D634:;
    v0 = LD_U8(a0);
    v0 = v0 + s2;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A8D60C; }
    goto L_08A8D64C;
L_08A8D64C:;
    s3 = s3 + s0;
    goto L_08A8D10C;
L_08A8D654:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D65C;
L_08A8D65C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A8D634; }
    goto L_08A8D664;
L_08A8D664:;
    s3 = s3 + s0;
    goto L_08A8D10C;
L_08A8D66C:;
    v0 = D_08AE9044 - (-28604);
    a0 = v0 - 28604;
    v0 = LD_U8(a1);
    s2 = LD32(fp);
    fp = fp + 4;
    v0 = v0 + a0;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 != 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_08A8D6E8; }
    goto L_08A8D694;
L_08A8D694:;
    s5 = a0 + 0;
    v0 = LD32(s1+4);
    goto L_08A8D69C;
L_08A8D69C:;
    a0 = a1 + 1;
    s6 = s6 - 1;
    v0 = v0 - 1;
    ST32(s1+4, v0);
    v1 = LD_U8(a1);
    ST32(s1, a0);
    ST8(s2, v1);
    cnd_ = s6 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_08A8D6E8; }
    goto L_08A8D6C0;
L_08A8D6C0:;
    v0 = LD32(s1+4);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8D704; }
    goto L_08A8D6CC;
L_08A8D6CC:;
    a1 = LD32(s1);
    goto L_08A8D6D0;
L_08A8D6D0:;
    v0 = LD_U8(a1);
    v0 = v0 + s5;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A8D69C; }
    goto L_08A8D6E8;
L_08A8D6E8:;
    a0 = LD32(sp+632);
    goto L_08A8D6EC;
L_08A8D6EC:;
    v0 = s2 - s0;
    s3 = s3 + v0;
    a0 = a0 + 1;
    ST32(sp+632, a0);
    ST8(s2, 0);
    goto L_08A8D10C;
L_08A8D704:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D70C;
L_08A8D70C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A8D6D0; }
    goto L_08A8D714;
L_08A8D714:;
    a0 = LD32(sp+632);
    goto L_08A8D6EC;
L_08A8D71C:;
    s5 = s5 & 0x10;
    cnd_ = s5 != 0;
    s2 = sp + 624;
    if (cnd_) { goto L_08A8D730; }
    goto L_08A8D728;
L_08A8D728:;
    s2 = LD32(fp);
    fp = fp + 4;
    goto L_08A8D730;
L_08A8D730:;
    a1 = LD32(s1);
    v0 = D_08AE9044 - (-28604);
    a2 = v0 - 28604;
    a3 = LD_U8(a1);
    a0 = 0 < s6;
    v1 = a3 & 0xff;
    v1 = v1 + a2;
    v0 = LD_U8(v1);
    v0 = v0 ^ 0x8;
    v0 = (v0 >> 3) & 0x1;
    v0 = v0 & a0;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8D83C; }
    goto L_08A8D764;
L_08A8D764:;
    v1 = D_08B1E428 - (-7128);
    goto L_08A8D768;
L_08A8D768:;
    v0 = LD32(v1-7128);
    cnd_ = s0 == v0;
    v1 = a1 + 1;
    if (cnd_) { goto L_08A8D1B8; }
    goto L_08A8D774;
L_08A8D774:;
    v0 = LD32(s1+4);
    ST32(s1, v1);
    v0 = v0 - 1;
    a0 = sp + 0;
    ST32(s1+4, v0);
    v0 = s0 + sp;
    a1 = 0 + 0;
    ST8(v0+272, a3);
    a2 = 8;
    s7 = sp + 272;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8D7A0;
L_08A8D7A0:;
    a0 = LD32(sp+628);
    s0 = s0 + 1;
    a1 = s2 + 0;
    a2 = s7 + 0;
    a3 = s0 + 0;
    t0 = sp + 0;
    v0 = func_08A904C4(a0, a1, a2, a3, t0);
    goto L_08A8D7BC;
L_08A8D7BC:;
    a0 = (u32)-1;
    cnd_ = v0 == a0;
    v1 = LD32(sp+632);
    if (cnd_) { goto L_08A8D1BC; }
    goto L_08A8D7C8;
L_08A8D7C8:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_08A8D7D0; }
    goto L_08A8D7D0;
L_08A8D7D0:;
    v1 = (u32)-2;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A8D800; }
    goto L_08A8D7DC;
L_08A8D7DC:;
    a0 = LD32(s2);
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8D7E4;
L_08A8D7E4:;
    cnd_ = v0 != 0;
    v0 = s2 + 4;
    if (cnd_) { goto L_08A8D870; }
    goto L_08A8D7EC;
L_08A8D7EC:;
    s3 = s3 + s0;
    if (s5 == 0) s2 = v0;
    s6 = s6 - 1;
    s0 = 0 + 0;
    v0 = LD32(s1+4);
    goto L_08A8D800;
L_08A8D800:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8D850; }
    goto L_08A8D808;
L_08A8D808:;
    a1 = LD32(s1);
    goto L_08A8D80C;
L_08A8D80C:;
    v0 = D_08AE9044 - (-28604);
    v0 = v0 - 28604;
    a3 = LD_U8(a1);
    a0 = 0 < s6;
    v1 = a3 & 0xff;
    v1 = v1 + v0;
    v0 = LD_U8(v1);
    v0 = v0 ^ 0x8;
    v0 = (v0 >> 3) & 0x1;
    v0 = v0 & a0;
    cnd_ = v0 != 0;
    v1 = D_08B1E428 - (-7128);
    if (cnd_) { goto L_08A8D768; }
    goto L_08A8D83C;
L_08A8D83C:;
    cnd_ = s5 != 0;
    if (cnd_) { a0 = (u32)(s32)LD_S8(s4); goto L_08A8D110; }
    goto L_08A8D844;
L_08A8D844:;
    v1 = LD32(sp+632);
    ST32(s2, 0);
    goto L_08A8D46C;
L_08A8D850:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D858;
L_08A8D858:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08A8D80C; }
    goto L_08A8D860;
L_08A8D860:;
    cnd_ = s0 == 0;
    v1 = LD32(sp+632);
    if (cnd_) { goto L_08A8D83C; }
    goto L_08A8D868;
L_08A8D868:;
    v0 = (u32)-1;
    goto L_08A8D1C0;
L_08A8D870:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A8D83C; }
    goto L_08A8D878;
L_08A8D878:;
    s0 = s0 - 1;
    goto L_08A8D87C;
L_08A8D87C:;
    v0 = s7 + s0;
    a0 = (u32)(s32)LD_S8(v0);
    a1 = s1 + 0;
    f0 = func_08A922F4(a0, a1);
    goto L_08A8D88C;
L_08A8D88C:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = s0 - 1; goto L_08A8D87C; }
    goto L_08A8D894;
L_08A8D894:;
    goto L_08A8D83C;
L_08A8D89C:;
    s6 = s6 - 1;
    v1 = s6 < 0x15du;
    v0 = 348;
    if (v1 == 0) s6 = v0;
    s6 = s6 + 1;
    s5 = s5 | 0x580;
    cnd_ = s6 == 0;
    s2 = sp + 272;
    if (cnd_) { goto L_08A8D948; }
    goto L_08A8D8BC;
L_08A8D8BC:;
    v0 = LD32(s1);
    goto L_08A8D8C0;
L_08A8D8C0:;
    s0 = LD_U8(v0);
    v1 = s0 - 43;
    v0 = v1 < 0x4eu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A8D948; }
    goto L_08A8D8D4;
L_08A8D8D4:;
    v1 = D_08AE96A4 - (-26972);
    v1 = v1 - 26972;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A8D8ECu: goto L_08A8D8EC; case 0x08A8D948u: goto L_08A8D948; case 0x08A8DAD0u: goto L_08A8DAD0; case 0x08A8DAE4u: goto L_08A8DAE4; case 0x08A8DB04u: goto L_08A8DB04; case 0x08A8DB30u: goto L_08A8DB30; case 0x08A8DB48u: goto L_08A8DB48; default: rs_break(0, 0x08a8d8e4); }
L_08A8D8EC:;
    v0 = LD32(sp+636);
    cnd_ = v0 != 0;
    v0 = s5 & 0x400;
    if (cnd_) { goto L_08A8D908; }
    goto L_08A8D8F8;
L_08A8D8F8:;
    v1 = 8;
    ST32(sp+636, v1);
    s5 = s5 | 0x200;
    v0 = s5 & 0x400;
    goto L_08A8D908;
L_08A8D908:;
    cnd_ = v0 == 0;
    if (cnd_) { s5 = (s5 & ~(0x7u << 7)) | ((0 & 0x7) << 7); goto L_08A8D918; }
    goto L_08A8D910;
L_08A8D910:;
    v0 = (u32)-1409;
    s5 = s5 & v0;
    goto L_08A8D918;
L_08A8D918:;
    ST8(s2, s0);
    s2 = s2 + 1;
    v0 = LD32(s1+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 <= 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A8DAB0; }
    goto L_08A8D930;
L_08A8D930:;
    v0 = LD32(s1);
    v0 = v0 + 1;
    ST32(s1, v0);
    s6 = s6 - 1;
    goto L_08A8D940;
L_08A8D940:;
    cnd_ = s6 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A8D8C0; }
    goto L_08A8D948;
L_08A8D948:;
    v0 = s5 & 0x100;
    goto L_08A8D94C;
L_08A8D94C:;
    cnd_ = v0 != 0;
    v1 = sp + 272;
    if (cnd_) { goto L_08A8DA90; }
    goto L_08A8D954;
L_08A8D954:;
    s0 = (u32)(s32)LD_S8(s2-1);
    v1 = s0 ^ 0x78;
    v0 = s0 ^ 0x58;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A8DA7C; }
    goto L_08A8D974;
L_08A8D974:;
    v0 = s5 & 0x10;
    goto L_08A8D978;
L_08A8D978:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s2, 0); goto L_08A8D990; }
    goto L_08A8D980;
L_08A8D980:;
    v1 = sp + 272;
    v0 = s2 - v1;
    s3 = s3 + v0;
    goto L_08A8D10C;
L_08A8D990:;
    a1 = sp + 272;
    a2 = 0 + 0;
    a0 = LD32(sp+628);
    v1 = LD32(sp+640);
    t_ = v1;
    a3 = LD32(sp+636);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8D9A8;
L_08A8D9A8:;
    a0 = v0 + 0;
    v0 = s5 & 0x20;
    cnd_ = v0 == 0;
    v0 = s5 & 0x8;
    if (cnd_) { goto L_08A8D9D4; }
    goto L_08A8D9B8;
L_08A8D9B8:;
    v1 = LD32(fp);
    fp = fp + 4;
    ST32(v1, a0);
    goto L_08A8D9C4;
L_08A8D9C4:;
    v0 = LD32(sp+632);
    v0 = v0 + 1;
    ST32(sp+632, v0);
    goto L_08A8D980;
L_08A8D9D4:;
    cnd_ = v0 == 0;
    v0 = s5 & 0x4;
    if (cnd_) { goto L_08A8D9EC; }
    goto L_08A8D9DC;
L_08A8D9DC:;
    v0 = LD32(fp);
    fp = fp + 4;
    ST8(v0, a0);
    goto L_08A8D9C4;
L_08A8D9EC:;
    cnd_ = v0 == 0;
    v0 = s5 & 0x1;
    if (cnd_) { goto L_08A8DA04; }
    goto L_08A8D9F4;
L_08A8D9F4:;
    v0 = LD32(fp);
    fp = fp + 4;
    ST16(v0, a0);
    goto L_08A8D9C4;
L_08A8DA04:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(fp); goto L_08A8DA70; }
    goto L_08A8DA0C;
L_08A8DA0C:;
    v0 = s5 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(fp); goto L_08A8DA70; }
    goto L_08A8DA18;
L_08A8DA18:;
    a0 = LD32(sp+640);
    v0 = ((u32)(uintptr_t)func_08A91DB4) - (7604);
    v0 = v0 + 7604;
    cnd_ = a0 == v0;
    a1 = sp + 272;
    if (cnd_) { goto L_08A8DA58; }
    goto L_08A8DA2C;
L_08A8DA2C:;
    a0 = LD32(sp+628);
    a3 = LD32(sp+636);
    a2 = 0 + 0;
    { u64 r_ = func_08A91AE4(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8DA3C;
L_08A8DA3C:;
    a0 = LD32(fp);
    goto L_08A8DA40;
L_08A8DA40:;
    a2 = v0 + 0;
    a3 = v1 + 0;
    ST32(a0, a2);
    ST32(a0+4, a3);
    fp = fp + 4;
    goto L_08A8D9C4;
L_08A8DA58:;
    a0 = LD32(sp+628);
    a3 = LD32(sp+636);
    a2 = 0 + 0;
    { u64 r_ = func_08A91F60(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8DA68;
L_08A8DA68:;
    a0 = LD32(fp);
    goto L_08A8DA40;
L_08A8DA70:;
    fp = fp + 4;
    ST32(v0, a0);
    goto L_08A8D9C4;
L_08A8DA7C:;
    a1 = s1 + 0;
    s2 = s2 - 1;
    f0 = func_08A922F4(a0, a1);
    goto L_08A8DA88;
L_08A8DA88:;
    v0 = s5 & 0x10;
    goto L_08A8D978;
L_08A8DA90:;
    v0 = v1 < s2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(sp+632); goto L_08A8D178; }
    goto L_08A8DA9C;
L_08A8DA9C:;
    a0 = (u32)(s32)LD_S8(s2-1);
    a1 = s1 + 0;
    f0 = func_08A922F4(a0, a1);
    goto L_08A8DAA8;
L_08A8DAA8:;
    v0 = LD32(sp+632);
    goto L_08A8D178;
L_08A8DAB0:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8DAB8;
L_08A8DAB8:;
    cnd_ = v0 == 0;
    if (cnd_) { s6 = s6 - 1; goto L_08A8D940; }
    goto L_08A8DAC0;
L_08A8DAC0:;
    v0 = s5 & 0x100;
    goto L_08A8D94C;
L_08A8DAC8:;
    s5 = (s5 & ~(0x7u << 7)) | ((0 & 0x7) << 7);
    goto L_08A8D918;
L_08A8DAD0:;
    v0 = s5 & 0x80;
    cnd_ = v0 == 0;
    v0 = s5 & 0x100;
    if (cnd_) { goto L_08A8D94C; }
    goto L_08A8DADC;
L_08A8DADC:;
    s5 = (s5 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    goto L_08A8D918;
L_08A8DAE4:;
    a0 = LD32(sp+636);
    v0 = D_08AE9480 - (-27520);
    v0 = v0 - 27520;
    v1 = a0 << 1;
    v1 = v1 + v0;
    v1 = (u32)(s32)LD_S16(v1);
    ST32(sp+636, v1);
    goto L_08A8DAC8;
L_08A8DB04:;
    v1 = LD32(sp+636);
    v0 = v1 << 1;
    v1 = D_08AE9480 - (-27520);
    v1 = v1 - 27520;
    v0 = v0 + v1;
    v0 = (u32)(s32)LD_S16(v0);
    v1 = (s32)v0 < 9;
    cnd_ = v1 == 0;
    ST32(sp+636, v0);
    if (cnd_) { goto L_08A8DAC8; }
    goto L_08A8DB28;
L_08A8DB28:;
    v0 = s5 & 0x100;
    goto L_08A8D94C;
L_08A8DB30:;
    a0 = LD32(sp+636);
    v0 = (s32)a0 < 11;
    cnd_ = v0 == 0;
    if (cnd_) { s5 = (s5 & ~(0x7u << 7)) | ((0 & 0x7) << 7); goto L_08A8D918; }
    goto L_08A8DB40;
L_08A8DB40:;
    v0 = s5 & 0x100;
    goto L_08A8D94C;
L_08A8DB48:;
    v0 = s5 & 0x200;
    cnd_ = v0 == 0;
    v0 = sp + 273;
    if (cnd_) { goto L_08A8D948; }
    goto L_08A8DB54;
L_08A8DB54:;
    cnd_ = s2 != v0;
    v0 = 16;
    if (cnd_) { goto L_08A8D948; }
    goto L_08A8DB5C;
L_08A8DB5C:;
    ST32(sp+636, v0);
    s5 = (s5 & ~(0x1u << 9)) | ((0 & 0x1) << 9);
    goto L_08A8D918;
L_08A8DB68:;
    s6 = s6 - 1;
    v1 = s6 < 0x15du;
    v0 = 348;
    if (v1 == 0) s6 = v0;
    s6 = s6 + 1;
    ST32(sp+644, 0);
    s5 = s5 | 0x780;
    s7 = 0 + 0;
    ST32(sp+652, 0);
    s2 = sp + 272;
    cnd_ = s6 == 0;
    ST32(sp+648, 0);
    if (cnd_) { goto L_08A8DC18; }
    goto L_08A8DB98;
L_08A8DB98:;
    v0 = LD32(s1);
    goto L_08A8DB9C;
L_08A8DB9C:;
    s0 = LD_U8(v0);
    v1 = s0 - 43;
    v0 = v1 < 0x3bu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A8DC0C; }
    goto L_08A8DBB0;
L_08A8DBB0:;
    v1 = D_08AE97DC - (-26660);
    v1 = v1 - 26660;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A8DBC8u: goto L_08A8DBC8; case 0x08A8DBD4u: goto L_08A8DBD4; case 0x08A8DC0Cu: goto L_08A8DC0C; case 0x08A8DDBCu: goto L_08A8DDBC; case 0x08A8DDD0u: goto L_08A8DDD0; case 0x08A8DDE8u: goto L_08A8DDE8; default: rs_break(0, 0x08a8dbc0); }
L_08A8DBC8:;
    v0 = s5 & 0x100;
    cnd_ = v0 != 0;
    if (cnd_) { s5 = (s5 & ~(0x1u << 7)) | ((0 & 0x1) << 7); goto L_08A8DDB4; }
    goto L_08A8DBD4;
L_08A8DBD4:;
    s5 = (s5 & ~(0x3u << 7)) | ((0 & 0x3) << 7);
    goto L_08A8DBD8;
L_08A8DBD8:;
    ST8(s2, s0);
    s2 = s2 + 1;
    goto L_08A8DBE0;
L_08A8DBE0:;
    v0 = LD32(s1+4);
    s6 = s6 - 1;
    s3 = s3 + 1;
    v0 = v0 - 1;
    cnd_ = (s32)v0 <= 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A8DD9C; }
    goto L_08A8DBF8;
L_08A8DBF8:;
    v0 = LD32(s1);
    v0 = v0 + 1;
    ST32(s1, v0);
    goto L_08A8DC04;
L_08A8DC04:;
    cnd_ = s6 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08A8DB9C; }
    goto L_08A8DC0C;
L_08A8DC0C:;
    v0 = s5 + 0;
    goto L_08A8DC10;
L_08A8DC10:;
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    goto L_08A8DC14;
L_08A8DC14:;
    if (s7 != 0) s5 = v0;
    goto L_08A8DC18;
L_08A8DC18:;
    v0 = s5 & 0x100;
    cnd_ = v0 == 0;
    v0 = s5 & 0x10;
    if (cnd_) { goto L_08A8DC64; }
    goto L_08A8DC24;
L_08A8DC24:;
    v0 = s5 & 0x400;
    cnd_ = v0 != 0;
    v1 = sp + 272;
    if (cnd_) { goto L_08A8DD68; }
    goto L_08A8DC30;
L_08A8DC30:;
    s2 = s2 - 1;
    s0 = (u32)(s32)LD_S8(s2);
    v1 = s0 ^ 0x65;
    v0 = s0 ^ 0x45;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    s3 = s3 - 1;
    if (cnd_) { goto L_08A8DD4C; }
    goto L_08A8DC54;
L_08A8DC54:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    f0 = func_08A922F4(a0, a1);
    goto L_08A8DC60;
L_08A8DC60:;
    v0 = s5 & 0x10;
    goto L_08A8DC64;
L_08A8DC64:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = (u32)(s32)LD_S8(s4); goto L_08A8D110; }
    goto L_08A8DC6C;
L_08A8DC6C:;
    v1 = s5 & 0x600;
    v0 = 1024;
    cnd_ = v1 == v0;
    ST8(s2, 0);
    if (cnd_) { goto L_08A8DD34; }
    goto L_08A8DC7C;
L_08A8DC7C:;
    v1 = LD32(sp+648);
    cnd_ = v1 != 0;
    a0 = LD32(sp+652);
    if (cnd_) { goto L_08A8DCDC; }
    goto L_08A8DC88;
L_08A8DC88:;
    a0 = LD32(sp+628);
    goto L_08A8DC8C;
L_08A8DC8C:;
    a1 = sp + 272;
    a2 = 0 + 0;
    { u64 r_ = func_08A89F40(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8DC98;
L_08A8DC98:;
    a0 = v0 + 0;
    v0 = s5 & 0x1;
    cnd_ = v0 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08A8DCB4; }
    goto L_08A8DCA8;
L_08A8DCA8:;
    v0 = s5 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8DCC8; }
    goto L_08A8DCB4;
L_08A8DCB4:;
    v1 = LD32(fp);
    ST32(v1, a0);
    ST32(v1+4, a1);
    fp = fp + 4;
    goto L_08A8D3B0;
L_08A8DCC8:;
    s0 = LD32(fp);
    { rv_t r_ = func_08A93FCC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8DCD0;
L_08A8DCD0:;
    fp = fp + 4;
    ST32(s0, FBITS(f0));
    goto L_08A8D3B0;
L_08A8DCDC:;
    a2 = 0 + 0;
    a3 = 10;
    a1 = a0 + 1;
    a0 = LD32(sp+628);
    { rv_t r_ = func_08A8AFD4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8DCF0;
L_08A8DCF0:;
    v1 = LD32(sp+648);
    a2 = v0 - v1;
    goto L_08A8DCF8;
L_08A8DCF8:;
    a0 = LD32(sp+648);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(sp+628); goto L_08A8DC8C; }
    goto L_08A8DD04;
L_08A8DD04:;
    v1 = LD32(sp+652);
    a0 = LD32(sp+652);
    v0 = sp + 611;
    v0 = v1 < v0;
    a1 = D_08AE94A4 - (-27484);
    v1 = sp + 610;
    if (v0 == 0) a0 = v1;
    a1 = a1 - 27484;
    ST32(sp+652, a0);
    { rv_t r_ = func_08A89470(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8DD2C;
L_08A8DD2C:;
    a0 = LD32(sp+628);
    goto L_08A8DC8C;
L_08A8DD34:;
    v0 = LD32(sp+644);
    ST32(sp+652, s2);
    s7 = s7 - v0;
    a2 = 0 - s7;
    ST32(sp+648, s7);
    goto L_08A8DCF8;
L_08A8DD4C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    s2 = s2 - 1;
    f0 = func_08A922F4(a0, a1);
    goto L_08A8DD5C;
L_08A8DD5C:;
    s0 = (u32)(s32)LD_S8(s2);
    s3 = s3 - 1;
    goto L_08A8DC54;
L_08A8DD68:;
    v0 = v1 < s2;
    cnd_ = v0 == 0;
    v0 = LD32(sp+632);
    if (cnd_) { goto L_08A8D178; }
    goto L_08A8DD74;
L_08A8DD74:;
    s2 = s2 - 1;
    goto L_08A8DD78;
L_08A8DD78:;
    a0 = (u32)(s32)LD_S8(s2);
    a1 = s1 + 0;
    f0 = func_08A922F4(a0, a1);
    goto L_08A8DD84;
L_08A8DD84:;
    a0 = sp + 272;
    v1 = a0 < s2;
    cnd_ = v1 != 0;
    s2 = s2 - 1;
    if (cnd_) { goto L_08A8DD78; }
    goto L_08A8DD94;
L_08A8DD94:;
    v0 = LD32(sp+632);
    goto L_08A8D178;
L_08A8DD9C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8DDA4;
L_08A8DDA4:;
    cnd_ = v0 == 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08A8DC04; }
    goto L_08A8DDAC;
L_08A8DDAC:;
    v0 = (v0 & ~(0x1u << 8)) | ((0 & 0x1) << 8);
    goto L_08A8DC14;
L_08A8DDB4:;
    s7 = s7 + 1;
    goto L_08A8DBE0;
L_08A8DDBC:;
    v0 = s5 & 0x80;
    cnd_ = v0 == 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08A8DC10; }
    goto L_08A8DDC8;
L_08A8DDC8:;
    s5 = (s5 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    goto L_08A8DBD8;
L_08A8DDD0:;
    v0 = s5 & 0x200;
    cnd_ = v0 == 0;
    v0 = (u32)-641;
    if (cnd_) { goto L_08A8DC0C; }
    goto L_08A8DDDC;
L_08A8DDDC:;
    s5 = s5 & v0;
    ST32(sp+644, s7);
    goto L_08A8DBD8;
L_08A8DDE8:;
    v1 = s5 & 0x500;
    v0 = 1024;
    cnd_ = v1 == v0;
    v0 = (s5 >> 10) & 0x1;
    if (cnd_) { goto L_08A8DE08; }
    goto L_08A8DDF8;
L_08A8DDF8:;
    v1 = 0 < s7;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08A8DC10; }
    goto L_08A8DE08;
L_08A8DE08:;
    v0 = s5 & 0x200;
    cnd_ = v0 != 0;
    v0 = s5 + 0;
    if (cnd_) { goto L_08A8DE24; }
    goto L_08A8DE14;
L_08A8DE14:;
    a0 = LD32(sp+644);
    ST32(sp+652, s2);
    s7 = s7 - a0;
    ST32(sp+648, s7);
    goto L_08A8DE24;
L_08A8DE24:;
    v0 = (v0 & ~(0x3u << 9)) | ((0 & 0x3) << 9);
    s5 = v0 | 0x180;
    s7 = 0 + 0;
    goto L_08A8DBD8;
L_08A8DE34:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8DE3C;
L_08A8DE3C:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A8D294; }
    goto L_08A8DE44;
L_08A8DE44:;
    v1 = LD32(sp+632);
    goto L_08A8D1BC;
L_08A8DE4C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8DE54;
L_08A8DE54:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s5 & 0x40; goto L_08A8D244; }
    goto L_08A8DE5C;
L_08A8DE5C:;
    v1 = LD32(sp+632);
    goto L_08A8D1BC;
L_08A8DE64:;
    s5 = s5 | 0x1;
    goto L_08A8DE68;
L_08A8DE68:;
    v0 = ((u32)(uintptr_t)func_08A8AFD4) - (-20524);
    v0 = v0 - 20524;
    ST32(sp+640, v0);
    s0 = 3;
    v0 = 10;
    goto L_08A8DE7C;
L_08A8DE7C:;
    ST32(sp+636, v0);
    goto L_08A8D238;
L_08A8DE84:;
    a1 = LD_U8(s4);
    s5 = s5 | 0x2;
    goto L_08A8D1D0;
L_08A8DE90:;
    s5 = s5 | 0x1;
    goto L_08A8DE94;
L_08A8DE94:;
    v0 = ((u32)(uintptr_t)func_08A91DB4) - (7604);
    v0 = v0 + 7604;
    s0 = 3;
    v1 = 8;
    ST32(sp+640, v0);
    goto L_08A8DEA8;
L_08A8DEA8:;
    ST32(sp+636, v1);
    goto L_08A8D238;
L_08A8DEB0:;
    s5 = s5 | 0x1;
    goto L_08A8DEB4;
L_08A8DEB4:;
    s0 = 2;
    goto L_08A8D238;
L_08A8DEBC:;
    a1 = s4 + 0;
    a0 = sp + 16;
    v0 = func_08A8E0A4(a0, a1);
    goto L_08A8DEC8;
L_08A8DEC8:;
    s4 = v0 + 0;
    s5 = s5 | 0x40;
    s0 = 1;
    goto L_08A8D238;
L_08A8DED8:;
    s0 = 4;
    goto L_08A8D238;
L_08A8DEE0:;
    a1 = LD_U8(s4);
    v0 = 104;
    v1 = (u32)(s32)(s8)a1;
    cnd_ = v1 == v0;
    if (cnd_) { s4 = s4 + 1; goto L_08A8DEFC; }
    goto L_08A8DEF4;
L_08A8DEF4:;
    s5 = s5 | 0x4;
    goto L_08A8D1D0;
L_08A8DEFC:;
    a1 = LD_U8(s4);
    s5 = s5 | 0x8;
    goto L_08A8D1D0;
L_08A8DF08:;
    v0 = ((u32)(uintptr_t)func_08A8AFD4) - (-20524);
    v0 = v0 - 20524;
    s0 = 3;
    ST32(sp+640, v0);
    ST32(sp+636, 0);
    goto L_08A8D238;
L_08A8DF20:;
    a1 = LD_U8(s4);
    v0 = 108;
    v1 = (u32)(s32)(s8)a1;
    cnd_ = v1 == v0;
    if (cnd_) { s4 = s4 + 1; goto L_08A8DE84; }
    goto L_08A8DF34;
L_08A8DF34:;
    s5 = s5 | 0x1;
    goto L_08A8D1D0;
L_08A8DF3C:;
    v0 = s5 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = (u32)(s32)LD_S8(s4); goto L_08A8D110; }
    goto L_08A8DF48;
L_08A8DF48:;
    v0 = s5 & 0x8;
    cnd_ = v0 == 0;
    v0 = s5 & 0x4;
    if (cnd_) { goto L_08A8DF64; }
    goto L_08A8DF54;
L_08A8DF54:;
    v0 = LD32(fp);
    fp = fp + 4;
    ST8(v0, s3);
    goto L_08A8D10C;
L_08A8DF64:;
    cnd_ = v0 == 0;
    v0 = s5 & 0x1;
    if (cnd_) { goto L_08A8DF7C; }
    goto L_08A8DF6C;
L_08A8DF6C:;
    v0 = LD32(fp);
    fp = fp + 4;
    ST16(v0, s3);
    goto L_08A8D10C;
L_08A8DF7C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(fp); goto L_08A8DFAC; }
    goto L_08A8DF84;
L_08A8DF84:;
    v0 = s5 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(fp); goto L_08A8DFAC; }
    goto L_08A8DF90;
L_08A8DF90:;
    a0 = LD32(fp);
    v0 = s3 + 0;
    v1 = (u32)((s32)s3 >> 31);
    ST32(a0, v0);
    ST32(a0+4, v1);
    fp = fp + 4;
    goto L_08A8D10C;
L_08A8DFAC:;
    fp = fp + 4;
    ST32(v0, s3);
    goto L_08A8D10C;
L_08A8DFB8:;
    v0 = ((u32)(uintptr_t)func_08A91DB4) - (7604);
    v0 = v0 + 7604;
    ST32(sp+640, v0);
    s5 = s5 | 0x220;
    s0 = 3;
    v1 = 16;
    goto L_08A8DEA8;
L_08A8DFD4:;
    v0 = ((u32)(uintptr_t)func_08A91DB4) - (7604);
    v0 = v0 + 7604;
    ST32(sp+640, v0);
    goto L_08A8DFE0;
L_08A8DFE0:;
    a0 = 10;
    ST32(sp+636, a0);
    s0 = 3;
    goto L_08A8D238;
L_08A8DFF0:;
    v0 = D_08AE9044 - (-28604);
    v0 = v0 - 28604;
    v0 = s0 + v0;
    v1 = LD_U8(v0);
    a0 = ((u32)(uintptr_t)func_08A8AFD4) - (-20524);
    a0 = a0 - 20524;
    ST32(sp+640, a0);
    v1 = v1 & 0x1;
    s5 = s5 | v1;
    goto L_08A8DFE0;
L_08A8E018:;
    v0 = ((u32)(uintptr_t)func_08A91DB4) - (7604);
    v0 = v0 + 7604;
    ST32(sp+640, v0);
    s5 = s5 | 0x200;
    s0 = 3;
    v0 = 16;
    goto L_08A8DE7C;
L_08A8E034:;
    a1 = v0 - 28604;
    v1 = a0 + a1;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A8D12C; }
    goto L_08A8E04C;
L_08A8E04C:;
    v0 = LD32(s1+4);
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8E08C; }
    goto L_08A8E058;
L_08A8E058:;
    a0 = LD32(s1);
    goto L_08A8E05C;
L_08A8E05C:;
    v0 = LD_U8(a0);
    v0 = v0 + s0;
    v1 = LD_U8(v0);
    v1 = v1 & 0x8;
    cnd_ = v1 == 0;
    v1 = a0 + 1;
    if (cnd_) { goto L_08A8D10C; }
    goto L_08A8E074;
L_08A8E074:;
    v0 = LD32(s1+4);
    s3 = s3 + 1;
    v0 = v0 - 1;
    ST32(s1+4, v0);
    ST32(s1, v1);
    goto L_08A8E04C;
L_08A8E08C:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A89144(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8E094;
L_08A8E094:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_08A8E05C; }
    goto L_08A8E09C;
L_08A8E09C:;
    a0 = (u32)(s32)LD_S8(s4);
    goto L_08A8D110;
}

/* 08A8E0A4 */
u32 func_08A8E0A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A8E0A4:;
    a2 = (u32)(s32)LD_S8(a1);
    v0 = 94;
    a1 = a1 + 1;
    cnd_ = a2 == v0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A8E16C; }
    goto L_08A8E0B8;
L_08A8E0B8:;
    a3 = 0 + 0;
    goto L_08A8E0BC;
L_08A8E0BC:;
    v1 = a0 + a3;
    a3 = a3 + 1;
    v0 = (s32)a3 < 256;
    cnd_ = v0 != 0;
    ST8(v1, t0);
    if (cnd_) { goto L_08A8E0BC; }
    goto L_08A8E0D0;
L_08A8E0D0:;
    cnd_ = a2 == 0;
    v0 = a1 - 1;
    if (cnd_) { goto L_08A8E154; }
    goto L_08A8E0D8;
L_08A8E0D8:;
    v0 = 1;
    t0 = v0 - t0;
    t1 = 45;
    t2 = 93;
    goto L_08A8E0E8;
L_08A8E0E8:;
    v0 = a0 + a2;
    ST8(v0, t0);
    a3 = (u32)(s32)LD_S8(a1);
    goto L_08A8E0F4;
L_08A8E0F4:;
    cnd_ = a3 != t1;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A8E138; }
    goto L_08A8E0FC;
L_08A8E0FC:;
    a3 = (u32)(s32)LD_S8(a1);
    v0 = a3 ^ 0x5d;
    v0 = v0 < 0x1u;
    v1 = (s32)a3 < (s32)a2;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = 45; goto L_08A8E0E8; }
    goto L_08A8E118;
L_08A8E118:;
    a1 = a1 + 1;
    goto L_08A8E11C;
L_08A8E11C:;
    a2 = a2 + 1;
    v0 = a0 + a2;
    v1 = (s32)a2 < (s32)a3;
    cnd_ = v1 != 0;
    ST8(v0, t0);
    if (cnd_) { goto L_08A8E11C; }
    goto L_08A8E130;
L_08A8E130:;
    a3 = (u32)(s32)LD_S8(a1);
    goto L_08A8E0F4;
L_08A8E138:;
    v0 = (s32)a3 < 46;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8E15C; }
    goto L_08A8E144;
L_08A8E144:;
    cnd_ = a3 == 0;
    v0 = a1 - 1;
    if (cnd_) { goto L_08A8E154; }
    goto L_08A8E14C;
L_08A8E14C:;
    a2 = a3 + 0;
    goto L_08A8E0E8;
L_08A8E154:;
    return v0;
L_08A8E15C:;
    cnd_ = a3 != t2;
    v0 = a1 + 0;
    if (cnd_) { goto L_08A8E14C; }
    goto L_08A8E164;
L_08A8E164:;
    goto L_08A8E154;
L_08A8E16C:;
    a2 = (u32)(s32)LD_S8(a1);
    t0 = 1;
    a1 = a1 + 1;
    goto L_08A8E0B8;
}

/* 08A8E17C */
rv_t func_08A8E17C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A8E17C:;
    sp = sp - 112;
    v0 = 520;
    v1 = 0x7fff0000u;
    v1 = v1 | 0xffff;
    ST16(sp+12, v0);
    v0 = (u32)-1;
    ST32(sp+20, v1);
    ST32(sp+8, v1);
    s1 = a2 + 0;
    s0 = a1 + 0;
    ST32(sp+16, a0);
    ST32(sp, a0);
    ST16(sp+14, v0);
    v0 = func_08A870E0();
    goto L_08A8E1C0;
L_08A8E1C0:;
    a0 = v0 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08A8B408(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A8E1D4;
L_08A8E1D4:;
    v1 = LD32(sp);
    ST8(v1, 0);
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
}

/* 08A8E1F0 */
u32 func_08A8E1F0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A8E1F0:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a3 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A8E250; }
    goto L_08A8E20C;
L_08A8E20C:;
    v0 = func_08A8E3B4(a1, a2, a3);
    goto L_08A8E214;
L_08A8E214:;
    v1 = v0 + 0;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = 138;
    if (cnd_) { goto L_08A8E240; }
    goto L_08A8E228;
L_08A8E228:;
    v0 = a0 + 0;
    sp = sp + 32;
    return v0;
L_08A8E240:;
    ST32(s0, 0);
    a0 = (u32)-1;
    ST32(s1, v0);
    goto L_08A8E228;
L_08A8E250:;
    a1 = sp + 0;
    a2 = 0 + 0;
    goto L_08A8E20C;
}

/* 08A8E25C */
u32 func_08A8E25C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A8E25C:;
    sp = sp - 80;
    v0 = (u32)-1;
    fp = a1 + 0;
    s7 = a2 + 0;
    s6 = 0 + 0;
    s2 = t0 + 0;
    s1 = a3 + 0;
    if (a1 == 0) s1 = v0;
    s0 = a1 + 0;
    ST32(sp+16, a0);
    cnd_ = s1 == 0;
    s3 = LD32(a2);
    if (cnd_) { goto L_08A8E348; }
    goto L_08A8E2B4;
L_08A8E2B4:;
    a2 = LD32(s3);
    goto L_08A8E2B8;
L_08A8E2B8:;
    a0 = LD32(sp+16);
    a1 = sp + 0;
    a3 = s2 + 0;
    s4 = LD32(s2);
    s5 = LD32(s2+4);
    v0 = func_08A8E1F0(a0, a1, a2, a3);
    goto L_08A8E2D0;
L_08A8E2D0:;
    a1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v0 = s1 - a1;
    if (cnd_) { goto L_08A8E3A0; }
    goto L_08A8E2E0;
L_08A8E2E0:;
    v0 = v0 < s6;
    v0 = v0 ^ 0x1;
    v1 = a1 < s1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2, s4); goto L_08A8E394; }
    goto L_08A8E2F8;
L_08A8E2F8:;
    cnd_ = fp == 0;
    s6 = s6 + a1;
    if (cnd_) { goto L_08A8E330; }
    goto L_08A8E300;
L_08A8E300:;
    cnd_ = (s32)a1 <= 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A8E324; }
    goto L_08A8E308;
L_08A8E308:;
    v0 = sp + a0;
    v1 = LD_U8(v0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)a1;
    ST8(s0, v1);
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A8E308; }
    goto L_08A8E324;
L_08A8E324:;
    v0 = LD32(s7);
    v0 = v0 + 4;
    ST32(s7, v0);
    goto L_08A8E330;
L_08A8E330:;
    v0 = LD32(s3);
    cnd_ = v0 == 0;
    s3 = s3 + 4;
    if (cnd_) { goto L_08A8E380; }
    goto L_08A8E33C;
L_08A8E33C:;
    v0 = s6 < s1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s3); goto L_08A8E2B8; }
    goto L_08A8E348;
L_08A8E348:;
    v1 = s6 + 0;
    goto L_08A8E34C;
L_08A8E34C:;
    v0 = v1 + 0;
    sp = sp + 80;
    return v0;
L_08A8E380:;
    cnd_ = fp != 0;
    if (cnd_) { ST32(s7, 0); goto L_08A8E388; }
    goto L_08A8E388;
L_08A8E388:;
    v1 = s6 - 1;
    goto L_08A8E38C;
L_08A8E38C:;
    ST32(s2, 0);
    goto L_08A8E34C;
L_08A8E394:;
    s1 = 0 + 0;
    ST32(s2+4, s5);
    goto L_08A8E33C;
L_08A8E3A0:;
    a0 = LD32(sp+16);
    v0 = 138;
    v1 = (u32)-1;
    ST32(a0, v0);
    goto L_08A8E38C;
}

/* 08A8E3B4 */
u32 func_08A8E3B4(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A8E3B4:;
    sp = sp - 32;
    v0 = D_08B1E430 - (-7120);
    s2 = v0 - 7120;
    a0 = s2 + 0;
    s3 = a3 + 0;
    s1 = a1 + 0;
    s0 = a2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8E3E8;
L_08A8E3E8:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a1 = D_08AE98C8 - (-26424);
    if (cnd_) { goto L_08A8E424; }
    goto L_08A8E3F4;
L_08A8E3F4:;
    cnd_ = s1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E3FC;
L_08A8E3FC:;
    ST8(s1, s0);
    a3 = 1;
    goto L_08A8E404;
L_08A8E404:;
    v0 = a3 + 0;
    sp = sp + 32;
    return v0;
L_08A8E424:;
    a1 = a1 - 26424;
    a0 = s2 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8E430;
L_08A8E430:;
    cnd_ = v0 != 0;
    a1 = D_08AE98D0 - (-26416);
    if (cnd_) { goto L_08A8E624; }
    goto L_08A8E438;
L_08A8E438:;
    cnd_ = s1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E440;
L_08A8E440:;
    v0 = (s32)s0 < 128;
    cnd_ = v0 == 0;
    v0 = s0 - 128;
    if (cnd_) { goto L_08A8E458; }
    goto L_08A8E44C;
L_08A8E44C:;
    a3 = 1;
    ST8(s1, s0);
    goto L_08A8E404;
L_08A8E458:;
    v0 = v0 < 0x780u;
    cnd_ = v0 != 0;
    v1 = s0 - 2048;
    if (cnd_) { goto L_08A8E5FC; }
    goto L_08A8E464;
L_08A8E464:;
    v0 = 0xf7ff;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v1 = 0x1e0000u;
    if (cnd_) { goto L_08A8E4C4; }
    goto L_08A8E474;
L_08A8E474:;
    v0 = 0xffff0000u;
    v0 = v0 | 0x2800;
    v0 = s0 + v0;
    v0 = v0 < 0x800u;
    cnd_ = v0 != 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E48C;
L_08A8E48C:;
    v0 = (u32)-32;
    v1 = (s0 >> 12) & 0xf;
    v1 = v1 | v0;
    a1 = (u32)-128;
    a0 = s0 & 0x3f;
    v0 = (s0 >> 6) & 0x3f;
    ST8(s1, v1);
    a0 = a0 | a1;
    v0 = v0 | a1;
    s1 = s1 + 1;
    a3 = 3;
    goto L_08A8E4B8;
L_08A8E4B8:;
    ST8(s1+1, a0);
    ST8(s1, v0);
    goto L_08A8E404;
L_08A8E4C4:;
    v0 = 0xffff0000u;
    v0 = s0 + v0;
    v1 = v1 | 0xffff;
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    v0 = 0xffe00000u;
    if (cnd_) { goto L_08A8E5BC; }
    goto L_08A8E4DC;
L_08A8E4DC:;
    v1 = 0x3df0000u;
    v0 = s0 + v0;
    v1 = v1 | 0xffff;
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    v0 = (u32)-8;
    if (cnd_) { goto L_08A8E570; }
    goto L_08A8E4F4;
L_08A8E4F4:;
    v0 = 0x3ff0000u;
    v0 = v0 | 0xffff;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E508;
L_08A8E508:;
    v0 = (u32)-4;
    v1 = (s0 >> 30) & 0x1;
    a1 = (u32)-128;
    v1 = v1 | v0;
    v0 = (s0 >> 24) & 0x3f;
    ST8(s1, v1);
    v0 = v0 | a1;
    s1 = s1 + 1;
    v1 = (s0 >> 18) & 0x3f;
    ST8(s1, v0);
    v1 = v1 | a1;
    s1 = s1 + 1;
    v0 = (s0 >> 12) & 0x3f;
    ST8(s1, v1);
    v0 = v0 | a1;
    s1 = s1 + 1;
    a0 = s0 & 0x3f;
    v1 = (s0 >> 6) & 0x3f;
    ST8(s1, v0);
    a0 = a0 | a1;
    v1 = v1 | a1;
    s1 = s1 + 1;
    a3 = 6;
    goto L_08A8E564;
L_08A8E564:;
    ST8(s1+1, a0);
    ST8(s1, v1);
    goto L_08A8E404;
L_08A8E570:;
    v1 = (s0 >> 24) & 0x3;
    a1 = (u32)-128;
    v1 = v1 | v0;
    v0 = (s0 >> 18) & 0x3f;
    ST8(s1, v1);
    v0 = v0 | a1;
    s1 = s1 + 1;
    v1 = (s0 >> 12) & 0x3f;
    ST8(s1, v0);
    v1 = v1 | a1;
    s1 = s1 + 1;
    a0 = s0 & 0x3f;
    v0 = (s0 >> 6) & 0x3f;
    ST8(s1, v1);
    a0 = a0 | a1;
    v0 = v0 | a1;
    s1 = s1 + 1;
    a3 = 5;
    goto L_08A8E4B8;
L_08A8E5BC:;
    v0 = (u32)-16;
    v1 = (s0 >> 18) & 0x7;
    v1 = v1 | v0;
    a1 = (u32)-128;
    v0 = (s0 >> 12) & 0x3f;
    ST8(s1, v1);
    v0 = v0 | a1;
    s1 = s1 + 1;
    a0 = s0 & 0x3f;
    v1 = (s0 >> 6) & 0x3f;
    ST8(s1, v0);
    a0 = a0 | a1;
    v1 = v1 | a1;
    s1 = s1 + 1;
    a3 = 4;
    goto L_08A8E564;
L_08A8E5FC:;
    a0 = s0 & 0x3f;
    a1 = (s0 >> 6) & 0x1f;
    v0 = (u32)-64;
    v1 = (u32)-128;
    a1 = a1 | v0;
    a0 = a0 | v1;
    a3 = 2;
    ST8(s1+1, a0);
    ST8(s1, a1);
    goto L_08A8E404;
L_08A8E624:;
    a1 = a1 - 26416;
    a0 = s2 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8E630;
L_08A8E630:;
    cnd_ = v0 != 0;
    a1 = s0 & 0xff;
    if (cnd_) { goto L_08A8E69C; }
    goto L_08A8E638;
L_08A8E638:;
    a0 = (s0 >> 8) & 0xff;
    cnd_ = s1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E644;
L_08A8E644:;
    cnd_ = a0 == 0;
    v0 = a0 + 127;
    if (cnd_) { goto L_08A8E3F4; }
    goto L_08A8E64C;
L_08A8E64C:;
    v1 = a0 + 32;
    v0 = v0 & 0xff;
    v1 = v1 & 0xff;
    v0 = v0 < 0x1fu;
    v1 = v1 < 0x10u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v1 = a1 - 128;
    if (cnd_) { goto L_08A8E688; }
    goto L_08A8E66C;
L_08A8E66C:;
    v1 = v1 & 0xff;
    v0 = a1 - 64;
    v0 = v0 < 0x3fu;
    v1 = v1 < 0x7du;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { a3 = 2; goto L_08A8E690; }
    goto L_08A8E688;
L_08A8E688:;
    a3 = (u32)-1;
    goto L_08A8E404;
L_08A8E690:;
    ST8(s1+1, a1);
    goto L_08A8E694;
L_08A8E694:;
    ST8(s1, a0);
    goto L_08A8E404;
L_08A8E69C:;
    a1 = D_08AE98D8 - (-26408);
    a1 = a1 - 26408;
    a0 = s2 + 0;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8E6AC;
L_08A8E6AC:;
    cnd_ = v0 != 0;
    a0 = (s0 >> 8) & 0xff;
    if (cnd_) { goto L_08A8E700; }
    goto L_08A8E6B4;
L_08A8E6B4:;
    a1 = s0 & 0xff;
    cnd_ = s1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E6C0;
L_08A8E6C0:;
    cnd_ = a0 == 0;
    v1 = a0 < 0xa1u;
    if (cnd_) { goto L_08A8E3F4; }
    goto L_08A8E6C8;
L_08A8E6C8:;
    v0 = a0 ^ 0xff;
    v1 = v1 ^ 0x1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    v1 = a1 < 0xa1u;
    if (cnd_) { goto L_08A8E688; }
    goto L_08A8E6E0;
L_08A8E6E0:;
    v0 = a1 ^ 0xff;
    v1 = v1 ^ 0x1;
    v0 = 0 < v0;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { a3 = (u32)-1; goto L_08A8E404; }
    goto L_08A8E6F8;
L_08A8E6F8:;
    a3 = 2;
    goto L_08A8E690;
L_08A8E700:;
    a1 = D_08AE98E0 - (-26400);
    a0 = s2 + 0;
    a1 = a1 - 26400;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8E710;
L_08A8E710:;
    cnd_ = v0 != 0;
    t0 = (s0 >> 8) & 0xff;
    if (cnd_) { goto L_08A8E3F4; }
    goto L_08A8E718;
L_08A8E718:;
    v1 = 0 + 0;
    a0 = s0 & 0xff;
    cnd_ = s1 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E728;
L_08A8E728:;
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_08A8E798; }
    goto L_08A8E730;
L_08A8E730:;
    v0 = t0 - 33;
    v0 = v0 < 0x5eu;
    cnd_ = v0 == 0;
    v0 = a0 - 33;
    if (cnd_) { goto L_08A8E688; }
    goto L_08A8E740;
L_08A8E740:;
    v0 = v0 < 0x5eu;
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A8E404; }
    goto L_08A8E74C;
L_08A8E74C:;
    v0 = LD32(s3);
    cnd_ = v0 != 0;
    if (cnd_) { a3 = v1 + 2; goto L_08A8E78C; }
    goto L_08A8E758;
L_08A8E758:;
    v0 = 1;
    v1 = 27;
    ST32(s3, v0);
    v0 = 36;
    ST8(s1, v1);
    s1 = s1 + 1;
    v1 = 3;
    ST8(s1, v0);
    s1 = s1 + 1;
    v0 = 66;
    ST8(s1, v0);
    s1 = s1 + 1;
    a3 = v1 + 2;
    goto L_08A8E78C;
L_08A8E78C:;
    ST8(s1+1, a0);
    ST8(s1, t0);
    goto L_08A8E404;
L_08A8E798:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = v1 + 1; goto L_08A8E694; }
    goto L_08A8E7A0;
L_08A8E7A0:;
    v0 = 27;
    ST32(s3, 0);
    v1 = 3;
    ST8(s1, v0);
    s1 = s1 + 1;
    v0 = 40;
    ST8(s1, v0);
    s1 = s1 + 1;
    v0 = 66;
    ST8(s1, v0);
    s1 = s1 + 1;
    a3 = v1 + 1;
    goto L_08A8E694;
}

/* 08A8E7D4 */
u64 func_08A8E7D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8E7D4:;
    sp = sp - 16;
    v0 = a1 + 0;
    a1 = a2 + 0;
    s1 = a0 + 0;
    a2 = a3 + 0;
    a0 = v0 + 0;
    s0 = D_08C38BEC - (-29716);
    ST32(s0-29716, 0);
    v0 = func_08A85908(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8E804;
L_08A8E804:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s0-29716);
    if (cnd_) { goto L_08A8E82C; }
    goto L_08A8E814;
L_08A8E814:;
    goto L_08A8E818;
L_08A8E818:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A8E82C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, v0); goto L_08A8E814; }
    goto L_08A8E834;
L_08A8E834:;
    goto L_08A8E818;
}

/* 08A8E83C */
u32 func_08A8E83C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8E83C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A8E850;
L_08A8E850:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A8E944; }
    goto L_08A8E85C;
L_08A8E85C:;
    a1 = LD_U16(s0+12);
    goto L_08A8E860;
L_08A8E860:;
    v1 = a1 & 0xffff;
    v0 = v1 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+16); goto L_08A8E8E0; }
    goto L_08A8E870;
L_08A8E870:;
    v0 = v1 & 0x10;
    cnd_ = v0 == 0;
    a0 = (u32)-1;
    if (cnd_) { goto L_08A8E90C; }
    goto L_08A8E87C;
L_08A8E87C:;
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+16); goto L_08A8E8D8; }
    goto L_08A8E888;
L_08A8E888:;
    v1 = LD32(s0+48);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s0+16); goto L_08A8E8C0; }
    goto L_08A8E894;
L_08A8E894:;
    v0 = s0 + 64;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s0+48, 0); goto L_08A8E8BC; }
    goto L_08A8E8A0;
L_08A8E8A0:;
    v0 = func_08A870E0();
    goto L_08A8E8A8;
L_08A8E8A8:;
    a1 = LD32(s0+48);
    a0 = v0 + 0;
    v0 = func_08A8650C(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_08A8E8B4;
L_08A8E8B4:;
    a1 = LD_U16(s0+12);
    ST32(s0+48, 0);
    goto L_08A8E8BC;
L_08A8E8BC:;
    v1 = LD32(s0+16);
    goto L_08A8E8C0;
L_08A8E8C0:;
    v0 = (u32)-37;
    v0 = a1 & v0;
    a1 = v0 + 0;
    ST16(s0+12, v0);
    ST32(s0+4, 0);
    ST32(s0, v1);
    goto L_08A8E8D8;
L_08A8E8D8:;
    v0 = a1 | 0x8;
    ST16(s0+12, v0);
    goto L_08A8E8E0;
L_08A8E8E0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A8E934; }
    goto L_08A8E8E8;
L_08A8E8E8:;
    v1 = LD_U16(s0+12);
    goto L_08A8E8EC;
L_08A8E8EC:;
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = v1 & 0x2;
    if (cnd_) { goto L_08A8E920; }
    goto L_08A8E8F8;
L_08A8E8F8:;
    v0 = LD32(s0+20);
    ST32(s0+8, 0);
    v0 = 0 - v0;
    ST32(s0+24, v0);
    goto L_08A8E908;
L_08A8E908:;
    a0 = 0 + 0;
    goto L_08A8E90C;
L_08A8E90C:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_08A8E920:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A8E92C; }
    goto L_08A8E928;
L_08A8E928:;
    v1 = LD32(s0+20);
    goto L_08A8E92C;
L_08A8E92C:;
    ST32(s0+8, v1);
    goto L_08A8E908;
L_08A8E934:;
    a0 = s0 + 0;
    func_08A87184(a0);
    goto L_08A8E93C;
L_08A8E93C:;
    v1 = LD_U16(s0+12);
    goto L_08A8E8EC;
L_08A8E944:;
    v0 = func_08A870E0();
    goto L_08A8E94C;
L_08A8E94C:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A8E954;
L_08A8E954:;
    a1 = LD_U16(s0+12);
    goto L_08A8E860;
}

/* 08A8E95C */
u64 func_08A8E95C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A8E95C:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = D_08C38BEC - (-29716);
    ST32(s0-29716, 0);
    v0 = func_08A859AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A8E980;
L_08A8E980:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s0-29716);
    if (cnd_) { goto L_08A8E9A8; }
    goto L_08A8E990;
L_08A8E990:;
    goto L_08A8E994;
L_08A8E994:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A8E9A8:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, v0); goto L_08A8E990; }
    goto L_08A8E9B0;
L_08A8E9B0:;
    goto L_08A8E994;
}

/* 08A8E9B8 */
u32 func_08A8E9B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A8E9B8:;
    sp = sp - 32;
    t5 = a1 + 0;
    s4 = a0 + 0;
    s2 = LD32(a1+16);
    v0 = LD32(a0+16);
    v0 = (s32)v0 < (s32)s2;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A8EBD4; }
    goto L_08A8E9F8;
L_08A8E9F8:;
    s2 = s2 - 1;
    t2 = a1 + 20;
    v0 = s2 << 2;
    s3 = a0 + 20;
    s1 = t2 + v0;
    t4 = s3 + v0;
    v1 = LD32(s1);
    t6 = LD32(t4);
    s6 = t2 + 0;
    v1 = v1 + 1;
    { u32 x_ = t6, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    cnd_ = v1 == 0;
    if (cnd_) { rs_break(0x7, 0x08a8ea28); goto L_08A8EA2C; }
    goto L_08A8EA2C;
L_08A8EA2C:;
    s0 = lo;
    s5 = lo;
    cnd_ = s0 == 0;
    t1 = s3 + 0;
    if (cnd_) { goto L_08A8EAF8; }
    goto L_08A8EA3C;
L_08A8EA3C:;
    t3 = 0 + 0;
    a0 = 0 + 0;
    goto L_08A8EA44;
L_08A8EA44:;
    v1 = LD32(t2);
    a2 = LD32(t1);
    t2 = t2 + 4;
    v0 = v1 & 0xffff;
    { s64 p_ = (s64)(s32)v0 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 >> 16;
    a1 = a2 & 0xffff;
    a2 = a2 >> 16;
    a3 = s1 < t2;
    v0 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 + a0;
    a0 = v0 & 0xffff;
    v0 = v0 >> 16;
    a1 = a1 - a0;
    v1 = lo;
    v1 = v1 + v0;
    t0 = a1 + t3;
    v0 = v1 & 0xffff;
    t3 = (u32)((s32)t0 >> 16);
    a2 = a2 - v0;
    a1 = a2 + t3;
    ST16(t1+2, a1);
    a0 = v1 >> 16;
    t3 = (u32)((s32)a1 >> 16);
    ST16(t1, t0);
    cnd_ = a3 == 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08A8EA44; }
    goto L_08A8EAB4;
L_08A8EAB4:;
    cnd_ = t6 != 0;
    if (cnd_) { a1 = t5 + 0; goto L_08A8EAFC; }
    goto L_08A8EABC;
L_08A8EABC:;
    t4 = t4 - 4;
    v0 = s3 < t4;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s4+16, s2); goto L_08A8EAF8; }
    goto L_08A8EACC;
L_08A8EACC:;
    v0 = LD32(t4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s4+16, s2); goto L_08A8EAF8; }
    goto L_08A8EAD8;
L_08A8EAD8:;
    t4 = t4 - 4;
    goto L_08A8EADC;
L_08A8EADC:;
    v0 = s3 < t4;
    cnd_ = v0 == 0;
    s2 = s2 - 1;
    if (cnd_) { goto L_08A8EAF4; }
    goto L_08A8EAE8;
L_08A8EAE8:;
    v0 = LD32(t4);
    cnd_ = v0 == 0;
    t4 = t4 - 4;
    if (cnd_) { goto L_08A8EADC; }
    goto L_08A8EAF4;
L_08A8EAF4:;
    ST32(s4+16, s2);
    goto L_08A8EAF8;
L_08A8EAF8:;
    a1 = t5 + 0;
    goto L_08A8EAFC;
L_08A8EAFC:;
    a0 = s4 + 0;
    v0 = func_08A90F50(a0, a1);
    goto L_08A8EB04;
L_08A8EB04:;
    cnd_ = (s32)v0 < 0;
    v1 = s5 + 0;
    if (cnd_) { goto L_08A8EBD4; }
    goto L_08A8EB0C;
L_08A8EB0C:;
    s5 = s0 + 1;
    t2 = s6 + 0;
    t3 = 0 + 0;
    a0 = 0 + 0;
    t1 = s3 + 0;
    goto L_08A8EB20;
L_08A8EB20:;
    v1 = LD32(t2);
    a1 = LD32(t1);
    t2 = t2 + 4;
    v0 = v1 & 0xffff;
    v0 = v0 + a0;
    a0 = v0 >> 16;
    a2 = v0 & 0xffff;
    v1 = v1 >> 16;
    v0 = a1 & 0xffff;
    v1 = v1 + a0;
    v0 = v0 - a2;
    t0 = v0 + t3;
    a1 = a1 >> 16;
    v0 = v1 & 0xffff;
    a1 = a1 - v0;
    t3 = (u32)((s32)t0 >> 16);
    a1 = a1 + t3;
    v0 = s1 < t2;
    ST16(t1+2, a1);
    a0 = v1 >> 16;
    t3 = (u32)((s32)a1 >> 16);
    ST16(t1, t0);
    cnd_ = v0 == 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08A8EB20; }
    goto L_08A8EB80;
L_08A8EB80:;
    v0 = s2 << 2;
    t4 = s3 + v0;
    v1 = LD32(t4);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = s5 + 0; goto L_08A8EBD4; }
    goto L_08A8EB94;
L_08A8EB94:;
    t4 = t4 - 4;
    v0 = s3 < t4;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s4+16, s2); goto L_08A8EBD0; }
    goto L_08A8EBA4;
L_08A8EBA4:;
    v0 = LD32(t4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s4+16, s2); goto L_08A8EBD0; }
    goto L_08A8EBB0;
L_08A8EBB0:;
    t4 = t4 - 4;
    goto L_08A8EBB4;
L_08A8EBB4:;
    v0 = s3 < t4;
    cnd_ = v0 == 0;
    s2 = s2 - 1;
    if (cnd_) { goto L_08A8EBCC; }
    goto L_08A8EBC0;
L_08A8EBC0:;
    v0 = LD32(t4);
    cnd_ = v0 == 0;
    if (cnd_) { t4 = t4 - 4; goto L_08A8EBB4; }
    goto L_08A8EBCC;
L_08A8EBCC:;
    ST32(s4+16, s2);
    goto L_08A8EBD0;
L_08A8EBD0:;
    v1 = s5 + 0;
    goto L_08A8EBD4;
L_08A8EBD4:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A8EC00 */
u32 func_08A8EC00(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160); memcpy(stack_ + 160, PTR(sp_in), 16); /* stack-passed arguments */
L_08A8EC00:;
    sp = sp - 160;
    fp = a0 + 0;
    s5 = a3 + 0;
    s4 = a2 + 0;
    s0 = t3 + 0;
    t4 = LD32(a0+64);
    ST32(sp+8, t0);
    ST32(sp+12, t1);
    ST32(sp+16, t2);
    cnd_ = t4 != 0;
    ST32(sp+80, 0);
    if (cnd_) { goto L_08A90024; }
    goto L_08A8EC54;
L_08A8EC54:;
    cnd_ = (s32)s5 < 0;
    v0 = 1;
    if (cnd_) { goto L_08A90018; }
    goto L_08A8EC5C;
L_08A8EC5C:;
    ST32(s0, 0);
    goto L_08A8EC60;
L_08A8EC60:;
    v1 = 0x7ff00000u;
    v0 = s5 & v1;
    cnd_ = v0 == v1;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A8FFB8; }
    goto L_08A8EC70;
L_08A8EC70:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8EC80;
L_08A8EC80:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+16);
    if (cnd_) { goto L_08A8ECE0; }
    goto L_08A8EC88;
L_08A8EC88:;
    v0 = 1;
    a0 = LD32(sp+160);
    ST32(v1, v0);
    v1 = D_08AE98E8 - (-26392);
    v1 = v1 - 26392;
    cnd_ = a0 == 0;
    ST32(sp+92, v1);
    if (cnd_) { goto L_08A8ECAC; }
    goto L_08A8ECA4;
L_08A8ECA4:;
    v0 = v1 + 1;
    ST32(a0, v0);
    goto L_08A8ECAC;
L_08A8ECAC:;
    v0 = LD32(sp+92);
    goto L_08A8ECB0;
L_08A8ECB0:;
    sp = sp + 160;
    return v0;
L_08A8ECE0:;
    a0 = fp + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    t0 = sp + 0;
    t1 = sp + 4;
    v0 = func_08A912C8(a0, a2, a3, t0, t1, 0, 0);
    goto L_08A8ECF8;
L_08A8ECF8:;
    s3 = (s5 >> 20) & 0x7ff;
    cnd_ = s3 == 0;
    ST32(sp+76, v0);
    if (cnd_) { goto L_08A8FF2C; }
    goto L_08A8ED04;
L_08A8ED04:;
    v0 = s4 + 0;
    v1 = s5 + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    v0 = 0x3ff00000u;
    s3 = s3 - 1023;
    v1 = LD32(sp+68);
    s2 = LD32(sp+4);
    ST32(sp+72, 0);
    v1 = (v1 >> 0) & 0xfffff;
    a0 = v0 | v1;
    ST32(sp+68, a0);
    goto L_08A8ED34;
L_08A8ED34:;
    a0 = LD32(sp+64);
    a1 = LD32(sp+68);
    a2 = D_08AE9908 - (-26360);
    a2 = LD32(a2-26360);
    a3 = D_08AE990C - (-26356);
    a3 = LD32(a3-26356);
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8ED50;
L_08A8ED50:;
    a2 = D_08AE9910 - (-26352);
    a2 = LD32(a2-26352);
    a3 = D_08AE9914 - (-26348);
    a3 = LD32(a3-26348);
    a0 = v0 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8ED6C;
L_08A8ED6C:;
    a2 = D_08AE9918 - (-26344);
    a2 = LD32(a2-26344);
    a3 = D_08AE991C - (-26340);
    a3 = LD32(a3-26340);
    a1 = v1 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8ED88;
L_08A8ED88:;
    a0 = s3 + 0;
    s0 = v0 + 0;
    s1 = v1 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8ED98;
L_08A8ED98:;
    a2 = D_08AE9920 - (-26336);
    a2 = LD32(a2-26336);
    a3 = D_08AE9924 - (-26332);
    a3 = LD32(a3-26332);
    a0 = v0 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8EDB4;
L_08A8EDB4:;
    a2 = v0 + 0;
    a3 = v1 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8EDC8;
L_08A8EDC8:;
    s6 = v0 + 0;
    s7 = v1 + 0;
    a0 = v0 + 0;
    a1 = v1 + 0;
    v0 = func_08A93E80(a0, a1);
    goto L_08A8EDDC;
L_08A8EDDC:;
    a0 = s6 + 0;
    a1 = s7 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    ST32(sp+40, v0);
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8EDF4;
L_08A8EDF4:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08A8FEFC; }
    goto L_08A8EDFC;
L_08A8EDFC:;
    a0 = LD32(sp+40);
    a1 = 1;
    v0 = a0 < 0x17u;
    cnd_ = v0 == 0;
    ST32(sp+48, a1);
    if (cnd_) { goto L_08A8EE48; }
    goto L_08A8EE10;
L_08A8EE10:;
    v0 = D_08AE99C8 - (-26168);
    v1 = a0 << 3;
    v0 = v0 - 26168;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = LD32(v1+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    ST32(sp+48, 0);
    v0 = func_08A93B84(a0, a1, a2, a3);
    goto L_08A8EE38;
L_08A8EE38:;
    v0 = (s32)0 < (s32)v0;
    v1 = LD32(sp+40);
    v1 = v1 - v0;
    ST32(sp+40, v1);
    goto L_08A8EE48;
L_08A8EE48:;
    v0 = s2 - s3;
    s0 = v0 - 1;
    ST32(sp+20, 0);
    cnd_ = (s32)s0 < 0;
    ST32(sp+56, s0);
    if (cnd_) { goto L_08A8FEEC; }
    goto L_08A8EE5C;
L_08A8EE5C:;
    a0 = LD32(sp+40);
    cnd_ = (s32)a0 < 0;
    a1 = LD32(sp+56);
    if (cnd_) { goto L_08A8FECC; }
    goto L_08A8EE68;
L_08A8EE68:;
    ST32(sp+24, 0);
    a1 = a1 + a0;
    ST32(sp+60, a0);
    ST32(sp+56, a1);
    goto L_08A8EE78;
L_08A8EE78:;
    a1 = LD32(sp+8);
    s1 = 1;
    v0 = a1 < 0xau;
    if (v0 == 0) a1 = 0;
    v1 = (s32)a1 < 6;
    cnd_ = v1 != 0;
    ST32(sp+8, a1);
    if (cnd_) { goto L_08A8EEA0; }
    goto L_08A8EE94;
L_08A8EE94:;
    a1 = a1 - 4;
    ST32(sp+8, a1);
    s1 = 0 + 0;
    goto L_08A8EEA0;
L_08A8EEA0:;
    v1 = LD32(sp+8);
    a1 = (u32)-1;
    a0 = 1;
    v0 = v1 < 0x6u;
    ST32(sp+52, a0);
    ST32(sp+36, a1);
    cnd_ = v0 == 0;
    ST32(sp+28, a1);
    if (cnd_) { goto L_08A8EEE4; }
    goto L_08A8EEC0;
L_08A8EEC0:;
    v0 = v1 << 2;
    v1 = D_08AE9950 - (-26288);
    v1 = v1 - 26288;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A8EEDCu: goto L_08A8EEDC; case 0x08A8FE84u: goto L_08A8FE84; case 0x08A8FE88u: goto L_08A8FE88; case 0x08A8FEA4u: goto L_08A8FEA4; case 0x08A8FEA8u: goto L_08A8FEA8; default: rs_break(0, 0x08a8eed4); }
L_08A8EEDC:;
    s3 = 18;
    ST32(sp+12, 0);
    goto L_08A8EEE4;
L_08A8EEE4:;
    v0 = s3 < 0x18u;
    ST32(fp+68, 0);
    cnd_ = v0 != 0;
    s0 = 4;
    if (cnd_) { goto L_08A8EF10; }
    goto L_08A8EEF4;
L_08A8EEF4:;
    v1 = 0 + 0;
    goto L_08A8EEF8;
L_08A8EEF8:;
    s0 = s0 << 1;
    v0 = s0 + 20;
    v0 = s3 < v0;
    cnd_ = v0 == 0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08A8EEF8; }
    goto L_08A8EF0C;
L_08A8EF0C:;
    ST32(fp+68, v1);
    goto L_08A8EF10;
L_08A8EF10:;
    a1 = LD32(fp+68);
    a0 = fp + 0;
    v0 = func_08A90660(a0, a1, 0, 0, 0, 0);
    goto L_08A8EF1C;
L_08A8EF1C:;
    ST32(sp+96, v0);
    v1 = LD32(sp+28);
    a0 = LD32(sp+96);
    v0 = v1 < 0xfu;
    v0 = v0 & s1;
    ST32(fp+64, a0);
    cnd_ = v0 == 0;
    ST32(sp+92, a0);
    if (cnd_) { goto L_08A8F22C; }
    goto L_08A8EF3C;
L_08A8EF3C:;
    v1 = s5 + 0;
    v0 = s4 + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    s3 = 2;
    v1 = LD32(sp+40);
    a0 = LD32(sp+28);
    ST32(sp+44, v1);
    cnd_ = (s32)v1 <= 0;
    ST32(sp+32, a0);
    if (cnd_) { goto L_08A8FDF4; }
    goto L_08A8EF64;
L_08A8EF64:;
    v0 = v1 & 0xf;
    s0 = (u32)((s32)v1 >> 4);
    v1 = D_08AE99C8 - (-26168);
    v0 = v0 << 3;
    v1 = v1 - 26168;
    v0 = v0 + v1;
    a0 = s0 & 0x10;
    s6 = LD32(v0);
    s7 = LD32(v0+4);
    cnd_ = a0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A8EFB8; }
    goto L_08A8EF90;
L_08A8EF90:;
    a2 = D_08AE9AB0 - (-25936);
    a2 = LD32(a2-25936);
    a3 = D_08AE9AB4 - (-25932);
    a3 = LD32(a3-25932);
    a1 = s5 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8EFA8;
L_08A8EFA8:;
    s0 = s0 & 0xf;
    s4 = v0 + 0;
    s5 = v1 + 0;
    s3 = 3;
    goto L_08A8EFB8;
L_08A8EFB8:;
    cnd_ = s0 == 0;
    v0 = D_08AE9A90 - (-25968);
    if (cnd_) { goto L_08A8EFFC; }
    goto L_08A8EFC0;
L_08A8EFC0:;
    s1 = v0 - 25968;
    goto L_08A8EFC4;
L_08A8EFC4:;
    v0 = s0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = (u32)((s32)s0 >> 1); goto L_08A8EFF4; }
    goto L_08A8EFD0;
L_08A8EFD0:;
    a2 = LD32(s1);
    a3 = LD32(s1+4);
    a0 = s6 + 0;
    a1 = s7 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8EFE4;
L_08A8EFE4:;
    s3 = s3 + 1;
    s6 = v0 + 0;
    s7 = v1 + 0;
    s0 = (u32)((s32)s0 >> 1);
    goto L_08A8EFF4;
L_08A8EFF4:;
    cnd_ = s0 != 0;
    s1 = s1 + 8;
    if (cnd_) { goto L_08A8EFC4; }
    goto L_08A8EFFC;
L_08A8EFFC:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F010;
L_08A8F010:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    goto L_08A8F018;
L_08A8F018:;
    v0 = LD32(sp+48);
    goto L_08A8F01C;
L_08A8F01C:;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A8F094; }
    goto L_08A8F024;
L_08A8F024:;
    a2 = D_08AE9928 - (-26328);
    a2 = LD32(a2-26328);
    a3 = D_08AE992C - (-26324);
    a3 = LD32(a3-26324);
    a1 = s5 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8F03C;
L_08A8F03C:;
    a0 = LD32(sp+28);
    v0 = (s32)v0 < 0;
    v1 = (s32)0 < (s32)a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8F094; }
    goto L_08A8F054;
L_08A8F054:;
    a1 = LD32(sp+36);
    cnd_ = (s32)a1 <= 0;
    a2 = s4 + 0;
    if (cnd_) { goto L_08A8F204; }
    goto L_08A8F060;
L_08A8F060:;
    ST32(sp+28, a1);
    a3 = s5 + 0;
    a0 = D_08AE9930 - (-26320);
    a0 = LD32(a0-26320);
    a1 = D_08AE9934 - (-26316);
    a1 = LD32(a1-26316);
    s3 = s3 + 1;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F080;
L_08A8F080:;
    s4 = v0 + 0;
    v0 = LD32(sp+40);
    s5 = v1 + 0;
    v0 = v0 - 1;
    ST32(sp+40, v0);
    goto L_08A8F094;
L_08A8F094:;
    a0 = s3 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F09C;
L_08A8F09C:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F0B0;
L_08A8F0B0:;
    a2 = D_08AE9938 - (-26312);
    a2 = LD32(a2-26312);
    a3 = D_08AE993C - (-26308);
    a3 = LD32(a3-26308);
    a0 = v0 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F0CC;
L_08A8F0CC:;
    s6 = v0 + 0;
    v0 = 0xfcc00000u;
    s7 = v0 + v1;
    v1 = LD32(sp+28);
    cnd_ = v1 != 0;
    a0 = LD32(sp+52);
    if (cnd_) { goto L_08A8FB6C; }
    goto L_08A8F0E4;
L_08A8F0E4:;
    a2 = D_08AE9940 - (-26304);
    a2 = LD32(a2-26304);
    a3 = D_08AE9944 - (-26300);
    a3 = LD32(a3-26300);
    a0 = s4 + 0;
    a1 = s5 + 0;
    ST32(sp+84, 0);
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F104;
L_08A8F104:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    s0 = v0 + 0;
    s1 = v1 + 0;
    v0 = func_08A93B84(a0, a1, a2, a3);
    goto L_08A8F120;
L_08A8F120:;
    cnd_ = (s32)v0 <= 0;
    ST32(sp+88, 0);
    if (cnd_) { goto L_08A8F1CC; }
    goto L_08A8F128;
L_08A8F128:;
    a0 = LD32(sp+40);
    goto L_08A8F12C;
L_08A8F12C:;
    v1 = LD32(sp+96);
    a1 = LD32(sp+96);
    a0 = a0 + 1;
    v1 = v1 + 1;
    v0 = 49;
    ST32(sp+92, v1);
    ST32(sp+40, a0);
    ST8(a1, v0);
    goto L_08A8F14C;
L_08A8F14C:;
    a1 = LD32(sp+88);
    a0 = fp + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F158;
L_08A8F158:;
    a1 = LD32(sp+84);
    cnd_ = a1 == 0;
    v0 = LD32(sp+80);
    if (cnd_) { goto L_08A8F184; }
    goto L_08A8F164;
L_08A8F164:;
    v1 = v0 ^ a1;
    v1 = 0 < v1;
    v0 = 0 < v0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(sp+80); goto L_08A8F1BC; }
    goto L_08A8F17C;
L_08A8F17C:;
    a0 = fp + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F184;
L_08A8F184:;
    a1 = LD32(sp+76);
    goto L_08A8F188;
L_08A8F188:;
    a0 = fp + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F190;
L_08A8F190:;
    a0 = LD32(sp+92);
    v1 = LD32(sp+40);
    ST8(a0, 0);
    v0 = v1 + 1;
    a1 = LD32(sp+16);
    ST32(a1, v0);
    v0 = LD32(sp+160);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0, a0); goto L_08A8F1B4; }
    goto L_08A8F1B4;
L_08A8F1B4:;
    v0 = LD32(sp+96);
    goto L_08A8ECB0;
L_08A8F1BC:;
    a0 = fp + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F1C4;
L_08A8F1C4:;
    a1 = LD32(sp+84);
    goto L_08A8F17C;
L_08A8F1CC:;
    a0 = s6 + 0;
    a1 = s7 + 0;
    { u64 r_ = func_08A93F54(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F1D8;
L_08A8F1D8:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    v0 = func_08A93B84(a0, a1, a2, a3);
    goto L_08A8F1EC;
L_08A8F1EC:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8F204; }
    goto L_08A8F1F4;
L_08A8F1F4:;
    v0 = LD32(sp+12);
    goto L_08A8F1F8;
L_08A8F1F8:;
    v0 = ~(0 | v0);
    ST32(sp+40, v0);
    goto L_08A8F14C;
L_08A8F204:;
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    a0 = LD32(sp+32);
    a1 = LD32(sp+96);
    s5 = v1 + 0;
    v1 = LD32(sp+44);
    ST32(sp+28, a0);
    s4 = v0 + 0;
    ST32(sp+40, v1);
    ST32(sp+92, a1);
    goto L_08A8F22C;
L_08A8F22C:;
    v0 = LD32(sp+40);
    a0 = LD32(sp);
    v1 = (s32)v0 < 15;
    v0 = ~(0 | a0);
    v0 = v0 >> 31;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_08A8F468; }
    goto L_08A8F24C;
L_08A8F24C:;
    a0 = LD32(sp+40);
    a1 = LD32(sp+12);
    v0 = LD32(sp+28);
    v1 = a0 << 3;
    a0 = a1 >> 31;
    a1 = (s32)v0 < 1;
    v0 = D_08AE99C8 - (-26168);
    v0 = v0 - 26168;
    v1 = v1 + v0;
    a0 = a0 & a1;
    s6 = LD32(v1);
    s7 = LD32(v1+4);
    cnd_ = a0 == 0;
    s3 = 1;
    if (cnd_) { goto L_08A8F2D4; }
    goto L_08A8F284;
L_08A8F284:;
    v1 = LD32(sp+28);
    ST32(sp+84, 0);
    cnd_ = (s32)v1 < 0;
    ST32(sp+88, 0);
    if (cnd_) { goto L_08A8F1F4; }
    goto L_08A8F294;
L_08A8F294:;
    a2 = D_08AE9940 - (-26304);
    a2 = LD32(a2-26304);
    a3 = D_08AE9944 - (-26300);
    a3 = LD32(a3-26300);
    a0 = s6 + 0;
    a1 = s7 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F2B0;
L_08A8F2B0:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s4 + 0;
    a3 = s5 + 0;
    v0 = func_08A93C0C(a0, a1, a2, a3);
    goto L_08A8F2C4;
L_08A8F2C4:;
    cnd_ = (s32)v0 >= 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_08A8F1F8; }
    goto L_08A8F2CC;
L_08A8F2CC:;
    a0 = LD32(sp+40);
    goto L_08A8F12C;
L_08A8F2D4:;
    a2 = s6 + 0;
    goto L_08A8F2D8;
L_08A8F2D8:;
    a3 = s7 + 0;
    a0 = s4 + 0;
    a1 = s5 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F2E8;
L_08A8F2E8:;
    a1 = v1 + 0;
    a0 = v0 + 0;
    v0 = func_08A93E80(a0, a1);
    goto L_08A8F2F4;
L_08A8F2F4:;
    a0 = v0 + 0;
    s2 = v0 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F300;
L_08A8F300:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F314;
L_08A8F314:;
    a2 = v0 + 0;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F328;
L_08A8F328:;
    a1 = v1 + 0;
    v1 = LD32(sp+92);
    a0 = v0 + 0;
    v0 = s2 + 48;
    ST8(v1, v0);
    v1 = v1 + 1;
    v0 = LD32(sp+28);
    cnd_ = s3 == v0;
    ST32(sp+92, v1);
    if (cnd_) { goto L_08A8F398; }
    goto L_08A8F34C;
L_08A8F34C:;
    a2 = a0 + 0;
    a3 = a1 + 0;
    a0 = D_08AE9930 - (-26320);
    a0 = LD32(a0-26320);
    a1 = D_08AE9934 - (-26316);
    a1 = LD32(a1-26316);
    s3 = s3 + 1;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F36C;
L_08A8F36C:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    s4 = v0 + 0;
    s5 = v1 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F388;
L_08A8F388:;
    cnd_ = v0 != 0;
    a2 = s6 + 0;
    if (cnd_) { goto L_08A8F2D8; }
    goto L_08A8F390;
L_08A8F390:;
    a1 = LD32(sp+76);
    goto L_08A8F188;
L_08A8F398:;
    a2 = a0 + 0;
    a3 = a1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F3A4;
L_08A8F3A4:;
    a2 = v0 + 0;
    a0 = s6 + 0;
    a1 = s7 + 0;
    a3 = v1 + 0;
    s0 = v0 + 0;
    s1 = v1 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8F3C0;
L_08A8F3C0:;
    cnd_ = (s32)v0 < 0;
    a0 = s6 + 0;
    if (cnd_) { goto L_08A8F3EC; }
    goto L_08A8F3C8;
L_08A8F3C8:;
    a1 = s7 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    { u64 r_ = func_08A93A74(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F3D8;
L_08A8F3D8:;
    cnd_ = v0 != 0;
    a1 = LD32(sp+76);
    if (cnd_) { goto L_08A8F188; }
    goto L_08A8F3E0;
L_08A8F3E0:;
    v0 = s2 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8F188; }
    goto L_08A8F3EC;
L_08A8F3EC:;
    v1 = LD32(sp+92);
    v0 = 57;
    v1 = v1 - 1;
    ST32(sp+92, v1);
    v1 = (u32)(s32)LD_S8(v1);
    cnd_ = v1 == v0;
    v1 = 57;
    if (cnd_) { goto L_08A8F424; }
    goto L_08A8F408;
L_08A8F408:;
    v1 = LD32(sp+92);
    goto L_08A8F40C;
L_08A8F40C:;
    v0 = LD_U8(v1);
    a0 = v1 + 1;
    ST32(sp+92, a0);
    v0 = v0 + 1;
    ST8(v1, v0);
    goto L_08A8F184;
L_08A8F424:;
    a0 = LD32(sp+92);
    goto L_08A8F428;
L_08A8F428:;
    a1 = LD32(sp+96);
    cnd_ = a0 == a1;
    a1 = LD32(sp+40);
    if (cnd_) { goto L_08A8F450; }
    goto L_08A8F434;
L_08A8F434:;
    a0 = a0 - 1;
    ST32(sp+92, a0);
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(sp+92); goto L_08A8F428; }
    goto L_08A8F448;
L_08A8F448:;
    v1 = LD32(sp+92);
    goto L_08A8F40C;
L_08A8F450:;
    v1 = LD32(sp+96);
    v0 = 48;
    a1 = a1 + 1;
    ST32(sp+40, a1);
    ST8(v1, v0);
    goto L_08A8F408;
L_08A8F468:;
    v0 = LD32(sp+52);
    s2 = LD32(sp+20);
    s1 = LD32(sp+24);
    ST32(sp+80, 0);
    s6 = (s32)a1 < 2;
    cnd_ = v0 == 0;
    ST32(sp+84, 0);
    if (cnd_) { goto L_08A8F4F0; }
    goto L_08A8F484;
L_08A8F484:;
    cnd_ = s6 != 0;
    a1 = LD32(sp+24);
    if (cnd_) { goto L_08A8FB50; }
    goto L_08A8F48C;
L_08A8F48C:;
    a0 = LD32(sp+28);
    s0 = a0 - 1;
    v0 = (s32)a1 < (s32)s0;
    cnd_ = v0 == 0;
    s1 = a1 - s0;
    if (cnd_) { goto L_08A8F4BC; }
    goto L_08A8F4A0;
L_08A8F4A0:;
    v0 = LD32(sp+60);
    s0 = s0 - a1;
    a1 = a1 + s0;
    v0 = v0 + s0;
    ST32(sp+24, a1);
    s1 = 0 + 0;
    ST32(sp+60, v0);
    goto L_08A8F4BC;
L_08A8F4BC:;
    s3 = LD32(sp+28);
    cnd_ = (s32)s3 < 0;
    v1 = LD32(sp+20);
    if (cnd_) { goto L_08A8FB44; }
    goto L_08A8F4C8;
L_08A8F4C8:;
    v0 = LD32(sp+56);
    a0 = fp + 0;
    a1 = 1;
    v0 = v0 + s3;
    ST32(sp+56, v0);
    v0 = func_08A90AB4(a0, a1, 0, 0, 0, 0);
    goto L_08A8F4E0;
L_08A8F4E0:;
    v1 = LD32(sp+20);
    ST32(sp+84, v0);
    v1 = v1 + s3;
    ST32(sp+20, v1);
    goto L_08A8F4F0;
L_08A8F4F0:;
    a0 = LD32(sp+56);
    v0 = (s32)0 < (s32)s2;
    v1 = (s32)0 < (s32)a0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08A8F528; }
    goto L_08A8F508;
L_08A8F508:;
    a1 = LD32(sp+20);
    s3 = (s32)a0 < (s32)s2 ? a0 : s2;
    a0 = a0 - s3;
    a1 = a1 - s3;
    ST32(sp+56, a0);
    s2 = s2 - s3;
    ST32(sp+20, a1);
    v0 = LD32(sp+24);
    goto L_08A8F528;
L_08A8F528:;
    cnd_ = (s32)v0 <= 0;
    v1 = LD32(sp+52);
    if (cnd_) { goto L_08A8F584; }
    goto L_08A8F530;
L_08A8F530:;
    cnd_ = v1 == 0;
    a1 = LD32(sp+76);
    if (cnd_) { goto L_08A8FB3C; }
    goto L_08A8F538;
L_08A8F538:;
    cnd_ = (s32)s1 <= 0;
    a1 = LD32(sp+84);
    if (cnd_) { goto L_08A8F574; }
    goto L_08A8F540;
L_08A8F540:;
    a0 = fp + 0;
    a2 = s1 + 0;
    v0 = func_08A90D00(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F54C;
L_08A8F54C:;
    a2 = LD32(sp+76);
    a0 = fp + 0;
    a1 = v0 + 0;
    ST32(sp+84, v0);
    v0 = func_08A90AE8(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F560;
L_08A8F560:;
    s0 = v0 + 0;
    a1 = LD32(sp+76);
    a0 = fp + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F570;
L_08A8F570:;
    ST32(sp+76, s0);
    goto L_08A8F574;
L_08A8F574:;
    a0 = LD32(sp+24);
    s0 = a0 - s1;
    cnd_ = s0 != 0;
    a1 = LD32(sp+76);
    if (cnd_) { goto L_08A8FB28; }
    goto L_08A8F584;
L_08A8F584:;
    a1 = 1;
    a0 = fp + 0;
    v0 = func_08A90AB4(a0, a1, 0, 0, 0, 0);
    goto L_08A8F590;
L_08A8F590:;
    a1 = LD32(sp+60);
    cnd_ = (s32)a1 <= 0;
    ST32(sp+88, v0);
    if (cnd_) { goto L_08A8F5B0; }
    goto L_08A8F59C;
L_08A8F59C:;
    a2 = LD32(sp+60);
    a1 = v0 + 0;
    a0 = fp + 0;
    v0 = func_08A90D00(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F5AC;
L_08A8F5AC:;
    ST32(sp+88, v0);
    goto L_08A8F5B0;
L_08A8F5B0:;
    cnd_ = s6 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A8F5F8; }
    goto L_08A8F5B8;
L_08A8F5B8:;
    cnd_ = s4 != 0;
    a0 = LD32(sp+56);
    if (cnd_) { goto L_08A8F5FC; }
    goto L_08A8F5C0;
L_08A8F5C0:;
    v0 = s5 + 0;
    v0 = (v0 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    cnd_ = v0 != 0;
    a1 = LD32(sp+60);
    if (cnd_) { goto L_08A8F600; }
    goto L_08A8F5D0;
L_08A8F5D0:;
    v0 = (s5 >> 20) & 0x7ff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A8F600; }
    goto L_08A8F5DC;
L_08A8F5DC:;
    v0 = LD32(sp+20);
    v1 = LD32(sp+56);
    s0 = 1;
    v0 = v0 + 1;
    v1 = v1 + 1;
    ST32(sp+20, v0);
    ST32(sp+56, v1);
    goto L_08A8F5F8;
L_08A8F5F8:;
    a0 = LD32(sp+56);
    goto L_08A8F5FC;
L_08A8F5FC:;
    a1 = LD32(sp+60);
    goto L_08A8F600;
L_08A8F600:;
    v0 = a0 + 1;
    cnd_ = a1 != 0;
    s3 = v0 & 0x1f;
    if (cnd_) { goto L_08A8FB00; }
    goto L_08A8F60C;
L_08A8F60C:;
    cnd_ = s3 == 0;
    v0 = (s32)s3 < 5;
    if (cnd_) { goto L_08A8F620; }
    goto L_08A8F614;
L_08A8F614:;
    v0 = 32;
    s3 = v0 - s3;
    v0 = (s32)s3 < 5;
    goto L_08A8F620;
L_08A8F620:;
    cnd_ = v0 != 0;
    v0 = (s32)s3 < 4;
    if (cnd_) { goto L_08A8FAD8; }
    goto L_08A8F628;
L_08A8F628:;
    a1 = LD32(sp+56);
    v0 = LD32(sp+20);
    s3 = s3 - 4;
    a1 = a1 + s3;
    v0 = v0 + s3;
    ST32(sp+56, a1);
    ST32(sp+20, v0);
    goto L_08A8F644;
L_08A8F644:;
    s2 = s2 + s3;
    a1 = LD32(sp+20);
    goto L_08A8F64C;
L_08A8F64C:;
    cnd_ = (s32)a1 <= 0;
    a1 = LD32(sp+76);
    if (cnd_) { goto L_08A8F664; }
    goto L_08A8F654;
L_08A8F654:;
    a2 = LD32(sp+20);
    a0 = fp + 0;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F660;
L_08A8F660:;
    ST32(sp+76, v0);
    goto L_08A8F664;
L_08A8F664:;
    v0 = LD32(sp+56);
    cnd_ = (s32)v0 <= 0;
    a1 = LD32(sp+88);
    if (cnd_) { goto L_08A8F680; }
    goto L_08A8F670;
L_08A8F670:;
    a2 = v0 + 0;
    a0 = fp + 0;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F67C;
L_08A8F67C:;
    ST32(sp+88, v0);
    goto L_08A8F680;
L_08A8F680:;
    v1 = LD32(sp+48);
    cnd_ = v1 != 0;
    a0 = LD32(sp+76);
    if (cnd_) { goto L_08A8FA74; }
    goto L_08A8F68C;
L_08A8F68C:;
    a0 = LD32(sp+8);
    goto L_08A8F690;
L_08A8F690:;
    a1 = LD32(sp+28);
    v1 = (s32)a0 < 3;
    v1 = v1 ^ 0x1;
    v0 = (s32)a1 < 1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+52);
    if (cnd_) { goto L_08A8F6E4; }
    goto L_08A8F6AC;
L_08A8F6AC:;
    cnd_ = (s32)a1 < 0;
    a1 = LD32(sp+88);
    if (cnd_) { goto L_08A8F1F4; }
    goto L_08A8F6B4;
L_08A8F6B4:;
    a0 = fp + 0;
    a2 = 5;
    a3 = 0 + 0;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8F6C4;
L_08A8F6C4:;
    a0 = LD32(sp+76);
    a1 = v0 + 0;
    ST32(sp+88, v0);
    v0 = func_08A90F50(a0, a1);
    goto L_08A8F6D4;
L_08A8F6D4:;
    cnd_ = (s32)v0 > 0;
    a0 = LD32(sp+40);
    if (cnd_) { goto L_08A8F12C; }
    goto L_08A8F6DC;
L_08A8F6DC:;
    v0 = LD32(sp+12);
    goto L_08A8F1F8;
L_08A8F6E4:;
    cnd_ = v0 == 0;
    s3 = 1;
    if (cnd_) { goto L_08A8FA24; }
    goto L_08A8F6EC;
L_08A8F6EC:;
    cnd_ = (s32)s2 <= 0;
    a1 = LD32(sp+84);
    if (cnd_) { goto L_08A8F704; }
    goto L_08A8F6F4;
L_08A8F6F4:;
    a2 = s2 + 0;
    a0 = fp + 0;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F700;
L_08A8F700:;
    ST32(sp+84, v0);
    goto L_08A8F704;
L_08A8F704:;
    v1 = LD32(sp+84);
    cnd_ = s0 != 0;
    ST32(sp+80, v1);
    if (cnd_) { goto L_08A8F9DC; }
    goto L_08A8F710;
L_08A8F710:;
    s5 = s4 & 0x1;
    s3 = 1;
    s6 = 57;
    goto L_08A8F71C;
L_08A8F71C:;
    a0 = LD32(sp+76);
    a1 = LD32(sp+88);
    s2 = 1;
    v0 = func_08A8E9B8(a0, a1);
    goto L_08A8F72C;
L_08A8F72C:;
    a0 = LD32(sp+76);
    a1 = LD32(sp+80);
    s4 = v0 + 48;
    v0 = func_08A90F50(a0, a1);
    goto L_08A8F73C;
L_08A8F73C:;
    a1 = LD32(sp+88);
    a2 = LD32(sp+84);
    a0 = fp + 0;
    s0 = v0 + 0;
    v0 = func_08A90FB8(a0, a1, a2);
    goto L_08A8F750;
L_08A8F750:;
    s1 = v0 + 0;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    a0 = LD32(sp+76);
    if (cnd_) { goto L_08A8F9CC; }
    goto L_08A8F760;
L_08A8F760:;
    a1 = s1 + 0;
    a0 = fp + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8F76C;
L_08A8F76C:;
    v1 = LD32(sp+8);
    v0 = s2 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A8F784; }
    goto L_08A8F77C;
L_08A8F77C:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_08A8F9B4; }
    goto L_08A8F784;
L_08A8F784:;
    cnd_ = (s32)s0 < 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_08A8F948; }
    goto L_08A8F78C;
L_08A8F78C:;
    v0 = s0 | a1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A8F7A0; }
    goto L_08A8F798;
L_08A8F798:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_08A8F948; }
    goto L_08A8F7A0;
L_08A8F7A0:;
    cnd_ = (s32)s2 > 0;
    a1 = LD32(sp+92);
    if (cnd_) { goto L_08A8F920; }
    goto L_08A8F7A8;
L_08A8F7A8:;
    ST8(a1, s4);
    a1 = a1 + 1;
    v0 = LD32(sp+28);
    cnd_ = s3 == v0;
    ST32(sp+92, a1);
    if (cnd_) { goto L_08A8F838; }
    goto L_08A8F7BC;
L_08A8F7BC:;
    a1 = LD32(sp+76);
    a0 = fp + 0;
    a2 = 10;
    a3 = 0 + 0;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8F7D0;
L_08A8F7D0:;
    v1 = LD32(sp+80);
    a0 = LD32(sp+84);
    cnd_ = v1 == a0;
    ST32(sp+76, v0);
    if (cnd_) { goto L_08A8F818; }
    goto L_08A8F7E0;
L_08A8F7E0:;
    a1 = LD32(sp+80);
    a2 = 10;
    a3 = 0 + 0;
    a0 = fp + 0;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8F7F4;
L_08A8F7F4:;
    a1 = LD32(sp+84);
    a0 = fp + 0;
    a2 = 10;
    a3 = 0 + 0;
    ST32(sp+80, v0);
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8F80C;
L_08A8F80C:;
    ST32(sp+84, v0);
    goto L_08A8F810;
L_08A8F810:;
    s3 = s3 + 1;
    goto L_08A8F71C;
L_08A8F818:;
    a1 = a0 + 0;
    a2 = 10;
    a0 = fp + 0;
    a3 = 0 + 0;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8F82C;
L_08A8F82C:;
    ST32(sp+84, v0);
    ST32(sp+80, v0);
    goto L_08A8F810;
L_08A8F838:;
    a1 = LD32(sp+76);
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F848;
L_08A8F848:;
    a1 = LD32(sp+88);
    a0 = v0 + 0;
    ST32(sp+76, v0);
    v0 = func_08A90F50(a0, a1);
    goto L_08A8F858;
L_08A8F858:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8F8E4; }
    goto L_08A8F860;
L_08A8F860:;
    v1 = LD32(sp+92);
    goto L_08A8F864;
L_08A8F864:;
    v0 = 57;
    v1 = v1 - 1;
    ST32(sp+92, v1);
    v1 = (u32)(s32)LD_S8(v1);
    cnd_ = v1 == v0;
    v1 = LD32(sp+92);
    if (cnd_) { goto L_08A8F894; }
    goto L_08A8F87C;
L_08A8F87C:;
    v0 = LD_U8(v1);
    a0 = v1 + 1;
    ST32(sp+92, a0);
    v0 = v0 + 1;
    goto L_08A8F88C;
L_08A8F88C:;
    ST8(v1, v0);
    goto L_08A8F14C;
L_08A8F894:;
    v1 = 57;
    a0 = LD32(sp+92);
    goto L_08A8F89C;
L_08A8F89C:;
    a1 = LD32(sp+96);
    cnd_ = a0 == a1;
    a0 = a0 - 1;
    if (cnd_) { goto L_08A8F8C0; }
    goto L_08A8F8A8;
L_08A8F8A8:;
    ST32(sp+92, a0);
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(sp+92); goto L_08A8F89C; }
    goto L_08A8F8B8;
L_08A8F8B8:;
    v1 = LD32(sp+92);
    goto L_08A8F87C;
L_08A8F8C0:;
    a1 = LD32(sp+40);
    v0 = LD32(sp+96);
    v1 = LD32(sp+96);
    a1 = a1 + 1;
    ST32(sp+40, a1);
    v0 = v0 + 1;
    ST32(sp+92, v0);
    v0 = 49;
    goto L_08A8F88C;
L_08A8F8E4:;
    cnd_ = v0 != 0;
    v1 = 48;
    if (cnd_) { goto L_08A8F8FC; }
    goto L_08A8F8EC;
L_08A8F8EC:;
    v0 = s4 & 0x1;
    cnd_ = v0 != 0;
    v1 = LD32(sp+92);
    if (cnd_) { goto L_08A8F864; }
    goto L_08A8F8F8;
L_08A8F8F8:;
    v1 = 48;
    goto L_08A8F8FC;
L_08A8F8FC:;
    a0 = LD32(sp+92);
    goto L_08A8F900;
L_08A8F900:;
    a0 = a0 - 1;
    ST32(sp+92, a0);
    v0 = (u32)(s32)LD_S8(a0);
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(sp+92); goto L_08A8F900; }
    goto L_08A8F914;
L_08A8F914:;
    a0 = a0 + 1;
    ST32(sp+92, a0);
    goto L_08A8F14C;
L_08A8F920:;
    cnd_ = s4 == s6;
    a0 = LD32(sp+92);
    if (cnd_) { goto L_08A8F934; }
    goto L_08A8F928;
L_08A8F928:;
    v0 = s4 + 1;
    ST8(a0, v0);
    goto L_08A8F914;
L_08A8F934:;
    v1 = LD32(sp+92);
    goto L_08A8F938;
L_08A8F938:;
    ST8(v1, s6);
    v1 = v1 + 1;
    ST32(sp+92, v1);
    goto L_08A8F860;
L_08A8F948:;
    cnd_ = (s32)s2 <= 0;
    a1 = LD32(sp+76);
    if (cnd_) { goto L_08A8F984; }
    goto L_08A8F950;
L_08A8F950:;
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8F95C;
L_08A8F95C:;
    a1 = LD32(sp+88);
    a0 = v0 + 0;
    ST32(sp+76, v0);
    v0 = func_08A90F50(a0, a1);
    goto L_08A8F96C;
L_08A8F96C:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08A8F998; }
    goto L_08A8F974;
L_08A8F974:;
    s4 = s4 + 1;
    goto L_08A8F978;
L_08A8F978:;
    v0 = 58;
    cnd_ = s4 == v0;
    v1 = LD32(sp+92);
    if (cnd_) { goto L_08A8F938; }
    goto L_08A8F984;
L_08A8F984:;
    v0 = LD32(sp+92);
    goto L_08A8F988;
L_08A8F988:;
    ST8(v0, s4);
    v0 = v0 + 1;
    ST32(sp+92, v0);
    goto L_08A8F14C;
L_08A8F998:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+92);
    if (cnd_) { goto L_08A8F988; }
    goto L_08A8F9A0;
L_08A8F9A0:;
    v0 = s4 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+92);
    if (cnd_) { goto L_08A8F988; }
    goto L_08A8F9AC;
L_08A8F9AC:;
    s4 = s4 + 1;
    goto L_08A8F978;
L_08A8F9B4:;
    cnd_ = s4 == s6;
    a0 = LD32(sp+92);
    if (cnd_) { goto L_08A8F934; }
    goto L_08A8F9BC;
L_08A8F9BC:;
    v0 = (s32)0 < (s32)s0;
    s4 = s4 + v0;
    ST8(a0, s4);
    goto L_08A8F914;
L_08A8F9CC:;
    a1 = s1 + 0;
    v0 = func_08A90F50(a0, a1);
    goto L_08A8F9D4;
L_08A8F9D4:;
    s2 = v0 + 0;
    goto L_08A8F760;
L_08A8F9DC:;
    a1 = LD32(v1+4);
    a0 = fp + 0;
    v0 = func_08A90660(a0, a1, 0, 0, 0, 0);
    goto L_08A8F9E8;
L_08A8F9E8:;
    a0 = LD32(sp+80);
    ST32(sp+84, v0);
    a2 = LD32(a0+16);
    a0 = v0 + 12;
    v0 = LD32(sp+80);
    a2 = a2 << 2;
    a2 = a2 + 8;
    a1 = v0 + 12;
    func_08A87AE0(a0, a1, a2);
    goto L_08A8FA0C;
L_08A8FA0C:;
    a1 = LD32(sp+84);
    a0 = fp + 0;
    a2 = 1;
    v0 = func_08A90E18(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8FA1C;
L_08A8FA1C:;
    ST32(sp+84, v0);
    goto L_08A8F710;
L_08A8FA24:;
    a1 = LD32(sp+88);
    a0 = LD32(sp+76);
    v0 = func_08A8E9B8(a0, a1);
    goto L_08A8FA30;
L_08A8FA30:;
    s4 = v0 + 48;
    v0 = LD32(sp+92);
    a1 = LD32(sp+28);
    ST8(v0, s4);
    v1 = (s32)s3 < (s32)a1;
    v0 = LD32(sp+92);
    v0 = v0 + 1;
    cnd_ = v1 == 0;
    ST32(sp+92, v0);
    if (cnd_) { goto L_08A8F838; }
    goto L_08A8FA54;
L_08A8FA54:;
    a1 = LD32(sp+76);
    a0 = fp + 0;
    a2 = 10;
    a3 = 0 + 0;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8FA68;
L_08A8FA68:;
    s3 = s3 + 1;
    ST32(sp+76, v0);
    goto L_08A8FA24;
L_08A8FA74:;
    a1 = LD32(sp+88);
    v0 = func_08A90F50(a0, a1);
    goto L_08A8FA7C;
L_08A8FA7C:;
    cnd_ = (s32)v0 >= 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_08A8F690; }
    goto L_08A8FA84;
L_08A8FA84:;
    a1 = LD32(sp+76);
    a0 = fp + 0;
    a2 = 10;
    a3 = 0 + 0;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8FA98;
L_08A8FA98:;
    a0 = LD32(sp+40);
    a1 = LD32(sp+52);
    ST32(sp+76, v0);
    a0 = a0 - 1;
    cnd_ = a1 != 0;
    ST32(sp+40, a0);
    if (cnd_) { goto L_08A8FABC; }
    goto L_08A8FAB0;
L_08A8FAB0:;
    v0 = LD32(sp+36);
    ST32(sp+28, v0);
    goto L_08A8F68C;
L_08A8FABC:;
    a1 = LD32(sp+84);
    a0 = fp + 0;
    a2 = 10;
    a3 = 0 + 0;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A8FAD0;
L_08A8FAD0:;
    ST32(sp+84, v0);
    goto L_08A8FAB0;
L_08A8FAD8:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+20);
    if (cnd_) { goto L_08A8F64C; }
    goto L_08A8FAE0;
L_08A8FAE0:;
    v1 = LD32(sp+56);
    a0 = LD32(sp+20);
    s3 = s3 + 28;
    v1 = v1 + s3;
    a0 = a0 + s3;
    ST32(sp+56, v1);
    ST32(sp+20, a0);
    goto L_08A8F644;
L_08A8FB00:;
    v1 = LD32(sp+88);
    v0 = LD32(v1+16);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0+16);
    v0 = func_08A90974(a0);
    goto L_08A8FB18;
L_08A8FB18:;
    a0 = LD32(sp+56);
    v0 = a0 - v0;
    s3 = v0 & 0x1f;
    goto L_08A8F60C;
L_08A8FB28:;
    a2 = s0 + 0;
    goto L_08A8FB2C;
L_08A8FB2C:;
    a0 = fp + 0;
    v0 = func_08A90D00(a0, a1, a2, 0, 0, 0, 0);
    goto L_08A8FB34;
L_08A8FB34:;
    ST32(sp+76, v0);
    goto L_08A8F584;
L_08A8FB3C:;
    a2 = LD32(sp+24);
    goto L_08A8FB2C;
L_08A8FB44:;
    s2 = v1 - s3;
    s3 = 0 + 0;
    goto L_08A8F4C8;
L_08A8FB50:;
    v1 = LD32(sp+72);
    cnd_ = v1 != 0;
    s3 = a0 + 1075;
    if (cnd_) { goto L_08A8F4C8; }
    goto L_08A8FB5C;
L_08A8FB5C:;
    v0 = LD32(sp+4);
    v1 = 54;
    s3 = v1 - v0;
    goto L_08A8F4C8;
L_08A8FB6C:;
    cnd_ = a0 == 0;
    v0 = LD32(sp+28);
    if (cnd_) { goto L_08A8FCB8; }
    goto L_08A8FB74;
L_08A8FB74:;
    a1 = LD32(sp+28);
    v0 = D_08AE99C8 - (-26168);
    v0 = v0 - 26168;
    v1 = a1 << 3;
    v1 = v1 + v0;
    a2 = LD32(v1-8);
    a3 = LD32(v1-4);
    a0 = D_08AE9948 - (-26296);
    a0 = LD32(a0-26296);
    a1 = D_08AE994C - (-26292);
    a1 = LD32(a1-26292);
    s3 = 0 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FBA8;
L_08A8FBA8:;
    a0 = v0 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    a1 = v1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FBBC;
L_08A8FBBC:;
    s6 = v0 + 0;
    s7 = v1 + 0;
    goto L_08A8FBC4;
L_08A8FBC4:;
    a1 = s5 + 0;
    a0 = s4 + 0;
    v0 = func_08A93E80(a0, a1);
    goto L_08A8FBD0;
L_08A8FBD0:;
    a0 = v0 + 0;
    s2 = v0 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FBDC;
L_08A8FBDC:;
    a2 = v0 + 0;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FBF0;
L_08A8FBF0:;
    s1 = v1 + 0;
    v1 = LD32(sp+92);
    s0 = v0 + 0;
    v0 = s2 + 48;
    ST8(v1, v0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8FC18;
L_08A8FC18:;
    a0 = LD32(sp+92);
    a0 = a0 + 1;
    cnd_ = (s32)v0 < 0;
    ST32(sp+92, a0);
    if (cnd_) { goto L_08A8F184; }
    goto L_08A8FC28;
L_08A8FC28:;
    a0 = D_08AE9928 - (-26328);
    a0 = LD32(a0-26328);
    a1 = D_08AE992C - (-26324);
    a1 = LD32(a1-26324);
    a2 = s0 + 0;
    a3 = s1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FC44;
L_08A8FC44:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8FC58;
L_08A8FC58:;
    cnd_ = (s32)v0 < 0;
    a1 = LD32(sp+28);
    if (cnd_) { goto L_08A8F3EC; }
    goto L_08A8FC60;
L_08A8FC60:;
    s3 = s3 + 1;
    v0 = (s32)s3 < (s32)a1;
    cnd_ = v0 == 0;
    a2 = s6 + 0;
    if (cnd_) { goto L_08A8F204; }
    goto L_08A8FC70;
L_08A8FC70:;
    a0 = D_08AE9930 - (-26320);
    a0 = LD32(a0-26320);
    a1 = D_08AE9934 - (-26316);
    a1 = LD32(a1-26316);
    a3 = s7 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FC88;
L_08A8FC88:;
    a0 = D_08AE9930 - (-26320);
    a0 = LD32(a0-26320);
    a1 = D_08AE9934 - (-26316);
    a1 = LD32(a1-26316);
    a2 = s0 + 0;
    a3 = s1 + 0;
    s6 = v0 + 0;
    s7 = v1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FCAC;
L_08A8FCAC:;
    s4 = v0 + 0;
    s5 = v1 + 0;
    goto L_08A8FBC4;
L_08A8FCB8:;
    a2 = s6 + 0;
    a3 = s7 + 0;
    v1 = v0 << 3;
    v0 = D_08AE99C8 - (-26168);
    v0 = v0 - 26168;
    v1 = v1 + v0;
    a0 = LD32(v1-8);
    a1 = LD32(v1-4);
    s3 = 1;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FCE0;
L_08A8FCE0:;
    s6 = v0 + 0;
    s7 = v1 + 0;
    goto L_08A8FCE8;
L_08A8FCE8:;
    a1 = s5 + 0;
    a0 = s4 + 0;
    v0 = func_08A93E80(a0, a1);
    goto L_08A8FCF4;
L_08A8FCF4:;
    a0 = v0 + 0;
    s2 = v0 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FD00;
L_08A8FD00:;
    a2 = v0 + 0;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FD14;
L_08A8FD14:;
    s1 = v1 + 0;
    v1 = LD32(sp+92);
    s0 = v0 + 0;
    v0 = s2 + 48;
    ST8(v1, v0);
    v1 = v1 + 1;
    a0 = LD32(sp+28);
    cnd_ = s3 == a0;
    ST32(sp+92, v1);
    if (cnd_) { goto L_08A8FD64; }
    goto L_08A8FD38;
L_08A8FD38:;
    a0 = D_08AE9930 - (-26320);
    a0 = LD32(a0-26320);
    a1 = D_08AE9934 - (-26316);
    a1 = LD32(a1-26316);
    a2 = s0 + 0;
    a3 = s1 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FD54;
L_08A8FD54:;
    s3 = s3 + 1;
    s4 = v0 + 0;
    s5 = v1 + 0;
    goto L_08A8FCE8;
L_08A8FD64:;
    s2 = D_08AE9948 - (-26296);
    s2 = LD32(s2-26296);
    s3 = D_08AE994C - (-26292);
    s3 = LD32(s3-26292);
    a2 = s6 + 0;
    a3 = s7 + 0;
    a0 = s2 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FD88;
L_08A8FD88:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    v0 = func_08A93C94(a0, a1, a2, a3);
    goto L_08A8FD9C;
L_08A8FD9C:;
    cnd_ = (s32)v0 < 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A8F3EC; }
    goto L_08A8FDA4;
L_08A8FDA4:;
    a1 = s3 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    { u64 r_ = func_08A93464(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FDB4;
L_08A8FDB4:;
    a0 = v0 + 0;
    a1 = v1 + 0;
    a2 = s0 + 0;
    a3 = s1 + 0;
    v0 = func_08A93B84(a0, a1, a2, a3);
    goto L_08A8FDC8;
L_08A8FDC8:;
    cnd_ = (s32)v0 <= 0;
    v1 = 48;
    if (cnd_) { goto L_08A8F204; }
    goto L_08A8FDD0;
L_08A8FDD0:;
    a1 = LD32(sp+92);
    goto L_08A8FDD4;
L_08A8FDD4:;
    a1 = a1 - 1;
    ST32(sp+92, a1);
    v0 = (u32)(s32)LD_S8(a1);
    cnd_ = v0 == v1;
    if (cnd_) { a1 = LD32(sp+92); goto L_08A8FDD4; }
    goto L_08A8FDE8;
L_08A8FDE8:;
    a1 = a1 + 1;
    ST32(sp+92, a1);
    goto L_08A8F184;
L_08A8FDF4:;
    a1 = LD32(sp+40);
    s2 = 0 - a1;
    cnd_ = s2 == 0;
    v0 = LD32(sp+48);
    if (cnd_) { goto L_08A8F01C; }
    goto L_08A8FE04;
L_08A8FE04:;
    v1 = s2 & 0xf;
    v0 = D_08AE99C8 - (-26168);
    v0 = v0 - 26168;
    v1 = v1 << 3;
    v1 = v1 + v0;
    a0 = LD32(v1);
    a1 = LD32(v1+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FE2C;
L_08A8FE2C:;
    s0 = (u32)((s32)s2 >> 4);
    s4 = v0 + 0;
    cnd_ = s0 == 0;
    s5 = v1 + 0;
    if (cnd_) { goto L_08A8F018; }
    goto L_08A8FE3C;
L_08A8FE3C:;
    v0 = D_08AE9A90 - (-25968);
    s1 = v0 - 25968;
    goto L_08A8FE44;
L_08A8FE44:;
    v0 = s0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = (u32)((s32)s0 >> 1); goto L_08A8FE74; }
    goto L_08A8FE50;
L_08A8FE50:;
    a0 = LD32(s1);
    a1 = LD32(s1+4);
    a2 = s4 + 0;
    a3 = s5 + 0;
    { u64 r_ = func_08A934D8(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FE64;
L_08A8FE64:;
    s3 = s3 + 1;
    s4 = v0 + 0;
    s5 = v1 + 0;
    s0 = (u32)((s32)s0 >> 1);
    goto L_08A8FE74;
L_08A8FE74:;
    cnd_ = s0 != 0;
    s1 = s1 + 8;
    if (cnd_) { goto L_08A8FE44; }
    goto L_08A8FE7C;
L_08A8FE7C:;
    v0 = LD32(sp+48);
    goto L_08A8F01C;
L_08A8FE84:;
    ST32(sp+52, 0);
    goto L_08A8FE88;
L_08A8FE88:;
    v1 = LD32(sp+12);
    v0 = 1;
    s3 = (s32)v1 > (s32)v0 ? v1 : v0;
    ST32(sp+12, s3);
    ST32(sp+36, s3);
    ST32(sp+28, s3);
    goto L_08A8EEE4;
L_08A8FEA4:;
    ST32(sp+52, 0);
    goto L_08A8FEA8;
L_08A8FEA8:;
    a0 = LD32(sp+12);
    a1 = LD32(sp+40);
    v0 = a0 + a1;
    s3 = v0 + 1;
    ST32(sp+36, v0);
    v0 = 1;
    ST32(sp+28, s3);
    s3 = (s32)s3 > (s32)v0 ? s3 : v0;
    goto L_08A8EEE4;
L_08A8FECC:;
    v0 = LD32(sp+20);
    v1 = LD32(sp+40);
    ST32(sp+60, 0);
    v0 = v0 - v1;
    a0 = 0 - v1;
    ST32(sp+20, v0);
    ST32(sp+24, a0);
    goto L_08A8EE78;
L_08A8FEEC:;
    s0 = 0 - s0;
    ST32(sp+20, s0);
    ST32(sp+56, 0);
    goto L_08A8EE5C;
L_08A8FEFC:;
    a0 = LD32(sp+40);
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FF04;
L_08A8FF04:;
    a3 = v1 + 0;
    a0 = s6 + 0;
    a1 = s7 + 0;
    a2 = v0 + 0;
    v0 = func_08A93AFC(a0, a1, a2, a3);
    goto L_08A8FF18;
L_08A8FF18:;
    v1 = LD32(sp+40);
    v0 = 0 < v0;
    v1 = v1 - v0;
    ST32(sp+40, v1);
    goto L_08A8EDFC;
L_08A8FF2C:;
    v0 = LD32(sp);
    s2 = LD32(sp+4);
    a0 = s2 + v0;
    s3 = a0 + 1074;
    v1 = 0 - s3;
    v0 = (s32)s3 < 33;
    cnd_ = v0 != 0;
    s0 = s4 << (v1 & 31);
    if (cnd_) { goto L_08A8FF60; }
    goto L_08A8FF4C;
L_08A8FF4C:;
    v1 = a0 + 1042;
    v0 = 0 - s3;
    v0 = s5 << (v0 & 31);
    v1 = s4 >> (v1 & 31);
    s0 = v0 | v1;
    goto L_08A8FF60;
L_08A8FF60:;
    a0 = s0 + 0;
    { u64 r_ = func_08A93DA4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FF68;
L_08A8FF68:;
    cnd_ = (s32)s0 < 0;
    if (cnd_) { a0 = v0 + 0; goto L_08A8FF98; }
    goto L_08A8FF70;
L_08A8FF70:;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    v0 = 0xfe100000u;
    s3 = s3 - 1075;
    a1 = LD32(sp+68);
    a1 = v0 + a1;
    v0 = 1;
    ST32(sp+68, a1);
    ST32(sp+72, v0);
    goto L_08A8ED34;
L_08A8FF98:;
    a2 = D_08AE9900 - (-26368);
    a2 = LD32(a2-26368);
    a3 = D_08AE9904 - (-26364);
    a3 = LD32(a3-26364);
    a1 = v1 + 0;
    { u64 r_ = func_08A933FC(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A8FFB0;
L_08A8FFB0:;
    goto L_08A8FF70;
L_08A8FFB8:;
    v1 = LD32(sp+16);
    v0 = 9999;
    cnd_ = s4 != 0;
    ST32(v1, v0);
    if (cnd_) { goto L_08A8FFE0; }
    goto L_08A8FFC8;
L_08A8FFC8:;
    v1 = s5 + 0;
    v0 = D_08AE98EC - (-26388);
    v0 = v0 - 26388;
    v1 = (v1 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    cnd_ = v1 == 0;
    ST32(sp+92, v0);
    if (cnd_) { goto L_08A8FFEC; }
    goto L_08A8FFE0;
L_08A8FFE0:;
    v0 = D_08AE98F8 - (-26376);
    v0 = v0 - 26376;
    ST32(sp+92, v0);
    goto L_08A8FFEC;
L_08A8FFEC:;
    a0 = LD32(sp+160);
    cnd_ = a0 == 0;
    v0 = LD32(sp+92);
    if (cnd_) { goto L_08A8ECB0; }
    goto L_08A8FFF8;
L_08A8FFF8:;
    a1 = LD32(sp+92);
    v0 = (u32)(s32)LD_S8(a1+3);
    v1 = a1 + 8;
    a0 = a1 + 3;
    if (v0 == 0) v1 = a0;
    v0 = LD32(sp+160);
    ST32(v0, v1);
    goto L_08A8ECAC;
L_08A90018:;
    s5 = (s5 >> 0) & 0x7fffffff;
    ST32(s0, v0);
    goto L_08A8EC60;
L_08A90024:;
    v0 = LD32(a0+68);
    a1 = t4 + 0;
    ST32(t4+4, v0);
    v0 = 1;
    v1 = LD32(a0+68);
    v0 = v0 << (v1 & 31);
    ST32(t4+8, v0);
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A90044;
L_08A90044:;
    ST32(fp+64, 0);
    goto L_08A8EC54;
}

/* 08A9004C */
rv_t func_08A9004C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9004C:;
    sp = sp - 48;
    v1 = 0 + 0;
    s5 = a1 + 0;
    s1 = LD32(a1+8);
    cnd_ = s1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A90124; }
    goto L_08A90088;
L_08A90088:;
    v1 = LD_U16(a0+12);
    v0 = v1 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A900A4; }
    goto L_08A90098;
L_08A90098:;
    v0 = LD32(a0+16);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = v1 & 0xffff; goto L_08A900BC; }
    goto L_08A900A4;
L_08A900A4:;
    v0 = func_08A8E83C(a0);
    goto L_08A900AC;
L_08A900AC:;
    cnd_ = v0 != 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A90124; }
    goto L_08A900B4;
L_08A900B4:;
    v1 = LD_U16(s2+12);
    a0 = v1 & 0xffff;
    goto L_08A900BC;
L_08A900BC:;
    v0 = a0 & 0x2;
    s3 = LD32(s5);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08A90168; }
    goto L_08A900CC;
L_08A900CC:;
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s2+36); goto L_08A900E8; }
    goto L_08A900D4;
L_08A900D4:;
    s1 = LD32(s3+4);
    s4 = LD32(s3);
    cnd_ = s1 == 0;
    s3 = s3 + 8;
    if (cnd_) { goto L_08A900D4; }
    goto L_08A900E4;
L_08A900E4:;
    v0 = LD32(s2+36);
    goto L_08A900E8;
L_08A900E8:;
    a0 = LD32(s2+28);
    v1 = s1 < 0x401u;
    a2 = 1024;
    if (v1 != 0) a2 = s1;
    t_ = v0;
    a1 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A90100;
L_08A90100:;
    cnd_ = (s32)v0 <= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A90154; }
    goto L_08A90108;
L_08A90108:;
    v0 = LD32(s5+8);
    s4 = s4 + s0;
    s1 = s1 - s0;
    v0 = v0 - s0;
    cnd_ = v0 != 0;
    ST32(s5+8, v0);
    if (cnd_) { goto L_08A900CC; }
    goto L_08A90120;
L_08A90120:;
    v1 = 0 + 0;
    goto L_08A90124;
L_08A90124:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08A90154:;
    v0 = LD_U16(s2+12);
    goto L_08A90158;
L_08A90158:;
    v1 = (u32)-1;
    v0 = v0 | 0x40;
    ST16(s2+12, v0);
    goto L_08A90124;
L_08A90168:;
    v0 = a0 & 0x1;
    cnd_ = v0 != 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08A902E4; }
    goto L_08A90174;
L_08A90174:;
    s1 = LD32(s3+4);
    goto L_08A90178;
L_08A90178:;
    s4 = LD32(s3);
    cnd_ = s1 == 0;
    s3 = s3 + 8;
    if (cnd_) { goto L_08A90174; }
    goto L_08A90184;
L_08A90184:;
    v1 = v1 & 0xffff;
    v0 = v1 & 0x200;
    cnd_ = v0 == 0;
    s0 = LD32(s2+8);
    if (cnd_) { goto L_08A9024C; }
    goto L_08A90194;
L_08A90194:;
    v0 = s0 < s1;
    cnd_ = v0 == 0;
    v0 = s1 < s0;
    if (cnd_) { goto L_08A901B0; }
    goto L_08A901A0;
L_08A901A0:;
    v0 = v1 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+16); goto L_08A90208; }
    goto L_08A901AC;
L_08A901AC:;
    v0 = s1 < s0;
    goto L_08A901B0;
L_08A901B0:;
    a0 = LD32(s2);
    if (v0 != 0) s0 = s1;
    a2 = s0 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A901C4;
L_08A901C4:;
    v1 = LD32(s2+8);
    v0 = LD32(s2);
    v1 = v1 - s0;
    v0 = v0 + s0;
    s0 = s1 + 0;
    goto L_08A901D8;
L_08A901D8:;
    ST32(s2+8, v1);
    ST32(s2, v0);
    goto L_08A901E0;
L_08A901E0:;
    v0 = LD32(s5+8);
    goto L_08A901E4;
L_08A901E4:;
    s4 = s4 + s0;
    s1 = s1 - s0;
    v0 = v0 - s0;
    cnd_ = v0 == 0;
    ST32(s5+8, v0);
    if (cnd_) { goto L_08A90120; }
    goto L_08A901F8;
L_08A901F8:;
    cnd_ = s1 != 0;
    v1 = LD_U16(s2+12);
    if (cnd_) { goto L_08A90184; }
    goto L_08A90200;
L_08A90200:;
    s1 = LD32(s3+4);
    goto L_08A90178;
L_08A90208:;
    v0 = LD32(s2);
    s0 = v0 - v1;
    v0 = func_08A870E0();
    goto L_08A90214;
L_08A90214:;
    a1 = LD32(s2+16);
    s6 = s0 + s1;
    a0 = v0 + 0;
    a2 = s6 + 0;
    v0 = func_08A91534(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A90228;
L_08A90228:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A90154; }
    goto L_08A90230;
L_08A90230:;
    v0 = v0 + s0;
    ST32(s2, v0);
    s0 = s1 + 0;
    ST32(s2+20, s6);
    ST32(s2+16, v1);
    ST32(s2+8, s1);
    goto L_08A901AC;
L_08A9024C:;
    a0 = LD32(s2);
    v0 = LD32(s2+16);
    v1 = s0 < s1;
    v0 = v0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_08A902B8; }
    goto L_08A90268;
L_08A90268:;
    s0 = LD32(s2+20);
    v0 = s1 < s0;
    cnd_ = v0 != 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_08A90298; }
    goto L_08A90278;
L_08A90278:;
    v0 = LD32(s2+36);
    a0 = LD32(s2+28);
    t_ = v0;
    a1 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A90288;
L_08A90288:;
    cnd_ = (s32)v0 > 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A901E0; }
    goto L_08A90290;
L_08A90290:;
    v0 = LD_U16(s2+12);
    goto L_08A90158;
L_08A90298:;
    a2 = s1 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A902A0;
L_08A902A0:;
    v1 = LD32(s2+8);
    v0 = LD32(s2);
    s0 = s1 + 0;
    v1 = v1 - s1;
    v0 = v0 + s1;
    goto L_08A901D8;
L_08A902B8:;
    a2 = s0 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A902C0;
L_08A902C0:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v1 = v1 + s0;
    ST32(s2, v1);
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A902D4;
L_08A902D4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s5+8); goto L_08A901E4; }
    goto L_08A902DC;
L_08A902DC:;
    v0 = LD_U16(s2+12);
    goto L_08A90158;
L_08A902E4:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08A90300; }
    goto L_08A902EC;
L_08A902EC:;
    s7 = 0 + 0;
    goto L_08A902F0;
L_08A902F0:;
    s1 = LD32(s3+4);
    s4 = LD32(s3);
    cnd_ = s1 == 0;
    s3 = s3 + 8;
    if (cnd_) { goto L_08A902F0; }
    goto L_08A90300;
L_08A90300:;
    cnd_ = s7 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A90404; }
    goto L_08A90308;
L_08A90308:;
    a0 = LD32(s2+8);
    t0 = LD32(s2+20);
    a3 = LD32(s2);
    v1 = LD32(s2+16);
    v0 = s1 < s6;
    a1 = s1 + 0;
    if (v0 == 0) a1 = s6;
    s0 = a0 + t0;
    v1 = v1 < a3;
    v0 = (s32)s0 < (s32)a1;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    v0 = (s32)a1 < (s32)t0;
    if (cnd_) { goto L_08A903D0; }
    goto L_08A9033C;
L_08A9033C:;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A903A4; }
    goto L_08A90344;
L_08A90344:;
    v0 = LD32(s2+36);
    a0 = LD32(s2+28);
    a2 = t0 + 0;
    t_ = v0;
    a1 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A90358;
L_08A90358:;
    cnd_ = (s32)v0 <= 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08A90154; }
    goto L_08A90360;
L_08A90360:;
    s6 = s6 - s0;
    goto L_08A90364;
L_08A90364:;
    cnd_ = s6 == 0;
    if (cnd_) { goto L_08A9038C; }
    goto L_08A9036C;
L_08A9036C:;
    v0 = LD32(s5+8);
    goto L_08A90370;
L_08A90370:;
    s4 = s4 + s0;
    s1 = s1 - s0;
    v0 = v0 - s0;
    cnd_ = v0 != 0;
    ST32(s5+8, v0);
    if (cnd_) { goto L_08A902E4; }
    goto L_08A90384;
L_08A90384:;
    v1 = 0 + 0;
    goto L_08A90124;
L_08A9038C:;
    a0 = s2 + 0;
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A90394;
L_08A90394:;
    cnd_ = v0 != 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08A90154; }
    goto L_08A9039C;
L_08A9039C:;
    v0 = LD32(s5+8);
    goto L_08A90370;
L_08A903A4:;
    a0 = a3 + 0;
    a1 = s4 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A903B4;
L_08A903B4:;
    v1 = LD32(s2+8);
    v0 = LD32(s2);
    v1 = v1 - s0;
    v0 = v0 + s0;
    ST32(s2+8, v1);
    ST32(s2, v0);
    goto L_08A90360;
L_08A903D0:;
    a0 = a3 + 0;
    a1 = s4 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_08A87C00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A903E0;
L_08A903E0:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    v1 = v1 + s0;
    ST32(s2, v1);
    { rv_t r_ = func_08A861F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A903F4;
L_08A903F4:;
    cnd_ = v0 == 0;
    s6 = s6 - s0;
    if (cnd_) { goto L_08A90364; }
    goto L_08A903FC;
L_08A903FC:;
    v0 = LD_U16(s2+12);
    goto L_08A90158;
L_08A90404:;
    a1 = 10;
    a2 = s1 + 0;
    v0 = func_08A90578(a0, a1, a2);
    goto L_08A90410;
L_08A90410:;
    v1 = v0 - s4;
    cnd_ = v0 == 0;
    s6 = v1 + 1;
    if (cnd_) { goto L_08A90424; }
    goto L_08A9041C;
L_08A9041C:;
    s7 = 1;
    goto L_08A90308;
L_08A90424:;
    s6 = s1 + 1;
    goto L_08A9041C;
}

/* 08A9042C */
u32 func_08A9042C(void)
{
    u32 v0 = 0;
L_08A9042C:;
    v0 = D_08AE9970 - (-26256);
    v0 = v0 - 26256;
    return v0;
}

/* 08A90438 */
u32 func_08A90438(void)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A90438:;
    sp = sp - 16;
    v0 = func_08A870E0();
    goto L_08A90448;
L_08A90448:;
    a0 = v0 + 0;
    v0 = func_08A9042C();
    goto L_08A90450;
L_08A90450:;
    sp = sp + 16;
    return v0;
}

/* 08A9045C */
u32 func_08A9045C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9045C:;
    sp = sp - 16;
    v0 = a1 + 0;
    a1 = a2 + 0;
    s1 = a0 + 0;
    a2 = a3 + 0;
    a0 = v0 + 0;
    s0 = D_08C38BEC - (-29716);
    ST32(s0-29716, 0);
    v0 = func_08A8557C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9048C;
L_08A9048C:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s0-29716);
    if (cnd_) { goto L_08A904B4; }
    goto L_08A9049C;
L_08A9049C:;
    goto L_08A904A0;
L_08A904A0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A904B4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, v0); goto L_08A9049C; }
    goto L_08A904BC;
L_08A904BC:;
    goto L_08A904A0;
}

/* 08A904C4 */
u32 func_08A904C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A904C4:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = t0 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A90524; }
    goto L_08A904E0;
L_08A904E0:;
    v0 = func_08A90538(a1, a2, a3);
    goto L_08A904E8;
L_08A904E8:;
    v1 = v0 + 0;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = 138;
    if (cnd_) { goto L_08A90514; }
    goto L_08A904FC;
L_08A904FC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_08A90514:;
    ST32(s0, 0);
    a0 = (u32)-1;
    ST32(s1, v0);
    goto L_08A904FC;
L_08A90524:;
    a2 = D_08AE99B0 - (-26192);
    a2 = a2 - 26192;
    a1 = 0 + 0;
    a3 = 1;
    goto L_08A904E0;
}

/* 08A90538 */
u32 func_08A90538(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A90538:;
    a3 = a3 < 0x1u;
    v0 = 0 < a2;
    sp = sp - 16;
    v0 = v0 & a3;
    v1 = (u32)-2;
    cnd_ = v0 != 0;
    if (a1 == 0) a1 = sp;
    if (cnd_) { goto L_08A9056C; }
    goto L_08A90554;
L_08A90554:;
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9056C; }
    goto L_08A9055C;
L_08A9055C:;
    v0 = LD_U8(a2);
    ST32(a1, v0);
    v1 = LD_U8(a2);
    v1 = 0 < v1;
    goto L_08A9056C;
L_08A9056C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A90578 */
u32 func_08A90578(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_08A90578:;
    a3 = a2 < 0x4u;
    cnd_ = a3 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_08A90624; }
    goto L_08A90584;
L_08A90584:;
    v0 = a0 & 0x3;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = a2 - 1; goto L_08A90628; }
    goto L_08A90590;
L_08A90590:;
    t1 = a0 + 0;
    t2 = 0 + 0;
    a0 = 0 + 0;
    goto L_08A9059C;
L_08A9059C:;
    a0 = a0 + 1;
    v0 = t2 << 8;
    v1 = a0 < 0x4u;
    cnd_ = v1 != 0;
    t2 = v0 + a1;
    if (cnd_) { goto L_08A9059C; }
    goto L_08A905B0;
L_08A905B0:;
    cnd_ = a3 != 0;
    if (cnd_) { a0 = t1 + 0; goto L_08A90624; }
    goto L_08A905B8;
L_08A905B8:;
    t4 = 0xfefe0000u;
    t3 = 0x80800000u;
    t4 = t4 | 0xfeff;
    t3 = t3 | 0x8080;
    goto L_08A905C8;
L_08A905C8:;
    v0 = LD32(t1);
    v0 = v0 ^ t2;
    v1 = ~(0 | v0);
    v0 = v0 + t4;
    v0 = v0 & v1;
    v0 = v0 & t3;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = a2 - 4; goto L_08A90614; }
    goto L_08A905E8;
L_08A905E8:;
    a0 = t1 + 0;
    t0 = 0 + 0;
    v0 = LD_U8(a0);
    goto L_08A905F4;
L_08A905F4:;
    t0 = t0 + 1;
    v1 = a0 + 0;
    a3 = t0 < 0x4u;
    cnd_ = v0 == a1;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A90658; }
    goto L_08A90608;
L_08A90608:;
    cnd_ = a3 != 0;
    if (cnd_) { v0 = LD_U8(a0); goto L_08A905F4; }
    goto L_08A90610;
L_08A90610:;
    a2 = a2 - 4;
    goto L_08A90614;
L_08A90614:;
    v0 = a2 < 0x4u;
    cnd_ = v0 == 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08A905C8; }
    goto L_08A90620;
L_08A90620:;
    a0 = t1 + 0;
    goto L_08A90624;
L_08A90624:;
    a2 = a2 - 1;
    goto L_08A90628;
L_08A90628:;
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A90658; }
    goto L_08A90634;
L_08A90634:;
    a3 = (u32)-1;
    v0 = LD_U8(a0);
    goto L_08A9063C;
L_08A9063C:;
    v1 = a0 + 0;
    a2 = a2 - 1;
    cnd_ = v0 == a1;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A90658; }
    goto L_08A9064C;
L_08A9064C:;
    cnd_ = a2 != a3;
    if (cnd_) { v0 = LD_U8(a0); goto L_08A9063C; }
    goto L_08A90654;
L_08A90654:;
    v1 = 0 + 0;
    goto L_08A90658;
L_08A90658:;
    v0 = v1 + 0;
    return v0;
}

/* 08A90660 */
u32 func_08A90660(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A90660:;
    sp = sp - 16;
    a2 = 16;
    s1 = a1 + 0;
    a1 = 4;
    a3 = LD32(a0+76);
    cnd_ = a3 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A906FC; }
    goto L_08A90688;
L_08A90688:;
    v1 = s1 << 2;
    v1 = v1 + a3;
    v0 = 1;
    a3 = LD32(v1);
    a0 = s0 + 0;
    s0 = v0 << (s1 & 31);
    a2 = s0 << 2;
    a1 = 1;
    cnd_ = a3 == 0;
    a2 = a2 + 20;
    if (cnd_) { goto L_08A906DC; }
    goto L_08A906B0;
L_08A906B0:;
    v0 = LD32(a3);
    ST32(v1, v0);
    goto L_08A906B8;
L_08A906B8:;
    ST32(a3+16, 0);
    v1 = a3 + 0;
    ST32(a3+12, 0);
    goto L_08A906C4;
L_08A906C4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A906DC:;
    v0 = func_08A9248C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A906E4;
L_08A906E4:;
    a3 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A906C4; }
    goto L_08A906F0;
L_08A906F0:;
    ST32(v0+4, s1);
    ST32(v0+8, s0);
    goto L_08A906B8;
L_08A906FC:;
    v0 = func_08A9248C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A90704;
L_08A90704:;
    ST32(s0+76, v0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A906C4; }
    goto L_08A90710;
L_08A90710:;
    a3 = v0 + 0;
    goto L_08A90688;
}

/* 08A90718 */
u64 func_08A90718(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A90718:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A9073C; }
    goto L_08A90720;
L_08A90720:;
    v0 = LD32(a1+4);
    a0 = LD32(a0+76);
    v0 = v0 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    ST32(a1, v1);
    ST32(v0, a1);
    goto L_08A9073C;
L_08A9073C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A90744 */
u32 func_08A90744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A90744:;
    sp = sp - 32;
    t1 = a2 + 0;
    s4 = a0 + 0;
    t0 = 0 + 0;
    s3 = a1 + 0;
    s1 = a3 + 0;
    a3 = a1 + 20;
    s2 = LD32(a1+16);
    goto L_08A9077C;
L_08A9077C:;
    a0 = LD32(a3);
    t0 = t0 + 1;
    a2 = (s32)t0 < (s32)s2;
    v1 = a0 & 0xffff;
    { s64 p_ = (s64)(s32)v1 * (s32)t1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 >> 16;
    v1 = lo;
    { s64 p_ = (s64)(s32)a0 * (s32)t1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 + s1;
    a1 = v1 >> 16;
    v1 = v1 & 0xffff;
    a0 = lo;
    a0 = a0 + a1;
    v0 = a0 << 16;
    v0 = v0 + v1;
    ST32(a3, v0);
    s1 = a0 >> 16;
    cnd_ = a2 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A9077C; }
    goto L_08A907C8;
L_08A907C8:;
    cnd_ = s1 == 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_08A907F8; }
    goto L_08A907D0;
L_08A907D0:;
    v0 = LD32(s3+8);
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s3+4); goto L_08A90818; }
    goto L_08A907E0;
L_08A907E0:;
    v0 = s2 << 2;
    v0 = v0 + s3;
    s2 = s2 + 1;
    ST32(v0+20, s1);
    ST32(s3+16, s2);
    v0 = s3 + 0;
    goto L_08A907F8;
L_08A907F8:;
    sp = sp + 32;
    return v0;
L_08A90818:;
    a0 = s4 + 0;
    a1 = a1 + 1;
    v0 = func_08A90660(a0, a1, t0, t1, t2, t3);
    goto L_08A90824;
L_08A90824:;
    a2 = LD32(s3+16);
    a1 = s3 + 12;
    a0 = v0 + 12;
    a2 = a2 << 2;
    a2 = a2 + 8;
    s0 = v0 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A90840;
L_08A90840:;
    a1 = s3 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9084C;
L_08A9084C:;
    s3 = s0 + 0;
    goto L_08A907E0;
}

/* 08A90854 */
u32 func_08A90854(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A90854:;
    v0 = 0x38e30000u;
    v1 = a3 + 8;
    v0 = v0 | 0x8e39;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 32;
    v1 = (u32)((s32)v1 >> 31);
    s4 = a3 + 0;
    v0 = hi;
    v0 = (u32)((s32)v0 >> 1);
    a3 = 1;
    v1 = v0 - v1;
    s2 = a0 + 0;
    a0 = (s32)a3 < (s32)v1;
    s3 = a2 + 0;
    s1 = t0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A908C4; }
    goto L_08A908B4;
L_08A908B4:;
    a3 = a3 << 1;
    v0 = (s32)a3 < (s32)v1;
    cnd_ = v0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A908B4; }
    goto L_08A908C4;
L_08A908C4:;
    a0 = s2 + 0;
    v0 = func_08A90660(a0, a1, t0, t1, t2, t3);
    goto L_08A908CC;
L_08A908CC:;
    a1 = v0 + 0;
    ST32(v0+20, s1);
    v1 = (s32)s3 < 10;
    v0 = 1;
    s1 = 9;
    cnd_ = v1 != 0;
    ST32(a1+16, v0);
    if (cnd_) { goto L_08A9096C; }
    goto L_08A908E8;
L_08A908E8:;
    s0 = s0 + 9;
    goto L_08A908EC;
L_08A908EC:;
    a3 = (u32)(s32)LD_S8(s0);
    a0 = s2 + 0;
    a2 = 10;
    a3 = a3 - 48;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A90900;
L_08A90900:;
    s1 = s1 + 1;
    a1 = v0 + 0;
    v0 = (s32)s1 < (s32)s3;
    cnd_ = v0 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A908EC; }
    goto L_08A90914;
L_08A90914:;
    s0 = s0 + 1;
    goto L_08A90918;
L_08A90918:;
    v0 = (s32)s1 < (s32)s4;
    cnd_ = v0 == 0;
    s1 = s4 - s1;
    if (cnd_) { goto L_08A90948; }
    goto L_08A90924;
L_08A90924:;
    a3 = (u32)(s32)LD_S8(s0);
    a0 = s2 + 0;
    a2 = 10;
    a3 = a3 - 48;
    v0 = func_08A90744(a0, a1, a2, a3, 0, 0);
    goto L_08A90938;
L_08A90938:;
    s1 = s1 - 1;
    a1 = v0 + 0;
    cnd_ = s1 != 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_08A90924; }
    goto L_08A90948;
L_08A90948:;
    v0 = a1 + 0;
    sp = sp + 32;
    return v0;
L_08A9096C:;
    s0 = s0 + 10;
    goto L_08A90918;
}

/* 08A90974 */
u32 func_08A90974(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A90974:;
    v0 = a0 + 0;
    v0 = (v0 & ~(0xffffu << 0)) | ((0 & 0xffff) << 0);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9098C; }
    goto L_08A90984;
L_08A90984:;
    v1 = 16;
    a0 = a0 << 16;
    goto L_08A9098C;
L_08A9098C:;
    v0 = a0 + 0;
    v0 = (v0 & ~(0xffffffu << 0)) | ((0 & 0xffffff) << 0);
    cnd_ = v0 != 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08A909A8; }
    goto L_08A9099C;
L_08A9099C:;
    v1 = v1 + 8;
    a0 = a0 << 8;
    v0 = a0 + 0;
    goto L_08A909A8;
L_08A909A8:;
    v0 = (v0 & ~(0xfffffffu << 0)) | ((0 & 0xfffffff) << 0);
    cnd_ = v0 != 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08A909C0; }
    goto L_08A909B4;
L_08A909B4:;
    v1 = v1 + 4;
    a0 = a0 << 4;
    v0 = a0 + 0;
    goto L_08A909C0;
L_08A909C0:;
    v0 = (v0 & ~(0x3fffffffu << 0)) | ((0 & 0x3fffffff) << 0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A909D4; }
    goto L_08A909CC;
L_08A909CC:;
    v1 = v1 + 2;
    a0 = a0 << 2;
    goto L_08A909D4;
L_08A909D4:;
    cnd_ = (s32)a0 < 0;
    if (cnd_) { a0 = v1 + 0; goto L_08A909F4; }
    goto L_08A909DC;
L_08A909DC:;
    v0 = 0x40000000u;
    v0 = a0 & v0;
    v1 = v1 + 1;
    cnd_ = v0 == 0;
    a0 = 32;
    if (cnd_) { goto L_08A909F4; }
    goto L_08A909F0;
L_08A909F0:;
    a0 = v1 + 0;
    goto L_08A909F4;
L_08A909F4:;
    v0 = a0 + 0;
    return v0;
}

/* 08A909FC */
u32 func_08A909FC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A909FC:;
    v1 = LD32(a0);
    v0 = v1 & 0x7;
    cnd_ = v0 == 0;
    v0 = v1 & 0xffff;
    if (cnd_) { goto L_08A90A40; }
    goto L_08A90A0C;
L_08A90A0C:;
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A90A30; }
    goto L_08A90A18;
L_08A90A18:;
    v0 = v1 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = v1 >> 2; goto L_08A90A38; }
    goto L_08A90A24;
L_08A90A24:;
    v0 = v1 >> 1;
    a1 = 1;
    goto L_08A90A2C;
L_08A90A2C:;
    ST32(a0, v0);
    goto L_08A90A30;
L_08A90A30:;
    v0 = a1 + 0;
    return v0;
L_08A90A38:;
    a1 = 2;
    goto L_08A90A2C;
L_08A90A40:;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A90A50; }
    goto L_08A90A48;
L_08A90A48:;
    a2 = 16;
    v1 = v1 >> 16;
    goto L_08A90A50;
L_08A90A50:;
    v0 = v1 & 0xff;
    cnd_ = v0 != 0;
    v0 = v1 & 0xf;
    if (cnd_) { goto L_08A90A68; }
    goto L_08A90A5C;
L_08A90A5C:;
    a2 = a2 + 8;
    v1 = v1 >> 8;
    v0 = v1 & 0xf;
    goto L_08A90A68;
L_08A90A68:;
    cnd_ = v0 != 0;
    v0 = v1 & 0x3;
    if (cnd_) { goto L_08A90A7C; }
    goto L_08A90A70;
L_08A90A70:;
    a2 = a2 + 4;
    v1 = v1 >> 4;
    v0 = v1 & 0x3;
    goto L_08A90A7C;
L_08A90A7C:;
    cnd_ = v0 != 0;
    v0 = v1 & 0x1;
    if (cnd_) { goto L_08A90A90; }
    goto L_08A90A84;
L_08A90A84:;
    a2 = a2 + 2;
    v1 = v1 >> 2;
    v0 = v1 & 0x1;
    goto L_08A90A90;
L_08A90A90:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0, v1); goto L_08A90AAC; }
    goto L_08A90A98;
L_08A90A98:;
    v1 = v1 >> 1;
    a2 = a2 + 1;
    cnd_ = v1 == 0;
    a1 = 32;
    if (cnd_) { goto L_08A90A30; }
    goto L_08A90AA8;
L_08A90AA8:;
    ST32(a0, v1);
    goto L_08A90AAC;
L_08A90AAC:;
    a1 = a2 + 0;
    goto L_08A90A30;
}

/* 08A90AB4 */
u32 func_08A90AB4(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A90AB4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    v0 = func_08A90660(a0, a1, t0, t1, t2, t3);
    goto L_08A90ACC;
L_08A90ACC:;
    v1 = 1;
    ST32(v0+20, s0);
    ST32(v0+16, v1);
    sp = sp + 16;
    return v0;
}

/* 08A90AE8 */
u32 func_08A90AE8(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A90AE8:;
    sp = sp - 32;
    s4 = a2 + 0;
    s3 = LD32(a1+16);
    s2 = LD32(a2+16);
    v0 = (s32)s3 < (s32)s2;
    cnd_ = v0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08A90B30; }
    goto L_08A90B20;
L_08A90B20:;
    s3 = s2 + 0;
    s2 = LD32(a1+16);
    s0 = a2 + 0;
    s4 = a1 + 0;
    goto L_08A90B30;
L_08A90B30:;
    v0 = LD32(s0+8);
    a1 = LD32(s0+4);
    s1 = s3 + s2;
    v0 = (s32)v0 < (s32)s1;
    a1 = a1 + v0;
    v0 = func_08A90660(a0, a1, t0, t1, t2, t3);
    goto L_08A90B48;
L_08A90B48:;
    t8 = v0 + 20;
    s5 = s1 << 2;
    t7 = t8 + s5;
    t9 = v0 + 0;
    v0 = t8 < t7;
    cnd_ = v0 == 0;
    t1 = t8 + 0;
    if (cnd_) { goto L_08A90B78; }
    goto L_08A90B64;
L_08A90B64:;
    ST32(t1, 0);
    goto L_08A90B68;
L_08A90B68:;
    t1 = t1 + 4;
    v0 = t1 < t7;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(t1, 0); goto L_08A90B68; }
    goto L_08A90B78;
L_08A90B78:;
    t4 = s4 + 20;
    v0 = s2 << 2;
    s2 = t4 + v0;
    t7 = s0 + 20;
    v0 = s3 << 2;
    v1 = t4 < s2;
    t5 = t7 + v0;
    cnd_ = v1 == 0;
    t6 = t8 + 0;
    if (cnd_) { goto L_08A90CA4; }
    goto L_08A90B9C;
L_08A90B9C:;
    v0 = LD32(t4);
    t3 = v0 & 0xffff;
    cnd_ = t3 == 0;
    if (cnd_) { t3 = v0 >> 16; goto L_08A90C1C; }
    goto L_08A90BAC;
L_08A90BAC:;
    t1 = t7 + 0;
    t0 = t6 + 0;
    t2 = 0 + 0;
    goto L_08A90BB8;
L_08A90BB8:;
    v0 = LD32(t1);
    a0 = LD32(t0);
    t1 = t1 + 4;
    v1 = v0 & 0xffff;
    { s64 p_ = (s64)(s32)v1 * (s32)t3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 >> 16;
    a1 = a0 & 0xffff;
    a0 = a0 >> 16;
    a2 = t1 < t5;
    v1 = lo;
    { s64 p_ = (s64)(s32)v0 * (s32)t3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 + a1;
    a3 = v1 + t2;
    t2 = a3 >> 16;
    ST16(t0, a3);
    v0 = lo;
    v0 = v0 + a0;
    v0 = v0 + t2;
    ST16(t0+2, v0);
    t2 = v0 >> 16;
    cnd_ = a2 != 0;
    t0 = t0 + 4;
    if (cnd_) { goto L_08A90BB8; }
    goto L_08A90C10;
L_08A90C10:;
    ST32(t0, t2);
    v0 = LD32(t4);
    t3 = v0 >> 16;
    goto L_08A90C1C;
L_08A90C1C:;
    cnd_ = t3 == 0;
    if (cnd_) { t4 = t4 + 4; goto L_08A90C98; }
    goto L_08A90C24;
L_08A90C24:;
    v0 = LD32(t6);
    t0 = t6 + 0;
    t1 = t7 + 0;
    t2 = 0 + 0;
    a0 = v0 + 0;
    goto L_08A90C38;
L_08A90C38:;
    v1 = LD32(t1);
    ST16(t0, v0);
    a0 = a0 >> 16;
    v0 = v1 & 0xffff;
    { s64 p_ = (s64)(s32)v0 * (s32)t3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 >> 16;
    t1 = t1 + 4;
    a1 = t1 < t5;
    v0 = lo;
    v0 = v0 + a0;
    a3 = v0 + t2;
    { s64 p_ = (s64)(s32)v1 * (s32)t3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST16(t0+2, a3);
    t0 = t0 + 4;
    t2 = a3 >> 16;
    a0 = LD32(t0);
    v1 = lo;
    v0 = a0 & 0xffff;
    v1 = v1 + v0;
    v0 = v1 + t2;
    cnd_ = a1 != 0;
    t2 = v0 >> 16;
    if (cnd_) { goto L_08A90C38; }
    goto L_08A90C90;
L_08A90C90:;
    ST32(t0, v0);
    t4 = t4 + 4;
    goto L_08A90C98;
L_08A90C98:;
    v0 = t4 < s2;
    cnd_ = v0 != 0;
    t6 = t6 + 4;
    if (cnd_) { goto L_08A90B9C; }
    goto L_08A90CA4;
L_08A90CA4:;
    cnd_ = (s32)s1 <= 0;
    t0 = t8 + s5;
    if (cnd_) { goto L_08A90CD4; }
    goto L_08A90CAC;
L_08A90CAC:;
    t0 = t0 - 4;
    v0 = LD32(t0);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(t9+16, s1); goto L_08A90CD8; }
    goto L_08A90CBC;
L_08A90CBC:;
    s1 = s1 - 1;
    goto L_08A90CC0;
L_08A90CC0:;
    cnd_ = (s32)s1 <= 0;
    t0 = t0 - 4;
    if (cnd_) { goto L_08A90CD4; }
    goto L_08A90CC8;
L_08A90CC8:;
    v0 = LD32(t0);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 - 1; goto L_08A90CC0; }
    goto L_08A90CD4;
L_08A90CD4:;
    ST32(t9+16, s1);
    goto L_08A90CD8;
L_08A90CD8:;
    v0 = t9 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A90D00 */
u32 func_08A90D00(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A90D00:;
    sp = sp - 32;
    v1 = a2 & 0x3;
    s4 = a0 + 0;
    s3 = a1 + 0;
    s2 = a2 + 0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A90DF4; }
    goto L_08A90D30;
L_08A90D30:;
    s2 = (u32)((s32)s2 >> 2);
    cnd_ = s2 == 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_08A90D9C; }
    goto L_08A90D3C;
L_08A90D3C:;
    s1 = LD32(s4+72);
    cnd_ = s1 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A90DDC; }
    goto L_08A90D48;
L_08A90D48:;
    v0 = s2 & 0x1;
    a2 = s1 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    cnd_ = v0 != 0;
    s2 = (u32)((s32)s2 >> 1);
    if (cnd_) { goto L_08A90DBC; }
    goto L_08A90D60;
L_08A90D60:;
    a1 = s1 + 0;
    a2 = s1 + 0;
    cnd_ = s2 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_08A90D98; }
    goto L_08A90D70;
L_08A90D70:;
    v0 = LD32(s1);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A90D84; }
    goto L_08A90D7C;
L_08A90D7C:;
    s1 = v0 + 0;
    goto L_08A90D48;
L_08A90D84:;
    v0 = func_08A90AE8(a0, a1, a2, t0, t1, t2, t3);
    goto L_08A90D8C;
L_08A90D8C:;
    ST32(s1, v0);
    ST32(v0, 0);
    goto L_08A90D7C;
L_08A90D98:;
    v0 = s3 + 0;
    goto L_08A90D9C;
L_08A90D9C:;
    sp = sp + 32;
    return v0;
L_08A90DBC:;
    v0 = func_08A90AE8(a0, a1, a2, t0, t1, t2, t3);
    goto L_08A90DC4;
L_08A90DC4:;
    s0 = v0 + 0;
    a1 = s3 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A90DD4;
L_08A90DD4:;
    s3 = s0 + 0;
    goto L_08A90D60;
L_08A90DDC:;
    a1 = 625;
    v0 = func_08A90AB4(a0, a1, t0, t1, t2, t3);
    goto L_08A90DE4;
L_08A90DE4:;
    ST32(s4+72, v0);
    s1 = v0 + 0;
    ST32(v0, 0);
    goto L_08A90D48;
L_08A90DF4:;
    v0 = D_08AE99B8 - (-26184);
    v0 = v0 - 26184;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a2 = LD32(v1-4);
    a3 = 0 + 0;
    v0 = func_08A90744(a0, a1, a2, a3, t2, t3);
    goto L_08A90E10;
L_08A90E10:;
    s3 = v0 + 0;
    goto L_08A90D30;
}

/* 08A90E18 */
u32 func_08A90E18(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A90E18:;
    sp = sp - 32;
    s5 = a0 + 0;
    s3 = a1 + 0;
    s1 = (u32)((s32)a2 >> 5);
    s0 = a2 + 0;
    v0 = LD32(a1+16);
    a2 = LD32(a1+8);
    v0 = s1 + v0;
    s2 = v0 + 1;
    v1 = (s32)a2 < (s32)s2;
    cnd_ = v1 == 0;
    a1 = LD32(a1+4);
    if (cnd_) { goto L_08A90E74; }
    goto L_08A90E64;
L_08A90E64:;
    a2 = a2 << 1;
    v0 = (s32)a2 < (s32)s2;
    cnd_ = v0 != 0;
    a1 = a1 + 1;
    if (cnd_) { goto L_08A90E64; }
    goto L_08A90E74;
L_08A90E74:;
    a0 = s5 + 0;
    v0 = func_08A90660(a0, a1, t0, t1, t2, t3);
    goto L_08A90E7C;
L_08A90E7C:;
    s4 = v0 + 0;
    cnd_ = (s32)s1 <= 0;
    a3 = v0 + 20;
    if (cnd_) { goto L_08A90E9C; }
    goto L_08A90E88;
L_08A90E88:;
    a2 = s1 + 0;
    goto L_08A90E8C;
L_08A90E8C:;
    a2 = a2 - 1;
    ST32(a3, 0);
    cnd_ = a2 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A90E8C; }
    goto L_08A90E9C;
L_08A90E9C:;
    v0 = LD32(s3+16);
    a0 = s3 + 20;
    s0 = s0 & 0x1f;
    v0 = v0 << 2;
    cnd_ = s0 == 0;
    a2 = a0 + v0;
    if (cnd_) { goto L_08A90F30; }
    goto L_08A90EB4;
L_08A90EB4:;
    v0 = 32;
    a1 = v0 - s0;
    v1 = 0 + 0;
    goto L_08A90EC0;
L_08A90EC0:;
    v0 = LD32(a0);
    v0 = v0 << (s0 & 31);
    v0 = v0 | v1;
    ST32(a3, v0);
    a3 = a3 + 4;
    v1 = LD32(a0);
    a0 = a0 + 4;
    v0 = a0 < a2;
    cnd_ = v0 != 0;
    v1 = v1 >> (a1 & 31);
    if (cnd_) { goto L_08A90EC0; }
    goto L_08A90EE8;
L_08A90EE8:;
    cnd_ = v1 == 0;
    ST32(a3, v1);
    if (cnd_) { goto L_08A90EF4; }
    goto L_08A90EF0;
L_08A90EF0:;
    s2 = s2 + 1;
    goto L_08A90EF4;
L_08A90EF4:;
    v0 = s2 - 1;
    goto L_08A90EF8;
L_08A90EF8:;
    ST32(s4+16, v0);
    a0 = s5 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08A90718(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A90F08;
L_08A90F08:;
    v0 = s4 + 0;
    sp = sp + 32;
    return v0;
L_08A90F30:;
    v0 = LD32(a0);
    a0 = a0 + 4;
    v1 = a0 < a2;
    ST32(a3, v0);
    cnd_ = v1 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A90F30; }
    goto L_08A90F48;
L_08A90F48:;
    v0 = s2 - 1;
    goto L_08A90EF8;
}

/* 08A90F50 */
u32 func_08A90F50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A90F50:;
    v0 = LD32(a0+16);
    v1 = LD32(a1+16);
    v0 = v0 - v1;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_08A90F9C; }
    goto L_08A90F64;
L_08A90F64:;
    v1 = v1 << 2;
    a0 = a0 + 20;
    v0 = a1 + 20;
    v0 = v0 + v1;
    v1 = a0 + v1;
    v1 = v1 - 4;
    goto L_08A90F7C;
L_08A90F7C:;
    v0 = v0 - 4;
    a3 = LD32(v1);
    a1 = LD32(v0);
    cnd_ = a3 != a1;
    a2 = a0 < v1;
    if (cnd_) { goto L_08A90FA4; }
    goto L_08A90F90;
L_08A90F90:;
    cnd_ = a2 != 0;
    if (cnd_) { v1 = v1 - 4; goto L_08A90F7C; }
    goto L_08A90F98;
L_08A90F98:;
    a2 = 0 + 0;
    goto L_08A90F9C;
L_08A90F9C:;
    v0 = a2 + 0;
    return v0;
L_08A90FA4:;
    v1 = a3 < a1;
    a2 = (u32)-1;
    v0 = 1;
    if (v1 == 0) a2 = v0;
    goto L_08A90F9C;
}

/* 08A90FB8 */
u32 func_08A90FB8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A90FB8:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = a2 + 0;
    s3 = a0 + 0;
    a0 = s1 + 0;
    s2 = a2 + 0;
    v0 = func_08A90F50(a0, a1);
    goto L_08A90FE8;
L_08A90FE8:;
    cnd_ = v0 == 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08A91118; }
    goto L_08A90FF0;
L_08A90FF0:;
    cnd_ = (s32)v0 < 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A91104; }
    goto L_08A90FF8;
L_08A90FF8:;
    a1 = LD32(s1+4);
    a0 = s3 + 0;
    v0 = func_08A90660(a0, a1, 0, 0, 0, 0);
    goto L_08A91004;
L_08A91004:;
    t2 = LD32(s1+16);
    v1 = LD32(s2+16);
    t4 = v0 + 0;
    ST32(v0+12, s0);
    t0 = s1 + 20;
    a2 = s2 + 20;
    v1 = v1 << 2;
    v0 = t2 << 2;
    t5 = t0 + v0;
    t3 = a2 + v1;
    a3 = t4 + 20;
    t1 = 0 + 0;
    goto L_08A91034;
L_08A91034:;
    a0 = LD32(t0);
    a1 = LD32(a2);
    a2 = a2 + 4;
    v0 = a0 & 0xffff;
    v1 = a1 & 0xffff;
    v0 = v0 - v1;
    v1 = v0 + t1;
    a1 = a1 >> 16;
    a0 = a0 >> 16;
    t1 = (u32)((s32)v1 >> 16);
    a0 = a0 - a1;
    a1 = a0 + t1;
    v0 = a2 < t3;
    ST16(a3+2, a1);
    t0 = t0 + 4;
    t1 = (u32)((s32)a1 >> 16);
    ST16(a3, v1);
    cnd_ = v0 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A91034; }
    goto L_08A91080;
L_08A91080:;
    v0 = t0 < t5;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 - 4; goto L_08A910C4; }
    goto L_08A9108C;
L_08A9108C:;
    v0 = LD32(t0);
    t0 = t0 + 4;
    a0 = t0 < t5;
    v1 = v0 & 0xffff;
    v1 = v1 + t1;
    t1 = (u32)((s32)v1 >> 16);
    v0 = v0 >> 16;
    a1 = v0 + t1;
    ST16(a3+2, a1);
    t1 = (u32)((s32)a1 >> 16);
    ST16(a3, v1);
    cnd_ = a0 != 0;
    a3 = a3 + 4;
    if (cnd_) { goto L_08A9108C; }
    goto L_08A910C0;
L_08A910C0:;
    a3 = a3 - 4;
    goto L_08A910C4;
L_08A910C4:;
    v0 = LD32(a3);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(t4+16, t2); goto L_08A910E4; }
    goto L_08A910D0;
L_08A910D0:;
    a3 = a3 - 4;
    v0 = LD32(a3);
    cnd_ = v0 == 0;
    t2 = t2 - 1;
    if (cnd_) { goto L_08A910D0; }
    goto L_08A910E0;
L_08A910E0:;
    ST32(t4+16, t2);
    goto L_08A910E4;
L_08A910E4:;
    v0 = t4 + 0;
    sp = sp + 32;
    return v0;
L_08A91104:;
    t4 = s1 + 0;
    s0 = 1;
    s1 = s2 + 0;
    s2 = t4 + 0;
    goto L_08A90FF8;
L_08A91118:;
    a1 = 0 + 0;
    v0 = func_08A90660(a0, a1, 0, 0, 0, 0);
    goto L_08A91120;
L_08A91120:;
    t4 = v0 + 0;
    v0 = 1;
    ST32(t4+16, v0);
    ST32(t4+20, 0);
    goto L_08A910E4;
}

/* 08A91134 */
u64 func_08A91134(u32 a1)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0;
    int fcc = 0;
    int cnd_;
L_08A91134:;
    v0 = 0x7ff00000u;
    v0 = a1 & v0;
    v1 = 0xfcc00000u;
    a0 = v0 + v1;
    v0 = 0 - a0;
    cnd_ = (s32)a0 <= 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08A91160; }
    goto L_08A91150;
L_08A91150:;
    a2 = 0 + 0;
    goto L_08A91154;
L_08A91154:;
    v0 = a2 + 0;
    v1 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A91160:;
    a0 = (u32)((s32)v0 >> 20);
    v0 = (s32)a0 < 20;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08A9117C; }
    goto L_08A91170;
L_08A91170:;
    v0 = 0x80000u;
    a3 = (u32)((s32)v0 >> (a0 & 31));
    goto L_08A91150;
L_08A9117C:;
    a0 = a0 - 20;
    v1 = (s32)a0 < 31;
    v0 = 31;
    a0 = v0 - a0;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A9119C; }
    goto L_08A91194;
L_08A91194:;
    v0 = 1;
    a1 = v0 << (a0 & 31);
    goto L_08A9119C;
L_08A9119C:;
    a2 = a1 + 0;
    goto L_08A91154;
}

/* 08A911A4 */
u64 func_08A911A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A911A4:;
    sp = sp - 32;
    s3 = a0 + 20;
    s0 = a1 + 0;
    v0 = LD32(a0+16);
    v0 = v0 << 2;
    s1 = s3 + v0;
    s1 = s1 - 4;
    s2 = LD32(s1);
    a0 = s2 + 0;
    v0 = func_08A90974(a0);
    goto L_08A911E8;
L_08A911E8:;
    a1 = v0 + 0;
    v0 = 32;
    v0 = v0 - a1;
    v1 = (s32)a1 < 11;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08A9128C; }
    goto L_08A91200;
L_08A91200:;
    v0 = s3 < s1;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A91214; }
    goto L_08A9120C;
L_08A9120C:;
    s1 = s1 - 4;
    a2 = LD32(s1);
    goto L_08A91214;
L_08A91214:;
    v0 = 0x3ff00000u;
    a1 = a1 - 11;
    s5 = s2 | v0;
    cnd_ = a1 == 0;
    s4 = a2 + 0;
    if (cnd_) { goto L_08A91260; }
    goto L_08A91228;
L_08A91228:;
    v0 = 0 - a1;
    v1 = s2 << (a1 & 31);
    v0 = a2 >> (v0 & 31);
    v1 = v1 | v0;
    a0 = s3 < s1;
    v0 = 0x3ff00000u;
    s5 = v1 | v0;
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08A91250; }
    goto L_08A9124C;
L_08A9124C:;
    s2 = LD32(s1-4);
    goto L_08A91250;
L_08A91250:;
    v0 = 0 - a1;
    v0 = s2 >> (v0 & 31);
    v1 = a2 << (a1 & 31);
    goto L_08A9125C;
L_08A9125C:;
    s4 = v1 | v0;
    goto L_08A91260;
L_08A91260:;
    v0 = s4 + 0;
    v1 = s5 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08A9128C:;
    v0 = 11;
    v0 = v0 - a1;
    v0 = s2 >> (v0 & 31);
    v1 = 0x3ff00000u;
    a0 = s3 < s1;
    s5 = v0 | v1;
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A912B0; }
    goto L_08A912AC;
L_08A912AC:;
    a2 = LD32(s1-4);
    goto L_08A912B0;
L_08A912B0:;
    v1 = 11;
    v1 = v1 - a1;
    v0 = a1 + 21;
    v0 = s2 << (v0 & 31);
    v1 = a2 >> (v1 & 31);
    goto L_08A9125C;
}

/* 08A912C8 */
u32 func_08A912C8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A912C8:;
    sp = sp - 48;
    a1 = 1;
    s1 = a3 + 0;
    s6 = t1 + 0;
    s5 = t0 + 0;
    s0 = a2 + 0;
    v0 = func_08A90660(a0, a1, t0, t1, t2, t3);
    goto L_08A91304;
L_08A91304:;
    v1 = s1 + 0;
    s1 = (s1 >> 0) & 0x7fffffff;
    v1 = (v1 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    s3 = s1 >> 20;
    s2 = v0 + 0;
    ST32(sp+4, v1);
    cnd_ = s3 == 0;
    s4 = v0 + 20;
    if (cnd_) { goto L_08A91330; }
    goto L_08A91324;
L_08A91324:;
    v0 = 0x100000u;
    v0 = v1 | v0;
    ST32(sp+4, v0);
    goto L_08A91330;
L_08A91330:;
    cnd_ = s0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A91404; }
    goto L_08A91338;
L_08A91338:;
    ST32(sp, s0);
    v0 = func_08A909FC(a0);
    goto L_08A91340;
L_08A91340:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A913F8; }
    goto L_08A91348;
L_08A91348:;
    v1 = LD32(sp+4);
    a0 = 0 - v0;
    v0 = LD32(sp);
    v1 = v1 << (a0 & 31);
    v0 = v0 | v1;
    ST32(s2+20, v0);
    v1 = LD32(sp+4);
    v1 = v1 >> (a1 & 31);
    ST32(sp+4, v1);
    goto L_08A9136C;
L_08A9136C:;
    a0 = LD32(sp+4);
    v1 = 2;
    v0 = 1;
    if (a0 == 0) v1 = v0;
    s0 = v1 + 0;
    ST32(s4+4, a0);
    ST32(s2+16, v1);
    goto L_08A91388;
L_08A91388:;
    cnd_ = s3 == 0;
    v1 = s0 << 2;
    if (cnd_) { goto L_08A913D4; }
    goto L_08A91390;
L_08A91390:;
    v0 = s3 + a1;
    v1 = 53;
    v1 = v1 - a1;
    v0 = v0 - 1075;
    ST32(s5, v0);
    ST32(s6, v1);
    goto L_08A913A8;
L_08A913A8:;
    v0 = s2 + 0;
    sp = sp + 48;
    return v0;
L_08A913D4:;
    v1 = v1 + s4;
    v0 = a1 - 1074;
    ST32(s5, v0);
    s0 = s0 << 5;
    a0 = LD32(v1-4);
    v0 = func_08A90974(a0);
    goto L_08A913EC;
L_08A913EC:;
    s0 = s0 - v0;
    ST32(s6, s0);
    goto L_08A913A8;
L_08A913F8:;
    v0 = LD32(sp);
    ST32(s2+20, v0);
    goto L_08A9136C;
L_08A91404:;
    a0 = sp + 4;
    v0 = func_08A909FC(a0);
    goto L_08A9140C;
L_08A9140C:;
    a1 = v0 + 0;
    v0 = 1;
    ST32(s2+16, v0);
    s0 = 1;
    a1 = a1 + 32;
    v0 = LD32(sp+4);
    ST32(s2+20, v0);
    goto L_08A91388;
}

/* 08A9142C */
u64 func_08A9142C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9142C:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    { u64 r_ = func_08A911A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A91454;
L_08A91454:;
    a0 = s0 + 0;
    a1 = sp + 4;
    s2 = v0 + 0;
    s3 = v1 + 0;
    { u64 r_ = func_08A911A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A91468;
L_08A91468:;
    a0 = LD32(s0+16);
    a2 = LD32(s1+16);
    a1 = LD32(sp+4);
    a2 = a2 - a0;
    a0 = LD32(sp);
    a2 = a2 << 5;
    a0 = a0 - a1;
    a0 = a0 + a2;
    cnd_ = (s32)a0 <= 0;
    a1 = a0 << 20;
    if (cnd_) { goto L_08A914C4; }
    goto L_08A91490;
L_08A91490:;
    s3 = a1 + s3;
    goto L_08A91494;
L_08A91494:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { u64 r_ = func_08A93850(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A914A8;
L_08A914A8:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08A914C4:;
    v1 = v1 - a1;
    goto L_08A91494;
}

/* 08A914CC */
u32 func_08A914CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A914CC:;
    sp = sp - 16;
    v0 = a1 + 0;
    a1 = a2 + 0;
    s1 = a0 + 0;
    a2 = a3 + 0;
    a0 = v0 + 0;
    s0 = D_08C38BEC - (-29716);
    ST32(s0-29716, 0);
    v0 = func_08A85864(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A914FC;
L_08A914FC:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s0-29716);
    if (cnd_) { goto L_08A91524; }
    goto L_08A9150C;
L_08A9150C:;
    goto L_08A91510;
L_08A91510:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A91524:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, v0); goto L_08A9150C; }
    goto L_08A9152C;
L_08A9152C:;
    goto L_08A91510;
}

/* 08A91534 */
u32 func_08A91534(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A91534:;
    sp = sp - 48;
    fp = a0 + 0;
    s3 = a1 + 0;
    s2 = a2 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A91A7C; }
    goto L_08A91570;
L_08A91570:;
    s0 = s3 - 8;
    func_08A87FB8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A91578;
L_08A91578:;
    v0 = s2 + 19;
    t0 = LD32(s0+4);
    a0 = v0 < 0x1fu;
    s6 = 16;
    v0 = (v0 & ~(0xfu << 0)) | ((0 & 0xf) << 0);
    if (a0 == 0) s6 = v0;
    v0 = s6 < s2;
    v1 = s6 >> 31;
    s1 = t0 + 0;
    v1 = v1 | v0;
    s1 = (s1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    s4 = s0 + 0;
    s5 = s1 + 0;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A91740; }
    goto L_08A915B4;
L_08A915B4:;
    v0 = (s32)s1 < (s32)s6;
    cnd_ = v0 == 0;
    a1 = s1 - s6;
    if (cnd_) { goto L_08A91798; }
    goto L_08A915C0;
L_08A915C0:;
    v0 = D_08B1E018 - (-8168);
    t1 = v0 - 8168;
    a1 = LD32(t1+8);
    a2 = s0 + s1;
    cnd_ = a2 == a1;
    a0 = LD32(a2+4);
    if (cnd_) { goto L_08A915F4; }
    goto L_08A915D8;
L_08A915D8:;
    v0 = a0 + 0;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = a2 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = 0 + 0; goto L_08A91A74; }
    goto L_08A915F4;
L_08A915F4:;
    a3 = a0 + 0;
    cnd_ = a2 == a1;
    a3 = (a3 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_08A91A2C; }
    goto L_08A91600;
L_08A91600:;
    v1 = a3 + s5;
    v0 = (s32)v1 < (s32)s6;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a2+8); goto L_08A91A18; }
    goto L_08A91610;
L_08A91610:;
    v0 = t0 & 0x1;
    goto L_08A91614;
L_08A91614:;
    cnd_ = v0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08A9166C; }
    goto L_08A9161C;
L_08A9161C:;
    v0 = LD32(s4);
    s7 = s4 - v0;
    a0 = LD32(s7+4);
    cnd_ = a2 == 0;
    a0 = (a0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    if (cnd_) { goto L_08A91654; }
    goto L_08A91630;
L_08A91630:;
    v1 = D_08B1E018 - (-8168);
    v0 = v1 - 8168;
    v1 = LD32(v0+8);
    cnd_ = a2 == v1;
    v0 = a3 + a0;
    if (cnd_) { goto L_08A91910; }
    goto L_08A91644;
L_08A91644:;
    a3 = v0 + s5;
    v1 = (s32)a3 < (s32)s6;
    cnd_ = v1 == 0;
    if (cnd_) { a0 = LD32(a2+8); goto L_08A918E0; }
    goto L_08A91654;
L_08A91654:;
    cnd_ = s7 == 0;
    v1 = a0 + s5;
    if (cnd_) { goto L_08A91668; }
    goto L_08A9165C;
L_08A9165C:;
    v0 = (s32)v1 < (s32)s6;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s7+12); goto L_08A9181C; }
    goto L_08A91668;
L_08A91668:;
    a1 = s2 + 0;
    goto L_08A9166C;
L_08A9166C:;
    a0 = fp + 0;
    { u64 r_ = func_08A87514(a0, a1, a2, a3, t0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A91674;
L_08A91674:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08A9180C; }
    goto L_08A9167C;
L_08A9167C:;
    v0 = LD32(s4+4);
    s0 = s2 - 8;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    v0 = s4 + v0;
    cnd_ = s0 == v0;
    a2 = s5 - 4;
    if (cnd_) { goto L_08A91784; }
    goto L_08A91694;
L_08A91694:;
    v0 = a2 < 0x25u;
    cnd_ = v0 == 0;
    v0 = a2 < 0x14u;
    if (cnd_) { goto L_08A91770; }
    goto L_08A916A0;
L_08A916A0:;
    a1 = s3 + 0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A91704; }
    goto L_08A916AC;
L_08A916AC:;
    v0 = LD32(s3);
    v1 = a2 < 0x1cu;
    a1 = s3 + 8;
    ST32(s2, v0);
    a0 = s2 + 8;
    v0 = LD32(s3+4);
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08A91704; }
    goto L_08A916CC;
L_08A916CC:;
    v0 = LD32(s3+8);
    v1 = a2 < 0x24u;
    a1 = s3 + 16;
    ST32(s2+8, v0);
    a0 = s2 + 16;
    v0 = LD32(s3+12);
    cnd_ = v1 != 0;
    ST32(s2+12, v0);
    if (cnd_) { goto L_08A91704; }
    goto L_08A916EC;
L_08A916EC:;
    v1 = LD32(s3+16);
    a1 = s3 + 24;
    a0 = s2 + 24;
    ST32(s2+16, v1);
    v0 = LD32(s3+20);
    ST32(s2+20, v0);
    goto L_08A91704;
L_08A91704:;
    v0 = LD32(a1);
    a1 = a1 + 4;
    ST32(a0, v0);
    a0 = a0 + 4;
    v0 = LD32(a1);
    ST32(a0, v0);
    v1 = LD32(a1+4);
    ST32(a0+4, v1);
    a0 = fp + 0;
    goto L_08A91728;
L_08A91728:;
    a1 = s3 + 0;
    v0 = func_08A8650C(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A91730;
L_08A91730:;
    a0 = fp + 0;
    goto L_08A91734;
L_08A91734:;
    v0 = func_08A87FF4(a1, a2, a3, t0, t1, 0, 0);
    goto L_08A9173C;
L_08A9173C:;
    v0 = s2 + 0;
    goto L_08A91740;
L_08A91740:;
    goto L_08A91744;
L_08A91744:;
    sp = sp + 48;
    return v0;
L_08A91770:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A9177C;
L_08A9177C:;
    a0 = fp + 0;
    goto L_08A91728;
L_08A91784:;
    v0 = LD32(s0+4);
    s0 = s4 + 0;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    s1 = s5 + v0;
    goto L_08A91794;
L_08A91794:;
    a1 = s1 - s6;
    goto L_08A91798;
L_08A91798:;
    v0 = a1 < 0x10u;
    cnd_ = v0 == 0;
    v0 = LD32(s0+4);
    if (cnd_) { goto L_08A917D0; }
    goto L_08A917A4;
L_08A917A4:;
    a0 = s0 + s1;
    v0 = v0 & 0x1;
    v0 = v0 | s1;
    ST32(s0+4, v0);
    v1 = LD32(a0+4);
    v1 = v1 | 0x1;
    ST32(a0+4, v1);
    goto L_08A917C0;
L_08A917C0:;
    a0 = fp + 0;
    v0 = func_08A87FF4(a1, a2, a3, t0, t1, 0, 0);
    goto L_08A917C8;
L_08A917C8:;
    v0 = s0 + 8;
    goto L_08A91740;
L_08A917D0:;
    v1 = s0 + s6;
    a0 = a1 | 0x1;
    v0 = v0 & 0x1;
    v0 = v0 | s6;
    ST32(s0+4, v0);
    a2 = v1 + a1;
    a1 = v1 + 8;
    ST32(v1+4, a0);
    a0 = fp + 0;
    v0 = LD32(a2+4);
    v0 = v0 | 0x1;
    ST32(a2+4, v0);
    v0 = func_08A8650C(a0, a1, a2, a3, t0, t1, 0, 0);
    goto L_08A91804;
L_08A91804:;
    goto L_08A917C0;
L_08A9180C:;
    a0 = fp + 0;
    v0 = func_08A87FF4(0, 0, 0, 0, 0, 0, 0);
    goto L_08A91814;
L_08A91814:;
    v0 = 0 + 0;
    goto L_08A91740;
L_08A9181C:;
    a0 = LD32(s7+8);
    a2 = s5 - 4;
    s0 = s7 + 0;
    ST32(a1+8, a0);
    v0 = a2 < 0x25u;
    s1 = v1 + 0;
    s2 = s7 + 8;
    goto L_08A91838;
L_08A91838:;
    cnd_ = v0 == 0;
    ST32(a0+12, a1);
    if (cnd_) { goto L_08A918CC; }
    goto L_08A91840;
L_08A91840:;
    v0 = a2 < 0x14u;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a3 = s3 + 0;
    if (cnd_) { goto L_08A918A8; }
    goto L_08A91850;
L_08A91850:;
    v0 = LD32(s3);
    v1 = a2 < 0x1cu;
    a3 = s3 + 8;
    ST32(s0+8, v0);
    a0 = s0 + 16;
    v0 = LD32(s3+4);
    cnd_ = v1 != 0;
    ST32(s0+12, v0);
    if (cnd_) { goto L_08A918A8; }
    goto L_08A91870;
L_08A91870:;
    v0 = LD32(s3+8);
    v1 = a2 < 0x24u;
    a3 = s3 + 16;
    ST32(s0+16, v0);
    a0 = s0 + 24;
    v0 = LD32(s3+12);
    cnd_ = v1 != 0;
    ST32(s0+20, v0);
    if (cnd_) { goto L_08A918A8; }
    goto L_08A91890;
L_08A91890:;
    v1 = LD32(s3+16);
    a3 = s3 + 24;
    a0 = s0 + 32;
    ST32(s0+24, v1);
    v0 = LD32(s3+20);
    ST32(s0+28, v0);
    goto L_08A918A8;
L_08A918A8:;
    v0 = LD32(a3);
    a3 = a3 + 4;
    ST32(a0, v0);
    a0 = a0 + 4;
    v0 = LD32(a3);
    ST32(a0, v0);
    v1 = LD32(a3+4);
    ST32(a0+4, v1);
    goto L_08A91794;
L_08A918CC:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A918D8;
L_08A918D8:;
    a1 = s1 - s6;
    goto L_08A91798;
L_08A918E0:;
    a1 = LD32(a2+12);
    a2 = s5 - 4;
    s0 = s7 + 0;
    ST32(a1+8, a0);
    v0 = a2 < 0x25u;
    s1 = a3 + 0;
    ST32(a0+12, a1);
    s2 = s7 + 8;
    a1 = LD32(s7+12);
    a0 = LD32(s7+8);
    ST32(a1+8, a0);
    goto L_08A91838;
L_08A91910:;
    v1 = a3 + a0;
    s1 = v1 + s5;
    v0 = s6 + 16;
    v0 = (s32)s1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A91654; }
    goto L_08A91928;
L_08A91928:;
    a1 = LD32(s7+12);
    a0 = LD32(s7+8);
    a2 = s5 - 4;
    v0 = a2 < 0x25u;
    ST32(a1+8, a0);
    s2 = s7 + 8;
    cnd_ = v0 == 0;
    ST32(a0+12, a1);
    if (cnd_) { goto L_08A91A04; }
    goto L_08A91948;
L_08A91948:;
    v0 = a2 < 0x14u;
    a3 = s3 + 0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08A919B0; }
    goto L_08A91958;
L_08A91958:;
    v0 = LD32(s3);
    v1 = a2 < 0x1cu;
    a3 = s3 + 8;
    ST32(s7+8, v0);
    a0 = s7 + 16;
    v0 = LD32(s3+4);
    cnd_ = v1 != 0;
    ST32(s7+12, v0);
    if (cnd_) { goto L_08A919B0; }
    goto L_08A91978;
L_08A91978:;
    v0 = LD32(s3+8);
    v1 = a2 < 0x24u;
    a3 = s3 + 16;
    ST32(s7+16, v0);
    a0 = s7 + 24;
    v0 = LD32(s3+12);
    cnd_ = v1 != 0;
    ST32(s7+20, v0);
    if (cnd_) { goto L_08A919B0; }
    goto L_08A91998;
L_08A91998:;
    v1 = LD32(s3+16);
    a3 = s3 + 24;
    a0 = s7 + 32;
    ST32(s7+24, v1);
    v0 = LD32(s3+20);
    ST32(s7+28, v0);
    goto L_08A919B0;
L_08A919B0:;
    v0 = LD32(a3);
    a3 = a3 + 4;
    ST32(a0, v0);
    a0 = a0 + 4;
    v0 = LD32(a3);
    ST32(a0, v0);
    v1 = LD32(a3+4);
    ST32(a0+4, v1);
    v0 = s1 - s6;
    goto L_08A919D4;
L_08A919D4:;
    v0 = v0 | 0x1;
    a1 = s7 + s6;
    ST32(a1+4, v0);
    v0 = D_08B1E018 - (-8168);
    v1 = v0 - 8168;
    v0 = LD32(s7+4);
    a0 = fp + 0;
    ST32(v1+8, a1);
    v0 = v0 & 0x1;
    v0 = v0 | s6;
    ST32(s7+4, v0);
    goto L_08A91734;
L_08A91A04:;
    a1 = s3 + 0;
    a0 = s2 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A91A10;
L_08A91A10:;
    v0 = s1 - s6;
    goto L_08A919D4;
L_08A91A18:;
    a1 = LD32(a2+12);
    s1 = v1 + 0;
    ST32(a1+8, a0);
    ST32(a0+12, a1);
    goto L_08A91794;
L_08A91A2C:;
    v1 = a3 + s5;
    v0 = s6 + 16;
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = t0 & 0x1; goto L_08A91614; }
    goto L_08A91A40;
L_08A91A40:;
    v0 = v1 - s6;
    v0 = v0 | 0x1;
    v1 = s4 + s6;
    ST32(v1+4, v0);
    a0 = fp + 0;
    v0 = LD32(s4+4);
    ST32(t1+8, v1);
    v0 = v0 & 0x1;
    v0 = v0 | s6;
    ST32(s4+4, v0);
    v0 = func_08A87FF4(a1, a2, a3, t0, t1, 0, 0);
    goto L_08A91A6C;
L_08A91A6C:;
    v0 = s4 + 8;
    goto L_08A91740;
L_08A91A74:;
    a3 = 0 + 0;
    goto L_08A91610;
L_08A91A7C:;
    a1 = a2 + 0;
    { u64 r_ = func_08A87514(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A91A84;
L_08A91A84:;
    goto L_08A91744;
}

/* 08A91A8C */
u32 func_08A91A8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A91A8C:;
    v0 = 0 - a0;
    v0 = v0 | a0;
    v0 = v0 >> 31;
    v1 = (a1 >> 0) & 0x7fffffff;
    v1 = v1 | v0;
    a0 = 0x7ff00000u;
    v1 = a0 - v1;
    v0 = 0 - v1;
    v1 = v1 | v0;
    v1 = v1 >> 31;
    v0 = 1;
    v0 = v0 - v1;
    return v0;
}

/* 08A91AC0 */
u32 func_08A91AC0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08A91AC0:;
    v1 = 0 - a0;
    v1 = v1 | a0;
    v1 = v1 >> 31;
    v0 = (a1 >> 0) & 0x7fffffff;
    v0 = v0 | v1;
    a0 = 0x7ff00000u;
    v0 = a0 - v0;
    v0 = v0 >> 31;
    return v0;
}

/* 08A91AE4 */
u64 func_08A91AE4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A91AE4:;
    sp = sp - 64;
    v0 = D_08AE9044 - (-28604);
    ST32(sp+4, a2);
    ST32(sp+8, 0);
    fp = a1 + 0;
    s6 = a3 + 0;
    s3 = a1 + 0;
    ST32(sp, a0);
    a0 = v0 - 28604;
    goto L_08A91B30;
L_08A91B30:;
    s2 = (u32)(s32)LD_S8(s3);
    v1 = s2 + a0;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A91B30; }
    goto L_08A91B48;
L_08A91B48:;
    v0 = 45;
    cnd_ = s2 == v0;
    v0 = 43;
    if (cnd_) { goto L_08A91DA4; }
    goto L_08A91B54;
L_08A91B54:;
    cnd_ = s2 == v0;
    if (cnd_) { s2 = (u32)(s32)LD_S8(s3); goto L_08A91D9C; }
    goto L_08A91B5C;
L_08A91B5C:;
    v1 = s6 ^ 0x10;
    v1 = v1 < 0x1u;
    v0 = s6 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = 48;
    if (cnd_) { goto L_08A91B7C; }
    goto L_08A91B74;
L_08A91B74:;
    cnd_ = s2 == v0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(s3); goto L_08A91D70; }
    goto L_08A91B7C;
L_08A91B7C:;
    cnd_ = s6 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A91B98; }
    goto L_08A91B84;
L_08A91B84:;
    s6 = 8;
    v1 = s2 ^ 0x30;
    v0 = 10;
    if (v1 != 0) s6 = v0;
    v1 = LD32(sp+8);
    goto L_08A91B98;
L_08A91B98:;
    s4 = 0;
    s5 = 0x80000000u;
    cnd_ = v1 != 0;
    s7 = (u32)((s32)s6 >> 31);
    if (cnd_) { goto L_08A91BB4; }
    goto L_08A91BA8;
L_08A91BA8:;
    s4 = (u32)-1;
    s5 = 0x7fff0000u;
    s5 = s5 | 0xffff;
    goto L_08A91BB4;
L_08A91BB4:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    v0 = func_08A92ABC(a0, a1, a2, a3);
    goto L_08A91BC8;
L_08A91BC8:;
    a0 = s4 + 0;
    a1 = s5 + 0;
    a2 = s6 + 0;
    a3 = s7 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08A92548(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A91BE0;
L_08A91BE0:;
    s4 = v0 + 0;
    v0 = D_08AE9044 - (-28604);
    s5 = v1 + 0;
    t5 = v0 - 28604;
    t2 = 0 + 0;
    t3 = 0 + 0;
    t4 = 0 + 0;
    goto L_08A91BFC;
L_08A91BFC:;
    v0 = s2 + t5;
    a0 = LD_U8(v0);
    v1 = a0 & 0x4;
    cnd_ = v1 == 0;
    v0 = a0 & 0x3;
    if (cnd_) { goto L_08A91D54; }
    goto L_08A91C10;
L_08A91C10:;
    s2 = s2 - 48;
    goto L_08A91C14;
L_08A91C14:;
    v0 = (s32)s2 < (s32)s6;
    cnd_ = v0 == 0;
    v0 = s5 < t3;
    if (cnd_) { goto L_08A91CC0; }
    goto L_08A91C20;
L_08A91C20:;
    v1 = t4 >> 31;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A91CB8; }
    goto L_08A91C2C;
L_08A91C2C:;
    cnd_ = t3 == s5;
    v0 = s4 < t2;
    if (cnd_) { goto L_08A91CB0; }
    goto L_08A91C34;
L_08A91C34:;
    v0 = v1 | a0;
    goto L_08A91C38;
L_08A91C38:;
    cnd_ = v0 != 0;
    t4 = (u32)-1;
    if (cnd_) { goto L_08A91C5C; }
    goto L_08A91C40;
L_08A91C40:;
    cnd_ = t2 == s4;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A91CA4; }
    goto L_08A91C48;
L_08A91C48:;
    v0 = (s32)s0 < (s32)s2;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    { s64 p_ = (s64)(s32)t2 * (s32)s7; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_08A91C68; }
    goto L_08A91C58;
L_08A91C58:;
    t4 = (u32)-1;
    goto L_08A91C5C;
L_08A91C5C:;
    s2 = (u32)(s32)LD_S8(s3);
    s3 = s3 + 1;
    goto L_08A91BFC;
L_08A91C68:;
    a1 = (u32)((s32)s2 >> 31);
    t4 = 1;
    t0 = lo;
    { u64 p_ = (u64)t2 * s6; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a3 = hi;
    a2 = lo;
    { s64 p_ = (s64)(s32)s6 * (s32)t3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t0 = t0 + a3;
    t2 = a2 + s2;
    t1 = t2 < s2;
    v0 = lo;
    a3 = t0 + v0;
    t3 = a3 + a1;
    t3 = t3 + t1;
    goto L_08A91C5C;
L_08A91CA4:;
    v0 = t3 ^ s5;
    v1 = v0 < 0x1u;
    goto L_08A91C48;
L_08A91CB0:;
    cnd_ = v0 == 0;
    v0 = v1 | a0;
    if (cnd_) { goto L_08A91C38; }
    goto L_08A91CB8;
L_08A91CB8:;
    a0 = 1;
    goto L_08A91C34;
L_08A91CC0:;
    cnd_ = (s32)t4 < 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A91D2C; }
    goto L_08A91CC8;
L_08A91CC8:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_08A91CE4; }
    goto L_08A91CD0;
L_08A91CD0:;
    t2 = 0 - t2;
    t3 = 0 - t3;
    v0 = 0 < t2;
    t3 = t3 - v0;
    goto L_08A91CE0;
L_08A91CE0:;
    v1 = LD32(sp+4);
    goto L_08A91CE4;
L_08A91CE4:;
    cnd_ = v1 == 0;
    v0 = s3 - 1;
    if (cnd_) { goto L_08A91CF4; }
    goto L_08A91CEC;
L_08A91CEC:;
    if (t4 != 0) fp = v0;
    ST32(v1, fp);
    goto L_08A91CF4;
L_08A91CF4:;
    v0 = t2 + 0;
    v1 = t3 + 0;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_08A91D2C:;
    t2 = 0;
    t3 = 0x80000000u;
    cnd_ = v0 != 0;
    v1 = LD32(sp);
    if (cnd_) { goto L_08A91D48; }
    goto L_08A91D3C;
L_08A91D3C:;
    t2 = (u32)-1;
    t3 = 0x7fff0000u;
    t3 = t3 | 0xffff;
    goto L_08A91D48;
L_08A91D48:;
    v0 = 34;
    ST32(v1, v0);
    goto L_08A91CE0;
L_08A91D54:;
    cnd_ = v0 == 0;
    v0 = s2 - 55;
    if (cnd_) { goto L_08A91CC0; }
    goto L_08A91D5C;
L_08A91D5C:;
    v1 = s2 - 87;
    a0 = a0 & 0x1;
    s2 = v0 + 0;
    if (a0 == 0) s2 = v1;
    goto L_08A91C14;
L_08A91D70:;
    v1 = v0 ^ 0x58;
    v0 = v0 ^ 0x78;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A91B7C; }
    goto L_08A91D8C;
L_08A91D8C:;
    s2 = (u32)(s32)LD_S8(s3+1);
    s6 = 16;
    s3 = s3 + 2;
    goto L_08A91B7C;
L_08A91D9C:;
    s3 = s3 + 1;
    goto L_08A91B5C;
L_08A91DA4:;
    s2 = (u32)(s32)LD_S8(s3);
    v0 = 1;
    ST32(sp+8, v0);
    goto L_08A91D9C;
}

/* 08A91DB4 */
rv_t func_08A91DB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A91DB4:;
    sp = sp - 16;
    v0 = D_08AE9044 - (-28604);
    t9 = a0 + 0;
    t7 = a1 + 0;
    t8 = a2 + 0;
    a0 = v0 - 28604;
    t1 = a1 + 0;
    s0 = 0 + 0;
    goto L_08A91DD8;
L_08A91DD8:;
    t0 = (u32)(s32)LD_S8(t1);
    v1 = t0 + a0;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    t1 = t1 + 1;
    if (cnd_) { goto L_08A91DD8; }
    goto L_08A91DF0;
L_08A91DF0:;
    v0 = 45;
    cnd_ = t0 == v0;
    v0 = 43;
    if (cnd_) { goto L_08A91F54; }
    goto L_08A91DFC;
L_08A91DFC:;
    cnd_ = t0 == v0;
    if (cnd_) { t0 = (u32)(s32)LD_S8(t1); goto L_08A91F4C; }
    goto L_08A91E04;
L_08A91E04:;
    v1 = a3 ^ 0x10;
    v1 = v1 < 0x1u;
    v0 = a3 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = 48;
    if (cnd_) { goto L_08A91E24; }
    goto L_08A91E1C;
L_08A91E1C:;
    cnd_ = t0 == v0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(t1); goto L_08A91F20; }
    goto L_08A91E24;
L_08A91E24:;
    cnd_ = a3 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A91E40; }
    goto L_08A91E2C;
L_08A91E2C:;
    a3 = 8;
    v1 = t0 ^ 0x30;
    v0 = 10;
    if (v1 != 0) a3 = v0;
    v0 = (u32)-1;
    goto L_08A91E40;
L_08A91E40:;
    { u32 x_ = v0, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v0 = D_08AE9044 - (-28604);
    cnd_ = a3 == 0;
    if (cnd_) { rs_break(0x7, 0x08a91e4c); goto L_08A91E50; }
    goto L_08A91E50;
L_08A91E50:;
    t6 = v0 - 28604;
    t2 = 0 + 0;
    t3 = 0 + 0;
    t5 = hi;
    t4 = lo;
    goto L_08A91E64;
L_08A91E64:;
    v0 = t0 + t6;
    v1 = LD_U8(v0);
    a2 = t0 - 87;
    a1 = t0 - 55;
    v0 = v1 & 0x4;
    a0 = v1 & 0x1;
    t0 = t0 - 48;
    cnd_ = v0 != 0;
    v1 = v1 & 0x3;
    if (cnd_) { goto L_08A91E94; }
    goto L_08A91E88;
L_08A91E88:;
    t0 = a1 + 0;
    cnd_ = v1 == 0;
    if (a0 == 0) t0 = a2;
    if (cnd_) { goto L_08A91EE4; }
    goto L_08A91E94;
L_08A91E94:;
    v0 = t2 ^ t4;
    a1 = t3 >> 31;
    a0 = t4 < t2;
    a2 = (s32)t5 < (s32)t0;
    v0 = v0 < 0x1u;
    v1 = (s32)t0 < (s32)a3;
    a1 = a1 | a0;
    cnd_ = v1 == 0;
    v0 = v0 & a2;
    if (cnd_) { goto L_08A91EE4; }
    goto L_08A91EB8;
L_08A91EB8:;
    cnd_ = a1 != 0;
    t3 = (u32)-1;
    if (cnd_) { goto L_08A91ED8; }
    goto L_08A91EC0;
L_08A91EC0:;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = (u32)(s32)LD_S8(t1); goto L_08A91EDC; }
    goto L_08A91EC8;
L_08A91EC8:;
    { s64 p_ = (s64)(s32)t2 * (s32)a3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t3 = 1;
    t2 = lo;
    t2 = t2 + t0;
    goto L_08A91ED8;
L_08A91ED8:;
    t0 = (u32)(s32)LD_S8(t1);
    goto L_08A91EDC;
L_08A91EDC:;
    t1 = t1 + 1;
    goto L_08A91E64;
L_08A91EE4:;
    v0 = 0 - t2;
    cnd_ = (s32)t3 < 0;
    if (s0 != 0) t2 = v0;
    if (cnd_) { goto L_08A91F10; }
    goto L_08A91EF0;
L_08A91EF0:;
    cnd_ = t8 == 0;
    v0 = t1 - 1;
    if (cnd_) { goto L_08A91F00; }
    goto L_08A91EF8;
L_08A91EF8:;
    if (t3 != 0) t7 = v0;
    ST32(t8, t7);
    goto L_08A91F00;
L_08A91F00:;
    v0 = t2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A91F10:;
    v0 = 34;
    ST32(t9, v0);
    t2 = (u32)-1;
    goto L_08A91EF0;
L_08A91F20:;
    v1 = v0 ^ 0x58;
    v0 = v0 ^ 0x78;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A91E24; }
    goto L_08A91F3C;
L_08A91F3C:;
    t0 = (u32)(s32)LD_S8(t1+1);
    a3 = 16;
    t1 = t1 + 2;
    goto L_08A91E24;
L_08A91F4C:;
    t1 = t1 + 1;
    goto L_08A91E04;
L_08A91F54:;
    t0 = (u32)(s32)LD_S8(t1);
    s0 = 1;
    goto L_08A91F4C;
}

/* 08A91F60 */
u64 func_08A91F60(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A91F60:;
    sp = sp - 64;
    v0 = D_08AE9044 - (-28604);
    ST32(sp+4, a2);
    ST32(sp+8, 0);
    fp = a1 + 0;
    s6 = a3 + 0;
    s3 = a1 + 0;
    ST32(sp, a0);
    a0 = v0 - 28604;
    goto L_08A91FAC;
L_08A91FAC:;
    s2 = (u32)(s32)LD_S8(s3);
    v1 = s2 + a0;
    v0 = LD_U8(v1);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_08A91FAC; }
    goto L_08A91FC4;
L_08A91FC4:;
    v0 = 45;
    cnd_ = s2 == v0;
    v0 = 43;
    if (cnd_) { goto L_08A921F4; }
    goto L_08A91FD0;
L_08A91FD0:;
    cnd_ = s2 == v0;
    if (cnd_) { s2 = (u32)(s32)LD_S8(s3); goto L_08A921EC; }
    goto L_08A91FD8;
L_08A91FD8:;
    v1 = s6 ^ 0x10;
    v1 = v1 < 0x1u;
    v0 = s6 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    v0 = 48;
    if (cnd_) { goto L_08A91FF8; }
    goto L_08A91FF0;
L_08A91FF0:;
    cnd_ = s2 == v0;
    if (cnd_) { v0 = (u32)(s32)LD_S8(s3); goto L_08A921C0; }
    goto L_08A91FF8;
L_08A91FF8:;
    cnd_ = s6 != 0;
    s7 = (u32)((s32)s6 >> 31);
    if (cnd_) { goto L_08A92014; }
    goto L_08A92000;
L_08A92000:;
    s6 = 8;
    v1 = s2 ^ 0x30;
    v0 = 10;
    if (v1 != 0) s6 = v0;
    s7 = (u32)((s32)s6 >> 31);
    goto L_08A92014;
L_08A92014:;
    a1 = (u32)-1;
    a0 = (u32)-1;
    a2 = s6 + 0;
    a3 = s7 + 0;
    { u64 r_ = func_08A92548(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A92028;
L_08A92028:;
    a2 = s6 + 0;
    a3 = s7 + 0;
    a1 = (u32)-1;
    a0 = (u32)-1;
    s4 = v0 + 0;
    s5 = v1 + 0;
    v0 = func_08A92ABC(a0, a1, a2, a3);
    goto L_08A92044;
L_08A92044:;
    t6 = v0 + 0;
    v0 = D_08AE9044 - (-28604);
    t5 = v0 - 28604;
    t2 = 0 + 0;
    t3 = 0 + 0;
    t4 = 0 + 0;
    goto L_08A9205C;
L_08A9205C:;
    v0 = s2 + t5;
    a0 = LD_U8(v0);
    v1 = a0 & 0x4;
    cnd_ = v1 == 0;
    v0 = a0 & 0x3;
    if (cnd_) { goto L_08A921A4; }
    goto L_08A92070;
L_08A92070:;
    s2 = s2 - 48;
    goto L_08A92074;
L_08A92074:;
    v0 = (s32)s2 < (s32)s6;
    cnd_ = v0 == 0;
    v0 = s5 < t3;
    if (cnd_) { goto L_08A92120; }
    goto L_08A92080;
L_08A92080:;
    v1 = t4 >> 31;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A92118; }
    goto L_08A9208C;
L_08A9208C:;
    cnd_ = t3 == s5;
    v0 = s4 < t2;
    if (cnd_) { goto L_08A92110; }
    goto L_08A92094;
L_08A92094:;
    v0 = v1 | a0;
    goto L_08A92098;
L_08A92098:;
    cnd_ = v0 != 0;
    t4 = (u32)-1;
    if (cnd_) { goto L_08A920BC; }
    goto L_08A920A0;
L_08A920A0:;
    cnd_ = t2 == s4;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A92104; }
    goto L_08A920A8;
L_08A920A8:;
    v0 = (s32)t6 < (s32)s2;
    v0 = v1 & v0;
    cnd_ = v0 == 0;
    { s64 p_ = (s64)(s32)t2 * (s32)s7; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_08A920C8; }
    goto L_08A920B8;
L_08A920B8:;
    t4 = (u32)-1;
    goto L_08A920BC;
L_08A920BC:;
    s2 = (u32)(s32)LD_S8(s3);
    s3 = s3 + 1;
    goto L_08A9205C;
L_08A920C8:;
    a1 = (u32)((s32)s2 >> 31);
    t4 = 1;
    t0 = lo;
    { u64 p_ = (u64)t2 * s6; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a3 = hi;
    a2 = lo;
    { s64 p_ = (s64)(s32)s6 * (s32)t3; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    t0 = t0 + a3;
    t2 = a2 + s2;
    t1 = t2 < s2;
    v0 = lo;
    a3 = t0 + v0;
    t3 = a3 + a1;
    t3 = t3 + t1;
    goto L_08A920BC;
L_08A92104:;
    v0 = t3 ^ s5;
    v1 = v0 < 0x1u;
    goto L_08A920A8;
L_08A92110:;
    cnd_ = v0 == 0;
    v0 = v1 | a0;
    if (cnd_) { goto L_08A92098; }
    goto L_08A92118;
L_08A92118:;
    a0 = 1;
    goto L_08A92094;
L_08A92120:;
    cnd_ = (s32)t4 < 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08A9218C; }
    goto L_08A92128;
L_08A92128:;
    cnd_ = v0 == 0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_08A92144; }
    goto L_08A92130;
L_08A92130:;
    t2 = 0 - t2;
    t3 = 0 - t3;
    v0 = 0 < t2;
    t3 = t3 - v0;
    goto L_08A92140;
L_08A92140:;
    v1 = LD32(sp+4);
    goto L_08A92144;
L_08A92144:;
    cnd_ = v1 == 0;
    v0 = s3 - 1;
    if (cnd_) { goto L_08A92154; }
    goto L_08A9214C;
L_08A9214C:;
    if (t4 != 0) fp = v0;
    ST32(v1, fp);
    goto L_08A92154;
L_08A92154:;
    v0 = t2 + 0;
    v1 = t3 + 0;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_08A9218C:;
    v1 = LD32(sp);
    v0 = 34;
    t3 = (u32)-1;
    t2 = (u32)-1;
    ST32(v1, v0);
    goto L_08A92140;
L_08A921A4:;
    cnd_ = v0 == 0;
    v0 = s2 - 55;
    if (cnd_) { goto L_08A92120; }
    goto L_08A921AC;
L_08A921AC:;
    v1 = s2 - 87;
    a0 = a0 & 0x1;
    s2 = v0 + 0;
    if (a0 == 0) s2 = v1;
    goto L_08A92074;
L_08A921C0:;
    v1 = v0 ^ 0x58;
    v0 = v0 ^ 0x78;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A91FF8; }
    goto L_08A921DC;
L_08A921DC:;
    s2 = (u32)(s32)LD_S8(s3+1);
    s6 = 16;
    s3 = s3 + 2;
    goto L_08A91FF8;
L_08A921EC:;
    s3 = s3 + 1;
    goto L_08A91FD8;
L_08A921F4:;
    s2 = (u32)(s32)LD_S8(s3);
    v0 = 1;
    ST32(sp+8, v0);
    goto L_08A921EC;
}

/* 08A92204 */
u32 func_08A92204(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A92204:;
    sp = sp - 32;
    v0 = a0 + 64;
    v1 = LD32(a0+48);
    cnd_ = v1 == v0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08A9229C; }
    goto L_08A92230;
L_08A92230:;
    s3 = LD32(a0+52);
    v0 = func_08A870E0();
    goto L_08A92238;
L_08A92238:;
    a1 = LD32(s2+48);
    s4 = s3 << 1;
    a0 = v0 + 0;
    a2 = s4 + 0;
    v0 = func_08A91534(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08A9224C;
L_08A9224C:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A9227C; }
    goto L_08A92258;
L_08A92258:;
    s0 = s1 + s3;
    a2 = s3 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08A87AE0(a0, a1, a2);
    goto L_08A9226C;
L_08A9226C:;
    ST32(s2+52, s4);
    v0 = 0 + 0;
    ST32(s2, s0);
    ST32(s2+48, s1);
    goto L_08A9227C;
L_08A9227C:;
    sp = sp + 32;
    return v0;
L_08A9229C:;
    v0 = func_08A870E0();
    goto L_08A922A4;
L_08A922A4:;
    a0 = v0 + 0;
    a1 = 1024;
    { u64 r_ = func_08A87514(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A922B0;
L_08A922B0:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A9227C; }
    goto L_08A922BC;
L_08A922BC:;
    v0 = 1024;
    ST32(s2+52, v0);
    s3 = 2;
    ST32(s2+48, s1);
    s1 = s1 + 1021;
    goto L_08A922D0;
L_08A922D0:;
    v0 = s3 + s2;
    a0 = LD_U8(v0+64);
    v1 = s1 + s3;
    s3 = s3 - 1;
    cnd_ = (s32)s3 >= 0;
    ST8(v1, a0);
    if (cnd_) { goto L_08A922D0; }
    goto L_08A922E8;
L_08A922E8:;
    v0 = 0 + 0;
    ST32(s2, s1);
    goto L_08A9227C;
}

/* 08A922F4 */
float func_08A922F4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A922F4:;
    sp = sp - 16;
    v0 = (u32)-1;
    a3 = (u32)-1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A923A8; }
    goto L_08A92318;
L_08A92318:;
    v0 = func_08A870E0();
    goto L_08A92320;
L_08A92320:;
    v1 = LD32(v0+56);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A92474; }
    goto L_08A9232C;
L_08A9232C:;
    v0 = LD_U16(s0+12);
    goto L_08A92330;
L_08A92330:;
    v0 = (v0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    a0 = v0 & 0xffdf;
    v1 = a0 & 0x4;
    cnd_ = v1 != 0;
    ST16(s0+12, v0);
    if (cnd_) { goto L_08A92368; }
    goto L_08A92344;
L_08A92344:;
    v0 = a0 & 0x10;
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A923A8; }
    goto L_08A92350;
L_08A92350:;
    v0 = a0 & 0x8;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A9244C; }
    goto L_08A9235C;
L_08A9235C:;
    v0 = LD_U16(s0+12);
    v0 = v0 | 0x4;
    ST16(s0+12, v0);
    goto L_08A92368;
L_08A92368:;
    v0 = LD32(s0+48);
    cnd_ = v0 == 0;
    s1 = s1 & 0xff;
    if (cnd_) { goto L_08A923D8; }
    goto L_08A92374;
L_08A92374:;
    v0 = LD32(s0+4);
    v1 = LD32(s0+52);
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A923C0; }
    goto L_08A92388;
L_08A92388:;
    v1 = LD32(s0);
    a3 = s1 + 0;
    v0 = v1 - 1;
    ST32(s0, v0);
    ST8(v1-1, s1);
    v0 = LD32(s0+4);
    v0 = v0 + 1;
    ST32(s0+4, v0);
    goto L_08A923A8;
L_08A923A8:;
    goto L_08A923AC;
L_08A923AC:;
    v0 = a3 + 0;
    sp = sp + 16;
    return f0;
L_08A923C0:;
    a0 = s0 + 0;
    v0 = func_08A92204(a0);
    goto L_08A923C8;
L_08A923C8:;
    cnd_ = v0 == 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A92388; }
    goto L_08A923D0;
L_08A923D0:;
    goto L_08A923AC;
L_08A923D8:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    a2 = LD32(s0);
    if (cnd_) { goto L_08A923FC; }
    goto L_08A923E4;
L_08A923E4:;
    v0 = v0 < a2;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_08A92400; }
    goto L_08A923F0;
L_08A923F0:;
    v0 = LD_U8(a2-1);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD32(s0+4); goto L_08A92434; }
    goto L_08A923FC;
L_08A923FC:;
    v1 = LD32(s0+4);
    goto L_08A92400;
L_08A92400:;
    v0 = 1;
    a0 = s0 + 64;
    a1 = s0 + 66;
    ST32(s0+4, v0);
    v0 = 3;
    a3 = s1 + 0;
    ST32(s0+60, v1);
    ST32(s0+56, a2);
    ST32(s0+48, a0);
    ST32(s0+52, v0);
    ST32(s0, a1);
    ST8(s0+66, s1);
    goto L_08A923A8;
L_08A92434:;
    v1 = a2 - 1;
    a3 = s1 + 0;
    v0 = v0 + 1;
    ST32(s0+4, v0);
    ST32(s0, v1);
    goto L_08A923A8;
L_08A9244C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A861F8(a0, 0, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A92454;
L_08A92454:;
    cnd_ = v0 != 0;
    a3 = (u32)-1;
    if (cnd_) { goto L_08A923A8; }
    goto L_08A9245C;
L_08A9245C:;
    v0 = LD_U16(s0+12);
    ST32(s0+8, 0);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST16(s0+12, v0);
    ST32(s0+24, 0);
    goto L_08A9235C;
L_08A92474:;
    v0 = func_08A870E0();
    goto L_08A9247C;
L_08A9247C:;
    a0 = v0 + 0;
    func_08A8636C(a0);
    goto L_08A92484;
L_08A92484:;
    v0 = LD_U16(s0+12);
    goto L_08A92330;
}

/* 08A9248C */
u32 func_08A9248C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9248C:;
    { s64 p_ = (s64)(s32)a1 * (s32)a2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 16;
    a1 = lo;
    { u64 r_ = func_08A87514(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A924A8;
L_08A924A8:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A92528; }
    goto L_08A924B4;
L_08A924B4:;
    v0 = LD32(s0-4);
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v1 = v0 - 4;
    v0 = v1 < 0x25u;
    a3 = s0 + 0;
    a2 = v1 + 0;
    cnd_ = v0 == 0;
    t0 = v1 < 0x14u;
    if (cnd_) { goto L_08A92538; }
    goto L_08A924DC;
L_08A924DC:;
    cnd_ = t0 != 0;
    a0 = v1 < 0x1cu;
    if (cnd_) { goto L_08A92514; }
    goto L_08A924E4;
L_08A924E4:;
    v0 = v1 < 0x24u;
    ST32(s0, 0);
    a3 = s0 + 8;
    cnd_ = a0 != 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08A92514; }
    goto L_08A924F8;
L_08A924F8:;
    ST32(s0+8, 0);
    a3 = s0 + 16;
    cnd_ = v0 != 0;
    ST32(s0+12, 0);
    if (cnd_) { goto L_08A92514; }
    goto L_08A92508;
L_08A92508:;
    ST32(s0+16, 0);
    a3 = s0 + 24;
    ST32(s0+20, 0);
    goto L_08A92514;
L_08A92514:;
    ST32(a3, 0);
    a3 = a3 + 4;
    ST32(a3+4, 0);
    ST32(a3, 0);
    v0 = s0 + 0;
    goto L_08A92528;
L_08A92528:;
    sp = sp + 16;
    return v0;
L_08A92538:;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A92540;
L_08A92540:;
    v0 = s0 + 0;
    goto L_08A92528;
}

/* 08A92548 */
u64 func_08A92548(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A92548:;
    sp = sp - 16;
    t0 = a3 + 0;
    t2 = a1 + 0;
    t1 = a2 + 0;
    cnd_ = a3 != 0;
    t6 = a0 + 0;
    if (cnd_) { goto L_08A92908; }
    goto L_08A92568;
L_08A92568:;
    v0 = a1 < a2;
    cnd_ = v0 == 0;
    v0 = 0xffff;
    if (cnd_) { goto L_08A926C8; }
    goto L_08A92574;
L_08A92574:;
    v1 = 8;
    a0 = a2 < 0x100u;
    a1 = v1 + 0;
    v0 = v0 < a2;
    cnd_ = v0 == 0;
    if (a0 != 0) a1 = 0;
    if (cnd_) { goto L_08A925A8; }
    goto L_08A9258C;
L_08A9258C:;
    v0 = 0xff0000u;
    v0 = v0 | 0xffff;
    v1 = 16;
    v0 = v0 < a2;
    a0 = 24;
    a1 = v1 + 0;
    if (v0 != 0) a1 = a0;
    goto L_08A925A8;
L_08A925A8:;
    v1 = D_08AE9B10 - (-25840);
    v0 = a2 >> (a1 & 31);
    v1 = v1 - 25840;
    v0 = v0 + v1;
    a0 = LD_U8(v0);
    v0 = 32;
    a0 = a0 + a1;
    a3 = v0 - a0;
    cnd_ = a3 == 0;
    if (cnd_) { a3 = t1 >> 16; goto L_08A925EC; }
    goto L_08A925D0;
L_08A925D0:;
    v0 = v0 - a3;
    v0 = t6 >> (v0 & 31);
    v1 = t2 << (a3 & 31);
    t2 = v1 | v0;
    t6 = t6 << (a3 & 31);
    t1 = t1 << (a3 & 31);
    a3 = t1 >> 16;
    goto L_08A925EC;
L_08A925EC:;
    { u32 x_ = t2, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    t4 = t1 & 0xffff;
    a0 = t6 >> 16;
    cnd_ = a3 == 0;
    if (cnd_) { rs_break(0x7, 0x08a925fc); goto L_08A92600; }
    goto L_08A92600;
L_08A92600:;
    v1 = lo;
    v0 = hi;
    t3 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)t4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a2 = v0 | a0;
    a1 = lo;
    v1 = a2 < a1;
    cnd_ = v1 == 0;
    { u32 x_ = t2, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A9264C; }
    goto L_08A92628;
L_08A92628:;
    a2 = a2 + t1;
    v0 = a2 < t1;
    cnd_ = v0 != 0;
    t3 = t3 - 1;
    if (cnd_) { goto L_08A9264C; }
    goto L_08A92638;
L_08A92638:;
    v0 = a2 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = a2 - a1; goto L_08A92650; }
    goto L_08A92644;
L_08A92644:;
    t3 = t3 - 1;
    a2 = a2 + t1;
    goto L_08A9264C;
L_08A9264C:;
    a2 = a2 - a1;
    goto L_08A92650;
L_08A92650:;
    { u32 x_ = a2, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t6 & 0xffff;
    cnd_ = a3 == 0;
    if (cnd_) { rs_break(0x7, 0x08a9265c); goto L_08A92660; }
    goto L_08A92660;
L_08A92660:;
    v1 = lo;
    v0 = hi;
    t0 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)t4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a0 = v0 | a0;
    a1 = lo;
    v1 = a0 < a1;
    cnd_ = v1 == 0;
    { u32 x_ = a2, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A926A4; }
    goto L_08A92688;
L_08A92688:;
    a0 = a0 + t1;
    v0 = a0 < t1;
    cnd_ = v0 != 0;
    t0 = t0 - 1;
    if (cnd_) { goto L_08A926A4; }
    goto L_08A92698;
L_08A92698:;
    v0 = a0 < a1;
    v0 = 0 < v0;
    t0 = t0 - v0;
    goto L_08A926A4;
L_08A926A4:;
    v0 = t3 << 16;
    a0 = v0 | t0;
    goto L_08A926AC;
L_08A926AC:;
    a2 = 0 + 0;
    goto L_08A926B0;
L_08A926B0:;
    v0 = a0 + 0;
    v1 = a2 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A926C8:;
    cnd_ = a2 != 0;
    v1 = 8;
    if (cnd_) { goto L_08A926EC; }
    goto L_08A926D0;
L_08A926D0:;
    v0 = 1;
    { u32 x_ = v0, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    cnd_ = a2 == 0;
    if (cnd_) { rs_break(0x7, 0x08a926dc); goto L_08A926E0; }
    goto L_08A926E0;
L_08A926E0:;
    t1 = lo;
    v0 = 0xffff;
    v1 = 8;
    goto L_08A926EC;
L_08A926EC:;
    a0 = t1 < 0x100u;
    a1 = v1 + 0;
    v0 = v0 < t1;
    cnd_ = v0 == 0;
    if (a0 != 0) a1 = 0;
    if (cnd_) { goto L_08A9271C; }
    goto L_08A92700;
L_08A92700:;
    v0 = 0xff0000u;
    v0 = v0 | 0xffff;
    v1 = 16;
    v0 = v0 < t1;
    a0 = 24;
    a1 = v1 + 0;
    if (v0 != 0) a1 = a0;
    goto L_08A9271C;
L_08A9271C:;
    v1 = D_08AE9B10 - (-25840);
    v0 = t1 >> (a1 & 31);
    v1 = v1 - 25840;
    v0 = v0 + v1;
    a0 = LD_U8(v0);
    v0 = 32;
    a0 = a0 + a1;
    a3 = v0 - a0;
    cnd_ = a3 != 0;
    a1 = v0 - a3;
    if (cnd_) { goto L_08A92814; }
    goto L_08A92744;
L_08A92744:;
    t2 = t2 - t1;
    a2 = 1;
    t0 = t1 >> 16;
    s0 = t1 & 0xffff;
    goto L_08A92754;
L_08A92754:;
    { u32 x_ = t2, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t6 >> 16;
    cnd_ = t0 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92760); goto L_08A92764; }
    goto L_08A92764;
L_08A92764:;
    v1 = lo;
    v0 = hi;
    t3 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a3 = v0 | a0;
    a1 = lo;
    v1 = a3 < a1;
    cnd_ = v1 == 0;
    { u32 x_ = t2, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A927B0; }
    goto L_08A9278C;
L_08A9278C:;
    a3 = a3 + t1;
    v0 = a3 < t1;
    cnd_ = v0 != 0;
    t3 = t3 - 1;
    if (cnd_) { goto L_08A927B0; }
    goto L_08A9279C;
L_08A9279C:;
    v0 = a3 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 - a1; goto L_08A927B4; }
    goto L_08A927A8;
L_08A927A8:;
    t3 = t3 - 1;
    a3 = a3 + t1;
    goto L_08A927B0;
L_08A927B0:;
    a3 = a3 - a1;
    goto L_08A927B4;
L_08A927B4:;
    { u32 x_ = a3, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t6 & 0xffff;
    cnd_ = t0 == 0;
    if (cnd_) { rs_break(0x7, 0x08a927c0); goto L_08A927C4; }
    goto L_08A927C4;
L_08A927C4:;
    v1 = lo;
    v0 = hi;
    t2 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a0 = v0 | a0;
    a1 = lo;
    v1 = a0 < a1;
    cnd_ = v1 == 0;
    { u32 x_ = a3, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92808; }
    goto L_08A927EC;
L_08A927EC:;
    a0 = a0 + t1;
    v0 = a0 < t1;
    cnd_ = v0 != 0;
    t2 = t2 - 1;
    if (cnd_) { goto L_08A92808; }
    goto L_08A927FC;
L_08A927FC:;
    v0 = a0 < a1;
    v0 = 0 < v0;
    t2 = t2 - v0;
    goto L_08A92808;
L_08A92808:;
    v0 = t3 << 16;
    a0 = v0 | t2;
    goto L_08A926B0;
L_08A92814:;
    t1 = t1 << (a3 & 31);
    t0 = t1 >> 16;
    t4 = t2 >> (a1 & 31);
    { u32 x_ = t4, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s0 = t1 & 0xffff;
    v1 = t6 >> (a1 & 31);
    v0 = t2 << (a3 & 31);
    t2 = v0 | v1;
    a1 = t2 >> 16;
    t6 = t6 << (a3 & 31);
    cnd_ = t0 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92840); goto L_08A92844; }
    goto L_08A92844;
L_08A92844:;
    t3 = t0 + 0;
    s1 = s0 + 0;
    a2 = lo;
    a0 = hi;
    t7 = lo;
    { s64 p_ = (s64)(s32)a2 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 << 16;
    a3 = a0 | a1;
    t5 = lo;
    v0 = a3 < t5;
    cnd_ = v0 == 0;
    { u32 x_ = t4, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92898; }
    goto L_08A92874;
L_08A92874:;
    a3 = a3 + t1;
    v0 = a3 < t1;
    cnd_ = v0 != 0;
    t7 = a2 - 1;
    if (cnd_) { goto L_08A92898; }
    goto L_08A92884;
L_08A92884:;
    v0 = a3 < t5;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 - t5; goto L_08A9289C; }
    goto L_08A92890;
L_08A92890:;
    t7 = t7 - 1;
    a3 = a3 + t1;
    goto L_08A92898;
L_08A92898:;
    a3 = a3 - t5;
    goto L_08A9289C;
L_08A9289C:;
    { u32 x_ = a3, y_ = t3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t2 & 0xffff;
    cnd_ = t3 == 0;
    if (cnd_) { rs_break(0x7, 0x08a928a8); goto L_08A928AC; }
    goto L_08A928AC;
L_08A928AC:;
    v1 = lo;
    v0 = hi;
    a2 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a0 = v0 | a0;
    t5 = lo;
    v1 = a0 < t5;
    cnd_ = v1 == 0;
    { u32 x_ = a3, y_ = t3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A928F8; }
    goto L_08A928D4;
L_08A928D4:;
    a0 = a0 + t1;
    v0 = a0 < t1;
    cnd_ = v0 != 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A928F8; }
    goto L_08A928E4;
L_08A928E4:;
    v0 = a0 < t5;
    cnd_ = v0 == 0;
    v0 = t7 << 16;
    if (cnd_) { goto L_08A928FC; }
    goto L_08A928F0;
L_08A928F0:;
    a2 = a2 - 1;
    a0 = a0 + t1;
    goto L_08A928F8;
L_08A928F8:;
    v0 = t7 << 16;
    goto L_08A928FC;
L_08A928FC:;
    a2 = v0 | a2;
    t2 = a0 - t5;
    goto L_08A92754;
L_08A92908:;
    v0 = a1 < a3;
    a0 = 0 + 0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A926B0; }
    goto L_08A92918;
L_08A92918:;
    v0 = 0xffff;
    v1 = 8;
    a0 = a3 < 0x100u;
    a1 = v1 + 0;
    v0 = v0 < a3;
    cnd_ = v0 == 0;
    if (a0 != 0) a1 = 0;
    if (cnd_) { goto L_08A92950; }
    goto L_08A92934;
L_08A92934:;
    v0 = 0xff0000u;
    v0 = v0 | 0xffff;
    v1 = 16;
    v0 = v0 < a3;
    a0 = 24;
    a1 = v1 + 0;
    if (v0 != 0) a1 = a0;
    goto L_08A92950;
L_08A92950:;
    v1 = D_08AE9B10 - (-25840);
    v0 = t0 >> (a1 & 31);
    v1 = v1 - 25840;
    v0 = v0 + v1;
    a0 = LD_U8(v0);
    v0 = 32;
    a0 = a0 + a1;
    a3 = v0 - a0;
    cnd_ = a3 != 0;
    a1 = v0 - a3;
    if (cnd_) { goto L_08A92990; }
    goto L_08A92978;
L_08A92978:;
    v0 = t6 < t1;
    v1 = t0 < t2;
    v0 = v0 ^ 0x1;
    v1 = v1 | v0;
    a0 = 0 < v1;
    goto L_08A926AC;
L_08A92990:;
    v0 = t1 >> (a1 & 31);
    v1 = t0 << (a3 & 31);
    t0 = v1 | v0;
    t3 = t0 >> 16;
    t4 = t2 >> (a1 & 31);
    { u32 x_ = t4, y_ = t3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s0 = t0 & 0xffff;
    v1 = t6 >> (a1 & 31);
    v0 = t2 << (a3 & 31);
    t2 = v0 | v1;
    a1 = t2 >> 16;
    t6 = t6 << (a3 & 31);
    t1 = t1 << (a3 & 31);
    cnd_ = t3 == 0;
    if (cnd_) { rs_break(0x7, 0x08a929c8); goto L_08A929CC; }
    goto L_08A929CC;
L_08A929CC:;
    a2 = lo;
    a0 = hi;
    t7 = lo;
    { s64 p_ = (s64)(s32)a2 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 << 16;
    a3 = a0 | a1;
    t5 = lo;
    v0 = a3 < t5;
    cnd_ = v0 == 0;
    { u32 x_ = t4, y_ = t3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92A18; }
    goto L_08A929F4;
L_08A929F4:;
    a3 = a3 + t0;
    v0 = a3 < t0;
    cnd_ = v0 != 0;
    t7 = a2 - 1;
    if (cnd_) { goto L_08A92A18; }
    goto L_08A92A04;
L_08A92A04:;
    v0 = a3 < t5;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = a3 - t5; goto L_08A92A1C; }
    goto L_08A92A10;
L_08A92A10:;
    t7 = t7 - 1;
    a3 = a3 + t0;
    goto L_08A92A18;
L_08A92A18:;
    a3 = a3 - t5;
    goto L_08A92A1C;
L_08A92A1C:;
    { u32 x_ = a3, y_ = t3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t2 & 0xffff;
    cnd_ = t3 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92a28); goto L_08A92A2C; }
    goto L_08A92A2C;
L_08A92A2C:;
    v1 = lo;
    v0 = hi;
    a2 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a1 = v0 | a0;
    t5 = lo;
    v1 = a1 < t5;
    cnd_ = v1 == 0;
    { u32 x_ = a3, y_ = t3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92A78; }
    goto L_08A92A54;
L_08A92A54:;
    a1 = a1 + t0;
    v0 = a1 < t0;
    cnd_ = v0 != 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A92A78; }
    goto L_08A92A64;
L_08A92A64:;
    v0 = a1 < t5;
    cnd_ = v0 == 0;
    v0 = t7 << 16;
    if (cnd_) { goto L_08A92A7C; }
    goto L_08A92A70;
L_08A92A70:;
    a1 = a1 + t0;
    a2 = a2 - 1;
    goto L_08A92A78;
L_08A92A78:;
    v0 = t7 << 16;
    goto L_08A92A7C;
L_08A92A7C:;
    a0 = v0 | a2;
    a1 = a1 - t5;
    { u64 p_ = (u64)a0 * t1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = hi;
    v0 = a1 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = a0 - 1; goto L_08A926AC; }
    goto L_08A92A98;
L_08A92A98:;
    v0 = v1 ^ a1;
    a1 = lo;
    v1 = t6 < a1;
    v0 = v0 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08A926B0; }
    goto L_08A92AB4;
L_08A92AB4:;
    a0 = a0 - 1;
    goto L_08A926B0;
}

/* 08A92ABC */
u32 func_08A92ABC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A92ABC:;
    sp = sp - 32;
    t0 = a3 + 0;
    s3 = sp + 0;
    t3 = a2 + 0;
    t7 = a0 + 0;
    t1 = a1 + 0;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_08A92E58; }
    goto L_08A92AE8;
L_08A92AE8:;
    v0 = a1 < a2;
    cnd_ = v0 == 0;
    v0 = 0xffff;
    if (cnd_) { goto L_08A92C50; }
    goto L_08A92AF4;
L_08A92AF4:;
    v1 = 8;
    a0 = a2 < 0x100u;
    a1 = v1 + 0;
    v0 = v0 < a2;
    cnd_ = v0 == 0;
    if (a0 != 0) a1 = 0;
    if (cnd_) { goto L_08A92B28; }
    goto L_08A92B0C;
L_08A92B0C:;
    v0 = 0xff0000u;
    v0 = v0 | 0xffff;
    v1 = 16;
    v0 = v0 < a2;
    a0 = 24;
    a1 = v1 + 0;
    if (v0 != 0) a1 = a0;
    goto L_08A92B28;
L_08A92B28:;
    v1 = D_08AE9B10 - (-25840);
    v0 = a2 >> (a1 & 31);
    v1 = v1 - 25840;
    v0 = v0 + v1;
    a0 = LD_U8(v0);
    v0 = 32;
    a0 = a0 + a1;
    a3 = v0 - a0;
    cnd_ = a3 == 0;
    a2 = t3 >> 16;
    if (cnd_) { goto L_08A92B6C; }
    goto L_08A92B50;
L_08A92B50:;
    v0 = v0 - a3;
    v0 = t7 >> (v0 & 31);
    v1 = t1 << (a3 & 31);
    t1 = v1 | v0;
    t3 = t3 << (a3 & 31);
    t7 = t7 << (a3 & 31);
    a2 = t3 >> 16;
    goto L_08A92B6C;
L_08A92B6C:;
    { u32 x_ = t1, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    t2 = t3 & 0xffff;
    a0 = t7 >> 16;
    cnd_ = a2 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92b7c); goto L_08A92B80; }
    goto L_08A92B80;
L_08A92B80:;
    v1 = lo;
    v0 = hi;
    { s64 p_ = (s64)(s32)v1 * (s32)t2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a1 = v0 | a0;
    t0 = lo;
    v1 = a1 < t0;
    cnd_ = v1 == 0;
    { u32 x_ = t1, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92BC0; }
    goto L_08A92BA4;
L_08A92BA4:;
    a1 = a1 + t3;
    v0 = a1 < t3;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = a1 - t0; goto L_08A92BC4; }
    goto L_08A92BB4;
L_08A92BB4:;
    v0 = a1 < t0;
    v1 = a1 + t3;
    if (v0 != 0) a1 = v1;
    goto L_08A92BC0;
L_08A92BC0:;
    a1 = a1 - t0;
    goto L_08A92BC4;
L_08A92BC4:;
    { u32 x_ = a1, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t7 & 0xffff;
    cnd_ = a2 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92bd0); goto L_08A92BD4; }
    goto L_08A92BD4;
L_08A92BD4:;
    v1 = lo;
    v0 = hi;
    { s64 p_ = (s64)(s32)v1 * (s32)t2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a0 = v0 | a0;
    t0 = lo;
    v1 = a0 < t0;
    cnd_ = v1 == 0;
    { u32 x_ = a1, y_ = a2; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92C14; }
    goto L_08A92BF8;
L_08A92BF8:;
    a0 = a0 + t3;
    v0 = a0 < t3;
    cnd_ = v0 != 0;
    t7 = a0 - t0;
    if (cnd_) { goto L_08A92C18; }
    goto L_08A92C08;
L_08A92C08:;
    v0 = a0 < t0;
    v1 = a0 + t3;
    if (v0 != 0) a0 = v1;
    goto L_08A92C14;
L_08A92C14:;
    t7 = a0 - t0;
    goto L_08A92C18;
L_08A92C18:;
    t8 = t7 >> (a3 & 31);
    t9 = 0 + 0;
    goto L_08A92C20;
L_08A92C20:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08A92C30; }
    goto L_08A92C28;
L_08A92C28:;
    ST32(s3, t8);
    ST32(s3+4, t9);
    goto L_08A92C30;
L_08A92C30:;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    sp = sp + 32;
    return v0;
L_08A92C50:;
    cnd_ = a2 != 0;
    v1 = 8;
    if (cnd_) { goto L_08A92C74; }
    goto L_08A92C58;
L_08A92C58:;
    v0 = 1;
    { u32 x_ = v0, y_ = a3; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    cnd_ = a2 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92c64); goto L_08A92C68; }
    goto L_08A92C68;
L_08A92C68:;
    t3 = lo;
    v0 = 0xffff;
    v1 = 8;
    goto L_08A92C74;
L_08A92C74:;
    a0 = t3 < 0x100u;
    a1 = v1 + 0;
    v0 = v0 < t3;
    cnd_ = v0 == 0;
    if (a0 != 0) a1 = 0;
    if (cnd_) { goto L_08A92CA4; }
    goto L_08A92C88;
L_08A92C88:;
    v0 = 0xff0000u;
    v0 = v0 | 0xffff;
    v1 = 16;
    v0 = v0 < t3;
    a0 = 24;
    a1 = v1 + 0;
    if (v0 != 0) a1 = a0;
    goto L_08A92CA4;
L_08A92CA4:;
    v1 = D_08AE9B10 - (-25840);
    v0 = t3 >> (a1 & 31);
    v1 = v1 - 25840;
    v0 = v0 + v1;
    a0 = LD_U8(v0);
    v0 = 32;
    a0 = a0 + a1;
    a3 = v0 - a0;
    cnd_ = a3 != 0;
    s0 = v0 - a3;
    if (cnd_) { goto L_08A92D84; }
    goto L_08A92CCC;
L_08A92CCC:;
    t1 = t1 - t3;
    t0 = t3 >> 16;
    t6 = t3 & 0xffff;
    goto L_08A92CD8;
L_08A92CD8:;
    { u32 x_ = t1, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t7 >> 16;
    cnd_ = t0 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92ce4); goto L_08A92CE8; }
    goto L_08A92CE8;
L_08A92CE8:;
    v1 = lo;
    v0 = hi;
    { s64 p_ = (s64)(s32)v1 * (s32)t6; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a1 = v0 | a0;
    a2 = lo;
    v1 = a1 < a2;
    cnd_ = v1 == 0;
    { u32 x_ = t1, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92D28; }
    goto L_08A92D0C;
L_08A92D0C:;
    a1 = a1 + t3;
    v0 = a1 < t3;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = a1 - a2; goto L_08A92D2C; }
    goto L_08A92D1C;
L_08A92D1C:;
    v0 = a1 < a2;
    v1 = a1 + t3;
    if (v0 != 0) a1 = v1;
    goto L_08A92D28;
L_08A92D28:;
    a1 = a1 - a2;
    goto L_08A92D2C;
L_08A92D2C:;
    { u32 x_ = a1, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t7 & 0xffff;
    cnd_ = t0 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92d38); goto L_08A92D3C; }
    goto L_08A92D3C;
L_08A92D3C:;
    v1 = lo;
    v0 = hi;
    { s64 p_ = (s64)(s32)v1 * (s32)t6; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a0 = v0 | a0;
    a2 = lo;
    v1 = a0 < a2;
    cnd_ = v1 == 0;
    { u32 x_ = a1, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92D7C; }
    goto L_08A92D60;
L_08A92D60:;
    a0 = a0 + t3;
    v0 = a0 < t3;
    cnd_ = v0 != 0;
    if (cnd_) { t7 = a0 - a2; goto L_08A92C18; }
    goto L_08A92D70;
L_08A92D70:;
    v0 = a0 < a2;
    v1 = a0 + t3;
    if (v0 != 0) a0 = v1;
    goto L_08A92D7C;
L_08A92D7C:;
    t7 = a0 - a2;
    goto L_08A92C18;
L_08A92D84:;
    t3 = t3 << (a3 & 31);
    t0 = t3 >> 16;
    t5 = t1 >> (s0 & 31);
    { u32 x_ = t5, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    t6 = t3 & 0xffff;
    v1 = t7 >> (s0 & 31);
    v0 = t1 << (a3 & 31);
    t1 = v0 | v1;
    a1 = t1 >> 16;
    cnd_ = t0 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92dac); goto L_08A92DB0; }
    goto L_08A92DB0;
L_08A92DB0:;
    t4 = t0 + 0;
    t7 = t7 << (a3 & 31);
    s0 = t6 + 0;
    a2 = lo;
    a0 = hi;
    { s64 p_ = (s64)(s32)a2 * (s32)t6; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 << 16;
    t2 = a0 | a1;
    a2 = lo;
    v0 = t2 < a2;
    cnd_ = v0 == 0;
    { u32 x_ = t5, y_ = t0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92DFC; }
    goto L_08A92DE0;
L_08A92DE0:;
    t2 = t2 + t3;
    v0 = t2 < t3;
    cnd_ = v0 != 0;
    if (cnd_) { t2 = t2 - a2; goto L_08A92E00; }
    goto L_08A92DF0;
L_08A92DF0:;
    v0 = t2 < a2;
    v1 = t2 + t3;
    if (v0 != 0) t2 = v1;
    goto L_08A92DFC;
L_08A92DFC:;
    t2 = t2 - a2;
    goto L_08A92E00;
L_08A92E00:;
    { u32 x_ = t2, y_ = t4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t1 & 0xffff;
    cnd_ = t4 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92e0c); goto L_08A92E10; }
    goto L_08A92E10;
L_08A92E10:;
    v1 = lo;
    v0 = hi;
    { s64 p_ = (s64)(s32)v1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a0 = v0 | a0;
    a2 = lo;
    v1 = a0 < a2;
    cnd_ = v1 == 0;
    { u32 x_ = t2, y_ = t4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92E50; }
    goto L_08A92E34;
L_08A92E34:;
    a0 = a0 + t3;
    v0 = a0 < t3;
    cnd_ = v0 != 0;
    if (cnd_) { t1 = a0 - a2; goto L_08A92CD8; }
    goto L_08A92E44;
L_08A92E44:;
    v0 = a0 < a2;
    v1 = a0 + t3;
    if (v0 != 0) a0 = v1;
    goto L_08A92E50;
L_08A92E50:;
    t1 = a0 - a2;
    goto L_08A92CD8;
L_08A92E58:;
    v0 = a1 < a3;
    cnd_ = v0 == 0;
    v0 = 0xffff;
    if (cnd_) { goto L_08A92E78; }
    goto L_08A92E64;
L_08A92E64:;
    t8 = a0 + 0;
    t9 = a1 + 0;
    ST32(sp, t8);
    ST32(sp+4, t9);
    goto L_08A92C30;
L_08A92E78:;
    v1 = 8;
    a0 = a3 < 0x100u;
    a1 = v1 + 0;
    v0 = v0 < a3;
    cnd_ = v0 == 0;
    if (a0 != 0) a1 = 0;
    if (cnd_) { goto L_08A92EAC; }
    goto L_08A92E90;
L_08A92E90:;
    v0 = 0xff0000u;
    v0 = v0 | 0xffff;
    v1 = 16;
    v0 = v0 < a3;
    a0 = 24;
    a1 = v1 + 0;
    if (v0 != 0) a1 = a0;
    goto L_08A92EAC;
L_08A92EAC:;
    v1 = D_08AE9B10 - (-25840);
    v0 = t0 >> (a1 & 31);
    v1 = v1 - 25840;
    v0 = v0 + v1;
    a0 = LD_U8(v0);
    v0 = 32;
    a0 = a0 + a1;
    a3 = v0 - a0;
    cnd_ = a3 != 0;
    s0 = v0 - a3;
    if (cnd_) { goto L_08A92F0C; }
    goto L_08A92ED4;
L_08A92ED4:;
    v1 = t7 < t3;
    v1 = v1 ^ 0x1;
    v0 = t0 < t1;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { t8 = t7 + 0; goto L_08A92F04; }
    goto L_08A92EEC;
L_08A92EEC:;
    a0 = t7 - t3;
    v0 = t7 < a0;
    v1 = t1 - t0;
    t1 = v1 - v0;
    t7 = a0 + 0;
    t8 = t7 + 0;
    goto L_08A92F04;
L_08A92F04:;
    t9 = t1 + 0;
    goto L_08A92C20;
L_08A92F0C:;
    v0 = t3 >> (s0 & 31);
    v1 = t0 << (a3 & 31);
    t0 = v1 | v0;
    t4 = t0 >> 16;
    t5 = t1 >> (s0 & 31);
    { u32 x_ = t5, y_ = t4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    s2 = t0 & 0xffff;
    v0 = t7 >> (s0 & 31);
    v1 = t1 << (a3 & 31);
    t1 = v1 | v0;
    a1 = t1 >> 16;
    cnd_ = t4 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92f3c); goto L_08A92F40; }
    goto L_08A92F40;
L_08A92F40:;
    t3 = t3 << (a3 & 31);
    t7 = t7 << (a3 & 31);
    a2 = lo;
    a0 = hi;
    s1 = lo;
    { s64 p_ = (s64)(s32)a2 * (s32)s2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = a0 << 16;
    t2 = a0 | a1;
    t6 = lo;
    v0 = t2 < t6;
    cnd_ = v0 == 0;
    { u32 x_ = t5, y_ = t4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92F94; }
    goto L_08A92F70;
L_08A92F70:;
    t2 = t2 + t0;
    v0 = t2 < t0;
    cnd_ = v0 != 0;
    s1 = a2 - 1;
    if (cnd_) { goto L_08A92F94; }
    goto L_08A92F80;
L_08A92F80:;
    v0 = t2 < t6;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = t2 - t6; goto L_08A92F98; }
    goto L_08A92F8C;
L_08A92F8C:;
    s1 = s1 - 1;
    t2 = t2 + t0;
    goto L_08A92F94;
L_08A92F94:;
    t2 = t2 - t6;
    goto L_08A92F98;
L_08A92F98:;
    { u32 x_ = t2, y_ = t4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = t1 & 0xffff;
    cnd_ = t4 == 0;
    if (cnd_) { rs_break(0x7, 0x08a92fa4); goto L_08A92FA8; }
    goto L_08A92FA8;
L_08A92FA8:;
    v1 = lo;
    v0 = hi;
    a2 = lo;
    { s64 p_ = (s64)(s32)v1 * (s32)s2; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 << 16;
    a1 = v0 | a0;
    t6 = lo;
    v1 = a1 < t6;
    cnd_ = v1 == 0;
    { u32 x_ = t2, y_ = t4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (cnd_) { goto L_08A92FF4; }
    goto L_08A92FD0;
L_08A92FD0:;
    a1 = a1 + t0;
    v0 = a1 < t0;
    cnd_ = v0 != 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A92FF4; }
    goto L_08A92FE0;
L_08A92FE0:;
    v0 = a1 < t6;
    cnd_ = v0 == 0;
    v0 = s1 << 16;
    if (cnd_) { goto L_08A92FF8; }
    goto L_08A92FEC;
L_08A92FEC:;
    a2 = a2 - 1;
    a1 = a1 + t0;
    goto L_08A92FF4;
L_08A92FF4:;
    v0 = s1 << 16;
    goto L_08A92FF8;
L_08A92FF8:;
    v0 = v0 | a2;
    a1 = a1 - t6;
    { u64 p_ = (u64)v0 * t3; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    t2 = hi;
    v1 = a1 < t2;
    a2 = lo;
    cnd_ = v1 != 0;
    a0 = a2 - t3;
    if (cnd_) { goto L_08A93030; }
    goto L_08A93018;
L_08A93018:;
    v0 = t2 ^ a1;
    v0 = v0 < 0x1u;
    v1 = t7 < a2;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A93040; }
    goto L_08A93030;
L_08A93030:;
    v0 = a2 < a0;
    v1 = t2 - t0;
    t2 = v1 - v0;
    a2 = a0 + 0;
    goto L_08A93040;
L_08A93040:;
    cnd_ = s3 == 0;
    v1 = t7 - a2;
    if (cnd_) { goto L_08A92C30; }
    goto L_08A93048;
L_08A93048:;
    a0 = a1 - t2;
    v0 = t7 < v1;
    t1 = a0 - v0;
    a1 = t1 << (s0 & 31);
    v1 = v1 >> (a3 & 31);
    t8 = a1 | v1;
    t9 = t1 >> (a3 & 31);
    goto L_08A92C28;
}

/* 08A93068 */
u64 func_08A93068(float f12)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A93068:;
    sp = sp - 48;
    a0 = sp + 16;
    a1 = sp + 0;
    ST32(sp+16, FBITS(f12));
    func_08A94044(a0, a1);
    goto L_08A93080;
L_08A93080:;
    t1 = 0 + 0;
    t0 = LD32(sp+12);
    a0 = LD32(sp);
    a1 = LD32(sp+4);
    a2 = LD32(sp+8);
    v0 = t0 >> 2;
    t1 = t1 << 30;
    t1 = t1 | v0;
    t0 = t0 << 30;
    { u64 r_ = func_08A93F98(a0, a1, a2, t0, t1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A930A8;
L_08A930A8:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A930B4 */
u32 func_08A930B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
L_08A930B4:;
    a3 = a0 + 0;
    a0 = LD32(a0);
    t2 = a2 + 0;
    t0 = a1 + 0;
    v0 = a0 < 0x2u;
    cnd_ = v0 != 0;
    a2 = a3 + 0;
    if (cnd_) { goto L_08A93108; }
    goto L_08A930D0;
L_08A930D0:;
    v1 = LD32(a1);
    v0 = v1 < 0x2u;
    cnd_ = v0 != 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_08A93108; }
    goto L_08A930E0;
L_08A930E0:;
    v0 = a0 ^ 0x4;
    cnd_ = v0 != 0;
    v0 = v1 ^ 0x4;
    if (cnd_) { goto L_08A93118; }
    goto L_08A930EC;
L_08A930EC:;
    cnd_ = v0 != 0;
    a2 = a3 + 0;
    if (cnd_) { goto L_08A93108; }
    goto L_08A930F4;
L_08A930F4:;
    a0 = LD32(a1+4);
    v1 = LD32(a3+4);
    v0 = D_08AE9AF8 - (-25864);
    cnd_ = v1 == a0;
    a2 = v0 - 25864;
    if (cnd_) { goto L_08A93110; }
    goto L_08A93108;
L_08A93108:;
    v0 = a2 + 0;
    return v0;
L_08A93110:;
    a2 = a3 + 0;
    goto L_08A93108;
L_08A93118:;
    cnd_ = v0 == 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_08A93108; }
    goto L_08A93120;
L_08A93120:;
    v0 = v1 ^ 0x2;
    cnd_ = v0 != 0;
    v0 = a0 ^ 0x2;
    if (cnd_) { goto L_08A93178; }
    goto L_08A9312C;
L_08A9312C:;
    cnd_ = v0 != 0;
    a2 = a3 + 0;
    if (cnd_) { goto L_08A93108; }
    goto L_08A93134;
L_08A93134:;
    ST32(t2, a0);
    a2 = t2 + 0;
    v0 = LD32(a3+4);
    ST32(t2+4, v0);
    v1 = LD32(a3+8);
    ST32(t2+8, v1);
    v0 = LD32(a3+12);
    ST32(t2+12, v0);
    v1 = LD32(a3+16);
    ST32(t2+16, v1);
    a0 = LD32(a3+20);
    ST32(t2+20, a0);
    v0 = LD32(a3+4);
    v1 = LD32(a1+4);
    v0 = v0 & v1;
    ST32(t2+4, v0);
    goto L_08A93108;
L_08A93178:;
    cnd_ = v0 == 0;
    a2 = a1 + 0;
    if (cnd_) { goto L_08A93108; }
    goto L_08A93180;
L_08A93180:;
    t3 = LD32(a3+8);
    t1 = LD32(a1+8);
    t4 = LD32(a3+16);
    t5 = LD32(a3+20);
    t6 = LD32(a1+16);
    t7 = LD32(a1+20);
    v0 = t3 - t1;
    v1 = 0 - v0;
    v0 = (s32)v0 > (s32)v1 ? v0 : v1;
    v0 = (s32)v0 < 64;
    cnd_ = v0 == 0;
    v0 = (s32)t1 < (s32)t3;
    if (cnd_) { goto L_08A933D4; }
    goto L_08A931B0;
L_08A931B0:;
    cnd_ = v0 == 0;
    v0 = (s32)t3 < (s32)t1;
    if (cnd_) { goto L_08A931F4; }
    goto L_08A931B8;
L_08A931B8:;
    t9 = 0;
    t8 = 1;
    t1 = t3 - t1;
    goto L_08A931C4;
L_08A931C4:;
    a0 = t6 >> 1;
    a2 = t7 << 31;
    a0 = a0 | a2;
    a1 = t7 >> 1;
    v0 = t6 & t8;
    v1 = t7 & t9;
    t1 = t1 - 1;
    t6 = v0 | a0;
    cnd_ = t1 != 0;
    t7 = v1 | a1;
    if (cnd_) { goto L_08A931C4; }
    goto L_08A931EC;
L_08A931EC:;
    t1 = t3 + 0;
    v0 = (s32)t3 < (s32)t1;
    goto L_08A931F4;
L_08A931F4:;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(a3+4); goto L_08A93238; }
    goto L_08A931FC;
L_08A931FC:;
    t9 = 0;
    t8 = 1;
    t3 = t1 - t3;
    goto L_08A93208;
L_08A93208:;
    a0 = t4 >> 1;
    a2 = t5 << 31;
    a0 = a0 | a2;
    a1 = t5 >> 1;
    v0 = t4 & t8;
    v1 = t5 & t9;
    t3 = t3 - 1;
    t4 = v0 | a0;
    cnd_ = t3 != 0;
    t5 = v1 | a1;
    if (cnd_) { goto L_08A93208; }
    goto L_08A93230;
L_08A93230:;
    t3 = t1 + 0;
    goto L_08A93234;
L_08A93234:;
    a2 = LD32(a3+4);
    goto L_08A93238;
L_08A93238:;
    v0 = LD32(t0+4);
    cnd_ = a2 == v0;
    a1 = t7 - t5;
    if (cnd_) { goto L_08A933AC; }
    goto L_08A93244;
L_08A93244:;
    v0 = t6 < t4;
    a0 = t6 - t4;
    cnd_ = a2 != 0;
    a1 = a1 - v0;
    if (cnd_) { goto L_08A93264; }
    goto L_08A93254;
L_08A93254:;
    v0 = t4 < t6;
    a1 = t5 - t7;
    a0 = t4 - t6;
    a1 = a1 - v0;
    goto L_08A93264;
L_08A93264:;
    cnd_ = (s32)a1 < 0;
    v0 = 1;
    if (cnd_) { goto L_08A93388; }
    goto L_08A9326C;
L_08A9326C:;
    ST32(t2+8, t3);
    ST32(t2+16, a0);
    ST32(t2+20, a1);
    ST32(t2+4, 0);
    goto L_08A9327C;
L_08A9327C:;
    t0 = LD32(t2+16);
    t1 = LD32(t2+20);
    a2 = 0xfff0000u;
    a2 = a2 | 0xffff;
    a0 = t0 - 1;
    v1 = a0 < 0xffffffffu;
    a1 = t1 - 1;
    a1 = a1 + v1;
    v0 = a2 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(t2+20); goto L_08A93314; }
    goto L_08A932A8;
L_08A932A8:;
    cnd_ = a1 == a2;
    v0 = a0 < 0xffffffffu;
    if (cnd_) { goto L_08A93378; }
    goto L_08A932B0;
L_08A932B0:;
    v1 = t0 >> 31;
    goto L_08A932B4;
L_08A932B4:;
    v0 = LD32(t2+8);
    goto L_08A932B8;
L_08A932B8:;
    a3 = t1 << 1;
    a3 = a3 | v1;
    a2 = t0 << 1;
    t3 = 0xfff0000u;
    a0 = a2 - 1;
    v1 = a0 < 0xffffffffu;
    a1 = a3 - 1;
    a1 = a1 + v1;
    t3 = t3 | 0xffff;
    v0 = v0 - 1;
    v1 = t3 < a1;
    t4 = a0 < 0xffffffffu;
    ST32(t2+8, v0);
    t0 = a2 + 0;
    ST32(t2+16, a2);
    ST32(t2+20, a3);
    cnd_ = v1 != 0;
    t1 = a3 + 0;
    if (cnd_) { goto L_08A93310; }
    goto L_08A93300;
L_08A93300:;
    cnd_ = a1 != t3;
    v1 = t0 >> 31;
    if (cnd_) { goto L_08A932B4; }
    goto L_08A93308;
L_08A93308:;
    cnd_ = t4 != 0;
    if (cnd_) { v0 = LD32(t2+8); goto L_08A932B8; }
    goto L_08A93310;
L_08A93310:;
    v0 = LD32(t2+20);
    goto L_08A93314;
L_08A93314:;
    v1 = 0x1fff0000u;
    v1 = v1 | 0xffff;
    a0 = 3;
    v1 = v1 < v0;
    cnd_ = v1 == 0;
    ST32(t2, a0);
    if (cnd_) { goto L_08A93370; }
    goto L_08A9332C;
L_08A9332C:;
    a0 = LD32(t2+16);
    a1 = LD32(t2+20);
    a2 = LD32(t2+8);
    v1 = 0;
    v0 = 1;
    v0 = a0 & v0;
    a3 = a1 << 31;
    a0 = a0 >> 1;
    v1 = a1 & v1;
    a0 = a0 | a3;
    a1 = a1 >> 1;
    v0 = v0 | a0;
    v1 = v1 | a1;
    a2 = a2 + 1;
    ST32(t2+16, v0);
    ST32(t2+20, v1);
    ST32(t2+8, a2);
    goto L_08A93370;
L_08A93370:;
    a2 = t2 + 0;
    goto L_08A93108;
L_08A93378:;
    cnd_ = v0 != 0;
    v1 = t0 >> 31;
    if (cnd_) { goto L_08A932B4; }
    goto L_08A93380;
L_08A93380:;
    v0 = LD32(t2+20);
    goto L_08A93314;
L_08A93388:;
    a0 = 0 - a0;
    a1 = 0 - a1;
    v1 = 0 < a0;
    a1 = a1 - v1;
    ST32(t2+4, v0);
    ST32(t2+8, t3);
    ST32(t2+16, a0);
    ST32(t2+20, a1);
    goto L_08A9327C;
L_08A933AC:;
    v0 = t4 + t6;
    a0 = v0 < t6;
    v1 = t5 + t7;
    v1 = v1 + a0;
    ST32(t2+4, a2);
    ST32(t2+8, t3);
    ST32(t2+16, v0);
    ST32(t2+20, v1);
    v0 = LD32(t2+20);
    goto L_08A93314;
L_08A933D4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A933EC; }
    goto L_08A933DC;
L_08A933DC:;
    t6 = 0 + 0;
    t7 = 0 + 0;
    a2 = LD32(a3+4);
    goto L_08A93238;
L_08A933EC:;
    t4 = 0 + 0;
    t5 = 0 + 0;
    t3 = t1 + 0;
    goto L_08A93234;
}

/* 08A933FC */
u64 func_08A933FC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A933FC:;
    sp = sp - 144;
    v1 = a1 + 0;
    v0 = a0 + 0;
    a0 = sp + 96;
    s0 = sp + 32;
    ST32(sp+112, a2);
    ST32(sp+116, a3);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    a1 = sp + 0;
    func_08A943A0(a0, a1);
    goto L_08A93430;
L_08A93430:;
    a0 = sp + 112;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A9343C;
L_08A9343C:;
    a1 = s0 + 0;
    a2 = sp + 64;
    a0 = sp + 0;
    v0 = func_08A930B4(a0, a1, a2);
    goto L_08A9344C;
L_08A9344C:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94138(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A93454;
L_08A93454:;
    sp = sp + 144;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A93464 */
u64 func_08A93464(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A93464:;
    sp = sp - 144;
    v1 = a1 + 0;
    v0 = a0 + 0;
    a0 = sp + 96;
    s0 = sp + 32;
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    ST32(sp+112, a2);
    ST32(sp+116, a3);
    a1 = sp + 0;
    func_08A943A0(a0, a1);
    goto L_08A93498;
L_08A93498:;
    a0 = sp + 112;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A934A4;
L_08A934A4:;
    v0 = LD32(sp+36);
    a1 = s0 + 0;
    a2 = sp + 64;
    a0 = sp + 0;
    v0 = v0 ^ 0x1;
    ST32(sp+36, v0);
    v0 = func_08A930B4(a0, a1, a2);
    goto L_08A934C0;
L_08A934C0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94138(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A934C8;
L_08A934C8:;
    sp = sp + 144;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A934D8 */
u64 func_08A934D8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08A934D8:;
    sp = sp - 160;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 96;
    a1 = sp + 0;
    s0 = sp + 32;
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    ST32(sp+112, a2);
    ST32(sp+116, a3);
    func_08A943A0(a0, a1);
    goto L_08A9351C;
L_08A9351C:;
    a0 = sp + 112;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93528;
L_08A93528:;
    v1 = LD32(sp);
    t5 = sp + 0;
    v0 = v1 < 0x2u;
    cnd_ = v0 != 0;
    t4 = sp + 64;
    if (cnd_) { goto L_08A93568; }
    goto L_08A9353C;
L_08A9353C:;
    a0 = LD32(sp+32);
    v0 = a0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(sp+36); goto L_08A935C4; }
    goto L_08A9354C;
L_08A9354C:;
    v0 = v1 ^ 0x4;
    cnd_ = v0 != 0;
    v0 = a0 ^ 0x4;
    if (cnd_) { goto L_08A935A8; }
    goto L_08A93558;
L_08A93558:;
    v1 = a0 ^ 0x2;
    v0 = D_08AE9AF8 - (-25864);
    cnd_ = v1 == 0;
    a0 = v0 - 25864;
    if (cnd_) { goto L_08A93580; }
    goto L_08A93568;
L_08A93568:;
    v0 = LD32(sp+4);
    goto L_08A9356C;
L_08A9356C:;
    v1 = LD32(sp+36);
    a0 = sp + 0;
    v0 = v0 ^ v1;
    v0 = 0 < v0;
    ST32(sp+4, v0);
    goto L_08A93580;
L_08A93580:;
    { u64 r_ = func_08A94138(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A93588;
L_08A93588:;
    sp = sp + 160;
    return (u64)v0 | ((u64)v1 << 32);
L_08A935A8:;
    cnd_ = v0 != 0;
    v0 = v1 ^ 0x2;
    if (cnd_) { goto L_08A935DC; }
    goto L_08A935B0;
L_08A935B0:;
    v0 = D_08AE9AF8 - (-25864);
    v1 = v1 ^ 0x2;
    cnd_ = v1 == 0;
    a0 = v0 - 25864;
    if (cnd_) { goto L_08A93580; }
    goto L_08A935C0;
L_08A935C0:;
    v1 = LD32(sp+36);
    goto L_08A935C4;
L_08A935C4:;
    v0 = LD32(sp+4);
    a0 = s0 + 0;
    v0 = v0 ^ v1;
    v0 = 0 < v0;
    ST32(sp+36, v0);
    goto L_08A93580;
L_08A935DC:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A9356C; }
    goto L_08A935E4;
L_08A935E4:;
    v0 = a0 ^ 0x2;
    cnd_ = v0 == 0;
    v1 = LD32(sp+36);
    if (cnd_) { goto L_08A935C4; }
    goto L_08A935F0;
L_08A935F0:;
    a2 = LD32(sp+20);
    a3 = LD32(sp+48);
    t0 = LD32(sp+16);
    a1 = LD32(sp+52);
    { u64 p_ = (u64)a3 * a2; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    s2 = 0 + 0;
    s3 = 0 + 0;
    v1 = hi;
    v0 = lo;
    { u64 p_ = (u64)a1 * t0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    t3 = hi;
    t2 = lo;
    { u64 p_ = (u64)a1 * a2; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    t6 = t2 + v0;
    t1 = t6 < v0;
    t7 = t3 + v1;
    t7 = t7 + t1;
    s5 = hi;
    s4 = lo;
    { u64 p_ = (u64)a3 * t0; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    a0 = t7 < t3;
    a3 = hi;
    cnd_ = a0 != 0;
    a2 = lo;
    if (cnd_) { goto L_08A93840; }
    goto L_08A93650;
L_08A93650:;
    cnd_ = t3 == t7;
    v0 = t6 < t2;
    if (cnd_) { goto L_08A93838; }
    goto L_08A93658;
L_08A93658:;
    t2 = 0 + 0;
    goto L_08A9365C;
L_08A9365C:;
    t3 = t6;
    t8 = a2 + t2;
    a1 = t8 < t2;
    t9 = a3 + t3;
    t9 = t9 + a1;
    v0 = t9 < a3;
    cnd_ = v0 != 0;
    if (cnd_) { s2 = s2 + 1; goto L_08A9382C; }
    goto L_08A9367C;
L_08A9367C:;
    cnd_ = a3 == t9;
    v0 = t8 < a2;
    if (cnd_) { goto L_08A93820; }
    goto L_08A93684;
L_08A93684:;
    v0 = t7 >> 0;
    goto L_08A93688;
L_08A93688:;
    v0 = v0 + s4;
    v1 = 0 + 0;
    t0 = LD32(s0+4);
    a2 = LD32(t5+4);
    a0 = LD32(t5+8);
    a3 = LD32(s0+8);
    t1 = v0 < s4;
    v1 = v1 + s5;
    v1 = v1 + t1;
    t2 = s2 + v0;
    t1 = t2 < v0;
    a1 = 0x1fff0000u;
    t3 = s3 + v1;
    t3 = t3 + t1;
    a2 = a2 ^ t0;
    a0 = a0 + a3;
    a1 = a1 | 0xffff;
    a0 = a0 + 4;
    a2 = 0 < a2;
    a1 = a1 < t3;
    ST32(t4+8, a0);
    t0 = t8 + 0;
    t1 = t9 + 0;
    cnd_ = a1 == 0;
    ST32(t4+4, a2);
    if (cnd_) { goto L_08A9374C; }
    goto L_08A936EC;
L_08A936EC:;
    a2 = 0x1fff0000u;
    t7 = 0;
    t6 = 1;
    t8 = 0;
    t9 = 0x80000000u;
    a2 = a2 | 0xffff;
    v0 = LD32(t4+8);
    goto L_08A93708;
L_08A93708:;
    v1 = t3 << 31;
    a0 = t2 & t6;
    t3 = t3 >> 1;
    t2 = t2 >> 1;
    v0 = v0 + 1;
    t2 = t2 | v1;
    ST32(t4+8, v0);
    cnd_ = a0 == 0;
    v1 = a2 < t3;
    if (cnd_) { goto L_08A93744; }
    goto L_08A9372C;
L_08A9372C:;
    v0 = t1 << 31;
    t0 = t0 >> 1;
    t0 = t0 | v0;
    t1 = t1 >> 1;
    t0 = t0 | t8;
    t1 = t1 | t9;
    goto L_08A93744;
L_08A93744:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(t4+8); goto L_08A93708; }
    goto L_08A9374C;
L_08A9374C:;
    v0 = 0xfff0000u;
    v0 = v0 | 0xffff;
    v0 = v0 < t3;
    cnd_ = v0 != 0;
    a0 = 0xfff0000u;
    if (cnd_) { goto L_08A937A4; }
    goto L_08A93760;
L_08A93760:;
    a3 = 0;
    a2 = 1;
    a0 = a0 | 0xffff;
    goto L_08A9376C;
L_08A9376C:;
    v0 = LD32(t4+8);
    v1 = t2 >> 31;
    t3 = t3 << 1;
    v0 = v0 - 1;
    t3 = t3 | v1;
    t2 = t2 << 1;
    cnd_ = (s32)t1 < 0;
    ST32(t4+8, v0);
    if (cnd_) { goto L_08A93814; }
    goto L_08A9378C;
L_08A9378C:;
    v1 = t0 >> 31;
    t1 = t1 << 1;
    v0 = a0 < t3;
    t1 = t1 | v1;
    cnd_ = v0 == 0;
    t0 = t0 << 1;
    if (cnd_) { goto L_08A9376C; }
    goto L_08A937A4;
L_08A937A4:;
    v1 = 0;
    v0 = 255;
    v0 = t2 & v0;
    a0 = 128;
    cnd_ = v0 == a0;
    v1 = t3 & v1;
    if (cnd_) { goto L_08A937D4; }
    goto L_08A937BC;
L_08A937BC:;
    v0 = 3;
    goto L_08A937C0;
L_08A937C0:;
    ST32(t4+16, t2);
    ST32(t4+20, t3);
    a0 = t4 + 0;
    ST32(t4, v0);
    goto L_08A93580;
L_08A937D4:;
    cnd_ = v1 != 0;
    v0 = 3;
    if (cnd_) { goto L_08A937C0; }
    goto L_08A937DC;
L_08A937DC:;
    v1 = 0;
    v0 = 256;
    v0 = t2 & v0;
    v1 = t3 & v1;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { t2 = t2 + 128; goto L_08A93808; }
    goto L_08A937F8;
L_08A937F8:;
    v0 = t0 | t1;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_08A937C0; }
    goto L_08A93804;
L_08A93804:;
    t2 = t2 + 128;
    goto L_08A93808;
L_08A93808:;
    v0 = t2 < 0x80u;
    t3 = t3 + v0;
    goto L_08A937BC;
L_08A93814:;
    t2 = t2 | a2;
    t3 = t3 | a3;
    goto L_08A9378C;
L_08A93820:;
    cnd_ = v0 == 0;
    v0 = t7 >> 0;
    if (cnd_) { goto L_08A93688; }
    goto L_08A93828;
L_08A93828:;
    s2 = s2 + 1;
    goto L_08A9382C;
L_08A9382C:;
    v0 = s2 < 0x1u;
    s3 = s3 + v0;
    goto L_08A93684;
L_08A93838:;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = 0 + 0; goto L_08A9365C; }
    goto L_08A93840;
L_08A93840:;
    s2 = 0;
    s3 = 1;
    t2 = 0 + 0;
    goto L_08A9365C;
}

/* 08A93850 */
u64 func_08A93850(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A93850:;
    sp = sp - 112;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 64;
    a1 = sp + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+80, a2);
    ST32(sp+84, a3);
    s0 = sp + 32;
    func_08A943A0(a0, a1);
    goto L_08A93884;
L_08A93884:;
    a0 = sp + 80;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93890;
L_08A93890:;
    a1 = LD32(sp);
    t5 = sp + 0;
    v0 = a1 < 0x2u;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A938E8; }
    goto L_08A938A4;
L_08A938A4:;
    a2 = LD32(sp+32);
    v0 = a2 < 0x2u;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A938E8; }
    goto L_08A938B4;
L_08A938B4:;
    v1 = LD32(sp+4);
    a0 = LD32(sp+36);
    v0 = a1 ^ 0x4;
    v1 = v1 ^ a0;
    cnd_ = v0 == 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_08A938D8; }
    goto L_08A938CC;
L_08A938CC:;
    v0 = a1 ^ 0x2;
    cnd_ = v0 != 0;
    v0 = a2 ^ 0x4;
    if (cnd_) { goto L_08A93900; }
    goto L_08A938D8;
L_08A938D8:;
    v0 = D_08AE9AF8 - (-25864);
    cnd_ = a1 == a2;
    a0 = v0 - 25864;
    if (cnd_) { goto L_08A938E8; }
    goto L_08A938E4;
L_08A938E4:;
    a0 = sp + 0;
    goto L_08A938E8;
L_08A938E8:;
    { u64 r_ = func_08A94138(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A938F0;
L_08A938F0:;
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_08A93900:;
    cnd_ = v0 != 0;
    v0 = a2 ^ 0x2;
    if (cnd_) { goto L_08A93924; }
    goto L_08A93908;
L_08A93908:;
    v0 = 0 + 0;
    v1 = 0 + 0;
    a0 = sp + 0;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+8, 0);
    goto L_08A938E8;
L_08A93924:;
    cnd_ = v0 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_08A9393C; }
    goto L_08A9392C;
L_08A9392C:;
    v0 = 4;
    a0 = sp + 0;
    ST32(sp, v0);
    goto L_08A938E8;
L_08A9393C:;
    a0 = LD32(sp+16);
    a1 = LD32(sp+20);
    t2 = LD32(sp+48);
    t3 = LD32(sp+52);
    v0 = LD32(sp+40);
    t4 = a1 < t3;
    v1 = v1 - v0;
    cnd_ = t4 != 0;
    ST32(sp+8, v1);
    if (cnd_) { goto L_08A93A54; }
    goto L_08A93960;
L_08A93960:;
    cnd_ = t3 == a1;
    v0 = a0 < t2;
    if (cnd_) { goto L_08A93A4C; }
    goto L_08A93968;
L_08A93968:;
    t0 = 0;
    t1 = 0x10000000u;
    t6 = 0 + 0;
    t7 = 0 + 0;
    goto L_08A93978;
L_08A93978:;
    cnd_ = t4 != 0;
    v0 = t1 << 31;
    if (cnd_) { goto L_08A939A4; }
    goto L_08A93980;
L_08A93980:;
    cnd_ = t3 == a1;
    v0 = a0 < t2;
    if (cnd_) { goto L_08A93A3C; }
    goto L_08A93988;
L_08A93988:;
    v0 = a0 < t2;
    goto L_08A9398C;
L_08A9398C:;
    a1 = a1 - t3;
    a0 = a0 - t2;
    a1 = a1 - v0;
    t6 = t6 | t0;
    t7 = t7 | t1;
    v0 = t1 << 31;
    goto L_08A939A4;
L_08A939A4:;
    t0 = t0 >> 1;
    a3 = a1 << 1;
    v1 = a0 >> 31;
    t0 = t0 | v0;
    t1 = t1 >> 1;
    a3 = a3 | v1;
    a2 = a0 << 1;
    v0 = t0 | t1;
    a0 = a2 + 0;
    a1 = a3 + 0;
    cnd_ = v0 != 0;
    t4 = a3 < t3;
    if (cnd_) { goto L_08A93978; }
    goto L_08A939D4;
L_08A939D4:;
    v1 = 0;
    v0 = 255;
    v0 = t6 & v0;
    a0 = 128;
    cnd_ = v0 == a0;
    v1 = t7 & v1;
    if (cnd_) { goto L_08A939FC; }
    goto L_08A939EC;
L_08A939EC:;
    ST32(t5+16, t6);
    ST32(t5+20, t7);
    a0 = t5 + 0;
    goto L_08A938E8;
L_08A939FC:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A939EC; }
    goto L_08A93A04;
L_08A93A04:;
    v1 = 0;
    v0 = 256;
    v0 = t6 & v0;
    v1 = t7 & v1;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    if (cnd_) { t6 = t6 + 128; goto L_08A93A30; }
    goto L_08A93A20;
L_08A93A20:;
    v0 = a2 | a3;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A939EC; }
    goto L_08A93A2C;
L_08A93A2C:;
    t6 = t6 + 128;
    goto L_08A93A30;
L_08A93A30:;
    v0 = t6 < 0x80u;
    t7 = t7 + v0;
    goto L_08A939EC;
L_08A93A3C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = t1 << 31; goto L_08A939A4; }
    goto L_08A93A44;
L_08A93A44:;
    v0 = a0 < t2;
    goto L_08A9398C;
L_08A93A4C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A93968; }
    goto L_08A93A54;
L_08A93A54:;
    v0 = v1 - 1;
    a1 = a1 << 1;
    v1 = a0 >> 31;
    ST32(sp+8, v0);
    a1 = a1 | v1;
    a0 = a0 << 1;
    t4 = a1 < t3;
    goto L_08A93968;
}

/* 08A93A74 */
u64 func_08A93A74(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A93A74:;
    sp = sp - 112;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 64;
    a1 = sp + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+80, a2);
    ST32(sp+84, a3);
    s0 = sp + 32;
    func_08A943A0(a0, a1);
    goto L_08A93AA8;
L_08A93AA8:;
    a0 = sp + 80;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93AB4;
L_08A93AB4:;
    v0 = LD32(sp);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A93AD8; }
    goto L_08A93AC4;
L_08A93AC4:;
    v0 = LD32(sp+32);
    a1 = s0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A93AEC; }
    goto L_08A93AD8;
L_08A93AD8:;
    v0 = v1 + 0;
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_08A93AEC:;
    v0 = func_08A944B4(a0, a1);
    goto L_08A93AF4;
L_08A93AF4:;
    v1 = v0 + 0;
    goto L_08A93AD8;
}

/* 08A93AFC */
u32 func_08A93AFC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A93AFC:;
    sp = sp - 112;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 64;
    a1 = sp + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+80, a2);
    ST32(sp+84, a3);
    s0 = sp + 32;
    func_08A943A0(a0, a1);
    goto L_08A93B30;
L_08A93B30:;
    a0 = sp + 80;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93B3C;
L_08A93B3C:;
    v0 = LD32(sp);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A93B60; }
    goto L_08A93B4C;
L_08A93B4C:;
    v0 = LD32(sp+32);
    a1 = s0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A93B74; }
    goto L_08A93B60;
L_08A93B60:;
    v0 = v1 + 0;
    sp = sp + 112;
    return v0;
L_08A93B74:;
    v0 = func_08A944B4(a0, a1);
    goto L_08A93B7C;
L_08A93B7C:;
    v1 = v0 + 0;
    goto L_08A93B60;
}

/* 08A93B84 */
u32 func_08A93B84(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A93B84:;
    sp = sp - 112;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 64;
    a1 = sp + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+80, a2);
    ST32(sp+84, a3);
    s0 = sp + 32;
    func_08A943A0(a0, a1);
    goto L_08A93BB8;
L_08A93BB8:;
    a0 = sp + 80;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93BC4;
L_08A93BC4:;
    v0 = LD32(sp);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A93BE8; }
    goto L_08A93BD4;
L_08A93BD4:;
    v0 = LD32(sp+32);
    a1 = s0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A93BFC; }
    goto L_08A93BE8;
L_08A93BE8:;
    v0 = v1 + 0;
    sp = sp + 112;
    return v0;
L_08A93BFC:;
    v0 = func_08A944B4(a0, a1);
    goto L_08A93C04;
L_08A93C04:;
    v1 = v0 + 0;
    goto L_08A93BE8;
}

/* 08A93C0C */
u32 func_08A93C0C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A93C0C:;
    sp = sp - 112;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 64;
    a1 = sp + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+80, a2);
    ST32(sp+84, a3);
    s0 = sp + 32;
    func_08A943A0(a0, a1);
    goto L_08A93C40;
L_08A93C40:;
    a0 = sp + 80;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93C4C;
L_08A93C4C:;
    v0 = LD32(sp);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A93C70; }
    goto L_08A93C5C;
L_08A93C5C:;
    v0 = LD32(sp+32);
    a1 = s0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A93C84; }
    goto L_08A93C70;
L_08A93C70:;
    v0 = v1 + 0;
    sp = sp + 112;
    return v0;
L_08A93C84:;
    v0 = func_08A944B4(a0, a1);
    goto L_08A93C8C;
L_08A93C8C:;
    v1 = v0 + 0;
    goto L_08A93C70;
}

/* 08A93C94 */
u32 func_08A93C94(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A93C94:;
    sp = sp - 112;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 64;
    a1 = sp + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+80, a2);
    ST32(sp+84, a3);
    s0 = sp + 32;
    func_08A943A0(a0, a1);
    goto L_08A93CC8;
L_08A93CC8:;
    a0 = sp + 80;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93CD4;
L_08A93CD4:;
    v0 = LD32(sp);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A93CF8; }
    goto L_08A93CE4;
L_08A93CE4:;
    v0 = LD32(sp+32);
    a1 = s0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A93D0C; }
    goto L_08A93CF8;
L_08A93CF8:;
    v0 = v1 + 0;
    sp = sp + 112;
    return v0;
L_08A93D0C:;
    v0 = func_08A944B4(a0, a1);
    goto L_08A93D14;
L_08A93D14:;
    v1 = v0 + 0;
    goto L_08A93CF8;
}

/* 08A93D1C */
u64 func_08A93D1C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A93D1C:;
    sp = sp - 112;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 64;
    a1 = sp + 0;
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+80, a2);
    ST32(sp+84, a3);
    s0 = sp + 32;
    func_08A943A0(a0, a1);
    goto L_08A93D50;
L_08A93D50:;
    a0 = sp + 80;
    a1 = s0 + 0;
    func_08A943A0(a0, a1);
    goto L_08A93D5C;
L_08A93D5C:;
    v0 = LD32(sp);
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08A93D80; }
    goto L_08A93D6C;
L_08A93D6C:;
    v0 = LD32(sp+32);
    a1 = s0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08A93D94; }
    goto L_08A93D80;
L_08A93D80:;
    v0 = v1 + 0;
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_08A93D94:;
    v0 = func_08A944B4(a0, a1);
    goto L_08A93D9C;
L_08A93D9C:;
    v1 = v0 + 0;
    goto L_08A93D80;
}

/* 08A93DA4 */
u64 func_08A93DA4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A93DA4:;
    sp = sp - 48;
    v1 = a0 >> 31;
    v0 = 3;
    ST32(sp, v0);
    cnd_ = a0 != 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_08A93DDC; }
    goto L_08A93DC0;
L_08A93DC0:;
    v0 = 2;
    ST32(sp, v0);
    goto L_08A93DC8;
L_08A93DC8:;
    a0 = sp + 0;
    { u64 r_ = func_08A94138(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A93DD0;
L_08A93DD0:;
    goto L_08A93DD4;
L_08A93DD4:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08A93DDC:;
    v0 = 60;
    cnd_ = v1 == 0;
    ST32(sp+8, v0);
    if (cnd_) { goto L_08A93E74; }
    goto L_08A93DE8;
L_08A93DE8:;
    v0 = 0x80000000u;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08A93E5C; }
    goto L_08A93DF4;
L_08A93DF4:;
    v0 = 0 - a0;
    v1 = (u32)((s32)v0 >> 31);
    goto L_08A93DFC;
L_08A93DFC:;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    v0 = 0xfff0000u;
    v0 = v0 | 0xffff;
    v1 = LD32(sp+20);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_08A93DC8; }
    goto L_08A93E1C;
L_08A93E1C:;
    a2 = 0xfff0000u;
    a2 = a2 | 0xffff;
    goto L_08A93E24;
L_08A93E24:;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    a0 = v0 >> 31;
    v1 = v1 << 1;
    v1 = v1 | a0;
    v0 = v0 << 1;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    a0 = LD32(sp+20);
    a0 = a2 < a0;
    cnd_ = a0 == 0;
    a1 = a1 - 1;
    if (cnd_) { goto L_08A93E24; }
    goto L_08A93E54;
L_08A93E54:;
    ST32(sp+8, a1);
    goto L_08A93DC8;
L_08A93E5C:;
    v0 = D_08AF0938 - (2360);
    v0 = LD32(v0+2360);
    v1 = D_08AF093C - (2364);
    v1 = LD32(v1+2364);
    goto L_08A93DD4;
L_08A93E74:;
    v0 = a0 + 0;
    v1 = (u32)((s32)a0 >> 31);
    goto L_08A93DFC;
}

/* 08A93E80 */
u32 func_08A93E80(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A93E80:;
    sp = sp - 64;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 32;
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    a1 = sp + 0;
    func_08A943A0(a0, a1);
    goto L_08A93EA4;
L_08A93EA4:;
    a1 = 0 + 0;
    v1 = LD32(sp);
    v0 = v1 ^ 0x2;
    cnd_ = v0 == 0;
    a0 = v1 < 0x2u;
    if (cnd_) { goto L_08A93EF4; }
    goto L_08A93EB8;
L_08A93EB8:;
    cnd_ = a0 != 0;
    v0 = v1 ^ 0x4;
    if (cnd_) { goto L_08A93EF4; }
    goto L_08A93EC0;
L_08A93EC0:;
    v1 = 0x7fff0000u;
    cnd_ = v0 == 0;
    a1 = 0x80000000u;
    if (cnd_) { goto L_08A93EE8; }
    goto L_08A93ECC;
L_08A93ECC:;
    v0 = LD32(sp+8);
    a1 = 0 + 0;
    cnd_ = (s32)v0 < 0;
    a0 = (s32)v0 < 31;
    if (cnd_) { goto L_08A93EF4; }
    goto L_08A93EDC;
L_08A93EDC:;
    v1 = 0x7fff0000u;
    cnd_ = a0 != 0;
    a1 = 0x80000000u;
    if (cnd_) { goto L_08A93F04; }
    goto L_08A93EE8;
L_08A93EE8:;
    v0 = LD32(sp+4);
    v1 = v1 | 0xffff;
    if (v0 == 0) a1 = v1;
    goto L_08A93EF4;
L_08A93EF4:;
    v0 = a1 + 0;
    sp = sp + 64;
    return v0;
L_08A93F04:;
    a0 = 60;
    a0 = a0 - v0;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    t0 = a0 << 26;
    cnd_ = (s32)t0 >= 0;
    if (cnd_) { goto L_08A93F2C; }
    goto L_08A93F20;
L_08A93F20:;
    a2 = v1 >> (a0 & 31);
    cnd_ = 0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A93F44; }
    goto L_08A93F2C;
L_08A93F2C:;
    cnd_ = t0 == 0;
    a2 = v0 >> (a0 & 31);
    if (cnd_) { goto L_08A93F40; }
    goto L_08A93F34;
L_08A93F34:;
    t0 = 0 - a0;
    t0 = v1 << (t0 & 31);
    a2 = a2 | t0;
    goto L_08A93F40;
L_08A93F40:;
    a3 = v1 >> (a0 & 31);
    goto L_08A93F44;
L_08A93F44:;
    v0 = LD32(sp+4);
    a1 = 0 - a2;
    if (v0 == 0) a1 = a2;
    goto L_08A93EF4;
}

/* 08A93F54 */
u64 func_08A93F54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A93F54:;
    sp = sp - 64;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 32;
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    a1 = sp + 0;
    func_08A943A0(a0, a1);
    goto L_08A93F78;
L_08A93F78:;
    a0 = sp + 0;
    v0 = LD32(sp+4);
    v0 = v0 < 0x1u;
    ST32(sp+4, v0);
    { u64 r_ = func_08A94138(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A93F8C;
L_08A93F8C:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A93F98 */
u64 func_08A93F98(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A93F98:;
    sp = sp - 48;
    v0 = a0 + 0;
    ST32(sp, v0);
    ST32(sp+4, a1);
    ST32(sp+8, a2);
    ST32(sp+16, t0);
    ST32(sp+20, t1);
    a0 = sp + 0;
    { u64 r_ = func_08A94138(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A93FC0;
L_08A93FC0:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A93FCC */
rv_t func_08A93FCC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A93FCC:;
    sp = sp - 64;
    v0 = a0 + 0;
    v1 = a1 + 0;
    a0 = sp + 32;
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    a1 = sp + 0;
    func_08A943A0(a0, a1);
    goto L_08A93FF0;
L_08A93FF0:;
    v1 = 0;
    v0 = 0x3fff0000u;
    v0 = v0 | 0xffff;
    t0 = LD32(sp+16);
    t1 = LD32(sp+20);
    a0 = LD32(sp);
    a1 = LD32(sp+4);
    v1 = t1 & v1;
    v0 = t0 & v0;
    a2 = t1 << 2;
    v0 = v0 | v1;
    t0 = t0 >> 30;
    t0 = t0 | a2;
    v0 = 0 < v0;
    a2 = LD32(sp+8);
    v0 = v0 | t0;
    a3 = v0 + 0;
    { rv_t r_ = func_08A94108(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94038;
L_08A94038:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08A94044 */
void func_08A94044(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08A94044:;
    v0 = LD32(a0);
    v1 = v0 >> 31;
    a2 = v0 + 0;
    a0 = (v0 >> 23) & 0xff;
    ST32(a1+4, v1);
    cnd_ = a0 != 0;
    a2 = (a2 & ~(0x1ffu << 23)) | ((0 & 0x1ff) << 23);
    if (cnd_) { goto L_08A940B8; }
    goto L_08A94060;
L_08A94060:;
    cnd_ = a2 == 0;
    v0 = 2;
    if (cnd_) { goto L_08A940B0; }
    goto L_08A94068;
L_08A94068:;
    v0 = 0x3fff0000u;
    a2 = a2 << 7;
    v0 = v0 | 0xffff;
    v1 = (u32)-126;
    a0 = 3;
    v0 = v0 < a2;
    ST32(a1+8, v1);
    cnd_ = v0 != 0;
    ST32(a1, a0);
    if (cnd_) { goto L_08A940A8; }
    goto L_08A9408C;
L_08A9408C:;
    a0 = 0x3fff0000u;
    a0 = a0 | 0xffff;
    goto L_08A94094;
L_08A94094:;
    a2 = a2 << 1;
    v0 = a0 < a2;
    cnd_ = v0 == 0;
    v1 = v1 - 1;
    if (cnd_) { goto L_08A94094; }
    goto L_08A940A4;
L_08A940A4:;
    ST32(a1+8, v1);
    goto L_08A940A8;
L_08A940A8:;
    ST32(a1+12, a2);
    return;
L_08A940B0:;
    ST32(a1, v0);
    return;
L_08A940B8:;
    v0 = 255;
    cnd_ = a0 == v0;
    v0 = a2 << 7;
    if (cnd_) { goto L_08A940E0; }
    goto L_08A940C4;
L_08A940C4:;
    v1 = 0x40000000u;
    v0 = v0 | v1;
    a0 = a0 - 127;
    ST32(a1+12, v0);
    v0 = 3;
    ST32(a1+8, a0);
    goto L_08A940B0;
L_08A940E0:;
    cnd_ = a2 != 0;
    if (cnd_) { v0 = 0x100000u; goto L_08A940F0; }
    goto L_08A940E8;
L_08A940E8:;
    v0 = 4;
    goto L_08A940B0;
L_08A940F0:;
    v0 = a2 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a1, 0); goto L_08A940A8; }
    goto L_08A940FC;
L_08A940FC:;
    v0 = 1;
    ST32(a1, v0);
    goto L_08A940A8;
}

/* 08A94108 */
rv_t func_08A94108(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A94108:;
    sp = sp - 32;
    v0 = a0 + 0;
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, a1);
    ST32(sp+8, a2);
    ST32(sp+12, a3);
    { rv_t r_ = func_08A94618(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9412C;
L_08A9412C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A94138 */
u64 func_08A94138(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94138:;
    v1 = LD32(a0);
    sp = sp - 16;
    t2 = LD32(a0+16);
    t3 = LD32(a0+20);
    v0 = v1 < 0x2u;
    t4 = LD32(a0+4);
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A94194; }
    goto L_08A94158;
L_08A94158:;
    v0 = 0;
    v1 = 0x80000u;
    t2 = t2 | v0;
    t3 = t3 | v1;
    t1 = 2047;
    goto L_08A9416C;
L_08A9416C:;
    v0 = LD32(sp+4);
    goto L_08A94170;
L_08A94170:;
    v0 = (v0 & ~(0xfffffu << 0)) | ((t3 & 0xfffff) << 0);
    v0 = (v0 & ~(0x7ffu << 20)) | ((t1 & 0x7ff) << 20);
    v0 = (v0 & ~(0x1u << 31)) | ((t4 & 0x1) << 31);
    ST32(sp+4, v0);
    ST32(sp, t2);
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A94194:;
    v0 = v1 ^ 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { t1 = 2047; goto L_08A94300; }
    goto L_08A941A0;
L_08A941A0:;
    v0 = v1 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A94300; }
    goto L_08A941AC;
L_08A941AC:;
    v0 = t2 | t3;
    cnd_ = v0 == 0;
    v0 = LD32(sp+4);
    if (cnd_) { goto L_08A94170; }
    goto L_08A941B8;
L_08A941B8:;
    a0 = LD32(a0+8);
    v0 = (s32)a0 < -1022;
    cnd_ = v0 == 0;
    v0 = (s32)a0 < 1024;
    if (cnd_) { goto L_08A942F8; }
    goto L_08A941C8;
L_08A941C8:;
    v0 = (u32)-1022;
    t5 = v0 - a0;
    v1 = (s32)t5 < 57;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08A94260; }
    goto L_08A941DC;
L_08A941DC:;
    t2 = 0 + 0;
    t3 = 0 + 0;
    goto L_08A941E4;
L_08A941E4:;
    v1 = 0;
    v0 = 255;
    v0 = t2 & v0;
    a0 = 128;
    cnd_ = v0 == a0;
    v1 = t3 & v1;
    if (cnd_) { goto L_08A94230; }
    goto L_08A941FC;
L_08A941FC:;
    t2 = t2 + 127;
    goto L_08A94200;
L_08A94200:;
    v0 = t2 < 0x7fu;
    goto L_08A94204;
L_08A94204:;
    t3 = t3 + v0;
    v0 = 0xfff0000u;
    goto L_08A9420C;
L_08A9420C:;
    v0 = v0 | 0xffff;
    v0 = v0 < t3;
    v1 = 1;
    t2 = t2 >> 8;
    a0 = t3 << 24;
    if (v0 != 0) t1 = v1;
    t2 = t2 | a0;
    goto L_08A94228;
L_08A94228:;
    t3 = t3 >> 8;
    goto L_08A9416C;
L_08A94230:;
    cnd_ = v1 != 0;
    if (cnd_) { t2 = t2 + 127; goto L_08A94200; }
    goto L_08A94238;
L_08A94238:;
    v1 = 0;
    v0 = 256;
    v0 = t2 & v0;
    v1 = t3 & v1;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0xfff0000u; goto L_08A9420C; }
    goto L_08A94254;
L_08A94254:;
    t2 = t2 + 128;
    v0 = t2 < 0x80u;
    goto L_08A94204;
L_08A94260:;
    a1 = 0;
    a0 = 1;
    a2 = t5 << 26;
    cnd_ = (s32)a2 >= 0;
    if (cnd_) { goto L_08A94280; }
    goto L_08A94274;
L_08A94274:;
    v1 = a0 << (t5 & 31);
    cnd_ = 0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A94298; }
    goto L_08A94280;
L_08A94280:;
    cnd_ = a2 == 0;
    v1 = a1 << (t5 & 31);
    if (cnd_) { goto L_08A94294; }
    goto L_08A94288;
L_08A94288:;
    a2 = 0 - t5;
    a2 = a0 >> (a2 & 31);
    v1 = v1 | a2;
    goto L_08A94294;
L_08A94294:;
    v0 = a0 << (t5 & 31);
    goto L_08A94298;
L_08A94298:;
    v0 = v0 - 1;
    a3 = v0 < 0xffffffffu;
    v1 = v1 - 1;
    v1 = v1 + a3;
    v0 = t2 & v0;
    v1 = t3 & v1;
    v0 = v0 | v1;
    t0 = t5 << 26;
    cnd_ = (s32)t0 >= 0;
    if (cnd_) { goto L_08A942CC; }
    goto L_08A942C0;
L_08A942C0:;
    a2 = t3 >> (t5 & 31);
    cnd_ = 0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A942E4; }
    goto L_08A942CC;
L_08A942CC:;
    cnd_ = t0 == 0;
    a2 = t2 >> (t5 & 31);
    if (cnd_) { goto L_08A942E0; }
    goto L_08A942D4;
L_08A942D4:;
    t0 = 0 - t5;
    t0 = t3 << (t0 & 31);
    a2 = a2 | t0;
    goto L_08A942E0;
L_08A942E0:;
    a3 = t3 >> (t5 & 31);
    goto L_08A942E4;
L_08A942E4:;
    v0 = 0 < v0;
    a1 = 0 + 0;
    t2 = a2 | v0;
    t3 = a3 | a1;
    goto L_08A941E4;
L_08A942F8:;
    cnd_ = v0 != 0;
    t1 = 2047;
    if (cnd_) { goto L_08A94310; }
    goto L_08A94300;
L_08A94300:;
    t2 = 0 + 0;
    t3 = 0 + 0;
    v0 = LD32(sp+4);
    goto L_08A94170;
L_08A94310:;
    v1 = 0;
    v0 = 255;
    a2 = t2 & v0;
    v0 = 128;
    a3 = t3 & v1;
    cnd_ = a2 == v0;
    t1 = a0 + 1023;
    if (cnd_) { goto L_08A94370; }
    goto L_08A9432C;
L_08A9432C:;
    t2 = t2 + 127;
    goto L_08A94330;
L_08A94330:;
    v0 = t2 < 0x7fu;
    goto L_08A94334;
L_08A94334:;
    t3 = t3 + v0;
    v0 = 0x1fff0000u;
    goto L_08A9433C;
L_08A9433C:;
    v0 = v0 | 0xffff;
    v0 = v0 < t3;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = t2 >> 8; goto L_08A94364; }
    goto L_08A9434C;
L_08A9434C:;
    v0 = t3 << 31;
    t2 = t2 >> 1;
    t2 = t2 | v0;
    t3 = t3 >> 1;
    t1 = t1 + 1;
    t2 = t2 >> 8;
    goto L_08A94364;
L_08A94364:;
    v0 = t3 << 24;
    t2 = t2 | v0;
    goto L_08A94228;
L_08A94370:;
    cnd_ = a3 != 0;
    if (cnd_) { t2 = t2 + 127; goto L_08A94330; }
    goto L_08A94378;
L_08A94378:;
    v1 = 0;
    v0 = 256;
    v0 = t2 & v0;
    v1 = t3 & v1;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0x1fff0000u; goto L_08A9433C; }
    goto L_08A94394;
L_08A94394:;
    t2 = t2 + 128;
    v0 = t2 < 0x80u;
    goto L_08A94334;
}

/* 08A943A0 */
void func_08A943A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A943A0:;
    v0 = LD32(a0+4);
    t0 = LD32(a0);
    t2 = a1 + 0;
    v1 = v0 >> 31;
    t1 = v0 + 0;
    a3 = (v0 >> 20) & 0x7ff;
    ST32(a1+4, v1);
    cnd_ = a3 != 0;
    t1 = (t1 & ~(0xfffu << 20)) | ((0 & 0xfff) << 20);
    if (cnd_) { goto L_08A94440; }
    goto L_08A943C4;
L_08A943C4:;
    v0 = t0 | t1;
    cnd_ = v0 != 0;
    v0 = t0 >> 24;
    if (cnd_) { goto L_08A943DC; }
    goto L_08A943D0;
L_08A943D0:;
    v0 = 2;
    goto L_08A943D4;
L_08A943D4:;
    ST32(t2, v0);
    return;
L_08A943DC:;
    a0 = 0xfff0000u;
    t1 = t1 << 8;
    t1 = t1 | v0;
    a0 = a0 | 0xffff;
    v0 = (u32)-1022;
    v1 = 3;
    a0 = a0 < t1;
    t0 = t0 << 8;
    ST32(a1+8, v0);
    cnd_ = a0 != 0;
    ST32(a1, v1);
    if (cnd_) { goto L_08A94434; }
    goto L_08A94408;
L_08A94408:;
    a1 = 0xfff0000u;
    a1 = a1 | 0xffff;
    a0 = (u32)-1022;
    goto L_08A94414;
L_08A94414:;
    v1 = t0 >> 31;
    t1 = t1 << 1;
    t1 = t1 | v1;
    v0 = a1 < t1;
    t0 = t0 << 1;
    cnd_ = v0 == 0;
    a0 = a0 - 1;
    if (cnd_) { goto L_08A94414; }
    goto L_08A94430;
L_08A94430:;
    ST32(t2+8, a0);
    goto L_08A94434;
L_08A94434:;
    ST32(t2+16, t0);
    ST32(t2+20, t1);
    return;
L_08A94440:;
    v0 = 2047;
    cnd_ = a3 == v0;
    a2 = t0 >> 24;
    if (cnd_) { goto L_08A94480; }
    goto L_08A9444C;
L_08A9444C:;
    v1 = t1 << 8;
    v1 = v1 | a2;
    a0 = 0;
    a1 = 0x10000000u;
    v0 = t0 << 8;
    v0 = v0 | a0;
    v1 = v1 | a1;
    a2 = a3 - 1023;
    ST32(t2+16, v0);
    ST32(t2+20, v1);
    v0 = 3;
    ST32(t2+8, a2);
    goto L_08A943D4;
L_08A94480:;
    v0 = t0 | t1;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_08A943D4; }
    goto L_08A9448C;
L_08A9448C:;
    v0 = 0;
    v1 = 0x80000u;
    v0 = t0 & v0;
    v1 = t1 & v1;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a1, 0); goto L_08A94434; }
    goto L_08A944A8;
L_08A944A8:;
    v0 = 1;
    ST32(a1, v0);
    goto L_08A94434;
}

/* 08A944B4 */
u32 func_08A944B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A944B4:;
    v1 = LD32(a0);
    v0 = v1 < 0x2u;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08A944D4; }
    goto L_08A944C4;
L_08A944C4:;
    a2 = LD32(a1);
    v0 = a2 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = v1 ^ 0x4; goto L_08A944E0; }
    goto L_08A944D4;
L_08A944D4:;
    a0 = 1;
    goto L_08A944D8;
L_08A944D8:;
    v0 = a0 + 0;
    return v0;
L_08A944E0:;
    cnd_ = v0 != 0;
    v0 = v1 ^ 0x4;
    if (cnd_) { goto L_08A94504; }
    goto L_08A944E8;
L_08A944E8:;
    v0 = a2 ^ 0x4;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = v1 ^ 0x4; goto L_08A94504; }
    goto L_08A944F4;
L_08A944F4:;
    v1 = LD32(a1+4);
    v0 = LD32(a0+4);
    a0 = v1 - v0;
    goto L_08A944D8;
L_08A94504:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a3+4); goto L_08A94558; }
    goto L_08A9450C;
L_08A9450C:;
    v0 = a2 ^ 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a1+4); goto L_08A9453C; }
    goto L_08A94518;
L_08A94518:;
    v0 = v1 ^ 0x2;
    cnd_ = v0 != 0;
    v0 = a2 ^ 0x2;
    if (cnd_) { goto L_08A9454C; }
    goto L_08A94524;
L_08A94524:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A944D8; }
    goto L_08A9452C;
L_08A9452C:;
    v0 = v1 ^ 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = a2 ^ 0x2; goto L_08A9454C; }
    goto L_08A94538;
L_08A94538:;
    v1 = LD32(a1+4);
    goto L_08A9453C;
L_08A9453C:;
    a0 = 1;
    v0 = (u32)-1;
    goto L_08A94544;
L_08A94544:;
    if (v1 == 0) a0 = v0;
    goto L_08A944D8;
L_08A9454C:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a3+4); goto L_08A94564; }
    goto L_08A94554;
L_08A94554:;
    v1 = LD32(a3+4);
    goto L_08A94558;
L_08A94558:;
    a0 = (u32)-1;
    v0 = 1;
    goto L_08A94544;
L_08A94564:;
    v1 = LD32(a1+4);
    a0 = (u32)-1;
    v0 = 1;
    cnd_ = a2 != v1;
    if (a2 == 0) a0 = v0;
    if (cnd_) { goto L_08A944D8; }
    goto L_08A94578;
L_08A94578:;
    t1 = LD32(a3+8);
    t0 = LD32(a1+8);
    a0 = (u32)-1;
    v1 = (s32)t0 < (s32)t1;
    cnd_ = v1 != 0;
    if (a2 == 0) a0 = v0;
    if (cnd_) { goto L_08A944D8; }
    goto L_08A94590;
L_08A94590:;
    a0 = 1;
    v0 = (u32)-1;
    v1 = (s32)t1 < (s32)t0;
    cnd_ = v1 != 0;
    if (a2 == 0) a0 = v0;
    if (cnd_) { goto L_08A944D8; }
    goto L_08A945A4;
L_08A945A4:;
    t0 = LD32(a3+20);
    a0 = LD32(a1+20);
    v0 = a0 < t0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = (u32)-1; goto L_08A94610; }
    goto L_08A945B8;
L_08A945B8:;
    cnd_ = t0 == a0;
    if (cnd_) { v1 = LD32(a3+16); goto L_08A945FC; }
    goto L_08A945C0;
L_08A945C0:;
    v0 = t0 < a0;
    goto L_08A945C4;
L_08A945C4:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = 1; goto L_08A945F0; }
    goto L_08A945CC;
L_08A945CC:;
    cnd_ = a0 == t0;
    if (cnd_) { v1 = LD32(a1+16); goto L_08A945DC; }
    goto L_08A945D4;
L_08A945D4:;
    a0 = 0 + 0;
    goto L_08A944D8;
L_08A945DC:;
    v0 = LD32(a3+16);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_08A944D8; }
    goto L_08A945EC;
L_08A945EC:;
    a0 = 1;
    goto L_08A945F0;
L_08A945F0:;
    v0 = (u32)-1;
    goto L_08A945F4;
L_08A945F4:;
    if (a2 == 0) a0 = v0;
    goto L_08A944D8;
L_08A945FC:;
    v0 = LD32(a1+16);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = t0 < a0; goto L_08A945C4; }
    goto L_08A9460C;
L_08A9460C:;
    a0 = (u32)-1;
    goto L_08A94610;
L_08A94610:;
    v0 = 1;
    goto L_08A945F4;
}

/* 08A94618 */
rv_t func_08A94618(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
L_08A94618:;
    v1 = LD32(a0);
    a2 = 0 + 0;
    a1 = LD32(a0+12);
    v0 = v1 < 0x2u;
    t0 = LD32(a0+4);
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A94658; }
    goto L_08A94634;
L_08A94634:;
    v0 = 0x100000u;
    a1 = a1 | v0;
    a3 = 255;
    goto L_08A94640;
L_08A94640:;
    a2 = (a2 & ~(0x7fffffu << 0)) | ((a1 & 0x7fffff) << 0);
    goto L_08A94644;
L_08A94644:;
    a2 = (a2 & ~(0xffu << 23)) | ((a3 & 0xff) << 23);
    a2 = (a2 & ~(0x1u << 31)) | ((t0 & 0x1) << 31);
    f0 = BITSF(a2);
    return (rv_t){ v0, v1, f0 };
L_08A94658:;
    v0 = v1 ^ 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = 255; goto L_08A94708; }
    goto L_08A94664;
L_08A94664:;
    v0 = v1 ^ 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 0 + 0; goto L_08A94640; }
    goto L_08A94670;
L_08A94670:;
    cnd_ = a1 == 0;
    if (cnd_) { a2 = (a2 & ~(0x7fffffu << 0)) | ((a1 & 0x7fffff) << 0); goto L_08A94644; }
    goto L_08A94678;
L_08A94678:;
    a0 = LD32(a0+8);
    v0 = (s32)a0 < -126;
    cnd_ = v0 == 0;
    v0 = (s32)a0 < 128;
    if (cnd_) { goto L_08A946FC; }
    goto L_08A94688;
L_08A94688:;
    v0 = (u32)-126;
    a0 = v0 - a0;
    v1 = (s32)a0 < 26;
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A946E0; }
    goto L_08A9469C;
L_08A9469C:;
    a1 = 0 + 0;
    goto L_08A946A0;
L_08A946A0:;
    v1 = a1 & 0x7f;
    v0 = 64;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = a1 & 0x80; goto L_08A946D0; }
    goto L_08A946B0;
L_08A946B0:;
    a1 = a1 + 63;
    goto L_08A946B4;
L_08A946B4:;
    v0 = 0x3fff0000u;
    goto L_08A946B8;
L_08A946B8:;
    v0 = v0 | 0xffff;
    v0 = v0 < a1;
    v1 = 1;
    if (v0 != 0) a3 = v1;
    goto L_08A946C8;
L_08A946C8:;
    a1 = a1 >> 7;
    goto L_08A94640;
L_08A946D0:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = a1 + 64; goto L_08A946B4; }
    goto L_08A946D8;
L_08A946D8:;
    v0 = 0x3fff0000u;
    goto L_08A946B8;
L_08A946E0:;
    v0 = v0 << (a0 & 31);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v1 = a1 >> (a0 & 31);
    v0 = 0 < v0;
    a1 = v1 | v0;
    goto L_08A946A0;
L_08A946FC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = a1 & 0x7f; goto L_08A94710; }
    goto L_08A94704;
L_08A94704:;
    a3 = 255;
    goto L_08A94708;
L_08A94708:;
    a1 = 0 + 0;
    goto L_08A94640;
L_08A94710:;
    v0 = 64;
    cnd_ = v1 == v0;
    a3 = a0 + 127;
    if (cnd_) { goto L_08A94734; }
    goto L_08A9471C;
L_08A9471C:;
    a1 = a1 + 63;
    goto L_08A94720;
L_08A94720:;
    cnd_ = (s32)a1 >= 0;
    if (cnd_) { a1 = a1 >> 7; goto L_08A94640; }
    goto L_08A94728;
L_08A94728:;
    a1 = a1 >> 1;
    a3 = a3 + 1;
    goto L_08A946C8;
L_08A94734:;
    v0 = a1 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = a1 + 64; goto L_08A94720; }
    goto L_08A94740;
L_08A94740:;
    goto L_08A94720;
}

/* 08A94748 */
u64 func_08A94748(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94748:;
    sp = sp - 16;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A9475C; }
    goto L_08A94754;
L_08A94754:;
    { rv_t r_ = func_088F9A14(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9475C;
L_08A9475C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A94768 */
u64 func_08A94768(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94768:;
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A94778;
L_08A94778:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A94784 */
rv_t func_08A94784(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94784:;
    sp = sp - 16;
    v0 = 1;
    s0 = a0 + 0;
    if (a0 == 0) s0 = v0;
    a0 = s0 + 0;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A947A8;
L_08A947A8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A947C0; }
    goto L_08A947B0;
L_08A947B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A947C0:;
    s1 = D_08C36E10 - (28176);
    v0 = LD32(s1+28176);
    goto L_08A947C8;
L_08A947C8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A947F0; }
    goto L_08A947D0;
L_08A947D0:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A947D8;
L_08A947D8:;
    a0 = s0 + 0;
    { rv_t r_ = func_088F99D0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A947E0;
L_08A947E0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+28176); goto L_08A947C8; }
    goto L_08A947E8;
L_08A947E8:;
    goto L_08A947B0;
L_08A947F0:;
    a0 = 4;
    { u64 r_ = func_08A948A0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A947F8;
L_08A947F8:;
    v1 = D_08B15830 - (22576);
    v1 = v1 + 22576;
    ST32(v0, v1);
    a1 = D_08B15840 - (22592);
    a2 = ((u32)(uintptr_t)func_08A95720) - (22304);
    a0 = v0 + 0;
    a1 = a1 + 22592;
    a2 = a2 + 22304;
    { u64 r_ = func_08A9562C(a0, a1, a2, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9481C;
L_08A9481C:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A94830; }
    goto L_08A94828;
L_08A94828:;
    { rv_t r_ = func_08A9D274(0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94830;
L_08A94830:;
    func_08A9546C(0, 0, 0, 0);
    { rv_t r_ = func_08A94838(0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A94838 */
rv_t func_08A94838(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94838:;
    sp = sp - 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94848;
L_08A94848:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A94854:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08A94868; }
    goto L_08A94860;
L_08A94860:;
    { rv_t r_ = func_08A9D274(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94868;
L_08A94868:;
    func_08A9546C(a0, t1, t2, t3);
    { rv_t r_ = func_08A94870(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A94870 */
rv_t func_08A94870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94870:;
    sp = sp - 16;
    v0 = func_08A870E0();
    goto L_08A94880;
L_08A94880:;
    a0 = D_08AE9C10 - (-25584);
    a3 = LD32(v0+12);
    a0 = a0 - 25584;
    a1 = 1;
    a2 = 27;
    { rv_t r_ = func_08A87054(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94898;
L_08A94898:;
    { rv_t r_ = func_08A95590(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { u64 r_ = func_08A948A0(0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return (rv_t){ v0, v1, f0 };
}

/* 08A948A0 */
u64 func_08A948A0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A948A0:;
    sp = sp - 16;
    s0 = a0 + 80;
    a0 = s0 + 0;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A948BC;
L_08A948BC:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08A948EC; }
    goto L_08A948C4;
L_08A948C4:;
    a0 = s1 + 0;
    goto L_08A948C8;
L_08A948C8:;
    a1 = 0 + 0;
    a2 = 80;
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A948D4;
L_08A948D4:;
    v0 = s1 + 80;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A948EC:;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A948F4;
L_08A948F4:;
    a3 = D_08C36E04 - (28164);
    a2 = D_08C36E00 - (28160);
    v1 = s0 < 0x201u;
    ST32(a3+28164, v0);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    a1 = LD32(a2+28160);
    if (cnd_) { goto L_08A9495C; }
    goto L_08A94910;
L_08A94910:;
    v0 = a1 & 0x1;
    cnd_ = v0 == 0;
    v1 = LD32(a2+28160);
    if (cnd_) { goto L_08A9493C; }
    goto L_08A9491C;
L_08A9491C:;
    a0 = a0 + 1;
    goto L_08A94920;
L_08A94920:;
    a1 = a1 >> 1;
    v0 = a0 < 0x20u;
    cnd_ = v0 == 0;
    v1 = a1 & 0x1;
    if (cnd_) { goto L_08A9495C; }
    goto L_08A94930;
L_08A94930:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = a0 + 1; goto L_08A94920; }
    goto L_08A94938;
L_08A94938:;
    v1 = LD32(a2+28160);
    goto L_08A9493C;
L_08A9493C:;
    v0 = 1;
    v0 = v0 << (a0 & 31);
    v1 = v1 | v0;
    ST32(a2+28160, v1);
    v0 = D_08C32E00 - (11776);
    a0 = a0 << 9;
    v0 = v0 + 11776;
    s1 = a0 + v0;
    goto L_08A9495C;
L_08A9495C:;
    a0 = LD32(a3+28164);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A94964;
L_08A94964:;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A948C8; }
    goto L_08A9496C;
L_08A9496C:;
    { rv_t r_ = func_08A95590(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { u64 r_ = func_08A94974(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return (u64)v0 | ((u64)v1 << 32);
}

/* 08A94974 */
u64 func_08A94974(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94974:;
    v0 = D_08C32E00 - (11776);
    a1 = a0 + 0;
    a2 = v0 + 11776;
    sp = sp - 16;
    v1 = a2 + 16384;
    v0 = a1 < a2;
    a0 = a0 - 80;
    v1 = a1 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A949AC; }
    goto L_08A949A0;
L_08A949A0:;
    v0 = a1 - a2;
    cnd_ = v1 != 0;
    s0 = v0 >> 9;
    if (cnd_) { goto L_08A949C4; }
    goto L_08A949AC;
L_08A949AC:;
    { rv_t r_ = func_088F9A14(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A949B4;
L_08A949B4:;
    goto L_08A949B8;
L_08A949B8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A949C4:;
    v0 = sceKernelCpuSuspendIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A949CC;
L_08A949CC:;
    a2 = D_08C36E00 - (28160);
    a1 = LD32(a2+28160);
    v1 = 1;
    v1 = v1 << (s0 & 31);
    v1 = ~(0 | v1);
    a1 = a1 & v1;
    a0 = v0 + 0;
    v1 = D_08C36E04 - (28164);
    ST32(a2+28160, a1);
    ST32(v1+28164, v0);
    v0 = sceKernelCpuResumeIntr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A949F8;
L_08A949F8:;
    goto L_08A949B8;
}

/* 08A94A00 */
u32 func_08A94A00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94A00:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    v0 = 255;
    v1 = a0 & 0x7;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A94A44; }
    goto L_08A94A1C;
L_08A94A1C:;
    v0 = 2;
    a0 = (s32)v1 < 3;
    cnd_ = v1 == v0;
    a1 = 2;
    if (cnd_) { goto L_08A94A44; }
    goto L_08A94A2C;
L_08A94A2C:;
    cnd_ = a0 == 0;
    a1 = 4;
    if (cnd_) { goto L_08A94A54; }
    goto L_08A94A34;
L_08A94A34:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A94A48; }
    goto L_08A94A3C;
L_08A94A3C:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94A44;
L_08A94A44:;
    goto L_08A94A48;
L_08A94A48:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_08A94A54:;
    v0 = 3;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_08A94A44; }
    goto L_08A94A60;
L_08A94A60:;
    cnd_ = v1 != v0;
    a1 = 8;
    if (cnd_) { goto L_08A94A3C; }
    goto L_08A94A68;
L_08A94A68:;
    goto L_08A94A48;
}

/* 08A94A70 */
u32 func_08A94A70(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A94A70:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    v0 = 255;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A94AAC; }
    goto L_08A94A88;
L_08A94A88:;
    a0 = a0 & 0x70;
    v0 = 32;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 33;
    if (cnd_) { goto L_08A94B08; }
    goto L_08A94A98;
L_08A94A98:;
    cnd_ = v0 == 0;
    v0 = 64;
    if (cnd_) { goto L_08A94ACC; }
    goto L_08A94AA0;
L_08A94AA0:;
    cnd_ = a0 != 0;
    v0 = 16;
    if (cnd_) { goto L_08A94ABC; }
    goto L_08A94AA8;
L_08A94AA8:;
    v1 = 0 + 0;
    goto L_08A94AAC;
L_08A94AAC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_08A94ABC:;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A94AAC; }
    goto L_08A94AC4;
L_08A94AC4:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94ACC;
L_08A94ACC:;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 65;
    if (cnd_) { goto L_08A94AF8; }
    goto L_08A94AD4;
L_08A94AD4:;
    cnd_ = v0 == 0;
    v0 = 80;
    if (cnd_) { goto L_08A94ABC; }
    goto L_08A94ADC;
L_08A94ADC:;
    v0 = 48;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A94AC4; }
    goto L_08A94AE8;
L_08A94AE8:;
    a0 = a1 + 0;
    v0 = func_08A9B7F0(a0);
    goto L_08A94AF0;
L_08A94AF0:;
    v1 = v0 + 0;
    goto L_08A94AAC;
L_08A94AF8:;
    a0 = a1 + 0;
    v0 = func_08A9B7BC(a0);
    goto L_08A94B00;
L_08A94B00:;
    v1 = v0 + 0;
    goto L_08A94AAC;
L_08A94B08:;
    a0 = a1 + 0;
    v0 = func_08A9B7F8(a0);
    goto L_08A94B10;
L_08A94B10:;
    v1 = v0 + 0;
    goto L_08A94AAC;
}

/* 08A94B18 */
u32 func_08A94B18(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_08A94B18:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    goto L_08A94B20;
L_08A94B20:;
    v1 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = v1 & 0x7f;
    v0 = v0 << (a2 & 31);
    v1 = (u32)(s32)(s8)v1;
    a3 = a3 | v0;
    cnd_ = (s32)v1 < 0;
    a2 = a2 + 7;
    if (cnd_) { goto L_08A94B20; }
    goto L_08A94B40;
L_08A94B40:;
    v0 = a0 + 0;
    ST32(a1, a3);
    return v0;
}

/* 08A94B4C */
u32 func_08A94B4C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08A94B4C:;
    a3 = 0 + 0;
    t0 = 0 + 0;
    goto L_08A94B54;
L_08A94B54:;
    a2 = LD_U8(a0);
    a0 = a0 + 1;
    v0 = a2 & 0x7f;
    v0 = v0 << (a3 & 31);
    v1 = (u32)(s32)(s8)a2;
    t0 = t0 | v0;
    cnd_ = (s32)v1 < 0;
    a3 = a3 + 7;
    if (cnd_) { goto L_08A94B54; }
    goto L_08A94B74;
L_08A94B74:;
    v0 = a3 < 0x20u;
    cnd_ = v0 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08A94B9C; }
    goto L_08A94B80;
L_08A94B80:;
    v0 = a2 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = a0 + 0; goto L_08A94B9C; }
    goto L_08A94B8C;
L_08A94B8C:;
    v0 = (u32)-1;
    v0 = v0 << (a3 & 31);
    t0 = t0 | v0;
    v0 = a0 + 0;
    goto L_08A94B9C;
L_08A94B9C:;
    ST32(a1, t0);
    return v0;
}

/* 08A94BA4 */
u32 func_08A94BA4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A94BA4:;
    sp = sp - 48;
    v0 = 80;
    s0 = a0 & 0xff;
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a3 + 0;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_08A94CCC; }
    goto L_08A94BD4;
L_08A94BD4:;
    v1 = s0 & 0xf;
    v0 = v1 < 0xdu;
    cnd_ = v0 == 0;
    v0 = v1 << 2;
    if (cnd_) { goto L_08A94CE0; }
    goto L_08A94BE4;
L_08A94BE4:;
    v1 = D_08AE9C2C - (-25556);
    v1 = v1 - 25556;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08A94BFCu: goto L_08A94BFC; case 0x08A94C60u: goto L_08A94C60; case 0x08A94C78u: goto L_08A94C78; case 0x08A94C8Cu: goto L_08A94C8C; case 0x08A94CA8u: goto L_08A94CA8; case 0x08A94CB8u: goto L_08A94CB8; case 0x08A94CE0u: goto L_08A94CE0; default: rs_break(0, 0x08a94bf4); }
L_08A94BFC:;
    a0 = a2 + 0;
    a1 = sp + 0;
    v0 = func_08A94B18(a0, a1);
    goto L_08A94C08;
L_08A94C08:;
    a0 = LD32(sp);
    goto L_08A94C0C;
L_08A94C0C:;
    a2 = v0 + 0;
    goto L_08A94C10;
L_08A94C10:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1, a0); goto L_08A94C38; }
    goto L_08A94C18;
L_08A94C18:;
    v0 = s0 & 0x70;
    a1 = a0 + s3;
    v0 = v0 ^ 0x10;
    a0 = a0 + s2;
    v1 = (u32)(s32)(s8)s0;
    cnd_ = (s32)v1 < 0;
    if (v0 != 0) a0 = a1;
    if (cnd_) { goto L_08A94C58; }
    goto L_08A94C34;
L_08A94C34:;
    ST32(s1, a0);
    goto L_08A94C38;
L_08A94C38:;
    v0 = a2 + 0;
    sp = sp + 48;
    return v0;
L_08A94C58:;
    a0 = LD32(a0);
    goto L_08A94C34;
L_08A94C60:;
    v0 = LD_U8(a2+1);
    v1 = LD_U8(a2);
    a2 = a2 + 2;
    v0 = v0 << 8;
    a0 = v0 | v1;
    goto L_08A94C10;
L_08A94C78:;
    a0 = a2 + 0;
    a1 = sp + 4;
    v0 = func_08A94B4C(a0, a1);
    goto L_08A94C84;
L_08A94C84:;
    a0 = LD32(sp+4);
    goto L_08A94C0C;
L_08A94C8C:;
    v0 = LD_U8(a2+1);
    v1 = LD_U8(a2);
    a2 = a2 + 2;
    v0 = v0 << 8;
    v0 = v0 | v1;
    a0 = (u32)(s32)(s16)v0;
    goto L_08A94C10;
L_08A94CA8:;
    a0 = LDU32(a2);
    a2 = a2 + 4;
    goto L_08A94C10;
L_08A94CB8:;
    v0 = LDU32(a2);
    a2 = a2 + 8;
    a0 = v0 + 0;
    goto L_08A94C10;
L_08A94CCC:;
    v0 = a2 + 3;
    v0 = (v0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a0 = LD32(v0);
    a2 = v0 + 4;
    goto L_08A94C34;
L_08A94CE0:;
    { rv_t r_ = func_08A96820(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    v0 = func_08A94CE8(a0, a1, a2); return v0;
}

/* 08A94CE8 */
u32 func_08A94CE8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A94CE8:;
    sp = sp - 48;
    v1 = 0 + 0;
    s3 = a2 + 4;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A94D24; }
    goto L_08A94D18;
L_08A94D18:;
    v0 = func_08A9B7BC(a0);
    goto L_08A94D20;
L_08A94D20:;
    v1 = v0 + 0;
    goto L_08A94D24;
L_08A94D24:;
    ST32(s2, v1);
    a1 = s1 + 0;
    v0 = 255;
    s1 = LD_U8(s0);
    s0 = s0 + 1;
    cnd_ = s1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08A94DE0; }
    goto L_08A94D40;
L_08A94D40:;
    v0 = func_08A94A70(a0, a1);
    goto L_08A94D48;
L_08A94D48:;
    a1 = v0 + 0;
    a2 = s0 + 0;
    a0 = s1 + 0;
    a3 = s3 + 0;
    v0 = func_08A94BA4(a0, a1, a2, a3);
    goto L_08A94D5C;
L_08A94D5C:;
    s0 = v0 + 0;
    goto L_08A94D60;
L_08A94D60:;
    v0 = LD_U8(s0);
    s0 = s0 + 1;
    a1 = sp + 0;
    v1 = v0 + 0;
    ST8(s2+20, v0);
    v0 = 255;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A94DD8; }
    goto L_08A94D80;
L_08A94D80:;
    v0 = func_08A94B18(a0, a1);
    goto L_08A94D88;
L_08A94D88:;
    s0 = v0 + 0;
    v0 = LD32(sp);
    v0 = s0 + v0;
    ST32(s2+12, v0);
    goto L_08A94D98;
L_08A94D98:;
    v0 = LD_U8(s0);
    s0 = s0 + 1;
    a0 = s0 + 0;
    ST8(s2+21, v0);
    a1 = sp + 0;
    v0 = func_08A94B18(a0, a1);
    goto L_08A94DB0;
L_08A94DB0:;
    v1 = LD32(sp);
    v1 = v0 + v1;
    ST32(s2+16, v1);
    sp = sp + 48;
    return v0;
L_08A94DD8:;
    ST32(s2+12, 0);
    goto L_08A94D98;
L_08A94DE0:;
    ST32(s2+4, v1);
    goto L_08A94D60;
}

/* 08A94DE8 */
u32 func_08A94DE8(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A94DE8:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD_U8(a0+20);
    v0 = func_08A94A00(a0);
    goto L_08A94E08;
L_08A94E08:;
    { s64 p_ = (s64)(s32)s1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = LD32(s0+12);
    a0 = LD_U8(s0+20);
    a1 = LD32(s0+8);
    a3 = sp + 0;
    s1 = lo;
    a2 = a2 - s1;
    v0 = func_08A94BA4(a0, a1, a2, a3);
    goto L_08A94E28;
L_08A94E28:;
    v0 = LD32(sp);
    sp = sp + 32;
    return v0;
}

/* 08A94E40 */
u32 func_08A94E40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A94E40:;
    sp = sp - 32;
    s2 = a2 + 0;
    s1 = a0 + 0;
    a0 = a1 + 0;
    v0 = LD32(a2);
    v1 = LD32(a1);
    ST32(sp, v0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94E78;
L_08A94E78:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = sp + 0;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A94E98; }
    goto L_08A94E8C;
L_08A94E8C:;
    v0 = LD32(sp);
    v1 = LD32(v0);
    ST32(sp, v1);
    goto L_08A94E98;
L_08A94E98:;
    v1 = LD32(s1);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A94EA8;
L_08A94EA8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A94EBC; }
    goto L_08A94EB0;
L_08A94EB0:;
    v0 = LD32(sp);
    v1 = 1;
    ST32(s2, v0);
    goto L_08A94EBC;
L_08A94EBC:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A94ED8 */
u32 func_08A94ED8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A94ED8:;
    sp = sp - 32;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+12);
    ST32(sp+4, a2);
    v0 = v0 - a3;
    s0 = v0 - 1;
    a0 = s0 + 0;
    goto L_08A94F08;
L_08A94F08:;
    a1 = sp + 0;
    v0 = func_08A94B18(a0, a1);
    goto L_08A94F10;
L_08A94F10:;
    s0 = v0 + 0;
    v0 = LD32(sp);
    a0 = s2 + 0;
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A94F4C; }
    goto L_08A94F28;
L_08A94F28:;
    v0 = func_08A94DE8(a0, a1);
    goto L_08A94F30;
L_08A94F30:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    a2 = sp + 4;
    v0 = func_08A94E40(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A94F40;
L_08A94F40:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08A94F08; }
    goto L_08A94F48;
L_08A94F48:;
    v1 = 1;
    goto L_08A94F4C;
L_08A94F4C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
}

/* 08A94F68 */
u32 func_08A94F68(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A94F68:;
    sp = sp - 32;
    v0 = a1 + 0;
    a1 = sp + 0;
    a0 = LD32(a0+12);
    a0 = a0 - v0;
    a0 = a0 - 1;
    v0 = func_08A94B18(a0, a1);
    goto L_08A94F88;
L_08A94F88:;
    v0 = LD32(sp);
    v0 = v0 < 0x1u;
    sp = sp + 32;
    return v0;
}

/* 08A94F9C */
void func_08A94F9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08A94F9C:;
    sp = sp - 128;
    v0 = t0 + 32;
    ST32(sp+56, v0);
    v0 = 1;
    v1 = 3;
    s7 = a1 + 0;
    s6 = t0 - 48;
    s5 = t1 + 0;
    s3 = a3 + 0;
    s2 = a2 + 0;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A950A8; }
    goto L_08A94FF0;
L_08A94FF0:;
    v0 = a1 ^ 0x6;
    v1 = 0x432b0000u;
    v0 = v0 < 0x1u;
    v1 = v1 | 0x2b00;
    a0 = v0 + 0;
    cnd_ = a2 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A9541C; }
    goto L_08A9500C;
L_08A9500C:;
    v0 = a0 & a1;
    goto L_08A95010;
L_08A95010:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_08A95130; }
    goto L_08A9501C;
L_08A9501C:;
    v0 = LD32(s6+36);
    v1 = LD32(s6+24);
    ST32(sp+68, v0);
    v0 = LD32(s6+32);
    ST32(sp+72, v1);
    v1 = LD32(sp+68);
    ST32(sp+60, v0);
    v0 = 3;
    if (v1 != 0) a0 = v0;
    v0 = 0x432b0000u;
    goto L_08A95044;
L_08A95044:;
    v0 = v0 | 0x2b00;
    a1 = (s7 >> 3) & 0x1;
    cnd_ = s2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A95118; }
    goto L_08A95054;
L_08A95054:;
    v1 = 1;
    goto L_08A95058;
L_08A95058:;
    v0 = v1 | a1;
    goto L_08A9505C;
L_08A9505C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A950E4; }
    goto L_08A95068;
L_08A95068:;
    cnd_ = a0 == v0;
    v1 = LD32(sp+72);
    if (cnd_) { goto L_08A95434; }
    goto L_08A95070;
L_08A95070:;
    cnd_ = (s32)v1 < 0;
    if (cnd_) { goto L_08A950DC; }
    goto L_08A95078;
L_08A95078:;
    a2 = s6 + 48;
    goto L_08A9507C;
L_08A9507C:;
    a1 = 4;
    a0 = s5 + 0;
    func_08A9D708(a0, a1, a2);
    goto L_08A95088;
L_08A95088:;
    a2 = LD32(sp+72);
    a0 = s5 + 0;
    a1 = 5;
    func_08A9D708(a0, a1, a2);
    goto L_08A95098;
L_08A95098:;
    a1 = LD32(sp+68);
    a0 = s5 + 0;
    func_08A9D724(a0, a1);
    goto L_08A950A4;
L_08A950A4:;
    v1 = 7;
    goto L_08A950A8;
L_08A950A8:;
    v0 = v1 + 0;
    sp = sp + 128;
    return;
L_08A950DC:;
    { u64 r_ = func_08A955C0(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A950E4;
L_08A950E4:;
    cnd_ = a0 == v0;
    v0 = LD32(sp+72);
    if (cnd_) { goto L_08A9545C; }
    goto L_08A950EC;
L_08A950EC:;
    cnd_ = (s32)v0 >= 0;
    a2 = s6 + 48;
    if (cnd_) { goto L_08A9507C; }
    goto L_08A950F4;
L_08A950F4:;
    a1 = LD32(sp+60);
    a0 = s5 + 0;
    a2 = sp + 0;
    v0 = func_08A94CE8(a0, a1, a2);
    goto L_08A95104;
L_08A95104:;
    a0 = LD_U8(sp+20);
    a1 = s5 + 0;
    v0 = func_08A94A70(a0, a1);
    goto L_08A95110;
L_08A95110:;
    ST32(s6+36, v0);
    goto L_08A95078;
L_08A95118:;
    v0 = 0x474e0000u;
    v0 = v0 | 0x5543;
    cnd_ = s3 != v0;
    if (cnd_) { v1 = 1; goto L_08A95058; }
    goto L_08A95128;
L_08A95128:;
    v0 = v1 | a1;
    goto L_08A9505C;
L_08A95130:;
    a0 = s5 + 0;
    v0 = func_08A9B7B4(a0);
    goto L_08A95138;
L_08A95138:;
    ST32(sp+60, v0);
    cnd_ = v0 == 0;
    v1 = 8;
    if (cnd_) { goto L_08A950A8; }
    goto L_08A95144;
L_08A95144:;
    a2 = sp + 0;
    a0 = s5 + 0;
    a1 = v0 + 0;
    v0 = func_08A94CE8(a0, a1, a2);
    goto L_08A95154;
L_08A95154:;
    a0 = LD_U8(sp+20);
    a1 = s5 + 0;
    s1 = v0 + 0;
    ST32(sp+68, 0);
    v0 = func_08A94A70(a0, a1);
    goto L_08A95168;
L_08A95168:;
    a0 = s5 + 0;
    ST32(sp+8, v0);
    v0 = func_08A9D71C(a0);
    goto L_08A95174;
L_08A95174:;
    s4 = v0 - 1;
    v0 = LD32(sp+16);
    ST32(sp+64, 0);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    ST32(sp+72, 0);
    if (cnd_) { goto L_08A95240; }
    goto L_08A9518C;
L_08A9518C:;
    fp = sp + 40;
    s0 = LD_U8(sp+21);
    goto L_08A95194;
L_08A95194:;
    a1 = 0 + 0;
    a0 = s0 + 0;
    v0 = func_08A94A70(a0, a1);
    goto L_08A951A0;
L_08A951A0:;
    a1 = v0 + 0;
    a2 = s1 + 0;
    a0 = s0 + 0;
    a3 = sp + 32;
    v0 = func_08A94BA4(a0, a1, a2, a3);
    goto L_08A951B4;
L_08A951B4:;
    s0 = LD_U8(sp+21);
    a1 = 0 + 0;
    s1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A94A70(a0, a1);
    goto L_08A951C8;
L_08A951C8:;
    a1 = v0 + 0;
    a2 = s1 + 0;
    a0 = s0 + 0;
    a3 = sp + 36;
    v0 = func_08A94BA4(a0, a1, a2, a3);
    goto L_08A951DC;
L_08A951DC:;
    s0 = LD_U8(sp+21);
    a1 = 0 + 0;
    s1 = v0 + 0;
    a0 = s0 + 0;
    v0 = func_08A94A70(a0, a1);
    goto L_08A951F0;
L_08A951F0:;
    a1 = v0 + 0;
    a2 = s1 + 0;
    a0 = s0 + 0;
    a3 = fp + 0;
    v0 = func_08A94BA4(a0, a1, a2, a3);
    goto L_08A95204;
L_08A95204:;
    a0 = v0 + 0;
    a1 = sp + 44;
    v0 = func_08A94B18(a0, a1);
    goto L_08A95210;
L_08A95210:;
    s1 = v0 + 0;
    a0 = LD32(sp);
    v0 = LD32(sp+32);
    a0 = a0 + v0;
    v1 = s4 < a0;
    cnd_ = v1 == 0;
    v0 = LD32(sp+36);
    if (cnd_) { goto L_08A952AC; }
    goto L_08A9522C;
L_08A9522C:;
    s1 = LD32(sp+16);
    v0 = s1 + 0;
    goto L_08A95234;
L_08A95234:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = LD_U8(sp+21);
    if (cnd_) { goto L_08A95194; }
    goto L_08A95240;
L_08A95240:;
    a0 = 1;
    goto L_08A95244;
L_08A95244:;
    v0 = s7 & 0x1;
    cnd_ = v0 == 0;
    v0 = 0x432b0000u;
    if (cnd_) { goto L_08A95044; }
    goto L_08A95250;
L_08A95250:;
    v0 = 2;
    cnd_ = a0 == v0;
    v1 = 8;
    if (cnd_) { goto L_08A950A8; }
    goto L_08A9525C;
L_08A9525C:;
    v0 = 0x432b0000u;
    v0 = v0 | 0x2b00;
    cnd_ = s2 == v0;
    v0 = 0x474e0000u;
    if (cnd_) { goto L_08A95274; }
    goto L_08A9526C;
L_08A9526C:;
    v1 = 6;
    goto L_08A950A8;
L_08A95274:;
    v0 = v0 | 0x5543;
    cnd_ = s3 != v0;
    if (cnd_) { v1 = 6; goto L_08A950A8; }
    goto L_08A95280;
L_08A95280:;
    v0 = LD32(sp+72);
    v1 = LD32(sp+68);
    ST32(s6+24, v0);
    v0 = LD32(sp+60);
    ST32(s6+36, v1);
    ST32(s6+32, v0);
    v1 = LD32(sp+64);
    v0 = LD32(sp+56);
    ST32(s6+28, v1);
    ST32(s6+40, v0);
    goto L_08A9526C;
L_08A952AC:;
    v0 = a0 + v0;
    v0 = s4 < v0;
    cnd_ = v0 == 0;
    v0 = LD32(sp+16);
    if (cnd_) { goto L_08A95234; }
    goto L_08A952BC;
L_08A952BC:;
    v1 = LD32(sp+40);
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(sp+44); goto L_08A952D8; }
    goto L_08A952C8;
L_08A952C8:;
    v0 = LD32(sp+4);
    v0 = v0 + v1;
    ST32(sp+68, v0);
    v1 = LD32(sp+44);
    goto L_08A952D8;
L_08A952D8:;
    cnd_ = v1 == 0;
    v0 = LD32(sp+68);
    if (cnd_) { goto L_08A952F4; }
    goto L_08A952E0;
L_08A952E0:;
    v0 = LD32(sp+16);
    v0 = v0 + v1;
    v0 = v0 - 1;
    ST32(sp+64, v0);
    v0 = LD32(sp+68);
    goto L_08A952F4;
L_08A952F4:;
    cnd_ = v0 == 0;
    v1 = 8;
    if (cnd_) { goto L_08A950A8; }
    goto L_08A952FC;
L_08A952FC:;
    v1 = LD32(sp+64);
    cnd_ = v1 == 0;
    a0 = 2;
    if (cnd_) { goto L_08A95244; }
    goto L_08A95308;
L_08A95308:;
    v0 = 0x432b0000u;
    v0 = v0 | 0x2b00;
    s4 = 0 + 0;
    v1 = (s7 >> 3) & 0x1;
    cnd_ = s2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A95404; }
    goto L_08A95320;
L_08A95320:;
    a0 = 1;
    goto L_08A95324;
L_08A95324:;
    v0 = a0 | v1;
    goto L_08A95328;
L_08A95328:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08A95338; }
    goto L_08A95334;
L_08A95334:;
    s0 = LD32(s6);
    goto L_08A95338;
L_08A95338:;
    a0 = LD32(sp+64);
    a1 = sp + 48;
    v0 = func_08A94B4C(a0, a1);
    goto L_08A95344;
L_08A95344:;
    a0 = v0 + 0;
    a1 = sp + 52;
    s1 = v0 + 0;
    v0 = func_08A94B4C(a0, a1);
    goto L_08A95354;
L_08A95354:;
    a1 = LD32(sp+48);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08A95388; }
    goto L_08A95360;
L_08A95360:;
    s4 = 1;
    goto L_08A95364;
L_08A95364:;
    v0 = LD32(sp+52);
    goto L_08A95368;
L_08A95368:;
    cnd_ = v0 == 0;
    s1 = s1 + v0;
    if (cnd_) { goto L_08A95378; }
    goto L_08A95370;
L_08A95370:;
    ST32(sp+64, s1);
    goto L_08A95338;
L_08A95378:;
    cnd_ = s4 != 0;
    a0 = 2;
    if (cnd_) { goto L_08A95244; }
    goto L_08A95380;
L_08A95380:;
    v1 = 8;
    goto L_08A950A8;
L_08A95388:;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_08A953CC; }
    goto L_08A95390;
L_08A95390:;
    a0 = sp + 0;
    v0 = func_08A94DE8(a0, a1);
    goto L_08A95398;
L_08A95398:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(sp+48); goto L_08A953C0; }
    goto L_08A953A0;
L_08A953A0:;
    cnd_ = s0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A95364; }
    goto L_08A953A8;
L_08A953A8:;
    a1 = s0 + 0;
    a2 = sp + 56;
    v0 = func_08A94E40(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A953B4;
L_08A953B4:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+52);
    if (cnd_) { goto L_08A95368; }
    goto L_08A953BC;
L_08A953BC:;
    v0 = LD32(sp+48);
    goto L_08A953C0;
L_08A953C0:;
    a0 = 3;
    ST32(sp+72, v0);
    goto L_08A95244;
L_08A953CC:;
    cnd_ = s0 == 0;
    a3 = a1 + 0;
    if (cnd_) { goto L_08A953F4; }
    goto L_08A953D4;
L_08A953D4:;
    a2 = LD32(sp+56);
    a0 = sp + 0;
    a1 = s0 + 0;
    v0 = func_08A94ED8(a0, a1, a2, a3);
    goto L_08A953E4;
L_08A953E4:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(sp+52); goto L_08A95368; }
    goto L_08A953EC;
L_08A953EC:;
    v0 = LD32(sp+48);
    goto L_08A953C0;
L_08A953F4:;
    a0 = sp + 0;
    v0 = func_08A94F68(a0, a1);
    goto L_08A953FC;
L_08A953FC:;
    goto L_08A953B4;
L_08A95404:;
    v0 = 0x474e0000u;
    v0 = v0 | 0x5543;
    cnd_ = s3 != v0;
    if (cnd_) { a0 = 1; goto L_08A95324; }
    goto L_08A95414;
L_08A95414:;
    v0 = a0 | v1;
    goto L_08A95328;
L_08A9541C:;
    v0 = 0x474e0000u;
    v0 = v0 | 0x5543;
    cnd_ = a3 == v0;
    if (cnd_) { a1 = 1; goto L_08A9500C; }
    goto L_08A9542C;
L_08A9542C:;
    v0 = a0 & a1;
    goto L_08A95010;
L_08A95434:;
    { rv_t r_ = func_08A95590(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9543C;
L_08A9543C:;
    { rv_t r_ = func_08A96550(0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95444;
L_08A95444:;
    { rv_t r_ = func_08A95590(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9544C;
L_08A9544C:;
    s0 = a0 + 0;
    { rv_t r_ = func_08A965F4(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95454;
L_08A95454:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A9D274(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9545C;
L_08A9545C:;
    a0 = s6 + 48;
    { rv_t r_ = func_08A96550(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95464;
L_08A95464:;
    a0 = LD32(s6+12);
    func_08A95568(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_08A9546C(a0, 0, 0, 0); return;
}

/* 08A9546C */
void func_08A9546C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A9546C:;
    sp = sp - 80;
    s0 = a0 + 0;
    s0 = s0 - 48;
    { rv_t r_ = func_08A96550(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95494;
L_08A95494:;
    v0 = LD32(s0+36);
    s3 = LD32(s0+24);
    a0 = LD32(s0+8);
    s1 = LD32(s0+32);
    s4 = LD32(s0+12);
    ST32(sp+24, v0);
    { u64 r_ = func_08A955A8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A954B0;
L_08A954B0:;
    { rv_t r_ = func_08A96550(0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A954B8;
L_08A954B8:;
    { u64 r_ = func_08A967A0(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A954C0;
L_08A954C0:;
    s0 = LD32(v0);
    s2 = sp + 16;
    a1 = s1 + 0;
    a0 = 0 + 0;
    s1 = s0 + 80;
    a2 = s2 + 0;
    v0 = func_08A94CE8(a0, a1, a2);
    goto L_08A954DC;
L_08A954DC:;
    a1 = LD32(s0);
    a2 = s1 + 0;
    a0 = s2 + 0;
    a3 = s3 + 0;
    v0 = func_08A94ED8(a0, a1, a2, a3);
    goto L_08A954F0;
L_08A954F0:;
    cnd_ = v0 != 0;
    v0 = D_08B159B8 - (22968);
    if (cnd_) { goto L_08A95548; }
    goto L_08A954F8;
L_08A954F8:;
    s0 = v0 + 22968;
    a0 = s2 + 0;
    a3 = s3 + 0;
    a1 = s0 + 0;
    a2 = 0 + 0;
    v0 = func_08A94ED8(a0, a1, a2, a3);
    goto L_08A95510;
L_08A95510:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A95540; }
    goto L_08A95518;
L_08A95518:;
    a0 = 4;
    { u64 r_ = func_08A948A0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A95520;
L_08A95520:;
    v1 = D_08B15988 - (22920);
    v1 = v1 + 22920;
    ST32(v0, v1);
    a2 = ((u32)(uintptr_t)func_08A966F4) - (26356);
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = a2 + 26356;
    { u64 r_ = func_08A9562C(a0, a1, a2, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A95540;
L_08A95540:;
    a0 = s4 + 0;
    func_08A95568(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08A95548;
L_08A95548:;
    func_08A956AC(0, 0, 0);
    goto L_08A95550;
L_08A95550:;
    s0 = a0 + 0;
    { rv_t r_ = func_08A965F4(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95558;
L_08A95558:;
    { rv_t r_ = func_08A965F4(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95560;
L_08A95560:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A9D274(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    func_08A95568(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); return;
}

/* 08A95568 */
void func_08A95568(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A95568:;
    sp = sp - 16;
    t_ = a0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95578;
L_08A95578:;
    { rv_t r_ = func_08A96820(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95580;
L_08A95580:;
    { rv_t r_ = func_08A96550(0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95588;
L_08A95588:;
    goto L_08A95578;
}

/* 08A95590 */
rv_t func_08A95590(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A95590:;
    v0 = D_08B1E43C - (-7108);
    a0 = LD32(v0-7108);
    sp = sp - 16;
    func_08A95568(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    { u64 r_ = func_08A955A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return (rv_t){ v0, v1, f0 };
}

/* 08A955A8 */
u64 func_08A955A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A955A8:;
    sp = sp - 16;
    t_ = a0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A955B8;
L_08A955B8:;
    { rv_t r_ = func_08A95590(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { u64 r_ = func_08A955C0(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return (u64)v0 | ((u64)v1 << 32);
}

/* 08A955C0 */
u64 func_08A955C0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A955C0:;
    v0 = D_08B1E440 - (-7104);
    a0 = LD32(v0-7104);
    sp = sp - 16;
    { u64 r_ = func_08A955A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    { rv_t r_ = func_08A955D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (u64)v0 | ((u64)v1 << 32);
}

/* 08A955D8 */
rv_t func_08A955D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A955D8:;
    sp = sp - 16;
    a0 = a0 < 0x2u;
    v0 = a1 - 48;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08A95624; }
    goto L_08A955F0;
L_08A955F0:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    s0 = a1 + 32;
    if (cnd_) { goto L_08A95614; }
    goto L_08A955FC;
L_08A955FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94974(a0, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A95604;
L_08A95604:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A95614:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9561C;
L_08A9561C:;
    goto L_08A955FC;
L_08A95624:;
    a0 = LD32(v0+12);
    func_08A95568(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    { u64 r_ = func_08A9562C(a0, a1, a2, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return (rv_t){ v0, v1, f0 };
}

/* 08A9562C */
u64 func_08A9562C(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9562C:;
    sp = sp - 16;
    v0 = D_08B1E440 - (-7104);
    v1 = D_08B1E43C - (-7108);
    a3 = a0 - 80;
    s0 = a0 - 32;
    t1 = LD32(v0-7104);
    t0 = LD32(v1-7108);
    v0 = ((u32)(uintptr_t)func_08A955D8) - (21976);
    v0 = v0 + 21976;
    ST32(a3+56, v0);
    v0 = 0x432b0000u;
    v0 = v0 | 0x2b00;
    v1 = 0x474e0000u;
    v1 = v1 | 0x5543;
    ST32(a0-80, a1);
    ST32(a3+48, v0);
    ST32(a3+52, v1);
    ST32(a3+4, a2);
    ST32(a3+8, t1);
    ST32(a3+12, t0);
    v0 = func_08A967C0(t1, t2, t3);
    goto L_08A95688;
L_08A95688:;
    v1 = LD32(v0+4);
    a0 = s0 + 0;
    v1 = v1 + 1;
    ST32(v0+4, v1);
    { rv_t r_ = func_08A9CD8C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9569C;
L_08A9569C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A96550(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A956A4;
L_08A956A4:;
    { rv_t r_ = func_08A95590(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    func_08A956AC(0, 0, 0); return (u64)v0 | ((u64)v1 << 32);
}

/* 08A956AC */
void func_08A956AC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A956AC:;
    sp = sp - 16;
    v0 = func_08A967C0(t1, t2, t3);
    goto L_08A956C0;
L_08A956C0:;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08A956F8; }
    goto L_08A956CC;
L_08A956CC:;
    v1 = LD32(s0+48);
    v0 = 0x432b0000u;
    v0 = v0 | 0x2b00;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s0+52); goto L_08A95700; }
    goto L_08A956E0;
L_08A956E0:;
    ST32(a0, 0);
    goto L_08A956E4;
L_08A956E4:;
    s0 = s0 + 48;
    a0 = s0 + 0;
    { rv_t r_ = func_08A9D404(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A956F0;
L_08A956F0:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A96550(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A956F8;
L_08A956F8:;
    { rv_t r_ = func_08A95590(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95700;
L_08A95700:;
    v0 = 0x474e0000u;
    v0 = v0 | 0x5543;
    cnd_ = v1 != v0;
    if (cnd_) { ST32(a0, 0); goto L_08A956E4; }
    goto L_08A95710;
L_08A95710:;
    v0 = LD32(s0+20);
    v0 = 0 - v0;
    ST32(s0+20, v0);
    goto L_08A956E4;
}

/* 08A95720 */
rv_t func_08A95720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A95720:;
    v0 = D_08B15830 - (22576);
    v0 = v0 + 22576;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08A966AC(a0);
    goto L_08A9573C;
L_08A9573C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A95748 */
rv_t func_08A95748(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A95748:;
    v0 = D_08B15830 - (22576);
    v0 = v0 + 22576;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A966AC(a0);
    goto L_08A95768;
L_08A95768:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A95770;
L_08A95770:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A95780 */
u32 func_08A95780(u32 a0)
{
    u32 v0 = 0;
L_08A95780:;
    v0 = D_08B158E0 - (22752);
    v0 = v0 + 22752;
    ST32(a0, v0);
    return v0;
}

/* 08A95790 */
rv_t func_08A95790(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A95790:;
    v0 = D_08B158E0 - (22752);
    v0 = v0 + 22752;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08A957A0 */
rv_t func_08A957A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A957A0:;
    v0 = D_08B158E0 - (22752);
    v0 = v0 + 22752;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A957BC;
L_08A957BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A957C8 */
rv_t func_08A957C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A957C8:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A957D0 */
rv_t func_08A957D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A957D0:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A957D8 */
rv_t func_08A957D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A957D8:;
    v0 = LD32(a0+4);
    v1 = LD32(a1+4);
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 08A957EC */
rv_t func_08A957EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A957EC:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A957F4 */
u32 func_08A957F4(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A957F4:;
    v0 = D_08B158A0 - (22688);
    v0 = v0 + 22688;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08A95780(a0);
    goto L_08A95810;
L_08A95810:;
    sp = sp + 16;
    return v0;
}

/* 08A9581C */
rv_t func_08A9581C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9581C:;
    v0 = D_08B158A0 - (22688);
    v0 = v0 + 22688;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08A95780(a0);
    goto L_08A95838;
L_08A95838:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A95844 */
rv_t func_08A95844(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A95844:;
    v0 = D_08B158A0 - (22688);
    v0 = v0 + 22688;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A95780(a0);
    goto L_08A95864;
L_08A95864:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9586C;
L_08A9586C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9587C */
rv_t func_08A9587C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9587C:;
    v0 = D_08B15870 - (22640);
    v0 = v0 + 22640;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08A957F4(a0);
    goto L_08A95898;
L_08A95898:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A958A4 */
rv_t func_08A958A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A958A4:;
    v0 = D_08B15870 - (22640);
    v0 = v0 + 22640;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A957F4(a0);
    goto L_08A958C4;
L_08A958C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A958CC;
L_08A958CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A958DC */
rv_t func_08A958DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A958DC:;
    sp = sp - 16;
    t1 = a1 + 0;
    a3 = a3 < 0x4u;
    v1 = LD32(a0+4);
    v0 = LD32(t1+4);
    a1 = a0 + 0;
    cnd_ = v1 == v0;
    t0 = 1;
    if (cnd_) { goto L_08A9590C; }
    goto L_08A95900;
L_08A95900:;
    a0 = t1 + 0;
    cnd_ = a3 != 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08A9591C; }
    goto L_08A9590C;
L_08A9590C:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A9591C:;
    v1 = LD32(t1);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9592C;
L_08A9592C:;
    t0 = v0 + 0;
    goto L_08A9590C;
}

/* 08A95934 */
rv_t func_08A95934(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A95934:;
    sp = sp - 32;
    v0 = 16;
    s0 = a2 + 0;
    a3 = sp + 0;
    v1 = LD32(a0);
    ST32(sp, 0);
    ST32(sp+8, v0);
    ST32(sp+4, 0);
    v0 = LD32(v1+24);
    ST32(sp+12, 0);
    t_ = v0;
    a2 = LD32(a2);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9596C;
L_08A9596C:;
    v0 = LD32(sp+4);
    v0 = v0 & 0x6;
    v0 = v0 ^ 0x6;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08A9598C; }
    goto L_08A95980;
L_08A95980:;
    v0 = LD32(sp);
    v1 = 1;
    ST32(s0, v0);
    goto L_08A9598C;
L_08A9598C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08A959A0 */
rv_t func_08A959A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A959A0:;
    t0 = t0 ^ a2;
    v1 = 1;
    v0 = 6;
    if (t0 != 0) v0 = v1;
    return (rv_t){ v0, v1, f0 };
}

/* 08A959B4 */
rv_t func_08A959B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A959B4:;
    sp = sp - 16;
    cnd_ = t0 == a2;
    if (cnd_) { goto L_08A959EC; }
    goto L_08A959C0;
L_08A959C0:;
    v0 = LD32(a0+8);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A959D8;
L_08A959D8:;
    t1 = v0 + 0;
    goto L_08A959E0;
L_08A959E0:;
    v0 = t1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A959EC:;
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    cnd_ = v1 != v0;
    t1 = 6;
    if (cnd_) { goto L_08A959C0; }
    goto L_08A959FC;
L_08A959FC:;
    goto L_08A959E0;
}

/* 08A95A04 */
void func_08A95A04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A95A04:;
    sp = sp - 48;
    s7 = a3 + 0;
    s6 = t0 + 0;
    s5 = a1 + 0;
    s3 = a2 + 0;
    cnd_ = a2 == t0;
    if (cnd_) { goto L_08A95B20; }
    goto L_08A95A44;
L_08A95A44:;
    s0 = LD32(a0+12);
    v0 = (u32)-1;
    s0 = s0 - 1;
    cnd_ = s0 == v0;
    v0 = s0 << 3;
    if (cnd_) { goto L_08A95A80; }
    goto L_08A95A58;
L_08A95A58:;
    s1 = v0 + a0;
    fp = (u32)-3;
    s4 = (u32)-1;
    goto L_08A95A64;
L_08A95A64:;
    v1 = LD32(s1+20);
    s0 = s0 - 1;
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    s2 = v1 & 0x1;
    if (cnd_) { goto L_08A95AB8; }
    goto L_08A95A78;
L_08A95A78:;
    cnd_ = s0 != s4;
    s1 = s1 - 8;
    if (cnd_) { goto L_08A95A64; }
    goto L_08A95A80;
L_08A95A80:;
    a1 = 1;
    goto L_08A95A88;
L_08A95A88:;
    v0 = a1 + 0;
    sp = sp + 48;
    return;
L_08A95AB8:;
    v0 = (u32)((s32)v1 >> 8);
    a1 = s5 + 0;
    a3 = s7 + 0;
    t0 = s6 + 0;
    cnd_ = s2 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A95AD8; }
    goto L_08A95AD0;
L_08A95AD0:;
    cnd_ = s5 == fp;
    if (cnd_) { goto L_08A95A78; }
    goto L_08A95AD8;
L_08A95AD8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1+16); goto L_08A95AF0; }
    goto L_08A95AE0;
L_08A95AE0:;
    v0 = LD32(s3);
    v0 = v0 + v1;
    v1 = LD32(v0);
    v0 = LD32(s1+16);
    goto L_08A95AF0;
L_08A95AF0:;
    a2 = s3 + v1;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95B08;
L_08A95B08:;
    v1 = (s32)v0 < 4;
    v1 = v1 ^ 0x1;
    cnd_ = v1 == 0;
    a1 = v0 | s2;
    if (cnd_) { goto L_08A95A78; }
    goto L_08A95B18;
L_08A95B18:;
    goto L_08A95A88;
L_08A95B20:;
    v1 = LD32(a0+4);
    v0 = LD32(a3+4);
    cnd_ = v1 != v0;
    a1 = 6;
    if (cnd_) { goto L_08A95A44; }
    goto L_08A95B30;
L_08A95B30:;
    goto L_08A95A88;
}

/* 08A95B38 */
rv_t func_08A95B38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A95B38:;
    cnd_ = t0 == t2;
    a0 = LD32(a0+4);
    if (cnd_) { goto L_08A95B64; }
    goto L_08A95B40;
L_08A95B40:;
    v0 = LD32(a3+4);
    goto L_08A95B44;
L_08A95B44:;
    cnd_ = a0 != v0;
    if (cnd_) { goto L_08A95B5C; }
    goto L_08A95B4C;
L_08A95B4C:;
    v0 = 1;
    ST32(t3+12, v0);
    ST32(t3, t0);
    ST32(t3+4, a2);
    goto L_08A95B5C;
L_08A95B5C:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
L_08A95B64:;
    v0 = LD32(t1+4);
    cnd_ = a0 != v0;
    if (cnd_) { v0 = LD32(a3+4); goto L_08A95B44; }
    goto L_08A95B70;
L_08A95B70:;
    ST32(t3+8, a2);
    goto L_08A95B5C;
}

/* 08A95B78 */
rv_t func_08A95B78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A95B78:;
    sp = sp - 16;
    v0 = LD32(a3+4);
    v1 = LD32(a0+4);
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A95BDC; }
    goto L_08A95B90;
L_08A95B90:;
    ST32(t3+4, a2);
    cnd_ = (s32)a1 < 0;
    ST32(t3, t0);
    if (cnd_) { goto L_08A95BC4; }
    goto L_08A95B9C;
L_08A95B9C:;
    v0 = t0 + a1;
    v0 = v0 ^ t2;
    v1 = 6;
    a0 = 1;
    if (v0 != 0) v1 = a0;
    ST32(t3+12, v1);
    goto L_08A95BB4;
L_08A95BB4:;
    v0 = 0 + 0;
    goto L_08A95BB8;
L_08A95BB8:;
    goto L_08A95BBC;
L_08A95BBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A95BC4:;
    v0 = (u32)-2;
    cnd_ = a1 != v0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A95BB8; }
    goto L_08A95BD0;
L_08A95BD0:;
    v0 = 1;
    ST32(t3+12, v0);
    goto L_08A95BB4;
L_08A95BDC:;
    cnd_ = t0 == t2;
    if (cnd_) { v0 = LD32(t1+4); goto L_08A95C00; }
    goto L_08A95BE4;
L_08A95BE4:;
    a0 = LD32(a0+8);
    goto L_08A95BE8;
L_08A95BE8:;
    v1 = LD32(a0);
    v0 = LD32(v1+28);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95BF8;
L_08A95BF8:;
    goto L_08A95BBC;
L_08A95C00:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = LD32(a0+8); goto L_08A95BE8; }
    goto L_08A95C08;
L_08A95C08:;
    v0 = 0 + 0;
    ST32(t3+8, a2);
    goto L_08A95BB8;
}

/* 08A95C14 */
void func_08A95C14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08A95C14:;
    sp = sp - 112;
    fp = t0 + 0;
    s7 = t2 + 0;
    s6 = a1 + 0;
    s1 = t3 + 0;
    v0 = LD32(t3+16);
    ST32(sp+32, a0);
    v0 = v0 & 0x10;
    ST32(sp+36, a2);
    ST32(sp+40, a3);
    cnd_ = v0 == 0;
    ST32(sp+44, t1);
    if (cnd_) { goto L_08A95C74; }
    goto L_08A95C6C;
L_08A95C6C:;
    v0 = LD32(a0+8);
    ST32(t3+16, v0);
    goto L_08A95C74;
L_08A95C74:;
    cnd_ = fp == s7;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_08A960BC; }
    goto L_08A95C7C;
L_08A95C7C:;
    v1 = LD32(v0+4);
    a0 = LD32(sp+40);
    goto L_08A95C84;
L_08A95C84:;
    v0 = LD32(a0+4);
    cnd_ = v1 != v0;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_08A95D08; }
    goto L_08A95C90;
L_08A95C90:;
    a1 = LD32(sp+36);
    ST32(s1, fp);
    cnd_ = (s32)s6 < 0;
    ST32(s1+4, a1);
    if (cnd_) { goto L_08A95CF0; }
    goto L_08A95CA0;
L_08A95CA0:;
    v0 = fp + s6;
    v0 = v0 ^ s7;
    v1 = 6;
    a0 = 1;
    if (v0 != 0) v1 = a0;
    ST32(s1+12, v1);
    a0 = 0 + 0;
    goto L_08A95CBC;
L_08A95CBC:;
    goto L_08A95CC0;
L_08A95CC0:;
    v0 = a0 + 0;
    sp = sp + 112;
    return;
L_08A95CF0:;
    v0 = (u32)-2;
    cnd_ = s6 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A95CBC; }
    goto L_08A95CFC;
L_08A95CFC:;
    v0 = 1;
    ST32(s1+12, v0);
    goto L_08A95CBC;
L_08A95D08:;
    ST32(sp+48, 0);
    s4 = LD32(v0+12);
    v0 = (u32)-1;
    s4 = s4 - 1;
    cnd_ = s4 == v0;
    v1 = LD32(sp+32);
    if (cnd_) { goto L_08A95E44; }
    goto L_08A95D20;
L_08A95D20:;
    v0 = s4 << 3;
    v0 = v0 + v1;
    s5 = v0 + 16;
    goto L_08A95D2C;
L_08A95D2C:;
    v1 = LD32(s5+4);
    a0 = LD32(s1+16);
    a1 = LD32(sp+36);
    v0 = v1 & 0x1;
    ST32(sp, 0);
    a2 = a1 | v0;
    t0 = (u32)((s32)v1 >> 8);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    cnd_ = v0 == 0;
    ST32(sp+16, a0);
    if (cnd_) { goto L_08A95D68; }
    goto L_08A95D5C;
L_08A95D5C:;
    v0 = LD32(fp);
    v0 = v0 + t0;
    t0 = LD32(v0);
    goto L_08A95D68;
L_08A95D68:;
    v0 = (v1 >> 1) & 0x1;
    cnd_ = v0 != 0;
    t0 = fp + t0;
    if (cnd_) { goto L_08A95D84; }
    goto L_08A95D74;
L_08A95D74:;
    v0 = (u32)-2;
    cnd_ = s6 == v0;
    v0 = a0 & 0x3;
    if (cnd_) { goto L_08A960AC; }
    goto L_08A95D80;
L_08A95D80:;
    a2 = (a2 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_08A95D84;
L_08A95D84:;
    a0 = LD32(s5);
    a3 = LD32(sp+40);
    t1 = LD32(sp+44);
    v1 = LD32(a0);
    a1 = s6 + 0;
    t2 = s7 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    t3 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95DA8;
L_08A95DA8:;
    s0 = LD32(sp+12);
    a1 = LD32(s1+8);
    a3 = v0 + 0;
    v0 = LD32(sp+8);
    a0 = s0 ^ 0x6;
    v1 = s0 ^ 0x2;
    a0 = a0 < 0x1u;
    v1 = v1 < 0x1u;
    a1 = a1 | v0;
    a0 = a0 | v1;
    cnd_ = a0 != 0;
    ST32(s1+8, a1);
    if (cnd_) { goto L_08A96090; }
    goto L_08A95DD8;
L_08A95DD8:;
    v1 = LD32(sp+48);
    cnd_ = v1 != 0;
    a2 = LD32(s1);
    if (cnd_) { goto L_08A96080; }
    goto L_08A95DE4;
L_08A95DE4:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(sp); goto L_08A95E4C; }
    goto L_08A95DEC;
L_08A95DEC:;
    v1 = LD32(sp);
    v0 = LD32(sp+4);
    ST32(sp+48, a3);
    ST32(s1, v1);
    cnd_ = v1 == 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08A95E24; }
    goto L_08A95E04;
L_08A95E04:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08A95E28; }
    goto L_08A95E0C;
L_08A95E0C:;
    a0 = LD32(sp+32);
    v0 = LD_U8(a0+8);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_08A95CBC; }
    goto L_08A95E24;
L_08A95E24:;
    v1 = LD32(s1+8);
    goto L_08A95E28;
L_08A95E28:;
    v0 = 4;
    cnd_ = v1 == v0;
    a0 = LD32(sp+48);
    if (cnd_) { goto L_08A95CBC; }
    goto L_08A95E34;
L_08A95E34:;
    s4 = s4 - 1;
    goto L_08A95E38;
L_08A95E38:;
    v0 = (u32)-1;
    cnd_ = s4 != v0;
    s5 = s5 - 8;
    if (cnd_) { goto L_08A95D2C; }
    goto L_08A95E44;
L_08A95E44:;
    a0 = LD32(sp+48);
    goto L_08A95CBC;
L_08A95E4C:;
    cnd_ = a2 == a0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08A96070; }
    goto L_08A95E54;
L_08A95E54:;
    v0 = 0 < a2;
    goto L_08A95E58;
L_08A95E58:;
    v1 = 0 < a0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08A95E90; }
    goto L_08A95E68;
L_08A95E68:;
    cnd_ = a2 == 0;
    v0 = a3 & 0x1;
    if (cnd_) { goto L_08A95E78; }
    goto L_08A95E70;
L_08A95E70:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08A95E90; }
    goto L_08A95E78;
L_08A95E78:;
    cnd_ = a0 == 0;
    v1 = LD32(s1+8);
    if (cnd_) { goto L_08A95E28; }
    goto L_08A95E80;
L_08A95E80:;
    a1 = LD32(sp+48);
    v0 = a1 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A95E28; }
    goto L_08A95E90;
L_08A95E90:;
    s3 = s0 + 0;
    v0 = (s32)v1 < 4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    s2 = LD32(s1+12);
    if (cnd_) { goto L_08A95F60; }
    goto L_08A95EA4;
L_08A95EA4:;
    v0 = v1 & 0x1;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A95EC0; }
    goto L_08A95EB0;
L_08A95EB0:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A95F60; }
    goto L_08A95EC0;
L_08A95EC0:;
    cnd_ = s3 != 0;
    if (s2 == 0) s2 = v0;
    if (cnd_) { goto L_08A95ECC; }
    goto L_08A95EC8;
L_08A95EC8:;
    s3 = 1;
    goto L_08A95ECC;
L_08A95ECC:;
    v0 = s3 ^ s2;
    goto L_08A95ED0;
L_08A95ED0:;
    v0 = (s32)v0 < 4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = s3 & s2;
    if (cnd_) { goto L_08A95F2C; }
    goto L_08A95EE0;
L_08A95EE0:;
    v0 = (s32)s3 < 4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = (s2 >> 1) & 0x1;
    if (cnd_) { goto L_08A95F0C; }
    goto L_08A95EF0;
L_08A95EF0:;
    v0 = LD32(sp);
    ST32(sp+48, 0);
    s2 = s3 + 0;
    ST32(s1, v0);
    v0 = LD32(sp+4);
    ST32(s1+4, v0);
    v0 = (s2 >> 1) & 0x1;
    goto L_08A95F0C;
L_08A95F0C:;
    ST32(s1+12, s2);
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A95CBC; }
    goto L_08A95F18;
L_08A95F18:;
    v0 = s2 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+8); goto L_08A95E28; }
    goto L_08A95F24;
L_08A95F24:;
    goto L_08A95CC0;
L_08A95F2C:;
    v0 = (s32)v0 < 4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08A95F4C; }
    goto L_08A95F3C;
L_08A95F3C:;
    ST32(s1+12, v0);
    ST32(sp+48, v0);
    ST32(s1, 0);
    goto L_08A95E24;
L_08A95F4C:;
    v0 = 2;
    a0 = 1;
    ST32(s1+12, v0);
    ST32(s1, 0);
    goto L_08A95CBC;
L_08A95F60:;
    cnd_ = (s32)s2 <= 0;
    v0 = (s32)s0 < 4;
    if (cnd_) { goto L_08A95FF4; }
    goto L_08A95F68;
L_08A95F68:;
    cnd_ = (s32)s0 > 0;
    v0 = s3 ^ s2;
    if (cnd_) { goto L_08A95ED0; }
    goto L_08A95F70;
L_08A95F70:;
    v0 = (s32)s2 < 4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = s2 & 0x1;
    if (cnd_) { goto L_08A95F9C; }
    goto L_08A95F80;
L_08A95F80:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = 1; goto L_08A95ECC; }
    goto L_08A95F88;
L_08A95F88:;
    v1 = LD32(sp+32);
    v0 = LD32(v1+8);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = 1; goto L_08A95ECC; }
    goto L_08A95F9C;
L_08A95F9C:;
    cnd_ = (s32)s6 < 0;
    a2 = LD32(sp);
    if (cnd_) { goto L_08A95FC0; }
    goto L_08A95FA4;
L_08A95FA4:;
    v0 = a2 + s6;
    v0 = v0 ^ s7;
    a0 = 6;
    v1 = 1;
    if (v0 != 0) a0 = v1;
    goto L_08A95FB8;
L_08A95FB8:;
    s3 = a0 + 0;
    goto L_08A95ECC;
L_08A95FC0:;
    a1 = (u32)-2;
    cnd_ = s6 == a1;
    a0 = 1;
    if (cnd_) { goto L_08A95FB8; }
    goto L_08A95FCC;
L_08A95FCC:;
    v0 = LD32(sp+40);
    a3 = LD32(sp+44);
    a1 = s6 + 0;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    t0 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A95FEC;
L_08A95FEC:;
    a0 = v0 + 0;
    goto L_08A95FB8;
L_08A95FF4:;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = s0 & 0x1;
    if (cnd_) { goto L_08A9601C; }
    goto L_08A96000;
L_08A96000:;
    cnd_ = v0 == 0;
    s2 = 1;
    if (cnd_) { goto L_08A95F68; }
    goto L_08A96008;
L_08A96008:;
    v1 = LD32(sp+32);
    v0 = LD32(v1+8);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A95F68; }
    goto L_08A9601C;
L_08A9601C:;
    cnd_ = (s32)s6 < 0;
    v0 = a2 + s6;
    if (cnd_) { goto L_08A9603C; }
    goto L_08A96024;
L_08A96024:;
    v0 = v0 ^ s7;
    a0 = 6;
    v1 = 1;
    if (v0 != 0) a0 = v1;
    goto L_08A96034;
L_08A96034:;
    s2 = a0 + 0;
    goto L_08A95F68;
L_08A9603C:;
    a1 = (u32)-2;
    cnd_ = s6 == a1;
    a0 = 1;
    if (cnd_) { goto L_08A96034; }
    goto L_08A96048;
L_08A96048:;
    v0 = LD32(sp+40);
    a3 = LD32(sp+44);
    a1 = s6 + 0;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    t0 = s7 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A96068;
L_08A96068:;
    a0 = v0 + 0;
    goto L_08A96034;
L_08A96070:;
    v1 = LD32(sp+4);
    v0 = v0 | v1;
    ST32(s1+4, v0);
    goto L_08A95E24;
L_08A96080:;
    cnd_ = a2 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08A95E4C; }
    goto L_08A96088;
L_08A96088:;
    v0 = 0 < a2;
    goto L_08A95E58;
L_08A96090:;
    v0 = LD32(sp);
    v1 = LD32(sp+4);
    a0 = a3 + 0;
    ST32(s1+12, s0);
    ST32(s1, v0);
    ST32(s1+4, v1);
    goto L_08A95CBC;
L_08A960AC:;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s4 - 1; goto L_08A95E38; }
    goto L_08A960B4;
L_08A960B4:;
    a2 = (a2 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_08A95D84;
L_08A960BC:;
    a0 = LD32(sp+44);
    v1 = LD32(v0+4);
    v0 = LD32(a0+4);
    cnd_ = v1 != v0;
    if (cnd_) { a0 = LD32(sp+40); goto L_08A95C84; }
    goto L_08A960D0;
L_08A960D0:;
    a1 = LD32(sp+36);
    a0 = 0 + 0;
    ST32(s1+8, a1);
    goto L_08A95CBC;
}

/* 08A960E0 */
rv_t func_08A960E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08A960E0:;
    v1 = LD32(a0+4);
    v0 = LD32(a1+4);
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A96108; }
    goto L_08A960F0;
L_08A960F0:;
    v0 = 6;
    ST32(a3+4, v0);
    v0 = 8;
    a0 = 1;
    ST32(a3, a2);
    ST32(a3+12, v0);
    goto L_08A96108;
L_08A96108:;
    v0 = a0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08A96110 */
rv_t func_08A96110(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A96110:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08A960E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9613C;
L_08A9613C:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_08A96170; }
    goto L_08A96150;
L_08A96150:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08A96170:;
    v0 = LD32(s3+8);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A96188;
L_08A96188:;
    v1 = v0 + 0;
    goto L_08A96150;
}

/* 08A96190 */
void func_08A96190(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08A96190:;
    sp = sp - 80;
    fp = a1 + 0;
    s7 = a2 + 0;
    s6 = a0 + 0;
    s2 = a3 + 0;
    { rv_t r_ = func_08A960E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A961D0;
L_08A961D0:;
    cnd_ = v0 != 0;
    a3 = 1;
    if (cnd_) { goto L_08A96258; }
    goto L_08A961D8;
L_08A961D8:;
    s5 = LD32(s2+8);
    v0 = s5 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { s5 = LD32(s6+8); goto L_08A961E8; }
    goto L_08A961E8;
L_08A961E8:;
    s0 = LD32(s6+12);
    v0 = (u32)-1;
    s0 = s0 - 1;
    cnd_ = s0 == v0;
    v0 = s5 ^ 0x1;
    if (cnd_) { goto L_08A96250; }
    goto L_08A961FC;
L_08A961FC:;
    v0 = v0 & 0x1;
    ST32(sp+16, v0);
    v1 = s0 << 3;
    s1 = v1 + s6;
    goto L_08A9620C;
L_08A9620C:;
    v0 = LD32(s1+20);
    ST32(sp, 0);
    a2 = s7 + 0;
    s4 = (v0 >> 1) & 0x1;
    ST32(sp+4, 0);
    v1 = (u32)((s32)v0 >> 8);
    s3 = v0 & 0x1;
    ST32(sp+8, s5);
    cnd_ = s4 != 0;
    ST32(sp+12, 0);
    if (cnd_) { goto L_08A9628C; }
    goto L_08A96234;
L_08A96234:;
    v0 = LD32(sp+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A9628C; }
    goto L_08A96240;
L_08A96240:;
    s0 = s0 - 1;
    goto L_08A96244;
L_08A96244:;
    v0 = (u32)-1;
    cnd_ = s0 != v0;
    s1 = s1 - 8;
    if (cnd_) { goto L_08A9620C; }
    goto L_08A96250;
L_08A96250:;
    v0 = LD32(s2+4);
    a3 = 0 < v0;
    goto L_08A96258;
L_08A96258:;
    goto L_08A9625C;
L_08A9625C:;
    v0 = a3 + 0;
    sp = sp + 80;
    return;
L_08A9628C:;
    cnd_ = a2 == 0;
    if (cnd_) { a0 = LD32(s1+16); goto L_08A962B0; }
    goto L_08A96294;
L_08A96294:;
    cnd_ = s3 == 0;
    if (cnd_) { a2 = a2 + v1; goto L_08A962AC; }
    goto L_08A9629C;
L_08A9629C:;
    v0 = LD32(a2);
    v0 = v0 + v1;
    v1 = LD32(v0);
    a2 = a2 + v1;
    goto L_08A962AC;
L_08A962AC:;
    a0 = LD32(s1+16);
    goto L_08A962B0;
L_08A962B0:;
    a1 = fp + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    a3 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A962C4;
L_08A962C4:;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = s0 - 1; goto L_08A96244; }
    goto L_08A962CC;
L_08A962CC:;
    v1 = LD32(sp+12);
    v0 = 8;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08A963F0; }
    goto L_08A962DC;
L_08A962DC:;
    v1 = LD32(sp+4);
    goto L_08A962E0;
L_08A962E0:;
    v0 = (s32)v1 < 4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+12); goto L_08A96304; }
    goto L_08A962F0;
L_08A962F0:;
    cnd_ = s4 != 0;
    if (cnd_) { a0 = LD32(s2+12); goto L_08A96304; }
    goto L_08A962F8;
L_08A962F8:;
    v1 = (v1 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(sp+4, v1);
    a0 = LD32(s2+12);
    goto L_08A96304;
L_08A96304:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_08A96384; }
    goto L_08A9630C;
L_08A9630C:;
    a2 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    v0 = LD32(sp);
    v1 = (s32)a2 < 4;
    v1 = v1 ^ 0x1;
    ST32(s2, v0);
    a3 = 1;
    ST32(s2+8, a0);
    ST32(s2+12, a1);
    cnd_ = v1 == 0;
    ST32(s2+4, a2);
    if (cnd_) { goto L_08A96258; }
    goto L_08A9633C;
L_08A9633C:;
    v0 = a2 & 0x2;
    cnd_ = v0 == 0;
    v0 = a2 & 0x1;
    if (cnd_) { goto L_08A96364; }
    goto L_08A96348;
L_08A96348:;
    v0 = LD_U8(s6+8);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    s0 = s0 - 1;
    if (cnd_) { goto L_08A96244; }
    goto L_08A9635C;
L_08A9635C:;
    goto L_08A9625C;
L_08A96364:;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_08A96258; }
    goto L_08A9636C;
L_08A9636C:;
    v0 = LD32(s6+8);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    s0 = s0 - 1;
    if (cnd_) { goto L_08A96244; }
    goto L_08A9637C;
L_08A9637C:;
    goto L_08A9625C;
L_08A96384:;
    v0 = LD32(sp);
    cnd_ = v1 != v0;
    v0 = 2;
    if (cnd_) { goto L_08A963E0; }
    goto L_08A96390;
L_08A96390:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_08A963C4; }
    goto L_08A96398;
L_08A96398:;
    v0 = LD32(sp+12);
    v1 = 8;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = 2; goto L_08A963D4; }
    goto L_08A963A8;
L_08A963A8:;
    cnd_ = a0 == v1;
    if (cnd_) { v0 = 2; goto L_08A963D4; }
    goto L_08A963B0;
L_08A963B0:;
    v1 = LD32(v0+4);
    v0 = LD32(a0+4);
    cnd_ = v1 != v0;
    v0 = 2;
    if (cnd_) { goto L_08A963D4; }
    goto L_08A963C0;
L_08A963C0:;
    v0 = LD32(s2+4);
    goto L_08A963C4;
L_08A963C4:;
    v1 = LD32(sp+4);
    v0 = v0 | v1;
    ST32(s2+4, v0);
    goto L_08A96240;
L_08A963D4:;
    a3 = 1;
    ST32(s2+4, v0);
    goto L_08A96258;
L_08A963E0:;
    a3 = 1;
    ST32(s2+4, v0);
    ST32(s2, 0);
    goto L_08A96258;
L_08A963F0:;
    cnd_ = s3 == 0;
    v1 = LD32(sp+4);
    if (cnd_) { goto L_08A962E0; }
    goto L_08A963F8;
L_08A963F8:;
    v0 = LD32(s1+16);
    ST32(sp+12, v0);
    goto L_08A962DC;
}

/* 08A96404 */
void func_08A96404(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A96404:;
    sp = sp - 64;
    v0 = 16;
    s3 = a1 + 0;
    s2 = a2 + 0;
    a1 = a3 + 0;
    a2 = 6;
    s1 = a3 + 0;
    s0 = a0 + 0;
    a3 = s2 + 0;
    t1 = s3 + 0;
    t2 = s0 + 0;
    v1 = LD32(a0);
    ST32(sp+4, 0);
    t3 = sp + 0;
    a0 = LD32(v1-4);
    t0 = LD32(v1-8);
    ST32(sp, 0);
    v1 = LD32(a0);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    v0 = LD32(v1+28);
    t_ = v0;
    t0 = s0 + t0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A96478;
L_08A96478:;
    a2 = LD32(sp);
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A96500; }
    goto L_08A96484;
L_08A96484:;
    v1 = LD32(sp+12);
    v0 = v1 & 0x6;
    v0 = v0 ^ 0x6;
    cnd_ = v0 == 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08A96500; }
    goto L_08A96498;
L_08A96498:;
    a1 = LD32(sp+8);
    v0 = LD32(sp+4);
    v0 = a1 & v0;
    v0 = v0 & 0x6;
    v0 = v0 ^ 0x6;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A96504; }
    goto L_08A964B4;
L_08A964B4:;
    v0 = a1 & 0x5;
    v0 = v0 ^ 0x4;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A96504; }
    goto L_08A964C4;
L_08A964C4:;
    cnd_ = v1 != 0;
    v0 = v1 & 0x6;
    if (cnd_) { goto L_08A964F0; }
    goto L_08A964CC;
L_08A964CC:;
    cnd_ = (s32)s1 < 0;
    v0 = a2 + s1;
    if (cnd_) { goto L_08A96520; }
    goto L_08A964D4;
L_08A964D4:;
    v0 = v0 ^ s0;
    a0 = 6;
    v1 = 1;
    if (v0 != 0) a0 = v1;
    goto L_08A964E4;
L_08A964E4:;
    ST32(sp+12, a0);
    v1 = a0 + 0;
    v0 = v1 & 0x6;
    goto L_08A964F0;
L_08A964F0:;
    v1 = LD32(sp);
    v0 = v0 ^ 0x6;
    a0 = 0 + 0;
    if (v0 == 0) a0 = v1;
    goto L_08A96500;
L_08A96500:;
    goto L_08A96504;
L_08A96504:;
    v0 = a0 + 0;
    sp = sp + 64;
    return;
L_08A96520:;
    v0 = (u32)-2;
    cnd_ = s1 == v0;
    a0 = 1;
    if (cnd_) { goto L_08A964E4; }
    goto L_08A9652C;
L_08A9652C:;
    v1 = LD32(s2);
    a0 = s2 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+32);
    a3 = s3 + 0;
    t_ = v0;
    t0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A96548;
L_08A96548:;
    a0 = v0 + 0;
    goto L_08A964E4;
}

/* 08A96550 */
rv_t func_08A96550(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96550:;
    sp = sp - 16;
    s0 = a0 + 0;
    s0 = s0 - 48;
    v0 = func_08A967C0(t1, t2, t3);
    goto L_08A96568;
L_08A96568:;
    a0 = v0 + 0;
    v1 = LD32(s0+48);
    v0 = 0x432b0000u;
    v0 = v0 | 0x2b00;
    cnd_ = v1 == v0;
    a1 = LD32(a0);
    if (cnd_) { goto L_08A9659C; }
    goto L_08A96580;
L_08A96580:;
    cnd_ = a1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A965EC; }
    goto L_08A96588;
L_08A96588:;
    ST32(a0, s0);
    goto L_08A9658C;
L_08A9658C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A9659C:;
    v1 = LD32(s0+52);
    v0 = 0x474e0000u;
    v0 = v0 | 0x5543;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08A96580; }
    goto L_08A965B0;
L_08A965B0:;
    v1 = LD32(s0+20);
    cnd_ = (s32)v1 < 0;
    v0 = 1;
    if (cnd_) { goto L_08A965E4; }
    goto L_08A965BC;
L_08A965BC:;
    v1 = v1 + 1;
    goto L_08A965C0;
L_08A965C0:;
    ST32(s0+20, v1);
    v0 = LD32(a0+4);
    v0 = v0 - 1;
    cnd_ = s0 == a1;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08A965DC; }
    goto L_08A965D4;
L_08A965D4:;
    ST32(s0+16, a1);
    ST32(a0, s0);
    goto L_08A965DC;
L_08A965DC:;
    v0 = LD32(s0+40);
    goto L_08A9658C;
L_08A965E4:;
    v1 = v0 - v1;
    goto L_08A965C0;
L_08A965EC:;
    { rv_t r_ = func_08A95590(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    { rv_t r_ = func_08A965F4(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; } return (rv_t){ v0, v1, f0 };
}

/* 08A965F4 */
rv_t func_08A965F4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A965F4:;
    sp = sp - 16;
    { u64 r_ = func_08A967A0(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A96604;
L_08A96604:;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08A96634; }
    goto L_08A96610;
L_08A96610:;
    v1 = LD32(a0+48);
    v0 = 0x432b0000u;
    v0 = v0 | 0x2b00;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a0+52); goto L_08A96640; }
    goto L_08A96624;
L_08A96624:;
    a0 = a0 + 48;
    goto L_08A96628;
L_08A96628:;
    ST32(a1, 0);
    goto L_08A9662C;
L_08A9662C:;
    { rv_t r_ = func_08A9D58C(a0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A96634;
L_08A96634:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A96640:;
    v0 = 0x474e0000u;
    v0 = v0 | 0x5543;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = a0 + 48; goto L_08A96628; }
    goto L_08A96650;
L_08A96650:;
    a2 = LD32(a0+20);
    cnd_ = (s32)a2 < 0;
    if (cnd_) { a2 = a2 + 1; goto L_08A96684; }
    goto L_08A9665C;
L_08A9665C:;
    a2 = a2 - 1;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(a0+16); goto L_08A96678; }
    goto L_08A96668;
L_08A96668:;
    cnd_ = (s32)a2 < 0;
    if (cnd_) { goto L_08A966A4; }
    goto L_08A96670;
L_08A96670:;
    ST32(a0+20, a2);
    goto L_08A96634;
L_08A96678:;
    a0 = a0 + 48;
    ST32(a1, v0);
    goto L_08A9662C;
L_08A96684:;
    cnd_ = a2 != 0;
    if (cnd_) { ST32(a0+20, a2); goto L_08A96634; }
    goto L_08A9668C;
L_08A9668C:;
    v0 = LD32(a1+4);
    v1 = LD32(a0+16);
    v0 = v0 + 1;
    ST32(a1, v1);
    ST32(a1+4, v0);
    goto L_08A96670;
L_08A966A4:;
    { rv_t r_ = func_08A95590(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    v0 = func_08A966AC(a0); return (rv_t){ v0, v1, f0 };
}

/* 08A966AC */
u32 func_08A966AC(u32 a0)
{
    u32 v0 = 0;
L_08A966AC:;
    v0 = D_08B159A0 - (22944);
    v0 = v0 + 22944;
    ST32(a0, v0);
    return v0;
}

/* 08A966BC */
rv_t func_08A966BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A966BC:;
    v0 = D_08B159A0 - (22944);
    v0 = v0 + 22944;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08A966CC */
rv_t func_08A966CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A966CC:;
    v0 = D_08B159A0 - (22944);
    v0 = v0 + 22944;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A966E8;
L_08A966E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A966F4 */
rv_t func_08A966F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A966F4:;
    v0 = D_08B15988 - (22920);
    v0 = v0 + 22920;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08A966AC(a0);
    goto L_08A96710;
L_08A96710:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9671C */
rv_t func_08A9671C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9671C:;
    v0 = D_08B15988 - (22920);
    v0 = v0 + 22920;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A966AC(a0);
    goto L_08A9673C;
L_08A9673C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A96744;
L_08A96744:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A96754 */
rv_t func_08A96754(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08A96754:;
    v0 = LD32(a0);
    v1 = LD32(v0-4);
    v0 = LD32(v1+4);
    return (rv_t){ v0, v1, f0 };
}

/* 08A96764 */
void func_08A96764(void)
{
    u32 v0 = 0;
L_08A96764:;
    v0 = D_08B1E444 - (-7100);
    ST32(v0-7100, 0);
    return;
}

/* 08A96770 */
void func_08A96770(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96770:;
    sp = sp - 16;
    func_08A96764();
    goto L_08A96780;
L_08A96780:;
    v0 = D_08B1E444 - (-7100);
    v1 = LD32(v0-7100);
    a0 = (s32)v1 < 0;
    if (a0 != 0) v1 = 0;
    ST32(v0-7100, v1);
    sp = sp + 16;
    return;
}

/* 08A967A0 */
u64 func_08A967A0(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08A967A0:;
    v0 = D_08B1E444 - (-7100);
    v1 = LD32(v0-7100);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A967B8; }
    goto L_08A967B0;
L_08A967B0:;
    v0 = D_08C36E14 - (28180);
    v0 = v0 + 28180;
    goto L_08A967B8;
L_08A967B8:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A967C0 */
u32 func_08A967C0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A967C0:;
    sp = sp - 16;
    s0 = D_08B1E444 - (-7100);
    v0 = D_08C36E14 - (28180);
    v1 = LD32(s0-7100);
    cnd_ = v1 == 0;
    v0 = v0 + 28180;
    if (cnd_) { goto L_08A96810; }
    goto L_08A967E0;
L_08A967E0:;
    cnd_ = (s32)v1 < 0;
    if (cnd_) { goto L_08A967F8; }
    goto L_08A967E8;
L_08A967E8:;
    a0 = 8;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A967F0;
L_08A967F0:;
    { rv_t r_ = func_08A95590(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A967F8;
L_08A967F8:;
    func_08A96770();
    goto L_08A96800;
L_08A96800:;
    v1 = LD32(s0-7100);
    v0 = D_08C36E14 - (28180);
    cnd_ = v1 != 0;
    v0 = v0 + 28180;
    if (cnd_) { goto L_08A967E8; }
    goto L_08A96810;
L_08A96810:;
    sp = sp + 16;
    return v0;
}

/* 08A96820 */
rv_t func_08A96820(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96820:;
    sp = sp - 16;
    a0 = 6;
    { rv_t r_ = func_08A9695C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A96830;
L_08A96830:;
    a0 = 1;
    { u64 r_ = func_08A856AC(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    { u64 r_ = func_08A96838(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); } return (rv_t){ v0, v1, f0 };
}

/* 08A96838 */
u64 func_08A96838(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96838:;
    sp = sp - 16;
    v0 = LD32(a0+600);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08A96868; }
    goto L_08A96850;
L_08A96850:;
    v1 = 0 + 0;
    goto L_08A96854;
L_08A96854:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A96868:;
    a1 = 128;
    { u64 r_ = func_08A87514(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A96870;
L_08A96870:;
    ST32(s0+600, v0);
    cnd_ = v0 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_08A96854; }
    goto L_08A9687C;
L_08A9687C:;
    v1 = 31;
    goto L_08A96880;
L_08A96880:;
    v1 = v1 - 1;
    ST32(v0, 0);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08A96880; }
    goto L_08A96890;
L_08A96890:;
    v1 = 0 + 0;
    goto L_08A96854;
}

/* 08A96898 */
rv_t func_08A96898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96898:;
    sp = sp - 16;
    v0 = a1 < 0x20u;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = (u32)-1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08A96918; }
    goto L_08A968BC;
L_08A968BC:;
    v1 = LD32(a0+600);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A96944; }
    goto L_08A968C8;
L_08A968C8:;
    v0 = s0 << 2;
    a0 = v0 + v1;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08A96924; }
    goto L_08A968DC;
L_08A968DC:;
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A96900; }
    goto L_08A968E4;
L_08A968E4:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_08A96918; }
    goto L_08A968F0;
L_08A968F0:;
    ST32(a0, 0);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A968FC;
L_08A968FC:;
    a1 = 0 + 0;
    goto L_08A96900;
L_08A96900:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A96918:;
    v0 = 22;
    ST32(s1, v0);
    goto L_08A96900;
L_08A96924:;
    a0 = s1 + 0;
    v0 = func_08A969F0();
    goto L_08A9692C;
L_08A9692C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_08A9698C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9693C;
L_08A9693C:;
    a1 = v0 + 0;
    goto L_08A96900;
L_08A96944:;
    { u64 r_ = func_08A96838(a0, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08A9694C;
L_08A9694C:;
    cnd_ = v0 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08A96900; }
    goto L_08A96954;
L_08A96954:;
    v1 = LD32(s1+600);
    goto L_08A968C8;
}

/* 08A9695C */
rv_t func_08A9695C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9695C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08A870E0();
    goto L_08A96970;
L_08A96970:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A96898(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9697C;
L_08A9697C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08A9698C */
u64 func_08A9698C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9698C:;
    sp = sp - 16;
    v0 = a1 + 0;
    a1 = a2 + 0;
    s1 = a0 + 0;
    a0 = v0 + 0;
    s0 = D_08C38BEC - (-29716);
    ST32(s0-29716, 0);
    v0 = func_08A85A48();
    goto L_08A969B8;
L_08A969B8:;
    v1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = LD32(s0-29716);
    if (cnd_) { goto L_08A969E0; }
    goto L_08A969C8;
L_08A969C8:;
    goto L_08A969CC;
L_08A969CC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A969E0:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1, v0); goto L_08A969C8; }
    goto L_08A969E8;
L_08A969E8:;
    goto L_08A969CC;
}

/* 08A969F0 */
u32 func_08A969F0(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A969F0:;
    sp = sp - 16;
    v0 = func_08A85A50();
    goto L_08A96A00;
L_08A96A00:;
    sp = sp + 16;
    return v0;
}

/* 08A96A0C */
void func_08A96A0C(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96A0C:;
    a2 = D_08C36E40 - (28224);
    a1 = LD32(a2+28224);
    sp = sp - 16;
    v1 = 0x80420000u;
    cnd_ = a1 == 0;
    v0 = v1 | 0x100;
    if (cnd_) { goto L_08A96A58; }
    goto L_08A96A28;
L_08A96A28:;
    a1 = 0x80420000u;
    v1 = a0 & 0x3f;
    cnd_ = a0 == 0;
    v0 = a1 | 0x5;
    if (cnd_) { goto L_08A96A58; }
    goto L_08A96A38;
L_08A96A38:;
    v0 = D_08C36E80 - (28288);
    a3 = 0x80420000u;
    a1 = a0 + 0;
    a0 = v0 + 28288;
    cnd_ = v1 != 0;
    v0 = a3 | 0x5;
    if (cnd_) { goto L_08A96A58; }
    goto L_08A96A50;
L_08A96A50:;
    v0 = __sceSasCore(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96A58;
L_08A96A58:;
    sp = sp + 16;
    return;
}

/* 08A96A64 */
void func_08A96A64(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96A64:;
    a3 = D_08C36E40 - (28224);
    t1 = LD32(a3+28224);
    sp = sp - 16;
    v1 = 0x80420000u;
    t0 = a1 + 0;
    a3 = a2 + 0;
    cnd_ = t1 == 0;
    v0 = v1 | 0x100;
    if (cnd_) { goto L_08A96ABC; }
    goto L_08A96A88;
L_08A96A88:;
    a1 = 0x80420000u;
    v1 = a0 & 0x3f;
    cnd_ = a0 == 0;
    v0 = a1 | 0x5;
    if (cnd_) { goto L_08A96ABC; }
    goto L_08A96A98;
L_08A96A98:;
    v0 = D_08C36E80 - (28288);
    a2 = t0 + 0;
    t0 = 0x80420000u;
    a1 = a0 + 0;
    a0 = v0 + 28288;
    cnd_ = v1 != 0;
    v0 = t0 | 0x5;
    if (cnd_) { goto L_08A96ABC; }
    goto L_08A96AB4;
L_08A96AB4:;
    v0 = __sceSasCoreWithMix(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96ABC;
L_08A96ABC:;
    sp = sp + 16;
    return;
}

/* 08A96AC8 */
u32 func_08A96AC8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A96AC8:;
    sp = sp - 32;
    s1 = D_08C36E40 - (28224);
    v0 = 0x80420000u;
    a2 = LD32(s1+28224);
    a1 = a0 + 0;
    v1 = v0 | 0x101;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_08A96B50; }
    goto L_08A96AF8;
L_08A96AF8:;
    s2 = D_08C36E80 - (28288);
    a0 = s2 + 28288;
    a2 = 32;
    a3 = 0 + 0;
    t0 = 0xac44;
    v0 = __sceSasInit(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96B10;
L_08A96B10:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A96B50; }
    goto L_08A96B18;
L_08A96B18:;
    s0 = 0 + 0;
    s3 = s1 + 0;
    v1 = LD32(s1+28224);
    goto L_08A96B24;
L_08A96B24:;
    a1 = s0 + 0;
    a0 = s2 + 28288;
    cnd_ = v1 != 0;
    a2 = 4096;
    if (cnd_) { goto L_08A96B70; }
    goto L_08A96B34;
L_08A96B34:;
    s0 = s0 + 1;
    a0 = (s32)s0 < 32;
    goto L_08A96B3C;
L_08A96B3C:;
    cnd_ = a0 != 0;
    v1 = LD32(s1+28224);
    if (cnd_) { goto L_08A96B24; }
    goto L_08A96B44;
L_08A96B44:;
    a1 = 1;
    ST32(s1+28224, a1);
    v1 = 0 + 0;
    goto L_08A96B50;
L_08A96B50:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_08A96B70:;
    v0 = __sceSasSetPitch(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96B78;
L_08A96B78:;
    t0 = LD32(s1+28224);
    a1 = s0 + 0;
    a0 = s2 + 28288;
    a2 = 15;
    cnd_ = t0 == 0;
    a3 = 24512;
    if (cnd_) { goto L_08A96B34; }
    goto L_08A96B90;
L_08A96B90:;
    v0 = __sceSasSetSimpleADSR(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96B98;
L_08A96B98:;
    t2 = LD32(s3+28224);
    a1 = s0 + 0;
    a0 = s2 + 28288;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    cnd_ = t2 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_08A96B34; }
    goto L_08A96BB8;
L_08A96BB8:;
    s0 = s0 + 1;
    v0 = __sceSasSetVolume(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96BC0;
L_08A96BC0:;
    a0 = (s32)s0 < 32;
    goto L_08A96B3C;
}

/* 08A96BC8 */
u32 func_08A96BC8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96BC8:;
    a1 = D_08C36E40 - (28224);
    a2 = LD32(a1+28224);
    v0 = D_08C36E80 - (28288);
    sp = sp - 16;
    v1 = 0x80420000u;
    a1 = a0 + 0;
    a0 = v0 + 28288;
    cnd_ = a2 == 0;
    v0 = v1 | 0x100;
    if (cnd_) { goto L_08A96BF8; }
    goto L_08A96BF0;
L_08A96BF0:;
    v0 = __sceSasSetKeyOn(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96BF8;
L_08A96BF8:;
    sp = sp + 16;
    return v0;
}

/* 08A96C04 */
u32 func_08A96C04(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96C04:;
    a1 = D_08C36E40 - (28224);
    a2 = LD32(a1+28224);
    v0 = D_08C36E80 - (28288);
    sp = sp - 16;
    v1 = 0x80420000u;
    a1 = a0 + 0;
    a0 = v0 + 28288;
    cnd_ = a2 == 0;
    v0 = v1 | 0x100;
    if (cnd_) { goto L_08A96C34; }
    goto L_08A96C2C;
L_08A96C2C:;
    v0 = __sceSasSetKeyOff(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96C34;
L_08A96C34:;
    sp = sp + 16;
    return v0;
}

/* 08A96C40 */
u32 func_08A96C40(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96C40:;
    a2 = D_08C36E40 - (28224);
    t1 = LD32(a2+28224);
    sp = sp - 16;
    v1 = 0x80420000u;
    a3 = a0 + 0;
    t0 = a0 < 0x20u;
    a2 = a1 + 0;
    cnd_ = t1 == 0;
    v0 = v1 | 0x100;
    if (cnd_) { goto L_08A96C8C; }
    goto L_08A96C68;
L_08A96C68:;
    a1 = D_08C36E80 - (28288);
    v0 = 1;
    a0 = a1 + 28288;
    a1 = v0 << (a3 & 31);
    a3 = 0x80420000u;
    cnd_ = t0 == 0;
    v0 = a3 | 0x10;
    if (cnd_) { goto L_08A96C8C; }
    goto L_08A96C84;
L_08A96C84:;
    v0 = __sceSasSetPause(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96C8C;
L_08A96C8C:;
    sp = sp + 16;
    return v0;
}

/* 08A96C98 */
u32 func_08A96C98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96C98:;
    t6 = D_08C36E40 - (28224);
    t5 = LD32(t6+28224);
    t1 = a2 + 0;
    t2 = a0 + 0;
    t4 = D_08C36E80 - (28288);
    v1 = a1 + 0;
    v0 = a3 + 0;
    sp = sp - 16;
    t3 = 0x80420000u;
    a0 = t4 + 28288;
    a3 = t1 + 0;
    t1 = t0 + 0;
    a1 = t2 + 0;
    a2 = v1 + 0;
    t0 = v0 + 0;
    cnd_ = t5 == 0;
    t4 = t3 | 0x100;
    if (cnd_) { goto L_08A96CEC; }
    goto L_08A96CE0;
L_08A96CE0:;
    v0 = __sceSasSetVolume(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96CE8;
L_08A96CE8:;
    t4 = v0 + 0;
    goto L_08A96CEC;
L_08A96CEC:;
    v0 = t4 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A96CFC */
u32 func_08A96CFC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96CFC:;
    a3 = D_08C36E40 - (28224);
    a2 = LD32(a3+28224);
    sp = sp - 16;
    v1 = 0x80420000u;
    a3 = a1 + 0;
    cnd_ = a2 == 0;
    v0 = v1 | 0x100;
    if (cnd_) { goto L_08A96D40; }
    goto L_08A96D1C;
L_08A96D1C:;
    v0 = D_08C36E80 - (28288);
    t0 = 0x80420000u;
    a1 = a0 + 0;
    a2 = a3 + 0;
    a0 = v0 + 28288;
    cnd_ = a3 == 0;
    v0 = t0 | 0x12;
    if (cnd_) { goto L_08A96D40; }
    goto L_08A96D38;
L_08A96D38:;
    v0 = __sceSasSetPitch(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96D40;
L_08A96D40:;
    sp = sp + 16;
    return v0;
}

/* 08A96D4C */
u32 func_08A96D4C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96D4C:;
    t3 = D_08C36E40 - (28224);
    t4 = LD32(t3+28224);
    t0 = a1 + 0;
    v0 = a0 + 0;
    v1 = a2 + 0;
    sp = sp - 16;
    t2 = 0x80420000u;
    t1 = D_08C36E80 - (28288);
    a2 = t0 + 0;
    t0 = a3 + 0;
    a0 = t1 + 28288;
    a1 = v0 + 0;
    a3 = v1 + 0;
    cnd_ = t4 == 0;
    t3 = t2 | 0x100;
    if (cnd_) { goto L_08A96D98; }
    goto L_08A96D8C;
L_08A96D8C:;
    v0 = __sceSasSetVoice(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96D94;
L_08A96D94:;
    t3 = v0 + 0;
    goto L_08A96D98;
L_08A96D98:;
    v0 = t3 + 0;
    sp = sp + 16;
    return v0;
}

/* 08A96DA8 */
void func_08A96DA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96DA8:;
    t8 = D_08C36E40 - (28224);
    t5 = LD32(t8+28224);
    t4 = a1 + 0;
    t2 = a2 + 0;
    t6 = a0 + 0;
    v0 = a3 + 0;
    v1 = t0 + 0;
    sp = sp - 16;
    t3 = 0x80420000u;
    t7 = D_08C36E80 - (28288);
    a2 = t4 + 0;
    a3 = t2 + 0;
    t2 = t1 + 0;
    a0 = t7 + 28288;
    a1 = t6 + 0;
    t0 = v0 + 0;
    t1 = v1 + 0;
    cnd_ = t5 == 0;
    t4 = t3 | 0x100;
    if (cnd_) { goto L_08A96E04; }
    goto L_08A96DF8;
L_08A96DF8:;
    v0 = __sceSasSetADSR(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96E00;
L_08A96E00:;
    t4 = v0 + 0;
    goto L_08A96E04;
L_08A96E04:;
    v0 = t4 + 0;
    sp = sp + 16;
    return;
}

/* 08A96E14 */
u32 func_08A96E14(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96E14:;
    v1 = D_08C36E40 - (28224);
    a1 = LD32(v1+28224);
    v0 = D_08C36E80 - (28288);
    sp = sp - 16;
    a0 = v0 + 28288;
    cnd_ = a1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08A96E40; }
    goto L_08A96E34;
L_08A96E34:;
    goto L_08A96E38;
L_08A96E38:;
    sp = sp + 16;
    return v0;
L_08A96E40:;
    v0 = __sceSasGetEndFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96E48;
L_08A96E48:;
    goto L_08A96E38;
}

/* 08A96E50 */
void func_08A96E50(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A96E50:;
    v1 = D_08C36E40 - (28224);
    a2 = LD32(v1+28224);
    sp = sp - 16;
    v0 = 0x80420000u;
    v1 = v0 | 0x100;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A96EBC; }
    goto L_08A96E7C;
L_08A96E7C:;
    v0 = D_08C36E80 - (28288);
    a1 = 1;
    a3 = v1 + 0;
    cnd_ = a2 == a1;
    a0 = v0 + 28288;
    if (cnd_) { goto L_08A96ED4; }
    goto L_08A96E90;
L_08A96E90:;
    t1 = 0x80420000u;
    t2 = D_08C36E80 - (28288);
    t0 = 1;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a0 = t2 + 28288;
    cnd_ = a3 == t0;
    v1 = t1 | 0x24;
    if (cnd_) { goto L_08A96EBC; }
    goto L_08A96EB0;
L_08A96EB0:;
    v0 = __sceSasRevVON(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96EB8;
L_08A96EB8:;
    v1 = v0 + 0;
    goto L_08A96EBC;
L_08A96EBC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08A96ED4:;
    v0 = __sceSasGetOutputmode(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A96EDC;
L_08A96EDC:;
    a3 = v0 + 0;
    goto L_08A96E90;
}

/* 08A96EE4 */
void func_08A96EE4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08A96EE4:;
    a1 = D_08C36E40 - (28224);
    v0 = LD32(a1+28224);
    v1 = 0x80420000u;
    a2 = 1;
    cnd_ = v0 != a2;
    a0 = v1 | 0x100;
    if (cnd_) { goto L_08A96F04; }
    goto L_08A96EFC;
L_08A96EFC:;
    ST32(a1+28224, 0);
    a0 = 0 + 0;
    goto L_08A96F04;
L_08A96F04:;
    v0 = a0 + 0;
    return;
}

/* 08A96F0C */
u64 func_08A96F0C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    float *v = vfpu_v;
L_08A96F0C:;
    cnd_ = a2 == 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_08A9700C; }
    goto L_08A96F14;
L_08A96F14:;
    v1 = a0 & 0x3f;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08A96F44; }
    goto L_08A96F20;
L_08A96F20:;
    v1 = LD_U8(a1);
    goto L_08A96F24;
L_08A96F24:;
    a2 = a2 - 1;
    a1 = a1 + 1;
    ST8(a3, v1);
    a3 = a3 + 1;
    cnd_ = a2 == 0;
    v0 = a3 & 0x3f;
    if (cnd_) { goto L_08A9700C; }
    goto L_08A96F3C;
L_08A96F3C:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD_U8(a1); goto L_08A96F24; }
    goto L_08A96F44;
L_08A96F44:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A9700C; }
    goto L_08A96F4C;
L_08A96F4C:;
    t0 = a2 < 0x40u;
    cnd_ = t0 != 0;
    t1 = 0x40000000u;
    if (cnd_) { goto L_08A96FF4; }
    goto L_08A96F58;
L_08A96F58:;
    t0 = a1 & 0xf;
    v0 = 4;
    t2 = t1 + 0;
    t2 = a3 /* uncached alias (PSP memory map) */;
    cnd_ = t0 == v0;
    t3 = t0 < 0x5u;
    if (cnd_) { goto L_08A971C0; }
    goto L_08A96F70;
L_08A96F70:;
    cnd_ = t3 == 0;
    t4 = 8;
    if (cnd_) { goto L_08A970D8; }
    goto L_08A96F78;
L_08A96F78:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A97014; }
    goto L_08A96F80;
L_08A96F80:;
    a3 = a3 + 64;
    a2 = a2 - 64;
    goto L_08A96F90;
L_08A96F90:;
    t0 = LDU32(a1);
    {v[0]=BITSF(t0);}
    t0 = LDU32(a1+4);
    {v[1]=BITSF(t0);}
    t0 = LDU32(a1+8);
    {v[2]=BITSF(t0);}
    t0 = LDU32(a1+12);
    {v[3]=BITSF(t0);}
    a1 = a1 + 16;
    {u32 a_=t2+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    t2 = t2 + 16;
    t0 = t2 & 0x3f;
    cnd_ = t0 != 0;
    {}
    if (cnd_) { goto L_08A96F90; }
    goto L_08A96FD8;
L_08A96FD8:;
    t0 = a2 >> 6;
    cnd_ = t0 != 0;
    if (cnd_) { goto L_08A96F80; }
    goto L_08A96FE4;
L_08A96FE4:;
    {}
    goto L_08A96FEC;
L_08A96FEC:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08A9700C; }
    goto L_08A96FF4;
L_08A96FF4:;
    t2 = LD_U8(a1);
    a2 = a2 - 1;
    a1 = a1 + 1;
    ST8(a3, t2);
    cnd_ = a2 != 0;
    a3 = a3 + 1;
    if (cnd_) { goto L_08A96FF4; }
    goto L_08A9700C;
L_08A9700C:;
    v0 = a0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08A97014:;
    t0 = a2 >> 7;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A97094; }
    goto L_08A97020;
L_08A97020:;
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(64);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(80);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(96);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(112);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    a3 = a3 + 128;
    a1 = a1 + 128;
    a2 = a2 - 128;
    t0 = a2 >> 7;
    {u32 a_=t2+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=t2+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=t2+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=t2+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    {u32 a_=t2+(64);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=t2+(80);ST32(a_+0,FBITS(v[20]));ST32(a_+4,FBITS(v[21]));ST32(a_+8,FBITS(v[22]));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=t2+(96);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=t2+(112);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    t2 = t2 + 128;
    cnd_ = t0 != 0;
    {}
    if (cnd_) { goto L_08A97020; }
    goto L_08A97088;
L_08A97088:;
    t0 = a2 >> 6;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A970C8; }
    goto L_08A97094;
L_08A97094:;
    {u32 a_=a1+(0);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(16);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    a3 = a3 + 64;
    a1 = a1 + 64;
    a2 = a2 - 64;
    {u32 a_=t2+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=t2+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=t2+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=t2+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    goto L_08A970C8;
L_08A970C8:;
    {}
    goto L_08A96FEC;
L_08A970D8:;
    cnd_ = t0 == t4;
    t5 = 12;
    if (cnd_) { goto L_08A9714C; }
    goto L_08A970E0;
L_08A970E0:;
    cnd_ = t0 != t5;
    if (cnd_) { goto L_08A96F80; }
    goto L_08A970E8;
L_08A970E8:;
    {v[0]=BITSF(LD32(a1+(0)));}
    {u32 a_=a1+(4);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(20);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(36);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(52);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=v[16];float m01=v[20];float m02=v[24];float m10=v[17];float m11=v[21];float m12=v[25];float m20=v[18];float m21=v[22];float m22=v[26];v[1]=m00;v[5]=m01;v[9]=m02;v[2]=m10;v[6]=m11;v[10]=m12;v[3]=m20;v[7]=m21;v[11]=m22;}
    {float s0=v[19];float s1=v[23];float s2=v[27];float d0=s0;float d1=s1;float d2=s2;v[4]=d0;v[8]=d1;v[12]=d2;}
    {float s0=v[28];float s1=v[29];float s2=v[30];float d0=s0;float d1=s1;float d2=s2;v[13]=d0;v[14]=d1;v[15]=d2;}
    a3 = a3 + 64;
    a1 = a1 + 64;
    a2 = a2 - 64;
    t0 = a2 >> 6;
    {u32 a_=t2+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=t2+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=t2+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=t2+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    t2 = t2 + 64;
    cnd_ = t0 != 0;
    {}
    if (cnd_) { goto L_08A970E8; }
    goto L_08A9713C;
L_08A9713C:;
    {}
    goto L_08A96FEC;
L_08A9714C:;
    {v[0]=BITSF(LD32(a1+(0)));}
    {v[1]=BITSF(LD32(a1+(4)));}
    {u32 a_=a1+(8);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(24);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(40);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(56);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {float m00=v[16];float m01=v[20];float m10=v[17];float m11=v[21];v[2]=m00;v[6]=m01;v[3]=m10;v[7]=m11;}
    {float s0=v[18];float s1=v[19];float d0=s0;float d1=s1;v[4]=d0;v[5]=d1;}
    {float s0=v[22];float s1=v[23];float d0=s0;float d1=s1;v[8]=d0;v[9]=d1;}
    {float s0=v[24];float s1=v[25];float d0=s0;float d1=s1;v[10]=d0;v[11]=d1;}
    {float s0=v[26];float s1=v[27];float d0=s0;float d1=s1;v[12]=d0;v[13]=d1;}
    {float s0=v[28];float s1=v[29];float d0=s0;float d1=s1;v[14]=d0;v[15]=d1;}
    a3 = a3 + 64;
    a1 = a1 + 64;
    a2 = a2 - 64;
    t0 = a2 >> 6;
    {u32 a_=t2+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=t2+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=t2+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=t2+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    t2 = t2 + 64;
    cnd_ = t0 != 0;
    {}
    if (cnd_) { goto L_08A9714C; }
    goto L_08A971B0;
L_08A971B0:;
    {}
    goto L_08A96FEC;
L_08A971C0:;
    a2 = a2 - 64;
    {u32 a_=a1+(-4);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(12);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(28);v[24]=BITSF(LD32(a_+0));v[25]=BITSF(LD32(a_+4));v[26]=BITSF(LD32(a_+8));v[27]=BITSF(LD32(a_+12));}
    {u32 a_=a1+(44);v[28]=BITSF(LD32(a_+0));v[29]=BITSF(LD32(a_+4));v[30]=BITSF(LD32(a_+8));v[31]=BITSF(LD32(a_+12));}
    {v[15]=BITSF(LD32(a1+(60)));}
    {float m00=v[17];float m01=v[21];float m02=v[25];float m10=v[18];float m11=v[22];float m12=v[26];float m20=v[19];float m21=v[23];float m22=v[27];v[0]=m00;v[4]=m01;v[8]=m02;v[1]=m10;v[5]=m11;v[9]=m12;v[2]=m20;v[6]=m21;v[10]=m22;}
    {float s0=v[20];float s1=v[24];float s2=v[28];float d0=s0;float d1=s1;float d2=s2;v[3]=d0;v[7]=d1;v[11]=d2;}
    {float s0=v[29];float s1=v[30];float s2=v[31];float d0=s0;float d1=s1;float d2=s2;v[12]=d0;v[13]=d1;v[14]=d2;}
    a3 = a3 + 64;
    a1 = a1 + 64;
    t0 = a2 >> 6;
    {u32 a_=t2+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=t2+(16);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    {u32 a_=t2+(32);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    {u32 a_=t2+(48);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    t2 = t2 + 64;
    cnd_ = t0 != 0;
    {}
    if (cnd_) { goto L_08A971C0; }
    goto L_08A97214;
L_08A97214:;
    {}
    goto L_08A96FEC;
}

/* 08A97224 */
u64 func_08A97224(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    float *v = vfpu_v;
L_08A97224:;
    t0 = 0x40000000u;
    v0 = a0 + 0;
    v1 = t0 + 0;
    v1 = a0 /* uncached alias (PSP memory map) */;
    a1 = (a1 & ~(0xffu << 8)) | ((a1 & 0xff) << 8);
    a1 = (a1 & ~(0xffffu << 16)) | ((a1 & 0xffff) << 16);
    {v[0]=BITSF(a1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    goto L_08A97248;
L_08A97248:;
    t0 = a0 & 0x3f;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A9726C; }
    goto L_08A97254;
L_08A97254:;
    cnd_ = a2 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A972BC; }
    goto L_08A9725C;
L_08A9725C:;
    ST8(a0, a1);
    a0 = a0 + 1;
    v1 = v1 + 1;
    goto L_08A97248;
L_08A9726C:;
    t0 = a2 < 0x40u;
    cnd_ = t0 != 0;
    if (cnd_) { goto L_08A972A8; }
    goto L_08A97278;
L_08A97278:;
    a0 = a0 + 64;
    a2 = a2 - 64;
    t0 = a2 < 0x40u;
    {u32 a_=v1+(0);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=v1+(16);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=v1+(32);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=v1+(48);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v1 = v1 + 64;
    cnd_ = t0 == 0;
    {}
    if (cnd_) { goto L_08A97278; }
    goto L_08A972A8;
L_08A972A8:;
    cnd_ = a2 == 0;
    a2 = a2 - 1;
    if (cnd_) { goto L_08A972BC; }
    goto L_08A972B0;
L_08A972AC:;
    a2 = a2 - 1;
    goto L_08A972B0;
L_08A972B0:;
    ST8(a0, a1);
    cnd_ = a2 != 0;
    a0 = a0 + 1;
    if (cnd_) { goto L_08A972AC; }
    goto L_08A972BC;
L_08A972BC:;
    {}
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08A972CC */
void func_08A972CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A972CC:;
    sp = sp - 16;
    s2 = D_08C37CC0 - (31936);
    v1 = s2 + 31936;
    s1 = 1;
    ST32(v1+12, 0);
    ST32(v1+4, s1);
    ST32(v1+8, 0);
    v0 = sceKernelDcacheWritebackAll(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A972FC;
L_08A972FC:;
    v0 = D_08AE9D00 - (-25344);
    a0 = v0 - 25344;
    a0 = (a0 & ~(0x7u << 29)) | ((0 & 0x7) << 29);
    a1 = 0 + 0;
    a2 = (u32)-1;
    a3 = 0 + 0;
    v0 = sceGeListEnQueue(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97318;
L_08A97318:;
    v1 = D_08C38260 - (-32160);
    s0 = v0 + 0;
    a0 = v1 - 32160;
    cnd_ = (s32)v0 < 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A97360; }
    goto L_08A9732C;
L_08A9732C:;
    func_08A997F0(a0, a1, 0, 0, 0, 0);
    goto L_08A97334;
L_08A97334:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = sceGeListSync(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97340;
L_08A97340:;
    cnd_ = (s32)v0 < 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A97360; }
    goto L_08A97348;
L_08A97348:;
    v0 = sceGeDrawSync(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97350;
L_08A97350:;
    cnd_ = (s32)v0 < 0;
    if (cnd_) { goto L_08A97364; }
    goto L_08A97358;
L_08A97358:;
    ST8(s2+31936, s1);
    v0 = 0 + 0;
    goto L_08A97360;
L_08A97360:;
    goto L_08A97364;
L_08A97364:;
    sp = sp + 16;
    return;
}

/* 08A97378 */
void func_08A97378(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97378:;
    v1 = D_08C37CC0 - (31936);
    a1 = LD_U8(v1+31936);
    sp = sp - 16;
    a0 = v1 + 31936;
    cnd_ = a1 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08A973A0; }
    goto L_08A97394;
L_08A97394:;
    sp = sp + 16;
    return;
L_08A973A0:;
    a0 = LD32(a0+36);
    v0 = sceGeUnsetCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A973A8;
L_08A973A8:;
    v0 = 0 + 0;
    goto L_08A97394;
}

/* 08A973B0 */
void func_08A973B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A973B0:;
    sp = sp - 16;
    t2 = 0x5fff0000u;
    a3 = D_08C38260 - (-32160);
    v0 = D_08C37CC0 - (31936);
    t1 = t2 | 0xffff;
    t0 = v0 + 31936;
    v1 = 0x80000000u;
    s1 = a0 + 0;
    s0 = a3 - 32160;
    a0 = a1 /* & 0x5FFFFFFF: PSP cache-mode bits of an address, none natively */;
    t2 = 1;
    t1 = v1 | 0x21;
    ST8(t0+52, 0);
    ST32(t0+368, 0);
    cnd_ = s1 != 0;
    ST32(s0+24, s1);
    if (cnd_) { goto L_08A97404; }
    goto L_08A973FC;
L_08A973FC:;
    v1 = 0x40000000u;
    a0 = a0 /* libgu sceGuStart: display list written through its uncached mirror */;
    goto L_08A97404;
L_08A97404:;
    a1 = a0 + a2;
    ST32(a3-32160, a0);
    ST32(s0+16, 0);
    ST32(s0+8, a0);
    ST32(s0+28, t2);
    ST32(s0+4, a1);
    cnd_ = s1 != 0;
    ST32(s0+12, a1);
    if (cnd_) { goto L_08A9746C; }
    goto L_08A97424;
L_08A97424:;
    t3 = LD32(s0+44);
    a2 = (u32)-1;
    a3 = t0 + 1396;
    ST8(t0+52, t2);
    cnd_ = t3 == a2;
    a1 = a0 + 0;
    if (cnd_) { goto L_08A97454; }
    goto L_08A9743C;
L_08A9743C:;
    v0 = t1 + 0;
    sp = sp + 16;
    return;
L_08A97454:;
    a2 = LD32(t0+36);
    v0 = sceGeListEnQueue(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9745C;
L_08A9745C:;
    cnd_ = (s32)v0 < 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_08A9743C; }
    goto L_08A97464;
L_08A97464:;
    ST32(s0+32, v0);
    ST32(s0+44, 0);
    goto L_08A9746C;
L_08A9746C:;
    t4 = s1 ^ 0x3;
    t5 = s1 ^ 0x1;
    a3 = 0 < t5;
    t0 = 0 < t4;
    a0 = a3 & t0;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08A97490; }
    goto L_08A97488;
L_08A97488:;
    t1 = 0 + 0;
    goto L_08A9743C;
L_08A97490:;
    func_08A9971C();
    goto L_08A97498;
L_08A97498:;
    t1 = 0 + 0;
    goto L_08A9743C;
}

/* 08A974A0 */
u32 func_08A974A0(u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A974A0:;
    sp = sp - 16;
    a0 = 0 + 0;
    v0 = func_08A974BC(a0, t2, t3);
    goto L_08A974B0;
L_08A974B0:;
    sp = sp + 16;
    return v0;
}

/* 08A974BC */
u32 func_08A974BC(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A974BC:;
    sp = sp - 16;
    t0 = D_08C38260 - (-32160);
    s1 = t0 - 32160;
    a2 = a0 & 0xffff;
    t1 = LD32(s1+24);
    a3 = t1 ^ 0x3;
    v1 = t1 ^ 0x1;
    a0 = v1 < 0x1u;
    a1 = a3 < 0x1u;
    a3 = a0 | a1;
    a0 = 0 + 0;
    cnd_ = a3 == 0;
    s0 = LD32(t0-32160);
    if (cnd_) { goto L_08A97558; }
    goto L_08A974FC;
L_08A974FC:;
    t2 = D_08C38244 - (-32188);
    a2 = LD32(t2-32188);
    cnd_ = a2 != 0;
    t4 = 0xe120000u;
    if (cnd_) { goto L_08A97544; }
    goto L_08A9750C;
L_08A9750C:;
    t3 = 0xb000000u;
    ST32(s0, t3);
    s0 = s0 + 4;
    goto L_08A97518;
L_08A97518:;
    ST32(s1, s0);
    v0 = a0 + 0;
    cnd_ = (s32)a0 < 0;
    ST32(s1+28, 0);
    if (cnd_) { goto L_08A97530; }
    goto L_08A97528;
L_08A97528:;
    t0 = LD32(s1+8);
    v0 = s0 - t0;
    goto L_08A97530;
L_08A97530:;
    sp = sp + 16;
    return v0;
L_08A97544:;
    v0 = 0xc000000u;
    ST32(s0, t4);
    ST32(s0+4, v0);
    s0 = s0 + 8;
    goto L_08A97518;
L_08A97558:;
    t9 = D_08C37CF4 - (31988);
    t5 = LD_U8(t9+31988);
    t8 = 0xf000000u;
    t7 = a2 | t8;
    t6 = 0xc000000u;
    ST32(s0, t7);
    ST32(s0+4, t6);
    cnd_ = t5 != 0;
    s0 = s0 + 8;
    if (cnd_) { goto L_08A97588; }
    goto L_08A9757C;
L_08A9757C:;
    v1 = 0 + 0;
    a0 = v1 + 0;
    goto L_08A97518;
L_08A97588:;
    a0 = LD32(s1+32);
    a1 = s0 + 0;
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97594;
L_08A97594:;
    cnd_ = (s32)v0 >= 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A9757C; }
    goto L_08A9759C;
L_08A9759C:;
    a0 = v1 + 0;
    goto L_08A97518;
}

/* 08A975A4 */
void func_08A975A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A975A4:;
    a2 = D_08C38260 - (-32160);
    t4 = LD32(a2-32160);
    v1 = a1 & 0xffff;
    v0 = a0 << 16;
    a3 = a0 + 0;
    t2 = D_08C37CF4 - (31988);
    t1 = v0 | v1;
    a1 = 0xe000000u;
    a0 = t1 | a1;
    sp = sp - 16;
    t0 = LD_U8(t2+31988);
    t1 = 0xc000000u;
    t2 = a2 - 32160;
    t3 = (s32)a3 < 23;
    ST32(t4, a0);
    a1 = (s32)a3 < 16;
    a0 = t2 + 0;
    a2 = t4 + 8;
    cnd_ = t3 == 0;
    ST32(t4+4, t1);
    if (cnd_) { goto L_08A97620; }
    goto L_08A975F8;
L_08A975F8:;
    cnd_ = a1 == 0;
    if (cnd_) { a1 = a2 + 0; goto L_08A97624; }
    goto L_08A97600;
L_08A97600:;
    t3 = 3;
    cnd_ = a3 == t3;
    v1 = (s32)a3 < 4;
    if (cnd_) { goto L_08A97648; }
    goto L_08A9760C;
L_08A9760C:;
    cnd_ = v1 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_08A97624; }
    goto L_08A97614;
L_08A97614:;
    t5 = 8;
    cnd_ = a3 == t5;
    a3 = 0xf000000u;
    if (cnd_) { goto L_08A9764C; }
    goto L_08A97620;
L_08A97620:;
    a1 = a2 + 0;
    goto L_08A97624;
L_08A97624:;
    cnd_ = t0 != 0;
    ST32(a0, a2);
    if (cnd_) { goto L_08A97638; }
    goto L_08A9762C;
L_08A9762C:;
    goto L_08A97630;
L_08A97630:;
    sp = sp + 16;
    return;
L_08A97638:;
    a0 = LD32(t2+32);
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97640;
L_08A97640:;
    goto L_08A97630;
L_08A97648:;
    a3 = 0xf000000u;
    goto L_08A9764C;
L_08A9764C:;
    ST32(a2, a3);
    ST32(a2+4, t1);
    a2 = a2 + 8;
    goto L_08A97620;
}

/* 08A9765C */
void func_08A9765C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
L_08A9765C:;
    t0 = D_08C38260 - (-32160);
    t2 = t0 - 32160;
    a1 = LD32(t2+16);
    t1 = D_08C38244 - (-32188);
    t3 = LD32(t1-32188);
    a0 = a0 - a1;
    a2 = (a0 >> 16) & 0x1fff;
    v1 = 0xe110000u;
    t5 = a0 & 0xffff;
    v0 = 0xc000000u;
    t1 = a2 | v1;
    t4 = (a0 >> 24) & 0x1f;
    a2 = t5 | v0;
    a3 = 0xa000000u;
    v0 = 0x10000000u;
    v0 = (v0 & ~(0x1fu << 16)) | ((t4 & 0x1f) << 16);
    a1 = a0 + 0;
    a0 = a3 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    cnd_ = t3 != 0;
    v1 = LD32(t0-32160);
    if (cnd_) { goto L_08A976C8; }
    goto L_08A976B0;
L_08A976B0:;
    ST32(v1, v0);
    ST32(v1+4, a0);
    goto L_08A976B8;
L_08A976B8:;
    a0 = v1 + 8;
    v0 = 0 + 0;
    ST32(t2, a0);
    return;
L_08A976C8:;
    ST32(v1, t1);
    ST32(v1+4, a2);
    goto L_08A976B8;
}

/* 08A976D4 */
void func_08A976D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A976D4:;
    sp = sp - 32;
    t1 = D_08C38260 - (-32160);
    s0 = t1 - 32160;
    v1 = 0x80000000u;
    v0 = LD32(s0+44);
    t3 = a0 + 0;
    a0 = (u32)-1;
    t4 = a1 + 0;
    t2 = a3 + 0;
    cnd_ = v0 == a0;
    t1 = v1 | 0x21;
    if (cnd_) { goto L_08A9771C; }
    goto L_08A97708;
L_08A97708:;
    v0 = t1 + 0;
    sp = sp + 32;
    return;
L_08A9771C:;
    t5 = 16;
    a0 = a1 + 0;
    a3 = sp + 0;
    a1 = 0 + 0;
    ST32(sp, t5);
    ST32(sp+4, a2);
    ST32(sp+8, t2);
    cnd_ = t3 != 0;
    ST32(sp+12, t0);
    if (cnd_) { goto L_08A97760; }
    goto L_08A97740;
L_08A97740:;
    t0 = D_08C37CE4 - (31972);
    a2 = LD32(t0+31972);
    v0 = sceGeListEnQueue(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9774C;
L_08A9774C:;
    a1 = 2;
    goto L_08A97750;
L_08A97750:;
    ST32(s0+40, v0);
    t1 = v0 + 0;
    ST32(s0+44, a1);
    goto L_08A97708;
L_08A97760:;
    a0 = D_08C37CE4 - (31972);
    a2 = LD32(a0+31972);
    a1 = 0 + 0;
    a0 = t4 + 0;
    a3 = sp + 0;
    v0 = sceGeListEnQueueHead(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97778;
L_08A97778:;
    a1 = 2;
    goto L_08A97750;
}

/* 08A97780 */
void func_08A97780(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97780:;
    v1 = D_08C37CF4 - (31988);
    a2 = LD_U8(v1+31988);
    v0 = D_08C38260 - (-32160);
    sp = sp - 16;
    v1 = v0 - 32160;
    cnd_ = a2 != 0;
    a1 = LD32(v0-32160);
    if (cnd_) { goto L_08A977B4; }
    goto L_08A977A0;
L_08A977A0:;
    v1 = 0 + 0;
    goto L_08A977A8;
L_08A977A8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_08A977B4:;
    a0 = LD32(v1+32);
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A977BC;
L_08A977BC:;
    cnd_ = (s32)v0 >= 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A977A0; }
    goto L_08A977C4;
L_08A977C4:;
    goto L_08A977A8;
}

/* 08A977CC */
void func_08A977CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A977CC:;
    sp = sp - 16;
    v1 = D_08C38260 - (-32160);
    a3 = v1 - 32160;
    v1 = LD32(a3+44);
    t0 = 0x80000000u;
    a2 = (u32)-1;
    cnd_ = v1 == a2;
    v0 = t0 | 0x21;
    if (cnd_) { goto L_08A9783C; }
    goto L_08A977F0;
L_08A977F0:;
    t0 = v1 << 2;
    v1 = t0 + a3;
    t0 = LD32(v1+32);
    t1 = 0x80000000u;
    cnd_ = t0 == a2;
    v0 = t1 | 0x21;
    if (cnd_) { goto L_08A9783C; }
    goto L_08A97808;
L_08A97808:;
    t2 = a0 < 0x5u;
    ST32(v1+32, a2);
    cnd_ = t2 == 0;
    ST32(a3+44, a2);
    if (cnd_) { goto L_08A97848; }
    goto L_08A97818;
L_08A97818:;
    t3 = D_08AEA8CC - (-22324);
    a3 = a0 << 2;
    v0 = t3 - 22324;
    a0 = a3 + v0;
    a2 = LD32(a0);
    t_ = a2;
    switch (t_) { case 0x08A97834u: goto L_08A97834; case 0x08A97848u: goto L_08A97848; case 0x08A97850u: goto L_08A97850; default: rs_break(0, 0x08a9782c); }
L_08A97834:;
    a0 = a1 + 0;
    v0 = sceGeDrawSync(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9783C;
L_08A9783C:;
    goto L_08A97840;
L_08A97840:;
    sp = sp + 16;
    return;
L_08A97848:;
    v0 = 0 + 0;
    goto L_08A9783C;
L_08A97850:;
    a0 = t0 + 0;
    v0 = sceGeListSync(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97858;
L_08A97858:;
    goto L_08A97840;
}

/* 08A97860 */
void func_08A97860(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97860:;
    sp = sp - 16;
    v1 = D_08C37CC0 - (31936);
    a1 = v1 + 31936;
    a2 = a0 + 0;
    a0 = 1;
    s0 = LD32(a1+56);
    ST32(a1+56, a2);
    func_08A99660(a0, t2, t3);
    goto L_08A97888;
L_08A97888:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 08A9789C */
u64 func_08A9789C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
L_08A9789C:;
    t0 = D_08AEA938 - (-22216);
    a3 = a0 << 2;
    v1 = t0 - 22216;
    a2 = a3 + v1;
    v1 = LD32(a2);
    a1 = a0 + 0;
    t1 = D_08C38260 - (-32160);
    a0 = 1;
    a3 = a0 << (a1 & 31);
    t0 = D_08C37CC0 - (31936);
    a2 = LD32(t1-32160);
    cnd_ = v1 == 0;
    a0 = t1 - 32160;
    if (cnd_) { goto L_08A978F0; }
    goto L_08A978D0;
L_08A978D0:;
    ST32(a2, v1);
    goto L_08A978D4;
L_08A978D4:;
    a2 = a2 + 4;
    goto L_08A978D8;
L_08A978D8:;
    t1 = t0 + 31936;
    goto L_08A978DC;
L_08A978DC:;
    ST32(a0, a2);
    a2 = LD32(t1+228);
    a0 = a2 | a3;
    ST32(t1+228, a0);
    return (u64)v0 | ((u64)v1 << 32);
L_08A978F0:;
    t1 = 2;
    cnd_ = a1 == t1;
    v1 = t0 + 31936;
    if (cnd_) { goto L_08A97938; }
    goto L_08A978FC;
L_08A978FC:;
    t2 = 21;
    cnd_ = a1 != t2;
    t1 = t0 + 31936;
    if (cnd_) { goto L_08A978DC; }
    goto L_08A97908;
L_08A97908:;
    t0 = D_08C37CC0 - (31936);
    a1 = t0 + 31936;
    t6 = LD32(a1+228);
    t5 = t6 & a3;
    cnd_ = t5 != 0;
    if (cnd_) { t1 = t0 + 31936; goto L_08A978DC; }
    goto L_08A97920;
L_08A97920:;
    t8 = LD32(a1+224);
    t9 = 0x10000u;
    t7 = t8 | t9;
    ST32(a1+224, t7);
    ST32(a2, t7);
    goto L_08A978D4;
L_08A97938:;
    t3 = LD32(v1+228);
    a1 = t3 & a3;
    cnd_ = a1 != 0;
    if (cnd_) { t1 = t0 + 31936; goto L_08A978DC; }
    goto L_08A97948;
L_08A97948:;
    t4 = LD32(v1+192);
    ST32(a2, t4);
    v0 = LD32(v1+196);
    ST32(a2+4, v0);
    a2 = a2 + 8;
    goto L_08A978D8;
}

/* 08A97960 */
u64 func_08A97960(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
L_08A97960:;
    t0 = D_08AEA990 - (-22128);
    a3 = a0 << 2;
    v1 = t0 - 22128;
    a2 = a3 + v1;
    v1 = LD32(a2);
    a1 = a0 + 0;
    t2 = D_08C38260 - (-32160);
    a0 = 1;
    t1 = D_08C37CC0 - (31936);
    a2 = LD32(t2-32160);
    a3 = a0 << (a1 & 31);
    cnd_ = v1 == 0;
    t0 = t2 - 32160;
    if (cnd_) { goto L_08A979B8; }
    goto L_08A97994;
L_08A97994:;
    ST32(a2, v1);
    goto L_08A97998;
L_08A97998:;
    a2 = a2 + 4;
    t9 = t1 + 31936;
    goto L_08A979A0;
L_08A979A0:;
    a0 = LD32(t9+228);
    t2 = ~(0 | a3);
    ST32(t0, a2);
    t1 = a0 & t2;
    ST32(t9+228, t1);
    return (u64)v0 | ((u64)v1 << 32);
L_08A979B8:;
    t2 = 2;
    cnd_ = a1 == t2;
    v1 = t1 + 31936;
    if (cnd_) { goto L_08A979FC; }
    goto L_08A979C4;
L_08A979C4:;
    t3 = 21;
    cnd_ = a1 != t3;
    t9 = t1 + 31936;
    if (cnd_) { goto L_08A979A0; }
    goto L_08A979D0;
L_08A979D0:;
    t1 = D_08C37CC0 - (31936);
    v1 = t1 + 31936;
    t7 = LD32(v1+228);
    t6 = t7 & a3;
    cnd_ = t6 == 0;
    t9 = t1 + 31936;
    if (cnd_) { goto L_08A979A0; }
    goto L_08A979E8;
L_08A979E8:;
    t8 = LD32(v1+224);
    t8 = (t8 & ~(0x1u << 16)) | ((0 & 0x1) << 16);
    ST32(v1+224, t8);
    ST32(a2, t8);
    goto L_08A97998;
L_08A979FC:;
    t4 = LD32(v1+228);
    a1 = t4 & a3;
    cnd_ = a1 == 0;
    t9 = t1 + 31936;
    if (cnd_) { goto L_08A979A0; }
    goto L_08A97A0C;
L_08A97A0C:;
    t5 = LD32(v1+200);
    ST32(a2, t5);
    v0 = LD32(v1+204);
    ST32(a2+4, v0);
    a2 = a2 + 8;
    goto L_08A979A0;
}

/* 08A97A24 */
void func_08A97A24(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97A24:;
    sp = sp - 16;
    a3 = D_08C37CC0 - (31936);
    t3 = a3 + 31936;
    t4 = LD32(t3+368);
    a2 = D_08C38260 - (-32160);
    a0 = a2 - 32160;
    t0 = t4 - 1;
    a1 = LD32(a0+16);
    t5 = LD32(a2-32160);
    v1 = t0 << 2;
    t1 = v1 + t3;
    t7 = t5 - a1;
    t2 = LD32(t1+240);
    t5 = LD32(a0+24);
    v0 = (t7 >> 24) & 0x1f;
    t8 = 0x10000000u;
    t6 = 0x9000000u;
    t1 = t8 + 0;
    t1 = (t1 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    v0 = t6 + 0;
    v0 = (v0 & ~(0xffffffu << 0)) | ((t7 & 0xffffff) << 0);
    ST32(t3+368, t0);
    t4 = t3 + 0;
    a1 = t2 + 4;
    ST32(t2, t1);
    t0 = a2 - 32160;
    cnd_ = t5 != 0;
    ST32(t2+4, v0);
    if (cnd_) { goto L_08A97AAC; }
    goto L_08A97A98;
L_08A97A98:;
    t9 = LD32(t3+368);
    cnd_ = t9 != 0;
    if (cnd_) { t3 = LD_U8(t4+52); goto L_08A97AB0; }
    goto L_08A97AA4;
L_08A97AA4:;
    t2 = 1;
    ST8(t3+52, t2);
    goto L_08A97AAC;
L_08A97AAC:;
    t3 = LD_U8(t4+52);
    goto L_08A97AB0;
L_08A97AB0:;
    cnd_ = t3 != 0;
    if (cnd_) { goto L_08A97AD0; }
    goto L_08A97AB8;
L_08A97AB8:;
    v1 = 0 + 0;
    goto L_08A97AC0;
L_08A97AC0:;
    a2 = 0 + 0;
    v0 = (s32)v1 < (s32)a2 ? v1 : a2;
    sp = sp + 16;
    return;
L_08A97AD0:;
    a0 = LD32(t0+32);
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97AD8;
L_08A97AD8:;
    cnd_ = (s32)v0 >= 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08A97AB8; }
    goto L_08A97AE0;
L_08A97AE0:;
    goto L_08A97AC0;
}

/* 08A97AE8 */
u64 func_08A97AE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97AE8:;
    t5 = D_08C38260 - (-32160);
    t7 = t5 - 32160;
    t8 = LD32(t7+16);
    v1 = D_08C37CF4 - (31988);
    t2 = 0x1000000u;
    t9 = t0 - t8;
    v0 = (t9 >> 24) & 0x1f;
    t4 = 0x10000000u;
    t6 = LD_U8(v1+31988);
    t3 = t4 + 0;
    t3 = (t3 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    t4 = t2 + 0;
    t4 = (t4 & ~(0xffffffu << 0)) | ((t9 & 0xffffff) << 0);
    t9 = a3 - t8;
    t0 = (t9 >> 24) & 0x1f;
    t1 = 0x10000000u;
    t8 = 0x2000000u;
    v1 = t0 + 0;
    t0 = t1 + 0;
    t0 = (t0 & ~(0x1fu << 16)) | ((v1 & 0x1f) << 16);
    t1 = t8 + 0;
    t1 = (t1 & ~(0xffffffu << 0)) | ((t9 & 0xffffff) << 0);
    t9 = 0x4000000u;
    t8 = 0x12000000u;
    v1 = t9 + 0;
    v1 = (v1 & ~(0x7u << 16)) | ((a0 & 0x7) << 16);
    sp = sp - 16;
    a0 = t8 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    a1 = a2 & 0xffff;
    v1 = (v1 & ~(0xffffu << 0)) | ((a1 & 0xffff) << 0);
    cnd_ = a3 == 0;
    v0 = LD32(t5-32160);
    if (cnd_) { goto L_08A97B7C; }
    goto L_08A97B70;
L_08A97B70:;
    ST32(v0, t0);
    ST32(v0+4, t1);
    v0 = v0 + 8;
    goto L_08A97B7C;
L_08A97B7C:;
    ST32(v0, a0);
    a0 = v0 + 16;
    a1 = a0 + 0;
    ST32(v0+4, t3);
    ST32(v0+8, t4);
    ST32(v0+12, v1);
    cnd_ = t6 != 0;
    ST32(t5-32160, a0);
    if (cnd_) { goto L_08A97BA8; }
    goto L_08A97B9C;
L_08A97B9C:;
    goto L_08A97BA0;
L_08A97BA0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08A97BA8:;
    a0 = LD32(t7+32);
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97BB0;
L_08A97BB0:;
    goto L_08A97BA0;
}

/* 08A97BB8 */
void func_08A97BB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97BB8:;
    t5 = D_08C38260 - (-32160);
    t7 = t5 - 32160;
    v1 = LD32(t7+16);
    sp = sp - 16;
    t4 = a2 & 0xffff;
    t6 = a0 + 0;
    t3 = a1 + 0;
    t1 = t1 - v1;
    a2 = t0 - v1;
    cnd_ = t0 == 0;
    t2 = LD32(t5-32160);
    if (cnd_) { goto L_08A97C10; }
    goto L_08A97BE8;
L_08A97BE8:;
    v0 = (a2 >> 24) & 0x1f;
    t8 = 0x10000000u;
    t0 = 0x2000000u;
    a1 = t8 + 0;
    a1 = (a1 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    v0 = t0 + 0;
    v0 = (v0 & ~(0xffffffu << 0)) | ((a2 & 0xffffff) << 0);
    ST32(t2, a1);
    ST32(t2+4, v0);
    t2 = t2 + 8;
    goto L_08A97C10;
L_08A97C10:;
    a0 = 0x12000000u;
    v1 = (t1 >> 24) & 0x1f;
    a1 = a0 + 0;
    a1 = (a1 & ~(0xffffffu << 0)) | ((t3 & 0xffffff) << 0);
    t9 = 0x10000000u;
    t3 = 0x1000000u;
    a2 = t9 + 0;
    a2 = (a2 & ~(0x1fu << 16)) | ((v1 & 0x1f) << 16);
    a0 = t3 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((t1 & 0xffffff) << 0);
    t1 = 0x4000000u;
    v0 = t1 + 0;
    v0 = (v0 & ~(0x7u << 16)) | ((t6 & 0x7) << 16);
    t0 = v0 + 0;
    t0 = (t0 & ~(0xffffu << 0)) | ((t4 & 0xffff) << 0);
    ST32(t2, a1);
    v1 = 0 + 0;
    ST32(t2+4, a2);
    ST32(t2+8, a0);
    cnd_ = a3 == 0;
    t2 = t2 + 12;
    if (cnd_) { goto L_08A97C78; }
    goto L_08A97C64;
L_08A97C64:;
    v1 = v1 + 1;
    a1 = v1 < a3;
    ST32(t2, t0);
    cnd_ = a1 != 0;
    t2 = t2 + 4;
    if (cnd_) { goto L_08A97C64; }
    goto L_08A97C78;
L_08A97C78:;
    a3 = D_08C37CF4 - (31988);
    a2 = LD_U8(a3+31988);
    ST32(t7, t2);
    cnd_ = a2 != 0;
    v0 = t5 - 32160;
    if (cnd_) { goto L_08A97C98; }
    goto L_08A97C8C;
L_08A97C8C:;
    goto L_08A97C90;
L_08A97C90:;
    sp = sp + 16;
    return;
L_08A97C98:;
    a0 = LD32(v0+32);
    a1 = t2 + 0;
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97CA4;
L_08A97CA4:;
    goto L_08A97C90;
}

/* 08A97CAC */
void func_08A97CAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97CAC:;
    t5 = D_08C38260 - (-32160);
    t7 = t5 - 32160;
    t8 = LD32(t7+16);
    v1 = D_08C37CF4 - (31988);
    t4 = 0x10000000u;
    t9 = t0 - t8;
    v0 = (t9 >> 24) & 0x1f;
    t2 = 0x1000000u;
    t6 = LD_U8(v1+31988);
    t3 = t4 + 0;
    t3 = (t3 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    t4 = t2 + 0;
    t4 = (t4 & ~(0xffffffu << 0)) | ((t9 & 0xffffff) << 0);
    t9 = a3 - t8;
    t0 = (t9 >> 24) & 0x1f;
    t1 = 0x10000000u;
    t8 = 0x2000000u;
    v1 = t0 + 0;
    t0 = t1 + 0;
    t0 = (t0 & ~(0x1fu << 16)) | ((v1 & 0x1f) << 16);
    t2 = 0x12000000u;
    t1 = t8 + 0;
    t1 = (t1 & ~(0xffffffu << 0)) | ((t9 & 0xffffff) << 0);
    v0 = a2 & 0xff;
    t9 = 0x5000000u;
    sp = sp - 16;
    v1 = a0 + 0;
    a0 = t2 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((v1 & 0xffffff) << 0);
    t8 = a1 & 0xff;
    v1 = t9 + 0;
    v1 = (v1 & ~(0xffu << 8)) | ((v0 & 0xff) << 8);
    v1 = (v1 & ~(0xffu << 0)) | ((t8 & 0xff) << 0);
    cnd_ = a3 == 0;
    v0 = LD32(t5-32160);
    if (cnd_) { goto L_08A97D48; }
    goto L_08A97D3C;
L_08A97D3C:;
    ST32(v0, t0);
    ST32(v0+4, t1);
    v0 = v0 + 8;
    goto L_08A97D48;
L_08A97D48:;
    ST32(v0, a0);
    a0 = v0 + 16;
    a1 = a0 + 0;
    ST32(v0+4, t3);
    ST32(v0+8, t4);
    ST32(v0+12, v1);
    cnd_ = t6 != 0;
    ST32(t5-32160, a0);
    if (cnd_) { goto L_08A97D74; }
    goto L_08A97D68;
L_08A97D68:;
    goto L_08A97D6C;
L_08A97D6C:;
    sp = sp + 16;
    return;
L_08A97D74:;
    a0 = LD32(t7+32);
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97D7C;
L_08A97D7C:;
    goto L_08A97D6C;
}

/* 08A97D84 */
void func_08A97D84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97D84:;
    t5 = D_08C38260 - (-32160);
    t9 = t5 - 32160;
    t4 = LD32(t9+16);
    v1 = D_08C37CF4 - (31988);
    t7 = 0x10000000u;
    t2 = t2 - t4;
    v0 = (t2 >> 24) & 0x1f;
    t3 = 0x1000000u;
    t4 = t1 - t4;
    t8 = LD_U8(v1+31988);
    t6 = t7 + 0;
    t6 = (t6 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    t7 = t3 + 0;
    t7 = (t7 & ~(0xffffffu << 0)) | ((t2 & 0xffffff) << 0);
    t2 = (t4 >> 24) & 0x1f;
    v0 = 0x10000000u;
    t3 = v0 + 0;
    t3 = (t3 & ~(0x1fu << 16)) | ((t2 & 0x1f) << 16);
    t2 = 0x2000000u;
    v0 = t4 + 0;
    t4 = t2 + 0;
    t4 = (t4 & ~(0xffffffu << 0)) | ((v0 & 0xffffff) << 0);
    v0 = 0x12000000u;
    t2 = v0 + 0;
    t2 = (t2 & ~(0xffffffu << 0)) | ((a0 & 0xffffff) << 0);
    v0 = 0x6000000u;
    v1 = v0 + 0;
    v1 = (v1 & ~(0x3u << 18)) | ((t0 & 0x3) << 18);
    a0 = v1 + 0;
    a0 = (a0 & ~(0x3u << 16)) | ((a3 & 0x3) << 16);
    t0 = a2 & 0xff;
    v0 = a0 + 0;
    v0 = (v0 & ~(0xffu << 8)) | ((t0 & 0xff) << 8);
    sp = sp - 16;
    a3 = a1 & 0xff;
    v1 = v0 + 0;
    v1 = (v1 & ~(0xffu << 0)) | ((a3 & 0xff) << 0);
    cnd_ = t1 == 0;
    v0 = LD32(t5-32160);
    if (cnd_) { goto L_08A97E30; }
    goto L_08A97E24;
L_08A97E24:;
    ST32(v0, t3);
    ST32(v0+4, t4);
    v0 = v0 + 8;
    goto L_08A97E30;
L_08A97E30:;
    a0 = v0 + 16;
    ST32(v0, t2);
    a1 = a0 + 0;
    ST32(v0+4, t6);
    ST32(v0+8, t7);
    ST32(v0+12, v1);
    cnd_ = t8 != 0;
    ST32(t5-32160, a0);
    if (cnd_) { goto L_08A97E5C; }
    goto L_08A97E50;
L_08A97E50:;
    goto L_08A97E54;
L_08A97E54:;
    sp = sp + 16;
    return;
L_08A97E5C:;
    a0 = LD32(t9+32);
    v0 = sceGeListUpdateStallAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A97E64;
L_08A97E64:;
    goto L_08A97E54;
}

/* 08A97E6C */
void func_08A97E6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2)
{
    u32 v0 = 0, v1 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A97E6C:;
    sp = sp - 16;
    t7 = D_08C38260 - (-32160);
    t9 = t7 - 32160;
    s2 = (u32)(s32)(s16)a2;
    s1 = (u32)(s32)(s16)a1;
    a3 = (u32)(s32)(s16)a3;
    s0 = (u32)(s32)(s16)a0;
    t6 = LD32(t7-32160);
    t5 = LD32(t9+4);
    t3 = t6 + 11;
    t3 = (t3 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    t4 = t3 + 20;
    v1 = (s32)t4 < (s32)t5;
    cnd_ = v1 != 0;
    t0 = (u32)(s32)(s16)t0;
    if (cnd_) { goto L_08A97FF4; }
    goto L_08A97EB4;
L_08A97EB4:;
    t8 = LD32(t9+16);
    t5 = 0 + 0;
    goto L_08A97EBC;
L_08A97EBC:;
    v1 = D_08C37CC0 - (31936);
    t6 = v1 + 31936;
    a2 = LD_U16(t6+218);
    t4 = LD_U16(t6+216);
    t3 = t1 & 0x1;
    a0 = t0 + a2;
    a1 = a3 + t4;
    a2 = (u32)(s32)(s16)a1;
    cnd_ = t3 == 0;
    a1 = (u32)(s32)(s16)a0;
    if (cnd_) { goto L_08A97EF4; }
    goto L_08A97EE4;
L_08A97EE4:;
    v0 = a3 ^ a2;
    a2 = v0 ^ a2;
    t7 = v0 ^ a2;
    a3 = (u32)(s32)(s16)t7;
    goto L_08A97EF4;
L_08A97EF4:;
    t3 = t1 & 0x2;
    cnd_ = t3 == 0;
    ST16(t5, a3);
    if (cnd_) { goto L_08A97F14; }
    goto L_08A97F00;
L_08A97F00:;
    a0 = t0 ^ a1;
    t4 = a0 ^ a1;
    a1 = (u32)(s32)(s16)t4;
    t1 = a0 ^ a1;
    t0 = (u32)(s32)(s16)t1;
    goto L_08A97F14;
L_08A97F14:;
    t3 = s0 + 0;
    t4 = s1 + 0;
    ST16(t5+2, t0);
    a3 = t2 & 0x2;
    ST16(t5+10, a2);
    ST16(t5+12, a1);
    s1 = LD_U16(t6+222);
    s0 = LD_U16(t6+220);
    t0 = t4 + s1;
    t6 = t3 + s0;
    t7 = (u32)(s32)(s16)t6;
    cnd_ = a3 == 0;
    t6 = (u32)(s32)(s16)t0;
    if (cnd_) { goto L_08A97F58; }
    goto L_08A97F48;
L_08A97F48:;
    a2 = t3 ^ t7;
    t7 = a2 ^ t7;
    a1 = a2 ^ t7;
    t3 = (u32)(s32)(s16)a1;
    goto L_08A97F58;
L_08A97F58:;
    t1 = t2 << 1;
    v1 = t2 ^ t1;
    t2 = v1 & 0x2;
    cnd_ = t2 == 0;
    s0 = LD32(t9);
    if (cnd_) { goto L_08A97F80; }
    goto L_08A97F6C;
L_08A97F6C:;
    a0 = t4 ^ t6;
    a3 = a0 ^ t6;
    t6 = (u32)(s32)(s16)a3;
    v0 = a0 ^ t6;
    t4 = (u32)(s32)(s16)v0;
    goto L_08A97F80;
L_08A97F80:;
    s1 = t5 - t8;
    v0 = (s1 >> 24) & 0x1f;
    t0 = 0x12800000u;
    t2 = 0x4060000u;
    a2 = 0x10000000u;
    a3 = 0x1000000u;
    t1 = a2 + 0;
    t1 = (t1 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    t8 = t2 | 0x2;
    a0 = a3 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((s1 & 0xffffff) << 0);
    s1 = t0 | 0x102;
    a1 = s0 + 16;
    ST32(s0, s1);
    ST16(t5+18, s2);
    ST32(s0+4, t1);
    ST32(s0+8, a0);
    ST32(s0+12, t8);
    ST16(t5+8, s2);
    ST32(t9, a1);
    ST16(t5+4, t3);
    ST16(t5+6, t4);
    ST16(t5+14, t7);
    ST16(t5+16, t6);
    sp = sp + 16;
    return;
L_08A97FF4:;
    t8 = LD32(t9+16);
    t5 = 0x10000000u;
    ST32(t7-32160, t4);
    a1 = t4 - t8;
    v0 = (a1 >> 24) & 0x1f;
    a2 = t5 + 0;
    a2 = (a2 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    t5 = 0x8000000u;
    v0 = t5 + 0;
    v0 = (v0 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    ST32(t6+4, v0);
    t5 = t3 + 0;
    ST32(t6, a2);
    goto L_08A97EBC;
}

/* 08A9802C */
void func_08A9802C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v1 = 0, t0 = 0;
L_08A9802C:;
    t0 = D_08C37CC0 - (31936);
    v1 = t0 + 31936;
    ST16(v1+222, a3);
    ST16(v1+216, a0);
    ST16(v1+218, a1);
    ST16(v1+220, a2);
    return;
}

/* 08A98048 */
void func_08A98048(u32 a0)
{
    u32 v1 = 0;
L_08A98048:;
    v1 = D_08C37D90 - (32144);
    ST32(v1+32144, a0);
    return;
}

/* 08A98054 */
void func_08A98054(u32 a0)
{
    u32 v1 = 0;
L_08A98054:;
    v1 = D_08C37D94 - (32148);
    ST8(v1+32148, a0);
    return;
}

/* 08A98060 */
void func_08A98060(u32 a0)
{
    u32 v1 = 0;
L_08A98060:;
    v1 = D_08C37D96 - (32150);
    ST16(v1+32150, a0);
    return;
}

/* 08A9806C */
void func_08A9806C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9806C:;
    sp = sp - 16;
    v1 = D_08C37CC0 - (31936);
    a2 = v1 + 31936;
    a3 = a2 + 68;
    s1 = a0 + 0;
    a1 = LD32(a2+64);
    v0 = a1 << 4;
    a1 = v0 + a3;
    t5 = LD_U16(a1+12);
    t6 = LD_U16(a1+14);
    v1 = t5 + t6;
    cnd_ = v1 == 0;
    t4 = LD_U16(a2+214);
    if (cnd_) { goto L_08A9817C; }
    goto L_08A980A8;
L_08A980A8:;
    a0 = LD32(a2+208);
    t1 = LD_U8(a2+212);
    s0 = D_08C38260 - (-32160);
    a0 = (a0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t0 = t1 << 24;
    a2 = s1 & 0x10;
    t3 = t0 | a0;
    cnd_ = a2 != 0;
    t9 = s0 - 32160;
    if (cnd_) { goto L_08A981C4; }
    goto L_08A980CC;
L_08A980CC:;
    t7 = LD32(s0-32160);
    a3 = LD32(t9+4);
    t0 = t7 + 11;
    t0 = (t0 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    t1 = t0 + 24;
    t2 = (s32)t1 < (s32)a3;
    cnd_ = t2 != 0;
    t8 = 2;
    if (cnd_) { goto L_08A9818C; }
    goto L_08A980EC;
L_08A980EC:;
    t2 = LD32(t9+16);
    a3 = 0 + 0;
    goto L_08A980F4;
L_08A980F4:;
    ST32(a3+12, t3);
    ST16(a3+16, t5);
    ST16(a3+18, t6);
    ST16(a3+20, t4);
    ST32(a3, t3);
    ST16(a3+4, 0);
    ST16(a3+6, 0);
    ST16(a3+8, t4);
    goto L_08A98114;
L_08A98114:;
    t3 = LD32(t9);
    s0 = a3 - t2;
    t2 = 0xd3000000u;
    a1 = t2 | 0x1;
    t4 = (s0 >> 24) & 0x1f;
    t0 = 0x10000000u;
    t7 = 0x12800000u;
    a0 = 0x1000000u;
    a2 = 0x4060000u;
    t1 = a1 + 0;
    t1 = (t1 & ~(0x7u << 8)) | ((s1 & 0x7) << 8);
    t2 = t0 + 0;
    t2 = (t2 & ~(0x1fu << 16)) | ((t4 & 0x1f) << 16);
    t5 = t8 | a2;
    t0 = a0 + 0;
    t0 = (t0 & ~(0xffffffu << 0)) | ((s0 & 0xffffff) << 0);
    s1 = t3 + 24;
    t6 = t7 | 0x11c;
    t4 = 0xd3000000u;
    ST32(t9, s1);
    ST32(t3, t1);
    ST32(t3+4, t6);
    ST32(t3+8, t2);
    ST32(t3+12, t0);
    ST32(t3+16, t5);
    ST32(t3+20, t4);
    goto L_08A9817C;
L_08A9817C:;
    sp = sp + 16;
    return;
L_08A9818C:;
    t2 = LD32(t9+16);
    a3 = 0x10000000u;
    ST32(s0-32160, t1);
    a1 = t1 - t2;
    v0 = (a1 >> 24) & 0x1f;
    a2 = a3 + 0;
    a2 = (a2 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    a3 = 0x8000000u;
    v0 = a3 + 0;
    v0 = (v0 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    ST32(t7+4, v0);
    a3 = t0 + 0;
    ST32(t7, a2);
    goto L_08A980F4;
L_08A981C4:;
    a0 = LD32(a1+8);
    t7 = 4;
    v0 = 6;
    a2 = a0 ^ 0x3;
    if (a2 != 0) t7 = v0;
    t2 = 1;
    a1 = t2 << (t7 & 31);
    t2 = a1 & 0xffff;
    a3 = t5 + t2;
    t8 = a3 - 1;
    t1 = (u32)((s32)t8 >> (t7 & 31));
    t7 = LD32(s0-32160);
    t8 = t1 << 1;
    t0 = t8 << 1;
    a0 = t0 + t8;
    a2 = LD32(t9+4);
    t1 = t7 + 11;
    v1 = a0 << 2;
    t1 = (t1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    t0 = t1 + v1;
    a1 = (s32)t0 < (s32)a2;
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08A98254; }
    goto L_08A98220;
L_08A98220:;
    v1 = LD32(t9+16);
    a3 = 0x10000000u;
    ST32(s0-32160, t0);
    a0 = t0 - v1;
    v0 = (a0 >> 24) & 0x1f;
    a2 = a3 + 0;
    a2 = (a2 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    a3 = 0x8000000u;
    v0 = a3 + 0;
    v0 = (v0 & ~(0xffffffu << 0)) | ((a0 & 0xffffff) << 0);
    ST32(t7+4, v0);
    a3 = t1 + 0;
    ST32(t7, a2);
    goto L_08A98254;
L_08A98254:;
    s0 = t2 < t5;
    a1 = t2 + 0;
    ST32(a3, t3);
    a0 = a3 + 12;
    ST16(a3+4, 0);
    ST16(a3+6, 0);
    cnd_ = s0 == 0;
    ST16(a3+8, t4);
    if (cnd_) { goto L_08A982A8; }
    goto L_08A98274;
L_08A98274:;
    t1 = a1 + t2;
    ST16(a0+4, a1);
    ST16(a0+16, a1);
    a1 = t1 & 0xffff;
    t0 = a1 < t5;
    ST32(a0, t3);
    ST16(a0+6, t6);
    ST16(a0+8, t4);
    ST32(a0+12, t3);
    ST16(a0+18, 0);
    ST16(a0+20, t4);
    cnd_ = t0 != 0;
    a0 = a0 + 24;
    if (cnd_) { goto L_08A98274; }
    goto L_08A982A8;
L_08A982A8:;
    ST16(a0+8, t4);
    ST32(a0, t3);
    ST16(a0+4, t5);
    ST16(a0+6, t6);
    t2 = LD32(t9+16);
    goto L_08A98114;
}

/* 08A982C0 */
void func_08A982C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, t8 = 0, t9 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32); memcpy(stack_ + 32, PTR(sp_in), 16); /* stack-passed arguments */
L_08A982C0:;
    sp = sp - 32;
    v0 = (t2 >> 24) & 0x1f;
    t5 = 0xb5000000u;
    s4 = LD32(sp+40);
    a2 = a2 & 0xffff;
    t6 = (s4 >> 24) & 0x1f;
    s2 = LD_U16(sp+32);
    s1 = 0xb3000000u;
    t7 = t0 - 1;
    s0 = s1 + 0;
    s0 = (s0 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    s1 = t5 + 0;
    s1 = (s1 & ~(0x1fu << 16)) | ((t6 & 0x1f) << 16);
    v0 = 0xec000000u;
    t6 = 0xeb000000u;
    t5 = t6 + 0;
    t5 = (t5 & ~(0x3ffu << 10)) | ((a2 & 0x3ff) << 10);
    a2 = v0 + 0;
    a2 = (a2 & ~(0x3ffu << 10)) | ((s2 & 0x3ff) << 10);
    t0 = s0 + 0;
    t0 = (t0 & ~(0x7ffu << 0)) | ((t1 & 0x7ff) << 0);
    s0 = LD32(sp+36);
    t9 = D_08C38260 - (-32160);
    t8 = LD32(t9-32160);
    t4 = a3 - 1;
    s3 = t7 & 0xffff;
    s2 = 0xee000000u;
    t3 = t3 & 0xffff;
    v1 = s2 + 0;
    v1 = (v1 & ~(0x3ffu << 10)) | ((s3 & 0x3ff) << 10);
    t1 = s1 + 0;
    t1 = (t1 & ~(0x7ffu << 0)) | ((s0 & 0x7ff) << 0);
    s3 = t4 & 0xffff;
    s0 = a2 + 0;
    s0 = (s0 & ~(0x3ffu << 0)) | ((t3 & 0x3ff) << 0);
    t7 = 0xea000000u;
    a1 = a1 & 0xffff;
    a2 = 0xb2000000u;
    t3 = v1 + 0;
    t3 = (t3 & ~(0x3ffu << 0)) | ((s3 & 0x3ff) << 0);
    t6 = t5 + 0;
    t6 = (t6 & ~(0x3ffu << 0)) | ((a1 & 0x3ff) << 0);
    s2 = (s32)a0 < 3;
    a1 = a2 + 0;
    a1 = (a1 & ~(0xffffffu << 0)) | ((t2 & 0xffffff) << 0);
    t4 = t7 | 0x1;
    a3 = 0xb4000000u;
    v1 = 0xea000000u;
    a2 = a3 + 0;
    a2 = (a2 & ~(0xffffffu << 0)) | ((s4 & 0xffffff) << 0);
    if (s2 != 0) t4 = v1;
    ST32(t8+20, s0);
    v0 = t8 + 32;
    ST32(t9-32160, v0);
    ST32(t8, a1);
    ST32(t8+4, t0);
    ST32(t8+8, a2);
    ST32(t8+12, t1);
    ST32(t8+16, t6);
    ST32(t8+24, t3);
    ST32(t8+28, t4);
    sp = sp + 32;
    return;
}

/* 08A983E4 */
void func_08A983E4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A983E4:;
    t8 = D_08C37CC0 - (31936);
    t4 = t8 + 31936;
    v0 = LD32(t4+64);
    t7 = 1;
    t3 = t4 + 68;
    t6 = t7 - v0;
    t5 = t6 << 4;
    t2 = a0 + 0;
    a0 = t5 + t3;
    ST32(a0+8, t2);
    t1 = a2 & 0xffff;
    sp = sp - 16;
    t0 = LD32(t4+64);
    a0 = 1;
    a3 = t0 << 4;
    v1 = a3 + t3;
    ST32(v1+8, t2);
    ST32(v1, a1);
    ST32(v1+4, t1);
    func_08A99660(a0, t2, t3);
    goto L_08A98438;
L_08A98438:;
    func_08A9971C();
    goto L_08A98440;
L_08A98440:;
    sp = sp + 16;
    return;
}

/* 08A9844C */
void func_08A9844C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
L_08A9844C:;
    t0 = D_08C38260 - (-32160);
    t3 = LD32(t0-32160);
    v0 = (a1 >> 24) & 0x1f;
    t5 = 0x9d000000u;
    a3 = t5 + 0;
    a3 = (a3 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    t4 = a2 & 0xffff;
    t1 = a3 + 0;
    t1 = (t1 & ~(0x7ffu << 0)) | ((t4 & 0x7ff) << 0);
    t2 = 0xd2000000u;
    a3 = 0x9c000000u;
    a2 = t2 + 0;
    a2 = (a2 & ~(0x3u << 0)) | ((a0 & 0x3) << 0);
    a0 = a3 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    v1 = t3 + 12;
    ST32(t0-32160, v1);
    ST32(t3, a0);
    ST32(t3+4, t1);
    ST32(t3+8, a2);
    return;
}

/* 08A984A0 */
void func_08A984A0(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
L_08A984A0:;
    t5 = D_08C38260 - (-32160);
    t3 = LD32(t5-32160);
    t1 = 0x9f000000u;
    t6 = (a0 >> 24) & 0x1f;
    a2 = t1 + 0;
    a2 = (a2 & ~(0x1fu << 16)) | ((t6 & 0x1f) << 16);
    t4 = a1 & 0xffff;
    a3 = D_08C37D24 - (32036);
    t2 = 0x9e000000u;
    t1 = a2 + 0;
    t1 = (t1 & ~(0x7ffu << 0)) | ((t4 & 0x7ff) << 0);
    t0 = a3 + 32036;
    a2 = t2 + 0;
    a2 = (a2 & ~(0xffffffu << 0)) | ((a0 & 0xffffff) << 0);
    v0 = t3 + 8;
    ST32(t0+4, t4);
    ST32(t5-32160, v0);
    ST32(a3+32036, a0);
    ST32(t3, a2);
    ST32(t3+4, t1);
    return;
}

/* 08A984F4 */
void func_08A984F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A984F4:;
    sp = sp - 16;
    t7 = D_08C37CC0 - (31936);
    t2 = t7 + 31936;
    v0 = LD32(t2+64);
    t6 = 1;
    t4 = t2 + 68;
    t5 = t6 - v0;
    t1 = t5 << 4;
    t2 = t1 + t4;
    t3 = a0 + 0;
    v1 = a1 & 0xffff;
    ST16(t2+14, t0);
    a0 = 1;
    ST32(t2, t3);
    ST32(t2+4, v1);
    ST32(t2+8, a2);
    ST16(t2+12, a3);
    func_08A99660(a0, t2, t3);
    goto L_08A98540;
L_08A98540:;
    sp = sp + 16;
    return;
}

/* 08A9854C */
void func_08A9854C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9854C:;
    sp = sp - 16;
    t4 = D_08C37CC0 - (31936);
    t1 = t4 + 31936;
    v1 = LD32(t1+64);
    t3 = 1;
    t6 = t1 + 68;
    t9 = t3 - v1;
    t8 = t9 << 4;
    t4 = t8 + t6;
    t5 = a3 & 0xffff;
    ST32(t4+4, t5);
    t3 = a0 & 0xffff;
    t2 = a1 & 0xffff;
    t7 = LD32(t1+64);
    ST16(t4+14, t2);
    a0 = t7 << 4;
    t0 = a0 + t6;
    ST16(t4+12, t3);
    a0 = 1;
    ST16(t0+14, t2);
    ST32(t4, a2);
    ST32(t0+4, t5);
    ST16(t0+12, t3);
    func_08A99660(a0, t2, t3);
    goto L_08A985B0;
L_08A985B0:;
    func_08A9971C();
    goto L_08A985B8;
L_08A985B8:;
    sp = sp + 16;
    return;
}

/* 08A985C4 */
void func_08A985C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A985C4:;
    sp = sp - 16;
    t7 = D_08C37CC0 - (31936);
    t2 = t7 + 31936;
    v0 = LD32(t2+64);
    t6 = 1;
    t4 = t2 + 68;
    t5 = t6 - v0;
    t3 = t5 << 4;
    t2 = t3 + t4;
    v1 = a0 + 0;
    t1 = t0 & 0xffff;
    ST16(t2+14, a2);
    a0 = 1;
    ST32(t2, a3);
    ST32(t2+4, t1);
    ST32(t2+8, v1);
    ST16(t2+12, a1);
    func_08A99660(a0, t2, t3);
    goto L_08A98610;
L_08A98610:;
    sp = sp + 16;
    return;
}

/* 08A9861C */
u32 func_08A9861C(u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9861C:;
    sp = sp - 16;
    v1 = D_08C37CC0 - (31936);
    a2 = v1 + 31936;
    t2 = 1;
    t1 = a2 + 68;
    v0 = LD32(a2+64);
    a0 = LD32(a2+4);
    a3 = t2 - v0;
    ST32(a2+64, a3);
    t0 = a3 << 4;
    s0 = t0 + t1;
    func_08A99660(a0, t2, t3);
    goto L_08A98654;
L_08A98654:;
    func_08A9971C();
    goto L_08A9865C;
L_08A9865C:;
    v0 = LD32(s0);
    sp = sp + 16;
    return v0;
}

/* 08A98670 */
void func_08A98670(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
L_08A98670:;
    v0 = a2 & 0xffff;
    t1 = a3 & 0xffff;
    f11 = BITSF(v0);
    f3 = BITSF(t1);
    v1 = a0 & 0xffff;
    t6 = a1 & 0xffff;
    t5 = D_08AF0940 - (2368);
    t2 = D_08AF0944 - (2372);
    f10 = (float)(s32)FBITS(f11);
    f8 = (float)(s32)FBITS(f3);
    f2 = BITSF(v1);
    f4 = BITSF(t6);
    f9 = BITSF(LD32(t5+2368));
    f1 = BITSF(LD32(t2+2372));
    f5 = (float)(s32)FBITS(f2);
    f7 = f10 * f9;
    f6 = f8 * f1;
    f0 = (float)(s32)FBITS(f4);
    t6 = D_08C38260 - (-32160);
    t4 = FBITS(f7);
    t3 = FBITS(f6);
    a0 = FBITS(f5);
    t9 = FBITS(f0);
    t2 = LD32(t6-32160);
    t8 = t4 >> 8;
    t7 = t3 >> 8;
    t0 = a0 >> 8;
    t1 = t9 >> 8;
    a1 = 0x42000000u;
    a2 = 0x43000000u;
    a3 = 0x45000000u;
    v0 = 0x46000000u;
    t5 = t8 | a1;
    t4 = t7 | a2;
    t3 = t0 | a3;
    a0 = t1 | v0;
    v1 = t2 + 16;
    ST32(t6-32160, v1);
    ST32(t2, t5);
    ST32(t2+4, t4);
    ST32(t2+8, t3);
    ST32(t2+12, a0);
    return;
}

/* 08A9871C */
void func_08A9871C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int cnd_;
L_08A9871C:;
    v1 = a0 & 0xffff;
    a1 = a1 & 0xffff;
    a3 = a1 + v1;
    f2 = BITSF(a3);
    v0 = D_08C37CC0 - (31936);
    t9 = v0 + 31936;
    t0 = a1 - v1;
    t4 = D_08AF0948 - (2376);
    f9 = (float)(s32)FBITS(f2);
    f1 = BITSF(LD32(t4+2376));
    f8 = BITSF(t0);
    f3 = BITSF(LD32(t9+236));
    f5 = f9 * f1;
    f6 = (float)(s32)FBITS(f8);
    f7 = (float)(s32)FBITS(f3);
    t1 = D_08C38260 - (-32160);
    t6 = t1 - 32160;
    f0 = f6 * f1;
    f4 = f5 + f7;
    t1 = LD32(t6);
    t3 = v1 + 0;
    a2 = FBITS(f0);
    t5 = FBITS(f4);
    a0 = 0x44000000u;
    t0 = v1 < a1;
    ST16(t9+232, v1);
    v0 = 0x47000000u;
    v1 = a2 >> 8;
    a2 = t5 >> 8;
    t8 = 0xffff;
    t5 = v1 | a0;
    t7 = 0 + 0;
    t4 = t1 + 16;
    a2 = a2 | v0;
    ST16(t9+234, a1);
    a0 = t3 + 0;
    cnd_ = t0 != 0;
    a3 = a1 + 0;
    if (cnd_) { goto L_08A987BC; }
    goto L_08A987B4;
L_08A987B4:;
    a0 = a1 + 0;
    a3 = t3 + 0;
    goto L_08A987BC;
L_08A987BC:;
    v1 = LD32(t9+236);
    ST32(t6, t4);
    t3 = 0xd7000000u;
    a1 = a0 + v1;
    t2 = a3 + v1;
    a3 = (s32)t2 < (s32)t8 ? t2 : t8;
    t4 = (s32)a1 < (s32)t8 ? a1 : t8;
    t9 = (s32)a3 > (s32)t7 ? a3 : t7;
    t0 = (s32)t4 > (s32)t7 ? t4 : t7;
    t8 = t0 & 0xffff;
    t6 = t9 & 0xffff;
    t7 = 0xd6000000u;
    t2 = t8 | t7;
    a1 = t6 | t3;
    ST32(t1, t5);
    ST32(t1+4, a2);
    ST32(t1+8, t2);
    ST32(t1+12, a1);
    return;
}

/* 08A98808 */
void func_08A98808(u32 a0)
{
    u32 v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A98808:;
    sp = sp - 16;
    v1 = D_08C37CC0 - (31936);
    a3 = v1 + 31936;
    t0 = a0 + 0;
    a2 = LD_U16(a3+232);
    a1 = LD_U16(a3+234);
    ST32(a3+236, t0);
    a0 = a2 + 0;
    func_08A9871C(a0, a1);
    goto L_08A98830;
L_08A98830:;
    sp = sp + 16;
    return;
}

/* 08A9883C */
void func_08A9883C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
L_08A9883C:;
    t2 = D_08C38260 - (-32160);
    t0 = LD32(t2-32160);
    t6 = a0 & 0xffff;
    t5 = a1 & 0xffff;
    t3 = t6 << 4;
    a3 = t5 << 4;
    t4 = 0x4c000000u;
    v0 = 0x4d000000u;
    t1 = t3 | t4;
    a2 = a3 | v0;
    v1 = t0 + 8;
    ST32(t2-32160, v1);
    ST32(t0, t1);
    ST32(t0+4, a2);
    return;
}

/* 08A98878 */
void func_08A98878(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
L_08A98878:;
    a3 = D_08C38260 - (-32160);
    t0 = LD32(a3-32160);
    t1 = a0 ^ 0x1;
    a2 = 0x9b000000u;
    a1 = a2 + 0;
    a1 = (a1 & ~(0x1u << 0)) | ((t1 & 0x1) << 0);
    v0 = t0 + 4;
    ST32(a3-32160, v0);
    ST32(t0, a1);
    return;
}

/* 08A988A0 */
void func_08A988A0(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
L_08A988A0:;
    a3 = D_08C38260 - (-32160);
    t0 = LD32(a3-32160);
    a2 = 0x50000000u;
    a1 = a2 + 0;
    a1 = (a1 & ~(0x1u << 0)) | ((a0 & 0x1) << 0);
    v0 = t0 + 4;
    ST32(a3-32160, v0);
    ST32(t0, a1);
    return;
}

/* 08A988C4 */
void func_08A988C4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
L_08A988C4:;
    a2 = D_08C38260 - (-32160);
    t1 = LD32(a2-32160);
    t0 = a0 >> 24;
    a1 = 0x5c000000u;
    v0 = 0x5d000000u;
    a3 = a1 + 0;
    a3 = (a3 & ~(0xffffffu << 0)) | ((a0 & 0xffffff) << 0);
    a0 = t0 | v0;
    v1 = t1 + 8;
    ST32(a2-32160, v1);
    ST32(t1, a3);
    ST32(t1+4, a0);
    return;
}

/* 08A988F8 */
void func_08A988F8(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
L_08A988F8:;
    a3 = D_08C38260 - (-32160);
    t0 = LD32(a3-32160);
    a2 = 0x53000000u;
    a1 = a2 + 0;
    a1 = (a1 & ~(0x7u << 0)) | ((a0 & 0x7) << 0);
    v0 = t0 + 4;
    ST32(a3-32160, v0);
    ST32(t0, a1);
    return;
}

/* 08A9891C */
void func_08A9891C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_08A9891C:;
    a3 = 0x57000000u;
    t2 = a3 + 0;
    t2 = (t2 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    t1 = a0 & 0x4;
    v1 = 0x58000000u;
    t4 = a0 & 0x1;
    t0 = a0 & 0x2;
    a2 = a1 >> 24;
    a0 = 0x55000000u;
    a3 = a0 + 0;
    a3 = (a3 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    t3 = D_08C38260 - (-32160);
    a0 = a2 | v1;
    v1 = 0x56000000u;
    v1 = (v1 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    cnd_ = t4 == 0;
    v0 = LD32(t3-32160);
    if (cnd_) { goto L_08A9896C; }
    goto L_08A98960;
L_08A98960:;
    ST32(v0, a3);
    ST32(v0+4, a0);
    v0 = v0 + 8;
    goto L_08A9896C;
L_08A9896C:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_08A9897C; }
    goto L_08A98974;
L_08A98974:;
    ST32(v0, v1);
    v0 = v0 + 4;
    goto L_08A9897C;
L_08A9897C:;
    cnd_ = t1 == 0;
    if (cnd_) { goto L_08A9898C; }
    goto L_08A98984;
L_08A98984:;
    ST32(v0, t2);
    v0 = v0 + 4;
    goto L_08A9898C;
L_08A9898C:;
    ST32(t3-32160, v0);
    return;
}

/* 08A98994 */
void func_08A98994(u32 a0)
{
    u32 a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A98994:;
    sp = sp - 16;
    a1 = a0 + 0;
    a0 = 7;
    func_08A9891C(a0, a1);
    goto L_08A989A8;
L_08A989A8:;
    sp = sp + 16;
    return;
}

/* 08A989B4 */
void func_08A989B4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
L_08A989B4:;
    t6 = a0 + 95;
    t3 = a2 >> 2;
    t9 = t6 << 24;
    t5 = D_08C38260 - (-32160);
    t6 = LD32(t5-32160);
    t2 = t9 + 0;
    t2 = (t2 & ~(0x3u << 8)) | ((a1 & 0x3) << 8);
    t7 = t3 < 0x3u;
    a1 = 2;
    if (t7 == 0) t3 = a1;
    v1 = t2 + 0;
    v1 = (v1 & ~(0x3u << 0)) | ((t3 & 0x3) << 0);
    ST32(t6, v1);
    t2 = a0 << 1;
    t3 = t2 + a0;
    t0 = LD32(a3);
    v1 = t3 + 99;
    t1 = v1 << 24;
    t8 = t0 >> 8;
    t4 = t1 | t8;
    ST32(t6+4, t4);
    v0 = t3 + 100;
    t2 = v0 << 24;
    t9 = LD32(a3+4);
    t0 = a2 & 0x2;
    t8 = a2 & 0x4;
    t7 = t9 >> 8;
    t1 = t2 | t7;
    ST32(t6+8, t1);
    t7 = t0 << 30;
    v0 = t8 << 29;
    t9 = a2 << 31;
    t8 = (u32)((s32)t9 >> 31);
    v1 = (u32)((s32)t7 >> 31);
    t9 = (u32)((s32)v0 >> 31);
    t7 = 0xff000000u;
    t0 = t9 | t7;
    t9 = LD32(a3+8);
    v0 = t3 + 101;
    t1 = t8 | t7;
    t2 = v1 | t7;
    t8 = t9 >> 8;
    t7 = v0 << 24;
    a3 = t7 | t8;
    ST32(t6+12, a3);
    t4 = t3 << 2;
    a1 = (u32)-16;
    t3 = a0 << 2;
    v1 = D_08C37CC0 - (31936);
    a3 = a1 << (t3 & 31);
    a1 = v1 + 31936;
    v1 = LD32(a1+8);
    v0 = a1 + 144;
    a2 = a2 << (t3 & 31);
    t3 = t4 + v0;
    cnd_ = v1 != 0;
    t4 = t6 + 16;
    if (cnd_) { goto L_08A98AD0; }
    goto L_08A98A98;
L_08A98A98:;
    v1 = LD32(t3);
    t9 = LD32(t3+4);
    v0 = LD32(t3+8);
    t7 = v1 & t1;
    ST32(t4, t7);
    t3 = v0 & t0;
    t0 = t9 & t2;
    ST32(t4+4, t0);
    ST32(t4+8, t3);
    t4 = t4 + 12;
    t8 = LD32(a1+140);
    t1 = t8 & a3;
    a0 = t1 | a2;
    ST32(a1+140, a0);
    goto L_08A98AD0;
L_08A98AD0:;
    ST32(t5-32160, t4);
    return;
}

/* 08A98AD8 */
void func_08A98AD8(u32 a0, float f12, float f13, float f14)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
L_08A98AD8:;
    t4 = D_08C38260 - (-32160);
    t2 = a0 << 1;
    a1 = FBITS(f12);
    t0 = FBITS(f14);
    a2 = FBITS(f13);
    t1 = t2 + a0;
    t2 = LD32(t4-32160);
    a3 = t1 + 124;
    t3 = t1 + 125;
    v0 = t1 + 123;
    t9 = a1 >> 8;
    t6 = a3 << 24;
    t1 = t3 << 24;
    t5 = t0 >> 8;
    t8 = v0 << 24;
    t7 = a2 >> 8;
    t3 = t8 | t9;
    t0 = t6 | t7;
    a3 = t1 | t5;
    a1 = t2 + 12;
    ST32(t4-32160, a1);
    ST32(t2, t3);
    ST32(t2+4, t0);
    ST32(t2+8, a3);
    return;
}

/* 08A98B3C */
void func_08A98B3C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
L_08A98B3C:;
    a3 = D_08C37CC0 - (31936);
    t2 = a3 + 31936;
    v0 = a0 << 1;
    a3 = v0 + a0;
    t4 = LD32(t2+8);
    t1 = a3 + 143;
    v1 = t1 << 24;
    t0 = a0 + 0;
    a2 = (a2 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    a0 = D_08C38260 - (-32160);
    a2 = v1 | a2;
    t1 = LD32(a0-32160);
    cnd_ = t4 != 0;
    t3 = a0 - 32160;
    if (cnd_) { goto L_08A98C24; }
    goto L_08A98B74;
L_08A98B74:;
    t6 = a3 << 2;
    t5 = t2 + 144;
    t4 = a1 & 0x1;
    cnd_ = t4 == 0;
    a3 = t6 + t5;
    if (cnd_) { goto L_08A98B8C; }
    goto L_08A98B88;
L_08A98B88:;
    ST32(a3, a2);
    goto L_08A98B8C;
L_08A98B8C:;
    t7 = a1 & 0x2;
    cnd_ = t7 == 0;
    a0 = a1 & 0x4;
    if (cnd_) { goto L_08A98BA4; }
    goto L_08A98B98;
L_08A98B98:;
    t9 = 0x1000000u;
    t8 = a2 + t9;
    ST32(a3+4, t8);
    goto L_08A98BA4;
L_08A98BA4:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(t2+140); goto L_08A98BBC; }
    goto L_08A98BAC;
L_08A98BAC:;
    v1 = 0x2000000u;
    a1 = a2 + v1;
    ST32(a3+8, a1);
    a0 = LD32(t2+140);
    goto L_08A98BBC;
L_08A98BBC:;
    v1 = t0 << 2;
    t5 = LD32(a3+8);
    t9 = a0 >> (v1 & 31);
    t6 = t9 & 0x4;
    a1 = t9 & 0x2;
    t8 = LD32(a3);
    t0 = t6 << 29;
    a2 = t9 << 31;
    t6 = LD32(a3+4);
    t7 = a1 << 30;
    t2 = 0xff000000u;
    v0 = (u32)((s32)a2 >> 31);
    t4 = (u32)((s32)t0 >> 31);
    t9 = (u32)((s32)t7 >> 31);
    a2 = v0 | t2;
    t0 = t4 | t2;
    t7 = t9 | t2;
    t4 = t8 & a2;
    v0 = t6 & t7;
    t2 = t5 & t0;
    ST32(t1, t4);
    ST32(t1+4, v0);
    ST32(t1+8, t2);
    t1 = t1 + 12;
    goto L_08A98C1C;
L_08A98C1C:;
    ST32(t3, t1);
    return;
L_08A98C24:;
    a3 = a1 & 0x1;
    cnd_ = a3 == 0;
    t5 = a1 & 0x2;
    if (cnd_) { goto L_08A98C38; }
    goto L_08A98C30;
L_08A98C30:;
    ST32(t1, a2);
    t1 = t1 + 4;
    goto L_08A98C38;
L_08A98C38:;
    cnd_ = t5 == 0;
    t4 = a1 & 0x4;
    if (cnd_) { goto L_08A98C50; }
    goto L_08A98C40;
L_08A98C40:;
    t2 = 0x1000000u;
    t8 = a2 + t2;
    ST32(t1, t8);
    t1 = t1 + 4;
    goto L_08A98C50;
L_08A98C50:;
    cnd_ = t4 == 0;
    if (cnd_) { goto L_08A98C1C; }
    goto L_08A98C58;
L_08A98C58:;
    t7 = 0x2000000u;
    t0 = a2 + t7;
    ST32(t1, t0);
    t1 = t1 + 4;
    goto L_08A98C1C;
}

/* 08A98C6C */
void func_08A98C6C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_08A98C6C:;
    v1 = D_08AF094C - (2380);
    f2 = BITSF(LD32(v1+2380));
    a2 = D_08C38260 - (-32160);
    t4 = 127;
    f1 = f12 * f2;
    t2 = LD32(a2-32160);
    t1 = (u32)-128;
    a3 = 0xc8000000u;
    f0 = BITSF(F2I(f1, 1));
    t0 = t2 + 4;
    ST32(a2-32160, t0);
    v0 = FBITS(f0);
    t3 = (s32)v0 < (s32)t4 ? v0 : t4;
    a1 = (s32)t3 > (s32)t1 ? t3 : t1;
    v0 = a3 + 0;
    v0 = (v0 & ~(0xffu << 16)) | ((a1 & 0xff) << 16);
    v1 = v0 + 0;
    v1 = (v1 & ~(0x3u << 0)) | ((a0 & 0x3) << 0);
    ST32(t2, v1);
    return;
}

/* 08A98CBC */
void func_08A98CBC(float f12)
{
    u32 v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
L_08A98CBC:;
    t0 = D_08C38260 - (-32160);
    t1 = FBITS(f12);
    a3 = LD32(t0-32160);
    a2 = 0xd0000000u;
    a0 = t1 >> 8;
    a1 = a0 | a2;
    v1 = a3 + 4;
    ST32(t0-32160, v1);
    ST32(a3, a1);
    return;
}

/* 08A98CE4 */
void func_08A98CE4(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t3 = 0;
L_08A98CE4:;
    t0 = D_08C38260 - (-32160);
    t1 = 0xc2000000u;
    t3 = LD32(t0-32160);
    v1 = t1 + 0;
    v1 = (v1 & ~(0x7u << 16)) | ((a1 & 0x7) << 16);
    a1 = v1 + 0;
    a1 = (a1 & ~(0x1u << 8)) | ((a2 & 0x1) << 8);
    a2 = a1 + 0;
    a2 = (a2 & ~(0x1u << 0)) | ((a3 & 0x1) << 0);
    v1 = 0xc3000000u;
    a1 = v1 + 0;
    a1 = (a1 & ~(0xfu << 0)) | ((a0 & 0xf) << 0);
    v0 = t3 + 8;
    ST32(t0-32160, v0);
    ST32(t3, a2);
    ST32(t3+4, a1);
    return;
}

/* 08A98D28 */
void func_08A98D28(u32 a0, u32 a1)
{
    u32 v1 = 0, a2 = 0, a3 = 0, t1 = 0;
L_08A98D28:;
    a3 = D_08C38260 - (-32160);
    t1 = LD32(a3-32160);
    a2 = 0xc6000000u;
    v1 = a2 + 0;
    v1 = (v1 & ~(0x1u << 8)) | ((a1 & 0x1) << 8);
    a1 = v1 + 0;
    a1 = (a1 & ~(0x7u << 0)) | ((a0 & 0x7) << 0);
    v1 = t1 + 4;
    ST32(a3-32160, v1);
    ST32(t1, a1);
    return;
}

/* 08A98D54 */
void func_08A98D54(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
L_08A98D54:;
    t1 = D_08C37CC0 - (31936);
    t0 = t1 + 31936;
    v0 = LD32(t0+224);
    t2 = D_08C38260 - (-32160);
    t1 = LD32(t2-32160);
    a3 = a1 << 8;
    v1 = a3 | a0;
    v0 = (v0 & ~(0xffffu << 0)) | ((0 & 0xffff) << 0);
    a0 = v0 | v1;
    a1 = t1 + 4;
    ST32(t0+224, a0);
    ST32(t2-32160, a1);
    ST32(t1, a0);
    return;
}

/* 08A98D8C */
void func_08A98D8C(u32 a0, u32 a1)
{
    u32 v1 = 0, a2 = 0, a3 = 0, t1 = 0;
L_08A98D8C:;
    a3 = D_08C38260 - (-32160);
    t1 = LD32(a3-32160);
    a2 = 0xc7000000u;
    v1 = a2 + 0;
    v1 = (v1 & ~(0x1u << 8)) | ((a1 & 0x1) << 8);
    a1 = v1 + 0;
    a1 = (a1 & ~(0x1u << 0)) | ((a0 & 0x1) << 0);
    v1 = t1 + 4;
    ST32(a3-32160, v1);
    ST32(t1, a1);
    return;
}

/* 08A98DB8 */
void func_08A98DB8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a2 = 0;
L_08A98DB8:;
    v1 = D_08C38260 - (-32160);
    a2 = LD32(v1-32160);
    v0 = 0xcb000000u;
    a0 = a2 + 4;
    ST32(v1-32160, a0);
    ST32(a2, v0);
    return;
}

/* 08A98DD4 */
void func_08A98DD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
L_08A98DD4:;
    t3 = a2 & 0xffff;
    v1 = a1 & 0xffff;
    t7 = t3 - 1;
    t3 = D_08C38260 - (-32160);
    t5 = a0 + 168;
    v0 = v1 - 1;
    t2 = CLZ(t7);
    t4 = a0 + 184;
    t7 = LD32(t3-32160);
    t8 = 32;
    a2 = t8 - t2;
    t1 = CLZ(v0);
    t2 = (t0 >> 24) & 0x1f;
    v0 = t5 << 24;
    t9 = t4 << 24;
    t6 = a0 + 160;
    t4 = v0 + 0;
    t4 = (t4 & ~(0x1fu << 16)) | ((t2 & 0x1f) << 16);
    v1 = t8 - t1;
    t5 = t9 + 0;
    t5 = (t5 & ~(0xfu << 8)) | ((a2 & 0xf) << 8);
    t2 = t6 << 24;
    a2 = a3 & 0xffff;
    a1 = t4 + 0;
    a1 = (a1 & ~(0x7ffu << 0)) | ((a2 & 0x7ff) << 0);
    a0 = t7 + 12;
    a2 = t5 + 0;
    a2 = (a2 & ~(0xfu << 0)) | ((v1 & 0xf) << 0);
    v1 = t2 + 0;
    v1 = (v1 & ~(0xffffffu << 0)) | ((t0 & 0xffffff) << 0);
    ST32(t3-32160, a0);
    ST32(t7, v1);
    ST32(t7+4, a1);
    ST32(t7+8, a2);
    return;
}

/* 08A98E60 */
void func_08A98E60(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
L_08A98E60:;
    t2 = D_08C38260 - (-32160);
    a1 = FBITS(f12);
    t5 = FBITS(f13);
    t0 = LD32(t2-32160);
    t3 = a1 >> 8;
    a3 = t5 >> 8;
    t4 = 0x48000000u;
    v0 = 0x49000000u;
    t1 = t3 | t4;
    a2 = a3 | v0;
    v1 = t0 + 8;
    ST32(t2-32160, v1);
    ST32(t0, t1);
    ST32(t0+4, a2);
    return;
}

/* 08A98E9C */
void func_08A98E9C(float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
L_08A98E9C:;
    t2 = D_08C38260 - (-32160);
    a1 = FBITS(f12);
    t5 = FBITS(f13);
    t0 = LD32(t2-32160);
    t3 = a1 >> 8;
    a3 = t5 >> 8;
    t4 = 0x4a000000u;
    v0 = 0x4b000000u;
    t1 = t3 | t4;
    a2 = a3 | v0;
    v1 = t0 + 8;
    ST32(t2-32160, v1);
    ST32(t0, t1);
    ST32(t0+4, a2);
    return;
}

/* 08A98ED8 */
void func_08A98ED8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t2 = 0, t3 = 0;
L_08A98ED8:;
    v0 = a3 & 0xff;
    t3 = D_08C38260 - (-32160);
    t2 = 0xc5000000u;
    v1 = t2 + 0;
    v1 = (v1 & ~(0x1fu << 16)) | ((v0 & 0x1f) << 16);
    t0 = a2 & 0xff;
    t2 = LD32(t3-32160);
    a3 = a1 & 0xff;
    v0 = v1 + 0;
    v0 = (v0 & ~(0xffu << 8)) | ((t0 & 0xff) << 8);
    v1 = v0 + 0;
    v1 = (v1 & ~(0x1fu << 2)) | ((a3 & 0x1f) << 2);
    a1 = v1 + 0;
    a1 = (a1 & ~(0x3u << 0)) | ((a0 & 0x3) << 0);
    v1 = t2 + 4;
    ST32(t3-32160, v1);
    ST32(t2, a1);
    return;
}

/* 08A98F20 */
void func_08A98F20(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
L_08A98F20:;
    a3 = D_08C38260 - (-32160);
    t2 = LD32(a3-32160);
    t4 = a0 & 0xff;
    t6 = (a1 >> 24) & 0x1f;
    t5 = 0xb1000000u;
    t3 = 0xc4000000u;
    t1 = 0xb0000000u;
    a2 = t3 + 0;
    a2 = (a2 & ~(0x3fu << 0)) | ((t4 & 0x3f) << 0);
    t0 = t5 + 0;
    t0 = (t0 & ~(0x1fu << 16)) | ((t6 & 0x1f) << 16);
    a0 = t1 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    v0 = t2 + 12;
    ST32(a3-32160, v0);
    ST32(t2, a0);
    ST32(t2+4, t0);
    ST32(t2+8, a2);
    return;
}

/* 08A98F6C */
void func_08A98F6C(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
L_08A98F6C:;
    f1 = f13 - f12;
    v0 = D_08AF0950 - (2384);
    a3 = FBITS(f13);
    f2 = BITSF(LD32(v0+2384));
    v1 = D_08C38260 - (-32160);
    a2 = a3 >> 8;
    a1 = 0xcd000000u;
    a3 = v1 - 32160;
    fcc = FCMP(f2, f1, 12);
    t0 = a2 | a1;
    a1 = LD32(a3);
    a0 = (a0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    v1 = 0xcf000000u;
    a0 = a0 | v1;
    f2 = BITSF(0);
    cnd_ = fcc;
    a2 = a1 + 12;
    if (cnd_) { goto L_08A98FC8; }
    goto L_08A98FB0;
L_08A98FB0:;
    t1 = D_08AF0954 - (2388);
    f3 = BITSF(LD32(t1+2388));
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08A98FD4; }
    goto L_08A98FC8;
L_08A98FC8:;
    t2 = D_08AF0958 - (2392);
    f4 = BITSF(LD32(t2+2392));
    f2 = f4 / f1;
    goto L_08A98FD4;
L_08A98FD4:;
    t4 = FBITS(f2);
    ST32(a1+4, t0);
    t0 = 0xce000000u;
    t3 = t4 >> 8;
    ST32(a1, a0);
    a0 = t3 | t0;
    ST32(a3, a2);
    ST32(a1+8, a0);
    return;
}

/* 08A98FF8 */
void func_08A98FF8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
L_08A98FF8:;
    t7 = a1 & 0xffff;
    t1 = a3 & 0xffff;
    v1 = D_08C37CC0 - (31936);
    t2 = t7 + t1;
    t4 = a0 & 0xffff;
    t1 = v1 + 31936;
    t0 = a2 & 0xffff;
    t8 = t4 + t0;
    t9 = t2 - 1;
    t2 = LD32(t1+228);
    t5 = t9 << 10;
    t6 = t8 - 1;
    t3 = t7 << 10;
    a2 = 0xd4000000u;
    v0 = 0xd5000000u;
    t0 = t5 | t6;
    v1 = t3 | t4;
    a1 = v1 | a2;
    a0 = t0 | v0;
    v0 = t2 & 0x4;
    ST32(t1+196, a0);
    a2 = D_08C38260 - (-32160);
    cnd_ = v0 == 0;
    ST32(t1+192, a1);
    if (cnd_) { goto L_08A99070; }
    goto L_08A99058;
L_08A99058:;
    a3 = LD32(a2-32160);
    ST32(a3, a1);
    v0 = a3 + 8;
    a1 = LD32(t1+196);
    ST32(a2-32160, v0);
    ST32(a3+4, a1);
    goto L_08A99070;
L_08A99070:;
    return;
}

/* 08A99078 */
void func_08A99078(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, a3 = 0, t0 = 0, t1 = 0, t3 = 0;
L_08A99078:;
    a3 = D_08C38260 - (-32160);
    t3 = LD32(a3-32160);
    t0 = 0xd8000000u;
    t1 = t0 + 0;
    t1 = (t1 & ~(0x3u << 0)) | ((a0 & 0x3) << 0);
    a0 = 0xd9000000u;
    t0 = a0 + 0;
    t0 = (t0 & ~(0xffffffu << 0)) | ((a1 & 0xffffff) << 0);
    a1 = 0xda000000u;
    a0 = a1 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((a2 & 0xffffff) << 0);
    v0 = t3 + 12;
    ST32(a3-32160, v0);
    ST32(t3, t1);
    ST32(t3+4, t0);
    ST32(t3+8, a0);
    return;
}

/* 08A990BC */
void func_08A990BC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t2 = 0, t3 = 0;
L_08A990BC:;
    a3 = D_08C38260 - (-32160);
    t2 = LD32(a3-32160);
    v0 = a2 & 0xff;
    t3 = 0xdb000000u;
    v1 = t3 + 0;
    v1 = (v1 & ~(0xffu << 16)) | ((v0 & 0xff) << 16);
    t0 = a1 & 0xff;
    a2 = v1 + 0;
    a2 = (a2 & ~(0xffu << 8)) | ((t0 & 0xff) << 8);
    v1 = a2 + 0;
    v1 = (v1 & ~(0x7u << 0)) | ((a0 & 0x7) << 0);
    a0 = t2 + 4;
    ST32(a3-32160, a0);
    ST32(t2, v1);
    return;
}

/* 08A990F8 */
void func_08A990F8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t2 = 0, t3 = 0;
L_08A990F8:;
    a3 = D_08C38260 - (-32160);
    t2 = LD32(a3-32160);
    v0 = a2 & 0xff;
    t3 = 0xdc000000u;
    v1 = t3 + 0;
    v1 = (v1 & ~(0xffu << 16)) | ((v0 & 0xff) << 16);
    t0 = a1 & 0xff;
    a2 = v1 + 0;
    a2 = (a2 & ~(0xffu << 8)) | ((t0 & 0xff) << 8);
    v1 = a2 + 0;
    v1 = (v1 & ~(0x7u << 0)) | ((a0 & 0x7) << 0);
    a0 = t2 + 4;
    ST32(a3-32160, a0);
    ST32(t2, v1);
    return;
}

/* 08A99134 */
void func_08A99134(u32 a0, u32 a1, u32 a2)
{
    u32 v1 = 0, a3 = 0, t0 = 0, t2 = 0;
L_08A99134:;
    a3 = D_08C38260 - (-32160);
    t2 = LD32(a3-32160);
    t0 = 0xdd000000u;
    v1 = t0 + 0;
    v1 = (v1 & ~(0x7u << 16)) | ((a2 & 0x7) << 16);
    a2 = v1 + 0;
    a2 = (a2 & ~(0x7u << 8)) | ((a1 & 0x7) << 8);
    v1 = a2 + 0;
    v1 = (v1 & ~(0x7u << 0)) | ((a0 & 0x7) << 0);
    a0 = t2 + 4;
    ST32(a3-32160, a0);
    ST32(t2, v1);
    return;
}

/* 08A99168 */
void func_08A99168(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
L_08A99168:;
    a3 = D_08C38260 - (-32160);
    t0 = LD32(a3-32160);
    a2 = 0xde000000u;
    a1 = a2 + 0;
    a1 = (a1 & ~(0x7u << 0)) | ((a0 & 0x7) << 0);
    v0 = t0 + 4;
    ST32(a3-32160, v0);
    ST32(t0, a1);
    return;
}

/* 08A9918C */
u32 func_08A9918C(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
L_08A9918C:;
    a3 = D_08C38260 - (-32160);
    t0 = LD32(a3-32160);
    t1 = a0 & 0xff;
    a2 = 0xe7000000u;
    a1 = a2 + 0;
    a1 = (a1 & ~(0x1u << 0)) | ((t1 & 0x1) << 0);
    v0 = t0 + 4;
    ST32(a3-32160, v0);
    ST32(t0, a1);
    return v0;
}

/* 08A991B4 */
void func_08A991B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v1 = 0, t1 = 0, t2 = 0, t4 = 0;
L_08A991B4:;
    t2 = 0xdf000000u;
    v1 = t2 + 0;
    v1 = (v1 & ~(0x7u << 8)) | ((a0 & 0x7) << 8);
    t1 = D_08C38260 - (-32160);
    t4 = LD32(t1-32160);
    a0 = v1 + 0;
    a0 = (a0 & ~(0xfu << 4)) | ((a2 & 0xf) << 4);
    a2 = a0 + 0;
    a2 = (a2 & ~(0xfu << 0)) | ((a1 & 0xf) << 0);
    a0 = 0xe0000000u;
    a1 = a0 + 0;
    a1 = (a1 & ~(0xffffffu << 0)) | ((a3 & 0xffffff) << 0);
    a3 = 0xe1000000u;
    a0 = a3 + 0;
    a0 = (a0 & ~(0xffffffu << 0)) | ((t0 & 0xffffff) << 0);
    v1 = t4 + 12;
    ST32(t1-32160, v1);
    ST32(t4, a2);
    ST32(t4+4, a1);
    ST32(t4+8, a0);
    return;
}

/* 08A99208 */
void func_08A99208(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
L_08A99208:;
    a2 = D_08C38260 - (-32160);
    t1 = LD32(a2-32160);
    v0 = (a0 >> 24) & 0xff;
    t2 = 0xe9000000u;
    a3 = 0xe8000000u;
    t0 = t2 + 0;
    t0 = (t0 & ~(0xffu << 0)) | ((v0 & 0xff) << 0);
    a1 = a3 + 0;
    a1 = (a1 & ~(0xffffffu << 0)) | ((a0 & 0xffffff) << 0);
    v1 = t1 + 8;
    ST32(a2-32160, v1);
    ST32(t1, a1);
    ST32(t1+4, t0);
    return;
}

/* 08A99240 */
void func_08A99240(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
L_08A99240:;
    t5 = a0 << 1;
    t1 = D_08C38260 - (-32160);
    a3 = LD32(t1-32160);
    t4 = t5 + a0;
    a0 = t4 << 2;
    t3 = 0x2a000000u;
    t0 = a0 | t3;
    t2 = 0xff000000u;
    ST32(a3, t2);
    v1 = 0x2b000000u;
    ST32(a3+4, t0);
    t0 = v1 + 0;
    a0 = v1 + 0;
    v1 = LWR(v1, a1+1);
    t0 = LWR(t0, a1+5);
    a0 = LWR(a0, a1+9);
    ST32(a3+8, v1);
    ST32(a3+12, t0);
    ST32(a3+16, a0);
    v1 = LWR(v1, a1+17);
    t0 = LWR(t0, a1+21);
    a0 = LWR(a0, a1+25);
    ST32(a3+20, v1);
    ST32(a3+24, t0);
    ST32(a3+28, a0);
    v1 = LWR(v1, a1+33);
    t0 = LWR(t0, a1+37);
    a0 = LWR(a0, a1+41);
    ST32(a3+32, v1);
    ST32(a3+36, t0);
    ST32(a3+40, a0);
    v1 = LWR(v1, a1+49);
    t0 = LWR(t0, a1+53);
    a0 = LWR(a0, a1+57);
    ST32(a3+44, v1);
    ST32(a3+48, t0);
    ST32(a3+52, a0);
    v0 = a3 + 56;
    ST32(t1-32160, v0);
    return;
}

/* 08A992E0 */
void func_08A992E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    int cnd_;
L_08A992E0:;
    t4 = a0 & 0x1;
    t0 = t4 ^ 0x1;
    a3 = t0 << 1;
    v1 = a3 ^ a0;
    t0 = D_08C38260 - (-32160);
    t2 = v1 << 1;
    a3 = LD32(t0-32160);
    t3 = t2 + 58;
    a2 = t2 + 59;
    t1 = t3 << 24;
    v0 = a2 << 24;
    ST32(a3, t1);
    cnd_ = a0 != 0;
    a2 = t0 - 32160;
    if (cnd_) { goto L_08A993B4; }
    goto L_08A99318;
L_08A99318:;
    t0 = v0 + 0;
    a0 = t0 + 0;
    v1 = t0 + 0;
    t1 = t0 + 0;
    t0 = LWR(t0, a1+1);
    a0 = LWR(a0, a1+5);
    v1 = LWR(v1, a1+9);
    t1 = LWR(t1, a1+13);
    ST32(a3+4, t0);
    ST32(a3+8, a0);
    ST32(a3+12, v1);
    ST32(a3+16, t1);
    t0 = LWR(t0, a1+17);
    a0 = LWR(a0, a1+21);
    v1 = LWR(v1, a1+25);
    t1 = LWR(t1, a1+29);
    ST32(a3+20, t0);
    ST32(a3+24, a0);
    ST32(a3+28, v1);
    ST32(a3+32, t1);
    t0 = LWR(t0, a1+33);
    a0 = LWR(a0, a1+37);
    v1 = LWR(v1, a1+41);
    t1 = LWR(t1, a1+45);
    ST32(a3+36, t0);
    ST32(a3+40, a0);
    ST32(a3+44, v1);
    ST32(a3+48, t1);
    t0 = LWR(t0, a1+49);
    a0 = LWR(a0, a1+53);
    v1 = LWR(v1, a1+57);
    t1 = LWR(t1, a1+61);
    ST32(a3+52, t0);
    ST32(a3+56, a0);
    ST32(a3+60, v1);
    ST32(a3+64, t1);
    a3 = a3 + 68;
    goto L_08A993AC;
L_08A993AC:;
    ST32(a2, a3);
    return;
L_08A993B4:;
    t5 = v0 + 0;
    v1 = t5 + 0;
    t0 = t5 + 0;
    t5 = LWR(t5, a1+1);
    v1 = LWR(v1, a1+5);
    t0 = LWR(t0, a1+9);
    ST32(a3+4, t5);
    ST32(a3+8, v1);
    ST32(a3+12, t0);
    t5 = LWR(t5, a1+17);
    v1 = LWR(v1, a1+21);
    t0 = LWR(t0, a1+25);
    ST32(a3+16, t5);
    ST32(a3+20, v1);
    ST32(a3+24, t0);
    t5 = LWR(t5, a1+33);
    v1 = LWR(v1, a1+37);
    t0 = LWR(t0, a1+41);
    ST32(a3+28, t5);
    ST32(a3+32, v1);
    ST32(a3+36, t0);
    t5 = LWR(t5, a1+49);
    v1 = LWR(v1, a1+53);
    t0 = LWR(t0, a1+57);
    ST32(a3+40, t5);
    ST32(a3+44, v1);
    ST32(a3+48, t0);
    a3 = a3 + 52;
    goto L_08A993AC;
}

/* 08A99428 */
void func_08A99428(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, t8 = 0, t9 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A99428:;
    sp = sp - 32;
    s1 = D_08C38260 - (-32160);
    s2 = s1 - 32160;
    v1 = LD32(s2+28);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_08A99560; }
    goto L_08A99454;
L_08A99454:;
    s3 = D_08C37CC0 - (31936);
    s0 = s3 + 31936;
    v1 = LD_U8(s0+1436);
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s0+1436, 0); goto L_08A99578; }
    goto L_08A99468;
L_08A99468:;
    a0 = LD32(s0+1432);
    goto L_08A9946C;
L_08A9946C:;
    cnd_ = a0 != 0;
    if (cnd_) { s2 = s3 + 31936; goto L_08A99550; }
    goto L_08A99474;
L_08A99474:;
    t0 = LD32(s1-32160);
    t3 = 0xe030000u;
    t1 = 0xc000000u;
    a2 = t3 | 0xfff1;
    t2 = 0xf000000u;
    ST32(t0, a2);
    a3 = D_08AEA780 - (-22656);
    a2 = a3 - 22656;
    ST32(t0+12, t1);
    ST32(t0+4, t1);
    ST32(t0+8, t2);
    a1 = LD32(a3-22656);
    cnd_ = a1 == 0;
    t1 = t0 + 16;
    if (cnd_) { goto L_08A994D8; }
    goto L_08A994AC;
L_08A994AC:;
    t6 = LD32(a2+4);
    t5 = LD32(a2+8);
    t4 = LD32(a2+12);
    ST32(t1, a1);
    a2 = a2 + 16;
    ST32(t1+4, t6);
    ST32(t1+8, t5);
    ST32(t1+12, t4);
    a1 = LD32(a2);
    cnd_ = a1 != 0;
    t1 = t1 + 16;
    if (cnd_) { goto L_08A994AC; }
    goto L_08A994D8;
L_08A994D8:;
    a1 = D_08AEA300 - (-23808);
    a3 = D_08AEA700 - (-22784);
    t7 = a1 - 23808;
    t4 = a3 - 22784;
    t8 = (u32)((s32)t7 >> 8);
    t9 = (u32)((s32)t4 >> 8);
    a2 = 0x1f0000u;
    s1 = 0xa8000000u;
    t0 = t9 & a2;
    t5 = t8 & a2;
    t7 = (t7 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t6 = s1 | 0x100;
    s0 = 0xa0000000u;
    t4 = (t4 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t3 = 0xc4000000u;
    v1 = 0xb0000000u;
    v0 = 0xb1000000u;
    t2 = t7 | s0;
    t9 = t5 | t6;
    t8 = t4 | v1;
    s1 = t0 | v0;
    s0 = t3 | 0x1;
    t7 = t1 + 20;
    ST32(t1, t2);
    ST32(t1+4, t9);
    ST32(t1+8, t8);
    ST32(t1+12, s1);
    ST32(t1+16, s0);
    ST32(s2, t7);
    s2 = s3 + 31936;
    goto L_08A99550;
L_08A99550:;
    a0 = LD32(s2+1432);
    s3 = a0 + 1;
    ST32(s2+1432, s3);
    goto L_08A99560;
L_08A99560:;
    sp = sp + 32;
    return;
L_08A99578:;
    a1 = D_08AEA8E0 - (-22304);
    a0 = a1 - 22304;
    { rv_t r_ = func_08A884C0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99584;
L_08A99584:;
    v0 = D_08AEA908 - (-22264);
    a0 = v0 - 22264;
    { rv_t r_ = func_08A884C0(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99590;
L_08A99590:;
    a0 = LD32(s0+1432);
    goto L_08A9946C;
}

/* 08A99598 */
void func_08A99598(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A99598:;
    sp = sp - 16;
    s1 = D_08C38260 - (-32160);
    v0 = s1 - 32160;
    v1 = D_08C37CC0 - (31936);
    a0 = LD32(v0+28);
    cnd_ = a0 == 0;
    s0 = v1 + 31936;
    if (cnd_) { goto L_08A99614; }
    goto L_08A995C0;
L_08A995C0:;
    a1 = LD_U8(s0+1436);
    a2 = D_08AEA8E0 - (-22304);
    cnd_ = a1 != 0;
    a0 = a2 - 22304;
    if (cnd_) { goto L_08A99628; }
    goto L_08A995D0;
L_08A995D0:;
    t0 = LD32(s0+1432);
    goto L_08A995D4;
L_08A995D4:;
    t1 = 0xe030000u;
    a2 = 0xc000000u;
    a0 = t0 - 1;
    a1 = t1 | 0xfff2;
    cnd_ = a0 != 0;
    ST32(s0+1432, a0);
    if (cnd_) { goto L_08A99614; }
    goto L_08A995EC;
L_08A995EC:;
    t2 = LD32(s1-32160);
    t4 = 0xcb000000u;
    t3 = 0xf000000u;
    t5 = t2 + 20;
    ST32(s1-32160, t5);
    ST32(t2, t4);
    ST32(t2+4, a1);
    ST32(t2+12, t3);
    ST32(t2+16, a2);
    ST32(t2+8, a2);
    goto L_08A99614;
L_08A99614:;
    sp = sp + 16;
    return;
L_08A99628:;
    ST8(s0+1436, 0);
    { rv_t r_ = func_08A884C0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99630;
L_08A99630:;
    a3 = D_08AEA908 - (-22264);
    a0 = a3 - 22264;
    { rv_t r_ = func_08A884C0(a0, 0, 0, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9963C;
L_08A9963C:;
    t0 = LD32(s0+1432);
    goto L_08A995D4;
}

/* 08A99644 */
void func_08A99644(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A99644:;
    sp = sp - 16;
    func_08A99A3C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A99654;
L_08A99654:;
    sp = sp + 16;
    return;
}

/* 08A99660 */
void func_08A99660(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t4 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A99660:;
    sp = sp - 16;
    t1 = D_08C37CC0 - (31936);
    a2 = t1 + 31936;
    t0 = 1;
    a1 = a2 + 68;
    v0 = LD32(a2+64);
    t1 = LD32(a2+56);
    a3 = t0 - v0;
    v1 = a3 << 4;
    s0 = v1 + a1;
    a3 = a0 + 0;
    t0 = 0 + 0;
    cnd_ = t1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08A996B0; }
    goto L_08A996A0;
L_08A996A0:;
    t2 = LD32(a2+16);
    a2 = LD32(s0);
    t0 = LD32(s0+4);
    a0 = t2 + a2;
    goto L_08A996B0;
L_08A996B0:;
    a2 = LD32(s0+8);
    a1 = t0 + 0;
    v0 = sceDisplaySetFrameBuf(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A996BC;
L_08A996BC:;
    t0 = LD_U16(s0+12);
    t1 = D_08B1E448 - (-7096);
    a0 = LD_U16(t1-7096);
    a1 = t0 & 0xffff;
    cnd_ = a0 == a1;
    t2 = D_08B1E44A - (-7094);
    if (cnd_) { goto L_08A99700; }
    goto L_08A996D4;
L_08A996D4:;
    a3 = LD_U16(s0+14);
    t2 = D_08B1E44A - (-7094);
    a2 = a3 & 0xffff;
    goto L_08A996E0;
L_08A996E0:;
    a0 = 0 + 0;
    ST16(t1-7096, t0);
    ST16(t2-7094, a3);
    v0 = sceDisplaySetMode(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A996F0;
L_08A996F0:;
    goto L_08A996F4;
L_08A996F4:;
    sp = sp + 16;
    return;
L_08A99700:;
    a3 = LD_U16(s0+14);
    t4 = LD_U16(t2-7094);
    t3 = a3 & 0xffff;
    cnd_ = t4 != t3;
    a2 = a3 & 0xffff;
    if (cnd_) { goto L_08A996E0; }
    goto L_08A99714;
L_08A99714:;
    goto L_08A996F4;
}

/* 08A9971C */
void func_08A9971C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int cnd_;
L_08A9971C:;
    t4 = D_08C38260 - (-32160);
    v1 = t4 - 32160;
    a1 = LD32(v1+28);
    a0 = D_08C37CC0 - (31936);
    t3 = a0 + 31936;
    cnd_ = a1 == 0;
    a0 = t3 + 68;
    if (cnd_) { goto L_08A997E8; }
    goto L_08A99738;
L_08A99738:;
    t0 = LD32(t3+64);
    t5 = LD32(t4-32160);
    v1 = 0x16000000u;
    t6 = t0 << 4;
    t0 = t6 + a0;
    t7 = LD_U16(t0+14);
    t8 = LD_U16(t0+12);
    t9 = LD32(t0);
    a3 = t7 - 1;
    a1 = a3 << 10;
    t1 = t8 - 1;
    t7 = a1 | t1;
    t2 = 0x9c000000u;
    v0 = 0xd5000000u;
    a3 = t7 | v1;
    a2 = 0x15000000u;
    t1 = t2 + 0;
    t1 = (t1 & ~(0xffffffu << 0)) | ((t9 & 0xffffff) << 0);
    a0 = 0xd4000000u;
    t2 = t7 | v0;
    ST32(t3+132, a2);
    t8 = (t9 >> 24) & 0x1f;
    t7 = 0x9d000000u;
    ST32(t3+200, a0);
    a1 = t7 + 0;
    a1 = (a1 & ~(0x1fu << 16)) | ((t8 & 0x1f) << 16);
    a2 = 0xd2000000u;
    ST32(t3+136, a3);
    t6 = t5 + 20;
    ST32(t3+204, t2);
    ST32(t5, t1);
    t1 = LD32(t0+4);
    ST32(t4-32160, t6);
    v0 = a1 + 0;
    v0 = (v0 & ~(0x7ffu << 0)) | ((t1 & 0x7ff) << 0);
    ST32(t5+4, v0);
    a3 = LD32(t0+8);
    v1 = a2 + 0;
    v1 = (v1 & ~(0x3u << 0)) | ((a3 & 0x3) << 0);
    ST32(t5+8, v1);
    a1 = LD32(t3+132);
    ST32(t5+12, a1);
    v0 = LD32(t3+136);
    ST32(t5+16, v0);
    goto L_08A997E8;
L_08A997E8:;
    return;
}

/* 08A997F0 */
void func_08A997F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t3)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, t8 = 0, t9 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A997F0:;
    sp = sp - 16;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08A99850; }
    goto L_08A99804;
L_08A99804:;
    a2 = a1 + 0;
    a3 = a0 + 0;
    t0 = a1 + 48;
    goto L_08A99810;
L_08A99810:;
    v1 = LD32(a2);
    a0 = LD32(a2+4);
    a1 = LD32(a2+8);
    t1 = LD32(a2+12);
    ST32(a3, v1);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, a0);
    ST32(a3-8, a1);
    cnd_ = a2 != t0;
    ST32(a3-4, t1);
    if (cnd_) { goto L_08A99810; }
    goto L_08A9983C;
L_08A9983C:;
    sp = sp + 16;
    return;
L_08A99850:;
    t1 = D_08C37CC0 - (31936);
    s0 = t1 + 31936;
    t2 = (u32)-1;
    s1 = 1;
    ST32(a0+44, t2);
    ST32(a0+32, t2);
    ST32(a0+36, t2);
    ST32(a0+40, t2);
    ST32(a0+28, 0);
    ST32(a0+24, 0);
    ST32(s0+4, s1);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST8(t1+31936, 0);
    v0 = sceGeEdramGetAddr(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9988C;
L_08A9988C:;
    t0 = ((u32)(uintptr_t)func_08A99F54) - (-24748);
    a2 = ((u32)(uintptr_t)func_08A9A008) - (-24568);
    ST32(s0+16, v0);
    a3 = t0 - 24748;
    v0 = a2 - 24568;
    ST32(s0+20, a3);
    a0 = s0 + 20;
    ST32(s0+28, v0);
    ST32(s0+24, 0);
    ST32(s0+32, 0);
    v0 = sceGeSetCallback(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A998B8;
L_08A998B8:;
    ST8(s0+52, s1);
    t4 = s0 + 0;
    a0 = 3;
    ST32(s0+40, 0);
    v1 = 480;
    t2 = 3;
    ST32(s0+44, 0);
    ST32(s0+48, 0);
    ST32(s0+56, 0);
    ST16(s0+60, 0);
    ST16(s0+62, 0);
    ST32(s0+64, 0);
    ST32(s0+36, v0);
    v0 = 272;
    goto L_08A998F0;
L_08A998F0:;
    t2 = t2 - 1;
    ST32(t4+76, a0);
    ST16(t4+80, v1);
    cnd_ = (s32)t2 >= 0;
    ST16(t4+82, v0);
    if (cnd_) { goto L_08A998F0; }
    goto L_08A99904;
L_08A99904:;
    a1 = 0x16040000u;
    s1 = 0x90ff0000u;
    a3 = 0x91ff0000u;
    t0 = a1 | 0x3ddf;
    t9 = s1 | 0xffff;
    t2 = 0xd5040000u;
    t8 = a3 | 0xffff;
    v1 = 0x15000000u;
    a0 = 0x8f000000u;
    s0 = 0x92000000u;
    t6 = (u32)-1;
    t7 = 0xd4000000u;
    s1 = t2 | 0x3ddf;
    ST32(t4+132, v1);
    t1 = 0x93000000u;
    a2 = 0x95000000u;
    ST32(t4+136, t0);
    v1 = 0x96000000u;
    t0 = 0x94000000u;
    ST32(t4+144, a0);
    v0 = 0x97000000u;
    a0 = 0x98000000u;
    ST32(t4+148, t9);
    a1 = 0x99000000u;
    t9 = 0x9a000000u;
    ST32(t4+152, t8);
    t8 = 0xd5000000u;
    t5 = 16384;
    ST32(t4+156, s0);
    s0 = 0xc9000000u;
    t3 = D_08C37CC0 - (31936);
    ST32(t4+68, 0);
    t2 = 31;
    ST32(t4+160, t1);
    ST32(t4+164, t0);
    ST32(t4+168, a2);
    ST32(t4+172, v1);
    ST32(t4+176, v0);
    ST32(t4+180, a0);
    ST32(t4+184, a1);
    ST32(t4+188, t9);
    ST32(t4+196, t8);
    ST32(t4+200, t7);
    ST32(t4+204, s1);
    ST32(t4+224, s0);
    ST16(t4+232, t6);
    ST32(t4+236, 0);
    ST32(t4+140, 0);
    ST32(t4+192, t7);
    ST32(t4+208, 0);
    ST8(t4+212, 0);
    ST16(t4+214, t6);
    ST16(t4+216, 0);
    ST16(t4+218, 0);
    ST16(t4+220, 0);
    ST16(t4+222, 0);
    ST32(t4+228, 0);
    ST16(t4+234, 0);
    ST32(t4+72, t5);
    t5 = t3 + 31936;
    t3 = t5 + 240;
    goto L_08A999F8;
L_08A999F8:;
    t2 = t2 - 1;
    ST32(t3, 0);
    cnd_ = (s32)t2 >= 0;
    t3 = t3 + 4;
    if (cnd_) { goto L_08A999F8; }
    goto L_08A99A08;
L_08A99A08:;
    t4 = t5 + 372;
    a2 = 1;
    t7 = 16;
    t6 = 32;
    ST8(t5+1436, a2);
    ST32(t5+1396, t7);
    ST32(t5+1404, t6);
    ST32(t5+1408, t4);
    ST32(t5+368, 0);
    ST32(t5+1400, 0);
    ST32(t5+1412, 0);
    ST32(t5+1432, 0);
    goto L_08A9983C;
}

/* 08A99A3C */
void func_08A99A3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08A99A3C:;
    sp = sp - 64;
    fp = a1 + 0;
    s7 = t0 + 0;
    s6 = D_08C38260 - (-32160);
    s5 = s6 - 32160;
    s4 = a3 + 0;
    s3 = a0 + 0;
    v1 = LD32(s5+28);
    cnd_ = v1 == 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_08A99E30; }
    goto L_08A99A8C;
L_08A99A8C:;
    a1 = D_08C37CC0 - (31936);
    v1 = a1 + 31936;
    a0 = LD_U8(v1+1436);
    cnd_ = a0 != 0;
    if (cnd_) { ST8(v1+1436, 0); goto L_08A99F34; }
    goto L_08A99AA0;
L_08A99AA0:;
    a1 = LD_U8(s4);
    goto L_08A99AA4;
L_08A99AA4:;
    t0 = s4 + 1;
    s0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(sp+4, t0);
    if (cnd_) { goto L_08A99E30; }
    goto L_08A99AB4;
L_08A99AB4:;
    t1 = a1 < 0x21u;
    a1 = LD_U8(t0);
    a3 = t1 < 0x1u;
    s0 = s0 + a3;
    cnd_ = a1 != 0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08A99AB4; }
    goto L_08A99ACC;
L_08A99ACC:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08A99E34; }
    goto L_08A99AD4;
L_08A99AD4:;
    t2 = D_08C37CC0 - (31936);
    s1 = t2 + 31936;
    t0 = LD32(s1+1432);
    ST32(sp, t0);
    cnd_ = t0 != 0;
    v1 = t0 + 0;
    if (cnd_) { goto L_08A99C0C; }
    goto L_08A99AEC;
L_08A99AEC:;
    t5 = D_08C38260 - (-32160);
    t4 = t5 - 32160;
    t3 = LD32(t4+28);
    cnd_ = t3 == 0;
    if (cnd_) { t2 = LD32(s5); goto L_08A99C10; }
    goto L_08A99B00;
L_08A99B00:;
    t6 = LD_U8(s1+1436);
    cnd_ = t6 != 0;
    if (cnd_) { ST8(s1+1436, 0); goto L_08A99F14; }
    goto L_08A99B0C;
L_08A99B0C:;
    cnd_ = v1 != 0;
    t0 = D_08C37CC0 - (31936);
    if (cnd_) { goto L_08A99BFC; }
    goto L_08A99B14;
L_08A99B14:;
    v1 = D_08C38260 - (-32160);
    t9 = LD32(v1-32160);
    a2 = 0xe030000u;
    a0 = 0xc000000u;
    v0 = a2 | 0xfff1;
    a1 = 0xf000000u;
    ST32(t9, v0);
    s1 = D_08AEA780 - (-22656);
    a2 = s1 - 22656;
    ST32(t9+8, a1);
    ST32(t9+12, a0);
    ST32(t9+4, a0);
    a1 = LD32(s1-22656);
    cnd_ = a1 == 0;
    t1 = t9 + 16;
    if (cnd_) { goto L_08A99B7C; }
    goto L_08A99B50;
L_08A99B50:;
    t2 = LD32(a2+4);
    t0 = LD32(a2+8);
    a3 = LD32(a2+12);
    ST32(t1, a1);
    a2 = a2 + 16;
    ST32(t1+4, t2);
    ST32(t1+8, t0);
    ST32(t1+12, a3);
    a1 = LD32(a2);
    cnd_ = a1 != 0;
    t1 = t1 + 16;
    if (cnd_) { goto L_08A99B50; }
    goto L_08A99B7C;
L_08A99B7C:;
    a1 = D_08AEA300 - (-23808);
    t6 = a1 - 23808;
    a3 = D_08AEA700 - (-22784);
    s1 = (u32)((s32)t6 >> 8);
    t3 = a3 - 22784;
    a2 = 0x1f0000u;
    t8 = 0xa8000000u;
    t9 = (u32)((s32)t3 >> 8);
    t5 = t8 | 0x100;
    t4 = s1 & a2;
    s1 = t4 | t5;
    t0 = t9 & a2;
    t6 = (t6 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t3 = (t3 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t7 = 0xa0000000u;
    t2 = 0xc4000000u;
    v1 = 0xb0000000u;
    v0 = 0xb1000000u;
    t5 = D_08C38260 - (-32160);
    t9 = t6 | t7;
    t8 = t3 | v1;
    t7 = t0 | v0;
    t6 = t2 | 0x1;
    t4 = t1 + 20;
    t3 = t5 - 32160;
    ST32(t1, t9);
    ST32(t1+4, s1);
    ST32(t1+8, t8);
    ST32(t1+12, t7);
    ST32(t1+16, t6);
    ST32(t3, t4);
    t0 = D_08C37CC0 - (31936);
    goto L_08A99BFC;
L_08A99BFC:;
    t1 = t0 + 31936;
    t2 = LD32(t1+1432);
    a0 = t2 + 1;
    ST32(t1+1432, a0);
    goto L_08A99C0C;
L_08A99C0C:;
    t2 = LD32(s5);
    goto L_08A99C10;
L_08A99C10:;
    a0 = s6 - 32160;
    t3 = LD32(a0+4);
    a3 = t2 + 11;
    v0 = s0 << 4;
    a3 = (a3 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    v1 = a3 + v0;
    s0 = (s32)v1 < (s32)t3;
    a2 = t2 + 0;
    cnd_ = s0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08A99C74; }
    goto L_08A99C38;
L_08A99C38:;
    t8 = LD32(a0+16);
    s1 = D_08C38260 - (-32160);
    ST32(s1-32160, v1);
    t5 = v1 - t8;
    t7 = (t5 >> 24) & 0x1f;
    t6 = 0x10000000u;
    t4 = 0x8000000u;
    a2 = t6 + 0;
    a2 = (a2 & ~(0x1fu << 16)) | ((t7 & 0x1f) << 16);
    v0 = t4 + 0;
    v0 = (v0 & ~(0xffffffu << 0)) | ((t5 & 0xffffff) << 0);
    ST32(t2, a2);
    a1 = a3 + 0;
    ST32(t2+4, v0);
    a2 = LD32(s5);
    goto L_08A99C74;
L_08A99C74:;
    v0 = LD32(s5+16);
    t1 = a1 + 0;
    t2 = 0x55000000u;
    t0 = a1 - v0;
    t5 = t0 >> 8;
    a1 = 0x1f0000u;
    t3 = t5 & a1;
    t0 = (t0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    s2 = (s2 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    t4 = 0x10000000u;
    s0 = 0x1000000u;
    v1 = s2 | t2;
    a3 = t3 | t4;
    t9 = t0 | s0;
    ST32(a2, a3);
    t2 = a2 + 12;
    ST32(a2+4, t9);
    cnd_ = s7 != 0;
    ST32(a2+8, v1);
    if (cnd_) { goto L_08A99EE8; }
    goto L_08A99CC0;
L_08A99CC0:;
    a0 = 0xdf000000u;
    a2 = a0 | 0x32;
    s7 = 0x28000000u;
    ST32(t2, a2);
    ST32(t2+4, s7);
    t2 = t2 + 8;
    goto L_08A99CD8;
L_08A99CD8:;
    a1 = LD_U8(s4);
    s4 = 0xc5000000u;
    t4 = fp + 0;
    t0 = LD32(sp+4);
    t5 = s4 | 0x11f;
    t6 = 0x4060000u;
    cnd_ = a1 == 0;
    t3 = s3 + 0;
    if (cnd_) { goto L_08A99DB0; }
    goto L_08A99CF8;
L_08A99CF8:;
    fp = 0xc5000000u;
    t7 = fp | 0x103;
    s4 = 0x4060000u;
    s0 = 1;
    s1 = 32;
    s2 = 9;
    s7 = 13;
    t8 = 10;
    goto L_08A99D18;
L_08A99D18:;
    t9 = a1 < 0x21u;
    cnd_ = t9 != 0;
    a0 = a1 - 32;
    if (cnd_) { goto L_08A99E80; }
    goto L_08A99D24;
L_08A99D24:;
    a1 = a0 & 0xff;
    a2 = a1 & 0x60;
    a3 = a2 >> 3;
    v0 = a3 | t7;
    cnd_ = t5 == v0;
    t9 = (u32)(s32)(s16)t3;
    if (cnd_) { goto L_08A99D5C; }
    goto L_08A99D3C;
L_08A99D3C:;
    cnd_ = t6 == s4;
    if (cnd_) { t5 = v0 + 0; goto L_08A99D54; }
    goto L_08A99D44;
L_08A99D44:;
    ST32(t2, t5);
    ST32(t2+4, t6);
    t2 = t2 + 8;
    t5 = v0 + 0;
    goto L_08A99D54;
L_08A99D54:;
    t6 = 0x4060000u;
    t9 = (u32)(s32)(s16)t3;
    goto L_08A99D5C;
L_08A99D5C:;
    a3 = a1 & 0x1f;
    fp = (u32)(s32)(s16)t4;
    v1 = a3 + 1;
    a0 = t9 + 8;
    a2 = fp + 8;
    ST8(t1+8, v1);
    t6 = t6 + 2;
    t3 = t3 + 8;
    ST16(t1+10, a0);
    ST16(t1+12, a2);
    ST8(t1, a3);
    ST8(t1+1, 0);
    ST16(t1+2, t9);
    ST16(t1+4, fp);
    ST16(t1+6, 0);
    ST8(t1+9, s0);
    ST16(t1+14, 0);
    t1 = t1 + 16;
    goto L_08A99DA4;
L_08A99DA4:;
    a1 = LD_U8(t0);
    cnd_ = a1 != 0;
    t0 = t0 + 1;
    if (cnd_) { goto L_08A99D18; }
    goto L_08A99DB0;
L_08A99DB0:;
    s3 = LD32(sp);
    t1 = t2 + 8;
    ST32(t2, t5);
    ST32(t2+4, t6);
    cnd_ = s3 != 0;
    ST32(s5, t1);
    if (cnd_) { goto L_08A99E30; }
    goto L_08A99DC8;
L_08A99DC8:;
    t2 = s6 - 32160;
    s5 = LD32(t2+28);
    cnd_ = s5 == 0;
    s1 = D_08C38260 - (-32160);
    if (cnd_) { goto L_08A99E30; }
    goto L_08A99DD8;
L_08A99DD8:;
    t0 = D_08C37CC0 - (31936);
    s0 = t0 + 31936;
    s6 = LD_U8(s0+1436);
    cnd_ = s6 != 0;
    if (cnd_) { ST8(s0+1436, 0); goto L_08A99E60; }
    goto L_08A99DEC;
L_08A99DEC:;
    s7 = LD32(s0+1432);
    goto L_08A99DF0;
L_08A99DF0:;
    t5 = s7 - 1;
    cnd_ = t5 != 0;
    ST32(s0+1432, t5);
    if (cnd_) { goto L_08A99E30; }
    goto L_08A99DFC;
L_08A99DFC:;
    s0 = LD32(s1-32160);
    s4 = 0xe030000u;
    t6 = 0xc000000u;
    s2 = s0 + 20;
    t8 = s4 | 0xfff2;
    ST32(s1-32160, s2);
    t7 = 0xf000000u;
    s1 = 0xcb000000u;
    ST32(s0, s1);
    ST32(s0+4, t8);
    ST32(s0+12, t7);
    ST32(s0+16, t6);
    ST32(s0+8, t6);
    goto L_08A99E30;
L_08A99E30:;
    goto L_08A99E34;
L_08A99E34:;
    sp = sp + 64;
    return;
L_08A99E60:;
    t4 = D_08AEA8E0 - (-22304);
    a0 = t4 - 22304;
    { rv_t r_ = func_08A884C0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99E6C;
L_08A99E6C:;
    t3 = D_08AEA908 - (-22264);
    a0 = t3 - 22264;
    { rv_t r_ = func_08A884C0(a0, 0, 0, 0, 0, 0, 0, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99E78;
L_08A99E78:;
    s7 = LD32(s0+1432);
    goto L_08A99DF0;
L_08A99E80:;
    cnd_ = a1 == s1;
    if (cnd_) { t3 = t3 + 8; goto L_08A99DA4; }
    goto L_08A99E88;
L_08A99E88:;
    cnd_ = a1 == s2;
    v0 = a1 ^ 0xd;
    if (cnd_) { goto L_08A99EC8; }
    goto L_08A99E90;
L_08A99E90:;
    t9 = a1 ^ 0xa;
    a0 = v0 < 0x1u;
    fp = t9 < 0x1u;
    a2 = a0 | fp;
    cnd_ = a2 == 0;
    t3 = t3 + 8;
    if (cnd_) { goto L_08A99DA4; }
    goto L_08A99EA8;
L_08A99EA8:;
    t3 = s3 + 0;
    cnd_ = a1 != s7;
    t4 = t4 + 8;
    if (cnd_) { goto L_08A99DA4; }
    goto L_08A99EB4;
L_08A99EB4:;
    a3 = LD_U8(t0+1);
    a1 = a3 ^ t8;
    v1 = a1 < 0x1u;
    t0 = t0 + v1;
    goto L_08A99DA4;
L_08A99EC8:;
    a3 = t3 + 8;
    t9 = a3 - s3;
    v0 = (u32)((s32)t9 >> 3);
    fp = v0 + 3;
    fp = (fp & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    a1 = fp << 3;
    t3 = s3 + a1;
    goto L_08A99DA4;
L_08A99EE8:;
    v1 = 0xdf000000u;
    s2 = 0x28000000u;
    s1 = 0xe6000000u;
    t8 = v1 | 0xa2;
    t7 = s2 | 0x1;
    t6 = s1 | 0x6;
    ST32(t2, t8);
    ST32(t2+4, t7);
    ST32(t2+8, t6);
    t2 = t2 + 12;
    goto L_08A99CD8;
L_08A99F14:;
    t8 = D_08AEA8E0 - (-22304);
    a0 = t8 - 22304;
    { rv_t r_ = func_08A884C0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99F20;
L_08A99F20:;
    t7 = D_08AEA908 - (-22264);
    a0 = t7 - 22264;
    { rv_t r_ = func_08A884C0(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99F2C;
L_08A99F2C:;
    v1 = LD32(s1+1432);
    goto L_08A99B0C;
L_08A99F34:;
    a2 = D_08AEA8E0 - (-22304);
    a0 = a2 - 22304;
    { rv_t r_ = func_08A884C0(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99F40;
L_08A99F40:;
    v0 = D_08AEA908 - (-22264);
    a0 = v0 - 22264;
    { rv_t r_ = func_08A884C0(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99F4C;
L_08A99F4C:;
    a1 = LD_U8(s4);
    goto L_08A99AA4;
}

/* 08A99F54 */
rv_t func_08A99F54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A99F54:;
    sp = sp - 16;
    v0 = a0 & 0xfff0;
    a2 = 0xfff0;
    cnd_ = v0 == a2;
    if (cnd_) { goto L_08A99F94; }
    goto L_08A99F68;
L_08A99F68:;
    t1 = D_08C37CEC - (31980);
    v0 = LD32(t1+31980);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A99F84; }
    goto L_08A99F78;
L_08A99F78:;
    goto L_08A99F7C;
L_08A99F7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A99F84:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A99F8C;
L_08A99F8C:;
    goto L_08A99F7C;
L_08A99F94:;
    v1 = a0 & 0xf;
    a0 = 1;
    cnd_ = v1 == a0;
    a1 = 2;
    if (cnd_) { goto L_08A99FF4; }
    goto L_08A99FA4;
L_08A99FA4:;
    cnd_ = v1 == a1;
    a3 = 3;
    if (cnd_) { goto L_08A99FE0; }
    goto L_08A99FAC;
L_08A99FAC:;
    cnd_ = v1 == a3;
    if (cnd_) { goto L_08A99FC4; }
    goto L_08A99FB4;
L_08A99FB4:;
    v0 = sceGeContinue(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A99FBC;
L_08A99FBC:;
    goto L_08A99F7C;
L_08A99FC4:;
    a0 = 12;
    v0 = sceGeGetCmd(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A99FCC;
L_08A99FCC:;
    t0 = v0 & 0xffff;
    a0 = t0 + 0;
    v0 = sceGeEdramSetAddrTranslation(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A99FD8;
L_08A99FD8:;
    goto L_08A99FB4;
L_08A99FE0:;
    a2 = D_08C38290 - (-32112);
    a0 = a2 - 32112;
    v0 = sceGeRestoreContext(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A99FEC;
L_08A99FEC:;
    goto L_08A99FB4;
L_08A99FF4:;
    v1 = D_08C38290 - (-32112);
    a0 = v1 - 32112;
    v0 = sceGeSaveContext(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08A9A000;
L_08A9A000:;
    goto L_08A99FB4;
}

/* 08A9A008 */
rv_t func_08A9A008(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08A9A008:;
    v1 = D_08C37CF0 - (31984);
    v0 = LD32(v1+31984);
    sp = sp - 16;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08A9A028; }
    goto L_08A9A01C;
L_08A9A01C:;
    goto L_08A9A020;
L_08A9A020:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08A9A028:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08A9A030;
L_08A9A030:;
    goto L_08A9A020;
}

/* 08A9A038 */
void func_08A9A038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    float f0 = 0;
    int cnd_;
L_08A9A038:;
    t2 = a1 << 6;
    a0 = (a0 & ~(0x7u << 29)) | ((0 & 0x7) << 29);
    t7 = a0 + t2;
    t3 = a2 << 6;
    t2 = t7 + t3;
    v1 = a3 << 6;
    t5 = D_08C38A90 - (-30064);
    t8 = t5 - 30064;
    t3 = t2 + v1;
    v0 = 0 < t0;
    if (a1 == 0) a0 = 0;
    if (a2 == 0) t7 = 0;
    if (a3 == 0) t2 = 0;
    if (t0 == 0) t3 = 0;
    a1 = 0 < a1;
    a2 = 0 < a2;
    t9 = 0 < a3;
    v1 = LD32(t5-30064);
    ST8(t8+7, v0);
    v0 = D_08AF095C - (2396);
    t4 = t8 + 0;
    ST32(t8+20, t2);
    t6 = v1 + t8;
    t1 = t8 + 12;
    ST32(t8+24, t3);
    ST8(t8+4, a1);
    ST8(t8+5, a2);
    ST8(t8+6, t9);
    f0 = BITSF(LD32(v0+2396));
    ST32(t8+12, a0);
    a0 = 0 + 0;
    ST32(t8+16, t7);
    t7 = 1;
    goto L_08A9A0BC;
L_08A9A0BC:;
    a1 = a0 + t4;
    a2 = LD_U8(a1+4);
    a0 = a0 + 1;
    cnd_ = a2 == 0;
    a1 = (s32)a0 < 4;
    if (cnd_) { goto L_08A9A11C; }
    goto L_08A9A0D0;
L_08A9A0D0:;
    a3 = LD32(t1);
    ST32(a3+60, FBITS(f0));
    ST32(a3, FBITS(f0));
    ST32(a3+4, 0);
    ST32(a3+8, 0);
    ST32(a3+12, 0);
    ST32(a3+16, 0);
    ST32(a3+20, FBITS(f0));
    ST32(a3+24, 0);
    ST32(a3+28, 0);
    ST32(a3+32, 0);
    ST32(a3+36, 0);
    ST32(a3+40, FBITS(f0));
    ST32(a3+44, 0);
    ST32(a3+48, 0);
    ST32(a3+52, 0);
    ST32(a3+56, 0);
    ST32(t4+8, a3);
    ST8(t6+4, t7);
    goto L_08A9A11C;
L_08A9A11C:;
    cnd_ = a1 != 0;
    t1 = t1 + 4;
    if (cnd_) { goto L_08A9A0BC; }
    goto L_08A9A124;
L_08A9A124:;
    t0 = t5 - 30064;
    t1 = LD32(t0+20);
    a0 = 2;
    ST32(t5-30064, a0);
    ST32(t0+8, t1);
    return;
}

/* 08A9A13C */
void func_08A9A13C(u32 a0)
{
    u32 v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
L_08A9A13C:;
    t0 = D_08C38A90 - (-30064);
    t4 = LD32(t0-30064);
    a3 = t0 - 30064;
    t2 = LD32(a3+8);
    t3 = t4 << 2;
    t1 = t3 + a3;
    ST32(t1+12, t2);
    a2 = a0 << 2;
    a1 = a2 + a3;
    v1 = LD32(a1+12);
    ST32(t0-30064, a0);
    ST32(a3+8, v1);
    return;
}

/* 08A9A170 */
void func_08A9A170(void)
{
    u32 v0 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f1 = 0;
L_08A9A170:;
    a0 = D_08C38A90 - (-30064);
    a1 = a0 - 30064;
    a3 = LD32(a0-30064);
    t0 = D_08AF0960 - (2400);
    a2 = LD32(a1+8);
    f1 = BITSF(LD32(t0+2400));
    a0 = a3 + a1;
    v0 = 1;
    ST32(a2+60, FBITS(f1));
    ST32(a2, FBITS(f1));
    ST32(a2+4, 0);
    ST32(a2+8, 0);
    ST32(a2+12, 0);
    ST32(a2+16, 0);
    ST32(a2+20, FBITS(f1));
    ST32(a2+24, 0);
    ST32(a2+28, 0);
    ST32(a2+32, 0);
    ST32(a2+36, 0);
    ST32(a2+40, FBITS(f1));
    ST32(a2+44, 0);
    ST32(a2+48, 0);
    ST32(a2+52, 0);
    ST32(a2+56, 0);
    ST8(a0+4, v0);
    return;
}

/* 08A9A1D8 */
void func_08A9A1D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08A9A1D8:;
    t1 = D_08C38A90 - (-30064);
    v1 = t1 - 30064;
    a3 = LD32(v1+8);
    a2 = a0 + 0;
    t0 = a0 + 64;
    goto L_08A9A1EC;
L_08A9A1EC:;
    v1 = LD32(a2);
    a0 = LD32(a2+4);
    a1 = LD32(a2+8);
    t2 = LD32(a2+12);
    ST32(a3, v1);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, a0);
    ST32(a3-8, a1);
    cnd_ = a2 != t0;
    ST32(a3-4, t2);
    if (cnd_) { goto L_08A9A1EC; }
    goto L_08A9A218;
L_08A9A218:;
    t0 = LD32(t1-30064);
    v0 = t1 - 30064;
    a3 = 1;
    a2 = t0 + v0;
    ST8(a2+4, a3);
    return;
}

/* 08A9A230 */
void func_08A9A230(u32 a0)
{
    u32 v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08A9A230:;
    v1 = D_08C38A98 - (-30056);
    a2 = LD32(v1-30056);
    a3 = a0 + 0;
    t0 = a2 + 64;
    goto L_08A9A240;
L_08A9A240:;
    v1 = LD32(a2);
    a0 = LD32(a2+4);
    a1 = LD32(a2+8);
    t1 = LD32(a2+12);
    ST32(a3, v1);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, a0);
    ST32(a3-8, a1);
    cnd_ = a2 != t0;
    ST32(a3-4, t1);
    if (cnd_) { goto L_08A9A240; }
    goto L_08A9A26C;
L_08A9A26C:;
    return;
}

/* 08A9A274 */
void func_08A9A274(void)
{
    u32 v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_08A9A274:;
    t1 = D_08C38A90 - (-30064);
    v1 = t1 - 30064;
    a0 = LD32(v1+8);
    t0 = a0 + 64;
    a2 = a0 + 0;
    a3 = t0 + 0;
    goto L_08A9A28C;
L_08A9A28C:;
    t3 = LD32(a2);
    a0 = LD32(a2+4);
    a1 = LD32(a2+8);
    t2 = LD32(a2+12);
    ST32(a3, t3);
    a2 = a2 + 16;
    a3 = a3 + 16;
    ST32(a3-12, a0);
    ST32(a3-8, a1);
    cnd_ = a2 != t0;
    ST32(a3-4, t2);
    if (cnd_) { goto L_08A9A28C; }
    goto L_08A9A2B8;
L_08A9A2B8:;
    a2 = t1 - 30064;
    ST32(a2+8, t0);
    return;
}

/* 08A9A2C4 */
void func_08A9A2C4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
L_08A9A2C4:;
    v1 = D_08C38A90 - (-30064);
    a2 = v1 - 30064;
    v0 = LD32(a2+8);
    a0 = LD32(v1-30064);
    t0 = 1;
    a1 = v0 - 64;
    a3 = a0 + a2;
    ST8(a3+4, t0);
    ST32(a2+8, a1);
    return;
}

/* 08A9A2EC */
void func_08A9A2EC(u32 a0)
{
    u32 v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08A9A2EC:;
    sp = sp - 144;
    a1 = D_08C38A90 - (-30064);
    t1 = a1 - 30064;
    v1 = 1;
    a3 = LD32(t1+8);
    f6 = BITSF(LD32(a0+4));
    f15 = BITSF(LD32(a0));
    f9 = BITSF(LD32(a3+28));
    f25 = BITSF(LD32(a3+16));
    f24 = BITSF(LD32(a3+20));
    ST32(sp, FBITS(f9));
    f1 = f25 * f6;
    f7 = f24 * f6;
    f23 = BITSF(LD32(a3+24));
    f14 = BITSF(LD32(sp));
    f5 = BITSF(LD32(a3+32));
    f8 = f23 * f6;
    f29 = f14 * f6;
    f28 = BITSF(LD32(a0+16));
    f26 = BITSF(LD32(a0+20));
    f18 = BITSF(LD32(a0+8));
    f11 = BITSF(LD32(a3));
    f12 = BITSF(LD32(a3+4));
    f13 = BITSF(LD32(a3+8));
    f10 = BITSF(LD32(a3+12));
    ST32(sp+32, FBITS(f29));
    f16 = f25 * f26;
    f14 = f23 * f26;
    ST32(sp+8, FBITS(f1));
    f9 = f10 * f15;
    f0 = f11 * f15;
    ST32(sp+16, FBITS(f7));
    f1 = f12 * f15;
    f7 = f13 * f15;
    ST32(sp+24, FBITS(f8));
    f15 = f24 * f26;
    f8 = f10 * f28;
    ST32(sp+4, FBITS(f5));
    f6 = f13 * f28;
    f5 = f12 * f28;
    f30 = BITSF(LD32(sp+4));
    f22 = BITSF(LD32(a3+44));
    f2 = BITSF(LD32(a3+40));
    f19 = f30 * f18;
    f4 = BITSF(LD32(sp));
    f20 = f22 * f18;
    f31 = f2 * f18;
    ST32(sp+12, FBITS(f19));
    f21 = f4 * f26;
    f4 = f11 * f28;
    f19 = BITSF(LD32(a0+24));
    f27 = BITSF(LD32(a3+44));
    f17 = BITSF(LD32(a3+36));
    ST32(sp+36, FBITS(f20));
    f26 = f27 * f19;
    f3 = f17 * f18;
    ST32(sp+28, FBITS(f31));
    f4 = f4 + f16;
    f6 = f6 + f14;
    f31 = BITSF(LD32(a0+12));
    f22 = BITSF(LD32(sp+4));
    f20 = BITSF(LD32(a3+36));
    f30 = BITSF(LD32(a3+40));
    f18 = BITSF(LD32(a3+60));
    f27 = BITSF(LD32(a3+52));
    ST32(sp+44, FBITS(f26));
    f26 = f22 * f19;
    f22 = f20 * f19;
    f20 = f30 * f19;
    f19 = f18 * f31;
    f17 = BITSF(LD32(a3+48));
    f18 = f27 * f31;
    f27 = BITSF(LD32(a3+56));
    ST32(sp+40, FBITS(f19));
    f19 = f17 * f31;
    f17 = f27 * f31;
    f27 = BITSF(LD32(sp+8));
    f29 = BITSF(LD32(a0+32));
    f28 = BITSF(LD32(a0+36));
    f0 = f0 + f27;
    f27 = BITSF(LD32(sp+16));
    ST32(sp+20, FBITS(f3));
    f2 = f25 * f28;
    f1 = f1 + f27;
    f27 = BITSF(LD32(sp+24));
    f3 = f11 * f29;
    f30 = BITSF(LD32(a0+40));
    f7 = f7 + f27;
    f27 = BITSF(LD32(sp+32));
    f31 = BITSF(LD32(a0+28));
    f3 = f3 + f2;
    f9 = f9 + f27;
    f2 = BITSF(LD32(a3+60));
    f27 = BITSF(LD32(sp+4));
    f16 = BITSF(LD32(a3+48));
    f8 = f8 + f21;
    f14 = f27 * f30;
    f21 = BITSF(LD32(a3+52));
    f27 = f2 * f31;
    f2 = BITSF(LD32(a3+56));
    f5 = f5 + f15;
    f15 = f16 * f31;
    f16 = f21 * f31;
    f21 = f2 * f31;
    f2 = BITSF(LD32(sp+12));
    f4 = f4 + f26;
    f26 = f5 + f22;
    f0 = f0 + f2;
    f2 = BITSF(LD32(sp+20));
    f22 = BITSF(LD32(sp+44));
    f31 = BITSF(LD32(a0+44));
    f1 = f1 + f2;
    f2 = BITSF(LD32(sp+28));
    f6 = f6 + f20;
    f0 = f0 + f19;
    f7 = f7 + f2;
    f2 = BITSF(LD32(sp+36));
    f20 = BITSF(LD32(a3+48));
    f8 = f8 + f22;
    f22 = f1 + f18;
    f9 = f9 + f2;
    f18 = BITSF(LD32(sp+40));
    f2 = f20 * f31;
    f3 = f3 + f14;
    ST32(a3, FBITS(f0));
    f20 = f26 + f16;
    f0 = f24 * f28;
    f26 = f6 + f21;
    f7 = f7 + f17;
    f21 = BITSF(LD32(sp));
    f17 = f4 + f15;
    ST32(a3+4, FBITS(f22));
    f22 = f12 * f29;
    f14 = f9 + f18;
    f9 = BITSF(LD32(a3+36));
    f18 = f3 + f2;
    f19 = f10 * f29;
    f2 = f21 * f28;
    f16 = f13 * f29;
    f1 = f23 * f28;
    f29 = BITSF(LD32(a3+44));
    f28 = f9 * f30;
    ST32(a3+16, FBITS(f17));
    f15 = f22 + f0;
    f8 = f8 + f27;
    f17 = BITSF(LD32(a3+40));
    f27 = f29 * f30;
    f22 = f16 + f1;
    f21 = f17 * f30;
    ST32(a3+20, FBITS(f20));
    f20 = f19 + f2;
    f0 = f15 + f28;
    ST32(a3+8, FBITS(f7));
    f28 = BITSF(LD32(a0+48));
    f7 = BITSF(LD32(a3+56));
    ST32(a3+32, FBITS(f18));
    f3 = f11 * f28;
    f4 = f7 * f31;
    f18 = BITSF(LD32(a0+52));
    f19 = BITSF(LD32(a3+60));
    f7 = f22 + f21;
    f29 = BITSF(LD32(sp));
    f22 = f20 + f27;
    f16 = f25 * f18;
    f27 = f12 * f28;
    f30 = f24 * f18;
    ST32(a3+12, FBITS(f14));
    f6 = f29 * f18;
    f9 = f13 * f28;
    f14 = BITSF(LD32(a3+52));
    f21 = f23 * f18;
    ST32(a3+24, FBITS(f26));
    f5 = f14 * f31;
    f26 = f19 * f31;
    f31 = f10 * f28;
    f20 = BITSF(LD32(a0+56));
    f18 = f3 + f16;
    f14 = BITSF(LD32(a3+44));
    f15 = BITSF(LD32(sp+4));
    ST32(sp+48, FBITS(f16));
    f16 = f27 + f30;
    f3 = f17 * f20;
    f30 = BITSF(LD32(a3+36));
    f27 = f31 + f6;
    f29 = f14 * f20;
    f31 = f9 + f21;
    ST32(a3+28, FBITS(f8));
    f8 = f15 * f20;
    f14 = f27 + f29;
    ST32(sp+76, FBITS(f6));
    f6 = f30 * f20;
    f20 = f18 + f8;
    f23 = BITSF(LD32(a0+60));
    f28 = BITSF(LD32(a3+48));
    f25 = BITSF(LD32(a3+52));
    f24 = BITSF(LD32(a3+56));
    f21 = f28 * f23;
    f18 = f16 + f6;
    f17 = f24 * f23;
    f15 = f19 * f23;
    f16 = f31 + f3;
    f19 = f25 * f23;
    ST32(sp+80, FBITS(f29));
    f9 = f0 + f5;
    f5 = f20 + f21;
    ST32(sp+52, FBITS(f8));
    f8 = f7 + f4;
    f4 = f18 + f19;
    ST32(sp+60, FBITS(f6));
    f7 = f14 + f15;
    f6 = f22 + f26;
    ST32(sp+68, FBITS(f3));
    f3 = f16 + f17;
    ST32(sp+56, FBITS(f21));
    ST32(sp+64, FBITS(f19));
    ST32(sp+72, FBITS(f17));
    t0 = LD32(a1-30064);
    a2 = t0 + t1;
    ST32(a3+36, FBITS(f9));
    ST32(a3+60, FBITS(f7));
    ST32(a3+40, FBITS(f8));
    ST32(a3+44, FBITS(f6));
    ST32(a3+48, FBITS(f5));
    ST32(a3+52, FBITS(f4));
    ST32(a3+56, FBITS(f3));
    ST8(a2+4, v1);
    sp = sp + 144;
    return;
}

/* 08A9A6DC */
void func_08A9A6DC(float f12)
{
    u32 v0 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9A6DC:;
    sp = sp - 32;
    s1 = D_08C38A90 - (-30064);
    s2 = s1 - 30064;
    s0 = LD32(s2+8);
    f21 = f12;
    f0 = func_08A9F454(f12);
    goto L_08A9A70C;
L_08A9A70C:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9A718;
L_08A9A718:;
    f1 = BITSF(LD32(s0+16));
    f2 = BITSF(LD32(s0+20));
    f3 = BITSF(LD32(s0+24));
    f4 = BITSF(LD32(s0+28));
    f7 = BITSF(LD32(s0+36));
    f19 = BITSF(LD32(s0+44));
    f6 = BITSF(LD32(s0+32));
    f8 = BITSF(LD32(s0+40));
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
    f1 = f13 - f11;
    f17 = f7 + f3;
    f2 = f14 - f12;
    f3 = f15 + f20;
    f0 = f16 - f10;
    v0 = LD32(s1-30064);
    ST32(s0+16, FBITS(f19));
    a1 = 1;
    a0 = v0 + s2;
    ST32(s0+44, FBITS(f4));
    ST32(s0+20, FBITS(f18));
    ST32(s0+24, FBITS(f17));
    ST32(s0+28, FBITS(f3));
    ST32(s0+32, FBITS(f2));
    ST32(s0+36, FBITS(f1));
    ST32(s0+40, FBITS(f0));
    ST8(a0+4, a1);
    sp = sp + 32;
    return;
}

/* 08A9A7E8 */
void func_08A9A7E8(float f12)
{
    u32 v0 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9A7E8:;
    sp = sp - 32;
    s1 = D_08C38A90 - (-30064);
    s2 = s1 - 30064;
    s0 = LD32(s2+8);
    f21 = f12;
    f0 = func_08A9F454(f12);
    goto L_08A9A818;
L_08A9A818:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9A824;
L_08A9A824:;
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0+12));
    f7 = BITSF(LD32(s0+36));
    f19 = BITSF(LD32(s0+44));
    f6 = BITSF(LD32(s0+32));
    f8 = BITSF(LD32(s0+40));
    f14 = f1 * f0;
    f9 = f19 * f20;
    f13 = f2 * f0;
    f11 = f7 * f20;
    f18 = f1 * f20;
    f17 = f2 * f20;
    f1 = f6 * f0;
    f2 = f7 * f0;
    f15 = f4 * f20;
    f7 = f3 * f20;
    f21 = f4 * f0;
    f12 = f6 * f20;
    f16 = f3 * f0;
    f10 = f8 * f20;
    f3 = f8 * f0;
    f20 = f19 * f0;
    f4 = f21 + f9;
    f19 = f18 - f1;
    f0 = f16 + f10;
    f18 = f17 - f2;
    f1 = f13 + f11;
    f17 = f7 - f3;
    f2 = f14 + f12;
    f3 = f15 - f20;
    v0 = LD32(s1-30064);
    ST32(s0, FBITS(f19));
    a1 = 1;
    a0 = v0 + s2;
    ST32(s0+44, FBITS(f4));
    ST32(s0+4, FBITS(f18));
    ST32(s0+8, FBITS(f17));
    ST32(s0+12, FBITS(f3));
    ST32(s0+32, FBITS(f2));
    ST32(s0+36, FBITS(f1));
    ST32(s0+40, FBITS(f0));
    ST8(a0+4, a1);
    sp = sp + 32;
    return;
}

/* 08A9A8F4 */
void func_08A9A8F4(float f12)
{
    u32 v0 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08A9A8F4:;
    sp = sp - 32;
    s1 = D_08C38A90 - (-30064);
    s2 = s1 - 30064;
    s0 = LD32(s2+8);
    f21 = f12;
    f0 = func_08A9F454(f12);
    goto L_08A9A924;
L_08A9A924:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9A930;
L_08A9A930:;
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s0+12));
    f7 = BITSF(LD32(s0+20));
    f19 = BITSF(LD32(s0+28));
    f6 = BITSF(LD32(s0+16));
    f8 = BITSF(LD32(s0+24));
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
    f1 = f13 - f11;
    f17 = f7 + f3;
    f2 = f14 - f12;
    f3 = f15 + f20;
    f0 = f16 - f10;
    v0 = LD32(s1-30064);
    ST32(s0, FBITS(f19));
    a1 = 1;
    a0 = v0 + s2;
    ST32(s0+28, FBITS(f4));
    ST32(s0+4, FBITS(f18));
    ST32(s0+8, FBITS(f17));
    ST32(s0+12, FBITS(f3));
    ST32(s0+16, FBITS(f2));
    ST32(s0+20, FBITS(f1));
    ST32(s0+24, FBITS(f0));
    ST8(a0+4, a1);
    sp = sp + 32;
    return;
}

/* 08A9AA00 */
void func_08A9AA00(u32 a0)
{
    u32 v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08A9AA00:;
    sp = sp - 48;
    s4 = D_08C38A90 - (-30064);
    s3 = 1;
    s2 = a0 + 0;
    s1 = s4 - 30064;
    f21 = BITSF(LD32(a0));
    s0 = LD32(s1+8);
    f12 = f21;
    f0 = func_08A9F454(f12);
    goto L_08A9AA44;
L_08A9AA44:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9AA50;
L_08A9AA50:;
    f7 = BITSF(LD32(s0+36));
    f8 = BITSF(LD32(s0+40));
    f1 = BITSF(LD32(s0+16));
    f2 = BITSF(LD32(s0+20));
    f3 = BITSF(LD32(s0+24));
    f4 = BITSF(LD32(s0+28));
    f6 = BITSF(LD32(s0+32));
    f18 = BITSF(LD32(s0+44));
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
    ST32(s0+16, FBITS(f18));
    ST32(s0+44, FBITS(f13));
    ST32(s0+20, FBITS(f17));
    ST32(s0+36, FBITS(f4));
    ST32(s0+40, FBITS(f14));
    ST32(s0+24, FBITS(f20));
    ST32(s0+28, FBITS(f21));
    ST32(s0+32, FBITS(f0));
    ST8(a2+4, s3);
    f21 = BITSF(LD32(s2+4));
    s0 = LD32(s1+8);
    f12 = f21;
    f0 = func_08A9F454(f12);
    goto L_08A9AB0C;
L_08A9AB0C:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9AB18;
L_08A9AB18:;
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
    f21 = BITSF(LD32(s2+8));
    s2 = LD32(s1+8);
    f12 = f21;
    f0 = func_08A9F454(f12);
    goto L_08A9ABD4;
L_08A9ABD4:;
    f12 = f21;
    f20 = f0;
    f0 = func_08A9F530(f12);
    goto L_08A9ABE0;
L_08A9ABE0:;
    f1 = BITSF(LD32(s2));
    f2 = BITSF(LD32(s2+4));
    f3 = BITSF(LD32(s2+8));
    f4 = BITSF(LD32(s2+12));
    f7 = BITSF(LD32(s2+20));
    f19 = BITSF(LD32(s2+28));
    f6 = BITSF(LD32(s2+16));
    f8 = BITSF(LD32(s2+24));
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
    ST32(s2, FBITS(f19));
    ST32(s2+28, FBITS(f4));
    ST32(s2+4, FBITS(f18));
    ST32(s2+8, FBITS(f17));
    ST32(s2+12, FBITS(f3));
    ST32(s2+16, FBITS(f2));
    ST32(s2+20, FBITS(f1));
    ST32(s2+24, FBITS(f0));
    ST8(v1+4, s3);
    sp = sp + 48;
    return;
}
