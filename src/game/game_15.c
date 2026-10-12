#include "game.h"

/* 089566A4 */
rv_t func_089566A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089566A4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C278A8 - (30888);
    t1 = D_08C278B8 - (30904);
    t2 = D_08C278C8 - (30920);
    a1 = a1 & a0;
    v1 = t0 + 30888;
    a2 = t1 + 30904;
    cnd_ = a1 == 0;
    a3 = t2 + 30920;
    if (cnd_) { goto L_0895675C; }
    goto L_089566D4;
L_089566D4:;
    v0 = D_08AEDD8C - (-8820);
    f4 = BITSF(LD32(v0-8820));
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
    ST32(t0+30888, FBITS(f2));
    ST32(t1+30904, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+30920, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895675C;
L_0895675C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08956764 */
rv_t func_08956764(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08956764:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089566A4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956778;
L_08956778:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08956784 */
float func_08956784(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08956784:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = LD32(a1+4);
    { rv_t r_ = func_08955EDC(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089567A4;
L_089567A4:;
    v0 = D_08AF92F0 - (-27920);
    v0 = v0 - 27920;
    ST32(s1+48, s0);
    ST32(s1, v0);
    sp = sp + 16;
    return f0;
}

/* 089567C8 */
rv_t func_089567C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089567C8:;
    v0 = D_08AF92F0 - (-27920);
    v0 = v0 - 27920;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089567E4;
L_089567E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089567F0 */
rv_t func_089567F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089567F0:;
    v0 = D_08AF92F0 - (-27920);
    v0 = v0 - 27920;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08955F18(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956810;
L_08956810:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956818;
L_08956818:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08956828 */
rv_t func_08956828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08956828:;
    sp = sp - 32;
    s3 = D_08C278D8 - (30936);
    t1 = a0 + 0;
    v0 = 0 + 0;
    t0 = LD32(s3+30936);
    a3 = LD32(t0+4);
    cnd_ = a3 == 0;
    s2 = a2 + 0;
    if (cnd_) { goto L_089568D0; }
    goto L_0895685C;
L_0895685C:;
    v0 = LD32(t0+16);
    v1 = LD32(a3);
    a1 = a1 - 1007;
    v0 = v0 + 1;
    a0 = a1 < 0xbu;
    ST32(t0+4, v1);
    s0 = a3 + 0;
    s1 = 0 + 0;
    cnd_ = a0 == 0;
    ST32(t0+16, v0);
    if (cnd_) { goto L_089568EC; }
    goto L_08956884;
L_08956884:;
    v1 = D_08ADAC60 - (-21408);
    v0 = a1 << 2;
    v1 = v1 - 21408;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089568A0u: goto L_089568A0; case 0x089568ECu: goto L_089568EC; case 0x0895690Cu: goto L_0895690C; case 0x08956924u: goto L_08956924; case 0x0895693Cu: goto L_0895693C; case 0x08956954u: goto L_08956954; case 0x0895696Cu: goto L_0895696C; case 0x08956984u: goto L_08956984; case 0x0895699Cu: goto L_0895699C; case 0x089569B4u: goto L_089569B4; case 0x089569CCu: goto L_089569CC; default: rs_break(0, 0x08956898); }
L_089568A0:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_089568A8;
L_089568A8:;
    a0 = a3 + 0;
    { u64 r_ = func_08933D38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089568B0;
L_089568B0:;
    cnd_ = s0 == 0;
    s1 = s0 + 0;
    if (cnd_) { goto L_089568EC; }
    goto L_089568B8;
L_089568B8:;
    cnd_ = s2 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_089568CC; }
    goto L_089568C0;
L_089568C0:;
    a0 = s0 + 0;
    a2 = 1;
    { rv_t r_ = func_08921EFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089568CC;
L_089568CC:;
    v0 = s1 + 0;
    goto L_089568D0;
L_089568D0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089568EC:;
    v0 = LD32(s3+30936);
    v1 = LD32(v0+16);
    a0 = LD32(v0+4);
    v1 = v1 - 1;
    ST32(s0, a0);
    ST32(v0+16, v1);
    ST32(v0+4, s0);
    goto L_089568CC;
L_0895690C:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_08956914;
L_08956914:;
    a0 = a3 + 0;
    { rv_t r_ = func_08933F5C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895691C;
L_0895691C:;
    goto L_089568B0;
L_08956924:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_0895692C;
L_0895692C:;
    a0 = a3 + 0;
    { rv_t r_ = func_08934360(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956934;
L_08956934:;
    goto L_089568B0;
L_0895693C:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_08956944;
L_08956944:;
    a0 = a3 + 0;
    { rv_t r_ = func_08930C94(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895694C;
L_0895694C:;
    goto L_089568B0;
L_08956954:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_0895695C;
L_0895695C:;
    a0 = a3 + 0;
    { rv_t r_ = func_08931520(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956964;
L_08956964:;
    goto L_089568B0;
L_0895696C:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_08956974;
L_08956974:;
    a0 = a3 + 0;
    { rv_t r_ = func_0893189C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895697C;
L_0895697C:;
    goto L_089568B0;
L_08956984:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_0895698C;
L_0895698C:;
    a0 = a3 + 0;
    { rv_t r_ = func_08932EF8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956994;
L_08956994:;
    goto L_089568B0;
L_0895699C:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_089569A4;
L_089569A4:;
    a0 = a3 + 0;
    { rv_t r_ = func_089308AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089569AC;
L_089569AC:;
    goto L_089568B0;
L_089569B4:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_089569BC;
L_089569BC:;
    a0 = a3 + 0;
    { rv_t r_ = func_08932A94(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089569C4;
L_089569C4:;
    goto L_089568B0;
L_089569CC:;
    cnd_ = a3 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_089568B0; }
    goto L_089569D4;
L_089569D4:;
    a0 = a3 + 0;
    { rv_t r_ = func_08934A9C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089569DC;
L_089569DC:;
    goto L_089568B0;
}

/* 089569E4 */
u32 func_089569E4(void)
{
    u32 v0 = 0;
L_089569E4:;
    v0 = 188;
    return v0;
}

/* 089569EC */
void func_089569EC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089569EC:;
    sp = sp - 32;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a1 = 1007;
    v0 = LD32(a0+48);
    cnd_ = v0 != 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08956A5C; }
    goto L_08956A10;
L_08956A10:;
    v0 = LD32(sp);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08956A30; }
    goto L_08956A20;
L_08956A20:;
    goto L_08956A24;
L_08956A24:;
    sp = sp + 32;
    return;
L_08956A30:;
    { rv_t r_ = func_089236BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956A38;
L_08956A38:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08956A20; }
    goto L_08956A44;
L_08956A44:;
    v0 = LD32(s0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956A54;
L_08956A54:;
    goto L_08956A24;
L_08956A5C:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956A6C;
L_08956A6C:;
    ST32(sp, v0);
    goto L_08956A10;
}

/* 08956A74 */
u32 func_08956A74(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08956A74:;
    v0 = LD32(a0+48);
    a1 = a1 << 2;
    v1 = 999;
    cnd_ = v0 == 0;
    a1 = a1 + v0;
    if (cnd_) { goto L_08956A8C; }
    goto L_08956A88;
L_08956A88:;
    v1 = LD32(a1+152);
    goto L_08956A8C;
L_08956A8C:;
    v0 = v1 + 0;
    return v0;
}

/* 08956A94 */
rv_t func_08956A94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08956A94:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C278FC - (30972);
    t1 = D_08C2790C - (30988);
    t2 = D_08C2791C - (31004);
    a1 = a1 & a0;
    v1 = t0 + 30972;
    a2 = t1 + 30988;
    cnd_ = a1 == 0;
    a3 = t2 + 31004;
    if (cnd_) { goto L_08956B4C; }
    goto L_08956AC4;
L_08956AC4:;
    v0 = D_08AEDD90 - (-8816);
    f4 = BITSF(LD32(v0-8816));
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
    ST32(t0+30972, FBITS(f2));
    ST32(t1+30988, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+31004, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08956B4C;
L_08956B4C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08956B54 */
rv_t func_08956B54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08956B54:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08956A94(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956B68;
L_08956B68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08956B74 */
void func_08956B74(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08956B74:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1-16);
    v0 = a1 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08955EDC(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956BA4;
L_08956BA4:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08AF9340 - (-27840);
    a1 = s1 + 52;
    v0 = v0 - 27840;
    ST32(a1+8, FBITS(f0));
    a0 = 20;
    ST32(a1+4, FBITS(f1));
    ST32(s1+52, FBITS(f2));
    ST32(s1+48, s0);
    ST32(s1, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956BE0;
L_08956BE0:;
    v1 = LD32(s0);
    s2 = v0 + 0;
    a0 = v0 + 0;
    v0 = LD32(v1-16);
    s0 = s0 + v0;
    a1 = LD32(s0+4);
    func_089609BC(a0, a1);
    goto L_08956BFC;
L_08956BFC:;
    a0 = s2 + 0;
    cnd_ = s2 != 0;
    ST32(s1+44, s2);
    if (cnd_) { goto L_08956C20; }
    goto L_08956C08;
L_08956C08:;
    goto L_08956C0C;
L_08956C0C:;
    sp = sp + 16;
    return;
L_08956C20:;
    v0 = LD32(s2);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956C30;
L_08956C30:;
    goto L_08956C0C;
}

/* 08956C38 */
rv_t func_08956C38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08956C38:;
    sp = sp - 16;
    { rv_t r_ = func_08922A2C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956C48;
L_08956C48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08956C54 */
rv_t func_08956C54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08956C54:;
    sp = sp - 16;
    { rv_t r_ = func_08922A64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956C64;
L_08956C64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08956C70 */
u32 func_08956C70(u32 a0)
{
    u32 v0 = 0;
L_08956C70:;
    v0 = LD32(a0+48);
    return v0;
}

/* 08956C78 */
rv_t func_08956C78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08956C78:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = s2 + 52;
    v0 = func_08956C70(a0);
    goto L_08956C98;
L_08956C98:;
    a0 = LD32(v0);
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956CB8;
L_08956CB8:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    a0 = s1 + 0;
    a1 = 1;
    ST32(s2+52, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956CDC;
L_08956CDC:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08956CFC; }
    goto L_08956CE4;
L_08956CE4:;
    goto L_08956CE8;
L_08956CE8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08956CFC:;
    s0 = D_08C279DC - (31196);
    v0 = func_08956C70(a0);
    goto L_08956D04;
L_08956D04:;
    v1 = LD32(v0);
    s0 = s0 + 31196;
    a0 = LD32(v1-16);
    a1 = D_08ADAC8C - (-21364);
    a1 = a1 - 21364;
    v0 = v0 + a0;
    t0 = LD32(v0+4);
    a0 = s0 + 0;
    a2 = 10;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956D30;
L_08956D30:;
    v0 = D_08AEDD94 - (-8812);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8812));
    a2 = D_08C29E54 - (-25004);
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = a2 - 25004;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956D54;
L_08956D54:;
    v0 = D_08AEDD98 - (-8808);
    f1 = BITSF(LD32(s2+56));
    f0 = BITSF(LD32(v0-8808));
    a0 = s2 + 0;
    f1 = f1 + f0;
    ST32(s2+56, FBITS(f1));
    { rv_t r_ = func_08922C58(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956D70;
L_08956D70:;
    goto L_08956CE8;
}

/* 08956D78 */
u32 func_08956D78(void)
{
    u32 v0 = 0;
L_08956D78:;
    v0 = 192;
    return v0;
}

/* 08956D80 */
rv_t func_08956D80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08956D80:;
    sp = sp - 32;
    s5 = D_08C278D8 - (30936);
    v0 = 0 + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    a3 = LD32(s5+30936);
    a1 = LD32(a3+4);
    cnd_ = a1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08956E30; }
    goto L_08956DC0;
L_08956DC0:;
    v0 = LD32(a3+16);
    v1 = LD32(a1);
    a2 = s4 - 1000;
    v0 = v0 + 1;
    a0 = a2 < 0x7u;
    ST32(a3+4, v1);
    s1 = a1 + 0;
    cnd_ = a0 == 0;
    ST32(a3+16, v0);
    if (cnd_) { goto L_08956E54; }
    goto L_08956DE4;
L_08956DE4:;
    v1 = D_08ADAC90 - (-21360);
    v0 = a2 << 2;
    v1 = v1 - 21360;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08956E00u: goto L_08956E00; case 0x08956E88u: goto L_08956E88; case 0x08956EA0u: goto L_08956EA0; case 0x08956EB8u: goto L_08956EB8; case 0x08956ED0u: goto L_08956ED0; case 0x08956EE8u: goto L_08956EE8; case 0x08956F00u: goto L_08956F00; default: rs_break(0, 0x08956df8); }
L_08956E00:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08956E10; }
    goto L_08956E08;
L_08956E08:;
    a1 = s2 + 0;
    { rv_t r_ = func_08937320(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956E10;
L_08956E10:;
    cnd_ = s1 == 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_08956E54; }
    goto L_08956E18;
L_08956E18:;
    cnd_ = s3 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08956E2C; }
    goto L_08956E20;
L_08956E20:;
    a0 = s1 + 0;
    a2 = 1;
    { rv_t r_ = func_08921EFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956E2C;
L_08956E2C:;
    v0 = s0 + 0;
    goto L_08956E30;
L_08956E30:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08956E54:;
    v0 = LD32(s5+30936);
    a0 = s2 + 0;
    a1 = s4 + 0;
    v1 = LD32(v0+16);
    a3 = LD32(v0+4);
    a2 = s3 + 0;
    v1 = v1 - 1;
    ST32(s1, a3);
    ST32(v0+16, v1);
    ST32(v0+4, s1);
    { rv_t r_ = func_089562E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956E80;
L_08956E80:;
    s0 = v0 + 0;
    goto L_08956E2C;
L_08956E88:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08956E10; }
    goto L_08956E90;
L_08956E90:;
    a1 = s2 + 0;
    { rv_t r_ = func_08938664(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956E98;
L_08956E98:;
    goto L_08956E10;
L_08956EA0:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08956E10; }
    goto L_08956EA8;
L_08956EA8:;
    a1 = s2 + 0;
    { rv_t r_ = func_0893CEF8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956EB0;
L_08956EB0:;
    goto L_08956E10;
L_08956EB8:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08956E10; }
    goto L_08956EC0;
L_08956EC0:;
    a1 = s2 + 0;
    { rv_t r_ = func_0893EF7C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956EC8;
L_08956EC8:;
    goto L_08956E10;
L_08956ED0:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08956E10; }
    goto L_08956ED8;
L_08956ED8:;
    a1 = s2 + 0;
    { u64 r_ = func_0893E898(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956EE0;
L_08956EE0:;
    goto L_08956E10;
L_08956EE8:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08956E10; }
    goto L_08956EF0;
L_08956EF0:;
    a1 = s2 + 0;
    { u64 r_ = func_08939E44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956EF8;
L_08956EF8:;
    goto L_08956E10;
L_08956F00:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08956E10; }
    goto L_08956F08;
L_08956F08:;
    a1 = s2 + 0;
    { u64 r_ = func_0893CDDC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08956F10;
L_08956F10:;
    goto L_08956E10;
}

/* 08956F18 */
float func_08956F18(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08956F18:;
    sp = sp - 32;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a1 = 1000;
    v0 = LD32(a0+48);
    cnd_ = v0 != 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08956F88; }
    goto L_08956F3C;
L_08956F3C:;
    v0 = LD32(sp);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08956F5C; }
    goto L_08956F4C;
L_08956F4C:;
    goto L_08956F50;
L_08956F50:;
    sp = sp + 32;
    return f0;
L_08956F5C:;
    { rv_t r_ = func_089236BC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956F64;
L_08956F64:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08956F4C; }
    goto L_08956F70;
L_08956F70:;
    v0 = LD32(s0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956F80;
L_08956F80:;
    goto L_08956F50;
L_08956F88:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08956F98;
L_08956F98:;
    ST32(sp, v0);
    goto L_08956F3C;
}

/* 08956FA0 */
rv_t func_08956FA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08956FA0:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2792C - (31020);
    t1 = D_08C2793C - (31036);
    t2 = D_08C2794C - (31052);
    a1 = a1 & a0;
    v1 = t0 + 31020;
    a2 = t1 + 31036;
    cnd_ = a1 == 0;
    a3 = t2 + 31052;
    if (cnd_) { goto L_08957058; }
    goto L_08956FD0;
L_08956FD0:;
    v0 = D_08AEDD9C - (-8804);
    f4 = BITSF(LD32(v0-8804));
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
    ST32(t0+31020, FBITS(f2));
    ST32(t1+31036, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+31052, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08957058;
L_08957058:;
    return (rv_t){ v0, v1, f0 };
}

/* 08957060 */
rv_t func_08957060(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957060:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08956FA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957074;
L_08957074:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08957080 */
void func_08957080(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957080:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1-16);
    v0 = a1 + v0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08955EDC(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089570AC;
L_089570AC:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f2 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08AF9390 - (-27760);
    a1 = 999;
    v1 = s0 + 64;
    v0 = v0 - 27760;
    ST32(v1+8, FBITS(f0));
    a0 = 36;
    ST32(v1+4, FBITS(f1));
    ST32(s0+48, s1);
    ST32(s0+60, a1);
    ST32(s0+64, FBITS(f2));
    ST32(s0+52, a1);
    ST32(s0, v0);
    ST32(s0+56, 0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089570F8;
L_089570F8:;
    a3 = LD32(s0+48);
    s1 = v0 + 0;
    a0 = v0 + 0;
    v0 = LD32(a3);
    a2 = s0 + 0;
    v1 = LD32(v0-16);
    a3 = a3 + v1;
    a1 = LD32(a3+4);
    func_0895FD14(a0, a1, a2);
    goto L_0895711C;
L_0895711C:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    ST32(s0+44, s1);
    if (cnd_) { goto L_0895713C; }
    goto L_08957128;
L_08957128:;
    goto L_0895712C;
L_0895712C:;
    sp = sp + 16;
    return;
L_0895713C:;
    v0 = LD32(s1);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895714C;
L_0895714C:;
    goto L_0895712C;
}

/* 08957154 */
rv_t func_08957154(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08957154:;
    sp = sp - 32;
    a0 = 0x5f6b0000u;
    a1 = 0xb98d0000u;
    a1 = a1 | 0xaf8e;
    a2 = sp + 0;
    a0 = a0 | 0x9be0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957174;
L_08957174:;
    a1 = 0x6890000u;
    cnd_ = v0 != 0;
    a1 = a1 | 0x47;
    if (cnd_) { goto L_0895718C; }
    goto L_08957180;
L_08957180:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895718C:;
    a0 = LD32(sp);
    { u64 r_ = func_0881BB84(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957194;
L_08957194:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08957180; }
    goto L_089571A0;
L_089571A0:;
    v0 = func_0881B5FC(a0, a1);
    goto L_089571A8;
L_089571A8:;
    f0 = BITSF(LD32(v0+4));
    v0 = D_08B1B740 - (-18624);
    ST32(v0-18624, FBITS(f0));
    goto L_08957180;
}

/* 089571B8 */
rv_t func_089571B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089571B8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08922A2C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089571CC;
L_089571CC:;
    v0 = LD32(s0+48);
    a0 = LD32(v0+12);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089571D8;
L_089571D8:;
    a0 = v0 + 0;
    { u64 r_ = func_0898EEC4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089571E0;
L_089571E0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089571F0; }
    goto L_089571E8;
L_089571E8:;
    v0 = LD32(v0+4);
    ST32(s0+52, v0);
    goto L_089571F0;
L_089571F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089571FC */
rv_t func_089571FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089571FC:;
    sp = sp - 16;
    a1 = D_08B45A9C - (23196);
    s0 = a0 + 0;
    a0 = LD32(a0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = a1 + 23196;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957224;
L_08957224:;
    a0 = s0 + 0;
    { rv_t r_ = func_08922A64(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895722C;
L_0895722C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895723C */
rv_t func_0895723C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0895723C:;
    sp = sp - 112;
    s3 = a0 + 64;
    a1 = s3 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0+80);
    t_ = v1;
    s2 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957270;
L_08957270:;
    a0 = s3 + 0;
    a1 = 1;
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895727C;
L_0895727C:;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = sp + 0;
    if (cnd_) { goto L_089572A8; }
    goto L_08957288;
L_08957288:;
    goto L_0895728C;
L_0895728C:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089572A8:;
    v0 = LD32(s2);
    s1 = D_08C29E54 - (-25004);
    s1 = s1 - 25004;
    v1 = LD32(v0+80);
    s0 = D_08C27A98 - (31384);
    t_ = v1;
    s0 = s0 + 31384;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089572C4;
L_089572C4:;
    v0 = LD32(s2);
    a1 = sp + 16;
    v1 = LD32(v0+76);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089572D8;
L_089572D8:;
    v0 = D_08AEDDA0 - (-8800);
    f20 = BITSF(LD32(v0-8800));
    f5 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(sp+24));
    f5 = f5 * f20;
    f4 = f4 * f20;
    f3 = f3 * f20;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    v0 = D_08AEDDA4 - (-8796);
    f12 = BITSF(LD32(v0-8796));
    a1 = sp + 32;
    a0 = sp + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f3));
    { u64 r_ = func_0897B744(a0, a1, a2, a3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957344;
L_08957344:;
    a1 = D_08ADACAC - (-21332);
    v1 = LD32(s2+48);
    a1 = a1 - 21332;
    a0 = s0 + 0;
    v0 = LD32(v1);
    a2 = 10;
    a3 = LD32(v0-16);
    v1 = v1 + a3;
    t0 = LD32(v1+4);
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957370;
L_08957370:;
    v0 = D_08AEDDA8 - (-8792);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8792));
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = s1 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_0897CBAC(a0, a1, a2, a3, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957390;
L_08957390:;
    f0 = BITSF(LD32(s2+68));
    a0 = s2 + 0;
    f0 = f0 + f20;
    ST32(s2+68, FBITS(f0));
    { rv_t r_ = func_08922C58(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089573A4;
L_089573A4:;
    goto L_0895728C;
}

/* 089573AC */
rv_t func_089573AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089573AC:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0895607C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089573C8;
L_089573C8:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089573D4;
L_089573D4:;
    a1 = 0x87030000u;
    a0 = s0 + 0;
    a1 = a1 | 0xa534;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089573E8;
L_089573E8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089574B0; }
    goto L_089573F0;
L_089573F0:;
    v0 = D_08C292E4 - (-27932);
    goto L_089573F4;
L_089573F4:;
    s0 = v0 - 27932;
    cnd_ = s0 == 0;
    if (cnd_) { ST32(sp+16, 0); goto L_08957424; }
    goto L_08957400;
L_08957400:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957408;
L_08957408:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+20, v0);
    ST32(sp+24, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895741C;
L_0895741C:;
    cnd_ = v0 != 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_0895749C; }
    goto L_08957424;
L_08957424:;
    ST32(sp+24, 0);
    ST32(sp+20, 0);
    goto L_0895742C;
L_0895742C:;
    a0 = LD32(sp+16);
    func_088381A0(a0);
    goto L_08957434;
L_08957434:;
    a0 = LD32(sp+16);
    a1 = D_08ADACB0 - (-21328);
    a1 = a1 - 21328;
    a2 = 0 + 0;
    { u64 r_ = func_08838148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957448;
L_08957448:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08957460; }
    goto L_08957454;
L_08957454:;
    v0 = 0x40000u;
    ST32(s1+56, v0);
    a0 = LD32(sp+16);
    goto L_08957460;
L_08957460:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0895748C; }
    goto L_08957468;
L_08957468:;
    a0 = sp + 0;
    ST32(sp+24, 0);
    ST32(sp+20, 0);
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957478;
L_08957478:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0895748C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957494;
L_08957494:;
    ST32(sp+16, 0);
    goto L_08957468;
L_0895749C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089574A8;
L_089574A8:;
    goto L_0895742C;
L_089574B0:;
    a0 = sp + 0;
    v0 = func_0881B5C4(a0);
    goto L_089574B8;
L_089574B8:;
    v1 = v0 + 0;
    v0 = 0x61f0000u;
    v0 = v0 | 0xbb3b;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+56); goto L_0895752C; }
    goto L_089574CC;
L_089574CC:;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = 0x6870000u;
    if (cnd_) { goto L_089574FC; }
    goto L_089574D8;
L_089574D8:;
    v0 = 0x42e0000u;
    v0 = v0 | 0xaf2;
    cnd_ = v1 != v0;
    v0 = D_08C292E4 - (-27932);
    if (cnd_) { goto L_089573F4; }
    goto L_089574E8;
L_089574E8:;
    v0 = LD32(s1+56);
    v1 = 0x10000u;
    goto L_089574F0;
L_089574F0:;
    v0 = v0 | v1;
    ST32(s1+56, v0);
    goto L_089573F0;
L_089574FC:;
    v0 = v0 | 0x9507;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+56); goto L_08957524; }
    goto L_08957508;
L_08957508:;
    v0 = 0xbfbe0000u;
    v0 = v0 | 0x8f75;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = D_08C292E4 - (-27932); goto L_089573F4; }
    goto L_08957518;
L_08957518:;
    v0 = LD32(s1+56);
    v1 = 0x40000u;
    goto L_089574F0;
L_08957524:;
    v1 = 0x80000u;
    goto L_089574F0;
L_0895752C:;
    v1 = 0x20000u;
    goto L_089574F0;
}

/* 08957534 */
rv_t func_08957534(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957534:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = func_089577A8(a0);
    goto L_08957548;
L_08957548:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0895FEA4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957554;
L_08957554:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08957564 */
u64 func_08957564(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
L_08957564:;
    v1 = LD32(a0+48);
    a1 = a1 & 0xff;
    v0 = LD32(v1+232);
    v0 = (v0 & ~(0x1u << 0)) | ((a1 & 0x1) << 0);
    ST32(v1+232, v0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0895757C */
rv_t func_0895757C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895757C:;
    sp = sp - 32;
    a3 = a0 + 0;
    v0 = 999;
    a2 = LD32(a0+52);
    a0 = D_08C2A508 - (-23288);
    cnd_ = a2 == v0;
    v1 = a0 - 23288;
    if (cnd_) { goto L_0895760C; }
    goto L_0895759C;
L_0895759C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-23288);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089575E0; }
    goto L_089575C0;
L_089575C0:;
    a0 = LD32(v1);
    goto L_089575C4;
L_089575C4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a0+16); goto L_08957618; }
    goto L_089575D0;
L_089575D0:;
    v1 = LD32(v1+4);
    goto L_089575D4;
L_089575D4:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089575C4; }
    goto L_089575DC;
L_089575DC:;
    a0 = 0 + 0;
    goto L_089575E0;
L_089575E0:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08957610; }
    goto L_089575E8;
L_089575E8:;
    ST32(sp, a1);
    a1 = sp + 0;
    v0 = LD32(a3+48);
    v1 = LD32(v0);
    a2 = LD32(v1-16);
    v0 = v0 + a2;
    v1 = LD32(v0+4);
    ST32(sp+4, v1);
    { rv_t r_ = func_0898EDBC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895760C;
L_0895760C:;
    goto L_08957610;
L_08957610:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08957618:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089575D4; }
    goto L_08957624;
L_08957624:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089575D4; }
    goto L_08957630;
L_08957630:;
    goto L_089575E0;
}

/* 08957638 */
u32 func_08957638(u32 a0)
{
    u32 v0 = 0;
L_08957638:;
    v0 = LD32(a0+56);
    v0 = (v0 >> 16) & 0x3;
    v0 = 0 < v0;
    return v0;
}

/* 08957648 */
void func_08957648(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957648:;
    sp = sp - 16;
    v1 = 999;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == v1;
    if (cnd_) { goto L_08957704; }
    goto L_08957668;
L_08957668:;
    v0 = LD32(a0+60);
    cnd_ = v0 == a1;
    if (cnd_) {  goto L_08957708; }
    goto L_08957674;
L_08957674:;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(s1+48); goto L_08957688; }
    goto L_0895767C;
L_0895767C:;
    func_08957738(a0);
    goto L_08957684;
L_08957684:;
    a0 = LD32(s1+48);
    goto L_08957688;
L_08957688:;
    a1 = D_08C2B2A8 - (-19800);
    a2 = a1 - 19800;
    v1 = LD32(a0+228);
    v1 = v1 | 0x8;
    ST32(a0+228, v1);
    v0 = LD32(a2+4);
    v1 = LD32(a1-19800);
    v0 = v0 - 1;
    v0 = s0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089576EC; }
    goto L_089576C0;
L_089576C0:;
    a0 = LD32(a1);
    goto L_089576C4;
L_089576C4:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(v1+16); goto L_08957718; }
    goto L_089576DC;
L_089576DC:;
    a1 = LD32(a1+4);
    goto L_089576E0;
L_089576E0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089576C4; }
    goto L_089576E8;
L_089576E8:;
    v1 = 0 + 0;
    goto L_089576EC;
L_089576EC:;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s1+60, s0); goto L_08957704; }
    goto L_089576F4;
L_089576F4:;
    v0 = LD32(v1+228);
    v0 = v0 | 0x4;
    ST32(v1+228, v0);
    ST32(s1+60, s0);
    goto L_08957704;
L_08957704:;
    goto L_08957708;
L_08957708:;
    sp = sp + 16;
    return;
L_08957718:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089576DC; }
    goto L_08957724;
L_08957724:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089576E0; }
    goto L_08957730;
L_08957730:;
    goto L_089576EC;
}

/* 08957738 */
void func_08957738(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957738:;
    sp = sp - 16;
    s1 = 999;
    a2 = 1;
    s0 = a0 + 0;
    v0 = LD32(a0+60);
    a0 = D_08C2B2A8 - (-19800);
    cnd_ = v0 == s1;
    a0 = a0 - 19800;
    if (cnd_) { goto L_08957794; }
    goto L_08957764;
L_08957764:;
    v0 = LD32(s0+48);
    v1 = LD32(v0+228);
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(v0+228, v1);
    a1 = LD32(s0+60);
    { u64 r_ = func_08ABDBE0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895777C;
L_0895777C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08957790; }
    goto L_08957784;
L_08957784:;
    v0 = LD32(v0+228);
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    ST32(v1+228, v0);
    goto L_08957790;
L_08957790:;
    ST32(s0+60, s1);
    goto L_08957794;
L_08957794:;
    sp = sp + 16;
    return;
}

/* 089577A8 */
u32 func_089577A8(u32 a0)
{
    u32 v0 = 0;
L_089577A8:;
    v0 = LD32(a0+44);
    return v0;
}

/* 089577B0 */
rv_t func_089577B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089577B0:;
    sp = sp - 16;
    s0 = a1 + 0;
    a0 = LD32(a0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089577E0;
L_089577E0:;
    f0 = BITSF(LD32(v0+8));
    ST32(s0, FBITS(f0));
    f1 = BITSF(LD32(v0+20));
    ST32(s0+4, FBITS(f1));
    f0 = BITSF(LD32(v0+32));
    ST32(s0+8, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08957808 */
rv_t func_08957808(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08957808:;
    sp = sp - 48;
    v0 = 999;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a2 = LD32(a0+4);
    a0 = D_08C2B0A8 - (-20312);
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_089578A8; }
    goto L_08957838;
L_08957838:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08957888; }
    goto L_0895785C;
L_0895785C:;
    a0 = LD32(a1);
    goto L_08957860;
L_08957860:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08957954; }
    goto L_08957878;
L_08957878:;
    a1 = LD32(a1+4);
    goto L_0895787C;
L_0895787C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08957860; }
    goto L_08957884;
L_08957884:;
    s0 = 0 + 0;
    goto L_08957888;
L_08957888:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s2+48); goto L_089578AC; }
    goto L_08957890;
L_08957890:;
    v1 = LD32(s0);
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089578A0;
L_089578A0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_0895791C; }
    goto L_089578A8;
L_089578A8:;
    a0 = LD32(s2+48);
    goto L_089578AC;
L_089578AC:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089578C8;
L_089578C8:;
    v1 = D_08AEDDAC - (-8788);
    f1 = BITSF(LD32(v1-8788));
    ST32(sp+16, 0);
    ST32(sp+20, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+24, 0);
    f0 = f0 + f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    ST32(s1+8, FBITS(f2));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    goto L_08957904;
L_08957904:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0895791C:;
    v0 = LD32(v1+388);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957928;
L_08957928:;
    a1 = v0 + 0;
    a0 = sp + 16;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957938;
L_08957938:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+24));
    ST32(s1, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    goto L_08957904;
L_08957954:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08957878; }
    goto L_08957960;
L_08957960:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895787C; }
    goto L_0895796C;
L_0895796C:;
    goto L_08957888;
}

/* 08957974 */
rv_t func_08957974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957974:;
    sp = sp - 16;
    v0 = 42;
    s1 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089579F4; }
    goto L_08957998;
L_08957998:;
    v0 = 87;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+16); goto L_089579C4; }
    goto L_089579A4;
L_089579A4:;
    a0 = s1 + 0;
    goto L_089579A8;
L_089579A8:;
    a1 = s0 + 0;
    { rv_t r_ = func_08956224(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089579B0;
L_089579B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089579C4:;
    a1 = D_08B45A9C - (23196);
    v1 = 4;
    v0 = v0 & 0x6;
    cnd_ = v0 != v1;
    a1 = a1 + 23196;
    if (cnd_) { goto L_089579A4; }
    goto L_089579D8;
L_089579D8:;
    v0 = LD32(s1+48);
    v1 = LD32(v0);
    a2 = LD32(v1+128);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089579EC;
L_089579EC:;
    a0 = s1 + 0;
    goto L_089579A8;
L_089579F4:;
    v1 = LD32(a0+16);
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089579A8; }
    goto L_08957A04;
L_08957A04:;
    v0 = LD32(a1+24);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089579A8; }
    goto L_08957A10;
L_08957A10:;
    a0 = LD_U8(v0+4);
    cnd_ = a0 == 0;
    v0 = (v1 >> 1) & 0x1;
    if (cnd_) { goto L_089579A4; }
    goto L_08957A1C;
L_08957A1C:;
    a1 = D_08B45A9C - (23196);
    cnd_ = a0 != v0;
    a1 = a1 + 23196;
    if (cnd_) { goto L_089579D8; }
    goto L_08957A28;
L_08957A28:;
    a0 = s1 + 0;
    goto L_089579A8;
}

/* 08957A30 */
rv_t func_08957A30(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08957A30:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C279E8 - (31208);
    t1 = D_08C279F8 - (31224);
    t2 = D_08C27A08 - (31240);
    a1 = a1 & a0;
    v1 = t0 + 31208;
    a2 = t1 + 31224;
    cnd_ = a1 == 0;
    a3 = t2 + 31240;
    if (cnd_) { goto L_08957AE8; }
    goto L_08957A60;
L_08957A60:;
    v0 = D_08AEDDB0 - (-8784);
    f4 = BITSF(LD32(v0-8784));
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
    ST32(t0+31208, FBITS(f2));
    ST32(t1+31224, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+31240, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08957AE8;
L_08957AE8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08957AF0 */
rv_t func_08957AF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957AF0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08957A30(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957B04;
L_08957B04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08957B10 */
void func_08957B10(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08957B10:;
    sp = sp - 16;
    s1 = 2;
    s0 = a0 + 0;
    func_08957080(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08957B2C;
L_08957B2C:;
    v0 = D_08AF93F0 - (-27664);
    v0 = v0 - 27664;
    ST32(s0, v0);
    a0 = s0 + 76;
    func_08964DEC(a0);
    goto L_08957B40;
L_08957B40:;
    a0 = s0 + 96;
    func_08965640(a0);
    goto L_08957B48;
L_08957B48:;
    a3 = D_08B25AC0 - (23232);
    a0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a1 = LD32(t0+4);
    v1 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v1;
    a0 = a0 + a1;
    v0 = D_08B1B74C - (-18612);
    f3 = BITSF(LD32(v0-18612));
    v0 = a0 >> 1;
    f4 = BITSF(v0);
    v0 = D_08AEDDE4 - (-8732);
    f1 = BITSF(LD32(v0-8732));
    v0 = D_08AEDDE0 - (-8736);
    f0 = BITSF(LD32(v0-8736));
    f2 = (float)(s32)FBITS(f4);
    v0 = D_08AEDDE8 - (-8728);
    f1 = f3 * f1;
    f3 = f3 * f0;
    f0 = BITSF(LD32(v0-8728));
    v0 = D_08AEDDD4 - (-8748);
    ST32(s0+108, 0);
    f2 = f2 * f0;
    f1 = f1 - f3;
    f0 = BITSF(LD32(v0-8748));
    v0 = D_08AEDDD8 - (-8744);
    ST32(s0+112, 0);
    f2 = f2 * f1;
    v1 = D_08B45A9C - (23196);
    ST32(s0+120, FBITS(f0));
    a2 = v1 + 23196;
    f3 = f3 + f2;
    f0 = BITSF(LD32(v0-8744));
    v0 = D_08AEDDDC - (-8740);
    ST32(s0+116, 0);
    a1 = a1 + a0;
    ST32(s0+124, FBITS(f0));
    f0 = BITSF(LD32(v0-8740));
    ST32(s0+128, 0);
    v0 = s0 + 140;
    ST32(s0+132, FBITS(f0));
    ST32(s0+136, 0);
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(v1+23196));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    v0 = 1;
    ST32(t0+4, a1);
    ST32(a3+23232, a0);
    ST32(s0+140, FBITS(f2));
    ST32(s0+156, v0);
    ST32(s0+152, FBITS(f3));
    ST32(s0+104, s1);
    v0 = func_08979DF4();
    goto L_08957C28;
L_08957C28:;
    v1 = v0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v0 = D_08AEDDEC - (-8724);
    if (cnd_) { goto L_08957C40; }
    goto L_08957C38;
L_08957C38:;
    cnd_ = v1 == s1;
    if (cnd_) { v0 = D_08AEDDF0 - (-8720); goto L_08957C60; }
    goto L_08957C40;
L_08957C40:;
    f12 = BITSF(LD32(v0-8724));
    goto L_08957C44;
L_08957C44:;
    func_0895A3EC(f12);
    goto L_08957C4C;
L_08957C4C:;
    sp = sp + 16;
    return;
L_08957C60:;
    f12 = BITSF(LD32(v0-8720));
    goto L_08957C44;
}

/* 08957C68 */
rv_t func_08957C68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr68 = v[68], vr77 = v[77], vr78 = v[78];
    u8 stack_[672] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 672);
L_08957C68:;
    sp = sp - 672;
    s1 = a0 + 0;
    f20 = f12;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08922B58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957C94;
L_08957C94:;
    v1 = 4;
    v0 = LD32(s1+16);
    v0 = v0 & 0x6;
    cnd_ = v0 == v1;
    if (cnd_) { f4 = BITSF(LD32(s1+132)); goto L_08957CCC; }
    goto L_08957CA8;
L_08957CA8:;
    goto L_08957CAC;
L_08957CAC:;
    sp = sp + 672;
    { v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;return (rv_t){ v0, v1, f0 }; }
L_08957CCC:;
    f0 = BITSF(LD32(s1+136));
    f7 = BITSF(LD32(s1+128));
    f2 = BITSF(FBITS(f4) ^ 0x80000000u);
    v0 = D_08C27B58 - (31576);
    v1 = D_08C27B60 - (31584);
    {v[4]=0.63661977236f;}
    f6 = f0 - f7;
    f1 = BITSF(LD32(v0+31576));
    f0 = BITSF(LD32(v1+31584));
    f2 = f2 * f20;
    v0 = FBITS(f1);
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=vr0;float t0=v[4];float d0=s0*t0;vr0=d0;}
    {u32 a_=sp+(256);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {float s0=v[8];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    fcc = FCMP(f6, f2, 12);
    f5 = f2;
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08C27B5C - (31580);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v1=FBITS(v[4]);}
    ST32(v0+31580, v1);
    v0 = D_08C27B64 - (31588);
    f4 = f4 * f20;
    cnd_ = fcc;
    ST32(v0+31588, FBITS(f0));
    if (cnd_) { goto L_08957D68; }
    goto L_08957D54;
L_08957D54:;
    fcc = FCMP(f4, f6, 12);
    cnd_ = fcc;
    f5 = f4;
    if (cnd_) { goto L_08957D68; }
    goto L_08957D64;
L_08957D64:;
    f5 = f6;
    goto L_08957D68;
L_08957D68:;
    f2 = f7 + f5;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    ST32(s1+128, FBITS(f2));
    if (cnd_) { goto L_08957DB4; }
    goto L_08957D7C;
L_08957D7C:;
    v1 = LD32(s1+48);
    v0 = LD32(v1+236);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(s1+4); goto L_08957DB8; }
    goto L_08957D90;
L_08957D90:;
    v0 = D_08AEDDF4 - (-8716);
    f0 = BITSF(LD32(s1+120));
    f1 = BITSF(LD32(v0-8716));
    f0 = f0 * f1;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_08957DB0; }
    goto L_08957DB0;
L_08957DB0:;
    ST32(s1+128, FBITS(f2));
    goto L_08957DB4;
L_08957DB4:;
    a2 = LD32(s1+4);
    goto L_08957DB8;
L_08957DB8:;
    a0 = D_08C2B0A8 - (-20312);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_08958690; }
    goto L_08957DC8;
L_08957DC8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08957E18; }
    goto L_08957DEC;
L_08957DEC:;
    a0 = LD32(a1);
    goto L_08957DF0;
L_08957DF0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089589D4; }
    goto L_08957E08;
L_08957E08:;
    a1 = LD32(a1+4);
    goto L_08957E0C;
L_08957E0C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08957DF0; }
    goto L_08957E14;
L_08957E14:;
    s0 = 0 + 0;
    goto L_08957E18;
L_08957E18:;
    cnd_ = s0 == 0;
    if (cnd_) { v1 = LD32(s1+156); goto L_08958694; }
    goto L_08957E20;
L_08957E20:;
    a0 = s0 + 0;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08957E28;
L_08957E28:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+156); goto L_08958694; }
    goto L_08957E30;
L_08957E30:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08957CAC; }
    goto L_08957E48;
L_08957E48:;
    a1 = LD32(s2+16);
    cnd_ = a1 == 0;
    s3 = s2 + 76;
    if (cnd_) { goto L_08957E7C; }
    goto L_08957E54;
L_08957E54:;
    v0 = D_08B285AC - (-31316);
    s0 = LD32(v0-31316);
    v1 = LD32(s2+220);
    cnd_ = v1 == s0;
    if (cnd_) { a1 = sp + 0; goto L_08957E80; }
    goto L_08957E68;
L_08957E68:;
    v0 = LD32(s3+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEDDF8 - (-8712);
    if (cnd_) { goto L_08958678; }
    goto L_08957E78;
L_08957E78:;
    ST32(s2+220, s0);
    goto L_08957E7C;
L_08957E7C:;
    a1 = sp + 0;
    goto L_08957E80;
L_08957E80:;
    a2 = sp + 240;
    a0 = s3 + 0;
    v0 = func_08816640(a0, a1, a2);
    goto L_08957E8C;
L_08957E8C:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    f0 = BITSF(LD32(sp+240));
    if (cnd_) { goto L_08958158; }
    goto L_08957E98;
L_08957E98:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    a1 = LD32(s2+16);
    ST32(sp+160, FBITS(f1));
    ST32(sp+164, FBITS(f0));
    cnd_ = a1 == 0;
    ST32(sp+168, FBITS(f2));
    if (cnd_) { goto L_08957EE8; }
    goto L_08957EC0;
L_08957EC0:;
    v0 = D_08B285AC - (-31316);
    s0 = LD32(v0-31316);
    v1 = LD32(s2+220);
    cnd_ = v1 == s0;
    a0 = s3 + 0;
    if (cnd_) { goto L_08957EEC; }
    goto L_08957ED4;
L_08957ED4:;
    v0 = LD32(s3+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEDDF8 - (-8712);
    if (cnd_) { goto L_08958140; }
    goto L_08957EE4;
L_08957EE4:;
    ST32(s2+220, s0);
    goto L_08957EE8;
L_08957EE8:;
    a0 = s3 + 0;
    goto L_08957EEC;
L_08957EEC:;
    a1 = sp + 160;
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957EF4;
L_08957EF4:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+128)); goto L_08958038; }
    goto L_08957F00;
L_08957F00:;
    f2 = BITSF(LD32(s1+128));
    f1 = BITSF(LD32(sp+168));
    f0 = BITSF(LD32(sp+160));
    ST32(sp+208, 0);
    f1 = f1 + f2;
    ST32(sp+192, FBITS(f0));
    f0 = BITSF(LD32(sp+164));
    ST32(sp+200, FBITS(f1));
    ST32(sp+196, FBITS(f0));
    ST32(sp+212, 0);
    ST32(sp+216, FBITS(f2));
    a0 = LD32(s1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    s0 = s1 + 140;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08957F4C;
L_08957F4C:;
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
    {u32 a_=sp+(384);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    a2 = LD32(s1+48);
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(sp+196);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(336);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(432);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+192);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+200);
    {v[21]=BITSF(v0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=vr0*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f7 = BITSF(v0);
    a0 = a2 + 0;
    a1 = s0 + 0;
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    ST32(s1+140, v1);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(s0+4, v0);
    ST32(s0+8, FBITS(f7));
    ST32(sp+224, v1);
    ST32(sp+228, v0);
    ST32(sp+232, FBITS(f7));
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f7));
    goto L_08958020;
L_08958020:;
    v0 = LD32(a2);
    v1 = LD32(v0+128);
    t_ = v1;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958030;
L_08958030:;
    goto L_08957CAC;
L_08958038:;
    a0 = LD32(s1+48);
    ST32(sp+208, 0);
    ST32(sp+216, FBITS(f0));
    ST32(sp+212, 0);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    s0 = s1 + 140;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958064;
L_08958064:;
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(528);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+16);
    a1 = LD32(v0+32);
    {u32 a_=sp+(544);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    {v[50]=BITSF(a0);}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    v1 = LD32(v0+24);
    a0 = LD32(v0+28);
    {u32 a_=sp+(512);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(a0);}
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {u32 a_=sp+(464);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+208);
    v0 = LD32(sp+212);
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(448);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[16]=BITSF(v1);}
    v1 = LD32(sp+216);
    {v[17]=BITSF(v0);}
    {v[18]=BITSF(v1);}
    {float t0=v[16];float t1=v[17];float t2=v[18];float o0=0;o0+=vr0*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[20]=o0;v[21]=o1;v[22]=o2;}
    {v0=FBITS(v[22]);}
    f3 = BITSF(v0);
    a2 = LD32(s1+48);
    {v1=FBITS(v[20]);}
    {v0=FBITS(v[21]);}
    ST32(s1+140, v1);
    a0 = a2 + 0;
    a1 = s0 + 0;
    ST32(s0+4, v0);
    ST32(s0+8, FBITS(f3));
    ST32(sp+192, v1);
    ST32(sp+196, v0);
    ST32(sp+200, FBITS(f3));
    ST32(sp+224, v1);
    ST32(sp+228, v0);
    ST32(sp+232, FBITS(f3));
    goto L_08958020;
L_08958140:;
    f12 = BITSF(LD32(v0-8712));
    a0 = s3 + 0;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958150;
L_08958150:;
    ST32(s2+220, s0);
    goto L_08957EE8;
L_08958158:;
    {v[4]=0.31830988618f;}
    {u32 a_=sp+(304);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 * f20;
    v1 = LD32(sp);
    s0 = LD32(s1+48);
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {float s0=vr0;float t0=v[4];float d0=s0*t0;v[4]=d0;}
    v0 = LD32(sp+4);
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    v1 = LD32(sp+8);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[8]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    ST32(sp+240, FBITS(f0));
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=v[4];vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {float s0=v[8];float d0=s0;v[3]=d0;}
    {v1=FBITS(vr0);}
    f3 = BITSF(v1);
    {v0=FBITS(v[3]);}
    f4 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    {v0=FBITS(v[1]);}
    {v1=FBITS(v[2]);}
    ST32(sp+20, v0);
    ST32(sp+28, FBITS(f4));
    ST32(sp+24, v1);
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+40, v0);
    ST32(sp+44, v1);
    {v[112]=BITSF(LD32(sp+(16)));}
    {v[113]=BITSF(LD32(sp+(20)));}
    {v[114]=BITSF(LD32(sp+(24)));}
    {v[115]=BITSF(LD32(sp+(28)));}
    {float s0=vr0;v[120]=(float)1;}
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
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    {ST32(sp+(60),FBITS(v[100]));}
    {ST32(sp+(64),FBITS(v[101]));}
    {ST32(sp+(68),FBITS(v[102]));}
    {ST32(sp+(72),FBITS(v[104]));}
    {ST32(sp+(76),FBITS(v[105]));}
    {ST32(sp+(80),FBITS(v[106]));}
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958280;
L_08958280:;
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[116]=BITSF(LD32(sp+(60)));}
    {v[117]=BITSF(LD32(sp+(64)));}
    {v[118]=BITSF(LD32(sp+(68)));}
    {v[120]=BITSF(LD32(sp+(72)));}
    {v[121]=BITSF(LD32(sp+(76)));}
    {v[122]=BITSF(LD32(sp+(80)));}
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
    {ST32(sp+(96),FBITS(v[80]));}
    {ST32(sp+(100),FBITS(v[81]));}
    {ST32(sp+(104),FBITS(v[82]));}
    {ST32(sp+(108),FBITS(v[84]));}
    {ST32(sp+(112),FBITS(v[85]));}
    {ST32(sp+(116),FBITS(v[86]));}
    {ST32(sp+(120),FBITS(v[88]));}
    {ST32(sp+(124),FBITS(v[89]));}
    {ST32(sp+(128),FBITS(v[90]));}
    v0 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0+36);
    t_ = v1;
    a1 = sp + 96;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958304;
L_08958304:;
    a0 = LD32(s1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958324;
L_08958324:;
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
    {float s0=vr0;v[125]=(float)1;}
    {float s0=-(v[118]);float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089585A4; }
    goto L_08958360;
L_08958360:;
    {float s0=v[118];float t0=v[125];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089584E4; }
    goto L_08958370;
L_08958370:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;v[96]=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08958408; }
    goto L_08958398;
L_08958398:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089583E4; }
    goto L_089583D4;
L_089583D4:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_089583E4;
L_089583E4:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958428; }
    goto L_089583F4;
L_089583F4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08958428; }
    goto L_08958404;
L_08958404:;
    goto L_08958408;
L_08958408:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958428; }
    goto L_0895841C;
L_0895841C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08958428;
L_08958428:;
    {float s0=vr78;float d0=s0;v[97]=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089584B8; }
    goto L_08958448;
L_08958448:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958494; }
    goto L_08958484;
L_08958484:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08958494;
L_08958494:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089584D8; }
    goto L_089584A4;
L_089584A4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089584D8; }
    goto L_089584B4;
L_089584B4:;
    goto L_089584B8;
L_089584B8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089584D8; }
    goto L_089584CC;
L_089584CC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089584D8;
L_089584D8:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0895865C; }
    goto L_089584E0;
L_089584E0:;
    goto L_089584E4;
L_089584E4:;
    {float s0=v[125];float d0=-s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08958578; }
    goto L_08958508;
L_08958508:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958554; }
    goto L_08958544;
L_08958544:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08958554;
L_08958554:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958598; }
    goto L_08958564;
L_08958564:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08958598; }
    goto L_08958574;
L_08958574:;
    goto L_08958578;
L_08958578:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958598; }
    goto L_0895858C;
L_0895858C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08958598;
L_08958598:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    if (cnd_) { goto L_0895865C; }
    goto L_089585A0;
L_089585A0:;
    goto L_089585A4;
L_089585A4:;
    {float s0=v[125];float d0=s0;v[96]=d0;}
    {float s0=vr0;v[97]=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;v[73]=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;v[69]=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08958638; }
    goto L_089585C8;
L_089585C8:;
    {float s0=vr64;float s1=vr65;float d0=fabsf(s0);float d1=fabsf(s1);vr64=d0;vr65=d1;}
    {float s0=vr65;float t0=vr64;float d0=(s0<t0?1.f:0.f);v[70]=d0;}
    {float s0=vr64;float s1=vr65;float s2=v[66];float s3=v[67];float d0=fminf(s0,s1);float d1=fmaxf(s0,s1);float d2=fminf(s2,s3);float d3=fmaxf(s2,s3);vr64=d0;vr65=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr64;float s1=vr65;float t0=vr68;float t1=v[69];float d0=s0*t0;float d1=s1*t1;vr64=d0;vr65=d1;}
    {float s0=vr65;float d0=1.0f/s0;v[76]=d0;}
    {float s0=v[76];float t0=vr64;float d0=s0*t0;v[76]=d0;}
    {float s0=v[76];float t0=v[76];float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float t0=v[73];float d0=s0+t0;vr77=d0;}
    {float s0=vr77;float d0=1.0f/sqrtf(s0);vr77=d0;}
    {float s0=v[76];float t0=vr77;float d0=s0*t0;vr77=d0;}
    {float s0=vr77;float d0=asinf(s0)*0.63661977236f;vr78=d0;}
    {float s0=v[70];float t0=v[70];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958614; }
    goto L_08958604;
L_08958604:;
    {float s0=vr68;float t0=v[69];float d0=s0*t0;v[71]=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=v[71];float d0=s0+t0;vr78=d0;}
    goto L_08958614;
L_08958614:;
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958658; }
    goto L_08958624;
L_08958624:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08958658; }
    goto L_08958634;
L_08958634:;
    goto L_08958638;
L_08958638:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(v[69]);float t0=v[73];u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958658; }
    goto L_0895864C;
L_0895864C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08958658;
L_08958658:;
    {float s0=vr78;float d0=s0;v[98]=d0;}
    goto L_0895865C;
L_0895865C:;
    {float s0=v[96];float s1=v[97];float s2=v[98];float t0=v[124];v[96]=s0*t0;v[97]=s1*t0;v[98]=s2*t0;}
    {ST32(sp+(144),FBITS(v[96]));}
    {ST32(sp+(148),FBITS(v[97]));}
    {ST32(sp+(152),FBITS(v[98]));}
    f0 = BITSF(LD32(sp+152));
    ST32(s1+112, FBITS(f0));
    goto L_08957E98;
L_08958678:;
    f12 = BITSF(LD32(v0-8712));
    a0 = s3 + 0;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958688;
L_08958688:;
    ST32(s2+220, s0);
    goto L_08957E7C;
L_08958690:;
    v1 = LD32(s1+156);
    goto L_08958694;
L_08958694:;
    v0 = v1 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08957CAC; }
    goto L_089586A0;
L_089586A0:;
    s0 = s1 + 140;
    f6 = BITSF(LD32(s1+140));
    f0 = BITSF(LD32(s0+4));
    f7 = BITSF(LD32(s0+8));
    v0 = v1 & 0x1;
    ST32(sp+224, FBITS(f6));
    ST32(sp+228, FBITS(f0));
    cnd_ = v0 != 0;
    ST32(sp+232, FBITS(f7));
    if (cnd_) { goto L_089588FC; }
    goto L_089586C4;
L_089586C4:;
    v0 = v1 & 0x2;
    cnd_ = v0 != 0;
    f6 = BITSF(LD32(sp+224));
    if (cnd_) { goto L_08958860; }
    goto L_089586D0;
L_089586D0:;
    f7 = BITSF(LD32(sp+232));
    goto L_089586D4;
L_089586D4:;
    v0 = FBITS(f6);
    f21 = BITSF(0);
    {u32 a_=sp+(608);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f7);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+228);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    if (cnd_) { a1 = sp + 224; goto L_0895884C; }
    goto L_08958710;
L_08958710:;
    a0 = LD32(s1+48);
    goto L_08958714;
L_08958714:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958730;
L_08958730:;
    f4 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(s1+128));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+20));
    f3 = f4 * f0;
    ST32(sp+208, FBITS(f1));
    f1 = f1 * f0;
    f0 = f2 * f0;
    ST32(sp+212, FBITS(f2));
    ST32(sp+192, FBITS(f1));
    ST32(sp+196, FBITS(f0));
    ST32(sp+200, FBITS(f3));
    ST32(sp+216, FBITS(f4));
    a0 = LD32(s1+48);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = sp + 192;
    { rv_t r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958778;
L_08958778:;
    v1 = LD32(s1+104);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08957CAC; }
    goto L_08958784;
L_08958784:;
    f0 = BITSF(LD32(s1+108));
    f12 = f0 - f20;
    fcc = FCMP(f12, f21, 14);
    cnd_ = !fcc;
    ST32(s1+108, FBITS(f12));
    if (cnd_) { goto L_08957CAC; }
    goto L_0895879C;
L_0895879C:;
    a3 = D_08B25AC0 - (23232);
    v0 = LD32(a3+23232);
    t0 = a3 + 23232;
    a2 = LD32(t0+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a2;
    v1 = v0 >> 1;
    a0 = (u32)((s32)v0 >> 16);
    a1 = v0 << 16;
    f0 = BITSF(v1);
    a2 = a2 + v0;
    a1 = a1 + a0;
    a1 = a1 + a2;
    v1 = D_08AEDDFC - (-8708);
    v0 = a1 >> 1;
    f5 = BITSF(LD32(v1-8708));
    f3 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    v0 = D_08AEDE00 - (-8704);
    v1 = D_08AEDE04 - (-8700);
    f4 = BITSF(LD32(v1-8700));
    f0 = BITSF(LD32(v0-8704));
    v0 = D_08AEDE08 - (-8696);
    f2 = f2 * f4;
    f0 = f0 - f5;
    f1 = (float)(s32)FBITS(f3);
    f3 = BITSF(LD32(v0-8696));
    v0 = D_08AEDE0C - (-8692);
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0-8692));
    f1 = f1 * f4;
    a2 = a2 + a1;
    f0 = f0 - f3;
    f2 = f2 + f5;
    ST32(t0+4, a2);
    f1 = f1 * f0;
    f2 = f12 + f2;
    ST32(a3+23232, a1);
    f1 = f1 + f3;
    ST32(s1+108, FBITS(f2));
    ST32(s1+112, FBITS(f1));
    goto L_08957CAC;
L_0895884C:;
    a0 = s1 + 0;
    f12 = f20;
    ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_08958BD4(a0, a1, f12); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_08958858;
L_08958858:;
    a0 = LD32(s1+48);
    goto L_08958714;
L_08958860:;
    a0 = s1 + 96;
    a2 = sp + 208;
    f12 = f20;
    a1 = s1 + 0;
    ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;func_0896564C(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];});
    goto L_08958874;
L_08958874:;
    f3 = BITSF(LD32(sp+212));
    f6 = BITSF(LD32(sp+224));
    f7 = BITSF(LD32(sp+232));
    v0 = FBITS(f3);
    v1 = FBITS(f6);
    {u32 a_=sp+(592);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    {v[12]=BITSF(v1);}
    v1 = FBITS(f7);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    ST32(sp+228, FBITS(f3));
    if (cnd_) { goto L_089586D4; }
    goto L_089588BC;
L_089588BC:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(vr0);}
    {v1=FBITS(v[2]);}
    f6 = BITSF(v0);
    f7 = BITSF(v1);
    ST32(sp+224, v0);
    {v1=FBITS(v[1]);}
    ST32(sp+232, FBITS(f7));
    ST32(sp+196, v1);
    ST32(sp+228, v1);
    ST32(sp+192, v0);
    ST32(sp+200, FBITS(f7));
    goto L_089586D4;
L_089588FC:;
    a0 = s1 + 76;
    a2 = sp + 208;
    f12 = f20;
    a1 = s1 + 0;
    { u64 r_ = ({ v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;__auto_type vr_t_ = func_08964E28(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr68=v[68];vr77=v[77];vr78=v[78];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08958910;
L_08958910:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1+156); goto L_089586C4; }
    goto L_08958918;
L_08958918:;
    f0 = BITSF(LD32(s1+140));
    f4 = BITSF(LD32(sp+208));
    f1 = BITSF(LD32(s0+8));
    f5 = BITSF(LD32(sp+216));
    f4 = f4 - f0;
    f3 = BITSF(LD32(sp+212));
    f0 = BITSF(LD32(s0+4));
    f5 = f5 - f1;
    v1 = FBITS(f4);
    f3 = f3 - f0;
    {u32 a_=sp+(576);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f1 = BITSF(0);
    {v[12]=BITSF(v1);}
    v0 = FBITS(f3);
    v1 = FBITS(f5);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+192, FBITS(f4));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+196, FBITS(f3));
    ST32(sp+200, FBITS(f5));
    ST32(sp+224, FBITS(f4));
    ST32(sp+228, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+232, FBITS(f5));
    if (cnd_) { goto L_089589CC; }
    goto L_08958988;
L_08958988:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    v1 = LD32(s1+156);
    {float s0=v[4];float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f7 = BITSF(v0);
    {v0=FBITS(vr0);}
    f6 = BITSF(v0);
    ST32(sp+200, FBITS(f7));
    {v0=FBITS(v[1]);}
    ST32(sp+192, FBITS(f6));
    ST32(sp+196, v0);
    ST32(sp+224, FBITS(f6));
    ST32(sp+228, v0);
    ST32(sp+232, FBITS(f7));
    goto L_089586C4;
L_089589CC:;
    v1 = LD32(s1+156);
    goto L_089586C4;
L_089589D4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08957E08; }
    goto L_089589E0;
L_089589E0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08957E0C; }
    goto L_089589EC;
L_089589EC:;
    goto L_08957E18;
    v[0]=vr0;v[64]=vr64;v[65]=vr65;v[68]=vr68;v[77]=vr77;v[78]=vr78;
}

/* 089589F4 */
rv_t func_089589F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089589F4:;
    sp = sp - 16;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08958A70; }
    goto L_08958A0C;
L_08958A0C:;
    v0 = LD32(a0+48);
    v1 = 0x716f0000u;
    a1 = 0xccc40000u;
    a2 = LD32(v0+204);
    v1 = v1 | 0x625;
    a1 = a1 | 0xf0bd;
    v1 = a2 ^ v1;
    a1 = a2 ^ a1;
    v1 = v1 < 0x1u;
    a1 = a1 < 0x1u;
    v1 = v1 | a1;
    cnd_ = v1 != 0;
    v0 = 0xad8a0000u;
    if (cnd_) { goto L_08958AD0; }
    goto L_08958A40;
L_08958A40:;
    v0 = v0 | 0x26cf;
    cnd_ = a2 == v0;
    v0 = 0x3ec20000u;
    if (cnd_) { goto L_08958AC4; }
    goto L_08958A4C;
L_08958A4C:;
    v0 = v0 | 0xf729;
    cnd_ = a2 == v0;
    v0 = 0x300000u;
    if (cnd_) { goto L_08958AB8; }
    goto L_08958A58;
L_08958A58:;
    v0 = v0 | 0xcffa;
    cnd_ = a2 == v0;
    v0 = 0xf5ec0000u;
    if (cnd_) { goto L_08958AAC; }
    goto L_08958A64;
L_08958A64:;
    v0 = v0 | 0xfc51;
    cnd_ = a2 == v0;
    if (cnd_) { v1 = LD32(a0); goto L_08958A80; }
    goto L_08958A70;
L_08958A70:;
    goto L_08958A74;
L_08958A74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08958A80:;
    a1 = 1054;
    goto L_08958A84;
L_08958A84:;
    v0 = LD32(v1+44);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958A90;
L_08958A90:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08958A74; }
    goto L_08958A98;
L_08958A98:;
    a0 = s0 + 0;
    a1 = v0 + 0;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958AA4;
L_08958AA4:;
    goto L_08958A74;
L_08958AAC:;
    v1 = LD32(a0);
    a1 = 1052;
    goto L_08958A84;
L_08958AB8:;
    v1 = LD32(a0);
    a1 = 1057;
    goto L_08958A84;
L_08958AC4:;
    v1 = LD32(a0);
    a1 = 1051;
    goto L_08958A84;
L_08958AD0:;
    v1 = LD32(a0);
    a1 = 1053;
    goto L_08958A84;
}

/* 08958ADC */
rv_t func_08958ADC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08958ADC:;
    sp = sp - 16;
    a1 = 1050;
    a2 = 0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958B00;
L_08958B00:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08958B14; }
    goto L_08958B0C;
L_08958B0C:;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958B14;
L_08958B14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08958B24 */
rv_t func_08958B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08958B24:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089573AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958B40;
L_08958B40:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_08958B4C;
L_08958B4C:;
    a1 = 0x58470000u;
    a0 = s0 + 0;
    a1 = a1 | 0x80a7;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_08958B60;
L_08958B60:;
    a1 = 0x8fbf0000u;
    a0 = s0 + 0;
    a1 = a1 | 0x2335;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08958B7C; }
    goto L_08958B74;
L_08958B74:;
    f0 = BITSF(LD32(sp+4));
    ST32(s1+120, FBITS(f0));
    goto L_08958B7C;
L_08958B7C:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_08958B84;
L_08958B84:;
    a1 = 0xbf8f0000u;
    a0 = s0 + 0;
    a1 = a1 | 0x289d;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08958BA0; }
    goto L_08958B98;
L_08958B98:;
    f0 = BITSF(LD32(sp+4));
    ST32(s1+124, FBITS(f0));
    goto L_08958BA0;
L_08958BA0:;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_08958BA8;
L_08958BA8:;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08958BB8; }
    goto L_08958BB0;
L_08958BB0:;
    f0 = BITSF(LD32(sp+4));
    ST32(s1+132, FBITS(f0));
    goto L_08958BB8;
L_08958BB8:;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08958BC0;
L_08958BC0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08958BD4 */
void func_08958BD4(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr124 = v[124], vr125 = v[125], vr127 = v[127];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08958BD4:;
    sp = sp - 112;
    v1 = D_08C27B68 - (31592);
    s1 = a0 + 0;
    v0 = (u32)(s32)LD_S8(v1+31592);
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08958C08; }
    goto L_08958C00;
L_08958C00:;
    v0 = 1;
    ST8(v1+31592, v0);
    goto L_08958C08;
L_08958C08:;
    s0 = D_08C27B78 - (31608);
    s0 = s0 + 31608;
    a0 = s0 + 0;
    { rv_t r_ = ({ __auto_type vr_t_ = func_088F82FC(a0, a1); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958C18;
L_08958C18:;
    f0 = BITSF(LD32(s1+112));
    a0 = LD32(s1+48);
    {vr112=BITSF(LD32(s0+(0)));}
    {vr113=BITSF(LD32(s0+(4)));}
    {vr114=BITSF(LD32(s0+(8)));}
    {vr116=BITSF(LD32(s0+(12)));}
    {vr117=BITSF(LD32(s0+(16)));}
    {vr118=BITSF(LD32(s0+(20)));}
    {vr120=BITSF(LD32(s0+(24)));}
    {vr121=BITSF(LD32(s0+(28)));}
    {vr122=BITSF(LD32(s0+(32)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958EA0; }
    goto L_08958C5C;
L_08958C5C:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958DE0; }
    goto L_08958C6C;
L_08958C6C:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08958D04; }
    goto L_08958C94;
L_08958C94:;
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
    if (cnd_) { goto L_08958CE0; }
    goto L_08958CD0;
L_08958CD0:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08958CE0;
L_08958CE0:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958D24; }
    goto L_08958CF0;
L_08958CF0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08958D24; }
    goto L_08958D00;
L_08958D00:;
    goto L_08958D04;
L_08958D04:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958D24; }
    goto L_08958D18;
L_08958D18:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08958D24;
L_08958D24:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08958DB4; }
    goto L_08958D44;
L_08958D44:;
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
    if (cnd_) { goto L_08958D90; }
    goto L_08958D80;
L_08958D80:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08958D90;
L_08958D90:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958DD4; }
    goto L_08958DA0;
L_08958DA0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08958DD4; }
    goto L_08958DB0;
L_08958DB0:;
    goto L_08958DB4;
L_08958DB4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958DD4; }
    goto L_08958DC8;
L_08958DC8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08958DD4;
L_08958DD4:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_08958F58; }
    goto L_08958DDC;
L_08958DDC:;
    goto L_08958DE0;
L_08958DE0:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08958E74; }
    goto L_08958E04;
L_08958E04:;
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
    if (cnd_) { goto L_08958E50; }
    goto L_08958E40;
L_08958E40:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08958E50;
L_08958E50:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958E94; }
    goto L_08958E60;
L_08958E60:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08958E94; }
    goto L_08958E70;
L_08958E70:;
    goto L_08958E74;
L_08958E74:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958E94; }
    goto L_08958E88;
L_08958E88:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08958E94;
L_08958E94:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_08958F58; }
    goto L_08958E9C;
L_08958E9C:;
    goto L_08958EA0;
L_08958EA0:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_08958F34; }
    goto L_08958EC4;
L_08958EC4:;
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
    if (cnd_) { goto L_08958F10; }
    goto L_08958F00;
L_08958F00:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08958F10;
L_08958F10:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958F54; }
    goto L_08958F20;
L_08958F20:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_08958F54; }
    goto L_08958F30;
L_08958F30:;
    goto L_08958F34;
L_08958F34:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08958F54; }
    goto L_08958F48;
L_08958F48:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_08958F54;
L_08958F54:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_08958F58;
L_08958F58:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    ST32(sp+8, FBITS(f0));
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr96=v[96];vr97=v[97];vr98=v[98];vr112=v[112];vr113=v[113];vr114=v[114];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr124=v[124];vr125=v[125];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08958F88;
L_08958F88:;
    {vr112=BITSF(LD32(v0+(0)));}
    {vr113=BITSF(LD32(v0+(4)));}
    {vr114=BITSF(LD32(v0+(8)));}
    {vr116=BITSF(LD32(v0+(12)));}
    {vr117=BITSF(LD32(v0+(16)));}
    {vr118=BITSF(LD32(v0+(20)));}
    {vr120=BITSF(LD32(v0+(24)));}
    {vr121=BITSF(LD32(v0+(28)));}
    {vr122=BITSF(LD32(v0+(32)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08959208; }
    goto L_08958FC4;
L_08958FC4:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08959148; }
    goto L_08958FD4;
L_08958FD4:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0895906C; }
    goto L_08958FFC;
L_08958FFC:;
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
    if (cnd_) { goto L_08959048; }
    goto L_08959038;
L_08959038:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08959048;
L_08959048:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895908C; }
    goto L_08959058;
L_08959058:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0895908C; }
    goto L_08959068;
L_08959068:;
    goto L_0895906C;
L_0895906C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895908C; }
    goto L_08959080;
L_08959080:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0895908C;
L_0895908C:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0895911C; }
    goto L_089590AC;
L_089590AC:;
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
    if (cnd_) { goto L_089590F8; }
    goto L_089590E8;
L_089590E8:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089590F8;
L_089590F8:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895913C; }
    goto L_08959108;
L_08959108:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0895913C; }
    goto L_08959118;
L_08959118:;
    goto L_0895911C;
L_0895911C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895913C; }
    goto L_08959130;
L_08959130:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0895913C;
L_0895913C:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_089592C0; }
    goto L_08959144;
L_08959144:;
    goto L_08959148;
L_08959148:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089591DC; }
    goto L_0895916C;
L_0895916C:;
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
    if (cnd_) { goto L_089591B8; }
    goto L_089591A8;
L_089591A8:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089591B8;
L_089591B8:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089591FC; }
    goto L_089591C8;
L_089591C8:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089591FC; }
    goto L_089591D8;
L_089591D8:;
    goto L_089591DC;
L_089591DC:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089591FC; }
    goto L_089591F0;
L_089591F0:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089591FC;
L_089591FC:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_089592C0; }
    goto L_08959204;
L_08959204:;
    goto L_08959208;
L_08959208:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0895929C; }
    goto L_0895922C;
L_0895922C:;
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
    if (cnd_) { goto L_08959278; }
    goto L_08959268;
L_08959268:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_08959278;
L_08959278:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089592BC; }
    goto L_08959288;
L_08959288:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089592BC; }
    goto L_08959298;
L_08959298:;
    goto L_0895929C;
L_0895929C:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089592BC; }
    goto L_089592B0;
L_089592B0:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089592BC;
L_089592BC:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_089592C0;
L_089592C0:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(16),FBITS(vr96));}
    {ST32(sp+(20),FBITS(vr97));}
    {ST32(sp+(24),FBITS(vr98));}
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+16));
    v1 = D_08AEDE10 - (-8688);
    f3 = BITSF(LD32(v1-8688));
    f4 = f1 - f0;
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    fcc = FCMP(f3, f4, 12);
    f6 = f1 - f0;
    f0 = BITSF(LD32(sp+24));
    ST32(sp+32, FBITS(f4));
    f5 = f2 - f0;
    ST32(sp+36, FBITS(f6));
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f5));
    if (cnd_) { goto L_08959644; }
    goto L_08959310;
L_08959310:;
    v0 = D_08AEDE14 - (-8684);
    f0 = BITSF(LD32(v0-8684));
    f0 = f4 - f0;
    goto L_0895931C;
L_0895931C:;
    ST32(sp+32, FBITS(f0));
    f6 = BITSF(LD32(sp+36));
    goto L_08959324;
L_08959324:;
    f0 = BITSF(LD32(v1-8688));
    fcc = FCMP(f0, f6, 12);
    cnd_ = !fcc;
    v0 = D_08AEDE18 - (-8680);
    if (cnd_) { goto L_08959620; }
    goto L_08959338;
L_08959338:;
    v0 = D_08AEDE14 - (-8684);
    f0 = BITSF(LD32(v0-8684));
    f6 = f6 - f0;
    goto L_08959344;
L_08959344:;
    ST32(sp+36, FBITS(f6));
    f0 = BITSF(LD32(v1-8688));
    goto L_0895934C;
L_0895934C:;
    f5 = BITSF(LD32(sp+40));
    fcc = FCMP(f0, f5, 12);
    cnd_ = !fcc;
    v0 = D_08AEDE18 - (-8680);
    if (cnd_) { goto L_089595FC; }
    goto L_08959360;
L_08959360:;
    v0 = D_08AEDE14 - (-8684);
    f0 = BITSF(LD32(v0-8684));
    f5 = f5 - f0;
    goto L_0895936C;
L_0895936C:;
    ST32(sp+40, FBITS(f5));
    f1 = BITSF(LD32(sp+32));
    goto L_08959374;
L_08959374:;
    v0 = D_08AEDE1C - (-8676);
    f7 = BITSF(LD32(v0-8676));
    v0 = FBITS(f1);
    f4 = f6 * f6;
    f2 = f1 * f1;
    v0 = (v0 >> 0) & 0x7fffffff;
    f3 = BITSF(v0);
    f0 = f5 * f5;
    f2 = f2 + f4;
    fcc = FCMP(f3, f7, 12);
    cnd_ = !fcc;
    f21 = f2 + f0;
    if (cnd_) { goto L_089595C8; }
    goto L_089593A8;
L_089593A8:;
    v0 = FBITS(f6);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f1, f7, 12);
    cnd_ = !fcc;
    v0 = D_08B1B75C - (-18596);
    if (cnd_) { goto L_089595CC; }
    goto L_089593C4;
L_089593C4:;
    v0 = FBITS(f5);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f1, f7, 12);
    cnd_ = !fcc;
    v0 = D_08B1B75C - (-18596);
    if (cnd_) { goto L_089595CC; }
    goto L_089593E0;
L_089593E0:;
    ST32(s1+116, 0);
    goto L_089593E4;
L_089593E4:;
    f0 = BITSF(LD32(s1+116));
    a0 = sp + 32;
    a1 = sp + 64;
    f0 = f0 * f20;
    a2 = sp + 68;
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    ST32(sp+68, FBITS(f0));
    ST32(sp+64, FBITS(f1));
    f0 = func_0895A5D8(a0, a1, a2);
    goto L_08959408;
L_08959408:;
    a0 = sp + 36;
    f1 = BITSF(LD32(sp+68));
    a1 = sp + 72;
    a2 = sp + 68;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+32, FBITS(f0));
    ST32(sp+72, FBITS(f1));
    f0 = func_0895A5D8(a0, a1, a2);
    goto L_08959428;
L_08959428:;
    a0 = sp + 40;
    f1 = BITSF(LD32(sp+68));
    a1 = sp + 76;
    a2 = sp + 68;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+36, FBITS(f0));
    ST32(sp+76, FBITS(f1));
    f0 = func_0895A5D8(a0, a1, a2);
    goto L_08959448;
L_08959448:;
    a0 = D_08C27B70 - (31600);
    f1 = BITSF(LD32(sp+32));
    f4 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f4 = f4 + f1;
    f1 = BITSF(LD32(sp+36));
    f2 = f2 + f0;
    v0 = (u32)(s32)LD_S8(a0+31600);
    f3 = f3 + f1;
    ST32(sp+48, FBITS(f4));
    a1 = D_08C27B9C - (31644);
    ST32(sp+52, FBITS(f3));
    ST32(sp+56, FBITS(f2));
    cnd_ = v0 != 0;
    ST32(sp+40, FBITS(f0));
    if (cnd_) { goto L_089594E4; }
    goto L_08959488;
L_08959488:;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f8 = BITSF(LD32(v1+23208));
    v0 = a1 + 31644;
    v1 = 1;
    ST32(v0+32, FBITS(f0));
    ST32(a1+31644, FBITS(f8));
    ST8(a0+31600, v1);
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    goto L_089594E4;
L_089594E4:;
    a0 = LD32(s1+48);
    a1 = a1 + 31644;
    {vr112=BITSF(LD32(sp+(48)));}
    {vr113=BITSF(LD32(sp+(52)));}
    {vr114=BITSF(LD32(sp+(56)));}
    {v[115]=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[115];vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float t0=vr121;float d0=s0*t0;v[115]=d0;}
    {float s0=v[115];float t0=vr122;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;vr96=t;}
    {float s0=v[115];float t0=vr118;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float d0=-s0;float d1=-s1;v[126]=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;vr97=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;vr98=d0;}
    {float s0=vr116;float t0=vr122;float d0=s0*t0;v[100]=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=vr120;float d0=-s0;v[102]=d0;}
    {float s0=vr120;float t0=vr117;float d0=s0*t0;vr124=d0;}
    {float s0=vr124;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=vr124;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;v[126]=d0;}
    {float s0=v[126];float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;v[106]=d0;}
    {ST32(a1+(0),FBITS(vr96));}
    {ST32(a1+(4),FBITS(vr97));}
    {ST32(a1+(8),FBITS(vr98));}
    {ST32(a1+(12),FBITS(v[100]));}
    {ST32(a1+(16),FBITS(v[101]));}
    {ST32(a1+(20),FBITS(v[102]));}
    {ST32(a1+(24),FBITS(v[104]));}
    {ST32(a1+(28),FBITS(v[105]));}
    {ST32(a1+(32),FBITS(v[106]));}
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr96=v[96];vr97=v[97];vr98=v[98];vr112=v[112];vr113=v[113];vr114=v[114];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr124=v[124];vr125=v[125];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895958C;
L_0895958C:;
    v0 = D_08AEDE20 - (-8672);
    f0 = BITSF(LD32(v0-8672));
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_089595A8; }
    goto L_089595A4;
L_089595A4:;
    v1 = 0 + 0;
    goto L_089595A8;
L_089595A8:;
    v0 = v1 + 0;
    sp = sp + 112;
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;return; }
L_089595C8:;
    v0 = D_08B1B75C - (-18596);
    goto L_089595CC;
L_089595CC:;
    f0 = BITSF(LD32(v0-18596));
    f1 = BITSF(LD32(s1+116));
    v0 = D_08B1B760 - (-18592);
    f0 = f0 * f20;
    f2 = BITSF(LD32(v0-18592));
    f1 = f1 + f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089595F4; }
    goto L_089595F4;
L_089595F4:;
    ST32(s1+116, FBITS(f1));
    goto L_089593E4;
L_089595FC:;
    f0 = BITSF(LD32(v0-8680));
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(sp+32));
    if (cnd_) { goto L_08959374; }
    goto L_08959610;
L_08959610:;
    v0 = D_08AEDE14 - (-8684);
    f0 = BITSF(LD32(v0-8684));
    f5 = f5 + f0;
    goto L_0895936C;
L_08959620:;
    f0 = BITSF(LD32(v0-8680));
    fcc = FCMP(f6, f0, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v1-8688));
    if (cnd_) { goto L_0895934C; }
    goto L_08959634;
L_08959634:;
    v0 = D_08AEDE14 - (-8684);
    f0 = BITSF(LD32(v0-8684));
    f6 = f6 + f0;
    goto L_08959344;
L_08959644:;
    v0 = D_08AEDE18 - (-8680);
    f0 = BITSF(LD32(v0-8680));
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    f6 = BITSF(LD32(sp+36));
    if (cnd_) { goto L_08959324; }
    goto L_0895965C;
L_0895965C:;
    v0 = D_08AEDE14 - (-8684);
    f0 = BITSF(LD32(v0-8684));
    f0 = f4 + f0;
    goto L_0895931C;
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[127]=vr127;
}

/* 0895966C */
rv_t func_0895966C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0895966C:;
    sp = sp - 64;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = a2 + 0;
    s0 = s0 & 0xff;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    {vr0=BITSF(v0);}
    v0 = LD32(a1+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = a0 + 124;
    a2 = v0 + 0;
    a0 = sp + 16;
    a1 = sp + 20;
    ST32(sp+20, 0);
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    ST32(sp+16, v0);
    f0 = func_0895A5D8(a0, a1, a2);
    goto L_089596D0;
L_089596D0:;
    v0 = s2 + 140;
    cnd_ = s0 == 0;
    ST32(s2+136, FBITS(f0));
    if (cnd_) { goto L_089596E0; }
    goto L_089596DC;
L_089596DC:;
    ST32(s2+128, FBITS(f0));
    goto L_089596E0;
L_089596E0:;
    f5 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    {u32 a_=sp+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    f1 = BITSF(0);
    {vr8=BITSF(v1);}
    v1 = FBITS(f4);
    {vr9=BITSF(v1);}
    v1 = FBITS(f5);
    {vr10=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(s2+140, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(v0+4, FBITS(f4));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    cnd_ = fcc;
    ST32(v0+8, FBITS(f5));
    if (cnd_) { goto L_08959768; }
    goto L_08959730;
L_08959730:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=vr0;float d0=s0/t0;v[12]=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v1=FBITS(vr0);}
    f2 = BITSF(v1);
    ST32(v0+8, FBITS(f3));
    {v1=FBITS(vr1);}
    ST32(s2+140, FBITS(f2));
    ST32(sp+4, v1);
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(v0+4, v1);
    goto L_08959768;
L_08959768:;
    sp = sp + 64;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 08959780 */
rv_t func_08959780(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08959780:;
    sp = sp - 64;
    v0 = a0 + 124;
    s2 = a0 + 0;
    a0 = sp + 16;
    s1 = a1 + 0;
    a1 = sp + 20;
    s0 = a2 + 0;
    a2 = v0 + 0;
    s0 = s0 & 0xff;
    ST32(sp+16, FBITS(f12));
    ST32(sp+20, 0);
    f0 = func_0895A5D8(a0, a1, a2);
    goto L_089597C0;
L_089597C0:;
    v0 = s2 + 140;
    cnd_ = s0 == 0;
    ST32(s2+136, FBITS(f0));
    if (cnd_) { goto L_089597D0; }
    goto L_089597CC;
L_089597CC:;
    ST32(s2+128, FBITS(f0));
    goto L_089597D0;
L_089597D0:;
    f5 = BITSF(LD32(s1+8));
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    {u32 a_=sp+(32);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    f1 = BITSF(0);
    {vr8=BITSF(v1);}
    v1 = FBITS(f4);
    {vr9=BITSF(v1);}
    v1 = FBITS(f5);
    {vr10=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(s2+140, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(v0+4, FBITS(f4));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    cnd_ = fcc;
    ST32(v0+8, FBITS(f5));
    if (cnd_) { goto L_08959858; }
    goto L_08959820;
L_08959820:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=vr0;float d0=s0/t0;v[12]=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v1=FBITS(vr0);}
    f2 = BITSF(v1);
    ST32(v0+8, FBITS(f3));
    {v1=FBITS(vr1);}
    ST32(s2+140, FBITS(f2));
    ST32(sp+4, v1);
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(v0+4, v1);
    goto L_08959858;
L_08959858:;
    sp = sp + 64;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 08959870 */
u32 func_08959870(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_08959870:;
    v0 = 2;
    cnd_ = a1 == v0;
    ST32(a0+104, a1);
    if (cnd_) { goto L_08959884; }
    goto L_0895987C;
L_0895987C:;
    return v0;
L_08959884:;
    ST32(a0+112, 0);
    return v0;
}

/* 0895988C */
void func_0895988C(u32 a0, u32 a1)
{
L_0895988C:;
    ST32(a0+80, a1);
    return;
}

/* 08959894 */
rv_t func_08959894(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
L_08959894:;
    a3 = D_08B25AC0 - (23232);
    v1 = LD32(a3+23232);
    t0 = a3 + 23232;
    a2 = LD32(t0+4);
    a1 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + a1;
    v1 = v1 + a2;
    v0 = D_08B1B74C - (-18612);
    f1 = BITSF(LD32(v0-18612));
    v0 = v1 >> 1;
    f4 = BITSF(v0);
    v0 = D_08AEDE28 - (-8664);
    f3 = BITSF(LD32(v0-8664));
    v0 = D_08AEDE24 - (-8668);
    f0 = BITSF(LD32(v0-8668));
    f3 = f1 * f3;
    f2 = (float)(s32)FBITS(f4);
    f1 = f1 * f0;
    v0 = D_08AEDE2C - (-8660);
    f0 = BITSF(LD32(v0-8660));
    a2 = a2 + v1;
    f3 = f3 - f1;
    f2 = f2 * f0;
    ST32(t0+4, a2);
    f2 = f2 * f3;
    ST32(a3+23232, v1);
    f1 = f1 + f2;
    ST32(a0+152, FBITS(f1));
    return (rv_t){ v0, v1, f0 };
}

/* 0895990C */
u32 func_0895990C(u32 a0)
{
    u32 v0 = 0;
L_0895990C:;
    v0 = LD32(a0+48);
    return v0;
}

/* 08959914 */
u32 func_08959914(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08959914:;
    sp = sp - 48;
    v0 = 999;
    s2 = a1 + 0;
    a2 = LD32(a1);
    cnd_ = a2 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08959B74; }
    goto L_08959944;
L_08959944:;
    s3 = D_08C2AA98 - (-21864);
    v0 = s3 - 21864;
    v1 = LD32(v0+4);
    a0 = LD32(s3-21864);
    v1 = v1 - 1;
    v1 = a2 & v1;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a1 = LD32(v1);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0895999C; }
    goto L_08959970;
L_08959970:;
    a0 = LD32(a1);
    goto L_08959974;
L_08959974:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08959B54; }
    goto L_0895998C;
L_0895998C:;
    a1 = LD32(a1+4);
    goto L_08959990;
L_08959990:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08959974; }
    goto L_08959998;
L_08959998:;
    s0 = 0 + 0;
    goto L_0895999C;
L_0895999C:;
    cnd_ = s0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089599B4; }
    goto L_089599A4;
L_089599A4:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089599AC;
L_089599AC:;
    cnd_ = v0 != 0;
    v0 = 999;
    if (cnd_) { goto L_08959B18; }
    goto L_089599B4;
L_089599B4:;
    ST32(s2, v0);
    goto L_089599B8;
L_089599B8:;
    v0 = s3 - 21864;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08959A2C; }
    goto L_089599E0;
L_089599E0:;
    a2 = LD32(s3-21864);
    a3 = a1 + 0;
    goto L_089599E8;
L_089599E8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08959A1C; }
    goto L_08959A00;
L_08959A00:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08959A30; }
    goto L_08959A10;
L_08959A10:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08959A00; }
    goto L_08959A1C;
L_08959A1C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089599E8; }
    goto L_08959A2C;
L_08959A2C:;
    v0 = LD32(sp+8);
    goto L_08959A30;
L_08959A30:;
    cnd_ = v0 == 0;
    s4 = D_08B1B744 - (-18620);
    if (cnd_) { goto L_08959A78; }
    goto L_08959A38;
L_08959A38:;
    s3 = D_08C27B5C - (31580);
    s0 = LD32(v0);
    goto L_08959A40;
L_08959A40:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08959A48;
L_08959A48:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08959A60; }
    goto L_08959A50;
L_08959A50:;
    v1 = LD32(s0+256);
    v0 = LD32(s1+4);
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08959AC4; }
    goto L_08959A60;
L_08959A60:;
    a0 = sp + 0;
    goto L_08959A64;
L_08959A64:;
    a1 = 1;
    func_08ABF2F4(a0, a1);
    goto L_08959A6C;
L_08959A6C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08959A40; }
    goto L_08959A78;
L_08959A78:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08959AB4; }
    goto L_08959A8C;
L_08959A8C:;
    a0 = 0 + 0;
    goto L_08959A90;
L_08959A90:;
    v0 = a0 + 0;
    sp = sp + 48;
    return v0;
L_08959AB4:;
    func_08ABF398(a0, t1, t2, t3);
    goto L_08959ABC;
L_08959ABC:;
    a0 = 0 + 0;
    goto L_08959A90;
L_08959AC4:;
    f12 = BITSF(LD32(s4-18620));
    f13 = BITSF(LD32(s3+31580));
    v0 = func_0895A218(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08959AD0;
L_08959AD0:;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08959A64; }
    goto L_08959AD8;
L_08959AD8:;
    v1 = LD32(s0);
    a0 = LD32(sp);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s2, v1);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08959B08; }
    goto L_08959B00;
L_08959B00:;
    a0 = s0 + 0;
    goto L_08959A90;
L_08959B08:;
    func_08ABF398(a0, 0, 0, 0);
    goto L_08959B10;
L_08959B10:;
    a0 = s0 + 0;
    goto L_08959A90;
L_08959B18:;
    v0 = D_08AEDE30 - (-8656);
    f0 = BITSF(LD32(v0-8656));
    v1 = D_08B1B744 - (-18620);
    v0 = D_08C27B5C - (31580);
    f12 = BITSF(LD32(v1-18620));
    f13 = BITSF(LD32(v0+31580));
    a0 = s1 + 0;
    f12 = f12 * f0;
    f13 = f13 * f0;
    a1 = s0 + 0;
    v0 = func_0895A218(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08959B44;
L_08959B44:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08959A90; }
    goto L_08959B4C;
L_08959B4C:;
    v0 = 999;
    goto L_089599B4;
L_08959B54:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0895998C; }
    goto L_08959B60;
L_08959B60:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08959990; }
    goto L_08959B6C;
L_08959B6C:;
    goto L_0895999C;
L_08959B74:;
    s3 = D_08C2AA98 - (-21864);
    goto L_089599B8;
}

/* 08959B7C */
float func_08959B7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08959B7C:;
    sp = sp - 96;
    s2 = a0 + 0;
    v0 = LD32(a1);
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s1 = a1 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08959BB4;
L_08959BB4:;
    a0 = LD32(s2+48);
    s0 = v0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08959BD8;
L_08959BD8:;
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f0 = f0 - f1;
    f3 = f3 - f2;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(s1);
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = D_08B1B748 - (-18616);
    f1 = BITSF(LD32(v0-18616));
    ST32(sp, FBITS(f0));
    a0 = s1 + 0;
    ST32(sp+4, FBITS(f3));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+8, FBITS(f4));
    f20 = f1 - f0;
    v0 = LD32(v1+40);
    t_ = v0;
    f20 = f20 / f1;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08959C54;
L_08959C54:;
    a1 = LD32(v0+8);
    v1 = LD32(v0);
    a0 = LD32(v0+4);
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(a1);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f2 = BITSF(LD32(s2+124));
    f0 = BITSF(LD32(s2+120));
    a0 = sp + 16;
    a1 = sp + 20;
    ST32(sp+20, FBITS(f0));
    a2 = sp + 24;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+24, FBITS(f2));
    f20 = f20 * f2;
    f1 = f0 + f20;
    ST32(sp+16, FBITS(f1));
    f0 = func_0895A5D8(a0, a1, a2);
    goto L_08959CAC;
L_08959CAC:;
    sp = sp + 96;
    { v[0]=vr0;return f0; }
    v[0]=vr0;
}

/* 08959CC8 */
void func_08959CC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr20 = v[20], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08959CC8:;
    f2 = BITSF(LD32(a0));
    f3 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f6 = BITSF(LD32(a1));
    f7 = BITSF(LD32(a1+4));
    f8 = BITSF(LD32(a1+8));
    v0 = D_08C27B64 - (31588);
    f9 = BITSF(LD32(v0+31588));
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    a3 = FBITS(f6);
    v0 = FBITS(f2);
    {vr0=BITSF(a3);}
    {vr4=BITSF(v0);}
    a3 = FBITS(f7);
    v1 = FBITS(f3);
    {vr1=BITSF(a3);}
    a2 = FBITS(f4);
    a3 = FBITS(f8);
    {vr5=BITSF(v1);}
    {vr2=BITSF(a3);}
    {vr6=BITSF(a2);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {a3=FBITS(vr4);}
    f0 = BITSF(a3);
    fcc = FCMP(f9, f0, 14);
    cnd_ = fcc;
    sp = sp - 80;
    if (cnd_) { goto L_08959F20; }
    goto L_08959D38;
L_08959D38:;
    f7 = f7 - f3;
    f8 = f8 - f4;
    f6 = f6 - f2;
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(v0);}
    a3 = FBITS(f7);
    v0 = FBITS(f6);
    {vr5=BITSF(v1);}
    {vr0=BITSF(v0);}
    {vr6=BITSF(a2);}
    {vr1=BITSF(a3);}
    v0 = FBITS(f8);
    {vr2=BITSF(v0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr8=d0;vr9=d1;vr10=d2;}
    {v0=FBITS(vr8);}
    {a3=FBITS(vr10);}
    f1 = BITSF(v0);
    f5 = BITSF(a3);
    f4 = BITSF(v0);
    {v0=FBITS(vr9);}
    f0 = BITSF(v0);
    a3 = FBITS(f1);
    f3 = BITSF(v0);
    {vr12=BITSF(a3);}
    v0 = FBITS(f5);
    a3 = FBITS(f0);
    f1 = BITSF(0);
    {vr13=BITSF(a3);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a3=FBITS(vr0);}
    f0 = BITSF(a3);
    ST32(sp, FBITS(f6));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+4, FBITS(f7));
    ST32(sp+8, FBITS(f8));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f5));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08959E20; }
    goto L_08959DE8;
L_08959DE8:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {a3=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+32, a3);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, a3);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08959E20;
L_08959E20:;
    a3 = FBITS(f9);
    {v[16]=BITSF(a3);}
    {float s0=v[16];float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    {vr8=1.57079632679f;}
    v0 = LD32(sp+16);
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    {float s0=vr20;float s1=v[21];float s2=v[22];float s3=v[23];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v1 = LD32(sp+20);
    {vr4=BITSF(v0);}
    v0 = LD32(sp+24);
    {vr5=BITSF(v1);}
    {vr6=BITSF(v0);}
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    {float s0=vr0;float t0=vr8;float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    {vr0=0.31830988618f;}
    {vr20=BITSF(v0);}
    {float s0=vr20;float t0=vr0;float d0=s0*t0;vr0=d0;}
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr8=d0;}
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;vr4=s0*t0;vr5=s1*t0;vr6=s2*t0;}
    {float s0=vr8;float d0=s0;vr7=d0;}
    {a3=FBITS(vr4);}
    f3 = BITSF(a3);
    {v0=FBITS(vr7);}
    f4 = BITSF(v0);
    ST32(sp+48, FBITS(f3));
    {v0=FBITS(vr5);}
    {a3=FBITS(vr6);}
    ST32(sp+52, v0);
    ST32(sp+56, a3);
    ST32(sp+60, FBITS(f4));
    v0 = LD32(sp+48);
    v1 = LD32(sp+52);
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    v0 = LD32(sp+56);
    v1 = LD32(sp+60);
    ST32(sp+72, v0);
    ST32(sp+76, v1);
    {vr112=BITSF(LD32(sp+(48)));}
    {vr113=BITSF(LD32(sp+(52)));}
    {vr114=BITSF(LD32(sp+(56)));}
    {vr115=BITSF(LD32(sp+(60)));}
    {vr116=BITSF(LD32(a0+(0)));}
    {vr117=BITSF(LD32(a0+(4)));}
    {vr118=BITSF(LD32(a0+(8)));}
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
    {ST32(a1+(0),FBITS(vr120));}
    {ST32(a1+(4),FBITS(vr121));}
    {ST32(a1+(8),FBITS(vr122));}
    goto L_08959F20;
L_08959F20:;
    sp = sp + 80;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[20]=vr20;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;return; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[20]=vr20;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;
}

/* 08959F28 */
u32 func_08959F28(void)
{
    u32 v0 = 0;
L_08959F28:;
    v0 = 88;
    return v0;
}

/* 08959F30 */
rv_t func_08959F30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08959F30:;
    sp = sp - 32;
    s5 = D_08C278D8 - (30936);
    v0 = 0 + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    a3 = LD32(s5+30936);
    a1 = LD32(a3+4);
    cnd_ = a1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08959FE0; }
    goto L_08959F70;
L_08959F70:;
    v0 = LD32(a3+16);
    v1 = LD32(a1);
    a2 = s4 - 1050;
    v0 = v0 + 1;
    a0 = a2 < 0x6fu;
    ST32(a3+4, v1);
    s1 = a1 + 0;
    cnd_ = a0 == 0;
    ST32(a3+16, v0);
    if (cnd_) { goto L_0895A004; }
    goto L_08959F94;
L_08959F94:;
    v1 = D_08ADACB8 - (-21320);
    v0 = a2 << 2;
    v1 = v1 - 21320;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08959FB0u: goto L_08959FB0; case 0x0895A004u: goto L_0895A004; case 0x0895A038u: goto L_0895A038; case 0x0895A050u: goto L_0895A050; case 0x0895A068u: goto L_0895A068; case 0x0895A080u: goto L_0895A080; case 0x0895A098u: goto L_0895A098; case 0x0895A0B0u: goto L_0895A0B0; case 0x0895A0C8u: goto L_0895A0C8; case 0x0895A0E0u: goto L_0895A0E0; case 0x0895A0F8u: goto L_0895A0F8; case 0x0895A110u: goto L_0895A110; case 0x0895A128u: goto L_0895A128; case 0x0895A140u: goto L_0895A140; case 0x0895A158u: goto L_0895A158; case 0x0895A170u: goto L_0895A170; case 0x0895A188u: goto L_0895A188; case 0x0895A1A0u: goto L_0895A1A0; case 0x0895A1B8u: goto L_0895A1B8; case 0x0895A1D0u: goto L_0895A1D0; case 0x0895A1E8u: goto L_0895A1E8; case 0x0895A200u: goto L_0895A200; default: rs_break(0, 0x08959fa8); }
L_08959FB0:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_08959FB8;
L_08959FB8:;
    a1 = s2 + 0;
    { u64 r_ = func_08941334(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08959FC0;
L_08959FC0:;
    cnd_ = s1 == 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_0895A004; }
    goto L_08959FC8;
L_08959FC8:;
    cnd_ = s3 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_08959FDC; }
    goto L_08959FD0;
L_08959FD0:;
    a0 = s1 + 0;
    a2 = 1;
    { rv_t r_ = func_08921EFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08959FDC;
L_08959FDC:;
    v0 = s0 + 0;
    goto L_08959FE0;
L_08959FE0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895A004:;
    v0 = LD32(s5+30936);
    a0 = s2 + 0;
    a1 = s4 + 0;
    v1 = LD32(v0+16);
    a3 = LD32(v0+4);
    a2 = s3 + 0;
    v1 = v1 - 1;
    ST32(s1, a3);
    ST32(v0+16, v1);
    ST32(v0+4, s1);
    { rv_t r_ = func_089562E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A030;
L_0895A030:;
    s0 = v0 + 0;
    goto L_08959FDC;
L_0895A038:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A040;
L_0895A040:;
    a1 = s2 + 0;
    { u64 r_ = func_08941CD0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A048;
L_0895A048:;
    goto L_08959FC0;
L_0895A050:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A058;
L_0895A058:;
    a1 = s2 + 0;
    { u64 r_ = func_08945A68(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A060;
L_0895A060:;
    goto L_08959FC0;
L_0895A068:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A070;
L_0895A070:;
    a1 = s2 + 0;
    { u64 r_ = func_08945BD0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A078;
L_0895A078:;
    goto L_08959FC0;
L_0895A080:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A088;
L_0895A088:;
    a1 = s2 + 0;
    { u64 r_ = func_089463A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A090;
L_0895A090:;
    goto L_08959FC0;
L_0895A098:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A0A0;
L_0895A0A0:;
    a1 = s2 + 0;
    { u64 r_ = func_0894FD3C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A0A8;
L_0895A0A8:;
    goto L_08959FC0;
L_0895A0B0:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A0B8;
L_0895A0B8:;
    a1 = s2 + 0;
    { u64 r_ = func_08941E44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A0C0;
L_0895A0C0:;
    goto L_08959FC0;
L_0895A0C8:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A0D0;
L_0895A0D0:;
    a1 = s2 + 0;
    { u64 r_ = func_08945D38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A0D8;
L_0895A0D8:;
    goto L_08959FC0;
L_0895A0E0:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A0E8;
L_0895A0E8:;
    a1 = s2 + 0;
    { u64 r_ = func_089471D4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A0F0;
L_0895A0F0:;
    goto L_08959FC0;
L_0895A0F8:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A100;
L_0895A100:;
    a1 = s2 + 0;
    { rv_t r_ = func_0894A79C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A108;
L_0895A108:;
    goto L_08959FC0;
L_0895A110:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A118;
L_0895A118:;
    a1 = s2 + 0;
    { u64 r_ = func_08949A8C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A120;
L_0895A120:;
    goto L_08959FC0;
L_0895A128:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A130;
L_0895A130:;
    a1 = s2 + 0;
    { u64 r_ = func_0894AE58(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A138;
L_0895A138:;
    goto L_08959FC0;
L_0895A140:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A148;
L_0895A148:;
    a1 = s2 + 0;
    { u64 r_ = func_0894A300(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A150;
L_0895A150:;
    goto L_08959FC0;
L_0895A158:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A160;
L_0895A160:;
    a1 = s2 + 0;
    { rv_t r_ = func_089466F4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A168;
L_0895A168:;
    goto L_08959FC0;
L_0895A170:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A178;
L_0895A178:;
    a1 = s2 + 0;
    { rv_t r_ = func_08947744(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A180;
L_0895A180:;
    goto L_08959FC0;
L_0895A188:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A190;
L_0895A190:;
    a1 = s2 + 0;
    { rv_t r_ = func_08947D6C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A198;
L_0895A198:;
    goto L_08959FC0;
L_0895A1A0:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A1A8;
L_0895A1A8:;
    a1 = s2 + 0;
    { rv_t r_ = func_0894843C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A1B0;
L_0895A1B0:;
    goto L_08959FC0;
L_0895A1B8:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A1C0;
L_0895A1C0:;
    a1 = s2 + 0;
    { rv_t r_ = func_0894B660(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A1C8;
L_0895A1C8:;
    goto L_08959FC0;
L_0895A1D0:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A1D8;
L_0895A1D8:;
    a1 = s2 + 0;
    { rv_t r_ = func_0894C07C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A1E0;
L_0895A1E0:;
    goto L_08959FC0;
L_0895A1E8:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A1F0;
L_0895A1F0:;
    a1 = s2 + 0;
    { rv_t r_ = func_0894CCC4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A1F8;
L_0895A1F8:;
    goto L_08959FC0;
L_0895A200:;
    cnd_ = a1 == 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_08959FC0; }
    goto L_0895A208;
L_0895A208:;
    a1 = s2 + 0;
    { rv_t r_ = func_0894E3AC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A210;
L_0895A210:;
    goto L_08959FC0;
}

/* 0895A218 */
u32 func_0895A218(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0895A218:;
    sp = sp - 112;
    s2 = a0 + 0;
    s0 = a1 + 0;
    f21 = f13;
    a0 = LD32(a0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A260;
L_0895A260:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v0 = LD32(a1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A280;
L_0895A280:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f4 = f4 - f5;
    f2 = f2 - f1;
    f3 = f3 - f0;
    {u32 a_=sp+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f5 = BITSF(0);
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[9]=BITSF(v1);}
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp, FBITS(f2));
    v0 = 0 + 0;
    fcc = FCMP(f0, f5, 2);
    ST32(sp+4, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[12]=d0;}
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_0895A330; }
    goto L_0895A2EC;
L_0895A2EC:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[12];float d0=s0/t0;v[0]=d0;}
    {v1=FBITS(v[12]);}
    f4 = BITSF(v1);
    f5 = f4;
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[0]);}
    f2 = BITSF(v1);
    ST32(sp+24, FBITS(f3));
    {v1=FBITS(v[1]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f3));
    goto L_0895A330;
L_0895A330:;
    fcc = FCMP(f20, f5, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s2+48); goto L_0895A360; }
    goto L_0895A340;
L_0895A340:;
    sp = sp + 112;
    return v0;
L_0895A360:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A37C;
L_0895A37C:;
    f4 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+20));
    {u32 a_=sp+(48);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = FBITS(f2);
    v0 = FBITS(f3);
    {v[4]=BITSF(v1);}
    {u32 a_=sp+(64);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[5]=BITSF(v0);}
    v1 = FBITS(f4);
    v0 = LD32(sp);
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(sp+4);
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f2));
    v0 = 0 + 0;
    fcc = FCMP(f0, f21, 12);
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0895A340; }
    goto L_0895A3E4;
L_0895A3E4:;
    v0 = 1;
    goto L_0895A340;
}

/* 0895A3EC */
void func_0895A3EC(float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    float *v = vfpu_v;
L_0895A3EC:;
    v0 = D_08AEDE38 - (-8648);
    f1 = BITSF(LD32(v0-8648));
    v0 = D_08AEDE3C - (-8644);
    f0 = BITSF(LD32(v0-8644));
    f1 = f12 * f1;
    v0 = D_08AEDE4C - (-8628);
    f4 = BITSF(LD32(v0-8628));
    v0 = D_08AEDE44 - (-8636);
    f1 = f1 + f0;
    f2 = BITSF(LD32(v0-8636));
    v0 = D_08AEDE40 - (-8640);
    f0 = BITSF(LD32(v0-8640));
    {v[0]=0.63661977236f;}
    f2 = f12 * f2;
    f1 = f1 * f0;
    f4 = f12 * f4;
    f12 = f12 + f12;
    v1 = D_08C27B64 - (31588);
    v0 = FBITS(f1);
    {v[4]=BITSF(v0);}
    v0 = D_08AEDE34 - (-8652);
    f0 = BITSF(LD32(v0-8652));
    {float s0=v[4];float t0=v[0];float d0=s0*t0;v[0]=d0;}
    v0 = D_08AEDE50 - (-8624);
    f12 = f12 + f0;
    f0 = BITSF(LD32(v0-8624));
    v0 = D_08AEDE54 - (-8620);
    f3 = BITSF(LD32(v0-8620));
    v0 = D_08AEDE48 - (-8632);
    f1 = BITSF(LD32(v0-8632));
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    f4 = f4 + f0;
    f1 = f1 - f2;
    {v0=FBITS(v[0]);}
    f3 = f3 - f2;
    f0 = BITSF(v0);
    v0 = D_08B1B748 - (-18616);
    ST32(v0-18616, FBITS(f12));
    v0 = D_08B1B74C - (-18612);
    ST32(v1+31588, FBITS(f0));
    v1 = D_08B1B750 - (-18608);
    ST32(v0-18612, FBITS(f1));
    v0 = D_08B1B754 - (-18604);
    ST32(v1-18608, FBITS(f4));
    ST32(v0-18604, FBITS(f3));
    return;
}

/* 0895A4A4 */
rv_t func_0895A4A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f7 = 0, f8 = 0, f10 = 0;
    int cnd_;
    float *v = vfpu_v;
L_0895A4A4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t1 = D_08C27AA8 - (31400);
    t2 = D_08C27AB8 - (31416);
    t3 = D_08C27AC8 - (31432);
    a1 = a1 & a0;
    {v[12]=0.63661977236f;}
    a2 = t1 + 31400;
    a3 = t2 + 31416;
    cnd_ = a1 == 0;
    t0 = t3 + 31432;
    if (cnd_) { goto L_0895A5D0; }
    goto L_0895A4D8;
L_0895A4D8:;
    v0 = D_08AEDE60 - (-8608);
    f0 = BITSF(LD32(v0-8608));
    v0 = D_08AEDE5C - (-8612);
    f10 = BITSF(LD32(v0-8612));
    v0 = D_08AEDE64 - (-8604);
    f8 = BITSF(LD32(v0-8604));
    f10 = f10 * f0;
    v1 = D_08AEDE58 - (-8616);
    f8 = f8 * f0;
    f1 = BITSF(LD32(v1-8616));
    v0 = FBITS(f10);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[0]=BITSF(v0);}
    v0 = 179;
    f0 = BITSF(v0);
    v0 = 108;
    {float s0=v[0];float t0=v[12];float d0=s0*t0;v[4]=d0;}
    f7 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 80;
    {float s0=v[8];float t0=v[12];float d0=s0*t0;v[0]=d0;}
    f5 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 255;
    f7 = f7 * f1;
    f3 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    v0 = 47;
    f5 = f5 * f1;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    f3 = f3 * f1;
    {float s0=v[0];float d0=cosf(s0*1.57079632679f);v[0]=d0;}
    f4 = (float)(s32)FBITS(f0);
    f2 = f2 * f1;
    {v0=FBITS(v[0]);}
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    f4 = f4 * f1;
    f0 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f1 = BITSF(v0);
    v1 = D_08C27B64 - (31588);
    v0 = D_08C27B5C - (31580);
    ST32(t0+12, FBITS(f2));
    ST32(v0+31580, FBITS(f0));
    v0 = D_08C27B58 - (31576);
    ST32(v1+31588, FBITS(f1));
    v1 = D_08C27B60 - (31584);
    ST32(a2+4, FBITS(f5));
    ST32(a2+12, FBITS(f2));
    ST32(a3+4, FBITS(f4));
    ST32(a3+12, FBITS(f2));
    ST32(t1+31400, FBITS(f3));
    ST32(v0+31576, FBITS(f10));
    ST32(v1+31584, FBITS(f8));
    ST32(t2+31416, FBITS(f7));
    ST32(a2+8, FBITS(f7));
    ST32(t3+31432, FBITS(f2));
    ST32(a3+8, FBITS(f4));
    ST32(t0+4, FBITS(f2));
    ST32(t0+8, FBITS(f2));
    goto L_0895A5D0;
L_0895A5D0:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895A5D8 */
float func_0895A5D8(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0895A5D8:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0895A604; }
    goto L_0895A5F0;
L_0895A5F0:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0895A604; }
    goto L_0895A604;
L_0895A604:;
    return f0;
}

/* 0895A60C */
rv_t func_0895A60C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895A60C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895A4A4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A620;
L_0895A620:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895A62C */
void func_0895A62C(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895A62C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08957080(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0895A640;
L_0895A640:;
    v0 = D_08AEDE68 - (-8600);
    f0 = BITSF(LD32(v0-8600));
    v0 = D_08AEDE6C - (-8596);
    ST32(s0+84, 0);
    a1 = D_08B45A9C - (23196);
    v1 = a1 + 23196;
    ST32(s0+76, FBITS(f0));
    a2 = s0 + 96;
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0-8596));
    v0 = D_08AEDE70 - (-8592);
    ST32(s0+92, 0);
    ST32(s0+80, FBITS(f0));
    f0 = BITSF(LD32(v0-8592));
    v0 = D_08AF9450 - (-27568);
    v0 = v0 - 27568;
    ST32(s0+88, FBITS(f0));
    f2 = BITSF(LD32(a1+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    a1 = LD32(s0+44);
    ST32(s0, v0);
    v0 = 999;
    ST32(a2+8, FBITS(f0));
    ST32(s0+96, FBITS(f2));
    ST32(a2+4, FBITS(f1));
    cnd_ = a1 != 0;
    ST32(s0+108, v0);
    if (cnd_) { goto L_0895A6C0; }
    goto L_0895A6B0;
L_0895A6B0:;
    sp = sp + 16;
    return;
L_0895A6C0:;
    v0 = func_089577A8(a0);
    goto L_0895A6C8;
L_0895A6C8:;
    ST8(v0+32, 0);
    goto L_0895A6B0;
}

/* 0895A6D0 */
rv_t func_0895A6D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895A6D0:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089573AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895A6EC;
L_0895A6EC:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_0895A6F8;
L_0895A6F8:;
    a1 = 0x58470000u;
    a0 = s0 + 0;
    a1 = a1 | 0x80a7;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0895A70C;
L_0895A70C:;
    cnd_ = v0 == 0;
    a1 = 0x8fbf0000u;
    if (cnd_) { goto L_0895A738; }
    goto L_0895A714;
L_0895A714:;
    v0 = D_08AEDE80 - (-8576);
    f1 = BITSF(LD32(v0-8576));
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_0895A730; }
    goto L_0895A730;
L_0895A730:;
    ST32(s1+76, FBITS(f1));
    a1 = 0x8fbf0000u;
    goto L_0895A738;
L_0895A738:;
    a0 = s0 + 0;
    a1 = a1 | 0x2335;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0895A748;
L_0895A748:;
    cnd_ = v0 == 0;
    a1 = 0xbf8f0000u;
    if (cnd_) { goto L_0895A774; }
    goto L_0895A750;
L_0895A750:;
    v0 = D_08AEDE84 - (-8572);
    f1 = BITSF(LD32(v0-8572));
    f0 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_0895A76C; }
    goto L_0895A76C;
L_0895A76C:;
    ST32(s1+80, FBITS(f1));
    a1 = 0xbf8f0000u;
    goto L_0895A774;
L_0895A774:;
    a0 = s0 + 0;
    a1 = a1 | 0x289d;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0895A784;
L_0895A784:;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(sp+4));
    if (cnd_) { goto L_0895A790; }
    goto L_0895A78C;
L_0895A78C:;
    ST32(s1+88, FBITS(f0));
    goto L_0895A790;
L_0895A790:;
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895A798;
L_0895A798:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0895A7AC */
rv_t func_0895A7AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895A7AC:;
    v0 = LD32(a1);
    v1 = LD32(a1+4);
    {vr0=BITSF(v0);}
    v0 = LD32(a1+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    f2 = BITSF(0);
    sp = sp - 16;
    v0 = a0 + 96;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    f1 = BITSF(v1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+92, FBITS(f2)); goto L_0895A810; }
    goto L_0895A7F4;
L_0895A7F4:;
    f0 = BITSF(LD32(a0+80));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    f2 = f0;
    if (cnd_) { goto L_0895A80C; }
    goto L_0895A808;
L_0895A808:;
    f2 = BITSF(v1);
    goto L_0895A80C;
L_0895A80C:;
    ST32(a0+92, FBITS(f2));
    goto L_0895A810;
L_0895A810:;
    {float s0=vr4;float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    f1 = BITSF(0);
    f5 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a1));
    f4 = BITSF(LD32(a1+4));
    ST32(v0+8, FBITS(f5));
    v1 = FBITS(f3);
    {vr8=BITSF(v1);}
    v1 = FBITS(f4);
    {vr9=BITSF(v1);}
    v1 = FBITS(f5);
    {vr10=BITSF(v1);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(a0+96, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(v0+4, FBITS(f4));
    cnd_ = fcc;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    if (cnd_) { goto L_0895A898; }
    goto L_0895A860;
L_0895A860:;
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr0;float d0=s0/t0;v[12]=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v1=FBITS(vr0);}
    f2 = BITSF(v1);
    ST32(v0+8, FBITS(f3));
    {v1=FBITS(vr1);}
    ST32(a0+96, FBITS(f2));
    ST32(sp+4, v1);
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(v0+4, v1);
    goto L_0895A898;
L_0895A898:;
    sp = sp + 16;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[8]=vr8;v[9]=vr9;v[10]=vr10;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 0895A8A0 */
u64 func_0895A8A0(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0895A8A0:;
    sp = sp - 80;
    f20 = BITSF(0);
    a2 = a0 + 80;
    s1 = a0 + 0;
    a0 = sp + 16;
    s0 = a1 + 0;
    a1 = sp + 20;
    ST32(sp+16, FBITS(f12));
    ST32(sp+20, FBITS(f20));
    f0 = func_0895AB78(a0, a1, a2);
    goto L_0895A8D8;
L_0895A8D8:;
    {u32 a_=sp+(32);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(s1+92, FBITS(f0));
    v0 = s1 + 96;
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    ST32(v0+8, FBITS(f4));
    v1 = FBITS(f2);
    {v[8]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[9]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[10]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(s1+96, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    ST32(v0+4, FBITS(f3));
    cnd_ = fcc;
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    if (cnd_) { goto L_0895A964; }
    goto L_0895A92C;
L_0895A92C:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[0]);}
    f2 = BITSF(v1);
    ST32(v0+8, FBITS(f3));
    {v1=FBITS(v[1]);}
    ST32(s1+96, FBITS(f2));
    ST32(sp+4, v1);
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(v0+4, v1);
    goto L_0895A964;
L_0895A964:;
    sp = sp + 80;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0895A97C */
rv_t func_0895A97C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895A97C:;
    sp = sp - 32;
    s5 = D_08C278D8 - (30936);
    v0 = 0 + 0;
    s4 = a2 + 0;
    s3 = a0 + 0;
    a3 = LD32(s5+30936);
    a0 = LD32(a3+4);
    cnd_ = a0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0895AA28; }
    goto L_0895A9BC;
L_0895A9BC:;
    v0 = LD32(a3+16);
    v1 = LD32(a0);
    s2 = a0 + 0;
    v0 = v0 + 1;
    ST32(a3+4, v1);
    v1 = 1150;
    cnd_ = a1 == v1;
    ST32(a3+16, v0);
    if (cnd_) { goto L_0895AAA8; }
    goto L_0895A9DC;
L_0895A9DC:;
    v0 = a1 < 0x47fu;
    cnd_ = v0 == 0;
    v0 = 1151;
    if (cnd_) { goto L_0895AA78; }
    goto L_0895A9E8;
L_0895A9E8:;
    v0 = 1101;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0895AA4C; }
    goto L_0895A9F4;
L_0895A9F4:;
    v0 = LD32(s5+30936);
    goto L_0895A9F8;
L_0895A9F8:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    v1 = LD32(v0+16);
    a3 = LD32(v0+4);
    a2 = s4 + 0;
    v1 = v1 - 1;
    ST32(s2, a3);
    ST32(v0+16, v1);
    ST32(v0+4, s2);
    { rv_t r_ = func_089562E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AA20;
L_0895AA20:;
    s0 = v0 + 0;
    goto L_0895AA24;
L_0895AA24:;
    v0 = s0 + 0;
    goto L_0895AA28;
L_0895AA28:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895AA4C:;
    a1 = s3 + 0;
    { u64 r_ = func_089435A4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895AA54;
L_0895AA54:;
    cnd_ = s2 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0895A9F4; }
    goto L_0895AA5C;
L_0895AA5C:;
    cnd_ = s4 == 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_0895AA24; }
    goto L_0895AA64;
L_0895AA64:;
    a0 = s2 + 0;
    a2 = 1;
    { rv_t r_ = func_08921EFC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AA70;
L_0895AA70:;
    v0 = s0 + 0;
    goto L_0895AA28;
L_0895AA78:;
    cnd_ = a1 == v0;
    v0 = 1152;
    if (cnd_) { goto L_0895AA98; }
    goto L_0895AA80;
L_0895AA80:;
    cnd_ = a1 != v0;
    v0 = LD32(s5+30936);
    if (cnd_) { goto L_0895A9F8; }
    goto L_0895AA88;
L_0895AA88:;
    a1 = s3 + 0;
    f0 = func_089447AC(a0, a1);
    goto L_0895AA90;
L_0895AA90:;
    goto L_0895AA54;
L_0895AA98:;
    a1 = s3 + 0;
    { rv_t r_ = func_08943A4C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AAA0;
L_0895AAA0:;
    goto L_0895AA54;
L_0895AAA8:;
    a1 = s3 + 0;
    { rv_t r_ = func_08942834(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AAB0;
L_0895AAB0:;
    goto L_0895AA54;
}

/* 0895AAB8 */
rv_t func_0895AAB8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0895AAB8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27BC0 - (31680);
    t1 = D_08C27BD0 - (31696);
    t2 = D_08C27BE0 - (31712);
    a1 = a1 & a0;
    v1 = t0 + 31680;
    a2 = t1 + 31696;
    cnd_ = a1 == 0;
    a3 = t2 + 31712;
    if (cnd_) { goto L_0895AB70; }
    goto L_0895AAE8;
L_0895AAE8:;
    v0 = D_08AEDE88 - (-8568);
    f4 = BITSF(LD32(v0-8568));
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
    ST32(t0+31680, FBITS(f2));
    ST32(t1+31696, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+31712, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895AB70;
L_0895AB70:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895AB78 */
float func_0895AB78(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0895AB78:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0895ABA4; }
    goto L_0895AB90;
L_0895AB90:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0895ABA4; }
    goto L_0895ABA4;
L_0895ABA4:;
    return f0;
}

/* 0895ABAC */
rv_t func_0895ABAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895ABAC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895AAB8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895ABC0;
L_0895ABC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895ABCC */
void func_0895ABCC(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895ABCC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0895A62C(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0895ABE0;
L_0895ABE0:;
    v0 = D_08AEDE90 - (-8560);
    f0 = BITSF(LD32(v0-8560));
    v0 = D_08AF94B0 - (-27472);
    v0 = v0 - 27472;
    ST32(s0+112, FBITS(f0));
    ST32(s0, v0);
    sp = sp + 16;
    return;
}

/* 0895AC08 */
rv_t func_0895AC08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0895AC08:;
    sp = sp - 80;
    s0 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08922B58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AC24;
L_0895AC24:;
    v1 = 4;
    v0 = LD32(s0+16);
    v0 = v0 & 0x6;
    cnd_ = v0 == v1;
    a1 = s0 + 96;
    if (cnd_) { goto L_0895AC4C; }
    goto L_0895AC38;
L_0895AC38:;
    goto L_0895AC3C;
L_0895AC3C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0895AC4C:;
    a0 = LD32(a1+8);
    v0 = LD32(s0+96);
    v1 = LD32(a1+4);
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = BITSF(0);
    {v[0]=BITSF(v0);}
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    f12 = f20;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895AD40; }
    goto L_0895AC8C;
L_0895AC8C:;
    f2 = BITSF(LD32(s0+88));
    goto L_0895AC90;
L_0895AC90:;
    f3 = BITSF(LD32(s0+84));
    f1 = BITSF(LD32(s0+92));
    f0 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = f1 - f3;
    f0 = f0 * f20;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f2 = f2 * f20;
    if (cnd_) { goto L_0895ACC8; }
    goto L_0895ACB4;
L_0895ACB4:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    f0 = f2;
    if (cnd_) { goto L_0895ACC8; }
    goto L_0895ACC4;
L_0895ACC4:;
    f0 = f1;
    goto L_0895ACC8;
L_0895ACC8:;
    f0 = f3 + f0;
    a0 = LD32(s0+48);
    ST32(s0+84, FBITS(f0));
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895ACF0;
L_0895ACF0:;
    f5 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(s0+84));
    f1 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+20));
    f4 = f5 * f0;
    f2 = f1 * f0;
    f0 = f3 * f0;
    ST32(sp, FBITS(f1));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f4));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f5));
    a0 = LD32(s0+48);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AD38;
L_0895AD38:;
    goto L_0895AC3C;
L_0895AD40:;
    v1 = LD32(s0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AD50;
L_0895AD50:;
    f2 = BITSF(LD32(s0+88));
    goto L_0895AC90;
}

/* 0895AD58 */
rv_t func_0895AD58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895AD58:;
    sp = sp - 16;
    a3 = 0xb3910000u;
    t2 = 0xe1120000u;
    s0 = a0 + 0;
    a3 = a3 | 0x260c;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    t2 = t2 | 0x20ea;
    if (cnd_) { goto L_0895ADD4; }
    goto L_0895AD80;
L_0895AD80:;
    v1 = LD32(a0+48);
    t1 = 0x45230000u;
    t0 = 0x101b0000u;
    v0 = LD32(v1+204);
    t1 = t1 | 0x135e;
    t0 = t0 | 0x8a0d;
    v1 = v0 ^ a3;
    a3 = v0 ^ t2;
    t0 = v0 ^ t0;
    v1 = v1 < 0x1u;
    v0 = v0 ^ t1;
    a3 = a3 < 0x1u;
    v0 = v0 < 0x1u;
    t0 = t0 < 0x1u;
    v1 = v1 | a3;
    a2 = 0 + 0;
    a1 = 1056;
    cnd_ = v1 != 0;
    v0 = v0 | t0;
    if (cnd_) { goto L_0895AE10; }
    goto L_0895ADCC;
L_0895ADCC:;
    cnd_ = v0 != 0;
    a1 = 1055;
    if (cnd_) { goto L_0895ADE4; }
    goto L_0895ADD4;
L_0895ADD4:;
    goto L_0895ADD8;
L_0895ADD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895ADE4:;
    v1 = LD32(a0);
    goto L_0895ADE8;
L_0895ADE8:;
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895ADF4;
L_0895ADF4:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895ADD4; }
    goto L_0895AE00;
L_0895AE00:;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AE08;
L_0895AE08:;
    goto L_0895ADD8;
L_0895AE10:;
    v0 = D_08AEDE94 - (-8556);
    f0 = BITSF(LD32(v0-8556));
    v1 = LD32(a0);
    ST32(a0+112, FBITS(f0));
    goto L_0895ADE8;
}

/* 0895AE24 */
rv_t func_0895AE24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6];
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 352);
L_0895AE24:;
    sp = sp - 352;
    s1 = a0 + 0;
    s0 = a1 + 0;
    f21 = BITSF(0);
    a0 = LD32(a0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    f22 = f12;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AE70;
L_0895AE70:;
    a0 = LD32(s1+48);
    f20 = BITSF(LD32(v0+8));
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895AE94;
L_0895AE94:;
    f2 = BITSF(LD32(v0+32));
    v1 = FBITS(f20);
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    t0 = FBITS(f2);
    {v[12]=BITSF(v1);}
    v1 = 0 + 0;
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(t0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f20));
    fcc = FCMP(f0, f21, 2);
    ST32(sp+4, FBITS(f21));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0895AF0C; }
    goto L_0895AED4;
L_0895AED4:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {t0=FBITS(vr2);}
    f3 = BITSF(t0);
    {v0=FBITS(vr0);}
    {t0=FBITS(vr1);}
    ST32(sp+16, v0);
    ST32(sp+20, t0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v0);
    ST32(sp+4, t0);
    ST32(sp+8, FBITS(f3));
    goto L_0895AF0C;
L_0895AF0C:;
    f6 = BITSF(LD32(s0+8));
    f5 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    t0 = FBITS(f3);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[13]=BITSF(t0);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[16]=sum;}
    {t0=FBITS(v[16]);}
    f0 = BITSF(t0);
    v0 = 0xbf800000u;
    {u32 a_=sp+(176);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f21, 2);
    {v[8]=BITSF(v1);}
    a1 = LD32(sp);
    {v[9]=BITSF(v0);}
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[10]=BITSF(v1);}
    {vr0=BITSF(a1);}
    a2 = LD32(sp+4);
    a3 = LD32(sp+8);
    {vr1=BITSF(a2);}
    {vr2=BITSF(a3);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr6);}
    f4 = BITSF(v0);
    v0 = D_08AEDE98 - (-8552);
    f0 = BITSF(LD32(v0-8552));
    {v1=FBITS(vr4);}
    {t0=FBITS(vr5);}
    ST32(sp+36, FBITS(f0));
    ST32(sp+16, v1);
    ST32(sp+20, t0);
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f21));
    ST32(sp+40, FBITS(f21));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f6));
    if (cnd_) { goto L_0895AFEC; }
    goto L_0895AFB8;
L_0895AFB8:;
    {float s0=v[16];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    {v1=FBITS(vr0);}
    {t0=FBITS(vr1);}
    ST32(sp+32, v1);
    ST32(sp+36, t0);
    ST32(sp+40, v0);
    ST32(sp+48, v1);
    ST32(sp+52, t0);
    ST32(sp+56, v0);
    goto L_0895AFEC;
L_0895AFEC:;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {u32 a_=sp+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    a0 = LD32(sp+56);
    {vr5=BITSF(v1);}
    v0 = LD32(sp+24);
    v1 = LD32(sp+52);
    {vr6=BITSF(v0);}
    v0 = LD32(sp+48);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {t0=FBITS(vr4);}
    f0 = BITSF(t0);
    ST32(sp+64, FBITS(f21));
    fcc = FCMP(f21, f0, 12);
    ST32(sp+68, FBITS(f21));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f21));
    if (cnd_) { goto L_0895B2F4; }
    goto L_0895B044;
L_0895B044:;
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {vr0=BITSF(a1);}
    {vr5=BITSF(v1);}
    {vr1=BITSF(a2);}
    {vr6=BITSF(a0);}
    {vr2=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f1 = BITSF(v0);
    v0 = D_08AEDE9C - (-8548);
    f0 = BITSF(LD32(v0-8548));
    f0 = f0 - f1;
    ST32(sp+68, FBITS(f0));
    goto L_0895B080;
L_0895B080:;
    f2 = BITSF(LD32(sp+68));
    v0 = D_08AEDEA0 - (-8544);
    f0 = BITSF(LD32(v0-8544));
    t0 = FBITS(f2);
    t0 = (t0 >> 0) & 0x7fffffff;
    f1 = BITSF(t0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    s2 = 1;
    if (cnd_) { goto L_0895B2CC; }
    goto L_0895B0A8;
L_0895B0A8:;
    v1 = D_08AEDEA4 - (-8540);
    f1 = BITSF(LD32(v1-8540));
    v0 = D_08AEDEA8 - (-8536);
    f3 = BITSF(LD32(v0-8536));
    f1 = f2 * f1;
    {u32 a_=sp+(304);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    s2 = 0 + 0;
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f1);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+68, FBITS(f1));
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    {float s0=vr0;float d0=(float)((s0>0)-(s0<0));vr0=d0;}
    {v1=FBITS(vr0);}
    fcc = FCMP(f3, f2, 14);
    f1 = BITSF(v1);
    cnd_ = !fcc;
    if (cnd_) { f2 = f3; goto L_0895B0F8; }
    goto L_0895B0F8;
L_0895B0F8:;
    f0 = BITSF(LD32(s1+112));
    f2 = f2 * f1;
    a0 = sp + 68;
    f0 = f0 * f22;
    a1 = sp + 128;
    a2 = sp + 132;
    ST32(sp+68, FBITS(f2));
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    s0 = D_08C27D28 - (32040);
    ST32(sp+132, FBITS(f0));
    ST32(sp+128, FBITS(f1));
    f0 = func_0895B520(a0, a1, a2);
    goto L_0895B128;
L_0895B128:;
    a0 = D_08C27D20 - (32032);
    v0 = (u32)(s32)LD_S8(a0+32032);
    cnd_ = v0 != 0;
    ST32(sp+68, FBITS(f0));
    if (cnd_) { goto L_0895B194; }
    goto L_0895B138;
L_0895B138:;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f8 = BITSF(LD32(v1+23208));
    v0 = s0 + 32040;
    v1 = 1;
    ST32(v0+32, FBITS(f0));
    ST32(s0+32040, FBITS(f8));
    ST8(a0+32032, v1);
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    goto L_0895B194;
L_0895B194:;
    s1 = LD32(s1+48);
    s0 = s0 + 32040;
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
    {ST32(s0+(0),FBITS(v[96]));}
    {ST32(s0+(4),FBITS(v[97]));}
    {ST32(s0+(8),FBITS(v[98]));}
    {ST32(s0+(12),FBITS(v[100]));}
    {ST32(s0+(16),FBITS(v[101]));}
    {ST32(s0+(20),FBITS(v[102]));}
    {ST32(s0+(24),FBITS(v[104]));}
    {ST32(s0+(28),FBITS(v[105]));}
    {ST32(s0+(32),FBITS(v[106]));}
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B248;
L_0895B248:;
    {v[112]=BITSF(LD32(s0+(0)));}
    {v[113]=BITSF(LD32(s0+(4)));}
    {v[114]=BITSF(LD32(s0+(8)));}
    {v[116]=BITSF(LD32(s0+(12)));}
    {v[117]=BITSF(LD32(s0+(16)));}
    {v[118]=BITSF(LD32(s0+(20)));}
    {v[120]=BITSF(LD32(s0+(24)));}
    {v[121]=BITSF(LD32(s0+(28)));}
    {v[122]=BITSF(LD32(s0+(32)));}
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
    {ST32(sp+(80),FBITS(v[80]));}
    {ST32(sp+(84),FBITS(v[81]));}
    {ST32(sp+(88),FBITS(v[82]));}
    {ST32(sp+(92),FBITS(v[84]));}
    {ST32(sp+(96),FBITS(v[85]));}
    {ST32(sp+(100),FBITS(v[86]));}
    {ST32(sp+(104),FBITS(v[88]));}
    {ST32(sp+(108),FBITS(v[89]));}
    {ST32(sp+(112),FBITS(v[90]));}
    v0 = LD32(s1);
    a0 = s1 + 0;
    v1 = LD32(v0+36);
    t_ = v1;
    a1 = sp + 80;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B2CC;
L_0895B2CC:;
    v0 = s2 + 0;
    sp = sp + 352;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;return (rv_t){ v0, v1, f0 }; }
L_0895B2F4:;
    {u32 a_=sp+(272);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    v0 = D_08AEDE9C - (-8548);
    {vr5=BITSF(v1);}
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr6=BITSF(a0);}
    {vr0=BITSF(a1);}
    f0 = BITSF(LD32(v0-8548));
    {vr1=BITSF(a2);}
    {vr2=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v1=FBITS(vr4);}
    f1 = BITSF(v1);
    f1 = f1 - f0;
    ST32(sp+68, FBITS(f1));
    goto L_0895B080;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;
}

/* 0895B334 */
u32 func_0895B334(void)
{
    u32 v0 = 0;
L_0895B334:;
    v0 = 40;
    return v0;
}

/* 0895B33C */
rv_t func_0895B33C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895B33C:;
    sp = sp - 32;
    s5 = D_08C278D8 - (30936);
    v0 = 0 + 0;
    s4 = a2 + 0;
    s3 = a0 + 0;
    a3 = LD32(s5+30936);
    a0 = LD32(a3+4);
    cnd_ = a0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0895B3E8; }
    goto L_0895B37C;
L_0895B37C:;
    v0 = LD32(a3+16);
    v1 = LD32(a0);
    s2 = a0 + 0;
    v0 = v0 + 1;
    ST32(a3+4, v1);
    v1 = 1056;
    cnd_ = a1 == v1;
    ST32(a3+16, v0);
    if (cnd_) { goto L_0895B450; }
    goto L_0895B39C;
L_0895B39C:;
    v0 = a1 < 0x421u;
    cnd_ = v0 == 0;
    v0 = 1110;
    if (cnd_) { goto L_0895B438; }
    goto L_0895B3A8;
L_0895B3A8:;
    v0 = 1055;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0895B40C; }
    goto L_0895B3B4;
L_0895B3B4:;
    v0 = LD32(s5+30936);
    goto L_0895B3B8;
L_0895B3B8:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    v1 = LD32(v0+16);
    a3 = LD32(v0+4);
    a2 = s4 + 0;
    v1 = v1 - 1;
    ST32(s2, a3);
    ST32(v0+16, v1);
    ST32(v0+4, s2);
    { rv_t r_ = func_0895A97C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B3E0;
L_0895B3E0:;
    s0 = v0 + 0;
    goto L_0895B3E4;
L_0895B3E4:;
    v0 = s0 + 0;
    goto L_0895B3E8;
L_0895B3E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895B40C:;
    a1 = s3 + 0;
    { u64 r_ = func_0894EE6C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895B414;
L_0895B414:;
    cnd_ = s2 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0895B3B4; }
    goto L_0895B41C;
L_0895B41C:;
    cnd_ = s4 == 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_0895B3E4; }
    goto L_0895B424;
L_0895B424:;
    a0 = s2 + 0;
    a2 = 1;
    { rv_t r_ = func_08921EFC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B430;
L_0895B430:;
    v0 = s0 + 0;
    goto L_0895B3E8;
L_0895B438:;
    cnd_ = a1 != v0;
    v0 = LD32(s5+30936);
    if (cnd_) { goto L_0895B3B8; }
    goto L_0895B440;
L_0895B440:;
    a1 = s3 + 0;
    { u64 r_ = func_0894F32C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895B448;
L_0895B448:;
    goto L_0895B414;
L_0895B450:;
    a1 = s3 + 0;
    { u64 r_ = func_0894F0CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895B458;
L_0895B458:;
    goto L_0895B414;
}

/* 0895B460 */
rv_t func_0895B460(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0895B460:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27C70 - (31856);
    t1 = D_08C27C80 - (31872);
    t2 = D_08C27C90 - (31888);
    a1 = a1 & a0;
    v1 = t0 + 31856;
    a2 = t1 + 31872;
    cnd_ = a1 == 0;
    a3 = t2 + 31888;
    if (cnd_) { goto L_0895B518; }
    goto L_0895B490;
L_0895B490:;
    v0 = D_08AEDEAC - (-8532);
    f4 = BITSF(LD32(v0-8532));
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
    ST32(t0+31856, FBITS(f2));
    ST32(t1+31872, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+31888, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895B518;
L_0895B518:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895B520 */
float func_0895B520(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0895B520:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0895B54C; }
    goto L_0895B538;
L_0895B538:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0895B54C; }
    goto L_0895B54C;
L_0895B54C:;
    return f0;
}

/* 0895B554 */
rv_t func_0895B554(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895B554:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895B460(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B568;
L_0895B568:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895B574 */
void func_0895B574(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895B574:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08957080(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0895B588;
L_0895B588:;
    v0 = D_08AEDEC0 - (-8512);
    f0 = BITSF(LD32(v0-8512));
    v0 = D_08AEDEC4 - (-8508);
    ST32(s0+92, 0);
    a2 = D_08B45A9C - (23196);
    a1 = a2 + 23196;
    ST32(s0+76, FBITS(f0));
    v1 = s0 + 100;
    a0 = s0 + 0;
    f0 = BITSF(LD32(v0-8508));
    v0 = D_08AEDEC8 - (-8504);
    ST32(s0+96, 0);
    ST32(s0+80, FBITS(f0));
    f0 = BITSF(LD32(v0-8504));
    v0 = D_08AEDECC - (-8500);
    ST32(s0+84, FBITS(f0));
    f0 = BITSF(LD32(v0-8500));
    v0 = D_08AF9510 - (-27376);
    v0 = v0 - 27376;
    ST32(s0+88, FBITS(f0));
    f2 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    a2 = LD32(s0+44);
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f1));
    ST32(s0, v0);
    ST32(s0+100, FBITS(f2));
    cnd_ = a2 != 0;
    ST32(s0+112, 0);
    if (cnd_) { goto L_0895B610; }
    goto L_0895B600;
L_0895B600:;
    sp = sp + 16;
    return;
L_0895B610:;
    v0 = func_089577A8(a0);
    goto L_0895B618;
L_0895B618:;
    ST8(v0+32, 0);
    goto L_0895B600;
}

/* 0895B620 */
rv_t func_0895B620(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895B620:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089571B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B634;
L_0895B634:;
    v0 = LD32(s0+112);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895B654; }
    goto L_0895B644;
L_0895B644:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895B654:;
    v0 = func_0895BB70(a0);
    goto L_0895B65C;
L_0895B65C:;
    v1 = LD32(v0+544);
    v1 = v1 | 0x8;
    ST32(v0+544, v1);
    goto L_0895B644;
}

/* 0895B66C */
rv_t func_0895B66C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895B66C:;
    sp = sp - 16;
    v1 = 1;
    v0 = LD32(a0+112);
    v0 = v0 & 0x9;
    cnd_ = v0 == v1;
    s1 = a0 + 0;
    if (cnd_) { goto L_0895B770; }
    goto L_0895B690;
L_0895B690:;
    a2 = LD32(s1+4);
    a0 = D_08C2ACF8 - (-21256);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 21256;
    if (cnd_) { goto L_0895B734; }
    goto L_0895B6A4;
L_0895B6A4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-21256);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0895B6F4; }
    goto L_0895B6C8;
L_0895B6C8:;
    a0 = LD32(a1);
    goto L_0895B6CC;
L_0895B6CC:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0895B750; }
    goto L_0895B6E4;
L_0895B6E4:;
    a1 = LD32(a1+4);
    goto L_0895B6E8;
L_0895B6E8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0895B6CC; }
    goto L_0895B6F0;
L_0895B6F0:;
    s0 = 0 + 0;
    goto L_0895B6F4;
L_0895B6F4:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0895B734; }
    goto L_0895B6FC;
L_0895B6FC:;
    a0 = s0 + 0;
    f0 = func_089B9F44(a0);
    goto L_0895B704;
L_0895B704:;
    ST32(s1+92, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089B9F74(a0);
    goto L_0895B710;
L_0895B710:;
    ST32(s1+96, FBITS(f0));
    a0 = s1 + 0;
    v0 = func_0895BB70(a0);
    goto L_0895B71C;
L_0895B71C:;
    f0 = BITSF(LD32(s1+92));
    a0 = s1 + 0;
    ST32(v0+552, FBITS(f0));
    v0 = func_0895BB70(a0);
    goto L_0895B72C;
L_0895B72C:;
    f0 = BITSF(LD32(s1+96));
    ST32(v0+556, FBITS(f0));
    goto L_0895B734;
L_0895B734:;
    a0 = s1 + 0;
    { rv_t r_ = func_089571FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B73C;
L_0895B73C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895B750:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0895B6E4; }
    goto L_0895B75C;
L_0895B75C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895B6E8; }
    goto L_0895B768;
L_0895B768:;
    goto L_0895B6F4;
L_0895B770:;
    v0 = func_0895BB70(a0);
    goto L_0895B778;
L_0895B778:;
    v1 = LD32(v0+544);
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(v0+544, v1);
    goto L_0895B690;
}

/* 0895B788 */
rv_t func_0895B788(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895B788:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_089573AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B7A4;
L_0895B7A4:;
    a0 = sp + 0;
    ST32(sp, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_0895B7B0;
L_0895B7B0:;
    a1 = 0x3c890000u;
    a0 = s0 + 0;
    a1 = a1 | 0xdd48;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0895B7C4;
L_0895B7C4:;
    cnd_ = v0 == 0;
    a1 = 0xe7e0000u;
    if (cnd_) { goto L_0895B7E0; }
    goto L_0895B7CC;
L_0895B7CC:;
    v0 = D_08AEDED0 - (-8496);
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(v0-8496));
    f0 = f0 * f1;
    ST32(s1+76, FBITS(f0));
    goto L_0895B7E0;
L_0895B7E0:;
    a0 = s0 + 0;
    a1 = a1 | 0xc6da;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0895B7F0;
L_0895B7F0:;
    cnd_ = v0 == 0;
    a1 = 0x3c890000u;
    if (cnd_) { goto L_0895B80C; }
    goto L_0895B7F8;
L_0895B7F8:;
    v0 = D_08AEDED0 - (-8496);
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(v0-8496));
    f0 = f0 * f1;
    ST32(s1+80, FBITS(f0));
    goto L_0895B80C;
L_0895B80C:;
    a0 = s0 + 0;
    a1 = a1 | 0xdd49;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0895B81C;
L_0895B81C:;
    cnd_ = v0 == 0;
    a1 = 0xe7e0000u;
    if (cnd_) { goto L_0895B838; }
    goto L_0895B824;
L_0895B824:;
    v0 = D_08AEDED0 - (-8496);
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(v0-8496));
    f0 = f0 * f1;
    ST32(s1+84, FBITS(f0));
    goto L_0895B838;
L_0895B838:;
    a0 = s0 + 0;
    a1 = a1 | 0xc6db;
    a2 = sp + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_0895B848;
L_0895B848:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+84)); goto L_0895B868; }
    goto L_0895B850;
L_0895B850:;
    v0 = D_08AEDED0 - (-8496);
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(v0-8496));
    f0 = f0 * f1;
    ST32(s1+88, FBITS(f0));
    f0 = BITSF(LD32(s1+84));
    goto L_0895B868;
L_0895B868:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_0895B890; }
    goto L_0895B87C;
L_0895B87C:;
    f0 = BITSF(LD32(s1+88));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_0895B890; }
    goto L_0895B890;
L_0895B890:;
    v0 = LD32(s1+112);
    v0 = (v0 & ~(0x1u << 2)) | ((v1 & 0x1) << 2);
    ST32(s1+112, v0);
    a0 = sp + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895B8A4;
L_0895B8A4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0895B8B8 */
rv_t func_0895B8B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895B8B8:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08922B58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B8D4;
L_0895B8D4:;
    v1 = 4;
    v0 = LD32(s0+16);
    v0 = v0 & 0x6;
    cnd_ = v0 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895B91C; }
    goto L_0895B8E8;
L_0895B8E8:;
    v0 = func_0895BB70(a0);
    goto L_0895B8F0;
L_0895B8F0:;
    f0 = BITSF(LD32(v0+552));
    a0 = s0 + 0;
    ST32(s0+92, FBITS(f0));
    v0 = func_0895BB70(a0);
    goto L_0895B900;
L_0895B900:;
    f0 = BITSF(LD32(v0+556));
    ST32(s0+96, FBITS(f0));
    goto L_0895B90C;
L_0895B90C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895B91C:;
    v0 = LD32(s0+112);
    v1 = v0 & 0x2;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0895B90C; }
    goto L_0895B930;
L_0895B930:;
    a1 = s0 + 100;
    f12 = f20;
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895B90C; }
    goto L_0895B940;
L_0895B940:;
    func_0895BF04(a0, a1, f12);
    goto L_0895B948;
L_0895B948:;
    a0 = s0 + 0;
    goto L_0895B8E8;
}

/* 0895B950 */
rv_t func_0895B950(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895B950:;
    sp = sp - 16;
    a1 = 1058;
    s0 = a0 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0895B980; }
    goto L_0895B970;
L_0895B970:;
    goto L_0895B974;
L_0895B974:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895B980:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B990;
L_0895B990:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895B970; }
    goto L_0895B99C;
L_0895B99C:;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895B9A4;
L_0895B9A4:;
    goto L_0895B974;
}

/* 0895B9AC */
u64 func_0895B9AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895B9AC:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a0 + 0;
    v0 = LD32(a0+112);
    v1 = v0 + 0;
    v1 = (v1 & ~(0x1u << 0)) | ((a1 & 0x1) << 0);
    v0 = v0 & 0x1;
    cnd_ = v0 == a1;
    a3 = v1 & 0x1;
    if (cnd_) { goto L_0895B9FC; }
    goto L_0895B9DC;
L_0895B9DC:;
    a2 = 1;
    cnd_ = a3 == 0;
    ST32(a0+112, v1);
    if (cnd_) { goto L_0895BA10; }
    goto L_0895B9E8;
L_0895B9E8:;
    v0 = func_0895BB70(a0);
    goto L_0895B9F0;
L_0895B9F0:;
    v1 = LD32(v0+544);
    v1 = v1 | 0x8;
    goto L_0895B9F8;
L_0895B9F8:;
    ST32(v0+544, v1);
    goto L_0895B9FC;
L_0895B9FC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0895BA10:;
    a1 = LD32(a0+4);
    a0 = D_08C2ACF8 - (-21256);
    a0 = a0 - 21256;
    { u64 r_ = func_08ABF584(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895BA20;
L_0895BA20:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895BA90; }
    goto L_0895BA2C;
L_0895BA2C:;
    f0 = func_089B9F44(a0);
    goto L_0895BA34;
L_0895BA34:;
    ST32(s1+92, FBITS(f0));
    a0 = s0 + 0;
    f0 = func_089B9F74(a0);
    goto L_0895BA40;
L_0895BA40:;
    v0 = D_08AEDED4 - (-8492);
    f1 = f0;
    ST32(s1+96, FBITS(f0));
    f0 = BITSF(LD32(v0-8492));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_0895BA70; }
    goto L_0895BA60;
L_0895BA60:;
    v0 = D_08AEDED8 - (-8488);
    f0 = BITSF(LD32(v0-8488));
    f0 = f1 - f0;
    ST32(s1+96, FBITS(f0));
    goto L_0895BA70;
L_0895BA70:;
    v0 = func_0895BB70(a0);
    goto L_0895BA78;
L_0895BA78:;
    f0 = BITSF(LD32(s1+92));
    a0 = s1 + 0;
    ST32(v0+552, FBITS(f0));
    v0 = func_0895BB70(a0);
    goto L_0895BA88;
L_0895BA88:;
    f0 = BITSF(LD32(s1+96));
    ST32(v0+556, FBITS(f0));
    goto L_0895BA90;
L_0895BA90:;
    a0 = s1 + 0;
    v0 = func_0895BB70(a0);
    goto L_0895BA98;
L_0895BA98:;
    v1 = LD32(v0+544);
    v1 = (v1 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    goto L_0895B9F8;
}

/* 0895BAA4 */
void func_0895BAA4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0895BAA4:;
    sp = sp - 48;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0895B9AC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895BAC4;
L_0895BAC4:;
    f1 = BITSF(0);
    v0 = LD32(s1+112);
    v1 = s1 + 100;
    v0 = v0 | 0x2;
    ST32(s1+112, v0);
    f5 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f4 = BITSF(LD32(s0+4));
    {u32 a_=sp+(16);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(s1+100, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(v1+4, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    cnd_ = fcc;
    ST32(v1+8, FBITS(f5));
    if (cnd_) { goto L_0895BB5C; }
    goto L_0895BB24;
L_0895BB24:;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[0];float d0=s0/t0;v[12]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[12];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(v1+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(s1+100, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    ST32(v1+4, v0);
    goto L_0895BB5C;
L_0895BB5C:;
    sp = sp + 48;
    return;
}

/* 0895BB70 */
u32 func_0895BB70(u32 a0)
{
    u32 v0 = 0;
L_0895BB70:;
    v0 = LD32(a0+48);
    return v0;
}

/* 0895BB78 */
rv_t func_0895BB78(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr48 = v[48], vr49 = v[49], vr50 = v[50], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr121 = v[121], vr122 = v[122], vr126 = v[126], vr127 = v[127];
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_0895BB78:;
    sp = sp - 288;
    a2 = 1;
    s1 = a1 + 0;
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = LD32(a0+4);
    a0 = D_08C2ACF8 - (-21256);
    a0 = a0 - 21256;
    a1 = v0 + 0;
    { u64 r_ = func_08ABF584(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895BBB4;
L_0895BBB4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0895BD4C; }
    goto L_0895BBBC;
L_0895BBBC:;
    a0 = v0 + 0;
    f0 = func_089B9F44(a0);
    goto L_0895BBC4;
L_0895BBC4:;
    a0 = s0 + 0;
    ST32(sp, FBITS(f0));
    f0 = func_089B9F74(a0);
    goto L_0895BBD0;
L_0895BBD0:;
    a0 = s0 + 0;
    ST32(sp+4, FBITS(f0));
    a1 = sp + 64;
    ST32(sp+8, 0);
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr115=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr115;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);v[120]=d0;vr121=d1;vr122=d2;}
    {float s0=v[120];float t0=vr121;float d0=s0*t0;vr115=d0;}
    {float s0=vr115;float t0=vr122;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[96]=t;}
    {float s0=vr115;float t0=vr118;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float d0=-s0;float d1=-s1;vr126=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;v[97]=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;v[98]=d0;}
    {float s0=vr116;float t0=vr122;float d0=s0*t0;v[100]=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=v[120];float d0=-s0;v[102]=d0;}
    {float s0=v[120];float t0=vr117;float d0=s0*t0;v[124]=d0;}
    {float s0=v[124];float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=v[124];float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;v[106]=d0;}
    {ST32(sp+(16),FBITS(v[96]));}
    {ST32(sp+(20),FBITS(v[97]));}
    {ST32(sp+(24),FBITS(v[98]));}
    {ST32(sp+(28),FBITS(v[100]));}
    {ST32(sp+(32),FBITS(v[101]));}
    {ST32(sp+(36),FBITS(v[102]));}
    {ST32(sp+(40),FBITS(v[104]));}
    {ST32(sp+(44),FBITS(v[105]));}
    {ST32(sp+(48),FBITS(v[106]));}
    f2 = BITSF(LD32(sp+48));
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+24));
    ST32(s1+8, FBITS(f2));
    ST32(s1, FBITS(f0));
    ST32(s1+4, FBITS(f1));
    { rv_t r_ = ({ v[48]=vr48;v[49]=vr49;v[50]=vr50;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;__auto_type vr_t_ = func_089B6D88(a0, a1, 0, 0, 0); vr48=v[48];vr49=v[49];vr50=v[50];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr121=v[121];vr122=v[122];vr126=v[126];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BC8C;
L_0895BC8C:;
    {u32 a_=sp+(256);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+64);
    v0 = LD32(sp+68);
    {u32 a_=sp+(160);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {vr48=BITSF(v1);}
    {u32 a_=sp+(192);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+72);
    {vr49=BITSF(v0);}
    {u32 a_=sp+(144);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+80);
    {vr50=BITSF(v1);}
    v1 = LD32(sp+76);
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(176);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {vr48=BITSF(v1);}
    v1 = LD32(sp+84);
    {vr49=BITSF(v0);}
    v0 = LD32(sp+92);
    {vr50=BITSF(v1);}
    v1 = LD32(sp+88);
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+96);
    {v[33]=BITSF(v0);}
    v0 = LD32(s1+4);
    {v[34]=BITSF(v1);}
    v1 = LD32(s1);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(s1+8);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(s1+8, FBITS(f3));
    {v0=FBITS(v[17]);}
    ST32(s1, FBITS(f2));
    ST32(s1+4, v0);
    ST32(sp+128, FBITS(f2));
    ST32(sp+132, v0);
    ST32(sp+136, FBITS(f3));
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f3));
    goto L_0895BD4C;
L_0895BD4C:;
    sp = sp + 288;
    { v[48]=vr48;v[49]=vr49;v[50]=vr50;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
    v[48]=vr48;v[49]=vr49;v[50]=vr50;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[121]=vr121;v[122]=vr122;v[126]=vr126;v[127]=vr127;
}

/* 0895BD60 */
rv_t func_0895BD60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895BD60:;
    sp = sp - 32;
    s2 = a0 + 0;
    a2 = 1;
    s1 = a1 + 0;
    v0 = LD32(a0+4);
    a0 = D_08C2ACF8 - (-21256);
    a0 = a0 - 21256;
    a1 = v0 + 0;
    { u64 r_ = func_08ABF584(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895BD94;
L_0895BD94:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895BDB8; }
    goto L_0895BDA0;
L_0895BDA0:;
    v1 = LD32(v0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BDB0;
L_0895BDB0:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895BE10; }
    goto L_0895BDB8;
L_0895BDB8:;
    a0 = s2 + 0;
    v0 = func_0895BB70(a0);
    goto L_0895BDC0;
L_0895BDC0:;
    v1 = LD32(v0);
    a0 = LD32(v1-12);
    v0 = v0 + a0;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BDE0;
L_0895BDE0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s1+8, FBITS(f0));
    ST32(s1, FBITS(f1));
    ST32(s1+4, FBITS(f2));
    goto L_0895BDF8;
L_0895BDF8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895BE10:;
    v1 = LD32(s0);
    v0 = LD32(v1+388);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BE20;
L_0895BE20:;
    a1 = v0 + 0;
    a0 = sp + 0;
    a2 = 1;
    { u64 r_ = func_08A1C2B0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895BE30;
L_0895BE30:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    ST32(s1, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(s1+8, FBITS(f1));
    ST32(s1+4, FBITS(f0));
    goto L_0895BDF8;
}

/* 0895BE4C */
u32 func_0895BE4C(void)
{
    u32 v0 = 0;
L_0895BE4C:;
    v0 = 60;
    return v0;
}

/* 0895BE54 */
rv_t func_0895BE54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895BE54:;
    sp = sp - 16;
    t4 = D_08C278D8 - (30936);
    v0 = 0 + 0;
    a3 = LD32(t4+30936);
    t0 = LD32(a3+4);
    cnd_ = t0 == 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_0895BEC4; }
    goto L_0895BE7C;
L_0895BE7C:;
    v0 = LD32(a3+16);
    v1 = LD32(t0);
    s0 = t0 + 0;
    v0 = v0 + 1;
    ST32(a3+4, v1);
    v1 = 1058;
    cnd_ = a1 == v1;
    ST32(a3+16, v0);
    if (cnd_) { goto L_0895BED8; }
    goto L_0895BE9C;
L_0895BE9C:;
    v0 = a3 + 0;
    v1 = LD32(v0+16);
    a3 = LD32(a3+4);
    v1 = v1 - 1;
    ST32(t0, a3);
    ST32(v0+16, v1);
    ST32(v0+4, t0);
    { rv_t r_ = func_089562E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BEBC;
L_0895BEBC:;
    s0 = v0 + 0;
    goto L_0895BEC0;
L_0895BEC0:;
    v0 = s0 + 0;
    goto L_0895BEC4;
L_0895BEC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895BED8:;
    a1 = a0 + 0;
    a0 = t0 + 0;
    { rv_t r_ = func_0894FF20(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BEE4;
L_0895BEE4:;
    a1 = s1 + 0;
    a0 = s0 + 0;
    cnd_ = s1 == 0;
    a2 = 1;
    if (cnd_) { goto L_0895BEC0; }
    goto L_0895BEF4;
L_0895BEF4:;
    { rv_t r_ = func_08921EFC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BEFC;
L_0895BEFC:;
    v0 = s0 + 0;
    goto L_0895BEC4;
}

/* 0895BF04 */
void func_0895BF04(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr125 = v[125];
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_0895BF04:;
    sp = sp - 336;
    a2 = 1;
    s2 = sp + 16;
    s1 = a0 + 0;
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr64));ST32(a_+4,FBITS(vr65));ST32(a_+8,FBITS(vr66));ST32(a_+12,FBITS(vr67));}
    s0 = a1 + 0;
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr68));ST32(a_+4,FBITS(vr69));ST32(a_+8,FBITS(vr70));ST32(a_+12,FBITS(vr71));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(vr73));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    f20 = f12;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr76));ST32(a_+4,FBITS(vr77));ST32(a_+8,FBITS(vr78));ST32(a_+12,FBITS(v[79]));}
    a1 = LD32(a0+4);
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    a0 = D_08C2ACF8 - (-21256);
    a0 = a0 - 21256;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { u64 r_ = func_08ABF584(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895BF68;
L_0895BF68:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895C040; }
    goto L_0895BF70;
L_0895BF70:;
    s2 = sp + 16;
    a1 = s2 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[125]=vr125;__auto_type vr_t_ = func_089B6D88(a0, a1, 0, 0, 0); vr0=v[0];vr48=v[48];vr49=v[49];vr50=v[50];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr96=v[96];vr97=v[97];vr98=v[98];vr125=v[125];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895BF7C;
L_0895BF7C:;
    v1 = LD32(sp+16);
    v0 = LD32(sp+20);
    {u32 a_=sp+(288);vr76=BITSF(LD32(a_+0));vr77=BITSF(LD32(a_+4));vr78=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {vr48=BITSF(v1);}
    v1 = LD32(sp+24);
    {vr49=BITSF(v0);}
    {vr50=BITSF(v1);}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr64=d0;vr65=d1;vr66=d2;vr67=d3;}
    v1 = LD32(sp+28);
    v0 = LD32(sp+32);
    {float s0=vr76;float s1=vr77;float s2=vr78;float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {u32 a_=sp+(192);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=vr64;float s1=vr65;float s2=vr66;float s3=vr67;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {vr48=BITSF(v1);}
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {vr49=BITSF(v0);}
    v1 = LD32(sp+36);
    v0 = LD32(sp+44);
    {vr50=BITSF(v1);}
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+40);
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(sp+48);
    {v[33]=BITSF(v0);}
    v0 = LD32(s0);
    {v[34]=BITSF(v1);}
    {vr0=BITSF(v0);}
    v1 = LD32(s0+8);
    v0 = LD32(s0+4);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float t0=vr0;float t1=v[1];float t2=v[2];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;v[4]=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[6]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[4]);}
    f2 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    {v0=FBITS(v[5]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    goto L_0895C040;
L_0895C040:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_088F82FC(a0, a1); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895C04C;
L_0895C04C:;
    a0 = s1 + 0;
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
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(v[118]);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C2D0; }
    goto L_0895C08C;
L_0895C08C:;
    {float s0=v[118];float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C210; }
    goto L_0895C09C;
L_0895C09C:;
    {float s0=-(v[118]);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=v[114];float d0=s0;vr64=d0;}
    {float s0=v[122];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0895C134; }
    goto L_0895C0C4;
L_0895C0C4:;
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
    if (cnd_) { goto L_0895C110; }
    goto L_0895C100;
L_0895C100:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0895C110;
L_0895C110:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C154; }
    goto L_0895C120;
L_0895C120:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0895C154; }
    goto L_0895C130;
L_0895C130:;
    goto L_0895C134;
L_0895C134:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C154; }
    goto L_0895C148;
L_0895C148:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0895C154;
L_0895C154:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=v[116];float d0=s0;vr64=d0;}
    {float s0=v[117];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0895C1E4; }
    goto L_0895C174;
L_0895C174:;
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
    if (cnd_) { goto L_0895C1C0; }
    goto L_0895C1B0;
L_0895C1B0:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0895C1C0;
L_0895C1C0:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C204; }
    goto L_0895C1D0;
L_0895C1D0:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0895C204; }
    goto L_0895C1E0;
L_0895C1E0:;
    goto L_0895C1E4;
L_0895C1E4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C204; }
    goto L_0895C1F8;
L_0895C1F8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0895C204;
L_0895C204:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0895C388; }
    goto L_0895C20C;
L_0895C20C:;
    goto L_0895C210;
L_0895C210:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[120];float d0=s0;vr64=d0;}
    {float s0=v[112];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0895C2A4; }
    goto L_0895C234;
L_0895C234:;
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
    if (cnd_) { goto L_0895C280; }
    goto L_0895C270;
L_0895C270:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0895C280;
L_0895C280:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C2C4; }
    goto L_0895C290;
L_0895C290:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0895C2C4; }
    goto L_0895C2A0;
L_0895C2A0:;
    goto L_0895C2A4;
L_0895C2A4:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C2C4; }
    goto L_0895C2B8;
L_0895C2B8:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0895C2C4;
L_0895C2C4:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_0895C388; }
    goto L_0895C2CC;
L_0895C2CC:;
    goto L_0895C2D0;
L_0895C2D0:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=v[113];float d0=s0;vr64=d0;}
    {float s0=v[121];float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_0895C364; }
    goto L_0895C2F4;
L_0895C2F4:;
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
    if (cnd_) { goto L_0895C340; }
    goto L_0895C330;
L_0895C330:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_0895C340;
L_0895C340:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C384; }
    goto L_0895C350;
L_0895C350:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_0895C384; }
    goto L_0895C360;
L_0895C360:;
    goto L_0895C364;
L_0895C364:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0895C384; }
    goto L_0895C378;
L_0895C378:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_0895C384;
L_0895C384:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_0895C388;
L_0895C388:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=v[124];vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(96),FBITS(vr96));}
    {ST32(sp+(100),FBITS(vr97));}
    {ST32(sp+(104),FBITS(vr98));}
    v0 = func_0895BB70(a0);
    goto L_0895C39C;
L_0895C39C:;
    v1 = D_08AEDEDC - (-8484);
    f2 = BITSF(LD32(v0+556));
    f0 = BITSF(LD32(v1-8484));
    f1 = BITSF(LD32(v0+552));
    ST32(sp+116, FBITS(f2));
    fcc = FCMP(f0, f2, 12);
    ST32(sp+112, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+120, 0);
    if (cnd_) { goto L_0895C5F8; }
    goto L_0895C3C0;
L_0895C3C0:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f2 - f0;
    goto L_0895C3CC;
L_0895C3CC:;
    ST32(sp+116, FBITS(f0));
    f1 = BITSF(LD32(sp+96));
    goto L_0895C3D4;
L_0895C3D4:;
    f0 = BITSF(LD32(sp+112));
    f2 = BITSF(LD32(sp+100));
    f3 = BITSF(LD32(v1-8484));
    f4 = f1 - f0;
    f0 = BITSF(LD32(sp+116));
    f1 = BITSF(LD32(sp+104));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+120));
    fcc = FCMP(f3, f4, 12);
    ST32(sp+128, FBITS(f4));
    f1 = f1 - f0;
    ST32(sp+132, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+136, FBITS(f1));
    if (cnd_) { goto L_0895C5D0; }
    goto L_0895C40C;
L_0895C40C:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f4 - f0;
    goto L_0895C418;
L_0895C418:;
    ST32(sp+128, FBITS(f0));
    f1 = BITSF(LD32(sp+132));
    goto L_0895C420;
L_0895C420:;
    f0 = BITSF(LD32(v1-8484));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEDEE4 - (-8476);
    if (cnd_) { goto L_0895C5AC; }
    goto L_0895C434;
L_0895C434:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f1 - f0;
    goto L_0895C440;
L_0895C440:;
    ST32(sp+132, FBITS(f0));
    f0 = BITSF(LD32(v1-8484));
    goto L_0895C448;
L_0895C448:;
    f1 = BITSF(LD32(sp+136));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEDEE4 - (-8476);
    if (cnd_) { goto L_0895C588; }
    goto L_0895C45C;
L_0895C45C:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f1 - f0;
    goto L_0895C468;
L_0895C468:;
    ST32(sp+136, FBITS(f0));
    v0 = D_08B1B764 - (-18588);
    goto L_0895C470;
L_0895C470:;
    f1 = BITSF(LD32(v0-18588));
    f2 = BITSF(LD32(sp+128));
    f1 = f1 * f20;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+164, FBITS(f1));
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f3 = f0;
    if (cnd_) { goto L_0895C4AC; }
    goto L_0895C494;
L_0895C494:;
    fcc = FCMP(f1, f2, 12);
    cnd_ = fcc;
    f3 = f1;
    if (cnd_) { goto L_0895C4AC; }
    goto L_0895C4A4;
L_0895C4A4:;
    f3 = f2;
    f0 = BITSF(FBITS(f1) ^ 0x80000000u);
    goto L_0895C4AC;
L_0895C4AC:;
    a0 = sp + 132;
    a1 = sp + 160;
    a2 = sp + 164;
    ST32(sp+128, FBITS(f3));
    ST32(sp+160, FBITS(f0));
    f0 = func_0895C6E0(a0, a1, a2);
    goto L_0895C4C4;
L_0895C4C4:;
    a0 = sp + 136;
    f1 = BITSF(LD32(sp+164));
    a1 = sp + 168;
    a2 = sp + 164;
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    ST32(sp+132, FBITS(f0));
    ST32(sp+168, FBITS(f1));
    f0 = func_0895C6E0(a0, a1, a2);
    goto L_0895C4E4;
L_0895C4E4:;
    a1 = s1 + 76;
    f1 = BITSF(LD32(sp+128));
    f4 = BITSF(LD32(sp+112));
    f3 = BITSF(LD32(sp+116));
    f2 = BITSF(LD32(sp+120));
    f4 = f4 + f1;
    f1 = BITSF(LD32(sp+132));
    f2 = f2 + f0;
    a2 = s1 + 80;
    f3 = f3 + f1;
    a0 = sp + 144;
    ST32(sp+144, FBITS(f4));
    ST32(sp+148, FBITS(f3));
    ST32(sp+152, FBITS(f2));
    ST32(sp+136, FBITS(f0));
    f0 = func_0895C6E0(a0, a1, a2);
    goto L_0895C524;
L_0895C524:;
    v0 = LD32(s1+112);
    v0 = v0 & 0x4;
    cnd_ = v0 != 0;
    ST32(sp+144, FBITS(f0));
    if (cnd_) { goto L_0895C570; }
    goto L_0895C534;
L_0895C534:;
    a0 = s1 + 0;
    v0 = func_0895BB70(a0);
    goto L_0895C53C;
L_0895C53C:;
    f0 = BITSF(LD32(sp+144));
    a0 = s1 + 0;
    ST32(v0+552, FBITS(f0));
    v0 = func_0895BB70(a0);
    goto L_0895C54C;
L_0895C54C:;
    f0 = BITSF(LD32(sp+148));
    ST32(v0+556, FBITS(f0));
    sp = sp + 336;
    { v[0]=vr0;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[125]=vr125;return; }
L_0895C570:;
    a1 = s1 + 84;
    a2 = s1 + 88;
    a0 = sp + 148;
    f0 = func_0895C6E0(a0, a1, a2);
    goto L_0895C580;
L_0895C580:;
    ST32(sp+148, FBITS(f0));
    goto L_0895C534;
L_0895C588:;
    f0 = BITSF(LD32(v0-8476));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = D_08B1B764 - (-18588);
    if (cnd_) { goto L_0895C470; }
    goto L_0895C59C;
L_0895C59C:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f1 + f0;
    goto L_0895C468;
L_0895C5AC:;
    f0 = BITSF(LD32(v0-8476));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(v1-8484)); goto L_0895C448; }
    goto L_0895C5C0;
L_0895C5C0:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f1 + f0;
    goto L_0895C440;
L_0895C5D0:;
    v0 = D_08AEDEE4 - (-8476);
    f0 = BITSF(LD32(v0-8476));
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(sp+132));
    if (cnd_) { goto L_0895C420; }
    goto L_0895C5E8;
L_0895C5E8:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f4 + f0;
    goto L_0895C418;
L_0895C5F8:;
    v0 = D_08AEDEE4 - (-8476);
    f0 = BITSF(LD32(v0-8476));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    f1 = BITSF(LD32(sp+96));
    if (cnd_) { goto L_0895C3D4; }
    goto L_0895C610;
L_0895C610:;
    v0 = D_08AEDEE0 - (-8480);
    f0 = BITSF(LD32(v0-8480));
    f0 = f2 + f0;
    goto L_0895C3CC;
    v[0]=vr0;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[125]=vr125;
}

/* 0895C620 */
rv_t func_0895C620(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0895C620:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27D50 - (32080);
    t1 = D_08C27D60 - (32096);
    t2 = D_08C27D70 - (32112);
    a1 = a1 & a0;
    v1 = t0 + 32080;
    a2 = t1 + 32096;
    cnd_ = a1 == 0;
    a3 = t2 + 32112;
    if (cnd_) { goto L_0895C6D8; }
    goto L_0895C650;
L_0895C650:;
    v0 = D_08AEDEE8 - (-8472);
    f4 = BITSF(LD32(v0-8472));
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
    ST32(t0+32080, FBITS(f2));
    ST32(t1+32096, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+32112, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895C6D8;
L_0895C6D8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895C6E0 */
float func_0895C6E0(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0895C6E0:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0895C70C; }
    goto L_0895C6F8;
L_0895C6F8:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0895C70C; }
    goto L_0895C70C;
L_0895C70C:;
    return f0;
}

/* 0895C714 */
rv_t func_0895C714(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895C714:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895C620(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895C728;
L_0895C728:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895C734 */
void func_0895C734(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895C734:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0895A62C(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0895C748;
L_0895C748:;
    v0 = D_08AEDEF0 - (-8464);
    f0 = BITSF(LD32(v0-8464));
    v0 = D_08AF9570 - (-27280);
    v0 = v0 - 27280;
    v1 = 1;
    ST32(s0+116, FBITS(f0));
    ST32(s0, v0);
    ST8(s0+112, v1);
    sp = sp + 16;
    return;
}

/* 0895C778 */
rv_t func_0895C778(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895C778:;
    sp = sp - 16;
    a1 = 1059;
    s0 = a0 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0895C7A8; }
    goto L_0895C798;
L_0895C798:;
    goto L_0895C79C;
L_0895C79C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895C7A8:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895C7B8;
L_0895C7B8:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895C798; }
    goto L_0895C7C4;
L_0895C7C4:;
    { rv_t r_ = func_089236BC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895C7CC;
L_0895C7CC:;
    goto L_0895C79C;
}

/* 0895C7D4 */
rv_t func_0895C7D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[432] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 432);
L_0895C7D4:;
    sp = sp - 432;
    s1 = a0 + 0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    f20 = f12;
    { rv_t r_ = func_08922B58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895C810;
L_0895C810:;
    v1 = 4;
    v0 = LD32(s1+16);
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = v0 & 0x6;
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == v1;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0895C854; }
    goto L_0895C830;
L_0895C830:;
    goto L_0895C834;
L_0895C834:;
    goto L_0895C838;
L_0895C838:;
    sp = sp + 432;
    return (rv_t){ v0, v1, f0 };
L_0895C854:;
    a1 = s1 + 96;
    v0 = LD32(s1+96);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(a1+4);
    {v[0]=BITSF(v0);}
    f1 = BITSF(0);
    v0 = LD32(a1+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s1); goto L_0895CD5C; }
    goto L_0895C894;
L_0895C894:;
    a2 = LD32(s1+4);
    a0 = D_08C2B0A8 - (-20312);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 20312;
    if (cnd_) { goto L_0895C830; }
    goto L_0895C8A8;
L_0895C8A8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0895C8F8; }
    goto L_0895C8CC;
L_0895C8CC:;
    a0 = LD32(a1);
    goto L_0895C8D0;
L_0895C8D0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0895CD3C; }
    goto L_0895C8E8;
L_0895C8E8:;
    a1 = LD32(a1+4);
    goto L_0895C8EC;
L_0895C8EC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0895C8D0; }
    goto L_0895C8F4;
L_0895C8F4:;
    s3 = 0 + 0;
    goto L_0895C8F8;
L_0895C8F8:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_0895C834; }
    goto L_0895C900;
L_0895C900:;
    v0 = LD_U8(s1+112);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895C838; }
    goto L_0895C90C;
L_0895C90C:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    s0 = LD32(v0+100);
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s2 = s0 + 76;
    if (cnd_) { goto L_0895C950; }
    goto L_0895C928;
L_0895C928:;
    v0 = D_08B285AC - (-31316);
    s4 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s4;
    a0 = s2 + 0;
    if (cnd_) { goto L_0895C954; }
    goto L_0895C93C;
L_0895C93C:;
    v0 = LD32(s2+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEDEF4 - (-8460);
    if (cnd_) { goto L_0895CD08; }
    goto L_0895C94C;
L_0895C94C:;
    ST32(s0+220, s4);
    goto L_0895C950;
L_0895C950:;
    a0 = s2 + 0;
    goto L_0895C954;
L_0895C954:;
    a1 = sp + 0;
    a2 = sp + 192;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = func_08816640(a0, a1, a2);
    goto L_0895C970;
L_0895C970:;
    v0 = v0 & 0xff;
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 != 0;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0895CB34; }
    goto L_0895C988;
L_0895C988:;
    v1 = LD32(s3);
    v0 = LD32(v1-12);
    v0 = s3 + v0;
    s0 = LD32(v0+100);
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s2 = s0 + 76;
    if (cnd_) { goto L_0895C9CC; }
    goto L_0895C9A4;
L_0895C9A4:;
    v0 = D_08B285AC - (-31316);
    s3 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s3;
    a0 = s2 + 0;
    if (cnd_) { goto L_0895C9D0; }
    goto L_0895C9B8;
L_0895C9B8:;
    v0 = LD32(s2+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEDEF4 - (-8460);
    if (cnd_) { goto L_0895CB00; }
    goto L_0895C9C8;
L_0895C9C8:;
    ST32(s0+220, s3);
    goto L_0895C9CC;
L_0895C9CC:;
    a0 = s2 + 0;
    goto L_0895C9D0;
L_0895C9D0:;
    a1 = sp + 144;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895C9E8;
L_0895C9E8:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+48); goto L_0895CAE4; }
    goto L_0895C9F4;
L_0895C9F4:;
    s0 = LD32(s1+48);
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CA14;
L_0895CA14:;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(272);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(304);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {u32 a_=sp+(256);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(288);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(sp+144);
    v0 = LD32(sp+148);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+152);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(sp+168, FBITS(f3));
    {v0=FBITS(v[17]);}
    a0 = s0 + 0;
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, v0);
    ST32(sp+176, FBITS(f2));
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    v0 = LD32(s0);
    v1 = LD32(v0+128);
    t_ = v1;
    a1 = sp + 160;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CADC;
L_0895CADC:;
    goto L_0895C834;
L_0895CAE4:;
    a1 = D_08B45A9C - (23196);
    v1 = LD32(a0);
    v0 = LD32(v1+128);
    t_ = v0;
    a1 = a1 + 23196;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CAF8;
L_0895CAF8:;
    goto L_0895C834;
L_0895CB00:;
    f12 = BITSF(LD32(v0-8460));
    a0 = s2 + 0;
    a2 = 0 + 0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CB20;
L_0895CB20:;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0895C9C8;
L_0895CB34:;
    f0 = BITSF(LD32(sp+192));
    {v[4]=0.31830988618f;}
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 * f20;
    v1 = LD32(sp);
    s0 = LD32(s1+48);
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    v0 = LD32(sp+4);
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v1);}
    v1 = LD32(sp+8);
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[8]=d0;}
    {float s0=v[4];float d0=sinf(s0*1.57079632679f);v[4]=d0;}
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    ST32(sp+192, FBITS(f0));
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {float s0=v[8];float d0=s0;v[3]=d0;}
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
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(sp+24);
    v1 = LD32(sp+28);
    ST32(sp+40, v0);
    ST32(sp+44, v1);
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
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    {ST32(sp+(60),FBITS(v[100]));}
    {ST32(sp+(64),FBITS(v[101]));}
    {ST32(sp+(68),FBITS(v[102]));}
    {ST32(sp+(72),FBITS(v[104]));}
    {ST32(sp+(76),FBITS(v[105]));}
    {ST32(sp+(80),FBITS(v[106]));}
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+24);
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CC70;
L_0895CC70:;
    {v[112]=BITSF(LD32(sp+(48)));}
    {v[113]=BITSF(LD32(sp+(52)));}
    {v[114]=BITSF(LD32(sp+(56)));}
    {v[116]=BITSF(LD32(sp+(60)));}
    {v[117]=BITSF(LD32(sp+(64)));}
    {v[118]=BITSF(LD32(sp+(68)));}
    {v[120]=BITSF(LD32(sp+(72)));}
    {v[121]=BITSF(LD32(sp+(76)));}
    {v[122]=BITSF(LD32(sp+(80)));}
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
    {ST32(sp+(96),FBITS(v[80]));}
    {ST32(sp+(100),FBITS(v[81]));}
    {ST32(sp+(104),FBITS(v[82]));}
    {ST32(sp+(108),FBITS(v[84]));}
    {ST32(sp+(112),FBITS(v[85]));}
    {ST32(sp+(116),FBITS(v[86]));}
    {ST32(sp+(120),FBITS(v[88]));}
    {ST32(sp+(124),FBITS(v[89]));}
    {ST32(sp+(128),FBITS(v[90]));}
    v0 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0+36);
    t_ = v1;
    a1 = sp + 96;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CCF4;
L_0895CCF4:;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0895C988;
L_0895CD08:;
    f12 = BITSF(LD32(v0-8460));
    a0 = s2 + 0;
    a2 = 0 + 0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CD28;
L_0895CD28:;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0895C94C;
L_0895CD3C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s3 = a0 + 0;
    if (cnd_) { goto L_0895C8E8; }
    goto L_0895CD48;
L_0895CD48:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895C8EC; }
    goto L_0895CD54;
L_0895CD54:;
    goto L_0895C8F8;
L_0895CD5C:;
    f12 = f20;
    v0 = LD32(v1+84);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CD6C;
L_0895CD6C:;
    a0 = s1 + 0;
    v0 = func_0895D700(a0);
    goto L_0895CD74;
L_0895CD74:;
    v1 = 1;
    ST8(v0+568, v1);
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_0895C894;
}

/* 0895CD90 */
rv_t func_0895CD90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6];
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_0895CD90:;
    sp = sp - 320;
    s1 = a0 + 0;
    s0 = a1 + 0;
    f21 = BITSF(0);
    a0 = LD32(a0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    f22 = f12;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CDDC;
L_0895CDDC:;
    a0 = LD32(s1+48);
    f20 = BITSF(LD32(v0+8));
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895CE00;
L_0895CE00:;
    f2 = BITSF(LD32(v0+32));
    v1 = FBITS(f20);
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    t0 = FBITS(f2);
    {v[12]=BITSF(v1);}
    v1 = 0 + 0;
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(t0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f20));
    fcc = FCMP(f0, f21, 2);
    ST32(sp+4, FBITS(f21));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0895CE78; }
    goto L_0895CE40;
L_0895CE40:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {t0=FBITS(vr2);}
    f3 = BITSF(t0);
    {v0=FBITS(vr0);}
    {t0=FBITS(vr1);}
    ST32(sp+16, v0);
    ST32(sp+20, t0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v0);
    ST32(sp+4, t0);
    ST32(sp+8, FBITS(f3));
    goto L_0895CE78;
L_0895CE78:;
    f6 = BITSF(LD32(s0+8));
    f5 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    {u32 a_=sp+(176);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    t0 = FBITS(f3);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[13]=BITSF(t0);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[16]=sum;}
    {t0=FBITS(v[16]);}
    f0 = BITSF(t0);
    v0 = 0xbf800000u;
    {u32 a_=sp+(160);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f21, 2);
    {v[8]=BITSF(v1);}
    a1 = LD32(sp);
    {v[9]=BITSF(v0);}
    {u32 a_=sp+(144);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[10]=BITSF(v1);}
    {vr0=BITSF(a1);}
    a2 = LD32(sp+4);
    a3 = LD32(sp+8);
    {vr1=BITSF(a2);}
    {vr2=BITSF(a3);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=v[8];float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr6);}
    f4 = BITSF(v0);
    v0 = D_08AEDEF8 - (-8456);
    f0 = BITSF(LD32(v0-8456));
    {v1=FBITS(vr4);}
    {t0=FBITS(vr5);}
    ST32(sp+36, FBITS(f0));
    ST32(sp+16, v1);
    ST32(sp+20, t0);
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f21));
    ST32(sp+40, FBITS(f21));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f6));
    if (cnd_) { goto L_0895CF58; }
    goto L_0895CF24;
L_0895CF24:;
    {float s0=v[16];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    {v1=FBITS(vr0);}
    {t0=FBITS(vr1);}
    ST32(sp+32, v1);
    ST32(sp+36, t0);
    ST32(sp+40, v0);
    ST32(sp+48, v1);
    ST32(sp+52, t0);
    ST32(sp+56, v0);
    goto L_0895CF58;
L_0895CF58:;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {u32 a_=sp+(192);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    a0 = LD32(sp+56);
    {vr5=BITSF(v1);}
    v0 = LD32(sp+24);
    v1 = LD32(sp+52);
    {vr6=BITSF(v0);}
    v0 = LD32(sp+48);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {t0=FBITS(vr4);}
    f0 = BITSF(t0);
    ST32(sp+64, FBITS(f21));
    fcc = FCMP(f21, f0, 12);
    ST32(sp+68, FBITS(f21));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f21));
    if (cnd_) { goto L_0895D224; }
    goto L_0895CFB0;
L_0895CFB0:;
    {u32 a_=sp+(224);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {vr0=BITSF(a1);}
    {vr5=BITSF(v1);}
    {vr1=BITSF(a2);}
    {vr6=BITSF(a0);}
    {vr2=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f1 = BITSF(v0);
    v0 = D_08AEDEFC - (-8452);
    f0 = BITSF(LD32(v0-8452));
    f0 = f0 - f1;
    ST32(sp+68, FBITS(f0));
    goto L_0895CFEC;
L_0895CFEC:;
    f2 = BITSF(LD32(sp+68));
    v0 = D_08AEDF00 - (-8448);
    f0 = BITSF(LD32(v0-8448));
    t0 = FBITS(f2);
    t0 = (t0 >> 0) & 0x7fffffff;
    f1 = BITSF(t0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    s2 = 1;
    if (cnd_) { goto L_0895D1FC; }
    goto L_0895D014;
L_0895D014:;
    f0 = BITSF(LD32(s1+116));
    v0 = D_08AEDF04 - (-8444);
    s2 = 0 + 0;
    f12 = f0 * f22;
    f0 = BITSF(LD32(v0-8444));
    f1 = BITSF(FBITS(f12) ^ 0x80000000u);
    f0 = f2 * f0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    ST32(sp+68, FBITS(f0));
    if (cnd_) { goto L_0895D054; }
    goto L_0895D040;
L_0895D040:;
    fcc = FCMP(f12, f0, 12);
    cnd_ = fcc;
    f1 = f12;
    if (cnd_) { goto L_0895D054; }
    goto L_0895D050;
L_0895D050:;
    f1 = f0;
    goto L_0895D054;
L_0895D054:;
    a0 = D_08C27EB0 - (32432);
    v0 = (u32)(s32)LD_S8(a0+32432);
    s0 = D_08C27EB8 - (32440);
    cnd_ = v0 != 0;
    ST32(sp+68, FBITS(f1));
    if (cnd_) { goto L_0895D0C4; }
    goto L_0895D068;
L_0895D068:;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    f8 = BITSF(LD32(v1+23208));
    v0 = s0 + 32440;
    v1 = 1;
    ST32(v0+32, FBITS(f0));
    ST32(s0+32440, FBITS(f8));
    ST8(a0+32432, v1);
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f3));
    ST32(v0+16, FBITS(f4));
    ST32(v0+20, FBITS(f5));
    ST32(v0+24, FBITS(f6));
    ST32(v0+28, FBITS(f7));
    goto L_0895D0C4;
L_0895D0C4:;
    s1 = LD32(s1+48);
    s0 = s0 + 32440;
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
    {ST32(s0+(0),FBITS(v[96]));}
    {ST32(s0+(4),FBITS(v[97]));}
    {ST32(s0+(8),FBITS(v[98]));}
    {ST32(s0+(12),FBITS(v[100]));}
    {ST32(s0+(16),FBITS(v[101]));}
    {ST32(s0+(20),FBITS(v[102]));}
    {ST32(s0+(24),FBITS(v[104]));}
    {ST32(s0+(28),FBITS(v[105]));}
    {ST32(s0+(32),FBITS(v[106]));}
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D178;
L_0895D178:;
    {v[112]=BITSF(LD32(s0+(0)));}
    {v[113]=BITSF(LD32(s0+(4)));}
    {v[114]=BITSF(LD32(s0+(8)));}
    {v[116]=BITSF(LD32(s0+(12)));}
    {v[117]=BITSF(LD32(s0+(16)));}
    {v[118]=BITSF(LD32(s0+(20)));}
    {v[120]=BITSF(LD32(s0+(24)));}
    {v[121]=BITSF(LD32(s0+(28)));}
    {v[122]=BITSF(LD32(s0+(32)));}
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
    {ST32(sp+(80),FBITS(v[80]));}
    {ST32(sp+(84),FBITS(v[81]));}
    {ST32(sp+(88),FBITS(v[82]));}
    {ST32(sp+(92),FBITS(v[84]));}
    {ST32(sp+(96),FBITS(v[85]));}
    {ST32(sp+(100),FBITS(v[86]));}
    {ST32(sp+(104),FBITS(v[88]));}
    {ST32(sp+(108),FBITS(v[89]));}
    {ST32(sp+(112),FBITS(v[90]));}
    v0 = LD32(s1);
    a0 = s1 + 0;
    v1 = LD32(v0+36);
    t_ = v1;
    a1 = sp + 80;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D1FC;
L_0895D1FC:;
    v0 = s2 + 0;
    sp = sp + 320;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;return (rv_t){ v0, v1, f0 }; }
L_0895D224:;
    {u32 a_=sp+(256);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    v0 = D_08AEDEFC - (-8452);
    {vr5=BITSF(v1);}
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr6=BITSF(a0);}
    {vr0=BITSF(a1);}
    f0 = BITSF(LD32(v0-8452));
    {vr1=BITSF(a2);}
    {vr2=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v1=FBITS(vr4);}
    f1 = BITSF(v1);
    f1 = f1 - f0;
    ST32(sp+68, FBITS(f1));
    goto L_0895CFEC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;
}

/* 0895D264 */
rv_t func_0895D264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr8 = v[8], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_0895D264:;
    sp = sp - 272;
    s1 = a0 + 0;
    s0 = a1 + 0;
    f21 = BITSF(0);
    a0 = LD32(a0+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D2A8;
L_0895D2A8:;
    a0 = LD32(s1+48);
    f20 = BITSF(LD32(v0+8));
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr8=v[8];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D2CC;
L_0895D2CC:;
    f2 = BITSF(LD32(v0+32));
    v1 = FBITS(f20);
    {u32 a_=sp+(80);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    t0 = FBITS(f2);
    {vr12=BITSF(v1);}
    v1 = 0 + 0;
    {vr13=BITSF(v1);}
    {vr14=BITSF(t0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f20));
    fcc = FCMP(f0, f21, 2);
    ST32(sp+4, FBITS(f21));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0895D344; }
    goto L_0895D30C;
L_0895D30C:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {t0=FBITS(vr2);}
    f3 = BITSF(t0);
    {v0=FBITS(vr0);}
    {t0=FBITS(vr1);}
    ST32(sp+16, v0);
    ST32(sp+20, t0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v0);
    ST32(sp+4, t0);
    ST32(sp+8, FBITS(f3));
    goto L_0895D344;
L_0895D344:;
    f6 = BITSF(LD32(s0+8));
    f5 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    {u32 a_=sp+(128);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    t0 = FBITS(f3);
    {vr12=BITSF(v0);}
    v0 = FBITS(f6);
    {vr13=BITSF(t0);}
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[16]=sum;}
    {t0=FBITS(v[16]);}
    f0 = BITSF(t0);
    v0 = 0xbf800000u;
    {u32 a_=sp+(112);vr8=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f21, 2);
    {vr8=BITSF(v1);}
    a1 = LD32(sp);
    {v[9]=BITSF(v0);}
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[10]=BITSF(v1);}
    {vr0=BITSF(a1);}
    a2 = LD32(sp+4);
    a3 = LD32(sp+8);
    {vr1=BITSF(a2);}
    {vr2=BITSF(a3);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr8;float t1=v[9];float t2=v[10];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {v0=FBITS(vr6);}
    f4 = BITSF(v0);
    v0 = D_08AEDF08 - (-8440);
    f0 = BITSF(LD32(v0-8440));
    {v1=FBITS(vr4);}
    {t0=FBITS(vr5);}
    ST32(sp+36, FBITS(f0));
    ST32(sp+16, v1);
    ST32(sp+20, t0);
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f21));
    ST32(sp+40, FBITS(f21));
    ST32(sp+48, FBITS(f5));
    ST32(sp+52, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f6));
    if (cnd_) { goto L_0895D424; }
    goto L_0895D3F0;
L_0895D3F0:;
    {float s0=v[16];float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    {v1=FBITS(vr0);}
    {t0=FBITS(vr1);}
    ST32(sp+32, v1);
    ST32(sp+36, t0);
    ST32(sp+40, v0);
    ST32(sp+48, v1);
    ST32(sp+52, t0);
    ST32(sp+56, v0);
    goto L_0895D424;
L_0895D424:;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {u32 a_=sp+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    a0 = LD32(sp+56);
    {vr5=BITSF(v1);}
    v0 = LD32(sp+24);
    v1 = LD32(sp+52);
    {vr6=BITSF(v0);}
    v0 = LD32(sp+48);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {t0=FBITS(vr4);}
    f0 = BITSF(t0);
    ST32(sp+64, FBITS(f21));
    fcc = FCMP(f21, f0, 12);
    ST32(sp+68, FBITS(f21));
    cnd_ = !fcc;
    ST32(sp+72, FBITS(f21));
    if (cnd_) { goto L_0895D510; }
    goto L_0895D47C;
L_0895D47C:;
    {u32 a_=sp+(176);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {vr0=BITSF(a1);}
    {vr5=BITSF(v1);}
    {vr1=BITSF(a2);}
    {vr6=BITSF(a0);}
    {vr2=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f1 = BITSF(v0);
    v0 = D_08AEDF0C - (-8436);
    f0 = BITSF(LD32(v0-8436));
    a0 = s1 + 0;
    f0 = f0 - f1;
    ST32(sp+68, FBITS(f0));
    v0 = func_0895D700(a0);
    goto L_0895D4C0;
L_0895D4C0:;
    v1 = 4;
    goto L_0895D4C4;
L_0895D4C4:;
    ST8(v0+568, v1);
    v0 = LD32(sp+68);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    v0 = D_08AEDF10 - (-8432);
    f0 = BITSF(LD32(v0-8432));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_0895D4F0; }
    goto L_0895D4EC;
L_0895D4EC:;
    v1 = 0 + 0;
    goto L_0895D4F0;
L_0895D4F0:;
    v0 = v1 + 0;
    sp = sp + 272;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;return (rv_t){ v0, v1, f0 }; }
L_0895D510:;
    {u32 a_=sp+(208);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    v0 = D_08AEDF0C - (-8436);
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr5=BITSF(v1);}
    {vr0=BITSF(a1);}
    {vr6=BITSF(a0);}
    {vr1=BITSF(a2);}
    f0 = BITSF(LD32(v0-8436));
    {vr2=BITSF(a3);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v1=FBITS(vr4);}
    f1 = BITSF(v1);
    a0 = s1 + 0;
    f1 = f1 - f0;
    ST32(sp+68, FBITS(f1));
    v0 = func_0895D700(a0);
    goto L_0895D554;
L_0895D554:;
    v1 = 2;
    goto L_0895D4C4;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 0895D55C */
u32 func_0895D55C(void)
{
    u32 v0 = 0;
L_0895D55C:;
    v0 = 132;
    return v0;
}

/* 0895D564 */
rv_t func_0895D564(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895D564:;
    sp = sp - 16;
    v0 = 0x801f;
    t1 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0895D594; }
    goto L_0895D580;
L_0895D580:;
    { rv_t r_ = func_08957974(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D588;
L_0895D588:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895D594:;
    a2 = LD32(a0+4);
    a1 = LD32(a0+52);
    a0 = t1 + 0;
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D5A4;
L_0895D5A4:;
    v0 = 1;
    goto L_0895D588;
}

/* 0895D5AC */
rv_t func_0895D5AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895D5AC:;
    sp = sp - 32;
    s5 = D_08C278D8 - (30936);
    v0 = 0 + 0;
    s4 = a2 + 0;
    s3 = a0 + 0;
    a3 = LD32(s5+30936);
    a0 = LD32(a3+4);
    cnd_ = a0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0895D660; }
    goto L_0895D5EC;
L_0895D5EC:;
    v0 = LD32(a3+16);
    v1 = LD32(a0);
    s2 = a0 + 0;
    v0 = v0 + 1;
    ST32(a3+4, v1);
    v1 = 1161;
    cnd_ = a1 == v1;
    ST32(a3+16, v0);
    if (cnd_) { goto L_0895D6F0; }
    goto L_0895D60C;
L_0895D60C:;
    v0 = a1 < 0x48au;
    cnd_ = v0 == 0;
    v0 = 1162;
    if (cnd_) { goto L_0895D6C0; }
    goto L_0895D618;
L_0895D618:;
    v0 = 1059;
    cnd_ = a1 == v0;
    v0 = 1111;
    if (cnd_) { goto L_0895D6B0; }
    goto L_0895D624;
L_0895D624:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0895D684; }
    goto L_0895D62C;
L_0895D62C:;
    v0 = LD32(s5+30936);
    goto L_0895D630;
L_0895D630:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    v1 = LD32(v0+16);
    a3 = LD32(v0+4);
    a2 = s4 + 0;
    v1 = v1 - 1;
    ST32(s2, a3);
    ST32(v0+16, v1);
    ST32(v0+4, s2);
    { rv_t r_ = func_0895A97C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D658;
L_0895D658:;
    s0 = v0 + 0;
    goto L_0895D65C;
L_0895D65C:;
    v0 = s0 + 0;
    goto L_0895D660;
L_0895D660:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895D684:;
    a1 = s3 + 0;
    { u64 r_ = func_0895264C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895D68C;
L_0895D68C:;
    cnd_ = s2 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_0895D62C; }
    goto L_0895D694;
L_0895D694:;
    cnd_ = s4 == 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_0895D65C; }
    goto L_0895D69C;
L_0895D69C:;
    a0 = s2 + 0;
    a2 = 1;
    { rv_t r_ = func_08921EFC(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D6A8;
L_0895D6A8:;
    v0 = s0 + 0;
    goto L_0895D660;
L_0895D6B0:;
    a1 = s3 + 0;
    { u64 r_ = func_08951020(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895D6B8;
L_0895D6B8:;
    goto L_0895D68C;
L_0895D6C0:;
    cnd_ = a1 == v0;
    v0 = 1163;
    if (cnd_) { goto L_0895D6E0; }
    goto L_0895D6C8;
L_0895D6C8:;
    cnd_ = a1 != v0;
    v0 = LD32(s5+30936);
    if (cnd_) { goto L_0895D630; }
    goto L_0895D6D0;
L_0895D6D0:;
    a1 = s3 + 0;
    f0 = func_08954054(a0, a1);
    goto L_0895D6D8;
L_0895D6D8:;
    goto L_0895D68C;
L_0895D6E0:;
    a1 = s3 + 0;
    { rv_t r_ = func_08953304(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D6E8;
L_0895D6E8:;
    goto L_0895D68C;
L_0895D6F0:;
    a1 = s3 + 0;
    { rv_t r_ = func_08951414(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D6F8;
L_0895D6F8:;
    goto L_0895D68C;
}

/* 0895D700 */
u32 func_0895D700(u32 a0)
{
    u32 v0 = 0;
L_0895D700:;
    v0 = LD32(a0+48);
    return v0;
}

/* 0895D708 */
rv_t func_0895D708(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0895D708:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C27E00 - (32256);
    t1 = D_08C27E10 - (32272);
    t2 = D_08C27E20 - (32288);
    a1 = a1 & a0;
    v1 = t0 + 32256;
    a2 = t1 + 32272;
    cnd_ = a1 == 0;
    a3 = t2 + 32288;
    if (cnd_) { goto L_0895D7C0; }
    goto L_0895D738;
L_0895D738:;
    v0 = D_08AEDF14 - (-8428);
    f4 = BITSF(LD32(v0-8428));
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
    ST32(t0+32256, FBITS(f2));
    ST32(t1+32272, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2+32288, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895D7C0;
L_0895D7C0:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895D7C8 */
rv_t func_0895D7C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895D7C8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895D708(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D7DC;
L_0895D7DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895D7E8 */
rv_t func_0895D7E8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895D7E8:;
    sp = sp - 32;
    v0 = D_08AEDF20 - (-8416);
    s3 = a1 << 2;
    s2 = a0 + 0;
    s1 = a1 + 0;
    f0 = BITSF(LD32(v0-8416));
    ST32(s2+4, a1);
    ST32(a0+20, FBITS(f0));
    a0 = s3 + 0;
    ST8(s2+16, 0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D828;
L_0895D828:;
    ST32(s2+8, v0);
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D834;
L_0895D834:;
    { s64 p_ = (s64)(s32)s1 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(s2+12, v0);
    s0 = v0 + 0;
    a0 = lo;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895D84C;
L_0895D84C:;
    v1 = 1;
    v1 = (s32)v1 < (s32)s1;
    cnd_ = v1 == 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0895D88C; }
    goto L_0895D85C;
L_0895D85C:;
    t0 = LD32(s2+12);
    a0 = s3 + 0;
    a2 = s3 + 0;
    a1 = t0 + 4;
    v1 = s1 - 1;
    goto L_0895D870;
L_0895D870:;
    v0 = LD32(t0);
    v1 = v1 - 1;
    v0 = v0 + a0;
    ST32(a1, v0);
    a0 = a0 + a2;
    cnd_ = v1 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0895D870; }
    goto L_0895D88C;
L_0895D88C:;
    t1 = (s32)0 < (s32)s1;
    cnd_ = t1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0895D904; }
    goto L_0895D898;
L_0895D898:;
    v0 = D_08AEDF24 - (-8412);
    t2 = LD32(s2+8);
    f1 = BITSF(LD32(v0-8412));
    t3 = v0 - 8412;
    goto L_0895D8A8;
L_0895D8A8:;
    cnd_ = a3 != 0;
    if (cnd_) { a2 = a3 << 2; goto L_0895D930; }
    goto L_0895D8B0;
L_0895D8B0:;
    ST32(s2, 0);
    ST32(t2, FBITS(f1));
    goto L_0895D8B8;
L_0895D8B8:;
    cnd_ = t1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0895D8F4; }
    goto L_0895D8C0;
L_0895D8C0:;
    t0 = LD32(s2+12);
    f0 = BITSF(LD32(t3));
    a2 = a3 << 2;
    a1 = a2 + t0;
    goto L_0895D8D0;
L_0895D8D0:;
    cnd_ = a3 == a0;
    v1 = a0 << 2;
    if (cnd_) { goto L_0895D920; }
    goto L_0895D8D8;
L_0895D8D8:;
    v0 = LD32(a1);
    v0 = v1 + v0;
    ST32(v0, 0);
    goto L_0895D8E4;
L_0895D8E4:;
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0895D8D0; }
    goto L_0895D8F4;
L_0895D8F4:;
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)s1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0895D8A8; }
    goto L_0895D904;
L_0895D904:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895D920:;
    v0 = LD32(a1);
    v0 = a2 + v0;
    ST32(v0, FBITS(f0));
    goto L_0895D8E4;
L_0895D930:;
    v0 = a2 + t2;
    ST32(v0, 0);
    goto L_0895D8B8;
}

/* 0895D93C */
void func_0895D93C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895D93C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895D998; }
    goto L_0895D958;
L_0895D958:;
    v1 = LD32(s0+12);
    goto L_0895D95C;
L_0895D95C:;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895D988; }
    goto L_0895D968;
L_0895D968:;
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0895D978; }
    goto L_0895D970;
L_0895D970:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895D978;
L_0895D978:;
    sp = sp + 16;
    return;
L_0895D988:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895D990;
L_0895D990:;
    v1 = LD32(s0+12);
    goto L_0895D968;
L_0895D998:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895D9A0;
L_0895D9A0:;
    v1 = LD32(s0+12);
    goto L_0895D95C;
}

/* 0895D9A8 */
void func_0895D9A8(u32 a0, float f12)
{
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_0895D9A8:;
    f1 = BITSF(LD32(a0+20));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    f2 = f1 - f12;
    if (cnd_) { goto L_0895D9C8; }
    goto L_0895D9C0;
L_0895D9C0:;
    ST8(a0+16, 0);
    return;
L_0895D9C8:;
    ST32(a0+20, FBITS(f2));
    return;
}

/* 0895D9D0 */
rv_t func_0895D9D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0895D9D0:;
    sp = sp - 80;
    v0 = LD_U8(a0+16);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0895DA7C; }
    goto L_0895D9E8;
L_0895D9E8:;
    a2 = LD32(a0+4);
    v0 = a2 < 0x11u;
    cnd_ = v0 == 0;
    t0 = a2 + 0;
    if (cnd_) { goto L_0895DA7C; }
    goto L_0895D9F8;
L_0895D9F8:;
    cnd_ = (s32)a2 <= 0;
    t2 = 0 + 0;
    if (cnd_) { goto L_0895DA8C; }
    goto L_0895DA00;
L_0895DA00:;
    a0 = LD32(a0+8);
    goto L_0895DA04;
L_0895DA04:;
    t1 = t2 << 2;
    v1 = t1 + sp;
    ST32(v1, 0);
    cnd_ = (s32)t0 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0895DA58; }
    goto L_0895DA18;
L_0895DA18:;
    v0 = LD32(s0+12);
    a3 = v1 + 0;
    v0 = t1 + v0;
    t1 = LD32(v0);
    goto L_0895DA28;
L_0895DA28:;
    v0 = a1 << 2;
    v1 = v0 + a0;
    v0 = v0 + t1;
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v1));
    f0 = BITSF(LD32(a3));
    a1 = a1 + 1;
    f1 = f1 * f2;
    v0 = (s32)a1 < (s32)t0;
    f0 = f0 + f1;
    cnd_ = v0 != 0;
    ST32(a3, FBITS(f0));
    if (cnd_) { goto L_0895DA28; }
    goto L_0895DA58;
L_0895DA58:;
    t2 = t2 + 1;
    v0 = (s32)t2 < (s32)a2;
    cnd_ = v0 != 0;
    t0 = a2 + 0;
    if (cnd_) { goto L_0895DA04; }
    goto L_0895DA68;
L_0895DA68:;
    a2 = a2 << 2;
    a1 = sp + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895DA74;
L_0895DA74:;
    a0 = s0 + 0;
    { rv_t r_ = func_0895DA94(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895DA7C;
L_0895DA7C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0895DA8C:;
    a0 = LD32(a0+8);
    goto L_0895DA68;
}

/* 0895DA94 */
rv_t func_0895DA94(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
L_0895DA94:;
    a2 = D_08B25AC0 - (23232);
    v0 = LD32(a2+23232);
    a3 = a2 + 23232;
    v1 = LD32(a3+4);
    a1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a1;
    v0 = v0 + v1;
    a1 = v0 >> 1;
    f0 = BITSF(a1);
    v1 = v1 + v0;
    ST32(a3+4, v1);
    f1 = (float)(s32)FBITS(f0);
    v1 = D_08AEDF2C - (-8404);
    f0 = BITSF(LD32(v1-8404));
    ST32(a2+23232, v0);
    v0 = D_08AEDF28 - (-8408);
    f1 = f1 * f0;
    f2 = BITSF(0);
    f0 = BITSF(LD32(v0-8408));
    a2 = LD32(a0+4);
    f3 = f2;
    f1 = f1 * f0;
    cnd_ = (s32)a2 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0895DB44; }
    goto L_0895DAF8;
L_0895DAF8:;
    v0 = D_08AEDF30 - (-8400);
    f4 = BITSF(LD32(v0-8400));
    v1 = LD32(a0+8);
    goto L_0895DB04;
L_0895DB04:;
    fcc = FCMP(f2, f1, 14);
    f0 = BITSF(LD32(v1));
    cnd_ = !fcc;
    f3 = f3 + f0;
    if (cnd_) { goto L_0895DB4C; }
    goto L_0895DB14;
L_0895DB14:;
    fcc = FCMP(f1, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(v1, 0); goto L_0895DB2C; }
    goto L_0895DB24;
L_0895DB24:;
    ST32(a0, a1);
    ST32(v1, FBITS(f4));
    goto L_0895DB2C;
L_0895DB2C:;
    f0 = BITSF(LD32(v1));
    a1 = a1 + 1;
    v0 = (s32)a1 < (s32)a2;
    f2 = f2 + f0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0895DB04; }
    goto L_0895DB44;
L_0895DB44:;
    return (rv_t){ v0, v1, f0 };
L_0895DB4C:;
    ST32(v1, 0);
    goto L_0895DB2C;
}

/* 0895DB54 */
void func_0895DB54(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_0895DB54:;
    a2 = LD32(a0+4);
    a3 = 0 + 0;
    cnd_ = (s32)a2 <= 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_0895DB98; }
    goto L_0895DB64;
L_0895DB64:;
    cnd_ = (s32)a1 <= 0;
    v0 = a3 << 2;
    if (cnd_) { goto L_0895DB88; }
    goto L_0895DB6C;
L_0895DB6C:;
    v1 = LD32(a0+12);
    v0 = v0 + v1;
    v0 = LD32(v0);
    goto L_0895DB78;
L_0895DB78:;
    a1 = a1 - 1;
    ST32(v0, 0);
    cnd_ = a1 != 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_0895DB78; }
    goto L_0895DB88;
L_0895DB88:;
    a3 = a3 + 1;
    v0 = (s32)a3 < (s32)a2;
    cnd_ = v0 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_0895DB64; }
    goto L_0895DB98;
L_0895DB98:;
    return;
}

/* 0895DBA0 */
void func_0895DBA0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895DBA0:;
    sp = sp - 16;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895DBBC;
L_0895DBBC:;
    s0 = v0 + 0;
    v0 = D_08B1B76C - (-18580);
    s1 = LD32(v0-18580);
    a0 = s1 << 8;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895DBD0;
L_0895DBD0:;
    v1 = 256;
    ST32(s0+8, v1);
    ST32(s0, v0);
    ST32(s0+12, s1);
    cnd_ = v0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_0895DC4C; }
    goto L_0895DBE8;
L_0895DBE8:;
    v0 = s1 - 1;
    cnd_ = (s32)v0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0895DDC8; }
    goto L_0895DBF4;
L_0895DBF4:;
    t2 = s1 + 0;
    t1 = v0 + 0;
    t0 = 256;
    a2 = 256;
    a1 = 0 + 0;
    goto L_0895DC08;
L_0895DC08:;
    v1 = LD32(s0);
    v0 = a3 + 1;
    a3 = v0 + 0;
    a0 = v1 + a2;
    v0 = (s32)v0 < (s32)t1;
    v1 = v1 + a1;
    ST32(v1, a0);
    a1 = a1 + t0;
    cnd_ = v0 != 0;
    a2 = a2 + t0;
    if (cnd_) { goto L_0895DC08; }
    goto L_0895DC30;
L_0895DC30:;
    v1 = t2 - 1;
    { s64 p_ = (s64)(s32)v1 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s0);
    ST32(s0+16, 0);
    v1 = lo;
    v0 = v0 + v1;
    ST32(v0, 0);
    goto L_0895DC4C;
L_0895DC4C:;
    a0 = 20;
    v0 = D_08C27EFC - (32508);
    ST32(v0+32508, s0);
    { rv_t r_ = func_08A94784(a0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895DC5C;
L_0895DC5C:;
    s1 = v0 + 0;
    v0 = D_08B1B770 - (-18576);
    s2 = LD32(v0-18576);
    s0 = 96;
    { s64 p_ = (s64)(s32)s2 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895DC78;
L_0895DC78:;
    ST32(s1, v0);
    ST32(s1+8, s0);
    ST32(s1+12, s2);
    cnd_ = v0 == 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_0895DCF0; }
    goto L_0895DC8C;
L_0895DC8C:;
    v0 = s2 - 1;
    cnd_ = (s32)v0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0895DDBC; }
    goto L_0895DC98;
L_0895DC98:;
    t2 = s2 + 0;
    t1 = v0 + 0;
    t0 = 96;
    a2 = 96;
    a1 = 0 + 0;
    goto L_0895DCAC;
L_0895DCAC:;
    v1 = LD32(s1);
    v0 = a3 + 1;
    a3 = v0 + 0;
    a0 = v1 + a2;
    v0 = (s32)v0 < (s32)t1;
    v1 = v1 + a1;
    ST32(v1, a0);
    a1 = a1 + t0;
    cnd_ = v0 != 0;
    a2 = a2 + t0;
    if (cnd_) { goto L_0895DCAC; }
    goto L_0895DCD4;
L_0895DCD4:;
    v1 = t2 - 1;
    { s64 p_ = (s64)(s32)v1 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s1);
    ST32(s1+16, 0);
    v1 = lo;
    v0 = v0 + v1;
    ST32(v0, 0);
    goto L_0895DCF0;
L_0895DCF0:;
    a0 = 20;
    v0 = D_08C27F00 - (32512);
    ST32(v0+32512, s1);
    { rv_t r_ = func_08A94784(a0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895DD00;
L_0895DD00:;
    s0 = v0 + 0;
    v0 = D_08B1B774 - (-18572);
    s1 = LD32(v0-18572);
    a0 = s1 << 5;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895DD14;
L_0895DD14:;
    v1 = 32;
    ST32(s0+8, v1);
    ST32(s0, v0);
    ST32(s0+12, s1);
    cnd_ = v0 == 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_0895DD90; }
    goto L_0895DD2C;
L_0895DD2C:;
    v0 = s1 - 1;
    cnd_ = (s32)v0 <= 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0895DDB0; }
    goto L_0895DD38;
L_0895DD38:;
    t2 = s1 + 0;
    t1 = v0 + 0;
    t0 = 32;
    a2 = 32;
    a1 = 0 + 0;
    goto L_0895DD4C;
L_0895DD4C:;
    v1 = LD32(s0);
    v0 = a3 + 1;
    a3 = v0 + 0;
    a0 = v1 + a2;
    v0 = (s32)v0 < (s32)t1;
    v1 = v1 + a1;
    ST32(v1, a0);
    a1 = a1 + t0;
    cnd_ = v0 != 0;
    a2 = a2 + t0;
    if (cnd_) { goto L_0895DD4C; }
    goto L_0895DD74;
L_0895DD74:;
    v1 = t2 - 1;
    { s64 p_ = (s64)(s32)v1 * (s32)t0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s0);
    ST32(s0+16, 0);
    v1 = lo;
    v0 = v0 + v1;
    ST32(v0, 0);
    goto L_0895DD90;
L_0895DD90:;
    v0 = D_08C27F04 - (32516);
    ST32(v0+32516, s0);
    sp = sp + 16;
    return;
L_0895DDB0:;
    t0 = LD32(s0+8);
    t2 = LD32(s0+12);
    goto L_0895DD74;
L_0895DDBC:;
    t0 = LD32(s1+8);
    t2 = LD32(s1+12);
    goto L_0895DCD4;
L_0895DDC8:;
    t0 = LD32(s0+8);
    t2 = LD32(s0+12);
    goto L_0895DC30;
}

/* 0895DDD4 */
void func_0895DDD4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895DDD4:;
    sp = sp - 16;
    s1 = D_08C27EFC - (32508);
    s0 = LD32(s1+32508);
    cnd_ = s0 == 0;
    s2 = D_08C27F00 - (32512);
    if (cnd_) { goto L_0895DE10; }
    goto L_0895DDF8;
L_0895DDF8:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0895DE90; }
    goto L_0895DE04;
L_0895DE04:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895DE0C;
L_0895DE0C:;
    s2 = D_08C27F00 - (32512);
    goto L_0895DE10;
L_0895DE10:;
    s0 = LD32(s2+32512);
    cnd_ = s0 == 0;
    ST32(s1+32508, 0);
    if (cnd_) { goto L_0895DE30; }
    goto L_0895DE1C;
L_0895DE1C:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0895DE80; }
    goto L_0895DE28;
L_0895DE28:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895DE30;
L_0895DE30:;
    s1 = D_08C27F04 - (32516);
    s0 = LD32(s1+32516);
    cnd_ = s0 == 0;
    ST32(s2+32512, 0);
    if (cnd_) { goto L_0895DE54; }
    goto L_0895DE40;
L_0895DE40:;
    a0 = LD32(s0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0895DE70; }
    goto L_0895DE4C;
L_0895DE4C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895DE54;
L_0895DE54:;
    ST32(s1+32516, 0);
    sp = sp + 16;
    return;
L_0895DE70:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895DE78;
L_0895DE78:;
    goto L_0895DE4C;
L_0895DE80:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895DE88;
L_0895DE88:;
    goto L_0895DE28;
L_0895DE90:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895DE98;
L_0895DE98:;
    goto L_0895DE04;
}

/* 0895DEA0 */
u32 func_0895DEA0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_0895DEA0:;
    v0 = (s32)a0 < 17;
    cnd_ = v0 == 0;
    v0 = (s32)a0 < 49;
    if (cnd_) { goto L_0895DEE8; }
    goto L_0895DEAC;
L_0895DEAC:;
    v0 = D_08C27F04 - (32516);
    a2 = LD32(v0+32516);
    v1 = 32;
    goto L_0895DEB8;
L_0895DEB8:;
    a0 = LD32(a2+4);
    ST32(a1, v1);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0895DEE0; }
    goto L_0895DEC8;
L_0895DEC8:;
    v0 = LD32(a2+16);
    v1 = LD32(a0);
    a1 = a0 + 0;
    v0 = v0 + 1;
    ST32(a2+4, v1);
    ST32(a2+16, v0);
    goto L_0895DEE0;
L_0895DEE0:;
    v0 = a1 + 0;
    return v0;
L_0895DEE8:;
    cnd_ = v0 == 0;
    v0 = (s32)a0 < 129;
    if (cnd_) { goto L_0895DF00; }
    goto L_0895DEF0;
L_0895DEF0:;
    v0 = D_08C27F00 - (32512);
    a2 = LD32(v0+32512);
    v1 = 96;
    goto L_0895DEB8;
L_0895DF00:;
    cnd_ = v0 == 0;
    v1 = 256;
    if (cnd_) { goto L_0895DF14; }
    goto L_0895DF08;
L_0895DF08:;
    v0 = D_08C27EFC - (32508);
    a2 = LD32(v0+32508);
    goto L_0895DEB8;
L_0895DF14:;
    v0 = 0 + 0;
    ST32(a1, 0);
    return v0;
}

/* 0895DF20 */
void func_0895DF20(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_0895DF20:;
    v0 = D_08C27F04 - (32516);
    a2 = LD32(v0+32516);
    a3 = a0 + 0;
    a1 = LD32(a2+12);
    a0 = LD32(a2+8);
    v1 = LD32(a2);
    { s64 p_ = (s64)(s32)a0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = a3 < v1;
    v0 = v0 ^ 0x1;
    a0 = lo;
    v1 = v1 + a0;
    v1 = a3 < v1;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a2+16); goto L_0895DF98; }
    goto L_0895DF5C;
L_0895DF5C:;
    v0 = D_08C27F00 - (32512);
    a2 = LD32(v0+32512);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    v1 = LD32(a2);
    { s64 p_ = (s64)(s32)a0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = a3 < v1;
    v0 = v0 ^ 0x1;
    a0 = lo;
    v1 = v1 + a0;
    v1 = a3 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    v0 = D_08C27EFC - (32508);
    if (cnd_) { goto L_0895DFB0; }
    goto L_0895DF94;
L_0895DF94:;
    v0 = LD32(a2+16);
    goto L_0895DF98;
L_0895DF98:;
    v1 = LD32(a2+4);
    v0 = v0 - 1;
    ST32(a3, v1);
    ST32(a2+16, v0);
    ST32(a2+4, a3);
    return;
L_0895DFB0:;
    a2 = LD32(v0+32508);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    v1 = LD32(a2);
    { s64 p_ = (s64)(s32)a0 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = a3 < v1;
    v0 = v0 ^ 0x1;
    a0 = lo;
    v1 = v1 + a0;
    v1 = a3 < v1;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895DFFC; }
    goto L_0895DFE4;
L_0895DFE4:;
    v0 = LD32(a2+16);
    v1 = LD32(a2+4);
    v0 = v0 - 1;
    ST32(a3, v1);
    ST32(a2+16, v0);
    ST32(a2+4, a3);
    goto L_0895DFFC;
L_0895DFFC:;
    return;
}

/* 0895E004 */
void func_0895E004(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_0895E004:;
    v0 = D_08B20494 - (1172);
    a3 = v0 + 1172;
    a1 = LD_U16(a3+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    t1 = D_08C27EE0 - (32480);
    v1 = D_08B1B768 - (-18584);
    a1 = a0 < a1;
    a2 = v0 << 3;
    t0 = t1 + 32480;
    ST32(v1-18584, a0);
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895E040; }
    goto L_0895E038;
L_0895E038:;
    v0 = LD32(a3+12);
    v0 = v0 + a2;
    goto L_0895E040;
L_0895E040:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(t0+8, FBITS(f0));
    ST32(t1+32480, FBITS(f1));
    ST32(t0+4, FBITS(f2));
    return;
}

/* 0895E05C */
rv_t func_0895E05C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0895E05C:;
    v0 = D_08B1B768 - (-18584);
    v1 = LD32(v0-18584);
    v0 = a0 ^ v1;
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 0895E070 */
rv_t func_0895E070(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895E070:;
    v0 = D_08B20494 - (1172);
    v1 = D_08C27EE0 - (32480);
    a2 = v0 + 1172;
    a3 = v1 + 32480;
    f5 = BITSF(LD32(v1+32480));
    v1 = LD_U16(a2+10);
    v0 = a0 << 1;
    v0 = v0 + a0;
    sp = sp - 32;
    a0 = a0 < v1;
    a1 = v0 << 3;
    v1 = sp + 0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895E0B0; }
    goto L_0895E0A8;
L_0895E0A8:;
    v0 = LD32(a2+12);
    v0 = v0 + a1;
    goto L_0895E0B0;
L_0895E0B0:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(a3+8));
    f3 = BITSF(LD32(a3+4));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    ST32(v1, FBITS(f1));
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+8));
    f0 = f0 - f3;
    f1 = f1 - f5;
    f2 = f2 - f4;
    ST32(sp+20, FBITS(f0));
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {vr1=BITSF(v0);}
    v0 = FBITS(f2);
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    sp = sp + 32;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 0895E124 */
rv_t func_0895E124(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0895E124:;
    a0 = a0 & 0xffff;
    v0 = a0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_0895E168; }
    goto L_0895E134;
L_0895E134:;
    v0 = a0 & 0x4;
    cnd_ = v0 == 0;
    v0 = a0 & 0x2;
    if (cnd_) { goto L_0895E1BC; }
    goto L_0895E140;
L_0895E140:;
    v0 = a1 & 0x2;
    goto L_0895E144;
L_0895E144:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895E168; }
    goto L_0895E14C;
L_0895E14C:;
    v0 = 0x10000u;
    goto L_0895E150;
L_0895E150:;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0895E170; }
    goto L_0895E15C;
L_0895E15C:;
    v0 = a0 ^ 0x100;
    v1 = (v0 >> 8) & 0x1;
    goto L_0895E164;
L_0895E164:;
    v1 = v1 ^ 0x1;
    goto L_0895E168;
L_0895E168:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
L_0895E170:;
    v0 = 0x20000u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0x40000u; goto L_0895E18C; }
    goto L_0895E180;
L_0895E180:;
    v0 = a0 ^ 0x200;
    v1 = (v0 >> 9) & 0x1;
    goto L_0895E164;
L_0895E18C:;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0x80000u; goto L_0895E1A4; }
    goto L_0895E198;
L_0895E198:;
    v0 = a0 ^ 0x400;
    v1 = (v0 >> 10) & 0x1;
    goto L_0895E164;
L_0895E1A4:;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = v1 ^ 0x1; goto L_0895E168; }
    goto L_0895E1B0;
L_0895E1B0:;
    v0 = a0 ^ 0x800;
    v1 = (v0 >> 11) & 0x1;
    goto L_0895E164;
L_0895E1BC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0x10000u; goto L_0895E150; }
    goto L_0895E1C4;
L_0895E1C4:;
    v0 = a1 & 0x1;
    v1 = 1;
    goto L_0895E144;
}

/* 0895E1D0 */
u64 func_0895E1D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_0895E1D0:;
    a2 = a0 & 0xffff;
    v1 = 0x10000u;
    v0 = 0x20000u;
    a0 = a2 ^ 0x100;
    v1 = a1 & v1;
    t0 = a1 & v0;
    a3 = a2 ^ 0x200;
    cnd_ = v1 != 0;
    v0 = (a0 >> 8) & 0x1;
    if (cnd_) { goto L_0895E228; }
    goto L_0895E1F4;
L_0895E1F4:;
    v0 = 0x40000u;
    t1 = a1 & v0;
    t2 = a2 ^ 0x400;
    cnd_ = t0 != 0;
    v0 = (a3 >> 9) & 0x1;
    if (cnd_) { goto L_0895E228; }
    goto L_0895E208;
L_0895E208:;
    v0 = 0x80000u;
    v1 = a1 & v0;
    a0 = a2 ^ 0x800;
    cnd_ = t1 != 0;
    v0 = (t2 >> 10) & 0x1;
    if (cnd_) { goto L_0895E228; }
    goto L_0895E21C;
L_0895E21C:;
    cnd_ = v1 != 0;
    v0 = (a0 >> 11) & 0x1;
    if (cnd_) { goto L_0895E228; }
    goto L_0895E224;
L_0895E224:;
    v0 = 1;
    goto L_0895E228;
L_0895E228:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0895E230 */
rv_t func_0895E230(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895E230:;
    sp = sp - 16;
    v0 = D_08B20494 - (1172);
    a2 = v0 + 1172;
    v1 = LD_U16(a2+10);
    a0 = a0 & 0xffff;
    v0 = D_08C27EF8 - (32504);
    a1 = LD32(v0+32504);
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    v1 = v0 << 3;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895E270; }
    goto L_0895E268;
L_0895E268:;
    v0 = LD32(a2+12);
    v0 = v0 + v1;
    goto L_0895E270;
L_0895E270:;
    a0 = LD_U16(v0+22);
    { u64 r_ = func_0895E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895E278;
L_0895E278:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895E284 */
u32 func_0895E284(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0895E284:;
    sp = sp - 64;
    s3 = D_08B20494 - (1172);
    a2 = 251;
    s0 = s3 + 1172;
    a3 = 0 + 0;
    s2 = a1 + 0;
    a1 = a0 + 0;
    a0 = s0 + 0;
    s4 = D_08C27EF8 - (32504);
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_0895E2C4;
L_0895E2C4:;
    s1 = v0 & 0xffff;
    v1 = LD_U16(s0+10);
    v0 = s1 << 1;
    v0 = v0 + s1;
    v1 = s1 < v1;
    a0 = v0 << 3;
    a1 = s2 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895E2F0; }
    goto L_0895E2E8;
L_0895E2E8:;
    v0 = LD32(s0+12);
    v0 = v0 + a0;
    goto L_0895E2F0;
L_0895E2F0:;
    a0 = LD_U16(v0+22);
    { u64 r_ = func_0895E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895E2F8;
L_0895E2F8:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0895E328; }
    goto L_0895E304;
L_0895E304:;
    v0 = a1 + 0;
    sp = sp + 64;
    return v0;
L_0895E328:;
    s0 = D_08C27F08 - (32520);
    s0 = s0 + 32520;
    ST32(sp+16, 0);
    func_0895E004(a0);
    goto L_0895E338;
L_0895E338:;
    t2 = ((u32)(uintptr_t)func_0895E070) - (-8080);
    t3 = ((u32)(uintptr_t)func_08AA0FC8) - (4040);
    v0 = ((u32)(uintptr_t)func_0895E230) - (-7632);
    v1 = ((u32)(uintptr_t)func_08AA0FF4) - (4084);
    v0 = v0 - 7632;
    v1 = v1 + 4084;
    a1 = s0 + 0;
    a0 = s3 + 1172;
    a2 = sp + 16;
    t0 = s1 + 0;
    t1 = s2 + 0;
    t2 = t2 - 8080;
    t3 = t3 + 4040;
    a3 = 8;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(s4+32504, s2);
    func_088043E4(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0895E380;
L_0895E380:;
    ST32(s4+32504, 0);
    { u64 r_ = func_0895E5D8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895E388;
L_0895E388:;
    a1 = 0xffff;
    v1 = LD32(sp+16);
    v0 = v1 << 1;
    cnd_ = (s32)v1 <= 0;
    v0 = v0 + s0;
    if (cnd_) { goto L_0895E304; }
    goto L_0895E39C;
L_0895E39C:;
    a1 = LD_U16(v0-2);
    goto L_0895E304;
}

/* 0895E3A4 */
u64 func_0895E3A4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0895E3A4:;
    sp = sp - 128;
    s4 = D_08B20494 - (1172);
    a3 = 0 + 0;
    s0 = s4 + 1172;
    s3 = a2 + 0;
    a2 = 251;
    s2 = a1 + 0;
    a1 = a0 + 0;
    a0 = s0 + 0;
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_0895E3E4;
L_0895E3E4:;
    s1 = v0 & 0xffff;
    v1 = LD_U16(s0+10);
    v1 = s1 < v1;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0895E40C; }
    goto L_0895E3F8;
L_0895E3F8:;
    v1 = LD32(s0+12);
    v0 = s1 << 1;
    v0 = v0 + s1;
    v0 = v0 << 3;
    a0 = v1 + v0;
    goto L_0895E40C;
L_0895E40C:;
    a0 = LD_U16(a0+22);
    a1 = s3 + 0;
    { u64 r_ = func_0895E1D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895E418;
L_0895E418:;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0895E5B4; }
    goto L_0895E420;
L_0895E420:;
    f5 = BITSF(LD32(s2+8));
    f4 = BITSF(LD32(s2));
    f3 = BITSF(LD32(s2+4));
    {u32 a_=sp+(80);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    f1 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+64, 0);
    fcc = FCMP(f0, f1, 2);
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_0895E4AC; }
    goto L_0895E470;
L_0895E470:;
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
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_0895E4AC;
L_0895E4AC:;
    a0 = s1 + 0;
    func_0895E004(a0);
    goto L_0895E4B4;
L_0895E4B4:;
    a0 = s4 + 1172;
    v0 = LD_U16(a0+10);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0895E4DC; }
    goto L_0895E4C8;
L_0895E4C8:;
    v1 = LD32(a0+12);
    v0 = s1 << 1;
    v0 = v0 + s1;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0895E4DC;
L_0895E4DC:;
    v0 = D_08AEDF34 - (-8396);
    f0 = BITSF(LD32(v0-8396));
    f2 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    f3 = BITSF(LD32(sp+16));
    f2 = f2 * f0;
    f1 = f1 * f0;
    f3 = f3 * f0;
    v0 = D_08C27F08 - (32520);
    ST32(sp+52, FBITS(f2));
    s2 = v0 + 32520;
    v0 = D_08C27EE0 - (32480);
    ST32(sp+56, FBITS(f1));
    t2 = ((u32)(uintptr_t)func_0895E070) - (-8080);
    t3 = ((u32)(uintptr_t)func_08AA0FC8) - (4040);
    ST32(sp+48, FBITS(f3));
    a1 = s2 + 0;
    a0 = s4 + 1172;
    f5 = BITSF(LD32(v1+8));
    f4 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1));
    f5 = f5 + f1;
    f4 = f4 + f2;
    f0 = f0 + f3;
    v1 = v0 + 32480;
    ST32(v1+8, FBITS(f5));
    a2 = sp + 64;
    t0 = s1 + 0;
    ST32(v1+4, FBITS(f4));
    v1 = ((u32)(uintptr_t)func_08AA0FF4) - (4084);
    v1 = v1 + 4084;
    ST32(v0+32480, FBITS(f0));
    v0 = ((u32)(uintptr_t)func_0895E230) - (-7632);
    v0 = v0 - 7632;
    t1 = s3 + 0;
    t2 = t2 - 8080;
    t3 = t3 + 4040;
    s0 = D_08C27EF8 - (32504);
    a3 = 8;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(s0+32504, s3);
    func_088043E4(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0895E594;
L_0895E594:;
    ST32(s0+32504, 0);
    { u64 r_ = func_0895E5D8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895E59C;
L_0895E59C:;
    v0 = LD32(sp+64);
    cnd_ = (s32)v0 <= 0;
    a1 = 0xffff;
    if (cnd_) { goto L_0895E5B4; }
    goto L_0895E5A8;
L_0895E5A8:;
    v0 = v0 << 1;
    v0 = v0 + s2;
    a1 = LD_U16(v0-2);
    goto L_0895E5B4;
L_0895E5B4:;
    v0 = a1 + 0;
    sp = sp + 128;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0895E5D8 */
u64 func_0895E5D8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0895E5D8:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    a0 = D_08C27EE0 - (32480);
    a1 = a0 + 32480;
    v1 = (u32)-1;
    v0 = D_08B1B768 - (-18584);
    ST32(v0-18584, v1);
    ST32(a0+32480, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f2));
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0895E610 */
u32 func_0895E610(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0895E610:;
    v0 = D_08B20494 - (1172);
    v1 = v0 + 1172;
    a2 = LD_U16(a1);
    v0 = LD_U16(v1+10);
    sp = sp - 48;
    v0 = a2 < v0;
    cnd_ = v0 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_0895E644; }
    goto L_0895E630;
L_0895E630:;
    v1 = LD32(v1+12);
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 3;
    t1 = v1 + v0;
    goto L_0895E644;
L_0895E644:;
    cnd_ = t1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895E894; }
    goto L_0895E64C;
L_0895E64C:;
    f8 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(t1));
    f2 = BITSF(LD32(t1+4));
    f0 = BITSF(LD32(t1+8));
    f6 = BITSF(LD32(a0));
    f7 = BITSF(LD32(a0+4));
    f0 = f8 - f0;
    f1 = f6 - f1;
    f2 = f7 - f2;
    ST32(sp+8, FBITS(f0));
    v0 = FBITS(f1);
    ST32(sp+4, FBITS(f2));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f0);
    ST32(sp, FBITS(f1));
    v1 = FBITS(f2);
    {v[1]=BITSF(v1);}
    f0 = BITSF(LD32(t1+12));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f0 = f0 * f0;
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0895E894; }
    goto L_0895E6B8;
L_0895E6B8:;
    v1 = LD_U8(t1+20);
    v0 = D_08AEDF3C - (-8388);
    f4 = BITSF(LD32(v0-8388));
    t3 = 0 + 0;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0895E7A8; }
    goto L_0895E6D0;
L_0895E6D0:;
    a2 = LD32(t1+16);
    v0 = D_08B20494 - (1172);
    t2 = v0 + 1172;
    t0 = LD_U16(a2);
    goto L_0895E6E0;
L_0895E6E0:;
    a0 = LD_U16(t2+10);
    a3 = a3 + 1;
    v1 = t0 & 0xffff;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = v1 < a0;
    a2 = a2 + 8;
    a0 = v0 << 3;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895E710; }
    goto L_0895E708;
L_0895E708:;
    v0 = LD32(t2+12);
    v0 = v0 + a0;
    goto L_0895E710;
L_0895E710:;
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f1 = f1 - f6;
    f2 = f2 - f7;
    f3 = f3 - f8;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    ST32(sp, FBITS(f1));
    v1 = FBITS(f1);
    ST32(sp+8, FBITS(f3));
    {v[0]=BITSF(v1);}
    v1 = FBITS(f2);
    ST32(sp+4, FBITS(f2));
    {v[1]=BITSF(v1);}
    v1 = FBITS(f3);
    f0 = BITSF(LD32(v0+12));
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    f0 = f0 * f0;
    {v1=FBITS(v[0]);}
    f1 = BITSF(v1);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(t1+20); goto L_0895E794; }
    goto L_0895E774;
L_0895E774:;
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(t1+20); goto L_0895E794; }
    goto L_0895E784;
L_0895E784:;
    f4 = BITSF(v1);
    ST16(a1, t0);
    t3 = 1;
    v0 = LD_U8(t1+20);
    goto L_0895E794;
L_0895E794:;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD_U16(a2); goto L_0895E6E0; }
    goto L_0895E7A0;
L_0895E7A0:;
    cnd_ = t3 != 0;
    v0 = t3 + 0;
    if (cnd_) { goto L_0895E894; }
    goto L_0895E7A8;
L_0895E7A8:;
    f3 = BITSF(LD32(t1));
    f4 = BITSF(LD32(t1+4));
    f5 = BITSF(LD32(t1+8));
    f3 = f6 - f3;
    f4 = f7 - f4;
    f5 = f8 - f5;
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = FBITS(f3);
    v1 = FBITS(f4);
    {v[12]=BITSF(v0);}
    f1 = BITSF(0);
    {v[13]=BITSF(v1);}
    v0 = FBITS(f5);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+4, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_0895E838; }
    goto L_0895E800;
L_0895E800:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    ST32(sp, v1);
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_0895E838;
L_0895E838:;
    v0 = D_08AEDF40 - (-8384);
    f1 = BITSF(LD32(t1+12));
    f0 = BITSF(LD32(v0-8384));
    f5 = BITSF(LD32(sp+8));
    f4 = BITSF(LD32(sp));
    f1 = f1 * f0;
    f3 = BITSF(LD32(sp+4));
    f5 = f5 * f1;
    f4 = f4 * f1;
    f3 = f3 * f1;
    ST32(sp+40, FBITS(f5));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f3));
    f0 = BITSF(LD32(t1+8));
    f1 = BITSF(LD32(t1));
    f2 = BITSF(LD32(t1+4));
    f0 = f0 + f5;
    f1 = f1 + f4;
    f2 = f2 + f3;
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    v0 = t3 + 0;
    goto L_0895E894;
L_0895E894:;
    sp = sp + 48;
    return v0;
}

/* 0895E89C */
rv_t func_0895E89C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_0895E89C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    v0 = D_08B45A9C - (23196);
    a3 = D_08C27EE0 - (32480);
    v1 = D_08C27EEC - (32492);
    a1 = a1 & a0;
    t0 = v0 + 23196;
    t1 = a3 + 32480;
    cnd_ = a1 == 0;
    a2 = v1 + 32492;
    if (cnd_) { goto L_0895E8F0; }
    goto L_0895E8CC;
L_0895E8CC:;
    f0 = BITSF(LD32(v0+23196));
    f1 = BITSF(LD32(t0+8));
    f2 = BITSF(LD32(t0+4));
    ST32(v1+32492, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    ST32(a3+32480, FBITS(f0));
    ST32(t1+8, FBITS(f1));
    ST32(t1+4, FBITS(f2));
    goto L_0895E8F0;
L_0895E8F0:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895E8F8 */
rv_t func_0895E8F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895E8F8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895E89C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895E90C;
L_0895E90C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895E918 */
u32 func_0895E918(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895E918:;
    sp = sp - 16;
    a0 = 4;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895E928;
L_0895E928:;
    v1 = D_08AF95D0 - (-27184);
    v1 = v1 - 27184;
    ST32(v0, v1);
    sp = sp + 16;
    return v0;
}

/* 0895E940 */
void func_0895E940(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895E940:;
    sp = sp - 32;
    v0 = D_08B1B77A - (-18566);
    v1 = LD_U8(v0-18566);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0895E964; }
    goto L_0895E958;
L_0895E958:;
    goto L_0895E95C;
L_0895E95C:;
    sp = sp + 32;
    return;
L_0895E964:;
    a0 = 0 + 0;
    func_088CD5B0(a0);
    goto L_0895E96C;
L_0895E96C:;
    v0 = D_08C2520C - (21004);
    v1 = LD32(v0+21004);
    v0 = v0 + 21004;
    ST32(sp, v0);
    cnd_ = v1 == 0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_0895E958; }
    goto L_0895E984;
L_0895E984:;
    a0 = LD32(v1);
    goto L_0895E988;
L_0895E988:;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895E998;
L_0895E998:;
    a0 = sp + 0;
    func_08ABBDB0(a0);
    goto L_0895E9A0;
L_0895E9A0:;
    v1 = LD32(sp+4);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_0895E988; }
    goto L_0895E9AC;
L_0895E9AC:;
    goto L_0895E95C;
}

/* 0895E9B4 */
rv_t func_0895E9B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0895E9B4:;
    sp = sp - 48;
    a2 = D_08C29FC4 - (-24636);
    v0 = a2 - 24636;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0895EA48; }
    goto L_0895E9FC;
L_0895E9FC:;
    a2 = LD32(a2-24636);
    a3 = a1 + 0;
    goto L_0895EA04;
L_0895EA04:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0895EA38; }
    goto L_0895EA1C;
L_0895EA1C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_0895EA4C; }
    goto L_0895EA2C;
L_0895EA2C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0895EA1C; }
    goto L_0895EA38;
L_0895EA38:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0895EA04; }
    goto L_0895EA48;
L_0895EA48:;
    a0 = LD32(sp+8);
    goto L_0895EA4C;
L_0895EA4C:;
    cnd_ = a0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_0895EA84; }
    goto L_0895EA54;
L_0895EA54:;
    a0 = LD32(a0);
    goto L_0895EA58;
L_0895EA58:;
    v0 = LD32(a0+96);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895EB44; }
    goto L_0895EA68;
L_0895EA68:;
    a0 = sp + 0;
    goto L_0895EA6C;
L_0895EA6C:;
    a1 = 1;
    { u64 r_ = func_08ABF6B0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EA74;
L_0895EA74:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_0895EA58; }
    goto L_0895EA80;
L_0895EA80:;
    s1 = LD32(sp);
    goto L_0895EA84;
L_0895EA84:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_0895EB08; }
    goto L_0895EA94;
L_0895EA94:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0895EB08; }
    goto L_0895EAA0;
L_0895EAA0:;
    v0 = LD32(s1);
    goto L_0895EAA4;
L_0895EAA4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0895EAF8; }
    goto L_0895EAB8;
L_0895EAB8:;
    v0 = LD_U8(s0+8);
    goto L_0895EABC;
L_0895EABC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0895EB3C; }
    goto L_0895EAC4;
L_0895EAC4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0895EB2C; }
    goto L_0895EACC;
L_0895EACC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0895EAD4;
L_0895EAD4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EAE0;
L_0895EAE0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0895EAEC;
L_0895EAEC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_0895EABC; }
    goto L_0895EAF4;
L_0895EAF4:;
    v1 = LD32(s1+4);
    goto L_0895EAF8;
L_0895EAF8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0895EAA4; }
    goto L_0895EB08;
L_0895EB08:;
    v0 = 1;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0895EB2C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0895EAD4;
L_0895EB3C:;
    s0 = LD32(s0+4);
    goto L_0895EAEC;
L_0895EB44:;
    v0 = func_089826E8(a0, t1, t2, t3);
    goto L_0895EB4C;
L_0895EB4C:;
    a0 = sp + 0;
    goto L_0895EA6C;
}

/* 0895EB54 */
rv_t func_0895EB54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0895EB54:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0895EB5C */
rv_t func_0895EB5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895EB5C:;
    sp = sp - 32;
    s0 = D_08B1E460 - (-7072);
    { rv_t r_ = func_08923DD0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EB74;
L_0895EB74:;
    v0 = func_089560B4();
    goto L_0895EB7C;
L_0895EB7C:;
    func_08956118();
    goto L_0895EB84;
L_0895EB84:;
    func_0895DBA0(0, 0, 0);
    goto L_0895EB8C;
L_0895EB8C:;
    v0 = LD32(s0-7072);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895EDD8; }
    goto L_0895EB98;
L_0895EB98:;
    a0 = D_08ADAE74 - (-20876);
    a1 = ((u32)(uintptr_t)func_0895E9B4) - (-5708);
    a0 = a0 - 20876;
    a1 = a1 - 5708;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_0895EBB4;
L_0895EBB4:;
    a0 = D_08ADAE8C - (-20852);
    a1 = ((u32)(uintptr_t)func_0895EB54) - (-5292);
    a0 = a0 - 20852;
    a1 = a1 - 5292;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_0895EBD0;
L_0895EBD0:;
    v1 = D_08AEDF44 - (-8380);
    f20 = BITSF(LD32(v1-8380));
    f12 = BITSF(0);
    a0 = D_08ADAEAC - (-20820);
    a1 = D_08B1BBB0 - (-17488);
    f13 = f20;
    a0 = a0 - 20820;
    a1 = a1 - 17488;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895EBFC;
L_0895EBFC:;
    f12 = BITSF(0);
    a0 = D_08ADAEEC - (-20756);
    a1 = D_08B1BBB4 - (-17484);
    f13 = f20;
    a0 = a0 - 20756;
    a1 = a1 - 17484;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895EC20;
L_0895EC20:;
    f12 = BITSF(0);
    a0 = D_08ADAF3C - (-20676);
    a1 = D_08B1BBB8 - (-17480);
    f13 = f20;
    a0 = a0 - 20676;
    a1 = a1 - 17480;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895EC44;
L_0895EC44:;
    f12 = BITSF(0);
    a0 = D_08ADAF88 - (-20600);
    a1 = D_08B1BBBC - (-17476);
    f13 = f20;
    a0 = a0 - 20600;
    a1 = a1 - 17476;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895EC68;
L_0895EC68:;
    f12 = BITSF(0);
    a0 = D_08ADAFDC - (-20516);
    a1 = D_08B1BBC0 - (-17472);
    f13 = f20;
    a0 = a0 - 20516;
    a1 = a1 - 17472;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895EC8C;
L_0895EC8C:;
    v0 = D_08AEDF48 - (-8376);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8376));
    a0 = D_08ADB020 - (-20448);
    a1 = D_08B1B744 - (-18620);
    a0 = a0 - 20448;
    a1 = a1 - 18620;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895ECB4;
L_0895ECB4:;
    v1 = D_08AEDF4C - (-8372);
    f20 = BITSF(LD32(v1-8372));
    f12 = BITSF(0);
    a0 = D_08ADB054 - (-20396);
    a1 = D_08C27B58 - (31576);
    f13 = f20;
    a0 = a0 - 20396;
    a1 = a1 + 31576;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895ECE0;
L_0895ECE0:;
    v0 = D_08AEDF50 - (-8368);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8368));
    a0 = D_08ADB084 - (-20348);
    a1 = D_08B1B748 - (-18616);
    a0 = a0 - 20348;
    a1 = a1 - 18616;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895ED08;
L_0895ED08:;
    f12 = BITSF(0);
    a0 = D_08ADB0BC - (-20292);
    a1 = D_08C27B60 - (31584);
    f13 = f20;
    a0 = a0 - 20292;
    a1 = a1 + 31584;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895ED2C;
L_0895ED2C:;
    v0 = D_08AEDF54 - (-8364);
    f12 = BITSF(0);
    f13 = BITSF(LD32(v0-8364));
    a0 = D_08ADB0F0 - (-20240);
    a1 = D_08B1B74C - (-18612);
    a0 = a0 - 20240;
    a1 = a1 - 18612;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897854(a0, a1, a2, a3, f12, f13);
    goto L_0895ED54;
L_0895ED54:;
    a0 = D_08ADB128 - (-20184);
    a1 = D_08C28038 - (-32712);
    a0 = a0 - 20184;
    a1 = a1 - 32712;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895ED70;
L_0895ED70:;
    a0 = D_08ADB16C - (-20116);
    a1 = D_08C28039 - (-32711);
    a0 = a0 - 20116;
    a1 = a1 - 32711;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895ED8C;
L_0895ED8C:;
    a0 = D_08ADB1B4 - (-20044);
    a1 = D_08B1B778 - (-18568);
    a0 = a0 - 20044;
    a1 = a1 - 18568;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EDA8;
L_0895EDA8:;
    a0 = D_08ADB204 - (-19964);
    a1 = D_08B1B779 - (-18567);
    a0 = a0 - 19964;
    a1 = a1 - 18567;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EDC4;
L_0895EDC4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895EDD8:;
    a0 = 12;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EDE0;
L_0895EDE0:;
    v1 = D_08B1E468 - (-7064);
    a0 = LD32(v1-7064);
    v1 = 56;
    ST32(s0-7072, v0);
    ST32(v0+4, a0);
    ST32(v0+8, v1);
    ST32(v0, 0);
    goto L_0895EB98;
}

/* 0895EE00 */
rv_t func_0895EE00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895EE00:;
    sp = sp - 16;
    { rv_t r_ = func_08923F7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EE10;
L_0895EE10:;
    { rv_t r_ = func_08957154(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EE18;
L_0895EE18:;
    v0 = D_08C2933C - (-27844);
    v0 = v0 - 27844;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0895EE54; }
    goto L_0895EE28;
L_0895EE28:;
    v1 = LD32(v0+52);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = (s32)v1 < 2;
    if (cnd_) { goto L_0895EE70; }
    goto L_0895EE38;
L_0895EE38:;
    cnd_ = a0 != 0;
    v0 = D_08B1B758 - (-18600);
    if (cnd_) { goto L_0895EE4C; }
    goto L_0895EE40;
L_0895EE40:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = D_08B1B758 - (-18600);
    if (cnd_) { goto L_0895EE5C; }
    goto L_0895EE4C;
L_0895EE4C:;
    ST32(v0-18600, 0);
    goto L_0895EE50;
L_0895EE50:;
    goto L_0895EE54;
L_0895EE54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895EE5C:;
    v0 = D_08AEDF5C - (-8356);
    f0 = BITSF(LD32(v0-8356));
    goto L_0895EE64;
L_0895EE64:;
    v1 = D_08B1B758 - (-18600);
    ST32(v1-18600, FBITS(f0));
    goto L_0895EE50;
L_0895EE70:;
    v0 = D_08AEDF58 - (-8360);
    f0 = BITSF(LD32(v0-8360));
    goto L_0895EE64;
}

/* 0895EE7C */
rv_t func_0895EE7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895EE7C:;
    sp = sp - 32;
    s4 = D_08B1E460 - (-7072);
    s0 = LD32(s4-7072);
    s3 = a0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0895EEE0; }
    goto L_0895EEA8;
L_0895EEA8:;
    s2 = LD32(s0);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_0895EED4; }
    goto L_0895EEB4;
L_0895EEB4:;
    v0 = LD32(s2);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895EF30; }
    goto L_0895EEC0;
L_0895EEC0:;
    s1 = LD32(s2+12);
    goto L_0895EEC4;
L_0895EEC4:;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0895EF18; }
    goto L_0895EECC;
L_0895EECC:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EED4;
L_0895EED4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EEDC;
L_0895EEDC:;
    ST32(s4-7072, 0);
    goto L_0895EEE0;
L_0895EEE0:;
    func_0895DDD4(t1, t2, t3);
    goto L_0895EEE8;
L_0895EEE8:;
    func_089561CC(0, 0, 0);
    goto L_0895EEF0;
L_0895EEF0:;
    a0 = s3 + 0;
    { rv_t r_ = func_08923ED8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EEF8;
L_0895EEF8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895EF18:;
    func_08AA3740(a0, t1, t2, t3);
    goto L_0895EF20;
L_0895EF20:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EF28;
L_0895EF28:;
    goto L_0895EECC;
L_0895EF30:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EF38;
L_0895EF38:;
    s1 = LD32(s2+12);
    goto L_0895EEC4;
}

/* 0895EF40 */
u64 func_0895EF40(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895EF40:;
    sp = sp - 32;
    v0 = D_08C25204 - (20996);
    v1 = LD32(v0+20996);
    cnd_ = v1 == 0;
    a1 = a0 & 0xff;
    if (cnd_) { goto L_0895EFA8; }
    goto L_0895EF5C;
L_0895EF5C:;
    v0 = 88;
    a0 = 87;
    if (a1 == 0) a0 = v0;
    a2 = 0 + 0;
    a1 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EF78;
L_0895EF78:;
    s0 = v0 + 0;
    v0 = D_08C2520C - (21004);
    a0 = sp + 0;
    v0 = v0 + 21004;
    ST32(sp, v0);
    ST32(sp+4, 0);
    func_08ABBDB0(a0);
    goto L_0895EF94;
L_0895EF94:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_0895EFB8; }
    goto L_0895EFA0;
L_0895EFA0:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895EFA8;
L_0895EFA8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0895EFB8:;
    a1 = s0 + 0;
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895EFC0;
L_0895EFC0:;
    a0 = sp + 0;
    func_08ABBDB0(a0);
    goto L_0895EFC8;
L_0895EFC8:;
    a0 = LD32(sp+4);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_0895EFB8; }
    goto L_0895EFD4;
L_0895EFD4:;
    goto L_0895EFA0;
}

/* 0895EFDC */
rv_t func_0895EFDC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0895EFDC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C28008 - (-32760);
    t1 = D_08C28018 - (-32744);
    t2 = D_08C28028 - (-32728);
    a1 = a1 & a0;
    v1 = t0 - 32760;
    a2 = t1 - 32744;
    cnd_ = a1 == 0;
    a3 = t2 - 32728;
    if (cnd_) { goto L_0895F094; }
    goto L_0895F00C;
L_0895F00C:;
    v0 = D_08AEDF60 - (-8352);
    f4 = BITSF(LD32(v0-8352));
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
    ST32(t0-32760, FBITS(f2));
    ST32(t1-32744, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-32728, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895F094;
L_0895F094:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895F09C */
rv_t func_0895F09C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895F09C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895EFDC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895F0B0;
L_0895F0B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895F0BC */
void func_0895F0BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_0895F0BC:;
    v1 = D_08B45A9C - (23196);
    v0 = v1 + 23196;
    f2 = BITSF(LD32(v1+23196));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    ST32(a0, FBITS(f2));
    a1 = (u32)-1;
    a2 = a0 + 12;
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    f2 = BITSF(LD32(v1+23196));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    ST16(a0+42, a1);
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a0+12, FBITS(f2));
    ST32(a0+24, 0);
    ST32(a0+28, 0);
    ST32(a0+32, 0);
    ST16(a0+36, 0);
    ST16(a0+38, a1);
    ST16(a0+40, a1);
    return;
}

/* 0895F11C */
void func_0895F11C(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895F11C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895F148; }
    goto L_0895F138;
L_0895F138:;
    sp = sp + 16;
    return;
L_0895F148:;
    func_0895DF20(a0);
    goto L_0895F150;
L_0895F150:;
    ST32(s0+24, 0);
    ST32(s0+32, 0);
    goto L_0895F138;
}

/* 0895F15C */
u32 func_0895F15C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0895F15C:;
    sp = sp - 80;
    s6 = a3 + 0;
    s5 = t1 + 0;
    s2 = t0 + 0;
    s1 = a0 + 0;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_0895F1A8; }
    goto L_0895F19C;
L_0895F19C:;
    v0 = LD_U8(t0+136);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(t0+136, 0); goto L_0895F1A8; }
    goto L_0895F1A8;
L_0895F1A8:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1));
    ST32(s1+8, FBITS(f0));
    s4 = s1 + 12;
    ST32(s1+4, FBITS(f1));
    ST32(s1, FBITS(f2));
    f3 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    a0 = LD32(s1+32);
    ST32(s1+12, FBITS(f0));
    ST32(s4+4, FBITS(f1));
    cnd_ = a0 != 0;
    ST32(s4+8, FBITS(f3));
    if (cnd_) { goto L_0895F478; }
    goto L_0895F1E4;
L_0895F1E4:;
    v0 = D_08C27F08 - (32520);
    fp = v0 + 32520;
    cnd_ = fp == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0895F36C; }
    goto L_0895F1F4;
L_0895F1F4:;
    s7 = D_08B20494 - (1172);
    s0 = s7 + 1172;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = 251;
    a3 = 1;
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_0895F210;
L_0895F210:;
    ST16(s1+38, v0);
    a0 = s0 + 0;
    a1 = s4 + 0;
    a2 = 251;
    a3 = 1;
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_0895F228;
L_0895F228:;
    v1 = LD_U16(s1+38);
    ST16(s1+40, v0);
    v0 = 0xffff;
    cnd_ = v1 == v0;
    s3 = s1 + 38;
    if (cnd_) { goto L_0895F424; }
    goto L_0895F23C;
L_0895F23C:;
    v1 = LD_U16(s1+40);
    goto L_0895F240;
L_0895F240:;
    v0 = 0xffff;
    cnd_ = v1 == v0;
    s0 = s1 + 40;
    if (cnd_) { goto L_0895F3F8; }
    goto L_0895F24C;
L_0895F24C:;
    a1 = s3 + 0;
    goto L_0895F250;
L_0895F250:;
    a0 = s1 + 0;
    v0 = func_0895E610(a0, a1);
    goto L_0895F258;
L_0895F258:;
    a0 = s4 + 0;
    a1 = s0 + 0;
    v0 = func_0895E610(a0, a1);
    goto L_0895F264;
L_0895F264:;
    a0 = LD_U16(s1+40);
    v1 = LD_U16(s1+38);
    v0 = a0 & 0xffff;
    cnd_ = v1 == v0;
    v0 = 1;
    if (cnd_) { goto L_0895F3EC; }
    goto L_0895F278;
L_0895F278:;
    cnd_ = s6 == 0;
    s0 = 3;
    if (cnd_) { goto L_0895F284; }
    goto L_0895F280;
L_0895F280:;
    s0 = LD32(s6);
    goto L_0895F284;
L_0895F284:;
    a1 = D_08C2A43C - (-23492);
    v0 = 999;
    cnd_ = s5 == v0;
    v1 = a1 - 23492;
    if (cnd_) { goto L_0895F2EC; }
    goto L_0895F294;
L_0895F294:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-23492);
    v0 = v0 - 1;
    v0 = s5 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0895F2D8; }
    goto L_0895F2B8;
L_0895F2B8:;
    v1 = LD32(a1);
    goto L_0895F2BC;
L_0895F2BC:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s5;
    if (cnd_) { v0 = LD32(v1+16); goto L_0895F3CC; }
    goto L_0895F2C8;
L_0895F2C8:;
    a1 = LD32(a1+4);
    goto L_0895F2CC;
L_0895F2CC:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_0895F2BC; }
    goto L_0895F2D4;
L_0895F2D4:;
    v1 = 0 + 0;
    goto L_0895F2D8;
L_0895F2D8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0895F2EC; }
    goto L_0895F2E0;
L_0895F2E0:;
    v0 = LD_U16(v1+152);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0895F3B8; }
    goto L_0895F2EC;
L_0895F2EC:;
    a0 = a0 & 0xffff;
    func_0895E004(a0);
    goto L_0895F2F4;
L_0895F2F4:;
    v0 = ((u32)(uintptr_t)func_08AA0FC8) - (4040);
    t0 = LD_U16(s1+38);
    t1 = LD_U16(s1+40);
    v0 = v0 + 4040;
    ST32(sp, v0);
    t3 = ((u32)(uintptr_t)func_0895E070) - (-8080);
    v1 = ((u32)(uintptr_t)func_0895E05C) - (-8100);
    v0 = ((u32)(uintptr_t)func_0895E124) - (-7900);
    v1 = v1 - 8100;
    a0 = s7 + 1172;
    v0 = v0 - 7900;
    a2 = s1 + 24;
    t2 = s0 + 0;
    t3 = t3 - 8080;
    a1 = fp + 0;
    a3 = 128;
    ST32(sp+4, v1);
    ST32(sp+8, v0);
    func_08804414(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0895F340;
L_0895F340:;
    { u64 r_ = func_0895E5D8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895F348;
L_0895F348:;
    a0 = LD32(s1+24);
    cnd_ = (s32)a0 <= 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0895F36C; }
    goto L_0895F354;
L_0895F354:;
    a1 = sp + 16;
    ST32(sp+16, 0);
    v0 = func_0895DEA0(a0, a1);
    goto L_0895F360;
L_0895F360:;
    v1 = 0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+32, v0);
    if (cnd_) { goto L_0895F3A0; }
    goto L_0895F36C;
L_0895F36C:;
    v0 = v1 + 0;
    sp = sp + 80;
    return v0;
L_0895F3A0:;
    a2 = LD32(sp+16);
    a0 = v0 + 0;
    a1 = fp + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895F3B0;
L_0895F3B0:;
    v1 = 1;
    goto L_0895F36C;
L_0895F3B8:;
    a1 = s5 + 0;
    a2 = s0 + 0;
    v0 = func_0895F48C(a0, a1, a2);
    goto L_0895F3C4;
L_0895F3C4:;
    v1 = v0 + 0;
    goto L_0895F36C;
L_0895F3CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895F2CC; }
    goto L_0895F3D8;
L_0895F3D8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0895F2CC; }
    goto L_0895F3E4;
L_0895F3E4:;
    goto L_0895F2D8;
L_0895F3EC:;
    v1 = 1;
    ST32(s1+24, v0);
    goto L_0895F36C;
L_0895F3F8:;
    a0 = s7 + 1172;
    a1 = s4 + 0;
    a2 = 251;
    a3 = 0 + 0;
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_0895F40C;
L_0895F40C:;
    ST16(s1+40, v0);
    a0 = s4 + 0;
    a1 = s0 + 0;
    v0 = func_0895E610(a0, a1);
    goto L_0895F41C;
L_0895F41C:;
    a1 = s3 + 0;
    goto L_0895F250;
L_0895F424:;
    cnd_ = s2 == 0;
    a0 = s7 + 1172;
    if (cnd_) { goto L_0895F44C; }
    goto L_0895F42C;
L_0895F42C:;
    v0 = LD_U8(s2+136);
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0895F450; }
    goto L_0895F438;
L_0895F438:;
    t0 = LD_U16(s2+138);
    cnd_ = t0 == v1;
    a2 = 251;
    if (cnd_) { goto L_0895F454; }
    goto L_0895F444;
L_0895F444:;
    ST16(s1+38, t0);
    goto L_0895F23C;
L_0895F44C:;
    a1 = s1 + 0;
    goto L_0895F450;
L_0895F450:;
    a2 = 251;
    goto L_0895F454;
L_0895F454:;
    a3 = 0 + 0;
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_0895F45C;
L_0895F45C:;
    ST16(s1+38, v0);
    s3 = s1 + 38;
    a0 = s1 + 0;
    a1 = s3 + 0;
    v0 = func_0895E610(a0, a1);
    goto L_0895F470;
L_0895F470:;
    v1 = LD_U16(s1+40);
    goto L_0895F240;
L_0895F478:;
    func_0895DF20(a0);
    goto L_0895F480;
L_0895F480:;
    ST32(s1+32, 0);
    ST32(s1+24, 0);
    goto L_0895F1E4;
}

/* 0895F48C */
u32 func_0895F48C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0895F48C:;
    sp = sp - 96;
    ST32(a0+28, 0);
    s2 = a0 + 0;
    a0 = D_08C2A43C - (-23492);
    a0 = a0 - 23492;
    fp = a2 + 0;
    a2 = 1;
    ST32(sp+36, 0);
    v0 = func_08ABF748(a0, a1, a2);
    goto L_0895F4D8;
L_0895F4D8:;
    cnd_ = v0 == 0;
    s5 = v0 + 0;
    if (cnd_) { goto L_0895F64C; }
    goto L_0895F4E0;
L_0895F4E0:;
    v1 = LD_U16(v0+152);
    v0 = D_08C27F08 - (32520);
    s6 = v0 + 32520;
    v1 = v1 + 1;
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0895F64C; }
    goto L_0895F4F8;
L_0895F4F8:;
    s7 = s2 + 28;
    s3 = s5 + 0;
    goto L_0895F500;
L_0895F500:;
    f0 = BITSF(LD32(s3+88));
    f1 = BITSF(LD32(s3+92));
    f2 = BITSF(LD32(s3+96));
    v0 = D_08B20494 - (1172);
    a0 = v0 + 1172;
    a1 = sp + 16;
    a2 = 251;
    a3 = 0 + 0;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_0895F530;
L_0895F530:;
    a0 = sp + 16;
    a1 = sp + 32;
    ST16(sp+32, v0);
    v0 = func_0895E610(a0, a1);
    goto L_0895F540;
L_0895F540:;
    cnd_ = s4 != 0;
    if (cnd_) { v0 = LD_U16(s5+152); goto L_0895F6B8; }
    goto L_0895F548;
L_0895F548:;
    s1 = LD_U16(s2+38);
    s0 = LD_U16(sp+32);
    goto L_0895F550;
L_0895F550:;
    a0 = s0 + 0;
    func_0895E004(a0);
    goto L_0895F558;
L_0895F558:;
    v0 = D_08B20494 - (1172);
    a0 = v0 + 1172;
    v0 = ((u32)(uintptr_t)func_0895E070) - (-8080);
    t3 = v0 - 8080;
    v0 = ((u32)(uintptr_t)func_08AA0FC8) - (4040);
    v0 = v0 + 4040;
    ST32(sp, v0);
    v0 = ((u32)(uintptr_t)func_0895E05C) - (-8100);
    v0 = v0 - 8100;
    ST32(sp+4, v0);
    v0 = ((u32)(uintptr_t)func_0895E124) - (-7900);
    v0 = v0 - 7900;
    t0 = s1 + 0;
    t1 = s0 + 0;
    a1 = s6 + 0;
    a2 = s7 + 0;
    a3 = 128;
    t2 = fp + 0;
    ST32(sp+8, v0);
    func_08804414(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0895F5A8;
L_0895F5A8:;
    { u64 r_ = func_0895E5D8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895F5B0;
L_0895F5B0:;
    t0 = LD32(s2+28);
    v0 = LD_U16(sp+32);
    a0 = 0 + 0;
    t4 = t0 + 0;
    cnd_ = (s32)t0 <= 0;
    ST16(s2+42, v0);
    if (cnd_) { goto L_0895F650; }
    goto L_0895F5C8;
L_0895F5C8:;
    cnd_ = s4 == 0;
    v0 = LD32(sp+36);
    if (cnd_) { goto L_0895F684; }
    goto L_0895F5D0;
L_0895F5D0:;
    t3 = LD32(s2+24);
    a0 = 0 + 0;
    v1 = t3 + t0;
    v0 = v0 >> 1;
    v1 = (s32)v0 < (s32)v1;
    cnd_ = v1 != 0;
    t2 = t3 + 0;
    if (cnd_) { goto L_0895F650; }
    goto L_0895F5EC;
L_0895F5EC:;
    cnd_ = t0 == 0;
    if (cnd_) { v0 = LD_U16(s5+152); goto L_0895F630; }
    goto L_0895F5F4;
L_0895F5F4:;
    t1 = v0 + 0;
    a2 = s6 + 0;
    goto L_0895F5FC;
L_0895F5FC:;
    v0 = a0 + t2;
    a3 = v0 << 1;
    a0 = a0 + 1;
    v0 = v0 < t1;
    cnd_ = v0 == 0;
    a1 = a0 < t4;
    if (cnd_) { goto L_0895F624; }
    goto L_0895F614;
L_0895F614:;
    v0 = LD32(s2+32);
    v1 = LD_U16(a2);
    v0 = a3 + v0;
    ST16(v0, v1);
    goto L_0895F624;
L_0895F624:;
    cnd_ = a1 != 0;
    a2 = a2 + 2;
    if (cnd_) { goto L_0895F5FC; }
    goto L_0895F62C;
L_0895F62C:;
    v0 = LD_U16(s5+152);
    goto L_0895F630;
L_0895F630:;
    s4 = s4 + 1;
    v1 = t3 + t0;
    v0 = v0 + 1;
    v0 = s4 < v0;
    ST32(s2+24, v1);
    cnd_ = v0 != 0;
    s3 = s3 + 12;
    if (cnd_) { goto L_0895F500; }
    goto L_0895F64C;
L_0895F64C:;
    a0 = 1;
    goto L_0895F650;
L_0895F650:;
    v0 = a0 + 0;
    sp = sp + 96;
    return v0;
L_0895F684:;
    a0 = 128;
    a1 = sp + 36;
    v0 = func_0895DEA0(a0, a1);
    goto L_0895F690;
L_0895F690:;
    ST32(s2+32, v0);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0895F650; }
    goto L_0895F69C;
L_0895F69C:;
    a2 = LD32(sp+36);
    a0 = v0 + 0;
    a1 = s6 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895F6AC;
L_0895F6AC:;
    t0 = LD32(s2+28);
    t3 = LD32(s2+24);
    goto L_0895F62C;
L_0895F6B8:;
    cnd_ = s4 == v0;
    s1 = LD_U16(s2+42);
    if (cnd_) { goto L_0895F6C8; }
    goto L_0895F6C0;
L_0895F6C0:;
    s0 = LD_U16(sp+32);
    goto L_0895F550;
L_0895F6C8:;
    s0 = LD_U16(s2+40);
    goto L_0895F550;
}

/* 0895F6D0 */
void func_0895F6D0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[208] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 208);
L_0895F6D0:;
    sp = sp - 208;
    v1 = 0 + 0;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    s5 = a0 + 0;
    if (cnd_) { goto L_0895F740; }
    goto L_0895F70C;
L_0895F70C:;
    v0 = v1 + 0;
    sp = sp + 208;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return; }
L_0895F740:;
    a0 = LD32(a0+24);
    s2 = 0 + 0;
    s1 = 0 + 0;
    a0 = a0 << 1;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08A94838(a0, t1, t2, t3); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895F754;
L_0895F754:;
    fp = v0 + 0;
    v0 = LD32(s5+32);
    s0 = LD32(s5+24);
    ST32(sp+48, 0);
    a0 = s0 << 1;
    v1 = LD_U16(v0);
    a0 = a0 + s0;
    a0 = a0 << 2;
    ST16(fp, v1);
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = func_08A94838(a0, 0, 0, 0); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895F77C;
L_0895F77C:;
    t9 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_0895F798; }
    goto L_0895F788;
L_0895F788:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_0895F790;
L_0895F790:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_0895F790; }
    goto L_0895F798;
L_0895F798:;
    s0 = LD32(s5+24);
    v0 = 1;
    v0 = (s32)v0 < (s32)s0;
    cnd_ = v0 == 0;
    v0 = LD32(sp+48);
    if (cnd_) { goto L_0895FA40; }
    goto L_0895F7AC;
L_0895F7AC:;
    t8 = LD32(s5+32);
    s7 = sp + 0;
    v1 = v0 << 1;
    s4 = v1 + fp;
    goto L_0895F7BC;
L_0895F7BC:;
    v0 = s1 << 1;
    a1 = D_08B20494 - (1172);
    v0 = v0 + t8;
    a1 = a1 + 1172;
    a0 = LD_U16(v0);
    v1 = LD_U16(a1+10);
    t7 = 1;
    v1 = a0 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895F7F8; }
    goto L_0895F7E4;
L_0895F7E4:;
    v0 = a0 << 1;
    v1 = LD32(a1+12);
    v0 = v0 + a0;
    v0 = v0 << 3;
    v0 = v1 + v0;
    goto L_0895F7F8;
L_0895F7F8:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    t4 = s1 + 1;
    v0 = (s32)t4 < (s32)s0;
    ST32(s7, FBITS(f0));
    s3 = t4 + 0;
    t1 = t4 + 0;
    ST32(s7+4, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(s7+8, FBITS(f2));
    if (cnd_) { goto L_0895FA10; }
    goto L_0895F824;
L_0895F824:;
    v0 = D_08AEDF68 - (-8344);
    v1 = D_08B20494 - (1172);
    a1 = t4 << 1;
    f15 = BITSF(LD32(v0-8344));
    v0 = v1 + 1172;
    a0 = a1 + t4;
    s1 = LD_U16(v0+10);
    a0 = a0 << 2;
    s6 = a0 + 0;
    t5 = a1 + t8;
    t2 = a0 + t9;
    a0 = LD_U16(t5);
    goto L_0895F854;
L_0895F854:;
    v0 = a0 < s1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0895F87C; }
    goto L_0895F860;
L_0895F860:;
    a1 = D_08B20494 - (1172);
    a1 = a1 + 1172;
    v0 = a0 << 1;
    v1 = LD32(a1+12);
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0895F87C;
L_0895F87C:;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    ST32(t2+8, FBITS(f2));
    v0 = (s32)s3 < (s32)t1;
    t0 = s3 + 0;
    ST32(t2, FBITS(f0));
    ST32(t2+4, FBITS(f1));
    f10 = BITSF(LD32(sp));
    f9 = BITSF(LD32(sp+4));
    f8 = BITSF(LD32(sp+8));
    f0 = f0 - f10;
    f1 = f1 - f9;
    f2 = f2 - f8;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(sp+24, FBITS(f2));
    if (cnd_) { goto L_0895F9F0; }
    goto L_0895F8C4;
L_0895F8C4:;
    v1 = FBITS(f0);
    a0 = FBITS(f1);
    a1 = FBITS(f2);
    {u32 a_=sp+(80);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v1);}
    {vr1=BITSF(a0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    v0 = D_08B20494 - (1172);
    t6 = v0 + 1172;
    v0 = D_08AEDF64 - (-8348);
    v0 = v0 - 8348;
    f11 = BITSF(LD32(v0));
    v0 = D_08AEDF6C - (-8340);
    v0 = v0 - 8340;
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {u32 a_=sp+(96);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    t3 = LD_U16(t6+10);
    {v[4]=BITSF(v1);}
    {v[12]=1.57079632679f;}
    {v1=FBITS(vr0);}
    {v[8]=0.63661977236f;}
    f13 = BITSF(0);
    f7 = BITSF(v1);
    f14 = BITSF(LD32(v0));
    v0 = s3 << 1;
    a3 = v0 + t8;
    f12 = f15;
    a2 = s6 + t9;
    {v[5]=BITSF(a0);}
    {v[6]=BITSF(a1);}
    goto L_0895F940;
L_0895F940:;
    a0 = LD_U16(a3);
    v0 = a0 < t3;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0895F964; }
    goto L_0895F950;
L_0895F950:;
    v0 = a0 << 1;
    v1 = LD32(t6+12);
    v0 = v0 + a0;
    v0 = v0 << 3;
    v1 = v1 + v0;
    goto L_0895F964;
L_0895F964:;
    f0 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a2+4));
    f2 = BITSF(LD32(a2+8));
    f0 = f0 - f10;
    f1 = f1 - f9;
    f2 = f2 - f8;
    f5 = BITSF(0);
    v0 = FBITS(f0);
    a0 = FBITS(f1);
    a1 = FBITS(f2);
    {u32 a_=sp+(64);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr1=BITSF(a0);}
    {vr2=BITSF(a1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    fcc = FCMP(f7, f5, 2);
    f6 = BITSF(LD32(v1+12));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    f4 = BITSF(v1);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_0895F9D8; }
    goto L_0895F9C8;
L_0895F9C8:;
    fcc = FCMP(f0, f5, 2);
    cnd_ = !fcc;
    if (cnd_) { f2 = f7 * f0; goto L_0895FAB4; }
    goto L_0895F9D8;
L_0895F9D8:;
    s2 = 1;
    goto L_0895F9DC;
L_0895F9DC:;
    t0 = t0 + 1;
    goto L_0895F9E0;
L_0895F9E0:;
    v0 = (s32)t0 < (s32)t1;
    a3 = a3 + 2;
    cnd_ = v0 != 0;
    a2 = a2 + 12;
    if (cnd_) { goto L_0895F940; }
    goto L_0895F9F0;
L_0895F9F0:;
    if (t7 != 0) t4 = t1;
    t1 = t1 + 1;
    v0 = (s32)t1 < (s32)s0;
    t5 = t5 + 2;
    cnd_ = v0 == 0;
    t2 = t2 + 12;
    if (cnd_) { goto L_0895FA10; }
    goto L_0895FA08;
L_0895FA08:;
    cnd_ = t7 != 0;
    if (cnd_) { a0 = LD_U16(t5); goto L_0895F854; }
    goto L_0895FA10;
L_0895FA10:;
    v0 = t4 << 1;
    a1 = LD32(sp+48);
    v0 = v0 + t8;
    a0 = LD_U16(v0);
    v1 = t4 + 1;
    s4 = s4 + 2;
    a1 = a1 + 1;
    v1 = (s32)v1 < (s32)s0;
    s1 = t4 + 0;
    ST16(s4, a0);
    cnd_ = v1 != 0;
    ST32(sp+48, a1);
    if (cnd_) { goto L_0895F7BC; }
    goto L_0895FA40;
L_0895FA40:;
    cnd_ = t9 != 0;
    if (cnd_) { goto L_0895FAA4; }
    goto L_0895FA48;
L_0895FA48:;
    cnd_ = s2 != 0;
    v0 = LD32(sp+48);
    if (cnd_) { goto L_0895FA94; }
    goto L_0895FA50;
L_0895FA50:;
    a2 = v0 + 1;
    cnd_ = (s32)a2 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0895FA80; }
    goto L_0895FA5C;
L_0895FA5C:;
    t8 = LD32(s5+32);
    goto L_0895FA60;
L_0895FA60:;
    v1 = a1 << 1;
    v0 = v1 + fp;
    a0 = LD_U16(v0);
    a1 = a1 + 1;
    v1 = v1 + t8;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    ST16(v1, a0);
    if (cnd_) { goto L_0895FA60; }
    goto L_0895FA80;
L_0895FA80:;
    ST32(s5+24, a2);
    a0 = fp + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895FA8C;
L_0895FA8C:;
    v1 = 1;
    goto L_0895F70C;
L_0895FA94:;
    a0 = fp + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895FA9C;
L_0895FA9C:;
    v1 = 0 + 0;
    goto L_0895F70C;
L_0895FAA4:;
    a0 = t9 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895FAAC;
L_0895FAAC:;
    goto L_0895FA48;
L_0895FAB4:;
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr1=BITSF(a0);}
    f2 = f11 / f2;
    {vr2=BITSF(a1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a1=FBITS(vr0);}
    f0 = BITSF(a1);
    f0 = f0 * f2;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    f3 = f12;
    if (cnd_) { goto L_0895FAFC; }
    goto L_0895FAE8;
L_0895FAE8:;
    fcc = FCMP(f11, f0, 12);
    cnd_ = fcc;
    f3 = f11;
    if (cnd_) { goto L_0895FAFC; }
    goto L_0895FAF8;
L_0895FAF8:;
    f3 = f0;
    goto L_0895FAFC;
L_0895FAFC:;
    v0 = FBITS(f3);
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(v[3]));}
    {float s0=vr0;float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    {u32 a_=sp+(144);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    fcc = FCMP(f6, f13, 2);
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    {float s0=vr0;float t0=v[12];float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    {v[16]=BITSF(v0);}
    {float s0=v[16];float t0=v[8];float d0=s0*t0;vr0=d0;}
    {u32 a_=sp+(144);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {float s0=vr0;float d0=sinf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    cnd_ = fcc;
    f1 = f4 * f0;
    if (cnd_) { goto L_0895FB64; }
    goto L_0895FB4C;
L_0895FB4C:;
    f0 = f11 / f6;
    f0 = f1 * f0;
    fcc = FCMP(f14, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { t0 = t0 + 1; goto L_0895F9E0; }
    goto L_0895FB64;
L_0895FB64:;
    t7 = 0 + 0;
    goto L_0895F9DC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 0895FB6C */
void func_0895FB6C(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895FB6C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+32);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0895FB98; }
    goto L_0895FB88;
L_0895FB88:;
    sp = sp + 16;
    return;
L_0895FB98:;
    func_0895DF20(a0);
    goto L_0895FBA0;
L_0895FBA0:;
    ST32(s0+24, 0);
    ST32(s0+32, 0);
    goto L_0895FB88;
}

/* 0895FBAC */
rv_t func_0895FBAC(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895FBAC:;
    f0 = BITSF(LD32(a0));
    f4 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f4 = f4 - f1;
    f3 = f3 - f0;
    f5 = BITSF(LD32(a0+4));
    sp = sp - 32;
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = 0 + 0;
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f2 = f2 - f5;
    ST32(sp, FBITS(f3));
    fcc = FCMP(f0, f12, 12);
    ST32(sp+4, FBITS(f2));
    f0 = f2 * f2;
    ST32(sp+8, FBITS(f4));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, 0);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_0895FC2C; }
    goto L_0895FC1C;
L_0895FC1C:;
    fcc = FCMP(f0, f13, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = 1; goto L_0895FC2C; }
    goto L_0895FC2C;
L_0895FC2C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0895FC34 */
rv_t func_0895FC34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0895FC34:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2803C - (-32708);
    t1 = D_08C2804C - (-32692);
    t2 = D_08C2805C - (-32676);
    a1 = a1 & a0;
    v1 = t0 - 32708;
    a2 = t1 - 32692;
    cnd_ = a1 == 0;
    a3 = t2 - 32676;
    if (cnd_) { goto L_0895FCEC; }
    goto L_0895FC64;
L_0895FC64:;
    v0 = D_08AEDF70 - (-8336);
    f4 = BITSF(LD32(v0-8336));
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
    ST32(t0-32708, FBITS(f2));
    ST32(t1-32692, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-32676, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0895FCEC;
L_0895FCEC:;
    return (rv_t){ v0, v1, f0 };
}

/* 0895FCF4 */
rv_t func_0895FCF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895FCF4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0895FC34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895FD08;
L_0895FD08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895FD14 */
void func_0895FD14(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895FD14:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    func_0896097C(a0, a1);
    goto L_0895FD30;
L_0895FD30:;
    v0 = D_08AF9600 - (-27136);
    v1 = 1;
    v0 = v0 - 27136;
    ST32(s0+20, s1);
    ST8(s0+32, v1);
    ST32(s0, v0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return;
}

/* 0895FD64 */
rv_t func_0895FD64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895FD64:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089243E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895FD78;
L_0895FD78:;
    v0 = D_08B1E460 - (-7072);
    a0 = LD32(v0-7072);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895FD84;
L_0895FD84:;
    a1 = D_08B45A9C - (23196);
    v1 = v0 + 0;
    a0 = a1 + 23196;
    a2 = v0 + 28;
    a3 = v0 + 40;
    cnd_ = v0 == 0;
    ST32(s0+24, v0);
    if (cnd_) { goto L_0895FDF8; }
    goto L_0895FDA0;
L_0895FDA0:;
    ST32(v0+20, 0);
    ST32(v0+24, 0);
    v0 = 999;
    f2 = BITSF(LD32(a1+23196));
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a0+8));
    ST32(v1+28, FBITS(f2));
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    f0 = BITSF(LD32(a1+23196));
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    ST32(v1+4, v0);
    v0 = (u32)-1;
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    ST32(v1+12, v0);
    ST32(v1, 0);
    ST32(v1+40, FBITS(f0));
    ST32(v1+52, 0);
    ST32(v1+8, 0);
    ST32(v1+16, 0);
    goto L_0895FDF8;
L_0895FDF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895FE08 */
rv_t func_0895FE08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0895FE08:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_0892443C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895FE24;
L_0895FE24:;
    f1 = BITSF(0);
    f0 = BITSF(LD32(s0+28));
    a0 = s0 + 0;
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s0+28, FBITS(f0));
    if (cnd_) { goto L_0895FE58; }
    goto L_0895FE44;
L_0895FE44:;
    goto L_0895FE48;
L_0895FE48:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0895FE58:;
    { rv_t r_ = func_0896037C(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895FE60;
L_0895FE60:;
    goto L_0895FE48;
}

/* 0895FE68 */
rv_t func_0895FE68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895FE68:;
    sp = sp - 16;
    v0 = D_08B1E460 - (-7072);
    s0 = a0 + 0;
    a1 = LD32(s0+24);
    a0 = LD32(v0-7072);
    { u64 r_ = func_08AA3A90(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0895FE88;
L_0895FE88:;
    ST32(s0+24, 0);
    a0 = s0 + 0;
    { rv_t r_ = func_089244DC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895FE94;
L_0895FE94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0895FEA4 */
rv_t func_0895FEA4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0895FEA4:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08960374(a0);
    goto L_0895FEC0;
L_0895FEC0:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0895FEDC; }
    goto L_0895FEC8;
L_0895FEC8:;
    goto L_0895FECC;
L_0895FECC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0895FEDC:;
    v0 = func_08960374(a0);
    goto L_0895FEE4;
L_0895FEE4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08963838(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0895FEF0;
L_0895FEF0:;
    goto L_0895FECC;
}

/* 0895FEF8 */
u64 func_0895FEF8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0895FEF8:;
    v1 = LD32(a0+24);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0895FF10; }
    goto L_0895FF04;
L_0895FF04:;
    v0 = LD32(v1+4);
    v0 = v0 ^ 0x3e7;
    v0 = 0 < v0;
    goto L_0895FF10;
L_0895FF10:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0895FF18 */
u64 func_0895FF18(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0895FF18:;
    sp = sp - 48;
    v0 = D_08AEDF74 - (-8332);
    s2 = 0 + 0;
    s1 = a0 + 0;
    a1 = LD32(a0+4);
    f20 = BITSF(LD32(v0-8332));
    a0 = sp + 0;
    v1 = a1 + 52;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+4, 0);
    v0 = LD32(v1+4);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_0895FFC0; }
    goto L_0895FF6C;
L_0895FF6C:;
    a2 = LD32(a1+52);
    a3 = v1 + 0;
    a1 = LD32(a0+4);
    goto L_0895FF78;
L_0895FF78:;
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_0895FFA8; }
    goto L_0895FF8C;
L_0895FF8C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(sp+8); goto L_0895FFC4; }
    goto L_0895FF9C;
L_0895FF9C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0895FF8C; }
    goto L_0895FFA8;
L_0895FFA8:;
    v0 = a1 + 1;
    ST32(a0+4, v0);
    v1 = LD32(a3+4);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a0+4); goto L_0895FF78; }
    goto L_0895FFC0;
L_0895FFC0:;
    a1 = LD32(sp+8);
    goto L_0895FFC4;
L_0895FFC4:;
    cnd_ = a1 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_089600B4; }
    goto L_0895FFCC;
L_0895FFCC:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089600A4; }
    goto L_0895FFDC;
L_0895FFDC:;
    cnd_ = s2 == 0;
    if (cnd_) { v1 = LD32(s1+12); goto L_08960004; }
    goto L_0895FFE4;
L_0895FFE4:;
    v0 = s2 + 0;
    goto L_0895FFE8;
L_0895FFE8:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_08960004:;
    cnd_ = v1 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_0895FFE8; }
    goto L_0896000C;
L_0896000C:;
    v1 = v1 + 40;
    v0 = LD32(v1+8);
    a1 = 1;
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960034;
L_08960034:;
    a1 = LD32(sp+8);
    cnd_ = a1 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08960060; }
    goto L_08960040;
L_08960040:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0895FFE4; }
    goto L_08960050;
L_08960050:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960058;
L_08960058:;
    v0 = s2 + 0;
    goto L_0895FFE8;
L_08960060:;
    s0 = LD32(a1);
    goto L_08960064;
L_08960064:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    f0 = func_08960750(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08960070;
L_08960070:;
    fcc = FCMP(f20, f0, 12);
    a0 = sp + 0;
    cnd_ = !fcc;
    a1 = 1;
    if (cnd_) { goto L_08960088; }
    goto L_08960080;
L_08960080:;
    s2 = s0 + 0;
    f20 = f0;
    goto L_08960088;
L_08960088:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960090;
L_08960090:;
    a1 = LD32(sp+8);
    cnd_ = a1 != 0;
    if (cnd_) { s0 = LD32(a1); goto L_08960064; }
    goto L_0896009C;
L_0896009C:;
    a0 = LD32(sp);
    goto L_08960040;
L_089600A4:;
    { u64 r_ = func_08ABD7F0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089600AC;
L_089600AC:;
    goto L_0895FFDC;
L_089600B4:;
    s0 = LD32(a1);
    goto L_089600B8;
L_089600B8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    f0 = func_08960750(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089600C4;
L_089600C4:;
    fcc = FCMP(f20, f0, 12);
    a0 = sp + 0;
    cnd_ = !fcc;
    a1 = 1;
    if (cnd_) { goto L_089600DC; }
    goto L_089600D4;
L_089600D4:;
    s2 = s0 + 0;
    f20 = f0;
    goto L_089600DC;
L_089600DC:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089600E4;
L_089600E4:;
    a1 = LD32(sp+8);
    cnd_ = a1 != 0;
    if (cnd_) { s0 = LD32(a1); goto L_089600B8; }
    goto L_089600F0;
L_089600F0:;
    a0 = LD32(sp);
    goto L_0895FFCC;
}

/* 089600F8 */
u64 func_089600F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089600F8:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = 1;
    v1 = LD32(a0+4);
    a0 = sp + 0;
    ST32(sp+8, 0);
    v1 = v1 + 52;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960138;
L_08960138:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08960170; }
    goto L_08960144;
L_08960144:;
    s0 = LD32(v0);
    goto L_08960148;
L_08960148:;
    a0 = sp + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a1 = 1;
    if (cnd_) { goto L_089601A8; }
    goto L_08960158;
L_08960158:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960160;
L_08960160:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08960148; }
    goto L_0896016C;
L_0896016C:;
    a0 = LD32(sp);
    goto L_08960170;
L_08960170:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08960198; }
    goto L_08960180;
L_08960180:;
    v0 = 0 + 0;
    goto L_08960184;
L_08960184:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08960198:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089601A0;
L_089601A0:;
    v0 = 0 + 0;
    goto L_08960184;
L_089601A8:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089601C4; }
    goto L_089601BC;
L_089601BC:;
    v0 = s0 + 0;
    goto L_08960184;
L_089601C4:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089601CC;
L_089601CC:;
    v0 = s0 + 0;
    goto L_08960184;
}

/* 089601D4 */
rv_t func_089601D4(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_089601D4:;
    v1 = LD32(a0+24);
    a1 = D_08B45A9C - (23196);
    v0 = a1 + 23196;
    ST32(v1+20, 0);
    a2 = v1 + 28;
    a3 = v1 + 40;
    ST32(v1+24, 0);
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a1+23196));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f0));
    ST32(v1+28, FBITS(f1));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1+23196));
    v0 = 999;
    ST32(v1+4, v0);
    v0 = (u32)-1;
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    ST32(v1+40, FBITS(f0));
    ST32(v1+52, 0);
    ST32(v1+12, v0);
    ST32(a0+28, FBITS(f12));
    ST32(v1, 0);
    ST32(v1+8, 0);
    ST32(v1+16, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08960248 */
rv_t func_08960248(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960248:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 88;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960264;
L_08960264:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08963DC8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960274;
L_08960274:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896028C */
rv_t func_0896028C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896028C:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089602BC; }
    goto L_089602A8;
L_089602A8:;
    ST32(s0, 0);
    goto L_089602AC;
L_089602AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089602BC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089602CC;
L_089602CC:;
    ST32(s0, 0);
    goto L_089602AC;
}

/* 089602D4 */
rv_t func_089602D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089602D4:;
    sp = sp - 16;
    v0 = D_08C29324 - (-27868);
    s1 = a0 + 0;
    a0 = 56;
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08960318; }
    goto L_089602FC;
L_089602FC:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960304;
L_08960304:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08963588(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960314;
L_08960314:;
    v0 = s0 + 0;
    goto L_08960318;
L_08960318:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896032C */
rv_t func_0896032C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896032C:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896035C; }
    goto L_08960348;
L_08960348:;
    ST32(s0, 0);
    goto L_0896034C;
L_0896034C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0896035C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896036C;
L_0896036C:;
    ST32(s0, 0);
    goto L_0896034C;
}

/* 08960374 */
u32 func_08960374(u32 a0)
{
    u32 v0 = 0;
L_08960374:;
    v0 = LD32(a0+12);
    return v0;
}

/* 0896037C */
rv_t func_0896037C(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896037C:;
    sp = sp - 32;
    v0 = 999;
    s1 = a0 + 0;
    t0 = LD32(a0+24);
    a2 = LD32(t0+4);
    cnd_ = a2 == v0;
    a3 = t0 + 0;
    if (cnd_) { goto L_089606B8; }
    goto L_089603AC;
L_089603AC:;
    v0 = LD_U8(a0+32);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_089605B8; }
    goto L_089603B8;
L_089603B8:;
    a0 = D_08C2B4CC - (-19252);
    v1 = a0 - 19252;
    v0 = LD32(v1+4);
    a1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08960410; }
    goto L_089603E4;
L_089603E4:;
    a0 = LD32(a1);
    goto L_089603E8;
L_089603E8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08960598; }
    goto L_08960400;
L_08960400:;
    a1 = LD32(a1+4);
    goto L_08960404;
L_08960404:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089603E8; }
    goto L_0896040C;
L_0896040C:;
    s0 = 0 + 0;
    goto L_08960410;
L_08960410:;
    cnd_ = s0 == 0;
    if (cnd_) { ST32(a3+20, 0); goto L_08960458; }
    goto L_08960418;
L_08960418:;
    v0 = LD32(s0);
    f20 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(a3+20, 0); goto L_08960458; }
    goto L_0896043C;
L_0896043C:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a3+20, 0); goto L_08960458; }
    goto L_08960448;
L_08960448:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089604D8; }
    goto L_08960454;
L_08960454:;
    ST32(a3+20, 0);
    goto L_08960458;
L_08960458:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    ST32(a3+24, 0);
    a0 = a3 + 28;
    a1 = a3 + 40;
    f1 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+4));
    ST32(a3+28, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f2));
    f3 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    v0 = 999;
    ST32(a3+4, v0);
    v0 = (u32)-1;
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(a3+12, v0);
    ST32(a3+40, FBITS(f3));
    ST32(a3+52, 0);
    ST32(a3, 0);
    ST32(a3+8, 0);
    ST32(a3+16, 0);
    goto L_089604BC;
L_089604BC:;
    goto L_089604C0;
L_089604C0:;
    goto L_089604C4;
L_089604C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089604D8:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089604E0;
L_089604E0:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(s1+24); goto L_08960454; }
    goto L_089604E8;
L_089604E8:;
    v0 = LD32(s0+172);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08960500; }
    goto L_089604F8;
L_089604F8:;
    a3 = LD32(s1+24);
    goto L_08960454;
L_08960500:;
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 != v1;
    if (cnd_) { goto L_089604C0; }
    goto L_08960518;
L_08960518:;
    v0 = LD32(s0+236);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089604C4; }
    goto L_08960528;
L_08960528:;
    v1 = LD32(s1+24);
    v0 = D_08B45A9C - (23196);
    a0 = v0 + 23196;
    ST32(v1+20, FBITS(f20));
    a1 = v1 + 28;
    a2 = v1 + 40;
    ST32(v1+24, FBITS(f20));
    f1 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    ST32(v1+28, FBITS(f1));
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f2));
    f3 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    v0 = 999;
    ST32(v1+4, v0);
    v0 = (u32)-1;
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(v1+12, v0);
    ST32(v1+52, FBITS(f20));
    ST32(v1+40, FBITS(f3));
    goto L_08960588;
L_08960588:;
    ST32(v1, 0);
    ST32(v1+8, 0);
    ST32(v1+16, 0);
    goto L_089604BC;
L_08960598:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08960400; }
    goto L_089605A4;
L_089605A4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08960404; }
    goto L_089605B0;
L_089605B0:;
    goto L_08960410;
L_089605B8:;
    v1 = LD32(v0+56);
    a0 = LD32(v0+52);
    v1 = v1 - 1;
    v1 = a2 & v1;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089605FC; }
    goto L_089605DC;
L_089605DC:;
    v0 = LD32(a0);
    goto L_089605E0;
L_089605E0:;
    v1 = LD32(v0+4);
    cnd_ = v1 == a2;
    a1 = v0 + 0;
    if (cnd_) { goto L_089606A4; }
    goto L_089605EC;
L_089605EC:;
    a0 = LD32(a0+4);
    goto L_089605F0;
L_089605F0:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089605E0; }
    goto L_089605F8;
L_089605F8:;
    a1 = 0 + 0;
    goto L_089605FC;
L_089605FC:;
    a0 = LD32(s1+12);
    goto L_08960600;
L_08960600:;
    s0 = a1 < 0x1u;
    cnd_ = a0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08960684; }
    goto L_0896060C;
L_0896060C:;
    s2 = 1;
    goto L_08960610;
L_08960610:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089604C0; }
    goto L_08960618;
L_08960618:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089604C4; }
    goto L_08960620;
L_08960620:;
    v1 = LD32(s1+24);
    v0 = D_08B45A9C - (23196);
    a0 = v0 + 23196;
    ST32(v1+20, 0);
    a1 = v1 + 28;
    a2 = v1 + 40;
    ST32(v1+24, 0);
    f1 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(a0+4));
    ST32(v1+28, FBITS(f1));
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f2));
    f3 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0+4));
    v0 = 999;
    ST32(v1+4, v0);
    v0 = (u32)-1;
    ST32(a2+8, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(v1+12, v0);
    ST32(v1+40, FBITS(f3));
    ST32(v1+52, 0);
    goto L_08960588;
L_08960684:;
    a1 = LD32(t0+4);
    a0 = a0 + 40;
    a2 = 1;
    { u64 r_ = func_08ABF840(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960694;
L_08960694:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08960610; }
    goto L_0896069C;
L_0896069C:;
    s2 = 1;
    goto L_08960610;
L_089606A4:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089605F0; }
    goto L_089606B0;
L_089606B0:;
    a0 = LD32(s1+12);
    goto L_08960600;
L_089606B8:;
    { u64 r_ = func_0895FF18(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089606C0;
L_089606C0:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089604BC; }
    goto L_089606C8;
L_089606C8:;
    v0 = LD32(s1+24);
    f0 = BITSF(LD32(a3+20));
    f1 = BITSF(LD32(a3+24));
    v1 = a3 + 28;
    ST32(v0+20, FBITS(f0));
    a0 = v0 + 28;
    a1 = a3 + 40;
    ST32(v0+24, FBITS(f1));
    a2 = v0 + 40;
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(a3+28));
    f0 = BITSF(LD32(v1+4));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    ST32(v0+28, FBITS(f2));
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a3+40));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(v0+40, FBITS(f2));
    v1 = LD32(a3);
    f0 = BITSF(LD32(a3+52));
    a0 = LD32(a3+4);
    a1 = LD32(a3+8);
    a2 = LD32(a3+12);
    a3 = LD32(a3+16);
    ST32(v0+52, FBITS(f0));
    ST32(v0, v1);
    ST32(v0+4, a0);
    ST32(v0+8, a1);
    ST32(v0+12, a2);
    ST32(v0+16, a3);
    goto L_089604BC;
}

/* 08960750 */
float func_08960750(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr4 = v[4];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08960750:;
    sp = sp - 80;
    v0 = D_08AEDF78 - (-8328);
    s1 = D_08AEDF7C - (-8324);
    s0 = a1 + 0;
    f20 = BITSF(0);
    f2 = BITSF(LD32(v0-8328));
    f1 = BITSF(LD32(a1+52));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    f3 = f1 - f2;
    if (cnd_) { goto L_08960870; }
    goto L_0896078C;
L_0896078C:;
    v0 = LD32(a0+4);
    f1 = BITSF(LD32(s1-8324));
    f0 = BITSF(LD32(v0+32));
    f0 = f0 - f2;
    f0 = f3 / f0;
    f20 = f1 - f0;
    goto L_089607A4;
L_089607A4:;
    v0 = LD32(a0+20);
    a0 = LD32(v0+48);
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ({ v[4]=vr4;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089607C8;
L_089607C8:;
    f6 = BITSF(LD32(v0+32));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+20));
    a0 = s0 + 40;
    a1 = LD32(a0+8);
    v1 = FBITS(f3);
    v0 = FBITS(f4);
    f7 = BITSF(LD32(s1-8324));
    {u32 a_=sp+(16);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v1);}
    v1 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = LD32(s0+40);
    {v[6]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(a0+4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a1);}
    {float s0=vr4;float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    v0 = D_08AEDF88 - (-8312);
    f2 = BITSF(LD32(v0-8312));
    f1 = f0 + f7;
    v1 = LD32(s0+8);
    f5 = f20 * f2;
    ST32(sp, FBITS(f3));
    f1 = f1 * f2;
    ST32(sp+4, FBITS(f4));
    f1 = f1 * f2;
    ST32(sp+8, FBITS(f6));
    cnd_ = v1 == 0;
    f0 = f5 + f1;
    if (cnd_) { goto L_08960854; }
    goto L_08960850;
L_08960850:;
    f7 = BITSF(0);
    goto L_08960854;
L_08960854:;
    f0 = f0 + f7;
    sp = sp + 80;
    { v[4]=vr4;return f0; }
L_08960870:;
    v0 = D_08AEDF80 - (-8320);
    f0 = BITSF(LD32(v0-8320));
    s1 = D_08AEDF7C - (-8324);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f2 = f1 - f0;
    if (cnd_) { goto L_089607A4; }
    goto L_0896088C;
L_0896088C:;
    v0 = D_08AEDF84 - (-8316);
    f0 = BITSF(LD32(v0-8316));
    f20 = f2 * f0;
    goto L_089607A4;
    v[4]=vr4;
}

/* 0896089C */
rv_t func_0896089C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0896089C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2806C - (-32660);
    t1 = D_08C2807C - (-32644);
    t2 = D_08C2808C - (-32628);
    a1 = a1 & a0;
    v1 = t0 - 32660;
    a2 = t1 - 32644;
    cnd_ = a1 == 0;
    a3 = t2 - 32628;
    if (cnd_) { goto L_08960954; }
    goto L_089608CC;
L_089608CC:;
    v0 = D_08AEDF8C - (-8308);
    f4 = BITSF(LD32(v0-8308));
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
    ST32(t0-32660, FBITS(f2));
    ST32(t1-32644, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-32628, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08960954;
L_08960954:;
    return (rv_t){ v0, v1, f0 };
}

/* 0896095C */
rv_t func_0896095C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896095C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0896089C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960970;
L_08960970:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896097C */
void func_0896097C(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896097C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_0892412C(a0);
    goto L_08960998;
L_08960998:;
    v0 = D_08AF9648 - (-27064);
    v0 = v0 - 27064;
    ST32(s1+16, s0);
    ST32(s1, v0);
    sp = sp + 16;
    return;
}

/* 089609BC */
void func_089609BC(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089609BC:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    func_0892412C(a0);
    goto L_089609D8;
L_089609D8:;
    v0 = D_08AF9648 - (-27064);
    v0 = v0 - 27064;
    ST32(s1+16, s0);
    ST32(s1, v0);
    sp = sp + 16;
    return;
}

/* 089609FC */
u32 func_089609FC(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089609FC:;
    v0 = D_08AF9648 - (-27064);
    v0 = v0 - 27064;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08924148(a0);
    goto L_08960A18;
L_08960A18:;
    sp = sp + 16;
    return v0;
}

/* 08960A24 */
rv_t func_08960A24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960A24:;
    v0 = D_08AF9648 - (-27064);
    v0 = v0 - 27064;
    ST32(a0, v0);
    sp = sp - 16;
    v0 = func_08924148(a0);
    goto L_08960A40;
L_08960A40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960A4C */
rv_t func_08960A4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960A4C:;
    v0 = D_08AF9648 - (-27064);
    v0 = v0 - 27064;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08924148(a0);
    goto L_08960A6C;
L_08960A6C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960A74;
L_08960A74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960A84 */
u32 func_08960A84(u32 a0)
{
    u32 v0 = 0;
L_08960A84:;
    v0 = LD32(a0+4);
    return v0;
}

/* 08960A8C */
u32 func_08960A8C(u32 a0)
{
    u32 v0 = 0;
L_08960A8C:;
    v0 = LD32(a0+12);
    return v0;
}

/* 08960A94 */
rv_t func_08960A94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960A94:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 60;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960AB0;
L_08960AB0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08960DB4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960AC0;
L_08960AC0:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960AD8 */
rv_t func_08960AD8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960AD8:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08960B08; }
    goto L_08960AF4;
L_08960AF4:;
    ST32(s0, 0);
    goto L_08960AF8;
L_08960AF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08960B08:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960B18;
L_08960B18:;
    ST32(s0, 0);
    goto L_08960AF8;
}

/* 08960B20 */
rv_t func_08960B20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960B20:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 56;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960B3C;
L_08960B3C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08960ECC(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960B4C;
L_08960B4C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960B64 */
rv_t func_08960B64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960B64:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08960B94; }
    goto L_08960B80;
L_08960B80:;
    ST32(s0, 0);
    goto L_08960B84;
L_08960B84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08960B94:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960BA4;
L_08960BA4:;
    ST32(s0, 0);
    goto L_08960B84;
}

/* 08960BAC */
rv_t func_08960BAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960BAC:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 80;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960BC8;
L_08960BC8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089617E4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960BD8;
L_08960BD8:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960BF0 */
rv_t func_08960BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960BF0:;
    v0 = LD32(a1);
    sp = sp - 16;
    a0 = v0 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08960C20; }
    goto L_08960C0C;
L_08960C0C:;
    ST32(s0, 0);
    goto L_08960C10;
L_08960C10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08960C20:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960C30;
L_08960C30:;
    ST32(s0, 0);
    goto L_08960C10;
}

/* 08960C38 */
u64 func_08960C38(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08960C38:;
    a2 = LD32(a0+16);
    v0 = 999;
    a0 = D_08C2B4CC - (-19252);
    cnd_ = a2 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_08960CAC; }
    goto L_08960C4C;
L_08960C4C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08960C9C; }
    goto L_08960C70;
L_08960C70:;
    a0 = LD32(a1);
    goto L_08960C74;
L_08960C74:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08960CB4; }
    goto L_08960C8C;
L_08960C8C:;
    a1 = LD32(a1+4);
    goto L_08960C90;
L_08960C90:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08960C74; }
    goto L_08960C98;
L_08960C98:;
    v1 = 0 + 0;
    goto L_08960C9C;
L_08960C9C:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08960CAC; }
    goto L_08960CA4;
L_08960CA4:;
    v0 = LD32(v1+12);
    return (u64)v0 | ((u64)v1 << 32);
L_08960CAC:;
    v0 = 0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_08960CB4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08960C8C; }
    goto L_08960CC0;
L_08960CC0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08960C90; }
    goto L_08960CCC;
L_08960CCC:;
    goto L_08960C9C;
}

/* 08960CD4 */
rv_t func_08960CD4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08960CD4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2811C - (-32484);
    t1 = D_08C2812C - (-32468);
    t2 = D_08C2813C - (-32452);
    a1 = a1 & a0;
    v1 = t0 - 32484;
    a2 = t1 - 32468;
    cnd_ = a1 == 0;
    a3 = t2 - 32452;
    if (cnd_) { goto L_08960D8C; }
    goto L_08960D04;
L_08960D04:;
    v0 = D_08AEDF90 - (-8304);
    f4 = BITSF(LD32(v0-8304));
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
    ST32(t0-32484, FBITS(f2));
    ST32(t1-32468, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-32452, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08960D8C;
L_08960D8C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08960D94 */
rv_t func_08960D94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960D94:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08960CD4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960DA8;
L_08960DA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960DB4 */
rv_t func_08960DB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960DB4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0892481C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960DC8;
L_08960DC8:;
    v0 = D_08AF9690 - (-26992);
    v0 = v0 - 26992;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960DE4 */
rv_t func_08960DE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960DE4:;
    v0 = D_08AF9690 - (-26992);
    v0 = v0 - 26992;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_08924914(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960E00;
L_08960E00:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960E0C */
rv_t func_08960E0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960E0C:;
    v0 = D_08AF9690 - (-26992);
    v0 = v0 - 26992;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08924914(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960E2C;
L_08960E2C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08960E34;
L_08960E34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960E44 */
rv_t func_08960E44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08960E44:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960E68;
L_08960E68:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089249E8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960E74;
L_08960E74:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08960E88 */
rv_t func_08960E88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960E88:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960EAC;
L_08960EAC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08924A44(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960EB8;
L_08960EB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960ECC */
rv_t func_08960ECC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960ECC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08924E04(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960EE0;
L_08960EE0:;
    v0 = D_08AF96C0 - (-26944);
    v0 = v0 - 26944;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960EFC */
rv_t func_08960EFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08960EFC:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960F20;
L_08960F20:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089250AC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960F2C;
L_08960F2C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08960F40 */
rv_t func_08960F40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960F40:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960F64;
L_08960F64:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08925108(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08960F70;
L_08960F70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08960F84 */
void func_08960F84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08960F84:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = func_0896169C(a0);
    goto L_08960F9C;
L_08960F9C:;
    a0 = D_08C2A880 - (-22400);
    a2 = LD32(v0+16);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_08961050; }
    goto L_08960FB0;
L_08960FB0:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08961000; }
    goto L_08960FD4;
L_08960FD4:;
    a0 = LD32(a1);
    goto L_08960FD8;
L_08960FD8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08961064; }
    goto L_08960FF0;
L_08960FF0:;
    a1 = LD32(a1+4);
    goto L_08960FF4;
L_08960FF4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08960FD8; }
    goto L_08960FFC;
L_08960FFC:;
    v1 = 0 + 0;
    goto L_08961000;
L_08961000:;
    cnd_ = v1 == 0;
    v0 = s1 + 8;
    if (cnd_) { goto L_08961054; }
    goto L_08961008;
L_08961008:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = s1 + 8;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961024;
L_08961024:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s1+8, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_0896103C;
L_0896103C:;
    sp = sp + 16;
    return;
L_08961050:;
    v0 = s1 + 8;
    goto L_08961054;
L_08961054:;
    ST32(v0+4, 0);
    ST32(s1+8, 0);
    ST32(v0+8, 0);
    goto L_0896103C;
L_08961064:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08960FF0; }
    goto L_08961070;
L_08961070:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08960FF4; }
    goto L_0896107C;
L_0896107C:;
    goto L_08961000;
}

/* 08961084 */
rv_t func_08961084(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[256] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 256);
L_08961084:;
    sp = sp - 256;
    s1 = a0 + 0;
    { rv_t r_ = func_0892514C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089610CC;
L_089610CC:;
    a0 = s1 + 0;
    func_08960F84(a0);
    goto L_089610D4;
L_089610D4:;
    a0 = s1 + 0;
    v0 = func_0896169C(a0);
    goto L_089610DC;
L_089610DC:;
    a0 = v0 + 0;
    { u64 r_ = func_08960C38(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089610E4;
L_089610E4:;
    a2 = D_08C2A880 - (-22400);
    s3 = v0 + 0;
    v0 = a2 - 22400;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08961160; }
    goto L_08961114;
L_08961114:;
    a2 = LD32(a2-22400);
    a3 = a1 + 0;
    goto L_0896111C;
L_0896111C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08961150; }
    goto L_08961134;
L_08961134:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08961164; }
    goto L_08961144;
L_08961144:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08961134; }
    goto L_08961150;
L_08961150:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0896111C; }
    goto L_08961160;
L_08961160:;
    a0 = LD32(sp+8);
    goto L_08961164;
L_08961164:;
    cnd_ = a0 == 0;
    v0 = D_08AEDF94 - (-8300);
    if (cnd_) { goto L_0896120C; }
    goto L_0896116C;
L_0896116C:;
    f22 = BITSF(LD32(v0-8300));
    v1 = D_08AEDF98 - (-8296);
    v0 = D_08AEDF9C - (-8292);
    f23 = BITSF(LD32(v1-8296));
    f24 = BITSF(LD32(v0-8292));
    s4 = s1 + 8;
    s5 = sp + 48;
    s6 = sp + 64;
    s7 = D_08B1E464 - (-7068);
    s0 = LD32(a0);
    goto L_08961194;
L_08961194:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_089611F8; }
    goto L_0896119C;
L_0896119C:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_089611F8; }
    goto L_089611A8;
L_089611A8:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089611F8; }
    goto L_089611B4;
L_089611B4:;
    v0 = LD32(s0);
    f20 = BITSF(0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089611F8; }
    goto L_089611D8;
L_089611D8:;
    v0 = LD32(s0+12);
    cnd_ = v0 == s3;
    if (cnd_) { goto L_089611F8; }
    goto L_089611E4;
L_089611E4:;
    v0 = LD32(s0+172);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08961274; }
    goto L_089611F4;
L_089611F4:;
    a0 = sp + 0;
    goto L_089611F8;
L_089611F8:;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961200;
L_08961200:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08961194; }
    goto L_0896120C;
L_0896120C:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08961264; }
    goto L_08961220;
L_08961220:;
    goto L_08961224;
L_08961224:;
    sp = sp + 256;
    return (rv_t){ v0, v1, f0 };
L_08961264:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896126C;
L_0896126C:;
    goto L_08961224;
L_08961274:;
    a0 = s1 + 0;
    v0 = func_0896169C(a0);
    goto L_0896127C;
L_0896127C:;
    v1 = LD32(s0);
    a0 = LD32(v0+16);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 == v1;
    a0 = sp + 0;
    if (cnd_) { goto L_089611F8; }
    goto L_08961298;
L_08961298:;
    ST32(sp+16, FBITS(f20));
    a0 = s0 + 0;
    ST32(sp+20, FBITS(f20));
    ST32(sp+24, FBITS(f20));
    v0 = LD32(s0);
    v1 = LD32(v0+144);
    t_ = v1;
    a1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089612B8;
L_089612B8:;
    f2 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s4+8));
    f1 = f1 - f2;
    f0 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    {u32 a_=sp+(128);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f0 = f0 - f3;
    f2 = f2 - f4;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v1 = FBITS(f0);
    a0 = FBITS(f2);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+36, FBITS(f0));
    ST32(sp+32, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a1=FBITS(v[0]);}
    f0 = BITSF(a1);
    f21 = BITSF(a1);
    fcc = FCMP(f22, f0, 12);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_089611F4; }
    goto L_08961324;
L_08961324:;
    fcc = FCMP(f0, f23, 12);
    cnd_ = fcc;
    if (cnd_) { a0 = sp + 0; goto L_089611F8; }
    goto L_08961334;
L_08961334:;
    {u32 a_=sp+(144);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(a0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    a1 = s5 + 0;
    if (cnd_) { goto L_0896139C; }
    goto L_08961360;
L_08961360:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {a1=FBITS(v[2]);}
    f3 = BITSF(a1);
    {v0=FBITS(v[0]);}
    {a1=FBITS(v[1]);}
    ST32(sp+48, v0);
    ST32(sp+52, a1);
    ST32(sp+56, FBITS(f3));
    ST32(sp+32, v0);
    ST32(sp+36, a1);
    ST32(sp+40, FBITS(f3));
    a1 = s5 + 0;
    goto L_0896139C;
L_0896139C:;
    a0 = s1 + 0;
    func_089615E0(a0, a1);
    goto L_089613A4;
L_089613A4:;
    a0 = s1 + 0;
    v0 = func_0896169C(a0);
    goto L_089613AC;
L_089613AC:;
    a3 = LD32(v0+16);
    a2 = sp + 32;
    a1 = s5 + 0;
    f12 = f21;
    t0 = 1;
    a0 = s6 + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089613C8;
L_089613C8:;
    a0 = s6 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089613D0;
L_089613D0:;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f21, 12);
    cnd_ = !fcc;
    ST32(sp+160, 0);
    if (cnd_) { goto L_089613EC; }
    goto L_089613E4;
L_089613E4:;
    v0 = 1;
    ST32(sp+160, v0);
    goto L_089613EC;
L_089613EC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+40);
    t_ = v0;
    fp = s1 + 40;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961400;
L_08961400:;
    f0 = BITSF(LD32(v0));
    ST32(sp+32, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961418;
L_08961418:;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+36, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961430;
L_08961430:;
    f0 = BITSF(LD32(v0+8));
    ST32(sp+40, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v1 = 999;
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    cnd_ = a2 == v1;
    v0 = D_08B1E460 - (-7072);
    if (cnd_) { goto L_089614EC; }
    goto L_08961454;
L_08961454:;
    v0 = LD32(fp+4);
    v1 = LD32(s1+40);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08961498; }
    goto L_08961478;
L_08961478:;
    v0 = LD32(a0);
    goto L_0896147C;
L_0896147C:;
    v1 = LD32(v0+4);
    cnd_ = v1 == a2;
    a1 = v0 + 0;
    if (cnd_) { goto L_089615CC; }
    goto L_08961488;
L_08961488:;
    a0 = LD32(a0+4);
    goto L_0896148C;
L_0896148C:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0896147C; }
    goto L_08961494;
L_08961494:;
    a1 = 0 + 0;
    goto L_08961498;
L_08961498:;
    cnd_ = a1 == 0;
    v0 = a1 + 40;
    if (cnd_) { goto L_089614E8; }
    goto L_089614A0;
L_089614A0:;
    ST32(a1+24, FBITS(f24));
    v1 = a1 + 28;
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+40));
    ST32(a1+40, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    f0 = BITSF(LD32(sp+36));
    ST32(v0+4, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    f1 = BITSF(LD32(sp+20));
    v0 = LD32(sp+160);
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(sp+16));
    ST32(v1+4, FBITS(f1));
    ST32(a1+16, v0);
    ST32(a1+28, FBITS(f0));
    ST32(a1+20, 0);
    goto L_089611F4;
L_089614E8:;
    v0 = D_08B1E460 - (-7072);
    goto L_089614EC;
L_089614EC:;
    a0 = LD32(v0-7072);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089614F4;
L_089614F4:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08961584; }
    goto L_089614FC;
L_089614FC:;
    v0 = LD32(s7-7068);
    a0 = s2 + 28;
    a1 = s2 + 40;
    v0 = v0 + 1;
    ST32(s7-7068, v0);
    ST32(s2, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s2+4, v1);
    v0 = LD32(s0);
    ST32(s2+20, 0);
    ST32(s2+24, FBITS(f24));
    f0 = BITSF(LD32(sp+20));
    v1 = LD32(v0-16);
    f1 = BITSF(LD32(sp+16));
    ST32(a0+4, FBITS(f0));
    v1 = s0 + v1;
    f0 = BITSF(LD32(sp+24));
    v0 = LD_U16(v1+8);
    ST32(s2+28, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    ST32(s2+8, v0);
    v0 = 2;
    ST32(a1+8, FBITS(f0));
    ST32(s2+12, v0);
    f0 = BITSF(LD32(sp+32));
    v0 = LD32(sp+160);
    f1 = BITSF(LD32(sp+36));
    ST32(s2+40, FBITS(f0));
    ST32(s2+16, v0);
    ST32(a1+4, FBITS(f1));
    goto L_08961584;
L_08961584:;
    v0 = LD32(fp+4);
    s0 = LD32(s2+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896159C;
L_0896159C:;
    a0 = LD32(s1+40);
    s0 = s0 << 2;
    v1 = LD32(fp+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(fp+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s2);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_089611F4;
L_089615CC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0896148C; }
    goto L_089615D8;
L_089615D8:;
    goto L_08961498;
}

/* 089615E0 */
void func_089615E0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089615E0:;
    sp = sp - 16;
    v1 = a0 + 8;
    s0 = a1 + 0;
    f1 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f2));
    v0 = func_0896169C(a0);
    goto L_08961610;
L_08961610:;
    a1 = LD32(v0+16);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961624;
L_08961624:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0896168C; }
    goto L_0896162C;
L_0896162C:;
    v1 = LD32(v0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08961648; }
    goto L_08961644;
L_08961644:;
    a1 = LD32(v0+16);
    goto L_08961648;
L_08961648:;
    cnd_ = a1 == 0;
    v0 = a1 + 4;
    if (cnd_) { goto L_0896168C; }
    goto L_08961650;
L_08961650:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+12));
    v0 = D_08AEDFA4 - (-8284);
    f2 = BITSF(LD32(v0-8284));
    f1 = f1 - f0;
    v0 = D_08AEDFA0 - (-8288);
    f0 = BITSF(LD32(v0-8288));
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_08961680; }
    goto L_08961680;
L_08961680:;
    f0 = BITSF(LD32(s0+4));
    f0 = f0 - f1;
    ST32(s0+4, FBITS(f0));
    goto L_0896168C;
L_0896168C:;
    sp = sp + 16;
    return;
}

/* 0896169C */
u32 func_0896169C(u32 a0)
{
    u32 v0 = 0;
L_0896169C:;
    v0 = LD32(a0+4);
    return v0;
}

/* 089616A4 */
rv_t func_089616A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089616A4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C281CC - (-32308);
    t1 = D_08C281DC - (-32292);
    t2 = D_08C281EC - (-32276);
    a1 = a1 & a0;
    v1 = t0 - 32308;
    a2 = t1 - 32292;
    cnd_ = a1 == 0;
    a3 = t2 - 32276;
    if (cnd_) { goto L_0896175C; }
    goto L_089616D4;
L_089616D4:;
    v0 = D_08AEDFA8 - (-8280);
    f4 = BITSF(LD32(v0-8280));
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
    ST32(t0-32308, FBITS(f2));
    ST32(t1-32292, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-32276, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0896175C;
L_0896175C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08961764 */
rv_t func_08961764(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08961764:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089616A4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961778;
L_08961778:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08961784 */
u64 func_08961784(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08961784:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0892538C(a0, a1, t1, t2, t3);
    goto L_08961798;
L_08961798:;
    v0 = D_08B45A9C - (23196);
    a0 = v0 + 23196;
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(v0+23196));
    v1 = s0 + 68;
    v0 = D_08AEDFAC - (-8276);
    f1 = BITSF(LD32(a0+4));
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-8276));
    v0 = D_08AF96F0 - (-26896);
    v0 = v0 - 26896;
    ST32(v1+4, FBITS(f1));
    ST32(s0, v0);
    ST32(s0+32, FBITS(f0));
    ST32(s0+68, FBITS(f2));
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089617E4 */
rv_t func_089617E4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089617E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0892538C(a0, a1, t1, t2, t3);
    goto L_089617F8;
L_089617F8:;
    v0 = D_08B45A9C - (23196);
    a0 = v0 + 23196;
    f0 = BITSF(LD32(a0+8));
    f2 = BITSF(LD32(v0+23196));
    v1 = s0 + 68;
    v0 = D_08AEDFB0 - (-8272);
    f1 = BITSF(LD32(a0+4));
    ST32(v1+8, FBITS(f0));
    f0 = BITSF(LD32(v0-8272));
    v0 = D_08AF96F0 - (-26896);
    v0 = v0 - 26896;
    ST32(v1+4, FBITS(f1));
    ST32(s0, v0);
    ST32(s0+32, FBITS(f0));
    ST32(s0+68, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08961844 */
u64 func_08961844(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08961844:;
    v0 = D_08AF96F0 - (-26896);
    v0 = v0 - 26896;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089255F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961860;
L_08961860:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896186C */
rv_t func_0896186C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896186C:;
    v0 = D_08AF96F0 - (-26896);
    v0 = v0 - 26896;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_089255F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961888;
L_08961888:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08961894 */
rv_t func_08961894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08961894:;
    v0 = D_08AF96F0 - (-26896);
    v0 = v0 - 26896;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_089255F4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089618B4;
L_089618B4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089618BC;
L_089618BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089618CC */
rv_t func_089618CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_089618CC:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089618F0;
L_089618F0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08925704(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089618FC;
L_089618FC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08961910 */
rv_t func_08961910(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08961910:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961934;
L_08961934:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08925760(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961940;
L_08961940:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08961954 */
float func_08961954(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08961954:;
    sp = sp - 16;
    s0 = a0 + 68;
    ST32(a0+68, 0);
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    s1 = a0 + 0;
    v0 = func_089629F8(a0);
    goto L_0896197C;
L_0896197C:;
    a0 = D_08C2A880 - (-22400);
    a2 = LD32(v0+16);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 22400;
    if (cnd_) { goto L_08961A1C; }
    goto L_08961990;
L_08961990:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089619E0; }
    goto L_089619B4;
L_089619B4:;
    a0 = LD32(a1);
    goto L_089619B8;
L_089619B8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08961A30; }
    goto L_089619D0;
L_089619D0:;
    a1 = LD32(a1+4);
    goto L_089619D4;
L_089619D4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089619B8; }
    goto L_089619DC;
L_089619DC:;
    v1 = 0 + 0;
    goto L_089619E0;
L_089619E0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08961A20; }
    goto L_089619E8;
L_089619E8:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08961A04;
L_08961A04:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s1+68, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_08961A1C;
L_08961A1C:;
    goto L_08961A20;
L_08961A20:;
    sp = sp + 16;
    return f0;
L_08961A30:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089619D0; }
    goto L_08961A3C;
L_08961A3C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089619D4; }
    goto L_08961A48;
L_08961A48:;
    goto L_089619E0;
}

/* 08961A50 */
rv_t func_08961A50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_08961A50:;
    sp = sp - 320;
    s6 = a0 + 52;
    s5 = a0 + 0;
    f20 = f12;
    f0 = func_08961954(a0);
    goto L_08961AA4;
L_08961AA4:;
    a1 = sp + 0;
    v0 = LD32(s6+4);
    ST32(sp, s6);
    ST32(sp+4, 0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08961AEC; }
    goto L_08961ABC;
L_08961ABC:;
    a3 = LD32(s5+52);
    a2 = v0 + 0;
    goto L_08961AC4;
L_08961AC4:;
    v0 = LD32(a1+4);
    v1 = v0 << 2;
    v1 = v1 + a3;
    a0 = LD32(v1);
    v0 = v0 + 1;
    v1 = v0 < a2;
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08961AEC; }
    goto L_08961AE4;
L_08961AE4:;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08961AC4; }
    goto L_08961AEC;
L_08961AEC:;
    a1 = LD32(sp+8);
    cnd_ = a1 == 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08961C38; }
    goto L_08961AF8;
L_08961AF8:;
    s3 = D_08B1B77C - (-18564);
    goto L_08961AFC;
L_08961AFC:;
    s1 = LD32(a1);
    f1 = BITSF(LD32(s3-18564));
    f0 = BITSF(LD32(s1+20));
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    ST32(s1+20, FBITS(f0));
    if (cnd_) { goto L_08961BC8; }
    goto L_08961B1C;
L_08961B1C:;
    a2 = LD32(s1+4);
    a1 = D_08C2B4CC - (-19252);
    v0 = 999;
    v1 = a1 - 19252;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08961B84; }
    goto L_08961B34;
L_08961B34:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08961B84; }
    goto L_08961B58;
L_08961B58:;
    a0 = LD32(a1);
    goto L_08961B5C;
L_08961B5C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0896291C; }
    goto L_08961B74;
L_08961B74:;
    a1 = LD32(a1+4);
    goto L_08961B78;
L_08961B78:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08961B5C; }
    goto L_08961B80;
L_08961B80:;
    a0 = 0 + 0;
    goto L_08961B84;
L_08961B84:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08961BC8; }
    goto L_08961B8C;
L_08961B8C:;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08961BC8; }
    goto L_08961B98;
L_08961B98:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08961BC8; }
    goto L_08961BA4;
L_08961BA4:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0896290C; }
    goto L_08961BC8;
L_08961BC8:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961BD0;
L_08961BD0:;
    s0 = LD32(sp);
    a1 = LD32(s2);
    v0 = LD32(s0+4);
    v1 = LD32(a1+4);
    a0 = LD32(s0);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08961C1C; }
    goto L_08961C00;
L_08961C00:;
    v0 = LD32(a0);
    goto L_08961C04;
L_08961C04:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s0+8); goto L_089628D0; }
    goto L_08961C0C;
L_08961C0C:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08961C04; }
    goto L_08961C1C;
L_08961C1C:;
    v0 = D_08B1E460 - (-7072);
    a0 = LD32(v0-7072);
    a1 = s1 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961C2C;
L_08961C2C:;
    a1 = LD32(sp+8);
    goto L_08961C30;
L_08961C30:;
    cnd_ = a1 != 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_08961AFC; }
    goto L_08961C38;
L_08961C38:;
    a0 = s5 + 0;
    v0 = func_089629F8(a0);
    goto L_08961C40;
L_08961C40:;
    a0 = v0 + 0;
    { u64 r_ = func_08960C38(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961C48;
L_08961C48:;
    s7 = v0 + 0;
    v0 = 4;
    cnd_ = s7 == v0;
    s2 = sp + 16;
    if (cnd_) { goto L_08961F04; }
    goto L_08961C58;
L_08961C58:;
    a1 = D_08C2B2A8 - (-19800);
    v0 = a1 - 19800;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+24, 0);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_08961CCC; }
    goto L_08961C80;
L_08961C80:;
    a1 = LD32(a1-19800);
    a2 = a0 + 0;
    goto L_08961C88;
L_08961C88:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08961CBC; }
    goto L_08961CA0;
L_08961CA0:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_08961CD0; }
    goto L_08961CB0;
L_08961CB0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08961CA0; }
    goto L_08961CBC;
L_08961CBC:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08961C88; }
    goto L_08961CCC;
L_08961CCC:;
    a0 = LD32(sp+24);
    goto L_08961CD0;
L_08961CD0:;
    cnd_ = a0 == 0;
    v0 = D_08AEDFB4 - (-8268);
    if (cnd_) { goto L_08961D30; }
    goto L_08961CD8;
L_08961CD8:;
    v1 = D_08AEDFB8 - (-8264);
    f24 = BITSF(LD32(v0-8268));
    f25 = BITSF(LD32(v1-8264));
    f21 = BITSF(0);
    s4 = 999;
    fp = sp + 96;
    s1 = LD32(a0);
    goto L_08961CF4;
L_08961CF4:;
    a0 = s5 + 0;
    v0 = func_089629F8(a0);
    goto L_08961CFC;
L_08961CFC:;
    a1 = LD32(s1);
    a0 = LD32(v0+16);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 != v1;
    if (cnd_) { v0 = LD32(a1-12); goto L_08962414; }
    goto L_08961D18;
L_08961D18:;
    a0 = s2 + 0;
    goto L_08961D1C;
L_08961D1C:;
    a1 = 1;
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961D24;
L_08961D24:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_08961CF4; }
    goto L_08961D30;
L_08961D30:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08961DB8; }
    goto L_08961D44;
L_08961D44:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08961DB8; }
    goto L_08961D50;
L_08961D50:;
    v0 = LD32(s1);
    goto L_08961D54;
L_08961D54:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08961DA8; }
    goto L_08961D68;
L_08961D68:;
    v0 = LD_U8(s0+8);
    goto L_08961D6C;
L_08961D6C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_0896240C; }
    goto L_08961D74;
L_08961D74:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089623FC; }
    goto L_08961D7C;
L_08961D7C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08961D84;
L_08961D84:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961D90;
L_08961D90:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08961D9C;
L_08961D9C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08961D6C; }
    goto L_08961DA4;
L_08961DA4:;
    v1 = LD32(s1+4);
    goto L_08961DA8;
L_08961DA8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08961D54; }
    goto L_08961DB8;
L_08961DB8:;
    a1 = D_08C2A880 - (-22400);
    v0 = a1 - 22400;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+160, v0);
    v1 = v1 + 1;
    s1 = sp + 160;
    ST32(v0+8, v1);
    ST32(sp+168, 0);
    cnd_ = a0 == 0;
    ST32(sp+164, 0);
    if (cnd_) { goto L_08961E30; }
    goto L_08961DE4;
L_08961DE4:;
    a1 = LD32(a1-22400);
    a2 = a0 + 0;
    goto L_08961DEC;
L_08961DEC:;
    a0 = LD32(s1+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s1+8, v1);
    if (cnd_) { goto L_08961E20; }
    goto L_08961E04;
L_08961E04:;
    v1 = LD32(s1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+168); goto L_08961E34; }
    goto L_08961E14;
L_08961E14:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08961E04; }
    goto L_08961E20;
L_08961E20:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s1+4, v0);
    if (cnd_) { goto L_08961DEC; }
    goto L_08961E30;
L_08961E30:;
    a0 = LD32(sp+168);
    goto L_08961E34;
L_08961E34:;
    cnd_ = a0 == 0;
    v0 = D_08AEDFBC - (-8260);
    if (cnd_) { goto L_08961EF0; }
    goto L_08961E3C;
L_08961E3C:;
    f0 = BITSF(LD32(v0-8260));
    v1 = D_08AEDFB8 - (-8264);
    v0 = D_08AEDFB4 - (-8268);
    f23 = f20 * f0;
    f22 = BITSF(LD32(v0-8268));
    f24 = BITSF(LD32(v1-8264));
    fp = 999;
    s3 = s5 + 68;
    s0 = LD32(a0);
    goto L_08961E60;
L_08961E60:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_08961EDC; }
    goto L_08961E68;
L_08961E68:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08961EDC; }
    goto L_08961E74;
L_08961E74:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08961EDC; }
    goto L_08961E80;
L_08961E80:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08961EDC; }
    goto L_08961EA4;
L_08961EA4:;
    v0 = LD32(s0+12);
    cnd_ = v0 == s7;
    if (cnd_) { goto L_08961EDC; }
    goto L_08961EB0;
L_08961EB0:;
    v0 = LD32(v1-16);
    v1 = 0x8006;
    v0 = s0 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_08961EDC; }
    goto L_08961EC8;
L_08961EC8:;
    v0 = LD32(s0+172);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08961F5C; }
    goto L_08961ED8;
L_08961ED8:;
    a0 = s1 + 0;
    goto L_08961EDC;
L_08961EDC:;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961EE4;
L_08961EE4:;
    a0 = LD32(sp+168);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08961E60; }
    goto L_08961EF0;
L_08961EF0:;
    a0 = LD32(sp+160);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08961F4C; }
    goto L_08961F04;
L_08961F04:;
    goto L_08961F08;
L_08961F08:;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_08961F4C:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961F54;
L_08961F54:;
    goto L_08961F08;
L_08961F5C:;
    a0 = s5 + 0;
    v0 = func_089629F8(a0);
    goto L_08961F64;
L_08961F64:;
    v1 = LD32(s0);
    a0 = LD32(v0+16);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    a1 = LD32(v0+4);
    cnd_ = a0 == a1;
    if (cnd_) { a0 = s1 + 0; goto L_08961EDC; }
    goto L_08961F80;
L_08961F80:;
    a0 = s6 + 0;
    a2 = 1;
    { u64 r_ = func_08ABF840(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08961F8C;
L_08961F8C:;
    v1 = LD32(s0);
    s2 = v0 + 0;
    a1 = D_08C2B3A4 - (-19548);
    v0 = LD32(v1-16);
    a3 = a1 - 19548;
    v0 = s0 + v0;
    a2 = LD32(v0+4);
    cnd_ = a2 == fp;
    a0 = 0 + 0;
    if (cnd_) { goto L_08962000; }
    goto L_08961FB0;
L_08961FB0:;
    v0 = LD32(a3+4);
    v1 = LD32(a1-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v0 = 0 < a0;
    if (cnd_) { goto L_08962004; }
    goto L_08961FD4;
L_08961FD4:;
    a0 = LD32(a1);
    goto L_08961FD8;
L_08961FD8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089623DC; }
    goto L_08961FF0;
L_08961FF0:;
    a1 = LD32(a1+4);
    goto L_08961FF4;
L_08961FF4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08961FD8; }
    goto L_08961FFC;
L_08961FFC:;
    a0 = 0 + 0;
    goto L_08962000;
L_08962000:;
    v0 = 0 < a0;
    goto L_08962004;
L_08962004:;
    v1 = 0 < s2;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089623C0; }
    goto L_08962014;
L_08962014:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08962034; }
    goto L_0896201C;
L_0896201C:;
    f0 = BITSF(LD32(s2+24));
    fcc = FCMP(f0, f22, 12);
    cnd_ = !fcc;
    f0 = f0 + f23;
    if (cnd_) { goto L_08962034; }
    goto L_08962030;
L_08962030:;
    ST32(s2+24, FBITS(f0));
    goto L_08962034;
L_08962034:;
    f21 = BITSF(0);
    a0 = s0 + 0;
    a1 = sp + 80;
    ST32(sp+80, FBITS(f21));
    ST32(sp+84, FBITS(f21));
    ST32(sp+88, FBITS(f21));
    v0 = LD32(s0);
    v1 = LD32(v0+144);
    t_ = v1;
    s4 = sp + 64;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896205C;
L_0896205C:;
    f2 = BITSF(LD32(s5+68));
    f0 = BITSF(LD32(sp+80));
    f3 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s3+8));
    f0 = f0 - f2;
    f1 = BITSF(LD32(sp+84));
    f2 = BITSF(LD32(sp+88));
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f1 = f1 - f3;
    f2 = f2 - f4;
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s5);
    ST32(sp+64, FBITS(f0));
    a0 = s5 + 0;
    a1 = s4 + 0;
    ST32(sp+68, FBITS(f1));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = BITSF(v0);
    ST32(sp+72, FBITS(f2));
    v0 = LD32(v1+32);
    t_ = v0;
    f12 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089620D4;
L_089620D4:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08961EDC; }
    goto L_089620DC;
L_089620DC:;
    v1 = LD32(s5);
    a0 = s5 + 0;
    f12 = f20;
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089620F4;
L_089620F4:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08961EDC; }
    goto L_089620FC;
L_089620FC:;
    v0 = LD32(sp+64);
    {u32 a_=sp+(224);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+68);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+72);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    a1 = sp + 48;
    if (cnd_) { goto L_08962174; }
    goto L_08962134;
L_08962134:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    a1 = sp + 48;
    goto L_08962174;
L_08962174:;
    a0 = s5 + 0;
    func_0896293C(a0, a1);
    goto L_0896217C;
L_0896217C:;
    a0 = s5 + 0;
    v0 = func_089629F8(a0);
    goto L_08962184;
L_08962184:;
    a3 = LD32(v0+16);
    a2 = s4 + 0;
    a1 = sp + 48;
    f12 = f20;
    t0 = 1;
    a0 = sp + 96;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089621A0;
L_089621A0:;
    a0 = sp + 96;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089621A8;
L_089621A8:;
    f0 = BITSF(LD32(v0));
    f1 = f0 - f20;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f24, f2, 12);
    cnd_ = fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_08961EDC; }
    goto L_089621CC;
L_089621CC:;
    v1 = LD32(s0);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089621DC;
L_089621DC:;
    f0 = BITSF(LD32(v0));
    ST32(sp+64, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089621F4;
L_089621F4:;
    f0 = BITSF(LD32(v0+4));
    ST32(sp+68, FBITS(f0));
    v1 = LD32(s0);
    v0 = LD32(v1+40);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896220C;
L_0896220C:;
    f0 = BITSF(LD32(v0+8));
    cnd_ = s2 == 0;
    ST32(sp+72, FBITS(f0));
    if (cnd_) { goto L_08962258; }
    goto L_08962218;
L_08962218:;
    f1 = BITSF(LD32(sp+64));
    v0 = s2 + 40;
    v1 = LD32(s0+12);
    ST32(v0+8, FBITS(f0));
    a0 = s2 + 28;
    f0 = BITSF(LD32(sp+68));
    ST32(s2+40, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f0 = BITSF(LD32(sp+80));
    f1 = BITSF(LD32(sp+88));
    ST32(s2+16, v1);
    ST32(s2+28, FBITS(f0));
    f0 = BITSF(LD32(sp+84));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    goto L_08961ED8;
L_08962258:;
    v0 = D_08B1E460 - (-7072);
    a0 = LD32(v0-7072);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08962264;
L_08962264:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08962344; }
    goto L_0896226C;
L_0896226C:;
    v1 = D_08B1E464 - (-7068);
    v0 = LD32(v1-7068);
    a0 = D_08C2A08C - (-24436);
    v0 = v0 + 1;
    ST32(v1-7068, v0);
    ST32(s2, v0);
    v1 = LD32(s0);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s2+4, v1);
    a1 = LD32(s0+84);
    cnd_ = a1 == fp;
    a2 = a0 - 24436;
    if (cnd_) { goto L_0896238C; }
    goto L_089622A4;
L_089622A4:;
    v0 = LD32(a2+4);
    v1 = LD32(a0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089622E8; }
    goto L_089622C8;
L_089622C8:;
    v1 = LD32(a0);
    goto L_089622CC;
L_089622CC:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089623A0; }
    goto L_089622D8;
L_089622D8:;
    a0 = LD32(a0+4);
    goto L_089622DC;
L_089622DC:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089622CC; }
    goto L_089622E4;
L_089622E4:;
    v1 = 0 + 0;
    goto L_089622E8;
L_089622E8:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08962390; }
    goto L_089622F0;
L_089622F0:;
    v0 = LD_U16(v1+8);
    goto L_089622F4;
L_089622F4:;
    ST32(s2+8, v0);
    v0 = s2 + 28;
    a0 = s2 + 40;
    ST32(s2+12, 0);
    v1 = LD32(s0+12);
    ST32(s2+20, 0);
    ST32(s2+24, FBITS(f22));
    f0 = BITSF(LD32(sp+80));
    f1 = BITSF(LD32(sp+88));
    ST32(s2+16, v1);
    ST32(v0+8, FBITS(f1));
    ST32(s2+28, FBITS(f0));
    f0 = BITSF(LD32(sp+84));
    f1 = BITSF(LD32(sp+64));
    ST32(v0+4, FBITS(f0));
    f0 = BITSF(LD32(sp+72));
    ST32(s2+40, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    f0 = BITSF(LD32(sp+68));
    ST32(a0+4, FBITS(f0));
    goto L_08962344;
L_08962344:;
    v0 = LD32(s6+4);
    s0 = LD32(s2+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896235C;
L_0896235C:;
    a0 = LD32(s5+52);
    s0 = s0 << 2;
    v1 = LD32(s6+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(v0, s2);
    ST32(v0+4, a1);
    ST32(s6+12, v1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_08961ED8;
L_0896238C:;
    v1 = LD32(s0);
    goto L_08962390;
L_08962390:;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v0 = LD_U16(v0+8);
    goto L_089622F4;
L_089623A0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089622DC; }
    goto L_089623AC;
L_089623AC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089622DC; }
    goto L_089623B8;
L_089623B8:;
    goto L_089622E8;
L_089623C0:;
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089623CC;
L_089623CC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s2+24, 0); goto L_08962014; }
    goto L_089623D4;
L_089623D4:;
    goto L_08962014;
L_089623DC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08961FF4; }
    goto L_089623E8;
L_089623E8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08961FF4; }
    goto L_089623F4;
L_089623F4:;
    v0 = 0 < a0;
    goto L_08962004;
L_089623FC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08961D84;
L_0896240C:;
    s0 = LD32(s0+4);
    goto L_08961D9C;
L_08962414:;
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08961D1C; }
    goto L_0896242C;
L_0896242C:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08961D1C; }
    goto L_08962438;
L_08962438:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08961D1C; }
    goto L_08962444;
L_08962444:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_0896244C;
L_0896244C:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08961D1C; }
    goto L_08962454;
L_08962454:;
    s0 = LD32(s1+12);
    a0 = s7 + 0;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962460;
L_08962460:;
    cnd_ = s0 != v0;
    if (cnd_) { a0 = s2 + 0; goto L_08961D1C; }
    goto L_08962468;
L_08962468:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0896248C; }
    goto L_08962478;
L_08962478:;
    v0 = LD32(s1+236);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08961D1C; }
    goto L_08962488;
L_08962488:;
    v0 = LD32(s1);
    goto L_0896248C;
L_0896248C:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s3 = s5 + 68;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089624A4;
L_089624A4:;
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s5+68));
    f1 = BITSF(LD32(s3+4));
    f2 = BITSF(LD32(s3+8));
    f3 = f3 - f0;
    f4 = f4 - f1;
    f2 = f5 - f2;
    s0 = v0 + 0;
    {u32 a_=sp+(176);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f23 = BITSF(v0);
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_0896253C; }
    goto L_08962514;
L_08962514:;
    f0 = f24 / f0;
    f2 = f2 * f0;
    f1 = f3 * f0;
    f0 = f4 * f0;
    ST32(sp+40, FBITS(f2));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f2));
    goto L_0896253C;
L_0896253C:;
    v1 = LD32(s5);
    a1 = sp + 32;
    a0 = s5 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    f12 = f23;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08962554;
L_08962554:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08961D1C; }
    goto L_0896255C;
L_0896255C:;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    ST32(sp+48, FBITS(f0));
    a1 = D_08C2B0A8 - (-20312);
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    cnd_ = a2 == s4;
    a0 = a1 - 20312;
    if (cnd_) { goto L_08962614; }
    goto L_08962590;
L_08962590:;
    v0 = LD32(a0+4);
    v1 = LD32(a1-20312);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089625E0; }
    goto L_089625B4;
L_089625B4:;
    a0 = LD32(a1);
    goto L_089625B8;
L_089625B8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089628B0; }
    goto L_089625D0;
L_089625D0:;
    a1 = LD32(a1+4);
    goto L_089625D4;
L_089625D4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089625B8; }
    goto L_089625DC;
L_089625DC:;
    v1 = 0 + 0;
    goto L_089625E0;
L_089625E0:;
    cnd_ = v1 == 0;
    a1 = 0x10000u;
    if (cnd_) { goto L_08962614; }
    goto L_089625E8;
L_089625E8:;
    v0 = LD32(v1);
    a1 = a1 | 0xa7d2;
    a0 = LD32(v0-12);
    a2 = sp + 48;
    a3 = 0 + 0;
    a0 = v1 + a0;
    v1 = LD32(a0);
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08962614;
L_08962614:;
    f0 = BITSF(LD32(s5+68));
    f1 = BITSF(LD32(s3+4));
    f5 = BITSF(LD32(s3+8));
    f4 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(sp+52));
    f2 = BITSF(LD32(sp+56));
    f4 = f4 - f0;
    f3 = f3 - f1;
    f2 = f2 - f5;
    {u32 a_=sp+(192);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    f22 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+64, FBITS(f4));
    fcc = FCMP(f0, f22, 2);
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f2));
    if (cnd_) { goto L_089626BC; }
    goto L_08962678;
L_08962678:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f22 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+88, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, v0);
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    goto L_089626BC;
L_089626BC:;
    a0 = s5 + 0;
    v0 = func_089629F8(a0);
    goto L_089626C4;
L_089626C4:;
    a3 = LD32(v0+16);
    a1 = s3 + 0;
    a2 = sp + 64;
    f12 = f22;
    t0 = 1;
    a0 = fp + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089626E0;
L_089626E0:;
    a0 = fp + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089626E8;
L_089626E8:;
    f0 = BITSF(LD32(v0));
    f1 = f0 - f22;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f25, f2, 12);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08961D1C; }
    goto L_0896270C;
L_0896270C:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    cnd_ = a2 == s4;
    v0 = D_08B1E460 - (-7072);
    if (cnd_) { goto L_089627B8; }
    goto L_08962724;
L_08962724:;
    v0 = LD32(s6+4);
    v1 = LD32(s5+52);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08962768; }
    goto L_08962748;
L_08962748:;
    v0 = LD32(a0);
    goto L_0896274C;
L_0896274C:;
    v1 = LD32(v0+4);
    cnd_ = v1 == a2;
    a1 = v0 + 0;
    if (cnd_) { goto L_0896289C; }
    goto L_08962758;
L_08962758:;
    a0 = LD32(a0+4);
    goto L_0896275C;
L_0896275C:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0896274C; }
    goto L_08962764;
L_08962764:;
    a1 = 0 + 0;
    goto L_08962768;
L_08962768:;
    cnd_ = a1 == 0;
    f0 = BITSF(LD32(sp+40));
    if (cnd_) { goto L_089627B4; }
    goto L_08962770;
L_08962770:;
    v0 = a1 + 40;
    a0 = LD32(s1+12);
    f1 = BITSF(LD32(sp+32));
    ST32(v0+8, FBITS(f0));
    v1 = a1 + 28;
    f0 = BITSF(LD32(sp+36));
    ST32(a1+40, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    ST32(v1+8, FBITS(f2));
    ST32(v1+4, FBITS(f0));
    ST32(a1+16, a0);
    ST32(a1+52, FBITS(f23));
    ST32(a1+28, FBITS(f1));
    goto L_08961D18;
L_089627B4:;
    v0 = D_08B1E460 - (-7072);
    goto L_089627B8;
L_089627B8:;
    a0 = LD32(v0-7072);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089627C0;
L_089627C0:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08962854; }
    goto L_089627C8;
L_089627C8:;
    v1 = D_08B1E464 - (-7068);
    v0 = LD32(v1-7068);
    a1 = s3 + 28;
    a2 = s3 + 40;
    v0 = v0 + 1;
    ST32(v1-7068, v0);
    ST32(s3, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s3+4, v1);
    a0 = LD32(s1);
    ST32(s3+12, 0);
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD_U16(v0+8);
    ST32(s3+8, v1);
    v0 = LD32(s1+12);
    ST32(s3+20, 0);
    ST32(s3+24, FBITS(f24));
    f0 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    f0 = BITSF(LD32(sp+36));
    ST32(s3+28, FBITS(f2));
    ST32(a2+4, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+32));
    ST32(s3+16, v0);
    ST32(a2+8, FBITS(f1));
    ST32(s3+40, FBITS(f0));
    ST32(s3+52, FBITS(f23));
    goto L_08962854;
L_08962854:;
    v0 = LD32(s6+4);
    s0 = LD32(s3+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896286C;
L_0896286C:;
    a0 = LD32(s5+52);
    s0 = s0 << 2;
    v1 = LD32(s6+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(v0, s3);
    ST32(v0+4, a1);
    ST32(s6+12, v1);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_08961D18;
L_0896289C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_0896275C; }
    goto L_089628A8;
L_089628A8:;
    goto L_08962768;
L_089628B0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089625D0; }
    goto L_089628BC;
L_089628BC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089625D4; }
    goto L_089628C8;
L_089628C8:;
    goto L_089625E0;
L_089628D0:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08962904; }
    goto L_089628D8;
L_089628D8:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_089628FC; }
    goto L_089628E0;
L_089628E0:;
    ST32(a2+4, v0);
    goto L_089628E4;
L_089628E4:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089628EC;
L_089628EC:;
    v0 = LD32(s0+12);
    v0 = v0 - 1;
    ST32(s0+12, v0);
    goto L_08961C1C;
L_089628FC:;
    ST32(v1, v0);
    goto L_089628E4;
L_08962904:;
    ST8(a0+8, v0);
    goto L_08961C1C;
L_0896290C:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962914;
L_08962914:;
    a1 = LD32(sp+8);
    goto L_08961C30;
L_0896291C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08961B78; }
    goto L_08962928;
L_08962928:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08961B78; }
    goto L_08962934;
L_08962934:;
    goto L_08961B84;
}

/* 0896293C */
void func_0896293C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896293C:;
    sp = sp - 16;
    v1 = a0 + 68;
    s0 = a1 + 0;
    f1 = BITSF(LD32(a0+68));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    ST32(a1, FBITS(f1));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f2));
    v0 = func_089629F8(a0);
    goto L_0896296C;
L_0896296C:;
    a1 = LD32(v0+16);
    a0 = D_08C2A880 - (-22400);
    a0 = a0 - 22400;
    a2 = 1;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962980;
L_08962980:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089629E8; }
    goto L_08962988;
L_08962988:;
    v1 = LD32(v0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089629A4; }
    goto L_089629A0;
L_089629A0:;
    a1 = LD32(v0+16);
    goto L_089629A4;
L_089629A4:;
    cnd_ = a1 == 0;
    v0 = a1 + 4;
    if (cnd_) { goto L_089629E8; }
    goto L_089629AC;
L_089629AC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+12));
    v0 = D_08AEDFC4 - (-8252);
    f2 = BITSF(LD32(v0-8252));
    f1 = f1 - f0;
    v0 = D_08AEDFC0 - (-8256);
    f0 = BITSF(LD32(v0-8256));
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f2; goto L_089629DC; }
    goto L_089629DC;
L_089629DC:;
    f0 = BITSF(LD32(s0+4));
    f0 = f0 - f1;
    ST32(s0+4, FBITS(f0));
    goto L_089629E8;
L_089629E8:;
    sp = sp + 16;
    return;
}

/* 089629F8 */
u32 func_089629F8(u32 a0)
{
    u32 v0 = 0;
L_089629F8:;
    v0 = LD32(a0+4);
    return v0;
}

/* 08962A00 */
rv_t func_08962A00(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08962A00:;
    sp = sp - 96;
    s1 = a0 + 0;
    s5 = 0 + 0;
    f0 = func_08961954(a0);
    goto L_08962A34;
L_08962A34:;
    v0 = s1 + 52;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    a0 = sp + 0;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    v1 = D_08AEDFC8 - (-8248);
    f20 = BITSF(LD32(v1-8248));
    ST32(sp, v0);
    ST32(sp+4, 0);
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08962AB0; }
    goto L_08962A64;
L_08962A64:;
    a2 = LD32(s1+52);
    a3 = a1 + 0;
    goto L_08962A6C;
L_08962A6C:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_08962AA0; }
    goto L_08962A84;
L_08962A84:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_08962AB4; }
    goto L_08962A94;
L_08962A94:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08962A84; }
    goto L_08962AA0;
L_08962AA0:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_08962A6C; }
    goto L_08962AB0;
L_08962AB0:;
    v1 = LD32(sp+8);
    goto L_08962AB4;
L_08962AB4:;
    cnd_ = v1 == 0;
    v0 = D_08AEDFCC - (-8244);
    if (cnd_) { goto L_08962B70; }
    goto L_08962ABC;
L_08962ABC:;
    f21 = BITSF(LD32(v0-8244));
    s2 = 0x8002;
    s0 = s1 + 68;
    a2 = LD32(v1);
    goto L_08962ACC;
L_08962ACC:;
    a0 = sp + 0;
    a1 = 1;
    v0 = LD32(a2+8);
    cnd_ = v0 == s2;
    v1 = a2 + 28;
    if (cnd_) { goto L_08962B5C; }
    goto L_08962AE0;
L_08962AE0:;
    f0 = BITSF(LD32(s1+68));
    f5 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a2+28));
    f2 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f1 = f1 - f0;
    f2 = f2 - f3;
    f5 = f5 - f4;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f1));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08962B5C; }
    goto L_08962B40;
L_08962B40:;
    f0 = BITSF(LD32(a2+24));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08962B5C; }
    goto L_08962B54;
L_08962B54:;
    f20 = BITSF(v0);
    s5 = a2 + 0;
    goto L_08962B5C;
L_08962B5C:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962B64;
L_08962B64:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(v1); goto L_08962ACC; }
    goto L_08962B70;
L_08962B70:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08962BF8; }
    goto L_08962B84;
L_08962B84:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08962BF8; }
    goto L_08962B90;
L_08962B90:;
    v0 = LD32(s1);
    goto L_08962B94;
L_08962B94:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08962BE8; }
    goto L_08962BA8;
L_08962BA8:;
    v0 = LD_U8(s0+8);
    goto L_08962BAC;
L_08962BAC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08962C38; }
    goto L_08962BB4;
L_08962BB4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08962C28; }
    goto L_08962BBC;
L_08962BBC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08962BC4;
L_08962BC4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962BD0;
L_08962BD0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08962BDC;
L_08962BDC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08962BAC; }
    goto L_08962BE4;
L_08962BE4:;
    v1 = LD32(s1+4);
    goto L_08962BE8;
L_08962BE8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08962B94; }
    goto L_08962BF8;
L_08962BF8:;
    v0 = s5 + 0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08962C28:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08962BC4;
L_08962C38:;
    s0 = LD32(s0+4);
    goto L_08962BDC;
}

/* 08962C40 */
u32 func_08962C40(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08962C40:;
    sp = sp - 96;
    s0 = a0 + 0;
    s3 = 0 + 0;
    f0 = ({ v[0]=vr0;__auto_type vr_t_ = func_08961954(a0); vr0=v[0];vr_t_; });
    goto L_08962C6C;
L_08962C6C:;
    v0 = s0 + 52;
    v1 = LD32(v0+8);
    a0 = sp + 0;
    a1 = 1;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    v1 = D_08AEDFD0 - (-8240);
    f20 = BITSF(LD32(v1-8240));
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962C9C;
L_08962C9C:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = D_08AEDFD4 - (-8236);
    if (cnd_) { goto L_08962CE0; }
    goto L_08962CA8;
L_08962CA8:;
    f21 = BITSF(LD32(v0-8236));
    s2 = 0x8002;
    s1 = s0 + 68;
    v1 = LD32(v1);
    goto L_08962CB8;
L_08962CB8:;
    a0 = sp + 0;
    a1 = 1;
    v0 = LD32(v1+8);
    cnd_ = v0 == s2;
    a2 = v1 + 28;
    if (cnd_) { goto L_08962D2C; }
    goto L_08962CCC;
L_08962CCC:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962CD4;
L_08962CD4:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v1); goto L_08962CB8; }
    goto L_08962CE0;
L_08962CE0:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08962D1C; }
    goto L_08962CF4;
L_08962CF4:;
    v0 = s3 + 0;
    goto L_08962CF8;
L_08962CF8:;
    sp = sp + 96;
    { v[0]=vr0;return v0; }
L_08962D1C:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962D24;
L_08962D24:;
    v0 = s3 + 0;
    goto L_08962CF8;
L_08962D2C:;
    f0 = BITSF(LD32(s0+68));
    f5 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(v1+28));
    f2 = BITSF(LD32(a2+4));
    f3 = BITSF(LD32(s1+4));
    f4 = BITSF(LD32(s1+8));
    f1 = f1 - f0;
    f2 = f2 - f3;
    f5 = f5 - f4;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f1));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_08962CCC; }
    goto L_08962D8C;
L_08962D8C:;
    f0 = BITSF(LD32(v1+24));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08962CCC; }
    goto L_08962DA0;
L_08962DA0:;
    f20 = BITSF(v0);
    s3 = v1 + 0;
    goto L_08962CCC;
    v[0]=vr0;
}

/* 08962DAC */
u32 func_08962DAC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08962DAC:;
    sp = sp - 80;
    s1 = a0 + 0;
    s2 = 0 + 0;
    f0 = ({ v[0]=vr0;__auto_type vr_t_ = func_08961954(a0); vr0=v[0];vr_t_; });
    goto L_08962DD4;
L_08962DD4:;
    v0 = s1 + 52;
    v1 = LD32(v0+8);
    a0 = sp + 0;
    a1 = 1;
    v1 = v1 + 1;
    ST32(v0+8, v1);
    v1 = D_08AEDFD8 - (-8232);
    f20 = BITSF(LD32(v1-8232));
    ST32(sp, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962E04;
L_08962E04:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = D_08AEDFDC - (-8228);
    if (cnd_) { goto L_08962EB8; }
    goto L_08962E10;
L_08962E10:;
    f21 = BITSF(LD32(v0-8228));
    s0 = s1 + 68;
    v1 = LD32(v1);
    goto L_08962E1C;
L_08962E1C:;
    f0 = BITSF(LD32(s0+8));
    f4 = BITSF(LD32(s1+68));
    v0 = v1 + 28;
    f3 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(v1+28));
    f3 = f3 - f0;
    f2 = f2 - f5;
    f1 = f1 - f4;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    a0 = sp + 0;
    a1 = 1;
    v0 = FBITS(f1);
    {vr0=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f1));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+20, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f3));
    if (cnd_) { goto L_08962EA4; }
    goto L_08962E88;
L_08962E88:;
    f0 = BITSF(LD32(v1+24));
    fcc = FCMP(f21, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08962EA4; }
    goto L_08962E9C;
L_08962E9C:;
    f20 = BITSF(v0);
    s2 = v1 + 0;
    goto L_08962EA4;
L_08962EA4:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962EAC;
L_08962EAC:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v1); goto L_08962E1C; }
    goto L_08962EB8;
L_08962EB8:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08962EF0; }
    goto L_08962ECC;
L_08962ECC:;
    v0 = s2 + 0;
    goto L_08962ED0;
L_08962ED0:;
    sp = sp + 80;
    { v[0]=vr0;return v0; }
L_08962EF0:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962EF8;
L_08962EF8:;
    v0 = s2 + 0;
    goto L_08962ED0;
    v[0]=vr0;
}

/* 08962F00 */
u32 func_08962F00(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08962F00:;
    sp = sp - 128;
    v0 = a1 < 0x4u;
    v1 = 0 + 0;
    s2 = a0 + 0;
    s0 = a1 + 0;
    f21 = f12;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089630E8; }
    goto L_08962F54;
L_08962F54:;
    a2 = a0 + 52;
    v0 = LD32(a2+8);
    a0 = D_08ADB254 - (-19884);
    v1 = a0 - 19884;
    v0 = v0 + 1;
    ST32(a2+8, v0);
    s4 = sp + 16;
    a1 = 1;
    v0 = LD32(a0-19884);
    t1 = LD32(v1+12);
    a3 = LD32(v1+4);
    t0 = LD32(v1+8);
    a0 = s4 + 0;
    ST32(sp, v0);
    v0 = D_08AEDFE0 - (-8224);
    s5 = 0 + 0;
    ST32(sp+4, a3);
    ST32(sp+8, t0);
    ST32(sp+12, t1);
    f22 = BITSF(LD32(v0-8224));
    ST32(sp+16, a2);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08962FB4;
L_08962FB4:;
    a0 = LD32(sp+24);
    cnd_ = a0 == 0;
    v0 = D_08AEDFE4 - (-8220);
    if (cnd_) { goto L_089630D0; }
    goto L_08962FC0;
L_08962FC0:;
    v1 = D_08AEDFE8 - (-8216);
    f25 = BITSF(LD32(v0-8220));
    f24 = BITSF(LD32(v1-8216));
    v0 = D_08AEDFEC - (-8212);
    f23 = BITSF(0);
    f26 = BITSF(LD32(v0-8212));
    v0 = s0 << 2;
    s3 = v0 + sp;
    s1 = s2 + 68;
    s0 = LD32(a0);
    goto L_08962FE8;
L_08962FE8:;
    f4 = BITSF(LD32(s2+68));
    f5 = BITSF(LD32(s1+8));
    v0 = s0 + 28;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0+28));
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(s1+4));
    f0 = f0 - f4;
    f2 = f2 - f5;
    f1 = f1 - f3;
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f12 = f0;
    f13 = f2;
    v0 = FBITS(f0);
    ST32(sp+36, FBITS(f1));
    {vr0=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+32, FBITS(f0));
    {vr1=BITSF(v0);}
    v0 = FBITS(f2);
    ST32(sp+40, FBITS(f2));
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f20 = BITSF(v0);
    f0 = func_08A9F5FC(f12, f13);
    goto L_08963054;
L_08963054:;
    f1 = f0 - f21;
    a0 = s4 + 0;
    fcc = FCMP(f1, f23, 12);
    cnd_ = !fcc;
    a1 = 1;
    if (cnd_) { goto L_08963070; }
    goto L_0896306C;
L_0896306C:;
    f1 = f1 + f25;
    goto L_08963070;
L_08963070:;
    fcc = FCMP(f24, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f1 - f25; goto L_08963080; }
    goto L_08963080;
L_08963080:;
    fcc = FCMP(f20, f22, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089630BC; }
    goto L_08963090;
L_08963090:;
    f0 = BITSF(LD32(s3));
    f1 = f1 - f0;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f2, f26, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089630BC; }
    goto L_089630B4;
L_089630B4:;
    s5 = s0 + 0;
    f22 = f20;
    goto L_089630BC;
L_089630BC:;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089630C4;
L_089630C4:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08962FE8; }
    goto L_089630D0;
L_089630D0:;
    a0 = LD32(sp+16);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0896312C; }
    goto L_089630E4;
L_089630E4:;
    v1 = s5 + 0;
    goto L_089630E8;
L_089630E8:;
    v0 = v1 + 0;
    sp = sp + 128;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return v0; }
L_0896312C:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08963134;
L_08963134:;
    v1 = s5 + 0;
    goto L_089630E8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 0896313C */
rv_t func_0896313C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0896313C:;
    sp = sp - 128;
    v1 = a0 + 52;
    s5 = a1 + 0;
    a1 = 1;
    s2 = a0 + 0;
    a0 = sp + 0;
    f21 = BITSF(0);
    f20 = f12;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089631B8;
L_089631B8:;
    s0 = LD32(sp+8);
    cnd_ = s0 == 0;
    v0 = D_08AEE004 - (-8188);
    if (cnd_) { goto L_08963270; }
    goto L_089631C4;
L_089631C4:;
    s6 = D_08AEDFFC - (-8196);
    f24 = BITSF(LD32(v0-8188));
    v1 = D_08AEE008 - (-8184);
    v0 = D_08AEE00C - (-8180);
    f26 = BITSF(LD32(v1-8184));
    f23 = BITSF(LD32(v0-8180));
    f25 = BITSF(LD32(s6-8196));
    s3 = D_08C2A880 - (-22400);
    f22 = f21;
    s4 = s2 + 68;
    s7 = D_08AEE000 - (-8192);
    s0 = LD32(s0);
    goto L_089631F4;
L_089631F4:;
    f12 = f20;
    a0 = s2 + 0;
    a1 = s0 + 28;
    v0 = func_0896338C(a0, a1, f12);
    goto L_08963204;
L_08963204:;
    a1 = LD32(s0+4);
    a0 = s3 - 22400;
    a2 = 1;
    s1 = v0 + 0;
    { u64 r_ = func_08ABCA14(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08963218;
L_08963218:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08963258; }
    goto L_08963220;
L_08963220:;
    v0 = LD_U8(v0+5);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_0896325C; }
    goto L_0896322C;
L_0896322C:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_0896325C; }
    goto L_08963238;
L_08963238:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v0 = a0 + v1;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f22, 14);
    cnd_ = !fcc;
    a0 = v0 + 0;
    if (cnd_) { goto L_089632E0; }
    goto L_08963258;
L_08963258:;
    a0 = sp + 0;
    goto L_0896325C;
L_0896325C:;
    a1 = 1;
    { u64 r_ = func_08ABD708(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08963264;
L_08963264:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_089631F4; }
    goto L_08963270;
L_08963270:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089632D0; }
    goto L_08963284;
L_08963284:;
    f0 = f21;
    goto L_08963288;
L_08963288:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_089632D0:;
    { u64 r_ = func_08ABD7F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089632D8;
L_089632D8:;
    f0 = f21;
    goto L_08963288;
L_089632E0:;
    v1 = LD32(v0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089632F0;
L_089632F0:;
    f5 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2+68));
    f4 = BITSF(LD32(s4+8));
    f1 = BITSF(LD32(s4+4));
    f2 = f2 - f0;
    f5 = f5 - f4;
    f3 = f3 - f1;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v1 = s1 << 2;
    v1 = v1 + s5;
    fcc = FCMP(f24, f0, 12);
    f4 = f0 * f26;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    cnd_ = !fcc;
    f0 = BITSF(LD32(s7-8192));
    if (cnd_) { goto L_08963364; }
    goto L_08963360;
L_08963360:;
    f0 = f23 / f4;
    goto L_08963364;
L_08963364:;
    fcc = FCMP(f0, f23, 14);
    cnd_ = fcc;
    f1 = f0 * f25;
    if (cnd_) { goto L_08963378; }
    goto L_08963374;
L_08963374:;
    f1 = BITSF(LD32(s6-8196));
    goto L_08963378;
L_08963378:;
    f0 = BITSF(LD32(v1));
    f21 = f21 + f1;
    f0 = f0 + f1;
    ST32(v1, FBITS(f0));
    goto L_08963258;
}

/* 0896338C */
u32 func_0896338C(u32 a0, u32 a1, float f12)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0896338C:;
    sp = sp - 64;
    v0 = a0 + 68;
    v1 = D_08ADB254 - (-19884);
    f20 = f12;
    f5 = BITSF(LD32(a0+68));
    f3 = BITSF(LD32(a1+8));
    f4 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 - f5;
    f3 = f3 - f4;
    v0 = v1 - 19884;
    f2 = f2 - f1;
    a1 = LD32(v1-19884);
    a2 = LD32(v0+12);
    v1 = LD32(v0+4);
    a0 = LD32(v0+8);
    f13 = f3;
    f12 = f0;
    ST32(sp+20, FBITS(f2));
    ST32(sp, a1);
    ST32(sp+4, v1);
    ST32(sp+8, a0);
    ST32(sp+12, a2);
    ST32(sp+16, FBITS(f0));
    ST32(sp+24, FBITS(f3));
    f0 = func_08A9F5FC(f12, f13);
    goto L_08963404;
L_08963404:;
    f2 = f0 - f20;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEE014 - (-8172);
    if (cnd_) { goto L_0896342C; }
    goto L_0896341C;
L_0896341C:;
    v0 = D_08AEE010 - (-8176);
    f0 = BITSF(LD32(v0-8176));
    f2 = f2 + f0;
    v0 = D_08AEE014 - (-8172);
    goto L_0896342C;
L_0896342C:;
    f0 = BITSF(LD32(v0-8172));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEE018 - (-8168);
    if (cnd_) { goto L_08963450; }
    goto L_08963440;
L_08963440:;
    v0 = D_08AEE010 - (-8176);
    f0 = BITSF(LD32(v0-8176));
    f2 = f2 - f0;
    v0 = D_08AEE018 - (-8168);
    goto L_08963450;
L_08963450:;
    f3 = BITSF(LD32(v0-8168));
    a0 = 0 + 0;
    a1 = sp + 0;
    f0 = BITSF(LD32(a1));
    goto L_08963460;
L_08963460:;
    v0 = a0 + 0;
    a0 = a0 + 1;
    f1 = f2 - f0;
    a1 = a1 + 4;
    a2 = FBITS(f1);
    a2 = (a2 >> 0) & 0x7fffffff;
    f0 = BITSF(a2);
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    v1 = a0 < 0x4u;
    if (cnd_) { goto L_08963498; }
    goto L_0896348C;
L_0896348C:;
    cnd_ = v1 != 0;
    if (cnd_) { f0 = BITSF(LD32(a1)); goto L_08963460; }
    goto L_08963494;
L_08963494:;
    v0 = 0 + 0;
    goto L_08963498;
L_08963498:;
    sp = sp + 64;
    return v0;
}

/* 089634A8 */
rv_t func_089634A8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089634A8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2827C - (-32132);
    t1 = D_08C2828C - (-32116);
    t2 = D_08C2829C - (-32100);
    a1 = a1 & a0;
    v1 = t0 - 32132;
    a2 = t1 - 32116;
    cnd_ = a1 == 0;
    a3 = t2 - 32100;
    if (cnd_) { goto L_08963560; }
    goto L_089634D8;
L_089634D8:;
    v0 = D_08AEE01C - (-8164);
    f4 = BITSF(LD32(v0-8164));
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
    ST32(t0-32132, FBITS(f2));
    ST32(t1-32116, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-32100, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08963560;
L_08963560:;
    return (rv_t){ v0, v1, f0 };
}

/* 08963568 */
rv_t func_08963568(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08963568:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089634A8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896357C;
L_0896357C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08963588 */
rv_t func_08963588(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08963588:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08924E04(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896359C;
L_0896359C:;
    v0 = D_08AF9728 - (-26840);
    v0 = v0 - 26840;
    v1 = D_08AEE024 - (-8156);
    ST32(s0, v0);
    v0 = D_08B1B50C - (-19188);
    f0 = BITSF(LD32(v1-8156));
    ST32(v0-19188, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089635C8 */
rv_t func_089635C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_089635C8:;
    sp = sp - 64;
    v0 = a0 + 40;
    f20 = f12;
    a1 = sp + 0;
    v1 = LD32(v0+4);
    ST32(sp, v0);
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08963634; }
    goto L_08963604;
L_08963604:;
    a3 = LD32(a0+40);
    a2 = v1 + 0;
    goto L_0896360C;
L_0896360C:;
    v0 = LD32(a1+4);
    v1 = v0 << 2;
    v1 = v1 + a3;
    a0 = LD32(v1);
    v0 = v0 + 1;
    v1 = v0 < a2;
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08963634; }
    goto L_0896362C;
L_0896362C:;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_0896360C; }
    goto L_08963634;
L_08963634:;
    a1 = LD32(sp+8);
    cnd_ = a1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08963794; }
    goto L_08963640;
L_08963640:;
    s3 = D_08B1B50C - (-19188);
    goto L_08963644;
L_08963644:;
    s2 = LD32(a1);
    f1 = BITSF(LD32(s3-19188));
    f0 = BITSF(LD32(s2+20));
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    ST32(s2+20, FBITS(f0));
    if (cnd_) { goto L_08963724; }
    goto L_08963664;
L_08963664:;
    a2 = LD32(s2+4);
    a1 = D_08C2B4CC - (-19252);
    v0 = 999;
    s0 = 0 + 0;
    v1 = a1 - 19252;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089636D0; }
    goto L_08963680;
L_08963680:;
    v0 = LD32(v1+4);
    v1 = LD32(a1-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089636D0; }
    goto L_089636A4;
L_089636A4:;
    a0 = LD32(a1);
    goto L_089636A8;
L_089636A8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08963818; }
    goto L_089636C0;
L_089636C0:;
    a1 = LD32(a1+4);
    goto L_089636C4;
L_089636C4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089636A8; }
    goto L_089636CC;
L_089636CC:;
    a0 = 0 + 0;
    goto L_089636D0;
L_089636D0:;
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08963714; }
    goto L_089636D8;
L_089636D8:;
    v1 = LD32(a0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { s1 = 1; goto L_08963718; }
    goto L_089636FC;
L_089636FC:;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    if (cnd_) { s1 = 1; goto L_08963718; }
    goto L_08963708;
L_08963708:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08963800; }
    goto L_08963714;
L_08963714:;
    s1 = 1;
    goto L_08963718;
L_08963718:;
    s0 = s0 | s1;
    goto L_0896371C;
L_0896371C:;
    cnd_ = s0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_089637F0; }
    goto L_08963724;
L_08963724:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896372C;
L_0896372C:;
    s1 = LD32(sp);
    a1 = LD32(s0);
    v0 = LD32(s1+4);
    v1 = LD32(a1+4);
    a0 = LD32(s1);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08963778; }
    goto L_0896375C;
L_0896375C:;
    v0 = LD32(a0);
    goto L_08963760;
L_08963760:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s1+8); goto L_089637B4; }
    goto L_08963768;
L_08963768:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08963760; }
    goto L_08963778;
L_08963778:;
    v0 = D_08B1E460 - (-7072);
    a0 = LD32(v0-7072);
    a1 = s2 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08963788;
L_08963788:;
    a1 = LD32(sp+8);
    goto L_0896378C;
L_0896378C:;
    cnd_ = a1 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08963644; }
    goto L_08963794;
L_08963794:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089637B4:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_089637E8; }
    goto L_089637BC;
L_089637BC:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_089637E0; }
    goto L_089637C4;
L_089637C4:;
    ST32(a2+4, v0);
    goto L_089637C8;
L_089637C8:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089637D0;
L_089637D0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08963778;
L_089637E0:;
    ST32(v1, v0);
    goto L_089637C8;
L_089637E8:;
    ST8(a0+8, v0);
    goto L_08963778;
L_089637F0:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089637F8;
L_089637F8:;
    a1 = LD32(sp+8);
    goto L_0896378C;
L_08963800:;
    v0 = func_089E3BC4(a0);
    goto L_08963808;
L_08963808:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = s0 | s1; goto L_0896371C; }
    goto L_08963810;
L_08963810:;
    s1 = 1;
    goto L_08963718;
L_08963818:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089636C4; }
    goto L_08963824;
L_08963824:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089636C4; }
    goto L_08963830;
L_08963830:;
    goto L_089636D0;
}

/* 08963838 */
rv_t func_08963838(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08963838:;
    sp = sp - 96;
    s3 = a0 + 0;
    s1 = a1 + 0;
    v0 = func_08963CE0(a0);
    goto L_08963860;
L_08963860:;
    a3 = D_08C2A08C - (-24436);
    a0 = LD32(v0+20);
    a2 = LD32(s1+8);
    v0 = 999;
    v1 = LD32(a0+48);
    a1 = a3 - 24436;
    cnd_ = a2 == v0;
    a0 = LD32(v1+12);
    if (cnd_) { goto L_089638DC; }
    goto L_08963880;
L_08963880:;
    v0 = LD32(a1+4);
    v1 = LD32(a3-24436);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089638C4; }
    goto L_089638A4;
L_089638A4:;
    v1 = LD32(a1);
    goto L_089638A8;
L_089638A8:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08963CC0; }
    goto L_089638B4;
L_089638B4:;
    a1 = LD32(a1+4);
    goto L_089638B8;
L_089638B8:;
    cnd_ = a1 != 0;
    if (cnd_) { v1 = LD32(a1); goto L_089638A8; }
    goto L_089638C0;
L_089638C0:;
    v1 = 0 + 0;
    goto L_089638C4;
L_089638C4:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089638E0; }
    goto L_089638CC;
L_089638CC:;
    s0 = LD32(v1+88);
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089638D4;
L_089638D4:;
    cnd_ = s0 == v0;
    if (cnd_) { a1 = LD32(s1+4); goto L_089638FC; }
    goto L_089638DC;
L_089638DC:;
    goto L_089638E0;
L_089638E0:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089638FC:;
    v0 = 999;
    cnd_ = a1 == v0;
    s4 = s3 + 40;
    if (cnd_) { goto L_08963AC4; }
    goto L_08963908;
L_08963908:;
    v0 = LD32(s4+4);
    v1 = LD32(s3+40);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0896394C; }
    goto L_0896392C;
L_0896392C:;
    v0 = LD32(a0);
    goto L_08963930;
L_08963930:;
    v1 = LD32(v0+4);
    cnd_ = v1 == a1;
    s0 = v0 + 0;
    if (cnd_) { goto L_08963CAC; }
    goto L_0896393C;
L_0896393C:;
    a0 = LD32(a0+4);
    goto L_08963940;
L_08963940:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08963930; }
    goto L_08963948;
L_08963948:;
    s0 = 0 + 0;
    goto L_0896394C;
L_0896394C:;
    cnd_ = s0 == 0;
    v0 = D_08AEE028 - (-8152);
    if (cnd_) { goto L_08963AC4; }
    goto L_08963954;
L_08963954:;
    f0 = BITSF(LD32(s0+20));
    f1 = BITSF(LD32(v0-8152));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089638E0; }
    goto L_0896396C;
L_0896396C:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896397C;
L_0896397C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089638DC; }
    goto L_08963984;
L_08963984:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089639A0;
L_089639A0:;
    a0 = s3 + 0;
    s2 = v0 + 0;
    v0 = func_08963CE0(a0);
    goto L_089639AC;
L_089639AC:;
    v1 = LD32(v0+20);
    a0 = LD32(v1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089639D0;
L_089639D0:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    f3 = BITSF(LD32(s2));
    f4 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f3 = f3 - f1;
    f4 = f4 - f0;
    f2 = f2 - f5;
    {u32 a_=sp+(32);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    f5 = BITSF(0);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = LD32(s1+4);
    ST32(sp, FBITS(f3));
    fcc = FCMP(f0, f5, 2);
    ST32(s0+16, v0);
    ST32(sp+4, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_08963A80; }
    goto L_08963A3C;
L_08963A3C:;
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
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_08963A80;
L_08963A80:;
    ST32(s0+52, FBITS(f5));
    v0 = s0 + 40;
    v1 = s0 + 28;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+8));
    ST32(s0+40, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s2+4));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(s0+28, FBITS(f2));
    ST32(s0+20, 0);
    goto L_089638DC;
L_08963AC4:;
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08963AD4;
L_08963AD4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089638DC; }
    goto L_08963ADC;
L_08963ADC:;
    v0 = D_08B1E460 - (-7072);
    a0 = LD32(v0-7072);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963AE8;
L_08963AE8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08963C64; }
    goto L_08963AF0;
L_08963AF0:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963B0C;
L_08963B0C:;
    a0 = s3 + 0;
    s0 = v0 + 0;
    v0 = func_08963CE0(a0);
    goto L_08963B18;
L_08963B18:;
    v1 = LD32(v0+20);
    a0 = LD32(v1+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963B3C;
L_08963B3C:;
    f5 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s0+8));
    v1 = D_08B1E464 - (-7068);
    f4 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0));
    v0 = LD32(v1-7068);
    f1 = BITSF(LD32(s0+4));
    f0 = f0 - f5;
    v0 = v0 + 1;
    f2 = f2 - f4;
    f1 = f1 - f3;
    ST32(v1-7068, v0);
    {u32 a_=sp+(48);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    ST32(s2, v0);
    v0 = D_08AEE02C - (-8148);
    ST32(sp+24, FBITS(f0));
    f0 = BITSF(LD32(v0-8148));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    v1 = LD32(s1+4);
    ST32(s2+20, 0);
    ST32(s2+24, FBITS(f0));
    ST32(s2+4, v1);
    v1 = 2;
    f1 = BITSF(LD32(s2+20));
    ST32(s2+12, v1);
    f4 = f1;
    v0 = LD32(sp+16);
    v1 = LD32(sp+20);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+24);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = LD32(s1+8);
    fcc = FCMP(f0, f4, 2);
    cnd_ = fcc;
    ST32(s2+16, v0);
    if (cnd_) { goto L_08963C28; }
    goto L_08963BE4;
L_08963BE4:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f4 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(sp+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08963C28;
L_08963C28:;
    ST32(s2+52, FBITS(f4));
    v0 = s2 + 40;
    v1 = s2 + 28;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+24));
    ST32(s2+40, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f1 = BITSF(LD32(s0+8));
    f0 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    ST32(v1+8, FBITS(f1));
    ST32(s2+28, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    goto L_08963C64;
L_08963C64:;
    v0 = LD32(s4+4);
    s0 = LD32(s2+4);
    a0 = 12;
    v0 = v0 - 1;
    s0 = s0 & v0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963C7C;
L_08963C7C:;
    a0 = LD32(s3+40);
    s0 = s0 << 2;
    v1 = LD32(s4+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s4+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s2);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_089638DC;
L_08963CAC:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08963940; }
    goto L_08963CB8;
L_08963CB8:;
    goto L_0896394C;
L_08963CC0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089638B8; }
    goto L_08963CCC;
L_08963CCC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089638B8; }
    goto L_08963CD8;
L_08963CD8:;
    goto L_089638C4;
}

/* 08963CE0 */
u32 func_08963CE0(u32 a0)
{
    u32 v0 = 0;
L_08963CE0:;
    v0 = LD32(a0+4);
    return v0;
}

/* 08963CE8 */
rv_t func_08963CE8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08963CE8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2832C - (-31956);
    t1 = D_08C2833C - (-31940);
    t2 = D_08C2834C - (-31924);
    a1 = a1 & a0;
    v1 = t0 - 31956;
    a2 = t1 - 31940;
    cnd_ = a1 == 0;
    a3 = t2 - 31924;
    if (cnd_) { goto L_08963DA0; }
    goto L_08963D18;
L_08963D18:;
    v0 = D_08AEE030 - (-8144);
    f4 = BITSF(LD32(v0-8144));
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
    ST32(t0-31956, FBITS(f2));
    ST32(t1-31940, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31924, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08963DA0;
L_08963DA0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08963DA8 */
rv_t func_08963DA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08963DA8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08963CE8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963DBC;
L_08963DBC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08963DC8 */
rv_t func_08963DC8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08963DC8:;
    sp = sp - 32;
    s0 = a0 + 0;
    { u64 r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08961784(a0, a1, t1, t2, t3); vr0=v[0];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08963DDC;
L_08963DDC:;
    v0 = D_08AEE03C - (-8132);
    f0 = BITSF(LD32(v0-8132));
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(s0+84, 0);
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {vr0=0.63661977236f;}
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEE040 - (-8128);
    f0 = BITSF(LD32(v0-8128));
    v0 = D_08AF9758 - (-26792);
    v0 = v0 - 26792;
    ST32(s0+32, FBITS(f0));
    ST32(s0, v0);
    ST32(s0+80, FBITS(f1));
    sp = sp + 32;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;
}

/* 08963E3C */
rv_t func_08963E3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08963E3C:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963E60;
L_08963E60:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089618CC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963E6C;
L_08963E6C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08963E80 */
rv_t func_08963E80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08963E80:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963EA4;
L_08963EA4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08961910(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08963EB0;
L_08963EB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08963EC4 */
rv_t func_08963EC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08963EC4:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = func_08964D04(a0);
    goto L_08963ED8;
L_08963ED8:;
    v1 = LD32(v0+20);
    a1 = LD32(v1+48);
    v1 = 0x8004;
    a0 = LD32(a1);
    v0 = LD32(a0-16);
    v0 = a1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v0 = 0x801e;
    if (cnd_) { goto L_08963F34; }
    goto L_08963EFC;
L_08963EFC:;
    cnd_ = a0 == v0;
    v1 = D_08AEE04C - (-8116);
    if (cnd_) { goto L_08963F28; }
    goto L_08963F04;
L_08963F04:;
    v0 = LD32(s0+84);
    f0 = BITSF(LD32(v1-8116));
    goto L_08963F0C;
L_08963F0C:;
    v0 = v0 | 0x3;
    ST32(s0+84, v0);
    goto L_08963F14;
L_08963F14:;
    ST32(s0+32, FBITS(f0));
    sp = sp + 32;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_08963F28:;
    v0 = LD32(s0+84);
    f0 = BITSF(LD32(a1+560));
    goto L_08963F0C;
L_08963F34:;
    v0 = D_08AEE048 - (-8120);
    f0 = BITSF(LD32(v0-8120));
    {u32 a_=sp+(0);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(0);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {vr0=0.63661977236f;}
    {u32 a_=sp+(0);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    v1 = LD32(s0+84);
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    v1 = (v1 & ~(0x3u << 0)) | ((0 & 0x3) << 0);
    ST32(s0+84, v1);
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEE044 - (-8124);
    f0 = BITSF(LD32(v0-8124));
    ST32(s0+80, FBITS(f1));
    goto L_08963F14;
    v[0]=vr0;
}

/* 08963F80 */
rv_t func_08963F80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[368] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 368);
L_08963F80:;
    sp = sp - 368;
    s6 = a0 + 52;
    a1 = sp + 0;
    s5 = a0 + 0;
    f20 = f12;
    v0 = LD32(s6+4);
    ST32(sp, s6);
    ST32(sp+4, 0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08964010; }
    goto L_08963FE0;
L_08963FE0:;
    a3 = LD32(a0+52);
    a2 = v0 + 0;
    goto L_08963FE8;
L_08963FE8:;
    v0 = LD32(a1+4);
    v1 = v0 << 2;
    v1 = v1 + a3;
    a0 = LD32(v1);
    v0 = v0 + 1;
    v1 = v0 < a2;
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08964010; }
    goto L_08964008;
L_08964008:;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08963FE8; }
    goto L_08964010;
L_08964010:;
    a1 = LD32(sp+8);
    cnd_ = a1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08964170; }
    goto L_0896401C;
L_0896401C:;
    s4 = D_08AEE050 - (-8112);
    goto L_08964020;
L_08964020:;
    s2 = LD32(a1);
    f1 = BITSF(LD32(s4-8112));
    f0 = BITSF(LD32(s2+20));
    f0 = f0 + f20;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    ST32(s2+20, FBITS(f0));
    if (cnd_) { goto L_08964100; }
    goto L_08964040;
L_08964040:;
    a2 = LD32(s2+4);
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    s1 = 0 + 0;
    v1 = a0 - 19252;
    cnd_ = a2 == v0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089640AC; }
    goto L_0896405C;
L_0896405C:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089640AC; }
    goto L_08964080;
L_08964080:;
    a0 = LD32(a1);
    goto L_08964084;
L_08964084:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08964CE4; }
    goto L_0896409C;
L_0896409C:;
    a1 = LD32(a1+4);
    goto L_089640A0;
L_089640A0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08964084; }
    goto L_089640A8;
L_089640A8:;
    s0 = 0 + 0;
    goto L_089640AC;
L_089640AC:;
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089640F0; }
    goto L_089640B4;
L_089640B4:;
    v1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { s3 = 1; goto L_089640F4; }
    goto L_089640D8;
L_089640D8:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    if (cnd_) { s3 = 1; goto L_089640F4; }
    goto L_089640E4;
L_089640E4:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08964CBC; }
    goto L_089640F0;
L_089640F0:;
    s3 = 1;
    goto L_089640F4;
L_089640F4:;
    s1 = s1 | s3;
    goto L_089640F8;
L_089640F8:;
    cnd_ = s1 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_08964CAC; }
    goto L_08964100;
L_08964100:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964108;
L_08964108:;
    s1 = LD32(sp);
    a1 = LD32(s0);
    v0 = LD32(s1+4);
    v1 = LD32(a1+4);
    a0 = LD32(s1);
    v0 = v0 - 1;
    v1 = v1 & v0;
    v1 = v1 << 2;
    v1 = v1 + a0;
    a0 = LD32(v1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08964154; }
    goto L_08964138;
L_08964138:;
    v0 = LD32(a0);
    goto L_0896413C;
L_0896413C:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s1+8); goto L_08964C70; }
    goto L_08964144;
L_08964144:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0896413C; }
    goto L_08964154;
L_08964154:;
    v0 = D_08B1E460 - (-7072);
    a0 = LD32(v0-7072);
    a1 = s2 + 0;
    { u64 r_ = func_08AA3A90(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964164;
L_08964164:;
    a1 = LD32(sp+8);
    goto L_08964168;
L_08964168:;
    cnd_ = a1 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08964020; }
    goto L_08964170;
L_08964170:;
    a0 = s5 + 0;
    v0 = func_08964D04(a0);
    goto L_08964178;
L_08964178:;
    v1 = LD32(v0+20);
    v0 = LD32(v1+48);
    v1 = 4;
    s7 = LD32(v0+12);
    cnd_ = s7 == v1;
    if (cnd_) { goto L_089644A4; }
    goto L_08964190;
L_08964190:;
    a0 = s5 + 0;
    v0 = func_08964D04(a0);
    goto L_08964198;
L_08964198:;
    a0 = LD32(v0+20);
    fp = sp + 16;
    a1 = fp + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+80);
    t_ = v0;
    s2 = sp + 48;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089641B4;
L_089641B4:;
    a0 = s5 + 0;
    v0 = func_08964D04(a0);
    goto L_089641BC;
L_089641BC:;
    a0 = LD32(v0+20);
    v1 = LD32(a0);
    v0 = LD32(v1+76);
    t_ = v0;
    a1 = sp + 32;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089641D0;
L_089641D0:;
    a1 = D_08C2B2A8 - (-19800);
    v0 = a1 - 19800;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+48, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+56, 0);
    cnd_ = a0 == 0;
    ST32(sp+52, 0);
    if (cnd_) { goto L_08964244; }
    goto L_089641F8;
L_089641F8:;
    a1 = LD32(a1-19800);
    a2 = a0 + 0;
    goto L_08964200;
L_08964200:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_08964234; }
    goto L_08964218;
L_08964218:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+56); goto L_08964248; }
    goto L_08964228;
L_08964228:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08964218; }
    goto L_08964234;
L_08964234:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_08964200; }
    goto L_08964244;
L_08964244:;
    a0 = LD32(sp+56);
    goto L_08964248;
L_08964248:;
    cnd_ = a0 == 0;
    v0 = D_08AEE054 - (-8108);
    if (cnd_) { goto L_089642A0; }
    goto L_08964250;
L_08964250:;
    v1 = D_08AEE058 - (-8104);
    f21 = BITSF(LD32(v0-8108));
    f22 = BITSF(LD32(v1-8104));
    s4 = sp + 112;
    s1 = LD32(a0);
    goto L_08964264;
L_08964264:;
    a0 = s5 + 0;
    v0 = func_08964D04(a0);
    goto L_0896426C;
L_0896426C:;
    a1 = LD32(s1);
    a0 = LD32(v0+16);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 != v1;
    if (cnd_) { v0 = LD32(a1-12); goto L_0896482C; }
    goto L_08964288;
L_08964288:;
    a0 = s2 + 0;
    goto L_0896428C;
L_0896428C:;
    a1 = 1;
    { u64 r_ = func_08ABC5BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964294;
L_08964294:;
    a0 = LD32(sp+56);
    cnd_ = a0 != 0;
    if (cnd_) { s1 = LD32(a0); goto L_08964264; }
    goto L_089642A0;
L_089642A0:;
    s1 = LD32(sp+48);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08964328; }
    goto L_089642B4;
L_089642B4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08964328; }
    goto L_089642C0;
L_089642C0:;
    v0 = LD32(s1);
    goto L_089642C4;
L_089642C4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08964318; }
    goto L_089642D8;
L_089642D8:;
    v0 = LD_U8(s0+8);
    goto L_089642DC;
L_089642DC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08964824; }
    goto L_089642E4;
L_089642E4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08964814; }
    goto L_089642EC;
L_089642EC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089642F4;
L_089642F4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964300;
L_08964300:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_0896430C;
L_0896430C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089642DC; }
    goto L_08964314;
L_08964314:;
    v1 = LD32(s1+4);
    goto L_08964318;
L_08964318:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089642C4; }
    goto L_08964328;
L_08964328:;
    v0 = LD32(s5+84);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089644A4; }
    goto L_08964338;
L_08964338:;
    a1 = D_08C2A880 - (-22400);
    v0 = a1 - 22400;
    v1 = LD32(v0+8);
    a0 = LD32(v0+4);
    ST32(sp+176, v0);
    v1 = v1 + 1;
    s2 = sp + 176;
    ST32(v0+8, v1);
    ST32(sp+184, 0);
    cnd_ = a0 == 0;
    ST32(sp+180, 0);
    if (cnd_) { goto L_089643B0; }
    goto L_08964364;
L_08964364:;
    a1 = LD32(a1-22400);
    a2 = a0 + 0;
    goto L_0896436C;
L_0896436C:;
    a0 = LD32(s2+4);
    v0 = a0 << 2;
    v0 = v0 + a1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_089643A0; }
    goto L_08964384;
L_08964384:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+184); goto L_089643B4; }
    goto L_08964394;
L_08964394:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_08964384; }
    goto L_089643A0;
L_089643A0:;
    v0 = a0 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_0896436C; }
    goto L_089643B0;
L_089643B0:;
    v1 = LD32(sp+184);
    goto L_089643B4;
L_089643B4:;
    cnd_ = v1 == 0;
    v0 = D_08AEE058 - (-8104);
    if (cnd_) { goto L_08964418; }
    goto L_089643BC;
L_089643BC:;
    f23 = BITSF(LD32(v0-8104));
    s1 = LD32(v1);
    goto L_089643C4;
L_089643C4:;
    f20 = BITSF(0);
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08964404; }
    goto L_089643E8;
L_089643E8:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08964404; }
    goto L_089643F4;
L_089643F4:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089644F8; }
    goto L_08964400;
L_08964400:;
    a0 = s2 + 0;
    goto L_08964404;
L_08964404:;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896440C;
L_0896440C:;
    v1 = LD32(sp+184);
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_089643C4; }
    goto L_08964418;
L_08964418:;
    s1 = LD32(sp+176);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089644A0; }
    goto L_0896442C;
L_0896442C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089644A0; }
    goto L_08964438;
L_08964438:;
    v0 = LD32(s1);
    goto L_0896443C;
L_0896443C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08964490; }
    goto L_08964450;
L_08964450:;
    v0 = LD_U8(s0+8);
    goto L_08964454;
L_08964454:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089644F0; }
    goto L_0896445C;
L_0896445C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089644E0; }
    goto L_08964464;
L_08964464:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0896446C;
L_0896446C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964478;
L_08964478:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08964484;
L_08964484:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08964454; }
    goto L_0896448C;
L_0896448C:;
    v1 = LD32(s1+4);
    goto L_08964490;
L_08964490:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0896443C; }
    goto L_089644A0;
L_089644A0:;
    goto L_089644A4;
L_089644A4:;
    sp = sp + 368;
    return (rv_t){ v0, v1, f0 };
L_089644E0:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0896446C;
L_089644F0:;
    s0 = LD32(s0+4);
    goto L_08964484;
L_089644F8:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08964500;
L_08964500:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08964404; }
    goto L_08964508;
L_08964508:;
    v0 = LD32(s1+172);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08964404; }
    goto L_08964518;
L_08964518:;
    s0 = LD32(s1+12);
    a0 = s7 + 0;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964524;
L_08964524:;
    cnd_ = s0 != v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08964404; }
    goto L_0896452C;
L_0896452C:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = sp + 96;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08964548;
L_08964548:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    s4 = v0 + 0;
    f3 = f3 - f1;
    f4 = f4 - f0;
    v1 = FBITS(f2);
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v0 = D_08AEE054 - (-8108);
    f22 = BITSF(LD32(v0-8108));
    ST32(sp+96, FBITS(f2));
    a0 = s5 + 0;
    a1 = s0 + 0;
    v1 = LD32(s5);
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f21 = BITSF(v0);
    v0 = LD32(v1+32);
    f1 = f22 / f0;
    f12 = f0;
    f4 = f4 * f1;
    f2 = f2 * f1;
    f3 = f3 * f1;
    ST32(sp+104, FBITS(f4));
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f3));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f3));
    t_ = v0;
    ST32(sp+88, FBITS(f4));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089645EC;
L_089645EC:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08964404; }
    goto L_089645F4;
L_089645F4:;
    v0 = LD32(sp+96);
    v1 = LD32(sp+100);
    f2 = BITSF(LD32(s5+80));
    {u32 a_=sp+(272);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+104);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+32);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+36);
    v1 = LD32(sp+40);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08964404; }
    goto L_0896464C;
L_0896464C:;
    v0 = LD32(s5+84);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089646C4; }
    goto L_0896465C;
L_0896465C:;
    a0 = s5 + 0;
    v0 = func_08964D04(a0);
    goto L_08964664;
L_08964664:;
    a0 = LD32(v0+20);
    a2 = s0 + 0;
    a1 = fp + 0;
    v1 = LD32(a0+48);
    f12 = f21;
    t0 = 1;
    a3 = LD32(v1);
    a0 = sp + 112;
    v0 = LD32(a3-16);
    v1 = v1 + v0;
    a3 = LD32(v1+4);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08964694;
L_08964694:;
    a0 = sp + 112;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896469C;
L_0896469C:;
    f0 = BITSF(LD32(v0));
    f1 = f0 - f21;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f23, f2, 12);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_08964404; }
    goto L_089646C0;
L_089646C0:;
    v0 = LD32(s1);
    goto L_089646C4;
L_089646C4:;
    a0 = s6 + 0;
    a2 = 1;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a1 = LD32(v1+4);
    { u64 r_ = func_08ABF840(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089646DC;
L_089646DC:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08964730; }
    goto L_089646E4;
L_089646E4:;
    f0 = BITSF(LD32(sp+104));
    v0 = v0 + 40;
    a0 = LD32(s1+12);
    f1 = BITSF(LD32(sp+96));
    ST32(v0+8, FBITS(f0));
    v1 = a1 + 28;
    f0 = BITSF(LD32(sp+100));
    ST32(a1+40, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f2 = BITSF(LD32(s4+8));
    f1 = BITSF(LD32(s4));
    f0 = BITSF(LD32(s4+4));
    ST32(v1+8, FBITS(f2));
    ST32(v1+4, FBITS(f0));
    ST32(a1+16, a0);
    ST32(a1+20, FBITS(f20));
    ST32(a1+28, FBITS(f1));
    ST32(a1+52, FBITS(f21));
    goto L_08964400;
L_08964730:;
    v0 = D_08B1E460 - (-7072);
    a0 = LD32(v0-7072);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896473C;
L_0896473C:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08964400; }
    goto L_08964744;
L_08964744:;
    v1 = D_08B1E464 - (-7068);
    v0 = LD32(v1-7068);
    a2 = s3 + 28;
    a3 = s3 + 40;
    v0 = v0 + 1;
    ST32(v1-7068, v0);
    a0 = 12;
    ST32(s3, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    ST32(s3+4, s0);
    v1 = LD32(s1);
    ST32(s3+12, 0);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD_U16(v0+8);
    ST32(s3+8, v1);
    a1 = LD32(s1+12);
    ST32(s3+20, FBITS(f20));
    ST32(s3+24, FBITS(f22));
    f0 = BITSF(LD32(s4+4));
    f1 = BITSF(LD32(s4+8));
    f2 = BITSF(LD32(s4));
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    f0 = BITSF(LD32(sp+100));
    ST32(s3+28, FBITS(f2));
    ST32(a3+4, FBITS(f0));
    f0 = BITSF(LD32(sp+104));
    ST32(s3+16, a1);
    ST32(a3+8, FBITS(f0));
    f0 = BITSF(LD32(sp+96));
    v0 = LD32(s6+4);
    ST32(s3+52, FBITS(f21));
    v0 = v0 - 1;
    ST32(s3+40, FBITS(f0));
    s0 = s0 & v0;
    s0 = s0 << 2;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089647E8;
L_089647E8:;
    a0 = LD32(s5+52);
    v1 = LD32(s6+12);
    ST32(v0, s3);
    s0 = s0 + a0;
    v1 = v1 + 1;
    a1 = LD32(s0);
    ST32(s6+12, v1);
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    goto L_08964400;
L_08964814:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089642F4;
L_08964824:;
    s0 = LD32(s0+4);
    goto L_0896430C;
L_0896482C:;
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_0896428C; }
    goto L_08964848;
L_08964848:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896428C; }
    goto L_08964854;
L_08964854:;
    v0 = LD_U8(s1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896428C; }
    goto L_08964860;
L_08964860:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08964868;
L_08964868:;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0896428C; }
    goto L_08964870;
L_08964870:;
    a1 = LD32(s1);
    v1 = 0x801e;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    a0 = s2 + 0;
    if (cnd_) { goto L_0896428C; }
    goto L_0896488C;
L_0896488C:;
    v0 = LD32(a1+180);
    a0 = s1 + 0;
    a1 = sp + 192;
    t_ = v0;
    s0 = sp + 64;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089648A0;
L_089648A0:;
    a0 = s0 + 0;
    ST32(sp+64, 0);
    v0 = func_0881B2B8(a0, 0, 0, 0);
    goto L_089648AC;
L_089648AC:;
    a0 = LD32(sp+192);
    cnd_ = a0 == 0;
    a1 = 0x87030000u;
    if (cnd_) { goto L_089648CC; }
    goto L_089648B8;
L_089648B8:;
    a1 = a1 | 0xa534;
    a2 = s0 + 0;
    v0 = func_0881BA44(a0, a1, a2);
    goto L_089648C4;
L_089648C4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08964C48; }
    goto L_089648CC;
L_089648CC:;
    a0 = s0 + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089648D4;
L_089648D4:;
    s0 = LD32(s1+12);
    a0 = s7 + 0;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089648E0;
L_089648E0:;
    cnd_ = s0 != v0;
    if (cnd_) { a0 = s2 + 0; goto L_0896428C; }
    goto L_089648E8;
L_089648E8:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_0896490C; }
    goto L_089648F8;
L_089648F8:;
    v0 = LD32(s1+236);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0896428C; }
    goto L_08964908;
L_08964908:;
    v0 = LD32(s1);
    goto L_0896490C;
L_0896490C:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s3 = sp + 80;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08964924;
L_08964924:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(v0+8));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    s0 = v0 + 0;
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+80, FBITS(f2));
    a0 = s5 + 0;
    a1 = s3 + 0;
    ST32(sp+84, FBITS(f3));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v1 = LD32(s5);
    f20 = BITSF(v0);
    f1 = f21 / f0;
    v0 = LD32(v1+32);
    f12 = f0;
    f4 = f4 * f1;
    f2 = f2 * f1;
    f3 = f3 * f1;
    ST32(sp+88, FBITS(f4));
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f3));
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, FBITS(f3));
    t_ = v0;
    ST32(sp+104, FBITS(f4));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089649C4;
L_089649C4:;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0896428C; }
    goto L_089649CC;
L_089649CC:;
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    f2 = BITSF(LD32(s5+80));
    {u32 a_=sp+(224);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+88);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+32);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+36);
    v1 = LD32(sp+40);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v1=FBITS(v[4]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0896428C; }
    goto L_08964A24;
L_08964A24:;
    v0 = LD32(s5+84);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08964BDC; }
    goto L_08964A34;
L_08964A34:;
    v0 = LD32(s1);
    goto L_08964A38;
L_08964A38:;
    v1 = LD32(v0-16);
    v0 = 999;
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    v0 = D_08B1E460 - (-7072);
    if (cnd_) { goto L_08964AE8; }
    goto L_08964A50;
L_08964A50:;
    v0 = LD32(s6+4);
    v1 = LD32(s5+52);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08964A94; }
    goto L_08964A74;
L_08964A74:;
    v0 = LD32(a0);
    goto L_08964A78;
L_08964A78:;
    v1 = LD32(v0+4);
    cnd_ = v1 == a2;
    a1 = v0 + 0;
    if (cnd_) { goto L_08964BC8; }
    goto L_08964A84;
L_08964A84:;
    a0 = LD32(a0+4);
    goto L_08964A88;
L_08964A88:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08964A78; }
    goto L_08964A90;
L_08964A90:;
    a1 = 0 + 0;
    goto L_08964A94;
L_08964A94:;
    cnd_ = a1 == 0;
    f0 = BITSF(LD32(sp+88));
    if (cnd_) { goto L_08964AE4; }
    goto L_08964A9C;
L_08964A9C:;
    v0 = a1 + 40;
    a0 = LD32(s1+12);
    f1 = BITSF(LD32(sp+80));
    ST32(v0+8, FBITS(f0));
    v1 = a1 + 28;
    f0 = BITSF(LD32(sp+84));
    ST32(a1+40, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+4));
    ST32(v1+8, FBITS(f2));
    ST32(v1+4, FBITS(f0));
    ST32(a1+16, a0);
    ST32(a1+28, FBITS(f1));
    ST32(a1+52, FBITS(f20));
    ST32(a1+20, 0);
    goto L_08964288;
L_08964AE4:;
    v0 = D_08B1E460 - (-7072);
    goto L_08964AE8;
L_08964AE8:;
    a0 = LD32(v0-7072);
    { rv_t r_ = func_08AA37A0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08964AF0;
L_08964AF0:;
    cnd_ = v0 == 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_08964288; }
    goto L_08964AF8;
L_08964AF8:;
    v1 = D_08B1E464 - (-7068);
    v0 = LD32(v1-7068);
    a0 = s1 + 0;
    v0 = v0 + 1;
    ST32(v1-7068, v0);
    ST32(s3, v0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s3+4, v1);
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964B28;
L_08964B28:;
    v0 = v0 < 0x1u;
    ST32(s3+8, v0);
    v0 = s3 + 28;
    a1 = s3 + 40;
    ST32(s3+12, 0);
    a0 = 12;
    v1 = LD32(s1+12);
    ST32(s3+20, 0);
    ST32(s3+24, FBITS(f21));
    f0 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    f0 = BITSF(LD32(sp+84));
    ST32(s3+28, FBITS(f2));
    ST32(s3+16, v1);
    ST32(a1+4, FBITS(f0));
    f1 = BITSF(LD32(sp+80));
    f0 = BITSF(LD32(sp+88));
    v0 = LD32(s6+4);
    s0 = LD32(s3+4);
    ST32(a1+8, FBITS(f0));
    v0 = v0 - 1;
    s0 = s0 & v0;
    ST32(s3+40, FBITS(f1));
    s0 = s0 << 2;
    ST32(s3+52, FBITS(f20));
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08964B9C;
L_08964B9C:;
    a0 = LD32(s5+52);
    v1 = LD32(s6+12);
    ST32(v0, s3);
    s0 = s0 + a0;
    v1 = v1 + 1;
    a1 = LD32(s0);
    ST32(s6+12, v1);
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    goto L_08964288;
L_08964BC8:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_08964A88; }
    goto L_08964BD4;
L_08964BD4:;
    goto L_08964A94;
L_08964BDC:;
    a0 = s5 + 0;
    v0 = func_08964D04(a0);
    goto L_08964BE4;
L_08964BE4:;
    a0 = LD32(v0+20);
    a2 = s3 + 0;
    a1 = fp + 0;
    v1 = LD32(a0+48);
    f12 = f20;
    t0 = 1;
    a3 = LD32(v1);
    a0 = s4 + 0;
    v0 = LD32(a3-16);
    v1 = v1 + v0;
    a3 = LD32(v1+4);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_08964C14;
L_08964C14:;
    a0 = s4 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08964C1C;
L_08964C1C:;
    f0 = BITSF(LD32(v0));
    f1 = f0 - f20;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    fcc = FCMP(f22, f2, 12);
    cnd_ = fcc;
    a0 = s2 + 0;
    if (cnd_) { goto L_0896428C; }
    goto L_08964C40;
L_08964C40:;
    v0 = LD32(s1);
    goto L_08964A38;
L_08964C48:;
    a0 = s0 + 0;
    v0 = func_0881B5C4(a0);
    goto L_08964C50;
L_08964C50:;
    v1 = 0x42e0000u;
    v1 = v1 | 0xaf2;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_089648CC; }
    goto L_08964C60;
L_08964C60:;
    a0 = s0 + 0;
    { u64 r_ = func_0881B320(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964C68;
L_08964C68:;
    a0 = s2 + 0;
    goto L_0896428C;
L_08964C70:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_08964CA4; }
    goto L_08964C78;
L_08964C78:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08964C9C; }
    goto L_08964C80;
L_08964C80:;
    ST32(a2+4, v0);
    goto L_08964C84;
L_08964C84:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964C8C;
L_08964C8C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08964154;
L_08964C9C:;
    ST32(v1, v0);
    goto L_08964C84;
L_08964CA4:;
    ST8(a0+8, v0);
    goto L_08964154;
L_08964CAC:;
    a0 = sp + 0;
    { u64 r_ = func_08ABBF54(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964CB4;
L_08964CB4:;
    a1 = LD32(sp+8);
    goto L_08964168;
L_08964CBC:;
    a0 = s0 + 0;
    v0 = func_089E3BC4(a0);
    goto L_08964CC4;
L_08964CC4:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = 1; goto L_089640F4; }
    goto L_08964CCC;
L_08964CCC:;
    v0 = LD32(s0+172);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 | s3; goto L_089640F8; }
    goto L_08964CDC;
L_08964CDC:;
    s3 = 1;
    goto L_089640F4;
L_08964CE4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0896409C; }
    goto L_08964CF0;
L_08964CF0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089640A0; }
    goto L_08964CFC;
L_08964CFC:;
    goto L_089640AC;
}

/* 08964D04 */
u32 func_08964D04(u32 a0)
{
    u32 v0 = 0;
L_08964D04:;
    v0 = LD32(a0+4);
    return v0;
}

/* 08964D0C */
rv_t func_08964D0C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08964D0C:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C283DC - (-31780);
    t1 = D_08C283EC - (-31764);
    t2 = D_08C283FC - (-31748);
    a1 = a1 & a0;
    v1 = t0 - 31780;
    a2 = t1 - 31764;
    cnd_ = a1 == 0;
    a3 = t2 - 31748;
    if (cnd_) { goto L_08964DC4; }
    goto L_08964D3C;
L_08964D3C:;
    v0 = D_08AEE05C - (-8100);
    f4 = BITSF(LD32(v0-8100));
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
    ST32(t0-31780, FBITS(f2));
    ST32(t1-31764, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31748, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08964DC4;
L_08964DC4:;
    return (rv_t){ v0, v1, f0 };
}

/* 08964DCC */
rv_t func_08964DCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08964DCC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08964D0C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08964DE0;
L_08964DE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08964DEC */
void func_08964DEC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08964DEC:;
    ST32(a0, 0);
    v0 = 999;
    a1 = 999;
    ST32(a0+8, 0);
    v1 = 2;
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+4, v0);
    v0 = a0 + 8;
    goto L_08964E10;
L_08964E10:;
    v1 = v1 - 1;
    ST32(v0, a1);
    cnd_ = (s32)v1 >= 0;
    v0 = v0 + 4;
    if (cnd_) { goto L_08964E10; }
    goto L_08964E20;
L_08964E20:;
    return;
}

/* 08964E28 */
u64 func_08964E28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08964E28:;
    sp = sp - 64;
    s6 = a1 + 0;
    s2 = a0 + 0;
    s0 = a2 + 0;
    f20 = f12;
    v1 = LD32(a1+48);
    a0 = LD32(v1);
    v0 = LD32(a0-12);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = LD32(a1+20);
    t_ = v0;
    a0 = v1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08964E80;
L_08964E80:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(s2, FBITS(f0));
    if (cnd_) { goto L_08965020; }
    goto L_08964E9C;
L_08964E9C:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(s0, FBITS(f0));
    s4 = 0 + 0;
    s3 = 0 + 0;
    ST32(s0+4, FBITS(f1));
    s5 = 999;
    s1 = s2 + 8;
    ST32(s0+8, FBITS(f2));
    goto L_08964ECC;
L_08964ECC:;
    a0 = LD32(s1);
    cnd_ = a0 == s5;
    if (cnd_) { s3 = s3 + 1; goto L_08964F84; }
    goto L_08964ED8;
L_08964ED8:;
    v0 = LD32(s2+4);
    cnd_ = a0 == v0;
    v1 = D_08C2A270 - (-23952);
    if (cnd_) { goto L_08964F80; }
    goto L_08964EE4;
L_08964EE4:;
    cnd_ = a0 == s5;
    v0 = v1 - 23952;
    if (cnd_) { goto L_08964F80; }
    goto L_08964EEC;
L_08964EEC:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-23952);
    v0 = v0 - 1;
    v0 = a0 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08964F30; }
    goto L_08964F10;
L_08964F10:;
    a1 = LD32(v1);
    goto L_08964F14;
L_08964F14:;
    v0 = LD32(a1+4);
    cnd_ = v0 == a0;
    if (cnd_) { v0 = LD32(a1+16); goto L_08965000; }
    goto L_08964F20;
L_08964F20:;
    v1 = LD32(v1+4);
    goto L_08964F24;
L_08964F24:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1); goto L_08964F14; }
    goto L_08964F2C;
L_08964F2C:;
    a1 = 0 + 0;
    goto L_08964F30;
L_08964F30:;
    cnd_ = a1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08964F80; }
    goto L_08964F38;
L_08964F38:;
    a2 = s6 + 0;
    a3 = sp + 0;
    { u64 r_ = func_089652B0(a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08964F44;
L_08964F44:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_08964F84; }
    goto L_08964F4C;
L_08964F4C:;
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    s4 = s4 + 1;
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f3));
    ST32(s0+8, FBITS(f4));
    goto L_08964F80;
L_08964F80:;
    s3 = s3 + 1;
    goto L_08964F84;
L_08964F84:;
    v0 = (s32)s3 < 3;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08964ECC; }
    goto L_08964F90;
L_08964F90:;
    cnd_ = (s32)s4 <= 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08964FD4; }
    goto L_08964F98;
L_08964F98:;
    f0 = BITSF(s4);
    v0 = D_08AEE064 - (-8092);
    f2 = BITSF(LD32(s0));
    f4 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-8092));
    f3 = BITSF(LD32(s0+4));
    f1 = BITSF(LD32(s0+8));
    f0 = f0 / f4;
    v0 = 1;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    ST32(s0+8, FBITS(f1));
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f3));
    goto L_08964FD4;
L_08964FD4:;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_08965000:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08964F24; }
    goto L_0896500C;
L_0896500C:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_08964F24; }
    goto L_08965018;
L_08965018:;
    goto L_08964F30;
L_08965020:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    func_08965044(a0, a1, 0, 0, 0);
    goto L_0896502C;
L_0896502C:;
    v0 = D_08AEE060 - (-8096);
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(v0-8096));
    f0 = f0 + f1;
    ST32(s2, FBITS(f0));
    goto L_08964E9C;
}

/* 08965044 */
void func_08965044(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08965044:;
    sp = sp - 96;
    a3 = D_08C2A270 - (-23952);
    v1 = a3 - 23952;
    s6 = 0 + 0;
    s5 = a0 + 0;
    a0 = sp + 0;
    s0 = a1 + 0;
    v0 = LD32(v1+8);
    a2 = LD32(v1+4);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    cnd_ = a2 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089650EC; }
    goto L_089650A4;
L_089650A4:;
    a3 = LD32(a3-23952);
    goto L_089650A8;
L_089650A8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089650DC; }
    goto L_089650C0;
L_089650C0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(sp+8); goto L_089650F0; }
    goto L_089650D0;
L_089650D0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089650C0; }
    goto L_089650DC;
L_089650DC:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089650A8; }
    goto L_089650EC;
L_089650EC:;
    v1 = LD32(sp+8);
    goto L_089650F0;
L_089650F0:;
    cnd_ = v1 == 0;
    s7 = 1;
    if (cnd_) { goto L_089651B8; }
    goto L_089650F8;
L_089650F8:;
    v0 = s6 << 2;
    v0 = v0 + s5;
    s1 = v0 + 4;
    v1 = LD32(v1);
    goto L_08965108;
L_08965108:;
    v0 = LD32(s5+4);
    a0 = sp + 0;
    a3 = LD32(v1+4);
    a1 = 1;
    cnd_ = a3 == v0;
    a2 = v1 + 28;
    if (cnd_) { goto L_089651A4; }
    goto L_08965120;
L_08965120:;
    f5 = BITSF(LD32(a2+8));
    f3 = BITSF(LD32(v1+28));
    f4 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f2 = f2 - f5;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+16, FBITS(f0));
    v0 = FBITS(f0);
    ST32(sp+24, FBITS(f2));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    ST32(sp+20, FBITS(f1));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f2);
    f0 = BITSF(LD32(v1+40));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f1 = BITSF(v0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089651A4; }
    goto L_0896518C;
L_0896518C:;
    cnd_ = s7 == 0;
    if (cnd_) { goto L_089651A4; }
    goto L_08965194;
L_08965194:;
    s1 = s1 + 4;
    ST32(s1, a3);
    s6 = s6 + 1;
    s7 = (s32)s6 < 3;
    goto L_089651A4;
L_089651A4:;
    func_08ABF9CC(a0, a1);
    goto L_089651AC;
L_089651AC:;
    v1 = LD32(sp+8);
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(v1); goto L_08965108; }
    goto L_089651B8;
L_089651B8:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08965240; }
    goto L_089651CC;
L_089651CC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08965240; }
    goto L_089651D8;
L_089651D8:;
    v0 = LD32(s1);
    goto L_089651DC;
L_089651DC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08965230; }
    goto L_089651F0;
L_089651F0:;
    v0 = LD_U8(s0+8);
    goto L_089651F4;
L_089651F4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089652A8; }
    goto L_089651FC;
L_089651FC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08965298; }
    goto L_08965204;
L_08965204:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0896520C;
L_0896520C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08965218;
L_08965218:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08965224;
L_08965224:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089651F4; }
    goto L_0896522C;
L_0896522C:;
    v1 = LD32(s1+4);
    goto L_08965230;
L_08965230:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089651DC; }
    goto L_08965240;
L_08965240:;
    cnd_ = s7 == 0;
    v1 = s6 + 0;
    if (cnd_) { goto L_0896526C; }
    goto L_08965248;
L_08965248:;
    v0 = s6 << 2;
    v0 = v0 + s5;
    a0 = v0 + 8;
    a1 = 999;
    goto L_08965258;
L_08965258:;
    v1 = v1 + 1;
    v0 = (s32)v1 < 3;
    ST32(a0, a1);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_08965258; }
    goto L_0896526C;
L_0896526C:;
    sp = sp + 96;
    return;
L_08965298:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0896520C;
L_089652A8:;
    s0 = LD32(s0+4);
    goto L_08965224;
}

/* 089652B0 */
u64 func_089652B0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr12 = v[12], vr13 = v[13], vr14 = v[14];
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_089652B0:;
    sp = sp - 240;
    s2 = a1 + 0;
    s1 = a3 + 0;
    a0 = LD32(a2+48);
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    s0 = a2 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[12]=vr12;v[13]=vr13;v[14]=vr14;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr12=v[12];vr13=v[13];vr14=v[14];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089652F0;
L_089652F0:;
    a1 = v0 + 0;
    v0 = s0 + 140;
    f0 = BITSF(LD32(s0+136));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(s0+140));
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    ST32(sp+8, FBITS(f1));
    ST32(sp, FBITS(f3));
    cnd_ = v1 == 0;
    ST32(sp+4, FBITS(f2));
    if (cnd_) { goto L_08965554; }
    goto L_0896532C;
L_0896532C:;
    v0 = D_08AEE068 - (-8088);
    f20 = BITSF(LD32(v0-8088));
    goto L_08965334;
L_08965334:;
    a0 = s2 + 0;
    a2 = sp + 16;
    f12 = f20;
    a3 = sp + 80;
    ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[12]=vr12;v[13]=vr13;v[14]=vr14;func_0898A4E8(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr5=v[5];vr6=v[6];vr12=v[12];vr13=v[13];vr14=v[14];});
    goto L_08965348;
L_08965348:;
    f3 = BITSF(LD32(sp+80));
    v0 = D_08AEE070 - (-8080);
    f1 = BITSF(LD32(v0-8080));
    f2 = f3 / f20;
    f8 = BITSF(0);
    a1 = LD32(sp+16);
    {u32 a_=sp+(96);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    a2 = LD32(sp+20);
    {vr4=BITSF(a1);}
    a3 = LD32(sp+24);
    {vr5=BITSF(a2);}
    v0 = LD32(sp);
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr6=BITSF(a3);}
    {vr0=BITSF(v0);}
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {t0=FBITS(vr4);}
    f0 = BITSF(t0);
    f12 = f1 - f2;
    fcc = FCMP(f8, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = 0 + 0; goto L_08965538; }
    goto L_089653B4;
L_089653B4:;
    fcc = FCMP(f0, f8, 12);
    cnd_ = fcc;
    {u32 a_=sp+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089653D8; }
    goto L_089653C4;
L_089653C4:;
    fcc = FCMP(f3, f8, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 0 + 0; goto L_08965538; }
    goto L_089653D4;
L_089653D4:;
    {u32 a_=sp+(144);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    goto L_089653D8;
L_089653D8:;
    {u32 a_=sp+(176);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {vr4=BITSF(a1);}
    {vr12=BITSF(v0);}
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr5=BITSF(a2);}
    {vr0=BITSF(v0);}
    {vr6=BITSF(a3);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;float t1=vr5;float t2=vr6;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {t0=FBITS(v[8]);}
    {v0=FBITS(v[10]);}
    f1 = BITSF(t0);
    f7 = BITSF(v0);
    f6 = BITSF(t0);
    {t0=FBITS(v[9]);}
    f0 = BITSF(t0);
    v0 = FBITS(f1);
    f4 = BITSF(t0);
    {vr13=BITSF(v1);}
    t0 = FBITS(f7);
    {vr14=BITSF(a0);}
    {u32 a_=sp+(160);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = FBITS(f0);
    {vr1=BITSF(v0);}
    {vr2=BITSF(t0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr12;float t1=vr13;float t2=vr14;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr4=d0;vr5=d1;vr6=d2;}
    {t0=FBITS(vr4);}
    {v0=FBITS(vr6);}
    f3 = BITSF(t0);
    f5 = BITSF(v0);
    f1 = BITSF(t0);
    {t0=FBITS(vr5);}
    f0 = BITSF(t0);
    f2 = BITSF(t0);
    v0 = FBITS(f1);
    {u32 a_=sp+(192);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    t0 = FBITS(f5);
    {vr12=BITSF(v0);}
    v0 = FBITS(f0);
    {vr13=BITSF(v0);}
    {vr14=BITSF(t0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+48, FBITS(f6));
    fcc = FCMP(f0, f8, 2);
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f7));
    ST32(sp+64, FBITS(f3));
    ST32(sp+68, FBITS(f2));
    ST32(sp+72, FBITS(f5));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f5));
    ST32(s1, FBITS(f3));
    ST32(s1+4, FBITS(f2));
    cnd_ = fcc;
    ST32(s1+8, FBITS(f5));
    if (cnd_) { goto L_08965500; }
    goto L_089654C8;
L_089654C8:;
    {float s0=vr0;float d0=sqrtf(s0);v[8]=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=v[3];vr4=(float)1;vr5=(float)1;vr6=(float)1;v[7]=(float)1;}
    {float s0=vr4;float t0=v[8];float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {t0=FBITS(vr2);}
    f3 = BITSF(t0);
    {v0=FBITS(vr0);}
    {t0=FBITS(vr1);}
    ST32(sp+64, v0);
    ST32(sp+68, t0);
    ST32(sp+72, FBITS(f3));
    ST32(s1, v0);
    ST32(s1+4, t0);
    ST32(s1+8, FBITS(f3));
    goto L_08965500;
L_08965500:;
    v0 = D_08AEE074 - (-8076);
    f2 = f12 * f12;
    f0 = BITSF(LD32(v0-8076));
    f3 = BITSF(LD32(s1));
    f4 = BITSF(LD32(s1+4));
    f2 = f2 * f0;
    f1 = BITSF(LD32(s1+8));
    v0 = 1;
    f1 = f1 * f2;
    f3 = f3 * f2;
    f4 = f4 * f2;
    ST32(s1+8, FBITS(f1));
    ST32(s1, FBITS(f3));
    ST32(s1+4, FBITS(f4));
    goto L_08965538;
L_08965538:;
    sp = sp + 240;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[12]=vr12;v[13]=vr13;v[14]=vr14;return (u64)v0 | ((u64)v1 << 32); }
L_08965554:;
    v0 = D_08AEE06C - (-8084);
    f20 = BITSF(LD32(v0-8084));
    goto L_08965334;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 08965560 */
rv_t func_08965560(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08965560:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2848C - (-31604);
    t1 = D_08C2849C - (-31588);
    t2 = D_08C284AC - (-31572);
    a1 = a1 & a0;
    v1 = t0 - 31604;
    a2 = t1 - 31588;
    cnd_ = a1 == 0;
    a3 = t2 - 31572;
    if (cnd_) { goto L_08965618; }
    goto L_08965590;
L_08965590:;
    v0 = D_08AEE078 - (-8072);
    f4 = BITSF(LD32(v0-8072));
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
    ST32(t0-31604, FBITS(f2));
    ST32(t1-31588, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31572, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08965618;
L_08965618:;
    return (rv_t){ v0, v1, f0 };
}

/* 08965620 */
rv_t func_08965620(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965620:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08965560(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965634;
L_08965634:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08965640 */
void func_08965640(u32 a0)
{
L_08965640:;
    ST32(a0+4, 0);
    ST32(a0, 0);
    return;
}

/* 0896564C */
void func_0896564C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_0896564C:;
    sp = sp - 176;
    s4 = a2 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    f21 = BITSF(0);
    f20 = f12;
    v1 = LD32(a1+48);
    a0 = LD32(v1);
    v0 = LD32(a0-12);
    v1 = v1 + v0;
    a1 = LD32(v1);
    v0 = LD32(a1+20);
    t_ = v0;
    a0 = v1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089656A8;
L_089656A8:;
    f0 = BITSF(LD32(s2));
    f22 = BITSF(LD32(v0+4));
    f1 = f0 - f20;
    fcc = FCMP(f1, f21, 14);
    cnd_ = fcc;
    ST32(s2, FBITS(f1));
    if (cnd_) { goto L_08965710; }
    goto L_089656C4;
L_089656C4:;
    ST32(s4+8, 0);
    goto L_089656C8;
L_089656C8:;
    v0 = D_08AEE09C - (-8036);
    ST32(s4, 0);
    f0 = BITSF(LD32(s2+4));
    f1 = BITSF(LD32(v0-8036));
    f0 = f0 - f22;
    f0 = f0 * f1;
    ST32(s4+4, FBITS(f0));
    sp = sp + 176;
    return;
L_08965710:;
    v0 = D_08AEE07C - (-8068);
    f0 = BITSF(LD32(v0-8068));
    a0 = LD32(s3+48);
    f0 = f1 + f0;
    ST32(s2, FBITS(f0));
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+24);
    t_ = v0;
    s1 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965740;
L_08965740:;
    a0 = LD32(s3+48);
    s0 = v0 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    a0 = a0 + v1;
    a1 = LD32(a0);
    v0 = LD32(a1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965764;
L_08965764:;
    v1 = D_08AEE080 - (-8064);
    f2 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0+32));
    f0 = BITSF(LD32(v1-8064));
    ST32(sp, FBITS(f2));
    a1 = sp + 80;
    a2 = sp + 112;
    ST32(sp+8, FBITS(f1));
    f1 = f1 * f0;
    f0 = f2 * f0;
    ST32(sp+4, FBITS(f21));
    a0 = s1 + 0;
    ST32(sp+96, FBITS(f0));
    ST32(sp+104, FBITS(f1));
    f2 = BITSF(LD32(v0));
    ST32(sp+100, FBITS(f21));
    f2 = f2 + f0;
    f3 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    v0 = D_08AEE088 - (-8056);
    f3 = f3 + f1;
    f12 = BITSF(LD32(v0-8056));
    v0 = D_08AEE084 - (-8060);
    a3 = LD32(s3+4);
    ST32(sp+84, FBITS(f0));
    f0 = BITSF(LD32(v0-8060));
    ST32(sp+80, FBITS(f2));
    ST32(sp+88, FBITS(f3));
    ST32(sp+116, FBITS(f0));
    ST32(sp+120, FBITS(f21));
    ST32(sp+112, FBITS(f21));
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089657E4;
L_089657E4:;
    a0 = s1 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089657EC;
L_089657EC:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s4+8, 0); goto L_089656C8; }
    goto L_089657FC;
L_089657FC:;
    v0 = D_08AEE08C - (-8052);
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(v0-8052));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEE094 - (-8044);
    if (cnd_) { goto L_08965830; }
    goto L_08965818;
L_08965818:;
    v0 = D_08AEE090 - (-8048);
    f0 = BITSF(LD32(v0-8048));
    goto L_08965820;
L_08965820:;
    f0 = f0 - f1;
    f0 = f22 - f0;
    ST32(s2+4, FBITS(f0));
    goto L_089656C4;
L_08965830:;
    f0 = BITSF(LD32(v0-8044));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(s2+4, FBITS(f22)); goto L_089656C4; }
    goto L_08965844;
L_08965844:;
    v0 = D_08AEE098 - (-8040);
    f0 = BITSF(LD32(v0-8040));
    goto L_08965820;
}

/* 08965850 */
rv_t func_08965850(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08965850:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2853C - (-31428);
    t1 = D_08C2854C - (-31412);
    t2 = D_08C2855C - (-31396);
    a1 = a1 & a0;
    v1 = t0 - 31428;
    a2 = t1 - 31412;
    cnd_ = a1 == 0;
    a3 = t2 - 31396;
    if (cnd_) { goto L_08965908; }
    goto L_08965880;
L_08965880:;
    v0 = D_08AEE0A0 - (-8032);
    f4 = BITSF(LD32(v0-8032));
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
    ST32(t0-31428, FBITS(f2));
    ST32(t1-31412, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31396, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08965908;
L_08965908:;
    return (rv_t){ v0, v1, f0 };
}

/* 08965910 */
rv_t func_08965910(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965910:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08965850(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965924;
L_08965924:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08965930 */
float func_08965930(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
L_08965930:;
    v0 = D_08AEE0A4 - (-8028);
    f0 = BITSF(LD32(v0-8028));
    {vr0=0.63661977236f;}
    f12 = f12 * f12;
    f13 = f13 * f0;
    ST8(a0+24, a2);
    v0 = FBITS(f13);
    {v[4]=BITSF(v0);}
    {float s0=v[4];float t0=vr0;float d0=s0*t0;vr0=d0;}
    ST32(a0+4, a1);
    ST32(a0+16, FBITS(f12));
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    v0 = D_08AF97C0 - (-26688);
    v0 = v0 - 26688;
    ST32(a0, v0);
    v0 = 1;
    ST32(a0+8, v0);
    ST32(a0+20, FBITS(f0));
    ST32(a0+12, 0);
    { v[0]=vr0;return f0; }
    v[0]=vr0;
}

/* 08965988 */
rv_t func_08965988(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965988:;
    sp = sp - 16;
    v1 = D_08AF97C0 - (-26688);
    a2 = a0 + 0;
    v0 = LD32(a0+8);
    v1 = v1 - 26688;
    a1 = 2;
    a0 = 0 + 0;
    cnd_ = v0 == a1;
    ST32(a2, v1);
    if (cnd_) { goto L_089659BC; }
    goto L_089659B0;
L_089659B0:;
    goto L_089659B4;
L_089659B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089659BC:;
    v0 = LD32(a2+4);
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A243D0(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089659C8;
L_089659C8:;
    goto L_089659B4;
}

/* 089659D0 */
rv_t func_089659D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089659D0:;
    sp = sp - 16;
    v1 = D_08AF97C0 - (-26688);
    a2 = a0 + 0;
    v0 = LD32(a0+8);
    v1 = v1 - 26688;
    a1 = 2;
    a0 = 0 + 0;
    cnd_ = v0 == a1;
    ST32(a2, v1);
    if (cnd_) { goto L_08965A04; }
    goto L_089659F8;
L_089659F8:;
    goto L_089659FC;
L_089659FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08965A04:;
    v0 = LD32(a2+4);
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A243D0(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965A10;
L_08965A10:;
    goto L_089659FC;
}

/* 08965A18 */
rv_t func_08965A18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965A18:;
    sp = sp - 16;
    v1 = D_08AF97C0 - (-26688);
    s0 = a0 + 0;
    v1 = v1 - 26688;
    a1 = 2;
    v0 = LD32(a0+8);
    ST32(s0, v1);
    cnd_ = v0 == a1;
    a0 = 0 + 0;
    if (cnd_) { goto L_08965A5C; }
    goto L_08965A44;
L_08965A44:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08965A4C;
L_08965A4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08965A5C:;
    v0 = LD32(s0+4);
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A243D0(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965A68;
L_08965A68:;
    goto L_08965A44;
}

/* 08965A70 */
rv_t func_08965A70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965A70:;
    sp = sp - 16;
    v0 = 1;
    s0 = a0 + 0;
    v1 = LD32(a0+8);
    cnd_ = v1 == v0;
    a3 = a3 & 0xff;
    if (cnd_) { goto L_08965B24; }
    goto L_08965A90;
L_08965A90:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08965B14; }
    goto L_08965A9C;
L_08965A9C:;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(a0+12)); goto L_08965ACC; }
    goto L_08965AA4;
L_08965AA4:;
    v1 = LD32(s0);
    goto L_08965AA8;
L_08965AA8:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_08965AB0;
L_08965AB0:;
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965ABC;
L_08965ABC:;
    goto L_08965AC0;
L_08965AC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08965ACC:;
    f1 = BITSF(0);
    f0 = f0 - f12;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(a0+12, FBITS(f0));
    if (cnd_) { goto L_08965AEC; }
    goto L_08965AE4;
L_08965AE4:;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_08965AFC; }
    goto L_08965AEC;
L_08965AEC:;
    v1 = LD32(s0);
    goto L_08965AF0;
L_08965AF0:;
    a0 = s0 + 0;
    a1 = 1;
    goto L_08965AB0;
L_08965AFC:;
    { rv_t r_ = func_08965B68(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965B04;
L_08965B04:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08965AC0; }
    goto L_08965B0C;
L_08965B0C:;
    v1 = LD32(s0);
    goto L_08965AF0;
L_08965B14:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08965AC0; }
    goto L_08965B1C;
L_08965B1C:;
    v1 = LD32(s0);
    goto L_08965AA8;
L_08965B24:;
    f0 = BITSF(LD32(a0+12));
    f1 = BITSF(0);
    f0 = f0 - f12;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a0+12, FBITS(f0));
    if (cnd_) { goto L_08965ABC; }
    goto L_08965B40;
L_08965B40:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_08965AC0; }
    goto L_08965B48;
L_08965B48:;
    { rv_t r_ = func_08965B68(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965B50;
L_08965B50:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08965AC0; }
    goto L_08965B58;
L_08965B58:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = 2;
    goto L_08965AB0;
}

/* 08965B68 */
rv_t func_08965B68(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08965B68:;
    sp = sp - 48;
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;v[11]=d3;}
    f1 = BITSF(0);
    s2 = 0 + 0;
    s1 = a1 + 0;
    a1 = a2 + 0;
    s0 = a0 + 0;
    f3 = BITSF(LD32(a2));
    f4 = BITSF(LD32(a2+4));
    f5 = BITSF(LD32(a2+8));
    v0 = FBITS(f3);
    {vr8=BITSF(v0);}
    v0 = FBITS(f4);
    {vr9=BITSF(v0);}
    v0 = FBITS(f5);
    {vr10=BITSF(v0);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f3));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+4, FBITS(f4));
    {float s0=vr0;float d0=sqrtf(s0);vr0=d0;}
    cnd_ = fcc;
    ST32(sp+8, FBITS(f5));
    if (cnd_) { goto L_08965C14; }
    goto L_08965BDC;
L_08965BDC:;
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=vr0;float d0=s0/t0;v[12]=d0;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=v[12];vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+24, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v0);
    ST32(sp, FBITS(f2));
    ST32(sp+4, v0);
    ST32(sp+8, FBITS(f3));
    goto L_08965C14;
L_08965C14:;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08965C58(a0, a1); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965C1C;
L_08965C1C:;
    a2 = sp + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08965C48; }
    goto L_08965C2C;
L_08965C2C:;
    v0 = s2 + 0;
    sp = sp + 48;
    { v[0]=vr0;v[8]=vr8;v[9]=vr9;v[10]=vr10;return (rv_t){ v0, v1, f0 }; }
L_08965C48:;
    { rv_t r_ = ({ v[0]=vr0;v[8]=vr8;__auto_type vr_t_ = func_08965C9C(a0, a1, a2); vr0=v[0];vr8=v[8];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965C50;
L_08965C50:;
    s2 = 0 < v0;
    goto L_08965C2C;
    v[0]=vr0;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 08965C58 */
rv_t func_08965C58(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
L_08965C58:;
    f2 = BITSF(LD32(a0+16));
    v0 = LD32(a1);
    a0 = LD32(a1+8);
    {vr0=BITSF(v0);}
    v1 = LD32(a1+4);
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08965C94; }
    goto L_08965C90;
L_08965C90:;
    v0 = 0 + 0;
    goto L_08965C94;
L_08965C94:;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 08965C9C */
rv_t func_08965C9C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr19 = v[19];
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08965C9C:;
    v0 = LD_U8(a0+24);
    sp = sp - 48;
    cnd_ = v0 == 0;
    v1 = a1 + 0;
    if (cnd_) { goto L_08965E18; }
    goto L_08965CAC;
L_08965CAC:;
    f3 = BITSF(LD32(a1+8));
    f2 = BITSF(LD32(a1));
    f4 = BITSF(0);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    v0 = FBITS(f2);
    v1 = FBITS(f3);
    {vr12=BITSF(v0);}
    v0 = 0 + 0;
    {vr13=BITSF(v0);}
    {vr14=BITSF(v1);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp, FBITS(f2));
    f5 = f4;
    fcc = FCMP(f0, f4, 2);
    ST32(sp+8, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+4, FBITS(f4));
    if (cnd_) { goto L_08965D38; }
    goto L_08965CF8;
L_08965CF8:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v1=FBITS(vr2);}
    f3 = BITSF(v1);
    {v1=FBITS(vr0);}
    f1 = BITSF(v1);
    ST32(sp+24, FBITS(f3));
    {v1=FBITS(vr1);}
    f4 = BITSF(v1);
    ST32(sp+16, FBITS(f1));
    ST32(sp, FBITS(f1));
    ST32(sp+4, v1);
    ST32(sp+8, FBITS(f3));
    ST32(sp+20, v1);
    goto L_08965D38;
L_08965D38:;
    f3 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2));
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;v[15]=d3;}
    ST32(sp+24, FBITS(f3));
    v1 = FBITS(f2);
    {vr12=BITSF(v1);}
    {vr13=BITSF(v0);}
    v0 = FBITS(f3);
    {vr14=BITSF(v0);}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr12;float t1=vr13;float t2=vr14;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+16, FBITS(f2));
    fcc = FCMP(f0, f5, 2);
    cnd_ = fcc;
    ST32(sp+20, FBITS(f5));
    if (cnd_) { goto L_08965DB4; }
    goto L_08965D7C;
L_08965D7C:;
    {float s0=vr0;float d0=sqrtf(s0);vr8=d0;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;vr4=(float)1;vr5=(float)1;vr6=(float)1;vr7=(float)1;}
    {float s0=vr4;float t0=vr8;float d0=s0/t0;vr0=d0;}
    {float s0=vr12;float s1=vr13;float s2=vr14;float t0=vr0;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {v0=FBITS(vr2);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr1);}
    ST32(sp+32, v1);
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, v1);
    ST32(sp+20, v0);
    ST32(sp+24, FBITS(f3));
    goto L_08965DB4;
L_08965DB4:;
    v0 = LD32(sp);
    v1 = FBITS(f4);
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=vr16;float s1=vr17;float s2=vr18;float s3=vr19;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr4=BITSF(v0);}
    v0 = LD32(sp+8);
    {vr5=BITSF(v1);}
    v1 = LD32(sp+16);
    {vr6=BITSF(v0);}
    {vr0=BITSF(v1);}
    v0 = LD32(sp+20);
    v1 = LD32(sp+24);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    f2 = BITSF(LD32(a0+20));
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    goto L_08965DFC;
L_08965DFC:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_08965E10; }
    goto L_08965E0C;
L_08965E0C:;
    v0 = 0 + 0;
    goto L_08965E10;
L_08965E10:;
    sp = sp + 48;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;return (rv_t){ v0, v1, f0 }; }
L_08965E18:;
    v0 = LD32(v1);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    v1 = LD32(v1+4);
    {vr4=BITSF(v0);}
    f2 = BITSF(LD32(a0+20));
    {vr5=BITSF(v1);}
    a0 = LD32(a1+8);
    v1 = LD32(a2+4);
    a1 = LD32(a2+8);
    {vr6=BITSF(a0);}
    v0 = LD32(a2);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a1);}
    {float s0=vr4;float s1=vr5;float s2=vr6;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v1=FBITS(vr4);}
    f0 = BITSF(v1);
    goto L_08965DFC;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[12]=vr12;v[13]=vr13;v[14]=vr14;
}

/* 08965E64 */
rv_t func_08965E64(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965E64:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    f0 = func_08965930(a0, a1, a2, f12, f13);
    goto L_08965E7C;
L_08965E7C:;
    v0 = D_08AF97A8 - (-26712);
    v0 = v0 - 26712;
    ST32(s0, v0);
    ST8(s0+36, 0);
    ST32(s0+28, 0);
    ST32(s0+32, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08965EA4 */
rv_t func_08965EA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965EA4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    f0 = func_08A24648(a0, t1, t2, t3);
    goto L_08965EC4;
L_08965EC4:;
    ST32(s1+28, FBITS(f0));
    a0 = s0 + 0;
    { rv_t r_ = func_08A24740(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965ED0;
L_08965ED0:;
    ST32(s1+32, FBITS(f0));
    a0 = s0 + 0;
    f12 = BITSF(LD32(s1+28));
    { rv_t r_ = func_08A24588(a0, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965EE0;
L_08965EE0:;
    ST8(s1+36, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08965EF8 */
rv_t func_08965EF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08965EF8:;
    sp = sp - 16;
    s2 = 2;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 == s2;
    s0 = a1 + 0;
    if (cnd_) { goto L_08965FFC; }
    goto L_08965F20;
L_08965F20:;
    v0 = 1;
    goto L_08965F24;
L_08965F24:;
    cnd_ = s0 == v0;
    ST32(s1+8, s0);
    if (cnd_) { goto L_08965F88; }
    goto L_08965F2C;
L_08965F2C:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08965F78; }
    goto L_08965F38;
L_08965F38:;
    cnd_ = s0 == s2;
    if (cnd_) { v0 = LD32(s1+4); goto L_08965F58; }
    goto L_08965F40;
L_08965F40:;
    goto L_08965F44;
L_08965F44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08965F58:;
    f0 = BITSF(LD32(s1+28));
    a1 = LD_U8(s1+36);
    a2 = LD32(v0+4);
    ST32(s1+12, FBITS(f0));
    a0 = 0 + 0;
    { rv_t r_ = func_08A242DC(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08965F70;
L_08965F70:;
    goto L_08965F44;
L_08965F78:;
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s1+12, 0); goto L_08965F40; }
    goto L_08965F80;
L_08965F80:;
    goto L_08965F44;
L_08965F88:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f4 = BITSF(v0);
    v0 = D_08AEE0B0 - (-8016);
    f3 = BITSF(LD32(v0-8016));
    v0 = D_08AEE0AC - (-8020);
    f0 = BITSF(LD32(v0-8020));
    f2 = BITSF(LD32(s1+32));
    f1 = (float)(s32)FBITS(f4);
    v0 = D_08AEE0B4 - (-8012);
    f3 = f2 * f3;
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0-8012));
    a0 = a0 + v1;
    ST32(a2+4, a0);
    f3 = f3 - f2;
    f1 = f1 * f0;
    ST32(a1+23232, v1);
    f1 = f1 * f3;
    f2 = f2 + f1;
    ST32(s1+12, FBITS(f2));
    goto L_08965F40;
L_08965FFC:;
    v0 = LD32(a0+4);
    a0 = 0 + 0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A243D0(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896600C;
L_0896600C:;
    v0 = 1;
    goto L_08965F24;
}

/* 08966014 */
u32 func_08966014(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08966014:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    f0 = func_08965930(a0, a1, a2, f12, f13);
    goto L_0896602C;
L_0896602C:;
    v0 = D_08AF9790 - (-26736);
    v0 = v0 - 26736;
    ST32(s0, v0);
    ST32(s0+32, 0);
    ST32(s0+28, 0);
    sp = sp + 16;
    return v0;
}

/* 08966050 */
rv_t func_08966050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08966050:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    f0 = func_08A24608(a0, t1, t2, t3);
    goto L_08966070;
L_08966070:;
    v0 = D_08AEE0B8 - (-8008);
    f1 = BITSF(LD32(v0-8008));
    a0 = s0 + 0;
    f0 = f0 * f1;
    ST32(s1+28, FBITS(f0));
    { rv_t r_ = func_08A24740(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08966088;
L_08966088:;
    ST32(s1+32, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089660A0 */
rv_t func_089660A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089660A0:;
    sp = sp - 16;
    s2 = 2;
    s1 = a0 + 0;
    v0 = LD32(a0+8);
    cnd_ = v0 == s2;
    s0 = a1 + 0;
    if (cnd_) { goto L_089661A0; }
    goto L_089660C8;
L_089660C8:;
    v0 = 1;
    goto L_089660CC;
L_089660CC:;
    cnd_ = s0 == v0;
    ST32(s1+8, s0);
    if (cnd_) { goto L_0896612C; }
    goto L_089660D4;
L_089660D4:;
    v0 = (s32)s0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896611C; }
    goto L_089660E0;
L_089660E0:;
    cnd_ = s0 == s2;
    if (cnd_) { v0 = LD32(s1+4); goto L_08966100; }
    goto L_089660E8;
L_089660E8:;
    goto L_089660EC;
L_089660EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08966100:;
    f12 = BITSF(LD32(s1+28));
    a0 = 0 + 0;
    a1 = LD32(v0+4);
    ST32(s1+12, FBITS(f12));
    { rv_t r_ = func_08A24358(a0, a1, t2, t3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08966114;
L_08966114:;
    goto L_089660EC;
L_0896611C:;
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s1+12, 0); goto L_089660E8; }
    goto L_08966124;
L_08966124:;
    goto L_089660EC;
L_0896612C:;
    a1 = D_08B25AC0 - (23232);
    v1 = LD32(a1+23232);
    a2 = a1 + 23232;
    a0 = LD32(a2+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f4 = BITSF(v0);
    v0 = D_08AEE0C0 - (-8000);
    f3 = BITSF(LD32(v0-8000));
    v0 = D_08AEE0BC - (-8004);
    f0 = BITSF(LD32(v0-8004));
    f2 = BITSF(LD32(s1+32));
    f1 = (float)(s32)FBITS(f4);
    v0 = D_08AEE0C4 - (-7996);
    f3 = f2 * f3;
    f2 = f2 * f0;
    f0 = BITSF(LD32(v0-7996));
    a0 = a0 + v1;
    ST32(a2+4, a0);
    f3 = f3 - f2;
    f1 = f1 * f0;
    ST32(a1+23232, v1);
    f1 = f1 * f3;
    f2 = f2 + f1;
    ST32(s1+12, FBITS(f2));
    goto L_089660E8;
L_089661A0:;
    v0 = LD32(a0+4);
    a0 = 0 + 0;
    a1 = LD32(v0+4);
    { rv_t r_ = func_08A243D0(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089661B0;
L_089661B0:;
    v0 = 1;
    goto L_089660CC;
}

/* 089661B8 */
rv_t func_089661B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089661B8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C285EC - (-31252);
    t1 = D_08C285FC - (-31236);
    t2 = D_08C2860C - (-31220);
    a1 = a1 & a0;
    v1 = t0 - 31252;
    a2 = t1 - 31236;
    cnd_ = a1 == 0;
    a3 = t2 - 31220;
    if (cnd_) { goto L_08966270; }
    goto L_089661E8;
L_089661E8:;
    v0 = D_08AEE0C8 - (-7992);
    f4 = BITSF(LD32(v0-7992));
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
    ST32(t0-31252, FBITS(f2));
    ST32(t1-31236, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31220, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08966270;
L_08966270:;
    return (rv_t){ v0, v1, f0 };
}

/* 08966278 */
rv_t func_08966278(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08966278:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089661B8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896628C;
L_0896628C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08966298 */
float func_08966298(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f13 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08966298:;
    sp = sp - 48;
    v0 = D_08AEE0CC - (-7988);
    s3 = a1 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f20 = f12;
    f21 = BITSF(LD32(v0-7988));
    f0 = BITSF(LD32(a0+248));
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_08966354; }
    goto L_089662E8;
L_089662E8:;
    t1 = LD32(s0+256);
    f12 = f0;
    a0 = s0 + 0;
    a2 = s3 + 0;
    a3 = s1 + 0;
    t0 = s2 + 0;
    f13 = f20;
    a1 = (u32)-1;
    func_088F2C88(a0, a1, a2, a3, t1, f12);
    goto L_0896630C;
L_0896630C:;
    f0 = BITSF(LD32(s0+248));
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    a0 = 0 + 0;
    if (cnd_) { goto L_08966344; }
    goto L_08966320;
L_08966320:;
    goto L_08966324;
L_08966324:;
    sp = sp + 48;
    return f0;
L_08966344:;
    func_08905000(a0);
    goto L_0896634C;
L_0896634C:;
    goto L_08966324;
L_08966354:;
    func_08905000(a0);
    goto L_0896635C;
L_0896635C:;
    f0 = BITSF(LD32(s0+248));
    goto L_089662E8;
}

/* 08966364 */
void func_08966364(void)
{
L_08966364:;
    return;
}

/* 0896636C */
void func_0896636C(void)
{
L_0896636C:;
    return;
}

/* 08966374 */
void func_08966374(void)
{
L_08966374:;
    return;
}

/* 0896637C */
float func_0896637C(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896637C:;
    sp = sp - 48;
    v0 = D_08AEE0D0 - (-7984);
    s3 = a1 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f20 = f12;
    f21 = BITSF(LD32(v0-7984));
    f0 = BITSF(LD32(a0+248));
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_08966434; }
    goto L_089663CC;
L_089663CC:;
    t1 = LD32(s0+256);
    goto L_089663D0;
L_089663D0:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    f12 = f20;
    t0 = (u32)-1;
    func_088F33C8(a0, a1, a2, t0, t1);
    goto L_089663EC;
L_089663EC:;
    f0 = BITSF(LD32(s0+248));
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    a0 = 0 + 0;
    if (cnd_) { goto L_08966424; }
    goto L_08966400;
L_08966400:;
    goto L_08966404;
L_08966404:;
    sp = sp + 48;
    return f0;
L_08966424:;
    func_08905000(a0);
    goto L_0896642C;
L_0896642C:;
    goto L_08966404;
L_08966434:;
    func_08905000(a0);
    goto L_0896643C;
L_0896643C:;
    t1 = LD32(s0+256);
    goto L_089663D0;
}

/* 08966444 */
u32 func_08966444(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08966444:;
    sp = sp - 16;
    a0 = 140;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08966458;
L_08966458:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08817150(a0, 0, 0, 0);
    goto L_08966464;
L_08966464:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08966478 */
rv_t func_08966478(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08966478:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2861C - (-31204);
    t1 = D_08C2862C - (-31188);
    t2 = D_08C2863C - (-31172);
    a1 = a1 & a0;
    v1 = t0 - 31204;
    a2 = t1 - 31188;
    cnd_ = a1 == 0;
    a3 = t2 - 31172;
    if (cnd_) { goto L_08966530; }
    goto L_089664A8;
L_089664A8:;
    v0 = D_08AEE0D4 - (-7980);
    f4 = BITSF(LD32(v0-7980));
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
    ST32(t0-31204, FBITS(f2));
    ST32(t1-31188, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31172, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08966530;
L_08966530:;
    return (rv_t){ v0, v1, f0 };
}

/* 08966538 */
rv_t func_08966538(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08966538:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08966478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896654C;
L_0896654C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08966558 */
rv_t func_08966558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr88 = v[88], vr89 = v[89], vr90 = v[90], vr91 = v[91], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr108 = v[108], vr109 = v[109], vr110 = v[110], vr111 = v[111], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr126 = v[126], vr127 = v[127];
    u8 stack_[464] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 464);
L_08966558:;
    sp = sp - 464;
    v0 = a0 + 112;
    s5 = a0 + 0;
    a1 = 0 + 0;
    v1 = LD32(v0+92);
    ST32(sp+212, v0);
    ST32(sp+208, v1);
    v1 = v1 + 12;
    f23 = BITSF(LD32(a0+372));
    f22 = BITSF(LD32(a0+376));
    f25 = BITSF(LD32(a0+384));
    f24 = BITSF(LD32(a0+388));
    a0 = sp + 0;
    goto L_089665D0;
L_089665D0:;
    a1 = a1 + 1;
    v0 = a1 < 0x6u;
    ST32(a0, v1);
    v1 = v1 + 28;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_089665D0; }
    goto L_089665E8;
L_089665E8:;
    a0 = D_08AEE0D8 - (-7976);
    f0 = BITSF(LD32(a0-7976));
    f1 = f22 + f24;
    ST32(sp+36, 0);
    {u32 a_=sp+(304);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    ST32(sp+32, FBITS(f0));
    {u32 a_=sp+(336);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+40, 0);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    ST32(sp+52, FBITS(f1));
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    ST32(sp+48, 0);
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    fp = 0 + 0;
    ST32(sp+56, 0);
    {vr112=BITSF(LD32(sp+(48)));}
    {vr113=BITSF(LD32(sp+(52)));}
    {vr114=BITSF(LD32(sp+(56)));}
    {vr115=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr115;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float t0=vr121;float d0=s0*t0;vr115=d0;}
    {float s0=vr115;float t0=vr122;float d0=s0*t0;vr123=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr123;float s1=vr127;float t=0;t+=s0;t+=s1;vr96=t;}
    {float s0=vr115;float t0=vr118;float d0=s0*t0;vr123=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float d0=-s0;float d1=-s1;vr126=d0;vr127=d1;}
    {float s0=vr123;float s1=vr127;float t=0;t+=s0;t+=s1;vr97=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;vr98=d0;}
    {float s0=vr116;float t0=vr122;float d0=s0*t0;vr100=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;vr101=d0;}
    {float s0=vr120;float d0=-s0;vr102=d0;}
    {float s0=vr120;float t0=vr117;float d0=s0*t0;vr124=d0;}
    {float s0=vr124;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;vr104=t;}
    {float s0=vr124;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;vr105=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;vr106=d0;}
    {ST32(sp+(64),FBITS(vr96));}
    {ST32(sp+(68),FBITS(vr97));}
    {ST32(sp+(72),FBITS(vr98));}
    {ST32(sp+(76),FBITS(vr100));}
    {ST32(sp+(80),FBITS(vr101));}
    {ST32(sp+(84),FBITS(vr102));}
    {ST32(sp+(88),FBITS(vr104));}
    {ST32(sp+(92),FBITS(vr105));}
    {ST32(sp+(96),FBITS(vr106));}
    v0 = LD32(sp+64);
    v1 = LD32(sp+68);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+72);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(288);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+76);
    v1 = LD32(sp+80);
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+84);
    {vr1=BITSF(v1);}
    v1 = LD32(sp+88);
    {vr2=BITSF(v0);}
    v0 = LD32(sp+92);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr0=BITSF(v1);}
    v1 = LD32(sp+96);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr88=d0;vr89=d1;vr90=d2;vr91=d3;}
    v1 = LD32(sp+32);
    v0 = LD32(sp+36);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(v[19]));}
    {vr0=BITSF(v1);}
    {float s0=vr88;float s1=vr89;float s2=vr90;float s3=vr91;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    v1 = LD32(sp+40);
    {vr1=BITSF(v0);}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr88));ST32(a_+4,FBITS(vr89));ST32(a_+8,FBITS(vr90));ST32(a_+12,FBITS(vr91));}
    {vr2=BITSF(v1);}
    {float t0=vr0;float t1=vr1;float t2=vr2;float o0=0;o0+=vr16*t0;o0+=vr17*t1;o0+=vr18*t2;float o1=0;o1+=vr20*t0;o1+=vr21*t1;o1+=vr22*t2;float o2=0;o2+=vr24*t0;o2+=vr25*t1;o2+=vr26*t2;vr4=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[6]);}
    {v1=FBITS(vr4);}
    ST32(sp+40, v0);
    {a0=FBITS(v[5]);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    ST32(sp+32, v1);
    ST32(sp+128, v1);
    ST32(sp+136, v0);
    ST32(sp+112, v1);
    v1 = D_08AEE0DC - (-7972);
    ST32(sp+120, v0);
    v0 = D_08ADB268 - (-19864);
    ST32(sp+36, a0);
    ST32(sp+132, a0);
    ST32(sp+116, a0);
    f26 = BITSF(LD32(v0-19864));
    f21 = BITSF(LD32(v1-7972));
    goto L_089667A4;
L_089667A4:;
    fcc = FCMP(f26, f21, 2);
    cnd_ = fcc;
    s7 = 0 + 0;
    if (cnd_) { goto L_08966AF8; }
    goto L_089667B4;
L_089667B4:;
    s6 = sp + 128;
    v0 = 0 + 0;
    goto L_089667BC;
L_089667BC:;
    cnd_ = fp != 0;
    f0 = BITSF(LD32(sp+32));
    if (cnd_) { goto L_08966B50; }
    goto L_089667C4;
L_089667C4:;
    v1 = D_08AEE0D8 - (-7976);
    f0 = BITSF(LD32(v1-7976));
    ST32(sp+112, 0);
    ST32(sp+116, FBITS(f0));
    ST32(sp+120, 0);
    goto L_089667D8;
L_089667D8:;
    a0 = D_08ADB264 - (-19868);
    a0 = a0 - 19868;
    f0 = BITSF(LD32(sp+112));
    v0 = v0 + a0;
    a3 = LD32(v0);
    ST32(s6, FBITS(f0));
    f2 = f23;
    a0 = (s32)a3 < 5;
    f0 = BITSF(LD32(sp+116));
    f1 = BITSF(LD32(sp+120));
    f3 = BITSF(LD32(v0+4));
    ST32(s6+4, FBITS(f0));
    cnd_ = a0 != 0;
    ST32(s6+8, FBITS(f1));
    if (cnd_) { goto L_08966814; }
    goto L_08966810;
L_08966810:;
    f2 = f25;
    goto L_08966814;
L_08966814:;
    cnd_ = a0 != 0;
    f4 = f22;
    if (cnd_) { goto L_08966820; }
    goto L_0896681C;
L_0896681C:;
    f4 = f24;
    goto L_08966820;
L_08966820:;
    v1 = LD32(sp+208);
    v0 = a3 << 3;
    v0 = v0 - a3;
    v0 = v0 << 2;
    a2 = v0 + v1;
    v1 = LD32(sp+212);
    a1 = a2 + 12;
    f20 = f2 * f3;
    a0 = LD32(v1+92);
    v1 = LD32(a2+12);
    a0 = a0 + v0;
    ST32(a0+12, v1);
    s2 = a0 + 12;
    v0 = LD32(a1+4);
    ST32(s2+4, v0);
    v1 = LD32(a1+8);
    ST32(s2+8, v1);
    v0 = LD32(a1+12);
    ST32(s2+12, v0);
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    ST32(a0+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    cnd_ = fp != 0;
    ST32(a0+4, FBITS(f2));
    if (cnd_) { goto L_0896688C; }
    goto L_08966888;
L_08966888:;
    f20 = f4 * f3;
    goto L_0896688C;
L_0896688C:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    if (cnd_) { s7 = s7 + 1; goto L_08966AD4; }
    goto L_089668A0;
L_089668A0:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(LD32(s2+12));
    ST32(sp+160, FBITS(f0));
    s1 = a3 - 1;
    ST32(sp+164, FBITS(f1));
    v0 = LD32(sp+160);
    v1 = LD32(sp+164);
    ST32(sp+168, FBITS(f2));
    ST32(sp+172, FBITS(f3));
    ST32(sp+144, v0);
    ST32(sp+148, v1);
    v0 = LD32(sp+168);
    v1 = LD32(sp+172);
    ST32(sp+152, v0);
    cnd_ = (s32)s1 < 0;
    ST32(sp+156, v1);
    if (cnd_) { goto L_08966944; }
    goto L_089668F4;
L_089668F4:;
    v0 = s1 << 2;
    s0 = v0 + sp;
    s4 = sp + 160;
    s3 = sp + 144;
    goto L_08966904;
L_08966904:;
    a3 = LD32(s0);
    a0 = s4 + 0;
    a1 = s5 + 0;
    a2 = s3 + 0;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr_t_; });
    goto L_08966918;
L_08966918:;
    v0 = LD32(sp+160);
    v1 = LD32(sp+168);
    s1 = s1 - 1;
    ST32(sp+144, v0);
    s0 = s0 - 4;
    v0 = LD32(sp+164);
    ST32(sp+152, v1);
    ST32(sp+148, v0);
    v0 = LD32(sp+172);
    cnd_ = (s32)s1 >= 0;
    ST32(sp+156, v0);
    if (cnd_) { goto L_08966904; }
    goto L_08966944;
L_08966944:;
    {vr4=0.31830988618f;}
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = FBITS(f20);
    {vr0=BITSF(a0);}
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr4=d0;}
    {vr112=BITSF(LD32(sp+(144)));}
    {vr113=BITSF(LD32(sp+(148)));}
    {vr114=BITSF(LD32(sp+(152)));}
    {vr115=BITSF(LD32(sp+(156)));}
    {vr116=BITSF(LD32(sp+(128)));}
    {vr117=BITSF(LD32(sp+(132)));}
    {vr118=BITSF(LD32(sp+(136)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[103];vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;v[107]=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=v[107];vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(128),FBITS(vr120));}
    {ST32(sp+(132),FBITS(vr121));}
    {ST32(sp+(136),FBITS(vr122));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+128);
    v1 = LD32(sp+132);
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);v[8]=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+136);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[8];float d0=s0;vr3=d0;}
    {a0=FBITS(vr1);}
    f3 = BITSF(a0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr3);}
    ST32(sp+160, v1);
    f4 = BITSF(v0);
    ST32(sp+164, FBITS(f3));
    {v0=FBITS(vr2);}
    f1 = BITSF(v0);
    ST32(sp+172, FBITS(f4));
    {v[8]=BITSF(v1);}
    v0 = FBITS(f1);
    v1 = FBITS(f4);
    ST32(sp+168, FBITS(f1));
    {v[9]=BITSF(a0);}
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+160);
    {v[11]=BITSF(v1);}
    v1 = LD32(sp+164);
    ST32(sp+176, v0);
    ST32(sp+180, v1);
    v0 = LD32(sp+168);
    v1 = LD32(sp+172);
    ST32(sp+184, v0);
    ST32(sp+188, v1);
    v0 = LD32(s2);
    v1 = LD32(s2+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s2+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s2+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;vr4=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    {v1=FBITS(v[5]);}
    f4 = BITSF(a0);
    ST32(sp+196, v1);
    {a0=FBITS(v[6]);}
    {v0=FBITS(vr4);}
    ST32(sp+200, a0);
    ST32(sp+192, v0);
    v1 = LD32(sp+200);
    v0 = LD32(sp+196);
    a0 = LD32(sp+192);
    ST32(sp+204, FBITS(f4));
    ST32(sp+180, v0);
    ST32(sp+184, v1);
    v0 = LD32(sp+204);
    ST32(sp+176, a0);
    ST32(sp+188, v0);
    ST32(s2, a0);
    v0 = LD32(sp+180);
    ST32(s2+4, v0);
    v1 = LD32(sp+184);
    ST32(s2+8, v1);
    v0 = LD32(sp+188);
    ST32(s2+12, v0);
    s7 = s7 + 1;
    goto L_08966AD4;
L_08966AD4:;
    a0 = D_08ADB264 - (-19868);
    v0 = s7 << 3;
    a0 = a0 - 19868;
    v1 = v0 + a0;
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f0, f21, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_089667BC; }
    goto L_08966AF8;
L_08966AF8:;
    fp = fp + 1;
    v0 = fp < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089667A4; }
    goto L_08966B08;
L_08966B08:;
    sp = sp + 464;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[126]=vr126;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
L_08966B50:;
    f1 = BITSF(LD32(sp+36));
    ST32(sp+112, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f0));
    goto L_089667D8;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[126]=vr126;v[127]=vr127;
}

/* 08966B68 */
void func_08966B68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08966B68:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_0880D4DC(a0);
    goto L_08966B84;
L_08966B84:;
    a0 = D_08B45A9C - (23196);
    v1 = a0 + 23196;
    f3 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    v0 = s0 + 64;
    ST32(s0+64, FBITS(f3));
    f2 = BITSF(0);
    a1 = s0 + 76;
    ST32(v0+4, FBITS(f0));
    a2 = s0 + 88;
    a3 = D_08B45AA8 - (23208);
    ST32(v0+8, FBITS(f1));
    v0 = D_08AF97F8 - (-26632);
    v0 = v0 - 26632;
    f3 = BITSF(LD32(a0+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(s0, v0);
    v1 = a3 + 23208;
    v0 = s0 + 100;
    ST32(a1+8, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(s0+76, FBITS(f3));
    ST32(s0+88, FBITS(f2));
    f7 = BITSF(LD32(a3+23208));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+12));
    f3 = BITSF(LD32(v1+16));
    f4 = BITSF(LD32(v1+20));
    f5 = BITSF(LD32(v1+24));
    f6 = BITSF(LD32(v1+28));
    f8 = BITSF(LD32(v1+32));
    ST32(s0+100, FBITS(f7));
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    ST32(v0+12, FBITS(f2));
    ST32(v0+16, FBITS(f3));
    ST32(v0+20, FBITS(f4));
    ST32(v0+24, FBITS(f5));
    ST32(v0+28, FBITS(f6));
    ST32(v0+32, FBITS(f8));
    ST32(s0+140, s1);
    ST32(s0+136, 0);
    sp = sp + 16;
    return;
}

/* 08966C54 */
u32 func_08966C54(u32 a0)
{
    u32 v0 = 0;
L_08966C54:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    return v0;
}

/* 08966C64 */
rv_t func_08966C64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08966C64:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 08966C74 */
rv_t func_08966C74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08966C74:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08966C90;
L_08966C90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08966C9C */
rv_t func_08966C9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr5 = v[5], vr6 = v[6], vr7 = v[7], vr8 = v[8], vr9 = v[9], vr10 = v[10], vr11 = v[11], vr12 = v[12], vr13 = v[13], vr14 = v[14], vr15 = v[15], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr48 = v[48], vr49 = v[49], vr50 = v[50], vr51 = v[51];
    u8 stack_[1376] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1376);
L_08966C9C:;
    sp = sp - 1376;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    s2 = a0 + 0;
    a2 = LD32(a0+140);
    f0 = BITSF(LD32(v1+23208));
    f8 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v1 = D_08C2C200 - (-15872);
    v0 = 999;
    ST32(sp+16, FBITS(f0));
    a0 = v1 - 15872;
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    ST32(sp, 0);
    ST32(sp+4, 0);
    cnd_ = a2 == v0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089672B8; }
    goto L_08966D28;
L_08966D28:;
    v0 = LD32(a0+4);
    v1 = LD32(v1-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08966D78; }
    goto L_08966D4C;
L_08966D4C:;
    a0 = LD32(a1);
    goto L_08966D50;
L_08966D50:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089672C4; }
    goto L_08966D68;
L_08966D68:;
    a1 = LD32(a1+4);
    goto L_08966D6C;
L_08966D6C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08966D50; }
    goto L_08966D74;
L_08966D74:;
    s0 = 0 + 0;
    goto L_08966D78;
L_08966D78:;
    cnd_ = s0 == 0;
    s3 = s2 + 88;
    if (cnd_) { goto L_089672BC; }
    goto L_08966D80;
L_08966D80:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    s1 = s2 + 100;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr20=v[20];vr21=v[21];vr22=v[22];vr48=v[48];vr49=v[49];vr50=v[50];vr51=v[51];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08966D9C;
L_08966D9C:;
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
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr20=v[20];vr21=v[21];vr22=v[22];vr48=v[48];vr49=v[49];vr50=v[50];vr51=v[51];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08966DD0;
L_08966DD0:;
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
    a2 = s3 + 0;
    a3 = s1 + 0;
    ST32(sp+20, FBITS(f1));
    t0 = 0 + 0;
    t1 = (u32)-1;
    ST32(sp+24, FBITS(f2));
    ST32(sp+28, FBITS(f3));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f6));
    ST32(sp+44, FBITS(f7));
    ST32(sp+48, FBITS(f8));
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = LD32(s2+136);
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr1=v[1];vr2=v[2];vr3=v[3];vr4=v[4];vr5=v[5];vr6=v[6];vr7=v[7];vr8=v[8];vr9=v[9];vr10=v[10];vr11=v[11];vr12=v[12];vr13=v[13];vr14=v[14];vr15=v[15];vr16=v[16];vr17=v[17];vr18=v[18];vr20=v[20];vr21=v[21];vr22=v[22];vr48=v[48];vr49=v[49];vr50=v[50];vr51=v[51];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08966E44;
L_08966E44:;
    v0 = D_08AEE0E0 - (-7968);
    f5 = BITSF(LD32(v0-7968));
    ST32(sp+84, 0);
    {u32 a_=sp+(176);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1280);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    ST32(sp+88, FBITS(f5));
    {u32 a_=sp+(192);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+80, 0);
    {u32 a_=sp+(224);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1312);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(1328);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1296);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    v1 = LD32(s1+4);
    a0 = LD32(s1+8);
    v0 = LD32(s2+100);
    {u32 a_=sp+(512);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr4=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr5=BITSF(v1);}
    {vr2=BITSF(a0);}
    {vr6=BITSF(a0);}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(528);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(480);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1328);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+12);
    {float s0=vr4;float s1=vr5;float s2=vr6;float s3=vr7;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[44]=d0;v[45]=d1;v[46]=d2;v[47]=d3;}
    {u32 a_=sp+(448);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(496);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1312);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(176);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(720);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[80]=d0;v[81]=d1;v[82]=d2;v[83]=d3;}
    v0 = LD32(s1+16);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[40]=d0;v[41]=d1;v[42]=d2;v[43]=d3;}
    {u32 a_=sp+(544);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr8=BITSF(v1);}
    {vr0=BITSF(v1);}
    v1 = LD32(s1+20);
    {vr1=BITSF(v0);}
    {u32 a_=sp+(800);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {vr2=BITSF(v1);}
    {u32 a_=sp+(736);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(752);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(768);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[100]=d0;v[101]=d1;v[102]=d2;v[103]=d3;}
    {u32 a_=sp+(800);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(880);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(896);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(912);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(816);ST32(a_+0,FBITS(vr12));ST32(a_+4,FBITS(vr13));ST32(a_+8,FBITS(vr14));ST32(a_+12,FBITS(vr15));}
    {u32 a_=sp+(832);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(848);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(v[23]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    a2 = LD32(sp+16);
    a3 = LD32(sp+20);
    t0 = LD32(sp+24);
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(784);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {vr9=BITSF(v0);}
    {vr4=BITSF(a2);}
    {vr10=BITSF(v1);}
    {vr5=BITSF(a3);}
    {u32 a_=sp+(464);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {vr6=BITSF(t0);}
    {u32 a_=sp+(864);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    a0 = LD32(s1+32);
    {u32 a_=sp+(720);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(880);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {u32 a_=sp+(896);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(912);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    v0 = LD32(s1+24);
    v1 = LD32(s1+28);
    {float s0=vr8;float s1=vr9;float s2=vr10;float s3=vr11;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[116]=d0;v[117]=d1;v[118]=d2;v[119]=d3;}
    f10 = BITSF(LD32(sp+4));
    f11 = BITSF(LD32(sp+8));
    {u32 a_=sp+(560);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(944);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(960);ST32(a_+0,FBITS(vr48));ST32(a_+4,FBITS(vr49));ST32(a_+8,FBITS(vr50));ST32(a_+12,FBITS(vr51));}
    {u32 a_=sp+(976);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(992);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(1136);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1152);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[24]));ST32(a_+4,FBITS(v[25]));ST32(a_+8,FBITS(v[26]));ST32(a_+12,FBITS(v[27]));}
    {u32 a_=sp+(1104);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1120);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[40]));ST32(a_+4,FBITS(v[41]));ST32(a_+8,FBITS(v[42]));ST32(a_+12,FBITS(v[43]));}
    {u32 a_=sp+(1216);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(1232);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(944);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(992);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));vr11=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    {vr0=BITSF(v0);}
    {vr5=BITSF(v1);}
    {vr1=BITSF(v1);}
    {vr6=BITSF(a0);}
    {vr2=BITSF(a0);}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(480);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(960);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(976);vr4=BITSF(LD32(a_+0));vr5=BITSF(LD32(a_+4));vr6=BITSF(LD32(a_+8));vr7=BITSF(LD32(a_+12));}
    v1 = LD32(sp+28);
    a0 = LD32(sp+32);
    t1 = LD32(sp+36);
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[28]));ST32(a_+4,FBITS(v[29]));ST32(a_+8,FBITS(v[30]));ST32(a_+12,FBITS(v[31]));}
    {u32 a_=sp+(928);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1184);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(1200);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1040);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(vr5));ST32(a_+8,FBITS(vr6));ST32(a_+12,FBITS(vr7));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(v[44]));ST32(a_+4,FBITS(v[45]));ST32(a_+8,FBITS(v[46]));ST32(a_+12,FBITS(v[47]));}
    {u32 a_=sp+(1008);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(1056);ST32(a_+0,FBITS(vr8));ST32(a_+4,FBITS(vr9));ST32(a_+8,FBITS(vr10));ST32(a_+12,FBITS(vr11));}
    {u32 a_=sp+(208);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    a1 = 0 + 0;
    {u32 a_=sp+(160);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    v0 = 0x3f800000u;
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {float s0=v[100];float s1=v[101];float s2=v[102];float s3=v[103];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {float s0=v[44];float s1=v[45];float s2=v[46];float s3=v[47];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    {vr48=BITSF(a1);}
    {vr49=BITSF(a1);}
    {vr50=BITSF(v0);}
    {float t0=vr48;float t1=vr49;float t2=vr50;float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=vr4*t0;o1+=vr5*t1;o1+=vr6*t2;float o2=0;o2+=vr8*t0;o2+=vr9*t1;o2+=vr10*t2;v[108]=o0;v[109]=o1;v[110]=o2;}
    {u32 a_=sp+(480);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    {u32 a_=sp+(432);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;v[23]=d3;}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {v[52]=BITSF(a1);}
    {v[53]=BITSF(a1);}
    {v[54]=BITSF(v0);}
    {v0=FBITS(v[110]);}
    {float t0=v[52];float t1=v[53];float t2=v[54];float o0=0;o0+=vr16*t0;o0+=vr17*t1;o0+=vr18*t2;float o1=0;o1+=vr20*t0;o1+=vr21*t1;o1+=vr22*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[104]=o0;v[105]=o1;v[106]=o2;}
    f3 = BITSF(v0);
    {v0=FBITS(v[109]);}
    f2 = BITSF(v0);
    {v0=FBITS(v[106]);}
    f0 = BITSF(v0);
    ST32(sp+68, FBITS(f2));
    f7 = BITSF(v0);
    ST32(sp+136, FBITS(f0));
    {v0=FBITS(v[105]);}
    {u32 a_=sp+(1056);vr12=BITSF(LD32(a_+0));vr13=BITSF(LD32(a_+4));vr14=BITSF(LD32(a_+8));vr15=BITSF(LD32(a_+12));}
    ST32(sp+120, FBITS(f5));
    {u32 a_=sp+(1008);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {u32 a_=sp+(1232);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    ST32(sp+100, FBITS(f10));
    {float s0=vr12;float s1=vr13;float s2=vr14;float s3=vr15;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[76]=d0;v[77]=d1;v[78]=d2;v[79]=d3;}
    {u32 a_=sp+(1168);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    ST32(sp+104, FBITS(f11));
    f4 = BITSF(v0);
    {u32 a_=sp+(1248);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    ST32(sp+132, v0);
    {u32 a_=sp+(1072);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=vr48;float s1=vr49;float s2=vr50;float s3=vr51;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr12=d0;vr13=d1;vr14=d2;vr15=d3;}
    ST32(sp+84, v0);
    {u32 a_=sp+(704);vr48=BITSF(LD32(a_+0));vr49=BITSF(LD32(a_+4));vr50=BITSF(LD32(a_+8));vr51=BITSF(LD32(a_+12));}
    {v[56]=BITSF(v1);}
    ST32(sp+88, FBITS(f0));
    {v[57]=BITSF(a0);}
    {v[80]=BITSF(a2);}
    ST32(sp+72, FBITS(f3));
    {v[58]=BITSF(t1);}
    {v[81]=BITSF(a3);}
    ST32(sp+116, 0);
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;v[23]=d3;}
    {v[100]=BITSF(v1);}
    f12 = BITSF(LD32(sp));
    a3 = LD32(sp+40);
    a1 = LD32(sp+44);
    a2 = LD32(sp+48);
    v0 = LD32(s2+88);
    v1 = LD32(s3+4);
    {v[101]=BITSF(a0);}
    {v[96]=BITSF(a3);}
    a0 = LD32(s3+8);
    {v[97]=BITSF(a1);}
    {vr48=BITSF(v0);}
    {v[98]=BITSF(a2);}
    {vr49=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr16=d0;vr17=d1;vr18=d2;v[19]=d3;}
    {vr50=BITSF(a0);}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    {float t0=vr48;float t1=vr49;float t2=vr50;float o0=0;o0+=vr16*t0;o0+=vr17*t1;o0+=vr18*t2;float o1=0;o1+=vr20*t0;o1+=vr21*t1;o1+=vr22*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;vr0=o0;vr1=o1;vr2=o2;}
    {v1=FBITS(vr0);}
    {v0=FBITS(vr2);}
    f1 = BITSF(v1);
    f8 = BITSF(v0);
    {v0=FBITS(vr1);}
    f0 = BITSF(v0);
    f6 = BITSF(v1);
    f9 = f12 + f1;
    f10 = f10 + f0;
    {v1=FBITS(v[108]);}
    f0 = BITSF(v1);
    {v1=FBITS(v[104]);}
    f1 = BITSF(v1);
    {u32 a_=sp+(1264);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(a3);}
    {vr1=BITSF(a1);}
    {vr2=BITSF(a2);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[88]=d0;v[89]=d1;v[90]=d2;v[91]=d3;}
    {v[82]=BITSF(t0);}
    {v[102]=BITSF(t1);}
    f2 = BITSF(v1);
    {u32 a_=sp+(1024);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    v1 = FBITS(f1);
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(1104);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(752);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {float s0=v[100];float s1=v[101];float s2=v[102];float s3=v[103];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr4=d0;vr5=d1;vr6=d2;vr7=d3;}
    {u32 a_=sp+(1120);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {float s0=v[88];float s1=v[89];float s2=v[90];float s3=v[91];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr8=d0;vr9=d1;vr10=d2;vr11=d3;}
    {u32 a_=sp+(1136);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(1088);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr16=BITSF(v1);}
    v1 = FBITS(f4);
    {vr17=BITSF(v1);}
    v1 = FBITS(f7);
    {vr18=BITSF(v1);}
    {float t0=vr16;float t1=vr17;float t2=vr18;float o0=0;o0+=vr0*t0;o0+=vr1*t1;o0+=vr2*t2;float o1=0;o1+=vr4*t0;o1+=vr5*t1;o1+=vr6*t2;float o2=0;o2+=vr8*t0;o2+=vr9*t1;o2+=vr10*t2;vr20=o0;vr21=o1;vr22=o2;}
    {v1=FBITS(vr22);}
    f4 = BITSF(v1);
    {v1=FBITS(vr20);}
    f7 = BITSF(v1);
    f11 = f11 + f8;
    t0 = s2 + 64;
    f5 = BITSF(v0);
    ST32(sp+64, FBITS(f0));
    v0 = s2 + 76;
    {v1=FBITS(vr21);}
    ST32(sp+96, FBITS(f12));
    ST32(sp+80, FBITS(f2));
    ST32(sp+144, FBITS(f6));
    ST32(s2+76, FBITS(f7));
    ST32(s2+64, FBITS(f9));
    ST32(t0+8, FBITS(f11));
    ST32(t0+4, FBITS(f10));
    ST32(v0+8, FBITS(f4));
    ST32(v0+4, v1);
    ST32(sp+152, FBITS(f8));
    ST32(sp+148, FBITS(f5));
    ST32(sp+112, FBITS(f6));
    ST32(sp+116, FBITS(f5));
    ST32(sp+120, FBITS(f8));
    ST32(sp+136, FBITS(f11));
    ST32(sp+128, FBITS(f7));
    ST32(sp+132, v1);
    sp = sp + 1376;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;return (rv_t){ v0, v1, f0 }; }
L_089672B8:;
    s3 = s2 + 88;
    goto L_089672BC;
L_089672BC:;
    s1 = s2 + 100;
    goto L_08966E44;
L_089672C4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08966D68; }
    goto L_089672D0;
L_089672D0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08966D6C; }
    goto L_089672DC;
L_089672DC:;
    goto L_08966D78;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[5]=vr5;v[6]=vr6;v[7]=vr7;v[8]=vr8;v[9]=vr9;v[10]=vr10;v[11]=vr11;v[12]=vr12;v[13]=vr13;v[14]=vr14;v[15]=vr15;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[48]=vr48;v[49]=vr49;v[50]=vr50;v[51]=vr51;
}

/* 089672E4 */
rv_t func_089672E4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089672E4:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2864C - (-31156);
    t1 = D_08C2865C - (-31140);
    t2 = D_08C2866C - (-31124);
    a1 = a1 & a0;
    v1 = t0 - 31156;
    a2 = t1 - 31140;
    cnd_ = a1 == 0;
    a3 = t2 - 31124;
    if (cnd_) { goto L_0896739C; }
    goto L_08967314;
L_08967314:;
    v0 = D_08AEE0E4 - (-7964);
    f4 = BITSF(LD32(v0-7964));
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
    ST32(t0-31156, FBITS(f2));
    ST32(t1-31140, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31124, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0896739C;
L_0896739C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089673A4 */
rv_t func_089673A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089673A4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089672E4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089673B8;
L_089673B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089673C4 */
float func_089673C4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089673C4:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    f0 = func_0880E740(a0, a1, a2);
    goto L_089673DC;
L_089673DC:;
    v0 = D_08AF9860 - (-26528);
    v1 = (u32)-1;
    v0 = v0 - 26528;
    ST32(s0+80, v1);
    ST32(s0, v0);
    ST32(s0+76, v1);
    sp = sp + 16;
    return f0;
}

/* 08967404 */
rv_t func_08967404(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08967404:;
    v0 = D_08AF9860 - (-26528);
    v0 = v0 - 26528;
    ST32(a0, v0);
    sp = sp - 16;
    { rv_t r_ = func_0880E8AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967420;
L_08967420:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896742C */
rv_t func_0896742C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896742C:;
    v0 = D_08AF9860 - (-26528);
    v0 = v0 - 26528;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0880E8AC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896744C;
L_0896744C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08967454;
L_08967454:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08967464 */
rv_t func_08967464(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08967464:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    { rv_t r_ = func_0880EAA8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896747C;
L_0896747C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08967494(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967484;
L_08967484:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08967494 */
rv_t func_08967494(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08967494:;
    sp = sp - 16;
    a2 = 999;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    a3 = LD32(a0+76);
    if (cnd_) { goto L_089674C8; }
    goto L_089674B4;
L_089674B4:;
    a0 = LD32(v0+316);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089675A4; }
    goto L_089674C0;
L_089674C0:;
    v0 = LD32(v0+232);
    goto L_089674C4;
L_089674C4:;
    a2 = v0 + 0;
    goto L_089674C8;
L_089674C8:;
    a0 = D_08C2B3A4 - (-19548);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_08967570; }
    goto L_089674D8;
L_089674D8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08967528; }
    goto L_089674FC;
L_089674FC:;
    a0 = LD32(a1);
    goto L_08967500;
L_08967500:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08967584; }
    goto L_08967518;
L_08967518:;
    a1 = LD32(a1+4);
    goto L_0896751C;
L_0896751C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08967500; }
    goto L_08967524;
L_08967524:;
    v1 = 0 + 0;
    goto L_08967528;
L_08967528:;
    cnd_ = v1 == 0;
    v0 = D_08B1C2C8 - (-15672);
    if (cnd_) { goto L_08967574; }
    goto L_08967530;
L_08967530:;
    a1 = LD32(v1+188);
    a0 = LD32(v1+184);
    goto L_08967538;
L_08967538:;
    cnd_ = a0 == a3;
    if (cnd_) { v0 = LD32(s0+80); goto L_08967560; }
    goto L_08967540;
L_08967540:;
    ST32(s0+76, a0);
    goto L_08967544;
L_08967544:;
    a0 = s0 + 0;
    ST32(s0+80, a1);
    { rv_t r_ = func_089676E8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967550;
L_08967550:;
    goto L_08967554;
L_08967554:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08967560:;
    cnd_ = a1 != v0;
    if (cnd_) { ST32(s0+76, a0); goto L_08967544; }
    goto L_08967568;
L_08967568:;
    goto L_08967554;
L_08967570:;
    v0 = D_08B1C2C8 - (-15672);
    goto L_08967574;
L_08967574:;
    v1 = D_08B1C2CC - (-15668);
    a0 = LD32(v0-15672);
    a1 = LD32(v1-15668);
    goto L_08967538;
L_08967584:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08967518; }
    goto L_08967590;
L_08967590:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896751C; }
    goto L_0896759C;
L_0896759C:;
    goto L_08967528;
L_089675A4:;
    { u64 r_ = func_08AA3390(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089675AC;
L_089675AC:;
    a3 = LD32(s0+76);
    goto L_089674C4;
}

/* 089675B4 */
rv_t func_089675B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089675B4:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a2 + 0;
    s2 = a1 + 0;
    s0 = a3 & 0xff;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089675DC;
L_089675DC:;
    v1 = LD32(s1);
    a2 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+12);
    a1 = s2 + 0;
    t_ = v0;
    a3 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089675F8;
L_089675F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08967610 */
rv_t func_08967610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08967610:;
    sp = sp - 16;
    a3 = a3 & 0xff;
    s0 = a0 + 0;
    { rv_t r_ = func_0880EA3C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967628;
L_08967628:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08967648; }
    goto L_08967634;
L_08967634:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08967648:;
    { rv_t r_ = func_08967494(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967650;
L_08967650:;
    v1 = 1;
    goto L_08967634;
}

/* 08967658 */
rv_t func_08967658(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08967658:;
    sp = sp - 16;
    s2 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+64);
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08967694; }
    goto L_08967688;
L_08967688:;
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08967690;
L_08967690:;
    s2 = v0 + 0;
    goto L_08967694;
L_08967694:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0880EC80(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089676A0;
L_089676A0:;
    v0 = LD32(s0+64);
    v1 = (u32)-1;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089676C0; }
    goto L_089676B4;
L_089676B4:;
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089676BC;
L_089676BC:;
    v1 = v0 + 0;
    goto L_089676C0;
L_089676C0:;
    cnd_ = v1 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_089676D0; }
    goto L_089676C8;
L_089676C8:;
    { rv_t r_ = func_089676E8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089676D0;
L_089676D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089676E8 */
rv_t func_089676E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_089676E8:;
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = LD32(a0+64);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089679DC; }
    goto L_08967708;
L_08967708:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089679E0; }
    goto L_08967714;
L_08967714:;
    v0 = LD32(a0+256);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(a0+16); goto L_08967730; }
    goto L_08967720;
L_08967720:;
    { rv_t r_ = func_0880B598(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967728;
L_08967728:;
    a0 = LD32(s0+64);
    a0 = LD32(a0+16);
    goto L_08967730;
L_08967730:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089679DC; }
    goto L_08967738;
L_08967738:;
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08967740;
L_08967740:;
    s1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s1 == v0;
    if (cnd_) { goto L_089679DC; }
    goto L_08967750;
L_08967750:;
    v0 = LD32(s0+4);
    a0 = LD32(v0+16);
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896775C;
L_0896775C:;
    cnd_ = s1 == v0;
    v0 = D_08AEE0E8 - (-7960);
    if (cnd_) { goto L_08967A50; }
    goto L_08967764;
L_08967764:;
    v1 = LD32(s0+76);
    f1 = BITSF(LD32(v0-7960));
    v0 = v1 & 0xff;
    v1 = v1 >> 8;
    a0 = v1 & 0xff;
    v1 = v1 >> 8;
    a1 = (v1 >> 8) & 0xff;
    f0 = BITSF(a1);
    f4 = BITSF(v0);
    v0 = LD32(s0+80);
    f10 = (float)(s32)FBITS(f0);
    f5 = BITSF(a0);
    a3 = v0 & 0xff;
    v0 = v0 >> 8;
    a0 = v0 & 0xff;
    v0 = v0 >> 8;
    f10 = f10 * f1;
    a1 = (v0 >> 8) & 0xff;
    a2 = D_08AEE0EC - (-7956);
    v0 = v0 & 0xff;
    v1 = v1 & 0xff;
    f3 = BITSF(LD32(a2-7956));
    f7 = BITSF(a3);
    f8 = BITSF(a0);
    f0 = BITSF(v1);
    f9 = BITSF(v0);
    f11 = BITSF(a1);
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
    v0 = sp + 0;
    ST32(sp+4, FBITS(f3));
    ST32(sp, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+20, FBITS(f6));
    ST32(sp+16, FBITS(f7));
    ST32(sp+28, FBITS(f8));
    cnd_ = !fcc;
    ST32(sp+12, FBITS(f10));
    if (cnd_) { goto L_08967A40; }
    goto L_0896783C;
L_0896783C:;
    v1 = D_08AEE0F0 - (-7952);
    f0 = BITSF(LD32(v1-7952));
    f0 = f12 + f0;
    goto L_08967848;
L_08967848:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a2-7956));
    a3 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a0 = a3 << 8;
    if (cnd_) { goto L_08967A34; }
    goto L_08967870;
L_08967870:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f2 + f0;
    goto L_08967878;
L_08967878:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a2-7956));
    a1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + a1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_08967A28; }
    goto L_089678A4;
L_089678A4:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 + f0;
    goto L_089678AC;
L_089678AC:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(a2-7956));
    a3 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + a3;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_08967A1C; }
    goto L_089678D8;
L_089678D8:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 + f0;
    goto L_089678E0;
L_089678E0:;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(a2-7956));
    v0 = FBITS(f1);
    f1 = BITSF(LD32(sp+28));
    a0 = a0 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = sp + 16;
    if (cnd_) { goto L_08967A10; }
    goto L_0896790C;
L_0896790C:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 + f0;
    goto L_08967914;
L_08967914:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a2-7956));
    a3 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = a3 << 8;
    if (cnd_) { goto L_08967A04; }
    goto L_0896793C;
L_0896793C:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f2 + f0;
    goto L_08967944;
L_08967944:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a2-7956));
    a3 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + a3;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_089679F8; }
    goto L_08967970;
L_08967970:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 + f0;
    goto L_08967978;
L_08967978:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(a2-7956));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_089679EC; }
    goto L_089679A4;
L_089679A4:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 + f0;
    goto L_089679AC;
L_089679AC:;
    f0 = BITSF(F2I(f0, 1));
    a2 = s1 + 0;
    a3 = FBITS(f0);
    a1 = a1 + a3;
    { rv_t r_ = func_08A6A46C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089679C0;
L_089679C0:;
    v1 = LD32(s0+64);
    a1 = v0 + 0;
    v0 = ((u32)(uintptr_t)func_08AB122C) - (4652);
    v0 = v0 + 4652;
    ST32(v1+260, v0);
    goto L_089679D4;
L_089679D4:;
    ST32(v1+256, a1);
    goto L_089679DC;
L_089679DC:;
    goto L_089679E0;
L_089679E0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089679EC:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 - f0;
    goto L_089679AC;
L_089679F8:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 - f0;
    goto L_08967978;
L_08967A04:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f2 - f0;
    goto L_08967944;
L_08967A10:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 - f0;
    goto L_08967914;
L_08967A1C:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 - f0;
    goto L_089678E0;
L_08967A28:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f1 - f0;
    goto L_089678AC;
L_08967A34:;
    f0 = BITSF(LD32(v1-7952));
    f0 = f2 - f0;
    goto L_08967878;
L_08967A40:;
    v1 = D_08AEE0F0 - (-7952);
    f0 = BITSF(LD32(v1-7952));
    f0 = f12 - f0;
    goto L_08967848;
L_08967A50:;
    v0 = LD32(s0+4);
    v1 = LD32(s0+64);
    a1 = LD32(v0+256);
    ST32(v1+260, 0);
    goto L_089679D4;
}

/* 08967A64 */
rv_t func_08967A64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08967A64:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2867C - (-31108);
    t1 = D_08C2868C - (-31092);
    t2 = D_08C2869C - (-31076);
    a1 = a1 & a0;
    v1 = t0 - 31108;
    a2 = t1 - 31092;
    cnd_ = a1 == 0;
    a3 = t2 - 31076;
    if (cnd_) { goto L_08967B1C; }
    goto L_08967A94;
L_08967A94:;
    v0 = D_08AEE0F4 - (-7948);
    f4 = BITSF(LD32(v0-7948));
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
    ST32(t0-31108, FBITS(f2));
    ST32(t1-31092, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-31076, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08967B1C;
L_08967B1C:;
    return (rv_t){ v0, v1, f0 };
}

/* 08967B24 */
rv_t func_08967B24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08967B24:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08967A64(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967B38;
L_08967B38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08967B44 */
void func_08967B44(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f2 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08967B44:;
    sp = sp - 64;
    s4 = a1 + 0;
    s2 = a0 + 0;
    s3 = s2 + 800;
    s1 = a2 + 0;
    s0 = a3 + 0;
    f21 = f12;
    f20 = f13;
    func_0880D4DC(a0);
    goto L_08967B88;
L_08967B88:;
    v0 = D_08AEE0FC - (-7940);
    f0 = BITSF(LD32(v0-7940));
    v1 = s2 + 108;
    ST32(s2+64, FBITS(f20));
    a0 = D_08B45ACC - (23244);
    v0 = D_08B1B780 - (-18560);
    ST32(s2+68, 0);
    t1 = v0 - 18560;
    v0 = D_08AF98C0 - (-26432);
    ST32(s2+72, FBITS(f0));
    a1 = a0 + 23244;
    v0 = v0 - 26432;
    ST32(s2+76, 0);
    a2 = s2 + 136;
    a3 = s2 + 148;
    ST32(s2+80, 0);
    t0 = s3 + 0;
    t2 = t1 + 80;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s2+108, 0);
    v1 = LD32(a0+23244);
    ST32(s2, v0);
    ST32(s2+120, v1);
    v0 = LD32(a1+4);
    ST32(s2+88, s0);
    ST32(s2+124, v0);
    v0 = (u32)-1;
    a0 = LD32(a1+8);
    ST32(s2+96, v0);
    v0 = 999;
    ST32(s2+128, a0);
    v1 = LD32(a1+12);
    ST32(s2+100, s1);
    ST32(s2+132, v1);
    ST32(s2+104, v0);
    ST32(a2+8, 0);
    ST32(a2+4, 0);
    ST32(a3+8, FBITS(f0));
    ST32(s2+84, 0);
    ST8(s2+92, 0);
    ST8(s2+93, 0);
    ST32(s2+136, 0);
    ST32(s2+148, 0);
    ST32(a3+4, 0);
    goto L_08967C3C;
L_08967C3C:;
    v0 = LD32(t1);
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    a1 = LD32(t1+12);
    ST32(t0, v0);
    t1 = t1 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = t1 != t2;
    ST32(t0-4, a1);
    if (cnd_) { goto L_08967C3C; }
    goto L_08967C68;
L_08967C68:;
    v0 = LD32(t1);
    v1 = LD32(t1+4);
    a0 = LD32(t1+8);
    ST32(t0, v0);
    ST32(t0+4, v1);
    ST32(t0+8, a0);
    v0 = D_08B1B7DC - (-18468);
    a3 = v0 - 18468;
    s0 = s2 + 892;
    a2 = s0 + 0;
    t0 = a3 + 80;
    goto L_08967C94;
L_08967C94:;
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
    if (cnd_) { goto L_08967C94; }
    goto L_08967CC0;
L_08967CC0:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    a1 = s4 + 0;
    a0 = s2 + 0;
    func_08969D44(a0, a1);
    goto L_08967CE4;
L_08967CE4:;
    a0 = s2 + 0;
    f12 = f21;
    func_08969D00(a0, f12);
    goto L_08967CF0;
L_08967CF0:;
    v0 = D_08AEE0FC - (-7940);
    f2 = BITSF(LD32(v0-7940));
    a0 = s2 + 0;
    a1 = 0 + 0;
    v1 = s2 + 0;
    goto L_08967D04;
L_08967D04:;
    ST32(a0+168, 0);
    a1 = a1 + 1;
    v0 = a1 < 0x14u;
    f0 = BITSF(LD32(a0+168));
    ST32(v1+640, 0);
    ST32(v1+720, 0);
    v1 = v1 + 4;
    ST32(a0+164, FBITS(f0));
    ST32(a0+160, FBITS(f0));
    ST32(a0+400, FBITS(f0));
    ST32(a0+404, FBITS(f0));
    ST32(a0+408, FBITS(f2));
    cnd_ = v0 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_08967D04; }
    goto L_08967D3C;
L_08967D3C:;
    a0 = s3 + 0;
    a1 = 1;
    ST32(sp+8, FBITS(f2));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    func_088EB0CC(a0, a1);
    goto L_08967D54;
L_08967D54:;
    a0 = s0 + 0;
    a1 = 1;
    func_088EB0CC(a0, a1);
    goto L_08967D60;
L_08967D60:;
    v1 = D_08B1B838 - (-18376);
    v0 = LD_U8(v1-18376);
    cnd_ = v0 != 0;
    a0 = D_08ADB28C - (-19828);
    if (cnd_) { goto L_08967D98; }
    goto L_08967D70;
L_08967D70:;
    goto L_08967D74;
L_08967D74:;
    sp = sp + 64;
    return;
L_08967D98:;
    a1 = D_08C286E0 - (-31008);
    a0 = a0 - 19828;
    a1 = a1 - 31008;
    a2 = 1;
    a3 = 0 + 0;
    ST8(v1-18376, 0);
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08967DB4;
L_08967DB4:;
    goto L_08967D74;
}

/* 08967DBC */
void func_08967DBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08967DBC:;
    sp = sp - 64;
    s1 = a1 + 0;
    s0 = a0 + 0;
    s3 = s0 + 800;
    func_0880D51C(a0, a1);
    goto L_08967DE4;
L_08967DE4:;
    v1 = s0 + 108;
    f0 = BITSF(LD32(s1+64));
    f1 = BITSF(LD32(s1+68));
    f2 = BITSF(LD32(s1+72));
    ST32(s0+64, FBITS(f0));
    a2 = D_08B45ACC - (23244);
    v0 = D_08B1B780 - (-18560);
    ST32(s0+68, FBITS(f1));
    t3 = v0 - 18560;
    a0 = a2 + 23244;
    ST32(s0+72, FBITS(f2));
    a3 = (u32)-1;
    t0 = s0 + 136;
    ST32(s0+76, 0);
    t1 = s0 + 148;
    t2 = s3 + 0;
    ST32(s0+80, 0);
    t4 = t3 + 80;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s0+108, 0);
    v0 = LD32(a2+23244);
    a1 = LD_U8(s1+93);
    a2 = LD32(s1+100);
    ST32(s0+120, v0);
    v0 = D_08AF98C0 - (-26432);
    v0 = v0 - 26432;
    v1 = LD32(a0+4);
    ST32(s0, v0);
    ST32(s0+124, v1);
    v0 = LD32(a0+8);
    ST8(s0+93, a1);
    ST32(s0+128, v0);
    v0 = 999;
    ST32(s0+104, v0);
    v0 = D_08AEE108 - (-7928);
    v1 = LD32(a0+12);
    f0 = BITSF(LD32(v0-7928));
    ST32(s0+96, a3);
    ST32(s0+132, v1);
    ST32(s0+100, a2);
    ST32(t0+8, 0);
    ST32(s0+84, 0);
    ST32(s0+88, a3);
    ST8(s0+92, 0);
    ST32(s0+136, 0);
    ST32(t0+4, 0);
    ST32(s0+148, 0);
    ST32(t1+8, FBITS(f0));
    ST32(t1+4, 0);
    goto L_08967EAC;
L_08967EAC:;
    v0 = LD32(t3);
    v1 = LD32(t3+4);
    a0 = LD32(t3+8);
    a1 = LD32(t3+12);
    ST32(t2, v0);
    t3 = t3 + 16;
    t2 = t2 + 16;
    ST32(t2-12, v1);
    ST32(t2-8, a0);
    cnd_ = t3 != t4;
    ST32(t2-4, a1);
    if (cnd_) { goto L_08967EAC; }
    goto L_08967ED8;
L_08967ED8:;
    v0 = LD32(t3);
    v1 = LD32(t3+4);
    a0 = LD32(t3+8);
    ST32(t2, v0);
    ST32(t2+4, v1);
    ST32(t2+8, a0);
    v0 = D_08B1B7DC - (-18468);
    a3 = v0 - 18468;
    s2 = s0 + 892;
    a2 = s2 + 0;
    t0 = a3 + 80;
    goto L_08967F04;
L_08967F04:;
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
    if (cnd_) { goto L_08967F04; }
    goto L_08967F30;
L_08967F30:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    a0 = s1 + 0;
    v0 = func_08969B3C(a0);
    goto L_08967F50;
L_08967F50:;
    v1 = v0 & 0xff;
    v0 = v0 >> 8;
    a0 = v0 & 0xff;
    v0 = v0 >> 8;
    a1 = (v0 >> 8) & 0xff;
    v0 = v0 & 0xff;
    f4 = BITSF(v1);
    f5 = BITSF(a1);
    f1 = BITSF(a0);
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f4);
    v0 = D_08AEE10C - (-7924);
    f3 = (float)(s32)FBITS(f1);
    f4 = (float)(s32)FBITS(f0);
    f1 = (float)(s32)FBITS(f5);
    f0 = BITSF(LD32(v0-7924));
    a1 = sp + 0;
    a0 = s0 + 0;
    f2 = f2 * f0;
    f1 = f1 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f1));
    ST32(sp+4, FBITS(f3));
    ST32(sp, FBITS(f4));
    func_08969D44(a0, a1);
    goto L_08967FBC;
L_08967FBC:;
    a0 = s1 + 0;
    f0 = func_08969A68(a0);
    goto L_08967FC4;
L_08967FC4:;
    f12 = f0;
    a0 = s0 + 0;
    func_08969D00(a0, f12);
    goto L_08967FD0;
L_08967FD0:;
    v0 = D_08AEE108 - (-7928);
    f2 = BITSF(LD32(v0-7928));
    a0 = s0 + 0;
    a1 = 0 + 0;
    v1 = s0 + 0;
    goto L_08967FE4;
L_08967FE4:;
    ST32(a0+168, 0);
    a1 = a1 + 1;
    v0 = a1 < 0x14u;
    f0 = BITSF(LD32(a0+168));
    ST32(v1+640, 0);
    ST32(v1+720, 0);
    v1 = v1 + 4;
    ST32(a0+164, FBITS(f0));
    ST32(a0+160, FBITS(f0));
    ST32(a0+400, FBITS(f0));
    ST32(a0+404, FBITS(f0));
    ST32(a0+408, FBITS(f2));
    cnd_ = v0 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_08967FE4; }
    goto L_0896801C;
L_0896801C:;
    a0 = s3 + 0;
    a1 = 1;
    ST32(sp+24, FBITS(f2));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f0));
    func_088EB0CC(a0, a1);
    goto L_08968034;
L_08968034:;
    a0 = s2 + 0;
    a1 = 1;
    func_088EB0CC(a0, a1);
    goto L_08968040;
L_08968040:;
    sp = sp + 64;
    return;
}

/* 0896805C */
rv_t func_0896805C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896805C:;
    sp = sp - 16;
    v0 = D_08AF98C0 - (-26432);
    s0 = a0 + 0;
    v0 = v0 - 26432;
    v1 = (u32)-1;
    a1 = LD32(a0+96);
    ST32(s0, v0);
    cnd_ = a1 == v1;
    a0 = a0 + 96;
    if (cnd_) { goto L_08968090; }
    goto L_08968088;
L_08968088:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968090;
L_08968090:;
    a0 = s0 + 0;
    { u64 r_ = func_0896A934(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968098;
L_08968098:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089680B4 */
rv_t func_089680B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_089680B4:;
    sp = sp - 16;
    v0 = D_08AF98C0 - (-26432);
    s0 = a0 + 0;
    v0 = v0 - 26432;
    v1 = (u32)-1;
    a1 = LD32(a0+96);
    ST32(s0, v0);
    cnd_ = a1 == v1;
    a0 = a0 + 96;
    if (cnd_) { goto L_089680E8; }
    goto L_089680E0;
L_089680E0:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089680E8;
L_089680E8:;
    a0 = s0 + 0;
    { u64 r_ = func_0896A934(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089680F0;
L_089680F0:;
    v0 = D_08AF0C70 - (3184);
    v0 = v0 + 3184;
    ST32(s0, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968104;
L_08968104:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08968114 */
rv_t func_08968114(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08968114:;
    sp = sp - 80;
    s0 = a0 + 0;
    func_08969F64(a0);
    goto L_08968138;
L_08968138:;
    v0 = D_08B28908 - (-30456);
    v1 = LD_U8(v0-30456);
    cnd_ = v1 == 0;
    if (cnd_) { f1 = BITSF(LD32(s0+80)); goto L_0896817C; }
    goto L_08968148;
L_08968148:;
    v0 = D_08B286F0 - (-30992);
    v1 = LD_U8(v0-30992);
    cnd_ = v1 != 0;
    if (cnd_) { f1 = BITSF(LD32(s0+80)); goto L_0896817C; }
    goto L_08968158;
L_08968158:;
    f1 = BITSF(LD32(s0+68));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_089683B0; }
    goto L_08968170;
L_08968170:;
    a1 = 0 + 0;
    { u64 r_ = func_08969E90(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968178;
L_08968178:;
    f1 = BITSF(LD32(s0+80));
    goto L_0896817C;
L_0896817C:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s0+72)); goto L_089681A4; }
    goto L_08968190;
L_08968190:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(s0+80, FBITS(f0));
    f1 = BITSF(LD32(s0+72));
    goto L_089681A4;
L_089681A4:;
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0+96); goto L_08968240; }
    goto L_089681B4;
L_089681B4:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    fcc = FCMP(f2, f1, 12);
    f1 = f1 * f0;
    cnd_ = !fcc;
    f2 = f1 + f1;
    if (cnd_) { goto L_089681D8; }
    goto L_089681CC;
L_089681CC:;
    v0 = D_08AEE110 - (-7920);
    f0 = BITSF(LD32(v0-7920));
    f2 = f1 * f0;
    goto L_089681D8;
L_089681D8:;
    f0 = BITSF(LD32(s0+68));
    v0 = D_08AEE114 - (-7916);
    f3 = BITSF(LD32(v0-7916));
    f1 = f0 + f2;
    fcc = FCMP(f3, f1, 12);
    cnd_ = fcc;
    ST32(s0+68, FBITS(f1));
    if (cnd_) { goto L_0896820C; }
    goto L_089681F8;
L_089681F8:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+96); goto L_08968240; }
    goto L_0896820C;
L_0896820C:;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+68, FBITS(f0)); goto L_08968238; }
    goto L_08968220;
L_08968220:;
    fcc = FCMP(f3, f1, 12);
    cnd_ = fcc;
    f0 = f3;
    if (cnd_) { goto L_08968234; }
    goto L_08968230;
L_08968230:;
    f0 = f1;
    goto L_08968234;
L_08968234:;
    ST32(s0+68, FBITS(f0));
    goto L_08968238;
L_08968238:;
    ST32(s0+72, 0);
    v1 = LD32(s0+96);
    goto L_08968240;
L_08968240:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a1 = sp + 0;
    if (cnd_) { goto L_08968330; }
    goto L_0896824C;
L_0896824C:;
    a2 = 0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_0880DD94(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968264;
L_08968264:;
    a0 = LD32(s0+96);
    f0 = func_088E0018(a0);
    goto L_0896826C;
L_0896826C:;
    f12 = f0;
    a0 = sp + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968278;
L_08968278:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08968320; }
    goto L_08968280;
L_08968280:;
    a0 = LD32(s0+96);
    a1 = sp + 0;
    { rv_t r_ = func_088DFFD0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896828C;
L_0896828C:;
    v0 = LD_U8(s0+92);
    goto L_08968290;
L_08968290:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08968304; }
    goto L_08968298;
L_08968298:;
    v0 = s0 + 640;
    v1 = s0 + 720;
    ST32(sp+16, v0);
    v0 = D_08AEE114 - (-7916);
    s2 = 0 + 0;
    ST32(sp+20, v1);
    s3 = 1;
    s1 = sp + 16;
    f20 = BITSF(LD32(v0-7916));
    v0 = LD32(s0+84);
    goto L_089682C0;
L_089682C0:;
    v1 = LD32(s1);
    s2 = s2 + 1;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    s1 = s1 + 4;
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089682DC;
L_089682DC:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s2 < 0x2u;
    if (cnd_) { goto L_089682F8; }
    goto L_089682E8;
L_089682E8:;
    v0 = LD32(v0+72);
    v0 = (v0 & ~(0x1u << 1)) | ((s3 & 0x1) << 1);
    ST32(v1+28, FBITS(f20));
    ST32(v1+72, v0);
    goto L_089682F8;
L_089682F8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(s0+84); goto L_089682C0; }
    goto L_08968300;
L_08968300:;
    goto L_08968304;
L_08968304:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_08968320:;
    a0 = s0 + 96;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968328;
L_08968328:;
    v0 = LD_U8(s0+92);
    goto L_08968290;
L_08968330:;
    v0 = D_08AEE114 - (-7916);
    f20 = BITSF(LD32(v0-7916));
    f0 = BITSF(LD32(s0+68));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD_U8(s0+92); goto L_08968290; }
    goto L_0896834C;
L_0896834C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_0880DD94(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968368;
L_08968368:;
    a0 = 0xa770000u;
    a0 = a0 | 0x31a2;
    a1 = 0 + 0;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968378;
L_08968378:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0896828C; }
    goto L_08968380;
L_08968380:;
    f12 = BITSF(LD32(v0+84));
    a0 = sp + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896838C;
L_0896838C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+92); goto L_08968290; }
    goto L_08968394;
L_08968394:;
    a1 = s0 + 96;
    a0 = s1 + 0;
    f12 = f20;
    a2 = sp + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089683A8;
L_089683A8:;
    v0 = LD_U8(s0+92);
    goto L_08968290;
L_089683B0:;
    a1 = 0 + 0;
    { u64 r_ = func_08969DD8(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089683B8;
L_089683B8:;
    f1 = BITSF(LD32(s0+80));
    goto L_0896817C;
}

/* 089683C0 */
rv_t func_089683C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[816] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 816);
L_089683C0:;
    v0 = 0x2000000u;
    sp = sp - 816;
    a3 = a3 & v0;
    s1 = a0 + 0;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_08968AE4; }
    goto L_08968404;
L_08968404:;
    f0 = BITSF(LD32(a0+68));
    f1 = BITSF(LD32(a0+64));
    v0 = D_08AEE118 - (-7912);
    f21 = f1 * f0;
    f0 = BITSF(LD32(v0-7912));
    fcc = FCMP(f21, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08968C48; }
    goto L_08968428;
L_08968428:;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    f6 = BITSF(LD32(v1+23208));
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    v1 = a0 + 640;
    v0 = a0 + 720;
    ST32(sp+4, v0);
    ST32(sp, v1);
    ST32(sp+96, FBITS(f6));
    ST32(sp+100, FBITS(f0));
    ST32(sp+104, FBITS(f1));
    ST32(sp+108, FBITS(f2));
    ST32(sp+112, FBITS(f3));
    ST32(sp+116, FBITS(f4));
    ST32(sp+120, FBITS(f5));
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f1));
    ST32(sp+44, FBITS(f2));
    ST32(sp+48, FBITS(f3));
    ST32(sp+52, FBITS(f4));
    ST32(sp+56, FBITS(f5));
    ST32(sp+60, FBITS(f7));
    ST32(sp+64, FBITS(f8));
    ST32(sp+80, 0);
    ST32(sp+84, 0);
    ST32(sp+88, 0);
    ST32(sp+124, FBITS(f7));
    ST32(sp+128, FBITS(f8));
    v0 = LD32(a0+4);
    a0 = LD32(v0+316);
    cnd_ = a0 != 0;
    if (cnd_) { {u32 a_=sp+(560);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));} goto L_08968BE0; }
    goto L_089684D4;
L_089684D4:;
    a2 = LD32(v0+232);
    goto L_089684D8;
L_089684D8:;
    a0 = D_08C2C200 - (-15872);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 15872;
    if (cnd_) { goto L_08968BB4; }
    goto L_089684E8;
L_089684E8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08968538; }
    goto L_0896850C;
L_0896850C:;
    a0 = LD32(a1);
    goto L_08968510;
L_08968510:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08968BC0; }
    goto L_08968528;
L_08968528:;
    a1 = LD32(a1+4);
    goto L_0896852C;
L_0896852C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08968510; }
    goto L_08968534;
L_08968534:;
    s0 = 0 + 0;
    goto L_08968538;
L_08968538:;
    cnd_ = s0 == 0;
    s2 = sp + 80;
    if (cnd_) { goto L_08968BB8; }
    goto L_08968540;
L_08968540:;
    v1 = LD32(s0);
    f1 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(v1-12); goto L_0896857C; }
    goto L_08968564;
L_08968564:;
    f0 = BITSF(LD32(s1+72));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    a0 = s1 + 0;
    if (cnd_) { goto L_08968B44; }
    goto L_08968578;
L_08968578:;
    a0 = LD32(v1-12);
    goto L_0896857C;
L_0896857C:;
    a0 = s0 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+12);
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    t_ = v0;
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089685BC;
L_089685BC:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+24, FBITS(f0));
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089685F0;
L_089685F0:;
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(sp+32, FBITS(f0));
    {u32 a_=sp+(560);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(576);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    ST32(sp+36, FBITS(f1));
    {u32 a_=sp+(592);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    ST32(sp+40, FBITS(f2));
    {u32 a_=sp+(624);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    ST32(sp+44, FBITS(f3));
    {u32 a_=sp+(656);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    ST32(sp+48, FBITS(f4));
    {u32 a_=sp+(688);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    ST32(sp+52, FBITS(f5));
    {u32 a_=sp+(720);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    ST32(sp+56, FBITS(f6));
    ST32(sp+60, FBITS(f7));
    ST32(sp+64, FBITS(f8));
    v0 = LD32(s1+4);
    a0 = LD32(s1+12);
    cnd_ = (s32)a0 < 0;
    v1 = LD32(v0+16);
    if (cnd_) { goto L_08968688; }
    goto L_08968678;
L_08968678:;
    v0 = LD32(v1+68);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+72); goto L_08968B2C; }
    goto L_08968688;
L_08968688:;
    a1 = 0 + 0;
    goto L_0896868C;
L_0896868C:;
    v0 = LD32(s0);
    t1 = LD32(s1+88);
    s2 = sp + 80;
    a0 = LD32(v0-12);
    s3 = sp + 96;
    a2 = s2 + 0;
    a0 = s0 + a0;
    v1 = LD32(a0);
    a3 = s3 + 0;
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    v0 = LD32(v1+60);
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    t0 = 0 + 0;
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089686EC;
L_089686EC:;
    {u32 a_=sp+(608);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    goto L_08968710;
L_08968710:;
    fp = D_08AEE11C - (-7908);
    v1 = LD32(sp+96);
    v0 = LD32(sp+100);
    f20 = BITSF(LD32(fp-7908));
    {u32 a_=sp+(384);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(400);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+104);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(416);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[50]=BITSF(v1);}
    v0 = LD32(sp+112);
    v1 = LD32(sp+108);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v[16]=BITSF(v1);}
    {u32 a_=sp+(368);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+116);
    {v[17]=BITSF(v0);}
    v0 = LD32(sp+120);
    {v[18]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(sp+124);
    v0 = LD32(sp+128);
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[33]=BITSF(v1);}
    v1 = 0x3f800000u;
    {v[34]=BITSF(v0);}
    v0 = 0 + 0;
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v0);}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    a1 = s2 + 0;
    a2 = s3 + 0;
    a0 = s1 + 0;
    {v1=FBITS(v[16]);}
    {v0=FBITS(v[17]);}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    ST32(sp+144, v1);
    s0 = s1 + 0;
    s7 = 0 + 0;
    ST32(sp+148, v0);
    s4 = 0 + 0;
    ST32(sp+152, FBITS(f3));
    ST32(sp+160, 0);
    ST32(sp+164, 0);
    ST32(sp+168, FBITS(f20));
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    func_0896A094(a0, a1, a2);
    goto L_08968808;
L_08968808:;
    {u32 a_=sp+(736);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+20));
    ST32(sp+168, FBITS(f20));
    {u32 a_=sp+(720);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    ST32(sp+176, FBITS(f0));
    {u32 a_=sp+(688);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(sp+24));
    ST32(sp+180, FBITS(f1));
    {u32 a_=sp+(656);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    ST32(sp+184, FBITS(f0));
    {u32 a_=sp+(624);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    ST32(sp+160, 0);
    ST32(sp+164, 0);
    goto L_0896884C;
L_0896884C:;
    s1 = 0 + 0;
    s3 = s4 << 2;
    s6 = s0 + 160;
    s5 = s0 + 400;
    s2 = sp + 0;
    goto L_08968860;
L_08968860:;
    v0 = LD32(s2);
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    v0 = s3 + v0;
    a0 = LD32(v0);
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968890;
L_08968890:;
    t2 = v0 + 0;
    {u32 a_=sp+(624);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(736);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_08968B1C; }
    goto L_089688B8;
L_089688B8:;
    a0 = LD32(sp+32);
    v0 = LD32(sp+36);
    v1 = LD32(sp+40);
    {u32 a_=sp+(448);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[96]=d0;v[97]=d1;v[98]=d2;v[99]=d3;}
    t1 = LD32(sp+44);
    a1 = LD32(sp+48);
    a2 = LD32(sp+52);
    a3 = LD32(sp+60);
    t0 = LD32(sp+64);
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(464);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(512);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[80]=BITSF(t1);}
    {v[32]=BITSF(a0);}
    {v[81]=BITSF(a1);}
    a0 = LD32(sp+56);
    {v[82]=BITSF(a2);}
    {v[33]=BITSF(v0);}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v0 = LD32(s6+4);
    {v[34]=BITSF(v1);}
    {u32 a_=sp+(480);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    v1 = LD32(s0+160);
    {v[48]=BITSF(a0);}
    f6 = BITSF(LD32(sp+16));
    {v[49]=BITSF(a3);}
    f5 = BITSF(LD32(sp+20));
    {v[50]=BITSF(t0);}
    f4 = BITSF(LD32(sp+24));
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[104]=d0;v[105]=d1;v[106]=d2;v[107]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(432);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s6+8);
    {v[49]=BITSF(v0);}
    {v[50]=BITSF(v1);}
    {float t0=v[48];float t1=v[49];float t2=v[50];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    {v0=FBITS(v[16]);}
    f9 = BITSF(v1);
    f1 = BITSF(v0);
    {v1=FBITS(v[17]);}
    f0 = BITSF(v1);
    f6 = f6 + f1;
    f4 = f4 + f9;
    f5 = f5 + f0;
    v1 = LD32(s0+400);
    v0 = LD32(s5+4);
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(528);v[52]=BITSF(LD32(a_+0));v[53]=BITSF(LD32(a_+4));v[54]=BITSF(LD32(a_+8));v[55]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(544);v[56]=BITSF(LD32(a_+0));v[57]=BITSF(LD32(a_+4));v[58]=BITSF(LD32(a_+8));v[59]=BITSF(LD32(a_+12));}
    {v[52]=BITSF(t1);}
    {v[56]=BITSF(a0);}
    {v[53]=BITSF(a1);}
    {v[57]=BITSF(a3);}
    a1 = LD32(s5+8);
    {v[54]=BITSF(a2);}
    {v[58]=BITSF(t0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[56];float s1=v[57];float s2=v[58];float s3=v[59];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(496);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v1);}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(a1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = s1 < 0x1u;
    a0 = t2 + 0;
    a1 = sp + 176;
    a2 = sp + 160;
    f12 = f21;
    {v1=FBITS(v[17]);}
    ST32(sp+176, FBITS(f6));
    s7 = s7 + v0;
    ST32(sp+180, FBITS(f5));
    ST32(sp+184, FBITS(f4));
    ST32(sp+192, FBITS(f6));
    ST32(sp+196, FBITS(f5));
    ST32(sp+200, FBITS(f4));
    ST32(sp+208, FBITS(f2));
    ST32(sp+212, v1);
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    ST32(sp+216, FBITS(f3));
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[32]));ST32(a_+4,FBITS(v[33]));ST32(a_+8,FBITS(v[34]));ST32(a_+12,FBITS(v[35]));}
    ST32(sp+224, FBITS(f2));
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, v1);
    ST32(sp+168, FBITS(f3));
    ST32(sp+228, v1);
    ST32(sp+232, FBITS(f3));
    { rv_t r_ = func_088EB7DC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968A58;
L_08968A58:;
    {u32 a_=sp+(624);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    goto L_08968A78;
L_08968A78:;
    s1 = s1 + 1;
    v0 = s1 < 0x2u;
    cnd_ = v0 != 0;
    s2 = s2 + 4;
    if (cnd_) { goto L_08968860; }
    goto L_08968A88;
L_08968A88:;
    s4 = s4 + 1;
    v0 = s4 < 0x14u;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0896884C; }
    goto L_08968A98;
L_08968A98:;
    s0 = sp + 240;
    a1 = D_08ADB2C4 - (-19772);
    a1 = a1 - 19772;
    t0 = s7 + 0;
    a2 = 128;
    a3 = 1;
    a0 = s0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968AB8;
L_08968AB8:;
    a0 = D_08ADB2D8 - (-19752);
    a0 = a0 - 19752;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968AC4;
L_08968AC4:;
    f12 = BITSF(LD32(fp-7908));
    a3 = D_08C29E84 - (-24956);
    a0 = s0 + 0;
    a3 = a3 - 24956;
    t0 = v0 + 0;
    a1 = 10;
    a2 = 10;
    { rv_t r_ = func_0897CE90(a0, a1, a2, a3, t0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968AE4;
L_08968AE4:;
    goto L_08968AE8;
L_08968AE8:;
    sp = sp + 816;
    return (rv_t){ v0, v1, f0 };
L_08968B1C:;
    v0 = LD32(s2);
    v0 = s3 + v0;
    ST32(v0, 0);
    goto L_08968A78;
L_08968B2C:;
    v0 = a0 << 4;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0+52);
    goto L_0896868C;
L_08968B44:;
    a1 = 0 + 0;
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { u64 r_ = func_08969E90(a0, a1, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968B7C;
L_08968B7C:;
    v1 = LD32(s0);
    {u32 a_=sp+(736);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(592);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(576);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(560);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_08968578;
L_08968BB4:;
    s2 = sp + 80;
    goto L_08968BB8;
L_08968BB8:;
    s3 = sp + 96;
    goto L_08968710;
L_08968BC0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08968528; }
    goto L_08968BCC;
L_08968BCC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896852C; }
    goto L_08968BD8;
L_08968BD8:;
    goto L_08968538;
L_08968BE0:;
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(688);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(704);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(720);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(736);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { u64 r_ = func_08AA3390(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968C10;
L_08968C10:;
    a2 = v0 + 0;
    {u32 a_=sp+(560);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(576);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(592);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(624);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[100]=BITSF(LD32(a_+0));v[101]=BITSF(LD32(a_+4));v[102]=BITSF(LD32(a_+8));v[103]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[104]=BITSF(LD32(a_+0));v[105]=BITSF(LD32(a_+4));v[106]=BITSF(LD32(a_+8));v[107]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(672);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(688);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(704);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(720);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(736);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    goto L_089684D8;
L_08968C48:;
    { u64 r_ = func_0896A934(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968C50;
L_08968C50:;
    goto L_08968AE8;
}

/* 08968C58 */
rv_t func_08968C58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08968C58:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 984;
    s1 = a1 + 0;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968C7C;
L_08968C7C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    s2 = v0 + 0;
    func_08967DBC(a0, a1);
    goto L_08968C8C;
L_08968C8C:;
    v1 = LD32(s0+8);
    a1 = s1 + 0;
    ST32(s2+4, s1);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08968CBC; }
    goto L_08968CA0;
L_08968CA0:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08968CBC:;
    v1 = LD32(v1);
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968CCC;
L_08968CCC:;
    ST32(s2+8, v0);
    goto L_08968CA0;
}

/* 08968CD4 */
void func_08968CD4(u32 a0, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08968CD4:;
    sp = sp - 80;
    v1 = D_08B45AA8 - (23208);
    v0 = v1 + 23208;
    a1 = a0 + 136;
    a2 = sp + 0;
    f7 = BITSF(LD32(v1+23208));
    f8 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    s0 = a0 + 0;
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f2));
    ST32(sp, FBITS(f7));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+32, FBITS(f8));
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968D40;
L_08968D40:;
    v0 = 999;
    f1 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+32));
    v1 = s0 + 148;
    ST32(s0+104, v0);
    ST32(s0+148, FBITS(f1));
    ST32(v1+8, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    sp = sp + 80;
    return;
}

/* 08968D74 */
rv_t func_08968D74(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[736] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 736);
L_08968D74:;
    sp = sp - 736;
    v1 = 0 + 0;
    s6 = a2 + 0;
    s4 = a1 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_08968E2C; }
    goto L_08968DC8;
L_08968DC8:;
    s1 = sp + 16;
    a1 = sp + 0;
    a2 = s1 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08968DD8;
L_08968DD8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08968E2C; }
    goto L_08968DE0;
L_08968DE0:;
    f0 = BITSF(LD32(s2+80));
    f22 = BITSF(0);
    fcc = FCMP(f22, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = D_08AEE124 - (-7900); goto L_08968E70; }
    goto L_08968DF8;
L_08968DF8:;
    cnd_ = s4 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_08968E14; }
    goto L_08968E00;
L_08968E00:;
    f1 = BITSF(LD32(sp+8));
    ST32(s4, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(s4+8, FBITS(f1));
    ST32(s4+4, FBITS(f0));
    goto L_08968E14;
L_08968E14:;
    cnd_ = s6 == 0;
    v0 = LD32(s2+104);
    if (cnd_) { goto L_08968E24; }
    goto L_08968E1C;
L_08968E1C:;
    ST32(s6, v0);
    v0 = LD32(s2+104);
    goto L_08968E24;
L_08968E24:;
    v0 = v0 ^ 0x3e7;
    v1 = 0 < v0;
    goto L_08968E2C;
L_08968E2C:;
    v0 = v1 + 0;
    sp = sp + 736;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
L_08968E70:;
    f0 = BITSF(LD32(v1-7900));
    f1 = BITSF(LD32(s2+64));
    v0 = D_08AEE128 - (-7896);
    f2 = BITSF(LD32(v0-7896));
    f21 = f1 * f0;
    v0 = D_08AEE120 - (-7904);
    f0 = BITSF(LD32(v0-7904));
    fcc = FCMP(f2, f21, 14);
    cnd_ = fcc;
    ST32(s2+80, FBITS(f0));
    if (cnd_) { goto L_08968EA0; }
    goto L_08968E9C;
L_08968E9C:;
    f21 = f2;
    goto L_08968EA0;
L_08968EA0:;
    s7 = D_08AEE12C - (-7892);
    f20 = BITSF(LD32(s7-7892));
    s5 = s2 + 148;
    f4 = BITSF(LD32(s2+148));
    f0 = f21 * f20;
    f5 = BITSF(LD32(s5+4));
    f6 = BITSF(LD32(s5+8));
    f12 = BITSF(LD32(sp+24));
    f10 = BITSF(LD32(sp+36));
    f11 = BITSF(LD32(sp+48));
    f13 = f12 * f0;
    f14 = f10 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f6 = f6 * f0;
    s3 = s2 + 136;
    f0 = f11 * f0;
    f7 = BITSF(LD32(s2+136));
    f8 = BITSF(LD32(s3+4));
    f9 = BITSF(LD32(s3+8));
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f3 = BITSF(LD32(sp+8));
    f7 = f7 + f4;
    f8 = f8 + f5;
    f4 = f1 + f12;
    f5 = f2 + f10;
    f9 = f9 + f6;
    f1 = f1 + f13;
    f6 = f3 + f11;
    f2 = f2 + f14;
    f3 = f3 + f0;
    a0 = D_08ADB2E8 - (-19736);
    a0 = a0 - 19736;
    ST32(sp+80, FBITS(f1));
    fp = sp + 112;
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f3));
    ST32(sp+96, FBITS(f7));
    ST32(sp+112, FBITS(f4));
    ST32(sp+116, FBITS(f5));
    ST32(sp+120, FBITS(f6));
    ST32(sp+100, FBITS(f8));
    ST32(sp+104, FBITS(f9));
    ST32(sp+64, FBITS(f12));
    ST32(sp+68, FBITS(f10));
    ST32(sp+72, FBITS(f11));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08968F60;
L_08968F60:;
    a3 = v0 + 0;
    v0 = D_08AEE130 - (-7888);
    f12 = BITSF(LD32(v0-7888));
    a2 = D_08C29E54 - (-25004);
    a2 = a2 - 25004;
    a0 = sp + 0;
    a1 = fp + 0;
    ({ v[0]=vr0;func_0897BFA8(a0, a1, a2, a3, f12); vr0=v[0];});
    goto L_08968F80;
L_08968F80:;
    f3 = BITSF(LD32(sp+96));
    f4 = BITSF(LD32(sp+100));
    f5 = BITSF(LD32(sp+104));
    f2 = BITSF(LD32(sp+80));
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+88));
    f2 = f2 - f3;
    f1 = f1 - f4;
    f0 = f0 - f5;
    v0 = LD_U8(s2+93);
    f6 = f2 * f20;
    f7 = f1 * f20;
    f20 = f0 * f20;
    ST32(sp+112, FBITS(f2));
    f3 = f6 + f3;
    f4 = f7 + f4;
    f5 = f20 + f5;
    ST32(sp+116, FBITS(f1));
    ST32(sp+128, FBITS(f3));
    ST32(sp+132, FBITS(f4));
    ST32(sp+136, FBITS(f5));
    ST32(sp+120, FBITS(f0));
    ST32(sp+176, FBITS(f2));
    ST32(sp+180, FBITS(f1));
    ST32(sp+184, FBITS(f0));
    ST32(sp+160, FBITS(f6));
    ST32(sp+164, FBITS(f7));
    ST32(sp+168, FBITS(f20));
    ST32(sp+144, FBITS(f3));
    ST32(sp+148, FBITS(f4));
    cnd_ = v0 == 0;
    ST32(sp+152, FBITS(f5));
    if (cnd_) { goto L_089699B8; }
    goto L_08969000;
L_08969000:;
    a0 = s2 + 0;
    f0 = func_08969A68(a0);
    goto L_08969008;
L_08969008:;
    v0 = LD32(sp+112);
    {u32 a_=sp+(544);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+116);
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+120);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    v0 = D_08AEE134 - (-7884);
    f4 = f22;
    fcc = FCMP(f1, f22, 2);
    f1 = BITSF(LD32(v0-7884));
    s0 = sp + 208;
    cnd_ = fcc;
    f22 = f0 * f1;
    if (cnd_) { goto L_0896908C; }
    goto L_0896904C;
L_0896904C:;
    {float s0=vr0;float d0=sqrtf(s0);v[4]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v1=FBITS(v[4]);}
    f4 = BITSF(v1);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(vr0);}
    {v0=FBITS(v[1]);}
    ST32(sp+176, v1);
    ST32(sp+180, v0);
    ST32(sp+184, FBITS(f3));
    ST32(sp+112, v1);
    ST32(sp+116, v0);
    ST32(sp+120, FBITS(f3));
    goto L_0896908C;
L_0896908C:;
    f20 = BITSF(LD32(s7-7892));
    a0 = s2 + 0;
    f20 = f4 * f20;
    f0 = func_08969A68(a0);
    goto L_0896909C;
L_0896909C:;
    f0 = f0 + f0;
    ST32(s0, FBITS(f21));
    f20 = f20 + f0;
    ST32(s0+4, FBITS(f22));
    goto L_089690AC;
L_089690AC:;
    ST32(s0+8, FBITS(f20));
    a0 = s1 + 0;
    a1 = fp + 0;
    v0 = LD32(sp+208);
    v1 = LD32(sp+212);
    s7 = sp + 272;
    ST32(sp+192, v0);
    ST32(sp+196, v1);
    v0 = LD32(sp+216);
    v1 = LD32(sp+220);
    ST32(sp+200, v0);
    ST32(sp+204, v1);
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_088F82FC(a0, a1); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089690E0;
L_089690E0:;
    t0 = sp + 304;
    f0 = BITSF(LD32(sp+16));
    a0 = LD32(sp+220);
    f1 = BITSF(LD32(sp+48));
    ST32(sp+208, FBITS(f0));
    a3 = sp + 224;
    f0 = BITSF(LD32(sp+28));
    a2 = LD32(sp+208);
    ST32(sp+236, a0);
    ST32(sp+212, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    a1 = LD32(sp+212);
    ST32(sp+224, a2);
    ST32(sp+216, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    v0 = LD32(sp+216);
    ST32(sp+228, a1);
    ST32(sp+208, FBITS(f0));
    f0 = BITSF(LD32(sp+32));
    v1 = LD32(sp+208);
    ST32(sp+232, v0);
    ST32(sp+212, FBITS(f0));
    f0 = BITSF(LD32(sp+44));
    v0 = LD32(sp+212);
    ST32(sp+240, v1);
    ST32(sp+216, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    v1 = LD32(sp+216);
    ST32(sp+244, v0);
    ST32(sp+208, FBITS(f0));
    f0 = BITSF(LD32(sp+36));
    v0 = LD32(sp+208);
    ST32(sp+248, v1);
    ST32(sp+212, FBITS(f0));
    ST32(sp+216, FBITS(f1));
    ST32(sp+252, a0);
    ST32(sp+256, v0);
    v1 = LD32(sp+212);
    v0 = LD32(sp+216);
    ST32(sp+268, a0);
    ST32(sp+260, v1);
    ST32(sp+264, v0);
    v1 = LD32(sp+196);
    v0 = LD32(sp+192);
    ST32(sp+276, v1);
    ST32(sp+272, v0);
    v1 = LD32(sp+204);
    v0 = LD32(sp+200);
    ST32(sp+284, v1);
    ST32(sp+280, v0);
    v1 = LD32(sp+132);
    v0 = LD32(sp+128);
    ST32(sp+292, v1);
    ST32(sp+288, v0);
    v1 = LD32(sp+140);
    v0 = LD32(sp+136);
    ST32(sp+300, v1);
    ST32(sp+296, v0);
    goto L_089691C8;
L_089691C8:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    a1 = LD32(a3+12);
    ST32(t0, v0);
    a3 = a3 + 16;
    t0 = t0 + 16;
    ST32(t0-12, v1);
    ST32(t0-8, a0);
    cnd_ = a3 != s7;
    ST32(t0-4, a1);
    if (cnd_) { goto L_089691C8; }
    goto L_089691F4;
L_089691F4:;
    f1 = BITSF(LD32(sp+72));
    f0 = BITSF(LD32(sp+8));
    f2 = BITSF(LD32(sp+64));
    f3 = BITSF(LD32(sp+68));
    ST32(s3+8, FBITS(f0));
    s1 = D_08C2B3A4 - (-19548);
    v0 = 999;
    f0 = BITSF(LD32(sp+4));
    ST32(s5+8, FBITS(f1));
    v1 = s1 - 19548;
    s0 = 0 + 0;
    f1 = BITSF(LD32(sp));
    a2 = LD32(s2+100);
    ST32(s3+4, FBITS(f0));
    ST32(s2+136, FBITS(f1));
    ST32(s2+148, FBITS(f2));
    cnd_ = a2 == v0;
    ST32(s5+4, FBITS(f3));
    if (cnd_) { goto L_08969990; }
    goto L_0896923C;
L_0896923C:;
    v0 = LD32(v1+4);
    v1 = LD32(s1-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0896928C; }
    goto L_08969260;
L_08969260:;
    a0 = LD32(a1);
    goto L_08969264;
L_08969264:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08969998; }
    goto L_0896927C;
L_0896927C:;
    a1 = LD32(a1+4);
    goto L_08969280;
L_08969280:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08969264; }
    goto L_08969288;
L_08969288:;
    s0 = 0 + 0;
    goto L_0896928C;
L_0896928C:;
    cnd_ = s0 == 0;
    s5 = 4;
    if (cnd_) { goto L_089692A8; }
    goto L_08969294;
L_08969294:;
    v1 = LD32(s0);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089692A4;
L_089692A4:;
    s5 = v0 + 0;
    goto L_089692A8;
L_089692A8:;
    cnd_ = s0 == 0;
    if (cnd_) { a2 = LD32(s2+100); goto L_089698D8; }
    goto L_089692B0;
L_089692B0:;
    s1 = D_08C2C200 - (-15872);
    goto L_089692B4;
L_089692B4:;
    s1 = s1 - 15872;
    s0 = s1 + 16;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    s3 = sp + 352;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f0 = ({ v[0]=vr0;__auto_type vr_t_ = func_08ABFBA4(a0, 0, 0, 0); vr0=v[0];vr_t_; });
    goto L_089692D4;
L_089692D4:;
    v0 = LD32(s1+16);
    ST32(sp+352, s0);
    ST32(sp+356, v0);
    cnd_ = v0 == 0;
    ST32(sp+360, 0);
    if (cnd_) { goto L_08969310; }
    goto L_089692E8;
L_089692E8:;
    v0 = LD32(s3+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+4); goto L_089698CC; }
    goto L_089692F4;
L_089692F4:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(s3+8, v0);
    if (cnd_) { goto L_08969310; }
    goto L_08969300;
L_08969300:;
    v0 = LD32(s3+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(s3+4, v1);
    if (cnd_) { goto L_089692E8; }
    goto L_08969310;
L_08969310:;
    a0 = LD32(sp+360);
    cnd_ = a0 == 0;
    v0 = D_08AEE12C - (-7892);
    if (cnd_) { goto L_089698C4; }
    goto L_0896931C;
L_0896931C:;
    f21 = BITSF(LD32(v0-7892));
    v1 = D_08AEE128 - (-7896);
    v0 = D_08AEE13C - (-7876);
    f22 = BITSF(LD32(v1-7896));
    f23 = BITSF(LD32(v0-7876));
    s1 = D_08C286E0 - (-31008);
    s0 = LD32(a0);
    goto L_08969338;
L_08969338:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08969358; }
    goto L_08969340;
L_08969340:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08969358; }
    goto L_0896934C;
L_0896934C:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089693F8; }
    goto L_08969358;
L_08969358:;
    a0 = s3 + 0;
    func_08ABFDD0(a0);
    goto L_08969360;
L_08969360:;
    a0 = LD32(sp+360);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08969338; }
    goto L_0896936C;
L_0896936C:;
    v0 = LD_U8(s1-31008);
    cnd_ = v0 != 0;
    v1 = D_08ADDB2C - (-9428);
    if (cnd_) { goto L_089693A4; }
    goto L_08969378;
L_08969378:;
    a0 = LD32(sp+352);
    goto L_0896937C;
L_0896937C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08969394; }
    goto L_0896938C;
L_0896938C:;
    v1 = 0 + 0;
    goto L_08968E2C;
L_08969394:;
    func_08ABFCF4(a0, 0, 0, 0);
    goto L_0896939C;
L_0896939C:;
    v1 = 0 + 0;
    goto L_08968E2C;
L_089693A4:;
    f12 = BITSF(LD32(v1-9428));
    v1 = 143;
    f0 = BITSF(v1);
    v0 = D_08AEE138 - (-7880);
    f3 = BITSF(LD32(v0-7880));
    v0 = 255;
    f2 = (float)(s32)FBITS(f0);
    f0 = BITSF(v0);
    a0 = s7 + 0;
    a1 = sp + 528;
    f1 = (float)(s32)FBITS(f0);
    f2 = f2 * f3;
    a2 = 0 + 0;
    ST32(sp+536, 0);
    f1 = f1 * f3;
    ST32(sp+540, FBITS(f2));
    ST32(sp+528, FBITS(f1));
    ST32(sp+532, FBITS(f1));
    f0 = ({ v[0]=vr0;__auto_type vr_t_ = func_0897C55C(a0, a1, a2, f12); vr0=v[0];vr_t_; });
    goto L_089693F0;
L_089693F0:;
    a0 = LD32(sp+352);
    goto L_0896937C;
L_089693F8:;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969400;
L_08969400:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08969358; }
    goto L_08969408;
L_08969408:;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969410;
L_08969410:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08969358; }
    goto L_0896941C;
L_0896941C:;
    a1 = LD32(s0);
    f0 = BITSF(0);
    v0 = LD32(a1-12);
    v0 = s0 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_08969358; }
    goto L_08969440;
L_08969440:;
    v1 = LD32(a1-16);
    a0 = s0 + v1;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08969358; }
    goto L_08969458;
L_08969458:;
    v1 = LD32(a0+4);
    v0 = LD32(s2+100);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08969358; }
    goto L_08969468;
L_08969468:;
    a0 = LD_U16(a0+8);
    v1 = a0 ^ 0x8005;
    v0 = a0 ^ 0x8003;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    v1 = a0 ^ 0x8004;
    if (cnd_) { goto L_089694BC; }
    goto L_08969488;
L_08969488:;
    v0 = a0 ^ 0x8014;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    v1 = v1 | v0;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a1+52); goto L_089694C0; }
    goto L_089694A0;
L_089694A0:;
    v1 = a0 ^ 0x801e;
    v0 = a0 ^ 0x801d;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089694E4; }
    goto L_089694BC;
L_089694BC:;
    v0 = LD32(a1+52);
    goto L_089694C0;
L_089694C0:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089694C8;
L_089694C8:;
    v1 = v0 ^ s5;
    v0 = v0 ^ 0x4;
    v0 = 0 < v0;
    v1 = v1 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08969358; }
    goto L_089694E4;
L_089694E4:;
    a0 = s0 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08A05694(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089694EC;
L_089694EC:;
    v1 = LD32(s0);
    fp = LD32(v0+16);
    f20 = BITSF(LD32(s2+64));
    a0 = LD32(v1-12);
    f0 = BITSF(LD32(fp+28));
    a0 = s0 + a0;
    v1 = LD32(a0);
    f20 = f20 + f0;
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f20 * f20;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969518;
L_08969518:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+80));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+88));
    {u32 a_=sp+(576);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f3 = f3 - f1;
    f4 = f4 - f0;
    v0 = FBITS(f2);
    {vr0=BITSF(v0);}
    v1 = FBITS(f3);
    v0 = FBITS(f4);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f0 = BITSF(v1);
    ST32(sp+176, FBITS(f2));
    fcc = FCMP(f0, f20, 14);
    ST32(sp+180, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+184, FBITS(f4));
    if (cnd_) { goto L_08969358; }
    goto L_08969578;
L_08969578:;
    v0 = LD32(s0);
    {u32 a_=sp+(592);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f21);
    a0 = LD32(v0-12);
    {vr0=BITSF(v1);}
    {float s0=vr0;float s1=vr0;float s2=vr0;float s3=vr0;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089695AC;
L_089695AC:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    ST32(sp+208, FBITS(f0));
    ST32(sp+212, FBITS(f1));
    ST32(sp+216, FBITS(f2));
    v1 = LD32(sp+208);
    a1 = LD32(sp+220);
    a0 = LD32(sp+212);
    ST32(sp+368, v1);
    v1 = LD32(sp+216);
    ST32(sp+372, a0);
    ST32(sp+376, v1);
    ST32(sp+380, a1);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+28));
    ST32(sp+208, FBITS(f0));
    ST32(sp+212, FBITS(f1));
    ST32(sp+216, FBITS(f2));
    v1 = LD32(sp+208);
    a0 = LD32(sp+212);
    ST32(sp+396, a1);
    ST32(sp+384, v1);
    v1 = LD32(sp+216);
    ST32(sp+388, a0);
    ST32(sp+392, v1);
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+20));
    ST32(sp+208, FBITS(f1));
    v0 = LD32(sp+208);
    ST32(sp+212, FBITS(f0));
    ST32(sp+216, FBITS(f2));
    ST32(sp+400, v0);
    v0 = LD32(sp+212);
    v1 = LD32(sp+216);
    ST32(sp+412, a1);
    ST32(sp+404, v0);
    ST32(sp+408, v1);
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969668;
L_08969668:;
    f0 = BITSF(LD32(v0));
    a0 = fp + 4;
    {u32 a_=sp+(592);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+208, FBITS(f0));
    {u32 a_=sp+(656);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    f0 = BITSF(LD32(v0+4));
    a3 = sp + 448;
    a2 = sp + 368;
    ST32(sp+212, FBITS(f0));
    f0 = BITSF(LD32(v0+8));
    v0 = LD32(sp+508);
    ST32(sp+216, FBITS(f0));
    f5 = BITSF(LD32(fp+4));
    f2 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0+16));
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(a0+20));
    f2 = f2 - f5;
    f1 = f1 - f4;
    f0 = f0 - f3;
    ST32(sp+428, v0);
    ST32(sp+496, FBITS(f2));
    ST32(sp+500, FBITS(f1));
    ST32(sp+504, FBITS(f0));
    v0 = LD32(sp+496);
    v1 = LD32(sp+500);
    ST32(sp+416, v0);
    v0 = LD32(sp+504);
    ST32(sp+420, v1);
    ST32(sp+424, v0);
    {u32 a_=sp+(416);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr0=d0;v[1]=d1;v[2]=d2;}
    {u32 a_=sp+(416);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f2 = BITSF(LD32(fp+4));
    f1 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a0+20));
    f3 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+12));
    f4 = BITSF(LD32(a0+16));
    f2 = f2 + f1;
    f3 = f3 + f0;
    f4 = f4 + f5;
    f2 = f2 * f21;
    f3 = f3 * f21;
    f4 = f4 * f21;
    ST32(sp+160, FBITS(f2));
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+512, FBITS(f2));
    {u32 a_=sp+(384);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(608);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+516, FBITS(f3));
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[52]=d0;v[53]=d1;v[54]=d2;v[55]=d3;}
    {u32 a_=sp+(400);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(sp+520, FBITS(f4));
    {u32 a_=sp+(624);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[4];float s1=v[5];float s2=v[6];float s3=v[7];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    {u32 a_=sp+(512);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float s0=v[52];float s1=v[53];float s2=v[54];float s3=v[55];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;vr0=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(496);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+496);
    v1 = LD32(sp+500);
    {u32 a_=sp+(208);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+432, v0);
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(sp+436, v1);
    v0 = LD32(sp+504);
    v1 = LD32(sp+508);
    ST32(sp+164, FBITS(f3));
    ST32(sp+440, v0);
    ST32(sp+444, v1);
    {u32 a_=sp+(432);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr0=d0;v[1]=d1;v[2]=d2;}
    ST32(sp+168, FBITS(f4));
    {u32 a_=sp+(432);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_089697A8;
L_089697A8:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(a3, v0);
    a2 = a2 + 16;
    a3 = a3 + 16;
    v0 = sp + 416;
    ST32(a3-12, v1);
    ST32(a3-8, a0);
    cnd_ = a2 != v0;
    ST32(a3-4, a1);
    if (cnd_) { goto L_089697A8; }
    goto L_089697D8;
L_089697D8:;
    v0 = LD_U8(s1-31008);
    cnd_ = v0 != 0;
    v1 = D_08ADDB2C - (-9428);
    if (cnd_) { goto L_08969898; }
    goto L_089697E4;
L_089697E4:;
    a1 = sp + 416;
    goto L_089697E8;
L_089697E8:;
    a0 = s7 + 0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_08AB3C24(a0, a1); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089697F0;
L_089697F0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08969358; }
    goto L_089697F8;
L_089697F8:;
    cnd_ = s4 == 0;
    f0 = BITSF(LD32(sp+80));
    if (cnd_) { goto L_08969814; }
    goto L_08969800;
L_08969800:;
    f1 = BITSF(LD32(sp+88));
    ST32(s4, FBITS(f0));
    f0 = BITSF(LD32(sp+84));
    ST32(s4+8, FBITS(f1));
    ST32(s4+4, FBITS(f0));
    goto L_08969814;
L_08969814:;
    cnd_ = s6 == 0;
    v0 = D_08C286E0 - (-31008);
    if (cnd_) { goto L_08969834; }
    goto L_0896981C;
L_0896981C:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    ST32(s6, v0);
    v0 = D_08C286E0 - (-31008);
    goto L_08969834;
L_08969834:;
    v1 = LD_U8(v0-31008);
    cnd_ = v1 != 0;
    v0 = D_08ADDB2C - (-9428);
    if (cnd_) { goto L_0896986C; }
    goto L_08969840;
L_08969840:;
    a0 = LD32(sp+352);
    goto L_08969844;
L_08969844:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0896985C; }
    goto L_08969854;
L_08969854:;
    v1 = 1;
    goto L_08968E2C;
L_0896985C:;
    func_08ABFCF4(a0, 0, 0, 0);
    goto L_08969864;
L_08969864:;
    v1 = 1;
    goto L_08968E2C;
L_0896986C:;
    f12 = BITSF(LD32(v0-9428));
    a0 = s7 + 0;
    a1 = sp + 528;
    a2 = 0 + 0;
    ST32(sp+528, FBITS(f22));
    ST32(sp+540, FBITS(f23));
    ST32(sp+536, 0);
    ST32(sp+532, 0);
    f0 = ({ v[0]=vr0;__auto_type vr_t_ = func_0897C55C(a0, a1, a2, f12); vr0=v[0];vr_t_; });
    goto L_08969890;
L_08969890:;
    a0 = LD32(sp+352);
    goto L_08969844;
L_08969898:;
    f12 = BITSF(LD32(v1-9428));
    a0 = sp + 416;
    a1 = sp + 528;
    a2 = 0 + 0;
    ST32(sp+536, FBITS(f22));
    ST32(sp+532, FBITS(f22));
    ST32(sp+528, 0);
    ST32(sp+540, FBITS(f23));
    f0 = ({ v[0]=vr0;__auto_type vr_t_ = func_0897C55C(a0, a1, a2, f12); vr0=v[0];vr_t_; });
    goto L_089698BC;
L_089698BC:;
    a1 = sp + 416;
    goto L_089697E8;
L_089698C4:;
    s1 = D_08C286E0 - (-31008);
    goto L_0896936C;
L_089698CC:;
    v1 = LD32(v0+8);
    ST32(s3+8, v1);
    goto L_08969310;
L_089698D8:;
    a0 = D_08C2C0A0 - (-16224);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 16224;
    if (cnd_) { goto L_089692B0; }
    goto L_089698E8;
L_089698E8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-16224);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08969938; }
    goto L_0896990C;
L_0896990C:;
    a0 = LD32(a1);
    goto L_08969910;
L_08969910:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_08969970; }
    goto L_08969928;
L_08969928:;
    a1 = LD32(a1+4);
    goto L_0896992C;
L_0896992C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_08969910; }
    goto L_08969934;
L_08969934:;
    v1 = 0 + 0;
    goto L_08969938;
L_08969938:;
    cnd_ = v1 == 0;
    a0 = s1 - 19548;
    if (cnd_) { goto L_089692B0; }
    goto L_08969940;
L_08969940:;
    a1 = LD32(v1+104);
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896994C;
L_0896994C:;
    cnd_ = v0 == 0;
    s5 = 4;
    if (cnd_) { goto L_089692B0; }
    goto L_08969954;
L_08969954:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    s1 = D_08C2C200 - (-15872);
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969968;
L_08969968:;
    s5 = v0 + 0;
    goto L_089692B4;
L_08969970:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08969928; }
    goto L_0896997C;
L_0896997C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896992C; }
    goto L_08969988;
L_08969988:;
    goto L_08969938;
L_08969990:;
    s5 = 4;
    goto L_089692A8;
L_08969998:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0896927C; }
    goto L_089699A4;
L_089699A4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08969280; }
    goto L_089699B0;
L_089699B0:;
    goto L_0896928C;
L_089699B8:;
    a0 = s2 + 0;
    f0 = func_08969A68(a0);
    goto L_089699C0;
L_089699C0:;
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    {u32 a_=sp+(560);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = LD32(sp+120);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v1=FBITS(vr0);}
    f1 = BITSF(v1);
    v0 = D_08AEE134 - (-7884);
    f4 = f22;
    fcc = FCMP(f1, f22, 2);
    f1 = BITSF(LD32(v0-7884));
    s0 = sp + 208;
    cnd_ = fcc;
    f22 = f0 * f1;
    if (cnd_) { goto L_08969A44; }
    goto L_08969A04;
L_08969A04:;
    {float s0=vr0;float d0=sqrtf(s0);v[4]=d0;}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[8]=(float)1;v[9]=(float)1;v[10]=(float)1;v[11]=(float)1;}
    {v0=FBITS(v[4]);}
    f4 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0/t0;vr0=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(vr0);}
    {v1=FBITS(v[1]);}
    ST32(sp+176, v0);
    ST32(sp+180, v1);
    ST32(sp+184, FBITS(f3));
    ST32(sp+112, v0);
    ST32(sp+116, v1);
    ST32(sp+120, FBITS(f3));
    goto L_08969A44;
L_08969A44:;
    f20 = BITSF(LD32(s7-7892));
    a0 = s2 + 0;
    f20 = f4 * f20;
    f0 = func_08969A68(a0);
    goto L_08969A54;
L_08969A54:;
    f0 = f0 + f0;
    ST32(s0, FBITS(f22));
    f20 = f20 + f0;
    ST32(s0+4, FBITS(f21));
    goto L_089690AC;
    v[0]=vr0;
}

/* 08969A68 */
float func_08969A68(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
L_08969A68:;
    v0 = D_08B1B7DC - (-18468);
    f1 = BITSF(LD32(v0-18468));
    f0 = BITSF(LD32(a0+892));
    f0 = f0 / f1;
    return f0;
}

/* 08969A7C */
void func_08969A7C(u32 a0, u32 a1, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08969A7C:;
    sp = sp - 144;
    a2 = sp + 16;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969AA0;
L_08969AA0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08969B2C; }
    goto L_08969AA8;
L_08969AA8:;
    f3 = BITSF(LD32(s0+64));
    f5 = BITSF(LD32(sp+24));
    f10 = BITSF(LD32(sp+36));
    f11 = BITSF(LD32(sp+48));
    f6 = f5 * f3;
    v0 = D_08AEE140 - (-7872);
    f8 = f11 * f3;
    f3 = f10 * f3;
    f1 = BITSF(LD32(v0-7872));
    f4 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+4));
    f7 = f6 * f1;
    f9 = f8 * f1;
    f1 = f3 * f1;
    f0 = BITSF(LD32(sp+8));
    f4 = f4 + f7;
    ST32(sp+64, FBITS(f5));
    f2 = f2 + f1;
    f0 = f0 + f9;
    ST32(s1, FBITS(f4));
    ST32(s1+8, FBITS(f0));
    ST32(s1+4, FBITS(f2));
    ST32(sp+72, FBITS(f11));
    ST32(sp+68, FBITS(f10));
    ST32(sp+112, FBITS(f6));
    ST32(sp+116, FBITS(f3));
    ST32(sp+120, FBITS(f8));
    ST32(sp+96, FBITS(f7));
    ST32(sp+100, FBITS(f1));
    ST32(sp+104, FBITS(f9));
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f2));
    ST32(sp+88, FBITS(f0));
    goto L_08969B2C;
L_08969B2C:;
    sp = sp + 144;
    return;
}

/* 08969B3C */
u32 func_08969B3C(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08969B3C:;
    sp = sp - 96;
    a1 = sp + 16;
    a2 = sp + 20;
    s2 = D_08AEE148 - (-7864);
    s3 = sp + 0;
    s1 = D_08AEE144 - (-7868);
    f20 = BITSF(0);
    f3 = BITSF(LD32(s1-7868));
    f1 = BITSF(LD32(a0+924));
    f4 = BITSF(LD32(a0+932));
    f0 = BITSF(LD32(a0+920));
    f2 = BITSF(LD32(a0+928));
    a0 = sp + 12;
    ST32(sp+4, FBITS(f1));
    ST32(sp, FBITS(f0));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    ST32(sp+16, FBITS(f20));
    f0 = func_0896AA8C(a0, a1, a2);
    goto L_08969BA8;
L_08969BA8:;
    f1 = BITSF(LD32(s2-7864));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    s4 = D_08AEE14C - (-7860);
    if (cnd_) { goto L_08969CF4; }
    goto L_08969BC0;
L_08969BC0:;
    f0 = BITSF(LD32(s4-7860));
    f0 = f1 + f0;
    goto L_08969BC8;
L_08969BC8:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s1-7868));
    a0 = s3 + 0;
    v0 = FBITS(f1);
    a1 = sp + 24;
    a2 = sp + 28;
    ST32(sp+28, FBITS(f0));
    s0 = v0 << 8;
    ST32(sp+24, FBITS(f20));
    f0 = func_0896AA8C(a0, a1, a2);
    goto L_08969BF4;
L_08969BF4:;
    f1 = BITSF(LD32(s2-7864));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7860));
    if (cnd_) { goto L_08969CEC; }
    goto L_08969C0C;
L_08969C0C:;
    f0 = f1 + f0;
    goto L_08969C10;
L_08969C10:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s1-7868));
    a0 = s3 + 4;
    v0 = FBITS(f1);
    a1 = sp + 32;
    a2 = sp + 36;
    s0 = s0 + v0;
    ST32(sp+36, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+32, FBITS(f20));
    f0 = func_0896AA8C(a0, a1, a2);
    goto L_08969C40;
L_08969C40:;
    f1 = BITSF(LD32(s2-7864));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7860));
    if (cnd_) { goto L_08969CE4; }
    goto L_08969C58;
L_08969C58:;
    f0 = f1 + f0;
    goto L_08969C5C;
L_08969C5C:;
    f1 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    f0 = BITSF(LD32(s1-7868));
    a0 = s3 + 8;
    v0 = FBITS(f1);
    a1 = sp + 40;
    a2 = sp + 44;
    s0 = s0 + v0;
    ST32(sp+44, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+40, FBITS(f20));
    f0 = func_0896AA8C(a0, a1, a2);
    goto L_08969C8C;
L_08969C8C:;
    f1 = BITSF(LD32(s2-7864));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s4-7860));
    if (cnd_) { goto L_08969CDC; }
    goto L_08969CA4;
L_08969CA4:;
    f0 = f1 + f0;
    goto L_08969CA8;
L_08969CA8:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    s0 = s0 + v0;
    v0 = s0 + 0;
    sp = sp + 96;
    return v0;
L_08969CDC:;
    f0 = f1 - f0;
    goto L_08969CA8;
L_08969CE4:;
    f0 = f1 - f0;
    goto L_08969C5C;
L_08969CEC:;
    f0 = f1 - f0;
    goto L_08969C10;
L_08969CF4:;
    f0 = BITSF(LD32(s4-7860));
    f0 = f1 - f0;
    goto L_08969BC8;
}

/* 08969D00 */
void func_08969D00(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_08969D00:;
    v0 = D_08B1B780 - (-18560);
    v1 = v0 - 18560;
    f0 = BITSF(LD32(v0-18560));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08B1B7DC - (-18468);
    f0 = f0 * f12;
    f1 = f1 * f12;
    v1 = v0 - 18468;
    ST32(a0+800, FBITS(f0));
    ST32(a0+804, FBITS(f1));
    f0 = BITSF(LD32(v0-18468));
    f1 = BITSF(LD32(v1+4));
    f0 = f0 * f12;
    f1 = f1 * f12;
    ST32(a0+892, FBITS(f0));
    ST32(a0+896, FBITS(f1));
    return;
}

/* 08969D44 */
void func_08969D44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
L_08969D44:;
    f0 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+12));
    v0 = a0 + 920;
    ST32(a0+920, FBITS(f0));
    v1 = a0 + 936;
    a2 = a0 + 952;
    ST32(v0+12, FBITS(f1));
    a3 = a0 + 968;
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1+12));
    ST32(a0+936, FBITS(f1));
    ST32(v1+12, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f3));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+12));
    f3 = BITSF(LD32(a1+8));
    ST32(a0+952, FBITS(f1));
    ST32(a2+12, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f3));
    f4 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    ST32(a0+968, FBITS(f0));
    ST32(a3+12, FBITS(f4));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    return;
}

/* 08969DD8 */
u64 func_08969DD8(u32 a0, u32 a1, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08969DD8:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    s1 = D_08AEE150 - (-7856);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08969E70; }
    goto L_08969DF4;
L_08969DF4:;
    f0 = BITSF(LD32(s1-7856));
    ST32(a0+72, 0);
    ST32(a0+68, FBITS(f0));
    goto L_08969E00;
L_08969E00:;
    a2 = 0 + 0;
    goto L_08969E04;
L_08969E04:;
    a1 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969E18;
L_08969E18:;
    a0 = 0x7f140000u;
    a0 = a0 | 0x1b2d;
    a1 = 0 + 0;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08969E28;
L_08969E28:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08969E4C; }
    goto L_08969E34;
L_08969E34:;
    f12 = BITSF(LD32(v0+84));
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969E3C;
L_08969E3C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08969E60; }
    goto L_08969E4C;
L_08969E4C:;
    goto L_08969E50;
L_08969E50:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08969E60:;
    f12 = BITSF(LD32(s1-7856));
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969E68;
L_08969E68:;
    goto L_08969E50;
L_08969E70:;
    f1 = BITSF(LD32(s1-7856));
    f0 = BITSF(LD32(a0+68));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+72, FBITS(f1)); goto L_08969E00; }
    goto L_08969E88;
L_08969E88:;
    a2 = 0 + 0;
    goto L_08969E04;
}

/* 08969E90 */
u64 func_08969E90(u32 a0, u32 a1, u32 t0, u32 t1, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08969E90:;
    sp = sp - 32;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08969F3C; }
    goto L_08969EA8;
L_08969EA8:;
    ST32(a0+68, 0);
    ST32(a0+72, 0);
    goto L_08969EB0;
L_08969EB0:;
    v1 = LD32(s0+96);
    goto L_08969EB4;
L_08969EB4:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = s0 + 96;
    if (cnd_) { goto L_08969EC8; }
    goto L_08969EC0;
L_08969EC0:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969EC8;
L_08969EC8:;
    a0 = s0 + 0;
    a2 = 0 + 0;
    a1 = sp + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969EE4;
L_08969EE4:;
    a0 = 0x636f0000u;
    a0 = a0 | 0x49e1;
    a1 = 0 + 0;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08969EF4;
L_08969EF4:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08969F18; }
    goto L_08969F00;
L_08969F00:;
    f12 = BITSF(LD32(v0+84));
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969F08;
L_08969F08:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    a2 = sp + 0;
    if (cnd_) { goto L_08969F28; }
    goto L_08969F18;
L_08969F18:;
    goto L_08969F1C;
L_08969F1C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08969F28:;
    v0 = D_08AEE158 - (-7848);
    f12 = BITSF(LD32(v0-7848));
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08969F34;
L_08969F34:;
    goto L_08969F1C;
L_08969F3C:;
    f1 = BITSF(LD32(a0+68));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+96); goto L_08969EB4; }
    goto L_08969F54;
L_08969F54:;
    v0 = D_08AEE154 - (-7852);
    f0 = BITSF(LD32(v0-7852));
    ST32(a0+72, FBITS(f0));
    goto L_08969EB0;
}

/* 08969F64 */
void func_08969F64(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08969F64:;
    sp = sp - 32;
    v0 = LD_U8(a0+92);
    cnd_ = v0 != 0;
    t0 = a0 + 0;
    if (cnd_) { goto L_0896A078; }
    goto L_08969F88;
L_08969F88:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(a0+76));
    f1 = BITSF(0);
    f0 = f0 - f2;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a0+76, FBITS(f0));
    if (cnd_) { goto L_0896A078; }
    goto L_08969FAC;
L_08969FAC:;
    a2 = D_08B25AC8 - (23240);
    v0 = LD32(a2+23240);
    a3 = a2 + 23240;
    a0 = LD32(a3+4);
    v1 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + v1;
    v0 = v0 + a0;
    v1 = (u32)((s32)v0 >> 16);
    a1 = v0 << 16;
    a0 = a0 + v0;
    a1 = a1 + v1;
    a1 = a1 + a0;
    v0 = a1 >> 1;
    f0 = BITSF(v0);
    v1 = D_08AEE160 - (-7840);
    v0 = D_08AEE164 - (-7836);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v1-7840));
    f2 = BITSF(LD32(v0-7836));
    v0 = D_08AEE168 - (-7832);
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-7832));
    v0 = D_08AEE15C - (-7844);
    a0 = a0 + a1;
    f0 = f0 - f2;
    ST32(a3+4, a0);
    f21 = f2;
    s0 = t0 + 0;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-7844));
    ST32(a2+23240, a1);
    s1 = 0 + 0;
    f20 = f1 + f2;
    ST32(t0+76, FBITS(f0));
    a0 = LD32(s0+720);
    goto L_0896A03C;
L_0896A03C:;
    s1 = s1 + 1;
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896A044;
L_0896A044:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+640); goto L_0896A058; }
    goto L_0896A04C;
L_0896A04C:;
    ST32(v0+8, FBITS(f20));
    ST32(v0+12, FBITS(f20));
    a0 = LD32(s0+640);
    goto L_0896A058;
L_0896A058:;
    s0 = s0 + 4;
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896A060;
L_0896A060:;
    cnd_ = v0 == 0;
    v1 = s1 < 0x14u;
    if (cnd_) { goto L_0896A070; }
    goto L_0896A068;
L_0896A068:;
    ST32(v0+8, FBITS(f21));
    ST32(v0+12, FBITS(f21));
    goto L_0896A070;
L_0896A070:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s0+720); goto L_0896A03C; }
    goto L_0896A078;
L_0896A078:;
    sp = sp + 32;
    return;
}

/* 0896A094 */
void func_0896A094(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0, f22 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_0896A094:;
    sp = sp - 304;
    a3 = D_08C286E8 - (-31000);
    s3 = a0 + 0;
    v0 = (u32)(s32)LD_S8(a3-31000);
    ST32(sp+156, a1);
    cnd_ = v0 != 0;
    a1 = a2 + 0;
    if (cnd_) { goto L_0896A108; }
    goto L_0896A0E4;
L_0896A0E4:;
    v0 = D_08AEE16C - (-7828);
    f0 = BITSF(LD32(v0-7828));
    a0 = D_08C286F0 - (-30992);
    v1 = a0 - 30992;
    v0 = 1;
    ST32(v1+8, FBITS(f0));
    ST32(a0-30992, 0);
    ST8(a3-31000, v0);
    ST32(v1+4, 0);
    goto L_0896A108;
L_0896A108:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+20));
    f2 = BITSF(LD32(a1+32));
    a2 = s3 + 108;
    a0 = sp + 16;
    ST32(sp+160, a2);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896A130;
L_0896A130:;
    t1 = s3 + 640;
    v1 = LD32(sp+156);
    v0 = LD32(sp+160);
    f10 = BITSF(LD32(s3+108));
    f8 = BITSF(LD32(v1));
    f7 = BITSF(LD32(v1+4));
    f9 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f4 = f8 - f10;
    v0 = LD32(s3+120);
    f5 = f7 - f0;
    f6 = f9 - f1;
    v1 = LD32(s3+124);
    a1 = LD32(s3+128);
    a2 = LD32(s3+132);
    t0 = LD_U8(s3+92);
    ST32(sp+32, v0);
    a3 = s3 + 720;
    v0 = D_08C286F0 - (-30992);
    a0 = v0 - 30992;
    ST32(sp+36, v1);
    t2 = s3 + 120;
    f12 = f8;
    ST32(sp+40, a1);
    f13 = f7;
    f14 = f9;
    ST32(sp+44, a2);
    ST32(sp+48, FBITS(f10));
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f1));
    {v[112]=BITSF(LD32(s3+(120)));}
    {v[113]=BITSF(LD32(s3+(124)));}
    {v[114]=BITSF(LD32(s3+(128)));}
    {v[115]=BITSF(LD32(s3+(132)));}
    {v[116]=BITSF(LD32(a0+(0)));}
    {v[117]=BITSF(LD32(a0+(4)));}
    {v[118]=BITSF(LD32(a0+(8)));}
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
    {ST32(sp+(64),FBITS(v[120]));}
    {ST32(sp+(68),FBITS(v[121]));}
    {ST32(sp+(72),FBITS(v[122]));}
    ST32(sp+96, t1);
    ST32(sp+100, a3);
    ST32(sp+80, FBITS(f4));
    ST32(sp+84, FBITS(f5));
    cnd_ = t0 == 0;
    ST32(sp+88, FBITS(f6));
    if (cnd_) { goto L_0896A2D4; }
    goto L_0896A224;
L_0896A224:;
    f1 = f4 * f4;
    f2 = f5 * f5;
    f3 = f6 * f6;
    a1 = D_08AEE170 - (-7824);
    f11 = BITSF(LD32(s3+892));
    f1 = f1 + f2;
    f0 = BITSF(LD32(a1-7824));
    ST32(sp+112, FBITS(f4));
    f1 = f1 + f3;
    f0 = f11 * f0;
    ST32(sp+116, FBITS(f5));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(sp+120, FBITS(f6));
    if (cnd_) { goto L_0896A444; }
    goto L_0896A260;
L_0896A260:;
    v1 = D_08AEE16C - (-7828);
    v0 = D_08AEE174 - (-7820);
    f0 = BITSF(LD32(v0-7820));
    f1 = BITSF(LD32(v1-7828));
    v0 = LD32(sp+20);
    v1 = LD32(sp+16);
    f1 = f1 - f0;
    {v[4]=BITSF(v1);}
    a0 = LD32(t2+12);
    {v[5]=BITSF(v0);}
    v1 = LD32(sp+24);
    v0 = LD32(sp+28);
    {v[6]=BITSF(v1);}
    v1 = LD32(s3+120);
    {v[7]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(t2+4);
    v1 = LD32(t2+8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {v[3]=BITSF(a0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = LD32(sp);
    if (cnd_) { goto L_0896A448; }
    goto L_0896A2D4;
L_0896A2D4:;
    a1 = LD32(s3+84);
    s4 = 0 + 0;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    v0 = s3 + v0;
    v1 = v0 + 160;
    ST32(v1+4, FBITS(f7));
    a0 = v0 + 400;
    ST32(v1+8, FBITS(f9));
    f0 = BITSF(LD32(sp+4));
    ST32(v0+160, FBITS(f8));
    ST32(a0+4, FBITS(f0));
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+8));
    ST32(v0+400, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    goto L_0896A318;
L_0896A318:;
    s0 = 0 + 0;
    s1 = s4 << 2;
    goto L_0896A320;
L_0896A320:;
    v1 = s0 << 2;
    cnd_ = s4 == a1;
    s2 = v1 + sp;
    if (cnd_) { goto L_0896A3E0; }
    goto L_0896A32C;
L_0896A32C:;
    v0 = LD32(s2+96);
    v0 = s1 + v0;
    ST32(v0, 0);
    goto L_0896A338;
L_0896A338:;
    s0 = s0 + 1;
    v0 = s0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s4 + 1; goto L_0896A350; }
    goto L_0896A348;
L_0896A348:;
    a1 = LD32(s3+84);
    goto L_0896A320;
L_0896A350:;
    v0 = s4 < 0x14u;
    cnd_ = v0 == 0;
    a0 = LD32(sp+156);
    if (cnd_) { goto L_0896A368; }
    goto L_0896A35C;
L_0896A35C:;
    a1 = LD32(s3+84);
    goto L_0896A318;
L_0896A364:;
    a0 = LD32(sp+156);
    goto L_0896A368;
L_0896A368:;
    f9 = BITSF(LD32(a0+8));
    f8 = BITSF(LD32(a0));
    f7 = BITSF(LD32(a0+4));
    goto L_0896A374;
L_0896A374:;
    v1 = LD32(sp+16);
    goto L_0896A378;
L_0896A378:;
    a0 = LD32(sp+20);
    a1 = LD32(sp+24);
    v0 = LD32(sp+28);
    a2 = LD32(sp+160);
    ST32(s3+108, FBITS(f8));
    ST32(a2+8, FBITS(f9));
    ST32(a2+4, FBITS(f7));
    ST32(s3+132, v0);
    ST32(s3+120, v1);
    ST32(s3+124, a0);
    ST32(s3+128, a1);
    sp = sp + 304;
    return;
L_0896A3E0:;
    v0 = LD32(s2+96);
    v0 = s1 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896A3F0;
L_0896A3F0:;
    a3 = v0 + 0;
    a2 = s3 + 800;
    v0 = s3 + 892;
    if (s0 != 0) a2 = v0;
    a0 = sp + 48;
    cnd_ = a3 == 0;
    a1 = sp + 64;
    if (cnd_) { goto L_0896A41C; }
    goto L_0896A40C;
L_0896A40C:;
    v0 = D_08AEE16C - (-7828);
    f0 = BITSF(LD32(v0-7828));
    ST32(a3+28, FBITS(f0));
    goto L_0896A338;
L_0896A41C:;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896A424;
L_0896A424:;
    a3 = v0 + 0;
    v0 = LD32(s2+96);
    a0 = 0 + 0;
    cnd_ = a3 == 0;
    v1 = s1 + v0;
    if (cnd_) { goto L_0896A43C; }
    goto L_0896A438;
L_0896A438:;
    a0 = LD32(a3+4);
    goto L_0896A43C;
L_0896A43C:;
    ST32(v1, a0);
    goto L_0896A338;
L_0896A444:;
    v0 = LD32(sp);
    goto L_0896A448;
L_0896A448:;
    v1 = LD32(sp+4);
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+64);
    {v[6]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    v0 = LD32(sp+68);
    v1 = LD32(sp+72);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {u32 a_=sp+(208);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v0=FBITS(v[4]);}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=v[0];float d0=(s0<-1?-1:(s0>1?1:s0));v[0]=d0;}
    v0 = D_08AEE16C - (-7828);
    f0 = BITSF(LD32(v0-7828));
    {float s0=v[0];float d0=asinf(s0)*0.63661977236f;v[0]=d0;}
    {v[4]=1.57079632679f;}
    a2 = D_08AEE178 - (-7816);
    f2 = BITSF(LD32(a2-7816));
    f4 = f0 / f11;
    {float s0=v[0];float d0=1.0f-s0;v[0]=d0;}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    f1 = f0 * f2;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a1-7824));
    if (cnd_) { goto L_0896A92C; }
    goto L_0896A4D8;
L_0896A4D8:;
    f0 = f1 + f0;
    goto L_0896A4DC;
L_0896A4DC:;
    a0 = LD32(sp+160);
    f0 = BITSF(F2I(f0, 1));
    {u32 a_=sp+(224);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    v0 = FBITS(f0);
    f2 = f13 - f2;
    f0 = f12 - f10;
    f3 = f14 - f3;
    a0 = FBITS(f2);
    v1 = FBITS(f0);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f3);
    {v[1]=BITSF(a0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+112, FBITS(f0));
    v1 = 1;
    if (v0 != 0) v1 = v0;
    ST32(sp+116, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    f1 = f4 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(sp+120, FBITS(f3));
    if (cnd_) { goto L_0896A920; }
    goto L_0896A550;
L_0896A550:;
    f0 = BITSF(LD32(a1-7824));
    f0 = f1 + f0;
    goto L_0896A558;
L_0896A558:;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    v0 = a0 < v1;
    if (v0 != 0) a0 = v1;
    f1 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0896A904; }
    goto L_0896A574;
L_0896A574:;
    v0 = D_08AEE16C - (-7828);
    f1 = BITSF(LD32(v0-7828));
    v0 = a0 < 0x14u;
    f22 = f1 / f0;
    cnd_ = v0 != 0;
    ST32(sp+144, FBITS(f22));
    if (cnd_) { goto L_0896A59C; }
    goto L_0896A58C;
L_0896A58C:;
    f0 = BITSF(LD32(a2-7816));
    f0 = f22 * f0;
    f0 = f1 - f0;
    ST32(sp+144, FBITS(f0));
    goto L_0896A59C;
L_0896A59C:;
    f0 = BITSF(LD32(sp+144));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v1 = LD32(sp+16);
    if (cnd_) { goto L_0896A378; }
    goto L_0896A5B0;
L_0896A5B0:;
    v1 = D_08AEE16C - (-7828);
    f0 = BITSF(LD32(v1-7828));
    a0 = sp + 144;
    a1 = sp + 148;
    a2 = sp + 152;
    ST32(sp+152, FBITS(f0));
    s4 = 0 + 0;
    s0 = 0 + 0;
    ST32(sp+148, 0);
    f0 = func_0896AA8C(a0, a1, a2);
    goto L_0896A5D8;
L_0896A5D8:;
    v1 = D_08AEE17C - (-7812);
    f6 = BITSF(LD32(sp+80));
    f5 = BITSF(LD32(sp+84));
    f4 = BITSF(LD32(sp+88));
    a2 = LD32(sp+160);
    f6 = f6 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f2 = BITSF(LD32(a2+4));
    f3 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(s3+108));
    f7 = BITSF(LD32(v1-7812));
    a0 = D_08C286F0 - (-30992);
    v0 = a0 - 30992;
    f1 = f1 + f6;
    f2 = f2 + f5;
    f3 = f3 + f4;
    a0 = D_08AEE180 - (-7808);
    a2 = FBITS(f0);
    v1 = FBITS(f7);
    f20 = BITSF(LD32(a0-7808));
    a1 = LD32(s3+84);
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    ST32(sp+128, FBITS(f6));
    ST32(sp+132, FBITS(f5));
    ST32(sp+136, FBITS(f4));
    ST32(sp+112, FBITS(f1));
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f3));
    {v[112]=BITSF(LD32(s3+(120)));}
    {v[113]=BITSF(LD32(s3+(124)));}
    {v[114]=BITSF(LD32(s3+(128)));}
    {v[115]=BITSF(LD32(s3+(132)));}
    {v[116]=BITSF(LD32(sp+(16)));}
    {v[117]=BITSF(LD32(sp+(20)));}
    {v[118]=BITSF(LD32(sp+(24)));}
    {v[119]=BITSF(LD32(sp+(28)));}
    {v[124]=BITSF(a2);}
    {v[127]=BITSF(v1);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896A6C0; }
    goto L_0896A6A0;
L_0896A6A0:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_0896A6C0;
L_0896A6C0:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896A6D4; }
    goto L_0896A6CC;
L_0896A6CC:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_0896A6D4;
L_0896A6D4:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0896A6FC; }
    goto L_0896A6F0;
L_0896A6F0:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_0896A6FC;
L_0896A6FC:;
    {ST32(sp+(32),FBITS(v[120]));}
    {ST32(sp+(36),FBITS(v[121]));}
    {ST32(sp+(40),FBITS(v[122]));}
    {ST32(sp+(44),FBITS(v[123]));}
    {v[112]=BITSF(LD32(sp+(32)));}
    {v[113]=BITSF(LD32(sp+(36)));}
    {v[114]=BITSF(LD32(sp+(40)));}
    {v[115]=BITSF(LD32(sp+(44)));}
    {v[116]=BITSF(LD32(v0+(0)));}
    {v[117]=BITSF(LD32(v0+(4)));}
    {v[118]=BITSF(LD32(v0+(8)));}
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
    {ST32(sp+(64),FBITS(v[120]));}
    {ST32(sp+(68),FBITS(v[121]));}
    {ST32(sp+(72),FBITS(v[122]));}
    goto L_0896A76C;
L_0896A76C:;
    v1 = 0xcccc0000u;
    a0 = a1 + s0;
    v1 = v1 | 0xcccd;
    { u64 p_ = (u64)a0 * v1; lo = (u32)p_; hi = (u32)(p_ >> 32); }
    v1 = hi;
    s1 = v1 >> 4;
    v0 = s1 << 2;
    v0 = v0 + s1;
    v0 = v0 << 2;
    s1 = a0 - v0;
    v0 = LD32(sp+96);
    s2 = s1 << 2;
    v0 = s2 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896A7A8;
L_0896A7A8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 20; goto L_0896A7E0; }
    goto L_0896A7B0;
L_0896A7B0:;
    f0 = BITSF(LD32(v0+28));
    s0 = s0 + 1;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = s0 < 0x14u;
    if (cnd_) { goto L_0896A7D0; }
    goto L_0896A7C8;
L_0896A7C8:;
    f20 = f0;
    s4 = s1 + 0;
    goto L_0896A7D0;
L_0896A7D0:;
    cnd_ = v0 == 0;
    v0 = 20;
    if (cnd_) { goto L_0896A7E0; }
    goto L_0896A7D8;
L_0896A7D8:;
    a1 = LD32(s3+84);
    goto L_0896A76C;
L_0896A7E0:;
    cnd_ = s0 == v0;
    if (cnd_) { s1 = s4 + 0; goto L_0896A8FC; }
    goto L_0896A7E8;
L_0896A7E8:;
    v0 = s1 << 1;
    v0 = v0 + s1;
    v1 = D_08AEE184 - (-7804);
    a0 = D_08AEE188 - (-7800);
    v0 = v0 << 2;
    f20 = BITSF(LD32(v1-7804));
    f21 = BITSF(LD32(a0-7800));
    s4 = s3 + v0;
    s6 = 0 + 0;
    fp = s4 + 160;
    s7 = s4 + 400;
    s5 = sp + 0;
    goto L_0896A818;
L_0896A818:;
    v0 = LD32(s5+96);
    v1 = s3 + 892;
    s0 = s3 + 800;
    v0 = s2 + v0;
    a0 = LD32(v0);
    if (s6 != 0) s0 = v1;
    s6 = s6 + 1;
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896A838;
L_0896A838:;
    v1 = v0 + 0;
    a2 = s0 + 0;
    a0 = sp + 48;
    cnd_ = v0 == 0;
    a1 = sp + 64;
    if (cnd_) { goto L_0896A8E4; }
    goto L_0896A84C;
L_0896A84C:;
    ST32(v1+12, FBITS(f21));
    ST32(v1+8, FBITS(f20));
    f0 = BITSF(LD32(sp+52));
    f1 = BITSF(LD32(sp+48));
    v0 = LD32(s5+96);
    ST32(fp+4, FBITS(f0));
    v0 = s2 + v0;
    f0 = BITSF(LD32(sp+56));
    ST32(s4+160, FBITS(f1));
    ST32(fp+8, FBITS(f0));
    f0 = BITSF(LD32(sp+64));
    v1 = LD32(v1+4);
    f1 = BITSF(LD32(sp+68));
    ST32(s4+400, FBITS(f0));
    f0 = BITSF(LD32(sp+72));
    ST32(v0, v1);
    ST32(s7+4, FBITS(f1));
    ST32(s7+8, FBITS(f0));
    ST32(s3+84, s1);
    v0 = s6 < 0x2u;
    goto L_0896A89C;
L_0896A89C:;
    cnd_ = v0 != 0;
    s5 = s5 + 4;
    if (cnd_) { goto L_0896A818; }
    goto L_0896A8A4;
L_0896A8A4:;
    v0 = D_08AEE16C - (-7828);
    f0 = BITSF(LD32(sp+144));
    f1 = BITSF(LD32(v0-7828));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    f0 = f0 + f22;
    if (cnd_) { goto L_0896A364; }
    goto L_0896A8C0;
L_0896A8C0:;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    ST32(sp+144, FBITS(f0));
    if (cnd_) { goto L_0896A5B0; }
    goto L_0896A8D0;
L_0896A8D0:;
    v1 = LD32(sp+156);
    f9 = BITSF(LD32(v1+8));
    f8 = BITSF(LD32(v1));
    f7 = BITSF(LD32(v1+4));
    goto L_0896A374;
L_0896A8E4:;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896A8EC;
L_0896A8EC:;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0896A84C; }
    goto L_0896A8F4;
L_0896A8F4:;
    v0 = s6 < 0x2u;
    goto L_0896A89C;
L_0896A8FC:;
    s2 = s4 << 2;
    goto L_0896A7E8;
L_0896A904:;
    v0 = a0 & 0x1;
    v1 = a0 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_0896A574;
L_0896A920:;
    f0 = BITSF(LD32(a1-7824));
    f0 = f1 - f0;
    goto L_0896A558;
L_0896A92C:;
    f0 = f1 - f0;
    goto L_0896A4DC;
}

/* 0896A934 */
u64 func_0896A934(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896A934:;
    sp = sp - 16;
    s1 = 0 + 0;
    s0 = a0 + 0;
    a0 = LD32(s0+720);
    goto L_0896A950;
L_0896A950:;
    s1 = s1 + 1;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896A958;
L_0896A958:;
    a0 = LD32(s0+640);
    s0 = s0 + 4;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896A964;
L_0896A964:;
    v0 = s1 < 0x14u;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+720); goto L_0896A950; }
    goto L_0896A970;
L_0896A970:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896A984 */
u64 func_0896A984(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896A984:;
    sp = sp - 16;
    v0 = D_08ADB2F4 - (-19724);
    s0 = v0 - 19724;
    v0 = a0 + 0;
    a1 = a1 ^ 0xffff;
    v0 = v0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    t0 = D_08C286B0 - (-31056);
    t1 = D_08C286C0 - (-31040);
    t2 = D_08C286D0 - (-31024);
    a1 = a1 & v0;
    v1 = t0 - 31056;
    a2 = t1 - 31040;
    a3 = t2 - 31024;
    cnd_ = a1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896AA7C; }
    goto L_0896A9D0;
L_0896A9D0:;
    v0 = D_08AEE18C - (-7796);
    f4 = BITSF(LD32(v0-7796));
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
    ST32(a2+12, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    ST32(t0-31056, FBITS(f2));
    ST32(t1-31040, FBITS(f6));
    ST32(t2-31024, FBITS(f1));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AA5C;
L_0896AA5C:;
    v1 = D_08B1B780 - (-18560);
    v1 = v1 - 18560;
    ST32(v1+20, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AA70;
L_0896AA70:;
    v1 = D_08B1B7DC - (-18468);
    v1 = v1 - 18468;
    ST32(v1+20, v0);
    goto L_0896AA7C;
L_0896AA7C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896AA8C */
float func_0896AA8C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0896AA8C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0896AAB8; }
    goto L_0896AAA4;
L_0896AAA4:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0896AAB8; }
    goto L_0896AAB8;
L_0896AAB8:;
    return f0;
}

/* 0896AAC0 */
rv_t func_0896AAC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896AAC0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0896A984(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AAD4;
L_0896AAD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896AAE0 */
void func_0896AAE0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0896AAE0:;
    sp = sp - 96;
    s3 = D_08AEE1A8 - (-7768);
    s0 = a1 + 0;
    a1 = a2 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    func_08966B68(a0, a1);
    goto L_0896AB14;
L_0896AB14:;
    v0 = D_08AF9918 - (-26344);
    f20 = BITSF(LD32(s3-7768));
    v0 = v0 - 26344;
    ST32(s1, v0);
    a0 = D_08B45A9C - (23196);
    a1 = D_08B45AA8 - (23208);
    ST32(s1+144, 0);
    a0 = a0 + 23196;
    a1 = a1 + 23208;
    ST8(s1+148, 0);
    a2 = s0 + 0;
    a3 = 0 + 0;
    ST32(s1+152, 0);
    t0 = 911;
    ST32(s1+156, FBITS(f20));
    ST32(s1+160, 0);
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896AB58;
L_0896AB58:;
    cnd_ = v0 != 0;
    ST32(s1+144, v0);
    if (cnd_) { goto L_0896ABCC; }
    goto L_0896AB60;
L_0896AB60:;
    a0 = 0x8a940000u;
    a2 = sp + 32;
    a1 = s2 + 0;
    a0 = a0 | 0xc9e9;
    ST32(sp+32, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AB78;
L_0896AB78:;
    a1 = 0xe1cd0000u;
    f12 = BITSF(LD32(s3-7768));
    a0 = LD32(sp+32);
    a1 = a1 | 0xaf3d;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896AB8C;
L_0896AB8C:;
    ST32(s1+156, FBITS(f0));
    a1 = 0xfbff0000u;
    a2 = 0x5f6b0000u;
    a0 = LD32(sp+32);
    a1 = a1 | 0x5c53;
    a2 = a2 | 0x9be0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896ABA8;
L_0896ABA8:;
    ST32(s1+160, v0);
    sp = sp + 96;
    return;
L_0896ABCC:;
    a0 = D_08B30B5C - (2908);
    a1 = v0 + 0;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896ABDC;
L_0896ABDC:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0896AB60; }
    goto L_0896ABE4;
L_0896ABE4:;
    v0 = LD32(v0+28);
    a1 = a1 + 28;
    a0 = s1 + 164;
    ST32(s1+164, v0);
    v0 = D_08AEE1AC - (-7764);
    v1 = LD32(a1+4);
    f5 = BITSF(LD32(v0-7764));
    v0 = D_08AEE1B0 - (-7760);
    ST32(s1+168, v1);
    v1 = LD32(a1+8);
    f7 = BITSF(LD32(v0-7760));
    f6 = BITSF(LD32(s1+164));
    ST32(s1+172, v1);
    f6 = f6 * f5;
    v0 = LD32(a1+12);
    ST32(s1+176, v0);
    v1 = LD32(a1+16);
    ST32(s1+180, v1);
    v0 = LD32(a1+20);
    ST32(sp, 0);
    ST32(s1+184, v0);
    f3 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+16));
    f2 = BITSF(LD32(a0+12));
    f1 = BITSF(LD32(a0+20));
    f4 = f4 * f5;
    f2 = f2 * f5;
    f3 = f3 * f5;
    f1 = f1 * f7;
    f0 = f0 * f7;
    f9 = f2 - f4;
    f5 = f3 - f6;
    f1 = f1 + f20;
    f0 = f0 + f20;
    ST32(sp+4, 0);
    fcc = FCMP(f9, f5, 14);
    f8 = f5;
    f7 = f1 - f0;
    ST32(a0+16, FBITS(f0));
    ST32(sp+8, FBITS(f20));
    ST32(a0+4, FBITS(f3));
    ST32(s1+164, FBITS(f6));
    ST32(a0+12, FBITS(f2));
    ST32(a0+8, FBITS(f4));
    ST32(a0+20, FBITS(f1));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f9));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f7));
    if (cnd_) { goto L_0896ACB0; }
    goto L_0896ACAC;
L_0896ACAC:;
    f8 = f9;
    goto L_0896ACB0;
L_0896ACB0:;
    fcc = FCMP(f7, f8, 14);
    cnd_ = fcc;
    f5 = f8;
    if (cnd_) { goto L_0896ACC4; }
    goto L_0896ACC0;
L_0896ACC0:;
    f5 = f7;
    goto L_0896ACC4;
L_0896ACC4:;
    ST32(s1+152, FBITS(f5));
    goto L_0896AB60;
}

/* 0896ACCC */
rv_t func_0896ACCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896ACCC:;
    sp = sp - 16;
    v0 = D_08AF9918 - (-26344);
    s0 = a0 + 0;
    v0 = v0 - 26344;
    v1 = LD32(a0+144);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    a1 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0896AD14; }
    goto L_0896ACFC;
L_0896ACFC:;
    a0 = s0 + 0;
    v0 = func_08966C54(a0);
    goto L_0896AD04;
L_0896AD04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0896AD14:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AD1C;
L_0896AD1C:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0896ACFC; }
    goto L_0896AD24;
L_0896AD24:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_0896ACFC;
}

/* 0896AD30 */
rv_t func_0896AD30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896AD30:;
    sp = sp - 16;
    v0 = D_08AF9918 - (-26344);
    s0 = a0 + 0;
    v0 = v0 - 26344;
    v1 = LD32(a0+144);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    a1 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0896AD80; }
    goto L_0896AD60;
L_0896AD60:;
    a0 = s0 + 0;
    v0 = func_08966C54(a0);
    goto L_0896AD68;
L_0896AD68:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AD70;
L_0896AD70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0896AD80:;
    { u64 r_ = func_088E8900(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AD88;
L_0896AD88:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0896AD60; }
    goto L_0896AD90;
L_0896AD90:;
    v0 = 3;
    ST32(v1+4, v0);
    goto L_0896AD60;
}

/* 0896AD9C */
rv_t func_0896AD9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_0896AD9C:;
    sp = sp - 128;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    { rv_t r_ = func_08966C9C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896ADC4;
L_0896ADC4:;
    a1 = LD32(s0+144);
    cnd_ = a1 != 0;
    a0 = D_08B30B5C - (2908);
    if (cnd_) { goto L_0896ADF0; }
    goto L_0896ADD0;
L_0896ADD0:;
    goto L_0896ADD4;
L_0896ADD4:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_0896ADF0:;
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896ADF8;
L_0896ADF8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0896ADD0; }
    goto L_0896AE00;
L_0896AE00:;
    a0 = D_08B45AA8 - (23208);
    v1 = D_08B45A9C - (23196);
    v0 = a0 + 23208;
    a1 = v1 + 23196;
    f9 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1+4));
    f8 = BITSF(LD32(v1+23196));
    f10 = BITSF(LD32(a0+23208));
    f11 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    s4 = sp + 16;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = s4 + 0;
    ST32(sp, FBITS(f8));
    ST32(sp+4, FBITS(f0));
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
    { rv_t r_ = func_0880DD94(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896AE84;
L_0896AE84:;
    cnd_ = v0 != 0;
    a2 = s4 + 0;
    if (cnd_) { goto L_0896AFB4; }
    goto L_0896AE8C;
L_0896AE8C:;
    a2 = LD32(s0+140);
    s2 = D_08C2B3A4 - (-19548);
    v0 = 999;
    s3 = sp + 0;
    v1 = s2 - 19548;
    cnd_ = a2 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0896AEF8; }
    goto L_0896AEA8;
L_0896AEA8:;
    v0 = LD32(v1+4);
    v1 = LD32(s2-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_0896AEFC; }
    goto L_0896AECC;
L_0896AECC:;
    a0 = LD32(a1);
    goto L_0896AED0;
L_0896AED0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_0896AFE0; }
    goto L_0896AEE8;
L_0896AEE8:;
    a1 = LD32(a1+4);
    goto L_0896AEEC;
L_0896AEEC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_0896AED0; }
    goto L_0896AEF4;
L_0896AEF4:;
    a0 = 0 + 0;
    goto L_0896AEF8;
L_0896AEF8:;
    v1 = LD32(a0);
    goto L_0896AEFC;
L_0896AEFC:;
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896AF08;
L_0896AF08:;
    v1 = D_08AEE1B4 - (-7756);
    f1 = BITSF(LD32(v1-7756));
    ST32(sp+80, 0);
    a0 = s2 - 19548;
    a2 = 1;
    ST32(sp+84, FBITS(f1));
    f0 = BITSF(LD32(v0+4));
    ST32(sp+88, 0);
    f0 = f0 + f1;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    a1 = LD32(s0+140);
    ST32(s3+8, FBITS(f2));
    ST32(s3, FBITS(f1));
    ST32(s3+4, FBITS(f0));
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f2));
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896AF54;
L_0896AF54:;
    a0 = v0 + 0;
    v1 = LD32(v0);
    v0 = LD32(v1+92);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896AF68;
L_0896AF68:;
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
    a2 = s4 + 0;
    goto L_0896AFB4;
L_0896AFB4:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_088E48F4(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896AFC4;
L_0896AFC4:;
    v0 = LD_U8(s0+148);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896ADD4; }
    goto L_0896AFD0;
L_0896AFD0:;
    a0 = s1 + 0;
    { rv_t r_ = func_088E4564(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896AFD8;
L_0896AFD8:;
    ST8(s0+148, 0);
    goto L_0896ADD0;
L_0896AFE0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896AEEC; }
    goto L_0896AFEC;
L_0896AFEC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_0896AEEC; }
    goto L_0896AFF8;
L_0896AFF8:;
    v1 = LD32(a0);
    goto L_0896AEFC;
}

/* 0896B000 */
rv_t func_0896B000(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896B000:;
    sp = sp - 16;
    a1 = LD32(a0+144);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896B018;
L_0896B018:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0896B028; }
    goto L_0896B020;
L_0896B020:;
    { rv_t r_ = func_088E4564(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B028;
L_0896B028:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896B034 */
rv_t func_0896B034(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896B034:;
    sp = sp - 16;
    a1 = LD32(a0+144);
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896B04C;
L_0896B04C:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0896B060; }
    goto L_0896B058;
L_0896B058:;
    { rv_t r_ = func_088E44C8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B060;
L_0896B060:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896B06C */
rv_t func_0896B06C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[784] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 784);
L_0896B06C:;
    sp = sp - 784;
    s5 = a2 + 0;
    a2 = sp + 16;
    s4 = a1 + 0;
    a1 = sp + 0;
    s7 = t0 + 0;
    s6 = a3 + 0;
    s3 = a0 + 0;
    { rv_t r_ = func_0880DD94(a0, a1, a2, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B0D0;
L_0896B0D0:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0896B294; }
    goto L_0896B0D8;
L_0896B0D8:;
    f4 = BITSF(LD32(sp+24));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+48));
    v0 = FBITS(f4);
    v1 = FBITS(f3);
    f21 = BITSF(0);
    {u32 a_=sp+(576);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v[12]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[13]=BITSF(v1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    ST32(sp+64, FBITS(f4));
    fcc = FCMP(f0, f21, 2);
    ST32(sp+68, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+72, FBITS(f2));
    if (cnd_) { goto L_0896B15C; }
    goto L_0896B124;
L_0896B124:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v1=FBITS(v[0]);}
    {v0=FBITS(v[1]);}
    ST32(sp+80, v1);
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f3));
    ST32(sp+64, v1);
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f3));
    goto L_0896B15C;
L_0896B15C:;
    a3 = LD32(s3+140);
    f12 = BITSF(LD32(s3+152));
    s0 = sp + 96;
    a0 = s0 + 0;
    a2 = sp + 64;
    a1 = sp + 0;
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_0896B178;
L_0896B178:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B180;
L_0896B180:;
    v1 = LD_U8(v0+32);
    s0 = v0 + 0;
    v0 = D_08AEE1B8 - (-7752);
    cnd_ = v1 != 0;
    f20 = BITSF(LD32(v0-7752));
    if (cnd_) { goto L_0896B1A0; }
    goto L_0896B194;
L_0896B194:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896B1D8; }
    goto L_0896B1A0;
L_0896B1A0:;
    f0 = BITSF(LD32(s3+152));
    f1 = BITSF(LD32(s0));
    f0 = f20 / f0;
    f1 = f1 * f0;
    fcc = FCMP(f1, f21, 12);
    cnd_ = fcc;
    f2 = f21;
    if (cnd_) { goto L_0896B1D4; }
    goto L_0896B1C0;
L_0896B1C0:;
    fcc = FCMP(f20, f1, 12);
    cnd_ = fcc;
    f2 = f20;
    if (cnd_) { goto L_0896B1D4; }
    goto L_0896B1D0;
L_0896B1D0:;
    f2 = f1;
    goto L_0896B1D4;
L_0896B1D4:;
    f20 = f2;
    goto L_0896B1D8;
L_0896B1D8:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = (u32)(s32)LD_S16(s0+18); goto L_0896B9C0; }
    goto L_0896B1E0;
L_0896B1E0:;
    a1 = LD32(s3+144);
    goto L_0896B1E4;
L_0896B1E4:;
    a0 = D_08B30B5C - (2908);
    a0 = a0 + 2908;
    { u64 r_ = func_088E8974(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896B1F0;
L_0896B1F0:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+56, FBITS(f20)); goto L_0896B1F8; }
    goto L_0896B1F8;
L_0896B1F8:;
    v0 = D_08AEE1BC - (-7748);
    f0 = BITSF(LD32(v0-7748));
    f1 = BITSF(LD32(s3+152));
    f4 = BITSF(LD32(sp+64));
    f6 = f20 * f0;
    f3 = BITSF(LD32(sp+68));
    f2 = BITSF(LD32(sp+72));
    f0 = BITSF(LD32(sp));
    f22 = f1 * f6;
    f1 = BITSF(LD32(sp+4));
    v0 = LD32(s0+4);
    f4 = f4 * f22;
    f3 = f3 * f22;
    f2 = f2 * f22;
    f7 = f0 + f4;
    f0 = BITSF(LD32(sp+8));
    f8 = f1 + f3;
    ST32(sp+80, FBITS(f4));
    f9 = f0 + f2;
    ST32(sp+84, FBITS(f3));
    ST32(sp+88, FBITS(f2));
    ST32(sp+160, FBITS(f7));
    ST32(sp+164, FBITS(f8));
    cnd_ = v0 == 0;
    ST32(sp+168, FBITS(f9));
    if (cnd_) { goto L_0896B2E0; }
    goto L_0896B25C;
L_0896B25C:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_0896B270; }
    goto L_0896B264;
L_0896B264:;
    ST32(s4+8, FBITS(f9));
    ST32(s4, FBITS(f7));
    ST32(s4+4, FBITS(f8));
    goto L_0896B270;
L_0896B270:;
    cnd_ = s5 != 0;
    if (cnd_) { ST32(s5, v0); goto L_0896B278; }
    goto L_0896B278;
L_0896B278:;
    cnd_ = s6 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0896B284; }
    goto L_0896B280;
L_0896B280:;
    ST32(s6, v0);
    goto L_0896B284;
L_0896B284:;
    cnd_ = s7 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0896B290; }
    goto L_0896B28C;
L_0896B28C:;
    ST32(s7, v0);
    goto L_0896B290;
L_0896B290:;
    v1 = 1;
    goto L_0896B294;
L_0896B294:;
    v0 = v1 + 0;
    sp = sp + 784;
    return (rv_t){ v0, v1, f0 };
L_0896B2E0:;
    f0 = BITSF(LD32(sp+16));
    a1 = LD32(sp+236);
    f1 = BITSF(LD32(sp+48));
    ST32(sp+224, FBITS(f0));
    a0 = s3 + 164;
    t2 = sp + 224;
    f0 = BITSF(LD32(sp+28));
    a3 = LD32(sp+224);
    ST32(sp+188, a1);
    t1 = sp + 304;
    t0 = sp + 176;
    ST32(sp+228, FBITS(f0));
    f0 = BITSF(LD32(sp+40));
    a2 = LD32(sp+228);
    ST32(sp+176, a3);
    ST32(sp+232, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    v0 = LD32(sp+232);
    ST32(sp+180, a2);
    ST32(sp+224, FBITS(f0));
    f0 = BITSF(LD32(sp+32));
    v1 = LD32(sp+224);
    ST32(sp+184, v0);
    ST32(sp+228, FBITS(f0));
    f0 = BITSF(LD32(sp+44));
    v0 = LD32(sp+228);
    ST32(sp+192, v1);
    ST32(sp+232, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    v1 = LD32(sp+232);
    ST32(sp+196, v0);
    ST32(sp+224, FBITS(f0));
    f0 = BITSF(LD32(sp+36));
    v0 = LD32(sp+224);
    ST32(sp+200, v1);
    ST32(sp+228, FBITS(f0));
    ST32(sp+232, FBITS(f1));
    ST32(sp+204, a1);
    ST32(sp+208, v0);
    f1 = BITSF(LD32(s3+164));
    f4 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a0+16));
    f2 = BITSF(LD32(a0+20));
    f4 = f4 - f1;
    f0 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0+12));
    f2 = f2 - f5;
    v0 = LD32(sp+232);
    f3 = f3 - f0;
    f0 = f4 * f6;
    f5 = f2 * f6;
    ST32(sp+216, v0);
    f1 = f3 * f6;
    ST32(sp+224, FBITS(f0));
    ST32(sp+232, FBITS(f5));
    v0 = LD32(sp+224);
    ST32(sp+256, FBITS(f7));
    ST32(sp+272, v0);
    v0 = LD32(sp+232);
    v1 = LD32(sp+228);
    ST32(sp+260, FBITS(f8));
    ST32(sp+228, FBITS(f1));
    ST32(sp+280, v0);
    v0 = LD32(sp+256);
    ST32(sp+212, v1);
    ST32(sp+288, v0);
    v1 = LD32(sp+228);
    v0 = LD32(sp+260);
    ST32(sp+264, FBITS(f9));
    ST32(sp+276, v1);
    ST32(sp+284, a1);
    ST32(sp+220, a1);
    ST32(sp+240, FBITS(f4));
    ST32(sp+244, FBITS(f3));
    ST32(sp+248, FBITS(f2));
    ST32(sp+80, FBITS(f0));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f5));
    ST32(sp+292, v0);
    v1 = LD32(sp+264);
    v0 = LD32(sp+268);
    ST32(sp+296, v1);
    ST32(sp+300, v0);
    goto L_0896B42C;
L_0896B42C:;
    v0 = LD32(t0);
    v1 = LD32(t0+4);
    a0 = LD32(t0+8);
    a1 = LD32(t0+12);
    ST32(t1, v0);
    t0 = t0 + 16;
    t1 = t1 + 16;
    ST32(t1-12, v1);
    ST32(t1-8, a0);
    cnd_ = t0 != t2;
    ST32(t1-4, a1);
    if (cnd_) { goto L_0896B42C; }
    goto L_0896B458;
L_0896B458:;
    s1 = D_08C2C200 - (-15872);
    s1 = s1 - 15872;
    s0 = s1 + 16;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    s2 = sp + 352;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f0 = func_08ABFBA4(a0, t1, t2, 0);
    goto L_0896B47C;
L_0896B47C:;
    v0 = LD32(s1+16);
    ST32(sp+352, s0);
    ST32(sp+356, v0);
    cnd_ = v0 == 0;
    ST32(sp+360, 0);
    if (cnd_) { goto L_0896B4B8; }
    goto L_0896B490;
L_0896B490:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s2+4); goto L_0896B9B4; }
    goto L_0896B49C;
L_0896B49C:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_0896B4B8; }
    goto L_0896B4A8;
L_0896B4A8:;
    v0 = LD32(s2+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(s2+4, v1);
    if (cnd_) { goto L_0896B490; }
    goto L_0896B4B8;
L_0896B4B8:;
    v1 = 143;
    f0 = BITSF(v1);
    v0 = D_08AEE1C0 - (-7744);
    f2 = BITSF(LD32(v0-7744));
    f1 = (float)(s32)FBITS(f0);
    v0 = 255;
    f0 = BITSF(v0);
    fp = D_08AEE1C4 - (-7740);
    f21 = f1 * f2;
    f1 = (float)(s32)FBITS(f0);
    f12 = BITSF(LD32(fp-7740));
    s1 = sp + 368;
    a0 = sp + 272;
    f20 = f1 * f2;
    a1 = s1 + 0;
    a2 = 0 + 0;
    ST32(sp+376, 0);
    ST32(sp+372, 0);
    ST32(sp+368, FBITS(f20));
    ST32(sp+380, FBITS(f21));
    f0 = func_0897C55C(a0, a1, a2, f12);
    goto L_0896B50C;
L_0896B50C:;
    v1 = LD32(sp+360);
    cnd_ = v1 == 0;
    v0 = D_08AEE1BC - (-7748);
    if (cnd_) { goto L_0896B55C; }
    goto L_0896B518;
L_0896B518:;
    f23 = BITSF(LD32(v0-7748));
    f25 = BITSF(0);
    f24 = f20;
    s0 = LD32(v1);
    goto L_0896B528;
L_0896B528:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0896B548; }
    goto L_0896B530;
L_0896B530:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896B548; }
    goto L_0896B53C;
L_0896B53C:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896B588; }
    goto L_0896B548;
L_0896B548:;
    a0 = s2 + 0;
    func_08ABFDD0(a0);
    goto L_0896B550;
L_0896B550:;
    v1 = LD32(sp+360);
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(v1); goto L_0896B528; }
    goto L_0896B55C;
L_0896B55C:;
    a0 = LD32(sp+352);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0896B578; }
    goto L_0896B570;
L_0896B570:;
    v1 = 0 + 0;
    goto L_0896B294;
L_0896B578:;
    func_08ABFCF4(a0, 0, 0, 0);
    goto L_0896B580;
L_0896B580:;
    v1 = 0 + 0;
    goto L_0896B294;
L_0896B588:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B590;
L_0896B590:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896B548; }
    goto L_0896B598;
L_0896B598:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B5A0;
L_0896B5A0:;
    v1 = LD32(v0+16);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0896B548; }
    goto L_0896B5AC;
L_0896B5AC:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+80));
    fcc = FCMP(f0, f25, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0896B548; }
    goto L_0896B5CC;
L_0896B5CC:;
    v1 = LD32(v1-16);
    v1 = s0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896B548; }
    goto L_0896B5E4;
L_0896B5E4:;
    v1 = LD32(v1+4);
    v0 = LD32(s3+140);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0896B548; }
    goto L_0896B5F4;
L_0896B5F4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A05694(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B5FC;
L_0896B5FC:;
    v1 = LD32(s0);
    v0 = LD32(v0+16);
    a0 = LD32(v1-12);
    ST32(sp+592, v0);
    a0 = s0 + a0;
    v1 = LD32(a0);
    f20 = BITSF(LD32(v0+28));
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f22 + f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B624;
L_0896B624:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+160));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f1 = BITSF(LD32(sp+164));
    f0 = BITSF(LD32(sp+168));
    f20 = f20 * f20;
    f3 = f3 - f1;
    f4 = f4 - f0;
    v1 = FBITS(f2);
    {u32 a_=sp+(608);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v1);}
    v1 = FBITS(f4);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+240, FBITS(f2));
    fcc = FCMP(f0, f20, 14);
    ST32(sp+244, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+248, FBITS(f4));
    if (cnd_) { goto L_0896B548; }
    goto L_0896B688;
L_0896B688:;
    v0 = LD32(s0);
    {u32 a_=sp+(624);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = FBITS(f23);
    a0 = LD32(v0-12);
    {v[0]=BITSF(v1);}
    {float s0=v[0];float s1=v[0];float s2=v[0];float s3=v[0];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B6BC;
L_0896B6BC:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+12));
    f2 = BITSF(LD32(v0+24));
    ST32(sp+432, FBITS(f0));
    ST32(sp+436, FBITS(f1));
    ST32(sp+440, FBITS(f2));
    v1 = LD32(sp+432);
    a1 = LD32(sp+444);
    a0 = LD32(sp+436);
    ST32(sp+384, v1);
    v1 = LD32(sp+440);
    ST32(sp+388, a0);
    ST32(sp+392, v1);
    ST32(sp+396, a1);
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+16));
    f2 = BITSF(LD32(v0+28));
    ST32(sp+432, FBITS(f0));
    ST32(sp+436, FBITS(f1));
    ST32(sp+440, FBITS(f2));
    v1 = LD32(sp+432);
    a0 = LD32(sp+436);
    ST32(sp+412, a1);
    ST32(sp+400, v1);
    v1 = LD32(sp+440);
    ST32(sp+404, a0);
    ST32(sp+408, v1);
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0+20));
    ST32(sp+432, FBITS(f1));
    v0 = LD32(sp+432);
    ST32(sp+436, FBITS(f0));
    ST32(sp+440, FBITS(f2));
    ST32(sp+416, v0);
    v0 = LD32(sp+436);
    v1 = LD32(sp+440);
    ST32(sp+428, a1);
    ST32(sp+420, v0);
    ST32(sp+424, v1);
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B778;
L_0896B778:;
    f0 = BITSF(LD32(v0));
    v1 = LD32(sp+592);
    {u32 a_=sp+(624);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+432, FBITS(f0));
    a0 = v1 + 4;
    {u32 a_=sp+(688);v[96]=BITSF(LD32(a_+0));v[97]=BITSF(LD32(a_+4));v[98]=BITSF(LD32(a_+8));v[99]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0+4));
    {float s0=v[96];float s1=v[97];float s2=v[98];float s3=v[99];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    a3 = sp + 480;
    ST32(sp+436, FBITS(f0));
    a2 = sp + 384;
    f0 = BITSF(LD32(v0+8));
    v0 = LD32(sp+540);
    ST32(sp+440, FBITS(f0));
    f5 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(a0+4));
    f4 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0+16));
    f1 = BITSF(LD32(a0+12));
    f0 = BITSF(LD32(a0+20));
    f2 = f2 - f5;
    f1 = f1 - f4;
    f0 = f0 - f3;
    ST32(sp+460, v0);
    ST32(sp+528, FBITS(f2));
    ST32(sp+532, FBITS(f1));
    ST32(sp+536, FBITS(f0));
    v0 = LD32(sp+528);
    v1 = LD32(sp+532);
    ST32(sp+448, v0);
    v0 = LD32(sp+536);
    ST32(sp+452, v1);
    ST32(sp+456, v0);
    {u32 a_=sp+(448);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    v0 = LD32(sp+592);
    {u32 a_=sp+(448);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f2 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(a0+20));
    f1 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+12));
    f4 = BITSF(LD32(a0+16));
    f2 = f2 + f1;
    f3 = f3 + f0;
    f4 = f4 + f5;
    f2 = f2 * f23;
    f3 = f3 * f23;
    f4 = f4 * f23;
    ST32(sp+560, FBITS(f2));
    {u32 a_=sp+(384);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+544, FBITS(f2));
    {u32 a_=sp+(400);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(416);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    ST32(sp+548, FBITS(f3));
    {u32 a_=sp+(640);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    ST32(sp+552, FBITS(f4));
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {u32 a_=sp+(544);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {float t0=v[4];float t1=v[5];float t2=v[6];float o0=0;o0+=v[16]*t0;o0+=v[20]*t1;o0+=v[24]*t2;float o1=0;o1+=v[17]*t0;o1+=v[21]*t1;o1+=v[25]*t2;float o2=0;o2+=v[18]*t0;o2+=v[22]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    v0 = LD32(sp+528);
    v1 = LD32(sp+532);
    {u32 a_=sp+(432);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    ST32(sp+464, v0);
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[8]));ST32(a_+4,FBITS(v[9]));ST32(a_+8,FBITS(v[10]));ST32(a_+12,FBITS(v[11]));}
    ST32(sp+468, v1);
    v0 = LD32(sp+536);
    v1 = LD32(sp+540);
    ST32(sp+564, FBITS(f3));
    ST32(sp+472, v0);
    ST32(sp+476, v1);
    {u32 a_=sp+(464);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[4];float t1=v[5];float t2=v[6];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;v[0]=d0;v[1]=d1;v[2]=d2;}
    ST32(sp+568, FBITS(f4));
    {u32 a_=sp+(464);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    goto L_0896B8B4;
L_0896B8B4:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    a1 = LD32(a2+12);
    ST32(a3, v0);
    a2 = a2 + 16;
    a3 = a3 + 16;
    v0 = sp + 432;
    ST32(a3-12, v1);
    ST32(a3-8, a0);
    cnd_ = a2 != v0;
    ST32(a3-4, a1);
    if (cnd_) { goto L_0896B8B4; }
    goto L_0896B8E4;
L_0896B8E4:;
    a0 = sp + 272;
    a1 = sp + 448;
    { rv_t r_ = func_08AB3C24(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896B8F0;
L_0896B8F0:;
    cnd_ = v0 != 0;
    f12 = BITSF(LD32(fp-7740));
    if (cnd_) { goto L_0896B920; }
    goto L_0896B8F8;
L_0896B8F8:;
    a0 = sp + 448;
    a1 = s1 + 0;
    a2 = 0 + 0;
    ST32(sp+376, FBITS(f24));
    ST32(sp+372, FBITS(f24));
    ST32(sp+368, FBITS(f25));
    ST32(sp+380, FBITS(f21));
    f0 = func_0897C55C(a0, a1, a2, f12);
    goto L_0896B918;
L_0896B918:;
    goto L_0896B548;
L_0896B920:;
    a0 = sp + 448;
    a1 = s1 + 0;
    a2 = 0 + 0;
    ST32(sp+368, FBITS(f24));
    ST32(sp+380, FBITS(f21));
    ST32(sp+376, 0);
    ST32(sp+372, FBITS(f24));
    f0 = func_0897C55C(a0, a1, a2, f12);
    goto L_0896B940;
L_0896B940:;
    cnd_ = s4 == 0;
    f0 = BITSF(LD32(sp+160));
    if (cnd_) { goto L_0896B95C; }
    goto L_0896B948;
L_0896B948:;
    f1 = BITSF(LD32(sp+168));
    ST32(s4, FBITS(f0));
    f0 = BITSF(LD32(sp+164));
    ST32(s4+8, FBITS(f1));
    ST32(s4+4, FBITS(f0));
    goto L_0896B95C;
L_0896B95C:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_0896B978; }
    goto L_0896B964;
L_0896B964:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    ST32(s5, v0);
    goto L_0896B978;
L_0896B978:;
    cnd_ = s6 == 0;
    v1 = (u32)-1;
    if (cnd_) { goto L_0896B984; }
    goto L_0896B980;
L_0896B980:;
    ST32(s6, v1);
    goto L_0896B984;
L_0896B984:;
    cnd_ = s7 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0896B990; }
    goto L_0896B98C;
L_0896B98C:;
    ST32(s7, v0);
    goto L_0896B990;
L_0896B990:;
    a0 = LD32(sp+352);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0896B290; }
    goto L_0896B9A4;
L_0896B9A4:;
    func_08ABFCF4(a0, 0, 0, 0);
    goto L_0896B9AC;
L_0896B9AC:;
    v1 = 1;
    goto L_0896B294;
L_0896B9B4:;
    v1 = LD32(v0+8);
    ST32(s2+8, v1);
    goto L_0896B4B8;
L_0896B9C0:;
    s1 = 0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896B9C8;
L_0896B9C8:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 7; goto L_0896B9E0; }
    goto L_0896B9D0;
L_0896B9D0:;
    a0 = LD32(v0+28);
    v0 = func_08A66DBC(a0);
    goto L_0896B9D8;
L_0896B9D8:;
    s1 = v0 + 0;
    v0 = 7;
    goto L_0896B9E0;
L_0896B9E0:;
    cnd_ = s1 == v0;
    if (cnd_) { a1 = LD32(s3+144); goto L_0896B1E4; }
    goto L_0896B9E8;
L_0896B9E8:;
    v0 = LD_U16(s0+16);
    v0 = v0 & 0x300;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s3+144); goto L_0896B1E4; }
    goto L_0896B9F8;
L_0896B9F8:;
    f0 = BITSF(LD32(s0));
    f5 = BITSF(LD32(sp+64));
    f4 = BITSF(LD32(sp+68));
    f3 = BITSF(LD32(sp+72));
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    f2 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f2 = f2 + f5;
    f1 = f1 + f4;
    f0 = f0 + f3;
    f12 = BITSF(LD32(s3+156));
    a2 = LD32(s3+160);
    f13 = BITSF(0);
    a1 = s0 + 20;
    a0 = sp + 80;
    ST32(sp+80, FBITS(f2));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    ST32(sp+160, FBITS(f5));
    ST32(sp+164, FBITS(f4));
    ST32(sp+168, FBITS(f3));
    { rv_t r_ = func_088EC5E8(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BA5C;
L_0896BA5C:;
    a1 = LD32(s3+144);
    goto L_0896B1E4;
}

/* 0896BA64 */
rv_t func_0896BA64(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_0896BA64:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C28700 - (-30976);
    t1 = D_08C28710 - (-30960);
    t2 = D_08C28720 - (-30944);
    a1 = a1 & a0;
    v1 = t0 - 30976;
    a2 = t1 - 30960;
    cnd_ = a1 == 0;
    a3 = t2 - 30944;
    if (cnd_) { goto L_0896BB1C; }
    goto L_0896BA94;
L_0896BA94:;
    v0 = D_08AEE1C8 - (-7736);
    f4 = BITSF(LD32(v0-7736));
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
    ST32(t0-30976, FBITS(f2));
    ST32(t1-30960, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-30944, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_0896BB1C;
L_0896BB1C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0896BB24 */
rv_t func_0896BB24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896BB24:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0896BA64(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BB38;
L_0896BB38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896BB44 */
void func_0896BB44(u32 a0, u32 a1, u32 a2, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0896BB44:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = a2 + 0;
    f20 = f13;
    f21 = f12;
    func_08966B68(a0, a1);
    goto L_0896BB74;
L_0896BB74:;
    v0 = D_08B1B83C - (-18372);
    ST32(s1+144, FBITS(f20));
    a3 = v0 - 18372;
    v0 = D_08AF9980 - (-26240);
    f0 = BITSF(LD32(s0+12));
    v0 = v0 - 26240;
    v1 = s1 + 152;
    ST32(s1, v0);
    v0 = D_08AEE1D4 - (-7724);
    a0 = 0x5f6b0000u;
    f3 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    ST32(v1+12, FBITS(f0));
    a0 = a0 | 0x9be0;
    t1 = s1 + 188;
    f0 = BITSF(LD32(v0-7724));
    ST32(v1+4, FBITS(f1));
    a2 = t1 + 0;
    t0 = a3 + 80;
    ST32(v1+8, FBITS(f2));
    ST32(s1+152, FBITS(f3));
    ST32(s1+168, FBITS(f21));
    ST32(s1+180, FBITS(f0));
    ST32(s1+184, a0);
    ST32(s1+172, 0);
    ST32(s1+176, 0);
    goto L_0896BBE0;
L_0896BBE0:;
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
    if (cnd_) { goto L_0896BBE0; }
    goto L_0896BC0C;
L_0896BC0C:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    v0 = D_08B1B898 - (-18280);
    s0 = s1 + 280;
    a3 = v0 - 18280;
    a2 = s0 + 0;
    t0 = a3 + 80;
    goto L_0896BC38;
L_0896BC38:;
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
    if (cnd_) { goto L_0896BC38; }
    goto L_0896BC64;
L_0896BC64:;
    v0 = LD32(a3);
    v1 = LD32(a3+4);
    a0 = LD32(a3+8);
    ST32(a2, v0);
    ST32(a2+4, v1);
    ST32(a2+8, a0);
    a0 = t1 + 0;
    a1 = 1;
    func_088EB0CC(a0, a1);
    goto L_0896BC88;
L_0896BC88:;
    a0 = s0 + 0;
    a1 = 1;
    func_088EB0CC(a0, a1);
    goto L_0896BC94;
L_0896BC94:;
    sp = sp + 32;
    return;
}

/* 0896BCB0 */
rv_t func_0896BCB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896BCB0:;
    v0 = D_08AF9980 - (-26240);
    v0 = v0 - 26240;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    func_0896BE04(a0);
    goto L_0896BCD0;
L_0896BCD0:;
    a0 = s0 + 0;
    v0 = func_08966C54(a0);
    goto L_0896BCD8;
L_0896BCD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896BCE8 */
rv_t func_0896BCE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896BCE8:;
    v0 = D_08AF9980 - (-26240);
    v0 = v0 - 26240;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    func_0896BE04(a0);
    goto L_0896BD08;
L_0896BD08:;
    a0 = s0 + 0;
    v0 = func_08966C54(a0);
    goto L_0896BD10;
L_0896BD10:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896BD18;
L_0896BD18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896BD28 */
rv_t func_0896BD28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896BD28:;
    sp = sp - 48;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    s2 = 0 + 0;
    s1 = sp + 0;
    { rv_t r_ = func_08966C9C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BD54;
L_0896BD54:;
    a1 = s0 + 152;
    a0 = s0 + 0;
    func_0896BF68(a0, a1);
    goto L_0896BD60;
L_0896BD60:;
    f12 = BITSF(LD32(s0+168));
    a0 = s0 + 0;
    func_0896BF24(a0, f12);
    goto L_0896BD6C;
L_0896BD6C:;
    v0 = s0 + 172;
    v1 = s0 + 176;
    ST32(sp, v0);
    v0 = D_08AEE1D8 - (-7720);
    ST32(sp+4, v1);
    f20 = BITSF(LD32(v0-7720));
    goto L_0896BD84;
L_0896BD84:;
    v0 = LD32(s1);
    a0 = LD32(v0);
    { u64 r_ = func_088EB59C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896BD90;
L_0896BD90:;
    a0 = s0 + 0;
    a1 = s0 + 64;
    cnd_ = v0 == 0;
    a2 = s0 + 76;
    if (cnd_) { goto L_0896BDDC; }
    goto L_0896BDA0;
L_0896BDA0:;
    ST32(v0+28, FBITS(f20));
    a0 = v0 + 0;
    f12 = BITSF(LD32(s0+144));
    { rv_t r_ = func_088EB7DC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BDB0;
L_0896BDB0:;
    s2 = s2 + 1;
    v0 = s2 < 0x2u;
    goto L_0896BDB8;
L_0896BDB8:;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0896BD84; }
    goto L_0896BDC0;
L_0896BDC0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0896BDDC:;
    s2 = s2 + 1;
    func_0896BE04(a0);
    goto L_0896BDE4;
L_0896BDE4:;
    v0 = LD32(s1);
    a1 = s0 + 88;
    a0 = s0 + 0;
    ST32(v0, 0);
    a2 = s0 + 100;
    { rv_t r_ = func_0896BE5C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BDFC;
L_0896BDFC:;
    v0 = s2 < 0x2u;
    goto L_0896BDB8;
}

/* 0896BE04 */
void func_0896BE04(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896BE04:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+172);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0896BE4C; }
    goto L_0896BE20;
L_0896BE20:;
    v0 = LD32(s0+176);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0896BE3C; }
    goto L_0896BE2C;
L_0896BE2C:;
    sp = sp + 16;
    return;
L_0896BE3C:;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896BE44;
L_0896BE44:;
    ST32(s0+176, 0);
    goto L_0896BE2C;
L_0896BE4C:;
    { u64 r_ = func_088EB150(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896BE54;
L_0896BE54:;
    ST32(s0+172, 0);
    goto L_0896BE20;
}

/* 0896BE5C */
rv_t func_0896BE5C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0896BE5C:;
    sp = sp - 48;
    t0 = D_08C28760 - (-30880);
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = a2 + 0;
    v0 = LD32(s0+172);
    cnd_ = v0 != 0;
    a0 = sp + 16;
    if (cnd_) { goto L_0896BF10; }
    goto L_0896BE88;
L_0896BE88:;
    v0 = (u32)(s32)LD_S8(t0-30880);
    v1 = D_08C28768 - (-30872);
    cnd_ = v0 != 0;
    a3 = v1 - 30872;
    if (cnd_) { goto L_0896BEB4; }
    goto L_0896BE98;
L_0896BE98:;
    v0 = 1;
    ST8(t0-30880, v0);
    v0 = D_08AEE1DC - (-7716);
    f0 = BITSF(LD32(v0-7716));
    ST32(v1-30872, 0);
    ST32(a3+4, 0);
    ST32(a3+8, FBITS(f0));
    goto L_0896BEB4;
L_0896BEB4:;
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2+20));
    f2 = BITSF(LD32(a2+32));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BED0;
L_0896BED0:;
    a2 = s0 + 188;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BEE0;
L_0896BEE0:;
    a2 = s0 + 280;
    a0 = s1 + 0;
    a1 = sp + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0896BEF8; }
    goto L_0896BEF4;
L_0896BEF4:;
    v1 = LD32(v0+4);
    goto L_0896BEF8;
L_0896BEF8:;
    ST32(s0+172, v1);
    { rv_t r_ = func_088EB240(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896BF00;
L_0896BF00:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0896BF0C; }
    goto L_0896BF08;
L_0896BF08:;
    v1 = LD32(v0+4);
    goto L_0896BF0C;
L_0896BF0C:;
    ST32(s0+176, v1);
    goto L_0896BF10;
L_0896BF10:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 0896BF24 */
void func_0896BF24(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
L_0896BF24:;
    v0 = D_08B1B83C - (-18372);
    v1 = v0 - 18372;
    f0 = BITSF(LD32(v0-18372));
    f1 = BITSF(LD32(v1+4));
    v0 = D_08B1B898 - (-18280);
    f0 = f0 * f12;
    f1 = f1 * f12;
    v1 = v0 - 18280;
    ST32(a0+188, FBITS(f0));
    ST32(a0+192, FBITS(f1));
    f0 = BITSF(LD32(v0-18280));
    f1 = BITSF(LD32(v1+4));
    f0 = f0 * f12;
    f1 = f1 * f12;
    ST32(a0+280, FBITS(f0));
    ST32(a0+284, FBITS(f1));
    return;
}

/* 0896BF68 */
void func_0896BF68(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
L_0896BF68:;
    f0 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1+12));
    v0 = a0 + 308;
    ST32(a0+308, FBITS(f0));
    v1 = a0 + 324;
    a2 = a0 + 340;
    ST32(v0+12, FBITS(f1));
    a3 = a0 + 356;
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a1+12));
    ST32(a0+324, FBITS(f1));
    ST32(v1+12, FBITS(f0));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f3));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+12));
    f3 = BITSF(LD32(a1+8));
    ST32(a0+340, FBITS(f1));
    ST32(a2+12, FBITS(f0));
    ST32(a2+4, FBITS(f2));
    ST32(a2+8, FBITS(f3));
    f4 = BITSF(LD32(a1+12));
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    ST32(a0+356, FBITS(f0));
    ST32(a3+12, FBITS(f4));
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    return;
}

/* 0896BFFC */
rv_t func_0896BFFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0896BFFC:;
    ST32(a0+148, FBITS(f12));
    ST32(a0+144, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0896C008 */
rv_t func_0896C008(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0896C008:;
    ST32(a0+144, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0896C010 */
rv_t func_0896C010(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0896C010:;
    sp = sp - 160;
    v0 = a0 + 76;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f1 = BITSF(0);
    s5 = a3 + 0;
    s6 = t0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(a0+76));
    f3 = BITSF(LD32(v0+4));
    v1 = FBITS(f4);
    v0 = FBITS(f3);
    {v[12]=BITSF(v1);}
    v1 = FBITS(f5);
    {v[13]=BITSF(v0);}
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = a0 + 64;
    f2 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f1, 2);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a0+64));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_0896C0EC; }
    goto L_0896C0B4;
L_0896C0B4:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v1=FBITS(v[2]);}
    f3 = BITSF(v1);
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    goto L_0896C0EC;
L_0896C0EC:;
    a3 = LD32(s1+140);
    f12 = BITSF(LD32(s1+148));
    s0 = sp + 48;
    a0 = s0 + 0;
    a2 = sp + 16;
    a1 = sp + 0;
    t0 = 0 + 0;
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_0896C10C;
L_0896C10C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E34(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896C114;
L_0896C114:;
    v1 = LD32(v0+4);
    s0 = v0 + 0;
    cnd_ = v1 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0896C130; }
    goto L_0896C124;
L_0896C124:;
    v0 = LD_U8(v0+32);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0896C134; }
    goto L_0896C130;
L_0896C130:;
    s4 = 1;
    goto L_0896C134;
L_0896C134:;
    cnd_ = s3 != 0;
    if (cnd_) { ST32(s3, v1); goto L_0896C13C; }
    goto L_0896C13C;
L_0896C13C:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_0896C14C; }
    goto L_0896C144;
L_0896C144:;
    v0 = LD32(s0+8);
    ST32(s5, v0);
    goto L_0896C14C;
L_0896C14C:;
    cnd_ = s6 == 0;
    if (cnd_) { goto L_0896C15C; }
    goto L_0896C154;
L_0896C154:;
    v0 = LD32(s0+12);
    ST32(s6, v0);
    goto L_0896C15C;
L_0896C15C:;
    cnd_ = s4 == 0;
    if (cnd_) { f0 = BITSF(LD32(s1+148)); goto L_0896C240; }
    goto L_0896C164;
L_0896C164:;
    f4 = BITSF(LD32(s0));
    f5 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f2 = BITSF(LD32(sp+24));
    f5 = f5 * f4;
    f0 = BITSF(LD32(sp));
    f3 = f3 * f4;
    f2 = f2 * f4;
    f6 = f0 + f5;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    ST32(s1+144, FBITS(f4));
    f1 = f1 + f3;
    f0 = f0 + f2;
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f3));
    ST32(sp+120, FBITS(f2));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f1));
    cnd_ = s2 == 0;
    ST32(sp+40, FBITS(f0));
    if (cnd_) { goto L_0896C1C4; }
    goto L_0896C1B8;
L_0896C1B8:;
    ST32(s2+8, FBITS(f0));
    ST32(s2, FBITS(f6));
    ST32(s2+4, FBITS(f1));
    goto L_0896C1C4;
L_0896C1C4:;
    v0 = LD_U8(s0+32);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = (u32)(s32)LD_S16(s0+18); goto L_0896C1FC; }
    goto L_0896C1D0;
L_0896C1D0:;
    v0 = s4 + 0;
    goto L_0896C1D4;
L_0896C1D4:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_0896C1FC:;
    s2 = 0 + 0;
    { u64 r_ = func_088353B8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896C204;
L_0896C204:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 7; goto L_0896C21C; }
    goto L_0896C20C;
L_0896C20C:;
    a0 = LD32(v0+28);
    v0 = func_08A66DBC(a0);
    goto L_0896C214;
L_0896C214:;
    s2 = v0 + 0;
    v0 = 7;
    goto L_0896C21C;
L_0896C21C:;
    cnd_ = s2 == v0;
    a1 = s0 + 20;
    if (cnd_) { goto L_0896C1D0; }
    goto L_0896C224;
L_0896C224:;
    f12 = BITSF(LD32(s1+180));
    a2 = LD32(s1+184);
    f13 = BITSF(0);
    a0 = sp + 32;
    { rv_t r_ = func_088EC5E8(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0896C238;
L_0896C238:;
    v0 = s4 + 0;
    goto L_0896C1D4;
L_0896C240:;
    ST32(s1+144, FBITS(f0));
    goto L_0896C1D0;
}

/* 0896C248 */
u64 func_0896C248(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896C248:;
    sp = sp - 16;
    v0 = D_08ADB30C - (-19700);
    s0 = v0 - 19700;
    v0 = a0 + 0;
    a1 = a1 ^ 0xffff;
    v0 = v0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    t0 = D_08C28730 - (-30928);
    t1 = D_08C28740 - (-30912);
    t2 = D_08C28750 - (-30896);
    a1 = a1 & v0;
    v1 = t0 - 30928;
    a2 = t1 - 30912;
    a3 = t2 - 30896;
    cnd_ = a1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0896C340; }
    goto L_0896C294;
L_0896C294:;
    v0 = D_08AEE1E0 - (-7712);
    f4 = BITSF(LD32(v0-7712));
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
    ST32(a2+12, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    ST32(t0-30928, FBITS(f2));
    ST32(t1-30912, FBITS(f6));
    ST32(t2-30896, FBITS(f1));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896C320;
L_0896C320:;
    v1 = D_08B1B83C - (-18372);
    v1 = v1 - 18372;
    ST32(v1+20, v0);
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896C334;
L_0896C334:;
    v1 = D_08B1B898 - (-18280);
    v1 = v1 - 18280;
    ST32(v1+20, v0);
    goto L_0896C340;
L_0896C340:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0896C350 */
rv_t func_0896C350(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896C350:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0896C248(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896C364;
L_0896C364:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0896C370 */
rv_t func_0896C370(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2], vr3 = v[3], vr4 = v[4], vr16 = v[16], vr17 = v[17], vr18 = v[18], vr20 = v[20], vr21 = v[21], vr22 = v[22], vr23 = v[23], vr24 = v[24], vr25 = v[25], vr26 = v[26], vr27 = v[27], vr28 = v[28], vr29 = v[29], vr30 = v[30], vr31 = v[31], vr88 = v[88], vr89 = v[89], vr90 = v[90], vr91 = v[91], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr108 = v[108], vr109 = v[109], vr110 = v[110], vr111 = v[111], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr126 = v[126], vr127 = v[127];
    u8 stack_[480] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 480);
L_0896C370:;
    sp = sp - 480;
    v0 = a0 + 112;
    s5 = a0 + 0;
    a1 = 0 + 0;
    v1 = LD32(v0+92);
    ST32(sp+228, v0);
    ST32(sp+224, v1);
    v1 = v1 + 12;
    f23 = BITSF(LD32(a0+372));
    f22 = BITSF(LD32(a0+376));
    f25 = BITSF(LD32(a0+384));
    f24 = BITSF(LD32(a0+388));
    a0 = sp + 0;
    goto L_0896C3E8;
L_0896C3E8:;
    a1 = a1 + 1;
    v0 = a1 < 0x9u;
    ST32(a0, v1);
    v1 = v1 + 28;
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0896C3E8; }
    goto L_0896C400;
L_0896C400:;
    a0 = D_08AEE1EC - (-7700);
    f0 = BITSF(LD32(a0-7700));
    f1 = f22 + f24;
    ST32(sp+52, 0);
    {u32 a_=sp+(320);vr20=BITSF(LD32(a_+0));vr21=BITSF(LD32(a_+4));vr22=BITSF(LD32(a_+8));vr23=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);vr24=BITSF(LD32(a_+0));vr25=BITSF(LD32(a_+4));vr26=BITSF(LD32(a_+8));vr27=BITSF(LD32(a_+12));}
    ST32(sp+48, FBITS(f0));
    {u32 a_=sp+(352);vr28=BITSF(LD32(a_+0));vr29=BITSF(LD32(a_+4));vr30=BITSF(LD32(a_+8));vr31=BITSF(LD32(a_+12));}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    ST32(sp+56, 0);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr20));ST32(a_+4,FBITS(vr21));ST32(a_+8,FBITS(vr22));ST32(a_+12,FBITS(vr23));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    ST32(sp+68, FBITS(f1));
    {float s0=vr28;float s1=vr29;float s2=vr30;float s3=vr31;float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr28));ST32(a_+4,FBITS(vr29));ST32(a_+8,FBITS(vr30));ST32(a_+12,FBITS(vr31));}
    ST32(sp+64, 0);
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr28=d0;vr29=d1;vr30=d2;vr31=d3;}
    fp = 0 + 0;
    ST32(sp+72, 0);
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr115;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float t0=vr121;float d0=s0*t0;vr115=d0;}
    {float s0=vr115;float t0=vr122;float d0=s0*t0;vr123=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr123;float s1=vr127;float t=0;t+=s0;t+=s1;vr96=t;}
    {float s0=vr115;float t0=vr118;float d0=s0*t0;vr123=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float d0=-s0;float d1=-s1;vr126=d0;vr127=d1;}
    {float s0=vr123;float s1=vr127;float t=0;t+=s0;t+=s1;vr97=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;vr98=d0;}
    {float s0=vr116;float t0=vr122;float d0=s0*t0;vr100=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;vr101=d0;}
    {float s0=vr120;float d0=-s0;vr102=d0;}
    {float s0=vr120;float t0=vr117;float d0=s0*t0;vr124=d0;}
    {float s0=vr124;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;vr104=t;}
    {float s0=vr124;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;vr105=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;vr106=d0;}
    {ST32(sp+(80),FBITS(vr96));}
    {ST32(sp+(84),FBITS(vr97));}
    {ST32(sp+(88),FBITS(vr98));}
    {ST32(sp+(92),FBITS(vr100));}
    {ST32(sp+(96),FBITS(vr101));}
    {ST32(sp+(100),FBITS(vr102));}
    {ST32(sp+(104),FBITS(vr104));}
    {ST32(sp+(108),FBITS(vr105));}
    {ST32(sp+(112),FBITS(vr106));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+88);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(304);vr16=BITSF(LD32(a_+0));vr17=BITSF(LD32(a_+4));vr18=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = LD32(sp+92);
    v1 = LD32(sp+96);
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+100);
    {vr1=BITSF(v1);}
    v1 = LD32(sp+104);
    {vr2=BITSF(v0);}
    v0 = LD32(sp+108);
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {vr0=BITSF(v1);}
    v1 = LD32(sp+112);
    {vr1=BITSF(v0);}
    {vr2=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr88=d0;vr89=d1;vr90=d2;vr91=d3;}
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr24));ST32(a_+4,FBITS(vr25));ST32(a_+8,FBITS(vr26));ST32(a_+12,FBITS(vr27));}
    {float s0=vr24;float s1=vr25;float s2=vr26;float s3=vr27;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr20=d0;vr21=d1;vr22=d2;vr23=d3;}
    {float s0=vr108;float s1=vr109;float s2=vr110;float s3=vr111;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr0=d0;vr1=d1;vr2=d2;vr3=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(vr16));ST32(a_+4,FBITS(vr17));ST32(a_+8,FBITS(vr18));ST32(a_+12,FBITS(v[19]));}
    {vr0=BITSF(v1);}
    {float s0=vr88;float s1=vr89;float s2=vr90;float s3=vr91;float d0=s0;float d1=s1;float d2=s2;float d3=s3;vr24=d0;vr25=d1;vr26=d2;vr27=d3;}
    v1 = LD32(sp+56);
    {vr1=BITSF(v0);}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(vr88));ST32(a_+4,FBITS(vr89));ST32(a_+8,FBITS(vr90));ST32(a_+12,FBITS(vr91));}
    {vr2=BITSF(v1);}
    {float t0=vr0;float t1=vr1;float t2=vr2;float o0=0;o0+=vr16*t0;o0+=vr17*t1;o0+=vr18*t2;float o1=0;o1+=vr20*t0;o1+=vr21*t1;o1+=vr22*t2;float o2=0;o2+=vr24*t0;o2+=vr25*t1;o2+=vr26*t2;vr4=o0;v[5]=o1;v[6]=o2;}
    {v0=FBITS(v[6]);}
    {v1=FBITS(vr4);}
    ST32(sp+56, v0);
    {a0=FBITS(v[5]);}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[12]));ST32(a_+4,FBITS(v[13]));ST32(a_+8,FBITS(v[14]));ST32(a_+12,FBITS(v[15]));}
    ST32(sp+48, v1);
    ST32(sp+144, v1);
    ST32(sp+152, v0);
    ST32(sp+128, v1);
    v1 = D_08AEE1F0 - (-7696);
    ST32(sp+136, v0);
    v0 = D_08ADB328 - (-19672);
    ST32(sp+52, a0);
    ST32(sp+148, a0);
    ST32(sp+132, a0);
    f26 = BITSF(LD32(v0-19672));
    f21 = BITSF(LD32(v1-7696));
    goto L_0896C5BC;
L_0896C5BC:;
    fcc = FCMP(f26, f21, 2);
    cnd_ = fcc;
    s6 = 0 + 0;
    if (cnd_) { goto L_0896C924; }
    goto L_0896C5CC;
L_0896C5CC:;
    s7 = sp + 144;
    v0 = 0 + 0;
    goto L_0896C5D4;
L_0896C5D4:;
    cnd_ = fp != 0;
    f0 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_0896C97C; }
    goto L_0896C5DC;
L_0896C5DC:;
    v1 = D_08AEE1EC - (-7700);
    f0 = BITSF(LD32(v1-7700));
    ST32(sp+128, 0);
    ST32(sp+132, FBITS(f0));
    ST32(sp+136, 0);
    goto L_0896C5F0;
L_0896C5F0:;
    a0 = D_08ADB324 - (-19676);
    a0 = a0 - 19676;
    v1 = v0 + a0;
    a3 = LD32(v1);
    f0 = BITSF(LD32(sp+128));
    f1 = BITSF(LD32(sp+136));
    a1 = (s32)a3 < 3;
    ST32(s7, FBITS(f0));
    v0 = a1 ^ 0x1;
    a0 = a3 < 0x1u;
    f0 = BITSF(LD32(sp+132));
    v0 = v0 | a0;
    f2 = f23;
    ST32(s7+4, FBITS(f0));
    ST32(s7+8, FBITS(f1));
    cnd_ = v0 != 0;
    f3 = BITSF(LD32(v1+4));
    if (cnd_) { goto L_0896C638; }
    goto L_0896C634;
L_0896C634:;
    f2 = f25;
    goto L_0896C638;
L_0896C638:;
    v0 = a1 ^ 0x1;
    v0 = v0 | a0;
    cnd_ = v0 != 0;
    f4 = f22;
    if (cnd_) { goto L_0896C64C; }
    goto L_0896C648;
L_0896C648:;
    f4 = f24;
    goto L_0896C64C;
L_0896C64C:;
    v1 = LD32(sp+224);
    v0 = a3 << 3;
    v0 = v0 - a3;
    v0 = v0 << 2;
    a2 = v0 + v1;
    v1 = LD32(sp+228);
    a1 = a2 + 12;
    f20 = f2 * f3;
    a0 = LD32(v1+92);
    v1 = LD32(a2+12);
    a0 = a0 + v0;
    ST32(a0+12, v1);
    s2 = a0 + 12;
    v0 = LD32(a1+4);
    ST32(s2+4, v0);
    v1 = LD32(a1+8);
    ST32(s2+8, v1);
    v0 = LD32(a1+12);
    ST32(s2+12, v0);
    f0 = BITSF(LD32(a2+8));
    f1 = BITSF(LD32(a2));
    f2 = BITSF(LD32(a2+4));
    ST32(a0+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    cnd_ = fp != 0;
    ST32(a0+4, FBITS(f2));
    if (cnd_) { goto L_0896C6B8; }
    goto L_0896C6B4;
L_0896C6B4:;
    f20 = f4 * f3;
    goto L_0896C6B8;
L_0896C6B8:;
    f0 = BITSF(0);
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    if (cnd_) { s6 = s6 + 1; goto L_0896C900; }
    goto L_0896C6CC;
L_0896C6CC:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f3 = BITSF(LD32(s2+12));
    ST32(sp+176, FBITS(f0));
    s1 = a3 - 1;
    ST32(sp+180, FBITS(f1));
    v0 = LD32(sp+176);
    v1 = LD32(sp+180);
    ST32(sp+184, FBITS(f2));
    ST32(sp+188, FBITS(f3));
    ST32(sp+160, v0);
    ST32(sp+164, v1);
    v0 = LD32(sp+184);
    v1 = LD32(sp+188);
    ST32(sp+168, v0);
    cnd_ = (s32)s1 < 0;
    ST32(sp+172, v1);
    if (cnd_) { goto L_0896C770; }
    goto L_0896C720;
L_0896C720:;
    v0 = s1 << 2;
    s0 = v0 + sp;
    s4 = sp + 176;
    s3 = sp + 160;
    goto L_0896C730;
L_0896C730:;
    a3 = LD32(s0);
    a0 = s4 + 0;
    a1 = s5 + 0;
    a2 = s3 + 0;
    f0 = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;__auto_type vr_t_ = func_0880CAA4(a0, a2, a3); vr0=v[0];vr1=v[1];vr2=v[2];vr4=v[4];vr_t_; });
    goto L_0896C744;
L_0896C744:;
    v0 = LD32(sp+176);
    v1 = LD32(sp+184);
    s1 = s1 - 1;
    ST32(sp+160, v0);
    s0 = s0 - 4;
    v0 = LD32(sp+180);
    ST32(sp+168, v1);
    ST32(sp+164, v0);
    v0 = LD32(sp+188);
    cnd_ = (s32)s1 >= 0;
    ST32(sp+172, v0);
    if (cnd_) { goto L_0896C730; }
    goto L_0896C770;
L_0896C770:;
    {vr4=0.31830988618f;}
    {u32 a_=sp+(384);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    a0 = FBITS(f20);
    {vr0=BITSF(a0);}
    {float s0=vr0;float t0=vr4;float d0=s0*t0;vr4=d0;}
    {vr112=BITSF(LD32(sp+(160)));}
    {vr113=BITSF(LD32(sp+(164)));}
    {vr114=BITSF(LD32(sp+(168)));}
    {vr115=BITSF(LD32(sp+(172)));}
    {vr116=BITSF(LD32(sp+(144)));}
    {vr117=BITSF(LD32(sp+(148)));}
    {vr118=BITSF(LD32(sp+(152)));}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr115;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr96=d0;vr97=d1;vr98=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr116;float t1=vr117;float t2=vr118;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[103]=sum;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=v[103];vr100=s0*t0;vr101=s1*t0;vr102=s2*t0;}
    {float s0=vr100;float s1=vr101;float s2=vr102;float t0=2.f;float t1=2.f;float t2=2.f;float d0=s0*t0;float d1=s1*t1;float d2=s2*t2;vr100=d0;vr101=d1;vr102=d2;}
    {float s0=vr115;float t0=vr115;float d0=s0*t0;vr104=d0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr112;float t1=vr113;float t2=vr114;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr105=sum;}
    {float s0=vr104;float t0=vr105;float d0=s0-t0;v[107]=d0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float t0=v[107];vr104=s0*t0;vr105=s1*t0;vr106=s2*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr100;float t1=vr101;float t2=vr102;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float t0=vr104;float t1=vr105;float t2=vr106;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;vr120=d0;vr121=d1;vr122=d2;}
    {ST32(sp+(144),FBITS(vr120));}
    {ST32(sp+(148),FBITS(vr121));}
    {ST32(sp+(152),FBITS(vr122));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(vr1));ST32(a_+8,FBITS(vr2));ST32(a_+12,FBITS(vr3));}
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    {float s0=vr4;float d0=cosf(s0*1.57079632679f);v[8]=d0;}
    {float s0=vr4;float d0=sinf(s0*1.57079632679f);vr4=d0;}
    {u32 a_=sp+(368);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));vr3=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+152);
    {vr1=BITSF(v1);}
    {vr2=BITSF(v0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr4;vr0=s0*t0;vr1=s1*t0;vr2=s2*t0;}
    {float s0=v[8];float d0=s0;vr3=d0;}
    {a0=FBITS(vr1);}
    f3 = BITSF(a0);
    {v1=FBITS(vr0);}
    {v0=FBITS(vr3);}
    ST32(sp+176, v1);
    f4 = BITSF(v0);
    ST32(sp+180, FBITS(f3));
    {v0=FBITS(vr2);}
    f1 = BITSF(v0);
    ST32(sp+188, FBITS(f4));
    {v[8]=BITSF(v1);}
    v0 = FBITS(f1);
    v1 = FBITS(f4);
    ST32(sp+184, FBITS(f1));
    {v[9]=BITSF(a0);}
    {v[10]=BITSF(v0);}
    v0 = LD32(sp+176);
    {v[11]=BITSF(v1);}
    v1 = LD32(sp+180);
    ST32(sp+192, v0);
    ST32(sp+196, v1);
    v0 = LD32(sp+184);
    v1 = LD32(sp+188);
    ST32(sp+200, v0);
    ST32(sp+204, v1);
    v0 = LD32(s2);
    v1 = LD32(s2+4);
    {vr0=BITSF(v0);}
    v0 = LD32(s2+8);
    {vr1=BITSF(v1);}
    v1 = LD32(s2+12);
    {vr2=BITSF(v0);}
    {vr3=BITSF(v1);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float s3=vr3;float t0=v[8];float t1=v[9];float t2=v[10];float t3=v[11];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;vr4=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {a0=FBITS(v[7]);}
    {v1=FBITS(v[5]);}
    f4 = BITSF(a0);
    ST32(sp+212, v1);
    {a0=FBITS(v[6]);}
    {v0=FBITS(vr4);}
    ST32(sp+216, a0);
    ST32(sp+208, v0);
    v1 = LD32(sp+216);
    v0 = LD32(sp+212);
    a0 = LD32(sp+208);
    ST32(sp+220, FBITS(f4));
    ST32(sp+196, v0);
    ST32(sp+200, v1);
    v0 = LD32(sp+220);
    ST32(sp+192, a0);
    ST32(sp+204, v0);
    ST32(s2, a0);
    v0 = LD32(sp+196);
    ST32(s2+4, v0);
    v1 = LD32(sp+200);
    ST32(s2+8, v1);
    v0 = LD32(sp+204);
    ST32(s2+12, v0);
    s6 = s6 + 1;
    goto L_0896C900;
L_0896C900:;
    a0 = D_08ADB324 - (-19676);
    v0 = s6 << 3;
    a0 = a0 - 19676;
    v1 = v0 + a0;
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f0, f21, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0896C5D4; }
    goto L_0896C924;
L_0896C924:;
    fp = fp + 1;
    v0 = fp < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0896C5BC; }
    goto L_0896C934;
L_0896C934:;
    sp = sp + 480;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[126]=vr126;v[127]=vr127;return (rv_t){ v0, v1, f0 }; }
L_0896C97C:;
    f1 = BITSF(LD32(sp+52));
    ST32(sp+128, FBITS(f0));
    f0 = BITSF(LD32(sp+56));
    ST32(sp+132, FBITS(f1));
    ST32(sp+136, FBITS(f0));
    goto L_0896C5F0;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;v[3]=vr3;v[4]=vr4;v[16]=vr16;v[17]=vr17;v[18]=vr18;v[20]=vr20;v[21]=vr21;v[22]=vr22;v[23]=vr23;v[24]=vr24;v[25]=vr25;v[26]=vr26;v[27]=vr27;v[28]=vr28;v[29]=vr29;v[30]=vr30;v[31]=vr31;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[126]=vr126;v[127]=vr127;
}

/* 0896C994 */
u64 func_0896C994(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0896C994:;
    sp = sp - 16;
    s0 = D_08B21148 - (4424);
    a1 = a0 + 0;
    v1 = LD32(s0+4424);
    cnd_ = v1 == 0;
    t0 = s0 + 4424;
    if (cnd_) { goto L_0896C9E0; }
    goto L_0896C9B4;
L_0896C9B4:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0896C9BC;
L_0896C9BC:;
    a0 = v0 + 76;
    a2 = v0 + 72;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0896C9EC; }
    goto L_0896C9D4;
L_0896C9D4:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0896C9BC; }
    goto L_0896C9E0;
L_0896C9E0:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0896CA20; }
    goto L_0896C9EC;
L_0896C9EC:;
    cnd_ = a3 == 0;
    v0 = a3 + 0;
    if (cnd_) { goto L_0896CA04; }
    goto L_0896C9F4;
L_0896C9F4:;
    goto L_0896C9F8;
L_0896C9F8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0896CA04:;
    a1 = 0xf0540000u;
    a0 = s0 + 4424;
    a1 = a1 | 0x4375;
    a2 = 1;
    { u64 r_ = func_08AA289C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CA18;
L_0896CA18:;
    goto L_0896C9F8;
L_0896CA20:;
    a2 = 1;
    { u64 r_ = func_08AA289C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0896CA28;
L_0896CA28:;
    a3 = v0 + 0;
    goto L_0896C9EC;
}

/* 0896CA30 */
u32 func_0896CA30(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0896CA30:;
    v0 = 0x7c2b0000u;
    v0 = v0 | 0x85b2;
    cnd_ = a0 == v0;
    v1 = 11;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CA40;
L_0896CA40:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0xb72f0000u;
    if (cnd_) { goto L_0896CB48; }
    goto L_0896CA4C;
L_0896CA4C:;
    v0 = 0x3dc90000u;
    v0 = v0 | 0x5a92;
    cnd_ = a0 == v0;
    v1 = 1;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CA5C;
L_0896CA5C:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0x64910000u;
    if (cnd_) { goto L_0896CAE4; }
    goto L_0896CA68;
L_0896CA68:;
    v0 = 0x24a80000u;
    v0 = v0 | 0xf5b9;
    cnd_ = a0 == v0;
    v1 = 6;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CA78;
L_0896CA78:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0x2a350000u;
    if (cnd_) { goto L_0896CAB0; }
    goto L_0896CA84;
L_0896CA84:;
    v0 = 0x17030000u;
    v0 = v0 | 0x6db8;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CA94;
L_0896CA94:;
    v0 = 0x214c0000u;
    v0 = v0 | 0xaa81;
    v1 = 4;
    goto L_0896CAA0;
L_0896CAA0:;
    cnd_ = a0 != v0;
    if (cnd_) { v1 = (u32)-1; goto L_0896CAA8; }
    goto L_0896CAA8;
L_0896CAA8:;
    v0 = v1 + 0;
    return v0;
L_0896CAB0:;
    v0 = v0 | 0xda6c;
    cnd_ = a0 == v0;
    v1 = 9;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CABC;
L_0896CABC:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x31020000u; goto L_0896CAD8; }
    goto L_0896CAC8;
L_0896CAC8:;
    v0 = 0x25b30000u;
    v0 = v0 | 0x7686;
    goto L_0896CAD0;
L_0896CAD0:;
    v1 = 2;
    goto L_0896CAA0;
L_0896CAD8:;
    v0 = v0 | 0x3428;
    goto L_0896CADC;
L_0896CADC:;
    v1 = 3;
    goto L_0896CAA0;
L_0896CAE4:;
    v0 = v0 | 0xd2dd;
    cnd_ = a0 == v0;
    v1 = 6;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CAF0;
L_0896CAF0:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0x74320000u;
    if (cnd_) { goto L_0896CB18; }
    goto L_0896CAFC;
L_0896CAFC:;
    v0 = 0x4e3d0000u;
    v0 = v0 | 0x1ebd;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CB0C;
L_0896CB0C:;
    v0 = 0x5c130000u;
    v0 = v0 | 0xd641;
    goto L_0896CAA0;
L_0896CB18:;
    v0 = v0 | 0x2bb4;
    cnd_ = a0 == v0;
    v1 = 10;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CB24;
L_0896CB24:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x74620000u; goto L_0896CB3C; }
    goto L_0896CB30;
L_0896CB30:;
    v0 = 0x68800000u;
    v0 = v0 | 0xaf2a;
    goto L_0896CAD0;
L_0896CB3C:;
    v0 = v0 | 0x5aca;
    v1 = 8;
    goto L_0896CAA0;
L_0896CB48:;
    v0 = v0 | 0x936e;
    cnd_ = a0 == v0;
    v1 = 8;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CB54;
L_0896CB54:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0xdec70000u;
    if (cnd_) { goto L_0896CBCC; }
    goto L_0896CB60;
L_0896CB60:;
    v0 = 0x92ca0000u;
    v0 = v0 | 0xafc8;
    cnd_ = a0 == v0;
    v1 = 9;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CB70;
L_0896CB70:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0xaf840000u;
    if (cnd_) { goto L_0896CB9C; }
    goto L_0896CB7C;
L_0896CB7C:;
    v0 = 0x8a970000u;
    v0 = v0 | 0xbc25;
    cnd_ = a0 == v0;
    v1 = 4;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CB8C;
L_0896CB8C:;
    v0 = 0x8b0c0000u;
    v0 = v0 | 0x790;
    v1 = 10;
    goto L_0896CAA0;
L_0896CB9C:;
    v0 = v0 | 0xf6a3;
    cnd_ = a0 == v0;
    v1 = 5;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CBA8;
L_0896CBA8:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xafc70000u; goto L_0896CBC0; }
    goto L_0896CBB4;
L_0896CBB4:;
    v0 = 0x99970000u;
    v0 = v0 | 0x984;
    goto L_0896CADC;
L_0896CBC0:;
    v0 = v0 | 0x295b;
    v1 = 7;
    goto L_0896CAA0;
L_0896CBCC:;
    v0 = v0 | 0x72ff;
    cnd_ = a0 == v0;
    v1 = 5;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CBD8;
L_0896CBD8:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    v0 = 0xf6ba0000u;
    if (cnd_) { goto L_0896CC04; }
    goto L_0896CBE4;
L_0896CBE4:;
    v0 = 0xd2250000u;
    v0 = v0 | 0xaf8e;
    cnd_ = a0 == v0;
    v1 = 11;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CBF4;
L_0896CBF4:;
    v0 = 0xd71a0000u;
    v0 = v0 | 0x9094;
    v1 = 0 + 0;
    goto L_0896CAA0;
L_0896CC04:;
    v0 = v0 | 0x1a37;
    cnd_ = a0 == v0;
    v1 = 7;
    if (cnd_) { goto L_0896CAA8; }
    goto L_0896CC10;
L_0896CC10:;
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xf6d60000u; goto L_0896CC2C; }
    goto L_0896CC1C;
L_0896CC1C:;
    v0 = 0xee7a0000u;
    v0 = v0 | 0x8902;
    goto L_0896CC24;
L_0896CC24:;
    v1 = 1;
    goto L_0896CAA0;
L_0896CC2C:;
    v0 = v0 | 0x69b6;
    goto L_0896CC24;
}
