#include "game.h"

/* 0887625C */
void func_0887625C(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0887625C:;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0+100, a1); goto L_08876268; }
    goto L_08876268;
L_08876268:;
    return;
}

/* 08876270 */
rv_t func_08876270(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876270:;
    sp = sp - 16;
    a2 = a1 & 0xff;
    s0 = a0 + 0;
    a1 = LD_U8(a0+77);
    v0 = LD32(a0+76);
    v0 = (v0 & ~(0x1u << 8)) | ((a2 & 0x1) << 8);
    v1 = v0 & 0x8;
    ST32(a0+76, v0);
    cnd_ = v1 == 0;
    a1 = 0 < a1;
    if (cnd_) { goto L_088762D0; }
    goto L_088762A0;
L_088762A0:;
    v0 = LD_U8(a0+77);
    v0 = 0 < v0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088762D4; }
    goto L_088762B0;
L_088762B0:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_088762E0; }
    goto L_088762B8;
L_088762B8:;
    func_0887666C(a0, a1, t1, t2, t3);
    goto L_088762C0;
L_088762C0:;
    v1 = LD32(s0);
    goto L_088762C4;
L_088762C4:;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088762D0;
L_088762D0:;
    goto L_088762D4;
L_088762D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088762E0:;
    { rv_t r_ = func_08876648(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088762E8;
L_088762E8:;
    v1 = LD32(s0);
    goto L_088762C4;
}

/* 088762F0 */
rv_t func_088762F0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088762F0:;
    sp = sp - 16;
    a2 = a1 & 0xff;
    s0 = a0 + 0;
    a1 = LD_U8(a0+77);
    v0 = LD32(a0+76);
    v0 = (v0 & ~(0x1u << 9)) | ((a2 & 0x1) << 9);
    v1 = v0 & 0x8;
    ST32(a0+76, v0);
    cnd_ = v1 == 0;
    a1 = 0 < a1;
    if (cnd_) { goto L_08876350; }
    goto L_08876320;
L_08876320:;
    v0 = LD_U8(a0+77);
    v0 = 0 < v0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08876354; }
    goto L_08876330;
L_08876330:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_08876360; }
    goto L_08876338;
L_08876338:;
    func_0887666C(a0, a1, t1, t2, t3);
    goto L_08876340;
L_08876340:;
    v1 = LD32(s0);
    goto L_08876344;
L_08876344:;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08876350;
L_08876350:;
    goto L_08876354;
L_08876354:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08876360:;
    { rv_t r_ = func_08876648(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08876368;
L_08876368:;
    v1 = LD32(s0);
    goto L_08876344;
}

/* 08876370 */
rv_t func_08876370(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876370:;
    sp = sp - 16;
    a2 = a1 & 0xff;
    s0 = a0 + 0;
    a1 = LD_U8(a0+77);
    v0 = LD32(a0+76);
    v0 = (v0 & ~(0x1u << 10)) | ((a2 & 0x1) << 10);
    v1 = v0 & 0x8;
    ST32(a0+76, v0);
    cnd_ = v1 == 0;
    a1 = 0 < a1;
    if (cnd_) { goto L_088763D0; }
    goto L_088763A0;
L_088763A0:;
    v0 = LD_U8(a0+77);
    v0 = 0 < v0;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_088763D4; }
    goto L_088763B0;
L_088763B0:;
    cnd_ = a2 == 0;
    a1 = 1;
    if (cnd_) { goto L_088763E0; }
    goto L_088763B8;
L_088763B8:;
    func_0887666C(a0, a1, t1, t2, t3);
    goto L_088763C0;
L_088763C0:;
    v1 = LD32(s0);
    goto L_088763C4;
L_088763C4:;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088763D0;
L_088763D0:;
    goto L_088763D4;
L_088763D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088763E0:;
    { rv_t r_ = func_08876648(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088763E8;
L_088763E8:;
    v1 = LD32(s0);
    goto L_088763C4;
}

/* 088763F0 */
void func_088763F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088763F0:;
    sp = sp - 32;
    s2 = a0 + 0;
    s1 = D_08B29024 - (-28636);
    s3 = s1 - 28636;
    s4 = s3 + 16;
    a0 = LD32(a0);
    v1 = LD32(s3+4);
    v0 = LD32(a0-12);
    v1 = v1 - 1;
    a0 = 12;
    v0 = s2 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08876440;
L_08876440:;
    a0 = LD32(s1-28636);
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
    f0 = func_08AB0544(a0, 0, 0, 0);
    goto L_08876474;
L_08876474:;
    v0 = LD32(s4+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088764B4; }
    goto L_08876480;
L_08876480:;
    v1 = LD32(s2);
    s1 = LD32(s3+16);
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    cnd_ = s1 == 0;
    v1 = LD_U16(v0+8);
    if (cnd_) { goto L_088764B4; }
    goto L_08876498;
L_08876498:;
    v0 = LD32(s1);
    goto L_0887649C;
L_0887649C:;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088764F0; }
    goto L_088764A8;
L_088764A8:;
    s1 = LD32(s1+4);
    cnd_ = s1 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0887649C; }
    goto L_088764B4;
L_088764B4:;
    { rv_t r_ = func_08832030(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088764BC;
L_088764BC:;
    v1 = LD32(s4+4);
    ST32(v0, s2);
    ST32(v0+4, v1);
    ST8(v0+8, 0);
    ST32(s4+4, v0);
    goto L_088764D0;
L_088764D0:;
    sp = sp + 32;
    return;
L_088764F0:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088764B4; }
    goto L_088764F8;
L_088764F8:;
    v0 = LD32(s1);
    cnd_ = v0 != v1;
    if (cnd_) { goto L_088764B4; }
    goto L_08876504;
L_08876504:;
    s1 = LD32(s1+8);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088764B4; }
    goto L_08876510;
L_08876510:;
    v0 = LD32(s1);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_08876534; }
    goto L_0887651C;
L_0887651C:;
    s1 = LD32(s1+4);
    goto L_08876520;
L_08876520:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088764B4; }
    goto L_08876528;
L_08876528:;
    v0 = LD32(s1);
    cnd_ = v0 != s2;
    if (cnd_) { s1 = LD32(s1+4); goto L_08876520; }
    goto L_08876534;
L_08876534:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_088764B4; }
    goto L_0887653C;
L_0887653C:;
    v1 = LD32(s1);
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    v1 = v1 + a0;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088764B4; }
    goto L_0887655C;
L_0887655C:;
    ST8(s1+8, 0);
    goto L_088764D0;
}

/* 08876564 */
void func_08876564(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876564:;
    sp = sp - 16;
    s1 = D_08B29024 - (-28636);
    s2 = s1 - 28636;
    s0 = a0 + 0;
    v1 = LD32(a0);
    a0 = LD32(s2+4);
    a1 = LD32(s1-28636);
    v0 = LD32(v1-12);
    a0 = a0 - 1;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a0 = LD32(a1);
    cnd_ = a0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088765D4; }
    goto L_088765B8;
L_088765B8:;
    v0 = LD32(a0);
    goto L_088765BC;
L_088765BC:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_08876600; }
    goto L_088765C4;
L_088765C4:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088765BC; }
    goto L_088765D4;
L_088765D4:;
    a0 = s1 - 28636;
    a1 = s0 + 0;
    a0 = a0 + 16;
    a2 = 1;
    func_08AB0694(a0, a1, t1, t2, t3);
    goto L_088765E8;
L_088765E8:;
    sp = sp + 16;
    return;
L_08876600:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08876610; }
    goto L_08876608;
L_08876608:;
    ST8(a0+8, v0);
    goto L_088765D4;
L_08876610:;
    cnd_ = a2 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_08876638; }
    goto L_08876618;
L_08876618:;
    v0 = LD32(a0+4);
    ST32(a2+4, v0);
    goto L_08876620;
L_08876620:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08876628;
L_08876628:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_088765D4;
L_08876638:;
    v1 = LD32(a0+4);
    v0 = a3 + v0;
    ST32(v0, v1);
    goto L_08876620;
}

/* 08876648 */
rv_t func_08876648(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876648:;
    a1 = a0 + 0;
    a0 = D_08B29040 - (-28608);
    sp = sp - 16;
    a0 = a0 - 28608;
    { rv_t r_ = func_08AB07E8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08876660;
L_08876660:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887666C */
void func_0887666C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887666C:;
    a2 = a1 + 0;
    a1 = a0 + 0;
    a0 = D_08B29040 - (-28608);
    sp = sp - 16;
    a2 = a2 & 0xff;
    a0 = a0 - 28608;
    func_08AB0694(a0, a1, t1, t2, t3);
    goto L_0887668C;
L_0887668C:;
    sp = sp + 16;
    return;
}

/* 08876698 */
rv_t func_08876698(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08876698:;
    sp = sp - 32;
    s1 = a0 ^ 0x1;
    v1 = s1 < 0x1u;
    s0 = a1 ^ 0xffff;
    v0 = s0 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08876744; }
    goto L_088766D0;
L_088766D0:;
    a1 = s0 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    v0 = s2 < 0x1u;
    if (cnd_) { goto L_088766FC; }
    goto L_088766E4;
L_088766E4:;
    v0 = D_08B29040 - (-28608);
    v1 = v0 - 28608;
    ST32(v0-28608, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    v0 = s2 < 0x1u;
    goto L_088766FC;
L_088766FC:;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08876718; }
    goto L_08876708;
L_08876708:;
    v0 = D_08B29024 - (-28636);
    a0 = LD32(v0-28636);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08876734; }
    goto L_08876718;
L_08876718:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08876734:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887673C;
L_0887673C:;
    goto L_08876718;
L_08876744:;
    s4 = D_08B29024 - (-28636);
    s3 = s4 - 28636;
    a0 = 128;
    v0 = 32;
    ST32(s3+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887675C;
L_0887675C:;
    a0 = 0 + 0;
    a1 = LD32(s3+4);
    cnd_ = a1 == 0;
    ST32(s4-28636, v0);
    if (cnd_) { goto L_08876784; }
    goto L_0887676C;
L_0887676C:;
    v1 = v0 + 0;
    goto L_08876770;
L_08876770:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08876770; }
    goto L_08876784;
L_08876784:;
    v0 = s4 - 28636;
    v1 = v0 + 16;
    ST32(s3+8, 0);
    ST32(v0+16, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s3+12, 0);
    goto L_088766D0;
}

/* 088767A4 */
rv_t func_088767A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088767A4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08876698(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088767B8;
L_088767B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088767C4 */
rv_t func_088767C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088767C4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_08876698(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088767D8;
L_088767D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088767E4 */
void func_088767E4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088767E4:;
    sp = sp - 16;
    a0 = D_08B290B8 - (-28488);
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v0-31332));
    f1 = BITSF(LD32(a0-28488));
    v0 = D_08AEBFFC - (-16388);
    a1 = D_08B290BC - (-28484);
    f1 = f1 + f0;
    f0 = BITSF(LD32(v0-16388));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    ST32(a0-28488, FBITS(f1));
    if (cnd_) { goto L_08876828; }
    goto L_0887681C;
L_0887681C:;
    goto L_08876820;
L_08876820:;
    sp = sp + 16;
    return;
L_08876828:;
    v1 = LD32(a1-28484);
    v0 = 1;
    ST32(a0-28488, 0);
    v0 = v0 - v1;
    a0 = v0 + 0;
    ST32(a1-28484, v0);
    func_08876A00(a0, t1, t2, t3);
    goto L_08876844;
L_08876844:;
    goto L_08876820;
}

/* 0887684C */
void func_0887684C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887684C:;
    sp = sp - 16;
    v0 = D_08B290B8 - (-28488);
    s0 = D_08B290BC - (-28484);
    a0 = 0 + 0;
    ST32(v0-28488, 0);
    ST32(s0-28484, 0);
    func_08876A00(a0, t1, t2, t3);
    goto L_08876870;
L_08876870:;
    v0 = 1;
    a0 = 1;
    ST32(s0-28484, v0);
    func_08876A00(a0, 0, 0, 0);
    goto L_08876880;
L_08876880:;
    ST32(s0-28484, 0);
    sp = sp + 16;
    return;
}

/* 08876894 */
u32 func_08876894(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876894:;
    sp = sp - 16;
    v0 = 999;
    cnd_ = a0 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_08876908; }
    goto L_088768A8;
L_088768A8:;
    a0 = D_08B29098 - (-28520);
    v1 = a0 - 28520;
    v0 = LD32(v1+4);
    a1 = LD32(a0-28520);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088768F4; }
    goto L_088768D4;
L_088768D4:;
    v0 = LD32(a0);
    goto L_088768D8;
L_088768D8:;
    v1 = LD32(v0);
    cnd_ = v1 == a2;
    a1 = v0 + 0;
    if (cnd_) { goto L_08876924; }
    goto L_088768E4;
L_088768E4:;
    a0 = LD32(a0+4);
    goto L_088768E8;
L_088768E8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_088768D8; }
    goto L_088768F0;
L_088768F0:;
    a1 = 0 + 0;
    goto L_088768F4;
L_088768F4:;
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_08876908; }
    goto L_088768FC;
L_088768FC:;
    sp = sp + 16;
    return v0;
L_08876908:;
    a0 = D_08B290A8 - (-28504);
    a1 = a2 + 0;
    a0 = a0 - 28504;
    a2 = 1;
    { u64 r_ = func_08AB0AA0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887691C;
L_0887691C:;
    v0 = 0 < v0;
    goto L_088768FC;
L_08876924:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_088768E8; }
    goto L_08876930;
L_08876930:;
    goto L_088768F4;
}

/* 08876938 */
rv_t func_08876938(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08876938:;
    sp = sp - 32;
    v1 = D_08B29098 - (-28520);
    s3 = a0 + 0;
    s1 = D_08B290BC - (-28484);
    a1 = s3 + 0;
    s0 = v1 - 28520;
    a2 = 1;
    v0 = LD32(s1-28484);
    v0 = v0 << 4;
    v0 = v0 + s0;
    a0 = v0 + 0;
    { u64 r_ = func_08AB0AA0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887697C;
L_0887697C:;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_088769A0; }
    goto L_08876984;
L_08876984:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088769A0:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088769A8;
L_088769A8:;
    s1 = LD32(s1-28484);
    ST32(v0, s3);
    a0 = 12;
    s1 = s1 << 4;
    s1 = s1 + s0;
    s0 = LD32(s1+4);
    s2 = v0 + 0;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088769C8;
L_088769C8:;
    s0 = s0 - 1;
    a0 = LD32(s1);
    s0 = s3 & s0;
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    v1 = v1 + 1;
    ST32(s1+12, v1);
    ST32(v0+4, a1);
    ST32(v0, s2);
    ST32(s0, v0);
    ST8(v0+8, 0);
    goto L_08876984;
}

/* 08876A00 */
void func_08876A00(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08876A00:;
    sp = sp - 48;
    v0 = D_08B29098 - (-28520);
    v0 = v0 - 28520;
    a0 = a0 << 4;
    a0 = a0 + v0;
    a1 = sp + 0;
    v1 = LD32(a0+8);
    v0 = LD32(a0+4);
    ST32(sp, a0);
    v1 = v1 + 1;
    ST32(a0+8, v1);
    ST32(sp+8, 0);
    cnd_ = v0 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08876A9C; }
    goto L_08876A50;
L_08876A50:;
    a0 = LD32(a0);
    a3 = v0 + 0;
    goto L_08876A58;
L_08876A58:;
    a2 = LD32(a1+4);
    v0 = a2 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a1+8, v1);
    if (cnd_) { goto L_08876A8C; }
    goto L_08876A70;
L_08876A70:;
    v1 = LD32(a1+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08876AA0; }
    goto L_08876A80;
L_08876A80:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a1+8, v0);
    if (cnd_) { goto L_08876A70; }
    goto L_08876A8C;
L_08876A8C:;
    v0 = a2 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08876A58; }
    goto L_08876A9C;
L_08876A9C:;
    a0 = LD32(sp+8);
    goto L_08876AA0;
L_08876AA0:;
    cnd_ = a0 == 0;
    v0 = D_08B29098 - (-28520);
    if (cnd_) { goto L_08876B2C; }
    goto L_08876AA8;
L_08876AA8:;
    s3 = v0 - 28520;
    s2 = D_08B290BC - (-28484);
    s0 = LD32(a0);
    goto L_08876AB4;
L_08876AB4:;
    a1 = 1;
    a0 = sp + 0;
    func_08AB0B0C(a0);
    goto L_08876AC0;
L_08876AC0:;
    cnd_ = s0 == 0;
    v1 = LD32(s2-28484);
    if (cnd_) { goto L_08876B20; }
    goto L_08876AC8;
L_08876AC8:;
    a0 = LD32(s0);
    v1 = v1 << 4;
    s1 = v1 + s3;
    v0 = LD32(s1+4);
    v1 = LD32(s1);
    v0 = v0 - 1;
    a0 = a0 & v0;
    a0 = a0 << 2;
    v0 = a0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08876B18; }
    goto L_08876AF8;
L_08876AF8:;
    v1 = v0 + 0;
    v0 = LD32(a0);
    goto L_08876B00;
L_08876B00:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08876BEC; }
    goto L_08876B08;
L_08876B08:;
    a1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08876B00; }
    goto L_08876B18;
L_08876B18:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08876B20;
L_08876B20:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08876AB4; }
    goto L_08876B2C;
L_08876B2C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08876BB4; }
    goto L_08876B40;
L_08876B40:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08876BB4; }
    goto L_08876B4C;
L_08876B4C:;
    v0 = LD32(s1);
    goto L_08876B50;
L_08876B50:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08876BA4; }
    goto L_08876B64;
L_08876B64:;
    v0 = LD_U8(s0+8);
    goto L_08876B68;
L_08876B68:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08876BE4; }
    goto L_08876B70;
L_08876B70:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08876BD4; }
    goto L_08876B78;
L_08876B78:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08876B80;
L_08876B80:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08876B8C;
L_08876B8C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08876B98;
L_08876B98:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08876B68; }
    goto L_08876BA0;
L_08876BA0:;
    v1 = LD32(s1+4);
    goto L_08876BA4;
L_08876BA4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08876B50; }
    goto L_08876BB4;
L_08876BB4:;
    sp = sp + 48;
    return;
L_08876BD4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08876B80;
L_08876BE4:;
    s0 = LD32(s0+4);
    goto L_08876B98;
L_08876BEC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08876BFC; }
    goto L_08876BF4;
L_08876BF4:;
    ST8(a0+8, v0);
    goto L_08876B18;
L_08876BFC:;
    cnd_ = a1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08876C20; }
    goto L_08876C04;
L_08876C04:;
    ST32(a1+4, v0);
    goto L_08876C08;
L_08876C08:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08876C10;
L_08876C10:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08876B18;
L_08876C20:;
    ST32(v1, v0);
    goto L_08876C08;
}

/* 08876C28 */
void func_08876C28(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08876C28:;
    v0 = 0x30000u;
    v0 = v0 | 0xd40;
    v1 = D_08B290C4 - (-28476);
    ST32(v1-28476, v0);
    a0 = 999;
    v0 = D_08B290C8 - (-28472);
    v1 = D_08B290C0 - (-28480);
    ST32(v0-28472, a0);
    ST8(v1-28480, 0);
    return;
}

/* 08876C50 */
void func_08876C50(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08876C50:;
    sp = sp - 32;
    func_08878328();
    goto L_08876C64;
L_08876C64:;
    v1 = D_08B2BB6D - (-17555);
    a1 = LD_U8(v1-17555);
    v0 = 0x30000u;
    v0 = v0 | 0xd40;
    v1 = D_08B290C4 - (-28476);
    ST32(v1-28476, v0);
    a0 = 999;
    v0 = D_08B290C8 - (-28472);
    cnd_ = a1 != 0;
    ST32(v0-28472, a0);
    if (cnd_) { goto L_08876DA8; }
    goto L_08876C8C;
L_08876C8C:;
    a0 = D_08B290CC - (-28468);
    goto L_08876C90;
L_08876C90:;
    a0 = a0 - 28468;
    func_08875404(a0);
    goto L_08876C98;
L_08876C98:;
    a0 = D_08B2915C - (-28324);
    v0 = a0 - 28324;
    v1 = LD32(v0+4);
    ST32(sp, v0);
    a1 = sp + 0;
    ST32(sp+4, 0);
    cnd_ = v1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08876CE8; }
    goto L_08876CB8;
L_08876CB8:;
    a3 = LD32(a0-28324);
    a2 = v1 + 0;
    goto L_08876CC0;
L_08876CC0:;
    v0 = LD32(a1+4);
    v1 = v0 << 2;
    v1 = v1 + a3;
    a0 = LD32(v1);
    v0 = v0 + 1;
    v1 = v0 < a2;
    cnd_ = a0 != 0;
    ST32(a1+8, a0);
    if (cnd_) { goto L_08876CE8; }
    goto L_08876CE0;
L_08876CE0:;
    cnd_ = v1 != 0;
    ST32(a1+4, v0);
    if (cnd_) { goto L_08876CC0; }
    goto L_08876CE8;
L_08876CE8:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08876D04; }
    goto L_08876CF4;
L_08876CF4:;
    goto L_08876CF8;
L_08876CF8:;
    sp = sp + 32;
    return;
L_08876D04:;
    a0 = sp + 0;
    func_08AB0B88(a0);
    goto L_08876D0C;
L_08876D0C:;
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
    if (cnd_) { goto L_08876D58; }
    goto L_08876D3C;
L_08876D3C:;
    v0 = LD32(a0);
    goto L_08876D40;
L_08876D40:;
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s1+8); goto L_08876D6C; }
    goto L_08876D48;
L_08876D48:;
    a2 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08876D40; }
    goto L_08876D58;
L_08876D58:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_08876D04; }
    goto L_08876D64;
L_08876D64:;
    goto L_08876CF8;
L_08876D6C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08876D7C; }
    goto L_08876D74;
L_08876D74:;
    ST8(a0+8, v0);
    goto L_08876D58;
L_08876D7C:;
    cnd_ = a2 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_08876DA0; }
    goto L_08876D84;
L_08876D84:;
    ST32(a2+4, v0);
    goto L_08876D88;
L_08876D88:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08876D90;
L_08876D90:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08876D58;
L_08876DA0:;
    ST32(v1, v0);
    goto L_08876D88;
L_08876DA8:;
    func_0887684C(0, 0, 0);
    goto L_08876DB0;
L_08876DB0:;
    a0 = D_08B290CC - (-28468);
    goto L_08876C90;
}

/* 08876DB8 */
void func_08876DB8(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876DB8:;
    sp = sp - 16;
    func_08878328();
    goto L_08876DC8;
L_08876DC8:;
    func_0887684C(0, 0, 0);
    goto L_08876DD0;
L_08876DD0:;
    a0 = D_08B290CC - (-28468);
    a0 = a0 - 28468;
    func_08875404(a0);
    goto L_08876DDC;
L_08876DDC:;
    sp = sp + 16;
    return;
}

/* 08876DE8 */
void func_08876DE8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08876DE8:;
    sp = sp - 32;
    s1 = D_08B28FD4 - (-28716);
    s1 = s1 - 28716;
    s0 = s1 + 16;
    a0 = s0 + 0;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    { rv_t r_ = func_08AA8F48(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08876E18;
L_08876E18:;
    v0 = LD32(s1+16);
    a0 = sp + 0;
    ST32(sp, s0);
    ST32(sp+4, v0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08876E58; }
    goto L_08876E30;
L_08876E30:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08876EC8; }
    goto L_08876E3C;
L_08876E3C:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08876E58; }
    goto L_08876E48;
L_08876E48:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08876E30; }
    goto L_08876E58;
L_08876E58:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08876E9C; }
    goto L_08876E64;
L_08876E64:;
    a0 = LD32(sp);
    goto L_08876E68;
L_08876E68:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08876E8C; }
    goto L_08876E78;
L_08876E78:;
    goto L_08876E7C;
L_08876E7C:;
    sp = sp + 32;
    return;
L_08876E8C:;
    func_08AA908C(a0, 0, 0, 0);
    goto L_08876E94;
L_08876E94:;
    goto L_08876E7C;
L_08876E9C:;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08876EAC;
L_08876EAC:;
    a0 = sp + 0;
    func_08AA9588(a0);
    goto L_08876EB4;
L_08876EB4:;
    a0 = LD32(sp+8);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08876E9C; }
    goto L_08876EC0;
L_08876EC0:;
    a0 = LD32(sp);
    goto L_08876E68;
L_08876EC8:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    goto L_08876E58;
}

/* 08876ED4 */
void func_08876ED4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08876ED4:;
    v1 = LD32(a0+4);
    v0 = 999;
    cnd_ = v1 == v0;
    a1 = D_08B290C8 - (-28472);
    if (cnd_) { goto L_08876EEC; }
    goto L_08876EE4;
L_08876EE4:;
    return;
L_08876EEC:;
    v0 = LD32(a1-28472);
    ST32(a0+4, v0);
    ST32(a1-28472, v1);
    return;
}

/* 08876EFC */
u32 func_08876EFC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
L_08876EFC:;
    v1 = D_08B290C4 - (-28476);
    a0 = LD32(v1-28476);
    v0 = a0 + 0;
    a0 = a0 + 1;
    ST32(v1-28476, a0);
    return v0;
}

/* 08876F14 */
void func_08876F14(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876F14:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08876EFC();
    goto L_08876F28;
L_08876F28:;
    ST32(s0+4, v0);
    sp = sp + 16;
    return;
}

/* 08876F3C */
void func_08876F3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08876F3C:;
    a1 = D_08B290C4 - (-28476);
    v0 = LD32(a1-28476);
    v1 = a0 + 1;
    a0 = a0 < v0;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(a1-28476, v1); goto L_08876F54; }
    goto L_08876F54;
L_08876F54:;
    return;
}

/* 08876F5C */
float func_08876F5C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08876F5C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08A62C44(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08876F70;
L_08876F70:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08876F90; }
    goto L_08876F7C;
L_08876F7C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return f0;
L_08876F90:;
    a0 = LD32(s0+4);
    v0 = func_088749F8(a0);
    goto L_08876F98;
L_08876F98:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08876F7C; }
    goto L_08876FA0;
L_08876FA0:;
    a3 = LD32(s0+4);
    a0 = D_08B28FFC - (-28676);
    v0 = 999;
    cnd_ = a3 == v0;
    v1 = a0 - 28676;
    if (cnd_) { goto L_08877088; }
    goto L_08876FB4;
L_08876FB4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28676);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08877008; }
    goto L_08876FD8;
L_08876FD8:;
    v0 = LD32(a1);
    goto L_08876FDC;
L_08876FDC:;
    a0 = LD32(v0);
    a2 = v0 + 0;
    v1 = LD32(a0-12);
    v0 = v0 + v1;
    a0 = LD32(v0+4);
    cnd_ = a0 == a3;
    if (cnd_) { v0 = LD_U8(a1+8); goto L_08877090; }
    goto L_08876FF8;
L_08876FF8:;
    a1 = LD32(a1+4);
    goto L_08876FFC;
L_08876FFC:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_08876FDC; }
    goto L_08877004;
L_08877004:;
    a2 = 0 + 0;
    goto L_08877008;
L_08877008:;
    cnd_ = a2 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0887701C; }
    goto L_08877010;
L_08877010:;
    v0 = LD32(a2);
    v1 = LD32(v0-12);
    a0 = a2 + v1;
    goto L_0887701C;
L_0887701C:;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08877054; }
    goto L_08877024;
L_08877024:;
    v0 = LD32(a0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_08877040; }
    goto L_08877034;
L_08877034:;
    a1 = 1;
    goto L_08877038;
L_08877038:;
    v1 = a1 + 0;
    goto L_08876F7C;
L_08877040:;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887704C;
L_0887704C:;
    a1 = 1;
    goto L_08877038;
L_08877054:;
    v1 = D_08B29092 - (-28526);
    v0 = LD_U8(v1-28526);
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = a1 + 0; goto L_08876F7C; }
    goto L_08877068;
L_08877068:;
    a0 = s0 + 0;
    s0 = D_08B290C8 - (-28472);
    ST32(s0-28472, a3);
    { rv_t r_ = func_08877D68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877078;
L_08877078:;
    v1 = 999;
    ST32(s0-28472, v1);
    a1 = 0 < v0;
    goto L_08877038;
L_08877088:;
    a0 = 0 + 0;
    goto L_0887701C;
L_08877090:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_08876FFC; }
    goto L_08877098;
L_08877098:;
    goto L_08877008;
}

/* 088770A0 */
rv_t func_088770A0(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088770A0:;
    sp = sp - 16;
    v0 = D_08B2BB9C - (-17508);
    s0 = a0 + 0;
    v1 = LD32(v0-17508);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08877144; }
    goto L_088770C0;
L_088770C0:;
    v0 = D_08B29094 - (-28524);
    v0 = LD32(v0-28524);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08877180; }
    goto L_088770D0;
L_088770D0:;
    a1 = LD32(s0);
    goto L_088770D4;
L_088770D4:;
    a0 = D_08B28FD4 - (-28716);
    v0 = 999;
    cnd_ = a1 == v0;
    v1 = a0 - 28716;
    if (cnd_) { goto L_08877158; }
    goto L_088770E4;
L_088770E4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-28716);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08877128; }
    goto L_08877108;
L_08877108:;
    a0 = LD32(v1);
    goto L_0887710C;
L_0887710C:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_08877160; }
    goto L_08877118;
L_08877118:;
    v1 = LD32(v1+4);
    goto L_0887711C;
L_0887711C:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_0887710C; }
    goto L_08877124;
L_08877124:;
    a0 = 0 + 0;
    goto L_08877128;
L_08877128:;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08877144; }
    goto L_08877130;
L_08877130:;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877140;
L_08877140:;
    a1 = 1;
    goto L_08877144;
L_08877144:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08877158:;
    a1 = 0 + 0;
    goto L_08877144;
L_08877160:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0887711C; }
    goto L_0887716C;
L_0887716C:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_0887711C; }
    goto L_08877178;
L_08877178:;
    goto L_08877128;
L_08877180:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877188;
L_08877188:;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_08877144; }
    goto L_08877190;
L_08877190:;
    a1 = LD32(s0);
    goto L_088770D4;
}

/* 08877198 */
rv_t func_08877198(u32 a0, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877198:;
    sp = sp - 16;
    a2 = D_08B2BBFC - (-17412);
    v0 = 999;
    a3 = LD32(a0);
    a1 = a0 + 0;
    cnd_ = a3 == v0;
    v1 = a2 - 17412;
    if (cnd_) { goto L_0887723C; }
    goto L_088771B8;
L_088771B8:;
    v0 = LD32(v1+4);
    v1 = LD32(a2-17412);
    v0 = v0 - 1;
    v0 = a3 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08877208; }
    goto L_088771DC;
L_088771DC:;
    a0 = LD32(a2);
    goto L_088771E0;
L_088771E0:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a3;
    if (cnd_) { v0 = LD32(v1+16); goto L_08877244; }
    goto L_088771F8;
L_088771F8:;
    a2 = LD32(a2+4);
    goto L_088771FC;
L_088771FC:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_088771E0; }
    goto L_08877204;
L_08877204:;
    v1 = 0 + 0;
    goto L_08877208;
L_08877208:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08877230; }
    goto L_08877210;
L_08877210:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887722C;
L_0887722C:;
    v0 = 1;
    goto L_08877230;
L_08877230:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887723C:;
    v0 = 0 + 0;
    goto L_08877230;
L_08877244:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_088771F8; }
    goto L_08877250;
L_08877250:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_088771FC; }
    goto L_0887725C;
L_0887725C:;
    goto L_08877208;
}

/* 08877264 */
float func_08877264(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08877264:;
    sp = sp - 48;
    a2 = D_08B2BBFC - (-17412);
    v1 = a2 - 17412;
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
    if (cnd_) { goto L_088772FC; }
    goto L_088772B0;
L_088772B0:;
    a2 = LD32(a2-17412);
    a3 = a1 + 0;
    goto L_088772B8;
L_088772B8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_088772EC; }
    goto L_088772D0;
L_088772D0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_08877300; }
    goto L_088772E0;
L_088772E0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088772D0; }
    goto L_088772EC;
L_088772EC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_088772B8; }
    goto L_088772FC;
L_088772FC:;
    s0 = LD32(sp+8);
    goto L_08877300;
L_08877300:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_088773CC; }
    goto L_08877308;
L_08877308:;
    s1 = LD32(sp);
    goto L_0887730C;
L_0887730C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08877390; }
    goto L_0887731C;
L_0887731C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08877390; }
    goto L_08877328;
L_08877328:;
    v0 = LD32(s1);
    goto L_0887732C;
L_0887732C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08877380; }
    goto L_08877340;
L_08877340:;
    v0 = LD_U8(s0+8);
    goto L_08877344;
L_08877344:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_088773C4; }
    goto L_0887734C;
L_0887734C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_088773B4; }
    goto L_08877354;
L_08877354:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_0887735C;
L_0887735C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08877368;
L_08877368:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08877374;
L_08877374:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08877344; }
    goto L_0887737C;
L_0887737C:;
    v1 = LD32(s1+4);
    goto L_08877380;
L_08877380:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_0887732C; }
    goto L_08877390;
L_08877390:;
    v0 = 1;
    sp = sp + 48;
    return f0;
L_088773B4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_0887735C;
L_088773C4:;
    s0 = LD32(s0+4);
    goto L_08877374;
L_088773CC:;
    a0 = sp + 0;
    a1 = 1;
    func_08AAF0EC(a0, a1);
    goto L_088773D8;
L_088773D8:;
    v1 = LD32(s0);
    a2 = LD32(s1+4);
    a1 = s1 + 0;
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    v1 = LD32(s0+4);
    cnd_ = v1 == a2;
    a0 = s0 + 0;
    if (cnd_) { goto L_08877408; }
    goto L_088773F8;
L_088773F8:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877408;
L_08877408:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_088773CC; }
    goto L_08877414;
L_08877414:;
    s1 = LD32(sp);
    goto L_0887730C;
}

/* 0887741C */
float func_0887741C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887741C:;
    sp = sp - 32;
    v1 = D_08B2BBFC - (-17412);
    v1 = v1 - 17412;
    s1 = a0 + 0;
    a1 = 1;
    a0 = sp + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    func_08AAF0EC(a0, a1);
    goto L_0887745C;
L_0887745C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_088774A0; }
    goto L_08877468;
L_08877468:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08877490; }
    goto L_08877478;
L_08877478:;
    goto L_0887747C;
L_0887747C:;
    v0 = 1;
    sp = sp + 32;
    return f0;
L_08877490:;
    func_08AA91E0(a0, 0, 0, 0);
    goto L_08877498;
L_08877498:;
    goto L_0887747C;
L_088774A0:;
    s0 = LD32(v0);
    goto L_088774A4;
L_088774A4:;
    a1 = 1;
    a0 = sp + 0;
    func_08AAF0EC(a0, a1);
    goto L_088774B0;
L_088774B0:;
    cnd_ = s0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088774D4; }
    goto L_088774B8;
L_088774B8:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088774D4;
L_088774D4:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_088774A4; }
    goto L_088774E0;
L_088774E0:;
    a0 = LD32(sp);
    goto L_08877468;
}

/* 088774E8 */
void func_088774E8(u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088774E8:;
    sp = sp - 16;
    func_08879A10(t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088774F8;
L_088774F8:;
    sp = sp + 16;
    return;
}

/* 08877504 */
void func_08877504(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08877504:;
    sp = sp - 48;
    v0 = D_08B2BB9C - (-17508);
    s2 = a0 + 0;
    v1 = LD32(v0-17508);
    cnd_ = v1 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0887762C; }
    goto L_0887752C;
L_0887752C:;
    v0 = LD32(s2+8);
    goto L_08877530;
L_08877530:;
    a0 = s2 + 0;
    s1 = sp + 16;
    v0 = v0 + 1;
    ST32(s2+8, v0);
    f0 = func_08AAFE90(a0, t1, t2, t3);
    goto L_08877544;
L_08877544:;
    v0 = LD32(s2);
    ST32(sp+16, s2);
    ST32(sp+20, v0);
    cnd_ = v0 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08877580; }
    goto L_08877558;
L_08877558:;
    v0 = LD32(s1+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_08877620; }
    goto L_08877564;
L_08877564:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08877580; }
    goto L_08877570;
L_08877570:;
    v0 = LD32(s1+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(s1+4, v1);
    if (cnd_) { goto L_08877558; }
    goto L_08877580;
L_08877580:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_088775C4; }
    goto L_0887758C;
L_0887758C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088775B4; }
    goto L_0887759C;
L_0887759C:;
    goto L_088775A0;
L_088775A0:;
    sp = sp + 48;
    return;
L_088775B4:;
    func_08AB08E8(a0, 0, 0, 0);
    goto L_088775BC;
L_088775BC:;
    goto L_088775A0;
L_088775C4:;
    s0 = LD32(v0);
    goto L_088775C8;
L_088775C8:;
    a0 = s1 + 0;
    func_08AB0BF8(a0);
    goto L_088775D0;
L_088775D0:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_088775F8; }
    goto L_088775D8;
L_088775D8:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08877608; }
    goto L_088775F4;
L_088775F4:;
    v0 = LD32(sp+24);
    goto L_088775F8;
L_088775F8:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_088775C8; }
    goto L_08877600;
L_08877600:;
    a0 = LD32(sp+16);
    goto L_0887758C;
L_08877608:;
    v0 = LD32(v1);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877618;
L_08877618:;
    v0 = LD32(sp+24);
    goto L_088775F8;
L_08877620:;
    v1 = LD32(v0+8);
    ST32(s1+8, v1);
    goto L_08877580;
L_0887762C:;
    v0 = LD32(a1+8);
    a0 = a1 + 0;
    v0 = v0 + 1;
    ST32(a1+8, v0);
    { rv_t r_ = func_08AA8F48(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877640;
L_08877640:;
    v0 = LD32(s0);
    a0 = sp + 0;
    ST32(sp, s0);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    func_08AA9588(a0);
    goto L_08877658;
L_08877658:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_08877684; }
    goto L_08877664;
L_08877664:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0887752C; }
    goto L_08877674;
L_08877674:;
    func_08AA908C(a0, 0, 0, 0);
    goto L_0887767C;
L_0887767C:;
    v0 = LD32(s2+8);
    goto L_08877530;
L_08877684:;
    s0 = LD32(v0);
    goto L_08877688;
L_08877688:;
    a0 = sp + 0;
    func_08AA9588(a0);
    goto L_08877690;
L_08877690:;
    cnd_ = s0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_088776AC; }
    goto L_08877698;
L_08877698:;
    v0 = LD32(s0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088776BC; }
    goto L_088776A8;
L_088776A8:;
    v0 = LD32(sp+8);
    goto L_088776AC;
L_088776AC:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08877688; }
    goto L_088776B4;
L_088776B4:;
    a0 = LD32(sp);
    goto L_08877664;
L_088776BC:;
    v0 = LD32(s0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088776CC;
L_088776CC:;
    v0 = LD32(sp+8);
    goto L_088776AC;
}

/* 088776D4 */
void func_088776D4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088776D4:;
    sp = sp - 16;
    func_08877748(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088776E4;
L_088776E4:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08877700; }
    goto L_088776F4;
L_088776F4:;
    goto L_088776F8;
L_088776F8:;
    sp = sp + 16;
    return;
L_08877700:;
    func_088767E4(0, 0, 0);
    goto L_08877708;
L_08877708:;
    goto L_088776F8;
}

/* 08877710 */
void func_08877710(u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877710:;
    sp = sp - 16;
    func_088774E8(t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08877720;
L_08877720:;
    a0 = D_08B29018 - (-28648);
    a1 = D_08B28FF0 - (-28688);
    a0 = a0 - 28648;
    a1 = a1 - 28688;
    func_08877504(a0, a1, 0, 0, 0);
    goto L_08877734;
L_08877734:;
    func_088776D4(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0887773C;
L_0887773C:;
    sp = sp + 16;
    return;
}

/* 08877748 */
void func_08877748(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877748:;
    sp = sp - 16;
    func_088780A8(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08877758;
L_08877758:;
    sp = sp + 16;
    return;
}

/* 08877764 */
void func_08877764(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08877764:;
    sp = sp - 48;
    a0 = a0 & 0xff;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0887791C; }
    goto L_08877788;
L_08877788:;
    a0 = D_08B290CC - (-28468);
    a0 = a0 - 28468;
    func_088757D8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08877794;
L_08877794:;
    a2 = D_08B2915C - (-28324);
    goto L_08877798;
L_08877798:;
    v0 = a2 - 28324;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_0887780C; }
    goto L_088777C0;
L_088777C0:;
    a2 = LD32(a2-28324);
    a3 = a1 + 0;
    goto L_088777C8;
L_088777C8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_088777FC; }
    goto L_088777E0;
L_088777E0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_08877810; }
    goto L_088777F0;
L_088777F0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088777E0; }
    goto L_088777FC;
L_088777FC:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_088777C8; }
    goto L_0887780C;
L_0887780C:;
    v0 = LD32(sp+8);
    goto L_08877810;
L_08877810:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08877848; }
    goto L_08877818;
L_08877818:;
    v1 = LD32(v0);
    goto L_0887781C;
L_0887781C:;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08877904; }
    goto L_0887782C;
L_0887782C:;
    a0 = sp + 0;
    goto L_08877830;
L_08877830:;
    a1 = 1;
    { u64 r_ = func_08AB0C40(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08877838;
L_08877838:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0887781C; }
    goto L_08877844;
L_08877844:;
    s1 = LD32(sp);
    goto L_08877848;
L_08877848:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_088778CC; }
    goto L_08877858;
L_08877858:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_088778CC; }
    goto L_08877864;
L_08877864:;
    v0 = LD32(s1);
    goto L_08877868;
L_08877868:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_088778BC; }
    goto L_0887787C;
L_0887787C:;
    v0 = LD_U8(s0+8);
    goto L_08877880;
L_08877880:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_088778FC; }
    goto L_08877888;
L_08877888:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_088778EC; }
    goto L_08877890;
L_08877890:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08877898;
L_08877898:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088778A4;
L_088778A4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_088778B0;
L_088778B0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08877880; }
    goto L_088778B8;
L_088778B8:;
    v1 = LD32(s1+4);
    goto L_088778BC;
L_088778BC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08877868; }
    goto L_088778CC;
L_088778CC:;
    sp = sp + 48;
    return;
L_088778EC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08877898;
L_088778FC:;
    s0 = LD32(s0+4);
    goto L_088778B0;
L_08877904:;
    v0 = LD32(v1);
    v1 = LD32(v0+68);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877914;
L_08877914:;
    a0 = sp + 0;
    goto L_08877830;
L_0887791C:;
    a0 = D_08B290CC - (-28468);
    a0 = a0 - 28468;
    func_08875798(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08877928;
L_08877928:;
    a2 = D_08B2915C - (-28324);
    goto L_08877798;
}

/* 08877930 */
void func_08877930(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877930:;
    sp = sp - 16;
    func_088CF9A8();
    goto L_08877940;
L_08877940:;
    sp = sp + 16;
    return;
}

/* 0887794C */
void func_0887794C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887794C:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+8);
    v0 = v0 + 1;
    ST32(a0+8, v0);
    f0 = func_08AB0544(a0, t1, t2, t3);
    goto L_0887796C;
L_0887796C:;
    v0 = LD32(s0);
    ST32(sp, s0);
    a0 = sp + 0;
    ST32(sp+4, v0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_088779AC; }
    goto L_08877984;
L_08877984:;
    v0 = LD32(a0+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a0+4); goto L_08877A38; }
    goto L_08877990;
L_08877990:;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088779AC; }
    goto L_0887799C;
L_0887799C:;
    v0 = LD32(a0+4);
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    ST32(a0+4, v1);
    if (cnd_) { goto L_08877984; }
    goto L_088779AC;
L_088779AC:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_088779E8; }
    goto L_088779B8;
L_088779B8:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088779D8; }
    goto L_088779C8;
L_088779C8:;
    goto L_088779CC;
L_088779CC:;
    sp = sp + 32;
    return;
L_088779D8:;
    func_08AB09C4(a0, 0, 0, 0);
    goto L_088779E0;
L_088779E0:;
    goto L_088779CC;
L_088779E8:;
    s0 = LD32(s0);
    goto L_088779EC;
L_088779EC:;
    a0 = sp + 0;
    func_08AB0CD8(a0);
    goto L_088779F4;
L_088779F4:;
    a1 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(a1-12);
    s0 = s0 + v1;
    v0 = LD32(s0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(a1+36); goto L_08877A28; }
    goto L_08877A14;
L_08877A14:;
    s0 = LD32(sp+8);
    goto L_08877A18;
L_08877A18:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_088779EC; }
    goto L_08877A20;
L_08877A20:;
    a0 = LD32(sp);
    goto L_088779B8;
L_08877A28:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877A30;
L_08877A30:;
    s0 = LD32(sp+8);
    goto L_08877A18;
L_08877A38:;
    v1 = LD32(v0+8);
    ST32(a0+8, v1);
    goto L_088779AC;
}

/* 08877A44 */
u64 func_08877A44(u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877A44:;
    sp = sp - 16;
    { u64 r_ = func_088CF9C8(a2, a3, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08877A54;
L_08877A54:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08877A60 */
u64 func_08877A60(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877A60:;
    sp = sp - 16;
    v0 = D_08B2916C - (-28308);
    v1 = D_08B29024 - (-28636);
    v1 = v1 - 28636;
    a0 = LD_U8(v0-28308);
    cnd_ = a0 != 0;
    s0 = v1 + 16;
    if (cnd_) { goto L_08877A8C; }
    goto L_08877A84;
L_08877A84:;
    v0 = D_08B29040 - (-28608);
    s0 = v0 - 28608;
    goto L_08877A8C;
L_08877A8C:;
    func_08877930();
    goto L_08877A94;
L_08877A94:;
    a0 = s0 + 0;
    func_0887794C(a0, 0, 0, 0);
    goto L_08877A9C;
L_08877A9C:;
    { u64 r_ = func_08877A44(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08877AA4;
L_08877AA4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08877AB4 */
float func_08877AB4(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08877AB4:;
    v0 = a0 < 0x1u;
    v1 = a1 < 0x1u;
    sp = sp - 64;
    v0 = v0 | v1;
    s3 = a1 + 0;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08877C40; }
    goto L_08877AE8;
L_08877AE8:;
    v0 = D_08B2BBA0 - (-17504);
    v1 = LD32(v0-17504);
    s4 = LD32(a0+36);
    a0 = 0 < v1;
    cnd_ = a0 != 0;
    a2 = D_08B28EF4 - (-28940);
    if (cnd_) { goto L_08877CA0; }
    goto L_08877B00;
L_08877B00:;
    v0 = a2 - 28940;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp+16, v0);
    v1 = v1 + 1;
    a0 = a0 < a1;
    ST32(v0+8, v1);
    s0 = sp + 16;
    ST32(sp+20, 0);
    cnd_ = a0 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08877B74; }
    goto L_08877B2C;
L_08877B2C:;
    a2 = LD32(a2-28940);
    goto L_08877B30;
L_08877B30:;
    a0 = LD32(s0+4);
    v0 = a0 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s0+8, v1);
    if (cnd_) { goto L_08877B64; }
    goto L_08877B48;
L_08877B48:;
    v1 = LD32(s0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+24); goto L_08877B78; }
    goto L_08877B58;
L_08877B58:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_08877B48; }
    goto L_08877B64;
L_08877B64:;
    v0 = a0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 != 0;
    ST32(s0+4, v0);
    if (cnd_) { goto L_08877B30; }
    goto L_08877B74;
L_08877B74:;
    a0 = LD32(sp+24);
    goto L_08877B78;
L_08877B78:;
    cnd_ = a0 == 0;
    s1 = 999;
    if (cnd_) { goto L_08877BB8; }
    goto L_08877B80;
L_08877B80:;
    a0 = LD32(a0);
    goto L_08877B84;
L_08877B84:;
    a3 = LD32(a0);
    v1 = LD32(a3-12);
    v1 = a0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08877C78; }
    goto L_08877BA0;
L_08877BA0:;
    a0 = s0 + 0;
    goto L_08877BA4;
L_08877BA4:;
    a1 = 1;
    func_08AAAD10(a0, a1);
    goto L_08877BAC;
L_08877BAC:;
    a0 = LD32(sp+24);
    cnd_ = a0 != 0;
    if (cnd_) { a0 = LD32(a0); goto L_08877B84; }
    goto L_08877BB8;
L_08877BB8:;
    s1 = LD32(sp+16);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_08877C40; }
    goto L_08877BCC;
L_08877BCC:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08877C40; }
    goto L_08877BD8;
L_08877BD8:;
    v0 = LD32(s1);
    goto L_08877BDC;
L_08877BDC:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08877C30; }
    goto L_08877BF0;
L_08877BF0:;
    v0 = LD_U8(s0+8);
    goto L_08877BF4;
L_08877BF4:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_08877C70; }
    goto L_08877BFC;
L_08877BFC:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_08877C60; }
    goto L_08877C04;
L_08877C04:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_08877C0C;
L_08877C0C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08877C18;
L_08877C18:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_08877C24;
L_08877C24:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_08877BF4; }
    goto L_08877C2C;
L_08877C2C:;
    v1 = LD32(s1+4);
    goto L_08877C30;
L_08877C30:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_08877BDC; }
    goto L_08877C40;
L_08877C40:;
    goto L_08877C44;
L_08877C44:;
    sp = sp + 64;
    return f0;
L_08877C60:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_08877C0C;
L_08877C70:;
    s0 = LD32(s0+4);
    goto L_08877C24;
L_08877C78:;
    cnd_ = s4 == s1;
    a2 = s3 + 0;
    if (cnd_) { goto L_08877C8C; }
    goto L_08877C80;
L_08877C80:;
    v0 = LD32(v1+4);
    cnd_ = v0 == s4;
    if (cnd_) { a0 = s0 + 0; goto L_08877BA4; }
    goto L_08877C8C;
L_08877C8C:;
    v0 = LD32(a3+88);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877C98;
L_08877C98:;
    a0 = s0 + 0;
    goto L_08877BA4;
L_08877CA0:;
    s1 = D_08B29024 - (-28636);
    s1 = s1 - 28636;
    s0 = s1 + 16;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f0 = func_08AB0544(a0, t1, t2, t3);
    goto L_08877CC0;
L_08877CC0:;
    v0 = LD32(s1+16);
    a0 = sp + 0;
    ST32(sp, s0);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    func_08AB0CD8(a0);
    goto L_08877CD8;
L_08877CD8:;
    a0 = LD32(sp+8);
    cnd_ = a0 == 0;
    s1 = 999;
    if (cnd_) { goto L_08877D18; }
    goto L_08877CE4;
L_08877CE4:;
    s0 = LD32(a0);
    goto L_08877CE8;
L_08877CE8:;
    a0 = sp + 0;
    func_08AB0CD8(a0);
    goto L_08877CF0;
L_08877CF0:;
    a3 = LD32(s0);
    v1 = LD32(a3-12);
    v1 = s0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08877D3C; }
    goto L_08877D0C;
L_08877D0C:;
    a0 = LD32(sp+8);
    goto L_08877D10;
L_08877D10:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_08877CE8; }
    goto L_08877D18;
L_08877D18:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_08877C40; }
    goto L_08877D2C;
L_08877D2C:;
    func_08AB09C4(a0, 0, 0, 0);
    goto L_08877D34;
L_08877D34:;
    goto L_08877C44;
L_08877D3C:;
    a1 = s2 + 0;
    cnd_ = s4 == s1;
    a2 = s3 + 0;
    if (cnd_) { goto L_08877D54; }
    goto L_08877D48;
L_08877D48:;
    v0 = LD32(v1+4);
    cnd_ = s4 == v0;
    if (cnd_) { a0 = LD32(sp+8); goto L_08877D10; }
    goto L_08877D54;
L_08877D54:;
    v0 = LD32(a3+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877D60;
L_08877D60:;
    a0 = LD32(sp+8);
    goto L_08877D10;
}

/* 08877D68 */
rv_t func_08877D68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877D68:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A252F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877D80;
L_08877D80:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_08877DC8; }
    goto L_08877D88;
L_08877D88:;
    v1 = LD_U16(s0+16);
    v0 = (s32)v1 < 100;
    cnd_ = v0 == 0;
    v0 = 107;
    if (cnd_) { goto L_08877E80; }
    goto L_08877D98;
L_08877D98:;
    v0 = (s32)v1 < 98;
    cnd_ = v0 == 0;
    v0 = (s32)v1 < 5;
    if (cnd_) { goto L_08877E50; }
    goto L_08877DA4;
L_08877DA4:;
    cnd_ = v0 == 0;
    v0 = 90;
    if (cnd_) { goto L_08877E0C; }
    goto L_08877DAC;
L_08877DAC:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD_U16(s0+18); goto L_08877DF0; }
    goto L_08877DB8;
L_08877DB8:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08877DE0; }
    goto L_08877DC4;
L_08877DC4:;
    a0 = 0 + 0;
    goto L_08877DC8;
L_08877DC8:;
    goto L_08877DCC;
L_08877DCC:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08877DE0:;
    a0 = LD32(s0+4);
    f0 = func_088784BC(a0);
    goto L_08877DE8;
L_08877DE8:;
    a0 = 1;
    goto L_08877DC8;
L_08877DF0:;
    v0 = 33;
    cnd_ = a0 == v0;
    v0 = 10;
    if (cnd_) { goto L_08877DE8; }
    goto L_08877DFC;
L_08877DFC:;
    cnd_ = a0 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_08877DC8; }
    goto L_08877E04;
L_08877E04:;
    a0 = 1;
    goto L_08877DC8;
L_08877E0C:;
    cnd_ = v1 != v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08877DC8; }
    goto L_08877E14;
L_08877E14:;
    v1 = LD_U16(s0+18);
    v0 = 35;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_08877DCC; }
    goto L_08877E24;
L_08877E24:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_088691C4(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877E2C;
L_08877E2C:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_08877DE8; }
    goto L_08877E34;
L_08877E34:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+16);
    goto L_08877E40;
L_08877E40:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877E48;
L_08877E48:;
    a0 = 1;
    goto L_08877DC8;
L_08877E50:;
    a0 = 112;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08877E58;
L_08877E58:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    f0 = func_0885124C(a0);
    goto L_08877E64;
L_08877E64:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = 1; goto L_08877DC8; }
    goto L_08877E6C;
L_08877E6C:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = LD32(v1+48);
    goto L_08877E40;
L_08877E80:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 108;
    if (cnd_) { goto L_08877DE8; }
    goto L_08877E88;
L_08877E88:;
    cnd_ = v0 == 0;
    v0 = 126;
    if (cnd_) { goto L_08877EA4; }
    goto L_08877E90;
L_08877E90:;
    v0 = 101;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_08877DC8; }
    goto L_08877E9C;
L_08877E9C:;
    a0 = 1;
    goto L_08877DC8;
L_08877EA4:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = 0 + 0; goto L_08877DC8; }
    goto L_08877EAC;
L_08877EAC:;
    a0 = LD_U16(s0+18);
    goto L_08877DF0;
}

/* 08877EB4 */
u64 func_08877EB4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877EB4:;
    sp = sp - 16;
    s1 = a1 & 0xffff;
    a1 = s1 + 0;
    s0 = a0 & 0xffff;
    a0 = s0 + 0;
    v0 = func_08A253F0(a0, a1, t1, t2, t3);
    goto L_08877ED8;
L_08877ED8:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_08877EF4; }
    goto L_08877EE0;
L_08877EE0:;
    v0 = 90;
    cnd_ = s0 == v0;
    v0 = 106;
    if (cnd_) { goto L_08877F20; }
    goto L_08877EEC;
L_08877EEC:;
    cnd_ = s0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08877F0C; }
    goto L_08877EF4;
L_08877EF4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08877F0C:;
    a1 = s1 + 0;
    a0 = 106;
    func_088663C0(a0, a1, 0, 0, 0);
    goto L_08877F18;
L_08877F18:;
    v1 = 1;
    goto L_08877EF4;
L_08877F20:;
    v0 = 17;
    cnd_ = s1 == v0;
    v0 = (s32)s1 < 18;
    if (cnd_) { goto L_08877F90; }
    goto L_08877F2C;
L_08877F2C:;
    cnd_ = v0 == 0;
    v0 = 19;
    if (cnd_) { goto L_08877F58; }
    goto L_08877F34;
L_08877F34:;
    v0 = 7;
    cnd_ = s1 == v0;
    if (cnd_) { a0 = 90; goto L_08877F48; }
    goto L_08877F40;
L_08877F40:;
    v1 = 0 + 0;
    goto L_08877EF4;
L_08877F48:;
    a1 = 7;
    func_08864CCC(a0, a1, 0, 0, 0);
    goto L_08877F50;
L_08877F50:;
    v1 = 1;
    goto L_08877EF4;
L_08877F58:;
    cnd_ = s1 == v0;
    v0 = 23;
    if (cnd_) { goto L_08877F7C; }
    goto L_08877F60;
L_08877F60:;
    cnd_ = s1 != v0;
    if (cnd_) { v1 = 0 + 0; goto L_08877EF4; }
    goto L_08877F68;
L_08877F68:;
    a0 = 90;
    a1 = 23;
    func_08866C9C(a0, a1, 0, 0, 0);
    goto L_08877F74;
L_08877F74:;
    v1 = 1;
    goto L_08877EF4;
L_08877F7C:;
    a0 = 90;
    a1 = 19;
    func_0886270C(a0, a1, 0, 0, 0);
    goto L_08877F88;
L_08877F88:;
    v1 = 1;
    goto L_08877EF4;
L_08877F90:;
    a0 = 90;
    a1 = 17;
    func_0886019C(a0, a1, 0, 0, 0);
    goto L_08877F9C;
L_08877F9C:;
    v1 = 1;
    goto L_08877EF4;
}

/* 08877FA4 */
float func_08877FA4(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08877FA4:;
    sp = sp - 16;
    a0 = a0 & 0xffff;
    a1 = a1 & 0xffff;
    f0 = func_08A25678();
    goto L_08877FB8;
L_08877FB8:;
    f1 = f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08877FD8; }
    goto L_08877FD0;
L_08877FD0:;
    v0 = D_08AEC000 - (-16384);
    f1 = BITSF(LD32(v0-16384));
    goto L_08877FD8;
L_08877FD8:;
    f0 = f1;
    sp = sp + 16;
    return f0;
}

/* 08877FE4 */
u64 func_08877FE4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08877FE4:;
    a2 = D_08B2908C - (-28532);
    v0 = LD32(a2-28532);
    v1 = D_08B2904C - (-28596);
    v1 = v1 - 28596;
    a1 = v0 << 2;
    a1 = a1 + v1;
    v1 = v0 + 1;
    v0 = v0 < 0x10u;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a1, a0); goto L_0887801C; }
    goto L_0887800C;
L_0887800C:;
    v1 = 1;
    v0 = D_08B29090 - (-28528);
    ST8(v0-28528, v1);
    return (u64)v0 | ((u64)v1 << 32);
L_0887801C:;
    ST32(a2-28532, v1);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08878024 */
u64 func_08878024(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_08878024:;
    v0 = D_08B29091 - (-28527);
    v1 = LD_U8(v0-28527);
    cnd_ = v1 != 0;
    v0 = D_08B29090 - (-28528);
    if (cnd_) { goto L_08878080; }
    goto L_08878034;
L_08878034:;
    v1 = LD_U8(v0-28528);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08878080; }
    goto L_08878040;
L_08878040:;
    a2 = D_08B2908C - (-28532);
    v0 = LD32(a2-28532);
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = a2 + 0;
    if (cnd_) { goto L_08878080; }
    goto L_08878054;
L_08878054:;
    v0 = D_08B2904C - (-28596);
    a1 = v0 - 28596;
    t0 = a1 + 0;
    goto L_08878060;
L_08878060:;
    v0 = LD32(a1);
    cnd_ = a0 == v0;
    v1 = v1 + 1;
    if (cnd_) { goto L_08878088; }
    goto L_0887806C;
L_0887806C:;
    v0 = LD32(a2-28532);
    a1 = a1 + 4;
    v0 = v1 < v0;
    cnd_ = v0 != 0;
    a3 = D_08B2908C - (-28532);
    if (cnd_) { goto L_08878060; }
    goto L_08878080;
L_08878080:;
    return (u64)v0 | ((u64)v1 << 32);
L_08878088:;
    v0 = LD32(a3-28532);
    v0 = v0 - 1;
    v1 = v0 << 2;
    v1 = v1 + t0;
    a0 = LD32(v1);
    ST32(a3-28532, v0);
    ST32(a1, a0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088780A8 */
void func_088780A8(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088780A8:;
    sp = sp - 80;
    a0 = D_08B29090 - (-28528);
    s6 = D_08B29091 - (-28527);
    v0 = 1;
    v1 = LD_U8(a0-28528);
    cnd_ = v1 == 0;
    ST8(s6-28527, v0);
    if (cnd_) { goto L_088782A4; }
    goto L_088780EC;
L_088780EC:;
    v0 = D_08B28FFC - (-28676);
    v1 = D_08B28FD4 - (-28716);
    ST8(a0-28528, 0);
    s7 = v0 - 28676;
    fp = v1 - 28716;
    s3 = 0 + 0;
    s5 = s7 + 16;
    s4 = fp + 16;
    goto L_0887810C;
L_0887810C:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s4+8); goto L_08878204; }
    goto L_08878114;
L_08878114:;
    v0 = LD32(s5+8);
    a0 = s5 + 0;
    v0 = v0 + 1;
    ST32(s5+8, v0);
    f0 = func_08AAFE90(a0, t1, t2, t3);
    goto L_08878128;
L_08878128:;
    v0 = LD32(s7+16);
    a0 = sp + 0;
    ST32(sp, s5);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    func_08AB0BF8(a0);
    goto L_08878140;
L_08878140:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_088781B4; }
    goto L_0887814C;
L_0887814C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_088781A4; }
    goto L_0887815C;
L_0887815C:;
    s3 = s3 + 1;
    v0 = s3 < 0x2u;
    goto L_08878164;
L_08878164:;
    cnd_ = v0 != 0;
    s2 = D_08B2908C - (-28532);
    if (cnd_) { goto L_0887810C; }
    goto L_0887816C;
L_0887816C:;
    ST32(s2-28532, 0);
    goto L_08878170;
L_08878170:;
    ST8(s6-28527, 0);
    sp = sp + 80;
    return;
L_088781A4:;
    s3 = s3 + 1;
    func_08AB08E8(a0, 0, 0, 0);
    goto L_088781AC;
L_088781AC:;
    v0 = s3 < 0x2u;
    goto L_08878164;
L_088781B4:;
    s0 = LD32(s0);
    goto L_088781B8;
L_088781B8:;
    a0 = sp + 0;
    func_08AB0BF8(a0);
    goto L_088781C0;
L_088781C0:;
    a1 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(a1-12);
    s0 = s0 + v1;
    v0 = LD32(s0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a1+4); goto L_088781F4; }
    goto L_088781E0;
L_088781E0:;
    s0 = LD32(sp+8);
    goto L_088781E4;
L_088781E4:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_088781B8; }
    goto L_088781EC;
L_088781EC:;
    a0 = LD32(sp);
    goto L_0887814C;
L_088781F4:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088781FC;
L_088781FC:;
    s0 = LD32(sp+8);
    goto L_088781E4;
L_08878204:;
    a0 = s4 + 0;
    s1 = sp + 16;
    v0 = v0 + 1;
    ST32(s4+8, v0);
    { rv_t r_ = func_08AA8F48(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08878218;
L_08878218:;
    v0 = LD32(fp+16);
    a0 = s1 + 0;
    ST32(sp+16, s4);
    ST32(sp+20, v0);
    ST32(sp+24, 0);
    func_08AA9588(a0);
    goto L_08878230;
L_08878230:;
    v0 = LD32(sp+24);
    cnd_ = v0 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_0887825C; }
    goto L_0887823C;
L_0887823C:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0887815C; }
    goto L_0887824C;
L_0887824C:;
    s3 = s3 + 1;
    func_08AA908C(a0, 0, 0, 0);
    goto L_08878254;
L_08878254:;
    v0 = s3 < 0x2u;
    goto L_08878164;
L_0887825C:;
    s0 = LD32(v0);
    goto L_08878260;
L_08878260:;
    a0 = s1 + 0;
    func_08AA9588(a0);
    goto L_08878268;
L_08878268:;
    v0 = LD32(s0+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+24);
    if (cnd_) { goto L_08878294; }
    goto L_08878278;
L_08878278:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08878294; }
    goto L_08878280;
L_08878280:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08878290;
L_08878290:;
    v0 = LD32(sp+24);
    goto L_08878294;
L_08878294:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_08878260; }
    goto L_0887829C;
L_0887829C:;
    a0 = LD32(sp+16);
    goto L_0887823C;
L_088782A4:;
    s2 = D_08B2908C - (-28532);
    v0 = LD32(s2-28532);
    cnd_ = v0 == 0;
    v0 = D_08B2904C - (-28596);
    if (cnd_) { goto L_0887816C; }
    goto L_088782B4;
L_088782B4:;
    s1 = v0 - 28596;
    s0 = s2 + 0;
    v1 = LD32(s0-28532);
    goto L_088782C0;
L_088782C0:;
    v1 = v1 - 1;
    v0 = v1 << 2;
    v0 = v0 + s1;
    v0 = LD32(v0);
    ST32(s0-28532, v1);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088782EC; }
    goto L_088782DC;
L_088782DC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088782EC;
L_088782EC:;
    v0 = LD32(s0-28532);
    cnd_ = v0 != 0;
    v1 = LD32(s0-28532);
    if (cnd_) { goto L_088782C0; }
    goto L_088782F8;
L_088782F8:;
    ST32(s2-28532, 0);
    goto L_08878170;
}

/* 08878300 */
u64 func_08878300(void)
{
    u32 v0 = 0, v1 = 0;
L_08878300:;
    v1 = D_08B29092 - (-28526);
    v0 = LD_U8(v1-28526);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887830C */
void func_0887830C(void)
{
    u32 v0 = 0, v1 = 0;
L_0887830C:;
    v1 = 1;
    v0 = D_08B29092 - (-28526);
    ST8(v0-28526, v1);
    return;
}

/* 0887831C */
void func_0887831C(void)
{
    u32 v0 = 0;
L_0887831C:;
    v0 = D_08B29092 - (-28526);
    ST8(v0-28526, 0);
    return;
}

/* 08878328 */
void func_08878328(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08878328:;
    sp = sp - 48;
    s1 = D_08B28FFC - (-28676);
    s1 = s1 - 28676;
    s0 = s1 + 16;
    func_0887830C();
    goto L_0887834C;
L_0887834C:;
    func_088780A8(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08878354;
L_08878354:;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    f0 = func_08AAFE90(a0, 0, 0, 0);
    goto L_08878368;
L_08878368:;
    v0 = LD32(s1+16);
    a0 = sp + 0;
    ST32(sp, s0);
    ST32(sp+4, v0);
    ST32(sp+8, 0);
    func_08AB0BF8(a0);
    goto L_08878380;
L_08878380:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0887847C; }
    goto L_0887838C;
L_0887838C:;
    v0 = LD32(a0+8);
    goto L_08878390;
L_08878390:;
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0887846C; }
    goto L_0887839C;
L_0887839C:;
    s1 = D_08B28FD4 - (-28716);
    s1 = s1 - 28716;
    goto L_088783A4;
L_088783A4:;
    s0 = s1 + 16;
    v0 = LD32(s0+8);
    a0 = s0 + 0;
    s2 = sp + 16;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    { rv_t r_ = func_08AA8F48(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088783C0;
L_088783C0:;
    v0 = LD32(s1+16);
    a0 = s2 + 0;
    ST32(sp+16, s0);
    ST32(sp+20, v0);
    ST32(sp+24, 0);
    func_08AA9588(a0);
    goto L_088783D8;
L_088783D8:;
    s0 = LD32(sp+24);
    cnd_ = s0 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_0887842C; }
    goto L_088783E4;
L_088783E4:;
    v0 = LD32(a0+8);
    goto L_088783E8;
L_088783E8:;
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_0887841C; }
    goto L_088783F4;
L_088783F4:;
    func_088ABBEC();
    goto L_088783FC;
L_088783FC:;
    func_0887831C();
    goto L_08878404;
L_08878404:;
    sp = sp + 48;
    return;
L_0887841C:;
    func_08AA908C(a0, 0, 0, 0);
    goto L_08878424;
L_08878424:;
    goto L_088783F4;
L_0887842C:;
    a0 = s2 + 0;
    func_08AA9588(a0);
    goto L_08878434;
L_08878434:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08878454; }
    goto L_08878440;
L_08878440:;
    s0 = LD32(sp+24);
    goto L_08878444;
L_08878444:;
    cnd_ = s0 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_0887842C; }
    goto L_0887844C;
L_0887844C:;
    v0 = LD32(a0+8);
    goto L_088783E8;
L_08878454:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08878464;
L_08878464:;
    s0 = LD32(sp+24);
    goto L_08878444;
L_0887846C:;
    s1 = D_08B28FD4 - (-28716);
    func_08AB08E8(a0, 0, 0, 0);
    goto L_08878474;
L_08878474:;
    s1 = s1 - 28716;
    goto L_088783A4;
L_0887847C:;
    a0 = sp + 0;
    func_08AB0BF8(a0);
    goto L_08878484;
L_08878484:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088784A4; }
    goto L_08878490;
L_08878490:;
    s0 = LD32(sp+8);
    goto L_08878494;
L_08878494:;
    cnd_ = s0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0887847C; }
    goto L_0887849C;
L_0887849C:;
    v0 = LD32(a0+8);
    goto L_08878390;
L_088784A4:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088784B4;
L_088784B4:;
    s0 = LD32(sp+8);
    goto L_08878494;
}

/* 088784BC */
float func_088784BC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088784BC:;
    v0 = D_08B2BB6D - (-17555);
    v1 = LD_U8(v0-17555);
    sp = sp - 16;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088784DC; }
    goto L_088784D0;
L_088784D0:;
    goto L_088784D4;
L_088784D4:;
    sp = sp + 16;
    return f0;
L_088784DC:;
    { rv_t r_ = func_08876938(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088784E4;
L_088784E4:;
    goto L_088784D4;
}

/* 088784EC */
rv_t func_088784EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088784EC:;
    sp = sp - 32;
    s3 = a0 ^ 0x1;
    v1 = s3 < 0x1u;
    s2 = a1 ^ 0xffff;
    v0 = s2 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08878630; }
    goto L_08878524;
L_08878524:;
    v1 = s3 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    a0 = D_08B290CC - (-28468);
    if (cnd_) { goto L_088785D4; }
    goto L_08878538;
L_08878538:;
    s0 = s4 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    v0 = s2 < 0x1u;
    if (cnd_) { goto L_08878560; }
    goto L_0887854C;
L_0887854C:;
    v0 = D_08B2915C - (-28324);
    a0 = LD32(v0-28324);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088785C4; }
    goto L_0887855C;
L_0887855C:;
    v0 = s2 < 0x1u;
    goto L_08878560;
L_08878560:;
    v0 = v0 & s0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088785A8; }
    goto L_0887856C;
L_0887856C:;
    v0 = D_08B29098 - (-28520);
    v0 = v0 - 28520;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088785A8; }
    goto L_0887857C;
L_0887857C:;
    s0 = v0 + 32;
    goto L_08878580;
L_08878580:;
    cnd_ = s0 == s1;
    s0 = s0 - 16;
    if (cnd_) { goto L_088785A4; }
    goto L_08878588;
L_08878588:;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08878580; }
    goto L_08878594;
L_08878594:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887859C;
L_0887859C:;
    goto L_08878580;
L_088785A4:;
    goto L_088785A8;
L_088785A8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088785C4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088785CC;
L_088785CC:;
    v0 = s2 < 0x1u;
    goto L_08878560;
L_088785D4:;
    a0 = a0 - 28468;
    s1 = D_08B2915C - (-28324);
    func_088753E8(a0);
    goto L_088785E0;
L_088785E0:;
    s0 = s1 - 28324;
    v0 = 4;
    ST32(s0+4, v0);
    a0 = 16;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088785F4;
L_088785F4:;
    v1 = LD32(s0+4);
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    ST32(s1-28324, v0);
    if (cnd_) { goto L_08878620; }
    goto L_08878604;
L_08878604:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_0887860C;
L_0887860C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0887860C; }
    goto L_08878620;
L_08878620:;
    v0 = s1 - 28324;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_08878538;
L_08878630:;
    s0 = D_08B29098 - (-28520);
    s1 = s0 - 28520;
    v0 = 32;
    ST32(s1+4, v0);
    a0 = 128;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08878648;
L_08878648:;
    v1 = LD32(s1+4);
    a2 = s1 + 0;
    ST32(s0-28520, v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08878678; }
    goto L_0887865C;
L_0887865C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_08878664;
L_08878664:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08878664; }
    goto L_08878678;
L_08878678:;
    s1 = s1 + 16;
    v0 = 32;
    ST32(a2+8, 0);
    a0 = 128;
    ST32(s1+4, v0);
    ST32(a2+12, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08878694;
L_08878694:;
    a1 = LD32(s1+4);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s1, v0);
    if (cnd_) { goto L_088786BC; }
    goto L_088786A4;
L_088786A4:;
    v1 = v0 + 0;
    goto L_088786A8;
L_088786A8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088786A8; }
    goto L_088786BC;
L_088786BC:;
    ST32(s1+8, 0);
    ST32(s1+12, 0);
    goto L_08878524;
}

/* 088786C8 */
rv_t func_088786C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088786C8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_088784EC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088786DC;
L_088786DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088786E8 */
rv_t func_088786E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088786E8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_088784EC(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088786FC;
L_088786FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08878708 */
u64 func_08878708(void)
{
    u32 v0 = 0, v1 = 0;
L_08878708:;
    v1 = D_08B2BB6E - (-17554);
    v0 = LD_U8(v1-17554);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08878714 */
void func_08878714(void)
{
L_08878714:;
    return;
}

/* 0887871C */
u32 func_0887871C(void)
{
    u32 v0 = 0;
L_0887871C:;
    v0 = 0 + 0;
    return v0;
}

/* 08878724 */
u32 func_08878724(void)
{
    u32 v0 = 0;
L_08878724:;
    v0 = 0 + 0;
    return v0;
}

/* 0887872C */
void func_0887872C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0887872C:;
    v0 = (u32)-1;
    ST32(a0+120, v0);
    v0 = D_08AEC008 - (-16376);
    v1 = (u32)-2;
    f0 = BITSF(LD32(v0-16376));
    v0 = 1;
    ST32(a0+64, v1);
    ST32(a0+68, FBITS(f0));
    ST32(a0+100, v0);
    ST32(a0+96, 0);
    ST32(a0+108, 0);
    ST32(a0+112, 0);
    ST32(a0+104, 0);
    ST32(a0+116, 0);
    return;
}

/* 08878768 */
void func_08878768(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08878768:;
    sp = sp - 16;
    v0 = LD32(a0+104);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08878788; }
    goto L_0887877C;
L_0887877C:;
    goto L_08878780;
L_08878780:;
    sp = sp + 16;
    return;
L_08878788:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08878790;
L_08878790:;
    goto L_08878780;
}

/* 08878798 */
rv_t func_08878798(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f12 = 0, f13 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08878798:;
    sp = sp - 144;
    v0 = (u32)-1;
    s4 = a2 + 0;
    s3 = a1 + 0;
    v1 = LD32(a0+64);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08878AF0; }
    goto L_088787D4;
L_088787D4:;
    { u64 r_ = func_08878708(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088787DC;
L_088787DC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+100); goto L_08878AAC; }
    goto L_088787E4;
L_088787E4:;
    v0 = D_08AEC00C - (-16372);
    f20 = BITSF(LD32(v0-16372));
    goto L_088787EC;
L_088787EC:;
    s5 = D_08B285B4 - (-31308);
    { u64 r_ = func_08878708(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088787F4;
L_088787F4:;
    f12 = BITSF(LD32(s5-31308));
    s2 = s0 + 72;
    cnd_ = v0 == 0;
    s1 = s0 + 84;
    if (cnd_) { goto L_08878A8C; }
    goto L_08878804;
L_08878804:;
    a2 = LD32(s0+104);
    cnd_ = a2 == 0;
    if (cnd_) { goto L_08878A8C; }
    goto L_08878810;
L_08878810:;
    f0 = BITSF(LD32(s0+108));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    f13 = f20;
    if (cnd_) { goto L_08878A90; }
    goto L_08878824;
L_08878824:;
    f1 = BITSF(LD32(s0+112));
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08878A94; }
    goto L_08878838;
L_08878838:;
    f3 = f12 - f0;
    f0 = f1 - f0;
    f5 = BITSF(LD32(a2));
    f4 = BITSF(LD32(a2+4));
    f6 = BITSF(LD32(a2+8));
    f3 = f3 / f0;
    v1 = a2 + 12;
    a0 = a2 + 24;
    a1 = a2 + 36;
    v0 = D_08AEC014 - (-16364);
    f10 = BITSF(LD32(v0-16364));
    v0 = D_08AEC018 - (-16360);
    f7 = f3 * f3;
    f8 = f3 + f3;
    f0 = f7 * f3;
    f6 = f6 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    ST32(sp+56, FBITS(f6));
    ST32(sp+52, FBITS(f4));
    ST32(sp+48, FBITS(f5));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(a2+12));
    f2 = BITSF(LD32(v1+8));
    f0 = f0 * f7;
    f1 = f1 * f7;
    f2 = f2 * f7;
    f4 = f4 + f0;
    f5 = f5 + f1;
    f6 = f6 + f2;
    ST32(sp+64, FBITS(f1));
    ST32(sp+36, FBITS(f4));
    ST32(sp+32, FBITS(f5));
    ST32(sp+68, FBITS(f0));
    ST32(sp+72, FBITS(f2));
    ST32(sp+40, FBITS(f6));
    f2 = BITSF(LD32(a2+24));
    f0 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a0+8));
    f2 = f2 * f3;
    f0 = f0 * f3;
    f1 = f1 * f3;
    f5 = f5 + f2;
    f4 = f4 + f0;
    f6 = f6 + f1;
    ST32(sp+84, FBITS(f0));
    ST32(sp+20, FBITS(f4));
    ST32(sp+80, FBITS(f2));
    ST32(sp+16, FBITS(f5));
    ST32(sp+88, FBITS(f1));
    ST32(sp+24, FBITS(f6));
    f1 = BITSF(LD32(a2+36));
    f2 = BITSF(LD32(a1+4));
    f0 = BITSF(LD32(a1+8));
    f5 = f5 + f1;
    f4 = f4 + f2;
    f6 = f6 + f0;
    ST32(s0+72, FBITS(f5));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f6));
    ST32(s2+4, FBITS(f4));
    ST32(sp, FBITS(f5));
    ST32(s2+8, FBITS(f6));
    f0 = BITSF(LD32(v0-16360));
    v0 = D_08AEC01C - (-16356);
    f6 = BITSF(LD32(v0-16356));
    f7 = f7 * f0;
    f5 = BITSF(LD32(a2));
    f3 = BITSF(LD32(a2+4));
    f4 = BITSF(LD32(a2+8));
    f6 = f10 / f6;
    v0 = D_08B285A4 - (-31324);
    f9 = BITSF(LD32(v0-31324));
    v0 = D_08AEC020 - (-16352);
    f0 = BITSF(LD32(v0-16352));
    f4 = f4 * f7;
    f5 = f5 * f7;
    f3 = f3 * f7;
    fcc = FCMP(f0, f9, 12);
    ST32(sp+56, FBITS(f4));
    ST32(sp+52, FBITS(f3));
    ST32(sp+48, FBITS(f5));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(a2+12));
    f0 = BITSF(LD32(v1+4));
    f1 = f1 * f8;
    f2 = f2 * f8;
    f0 = f0 * f8;
    f4 = f4 + f1;
    f5 = f5 + f2;
    f3 = f3 + f0;
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f1));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    ST32(sp+32, FBITS(f2));
    ST32(sp+64, FBITS(f5));
    f2 = BITSF(LD32(a0+4));
    f1 = BITSF(LD32(a2+24));
    f0 = BITSF(LD32(a0+8));
    f3 = f3 + f2;
    f5 = f5 + f1;
    f4 = f4 + f0;
    ST32(sp+84, FBITS(f3));
    f2 = f5 * f6;
    f1 = f4 * f6;
    f6 = f3 * f6;
    ST32(sp+88, FBITS(f4));
    ST32(sp+80, FBITS(f5));
    ST32(s1+4, FBITS(f6));
    ST32(s0+84, FBITS(f2));
    cnd_ = !fcc;
    ST32(s1+8, FBITS(f1));
    if (cnd_) { goto L_08878A18; }
    goto L_088789FC;
L_088789FC:;
    f0 = f10 / f9;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f0 = f6 * f0;
    ST32(s1+8, FBITS(f1));
    ST32(s0+84, FBITS(f2));
    ST32(s1+4, FBITS(f0));
    goto L_08878A18;
L_08878A18:;
    f0 = BITSF(LD32(s5-31308));
    ST32(s0+96, FBITS(f0));
    v0 = func_08878724();
    goto L_08878A24;
L_08878A24:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s2+8)); goto L_08878A38; }
    goto L_08878A2C;
L_08878A2C:;
    func_08878714();
    goto L_08878A34;
L_08878A34:;
    f0 = BITSF(LD32(s2+8));
    goto L_08878A38;
L_08878A38:;
    f1 = BITSF(LD32(s0+72));
    f2 = BITSF(LD32(s2+4));
    ST32(s3+8, FBITS(f0));
    ST32(s3, FBITS(f1));
    ST32(s3+4, FBITS(f2));
    f0 = BITSF(LD32(s0+84));
    f1 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1+4));
    ST32(s4, FBITS(f0));
    ST32(s4+8, FBITS(f1));
    goto L_08878A60;
L_08878A60:;
    ST32(s4+4, FBITS(f2));
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08878A8C:;
    f13 = f20;
    goto L_08878A90;
L_08878A90:;
    a0 = s0 + 0;
    goto L_08878A94;
L_08878A94:;
    a1 = s2 + 0;
    a2 = s1 + 0;
    { u64 r_ = func_08878B54(a0, a1, a2, 0, f12, f13); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08878AA0;
L_08878AA0:;
    f0 = BITSF(LD32(s5-31308));
    ST32(s0+96, FBITS(f0));
    goto L_08878A34;
L_08878AAC:;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08878AC8; }
    goto L_08878AB8;
L_08878AB8:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08878AC8; }
    goto L_08878AC0;
L_08878AC0:;
    cnd_ = v1 == v0;
    v0 = D_08AEC010 - (-16368);
    if (cnd_) { goto L_08878AE8; }
    goto L_08878AC8;
L_08878AC8:;
    v0 = LD32(s0+116);
    cnd_ = v0 == 0;
    v0 = D_08AD4B90 - (19344);
    if (cnd_) { goto L_08878AE0; }
    goto L_08878AD4;
L_08878AD4:;
    v0 = D_08AD4B94 - (19348);
    f20 = BITSF(LD32(v0+19348));
    goto L_088787EC;
L_08878AE0:;
    f20 = BITSF(LD32(v0+19344));
    goto L_088787EC;
L_08878AE8:;
    f20 = BITSF(LD32(v0-16368));
    goto L_088787EC;
L_08878AF0:;
    v0 = D_08B285B4 - (-31308);
    f2 = BITSF(LD32(v0-31308));
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0+4));
    v0 = a0 + 72;
    v1 = a0 + 84;
    ST32(v0+8, FBITS(f1));
    ST32(v0+4, FBITS(f0));
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(a0+96, FBITS(f2));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    ST32(a0+84, 0);
    ST32(a1+8, FBITS(f1));
    ST32(a0+72, FBITS(f2));
    ST32(a1+4, FBITS(f0));
    ST32(a1, FBITS(f2));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a0+84));
    f2 = BITSF(LD32(v1+4));
    ST32(a2+8, FBITS(f0));
    ST32(a2, FBITS(f1));
    goto L_08878A60;
}

/* 08878B54 */
u64 func_08878B54(u32 a0, u32 a1, u32 a2, u32 t0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08878B54:;
    sp = sp - 112;
    s4 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    f23 = f13;
    v1 = LD32(a0+64);
    cnd_ = (s32)v1 < 0;
    f21 = f12;
    if (cnd_) { goto L_08878E74; }
    goto L_08878BA0;
L_08878BA0:;
    v0 = v1 << 5;
    s0 = a0 + v0;
    f20 = BITSF(LD32(s0+28));
    v0 = 1;
    v0 = v0 - v1;
    fcc = FCMP(f20, f12, 12);
    v0 = v0 << 5;
    s3 = a0 + v0;
    s5 = 0 + 0;
    cnd_ = !fcc;
    f22 = BITSF(LD32(s3+28));
    if (cnd_) { goto L_08878E34; }
    goto L_08878BCC;
L_08878BCC:;
    s5 = 1;
    f1 = f20 - f22;
    goto L_08878BD4;
L_08878BD4:;
    v0 = D_08AEC024 - (-16348);
    f0 = BITSF(LD32(v0-16348));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f12 = f21 - f20; goto L_08878C44; }
    goto L_08878BEC;
L_08878BEC:;
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    goto L_08878BF8;
L_08878BF8:;
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    ST32(s1, 0);
    ST32(s1+8, 0);
    ST32(s1+4, 0);
    goto L_08878C10;
L_08878C10:;
    goto L_08878C14;
L_08878C14:;
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_08878C44:;
    fcc = FCMP(f23, f12, 12);
    cnd_ = fcc;
    if (cnd_) { f12 = f23; goto L_08878C54; }
    goto L_08878C54;
L_08878C54:;
    f10 = BITSF(0);
    fcc = FCMP(f10, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s0+8)); goto L_08878E10; }
    goto L_08878C68;
L_08878C68:;
    v0 = D_08AEC028 - (-16344);
    f13 = BITSF(LD32(v0-16344));
    f6 = BITSF(LD32(s3+8));
    f2 = BITSF(LD32(s3));
    f0 = f13 / f1;
    f5 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s3+4));
    f4 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    v0 = D_08B285A4 - (-31324);
    f11 = BITSF(LD32(v0-31324));
    v0 = D_08AEC02C - (-16340);
    f4 = f4 - f1;
    f5 = f5 - f2;
    f3 = f3 - f6;
    f1 = f12 * f0;
    f9 = f4 * f0;
    f8 = f5 * f0;
    f7 = f3 * f0;
    f0 = BITSF(LD32(v0-16340));
    f6 = f3 * f1;
    f2 = f5 * f1;
    fcc = FCMP(f0, f11, 12);
    f1 = f4 * f1;
    ST32(sp+24, FBITS(f6));
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f1));
    ST32(sp, FBITS(f5));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f3));
    ST32(sp+32, FBITS(f8));
    ST32(sp+36, FBITS(f9));
    ST32(sp+40, FBITS(f7));
    ST32(s1, FBITS(f8));
    ST32(s1+4, FBITS(f9));
    cnd_ = !fcc;
    ST32(s1+8, FBITS(f7));
    if (cnd_) { goto L_08878D18; }
    goto L_08878CFC;
L_08878CFC:;
    f0 = f13 / f11;
    f1 = f7 * f0;
    f2 = f8 * f0;
    f0 = f9 * f0;
    ST32(s1+8, FBITS(f1));
    ST32(s1, FBITS(f2));
    ST32(s1+4, FBITS(f0));
    goto L_08878D18;
L_08878D18:;
    cnd_ = s5 == 0;
    if (cnd_) { f2 = BITSF(LD32(s0)); goto L_08878DD4; }
    goto L_08878D20;
L_08878D20:;
    a0 = LD32(s2+116);
    cnd_ = a0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s0)); goto L_08878DD4; }
    goto L_08878D2C;
L_08878D2C:;
    v0 = LD32(sp+16);
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+20);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+24);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f10, 2);
    cnd_ = !fcc;
    if (cnd_) { t0 = LD32(s2+120); goto L_08878D84; }
    goto L_08878D64;
L_08878D64:;
    v0 = func_08878724();
    goto L_08878D6C;
L_08878D6C:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08878C14; }
    goto L_08878D74;
L_08878D74:;
    func_08878714();
    goto L_08878D7C;
L_08878D7C:;
    goto L_08878C14;
L_08878D84:;
    a2 = sp + 16;
    a1 = s0 + 0;
    a3 = s4 + 0;
    func_0884D724(a0, a1, a2, a3, t0);
    goto L_08878D94;
L_08878D94:;
    f2 = BITSF(LD32(s4+8));
    f5 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s4));
    f3 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s4+4));
    f4 = BITSF(LD32(s0+4));
    f1 = f1 - f3;
    f2 = f2 - f5;
    f0 = f0 - f4;
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f2));
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    ST32(sp+40, FBITS(f2));
    goto L_08878D64;
L_08878DD4:;
    f0 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(s4, FBITS(f2));
    ST32(s4+8, FBITS(f4));
    ST32(s4+4, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    goto L_08878D64;
L_08878E10:;
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    ST32(s1, FBITS(f10));
    ST32(s1+8, FBITS(f10));
    ST32(s1+4, FBITS(f10));
    goto L_08878C10;
L_08878E34:;
    fcc = FCMP(f22, f12, 14);
    cnd_ = fcc;
    f1 = f20 - f22;
    if (cnd_) { goto L_08878BD4; }
    goto L_08878E44;
L_08878E44:;
    v0 = func_08878724();
    goto L_08878E4C;
L_08878E4C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08878E64; }
    goto L_08878E54;
L_08878E54:;
    v0 = func_0887871C();
    goto L_08878E5C;
L_08878E5C:;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = f20 - f22; goto L_08878BD4; }
    goto L_08878E64;
L_08878E64:;
    func_08878714();
    goto L_08878E6C;
L_08878E6C:;
    f1 = f20 - f22;
    goto L_08878BD4;
L_08878E74:;
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(a0));
    f2 = BITSF(LD32(a0+4));
    goto L_08878BF8;
}

/* 08878E84 */
rv_t func_08878E84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr80 = v[80], vr81 = v[81], vr82 = v[82], vr83 = v[83], vr84 = v[84], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr88 = v[88], vr89 = v[89], vr90 = v[90], vr91 = v[91], vr92 = v[92], vr93 = v[93], vr94 = v[94], vr95 = v[95], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr101 = v[101], vr102 = v[102], vr104 = v[104], vr105 = v[105], vr106 = v[106], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr119 = v[119], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125];
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08878E84:;
    v0 = LD32(a0+64);
    v1 = 1;
    a2 = a0 + 0;
    v1 = v1 - v0;
    v1 = v1 << 5;
    a0 = v0 << 5;
    sp = sp - 16;
    t1 = a1 + 0;
    t0 = a2 + v1;
    cnd_ = (s32)v0 < 0;
    a3 = a2 + a0;
    if (cnd_) { goto L_088790F0; }
    goto L_08878EB0;
L_08878EB0:;
    f2 = BITSF(LD32(a3+28));
    f0 = BITSF(LD32(t0+28));
    v0 = D_08B285B4 - (-31308);
    f1 = BITSF(LD32(v0-31308));
    f3 = f2 - f0;
    v0 = D_08AEC030 - (-16336);
    f0 = BITSF(LD32(v0-16336));
    f4 = BITSF(0);
    a0 = a3 + 12;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    f0 = f1 - f2;
    if (cnd_) { goto L_08878F64; }
    goto L_08878EE4;
L_08878EE4:;
    {vr112=BITSF(LD32(a3+(12)));}
    {vr113=BITSF(LD32(a3+(16)));}
    {vr114=BITSF(LD32(a3+(20)));}
    {vr115=BITSF(LD32(a3+(24)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;vr88=s0*t0;vr89=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;vr93=s1*t0;vr94=s2*t0;vr95=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=vr80;float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;vr104=d0;}
    {float s0=vr96;float t0=vr90;float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;vr105=d0;}
    {float s0=vr106;float t0=vr90;float d0=s0-t0;vr101=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;vr102=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(a1+(0),FBITS(vr96));}
    {ST32(a1+(4),FBITS(vr97));}
    {ST32(a1+(8),FBITS(vr98));}
    {ST32(a1+(12),FBITS(vr100));}
    {ST32(a1+(16),FBITS(vr101));}
    {ST32(a1+(20),FBITS(vr102));}
    {ST32(a1+(24),FBITS(vr104));}
    {ST32(a1+(28),FBITS(vr105));}
    {ST32(a1+(32),FBITS(vr106));}
    goto L_08878F5C;
L_08878F5C:;
    sp = sp + 16;
    { v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[92]=vr92;v[93]=vr93;v[94]=vr94;v[95]=vr95;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;return (rv_t){ v0, v1, f0 }; }
L_08878F64:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f4; goto L_08878F74; }
    goto L_08878F74;
L_08878F74:;
    fcc = FCMP(f4, f3, 12);
    a1 = LD32(a0+12);
    v1 = LD32(a0+4);
    v0 = LD32(a3+12);
    a0 = LD32(a0+8);
    ST32(sp+4, v1);
    ST32(sp, v0);
    ST32(sp+8, a0);
    cnd_ = !fcc;
    ST32(sp+12, a1);
    if (cnd_) { goto L_08879074; }
    goto L_08878F9C;
L_08878F9C:;
    f0 = f0 / f3;
    v0 = D_08AEC034 - (-16332);
    f2 = BITSF(LD32(v0-16332));
    v1 = D_08AEC038 - (-16328);
    f1 = BITSF(LD32(v1-16328));
    v1 = FBITS(f1);
    f0 = f0 + f2;
    v0 = FBITS(f0);
    {vr112=BITSF(LD32(t0+(12)));}
    {vr113=BITSF(LD32(t0+(16)));}
    {vr114=BITSF(LD32(t0+(20)));}
    {vr115=BITSF(LD32(t0+(24)));}
    {vr116=BITSF(LD32(a3+(12)));}
    {vr117=BITSF(LD32(a3+(16)));}
    {vr118=BITSF(LD32(a3+(20)));}
    {vr119=BITSF(LD32(a3+(24)));}
    {vr124=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr116;float t1=vr117;float t2=vr118;float t3=vr119;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr0;vr98=(float)1;}
    {float s0=vr97;float t0=vr96;float d0=(s0>=t0?1.f:0.f);vr99=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=vr98;float t0=vr124;float d0=s0-t0;vr125=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08879028; }
    goto L_08879008;
L_08879008:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=vr98;float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);vr101=d0;}
    {float s0=vr124;float s1=vr125;float t0=vr100;vr124=s0*t0;vr125=s1*t0;}
    {float s0=vr101;float d0=1.0f/s0;vr102=d0;}
    {float s0=vr124;float s1=vr125;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=vr102;vr124=s0*t0;vr125=s1*t0;}
    goto L_08879028;
L_08879028:;
    {float s0=vr99;float t0=vr99;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_0887903C; }
    goto L_08879034;
L_08879034:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_0887903C;
L_0887903C:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr125;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr116;float s1=vr117;float s2=vr118;float s3=vr119;float t0=vr124;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr80;float s1=vr81;float s2=vr82;float s3=vr83;float t0=vr84;float t1=vr85;float t2=vr86;float t3=vr87;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;vr121=d1;vr122=d2;vr123=d3;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr120;float t1=vr121;float t2=vr122;float t3=vr123;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_08879064; }
    goto L_08879058;
L_08879058:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=vr121;float s2=vr122;float s3=vr123;float t0=vr92;vr120=s0*t0;vr121=s1*t0;vr122=s2*t0;vr123=s3*t0;}
    goto L_08879064;
L_08879064:;
    {ST32(sp+(0),FBITS(vr120));}
    {ST32(sp+(4),FBITS(vr121));}
    {ST32(sp+(8),FBITS(vr122));}
    {ST32(sp+(12),FBITS(vr123));}
    goto L_08879074;
L_08879074:;
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr115=BITSF(LD32(sp+(12)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;vr88=s0*t0;vr89=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;vr93=s1*t0;vr94=s2*t0;vr95=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=vr80;float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;vr104=d0;}
    {float s0=vr96;float t0=vr90;float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;vr105=d0;}
    {float s0=vr106;float t0=vr90;float d0=s0-t0;vr101=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;vr102=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(t1+(0),FBITS(vr96));}
    {ST32(t1+(4),FBITS(vr97));}
    {ST32(t1+(8),FBITS(vr98));}
    {ST32(t1+(12),FBITS(vr100));}
    {ST32(t1+(16),FBITS(vr101));}
    {ST32(t1+(20),FBITS(vr102));}
    {ST32(t1+(24),FBITS(vr104));}
    {ST32(t1+(28),FBITS(vr105));}
    {ST32(t1+(32),FBITS(vr106));}
    goto L_08878F5C;
L_088790F0:;
    {vr112=BITSF(LD32(a2+(12)));}
    {vr113=BITSF(LD32(a2+(16)));}
    {vr114=BITSF(LD32(a2+(20)));}
    {vr115=BITSF(LD32(a2+(24)));}
    {float s0=vr0;vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;vr80=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;vr84=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;vr88=s0*t0;vr89=s1*t0;vr90=s2*t0;vr91=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;vr93=s1*t0;vr94=s2*t0;vr95=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=vr80;float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;vr104=d0;}
    {float s0=vr96;float t0=vr90;float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=vr91;float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;vr105=d0;}
    {float s0=vr106;float t0=vr90;float d0=s0-t0;vr101=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;vr102=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(a1+(0),FBITS(vr96));}
    {ST32(a1+(4),FBITS(vr97));}
    {ST32(a1+(8),FBITS(vr98));}
    {ST32(a1+(12),FBITS(vr100));}
    {ST32(a1+(16),FBITS(vr101));}
    {ST32(a1+(20),FBITS(vr102));}
    {ST32(a1+(24),FBITS(vr104));}
    {ST32(a1+(28),FBITS(vr105));}
    {ST32(a1+(32),FBITS(vr106));}
    goto L_08878F5C;
    v[80]=vr80;v[81]=vr81;v[82]=vr82;v[83]=vr83;v[84]=vr84;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[88]=vr88;v[89]=vr89;v[90]=vr90;v[91]=vr91;v[92]=vr92;v[93]=vr93;v[94]=vr94;v[95]=vr95;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[101]=vr101;v[102]=vr102;v[104]=vr104;v[105]=vr105;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[119]=vr119;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;
}

/* 0887916C */
rv_t func_0887916C(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0887916C:;
    sp = sp - 112;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a0+68));
    f20 = f12 + f0;
    v0 = func_0887871C();
    goto L_088791A4;
L_088791A4:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+64); goto L_088791B8; }
    goto L_088791AC;
L_088791AC:;
    func_08878714();
    goto L_088791B4;
L_088791B4:;
    a0 = LD32(s0+64);
    goto L_088791B8;
L_088791B8:;
    v0 = (u32)-2;
    cnd_ = a0 == v0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0887955C; }
    goto L_088791C4;
L_088791C4:;
    cnd_ = a0 == v0;
    if (cnd_) { f0 = BITSF(LD32(s0+28)); goto L_08879540; }
    goto L_088791CC;
L_088791CC:;
    cnd_ = (s32)a0 < 0;
    v0 = a0 << 5;
    if (cnd_) { goto L_088793A4; }
    goto L_088791D4;
L_088791D4:;
    v0 = v0 + s0;
    f0 = BITSF(LD32(v0+28));
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_088793A8; }
    goto L_088791EC;
L_088791EC:;
    v1 = 1;
    f4 = BITSF(LD32(s2));
    f3 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    a0 = v1 - a0;
    v0 = a0 << 5;
    t0 = s0 + v0;
    ST32(t0, FBITS(f4));
    v1 = v1 - a0;
    v1 = v1 << 5;
    ST32(t0+4, FBITS(f3));
    a3 = s0 + v1;
    t1 = D_08AEC054 - (-16300);
    ST32(t0+8, FBITS(f2));
    v1 = LD32(s1);
    f1 = BITSF(LD32(t1-16300));
    ST32(s0+64, a0);
    ST32(t0+12, v1);
    v0 = LD32(s1+4);
    ST32(t0+16, v0);
    v1 = LD32(s1+8);
    ST32(t0+20, v1);
    v0 = LD32(s1+12);
    ST32(t0+28, FBITS(f20));
    ST32(t0+24, v0);
    f0 = BITSF(LD32(a3+28));
    f5 = f20 - f0;
    fcc = FCMP(f1, f5, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(t0)); goto L_08879360; }
    goto L_08879268;
L_08879268:;
    f9 = BITSF(LD32(a3));
    f10 = BITSF(LD32(a3+4));
    f11 = BITSF(LD32(a3+8));
    f7 = f4 - f9;
    f8 = f3 - f10;
    f6 = f2 - f11;
    v0 = D_08AEC058 - (-16296);
    f0 = f7 * f7;
    f1 = f8 * f8;
    f2 = f6 * f6;
    f3 = BITSF(LD32(v0-16296));
    ST32(sp, FBITS(f7));
    f0 = f0 + f1;
    ST32(sp+4, FBITS(f8));
    f0 = f0 + f2;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f6));
    if (cnd_) { goto L_08879328; }
    goto L_088792B4;
L_088792B4:;
    v0 = D_08AEC05C - (-16292);
    f1 = BITSF(LD32(v0-16292));
    a0 = t0 + 12;
    a1 = a3 + 12;
    v1 = LD32(a3+12);
    v0 = LD32(t0+12);
    {v[0]=BITSF(v1);}
    {v[4]=BITSF(v0);}
    v1 = LD32(a0+4);
    v0 = LD32(a0+8);
    {v[5]=BITSF(v1);}
    f1 = f1 - f3;
    {v[6]=BITSF(v0);}
    a2 = LD32(a0+12);
    v0 = LD32(a1+4);
    a3 = LD32(a1+12);
    {v[1]=BITSF(v0);}
    {v[7]=BITSF(a2);}
    v1 = LD32(a1+8);
    {v[2]=BITSF(v1);}
    {v[3]=BITSF(a3);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f0 = BITSF(v0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(t0)); goto L_08879360; }
    goto L_08879328;
L_08879328:;
    v0 = LD32(s0+104);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088793A8; }
    goto L_08879334;
L_08879334:;
    v0 = D_08B285B4 - (-31308);
    f0 = BITSF(LD32(v0-31308));
    f14 = BITSF(LD32(s0+96));
    v1 = D_08AEC060 - (-16288);
    f1 = BITSF(LD32(v1-16288));
    f0 = f0 - f14;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088793C4; }
    goto L_0887935C;
L_0887935C:;
    f0 = BITSF(LD32(t0));
    goto L_08879360;
L_08879360:;
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    ST32(s0, FBITS(f0));
    v0 = (u32)-1;
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    v1 = LD32(t0+12);
    ST32(s0+64, v0);
    ST32(s0+12, v1);
    v0 = LD32(t0+16);
    ST32(s0+16, v0);
    v1 = LD32(t0+20);
    ST32(s0+20, v1);
    v0 = LD32(t0+24);
    ST32(s0+24, v0);
    f0 = BITSF(LD32(t0+28));
    ST32(s0+28, FBITS(f0));
    goto L_088793A4;
L_088793A4:;
    goto L_088793A8;
L_088793A8:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_088793C4:;
    cnd_ = s3 == 0;
    v0 = D_08AEC05C - (-16292);
    if (cnd_) { goto L_088794EC; }
    goto L_088793CC;
L_088793CC:;
    f6 = BITSF(LD32(s3+8));
    f17 = BITSF(LD32(s2+8));
    f7 = BITSF(LD32(s3));
    f8 = BITSF(LD32(s3+4));
    f16 = BITSF(LD32(s2));
    f15 = BITSF(LD32(s2+4));
    ST32(sp, FBITS(f7));
    ST32(sp+4, FBITS(f8));
    ST32(sp+8, FBITS(f6));
    goto L_088793F0;
L_088793F0:;
    f0 = BITSF(LD32(v1-16288));
    f13 = f14 + f0;
    f0 = BITSF(0);
    f12 = f13 - f20;
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+32, FBITS(f16)); goto L_088794D4; }
    goto L_08879410;
L_08879410:;
    f0 = BITSF(LD32(t1-16300));
    fcc = FCMP(f12, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(sp+32, FBITS(f16)); goto L_088794D4; }
    goto L_08879424;
L_08879424:;
    f7 = BITSF(LD32(sp));
    f8 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(sp+8));
    f0 = f7 * f12;
    f1 = f8 * f12;
    f2 = f6 * f12;
    f3 = f16 + f0;
    f4 = f15 + f1;
    f5 = f17 + f2;
    ST32(sp+48, FBITS(f0));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+52, FBITS(f1));
    ST32(sp+56, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    goto L_0887946C;
L_0887946C:;
    v0 = s0 + 84;
    f0 = BITSF(LD32(v1-16288));
    f3 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(s0+84));
    f2 = BITSF(LD32(v0+4));
    f5 = f6 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f4 = f7 * f0;
    f0 = f8 * f0;
    a1 = s0 + 72;
    a0 = s0 + 0;
    a2 = sp + 32;
    a3 = sp + 48;
    t0 = sp + 16;
    f12 = f14;
    ST32(sp+48, FBITS(f1));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f5));
    { rv_t r_ = func_08879828(a0, a1, a2, a3, t0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088794CC;
L_088794CC:;
    goto L_088793A8;
L_088794D4:;
    ST32(sp+36, FBITS(f15));
    ST32(sp+40, FBITS(f17));
    f7 = BITSF(LD32(sp));
    f8 = BITSF(LD32(sp+4));
    f6 = BITSF(LD32(sp+8));
    goto L_0887946C;
L_088794EC:;
    f0 = BITSF(LD32(v0-16292));
    f17 = BITSF(LD32(s2+8));
    f16 = BITSF(LD32(s2));
    f0 = f0 / f5;
    f15 = BITSF(LD32(s2+4));
    f1 = f16 - f9;
    f2 = f15 - f10;
    f3 = f17 - f11;
    f4 = f1 * f0;
    f5 = f2 * f0;
    f0 = f3 * f0;
    ST32(sp+32, FBITS(f1));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f0));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f0));
    goto L_088793F0;
L_08879540:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088791CC; }
    goto L_08879550;
L_08879550:;
    ST32(s0+64, 0);
    a0 = 0 + 0;
    goto L_088791CC;
L_0887955C:;
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    ST32(s0, FBITS(f0));
    a0 = (u32)-1;
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f2));
    v1 = LD32(s1);
    ST32(s0+64, v0);
    ST32(s0+12, v1);
    v0 = LD32(s1+4);
    ST32(s0+16, v0);
    v1 = LD32(s1+8);
    ST32(s0+20, v1);
    v0 = LD32(s1+12);
    ST32(s0+28, FBITS(f20));
    ST32(s0+24, v0);
    goto L_088791CC;
}

/* 088795A4 */
rv_t func_088795A4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
L_088795A4:;
    v0 = LD32(a0+64);
    a2 = a0 + 0;
    v1 = a2 + 32;
    cnd_ = (s32)v0 < 0;
    a0 = 1;
    if (cnd_) { goto L_0887966C; }
    goto L_088795B8;
L_088795B8:;
    f1 = BITSF(LD32(a2));
    f0 = BITSF(LD32(a2+32));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_0887966C; }
    goto L_088795D0;
L_088795D0:;
    f1 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    a3 = a2 + 12;
    if (cnd_) { goto L_0887966C; }
    goto L_088795E8;
L_088795E8:;
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a2+8));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    t0 = a2 + 44;
    if (cnd_) { goto L_0887966C; }
    goto L_08879600;
L_08879600:;
    a0 = LD32(a3+12);
    v1 = LD32(a2+44);
    v0 = LD32(a2+12);
    {vr0=BITSF(v1);}
    {v[4]=BITSF(v0);}
    v1 = LD32(a3+4);
    v0 = LD32(a3+8);
    {v[5]=BITSF(v1);}
    a1 = LD32(t0+12);
    {v[6]=BITSF(v0);}
    v1 = LD32(t0+8);
    {v[7]=BITSF(a0);}
    v0 = LD32(t0+4);
    {v[1]=BITSF(v0);}
    v0 = D_08AEC064 - (-16284);
    {v[2]=BITSF(v1);}
    {v[3]=BITSF(a1);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr0=sum;}
    {v1=FBITS(vr0);}
    v1 = (v1 >> 0) & 0x7fffffff;
    f1 = BITSF(v1);
    f0 = BITSF(LD32(v0-16284));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a0 = 1;
    if (cnd_) { goto L_0887966C; }
    goto L_08879668;
L_08879668:;
    a0 = 0 + 0;
    goto L_0887966C;
L_0887966C:;
    v0 = a0 + 0;
    { v[0]=vr0;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;
}

/* 08879674 */
void func_08879674(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08879674:;
    sp = sp - 48;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a2 + 0;
    func_08879990(a0);
    goto L_0887969C;
L_0887969C:;
    v0 = D_08B285B4 - (-31308);
    f20 = BITSF(LD32(v0-31308));
    a1 = s0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088796B0;
L_088796B0:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    f12 = f20;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088796C8;
L_088796C8:;
    sp = sp + 48;
    return;
}

/* 088796E4 */
u32 func_088796E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088796E4:;
    a1 = LD32(a0+64);
    v1 = D_08B45A9C - (23196);
    v0 = (u32)-2;
    cnd_ = a1 == v0;
    v1 = v1 + 23196;
    if (cnd_) { goto L_0887970C; }
    goto L_088796F8;
L_088796F8:;
    v0 = (u32)-1;
    a2 = a1 << 5;
    cnd_ = a1 == v0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0887970C; }
    goto L_08879708;
L_08879708:;
    v1 = a0 + a2;
    goto L_0887970C;
L_0887970C:;
    v0 = v1 + 0;
    return v0;
}

/* 08879714 */
u32 func_08879714(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_08879714:;
    a1 = LD32(a0+64);
    v1 = D_08B45ACC - (23244);
    v0 = (u32)-2;
    cnd_ = a1 == v0;
    v1 = v1 + 23244;
    if (cnd_) { goto L_08879740; }
    goto L_08879728;
L_08879728:;
    v0 = a1 << 5;
    a2 = a0 + v0;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v1 = a0 + 12;
    if (cnd_) { goto L_08879740; }
    goto L_0887973C;
L_0887973C:;
    v1 = a2 + 12;
    goto L_08879740;
L_08879740:;
    v0 = v1 + 0;
    return v0;
}

/* 08879748 */
void func_08879748(u32 a0, u32 a1, u32 a2, u32 a3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_08879748:;
    sp = sp - 80;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    s0 = a3 + 0;
    f20 = f12;
    func_08879990(a0);
    goto L_0887977C;
L_0887977C:;
    v0 = D_08AEC068 - (-16280);
    v1 = D_08B285A4 - (-31324);
    f12 = BITSF(LD32(v0-16280));
    f0 = BITSF(LD32(v1-31324));
    f6 = BITSF(LD32(s0+8));
    f5 = BITSF(LD32(s0));
    f0 = f0 * f12;
    f4 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f6 = f6 * f0;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f1 = BITSF(LD32(s1+8));
    f12 = f20 - f12;
    f2 = f2 - f5;
    f3 = f3 - f4;
    f1 = f1 - f6;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = s3 + 0;
    a3 = 0 + 0;
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f1));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f6));
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088797F0;
L_088797F0:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    a2 = s3 + 0;
    f12 = f20;
    a3 = 0 + 0;
    { rv_t r_ = func_0887916C(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08879808;
L_08879808:;
    sp = sp + 80;
    return;
}

/* 08879828 */
rv_t func_08879828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08879828:;
    v0 = D_08AEC06C - (-16276);
    f9 = BITSF(LD32(v0-16276));
    f2 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a1+4));
    f4 = BITSF(LD32(a2));
    f5 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a1+8));
    f3 = BITSF(LD32(a2+8));
    f4 = f4 * f9;
    f5 = f5 * f9;
    f3 = f3 * f9;
    f2 = f2 + f2;
    f0 = f0 + f0;
    f1 = f1 + f1;
    t1 = LD32(a0+104);
    f2 = f2 + f4;
    f0 = f0 + f5;
    f1 = f1 + f3;
    f4 = BITSF(LD32(a3));
    f3 = BITSF(LD32(a3+4));
    f5 = BITSF(LD32(a3+8));
    f2 = f2 + f4;
    f0 = f0 + f3;
    f1 = f1 + f5;
    f3 = BITSF(LD32(t0));
    f4 = BITSF(LD32(t0+4));
    f5 = BITSF(LD32(t0+8));
    f2 = f2 + f3;
    f0 = f0 + f4;
    f1 = f1 + f5;
    v0 = D_08AEC070 - (-16272);
    ST32(t1, FBITS(f2));
    v1 = D_08AEC074 - (-16268);
    t2 = t1 + 12;
    ST32(t1+4, FBITS(f0));
    t3 = t1 + 24;
    t4 = t1 + 36;
    ST32(t1+8, FBITS(f1));
    sp = sp - 96;
    f3 = BITSF(LD32(v0-16272));
    f5 = BITSF(LD32(v1-16268));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f6 = BITSF(LD32(a2));
    f7 = BITSF(LD32(a2+4));
    f8 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(a1+8));
    f6 = f6 * f5;
    f8 = f8 * f5;
    f7 = f7 * f5;
    f1 = f1 * f3;
    f0 = f0 * f3;
    f2 = f2 * f3;
    f4 = BITSF(LD32(a3));
    f5 = BITSF(LD32(a3+4));
    f3 = BITSF(LD32(a3+8));
    f4 = f4 * f9;
    f1 = f1 + f6;
    f3 = f3 * f9;
    f2 = f2 + f7;
    f0 = f0 + f8;
    f5 = f5 * f9;
    f1 = f1 + f4;
    f6 = BITSF(LD32(t0+8));
    f0 = f0 + f3;
    f2 = f2 + f5;
    f3 = BITSF(LD32(t0));
    f4 = BITSF(LD32(t0+4));
    f0 = f0 - f6;
    f1 = f1 - f3;
    f2 = f2 - f4;
    ST32(t1+12, FBITS(f1));
    ST32(t2+4, FBITS(f2));
    ST32(t2+8, FBITS(f0));
    f1 = BITSF(LD32(a3+8));
    f2 = BITSF(LD32(a3));
    f0 = BITSF(LD32(a3+4));
    ST32(t3+8, FBITS(f1));
    ST32(t3+4, FBITS(f0));
    ST32(t1+24, FBITS(f2));
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(t4+8, FBITS(f0));
    ST32(t1+36, FBITS(f1));
    ST32(t4+4, FBITS(f2));
    ST32(a0+112, FBITS(f13));
    ST32(a0+108, FBITS(f12));
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 08879990 */
void func_08879990(u32 a0)
{
    u32 v0 = 0;
L_08879990:;
    v0 = (u32)-2;
    ST32(a0+64, v0);
    ST32(a0+96, 0);
    ST32(a0+108, 0);
    ST32(a0+112, 0);
    return;
}

/* 088799A8 */
void func_088799A8(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088799A8:;
    a0 = D_08B29170 - (-28304);
    sp = sp - 16;
    a0 = a0 - 28304;
    func_08879B18(a0);
    goto L_088799BC;
L_088799BC:;
    sp = sp + 16;
    return;
}

/* 088799C8 */
void func_088799C8(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088799C8:;
    a0 = D_08B29170 - (-28304);
    sp = sp - 16;
    a0 = a0 - 28304;
    func_08879B6C(a0);
    goto L_088799DC;
L_088799DC:;
    func_08879A30();
    goto L_088799E4;
L_088799E4:;
    sp = sp + 16;
    return;
}

/* 088799F0 */
void func_088799F0(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088799F0:;
    a0 = D_08B29170 - (-28304);
    sp = sp - 16;
    a0 = a0 - 28304;
    func_08879BAC(a0);
    goto L_08879A04;
L_08879A04:;
    sp = sp + 16;
    return;
}

/* 08879A10 */
void func_08879A10(u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08879A10:;
    a0 = D_08B29170 - (-28304);
    sp = sp - 16;
    a0 = a0 - 28304;
    func_08879BE4(a0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08879A24;
L_08879A24:;
    sp = sp + 16;
    return;
}

/* 08879A30 */
void func_08879A30(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08879A30:;
    a0 = D_08B29170 - (-28304);
    sp = sp - 16;
    a0 = a0 - 28304;
    func_08879BD8(a0);
    goto L_08879A44;
L_08879A44:;
    sp = sp + 16;
    return;
}

/* 08879A50 */
rv_t func_08879A50(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08879A50:;
    sp = sp - 16;
    v0 = D_08AEC080 - (-16256);
    a1 = D_08B25AC0 - (23232);
    f2 = BITSF(LD32(a0+16));
    f0 = BITSF(LD32(v0-16256));
    t0 = a1 + 23232;
    a2 = a0 + 0;
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    a3 = 0 + 0;
    if (cnd_) { goto L_08879AC8; }
    goto L_08879A80;
L_08879A80:;
    v1 = LD32(a1+23232);
    a0 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEC084 - (-16252);
    a0 = a0 + v1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-16252));
    ST32(t0+4, a0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    ST32(a1+23232, v1);
    if (cnd_) { goto L_08879ADC; }
    goto L_08879AC8;
L_08879AC8:;
    v0 = D_08B29640 - (-27072);
    v0 = LD32(v0-27072);
    cnd_ = v0 != 0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08879AEC; }
    goto L_08879AD8;
L_08879AD8:;
    a3 = 1;
    goto L_08879ADC;
L_08879ADC:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08879AEC:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08879AF4;
L_08879AF4:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08879ADC; }
    goto L_08879AFC;
L_08879AFC:;
    a3 = 1;
    goto L_08879ADC;
}

/* 08879B04 */
void func_08879B04(u32 a0)
{
L_08879B04:;
    ST32(a0+28, 0);
    ST32(a0+24, 0);
    return;
}

/* 08879B10 */
void func_08879B10(void)
{
L_08879B10:;
    return;
}

/* 08879B18 */
void func_08879B18(u32 a0)
{
    u32 s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08879B18:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = 1;
    s0 = a0 + 0;
    goto L_08879B38;
L_08879B38:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_0887A2A4(a0);
    goto L_08879B44;
L_08879B44:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08879B38; }
    goto L_08879B4C;
L_08879B4C:;
    ST32(s2+28, 0);
    ST32(s2+24, 0);
    sp = sp + 16;
    return;
}

/* 08879B6C */
void func_08879B6C(u32 a0)
{
    u32 s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08879B6C:;
    sp = sp - 16;
    s1 = 1;
    s0 = a0 + 0;
    goto L_08879B84;
L_08879B84:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    func_0887A2B4(a0);
    goto L_08879B90;
L_08879B90:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08879B84; }
    goto L_08879B98;
L_08879B98:;
    sp = sp + 16;
    return;
}

/* 08879BAC */
void func_08879BAC(u32 a0)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08879BAC:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_08879B6C(a0);
    goto L_08879BC0;
L_08879BC0:;
    a0 = s0 + 0;
    func_08879B18(a0);
    goto L_08879BC8;
L_08879BC8:;
    sp = sp + 16;
    return;
}

/* 08879BD8 */
void func_08879BD8(u32 a0)
{
L_08879BD8:;
    ST32(a0+28, 0);
    ST32(a0+24, 0);
    return;
}

/* 08879BE4 */
void func_08879BE4(u32 a0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08879BE4:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = D_08B285A0 - (-31328);
    t0 = 0 + 0;
    s0 = s1 + 32;
    a0 = LD32(a0+24);
    f1 = BITSF(LD32(v0-31328));
    ST32(s1+28, 0);
    cnd_ = (s32)a0 <= 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08879CCC; }
    goto L_08879C18;
L_08879C18:;
    f2 = BITSF(0);
    t1 = 100;
    goto L_08879C20;
L_08879C20:;
    f0 = BITSF(LD32(s0+4));
    a1 = v1 - 1;
    v0 = a1 << 1;
    f0 = f0 - f1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    a2 = v0 + s1;
    fcc = FCMP(f0, f2, 14);
    a3 = a2 + 32;
    cnd_ = !fcc;
    ST32(s0+4, FBITS(f0));
    if (cnd_) { goto L_08879D64; }
    goto L_08879C4C;
L_08879C4C:;
    v0 = LD32(s0);
    ST32(sp, v0);
    v1 = LD32(s0+4);
    ST32(sp+4, v1);
    a0 = LD32(s0+8);
    ST32(s1+24, a1);
    ST32(sp+8, a0);
    v0 = LD32(a2+32);
    ST32(s0, v0);
    v1 = LD32(a3+4);
    ST32(s0+4, v1);
    v0 = LD32(a3+8);
    ST32(s0+8, v0);
    a0 = LD32(s1+28);
    a2 = LD32(sp);
    a0 = a0 + 1;
    v1 = t1 - a0;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = v0 + s1;
    ST32(s1+28, a0);
    a1 = v0 + 32;
    ST32(v0+32, a2);
    v1 = LD32(sp+4);
    ST32(a1+4, v1);
    v0 = LD32(sp+8);
    ST32(a1+8, v0);
    a0 = LD32(s1+24);
    goto L_08879CC0;
L_08879CC0:;
    v0 = (s32)t0 < (s32)a0;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_08879C20; }
    goto L_08879CCC;
L_08879CCC:;
    a1 = LD32(s1+28);
    cnd_ = a1 != 0;
    v0 = 100;
    if (cnd_) { goto L_08879CEC; }
    goto L_08879CD8;
L_08879CD8:;
    goto L_08879CDC;
L_08879CDC:;
    sp = sp + 32;
    return;
L_08879CEC:;
    v0 = v0 - a1;
    v1 = v0 << 1;
    v1 = v1 + v0;
    v1 = v1 << 2;
    v1 = s1 + v1;
    s0 = v1 + 32;
    a3 = ((u32)(uintptr_t)func_08879D70) - (-25232);
    a3 = a3 - 25232;
    a0 = s0 + 0;
    a2 = 12;
    func_08A88510(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08879D18;
L_08879D18:;
    v1 = LD32(s1+28);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08879CDC; }
    goto L_08879D24;
L_08879D24:;
    v0 = v1 - 1;
    a1 = LD_U16(s0);
    a2 = LD_U16(s0+2);
    ST32(s1+28, v0);
    a0 = s1 + 0;
    { u64 r_ = func_0887A1B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08879D3C;
L_08879D3C:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08879D4C; }
    goto L_08879D44;
L_08879D44:;
    a1 = LD32(s0+8);
    { rv_t r_ = func_0887A040(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08879D4C;
L_08879D4C:;
    v0 = LD32(s1+28);
    s0 = s0 + 12;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08879D24; }
    goto L_08879D5C;
L_08879D5C:;
    goto L_08879CDC;
L_08879D64:;
    s0 = s0 + 12;
    t0 = t0 + 1;
    goto L_08879CC0;
}

/* 08879D70 */
rv_t func_08879D70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_08879D70:;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    a2 = (u32)-1;
    if (cnd_) { goto L_08879DB0; }
    goto L_08879D88;
L_08879D88:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08879DB0; }
    goto L_08879D98;
L_08879D98:;
    a0 = LD_U16(a0+2);
    v1 = LD_U16(a1+2);
    a2 = (u32)-1;
    v0 = a0 < v1;
    v1 = v1 < a0;
    if (v0 == 0) a2 = v1;
    goto L_08879DB0;
L_08879DB0:;
    v0 = a2 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 08879DB8 */
rv_t func_08879DB8(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08879DB8:;
    sp = sp - 64;
    v0 = 0xffff;
    s4 = a2 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    f20 = f12;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08879E50; }
    goto L_08879DFC;
L_08879DFC:;
    v0 = D_08AD4B98 - (19352);
    v1 = D_08AD4B9C - (19356);
    t1 = v0 + 19352;
    v1 = v1 + 19356;
    a2 = 0 + 0;
    s0 = 0 + 0;
    goto L_08879E14;
L_08879E14:;
    v0 = a2 << 1;
    t0 = v0 + v1;
    v0 = v0 + t1;
    a1 = LD_U16(v0);
    a2 = a2 + 1;
    v0 = (s32)s1 < (s32)a1;
    cnd_ = v0 != 0;
    a3 = (s32)a2 < 2;
    if (cnd_) { goto L_08879E44; }
    goto L_08879E34;
L_08879E34:;
    v0 = LD_U16(t0);
    v0 = (s32)v0 < (s32)s1;
    cnd_ = v0 == 0;
    s7 = s1 - a1;
    if (cnd_) { goto L_08879E80; }
    goto L_08879E44;
L_08879E44:;
    a0 = a0 + 12;
    cnd_ = a3 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_08879E14; }
    goto L_08879E50;
L_08879E50:;
    goto L_08879E54;
L_08879E54:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08879E80:;
    a1 = s7 + 0;
    v0 = func_0887A538(a0, a1);
    goto L_08879E88;
L_08879E88:;
    s5 = v0 + 0;
    cnd_ = (s32)v0 <= 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_08879E50; }
    goto L_08879E94;
L_08879E94:;
    s6 = s0 + 0;
    a2 = s3 + 0;
    goto L_08879E9C;
L_08879E9C:;
    a1 = s7 + 0;
    a0 = s2 + s6;
    v0 = func_0887A568(a0, a1, a2);
    goto L_08879EA8;
L_08879EA8:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08879A50(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08879EB4;
L_08879EB4:;
    f1 = BITSF(0);
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+12)); goto L_08879ED8; }
    goto L_08879EC0;
L_08879EC0:;
    s3 = s3 + 1;
    goto L_08879EC4;
L_08879EC4:;
    v0 = (s32)s3 < (s32)s5;
    goto L_08879EC8;
L_08879EC8:;
    cnd_ = v0 != 0;
    if (cnd_) { a2 = s3 + 0; goto L_08879E9C; }
    goto L_08879ED0;
L_08879ED0:;
    goto L_08879E54;
L_08879ED8:;
    a3 = s0 + 0;
    a0 = s2 + 0;
    fcc = FCMP(f1, f0, 12);
    a1 = s1 + 0;
    a2 = s3 + 0;
    t0 = s4 + 0;
    cnd_ = fcc;
    f12 = f20;
    if (cnd_) { goto L_08879F08; }
    goto L_08879EF8;
L_08879EF8:;
    fcc = FCMP(f1, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = s0 + 0; goto L_08879F18; }
    goto L_08879F08;
L_08879F08:;
    s3 = s3 + 1;
    { rv_t r_ = func_08879F28(a0, a1, a2, a3, t0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08879F10;
L_08879F10:;
    v0 = (s32)s3 < (s32)s5;
    goto L_08879EC8;
L_08879F18:;
    a1 = s4 + 0;
    { rv_t r_ = func_0887A040(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08879F20;
L_08879F20:;
    s3 = s3 + 1;
    goto L_08879EC4;
}

/* 08879F28 */
rv_t func_08879F28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t2, float f12)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08879F28:;
    sp = sp - 32;
    t3 = a1 + 0;
    a1 = t0 + 0;
    v1 = LD32(a0+24);
    v0 = LD32(a0+28);
    t0 = 0 + 0;
    ST32(sp, 0);
    v0 = v1 + v0;
    v0 = (s32)v0 < 100;
    ST32(sp+4, 0);
    cnd_ = v0 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08879FDC; }
    goto L_08879F5C;
L_08879F5C:;
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    v1 = v1 + 1;
    t1 = v0 + 32;
    ST32(a0+24, v1);
    goto L_08879F78;
L_08879F78:;
    cnd_ = t1 == 0;
    if (cnd_) { a0 = a3 + 0; goto L_08879FC4; }
    goto L_08879F80;
L_08879F80:;
    f0 = BITSF(LD32(a3+12));
    ST16(t1, t3);
    f0 = f0 + f12;
    ST16(t1+2, a2);
    ST32(t1+4, FBITS(f0));
    cnd_ = t0 != 0;
    ST32(t1+8, a1);
    if (cnd_) { goto L_08879FA8; }
    goto L_08879F9C;
L_08879F9C:;
    goto L_08879FA0;
L_08879FA0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08879FA8:;
    a1 = LD_U16(sp);
    a2 = LD_U16(sp+2);
    { u64 r_ = func_0887A1B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08879FB4;
L_08879FB4:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08879FA0; }
    goto L_08879FBC;
L_08879FBC:;
    a1 = LD32(sp+8);
    a0 = v0 + 0;
    goto L_08879FC4;
L_08879FC4:;
    { rv_t r_ = func_0887A040(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08879FCC;
L_08879FCC:;
    goto L_08879FA0;
L_08879FD4:;
    a0 = a3 + 0;
    goto L_08879FC4;
L_08879FDC:;
    f0 = BITSF(LD32(a3+12));
    t1 = a0 + 32;
    t2 = 0 + 0;
    cnd_ = (s32)v1 <= 0;
    f0 = f0 + f12;
    if (cnd_) { goto L_08879FD4; }
    goto L_08879FF0;
L_08879FF0:;
    v0 = v1 + 0;
    goto L_08879FF4;
L_08879FF4:;
    f1 = BITSF(LD32(t1+4));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = v0 - 1;
    if (cnd_) { goto L_0887A010; }
    goto L_0887A008;
L_0887A008:;
    f0 = f1;
    t2 = t1 + 0;
    goto L_0887A010;
L_0887A010:;
    cnd_ = v0 != 0;
    t1 = t1 + 12;
    if (cnd_) { goto L_08879FF4; }
    goto L_0887A018;
L_0887A018:;
    cnd_ = t2 == 0;
    t0 = 1;
    if (cnd_) { goto L_08879FD4; }
    goto L_0887A020;
L_0887A020:;
    v0 = LD32(t2);
    t1 = t2 + 0;
    ST32(sp, v0);
    v1 = LD32(t2+4);
    ST32(sp+4, v1);
    v0 = LD32(t2+8);
    ST32(sp+8, v0);
    goto L_08879F78;
}

/* 0887A040 */
rv_t func_0887A040(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A040:;
    sp = sp - 16;
    a2 = 0 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a3 = 0 + 0;
    v0 = LD_U16(s1+2);
    a0 = LD_U16(a0);
    a1 = v0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A074;
L_0887A074:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0887A0A4; }
    goto L_0887A07C;
L_0887A07C:;
    v0 = LD32(s1+4);
    v1 = LD_U16(s1+2);
    ST32(s0+4, s2);
    a2 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0887A0BC; }
    goto L_0887A094;
L_0887A094:;
    a0 = s0 + 0;
    goto L_0887A098;
L_0887A098:;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A0A4;
L_0887A0A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887A0BC:;
    a1 = LD32(s1+8);
    a0 = LD32(s0+24);
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A0C8;
L_0887A0C8:;
    a0 = s0 + 0;
    goto L_0887A098;
}

/* 0887A0D0 */
u64 func_0887A0D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A0D0:;
    sp = sp - 16;
    a1 = a1 & 0xffff;
    v0 = 0xffff;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_0887A134; }
    goto L_0887A0E4;
L_0887A0E4:;
    v0 = D_08AD4B98 - (19352);
    v1 = D_08AD4B9C - (19356);
    t1 = v0 + 19352;
    t2 = v1 + 19356;
    a2 = 0 + 0;
    goto L_0887A0F8;
L_0887A0F8:;
    v1 = a2 << 1;
    v0 = v1 + t1;
    t0 = LD_U16(v0);
    a2 = a2 + 1;
    v1 = v1 + t2;
    v0 = t0 & 0xffff;
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    a3 = (s32)a2 < 2;
    if (cnd_) { goto L_0887A12C; }
    goto L_0887A11C;
L_0887A11C:;
    v0 = LD_U16(v1);
    v0 = v0 < a1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = a1 - t0; goto L_0887A140; }
    goto L_0887A12C;
L_0887A12C:;
    cnd_ = a3 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_0887A0F8; }
    goto L_0887A134;
L_0887A134:;
    goto L_0887A138;
L_0887A138:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0887A140:;
    a1 = a1 & 0xffff;
    { u64 r_ = func_0887A434(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A148;
L_0887A148:;
    goto L_0887A138;
}

/* 0887A150 */
u64 func_0887A150(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887A150:;
    sp = sp - 32;
    a2 = sp + 0;
    a3 = sp + 4;
    s0 = a0 + 0;
    { u64 r_ = func_0887A21C(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A16C;
L_0887A16C:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0887A1A0; }
    goto L_0887A174;
L_0887A174:;
    v1 = LD32(sp);
    v0 = 0xffff;
    cnd_ = v1 == v0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0887A1A0; }
    goto L_0887A184;
L_0887A184:;
    v0 = LD32(sp+4);
    a0 = v0 << 1;
    a0 = a0 + v0;
    a0 = a0 << 2;
    a0 = s0 + a0;
    v0 = func_0887A538(a0, a1);
    goto L_0887A19C;
L_0887A19C:;
    a0 = v0 + 0;
    goto L_0887A1A0;
L_0887A1A0:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887A1B4 */
u64 func_0887A1B4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887A1B4:;
    sp = sp - 32;
    a3 = sp + 4;
    s0 = a2 + 0;
    a2 = sp + 0;
    s1 = a0 + 0;
    { u64 r_ = func_0887A21C(a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A1D8;
L_0887A1D8:;
    a2 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887A204; }
    goto L_0887A1E4;
L_0887A1E4:;
    v0 = LD32(sp+4);
    a1 = LD32(sp);
    a0 = v0 << 1;
    a0 = a0 + v0;
    a0 = a0 << 2;
    a0 = s1 + a0;
    v0 = func_0887A568(a0, a1, a2);
    goto L_0887A200;
L_0887A200:;
    v1 = v0 + 0;
    goto L_0887A204;
L_0887A204:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887A21C */
u64 func_0887A21C(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    int cnd_;
L_0887A21C:;
    v0 = 0xffff;
    cnd_ = a1 == v0;
    a0 = a1 + 0;
    if (cnd_) { goto L_0887A294; }
    goto L_0887A228;
L_0887A228:;
    v0 = D_08AD4B98 - (19352);
    v1 = D_08AD4B9C - (19356);
    t2 = v0 + 19352;
    t3 = v1 + 19356;
    t0 = 0 + 0;
    v0 = t0 << 1;
    goto L_0887A240;
L_0887A240:;
    t1 = v0 + t3;
    v0 = v0 + t2;
    a1 = LD_U16(v0);
    v1 = (s32)a0 < (s32)a1;
    cnd_ = v1 != 0;
    if (cnd_) { t0 = t0 + 1; goto L_0887A26C; }
    goto L_0887A258;
L_0887A258:;
    v0 = LD_U16(t1);
    v0 = (s32)v0 < (s32)a0;
    cnd_ = v0 == 0;
    v0 = a0 - a1;
    if (cnd_) { goto L_0887A284; }
    goto L_0887A268;
L_0887A268:;
    t0 = t0 + 1;
    goto L_0887A26C;
L_0887A26C:;
    v0 = (s32)t0 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = t0 << 1; goto L_0887A240; }
    goto L_0887A278;
L_0887A278:;
    t1 = 0 + 0;
    goto L_0887A27C;
L_0887A27C:;
    v0 = t1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_0887A284:;
    t1 = 1;
    ST32(a2, v0);
    ST32(a3, t0);
    goto L_0887A27C;
L_0887A294:;
    t1 = 1;
    ST32(a2, a1);
    ST32(a3, 0);
    goto L_0887A27C;
}

/* 0887A2A4 */
void func_0887A2A4(u32 a0)
{
L_0887A2A4:;
    ST32(a0+8, 0);
    ST16(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 0887A2B4 */
void func_0887A2B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887A2B4:;
    sp = sp - 48;
    s2 = a0 + 0;
    a0 = 18;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A2DC;
L_0887A2DC:;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s2+8); goto L_0887A394; }
    goto L_0887A2E8;
L_0887A2E8:;
    v0 = LD_U16(s2);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0887A384; }
    goto L_0887A2F4;
L_0887A2F4:;
    v0 = LD32(s2+8);
    s1 = 0 + 0;
    v0 = v0 + s4;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    s3 = s4 << 2;
    if (cnd_) { goto L_0887A360; }
    goto L_0887A30C;
L_0887A30C:;
    v1 = s3 + a0;
    goto L_0887A310;
L_0887A310:;
    s0 = LD32(v1);
    v0 = s1 << 1;
    v0 = v0 + s1;
    v0 = v0 << 3;
    s0 = s0 + v0;
    v1 = LD32(s0+8);
    a0 = sp + 0;
    s1 = s1 + 1;
    ST32(sp, v1);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0887A338;
L_0887A338:;
    v0 = LD32(sp);
    v1 = LD32(s2+8);
    ST32(s0+8, v0);
    v1 = v1 + s4;
    v0 = LD_U8(v1);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s2+4);
    if (cnd_) { goto L_0887A360; }
    goto L_0887A358;
L_0887A358:;
    v1 = s3 + a0;
    goto L_0887A310;
L_0887A360:;
    a0 = a0 + s3;
    func_08AB0D20(a0, 0, 0, 0);
    goto L_0887A368;
L_0887A368:;
    v1 = LD_U16(s2);
    s4 = s4 + 1;
    v1 = (s32)s4 < (s32)v1;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887A384; }
    goto L_0887A37C;
L_0887A37C:;
    a0 = LD32(s2+4);
    goto L_0887A2F4;
L_0887A384:;
    a0 = s2 + 4;
    func_08AB0D60(a0, 0, 0, 0);
    goto L_0887A38C;
L_0887A38C:;
    ST32(s2+4, 0);
    v0 = LD32(s2+8);
    goto L_0887A394;
L_0887A394:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887A3C4; }
    goto L_0887A39C;
L_0887A39C:;
    ST16(s2, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A3A4;
L_0887A3A4:;
    sp = sp + 48;
    return;
L_0887A3C4:;
    a0 = s2 + 8;
    func_08AA0D64(a0, 0, 0, 0);
    goto L_0887A3CC;
L_0887A3CC:;
    ST32(s2+8, 0);
    goto L_0887A39C;
}

/* 0887A3D4 */
void func_0887A3D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A3D4:;
    sp = sp - 16;
    a1 = a1 & 0xffff;
    s0 = a0 + 0;
    a0 = 18;
    cnd_ = a1 != 0;
    ST16(s0, a1);
    if (cnd_) { goto L_0887A404; }
    goto L_0887A3F4;
L_0887A3F4:;
    goto L_0887A3F8;
L_0887A3F8:;
    sp = sp + 16;
    return;
L_0887A404:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A40C;
L_0887A40C:;
    a1 = LD_U16(s0);
    a0 = s0 + 4;
    func_08AB0DA0(a0, a1, 0, 0, 0);
    goto L_0887A418;
L_0887A418:;
    a1 = LD_U16(s0);
    a0 = s0 + 8;
    func_08AA56E0(a0, a1, 0, 0, 0);
    goto L_0887A424;
L_0887A424:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A42C;
L_0887A42C:;
    goto L_0887A3F8;
}

/* 0887A434 */
u64 func_0887A434(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887A434:;
    sp = sp - 48;
    s2 = a1 & 0xffff;
    v0 = LD_U16(a0);
    v0 = s2 < v0;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0887A47C; }
    goto L_0887A468;
L_0887A468:;
    v0 = LD32(a0+8);
    v0 = v0 + s2;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0887A4A0; }
    goto L_0887A47C;
L_0887A47C:;
    goto L_0887A480;
L_0887A480:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_0887A4A0:;
    a0 = 18;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A4A8;
L_0887A4A8:;
    a0 = LD32(s1+8);
    s4 = 0 + 0;
    v0 = a0 + s2;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    s5 = s2 << 2;
    if (cnd_) { goto L_0887A510; }
    goto L_0887A4C0;
L_0887A4C0:;
    s3 = 0 + 0;
    v0 = LD32(s1+4);
    goto L_0887A4C8;
L_0887A4C8:;
    a0 = sp + 0;
    s4 = s4 + 1;
    v0 = s5 + v0;
    s0 = LD32(v0);
    s0 = s0 + s3;
    v0 = LD32(s0+8);
    s3 = s3 + 24;
    ST32(sp, v0);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0887A4EC;
L_0887A4EC:;
    v0 = LD32(sp);
    a0 = LD32(s1+8);
    ST32(s0+8, v0);
    v1 = a0 + s2;
    v0 = LD_U8(v1);
    v0 = (s32)s4 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+4); goto L_0887A4C8; }
    goto L_0887A50C;
L_0887A50C:;
    v0 = a0 + s2;
    goto L_0887A510;
L_0887A510:;
    ST8(v0, 0);
    a0 = LD32(s1+4);
    a0 = a0 + s5;
    func_08AB0D20(a0, 0, 0, 0);
    goto L_0887A520;
L_0887A520:;
    v1 = LD32(s1+4);
    v1 = s5 + v1;
    ST32(v1, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A530;
L_0887A530:;
    goto L_0887A480;
}

/* 0887A538 */
u32 func_0887A538(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0887A538:;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { goto L_0887A560; }
    goto L_0887A540;
L_0887A540:;
    v0 = LD_U16(a0);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887A560; }
    goto L_0887A550;
L_0887A550:;
    v0 = LD32(a0+8);
    v0 = v0 + a1;
    v0 = LD_U8(v0);
    return v0;
L_0887A560:;
    v0 = 0 + 0;
    return v0;
}

/* 0887A568 */
u32 func_0887A568(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
L_0887A568:;
    v0 = LD32(a0+4);
    a1 = a1 << 2;
    v1 = a2 << 1;
    a1 = a1 + v0;
    v0 = LD32(a1);
    v1 = v1 + a2;
    v1 = v1 << 3;
    v0 = v0 + v1;
    return v0;
}

/* 0887A58C */
void func_0887A58C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887A58C:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    a0 = 18;
    if (cnd_) { goto L_0887A5B8; }
    goto L_0887A5A8;
L_0887A5A8:;
    sp = sp + 32;
    return;
L_0887A5B8:;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A5C0;
L_0887A5C0:;
    v0 = LD32(s0+8);
    a0 = sp + 0;
    ST32(sp, v0);
    func_0882F7A4(a0, 0, 0, 0);
    goto L_0887A5D0;
L_0887A5D0:;
    v1 = LD32(sp);
    ST32(s0+8, v1);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A5DC;
L_0887A5DC:;
    ST16(s0+2, 0);
    ST32(s0+8, 0);
    goto L_0887A5A8;
}

/* 0887A5E8 */
u32 func_0887A5E8(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A5E8:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B29170 - (-28304);
    cnd_ = v0 != 0;
    a0 = a0 - 28304;
    if (cnd_) { goto L_0887A64C; }
    goto L_0887A61C;
L_0887A61C:;
    v0 = s1 < 0x1u;
    goto L_0887A620;
L_0887A620:;
    a0 = D_08B29170 - (-28304);
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    a0 = a0 - 28304;
    if (cnd_) { goto L_0887A638; }
    goto L_0887A630;
L_0887A630:;
    func_08879B10();
    goto L_0887A638;
L_0887A638:;
    sp = sp + 16;
    return v0;
L_0887A64C:;
    func_08879B04(a0);
    goto L_0887A654;
L_0887A654:;
    v0 = s1 < 0x1u;
    goto L_0887A620;
}

/* 0887A65C */
rv_t func_0887A65C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A65C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    v0 = func_0887A5E8(a0, a1);
    goto L_0887A670;
L_0887A670:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887A67C */
rv_t func_0887A67C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A67C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    v0 = func_0887A5E8(a0, a1);
    goto L_0887A690;
L_0887A690:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887A69C */
void func_0887A69C(u32 a0)
{
L_0887A69C:;
    ST32(a0+4, 0);
    ST32(a0, 0);
    return;
}

/* 0887A6A8 */
void func_0887A6A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A6A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 18;
    s2 = 0 + 0;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A6CC;
L_0887A6CC:;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887A6F8; }
    goto L_0887A6D8;
L_0887A6D8:;
    a0 = LD32(s0+4);
    s2 = s2 + 1;
    a0 = a0 + s1;
    func_0887A58C(a0);
    goto L_0887A6E8;
L_0887A6E8:;
    v0 = LD32(s0);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_0887A6D8; }
    goto L_0887A6F8;
L_0887A6F8:;
    a0 = s0 + 4;
    func_08AB0D20(a0, 0, 0, 0);
    goto L_0887A700;
L_0887A700:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A708;
L_0887A708:;
    sp = sp + 16;
    return;
}

/* 0887A720 */
void func_0887A720(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887A720:;
    sp = sp - 48;
    s3 = a1 + 0;
    a1 = sp + 0;
    s2 = a0 + 0;
    a0 = s3 + 0;
    s1 = 0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A754;
L_0887A754:;
    a0 = s3 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A760;
L_0887A760:;
    a0 = s3 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A76C;
L_0887A76C:;
    a1 = s2 + 0;
    a0 = s3 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A778;
L_0887A778:;
    a0 = 18;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A780;
L_0887A780:;
    a1 = LD32(s2);
    a0 = s2 + 4;
    func_08AA4BD8(a0, a1, 0, 0, 0);
    goto L_0887A78C;
L_0887A78C:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A794;
L_0887A794:;
    v0 = LD32(sp+8);
    v1 = LD32(s2);
    cnd_ = v1 == 0;
    s4 = v0 & 0x1;
    if (cnd_) { goto L_0887A7D4; }
    goto L_0887A7A4;
L_0887A7A4:;
    s0 = 0 + 0;
    goto L_0887A7A8;
L_0887A7A8:;
    a2 = LD32(s2+4);
    a0 = LD32(sp+4);
    a1 = s3 + 0;
    a2 = a2 + s0;
    a3 = s4 + 0;
    func_088255FC(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0887A7C0;
L_0887A7C0:;
    v0 = LD32(s2);
    s1 = s1 + 1;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 24;
    if (cnd_) { goto L_0887A7A8; }
    goto L_0887A7D4;
L_0887A7D4:;
    sp = sp + 48;
    return;
}

/* 0887A7F4 */
rv_t func_0887A7F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0887A7F4:;
    sp = sp - 80;
    s6 = a2 & 0xffff;
    s5 = a1 + 0;
    s4 = a3 + 0;
    s3 = a0 + 0;
    s2 = 0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s1 = LD32(a0+4);
    if (cnd_) { goto L_0887A86C; }
    goto L_0887A840;
L_0887A840:;
    s7 = 73;
    fp = 12;
    goto L_0887A848;
L_0887A848:;
    a0 = s1 + 0;
    { rv_t r_ = func_08879A50(a0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A850;
L_0887A850:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U16(s1); goto L_0887A89C; }
    goto L_0887A858;
L_0887A858:;
    v0 = LD32(s3);
    goto L_0887A85C;
L_0887A85C:;
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_0887A848; }
    goto L_0887A86C;
L_0887A86C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_0887A89C:;
    cnd_ = v0 == s7;
    s0 = s1 + 0;
    if (cnd_) { goto L_0887A904; }
    goto L_0887A8A4;
L_0887A8A4:;
    v0 = LD32(s0+4);
    goto L_0887A8A8;
L_0887A8A8:;
    a0 = s0 + 0;
    cnd_ = v0 == fp;
    a1 = 999;
    if (cnd_) { goto L_0887A8C4; }
    goto L_0887A8B4;
L_0887A8B4:;
    { rv_t r_ = func_0887A040(a0, a1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A8BC;
L_0887A8BC:;
    v0 = LD32(s3);
    goto L_0887A85C;
L_0887A8C4:;
    cnd_ = s5 == a1;
    a0 = sp + 0;
    if (cnd_) { goto L_0887A858; }
    goto L_0887A8CC;
L_0887A8CC:;
    v0 = LD32(s0);
    ST32(sp, v0);
    v1 = LD32(s0+4);
    ST32(sp+4, v1);
    v0 = LD32(s0+8);
    ST32(sp+8, v0);
    v1 = LD32(s0+12);
    ST32(sp+12, v1);
    v0 = LD32(s0+16);
    ST32(sp+16, v0);
    v1 = LD32(s0+20);
    ST32(sp+4, s5);
    ST32(sp+20, v1);
    goto L_0887A8B4;
L_0887A904:;
    a0 = s4 + 0;
    cnd_ = s4 == 0;
    a1 = s6 + 0;
    if (cnd_) { goto L_0887A858; }
    goto L_0887A910;
L_0887A910:;
    v0 = LD32(s1+8);
    s0 = LD32(v0);
    { u64 r_ = func_0887A150(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A91C;
L_0887A91C:;
    a1 = s6 + 0;
    a2 = s0 + 0;
    s0 = (s32)s0 < (s32)v0;
    cnd_ = s0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_0887A858; }
    goto L_0887A930;
L_0887A930:;
    { u64 r_ = func_0887A1B4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887A938;
L_0887A938:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08879A50(a0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A944;
L_0887A944:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_0887A85C; }
    goto L_0887A94C;
L_0887A94C:;
    v0 = LD32(s0+4);
    goto L_0887A8A8;
}

/* 0887A954 */
void func_0887A954(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A954:;
    sp = sp - 16;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A968;
L_0887A968:;
    s0 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s0, v0);
    a0 = 8;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887A980;
L_0887A980:;
    ST32(s0+4, v0);
    v1 = 2;
    a0 = 0 + 0;
    ST32(s0+12, 0);
    ST32(s0+8, v1);
    v1 = v0 + 0;
    goto L_0887A998;
L_0887A998:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < 2;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0887A998; }
    goto L_0887A9AC;
L_0887A9AC:;
    v0 = D_08B29644 - (-27068);
    ST32(v0-27068, s0);
    func_088FB36C(0, 0, 0);
    goto L_0887A9B8;
L_0887A9B8:;
    sp = sp + 16;
    return;
}

/* 0887A9C8 */
void func_0887A9C8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887A9C8:;
    sp = sp - 16;
    s0 = D_08B29644 - (-27068);
    func_088FB3BC(t1, t2, t3);
    goto L_0887A9DC;
L_0887A9DC:;
    v0 = LD32(s0-27068);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887A9FC; }
    goto L_0887A9E8;
L_0887A9E8:;
    ST32(s0-27068, 0);
    goto L_0887A9EC;
L_0887A9EC:;
    sp = sp + 16;
    return;
L_0887A9FC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887AA0C;
L_0887AA0C:;
    ST32(s0-27068, 0);
    goto L_0887A9EC;
}

/* 0887AA14 */
rv_t func_0887AA14(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887AA14:;
    sp = sp - 16;
    s2 = D_08B29644 - (-27068);
    a1 = a0 + 0;
    s1 = a0 + 0;
    a0 = D_08AD4BA0 - (19360);
    a2 = LD32(s2-27068);
    v0 = LD32(a2+12);
    v1 = LD32(a2+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    a0 = a0 + 19360;
    if (cnd_) { goto L_0887AA7C; }
    goto L_0887AA58;
L_0887AA58:;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887AA60;
L_0887AA60:;
    v0 = (u32)-1;
    goto L_0887AA64;
L_0887AA64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887AA7C:;
    v1 = LD32(a2+4);
    ST32(a2+12, a3);
    v0 = D_08B29648 - (-27064);
    v1 = t0 + v1;
    s0 = LD32(v1);
    v0 = v0 - 27064;
    a1 = s1 + 0;
    v0 = s0 + v0;
    ST8(v0, 0);
    a0 = s0 + 0;
    v0 = func_088FB40C(a0, a1, t2, t3);
    goto L_0887AAA8;
L_0887AAA8:;
    v1 = D_08B15B98 - (23448);
    a0 = s0 << 8;
    v1 = v1 + 23448;
    a1 = D_08AD4BD4 - (19412);
    a0 = a0 + v1;
    a1 = a1 + 19412;
    t0 = s1 + 0;
    a2 = 256;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_0887AB04; }
    goto L_0887AAD0;
L_0887AAD0:;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887AAD8;
L_0887AAD8:;
    v0 = D_08B29650 - (-27056);
    a0 = D_08B2964C - (-27060);
    v0 = v0 - 27056;
    v1 = s0 << 2;
    a0 = a0 - 27060;
    v1 = v1 + v0;
    a0 = s0 + a0;
    ST8(a0, 0);
    v0 = s0 + 0;
    ST32(v1, 0);
    goto L_0887AA64;
L_0887AB04:;
    v0 = LD32(s2-27068);
    a1 = s0 + 0;
    v1 = LD32(v0);
    a2 = LD32(v1+8);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887AB1C;
L_0887AB1C:;
    v0 = (u32)-1;
    goto L_0887AA64;
}

/* 0887AB24 */
u32 func_0887AB24(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887AB24:;
    sp = sp - 16;
    s2 = D_08B29644 - (-27068);
    a1 = a0 + 0;
    s1 = a0 + 0;
    a0 = D_08AD4BA0 - (19360);
    t1 = 1;
    a2 = LD32(s2-27068);
    v0 = LD32(a2+12);
    v1 = LD32(a2+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    a0 = a0 + 19360;
    if (cnd_) { goto L_0887AB90; }
    goto L_0887AB6C;
L_0887AB6C:;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887AB74;
L_0887AB74:;
    v0 = (u32)-1;
    goto L_0887AB78;
L_0887AB78:;
    sp = sp + 16;
    return v0;
L_0887AB90:;
    v1 = LD32(a2+4);
    ST32(a2+12, a3);
    v0 = D_08B29648 - (-27064);
    v1 = t0 + v1;
    s0 = LD32(v1);
    v0 = v0 - 27064;
    a1 = s1 + 0;
    v0 = s0 + v0;
    ST8(v0, t1);
    a0 = s0 + 0;
    v0 = func_088FB40C(a0, a1, t2, t3);
    goto L_0887ABBC;
L_0887ABBC:;
    t1 = v0 + 0;
    v0 = D_08B15B98 - (23448);
    a0 = s0 << 8;
    v0 = v0 + 23448;
    a1 = D_08AD4BD4 - (19412);
    a0 = a0 + v0;
    a1 = a1 + 19412;
    t0 = s1 + 0;
    a2 = 256;
    cnd_ = t1 == 0;
    a3 = 1;
    if (cnd_) { goto L_0887AC1C; }
    goto L_0887ABE8;
L_0887ABE8:;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887ABF0;
L_0887ABF0:;
    v0 = D_08B29650 - (-27056);
    a0 = D_08B2964C - (-27060);
    v0 = v0 - 27056;
    v1 = s0 << 2;
    a0 = a0 - 27060;
    v1 = v1 + v0;
    a0 = s0 + a0;
    ST8(a0, 0);
    v0 = s0 + 0;
    ST32(v1, 0);
    goto L_0887AB78;
L_0887AC1C:;
    v0 = LD32(s2-27068);
    a1 = s0 + 0;
    v1 = LD32(v0);
    a2 = LD32(v1+8);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887AC34;
L_0887AC34:;
    v0 = (u32)-1;
    goto L_0887AB78;
}

/* 0887AC3C */
u32 func_0887AC3C(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887AC3C:;
    sp = sp - 16;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    v0 = a0 + v0;
    s0 = a0 + 0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0887ACA8; }
    goto L_0887AC68;
L_0887AC68:;
    v0 = func_088FB5E4(a0, a1, t2, t3);
    goto L_0887AC70;
L_0887AC70:;
    v1 = D_08B29650 - (-27056);
    v1 = v1 - 27056;
    a0 = s0 << 2;
    a0 = a0 + v1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887AC90; }
    goto L_0887AC88;
L_0887AC88:;
    v1 = 1;
    ST32(a0, s1);
    goto L_0887AC90;
L_0887AC90:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_0887ACA8:;
    v0 = func_088FB5E4(a0, a1, t2, t3);
    goto L_0887ACB0;
L_0887ACB0:;
    v1 = D_08B29650 - (-27056);
    v1 = v1 - 27056;
    a0 = s0 << 2;
    a0 = a0 + v1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887AC90; }
    goto L_0887ACC8;
L_0887ACC8:;
    ST32(a0, s1);
    v1 = 1;
    goto L_0887AC90;
}

/* 0887ACD4 */
u64 func_0887ACD4(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887ACD4:;
    sp = sp - 16;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    v0 = a0 + v0;
    s0 = a0 + 0;
    s1 = a2 + 0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0887AD54; }
    goto L_0887AD04;
L_0887AD04:;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { goto L_0887AD40; }
    goto L_0887AD0C;
L_0887AD0C:;
    v0 = func_088FB774(a0, a1, a2, t1, t2, t3);
    goto L_0887AD14;
L_0887AD14:;
    v1 = D_08B29650 - (-27056);
    a0 = s0 << 2;
    v1 = v1 - 27056;
    a0 = a0 + v1;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0887AD3C; }
    goto L_0887AD2C;
L_0887AD2C:;
    v0 = LD32(a0);
    a3 = 1;
    v0 = v0 + s1;
    ST32(a0, v0);
    goto L_0887AD3C;
L_0887AD3C:;
    goto L_0887AD40;
L_0887AD40:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0887AD54:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_0887AD40; }
    goto L_0887AD5C;
L_0887AD5C:;
    v0 = D_08B2964C - (-27060);
    v0 = v0 - 27060;
    v0 = a0 + v0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    v0 = D_08B29658 - (-27048);
    if (cnd_) { goto L_0887AD0C; }
    goto L_0887AD74;
L_0887AD74:;
    a0 = 352;
    { s64 p_ = (s64)(s32)s0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = v0 - 27048;
    a0 = lo;
    a0 = a0 + v0;
    v0 = func_0882F4C4(a0, a1, a2, t1, t2, t3);
    goto L_0887AD8C;
L_0887AD8C:;
    v1 = D_08B29650 - (-27056);
    v1 = v1 - 27056;
    a1 = s0 << 2;
    a1 = a1 + v1;
    a0 = LD32(a1);
    v1 = v0 ^ s1;
    a3 = v1 < 0x1u;
    a0 = a0 + v0;
    ST32(a1, a0);
    goto L_0887AD3C;
}

/* 0887ADB4 */
u64 func_0887ADB4(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[1040] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1040);
L_0887ADB4:;
    sp = sp - 1040;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    v0 = a0 + v0;
    s2 = a0 + 0;
    v1 = LD_U8(v0);
    cnd_ = v1 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0887AE88; }
    goto L_0887ADE4;
L_0887ADE4:;
    v0 = D_08B2964C - (-27060);
    v0 = v0 - 27060;
    v0 = a0 + v0;
    v1 = LD_U8(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887AE58; }
    goto L_0887ADFC;
L_0887ADFC:;
    cnd_ = (s32)a1 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0887AE38; }
    goto L_0887AE04;
L_0887AE04:;
    a2 = s1 - s0;
    goto L_0887AE08;
L_0887AE08:;
    v0 = 1024;
    a3 = 0 + 0;
    a2 = (s32)a2 < (s32)v0 ? a2 : v0;
    a0 = s2 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887AE20;
L_0887AE20:;
    s0 = s0 + 1024;
    v1 = (s32)s0 < (s32)s1;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0887AE3C; }
    goto L_0887AE30;
L_0887AE30:;
    cnd_ = v1 != 0;
    a2 = s1 - s0;
    if (cnd_) { goto L_0887AE08; }
    goto L_0887AE38;
L_0887AE38:;
    a3 = 1;
    goto L_0887AE3C;
L_0887AE3C:;
    v0 = a3 + 0;
    sp = sp + 1040;
    return (u64)v0 | ((u64)v1 << 32);
L_0887AE58:;
    { u64 r_ = func_088FB9C8(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887AE60;
L_0887AE60:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0887AE3C; }
    goto L_0887AE68;
L_0887AE68:;
    v1 = D_08B29650 - (-27056);
    v0 = s2 << 2;
    v1 = v1 - 27056;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a0 = a0 + s1;
    ST32(v0, a0);
    goto L_0887AE38;
L_0887AE88:;
    { u64 r_ = func_088FB9C8(a0, a1, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887AE90;
L_0887AE90:;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0887AE3C; }
    goto L_0887AE98;
L_0887AE98:;
    v1 = D_08B29650 - (-27056);
    v0 = s2 << 2;
    v1 = v1 - 27056;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a3 = 1;
    a0 = a0 + s1;
    ST32(v0, a0);
    goto L_0887AE3C;
}

/* 0887AEBC */
u64 func_0887AEBC(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887AEBC:;
    sp = sp - 48;
    s1 = D_08B29918 - (-26344);
    ST32(s1-26344, 0);
    s4 = D_08B15D98 - (23960);
    s7 = 0 + 0;
    s6 = a2 + 0;
    s5 = a1 + 0;
    s3 = a0 + 0;
    s2 = (u32)-1;
    s0 = s4 + 23960;
    a0 = s3 + 0;
    goto L_0887AF0C;
L_0887AF0C:;
    a1 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887AF1C;
L_0887AF1C:;
    v1 = 3;
    goto L_0887AF20;
L_0887AF20:;
    v0 = LD_U8(s0);
    v1 = v1 - 1;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_0887AF50; }
    goto L_0887AF30;
L_0887AF30:;
    v0 = LD32(s1-26344);
    v0 = v0 + 1;
    cnd_ = v1 != s2;
    ST32(s1-26344, v0);
    if (cnd_) { goto L_0887AF20; }
    goto L_0887AF40;
L_0887AF40:;
    cnd_ = s7 != 0;
    v0 = v0 < 0x200u;
    if (cnd_) { goto L_0887AF50; }
    goto L_0887AF48;
L_0887AF48:;
    cnd_ = v0 != 0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0887AF0C; }
    goto L_0887AF50;
L_0887AF50:;
    v0 = LD32(s1-26344);
    v0 = v0 < 0x200u;
    cnd_ = v0 != 0;
    a0 = D_08B29918 - (-26344);
    if (cnd_) { goto L_0887AF70; }
    goto L_0887AF60;
L_0887AF60:;
    v1 = s4 + 23960;
    v0 = 512;
    ST32(s1-26344, v0);
    ST8(v1+511, 0);
    goto L_0887AF70;
L_0887AF70:;
    cnd_ = s5 == 0;
    v0 = LD32(a0-26344);
    if (cnd_) { goto L_0887AF7C; }
    goto L_0887AF78;
L_0887AF78:;
    ST32(s5, v0);
    goto L_0887AF7C;
L_0887AF7C:;
    cnd_ = s6 == 0;
    v0 = LD32(a0-26344);
    if (cnd_) { goto L_0887AF90; }
    goto L_0887AF84;
L_0887AF84:;
    v0 = v0 + 4;
    v0 = v0 >> 2;
    ST32(s6, v0);
    goto L_0887AF90;
L_0887AF90:;
    v1 = LD32(s4+23960);
    v0 = 0xff0000u;
    v0 = v0 | 0xff00;
    v1 = v1 ^ v0;
    v0 = s4 + 23960;
    if (v1 == 0) v0 = 0;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887AFD4 */
rv_t func_0887AFD4(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887AFD4:;
    sp = sp - 16;
    v0 = D_08B29648 - (-27064);
    v0 = v0 - 27064;
    v0 = a0 + v0;
    v1 = D_08B2964C - (-27060);
    a1 = LD_U8(v0);
    v1 = v1 - 27060;
    s0 = a0 + 0;
    cnd_ = a1 != 0;
    v1 = a0 + v1;
    if (cnd_) { goto L_0887B064; }
    goto L_0887B004;
L_0887B004:;
    v0 = LD_U8(v1);
    cnd_ = v0 != 0;
    a0 = 352;
    if (cnd_) { goto L_0887B044; }
    goto L_0887B010;
L_0887B010:;
    a0 = s0 + 0;
    func_088FB554(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887B018;
L_0887B018:;
    v1 = D_08B29644 - (-27068);
    a0 = LD32(v1-27068);
    a1 = s0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    goto L_0887B02C;
L_0887B02C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887B034;
L_0887B034:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887B044:;
    { s64 p_ = (s64)(s32)s0 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B29658 - (-27048);
    v0 = v0 - 27048;
    a0 = lo;
    a0 = a0 + v0;
    func_0882F4BC();
    goto L_0887B05C;
L_0887B05C:;
    goto L_0887B010;
L_0887B064:;
    func_088FB554(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887B06C;
L_0887B06C:;
    v1 = D_08B29644 - (-27068);
    a0 = LD32(v1-27068);
    a1 = s0 + 0;
    a2 = LD32(a0);
    v0 = LD32(a2+8);
    goto L_0887B02C;
}

/* 0887B084 */
u32 func_0887B084(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0887B084:;
    v1 = D_08B15B98 - (23448);
    v0 = a0 << 8;
    v1 = v1 + 23448;
    v0 = v0 + v1;
    return v0;
}

/* 0887B098 */
u32 func_0887B098(u32 a0)
{
    u32 v0 = 0;
L_0887B098:;
    v0 = D_08B29650 - (-27056);
    v0 = v0 - 27056;
    a0 = a0 << 2;
    a0 = a0 + v0;
    v0 = LD32(a0);
    return v0;
}

/* 0887B0B0 */
u32 func_0887B0B0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887B0B0:;
    sp = sp - 16;
    s0 = 352;
    { s64 p_ = (s64)(s32)a0 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = D_08B29658 - (-27048);
    v1 = D_08B2964C - (-27060);
    v0 = v0 - 27048;
    v1 = v1 - 27060;
    s0 = lo;
    s0 = s0 + v0;
    v1 = a0 + v1;
    v0 = 1;
    ST8(v1, v0);
    a1 = a0 + 0;
    a0 = s0 + 0;
    func_0882F428(a0, a1, t1, t2, t3);
    goto L_0887B0F4;
L_0887B0F4:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0887B108 */
rv_t func_0887B108(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887B108:;
    sp = sp - 16;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    v0 = v0 < 0x1u;
    s1 = a1 < 0x1u;
    v0 = s1 & v0;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887B18C; }
    goto L_0887B138;
L_0887B138:;
    v0 = s2 < 0x1u;
    goto L_0887B13C;
L_0887B13C:;
    v0 = s1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B178; }
    goto L_0887B148;
L_0887B148:;
    v0 = D_08B29658 - (-27048);
    v0 = v0 - 27048;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0887B178; }
    goto L_0887B158;
L_0887B158:;
    s0 = v0 + 704;
    goto L_0887B15C;
L_0887B15C:;
    cnd_ = s0 == s1;
    s0 = s0 - 352;
    if (cnd_) { goto L_0887B174; }
    goto L_0887B164;
L_0887B164:;
    a0 = s0 + 0;
    { u64 r_ = func_0882F3F8(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B16C;
L_0887B16C:;
    goto L_0887B15C;
L_0887B174:;
    goto L_0887B178;
L_0887B178:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887B18C:;
    s0 = D_08B29658 - (-27048);
    s0 = s0 - 27048;
    a0 = s0 + 0;
    s0 = s0 + 352;
    { rv_t r_ = func_0882F3CC(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887B1A0;
L_0887B1A0:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882F3CC(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887B1A8;
L_0887B1A8:;
    v0 = s2 < 0x1u;
    goto L_0887B13C;
}

/* 0887B1B0 */
rv_t func_0887B1B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887B1B0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0887B108(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887B1C4;
L_0887B1C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887B1D0 */
rv_t func_0887B1D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887B1D0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0887B108(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887B1E4;
L_0887B1E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887B1F0 */
u32 func_0887B1F0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_0887B1F0:;
    v0 = LD32(a0+348);
    a3 = (u32)-1;
    a2 = a0 + 0;
    cnd_ = v0 == a3;
    t0 = (u32)-1;
    if (cnd_) { goto L_0887B270; }
    goto L_0887B204;
L_0887B204:;
    v0 = LD32(a0+384);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B270; }
    goto L_0887B210;
L_0887B210:;
    v0 = LD_U8(a0+364);
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0887B270; }
    goto L_0887B21C;
L_0887B21C:;
    v0 = LD32(a0+368);
    a0 = LD32(a0+328);
    a1 = LD32(a2+372);
    v1 = LD32(a2+328);
    { u32 x_ = v0, y_ = a0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    t0 = a3 + 0;
    v0 = lo;
    { u32 x_ = a1, y_ = v1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    if (v0 != 0) a3 = 0;
    a1 = lo;
    v1 = v0 - a1;
    v1 = v1 < 0x2u;
    a0 = a1 + 1;
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    if (v1 == 0) t0 = a0;
    if (cnd_) { goto L_0887B270; }
    goto L_0887B25C;
L_0887B25C:;
    v0 = LD32(a2+324);
    t0 = a0 + 0;
    v0 = v0 - 1;
    v0 = a1 < v0;
    if (v0 == 0) t0 = a3;
    goto L_0887B270;
L_0887B270:;
    v0 = t0 + 0;
    return v0;
}

/* 0887B278 */
u32 func_0887B278(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887B278:;
    sp = sp - 32;
    v1 = 0 + 0;
    s5 = D_08B2991C - (-26340);
    s3 = a1 + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    s0 = a0 + 292;
    v0 = LD32(a0+316);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0887B33C; }
    goto L_0887B2BC;
L_0887B2BC:;
    s4 = LD32(s5-26340);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B2E4; }
    goto L_0887B2CC;
L_0887B2CC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B360; }
    goto L_0887B2E4;
L_0887B2E4:;
    a0 = LD32(s1+348);
    a1 = s2 + 0;
    a2 = s3 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_0887ACD4(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B2F8;
L_0887B2F8:;
    s2 = v0 + 0;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B300;
L_0887B300:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887B31C; }
    goto L_0887B310;
L_0887B310:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B318;
L_0887B318:;
    ST32(s0+4, s1);
    goto L_0887B31C;
L_0887B31C:;
    v0 = LD32(s0+8);
    v1 = 0 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD32(s5-26340);
    v0 = s4 ^ v0;
    if (v0 == 0) v1 = s2;
    goto L_0887B33C;
L_0887B33C:;
    v0 = v1 + 0;
    sp = sp + 32;
    return v0;
L_0887B360:;
    v0 = func_088F8C18();
    goto L_0887B368;
L_0887B368:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B374;
L_0887B374:;
    goto L_0887B2E4;
}

/* 0887B37C */
void func_0887B37C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f12 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887B37C:;
    sp = sp - 32;
    s3 = a0 + 0;
    v0 = LD_U8(a0+344);
    cnd_ = v0 == 0;
    s2 = 1;
    if (cnd_) { goto L_0887B410; }
    goto L_0887B3A8;
L_0887B3A8:;
    s0 = a0 + 292;
    s4 = D_08AEC090 - (-16240);
    goto L_0887B3B0;
L_0887B3B0:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887B3EC; }
    goto L_0887B3BC;
L_0887B3BC:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_0887B3E0; }
    goto L_0887B3C8;
L_0887B3C8:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B59C; }
    goto L_0887B3E0;
L_0887B3E0:;
    v0 = LD32(s0+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887B3BC; }
    goto L_0887B3EC;
L_0887B3EC:;
    f12 = BITSF(LD32(s4-16240));
    a0 = 1;
    s2 = s1 + 0;
    { u64 r_ = func_088F8BA0(a0, a1, a2, a3, t0, t1, t2, t3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B3FC;
L_0887B3FC:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_0887B55C; }
    goto L_0887B404;
L_0887B404:;
    v0 = LD_U8(s3+344);
    cnd_ = v0 != 0;
    s2 = 1;
    if (cnd_) { goto L_0887B3B0; }
    goto L_0887B410;
L_0887B410:;
    ST8(s3+344, s2);
    v0 = (u32)-1;
    a0 = 0 + 0;
    v1 = LD32(s3+348);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0887B498; }
    goto L_0887B428;
L_0887B428:;
    v0 = LD32(s3+384);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B490; }
    goto L_0887B434;
L_0887B434:;
    v0 = LD_U8(s3+364);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887B4E0; }
    goto L_0887B440;
L_0887B440:;
    a0 = LD32(s3+356);
    v1 = LD32(s3+352);
    s0 = LD32(s3+320);
    a2 = LD32(s3+316);
    s1 = a0 - v1;
    v0 = s1 < s0;
    if (v0 != 0) s0 = s1;
    a0 = s3 + 0;
    a1 = s0 + 0;
    v0 = func_0887B278(a0, a1, a2, t1, t2, t3);
    goto L_0887B468;
L_0887B468:;
    cnd_ = v0 == 0;
    a0 = s3 + 304;
    if (cnd_) { goto L_0887B4C0; }
    goto L_0887B470;
L_0887B470:;
    v1 = s1 - s0;
    v0 = s0 - 1;
    ST8(s3+364, s2);
    ST32(s3+380, 0);
    ST32(s3+368, 0);
    ST32(s3+372, v0);
    ST32(s3+376, s0);
    ST32(s3+384, v1);
    goto L_0887B490;
L_0887B490:;
    v0 = LD32(s3+384);
    a0 = 0 < v0;
    goto L_0887B498;
L_0887B498:;
    ST8(s3+344, 0);
    v0 = a0 + 0;
    sp = sp + 32;
    return;
L_0887B4C0:;
    v1 = LD_U8(a0+4);
    v0 = 2;
    cnd_ = v1 != 0;
    ST32(s3+340, v0);
    if (cnd_) { goto L_0887B490; }
    goto L_0887B4D0;
L_0887B4D0:;
    ST8(a0+4, s2);
    { u64 r_ = func_088F8C90(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B4D8;
L_0887B4D8:;
    goto L_0887B490;
L_0887B4E0:;
    a0 = s3 + 0;
    v0 = func_0887B1F0(a0);
    goto L_0887B4E8;
L_0887B4E8:;
    cnd_ = (s32)v0 < 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0887B490; }
    goto L_0887B4F0;
L_0887B4F0:;
    v1 = LD32(s3+328);
    a1 = LD32(s3+328);
    a0 = LD32(s3+384);
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a2 = LD32(s3+316);
    v0 = a0 < a1;
    s0 = a1 + 0;
    if (v0 != 0) s0 = a0;
    v1 = lo;
    a2 = a2 + v1;
    a0 = s3 + 0;
    a1 = s0 + 0;
    v0 = func_0887B278(a0, a1, a2, 0, 0, 0);
    goto L_0887B524;
L_0887B524:;
    cnd_ = v0 == 0;
    a0 = s3 + 304;
    if (cnd_) { goto L_0887B4C0; }
    goto L_0887B52C;
L_0887B52C:;
    v0 = LD32(s3+376);
    v0 = v0 + s0;
    ST32(s3+376, v0);
    v0 = s0 - 1;
    v1 = LD32(s3+384);
    v1 = v1 - s0;
    cnd_ = s1 == 0;
    ST32(s3+384, v1);
    if (cnd_) { goto L_0887B554; }
    goto L_0887B54C;
L_0887B54C:;
    v0 = LD32(s3+372);
    v0 = v0 + s0;
    goto L_0887B554;
L_0887B554:;
    ST32(s3+372, v0);
    goto L_0887B490;
L_0887B55C:;
    { u64 r_ = func_088F8BFC(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B564;
L_0887B564:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887B580; }
    goto L_0887B574;
L_0887B574:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B57C;
L_0887B57C:;
    ST32(s0+4, s1);
    goto L_0887B580;
L_0887B580:;
    v0 = LD32(s0+8);
    s2 = s2 - 1;
    v0 = v0 + 1;
    cnd_ = s2 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_0887B55C; }
    goto L_0887B594;
L_0887B594:;
    goto L_0887B404;
L_0887B59C:;
    v0 = func_088F8C18();
    goto L_0887B5A4;
L_0887B5A4:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B5B0;
L_0887B5B0:;
    goto L_0887B3E0;
}

/* 0887B5B8 */
u32 func_0887B5B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887B5B8:;
    sp = sp - 32;
    s4 = 0 + 0;
    s1 = a0 + 0;
    s0 = a0 + 292;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B5E4;
L_0887B5E4:;
    s2 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0887B600; }
    goto L_0887B5F4;
L_0887B5F4:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B5FC;
L_0887B5FC:;
    ST32(s0+4, s2);
    goto L_0887B600;
L_0887B600:;
    v0 = LD32(s0+8);
    s2 = (u32)-1;
    s3 = s1 + 32;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    ST32(s1+348, s2);
    v0 = func_088FB570(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0887B61C;
L_0887B61C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B88C; }
    goto L_0887B628;
L_0887B628:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B64C; }
    goto L_0887B634;
L_0887B634:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B870; }
    goto L_0887B64C;
L_0887B64C:;
    a0 = s3 + 0;
    v0 = func_0887AB24(a0, 0, 0);
    goto L_0887B654;
L_0887B654:;
    ST32(s1+348, v0);
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B660;
L_0887B660:;
    s2 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0887B67C; }
    goto L_0887B670;
L_0887B670:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B678;
L_0887B678:;
    ST32(s0+4, s2);
    goto L_0887B67C;
L_0887B67C:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    goto L_0887B688;
L_0887B688:;
    v1 = LD32(s1+348);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0887B850; }
    goto L_0887B698;
L_0887B698:;
    ST8(s1+364, 0);
    ST8(s1+365, 0);
    ST32(s1+368, 0);
    ST32(s1+372, 0);
    ST32(s1+376, 0);
    ST32(s1+380, 0);
    ST32(s1+352, 0);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B6D8; }
    goto L_0887B6C0;
L_0887B6C0:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B834; }
    goto L_0887B6D8;
L_0887B6D8:;
    a0 = s3 + 0;
    v0 = func_088FB5B8(a0, 0, 0);
    goto L_0887B6E0;
L_0887B6E0:;
    ST32(s1+356, v0);
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B6EC;
L_0887B6EC:;
    s2 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0887B708; }
    goto L_0887B6FC;
L_0887B6FC:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B704;
L_0887B704:;
    ST32(s0+4, s2);
    goto L_0887B708;
L_0887B708:;
    v0 = LD32(s0+8);
    s4 = 1;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD32(s1+360);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B790; }
    goto L_0887B724;
L_0887B724:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B748; }
    goto L_0887B730;
L_0887B730:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B818; }
    goto L_0887B748;
L_0887B748:;
    a0 = LD32(s1+348);
    a1 = LD32(s1+360);
    v0 = func_0887AC3C(a0, a1, 0, 0);
    goto L_0887B754;
L_0887B754:;
    s4 = v0 + 0;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B75C;
L_0887B75C:;
    s2 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0887B778; }
    goto L_0887B76C;
L_0887B76C:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B774;
L_0887B774:;
    ST32(s0+4, s2);
    goto L_0887B778;
L_0887B778:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    cnd_ = s4 == 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_0887B790; }
    goto L_0887B788;
L_0887B788:;
    v0 = LD32(s1+360);
    ST32(s1+352, v0);
    goto L_0887B790;
L_0887B790:;
    v0 = LD32(s1+356);
    v1 = LD32(s1+352);
    a0 = s1 + 0;
    v0 = v0 - v1;
    ST32(s1+384, v0);
    ST8(s1+364, 0);
    func_0887B37C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0887B7AC;
L_0887B7AC:;
    v1 = 3;
    ST32(s1+336, v1);
    goto L_0887B7B4;
L_0887B7B4:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_0887B7DC; }
    goto L_0887B7C0;
L_0887B7C0:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B7FC; }
    goto L_0887B7D8;
L_0887B7D8:;
    v0 = s4 + 0;
    goto L_0887B7DC;
L_0887B7DC:;
    sp = sp + 32;
    return v0;
L_0887B7FC:;
    v0 = func_088F8C18();
    goto L_0887B804;
L_0887B804:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B810;
L_0887B810:;
    v0 = s4 + 0;
    goto L_0887B7DC;
L_0887B818:;
    v0 = func_088F8C18();
    goto L_0887B820;
L_0887B820:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B82C;
L_0887B82C:;
    goto L_0887B748;
L_0887B834:;
    v0 = func_088F8C18();
    goto L_0887B83C;
L_0887B83C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B848;
L_0887B848:;
    goto L_0887B6D8;
L_0887B850:;
    a0 = s3 + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_0887B858;
L_0887B858:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0887B7B4; }
    goto L_0887B864;
L_0887B864:;
    ST32(s1+340, v0);
    goto L_0887B7B4;
L_0887B870:;
    v0 = func_088F8C18();
    goto L_0887B878;
L_0887B878:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B884;
L_0887B884:;
    goto L_0887B64C;
L_0887B88C:;
    ST32(s1+348, s2);
    goto L_0887B688;
}

/* 0887B894 */
void func_0887B894(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887B894:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a0 + 292;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B8B8;
L_0887B8B8:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887B8D4; }
    goto L_0887B8C8;
L_0887B8C8:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B8D0;
L_0887B8D0:;
    ST32(s0+4, s1);
    goto L_0887B8D4;
L_0887B8D4:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887B904; }
    goto L_0887B8EC;
L_0887B8EC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B9C8; }
    goto L_0887B904;
L_0887B904:;
    a0 = LD32(s2+348);
    a1 = LD32(s2+352);
    v0 = func_0887AC3C(a0, a1, 0, 0);
    goto L_0887B910;
L_0887B910:;
    s3 = v0 + 0;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B918;
L_0887B918:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887B934; }
    goto L_0887B928;
L_0887B928:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B930;
L_0887B930:;
    ST32(s0+4, s1);
    goto L_0887B934;
L_0887B934:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    cnd_ = s3 != 0;
    ST32(s0+8, v0);
    if (cnd_) { goto L_0887B9A4; }
    goto L_0887B944;
L_0887B944:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_0887B96C; }
    goto L_0887B950;
L_0887B950:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887B988; }
    goto L_0887B968;
L_0887B968:;
    v0 = s3 + 0;
    goto L_0887B96C;
L_0887B96C:;
    sp = sp + 32;
    return;
L_0887B988:;
    v0 = func_088F8C18();
    goto L_0887B990;
L_0887B990:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B99C;
L_0887B99C:;
    v0 = s3 + 0;
    goto L_0887B96C;
L_0887B9A4:;
    v0 = LD32(s2+356);
    v1 = LD32(s2+352);
    a0 = s2 + 0;
    v0 = v0 - v1;
    ST32(s2+384, v0);
    func_0887B37C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0887B9BC;
L_0887B9BC:;
    v1 = 3;
    ST32(s2+336, v1);
    goto L_0887B944;
L_0887B9C8:;
    v0 = func_088F8C18();
    goto L_0887B9D0;
L_0887B9D0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887B9DC;
L_0887B9DC:;
    goto L_0887B904;
}

/* 0887B9E4 */
u32 func_0887B9E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887B9E4:;
    sp = sp - 32;
    s2 = a0 + 0;
    s0 = a0 + 292;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BA08;
L_0887BA08:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887BA24; }
    goto L_0887BA18;
L_0887BA18:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BA20;
L_0887BA20:;
    ST32(s0+4, s1);
    goto L_0887BA24;
L_0887BA24:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD_U8(s2+344);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887BAB8; }
    goto L_0887BA3C;
L_0887BA3C:;
    v0 = LD_U8(s2+344);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887BAB8; }
    goto L_0887BA48;
L_0887BA48:;
    s3 = D_08AEC094 - (-16236);
    goto L_0887BA4C;
L_0887BA4C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s3-16236));
    if (cnd_) { goto L_0887BA74; }
    goto L_0887BA58;
L_0887BA58:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887BBC4; }
    goto L_0887BA70;
L_0887BA70:;
    f12 = BITSF(LD32(s3-16236));
    goto L_0887BA74;
L_0887BA74:;
    a0 = 1;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BA7C;
L_0887BA7C:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BA84;
L_0887BA84:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887BAA0; }
    goto L_0887BA94;
L_0887BA94:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BA9C;
L_0887BA9C:;
    ST32(s0+4, s1);
    goto L_0887BAA0;
L_0887BAA0:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD_U8(s2+344);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887BA4C; }
    goto L_0887BAB8;
L_0887BAB8:;
    ST8(s2+364, 0);
    ST8(s2+365, 0);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887BAE4; }
    goto L_0887BACC;
L_0887BACC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887BBA8; }
    goto L_0887BAE4;
L_0887BAE4:;
    a0 = LD32(s2+348);
    a1 = 0 + 0;
    { rv_t r_ = func_0887AFD4(a0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887BAF0;
L_0887BAF0:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BAF8;
L_0887BAF8:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887BB14; }
    goto L_0887BB08;
L_0887BB08:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BB10;
L_0887BB10:;
    ST32(s0+4, s1);
    goto L_0887BB14;
L_0887BB14:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = (u32)-1;
    ST32(s2+348, v0);
    ST32(s2+336, 0);
    ST32(s2+340, 0);
    ST8(s2+364, 0);
    ST8(s2+365, 0);
    ST32(s2+368, 0);
    ST32(s2+372, 0);
    ST32(s2+376, 0);
    ST32(s2+380, 0);
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887BB70; }
    goto L_0887BB54;
L_0887BB54:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887BB8C; }
    goto L_0887BB6C;
L_0887BB6C:;
    goto L_0887BB70;
L_0887BB70:;
    v0 = 1;
    sp = sp + 32;
    return v0;
L_0887BB8C:;
    v0 = func_088F8C18();
    goto L_0887BB94;
L_0887BB94:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BBA0;
L_0887BBA0:;
    goto L_0887BB70;
L_0887BBA8:;
    v0 = func_088F8C18();
    goto L_0887BBB0;
L_0887BBB0:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BBBC;
L_0887BBBC:;
    goto L_0887BAE4;
L_0887BBC4:;
    v0 = func_088F8C18();
    goto L_0887BBCC;
L_0887BBCC:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BBD8;
L_0887BBD8:;
    f12 = BITSF(LD32(s3-16236));
    goto L_0887BA74;
}

/* 0887BBE0 */
rv_t func_0887BBE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887BBE0:;
    sp = sp - 32;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0887BDF0; }
    goto L_0887BC08;
L_0887BC08:;
    s3 = a0 + 304;
    s2 = a0 + 292;
    s5 = D_08AEC098 - (-16232);
    s4 = 1;
    goto L_0887BC18;
L_0887BC18:;
    v0 = LD32(s0+340);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887BDD8; }
    goto L_0887BC24;
L_0887BC24:;
    v0 = LD32(s0+340);
    ST32(s0+336, v0);
    ST32(s0+340, 0);
    goto L_0887BC30;
L_0887BC30:;
    v0 = LD32(s0+348);
    cnd_ = (s32)v0 >= 0;
    if (cnd_) { goto L_0887BC54; }
    goto L_0887BC3C;
L_0887BC3C:;
    v0 = LD32(s0+336);
    cnd_ = v0 == s4;
    if (cnd_) { goto L_0887BC54; }
    goto L_0887BC48;
L_0887BC48:;
    v0 = LD32(s0+336);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887BD48; }
    goto L_0887BC54;
L_0887BC54:;
    ST8(s0+365, 0);
    v0 = 2;
    v1 = LD32(s0+336);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_0887BD38; }
    goto L_0887BC68;
L_0887BC68:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_0887BCA0; }
    goto L_0887BC70;
L_0887BC70:;
    cnd_ = v1 == s4;
    if (cnd_) { goto L_0887BC90; }
    goto L_0887BC78;
L_0887BC78:;
    ST8(s0+365, s4);
    a0 = 0 + 0;
    f12 = BITSF(LD32(s5-16232));
    { u64 r_ = func_088F8BA0(a0, a1, a2, a3, t0, t1, t2, t3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BC88;
L_0887BC88:;
    goto L_0887BC18;
L_0887BC90:;
    a0 = s0 + 0;
    v0 = func_0887B5B8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887BC98;
L_0887BC98:;
    goto L_0887BC78;
L_0887BCA0:;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_0887BCC0; }
    goto L_0887BCA8;
L_0887BCA8:;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0887BC78; }
    goto L_0887BCB0;
L_0887BCB0:;
    a0 = s0 + 0;
    v0 = func_0887B9E4(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887BCB8;
L_0887BCB8:;
    goto L_0887BC78;
L_0887BCC0:;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BCC8;
L_0887BCC8:;
    s1 = v0 + 0;
    v0 = LD32(s2+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887BCE4; }
    goto L_0887BCD8;
L_0887BCD8:;
    a0 = s2 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BCE0;
L_0887BCE0:;
    ST32(s2+4, s1);
    goto L_0887BCE4;
L_0887BCE4:;
    v0 = LD32(s2+8);
    a0 = s0 + 0;
    v0 = v0 + 1;
    ST32(s2+8, v0);
    func_0887B37C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0887BCF8;
L_0887BCF8:;
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887BC78; }
    goto L_0887BD04;
L_0887BD04:;
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    ST32(s2+8, v0);
    v1 = LD32(s2+8);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0887BC78; }
    goto L_0887BD1C;
L_0887BD1C:;
    v0 = func_088F8C18();
    goto L_0887BD24;
L_0887BD24:;
    ST32(s2+4, v0);
    a0 = s2 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BD30;
L_0887BD30:;
    goto L_0887BC78;
L_0887BD38:;
    a0 = s0 + 0;
    func_0887B894(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887BD40;
L_0887BD40:;
    goto L_0887BC78;
L_0887BD48:;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BD50;
L_0887BD50:;
    s1 = v0 + 0;
    v0 = LD32(s2+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887BD6C; }
    goto L_0887BD60;
L_0887BD60:;
    a0 = s2 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BD68;
L_0887BD68:;
    ST32(s2+4, s1);
    goto L_0887BD6C;
L_0887BD6C:;
    v0 = LD32(s2+8);
    v0 = v0 + 1;
    ST32(s2+8, v0);
    ST32(s0+336, 0);
    ST32(s0+340, 0);
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887BDA4; }
    goto L_0887BD8C;
L_0887BD8C:;
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    ST32(s2+8, v0);
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887BDBC; }
    goto L_0887BDA4;
L_0887BDA4:;
    a0 = s3 + 0;
    func_088F8C64(a0, 0, 0, 0);
    goto L_0887BDAC;
L_0887BDAC:;
    a0 = s3 + 0;
    func_088F8CB0(a0, 0, 0, 0, 0, 0, 0);
    goto L_0887BDB4;
L_0887BDB4:;
    ST8(s3+4, 0);
    goto L_0887BC54;
L_0887BDBC:;
    v0 = func_088F8C18();
    goto L_0887BDC4;
L_0887BDC4:;
    ST32(s2+4, v0);
    a0 = s2 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BDD0;
L_0887BDD0:;
    goto L_0887BDA4;
L_0887BDD8:;
    a0 = s3 + 0;
    func_088F8C64(a0, t1, t2, t3);
    goto L_0887BDE0;
L_0887BDE0:;
    a0 = s3 + 0;
    func_088F8CB0(a0, 0, 0, 0, 0, 0, 0);
    goto L_0887BDE8;
L_0887BDE8:;
    ST8(s3+4, 0);
    goto L_0887BC30;
L_0887BDF0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0887BE14 */
void func_0887BE14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887BE14:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = D_08AD4BE4 - (19428);
    a0 = a0 + 19428;
    s6 = a1 + 0;
    a1 = 0 + 0;
    s4 = a3 + 0;
    a3 = 1;
    s3 = a2 + 0;
    a2 = 1;
    s2 = t0 + 0;
    t0 = 0 + 0;
    s2 = s2 & 0xff;
    s5 = s0 + 304;
    v0 = sceKernelCreateSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887BE70;
L_0887BE70:;
    s1 = s0 + 292;
    ST32(s0+292, v0);
    ST32(s1+8, 0);
    v0 = func_088F8C18();
    goto L_0887BE80;
L_0887BE80:;
    ST32(s1+4, v0);
    a0 = D_08AD4BF0 - (19440);
    a0 = a0 + 19440;
    a1 = 512;
    a2 = 0 + 0;
    a3 = 0 + 0;
    v0 = sceKernelCreateEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887BE9C;
L_0887BE9C:;
    { u32 x_ = s3, y_ = s4; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    t1 = 1;
    ST32(s0+304, v0);
    v0 = (u32)-1;
    a1 = D_08AD4C08 - (19464);
    ST8(s5+4, 0);
    a1 = a1 + 19464;
    a2 = 32;
    ST8(s0+312, t1);
    a3 = 1;
    t0 = s6 + 0;
    ST32(s0+320, s3);
    a0 = s0 + 0;
    ST32(s0+324, s4);
    ST8(s0+332, s2);
    v1 = lo;
    ST32(s0+328, v1);
    ST32(s0+336, 0);
    ST32(s0+340, 0);
    ST8(s0+344, 0);
    ST32(s0+348, v0);
    ST32(s0+352, 0);
    ST32(s0+356, 0);
    ST8(s0+364, 0);
    ST8(s0+365, t1);
    ST32(s0+368, 0);
    ST32(s0+372, 0);
    ST32(s0+376, 0);
    ST32(s0+380, 0);
    ST32(s0+384, 0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887BF18;
L_0887BF18:;
    a0 = LD32(s0+320);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887BF20;
L_0887BF20:;
    v1 = LD_U8(s0+332);
    a1 = ((u32)(uintptr_t)func_0887BBE0) - (-17440);
    a0 = s6 + 0;
    a1 = a1 - 17440;
    a2 = s0 + 0;
    cnd_ = v1 == 0;
    ST32(s0+316, v0);
    if (cnd_) { goto L_0887BF64; }
    goto L_0887BF3C;
L_0887BF3C:;
    goto L_0887BF40;
L_0887BF40:;
    sp = sp + 32;
    return;
L_0887BF64:;
    v0 = func_088F8AE4(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0887BF6C;
L_0887BF6C:;
    goto L_0887BF40;
}

/* 0887BF74 */
void func_0887BF74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887BF74:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD_U8(a0+312);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887BF9C; }
    goto L_0887BF90;
L_0887BF90:;
    v0 = LD32(a0+316);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887BFBC; }
    goto L_0887BF9C;
L_0887BF9C:;
    a0 = LD32(s0+304);
    v0 = sceKernelDeleteEventFlag(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887BFA4;
L_0887BFA4:;
    a0 = LD32(s0+292);
    v0 = sceKernelDeleteSema(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0887BFAC;
L_0887BFAC:;
    sp = sp + 16;
    return;
L_0887BFBC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887BFC4;
L_0887BFC4:;
    goto L_0887BF9C;
}

/* 0887BFCC */
u32 func_0887BFCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887BFCC:;
    sp = sp - 32;
    s6 = a2 & 0xff;
    s5 = a3 + 0;
    s4 = a1 + 0;
    s3 = 0 + 0;
    s2 = a0 + 0;
    s0 = a0 + 292;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C00C;
L_0887C00C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887C028; }
    goto L_0887C01C;
L_0887C01C:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C024;
L_0887C024:;
    ST32(s0+4, s1);
    goto L_0887C028;
L_0887C028:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD32(s2+336);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887C050; }
    goto L_0887C040;
L_0887C040:;
    v1 = LD32(s2+348);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0887C0BC; }
    goto L_0887C050;
L_0887C050:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_0887C078; }
    goto L_0887C05C;
L_0887C05C:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C0A0; }
    goto L_0887C074;
L_0887C074:;
    v0 = s3 + 0;
    goto L_0887C078;
L_0887C078:;
    sp = sp + 32;
    return v0;
L_0887C0A0:;
    v0 = func_088F8C18();
    goto L_0887C0A8;
L_0887C0A8:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C0B4;
L_0887C0B4:;
    v0 = s3 + 0;
    goto L_0887C078;
L_0887C0BC:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887C0E0; }
    goto L_0887C0C8;
L_0887C0C8:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C17C; }
    goto L_0887C0E0;
L_0887C0E0:;
    a0 = s4 + 0;
    v0 = func_088FB58C(a0, 0, 0);
    goto L_0887C0E8;
L_0887C0E8:;
    s3 = v0 & 0xff;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C0F0;
L_0887C0F0:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887C10C; }
    goto L_0887C100;
L_0887C100:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C108;
L_0887C108:;
    ST32(s0+4, s1);
    goto L_0887C10C;
L_0887C10C:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    cnd_ = s3 == 0;
    a1 = D_08AD4C08 - (19464);
    if (cnd_) { goto L_0887C050; }
    goto L_0887C120;
L_0887C120:;
    a0 = s2 + 32;
    a1 = a1 + 19464;
    t0 = s4 + 0;
    a2 = 260;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C138;
L_0887C138:;
    v1 = LD_U8(s2+332);
    cnd_ = v1 != 0;
    ST32(s2+360, s5);
    if (cnd_) { goto L_0887C14C; }
    goto L_0887C144;
L_0887C144:;
    cnd_ = s6 == 0;
    if (cnd_) { a0 = s2 + 304; goto L_0887C15C; }
    goto L_0887C14C;
L_0887C14C:;
    a0 = s2 + 0;
    v0 = func_0887B5B8(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0887C154;
L_0887C154:;
    s3 = v0 + 0;
    goto L_0887C050;
L_0887C15C:;
    v0 = LD_U8(a0+4);
    v1 = 1;
    cnd_ = v0 != 0;
    ST32(s2+336, v1);
    if (cnd_) { goto L_0887C050; }
    goto L_0887C16C;
L_0887C16C:;
    ST8(a0+4, v1);
    { u64 r_ = func_088F8C90(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C174;
L_0887C174:;
    goto L_0887C050;
L_0887C17C:;
    v0 = func_088F8C18();
    goto L_0887C184;
L_0887C184:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C190;
L_0887C190:;
    goto L_0887C0E0;
}

/* 0887C198 */
u32 func_0887C198(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887C198:;
    sp = sp - 32;
    s6 = a2 + 0;
    s4 = a1 + 0;
    s3 = a0 + 0;
    s2 = a0 + 292;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C1D0;
L_0887C1D0:;
    s0 = v0 + 0;
    v0 = LD32(s2+4);
    cnd_ = v0 == s0;
    if (cnd_) { goto L_0887C1EC; }
    goto L_0887C1E0;
L_0887C1E0:;
    a0 = s2 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C1E8;
L_0887C1E8:;
    ST32(s2+4, s0);
    goto L_0887C1EC;
L_0887C1EC:;
    v0 = LD32(s2+8);
    v0 = v0 + 1;
    ST32(s2+8, v0);
    v1 = LD32(s3+316);
    v0 = LD32(s3+316);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887C278; }
    goto L_0887C208;
L_0887C208:;
    s5 = D_08AEC09C - (-16228);
    goto L_0887C20C;
L_0887C20C:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s5-16228));
    if (cnd_) { goto L_0887C234; }
    goto L_0887C218;
L_0887C218:;
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    ST32(s2+8, v0);
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C5D0; }
    goto L_0887C230;
L_0887C230:;
    f12 = BITSF(LD32(s5-16228));
    goto L_0887C234;
L_0887C234:;
    a0 = 0 + 0;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C23C;
L_0887C23C:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C244;
L_0887C244:;
    s0 = v0 + 0;
    v0 = LD32(s2+4);
    cnd_ = v0 == s0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0887C260; }
    goto L_0887C254;
L_0887C254:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C25C;
L_0887C25C:;
    ST32(s2+4, s0);
    goto L_0887C260;
L_0887C260:;
    v0 = LD32(s2+8);
    v0 = v0 + 1;
    ST32(s2+8, v0);
    v0 = LD32(s3+316);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887C20C; }
    goto L_0887C278;
L_0887C278:;
    v0 = LD32(s3+336);
    v1 = LD32(s3+336);
    v0 = 3;
    cnd_ = v1 == v0;
    s1 = 3;
    if (cnd_) { goto L_0887C2FC; }
    goto L_0887C28C;
L_0887C28C:;
    s5 = D_08AEC09C - (-16228);
    goto L_0887C290;
L_0887C290:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s5-16228));
    if (cnd_) { goto L_0887C2B8; }
    goto L_0887C29C;
L_0887C29C:;
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    ST32(s2+8, v0);
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C5B4; }
    goto L_0887C2B4;
L_0887C2B4:;
    f12 = BITSF(LD32(s5-16228));
    goto L_0887C2B8;
L_0887C2B8:;
    a0 = 0 + 0;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C2C0;
L_0887C2C0:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C2C8;
L_0887C2C8:;
    s0 = v0 + 0;
    v0 = LD32(s2+4);
    cnd_ = v0 == s0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0887C2E4; }
    goto L_0887C2D8;
L_0887C2D8:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C2E0;
L_0887C2E0:;
    ST32(s2+4, s0);
    goto L_0887C2E4;
L_0887C2E4:;
    v0 = LD32(s2+8);
    v0 = v0 + 1;
    ST32(s2+8, v0);
    v0 = LD32(s3+336);
    cnd_ = v0 != s1;
    if (cnd_) { goto L_0887C290; }
    goto L_0887C2FC;
L_0887C2FC:;
    v1 = LD32(s3+356);
    v0 = LD32(s3+352);
    a0 = s3 + 0;
    s1 = v1 - v0;
    v0 = func_0887B1F0(a0);
    goto L_0887C310;
L_0887C310:;
    cnd_ = (s32)v0 < 0;
    v0 = s1 < s4;
    if (cnd_) { goto L_0887C348; }
    goto L_0887C318;
L_0887C318:;
    v0 = LD_U8(s3+332);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887C5A4; }
    goto L_0887C324;
L_0887C324:;
    v0 = LD32(s3+376);
    v0 = v0 < s4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    a0 = s3 + 304;
    if (cnd_) { goto L_0887C4F4; }
    goto L_0887C338;
L_0887C338:;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0887C4E4; }
    goto L_0887C344;
L_0887C344:;
    v0 = s1 < s4;
    goto L_0887C348;
L_0887C348:;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887C424; }
    goto L_0887C350;
L_0887C350:;
    a3 = LD32(s3+368);
    v0 = LD32(s3+368);
    v1 = LD32(s3+372);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887C4D4; }
    goto L_0887C368;
L_0887C368:;
    a1 = LD32(s3+372);
    goto L_0887C36C;
L_0887C36C:;
    a2 = LD32(s3+380);
    s1 = 0 + 0;
    v0 = a2 < a3;
    v1 = a1 < a2;
    v0 = v0 ^ 0x1;
    v1 = v1 ^ 0x1;
    a0 = a2 + s4;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = a0 - 1;
    if (cnd_) { goto L_0887C418; }
    goto L_0887C394;
L_0887C394:;
    v1 = a0 < a3;
    v0 = a1 < a0;
    v1 = v1 ^ 0x1;
    v0 = v0 ^ 0x1;
    v1 = v1 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C418; }
    goto L_0887C3B0;
L_0887C3B0:;
    v0 = LD32(s3+320);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887C490; }
    goto L_0887C3C0;
L_0887C3C0:;
    s1 = LD32(s3+320);
    s0 = LD32(s3+320);
    a1 = LD32(s3+316);
    v0 = LD32(s3+380);
    s1 = s1 - a2;
    a2 = s1 + 0;
    s0 = a0 - s0;
    a1 = a1 + v0;
    a0 = s6 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C3E8;
L_0887C3E8:;
    a1 = LD32(s3+316);
    s0 = s0 + 1;
    s1 = s6 + s1;
    a0 = s1 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C400;
L_0887C400:;
    ST32(s3+380, s0);
    s1 = s4 + 0;
    ST32(s3+368, s0);
    v0 = LD32(s3+352);
    v0 = v0 + s4;
    ST32(s3+352, v0);
    goto L_0887C418;
L_0887C418:;
    v0 = LD32(s3+376);
    v0 = v0 - s4;
    ST32(s3+376, v0);
    goto L_0887C424;
L_0887C424:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0887C44C; }
    goto L_0887C430;
L_0887C430:;
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    ST32(s2+8, v0);
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C474; }
    goto L_0887C448;
L_0887C448:;
    v0 = s1 + 0;
    goto L_0887C44C;
L_0887C44C:;
    sp = sp + 32;
    return v0;
L_0887C474:;
    v0 = func_088F8C18();
    goto L_0887C47C;
L_0887C47C:;
    ST32(s2+4, v0);
    a0 = s2 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C488;
L_0887C488:;
    v0 = s1 + 0;
    goto L_0887C44C;
L_0887C490:;
    a1 = LD32(s3+316);
    v0 = LD32(s3+380);
    a0 = s6 + 0;
    a2 = s4 + 0;
    a1 = a1 + v0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C4A8;
L_0887C4A8:;
    v1 = LD32(s3+380);
    s1 = s4 + 0;
    v1 = v1 + s4;
    ST32(s3+380, v1);
    v0 = LD32(s3+368);
    v0 = v0 + s4;
    ST32(s3+368, v0);
    v1 = LD32(s3+352);
    v1 = v1 + s4;
    ST32(s3+352, v1);
    goto L_0887C418;
L_0887C4D4:;
    v1 = LD32(s3+320);
    v0 = LD32(s3+372);
    a1 = v1 + v0;
    goto L_0887C36C;
L_0887C4E4:;
    ST8(a0+4, v0);
    { u64 r_ = func_088F8C90(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C4EC;
L_0887C4EC:;
    v0 = s1 < s4;
    goto L_0887C348;
L_0887C4F4:;
    v0 = LD32(s3+376);
    v0 = v0 < s4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    v0 = s1 < s4;
    if (cnd_) { goto L_0887C348; }
    goto L_0887C508;
L_0887C508:;
    s5 = D_08AEC09C - (-16228);
    goto L_0887C50C;
L_0887C50C:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s5-16228));
    if (cnd_) { goto L_0887C534; }
    goto L_0887C518;
L_0887C518:;
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    ST32(s2+8, v0);
    v1 = LD32(s2+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C588; }
    goto L_0887C530;
L_0887C530:;
    f12 = BITSF(LD32(s5-16228));
    goto L_0887C534;
L_0887C534:;
    a0 = 0 + 0;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C53C;
L_0887C53C:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C544;
L_0887C544:;
    s0 = v0 + 0;
    v0 = LD32(s2+4);
    cnd_ = v0 == s0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0887C560; }
    goto L_0887C554;
L_0887C554:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C55C;
L_0887C55C:;
    ST32(s2+4, s0);
    goto L_0887C560;
L_0887C560:;
    v0 = LD32(s2+8);
    v0 = v0 + 1;
    ST32(s2+8, v0);
    v0 = LD32(s3+376);
    v0 = v0 < s4;
    v0 = v0 ^ 0x1;
    cnd_ = v0 == 0;
    v0 = s1 < s4;
    if (cnd_) { goto L_0887C50C; }
    goto L_0887C580;
L_0887C580:;
    goto L_0887C348;
L_0887C588:;
    v0 = func_088F8C18();
    goto L_0887C590;
L_0887C590:;
    ST32(s2+4, v0);
    a0 = s2 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C59C;
L_0887C59C:;
    f12 = BITSF(LD32(s5-16228));
    goto L_0887C534;
L_0887C5A4:;
    a0 = s3 + 0;
    func_0887B37C(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0887C5AC;
L_0887C5AC:;
    v0 = s1 < s4;
    goto L_0887C348;
L_0887C5B4:;
    v0 = func_088F8C18();
    goto L_0887C5BC;
L_0887C5BC:;
    ST32(s2+4, v0);
    a0 = s2 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C5C8;
L_0887C5C8:;
    f12 = BITSF(LD32(s5-16228));
    goto L_0887C2B8;
L_0887C5D0:;
    v0 = func_088F8C18();
    goto L_0887C5D8;
L_0887C5D8:;
    ST32(s2+4, v0);
    a0 = s2 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C5E4;
L_0887C5E4:;
    f12 = BITSF(LD32(s5-16228));
    goto L_0887C234;
}

/* 0887C5EC */
void func_0887C5EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887C5EC:;
    sp = sp - 32;
    s5 = a1 & 0xff;
    s2 = a0 + 0;
    s0 = a0 + 292;
    { u64 r_ = func_088F8BFC(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C61C;
L_0887C61C:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    if (cnd_) { goto L_0887C638; }
    goto L_0887C62C;
L_0887C62C:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C634;
L_0887C634:;
    ST32(s0+4, s1);
    goto L_0887C638;
L_0887C638:;
    v0 = LD32(s0+8);
    s1 = 0 + 0;
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = (u32)-1;
    v1 = LD32(s2+348);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0887C694; }
    goto L_0887C658;
L_0887C658:;
    v1 = LD32(s2+336);
    v0 = 1;
    cnd_ = v1 == v0;
    s4 = D_08AEC0A4 - (-16220);
    if (cnd_) { goto L_0887C7AC; }
    goto L_0887C668;
L_0887C668:;
    v1 = LD32(s2+336);
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = 0 + 0; goto L_0887C694; }
    goto L_0887C678;
L_0887C678:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s2+332); goto L_0887C6FC; }
    goto L_0887C684;
L_0887C684:;
    v0 = 4;
    cnd_ = v1 == v0;
    s1 = 1;
    if (cnd_) { goto L_0887C694; }
    goto L_0887C690;
L_0887C690:;
    s1 = 0 + 0;
    goto L_0887C694;
L_0887C694:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0887C6BC; }
    goto L_0887C6A0;
L_0887C6A0:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C6E0; }
    goto L_0887C6B8;
L_0887C6B8:;
    v0 = s1 + 0;
    goto L_0887C6BC;
L_0887C6BC:;
    sp = sp + 32;
    return;
L_0887C6E0:;
    v0 = func_088F8C18();
    goto L_0887C6E8;
L_0887C6E8:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C6F4;
L_0887C6F4:;
    v0 = s1 + 0;
    goto L_0887C6BC;
L_0887C6FC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887C70C; }
    goto L_0887C704;
L_0887C704:;
    cnd_ = s5 == 0;
    a0 = s2 + 304;
    if (cnd_) { goto L_0887C788; }
    goto L_0887C70C;
L_0887C70C:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887C730; }
    goto L_0887C718;
L_0887C718:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C76C; }
    goto L_0887C730;
L_0887C730:;
    a0 = s2 + 0;
    v0 = func_0887B9E4(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0887C738;
L_0887C738:;
    s1 = v0 + 0;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C740;
L_0887C740:;
    s2 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s2;
    if (cnd_) { goto L_0887C75C; }
    goto L_0887C750;
L_0887C750:;
    a0 = s0 + 0;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C758;
L_0887C758:;
    ST32(s0+4, s2);
    goto L_0887C75C;
L_0887C75C:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    goto L_0887C694;
L_0887C76C:;
    v0 = func_088F8C18();
    goto L_0887C774;
L_0887C774:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C780;
L_0887C780:;
    goto L_0887C730;
L_0887C788:;
    v1 = LD_U8(a0+4);
    v0 = 4;
    ST32(s2+336, v0);
    cnd_ = v1 != 0;
    s1 = 1;
    if (cnd_) { goto L_0887C694; }
    goto L_0887C79C;
L_0887C79C:;
    ST8(a0+4, s1);
    { u64 r_ = func_088F8C90(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C7A4;
L_0887C7A4:;
    goto L_0887C694;
L_0887C7AC:;
    s3 = 1;
    goto L_0887C7B0;
L_0887C7B0:;
    v0 = LD32(s0+8);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s4-16220));
    if (cnd_) { goto L_0887C7D8; }
    goto L_0887C7BC;
L_0887C7BC:;
    v0 = LD32(s0+8);
    v0 = v0 - 1;
    ST32(s0+8, v0);
    v1 = LD32(s0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0887C824; }
    goto L_0887C7D4;
L_0887C7D4:;
    f12 = BITSF(LD32(s4-16220));
    goto L_0887C7D8;
L_0887C7D8:;
    a0 = 0 + 0;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C7E0;
L_0887C7E0:;
    { u64 r_ = func_088F8BFC(0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C7E8;
L_0887C7E8:;
    s1 = v0 + 0;
    v0 = LD32(s0+4);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887C804; }
    goto L_0887C7F8;
L_0887C7F8:;
    { u64 r_ = func_088F8C20(a0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C800;
L_0887C800:;
    ST32(s0+4, s1);
    goto L_0887C804;
L_0887C804:;
    v0 = LD32(s0+8);
    v0 = v0 + 1;
    ST32(s0+8, v0);
    v0 = LD32(s2+336);
    cnd_ = v0 == s3;
    if (cnd_) { goto L_0887C7B0; }
    goto L_0887C81C;
L_0887C81C:;
    goto L_0887C668;
L_0887C824:;
    v0 = func_088F8C18();
    goto L_0887C82C;
L_0887C82C:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    { u64 r_ = func_088F8C44(a0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887C838;
L_0887C838:;
    f12 = BITSF(LD32(s4-16220));
    goto L_0887C7D8;
}

/* 0887C840 */
u32 func_0887C840(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C840:;
    sp = sp - 16;
    a0 = 248;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C854;
L_0887C854:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_08884340(a0);
    goto L_0887C860;
L_0887C860:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0887C874 */
rv_t func_0887C874(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C874:;
    sp = sp - 16;
    a0 = 220;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C888;
L_0887C888:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_08883114(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C894;
L_0887C894:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887C8A8 */
rv_t func_0887C8A8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C8A8:;
    sp = sp - 16;
    a0 = 244;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C8BC;
L_0887C8BC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_08881DF4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C8C8;
L_0887C8C8:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887C8DC */
rv_t func_0887C8DC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C8DC:;
    sp = sp - 16;
    a0 = 196;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C8F0;
L_0887C8F0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088802E4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C8FC;
L_0887C8FC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887C910 */
rv_t func_0887C910(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C910:;
    sp = sp - 16;
    a0 = 168;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C924;
L_0887C924:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088811D8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C930;
L_0887C930:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887C944 */
rv_t func_0887C944(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C944:;
    sp = sp - 16;
    a0 = 228;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C958;
L_0887C958:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0887F198(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C964;
L_0887C964:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887C978 */
u32 func_0887C978(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C978:;
    sp = sp - 16;
    a0 = 200;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C98C;
L_0887C98C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_0888D09C(a0);
    goto L_0887C998;
L_0887C998:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0887C9AC */
rv_t func_0887C9AC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C9AC:;
    sp = sp - 16;
    a0 = 192;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C9C0;
L_0887C9C0:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888D958(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C9CC;
L_0887C9CC:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887C9E0 */
rv_t func_0887C9E0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887C9E0:;
    sp = sp - 16;
    a0 = 668;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887C9F4;
L_0887C9F4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888B60C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CA00;
L_0887CA00:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887CA14 */
rv_t func_0887CA14(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CA14:;
    sp = sp - 16;
    a0 = 176;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CA28;
L_0887CA28:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888DF00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CA34;
L_0887CA34:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887CA48 */
rv_t func_0887CA48(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CA48:;
    sp = sp - 16;
    a0 = 344;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CA5C;
L_0887CA5C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_088945E0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CA68;
L_0887CA68:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887CA7C */
rv_t func_0887CA7C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CA7C:;
    sp = sp - 16;
    a0 = 276;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CA90;
L_0887CA90:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_08890658(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CA9C;
L_0887CA9C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887CAB0 */
u64 func_0887CAB0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CAB0:;
    sp = sp - 16;
    a0 = 504;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CAC4;
L_0887CAC4:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_08891B8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887CAD0;
L_0887CAD0:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887CAE4 */
rv_t func_0887CAE4(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CAE4:;
    sp = sp - 16;
    a0 = 236;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CAF8;
L_0887CAF8:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_08892F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CB04;
L_0887CB04:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887CB18 */
rv_t func_0887CB18(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CB18:;
    sp = sp - 16;
    a0 = 212;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CB2C;
L_0887CB2C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_08893C9C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CB38;
L_0887CB38:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887CB4C */
u64 func_0887CB4C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CB4C:;
    sp = sp - 16;
    a0 = 456;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CB60;
L_0887CB60:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_0888EBDC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887CB6C;
L_0887CB6C:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887CB80 */
u64 func_0887CB80(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CB80:;
    sp = sp - 16;
    a0 = 456;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CB94;
L_0887CB94:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_0889038C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887CBA0;
L_0887CBA0:;
    v0 = s0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887CBB4 */
void func_0887CBB4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CBB4:;
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(a0, 0);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    ST32(s0+16, 0);
    ST32(s0+20, 0);
    ST32(s0+24, 0);
    ST32(s0+28, 0);
    a0 = a1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887CBEC;
L_0887CBEC:;
    a0 = s0 + 0;
    ST32(s0+32, v0);
    func_0887DAD0(a0, 0, 0, 0);
    goto L_0887CBF8;
L_0887CBF8:;
    sp = sp + 16;
    return;
}

/* 0887CC08 */
void func_0887CC08(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CC08:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0887DB78(a0, t1, t2, t3);
    goto L_0887CC1C;
L_0887CC1C:;
    v0 = LD32(s0+16);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887CC40; }
    goto L_0887CC28;
L_0887CC28:;
    a0 = LD32(s0+20);
    { rv_t r_ = func_088F9A14(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CC30;
L_0887CC30:;
    sp = sp + 16;
    return;
L_0887CC40:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887CC48;
L_0887CC48:;
    goto L_0887CC28;
}

/* 0887CC50 */
float func_0887CC50(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0;
L_0887CC50:;
    v0 = LD32(a0+16);
    a1 = a1 << 2;
    a1 = a1 + v0;
    f0 = BITSF(LD32(a1));
    return f0;
}

/* 0887CC64 */
u32 func_0887CC64(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CC64:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a0 = LD32(a0+8);
    v0 = func_0887CCA8(a0);
    goto L_0887CC84;
L_0887CC84:;
    { s64 p_ = (s64)(s32)s0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s1+20);
    s0 = lo;
    v0 = v0 + s0;
    sp = sp + 16;
    return v0;
}

/* 0887CCA8 */
u32 func_0887CCA8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0887CCA8:;
    v0 = 2;
    v1 = (s32)a0 < 3;
    cnd_ = a0 == v0;
    a1 = 4;
    if (cnd_) { goto L_0887CCDC; }
    goto L_0887CCB8;
L_0887CCB8:;
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_0887CCD4; }
    goto L_0887CCC0;
L_0887CCC0:;
    v0 = 3;
    cnd_ = a0 == v0;
    a1 = 8;
    if (cnd_) { goto L_0887CCDC; }
    goto L_0887CCCC;
L_0887CCCC:;
    a1 = 16;
    v0 = 4;
    goto L_0887CCD4;
L_0887CCD4:;
    cnd_ = a0 != v0;
    if (cnd_) { a1 = 0 + 0; goto L_0887CCDC; }
    goto L_0887CCDC;
L_0887CCDC:;
    v0 = a1 + 0;
    return v0;
}

/* 0887CCE4 */
u32 func_0887CCE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887CCE4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s1 = 0 + 0;
    v0 = func_0887CCA8(a0);
    goto L_0887CD04;
L_0887CD04:;
    cnd_ = v0 == 0;
    { s64 p_ = (s64)(s32)v0 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_0887CD2C; }
    goto L_0887CD0C;
L_0887CD0C:;
    a0 = lo;
    s0 = lo;
    { rv_t r_ = func_088F99D0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CD18;
L_0887CD18:;
    a0 = v0 + 0;
    a2 = s0 + 0;
    a1 = 0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887CD2C;
L_0887CD2C:;
    v0 = s1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0887CD44 */
u32 func_0887CD44(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0887CD44:;
    sp = sp - 112;
    s2 = a1 + 0;
    a1 = sp + 64;
    s1 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CD70;
L_0887CD70:;
    v0 = LD32(sp+64);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887CD9C; }
    goto L_0887CD7C;
L_0887CD7C:;
    v0 = v1 + 0;
    sp = sp + 112;
    return v0;
L_0887CD9C:;
    a0 = s2 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CDA8;
L_0887CDA8:;
    a1 = s1 + 4;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CDB4;
L_0887CDB4:;
    v1 = LD32(s2);
    a2 = s1 + 8;
    a0 = s2 + 0;
    v0 = LD32(v1+8);
    a1 = 4;
    t_ = v0;
    s3 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CDD0;
L_0887CDD0:;
    a1 = s1 + 12;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CDDC;
L_0887CDDC:;
    a0 = LD32(s1+12);
    s0 = 0 + 0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CDEC;
L_0887CDEC:;
    ST32(s1+16, v0);
    a0 = LD32(s1+12);
    a1 = LD32(s1+8);
    v0 = func_0887CCE4(a0, a1);
    goto L_0887CDFC;
L_0887CDFC:;
    a0 = LD32(s1+12);
    v1 = LD32(s1+16);
    ST32(s1+20, v0);
    ST32(sp+4, v1);
    cnd_ = a0 != 0;
    ST32(sp, a0);
    if (cnd_) { goto L_0887CF98; }
    goto L_0887CE14;
L_0887CE14:;
    v1 = LD32(s1+8);
    goto L_0887CE18;
L_0887CE18:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_0887CF4C; }
    goto L_0887CE24;
L_0887CE24:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_0887CEA0; }
    goto L_0887CE2C;
L_0887CE2C:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+12); goto L_0887CE58; }
    goto L_0887CE38;
L_0887CE38:;
    a1 = s1 + 24;
    goto L_0887CE3C;
L_0887CE3C:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CE44;
L_0887CE44:;
    a1 = s1 + 28;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CE50;
L_0887CE50:;
    v1 = 1;
    goto L_0887CD7C;
L_0887CE58:;
    v1 = LD32(s1+20);
    s3 = sp + 16;
    ST32(sp+16, v0);
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(sp+20, v1);
    if (cnd_) { goto L_0887CE38; }
    goto L_0887CE70;
L_0887CE70:;
    a1 = LD32(s3+4);
    goto L_0887CE74;
L_0887CE74:;
    v0 = s0 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CE84;
L_0887CE84:;
    v1 = LD32(s3);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s3+4); goto L_0887CE74; }
    goto L_0887CE98;
L_0887CE98:;
    a1 = s1 + 24;
    goto L_0887CE3C;
L_0887CEA0:;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_0887CF00; }
    goto L_0887CEA8;
L_0887CEA8:;
    cnd_ = v1 != v0;
    a1 = s1 + 24;
    if (cnd_) { goto L_0887CE3C; }
    goto L_0887CEB0;
L_0887CEB0:;
    v0 = LD32(s1+12);
    v1 = LD32(s1+20);
    s3 = sp + 16;
    v0 = v0 << 2;
    ST32(sp+20, v1);
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(sp+16, v0);
    if (cnd_) { goto L_0887CE3C; }
    goto L_0887CED0;
L_0887CED0:;
    a1 = LD32(s3+4);
    goto L_0887CED4;
L_0887CED4:;
    v0 = s0 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CEE4;
L_0887CEE4:;
    v1 = LD32(s3);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s3+4); goto L_0887CED4; }
    goto L_0887CEF8;
L_0887CEF8:;
    a1 = s1 + 24;
    goto L_0887CE3C;
L_0887CF00:;
    v0 = LD32(s1+12);
    v1 = LD32(s1+20);
    s3 = sp + 48;
    ST32(sp+48, v0);
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(sp+52, v1);
    if (cnd_) { goto L_0887CE38; }
    goto L_0887CF1C;
L_0887CF1C:;
    a1 = LD32(s3+4);
    goto L_0887CF20;
L_0887CF20:;
    v0 = s0 << 3;
    a0 = s2 + 0;
    a1 = a1 + v0;
    func_0882E040(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0887CF30;
L_0887CF30:;
    v1 = LD32(s3);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s3+4); goto L_0887CF20; }
    goto L_0887CF44;
L_0887CF44:;
    a1 = s1 + 24;
    goto L_0887CE3C;
L_0887CF4C:;
    v0 = LD32(s1+12);
    v1 = LD32(s1+20);
    s3 = sp + 32;
    ST32(sp+32, v0);
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(sp+36, v1);
    if (cnd_) { goto L_0887CE38; }
    goto L_0887CF68;
L_0887CF68:;
    a1 = LD32(s3+4);
    goto L_0887CF6C;
L_0887CF6C:;
    v0 = s0 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CF7C;
L_0887CF7C:;
    v1 = LD32(s3);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s3+4); goto L_0887CF6C; }
    goto L_0887CF90;
L_0887CF90:;
    a1 = s1 + 24;
    goto L_0887CE3C;
L_0887CF98:;
    a1 = LD32(s3+4);
    goto L_0887CF9C;
L_0887CF9C:;
    v0 = s0 << 2;
    a0 = s2 + 0;
    a1 = a1 + v0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CFAC;
L_0887CFAC:;
    v1 = LD32(s3);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s3+4); goto L_0887CF9C; }
    goto L_0887CFC0;
L_0887CFC0:;
    v1 = LD32(s1+8);
    goto L_0887CE18;
}

/* 0887CFC8 */
u32 func_0887CFC8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887CFC8:;
    sp = sp - 48;
    a1 = sp + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887CFE0;
L_0887CFE0:;
    a1 = sp + 4;
    v0 = LD32(sp);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887D008; }
    goto L_0887CFF4;
L_0887CFF4:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_0887D008:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D010;
L_0887D010:;
    a0 = s0 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D01C;
L_0887D01C:;
    v1 = LD32(s0);
    a2 = sp + 12;
    a1 = 4;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D034;
L_0887D034:;
    a0 = s0 + 0;
    a1 = sp + 16;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D040;
L_0887D040:;
    v1 = LD32(s0);
    a1 = LD32(sp+16);
    a0 = s0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = a1 << 2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D058;
L_0887D058:;
    a0 = LD32(sp+12);
    v0 = func_0887CCA8(a0);
    goto L_0887D060;
L_0887D060:;
    a1 = v0 + 0;
    v0 = LD32(sp+16);
    v1 = LD32(s0);
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(v1+12);
    a1 = lo;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D080;
L_0887D080:;
    a0 = s0 + 0;
    a1 = sp + 20;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D08C;
L_0887D08C:;
    a0 = s0 + 0;
    a1 = sp + 24;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D098;
L_0887D098:;
    v1 = 1;
    goto L_0887CFF4;
}

/* 0887D0A0 */
void func_0887D0A0(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0887D0A0:;
    v1 = D_08AEC0AC - (-16212);
    f0 = BITSF(LD32(v1-16212));
    v0 = (u32)-1;
    ST32(a0+12, v0);
    ST32(a0+8, FBITS(f0));
    ST32(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 0887D0C0 */
void func_0887D0C0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0887D0C0:;
    cnd_ = a0 == a1;
    if (cnd_) { goto L_0887D0E4; }
    goto L_0887D0C8;
L_0887D0C8:;
    f0 = BITSF(LD32(a1+8));
    v1 = LD32(a1);
    v0 = (u32)-1;
    ST32(a0+12, v0);
    ST32(a0, v1);
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, 0);
    goto L_0887D0E4;
L_0887D0E4:;
    v0 = a0 + 0;
    return;
}

/* 0887D0EC */
u32 func_0887D0EC(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887D0EC:;
    sp = sp - 16;
    s0 = a1 + 0;
    v0 = func_0887D11C(a0);
    goto L_0887D100;
L_0887D100:;
    s0 = s0 & v0;
    s0 = 0 < s0;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 0887D11C */
u32 func_0887D11C(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_0887D11C:;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0887D12C; }
    goto L_0887D128;
L_0887D128:;
    v0 = LD32(a0);
    goto L_0887D12C;
L_0887D12C:;
    return v0;
}

/* 0887D134 */
u32 func_0887D134(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_0887D134:;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0887D144; }
    goto L_0887D140;
L_0887D140:;
    v0 = LD32(a0+4);
    goto L_0887D144;
L_0887D144:;
    return v0;
}

/* 0887D14C */
u64 func_0887D14C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0887D14C:;
    a0 = LD32(a0);
    v0 = 0 + 0;
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0887D180; }
    goto L_0887D15C;
L_0887D15C:;
    v0 = LD32(a0+28);
    v1 = (v0 >> 2) & 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = 1; goto L_0887D17C; }
    goto L_0887D170;
L_0887D170:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = a1 + 0; goto L_0887D180; }
    goto L_0887D178;
L_0887D178:;
    a1 = 1;
    goto L_0887D17C;
L_0887D17C:;
    v0 = a1 + 0;
    goto L_0887D180;
L_0887D180:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887D188 */
float func_0887D188(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_0887D188:;
    v0 = LD32(a0);
    f1 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887D1C0; }
    goto L_0887D198;
L_0887D198:;
    f2 = BITSF(LD32(a0+8));
    fcc = FCMP(f2, f1, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_0887D1C0; }
    goto L_0887D1AC;
L_0887D1AC:;
    f0 = BITSF(LD32(v0+24));
    f1 = f0 / f2;
    v0 = FBITS(f1);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    goto L_0887D1C0;
L_0887D1C0:;
    f0 = f1;
    return f0;
}

/* 0887D1C8 */
void func_0887D1C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0887D1C8:;
    sp = sp - 64;
    a2 = sp + 36;
    s1 = a1 + 0;
    a3 = sp + 40;
    s0 = a0 + 0;
    a0 = a1 + 0;
    a1 = sp + 32;
    v0 = func_0887D48C(a0, a1, a2, a3);
    goto L_0887D1F8;
L_0887D1F8:;
    v1 = D_08B45A94 - (23188);
    cnd_ = v0 != 0;
    a0 = v1 + 23188;
    if (cnd_) { goto L_0887D230; }
    goto L_0887D204;
L_0887D204:;
    f0 = BITSF(LD32(v1+23188));
    f1 = BITSF(LD32(a0+4));
    ST32(s0, FBITS(f0));
    ST32(s0+4, FBITS(f1));
    goto L_0887D214;
L_0887D214:;
    v0 = s0 + 0;
    sp = sp + 64;
    return;
L_0887D230:;
    a0 = LD32(s1);
    a1 = LD32(sp+32);
    v0 = func_0887CC64(a0, a1);
    goto L_0887D23C;
L_0887D23C:;
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    s2 = v0 + 0;
    if (cnd_) { goto L_0887D268; }
    goto L_0887D254;
L_0887D254:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    goto L_0887D25C;
L_0887D25C:;
    ST32(s0+4, FBITS(f0));
    ST32(s0, FBITS(f1));
    goto L_0887D214;
L_0887D268:;
    a0 = LD32(s1);
    a1 = LD32(sp+36);
    v0 = func_0887CC64(a0, a1);
    goto L_0887D274;
L_0887D274:;
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(s2));
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(sp+40));
    f0 = f0 - f3;
    f1 = f1 - f4;
    f3 = f0 * f2;
    f2 = f1 * f2;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    f1 = BITSF(LD32(s2));
    f0 = BITSF(LD32(s2+4));
    f1 = f1 + f3;
    f0 = f0 + f2;
    goto L_0887D25C;
}

/* 0887D2BC */
float func_0887D2BC(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887D2BC:;
    sp = sp - 32;
    a2 = sp + 4;
    a3 = sp + 8;
    a1 = sp + 0;
    s1 = a0 + 0;
    v0 = func_0887D48C(a0, a1, a2, a3);
    goto L_0887D2E0;
L_0887D2E0:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887D318; }
    goto L_0887D2EC;
L_0887D2EC:;
    a0 = LD32(s1);
    a1 = LD32(sp);
    v0 = func_0887CC64(a0, a1);
    goto L_0887D2F8;
L_0887D2F8:;
    f1 = BITSF(LD32(sp+8));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    s0 = v0 + 0;
    if (cnd_) { goto L_0887D328; }
    goto L_0887D310;
L_0887D310:;
    f0 = BITSF(LD32(v0));
    goto L_0887D314;
L_0887D314:;
    goto L_0887D318;
L_0887D318:;
    sp = sp + 32;
    return f0;
L_0887D328:;
    a0 = LD32(s1);
    a1 = LD32(sp+4);
    v0 = func_0887CC64(a0, a1);
    goto L_0887D334;
L_0887D334:;
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(s0));
    f1 = BITSF(LD32(sp+8));
    f0 = f0 - f2;
    f0 = f0 * f1;
    f0 = f2 + f0;
    goto L_0887D314;
}

/* 0887D350 */
void func_0887D350(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887D350:;
    sp = sp - 48;
    a2 = sp + 20;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    a3 = sp + 24;
    a1 = sp + 16;
    v0 = func_0887D48C(a0, a1, a2, a3);
    goto L_0887D380;
L_0887D380:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_0887D3D4; }
    goto L_0887D388;
L_0887D388:;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    goto L_0887D398;
L_0887D398:;
    v1 = LD32(sp+4);
    a0 = LD32(sp+8);
    a1 = LD32(sp+12);
    v0 = LD32(sp);
    ST32(s1+4, v1);
    ST32(s1, v0);
    ST32(s1+8, a0);
    ST32(s1+12, a1);
    goto L_0887D3B8;
L_0887D3B8:;
    v0 = s1 + 0;
    sp = sp + 48;
    return;
L_0887D3D4:;
    a1 = LD32(sp+16);
    v0 = func_0887CC64(a0, a1);
    goto L_0887D3DC;
L_0887D3DC:;
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    s2 = v0 + 0;
    if (cnd_) { goto L_0887D418; }
    goto L_0887D3F4;
L_0887D3F4:;
    v0 = LD32(v0);
    ST32(s1, v0);
    v1 = LD32(s2+4);
    ST32(s1+4, v1);
    v0 = LD32(s2+8);
    ST32(s1+8, v0);
    v1 = LD32(s2+12);
    ST32(s1+12, v1);
    goto L_0887D3B8;
L_0887D418:;
    a0 = LD32(s0);
    a1 = LD32(sp+20);
    v0 = func_0887CC64(a0, a1);
    goto L_0887D424;
L_0887D424:;
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(s2+12));
    f6 = BITSF(LD32(s2));
    f7 = BITSF(LD32(s2+4));
    f8 = BITSF(LD32(s2+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f1 = f1 - f6;
    f2 = f2 - f7;
    f3 = f3 - f8;
    f4 = f4 - f5;
    f0 = BITSF(LD32(sp+24));
    f4 = f4 * f0;
    f1 = f1 * f0;
    f2 = f2 * f0;
    f3 = f3 * f0;
    f5 = f5 + f4;
    f6 = f6 + f1;
    f7 = f7 + f2;
    f8 = f8 + f3;
    ST32(sp+12, FBITS(f5));
    ST32(sp, FBITS(f6));
    ST32(sp+4, FBITS(f7));
    ST32(sp+8, FBITS(f8));
    goto L_0887D398;
}

/* 0887D48C */
u32 func_0887D48C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0887D48C:;
    sp = sp - 96;
    v0 = 0 + 0;
    s6 = a2 + 0;
    s5 = a3 + 0;
    s4 = a1 + 0;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0887D68C; }
    goto L_0887D4D8;
L_0887D4D8:;
    f1 = BITSF(LD32(a0+8));
    f0 = BITSF(0);
    f3 = BITSF(LD32(s2+24));
    f4 = BITSF(LD32(a0+4));
    fcc = FCMP(f1, f0, 2);
    ST32(sp+16, FBITS(f3));
    cnd_ = fcc;
    ST32(sp, FBITS(f4));
    if (cnd_) { goto L_0887D520; }
    goto L_0887D4F8;
L_0887D4F8:;
    v0 = D_08B285AC - (-31316);
    a0 = LD32(v0-31316);
    v1 = LD32(s0+12);
    cnd_ = v1 == a0;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_0887D520; }
    goto L_0887D50C;
L_0887D50C:;
    f0 = BITSF(LD32(v0-31332));
    ST32(s0+12, a0);
    f0 = f0 * f1;
    f4 = f4 + f0;
    ST32(sp, FBITS(f4));
    goto L_0887D520;
L_0887D520:;
    v0 = LD32(s2+28);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    f3 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_0887D794; }
    goto L_0887D530;
L_0887D530:;
    f6 = f3 + f3;
    goto L_0887D534;
L_0887D534:;
    f4 = BITSF(LD32(sp));
    f5 = f6;
    fcc = FCMP(f6, f4, 12);
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f6));
    if (cnd_) { goto L_0887D708; }
    goto L_0887D54C;
L_0887D54C:;
    v1 = LD32(s2+28);
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 2) & 0x1;
    if (cnd_) { goto L_0887D564; }
    goto L_0887D55C;
L_0887D55C:;
    cnd_ = v0 == 0;
    if (cnd_) { f4 = f6; goto L_0887D700; }
    goto L_0887D564;
L_0887D564:;
    f0 = BITSF(0);
    fcc = FCMP(f5, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f4 = f0; goto L_0887D700; }
    goto L_0887D578;
L_0887D578:;
    f2 = f4 / f5;
    f6 = f0;
    s7 = D_08AEC0B4 - (-16204);
    f1 = BITSF(F2I(f2, 1));
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 * f5;
    f4 = f4 - f0;
    fcc = FCMP(f4, f6, 12);
    cnd_ = fcc;
    ST32(sp, FBITS(f4));
    if (cnd_) { goto L_0887D5B8; }
    goto L_0887D5A4;
L_0887D5A4:;
    fcc = FCMP(f5, f4, 12);
    cnd_ = fcc;
    f6 = f5;
    if (cnd_) { goto L_0887D5B8; }
    goto L_0887D5B4;
L_0887D5B4:;
    f6 = f4;
    goto L_0887D5B8;
L_0887D5B8:;
    f4 = f6;
    goto L_0887D5BC;
L_0887D5BC:;
    ST32(sp, FBITS(f4));
    goto L_0887D5C0;
L_0887D5C0:;
    ST32(s0+4, FBITS(f4));
    s0 = LD32(s2+28);
    v0 = (s0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = LD32(s2+12); goto L_0887D5E8; }
    goto L_0887D5D4;
L_0887D5D4:;
    fcc = FCMP(f3, f4, 12);
    cnd_ = fcc;
    f0 = BITSF(LD32(sp+8));
    if (cnd_) { goto L_0887D6D0; }
    goto L_0887D5E4;
L_0887D5E4:;
    s3 = LD32(s2+12);
    goto L_0887D5E8;
L_0887D5E8:;
    s1 = s3 - 1;
    cnd_ = s1 == 0;
    f21 = f4 / f3;
    if (cnd_) { goto L_0887D61C; }
    goto L_0887D5F4;
L_0887D5F4:;
    a1 = s1 + 0;
    goto L_0887D5F8;
L_0887D5F8:;
    a0 = s2 + 0;
    f0 = func_0887CC50(a0, a1);
    goto L_0887D600;
L_0887D600:;
    fcc = FCMP(f0, f21, 14);
    cnd_ = fcc;
    v0 = (s0 >> 1) & 0x1;
    if (cnd_) { goto L_0887D620; }
    goto L_0887D610;
L_0887D610:;
    s1 = s1 - 1;
    cnd_ = s1 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0887D5F8; }
    goto L_0887D61C;
L_0887D61C:;
    v0 = (s0 >> 1) & 0x1;
    goto L_0887D620;
L_0887D620:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s4, s1); goto L_0887D6C4; }
    goto L_0887D628;
L_0887D628:;
    v0 = s3 - 1;
    cnd_ = s1 == v0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0887D6C0; }
    goto L_0887D634;
L_0887D634:;
    a1 = s1 + 0;
    s0 = s1 + 1;
    f0 = func_0887CC50(a0, a1);
    goto L_0887D640;
L_0887D640:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    f20 = f0;
    f0 = func_0887CC50(a0, a1);
    goto L_0887D650;
L_0887D650:;
    f0 = f0 - f20;
    f1 = f21 - f20;
    f2 = BITSF(LD32(s7-16204));
    a0 = sp + 20;
    a1 = sp + 24;
    f1 = f1 / f0;
    a2 = sp + 28;
    ST32(sp+28, FBITS(f2));
    ST32(sp+24, 0);
    ST32(sp+20, FBITS(f1));
    f0 = func_0887DD00(a0, a1, a2);
    goto L_0887D67C;
L_0887D67C:;
    ST32(s5, FBITS(f0));
    ST32(s4, s1);
    ST32(s6, s0);
    goto L_0887D688;
L_0887D688:;
    v0 = 1;
    goto L_0887D68C;
L_0887D68C:;
    sp = sp + 96;
    return v0;
L_0887D6C0:;
    ST32(s4, s1);
    goto L_0887D6C4;
L_0887D6C4:;
    ST32(s5, 0);
    ST32(s6, s1);
    goto L_0887D688;
L_0887D6D0:;
    a0 = sp + 0;
    a1 = sp + 12;
    f4 = f0 - f4;
    a2 = sp + 16;
    ST32(sp+12, 0);
    ST32(sp, FBITS(f4));
    f0 = func_0887DD00(a0, a1, a2);
    goto L_0887D6EC;
L_0887D6EC:;
    f4 = f0;
    ST32(sp, FBITS(f0));
    f3 = BITSF(LD32(sp+16));
    s0 = LD32(s2+28);
    goto L_0887D5E4;
L_0887D700:;
    s7 = D_08AEC0B4 - (-16204);
    goto L_0887D5BC;
L_0887D708:;
    f0 = BITSF(0);
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    s7 = D_08AEC0B4 - (-16204);
    if (cnd_) { goto L_0887D5C0; }
    goto L_0887D71C;
L_0887D71C:;
    v1 = LD32(s2+28);
    v0 = v1 & 0x1;
    cnd_ = v0 != 0;
    v0 = (v1 >> 2) & 0x1;
    if (cnd_) { goto L_0887D734; }
    goto L_0887D72C;
L_0887D72C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(sp, FBITS(f0)); goto L_0887D788; }
    goto L_0887D734;
L_0887D734:;
    fcc = FCMP(f6, f0, 2);
    cnd_ = fcc;
    if (cnd_) { f4 = f0; goto L_0887D700; }
    goto L_0887D744;
L_0887D744:;
    f3 = f4 / f6;
    ST32(sp+4, FBITS(f0));
    s7 = D_08AEC0B4 - (-16204);
    a0 = sp + 0;
    f2 = BITSF(LD32(s7-16204));
    a1 = sp + 4;
    a2 = sp + 8;
    f1 = BITSF(F2I(f3, 1));
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 - f2;
    f0 = f0 * f6;
    f4 = f4 - f0;
    ST32(sp, FBITS(f4));
    f0 = func_0887DD00(a0, a1, a2);
    goto L_0887D77C;
L_0887D77C:;
    f4 = f0;
    f3 = BITSF(LD32(sp+16));
    goto L_0887D5BC;
L_0887D788:;
    f4 = f0;
    s7 = D_08AEC0B4 - (-16204);
    goto L_0887D5C0;
L_0887D794:;
    f6 = f3;
    goto L_0887D534;
}

/* 0887D79C */
float func_0887D79C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0887D79C:;
    sp = sp - 160;
    s0 = a1 + 0;
    a1 = sp + 128;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D7C0;
L_0887D7C0:;
    a2 = 128;
    v0 = LD32(sp+128);
    a1 = sp + 0;
    a0 = s0 + 0;
    v0 = v0 < 0x2u;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887D7F4; }
    goto L_0887D7DC;
L_0887D7DC:;
    v0 = v1 + 0;
    sp = sp + 160;
    return f0;
L_0887D7F4:;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0887D7FC;
L_0887D7FC:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887D804;
L_0887D804:;
    a0 = v0 + 0;
    v0 = func_0887DA14(a0);
    goto L_0887D80C;
L_0887D80C:;
    ST32(s1, v0);
    a1 = s1 + 8;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D81C;
L_0887D81C:;
    v0 = LD32(sp+128);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 4;
    if (cnd_) { goto L_0887D834; }
    goto L_0887D82C;
L_0887D82C:;
    v1 = 1;
    goto L_0887D7DC;
L_0887D834:;
    v1 = LD32(s0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D844;
L_0887D844:;
    v1 = 1;
    goto L_0887D7DC;
}

/* 0887D84C */
void func_0887D84C(void)
{
L_0887D84C:;
    return;
}

/* 0887D854 */
void func_0887D854(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887D854:;
    sp = sp - 16;
    func_0887D870(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0887D864;
L_0887D864:;
    sp = sp + 16;
    return;
}

/* 0887D870 */
void func_0887D870(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887D870:;
    sp = sp - 32;
    s2 = D_08B29920 - (-26336);
    v1 = 1;
    v0 = ((u32)(uintptr_t)func_0887DA90) - (-9584);
    s0 = LD32(s2-26336);
    s4 = D_08B29938 - (-26312);
    s1 = s2 - 26336;
    s3 = v0 - 9584;
    ST8(s1+8, v1);
    cnd_ = s0 == 0;
    ST8(s4-26312, v1);
    if (cnd_) { goto L_0887D8DC; }
    goto L_0887D8B4;
L_0887D8B4:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0887DA04; }
    goto L_0887D8C0;
L_0887D8C0:;
    a1 = LD32(s0+12);
    goto L_0887D8C4;
L_0887D8C4:;
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0887D9F4; }
    goto L_0887D8CC;
L_0887D8CC:;
    a0 = LD32(s0);
    goto L_0887D8D0;
L_0887D8D0:;
    t_ = s3;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887D8D8;
L_0887D8D8:;
    s1 = s2 - 26336;
    goto L_0887D8DC;
L_0887D8DC:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { s0 = LD32(s2-26336); goto L_0887D940; }
    goto L_0887D8E8;
L_0887D8E8:;
    v0 = LD32(s1+16);
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0887D92C; }
    goto L_0887D8F4;
L_0887D8F4:;
    v0 = s0 << 2;
    goto L_0887D8F8;
L_0887D8F8:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s1 + 0;
    s0 = s0 + 1;
    v0 = func_08AB0DE4(a0, a1);
    goto L_0887D90C;
L_0887D90C:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887D914;
L_0887D914:;
    v0 = LD32(s1+16);
    v0 = s0 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s1+12);
    if (cnd_) { goto L_0887D92C; }
    goto L_0887D924;
L_0887D924:;
    v0 = s0 << 2;
    goto L_0887D8F8;
L_0887D92C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0887D9E4; }
    goto L_0887D934;
L_0887D934:;
    ST32(s1+16, 0);
    goto L_0887D938;
L_0887D938:;
    ST32(s1+12, 0);
    s0 = LD32(s2-26336);
    goto L_0887D940;
L_0887D940:;
    v0 = s2 - 26336;
    ST8(v0+8, 0);
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0887D970; }
    goto L_0887D950;
L_0887D950:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0887D9D4; }
    goto L_0887D95C;
L_0887D95C:;
    a1 = LD32(s0+12);
    goto L_0887D960;
L_0887D960:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0887D9C4; }
    goto L_0887D968;
L_0887D968:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887D970;
L_0887D970:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0887D9B4; }
    goto L_0887D97C;
L_0887D97C:;
    v0 = s2 - 26336;
    goto L_0887D980;
L_0887D980:;
    ST32(s1+16, 0);
    ST32(s2-26336, 0);
    ST8(s4-26312, 0);
    ST32(s1+12, 0);
    ST32(v0+4, 0);
    sp = sp + 32;
    return;
L_0887D9B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887D9BC;
L_0887D9BC:;
    v0 = s2 - 26336;
    goto L_0887D980;
L_0887D9C4:;
    a0 = s1 + 0;
    func_08AB0F50(a0, a1, t1, t2, t3);
    goto L_0887D9CC;
L_0887D9CC:;
    goto L_0887D968;
L_0887D9D4:;
    a0 = v0 + 0;
    func_08AB0F50(a0, a1, t1, t2, t3);
    goto L_0887D9DC;
L_0887D9DC:;
    a1 = LD32(s0+12);
    goto L_0887D960;
L_0887D9E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887D9EC;
L_0887D9EC:;
    ST32(s1+16, 0);
    goto L_0887D938;
L_0887D9F4:;
    a2 = s3 + 0;
    func_08AB0ECC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0887D9FC;
L_0887D9FC:;
    a0 = LD32(s0);
    goto L_0887D8D0;
L_0887DA04:;
    a2 = s3 + 0;
    func_08AB0ECC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0887DA0C;
L_0887DA0C:;
    a1 = LD32(s0+12);
    goto L_0887D8C4;
}

/* 0887DA14 */
u32 func_0887DA14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DA14:;
    sp = sp - 16;
    t0 = D_08B29920 - (-26336);
    v1 = LD32(t0-26336);
    cnd_ = v1 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_0887DA58; }
    goto L_0887DA2C;
L_0887DA2C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0887DA34;
L_0887DA34:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0887DA68; }
    goto L_0887DA4C;
L_0887DA4C:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0887DA34; }
    goto L_0887DA58;
L_0887DA58:;
    v0 = t0 - 26336;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0887DA80; }
    goto L_0887DA68;
L_0887DA68:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0887DA74; }
    goto L_0887DA70;
L_0887DA70:;
    v0 = LD32(a3);
    goto L_0887DA74;
L_0887DA74:;
    sp = sp + 16;
    return v0;
L_0887DA80:;
    a2 = 1;
    v0 = func_08AB0FC0(a0, a1, a2);
    goto L_0887DA88;
L_0887DA88:;
    a3 = v0 + 0;
    goto L_0887DA68;
}

/* 0887DA90 */
rv_t func_0887DA90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DA90:;
    sp = sp - 16;
    s0 = LD32(a1);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887DAB8; }
    goto L_0887DAA8;
L_0887DAA8:;
    goto L_0887DAAC;
L_0887DAAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887DAB8:;
    func_0887CC08(a0, t1, t2, t3);
    goto L_0887DAC0;
L_0887DAC0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887DAC8;
L_0887DAC8:;
    goto L_0887DAAC;
}

/* 0887DAD0 */
void func_0887DAD0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887DAD0:;
    sp = sp - 32;
    s2 = D_08B29920 - (-26336);
    v1 = s2 - 26336;
    v0 = LD_U8(v1+8);
    ST32(sp, a0);
    cnd_ = v0 != 0;
    s0 = LD32(a0+32);
    if (cnd_) { goto L_0887DB60; }
    goto L_0887DAFC;
L_0887DAFC:;
    v0 = LD32(s2-26336);
    cnd_ = v0 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_0887DB30; }
    goto L_0887DB08;
L_0887DB08:;
    v1 = v0 + 0;
    goto L_0887DB0C;
L_0887DB0C:;
    a0 = v1 + 12;
    s1 = v1 + 8;
    v1 = LD32(v1);
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_0887DB60; }
    goto L_0887DB24;
L_0887DB24:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0887DB0C; }
    goto L_0887DB30;
L_0887DB30:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DB38;
L_0887DB38:;
    ST32(v0, s0);
    a0 = s2 - 26336;
    v1 = LD32(a0+4);
    a1 = LD32(sp);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(a0+4, v1);
    ST32(v0+4, a1);
    ST32(s1, v0);
    goto L_0887DB60;
L_0887DB60:;
    sp = sp + 32;
    return;
}

/* 0887DB78 */
void func_0887DB78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DB78:;
    sp = sp - 16;
    v0 = D_08B29920 - (-26336);
    v1 = D_08B29938 - (-26312);
    s0 = v0 - 26336;
    v0 = LD_U8(v1-26312);
    cnd_ = v0 != 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_0887DBD8; }
    goto L_0887DBA0;
L_0887DBA0:;
    s1 = LD32(a1+32);
    v0 = LD_U8(s0+8);
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0887DC00; }
    goto L_0887DBB4;
L_0887DBB4:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_0887DBEC; }
    goto L_0887DBC0;
L_0887DBC0:;
    v1 = LD32(s0+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    goto L_0887DBD8;
L_0887DBD8:;
    goto L_0887DBDC;
L_0887DBDC:;
    sp = sp + 16;
    return;
L_0887DBEC:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DBF4;
L_0887DBF4:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_0887DBC0;
L_0887DC00:;
    v0 = func_08AB0DE4(a0, a1);
    goto L_0887DC08;
L_0887DC08:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887DBD8; }
    goto L_0887DC10;
L_0887DC10:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887DC18;
L_0887DC18:;
    goto L_0887DBDC;
}

/* 0887DC20 */
u64 func_0887DC20(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DC20:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887DC68; }
    goto L_0887DC48;
L_0887DC48:;
    v1 = D_08B29920 - (-26336);
    v0 = v1 - 26336;
    ST32(v1-26336, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_0887DC68;
L_0887DC68:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887DCC0; }
    goto L_0887DC78;
L_0887DC78:;
    v0 = D_08B29920 - (-26336);
    s0 = LD32(v0-26336);
    cnd_ = s0 == 0;
    s1 = v0 - 26336;
    if (cnd_) { goto L_0887DCA8; }
    goto L_0887DC88;
L_0887DC88:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0887DCF0; }
    goto L_0887DC94;
L_0887DC94:;
    a1 = LD32(s0+12);
    goto L_0887DC98;
L_0887DC98:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0887DCE0; }
    goto L_0887DCA0;
L_0887DCA0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887DCA8;
L_0887DCA8:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0887DCD0; }
    goto L_0887DCB4;
L_0887DCB4:;
    ST32(s1+16, 0);
    goto L_0887DCB8;
L_0887DCB8:;
    ST32(s1+12, 0);
    goto L_0887DCC0;
L_0887DCC0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0887DCD0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887DCD8;
L_0887DCD8:;
    ST32(s1+16, 0);
    goto L_0887DCB8;
L_0887DCE0:;
    a0 = s1 + 0;
    func_08AB0F50(a0, a1, t1, t2, t3);
    goto L_0887DCE8;
L_0887DCE8:;
    goto L_0887DCA0;
L_0887DCF0:;
    a0 = s1 + 0;
    func_08AB0F50(a0, a1, t1, t2, t3);
    goto L_0887DCF8;
L_0887DCF8:;
    a1 = LD32(s0+12);
    goto L_0887DC98;
}

/* 0887DD00 */
float func_0887DD00(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0887DD00:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0887DD2C; }
    goto L_0887DD18;
L_0887DD18:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0887DD2C; }
    goto L_0887DD2C;
L_0887DD2C:;
    return f0;
}

/* 0887DD34 */
rv_t func_0887DD34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DD34:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0887DC20(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887DD48;
L_0887DD48:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887DD54 */
rv_t func_0887DD54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DD54:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0887DC20(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887DD68;
L_0887DD68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887DD74 */
void func_0887DD74(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DD74:;
    sp = sp - 16;
    func_0887DEA4();
    goto L_0887DD84;
L_0887DD84:;
    sp = sp + 16;
    return;
}

/* 0887DD90 */
void func_0887DD90(void)
{
L_0887DD90:;
    return;
}

/* 0887DD98 */
rv_t func_0887DD98(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887DD98:;
    v0 = D_08B2993C - (-26308);
    v1 = a0 << 2;
    sp = sp - 32;
    v0 = v0 - 26308;
    a0 = (s32)a0 < 5;
    cnd_ = a0 == 0;
    v0 = v1 + v0;
    if (cnd_) { goto L_0887DDCC; }
    goto L_0887DDB8;
L_0887DDB8:;
    v0 = LD32(v0);
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0887DDD8; }
    goto L_0887DDCC;
L_0887DDCC:;
    goto L_0887DDD0;
L_0887DDD0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0887DDD8:;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887DDE0;
L_0887DDE0:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = sp + 0;
    if (cnd_) { goto L_0887DDCC; }
    goto L_0887DDF0;
L_0887DDF0:;
    v0 = D_08B159FC - (23036);
    a3 = LD32(v0+23036);
    v1 = D_08AEC0B8 - (-16200);
    f12 = BITSF(LD32(v1-16200));
    f0 = BITSF(LD32(a3+8));
    f1 = BITSF(LD32(a3));
    f2 = BITSF(LD32(a3+4));
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DE1C;
L_0887DE1C:;
    goto L_0887DDD0;
}

/* 0887DE24 */
void func_0887DE24(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887DE24:;
    sp = sp - 32;
    a1 = sp + 0;
    s2 = a0 + 0;
    s0 = 0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DE4C;
L_0887DE4C:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    v0 = D_08B2993C - (-26308);
    if (cnd_) { goto L_0887DE8C; }
    goto L_0887DE58;
L_0887DE58:;
    s1 = v0 - 26308;
    goto L_0887DE5C;
L_0887DE5C:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DE68;
L_0887DE68:;
    v0 = LD32(sp);
    v1 = s0 < 0x5u;
    s0 = s0 + 1;
    cnd_ = v1 == 0;
    a0 = s0 < v0;
    if (cnd_) { goto L_0887DE84; }
    goto L_0887DE7C;
L_0887DE7C:;
    v0 = LD32(sp+4);
    ST32(s1, v0);
    goto L_0887DE84;
L_0887DE84:;
    cnd_ = a0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0887DE5C; }
    goto L_0887DE8C;
L_0887DE8C:;
    sp = sp + 32;
    return;
}

/* 0887DEA4 */
void func_0887DEA4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_0887DEA4:;
    v0 = D_08B2993C - (-26308);
    a0 = v0 - 26308;
    v1 = 0 + 0;
    goto L_0887DEB0;
L_0887DEB0:;
    v1 = v1 + 1;
    v0 = v1 < 0x5u;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0887DEB0; }
    goto L_0887DEC4;
L_0887DEC4:;
    v0 = D_08B29950 - (-26288);
    ST8(v0-26288, 0);
    return;
}

/* 0887DED0 */
rv_t func_0887DED0(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[544] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 544);
L_0887DED0:;
    sp = sp - 544;
    v1 = a1 + 0;
    s1 = sp + 16;
    a1 = D_08AD4C0C - (19468);
    t0 = a0 + 0;
    s0 = a2 + 0;
    a3 = 1;
    v0 = LD32(a0+4);
    ST8(sp, 0);
    a0 = s1 + 0;
    a1 = a1 + 19468;
    cnd_ = v0 == 0;
    a2 = 256;
    if (cnd_) { goto L_0887DF38; }
    goto L_0887DF10;
L_0887DF10:;
    cnd_ = v1 == 0;
    t1 = v1 + 0;
    if (cnd_) { goto L_0887DF58; }
    goto L_0887DF18;
L_0887DF18:;
    cnd_ = t1 == 0;
    v0 = D_08AD4C18 - (19480);
    if (cnd_) { goto L_0887DF50; }
    goto L_0887DF20;
L_0887DF20:;
    t0 = LD32(t0);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DF28;
L_0887DF28:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_088983FC(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DF38;
L_0887DF38:;
    v0 = LD_U8(sp);
    sp = sp + 544;
    return (rv_t){ v0, v1, f0 };
L_0887DF50:;
    t1 = v0 + 19480;
    goto L_0887DF20;
L_0887DF58:;
    t1 = LD32(t0+12);
    goto L_0887DF18;
}

/* 0887DF60 */
rv_t func_0887DF60(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887DF60:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887DF84;
L_0887DF84:;
    a0 = s0 + 0;
    v0 = LD32(sp);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887DFB0; }
    goto L_0887DF98;
L_0887DF98:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0887DFB0:;
    f0 = func_0882DE98(a0, a1);
    goto L_0887DFB8;
L_0887DFB8:;
    a1 = s1 + 12;
    a0 = s0 + 0;
    f0 = func_0882DE98(a0, a1);
    goto L_0887DFC4;
L_0887DFC4:;
    v1 = 1;
    goto L_0887DF98;
}

/* 0887DFCC */
u64 func_0887DFCC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887DFCC:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    s1 = LD32(a1);
    if (cnd_) { goto L_0887E008; }
    goto L_0887DFF4;
L_0887DFF4:;
    cnd_ = s1 == a0;
    if (cnd_) { a0 = LD32(s0+12); goto L_0887E044; }
    goto L_0887DFFC;
L_0887DFFC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E004;
L_0887E004:;
    ST32(s0, 0);
    goto L_0887E008;
L_0887E008:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0887E0E4; }
    goto L_0887E014;
L_0887E014:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E01C;
L_0887E01C:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E030;
L_0887E030:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0887E0D0; }
    goto L_0887E038;
L_0887E038:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0887E040;
L_0887E040:;
    a0 = LD32(s0+12);
    goto L_0887E044;
L_0887E044:;
    s2 = LD32(s2+12);
    cnd_ = a0 == 0;
    s1 = s0 + 12;
    if (cnd_) { goto L_0887E064; }
    goto L_0887E050;
L_0887E050:;
    cnd_ = s2 == a0;
    if (cnd_) { goto L_0887E0A0; }
    goto L_0887E058;
L_0887E058:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E060;
L_0887E060:;
    ST32(s0+12, 0);
    goto L_0887E064;
L_0887E064:;
    ST32(s1+8, 0);
    cnd_ = s2 == 0;
    ST32(s1+4, 0);
    if (cnd_) { goto L_0887E0C8; }
    goto L_0887E070;
L_0887E070:;
    a0 = s2 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E078;
L_0887E078:;
    v1 = v0 + 1;
    ST32(s1+4, v0);
    a0 = v1 + 0;
    ST32(s1+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E08C;
L_0887E08C:;
    cnd_ = v0 != 0;
    ST32(s0+12, v0);
    if (cnd_) { goto L_0887E0B4; }
    goto L_0887E094;
L_0887E094:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_0887E09C;
L_0887E09C:;
    goto L_0887E0A0;
L_0887E0A0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0887E0B4:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E0C0;
L_0887E0C0:;
    goto L_0887E0A0;
L_0887E0C8:;
    ST32(s0+12, 0);
    goto L_0887E09C;
L_0887E0D0:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E0DC;
L_0887E0DC:;
    a0 = LD32(s0+12);
    goto L_0887E044;
L_0887E0E4:;
    ST32(s0, 0);
    goto L_0887E040;
}

/* 0887E0EC */
void func_0887E0EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E0EC:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0887E114; }
    goto L_0887E104;
L_0887E104:;
    sp = sp + 16;
    return;
L_0887E114:;
    a0 = LD32(a0);
    v0 = func_0889939C(a0, t1, t2, t3);
    goto L_0887E11C;
L_0887E11C:;
    ST8(s0, v0);
    goto L_0887E104;
}

/* 0887E124 */
void func_0887E124(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E124:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0887E14C; }
    goto L_0887E13C;
L_0887E13C:;
    sp = sp + 16;
    return;
L_0887E14C:;
    a0 = LD32(a0);
    f0 = func_08899464(a0, t1, t2, t3);
    goto L_0887E154;
L_0887E154:;
    ST32(s0, FBITS(f0));
    goto L_0887E13C;
}

/* 0887E15C */
u64 func_0887E15C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E15C:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_0887E184; }
    goto L_0887E174;
L_0887E174:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0887E184:;
    a0 = LD32(a0);
    { u64 r_ = func_088993DC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E18C;
L_0887E18C:;
    ST32(s0, v0);
    goto L_0887E174;
}

/* 0887E194 */
void func_0887E194(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E194:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_0887E1C8; }
    goto L_0887E1B4;
L_0887E1B4:;
    goto L_0887E1B8;
L_0887E1B8:;
    sp = sp + 16;
    return;
L_0887E1C8:;
    a0 = LD32(a0);
    v0 = func_088994A4(a0, t1, t2, t3);
    goto L_0887E1D0;
L_0887E1D0:;
    a1 = D_08AD4C1C - (19484);
    a2 = s0 + 1;
    a0 = s1 + 0;
    a1 = a1 + 19484;
    t0 = v0 + 0;
    cnd_ = v0 == 0;
    a3 = 1;
    if (cnd_) { goto L_0887E1FC; }
    goto L_0887E1EC;
L_0887E1EC:;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E1F4;
L_0887E1F4:;
    goto L_0887E1B8;
L_0887E1FC:;
    cnd_ = s0 != 0;
    if (cnd_) { ST16(s1, 0); goto L_0887E1B4; }
    goto L_0887E204;
L_0887E204:;
    goto L_0887E1B8;
}

/* 0887E20C */
rv_t func_0887E20C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E20C:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_0887E22C; }
    goto L_0887E220;
L_0887E220:;
    goto L_0887E224;
L_0887E224:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887E22C:;
    a0 = LD32(a0);
    { rv_t r_ = func_088994E0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E234;
L_0887E234:;
    goto L_0887E224;
}

/* 0887E23C */
rv_t func_0887E23C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E23C:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887E25C; }
    goto L_0887E250;
L_0887E250:;
    goto L_0887E254;
L_0887E254:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887E25C:;
    a0 = LD32(a0);
    { rv_t r_ = func_08899588(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E264;
L_0887E264:;
    goto L_0887E254;
}

/* 0887E26C */
rv_t func_0887E26C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E26C:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887E28C; }
    goto L_0887E280;
L_0887E280:;
    goto L_0887E284;
L_0887E284:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887E28C:;
    a0 = LD32(a0);
    { rv_t r_ = func_08899534(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E294;
L_0887E294:;
    goto L_0887E284;
}

/* 0887E29C */
rv_t func_0887E29C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E29C:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887E2BC; }
    goto L_0887E2B0;
L_0887E2B0:;
    goto L_0887E2B4;
L_0887E2B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887E2BC:;
    a0 = LD32(a0);
    { rv_t r_ = func_088995E4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E2C4;
L_0887E2C4:;
    goto L_0887E2B4;
}

/* 0887E2CC */
u32 func_0887E2CC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E2CC:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0887E2F0; }
    goto L_0887E2E0;
L_0887E2E0:;
    v0 = 0 + 0;
    goto L_0887E2E4;
L_0887E2E4:;
    sp = sp + 16;
    return v0;
L_0887E2F0:;
    a0 = LD32(a0);
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E2F8;
L_0887E2F8:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887E2E0; }
    goto L_0887E300;
L_0887E300:;
    v1 = LD32(v0+16);
    v0 = 3;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = 0 + 0; goto L_0887E2E4; }
    goto L_0887E310;
L_0887E310:;
    v0 = LD32(a0+32);
    goto L_0887E2E4;
}

/* 0887E318 */
rv_t func_0887E318(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887E318:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E33C;
L_0887E33C:;
    a0 = s0 + 0;
    v0 = LD32(sp);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887E368; }
    goto L_0887E350;
L_0887E350:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0887E368:;
    f0 = func_0882DE98(a0, a1);
    goto L_0887E370;
L_0887E370:;
    v1 = 1;
    goto L_0887E350;
}

/* 0887E378 */
u32 func_0887E378(u32 a0)
{
    u32 v0 = 0;
    int cnd_;
L_0887E378:;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0887E38C; }
    goto L_0887E384;
L_0887E384:;
    v0 = (u32)(s32)LD_S8(a0);
    v0 = v0 < 0x1u;
    goto L_0887E38C;
L_0887E38C:;
    return v0;
}

/* 0887E394 */
rv_t func_0887E394(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887E394:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    cnd_ = v0 == 0;
    s1 = LD32(a1);
    if (cnd_) { goto L_0887E3C8; }
    goto L_0887E3B4;
L_0887E3B4:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887E40C; }
    goto L_0887E3BC;
L_0887E3BC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E3C4;
L_0887E3C4:;
    ST32(s0, 0);
    goto L_0887E3C8;
L_0887E3C8:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0887E430; }
    goto L_0887E3D8;
L_0887E3D8:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E3E0;
L_0887E3E0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E3F4;
L_0887E3F4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0887E420; }
    goto L_0887E404;
L_0887E404:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0887E40C;
L_0887E40C:;
    goto L_0887E410;
L_0887E410:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887E420:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E428;
L_0887E428:;
    goto L_0887E410;
L_0887E430:;
    ST32(s0, 0);
    goto L_0887E40C;
}

/* 0887E438 */
void func_0887E438(u32 a0)
{
    u32 v0 = 0;
L_0887E438:;
    v0 = a0 + 12;
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(a0+24, 0);
    ST32(v0+8, 0);
    ST32(a0, 0);
    ST32(a0+12, 0);
    ST32(v0+4, 0);
    return;
}

/* 0887E45C */
rv_t func_0887E45C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887E45C:;
    sp = sp - 48;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0887E480; }
    goto L_0887E478;
L_0887E478:;
    v0 = (u32)(s32)LD_S8(a0);
    v0 = v0 < 0x1u;
    goto L_0887E480;
L_0887E480:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0887E4A0; }
    goto L_0887E48C;
L_0887E48C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0887E4A0:;
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E4A8;
L_0887E4A8:;
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0887E48C; }
    goto L_0887E4B0;
L_0887E4B0:;
    v1 = LD32(v0+16);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0887E54C; }
    goto L_0887E4C0;
L_0887E4C0:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0887E50C; }
    goto L_0887E4C8;
L_0887E4C8:;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = s0 + 0; goto L_0887E4D8; }
    goto L_0887E4D0;
L_0887E4D0:;
    v1 = 1;
    goto L_0887E48C;
L_0887E4D8:;
    a1 = sp + 12;
    func_0887E124(a0, a1, 0, 0, 0);
    goto L_0887E4E0;
L_0887E4E0:;
    a0 = LD32(s0+12);
    a1 = sp + 16;
    { rv_t r_ = func_088375C0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E4EC;
L_0887E4EC:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0887E48C; }
    goto L_0887E4F4;
L_0887E4F4:;
    f12 = BITSF(LD32(sp+12));
    f13 = BITSF(LD32(sp+16));
    a0 = s0 + 0;
    v0 = func_08AB110C(a0, f12, f13);
    goto L_0887E504;
L_0887E504:;
    v1 = v0 + 0;
    goto L_0887E48C;
L_0887E50C:;
    cnd_ = v1 != 0;
    v1 = 1;
    if (cnd_) { goto L_0887E48C; }
    goto L_0887E514;
L_0887E514:;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_0887E0EC(a0, a1, 0, 0, 0);
    goto L_0887E520;
L_0887E520:;
    a0 = LD32(s0+12);
    a1 = sp + 1;
    { u64 r_ = func_08837958(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E52C;
L_0887E52C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0887E48C; }
    goto L_0887E534;
L_0887E534:;
    a1 = LD_U8(sp);
    a2 = LD_U8(sp+1);
    a0 = s0 + 0;
    v0 = func_08AB1038(a0, a1, a2);
    goto L_0887E544;
L_0887E544:;
    v1 = v0 + 0;
    goto L_0887E48C;
L_0887E54C:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { u64 r_ = func_0887E15C(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E558;
L_0887E558:;
    a0 = LD32(s0+12);
    a1 = sp + 8;
    a2 = 0 + 0;
    { u64 r_ = func_08837750(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E568;
L_0887E568:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 1; goto L_0887E48C; }
    goto L_0887E570;
L_0887E570:;
    a1 = LD32(sp+4);
    a2 = LD32(sp+8);
    a0 = s0 + 0;
    v0 = func_08AB10A4(a0, a1, a2);
    goto L_0887E580;
L_0887E580:;
    v1 = v0 + 0;
    goto L_0887E48C;
}

/* 0887E588 */
rv_t func_0887E588(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887E588:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E5AC;
L_0887E5AC:;
    a0 = s1 + 0;
    v0 = LD32(sp);
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887E5D8; }
    goto L_0887E5C0;
L_0887E5C0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0887E5D8:;
    { rv_t r_ = func_0887E318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E5E0;
L_0887E5E0:;
    a1 = s1 + 12;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887E5C0; }
    goto L_0887E5F0;
L_0887E5F0:;
    f0 = func_0882DE98(a0, a1);
    goto L_0887E5F8;
L_0887E5F8:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E604;
L_0887E604:;
    v0 = LD32(sp+4);
    v1 = 1;
    ST32(s1+24, v0);
    goto L_0887E5C0;
}

/* 0887E614 */
void func_0887E614(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887E614:;
    sp = sp - 32;
    s2 = a0 + 0;
    s3 = a1 + 0;
    s0 = s2 + 12;
    { rv_t r_ = func_0887E394(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E63C;
L_0887E63C:;
    v0 = LD32(s2+12);
    cnd_ = v0 == 0;
    s1 = LD32(s3+12);
    if (cnd_) { goto L_0887E65C; }
    goto L_0887E648;
L_0887E648:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887E6A0; }
    goto L_0887E650;
L_0887E650:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E658;
L_0887E658:;
    ST32(s2+12, 0);
    goto L_0887E65C;
L_0887E65C:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0887E6D4; }
    goto L_0887E66C;
L_0887E66C:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E674;
L_0887E674:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E688;
L_0887E688:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+12, v0);
    if (cnd_) { goto L_0887E6C4; }
    goto L_0887E698;
L_0887E698:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0887E6A0;
L_0887E6A0:;
    v0 = LD32(s3+24);
    goto L_0887E6A4;
L_0887E6A4:;
    ST32(s2+24, v0);
    sp = sp + 32;
    return;
L_0887E6C4:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E6CC;
L_0887E6CC:;
    v0 = LD32(s3+24);
    goto L_0887E6A4;
L_0887E6D4:;
    ST32(s2+12, 0);
    goto L_0887E6A0;
}

/* 0887E6DC */
void func_0887E6DC(u32 a0)
{
L_0887E6DC:;
    ST8(a0+12, 0);
    ST32(a0+8, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 0887E6F0 */
u64 func_0887E6F0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887E6F0:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0887E798; }
    goto L_0887E718;
L_0887E718:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s1 = a0 + v0;
    goto L_0887E72C;
L_0887E72C:;
    cnd_ = a0 == s1;
    s0 = s1 - 28;
    if (cnd_) { goto L_0887E78C; }
    goto L_0887E734;
L_0887E734:;
    v0 = LD32(s0+12);
    s2 = s0 + 12;
    s1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887E77C; }
    goto L_0887E748;
L_0887E748:;
    v0 = LD32(s0);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_0887E76C; }
    goto L_0887E75C;
L_0887E75C:;
    a0 = LD32(s3+4);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0887E72C;
L_0887E76C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E774;
L_0887E774:;
    ST32(s0, 0);
    goto L_0887E75C;
L_0887E77C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E784;
L_0887E784:;
    ST32(s0+12, 0);
    goto L_0887E748;
L_0887E78C:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E794;
L_0887E794:;
    goto L_0887E798;
L_0887E798:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887E7B0 */
rv_t func_0887E7B0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887E7B0:;
    sp = sp - 32;
    v1 = 0 + 0;
    v0 = LD_U8(a0+12);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0887E810; }
    goto L_0887E7E0;
L_0887E7E0:;
    s2 = LD32(a0);
    cnd_ = s2 == 0;
    v1 = 1;
    if (cnd_) { goto L_0887E810; }
    goto L_0887E7EC;
L_0887E7EC:;
    v1 = LD32(a0+8);
    s5 = 1;
    cnd_ = v1 == s5;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_0887E8D8; }
    goto L_0887E7FC;
L_0887E7FC:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0887E88C; }
    goto L_0887E804;
L_0887E804:;
    cnd_ = v1 == v0;
    if (cnd_) { s5 = 0 + 0; goto L_0887E838; }
    goto L_0887E80C;
L_0887E80C:;
    v1 = s5 + 0;
    goto L_0887E810;
L_0887E810:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0887E838:;
    cnd_ = s2 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0887E80C; }
    goto L_0887E840;
L_0887E840:;
    s3 = 0 + 0;
    goto L_0887E844;
L_0887E844:;
    s0 = LD32(s1+4);
    s0 = s0 + s3;
    a0 = s0 + 0;
    v0 = func_0887E378(a0);
    goto L_0887E854;
L_0887E854:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887E874; }
    goto L_0887E85C;
L_0887E85C:;
    s4 = s4 + 1;
    v0 = s4 < s2;
    cnd_ = v0 != 0;
    s3 = s3 + 28;
    if (cnd_) { goto L_0887E844; }
    goto L_0887E86C;
L_0887E86C:;
    v1 = s5 + 0;
    goto L_0887E810;
L_0887E874:;
    { rv_t r_ = func_0887E45C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E87C;
L_0887E87C:;
    cnd_ = v0 == 0;
    s2 = LD32(s1);
    if (cnd_) { goto L_0887E85C; }
    goto L_0887E884;
L_0887E884:;
    s5 = s5 ^ 0x1;
    goto L_0887E85C;
L_0887E88C:;
    cnd_ = v1 != 0;
    v1 = s5 + 0;
    if (cnd_) { goto L_0887E810; }
    goto L_0887E894;
L_0887E894:;
    cnd_ = s2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0887E810; }
    goto L_0887E89C;
L_0887E89C:;
    s0 = 0 + 0;
    a0 = LD32(s1+4);
    goto L_0887E8A4;
L_0887E8A4:;
    s3 = s3 + 1;
    a0 = a0 + s0;
    { rv_t r_ = func_0887E45C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E8B0;
L_0887E8B0:;
    cnd_ = v0 == 0;
    s0 = s0 + 28;
    if (cnd_) { goto L_0887E8D0; }
    goto L_0887E8B8;
L_0887E8B8:;
    v0 = LD32(s1);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0887E8A4; }
    goto L_0887E8C8;
L_0887E8C8:;
    v1 = s5 + 0;
    goto L_0887E810;
L_0887E8D0:;
    s5 = 0 + 0;
    goto L_0887E80C;
L_0887E8D8:;
    s5 = 0 + 0;
    cnd_ = s2 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0887E80C; }
    goto L_0887E8E4;
L_0887E8E4:;
    s0 = 0 + 0;
    a0 = LD32(s1+4);
    goto L_0887E8EC;
L_0887E8EC:;
    s3 = s3 + 1;
    a0 = a0 + s0;
    { rv_t r_ = func_0887E45C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887E8F8;
L_0887E8F8:;
    cnd_ = v0 != 0;
    s0 = s0 + 28;
    if (cnd_) { goto L_0887E918; }
    goto L_0887E900;
L_0887E900:;
    v0 = LD32(s1);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0887E8EC; }
    goto L_0887E910;
L_0887E910:;
    v1 = s5 + 0;
    goto L_0887E810;
L_0887E918:;
    s5 = 1;
    goto L_0887E80C;
}

/* 0887E920 */
void func_0887E920(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887E920:;
    sp = sp - 32;
    s4 = a1 + 0;
    s3 = a0 + 0;
    v0 = LD32(a1+8);
    v1 = LD32(a1);
    a0 = LD32(a0+4);
    ST32(s3+8, v0);
    cnd_ = a0 == 0;
    ST32(s3, v1);
    if (cnd_) { goto L_0887E9DC; }
    goto L_0887E960;
L_0887E960:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s1 = a0 + v0;
    goto L_0887E974;
L_0887E974:;
    cnd_ = a0 == s1;
    s0 = s1 - 28;
    if (cnd_) { goto L_0887E9D4; }
    goto L_0887E97C;
L_0887E97C:;
    v0 = LD32(s0+12);
    s2 = s0 + 12;
    s1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887E9C4; }
    goto L_0887E990;
L_0887E990:;
    v0 = LD32(s0);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_0887E9B4; }
    goto L_0887E9A4;
L_0887E9A4:;
    a0 = LD32(s3+4);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0887E974;
L_0887E9B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E9BC;
L_0887E9BC:;
    ST32(s0, 0);
    goto L_0887E9A4;
L_0887E9C4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E9CC;
L_0887E9CC:;
    ST32(s0+12, 0);
    goto L_0887E990;
L_0887E9D4:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887E9DC;
L_0887E9DC:;
    s2 = LD32(s3);
    cnd_ = s2 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0887EA44; }
    goto L_0887E9E8;
L_0887E9E8:;
    ST32(s3+4, v0);
    cnd_ = s2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887EA20; }
    goto L_0887E9F4;
L_0887E9F4:;
    s0 = 0 + 0;
    goto L_0887E9F8;
L_0887E9F8:;
    a0 = LD32(s3+4);
    a1 = LD32(s4+4);
    s1 = s1 + 1;
    a0 = a0 + s0;
    a1 = a1 + s0;
    func_0887E614(a0, a1, t1, t2, t3);
    goto L_0887EA10;
L_0887EA10:;
    v0 = LD32(s3);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 28;
    if (cnd_) { goto L_0887E9F8; }
    goto L_0887EA20;
L_0887EA20:;
    sp = sp + 32;
    return;
L_0887EA44:;
    a0 = s2 << 3;
    a0 = a0 - s2;
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EA58;
L_0887EA58:;
    s5 = v0 + 4;
    ST32(s5-4, s2);
    s1 = s5 + 0;
    cnd_ = s2 == 0;
    s0 = s2 - 1;
    if (cnd_) { goto L_0887EA84; }
    goto L_0887EA6C;
L_0887EA6C:;
    s2 = (u32)-1;
    goto L_0887EA70;
L_0887EA70:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_0887E438(a0);
    goto L_0887EA7C;
L_0887EA7C:;
    cnd_ = s0 != s2;
    s1 = s1 + 28;
    if (cnd_) { goto L_0887EA70; }
    goto L_0887EA84;
L_0887EA84:;
    s2 = LD32(s3);
    v0 = s5 + 0;
    goto L_0887E9E8;
}

/* 0887EA90 */
rv_t func_0887EA90(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887EA90:;
    sp = sp - 48;
    s4 = a1 + 0;
    a1 = sp + 0;
    s2 = a0 + 0;
    a0 = s4 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EAC4;
L_0887EAC4:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887EAF8; }
    goto L_0887EAD0;
L_0887EAD0:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0887EAF8:;
    a0 = s4 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EB04;
L_0887EB04:;
    v0 = LD32(sp+4);
    a0 = s4 + 0;
    a1 = s2 + 0;
    ST32(s2+8, v0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EB18;
L_0887EB18:;
    s3 = LD32(s2);
    cnd_ = s3 != 0;
    a0 = s3 << 3;
    if (cnd_) { goto L_0887EB68; }
    goto L_0887EB24;
L_0887EB24:;
    cnd_ = s3 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887EB60; }
    goto L_0887EB2C;
L_0887EB2C:;
    s0 = 0 + 0;
    a0 = LD32(s2+4);
    goto L_0887EB34;
L_0887EB34:;
    a1 = s4 + 0;
    s1 = s1 + 1;
    a0 = a0 + s0;
    { rv_t r_ = func_0887E588(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EB44;
L_0887EB44:;
    s0 = s0 + 28;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887EAD0; }
    goto L_0887EB50;
L_0887EB50:;
    v0 = LD32(s2);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_0887EB34; }
    goto L_0887EB60;
L_0887EB60:;
    v1 = 1;
    goto L_0887EAD0;
L_0887EB68:;
    a0 = a0 - s3;
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EB78;
L_0887EB78:;
    s5 = v0 + 4;
    ST32(s5-4, s3);
    s1 = s5 + 0;
    cnd_ = s3 == 0;
    s0 = s3 - 1;
    if (cnd_) { goto L_0887EBA4; }
    goto L_0887EB8C;
L_0887EB8C:;
    s3 = (u32)-1;
    goto L_0887EB90;
L_0887EB90:;
    a0 = s1 + 0;
    s0 = s0 - 1;
    func_0887E438(a0);
    goto L_0887EB9C;
L_0887EB9C:;
    cnd_ = s0 != s3;
    s1 = s1 + 28;
    if (cnd_) { goto L_0887EB90; }
    goto L_0887EBA4;
L_0887EBA4:;
    ST32(s2+4, s5);
    s3 = LD32(s2);
    goto L_0887EB24;
}

/* 0887EBB0 */
void func_0887EBB0(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887EBB0:;
    sp = sp - 16;
    func_0887F18C(a0);
    goto L_0887EBC0;
L_0887EBC0:;
    sp = sp + 16;
    return;
}

/* 0887EBCC */
void func_0887EBCC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887EBCC:;
    sp = sp - 16;
    func_0887ED34(a0, t1, t2, t3);
    goto L_0887EBDC;
L_0887EBDC:;
    sp = sp + 16;
    return;
}

/* 0887EBE8 */
float func_0887EBE8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887EBE8:;
    sp = sp - 32;
    s4 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    s3 = a1 + 0;
    if (cnd_) { goto L_0887EC94; }
    goto L_0887EC14;
L_0887EC14:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0887EC28;
L_0887EC28:;
    cnd_ = a0 == s0;
    s0 = s0 - 28;
    if (cnd_) { goto L_0887EC88; }
    goto L_0887EC30;
L_0887EC30:;
    v0 = LD32(s0+16);
    s2 = s0 + 4;
    s1 = s0 + 16;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887EC78; }
    goto L_0887EC44;
L_0887EC44:;
    v0 = LD32(s0+4);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_0887EC68; }
    goto L_0887EC58;
L_0887EC58:;
    a0 = LD32(s4);
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    goto L_0887EC28;
L_0887EC68:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887EC70;
L_0887EC70:;
    ST32(s0+4, 0);
    goto L_0887EC58;
L_0887EC78:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887EC80;
L_0887EC80:;
    ST32(s0+16, 0);
    goto L_0887EC44;
L_0887EC88:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887EC90;
L_0887EC90:;
    ST32(s4, 0);
    goto L_0887EC94;
L_0887EC94:;
    a0 = s3 << 3;
    a0 = a0 - s3;
    a0 = a0 << 2;
    a0 = a0 + 4;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887ECA8;
L_0887ECA8:;
    a2 = v0 + 4;
    ST32(a2-4, s3);
    a0 = a2 + 0;
    cnd_ = s3 == 0;
    a1 = s3 - 1;
    if (cnd_) { goto L_0887ECEC; }
    goto L_0887ECBC;
L_0887ECBC:;
    a3 = (u32)-1;
    goto L_0887ECC0;
L_0887ECC0:;
    v0 = a0 + 4;
    v1 = a0 + 16;
    a1 = a1 - 1;
    ST32(v0+8, 0);
    ST32(a0+4, 0);
    ST32(v0+4, 0);
    ST32(a0+16, 0);
    a0 = a0 + 28;
    ST32(v1+8, 0);
    cnd_ = a1 != a3;
    ST32(v1+4, 0);
    if (cnd_) { goto L_0887ECC0; }
    goto L_0887ECEC;
L_0887ECEC:;
    ST32(s4, a2);
    cnd_ = s3 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0887ED14; }
    goto L_0887ECF8;
L_0887ECF8:;
    v1 = a2 + 0;
    a1 = 16;
    goto L_0887ED00;
L_0887ED00:;
    a0 = a0 + 1;
    v0 = a0 < s3;
    ST32(v1, a1);
    cnd_ = v0 != 0;
    v1 = v1 + 28;
    if (cnd_) { goto L_0887ED00; }
    goto L_0887ED14;
L_0887ED14:;
    sp = sp + 32;
    return f0;
}

/* 0887ED34 */
void func_0887ED34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887ED34:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s3+4, 0); goto L_0887EDE0; }
    goto L_0887ED5C;
L_0887ED5C:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s0 = a0 + v0;
    goto L_0887ED70;
L_0887ED70:;
    cnd_ = a0 == s0;
    s0 = s0 - 28;
    if (cnd_) { goto L_0887EDD0; }
    goto L_0887ED78;
L_0887ED78:;
    v0 = LD32(s0+16);
    s2 = s0 + 4;
    s1 = s0 + 16;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887EDC0; }
    goto L_0887ED8C;
L_0887ED8C:;
    v0 = LD32(s0+4);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_0887EDB0; }
    goto L_0887EDA0;
L_0887EDA0:;
    a0 = LD32(s3);
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    goto L_0887ED70;
L_0887EDB0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887EDB8;
L_0887EDB8:;
    ST32(s0+4, 0);
    goto L_0887EDA0;
L_0887EDC0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887EDC8;
L_0887EDC8:;
    ST32(s0+16, 0);
    goto L_0887ED8C;
L_0887EDD0:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887EDD8;
L_0887EDD8:;
    ST32(s3, 0);
    ST32(s3+4, 0);
    goto L_0887EDE0;
L_0887EDE0:;
    sp = sp + 32;
    return;
}

/* 0887EDFC */
rv_t func_0887EDFC(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887EDFC:;
    sp = sp - 32;
    s6 = 0 + 0;
    s5 = 0 + 0;
    s4 = a2 & 0xff;
    s3 = a1 + 0;
    s2 = a0 + 0;
    a3 = LD32(a0+4);
    cnd_ = a3 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887EE68; }
    goto L_0887EE40;
L_0887EE40:;
    s0 = 0 + 0;
    goto L_0887EE44;
L_0887EE44:;
    v0 = LD32(s2);
    v0 = s0 + v0;
    v1 = LD32(v0);
    cnd_ = v1 == s3;
    a0 = v0 + 4;
    if (cnd_) { goto L_0887EEB4; }
    goto L_0887EE58;
L_0887EE58:;
    s1 = s1 + 1;
    v0 = s1 < a3;
    cnd_ = v0 != 0;
    s0 = s0 + 28;
    if (cnd_) { goto L_0887EE44; }
    goto L_0887EE68;
L_0887EE68:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_0887EE80; }
    goto L_0887EE70;
L_0887EE70:;
    cnd_ = s5 != 0;
    a0 = 1;
    if (cnd_) { goto L_0887EEA4; }
    goto L_0887EE78;
L_0887EE78:;
    cnd_ = s6 != 0;
    if (cnd_) { a0 = 4; goto L_0887EEA4; }
    goto L_0887EE80;
L_0887EE80:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0887EEA4:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EEAC;
L_0887EEAC:;
    goto L_0887EE80;
L_0887EEB4:;
    v0 = LD32(a0+4);
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0887EE58; }
    goto L_0887EEC4;
L_0887EEC4:;
    { rv_t r_ = func_0887DED0(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EECC;
L_0887EECC:;
    cnd_ = v0 == 0;
    a3 = LD32(s2+4);
    if (cnd_) { goto L_0887EEDC; }
    goto L_0887EED4;
L_0887EED4:;
    s5 = s5 + 1;
    goto L_0887EE58;
L_0887EEDC:;
    s6 = s6 + 1;
    goto L_0887EE58;
}

/* 0887EEE4 */
rv_t func_0887EEE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0887EEE4:;
    sp = sp - 64;
    fp = 0 + 0;
    s7 = 0 + 0;
    s6 = a3 & 0xff;
    s5 = a2 + 0;
    s4 = a1 + 0;
    s3 = a0 + 0;
    t1 = LD32(a0+4);
    cnd_ = t1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887EF5C; }
    goto L_0887EF34;
L_0887EF34:;
    s0 = 0 + 0;
    goto L_0887EF38;
L_0887EF38:;
    v0 = LD32(s3);
    v0 = s0 + v0;
    v1 = LD32(v0);
    cnd_ = v1 == s4;
    s2 = v0 + 4;
    if (cnd_) { goto L_0887EFB0; }
    goto L_0887EF4C;
L_0887EF4C:;
    s1 = s1 + 1;
    v0 = s1 < t1;
    cnd_ = v0 != 0;
    s0 = s0 + 28;
    if (cnd_) { goto L_0887EF38; }
    goto L_0887EF5C;
L_0887EF5C:;
    cnd_ = s6 == 0;
    if (cnd_) { goto L_0887EF74; }
    goto L_0887EF64;
L_0887EF64:;
    cnd_ = s7 != 0;
    a0 = 1;
    if (cnd_) { goto L_0887EFA0; }
    goto L_0887EF6C;
L_0887EF6C:;
    cnd_ = fp != 0;
    if (cnd_) { a0 = 4; goto L_0887EFA0; }
    goto L_0887EF74;
L_0887EF74:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0887EFA0:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EFA8;
L_0887EFA8:;
    goto L_0887EF74;
L_0887EFB0:;
    v0 = LD32(s2+4);
    v1 = D_08AD4C6C - (19564);
    a3 = 1;
    t0 = s5 + 0;
    a0 = sp + 0;
    a1 = v1 + 19564;
    cnd_ = v0 == 0;
    a2 = 12;
    if (cnd_) { goto L_0887EF4C; }
    goto L_0887EFD0;
L_0887EFD0:;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EFD8;
L_0887EFD8:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0887DED0(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887EFE8;
L_0887EFE8:;
    cnd_ = v0 == 0;
    t1 = LD32(s3+4);
    if (cnd_) { goto L_0887EFF8; }
    goto L_0887EFF0;
L_0887EFF0:;
    s7 = s7 + 1;
    goto L_0887EF4C;
L_0887EFF8:;
    fp = fp + 1;
    goto L_0887EF4C;
}

/* 0887F000 */
rv_t func_0887F000(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887F000:;
    sp = sp - 48;
    s2 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F02C;
L_0887F02C:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0887F058; }
    goto L_0887F038;
L_0887F038:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0887F058:;
    a1 = s0 + 4;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F064;
L_0887F064:;
    a1 = LD32(s0+4);
    a0 = s0 + 0;
    s3 = 0 + 0;
    f0 = func_0887EBE8(a0, a1, 0, 0, 0);
    goto L_0887F074;
L_0887F074:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0887F0B8; }
    goto L_0887F080;
L_0887F080:;
    a1 = LD32(s0);
    a0 = s2 + 0;
    s3 = s3 + 1;
    a1 = a1 + s1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F094;
L_0887F094:;
    a0 = LD32(s0);
    a1 = s2 + 0;
    a0 = a0 + s1;
    a0 = a0 + 4;
    { rv_t r_ = func_0887DF60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F0A8;
L_0887F0A8:;
    v1 = LD32(s0+4);
    v1 = s3 < v1;
    cnd_ = v1 != 0;
    s1 = s1 + 28;
    if (cnd_) { goto L_0887F080; }
    goto L_0887F0B8;
L_0887F0B8:;
    v1 = 1;
    goto L_0887F038;
}

/* 0887F0C0 */
u64 func_0887F0C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887F0C0:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s1 = a0 + 0;
    v0 = LD32(a1+4);
    cnd_ = v0 == 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0887F130; }
    goto L_0887F0F0;
L_0887F0F0:;
    s0 = 0 + 0;
    a1 = LD32(s3);
    goto L_0887F0F8;
L_0887F0F8:;
    v0 = LD32(s1);
    s2 = s2 + 1;
    a1 = s0 + a1;
    v1 = LD32(a1);
    v0 = s0 + v0;
    a0 = v0 + 4;
    ST32(v0, v1);
    a1 = a1 + 4;
    s0 = s0 + 28;
    { u64 r_ = func_0887DFCC(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887F120;
L_0887F120:;
    v0 = LD32(s1+4);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s3); goto L_0887F0F8; }
    goto L_0887F130;
L_0887F130:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887F14C */
void func_0887F14C(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0887F14C:;
    v0 = a1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0+4, a1); goto L_0887F158; }
    goto L_0887F158;
L_0887F158:;
    return;
}

/* 0887F160 */
u64 func_0887F160(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0887F160:;
    v1 = LD32(a0+4);
    v0 = a1 << 3;
    v0 = v0 - a1;
    a1 = a1 < v1;
    v1 = v0 << 2;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0887F184; }
    goto L_0887F17C;
L_0887F17C:;
    v0 = LD32(a0);
    v0 = v0 + v1;
    goto L_0887F184;
L_0887F184:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0887F18C */
void func_0887F18C(u32 a0)
{
L_0887F18C:;
    ST32(a0, 0);
    ST32(a0+4, 0);
    return;
}

/* 0887F198 */
rv_t func_0887F198(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887F198:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0887FFC0(a0);
    goto L_0887F1AC;
L_0887F1AC:;
    v0 = D_08AEC0C8 - (-16184);
    f0 = BITSF(LD32(v0-16184));
    v0 = D_08AEC0CC - (-16180);
    f1 = BITSF(0);
    ST32(s0+176, FBITS(f0));
    a0 = s0 + 184;
    a1 = s0 + 196;
    f0 = BITSF(LD32(v0-16180));
    v0 = D_08AEC0D0 - (-16176);
    a2 = s0 + 208;
    ST32(s0+180, FBITS(f0));
    a3 = (u32)-1;
    v1 = 1;
    f0 = BITSF(LD32(v0-16176));
    v0 = D_08AF69E0 - (27104);
    v0 = v0 + 27104;
    ST32(s0, v0);
    v0 = 1004;
    ST32(a0+8, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(s0+172, v1);
    ST32(s0+160, 0);
    ST32(s0+164, 0);
    ST32(s0+168, 0);
    ST32(s0+184, FBITS(f1));
    ST32(s0+196, FBITS(f1));
    ST32(a1+8, FBITS(f1));
    ST32(a1+4, FBITS(f1));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f1));
    ST32(s0+208, FBITS(f1));
    ST32(s0+4, v0);
    ST32(s0+224, a3);
    ST32(s0+220, a3);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887F244 */
rv_t func_0887F244(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887F244:;
    sp = sp - 16;
    v0 = D_08AF69E0 - (27104);
    s0 = a0 + 0;
    v0 = v0 + 27104;
    v1 = LD32(a0+160);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0887F284; }
    goto L_0887F26C;
L_0887F26C:;
    a0 = s0 + 0;
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887F274;
L_0887F274:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887F284:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F294;
L_0887F294:;
    goto L_0887F26C;
}

/* 0887F29C */
rv_t func_0887F29C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887F29C:;
    sp = sp - 16;
    v0 = D_08AF69E0 - (27104);
    s0 = a0 + 0;
    v0 = v0 + 27104;
    v1 = LD32(a0+160);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0887F2E4; }
    goto L_0887F2C4;
L_0887F2C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887F2CC;
L_0887F2CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887F2D4;
L_0887F2D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0887F2E4:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F2F4;
L_0887F2F4:;
    goto L_0887F2C4;
}

/* 0887F2FC */
rv_t func_0887F2FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887F2FC:;
    sp = sp - 48;
    s0 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_0888008C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F318;
L_0887F318:;
    v0 = LD32(s0+160);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887F37C; }
    goto L_0887F324;
L_0887F324:;
    f4 = BITSF(LD32(s0+208));
    goto L_0887F328;
L_0887F328:;
    v1 = s0 + 208;
    f2 = BITSF(LD32(v1+8));
    f4 = f4 * f20;
    f1 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(s0+196));
    v0 = s0 + 196;
    f2 = f2 * f20;
    f1 = f1 * f20;
    f3 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0+8));
    f5 = f5 + f4;
    f3 = f3 + f1;
    f0 = f0 + f2;
    ST32(s0+196, FBITS(f5));
    ST32(v0+8, FBITS(f0));
    ST32(v0+4, FBITS(f3));
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0887F37C:;
    f0 = func_0887F434(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0887F384;
L_0887F384:;
    f4 = BITSF(LD32(s0+208));
    goto L_0887F328;
}

/* 0887F38C */
rv_t func_0887F38C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887F38C:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08880148(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F3A8;
L_0887F3A8:;
    f0 = BITSF(LD32(s0+176));
    f2 = BITSF(LD32(s0+180));
    v0 = s0 + 184;
    ST32(s1+176, FBITS(f0));
    v1 = s1 + 184;
    ST32(s1+180, FBITS(f2));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(s0+184));
    f0 = BITSF(LD32(v0+4));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    ST32(s1+184, FBITS(f2));
    v0 = LD32(s0+196);
    a0 = LD32(s0+164);
    a1 = LD32(s0+168);
    ST32(s1+196, v0);
    v1 = LD32(s0+200);
    a2 = LD32(s0+172);
    ST32(s1+164, a0);
    ST32(s1+200, v1);
    v0 = LD32(s0+204);
    ST32(s1+168, a1);
    ST32(s1+204, v0);
    v1 = LD32(s0+208);
    ST32(s1+172, a2);
    ST32(s1+208, v1);
    v0 = LD32(s0+212);
    ST32(s1+212, v0);
    v1 = LD32(s0+216);
    ST32(s1+216, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0887F434 */
float func_0887F434(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887F434:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+160);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0887F4EC; }
    goto L_0887F454;
L_0887F454:;
    v0 = LD32(s1+164);
    goto L_0887F458;
L_0887F458:;
    a0 = 372;
    cnd_ = v0 != 0;
    ST32(s1+160, 0);
    if (cnd_) { goto L_0887F478; }
    goto L_0887F464;
L_0887F464:;
    goto L_0887F468;
L_0887F468:;
    sp = sp + 16;
    return f0;
L_0887F478:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F480;
L_0887F480:;
    a1 = LD32(s1+164);
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F490;
L_0887F490:;
    v0 = D_08AEC0D4 - (-16172);
    f12 = BITSF(LD32(v0-16172));
    ST32(s1+160, s0);
    a0 = s0 + 0;
    a1 = 1;
    f13 = f12;
    f14 = f12;
    { rv_t r_ = func_08809B24(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F4B0;
L_0887F4B0:;
    v0 = LD32(s1+168);
    a0 = s1 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0887F4DC; }
    goto L_0887F4C0;
L_0887F4C0:;
    a1 = LD32(s1+220);
    goto L_0887F4C4;
L_0887F4C4:;
    a2 = LD32(s1+224);
    a0 = s1 + 0;
    a3 = 1;
    { rv_t r_ = func_0887FBB0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F4D4;
L_0887F4D4:;
    goto L_0887F468;
L_0887F4DC:;
    a2 = LD32(s1+172);
    f0 = func_0887FA84(a0, a1, a2, 0);
    goto L_0887F4E4;
L_0887F4E4:;
    a1 = LD32(s1+220);
    goto L_0887F4C4;
L_0887F4EC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F4FC;
L_0887F4FC:;
    v0 = LD32(s1+164);
    goto L_0887F458;
}

/* 0887F504 */
rv_t func_0887F504(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 384);
L_0887F504:;
    sp = sp - 384;
    s0 = a0 + 0;
    f23 = f13;
    f22 = f12;
    f21 = f14;
    f20 = f15;
    { rv_t r_ = func_08880140(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F548;
L_0887F548:;
    v0 = LD32(s0+160);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887F564; }
    goto L_0887F554;
L_0887F554:;
    v0 = LD32(s0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887F590; }
    goto L_0887F564;
L_0887F564:;
    sp = sp + 384;
    return (rv_t){ v0, v1, f0 };
L_0887F590:;
    s3 = D_08B21181 - (4481);
    v0 = func_08901790();
    goto L_0887F598;
L_0887F598:;
    func_08901714();
    goto L_0887F5A0;
L_0887F5A0:;
    func_0890171C();
    goto L_0887F5A8;
L_0887F5A8:;
    v0 = D_08B306F0 - (1776);
    v1 = D_08B306EC - (1772);
    f3 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+1772));
    v0 = D_08AEC0D8 - (-16168);
    f1 = (float)(s32)FBITS(f3);
    f2 = (float)(s32)FBITS(f0);
    f24 = BITSF(LD32(v0-16168));
    f4 = f20 - f23;
    f13 = f21 - f22;
    f1 = f24 / f1;
    v0 = D_08AEC0DC - (-16164);
    f0 = BITSF(LD32(v0-16164));
    v1 = D_08B159FC - (23036);
    a1 = LD32(v1+23036);
    a2 = a1 + 60;
    a0 = a1 + 12;
    f2 = f24 / f2;
    f13 = f13 * f1;
    f1 = f22 * f1;
    f4 = f4 * f2;
    f2 = f23 * f2;
    f3 = f13 * f0;
    ST32(sp+48, FBITS(f13));
    f0 = f4 * f0;
    f5 = f24 / f4;
    ST32(sp+52, FBITS(f4));
    ST32(sp+80, FBITS(f13));
    ST32(sp+84, FBITS(f4));
    f1 = f1 + f3;
    f2 = f2 + f0;
    f13 = f13 * f5;
    f3 = f1 - f3;
    f0 = f2 - f0;
    ST32(sp+64, FBITS(f1));
    ST32(sp+88, FBITS(f3));
    ST32(sp+92, FBITS(f0));
    ST32(sp+68, FBITS(f2));
    v0 = LD32(a1+60);
    ST32(sp+96, v0);
    v1 = LD32(a2+4);
    ST32(sp+100, v1);
    v0 = LD32(a2+8);
    ST32(sp+104, v0);
    v1 = LD32(a2+12);
    ST32(sp+108, v1);
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+4));
    f2 = BITSF(LD32(a1+8));
    ST32(sp+112, FBITS(f0));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f2));
    f0 = BITSF(LD32(a1+12));
    f1 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(a0+12));
    f2 = BITSF(LD32(a0+8));
    ST32(sp+128, FBITS(f0));
    ST32(sp+132, FBITS(f1));
    ST32(sp+136, FBITS(f2));
    ST32(sp+140, FBITS(f3));
    f1 = BITSF(LD32(s0+180));
    f5 = BITSF(LD32(a0+32));
    f4 = BITSF(LD32(a0+16));
    f1 = f24 / f1;
    f2 = BITSF(LD32(a0+24));
    f3 = BITSF(LD32(a0+28));
    f0 = BITSF(LD32(a0+20));
    f12 = BITSF(LD32(s0+176));
    ST32(sp+144, FBITS(f4));
    ST32(sp+152, FBITS(f2));
    ST32(sp+156, FBITS(f3));
    ST32(sp+160, FBITS(f5));
    ST32(sp+148, FBITS(f0));
    f0 = BITSF(LD32(a1+92));
    f20 = f0 + f0;
    f12 = f12 * f1;
    { rv_t r_ = func_0881D084(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F6DC;
L_0887F6DC:;
    a0 = s0 + 184;
    ST32(sp+176, 0);
    ST32(sp+180, 0);
    ST32(sp+184, FBITS(f24));
    func_0881CBAC(a0);
    goto L_0887F6F0;
L_0887F6F0:;
    a1 = sp + 176;
    a0 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F6FC;
L_0887F6FC:;
    a0 = sp + 0;
    func_0881CBE4(a0);
    goto L_0887F704;
L_0887F704:;
    a0 = sp + 80;
    func_0881D318(a0);
    goto L_0887F70C;
L_0887F70C:;
    func_089014F0();
    goto L_0887F714;
L_0887F714:;
    f0 = BITSF(LD32(s0+180));
    f12 = BITSF(LD32(s0+176));
    f0 = f24 / f0;
    f12 = f12 * f0;
    func_089016EC(f12);
    goto L_0887F728;
L_0887F728:;
    f2 = BITSF(LD32(sp+176));
    f1 = BITSF(LD32(sp+180));
    f0 = BITSF(LD32(sp+184));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f0 = BITSF(FBITS(f0) ^ 0x80000000u);
    a0 = sp + 0;
    a1 = sp + 192;
    ST32(sp+196, FBITS(f1));
    ST32(sp+200, FBITS(f0));
    ST32(sp+192, FBITS(f2));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F758;
L_0887F758:;
    {v[112]=BITSF(LD32(s0+(196)));}
    {v[113]=BITSF(LD32(s0+(200)));}
    {v[114]=BITSF(LD32(s0+(204)));}
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
    {ST32(sp+(208),FBITS(v[96]));}
    {ST32(sp+(212),FBITS(v[97]));}
    {ST32(sp+(216),FBITS(v[98]));}
    {ST32(sp+(220),FBITS(v[100]));}
    {ST32(sp+(224),FBITS(v[101]));}
    {ST32(sp+(228),FBITS(v[102]));}
    {ST32(sp+(232),FBITS(v[104]));}
    {ST32(sp+(236),FBITS(v[105]));}
    {ST32(sp+(240),FBITS(v[106]));}
    {v[112]=BITSF(LD32(sp+(208)));}
    {v[113]=BITSF(LD32(sp+(212)));}
    {v[114]=BITSF(LD32(sp+(216)));}
    {v[116]=BITSF(LD32(sp+(220)));}
    {v[117]=BITSF(LD32(sp+(224)));}
    {v[118]=BITSF(LD32(sp+(228)));}
    {v[120]=BITSF(LD32(sp+(232)));}
    {v[121]=BITSF(LD32(sp+(236)));}
    {v[122]=BITSF(LD32(sp+(240)));}
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
    {ST32(sp+(256),FBITS(v[80]));}
    {ST32(sp+(260),FBITS(v[81]));}
    {ST32(sp+(264),FBITS(v[82]));}
    {ST32(sp+(268),FBITS(v[84]));}
    {ST32(sp+(272),FBITS(v[85]));}
    {ST32(sp+(276),FBITS(v[86]));}
    {ST32(sp+(280),FBITS(v[88]));}
    {ST32(sp+(284),FBITS(v[89]));}
    {ST32(sp+(288),FBITS(v[90]));}
    f0 = BITSF(LD32(sp+256));
    f1 = BITSF(LD32(sp+264));
    v0 = D_08B2C18C - (-15988);
    ST32(sp, FBITS(f0));
    s1 = v0 - 15988;
    v1 = 1;
    f0 = BITSF(LD32(sp+260));
    ST32(sp+8, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    f1 = BITSF(LD32(sp+272));
    f0 = BITSF(LD32(sp+268));
    v0 = LD_U8(s3+4481);
    ST32(sp+16, FBITS(f1));
    s2 = v0 ^ 0x1;
    f1 = BITSF(LD32(sp+280));
    ST32(sp+12, FBITS(f0));
    f0 = BITSF(LD32(sp+276));
    ST32(sp+24, FBITS(f1));
    ST32(sp+20, FBITS(f0));
    f1 = BITSF(LD32(sp+288));
    f0 = BITSF(LD32(sp+284));
    a0 = LD_U8(s1+24);
    ST32(sp+32, FBITS(f1));
    ST32(sp+28, FBITS(f0));
    cnd_ = a0 == v1;
    ST8(s3+4481, v1);
    if (cnd_) { goto L_0887F8CC; }
    goto L_0887F8C0;
L_0887F8C0:;
    a0 = s1 + 0;
    a1 = 1;
    v0 = func_0890D084(a0, a1);
    goto L_0887F8CC;
L_0887F8CC:;
    v0 = D_08B2859C - (-31332);
    f12 = BITSF(LD32(v0-31332));
    a0 = LD32(s0+160);
    a1 = sp + 304;
    a2 = sp + 0;
    a3 = 0x74000000u;
    ST32(sp+304, 0);
    ST32(sp+308, 0);
    ST32(sp+312, 0);
    { rv_t r_ = func_088067CC(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F8F4;
L_0887F8F4:;
    v0 = LD_U8(s1+24);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_0887F948; }
    goto L_0887F900;
L_0887F900:;
    a0 = sp + 96;
    goto L_0887F904;
L_0887F904:;
    ST8(s3+4481, s2);
    func_0881D318(a0);
    goto L_0887F90C;
L_0887F90C:;
    f12 = f20;
    f13 = f24;
    { rv_t r_ = func_0881D084(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F918;
L_0887F918:;
    a0 = sp + 112;
    func_0881CBAC(a0);
    goto L_0887F920;
L_0887F920:;
    a0 = sp + 128;
    func_0881CBE4(a0);
    goto L_0887F928;
L_0887F928:;
    func_089014F0();
    goto L_0887F930;
L_0887F930:;
    v0 = func_08901790();
    goto L_0887F938;
L_0887F938:;
    func_08901714();
    goto L_0887F940;
L_0887F940:;
    goto L_0887F564;
L_0887F948:;
    a1 = 0 + 0;
    v0 = func_0890D084(a0, a1);
    goto L_0887F950;
L_0887F950:;
    a0 = sp + 96;
    goto L_0887F904;
}

/* 0887F958 */
rv_t func_0887F958(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887F958:;
    sp = sp - 32;
    s2 = a3 + 0;
    a3 = (u32)-1;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08880268(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F980;
L_0887F980:;
    a0 = LD32(s0+160);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0887FA70; }
    goto L_0887F98C;
L_0887F98C:;
    cnd_ = s2 != 0;
    ST32(s0+160, 0);
    if (cnd_) { goto L_0887FA5C; }
    goto L_0887F994;
L_0887F994:;
    a1 = s0 + 164;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F9A0;
L_0887F9A0:;
    v1 = LD32(s0+164);
    cnd_ = v1 != 0;
    a1 = s0 + 168;
    if (cnd_) { goto L_0887FA40; }
    goto L_0887F9AC;
L_0887F9AC:;
    a1 = s0 + 176;
    goto L_0887F9B0;
L_0887F9B0:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F9B8;
L_0887F9B8:;
    a1 = s0 + 180;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F9C4;
L_0887F9C4:;
    a1 = s0 + 184;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F9D0;
L_0887F9D0:;
    a1 = s0 + 196;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DD08(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887F9DC;
L_0887F9DC:;
    v1 = s2 < 0x2u;
    cnd_ = v1 == 0;
    a1 = s0 + 208;
    if (cnd_) { goto L_0887FA30; }
    goto L_0887F9E8;
L_0887F9E8:;
    v0 = s2 < 0x3u;
    goto L_0887F9EC;
L_0887F9EC:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0887FA1C; }
    goto L_0887F9F4;
L_0887F9F4:;
    a0 = s0 + 0;
    goto L_0887F9F8;
L_0887F9F8:;
    a1 = s1 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FA04;
L_0887FA04:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0887FA1C:;
    a1 = sp + 0;
    ST8(sp, 0);
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FA28;
L_0887FA28:;
    a0 = s0 + 0;
    goto L_0887F9F8;
L_0887FA30:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882DD08(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FA38;
L_0887FA38:;
    v0 = s2 < 0x3u;
    goto L_0887F9EC;
L_0887FA40:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FA48;
L_0887FA48:;
    a1 = s0 + 172;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FA54;
L_0887FA54:;
    a1 = s0 + 176;
    goto L_0887F9B0;
L_0887FA5C:;
    a1 = s0 + 164;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FA68;
L_0887FA68:;
    a1 = s0 + 168;
    goto L_0887FA40;
L_0887FA70:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FA7C;
L_0887FA7C:;
    goto L_0887F98C;
}

/* 0887FA84 */
float func_0887FA84(u32 a0, u32 a1, u32 a2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0887FA84:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a2 + 0;
    v0 = LD32(a0+160);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0887FB54; }
    goto L_0887FAB0;
L_0887FAB0:;
    v1 = LD32(v0+52);
    a1 = LD32(a0+144);
    cnd_ = v1 == 0;
    t0 = v0 + 52;
    if (cnd_) { goto L_0887FAEC; }
    goto L_0887FAC0;
L_0887FAC0:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_0887FAC8;
L_0887FAC8:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0887FAF8; }
    goto L_0887FAE0;
L_0887FAE0:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0887FAC8; }
    goto L_0887FAEC;
L_0887FAEC:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0887FBA0; }
    goto L_0887FAF8;
L_0887FAF8:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0887FB04; }
    goto L_0887FB00;
L_0887FB00:;
    v0 = LD32(a3);
    goto L_0887FB04;
L_0887FB04:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0887FB70; }
    goto L_0887FB0C;
L_0887FB0C:;
    v0 = LD32(v0+32);
    cnd_ = v0 == s3;
    if (cnd_) { goto L_0887FB28; }
    goto L_0887FB18;
L_0887FB18:;
    a1 = LD32(s1+144);
    a0 = LD32(s1+160);
    s0 = 0 + 0;
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FB28;
L_0887FB28:;
    cnd_ = s0 == 0;
    if (cnd_) { a1 = LD32(s1+144); goto L_0887FB74; }
    goto L_0887FB30;
L_0887FB30:;
    v0 = LD32(s0+16);
    cnd_ = v0 == s2;
    a0 = s0 + 0;
    if (cnd_) { goto L_0887FB54; }
    goto L_0887FB3C;
L_0887FB3C:;
    a1 = 2;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887FB44;
L_0887FB44:;
    ST32(s0+16, s2);
    goto L_0887FB48;
L_0887FB48:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887FB54;
L_0887FB54:;
    goto L_0887FB58;
L_0887FB58:;
    sp = sp + 32;
    return f0;
L_0887FB70:;
    a1 = LD32(s1+144);
    goto L_0887FB74;
L_0887FB74:;
    a0 = LD32(s1+160);
    a2 = s2 + 0;
    t0 = s3 + 0;
    a3 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FB90;
L_0887FB90:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0887FB48; }
    goto L_0887FB98;
L_0887FB98:;
    goto L_0887FB58;
L_0887FBA0:;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887FBA8;
L_0887FBA8:;
    a3 = v0 + 0;
    goto L_0887FAF8;
}

/* 0887FBB0 */
rv_t func_0887FBB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0887FBB0:;
    sp = sp - 48;
    a3 = a3 & 0xff;
    s2 = a0 + 0;
    cnd_ = a3 != 0;
    if (cnd_) { goto L_0887FBDC; }
    goto L_0887FBD0;
L_0887FBD0:;
    v0 = LD32(a0+220);
    cnd_ = a1 == v0;
    if (cnd_) { v0 = LD32(a0+224); goto L_0887FF10; }
    goto L_0887FBDC;
L_0887FBDC:;
    a0 = LD32(s2+160);
    goto L_0887FBE0;
L_0887FBE0:;
    ST32(s2+220, a1);
    cnd_ = a0 == 0;
    ST32(s2+224, a2);
    if (cnd_) { goto L_0887FE94; }
    goto L_0887FBEC;
L_0887FBEC:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0887FE98; }
    goto L_0887FBF8;
L_0887FBF8:;
    v0 = LD32(a0+256);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2+220); goto L_0887FC14; }
    goto L_0887FC04;
L_0887FC04:;
    { rv_t r_ = func_0880B598(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FC0C;
L_0887FC0C:;
    a0 = LD32(s2+160);
    v1 = LD32(s2+220);
    goto L_0887FC14;
L_0887FC14:;
    v0 = D_08AEC0E0 - (-16160);
    f1 = BITSF(LD32(v0-16160));
    v0 = v1 & 0xff;
    v1 = v1 >> 8;
    a2 = v1 & 0xff;
    v1 = v1 >> 8;
    f4 = BITSF(v0);
    v0 = (v1 >> 8) & 0xff;
    f0 = BITSF(v0);
    v0 = LD32(s2+224);
    f5 = BITSF(a2);
    f10 = (float)(s32)FBITS(f0);
    a2 = v0 & 0xff;
    v0 = v0 >> 8;
    f7 = BITSF(a2);
    a2 = v0 & 0xff;
    v0 = v0 >> 8;
    f8 = BITSF(a2);
    f10 = f10 * f1;
    a2 = (v0 >> 8) & 0xff;
    a1 = D_08AEC0E4 - (-16156);
    v0 = v0 & 0xff;
    v1 = v1 & 0xff;
    f3 = BITSF(LD32(a1-16156));
    f0 = BITSF(v1);
    f9 = BITSF(v0);
    f11 = BITSF(a2);
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
    if (cnd_) { goto L_0887FF00; }
    goto L_0887FCEC;
L_0887FCEC:;
    v1 = D_08AEC0E8 - (-16152);
    f0 = BITSF(LD32(v1-16152));
    f0 = f12 + f0;
    goto L_0887FCF8;
L_0887FCF8:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a1-16156));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s1 = a2 << 8;
    if (cnd_) { goto L_0887FEF4; }
    goto L_0887FD20;
L_0887FD20:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f2 + f0;
    goto L_0887FD28;
L_0887FD28:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a1-16156));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s1 = s1 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 << 8;
    if (cnd_) { goto L_0887FEE8; }
    goto L_0887FD54;
L_0887FD54:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 + f0;
    goto L_0887FD5C;
L_0887FD5C:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(a1-16156));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s1 = s1 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 << 8;
    if (cnd_) { goto L_0887FEDC; }
    goto L_0887FD88;
L_0887FD88:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 + f0;
    goto L_0887FD90;
L_0887FD90:;
    f1 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(a1-16156));
    v0 = sp + 16;
    a2 = FBITS(f1);
    f1 = BITSF(LD32(sp+28));
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = s1 + a2;
    if (cnd_) { goto L_0887FED0; }
    goto L_0887FDBC;
L_0887FDBC:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 + f0;
    goto L_0887FDC4;
L_0887FDC4:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(a1-16156));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    s0 = a2 << 8;
    if (cnd_) { goto L_0887FEC4; }
    goto L_0887FDEC;
L_0887FDEC:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f2 + f0;
    goto L_0887FDF4;
L_0887FDF4:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a1-16156));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s0 = s0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s0 = s0 << 8;
    if (cnd_) { goto L_0887FEB8; }
    goto L_0887FE20;
L_0887FE20:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 + f0;
    goto L_0887FE28;
L_0887FE28:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(a1-16156));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    s0 = s0 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s0 = s0 << 8;
    if (cnd_) { goto L_0887FEAC; }
    goto L_0887FE54;
L_0887FE54:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 + f0;
    goto L_0887FE5C;
L_0887FE5C:;
    f0 = BITSF(F2I(f0, 1));
    a0 = LD32(a0+16);
    a2 = FBITS(f0);
    s0 = s0 + a2;
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887FE70;
L_0887FE70:;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A6A46C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FE80;
L_0887FE80:;
    a0 = LD32(s2+160);
    v1 = ((u32)(uintptr_t)func_08AB122C) - (4652);
    v1 = v1 + 4652;
    ST32(a0+260, v1);
    ST32(a0+256, v0);
    goto L_0887FE94;
L_0887FE94:;
    goto L_0887FE98;
L_0887FE98:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0887FEAC:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 - f0;
    goto L_0887FE5C;
L_0887FEB8:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 - f0;
    goto L_0887FE28;
L_0887FEC4:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f2 - f0;
    goto L_0887FDF4;
L_0887FED0:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 - f0;
    goto L_0887FDC4;
L_0887FEDC:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 - f0;
    goto L_0887FD90;
L_0887FEE8:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f1 - f0;
    goto L_0887FD5C;
L_0887FEF4:;
    f0 = BITSF(LD32(v1-16152));
    f0 = f2 - f0;
    goto L_0887FD28;
L_0887FF00:;
    v1 = D_08AEC0E8 - (-16152);
    f0 = BITSF(LD32(v1-16152));
    f0 = f12 - f0;
    goto L_0887FCF8;
L_0887FF10:;
    cnd_ = a2 != v0;
    if (cnd_) { a0 = LD32(s2+160); goto L_0887FBE0; }
    goto L_0887FF18;
L_0887FF18:;
    goto L_0887FE98;
}

/* 0887FF20 */
void func_0887FF20(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887FF20:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = a1 + 0;
    v1 = LD32(a0+160);
    cnd_ = v1 == 0;
    ST32(s0+164, a1);
    if (cnd_) { goto L_0887FF78; }
    goto L_0887FF40;
L_0887FF40:;
    v1 = LD32(v1+16);
    a2 = 0 + 0;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0887FF54; }
    goto L_0887FF50;
L_0887FF50:;
    a0 = LD32(v1+64);
    goto L_0887FF54;
L_0887FF54:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0887FF7C; }
    goto L_0887FF5C;
L_0887FF5C:;
    a0 = LD32(s0+160);
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0887FF64;
L_0887FF64:;
    a1 = LD32(s0+220);
    a2 = LD32(s0+224);
    a0 = s0 + 0;
    a3 = 1;
    { rv_t r_ = func_0887FBB0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0887FF78;
L_0887FF78:;
    goto L_0887FF7C;
L_0887FF7C:;
    sp = sp + 16;
    return;
}

/* 0887FF88 */
float func_0887FF88(u32 a0, u32 a1, u32 a2, u32 t3)
{
    u32 v0 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887FF88:;
    sp = sp - 16;
    v0 = a0 + 0;
    t0 = LD32(a0+160);
    ST32(v0+168, a1);
    cnd_ = t0 != 0;
    ST32(v0+172, a2);
    if (cnd_) { goto L_0887FFB0; }
    goto L_0887FFA4;
L_0887FFA4:;
    goto L_0887FFA8;
L_0887FFA8:;
    sp = sp + 16;
    return f0;
L_0887FFB0:;
    f0 = func_0887FA84(a0, a1, a2, t3);
    goto L_0887FFB8;
L_0887FFB8:;
    goto L_0887FFA8;
}

/* 0887FFC0 */
float func_0887FFC0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0887FFC0:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_08886850(a0);
    goto L_0887FFD4;
L_0887FFD4:;
    f0 = BITSF(0);
    v0 = D_08AF6A88 - (27272);
    v1 = 1087;
    v0 = v0 + 27272;
    ST32(s0+116, v1);
    ST32(s0, v0);
    ST32(s0+152, FBITS(f0));
    ST32(s0+156, FBITS(f0));
    sp = sp + 16;
    return f0;
}

/* 08880004 */
u64 func_08880004(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880004:;
    v0 = D_08AF6A88 - (27272);
    v0 = v0 + 27272;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880020;
L_08880020:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888002C */
rv_t func_0888002C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888002C:;
    v0 = D_08AF6A88 - (27272);
    v0 = v0 + 27272;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880048;
L_08880048:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08880054 */
rv_t func_08880054(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880054:;
    v0 = D_08AF6A88 - (27272);
    v0 = v0 + 27272;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880074;
L_08880074:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888007C;
L_0888007C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888008C */
rv_t func_0888008C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888008C:;
    sp = sp - 16;
    { rv_t r_ = func_08886F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888009C;
L_0888009C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088800A8 */
rv_t func_088800A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088800A8:;
    sp = sp - 48;
    a2 = sp + 20;
    s1 = a1 + 0;
    a3 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 == 0;
    a1 = sp + 16;
    if (cnd_) { goto L_088800EC; }
    goto L_088800D8;
L_088800D8:;
    goto L_088800DC;
L_088800DC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088800EC:;
    v0 = LD32(a0);
    v1 = LD32(v0+48);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088800FC;
L_088800FC:;
    a0 = s0 + 0;
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880104;
L_08880104:;
    ST32(sp, v0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    ST32(sp+4, v1);
    f12 = BITSF(LD32(sp+16));
    f13 = BITSF(LD32(sp+20));
    f14 = BITSF(LD32(sp));
    f15 = BITSF(LD32(sp+4));
    v0 = LD32(s0);
    f14 = f12 + f14;
    v1 = LD32(v0+152);
    t_ = v1;
    f15 = f13 + f15;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, f14, f15, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880138;
L_08880138:;
    goto L_088800DC;
}

/* 08880140 */
rv_t func_08880140(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08880140:;
    return (rv_t){ v0, v1, f0 };
}

/* 08880148 */
rv_t func_08880148(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08880148:;
    sp = sp - 32;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888701C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880164;
L_08880164:;
    a0 = s0 + 0;
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888016C;
L_0888016C:;
    a0 = s1 + 0;
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    func_088801B4(a0, a1);
    goto L_08880180;
L_08880180:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08880194 */
u64 func_08880194(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880194:;
    v0 = LD32(a0+152);
    v1 = LD32(a0+156);
    sp = sp - 16;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088801A8 */
void func_088801A8(u32 a0, float f12, float f13)
{
L_088801A8:;
    ST32(a0+156, FBITS(f13));
    ST32(a0+152, FBITS(f12));
    return;
}

/* 088801B4 */
void func_088801B4(u32 a0, u32 a1)
{
    float f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088801B4:;
    f13 = BITSF(LD32(a1+4));
    f12 = BITSF(LD32(a1));
    sp = sp - 16;
    func_088801A8(a0, f12, f13);
    goto L_088801CC;
L_088801CC:;
    sp = sp + 16;
    return;
}

/* 088801D8 */
rv_t func_088801D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088801D8:;
    sp = sp - 32;
    v1 = 0 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08880248; }
    goto L_08880208;
L_08880208:;
    s3 = 1;
    v1 = LD32(s0+48);
    goto L_08880210;
L_08880210:;
    v0 = s1 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880230;
L_08880230:;
    cnd_ = v0 == s3;
    v1 = v0 + 0;
    if (cnd_) { goto L_08880248; }
    goto L_08880238;
L_08880238:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_08880210; }
    goto L_08880248;
L_08880248:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08880268 */
rv_t func_08880268(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880268:;
    sp = sp - 16;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08888454(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880288;
L_08880288:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = func_088888F4(a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08880294;
L_08880294:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = 10002;
    v0 = func_08888990(a1, a2);
    goto L_088802A4;
L_088802A4:;
    v1 = 1;
    a1 = s0 + 152;
    cnd_ = v0 == v1;
    a0 = s1 + 0;
    if (cnd_) { goto L_088802C8; }
    goto L_088802B4;
L_088802B4:;
    goto L_088802B8;
L_088802B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088802C8:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088802D0;
L_088802D0:;
    a1 = s0 + 156;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088802DC;
L_088802DC:;
    goto L_088802B8;
}

/* 088802E4 */
rv_t func_088802E4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088802E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0887FFC0(a0);
    goto L_088802F8;
L_088802F8:;
    v0 = D_08AEC0F0 - (-16144);
    f1 = BITSF(LD32(v0-16144));
    f0 = BITSF(0);
    v0 = D_08AF6B30 - (27440);
    v0 = v0 + 27440;
    a0 = s0 + 168;
    ST32(s0, v0);
    v1 = (u32)-1;
    v0 = 1001;
    ST32(s0+160, v1);
    ST32(s0+164, 0);
    ST32(s0+188, FBITS(f1));
    ST32(s0+180, FBITS(f0));
    ST32(a0+8, 0);
    ST32(a0+4, 0);
    ST32(s0+168, 0);
    ST32(s0+4, v0);
    ST32(s0+184, FBITS(f0));
    ST32(s0+192, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08880354 */
rv_t func_08880354(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880354:;
    sp = sp - 16;
    v0 = D_08AF6B30 - (27440);
    v0 = v0 + 27440;
    s0 = a0 + 0;
    s1 = s0 + 168;
    v1 = LD32(a0+168);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088803A8; }
    goto L_08880384;
L_08880384:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880394;
L_08880394:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088803A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088803B0;
L_088803B0:;
    ST32(s0+168, 0);
    goto L_08880384;
}

/* 088803B8 */
rv_t func_088803B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088803B8:;
    sp = sp - 16;
    v0 = D_08AF6B30 - (27440);
    v0 = v0 + 27440;
    s0 = a0 + 0;
    s1 = s0 + 168;
    v1 = LD32(a0+168);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08880414; }
    goto L_088803E8;
L_088803E8:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088803F8;
L_088803F8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880400;
L_08880400:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08880414:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888041C;
L_0888041C:;
    ST32(s0+168, 0);
    goto L_088803E8;
}

/* 08880424 */
rv_t func_08880424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08880424:;
    sp = sp - 48;
    s0 = a1 + 0;
    s2 = sp + 16;
    s1 = a0 + 0;
    { rv_t r_ = func_08880148(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880448;
L_08880448:;
    a0 = sp + 0;
    a1 = s0 + 0;
    func_08880A48(a0, a1);
    goto L_08880454;
L_08880454:;
    a0 = s1 + 0;
    a1 = sp + 0;
    a2 = 1;
    func_088804E8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08880464;
L_08880464:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088804D8; }
    goto L_08880470;
L_08880470:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880484;
L_08880484:;
    a2 = s2 + 0;
    a0 = s1 + 0;
    a1 = 0 + 0;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    func_08880A24(a0, a1, a2);
    goto L_0888049C;
L_0888049C:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088804A8;
L_088804A8:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a1 = 1;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    func_08880A24(a0, a1, a2);
    goto L_088804C0;
L_088804C0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088804D8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088804E0;
L_088804E0:;
    ST32(sp, 0);
    goto L_08880470;
}

/* 088804E8 */
void func_088804E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088804E8:;
    sp = sp - 48;
    a2 = a2 & 0xff;
    s2 = a0 + 0;
    s0 = a1 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    cnd_ = a2 != 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_08880560; }
    goto L_08880524;
L_08880524:;
    v0 = D_08AD4C74 - (19572);
    s1 = v0 + 19572;
    cnd_ = s1 == 0;
    if (cnd_) { s1 = LD32(s0+4); goto L_08880564; }
    goto L_08880534;
L_08880534:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888053C;
L_0888053C:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880550;
L_08880550:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_088806FC; }
    goto L_08880558;
L_08880558:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_08880560;
L_08880560:;
    s1 = LD32(s0+4);
    goto L_08880564;
L_08880564:;
    s3 = sp + 0;
    cnd_ = s1 == 0;
    s5 = LD32(s0);
    if (cnd_) { goto L_088805C0; }
    goto L_08880570;
L_08880570:;
    v1 = LD32(sp+8);
    v0 = s1 + 1;
    if (v1 != 0) v0 = s1;
    s4 = v1 + v0;
    a0 = s4 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880588;
L_08880588:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088805C0; }
    goto L_08880590;
L_08880590:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088806D8; }
    goto L_0888059C;
L_0888059C:;
    a0 = LD32(s3+4);
    goto L_088805A0;
L_088805A0:;
    a1 = s5 + 0;
    ST32(s3+8, s4);
    a0 = s0 + a0;
    ST32(s3, s0);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088805B4;
L_088805B4:;
    v1 = LD32(s3+4);
    v1 = v1 + s1;
    ST32(s3+4, v1);
    goto L_088805C0;
L_088805C0:;
    v0 = D_08B263B8 - (25528);
    a1 = LD32(v0+25528);
    a0 = LD32(sp);
    a2 = 0 + 0;
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088805D4;
L_088805D4:;
    v1 = v0 + 0;
    ST32(s2+160, v0);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = v1 < 0xfau;
    if (cnd_) { goto L_08880608; }
    goto L_088805E8;
L_088805E8:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+168); goto L_0888060C; }
    goto L_088805F0;
L_088805F0:;
    v0 = v1 << 2;
    v1 = D_08B25FC4 - (24516);
    v1 = v1 + 24516;
    v0 = v0 + v1;
    a0 = 24616;
    ST32(v0, a0);
    goto L_08880608;
L_08880608:;
    a0 = LD32(s2+168);
    goto L_0888060C;
L_0888060C:;
    s0 = s2 + 168;
    cnd_ = a0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_08880634; }
    goto L_08880618;
L_08880618:;
    cnd_ = s1 == a0;
    if (cnd_) { goto L_08880670; }
    goto L_08880620;
L_08880620:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+8, 0); goto L_08880638; }
    goto L_08880628;
L_08880628:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880630;
L_08880630:;
    ST32(s2+168, 0);
    goto L_08880634;
L_08880634:;
    ST32(s0+8, 0);
    goto L_08880638;
L_08880638:;
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088806CC; }
    goto L_08880640;
L_08880640:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880648;
L_08880648:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888065C;
L_0888065C:;
    cnd_ = v0 != 0;
    ST32(s2+168, v0);
    if (cnd_) { goto L_088806B8; }
    goto L_08880664;
L_08880664:;
    ST32(s0+4, 0);
    a0 = 0 + 0;
    ST32(s0+8, 0);
    goto L_08880670;
L_08880670:;
    v0 = func_088325D0(a0);
    goto L_08880678;
L_08880678:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    ST32(s2+164, v0);
    if (cnd_) { goto L_088806A8; }
    goto L_08880684;
L_08880684:;
    sp = sp + 48;
    return;
L_088806A8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088806B0;
L_088806B0:;
    ST32(sp, 0);
    goto L_08880684;
L_088806B8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088806C4;
L_088806C4:;
    a0 = LD32(s2+168);
    goto L_08880670;
L_088806CC:;
    a0 = 0 + 0;
    ST32(s2+168, 0);
    goto L_08880670;
L_088806D8:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088806E0;
L_088806E0:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s3+4); goto L_088805A0; }
    goto L_088806EC;
L_088806EC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088806F4;
L_088806F4:;
    a0 = LD32(s3+4);
    goto L_088805A0;
L_088806FC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880708;
L_08880708:;
    s1 = LD32(s0+4);
    goto L_08880564;
}

/* 08880710 */
u32 func_08880710(u32 a0)
{
    u32 v0 = 0;
L_08880710:;
    v0 = LD32(a0+160);
    return v0;
}

/* 08880718 */
rv_t func_08880718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880718:;
    sp = sp - 16;
    { rv_t r_ = func_088800A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880728;
L_08880728:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08880734 */
rv_t func_08880734(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08880734:;
    sp = sp - 128;
    s3 = a1 + 0;
    s1 = a0 + 0;
    s0 = D_08B2C12C - (-16084);
    f21 = f14;
    f20 = f15;
    ST32(sp+64, FBITS(f12));
    ST32(sp+68, FBITS(f13));
    v0 = func_08887404(a0);
    goto L_08880774;
L_08880774:;
    a0 = D_08AEC0F4 - (-16140);
    f4 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(a0-16140));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f5 = f4 * f0;
    f0 = BITSF(0);
    f3 = BITSF(LD32(v0+8));
    ST32(sp+16, FBITS(f1));
    fcc = FCMP(f0, f5, 12);
    v1 = sp + 16;
    a1 = s0 - 16084;
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+28, FBITS(f4));
    if (cnd_) { goto L_088809BC; }
    goto L_088807B4;
L_088807B4:;
    s2 = D_08AEC0F8 - (-16136);
    f0 = BITSF(LD32(s2-16136));
    f0 = f5 + f0;
    goto L_088807C0;
L_088807C0:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1));
    f1 = BITSF(LD32(a0-16140));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_088809B0; }
    goto L_088807E8;
L_088807E8:;
    f0 = BITSF(LD32(s2-16136));
    f0 = f2 + f0;
    goto L_088807F0;
L_088807F0:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0-16140));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_088809A4; }
    goto L_0888081C;
L_0888081C:;
    f0 = BITSF(LD32(s2-16136));
    f0 = f1 + f0;
    goto L_08880824;
L_08880824:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a0-16140));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08880998; }
    goto L_08880850;
L_08880850:;
    f0 = BITSF(LD32(s2-16136));
    f0 = f1 + f0;
    goto L_08880858;
L_08880858:;
    f0 = BITSF(F2I(f0, 1));
    s0 = s0 - 16084;
    ST8(s0+92, 0);
    a0 = s1 + 0;
    a2 = FBITS(f0);
    v0 = v0 + a2;
    ST32(a1+64, v0);
    v0 = 1;
    ST8(s0+93, v0);
    v0 = func_08880710(a0);
    goto L_08880880;
L_08880880:;
    v1 = LD32(s1);
    ST32(s0+80, v0);
    v0 = LD32(v1+140);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880894;
L_08880894:;
    ST32(s0+84, v0);
    a0 = s1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088808A4;
L_088808A4:;
    a0 = s1 + 0;
    a1 = 1;
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088808B8;
L_088808B8:;
    t4 = s0 + 80;
    f1 = BITSF(LD32(sp+64));
    f0 = BITSF(LD32(sp+68));
    t2 = s0 + 64;
    f1 = f21 - f1;
    f0 = f20 - f0;
    t3 = s0 + 84;
    a1 = s3 + 0;
    a2 = sp + 64;
    a3 = sp + 68;
    t0 = sp + 72;
    t1 = sp + 76;
    a0 = s1 + 0;
    ST32(sp+48, v0);
    v0 = sp + 32;
    ST32(sp+52, v1);
    v1 = sp + 48;
    ST32(sp+72, FBITS(f1));
    ST32(sp, t4);
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    ST32(sp+76, FBITS(f0));
    func_08880BE8(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08880914;
L_08880914:;
    a0 = s0 + 0;
    f0 = BITSF(LD32(s2-16136));
    f12 = BITSF(LD32(sp+64));
    f13 = BITSF(LD32(sp+68));
    f14 = BITSF(LD32(sp+72));
    f12 = f12 - f0;
    f13 = f13 - f0;
    f15 = BITSF(LD32(sp+76));
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08880938;
L_08880938:;
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+48));
    f3 = BITSF(LD32(sp+52));
    ST32(s0+52, FBITS(f1));
    a0 = s0 + 0;
    a1 = 1;
    ST32(s0+40, FBITS(f2));
    ST32(s0+44, FBITS(f0));
    ST32(s0+60, FBITS(f3));
    ST32(s0+32, FBITS(f0));
    ST32(s0+48, FBITS(f1));
    ST32(s0+36, FBITS(f2));
    ST32(s0+56, FBITS(f3));
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880974;
L_08880974:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08880998:;
    f0 = BITSF(LD32(s2-16136));
    f0 = f1 - f0;
    goto L_08880858;
L_088809A4:;
    f0 = BITSF(LD32(s2-16136));
    f0 = f1 - f0;
    goto L_08880824;
L_088809B0:;
    f0 = BITSF(LD32(s2-16136));
    f0 = f2 - f0;
    goto L_088807F0;
L_088809BC:;
    s2 = D_08AEC0F8 - (-16136);
    f0 = BITSF(LD32(s2-16136));
    f0 = f5 - f0;
    goto L_088807C0;
}

/* 088809CC */
u64 func_088809CC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088809CC:;
    sp = sp - 32;
    v0 = a1 << 3;
    a1 = a1 < 0x2u;
    ST32(sp+4, 0);
    v1 = v0 + a0;
    cnd_ = a1 == 0;
    ST32(sp, 0);
    if (cnd_) { goto L_088809F8; }
    goto L_088809E8;
L_088809E8:;
    v0 = LD32(v1+180);
    ST32(sp, v0);
    v1 = LD32(v1+184);
    ST32(sp+4, v1);
    goto L_088809F8;
L_088809F8:;
    a2 = LD32(sp);
    a3 = LD32(sp+4);
    v0 = a2 + 0;
    v1 = a3 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08880A10 */
void func_08880A10(u32 a0, u32 a1, float f12, float f13)
{
L_08880A10:;
    a1 = a1 << 3;
    a1 = a1 + a0;
    ST32(a1+184, FBITS(f13));
    ST32(a1+180, FBITS(f12));
    return;
}

/* 08880A24 */
void func_08880A24(u32 a0, u32 a1, u32 a2)
{
    float f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880A24:;
    f13 = BITSF(LD32(a2+4));
    f12 = BITSF(LD32(a2));
    sp = sp - 16;
    func_08880A10(a0, a1, f12, f13);
    goto L_08880A3C;
L_08880A3C:;
    sp = sp + 16;
    return;
}

/* 08880A48 */
void func_08880A48(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08880A48:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = LD32(a1+168);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08880AC4; }
    goto L_08880A68;
L_08880A68:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880A70;
L_08880A70:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880A84;
L_08880A84:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08880AB4; }
    goto L_08880A94;
L_08880A94:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    v0 = s0 + 0;
    goto L_08880AA0;
L_08880AA0:;
    sp = sp + 16;
    return;
L_08880AB4:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880ABC;
L_08880ABC:;
    v0 = s0 + 0;
    goto L_08880AA0;
L_08880AC4:;
    ST32(s0, 0);
    goto L_08880A94;
}

/* 08880ACC */
u32 func_08880ACC(u32 a0)
{
    u32 v0 = 0;
L_08880ACC:;
    v0 = LD32(a0+164);
    return v0;
}

/* 08880AD4 */
rv_t func_08880AD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08880AD4:;
    sp = sp - 272;
    a3 = (u32)-1;
    s2 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08880268(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880AF8;
L_08880AF8:;
    a1 = s1 + 180;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880B04;
L_08880B04:;
    a1 = s1 + 184;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880B10;
L_08880B10:;
    a1 = s1 + 188;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880B1C;
L_08880B1C:;
    a1 = s1 + 192;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880B28;
L_08880B28:;
    a1 = s1 + 164;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880B34;
L_08880B34:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = 256;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08880B44;
L_08880B44:;
    v0 = LD32(s1+168);
    cnd_ = v0 == 0;
    s0 = s1 + 168;
    if (cnd_) { goto L_08880B64; }
    goto L_08880B50;
L_08880B50:;
    cnd_ = sp == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08880BA0; }
    goto L_08880B58;
L_08880B58:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880B60;
L_08880B60:;
    ST32(s1+168, 0);
    goto L_08880B64;
L_08880B64:;
    ST32(s0+8, 0);
    a0 = sp + 0;
    ST32(s0+4, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880B74;
L_08880B74:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880B88;
L_08880B88:;
    a0 = v0 + 0;
    a1 = sp + 0;
    cnd_ = v0 != 0;
    ST32(s1+168, v0);
    if (cnd_) { goto L_08880BD8; }
    goto L_08880B98;
L_08880B98:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_08880BA0;
L_08880BA0:;
    a1 = s0 + 0;
    goto L_08880BA4;
L_08880BA4:;
    a0 = s1 + 0;
    a2 = 1;
    func_088804E8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08880BB0;
L_08880BB0:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08880BC0;
L_08880BC0:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_08880BD8:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08880BE0;
L_08880BE0:;
    a1 = s0 + 0;
    goto L_08880BA4;
}

/* 08880BE8 */
void func_08880BE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144); memcpy(stack_ + 144, PTR(sp_in), 16); /* stack-passed arguments */
L_08880BE8:;
    sp = sp - 144;
    s3 = a1 + 0;
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    a1 = LD32(sp+152);
    fp = a2 + 0;
    s7 = t1 + 0;
    s6 = a3 + 0;
    s5 = t3 + 0;
    s4 = t2 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    ST32(sp+48, t0);
    ST32(sp+52, v0);
    ST32(sp+56, v1);
    ST32(sp+60, a1);
    v0 = func_08889014(a0);
    goto L_08880C58;
L_08880C58:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08880D88; }
    goto L_08880C60;
L_08880C60:;
    v0 = LD32(s2+136);
    goto L_08880C64;
L_08880C64:;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08880D20; }
    goto L_08880C6C;
L_08880C6C:;
    s0 = LD32(s2+148);
    goto L_08880C70;
L_08880C70:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08880C88; }
    goto L_08880C78;
L_08880C78:;
    v0 = LD32(s0+136);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08880CB8; }
    goto L_08880C84;
L_08880C84:;
    goto L_08880C88;
L_08880C88:;
    sp = sp + 144;
    return;
L_08880CB8:;
    a1 = s1 + 0;
    goto L_08880CBC;
L_08880CBC:;
    a0 = s0 + 0;
    v0 = func_08889118(a0, a1);
    goto L_08880CC4;
L_08880CC4:;
    v1 = LD32(sp+52);
    a1 = v0 + 0;
    t1 = LD32(sp+48);
    v0 = LD32(sp+56);
    ST32(sp+4, v1);
    a0 = s2 + 0;
    a2 = s3 + 0;
    v1 = LD32(sp+60);
    a3 = fp + 0;
    t0 = s6 + 0;
    t2 = s7 + 0;
    t3 = s4 + 0;
    ST32(sp+8, v0);
    s1 = s1 + 1;
    ST32(sp, s5);
    ST32(sp+12, v1);
    func_0888101C(a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08880D08;
L_08880D08:;
    v0 = LD32(s0+136);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08880CBC; }
    goto L_08880D18;
L_08880D18:;
    goto L_08880C88;
L_08880D20:;
    a1 = s1 + 0;
    goto L_08880D24;
L_08880D24:;
    a0 = s2 + 0;
    v0 = func_08889118(a0, a1);
    goto L_08880D2C;
L_08880D2C:;
    a1 = v0 + 0;
    v0 = LD32(sp+52);
    v1 = LD32(sp+56);
    t1 = LD32(sp+48);
    ST32(sp+4, v0);
    a0 = s2 + 0;
    a2 = s3 + 0;
    v0 = LD32(sp+60);
    a3 = fp + 0;
    t0 = s6 + 0;
    t2 = s7 + 0;
    t3 = s4 + 0;
    ST32(sp+12, v0);
    s1 = s1 + 1;
    ST32(sp, s5);
    ST32(sp+8, v1);
    func_0888101C(a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08880D70;
L_08880D70:;
    v0 = LD32(s2+136);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08880D24; }
    goto L_08880D80;
L_08880D80:;
    s0 = LD32(s2+148);
    goto L_08880C70;
L_08880D88:;
    a1 = s1 + 0;
    goto L_08880D8C;
L_08880D8C:;
    a0 = s2 + 0;
    v0 = func_0888901C(a0, a1);
    goto L_08880D94;
L_08880D94:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08880E00; }
    goto L_08880D9C;
L_08880D9C:;
    v0 = LD32(v0);
    v0 = v0 & s3;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08880E04; }
    goto L_08880DAC;
L_08880DAC:;
    v1 = LD32(a1+4);
    v0 = v1 < 0x10u;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08880E04; }
    goto L_08880DBC;
L_08880DBC:;
    v0 = v1 << 2;
    v1 = D_08AD4C7C - (19580);
    v1 = v1 + 19580;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08880DD8u: goto L_08880DD8; case 0x08880E00u: goto L_08880E00; case 0x08880E18u: goto L_08880E18; case 0x08880F38u: goto L_08880F38; case 0x08880F48u: goto L_08880F48; case 0x08880F5Cu: goto L_08880F5C; case 0x08880F6Cu: goto L_08880F6C; case 0x08880F80u: goto L_08880F80; case 0x08880FC0u: goto L_08880FC0; default: rs_break(0, 0x08880dd0); }
L_08880DD8:;
    a0 = sp + 16;
    func_088861D0(a0, a1);
    goto L_08880DE0;
L_08880DE0:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(fp));
    f2 = BITSF(LD32(sp+20));
    f1 = f1 + f0;
    ST32(fp, FBITS(f1));
    f0 = BITSF(LD32(s6));
    f0 = f0 + f2;
    ST32(s6, FBITS(f0));
    goto L_08880E00;
L_08880E00:;
    s1 = s1 + 1;
    goto L_08880E04;
L_08880E04:;
    v0 = s1 < s0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08880D8C; }
    goto L_08880E10;
L_08880E10:;
    v0 = LD32(s2+136);
    goto L_08880C64;
L_08880E18:;
    a2 = sp + 32;
    a0 = a2 + 0;
    ST32(sp+64, a2);
    func_088861A4(a0, a1);
    goto L_08880E28;
L_08880E28:;
    v1 = D_08AEC0FC - (-16132);
    f0 = BITSF(LD32(v1-16132));
    f1 = BITSF(LD32(sp+44));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+64);
    if (cnd_) { goto L_08880F28; }
    goto L_08880E4C;
L_08880E4C:;
    a0 = D_08AEC100 - (-16128);
    f0 = BITSF(LD32(a0-16128));
    f0 = f1 + f0;
    goto L_08880E58;
L_08880E58:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(v1-16132));
    a1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a1 << 8;
    if (cnd_) { goto L_08880F1C; }
    goto L_08880E80;
L_08880E80:;
    f0 = BITSF(LD32(a0-16128));
    f0 = f2 + f0;
    goto L_08880E88;
L_08880E88:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(v1-16132));
    a1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08880F10; }
    goto L_08880EB4;
L_08880EB4:;
    f0 = BITSF(LD32(a0-16128));
    f0 = f1 + f0;
    goto L_08880EBC;
L_08880EBC:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(v1-16132));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08880F04; }
    goto L_08880EE8;
L_08880EE8:;
    f0 = BITSF(LD32(a0-16128));
    f0 = f1 + f0;
    goto L_08880EF0;
L_08880EF0:;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    v0 = v0 + a0;
    goto L_08880EFC;
L_08880EFC:;
    ST32(s4, v0);
    goto L_08880E00;
L_08880F04:;
    f0 = BITSF(LD32(a0-16128));
    f0 = f1 - f0;
    goto L_08880EF0;
L_08880F10:;
    f0 = BITSF(LD32(a0-16128));
    f0 = f1 - f0;
    goto L_08880EBC;
L_08880F1C:;
    f0 = BITSF(LD32(a0-16128));
    f0 = f2 - f0;
    goto L_08880E88;
L_08880F28:;
    a0 = D_08AEC100 - (-16128);
    f0 = BITSF(LD32(a0-16128));
    f0 = f1 - f0;
    goto L_08880E58;
L_08880F38:;
    a0 = a1 + 0;
    v0 = func_0888618C(a0);
    goto L_08880F40;
L_08880F40:;
    ST32(s5, v0);
    goto L_08880E00;
L_08880F48:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08880F50;
L_08880F50:;
    a1 = LD32(sp+48);
    ST32(a1, FBITS(f0));
    goto L_08880E00;
L_08880F5C:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08880F64;
L_08880F64:;
    ST32(s7, FBITS(f0));
    goto L_08880E00;
L_08880F6C:;
    a0 = a1 + 0;
    v0 = func_0888620C(a0);
    goto L_08880F74;
L_08880F74:;
    v1 = LD32(sp+52);
    ST32(v1, v0);
    goto L_08880E00;
L_08880F80:;
    a0 = a1 + 0;
    v0 = func_08886204(a0);
    goto L_08880F88;
L_08880F88:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08880E00; }
    goto L_08880F90;
L_08880F90:;
    v0 = LD32(v0);
    a1 = LD32(sp+56);
    ST32(a1, v0);
    v1 = LD32(a0+4);
    ST32(a1+4, v1);
    v1 = LD32(sp+60);
    v0 = LD32(a0+8);
    ST32(v1, v0);
    v1 = LD32(a0+12);
    a0 = LD32(sp+60);
    ST32(a0+4, v1);
    goto L_08880E00;
L_08880FC0:;
    v0 = LD_U8(s4+3);
    f20 = BITSF(v0);
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08880FD0;
L_08880FD0:;
    f1 = (float)(s32)FBITS(f20);
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC100 - (-16128);
    if (cnd_) { goto L_08881010; }
    goto L_08880FEC;
L_08880FEC:;
    f0 = BITSF(LD32(v0-16128));
    f0 = f1 + f0;
    goto L_08880FF4;
L_08880FF4:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s4);
    a0 = FBITS(f0);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    v1 = a0 << 24;
    v0 = v0 | v1;
    goto L_08880EFC;
L_08881010:;
    f0 = BITSF(LD32(v0-16128));
    f0 = f1 - f0;
    goto L_08880FF4;
}

/* 0888101C */
void func_0888101C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96); memcpy(stack_ + 96, PTR(sp_in), 16); /* stack-passed arguments */
L_0888101C:;
    sp = sp - 96;
    s0 = a1 + 0;
    a0 = s0 + 0;
    a1 = a2 + 0;
    s5 = t0 + 0;
    s4 = a3 + 0;
    s3 = t1 + 0;
    s2 = t2 + 0;
    s1 = t3 + 0;
    s6 = LD32(sp+104);
    s7 = LD32(sp+108);
    v0 = func_0887D0EC(a0, a1);
    goto L_08881074;
L_08881074:;
    cnd_ = v0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088810B4; }
    goto L_0888107C;
L_0888107C:;
    ST32(s0+12, v0);
    ST32(s0+4, 0);
    goto L_08881084;
L_08881084:;
    goto L_08881088;
L_08881088:;
    sp = sp + 96;
    return;
L_088810B4:;
    a0 = s0 + 0;
    v0 = func_0887D134(a0);
    goto L_088810BC;
L_088810BC:;
    v1 = v0 + 0;
    v0 = v0 < 0x12u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08881088; }
    goto L_088810CC;
L_088810CC:;
    v0 = v1 << 2;
    v1 = D_08AD4CBC - (19644);
    v1 = v1 + 19644;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08881084u: goto L_08881084; case 0x088810E8u: goto L_088810E8; case 0x08881118u: goto L_08881118; case 0x08881148u: goto L_08881148; case 0x088811A8u: goto L_088811A8; case 0x088811C0u: goto L_088811C0; default: rs_break(0, 0x088810e0); }
L_088810E8:;
    a1 = s0 + 0;
    a0 = sp + 0;
    func_0887D1C8(a0, a1);
    goto L_088810F4;
L_088810F4:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(s4));
    f2 = BITSF(LD32(sp+4));
    f1 = f1 + f0;
    ST32(s4, FBITS(f1));
    f0 = BITSF(LD32(s5));
    f0 = f0 + f2;
    ST32(s5, FBITS(f0));
    goto L_08881084;
L_08881118:;
    a0 = sp + 16;
    a1 = s0 + 0;
    func_0887D350(a0, a1);
    goto L_08881124;
L_08881124:;
    a0 = LD32(sp+16);
    a1 = LD32(sp+24);
    v1 = LD32(sp+28);
    v0 = LD32(sp+20);
    ST32(s6, a0);
    ST32(s6+4, v0);
    ST32(s7+4, v1);
    ST32(s7, a1);
    goto L_08881084;
L_08881148:;
    v0 = LD_U8(s1+3);
    f20 = BITSF(v0);
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08881158;
L_08881158:;
    f1 = (float)(s32)FBITS(f20);
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC104 - (-16124);
    if (cnd_) { goto L_0888119C; }
    goto L_08881174;
L_08881174:;
    f0 = BITSF(LD32(v0-16124));
    f0 = f1 + f0;
    goto L_0888117C;
L_0888117C:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s1);
    v1 = FBITS(f0);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    v1 = v1 << 24;
    v0 = v0 | v1;
    ST32(s1, v0);
    goto L_08881084;
L_0888119C:;
    f0 = BITSF(LD32(v0-16124));
    f0 = f1 - f0;
    goto L_0888117C;
L_088811A8:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_088811B0;
L_088811B0:;
    f1 = BITSF(LD32(s3));
    f1 = f1 * f0;
    ST32(s3, FBITS(f1));
    goto L_08881084;
L_088811C0:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_088811C8;
L_088811C8:;
    f1 = BITSF(LD32(s2));
    f1 = f1 * f0;
    ST32(s2, FBITS(f1));
    goto L_08881084;
}

/* 088811D8 */
rv_t func_088811D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088811D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0887FFC0(a0);
    goto L_088811EC;
L_088811EC:;
    v0 = D_08AF6BD8 - (27608);
    v1 = 1003;
    v0 = v0 + 27608;
    ST32(s0+4, v1);
    ST32(s0, v0);
    ST32(s0+160, 0);
    ST32(s0+164, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08881218 */
rv_t func_08881218(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881218:;
    sp = sp - 16;
    v0 = D_08AF6BD8 - (27608);
    s1 = a0 + 0;
    v0 = v0 + 27608;
    s0 = LD32(a0+160);
    ST32(s1, v0);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08881260; }
    goto L_08881244;
L_08881244:;
    a0 = s1 + 0;
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888124C;
L_0888124C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08881260:;
    func_08AB128C(a0, t1, t2, t3);
    goto L_08881268;
L_08881268:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881270;
L_08881270:;
    ST32(s1+160, 0);
    goto L_08881244;
}

/* 08881278 */
rv_t func_08881278(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881278:;
    sp = sp - 16;
    v0 = D_08AF6BD8 - (27608);
    s0 = a0 + 0;
    v0 = v0 + 27608;
    s1 = LD32(a0+160);
    ST32(s0, v0);
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088812C8; }
    goto L_088812A4;
L_088812A4:;
    a0 = s0 + 0;
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088812AC;
L_088812AC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088812B4;
L_088812B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088812C8:;
    func_08AB128C(a0, t1, t2, t3);
    goto L_088812D0;
L_088812D0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088812D8;
L_088812D8:;
    ST32(s0+160, 0);
    goto L_088812A4;
}

/* 088812E0 */
rv_t func_088812E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088812E0:;
    sp = sp - 32;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    f20 = f12;
    if (cnd_) { goto L_08881320; }
    goto L_08881308;
L_08881308:;
    goto L_0888130C;
L_0888130C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08881320:;
    v1 = LD32(s0+48);
    goto L_08881324;
L_08881324:;
    v0 = s1 << 2;
    f12 = f20;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+12);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881344;
L_08881344:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_08881324; }
    goto L_08881354;
L_08881354:;
    goto L_0888130C;
}

/* 0888135C */
rv_t func_0888135C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888135C:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888139C; }
    goto L_08881384;
L_08881384:;
    goto L_08881388;
L_08881388:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888139C:;
    v1 = LD32(s0+48);
    goto L_088813A0;
L_088813A0:;
    v0 = s1 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+8);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088813C0;
L_088813C0:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_088813A0; }
    goto L_088813D0;
L_088813D0:;
    goto L_08881388;
}

/* 088813D8 */
rv_t func_088813D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088813D8:;
    return (rv_t){ v0, v1, f0 };
}

/* 088813E0 */
rv_t func_088813E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088813E0:;
    sp = sp - 64;
    s5 = a0 + 0;
    s6 = a1 + 0;
    { rv_t r_ = func_08880148(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881414;
L_08881414:;
    s0 = LD32(s5+160);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_088816D0; }
    goto L_08881420;
L_08881420:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881428;
L_08881428:;
    s2 = v0 + 0;
    ST32(v0+4, 0);
    v0 = D_08AEC108 - (-16120);
    f0 = BITSF(LD32(v0-16120));
    s3 = LD32(s6+160);
    ST32(s2+12, 0);
    ST32(s2+16, FBITS(f0));
    s0 = LD32(s3+4);
    f0 = BITSF(LD32(s3+12));
    f1 = BITSF(LD32(s3+16));
    a0 = s0 << 1;
    ST32(s2+12, FBITS(f0));
    a0 = a0 + s0;
    a0 = a0 << 2;
    ST32(s2+16, FBITS(f1));
    ST32(s2, 0);
    ST32(s2+8, 0);
    ST32(s2+4, s0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881474;
L_08881474:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08881490; }
    goto L_08881480;
L_08881480:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08881488;
L_08881488:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08881488; }
    goto L_08881490;
L_08881490:;
    v0 = LD32(s3);
    cnd_ = v0 != 0;
    ST32(s2+8, a0);
    if (cnd_) { goto L_0888151C; }
    goto L_0888149C;
L_0888149C:;
    t0 = LD32(s2+4);
    goto L_088814A0;
L_088814A0:;
    cnd_ = t0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088814E4; }
    goto L_088814A8;
L_088814A8:;
    a1 = LD32(s3+8);
    a3 = LD32(s2+8);
    a0 = 0 + 0;
    goto L_088814B4;
L_088814B4:;
    v0 = a1 + a0;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    a2 = a2 + 1;
    v0 = a3 + a0;
    v1 = a2 < t0;
    ST32(v0+8, FBITS(f0));
    a0 = a0 + 12;
    ST32(v0, FBITS(f1));
    cnd_ = v1 != 0;
    ST32(v0+4, FBITS(f2));
    if (cnd_) { goto L_088814B4; }
    goto L_088814E4;
L_088814E4:;
    f0 = BITSF(LD32(s6+164));
    ST32(s5+160, s2);
    ST32(s5+164, FBITS(f0));
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0888151C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881524;
L_08881524:;
    ST32(v0+12, 0);
    ST32(s2, v0);
    a1 = LD32(s3);
    ST32(v0, 0);
    f0 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(a1+8));
    a0 = LD32(v0+12);
    ST32(v0+4, FBITS(f0));
    ST32(v0+8, FBITS(f1));
    v1 = LD32(a1+12);
    v1 = v1 & 0x1;
    a0 = (a0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(v0+12, a0);
    a1 = LD32(s3);
    a0 = LD32(s2);
    v0 = LD32(a1+12);
    v1 = LD32(a0+12);
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(a0+12, v1);
    v0 = LD32(s3);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08881584; }
    goto L_08881580;
L_08881580:;
    a2 = LD32(v0);
    goto L_08881584;
L_08881584:;
    cnd_ = a2 == 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_0888149C; }
    goto L_0888158C;
L_0888158C:;
    s4 = sp + 0;
    f0 = BITSF(LD32(s1));
    goto L_08881594;
L_08881594:;
    f1 = BITSF(LD32(s1+4));
    f2 = BITSF(LD32(s1+8));
    ST32(sp, FBITS(f0));
    v1 = 0 + 0;
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    v0 = LD32(s2);
    f20 = BITSF(LD32(s1+12));
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088815C0; }
    goto L_088815BC;
L_088815BC:;
    v1 = LD32(v0);
    goto L_088815C0;
L_088815C0:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08881678; }
    goto L_088815C8;
L_088815C8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088815D4; }
    goto L_088815D0;
L_088815D0:;
    v1 = LD32(v0);
    goto L_088815D4;
L_088815D4:;
    v0 = LD32(v1+16);
    cnd_ = v0 == 0;
    s0 = v1 + 0;
    if (cnd_) { goto L_08881618; }
    goto L_088815E0;
L_088815E0:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08881618; }
    goto L_088815F4;
L_088815F4:;
    s0 = v0 + 0;
    goto L_088815F8;
L_088815F8:;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08881618; }
    goto L_08881604;
L_08881604:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { s0 = v0 + 0; goto L_088815F8; }
    goto L_08881618;
L_08881618:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881620;
L_08881620:;
    ST32(v0+16, 0);
    v1 = v0 + 0;
    v0 = LD32(s0+16);
    f1 = BITSF(LD32(s4));
    f2 = BITSF(LD32(s4+4));
    ST32(v1+16, v0);
    f0 = BITSF(LD32(s4+8));
    v0 = LD32(s0+16);
    ST32(v1, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    ST32(v1+8, FBITS(f0));
    ST32(v1+12, FBITS(f20));
    cnd_ = v0 == 0;
    ST32(v1+20, 0);
    if (cnd_) { goto L_0888165C; }
    goto L_08881658;
L_08881658:;
    ST32(v0+20, v1);
    goto L_0888165C;
L_0888165C:;
    ST32(v1+20, s0);
    ST32(s0+16, v1);
    goto L_08881664;
L_08881664:;
    s1 = LD32(s1+16);
    cnd_ = s1 != 0;
    if (cnd_) { f0 = BITSF(LD32(s1)); goto L_08881594; }
    goto L_08881670;
L_08881670:;
    t0 = LD32(s2+4);
    goto L_088814A0;
L_08881678:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088816B4; }
    goto L_08881680;
L_08881680:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881688;
L_08881688:;
    f0 = BITSF(LD32(s4));
    f1 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4+8));
    ST32(v0+16, 0);
    ST32(v0+20, 0);
    ST32(v0, FBITS(f0));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    ST32(v0+12, FBITS(f20));
    ST32(s0, v0);
    goto L_08881664;
L_088816B4:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088816BC;
L_088816BC:;
    ST32(v0+12, 0);
    s0 = v0 + 0;
    ST32(v0, 0);
    ST32(s2, v0);
    goto L_08881680;
L_088816D0:;
    a0 = s0 + 0;
    func_08AB128C(a0, 0, 0, 0);
    goto L_088816D8;
L_088816D8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088816E0;
L_088816E0:;
    goto L_08881420;
}

/* 088816E8 */
u64 func_088816E8(u32 a0, u32 a1, float f12, float f18)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_088816E8:;
    sp = sp - 304;
    s1 = LD32(a1+160);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08881C04; }
    goto L_08881738;
L_08881738:;
    a2 = LD32(s1);
    v0 = 0 + 0;
    cnd_ = a2 == 0;
    a3 = a2 + 0;
    if (cnd_) { goto L_0888174C; }
    goto L_08881748;
L_08881748:;
    v0 = LD32(a2);
    goto L_0888174C;
L_0888174C:;
    cnd_ = v0 == 0;
    if (cnd_) { f2 = BITSF(LD32(s1+12)); goto L_08881B10; }
    goto L_08881754;
L_08881754:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08881760; }
    goto L_0888175C;
L_0888175C:;
    v0 = LD32(a3);
    goto L_08881760;
L_08881760:;
    v1 = v0 + 0;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(v1+16); goto L_088817AC; }
    goto L_08881770;
L_08881770:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(v1+16); goto L_088817AC; }
    goto L_08881784;
L_08881784:;
    v1 = v0 + 0;
    goto L_08881788;
L_08881788:;
    v0 = LD32(v0+16);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(v1+16); goto L_088817AC; }
    goto L_08881794;
L_08881794:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = v0 + 0; goto L_08881788; }
    goto L_088817A8;
L_088817A8:;
    a0 = LD32(v1+16);
    goto L_088817AC;
L_088817AC:;
    cnd_ = a0 == 0;
    if (cnd_) { f0 = BITSF(LD32(v1+8)); goto L_08881AF8; }
    goto L_088817B4;
L_088817B4:;
    f1 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(a0+12));
    a1 = LD32(v1+20);
    f2 = f12 - f1;
    f0 = f0 - f1;
    v0 = D_08AEC10C - (-16116);
    f1 = BITSF(LD32(v0-16116));
    cnd_ = a1 == 0;
    f26 = f2 / f0;
    if (cnd_) { goto L_088817E4; }
    goto L_088817D8;
L_088817D8:;
    t0 = LD32(a0+16);
    cnd_ = t0 != 0;
    if (cnd_) { f18 = BITSF(LD32(a1+8)); goto L_088818AC; }
    goto L_088817E4;
L_088817E4:;
    f6 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a0));
    f4 = BITSF(LD32(a0+4));
    f6 = f6 * f26;
    f3 = f3 * f26;
    f4 = f4 * f26;
    f2 = f1 - f26;
    ST32(sp+24, FBITS(f6));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    f5 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f5 = f5 * f2;
    f0 = f0 * f2;
    f1 = f1 * f2;
    f6 = f6 + f5;
    f3 = f3 + f0;
    f4 = f4 + f1;
    ST32(sp+32, FBITS(f0));
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp+8, FBITS(f6));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f5));
    goto L_08881848;
L_08881848:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(s0, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f0));
    goto L_08881860;
L_08881860:;
    v0 = s0 + 0;
    sp = sp + 304;
    return (u64)v0 | ((u64)v1 << 32);
L_088818AC:;
    f16 = BITSF(LD32(a1));
    f17 = BITSF(LD32(a1+4));
    ST32(sp+40, FBITS(f18));
    v0 = D_08AEC110 - (-16112);
    f9 = f16 + f16;
    ST32(sp+32, FBITS(f16));
    f10 = f17 + f17;
    f8 = f18 + f18;
    ST32(sp+36, FBITS(f17));
    f13 = f26 * f26;
    f22 = BITSF(LD32(v1+8));
    f20 = BITSF(LD32(v1));
    f21 = BITSF(LD32(v1+4));
    ST32(sp+24, FBITS(f22));
    v1 = D_08AEC114 - (-16108);
    f19 = f26 * f13;
    ST32(sp+16, FBITS(f20));
    ST32(sp+20, FBITS(f21));
    f11 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(v0-16112));
    f6 = BITSF(LD32(a0));
    f7 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(v1-16108));
    f15 = f11 * f0;
    f12 = f6 * f0;
    f23 = f22 * f2;
    f14 = f20 * f2;
    f3 = f20 * f0;
    f4 = f21 * f0;
    f5 = f22 * f0;
    f2 = f21 * f2;
    f0 = f7 * f0;
    v0 = D_08AEC118 - (-16104);
    f1 = BITSF(LD32(v0-16104));
    ST32(sp+48, FBITS(f6));
    f3 = f3 - f12;
    f4 = f4 - f0;
    ST32(sp+52, FBITS(f7));
    f12 = f11 * f1;
    f0 = f6 * f1;
    ST32(sp+56, FBITS(f11));
    f1 = f7 * f1;
    f5 = f5 - f15;
    f9 = f9 - f14;
    f10 = f10 - f2;
    f8 = f8 - f23;
    f2 = BITSF(LD32(t0));
    f15 = BITSF(LD32(t0+8));
    f14 = BITSF(LD32(t0+4));
    f9 = f9 + f0;
    f10 = f10 + f1;
    f8 = f8 + f12;
    f3 = f3 + f2;
    f4 = f4 + f14;
    f5 = f5 + f15;
    f9 = f9 - f2;
    f3 = f3 - f16;
    f4 = f4 - f17;
    f5 = f5 - f18;
    f10 = f10 - f14;
    f8 = f8 - f15;
    f6 = f6 - f16;
    f7 = f7 - f17;
    f11 = f11 - f18;
    f27 = f5 * f19;
    f30 = f8 * f13;
    f12 = f3 * f19;
    f24 = f9 * f13;
    f19 = f4 * f19;
    f13 = f10 * f13;
    f31 = f11 * f26;
    f25 = f6 * f26;
    f28 = f27 + f30;
    f16 = f12 + f24;
    f17 = f19 + f13;
    f26 = f7 * f26;
    f29 = f28 + f31;
    f18 = f16 + f25;
    v0 = D_08AEC11C - (-16100);
    f23 = f17 + f26;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f14));
    ST32(sp+72, FBITS(f15));
    ST32(sp+80, FBITS(f3));
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f5));
    ST32(sp+144, FBITS(f9));
    ST32(sp+148, FBITS(f10));
    ST32(sp+152, FBITS(f8));
    ST32(sp+176, FBITS(f6));
    f0 = BITSF(LD32(v0-16100));
    ST32(sp+180, FBITS(f7));
    f2 = f29 * f0;
    f1 = f18 * f0;
    f0 = f23 * f0;
    ST32(sp+184, FBITS(f11));
    f22 = f2 + f22;
    f20 = f1 + f20;
    f21 = f0 + f21;
    ST32(sp+192, FBITS(f12));
    ST32(sp+160, FBITS(f20));
    ST32(sp+164, FBITS(f21));
    ST32(sp+168, FBITS(f22));
    ST32(sp+196, FBITS(f19));
    ST32(sp+200, FBITS(f27));
    ST32(sp+208, FBITS(f24));
    ST32(sp+212, FBITS(f13));
    ST32(sp+216, FBITS(f30));
    ST32(sp+96, FBITS(f16));
    ST32(sp+100, FBITS(f17));
    ST32(sp+104, FBITS(f28));
    ST32(sp+224, FBITS(f25));
    ST32(sp+228, FBITS(f26));
    ST32(sp+232, FBITS(f31));
    ST32(sp+112, FBITS(f18));
    ST32(sp+116, FBITS(f23));
    ST32(sp+120, FBITS(f29));
    ST32(sp+128, FBITS(f1));
    ST32(sp+132, FBITS(f0));
    ST32(sp+136, FBITS(f2));
    v0 = LD32(a3+12);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = sp + 160;
    if (cnd_) { goto L_08881ADC; }
    goto L_08881A9C;
L_08881A9C:;
    v0 = LD32(a2+12);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(a2+8)); goto L_08881AC8; }
    goto L_08881AAC;
L_08881AAC:;
    f0 = BITSF(LD32(sp+160));
    goto L_08881AB0;
L_08881AB0:;
    f1 = BITSF(LD32(sp+164));
    ST32(sp, FBITS(f0));
    f0 = BITSF(LD32(sp+168));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    goto L_08881848;
L_08881AC8:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_0883251C(a1, f12);
    goto L_08881AD4;
L_08881AD4:;
    f0 = BITSF(LD32(sp+160));
    goto L_08881AB0;
L_08881ADC:;
    f12 = BITSF(LD32(a3+4));
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_088324D0(a1, f12);
    goto L_08881AEC;
L_08881AEC:;
    a2 = LD32(s1);
    goto L_08881A9C;
L_08881AF4:;
    f0 = BITSF(LD32(v1+8));
    goto L_08881AF8;
L_08881AF8:;
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    goto L_08881B00;
L_08881B00:;
    ST32(sp+8, FBITS(f0));
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    goto L_08881848;
L_08881B10:;
    f0 = BITSF(LD32(s1+16));
    v0 = LD32(s1+4);
    f1 = f12 - f2;
    f0 = f0 - f2;
    a2 = v0 - 1;
    f3 = BITSF(a2);
    v0 = D_08AEC10C - (-16116);
    f1 = f1 / f0;
    f2 = (float)(s32)FBITS(f3);
    f1 = f1 * f2;
    f2 = BITSF(F2I(f1, 1));
    a1 = FBITS(f2);
    cnd_ = (s32)a1 < 0;
    f0 = BITSF(LD32(v0-16116));
    if (cnd_) { goto L_08881BF0; }
    goto L_08881B48;
L_08881B48:;
    v0 = (s32)a1 < (s32)a2;
    cnd_ = v0 != 0;
    f6 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_08881B6C; }
    goto L_08881B54;
L_08881B54:;
    v1 = LD32(s1+8);
    v0 = a2 << 1;
    v0 = v0 + a2;
    v0 = v0 << 2;
    v1 = v1 + v0;
    goto L_08881AF4;
L_08881B6C:;
    v1 = LD32(s1+8);
    v0 = a1 << 1;
    v0 = v0 + a1;
    f6 = f1 - f6;
    v0 = v0 << 2;
    v1 = v1 + v0;
    f5 = BITSF(LD32(v1));
    f0 = f0 - f6;
    f3 = BITSF(LD32(v1+4));
    f4 = BITSF(LD32(v1+8));
    v0 = v1 + 12;
    f5 = f5 * f0;
    f4 = f4 * f0;
    f3 = f3 * f0;
    ST32(sp+224, FBITS(f5));
    ST32(sp+228, FBITS(f3));
    ST32(sp+232, FBITS(f4));
    f0 = BITSF(LD32(v1+12));
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = f0 * f6;
    f2 = f2 * f6;
    f1 = f1 * f6;
    f5 = f5 + f0;
    f4 = f4 + f2;
    f3 = f3 + f1;
    ST32(sp+208, FBITS(f0));
    ST32(sp, FBITS(f5));
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f4));
    ST32(sp+212, FBITS(f1));
    ST32(sp+216, FBITS(f2));
    goto L_08881848;
L_08881BF0:;
    v0 = LD32(s1+8);
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    goto L_08881B00;
L_08881C04:;
    ST32(a0+8, 0);
    ST32(a0+4, 0);
    ST32(a0, 0);
    goto L_08881860;
}

/* 08881C14 */
u64 func_08881C14(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881C14:;
    sp = sp - 16;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    ST32(a0+164, FBITS(f12));
    if (cnd_) { goto L_08881C4C; }
    goto L_08881C38;
L_08881C38:;
    goto L_08881C3C;
L_08881C3C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08881C4C:;
    v1 = LD32(s0+48);
    goto L_08881C50;
L_08881C50:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+72);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881C6C;
L_08881C6C:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_08881C50; }
    goto L_08881C7C;
L_08881C7C:;
    goto L_08881C3C;
}

/* 08881C84 */
rv_t func_08881C84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08881C84:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_088870FC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881CA0;
L_08881CA0:;
    f12 = BITSF(LD32(s1+164));
    a1 = s1 + 0;
    a0 = sp + 0;
    { u64 r_ = func_088816E8(a0, a1, f12, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881CB0;
L_08881CB0:;
    f2 = BITSF(LD32(s0));
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    v0 = s0 + 0;
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(s0, FBITS(f2));
    ST32(s0+4, FBITS(f3));
    ST32(s0+8, FBITS(f4));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08881CF8 */
rv_t func_08881CF8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881CF8:;
    sp = sp - 16;
    { rv_t r_ = func_08887120(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881D08;
L_08881D08:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08881D14 */
rv_t func_08881D14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881D14:;
    sp = sp - 16;
    { rv_t r_ = func_08887184(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881D24;
L_08881D24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08881D30 */
rv_t func_08881D30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881D30:;
    sp = sp - 16;
    { rv_t r_ = func_088871B0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881D40;
L_08881D40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08881D4C */
rv_t func_08881D4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881D4C:;
    sp = sp - 16;
    a3 = (u32)-1;
    s1 = a0 + 0;
    s2 = a1 + 0;
    { rv_t r_ = func_08880268(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881D70;
L_08881D70:;
    s0 = LD32(s1+160);
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08881DDC; }
    goto L_08881D7C;
L_08881D7C:;
    a0 = 20;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881D84;
L_08881D84:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    ST32(v0, 0);
    v0 = D_08AEC124 - (-16092);
    a1 = s2 + 0;
    f0 = BITSF(LD32(v0-16092));
    ST32(s0+4, 0);
    ST32(s0+16, FBITS(f0));
    ST32(s0+8, 0);
    ST32(s0+12, 0);
    func_08AA5CD4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08881DB0;
L_08881DB0:;
    ST32(s1+160, s0);
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08881DC4;
L_08881DC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08881DDC:;
    func_08AB128C(a0, 0, 0, 0);
    goto L_08881DE4;
L_08881DE4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881DEC;
L_08881DEC:;
    goto L_08881D7C;
}

/* 08881DF4 */
rv_t func_08881DF4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881DF4:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0887FFC0(a0);
    goto L_08881E08;
L_08881E08:;
    v0 = D_08AEC148 - (-16056);
    f0 = BITSF(LD32(v0-16056));
    v0 = D_08AF6C80 - (27776);
    f1 = BITSF(0);
    v0 = v0 + 27776;
    v1 = s0 + 160;
    ST32(s0, v0);
    v0 = (u32)-1;
    a1 = s0 + 180;
    ST32(v1+8, 0);
    a0 = s0 + 228;
    ST32(v1+4, 0);
    ST32(s0+176, v0);
    v0 = 1005;
    ST32(s0+200, FBITS(f0));
    ST32(s0+192, FBITS(f1));
    ST32(s0+196, FBITS(f1));
    ST32(s0+172, 0);
    ST32(s0+160, 0);
    ST32(a1+8, 0);
    ST32(a1+4, 0);
    ST32(s0+180, 0);
    ST32(s0+4, v0);
    ST32(s0+204, 0);
    ST32(s0+208, 0);
    ST32(s0+212, 0);
    ST32(s0+216, 0);
    ST32(s0+220, 0);
    ST32(s0+224, 0);
    ST32(s0+228, FBITS(f1));
    ST32(a0+12, FBITS(f1));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08881E9C */
rv_t func_08881E9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881E9C:;
    sp = sp - 16;
    v0 = D_08AF6C80 - (27776);
    s0 = a0 + 0;
    v0 = v0 + 27776;
    v1 = LD32(a0+216);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08881F3C; }
    goto L_08881ECC;
L_08881ECC:;
    v0 = LD32(s0+180);
    s1 = s0 + 180;
    s2 = s0 + 160;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08881F2C; }
    goto L_08881EE0;
L_08881EE0:;
    v0 = LD32(s0+160);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08881F1C; }
    goto L_08881EF4;
L_08881EF4:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881F04;
L_08881F04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08881F1C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881F24;
L_08881F24:;
    ST32(s0+160, 0);
    goto L_08881EF4;
L_08881F2C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881F34;
L_08881F34:;
    ST32(s0+180, 0);
    goto L_08881EE0;
L_08881F3C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881F44;
L_08881F44:;
    ST32(s0+208, 0);
    ST32(s0+212, 0);
    ST32(s0+216, 0);
    goto L_08881ECC;
}

/* 08881F54 */
rv_t func_08881F54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08881F54:;
    sp = sp - 16;
    v0 = D_08AF6C80 - (27776);
    s0 = a0 + 0;
    v0 = v0 + 27776;
    v1 = LD32(a0+216);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08881FFC; }
    goto L_08881F84;
L_08881F84:;
    v0 = LD32(s0+180);
    s1 = s0 + 180;
    s2 = s0 + 160;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08881FEC; }
    goto L_08881F98;
L_08881F98:;
    v0 = LD32(s0+160);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08881FDC; }
    goto L_08881FAC;
L_08881FAC:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08880004(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881FBC;
L_08881FBC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881FC4;
L_08881FC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08881FDC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881FE4;
L_08881FE4:;
    ST32(s0+160, 0);
    goto L_08881FAC;
L_08881FEC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08881FF4;
L_08881FF4:;
    ST32(s0+180, 0);
    goto L_08881F98;
L_08881FFC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882004;
L_08882004:;
    ST32(s0+208, 0);
    ST32(s0+212, 0);
    ST32(s0+216, 0);
    goto L_08881F84;
}

/* 08882014 */
rv_t func_08882014(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08882014:;
    sp = sp - 16;
    { rv_t r_ = func_088800A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882024;
L_08882024:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08882030 */
rv_t func_08882030(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08882030:;
    sp = sp - 96;
    s0 = a0 + 0;
    s1 = a1 + 0;
    f23 = f15;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    ST32(sp+36, 0);
    f0 = func_088825F4(a0);
    goto L_08882070;
L_08882070:;
    a0 = s0 + 0;
    ST32(sp+52, FBITS(f0));
    f0 = func_088825FC(a0);
    goto L_0888207C;
L_0888207C:;
    a0 = s0 + 0;
    ST32(sp+44, FBITS(f0));
    f0 = func_08882604(a0);
    goto L_08882088;
L_08882088:;
    a0 = s0 + 0;
    ST32(sp+48, FBITS(f0));
    v0 = func_0888260C(a0);
    goto L_08882094;
L_08882094:;
    v1 = LD32(s0+176);
    ST32(sp+32, v0);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088822DC; }
    goto L_088820A8;
L_088820A8:;
    v1 = s0 + 228;
    goto L_088820AC;
L_088820AC:;
    a0 = D_08AEC150 - (-16048);
    f3 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(a0-16048));
    f1 = BITSF(F2I(f20, 1));
    f2 = BITSF(F2I(f21, 1));
    f5 = f3 * f0;
    f0 = BITSF(0);
    f4 = (float)(s32)FBITS(f1);
    f3 = (float)(s32)FBITS(f2);
    fcc = FCMP(f0, f5, 12);
    ST32(sp+24, FBITS(f22));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+28, FBITS(f23));
    if (cnd_) { goto L_088822CC; }
    goto L_088820E8;
L_088820E8:;
    a1 = D_08AEC154 - (-16044);
    f0 = BITSF(LD32(a1-16044));
    f0 = f5 + f0;
    goto L_088820F4;
L_088820F4:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1));
    f1 = BITSF(LD32(a0-16048));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a2 << 8;
    if (cnd_) { goto L_088822C0; }
    goto L_0888211C;
L_0888211C:;
    f0 = BITSF(LD32(a1-16044));
    f0 = f2 + f0;
    goto L_08882124;
L_08882124:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a0-16048));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_088822B4; }
    goto L_08882150;
L_08882150:;
    f0 = BITSF(LD32(a1-16044));
    f0 = f1 + f0;
    goto L_08882158;
L_08882158:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a0-16048));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_088822A8; }
    goto L_08882184;
L_08882184:;
    f0 = BITSF(LD32(a1-16044));
    f0 = f1 + f0;
    goto L_0888218C;
L_0888218C:;
    f0 = BITSF(F2I(f0, 1));
    v1 = LD32(s0);
    a0 = FBITS(f0);
    v0 = v0 + a0;
    ST32(sp+56, v0);
    v0 = LD32(v1+140);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088821AC;
L_088821AC:;
    a0 = LD32(s0+220);
    cnd_ = a0 == 0;
    ST32(sp+60, v0);
    if (cnd_) { goto L_088821C4; }
    goto L_088821B8;
L_088821B8:;
    a1 = LD32(s0+224);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08882298; }
    goto L_088821C4;
L_088821C4:;
    v1 = LD32(s0+176);
    v0 = sp + 32;
    a3 = sp + 44;
    a1 = s1 + 0;
    a0 = s0 + 0;
    a2 = sp + 16;
    t0 = sp + 48;
    t1 = sp + 52;
    t2 = sp + 56;
    t3 = sp + 60;
    ST32(sp+40, v1);
    v1 = sp + 36;
    ST32(sp, v0);
    v0 = sp + 40;
    ST32(sp+4, v1);
    ST32(sp+8, v0);
    func_08882ACC(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08882208;
L_08882208:;
    a0 = LD32(sp+60);
    { u64 r_ = func_088CD6B0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882210;
L_08882210:;
    a0 = LD32(sp+40);
    s0 = v0 + 0;
    func_088CD5B0(a0);
    goto L_0888221C;
L_0888221C:;
    a3 = LD32(sp+36);
    cnd_ = a3 == 0;
    f12 = BITSF(LD32(sp+44));
    if (cnd_) { goto L_08882264; }
    goto L_08882228;
L_08882228:;
    f0 = BITSF(0);
    fcc = FCMP(f12, f0, 2);
    cnd_ = fcc;
    v0 = LD32(sp+32);
    if (cnd_) { goto L_08882290; }
    goto L_0888223C;
L_0888223C:;
    v0 = v0 | 0x100;
    goto L_08882240;
L_08882240:;
    ST32(sp+32, v0);
    v0 = D_08AEC14C - (-16052);
    a0 = sp + 16;
    f13 = BITSF(LD32(sp+48));
    f14 = BITSF(LD32(v0-16052));
    f15 = BITSF(LD32(sp+52));
    a1 = LD32(sp+56);
    a2 = LD32(sp+32);
    { rv_t r_ = func_088CBE34(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882264;
L_08882264:;
    a0 = s0 + 0;
    { u64 r_ = func_088CD6B0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888226C;
L_0888226C:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08882290:;
    v0 = v0 | 0x180;
    goto L_08882240;
L_08882298:;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088822A0;
L_088822A0:;
    ST32(sp+36, v0);
    goto L_088821C4;
L_088822A8:;
    f0 = BITSF(LD32(a1-16044));
    f0 = f1 - f0;
    goto L_0888218C;
L_088822B4:;
    f0 = BITSF(LD32(a1-16044));
    f0 = f1 - f0;
    goto L_08882158;
L_088822C0:;
    f0 = BITSF(LD32(a1-16044));
    f0 = f2 - f0;
    goto L_08882124;
L_088822CC:;
    a1 = D_08AEC154 - (-16044);
    f0 = BITSF(LD32(a1-16044));
    f0 = f5 - f0;
    goto L_088820F4;
L_088822DC:;
    a0 = s0 + 0;
    v0 = func_088825EC(a0);
    goto L_088822E4;
L_088822E4:;
    cnd_ = v0 == 0;
    v1 = s0 + 228;
    if (cnd_) { goto L_088820AC; }
    goto L_088822EC;
L_088822EC:;
    a0 = s0 + 0;
    v0 = func_088825EC(a0);
    goto L_088822F4;
L_088822F4:;
    a0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088822FC;
L_088822FC:;
    ST32(s0+176, v0);
    goto L_088820A8;
}

/* 08882304 */
rv_t func_08882304(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08882304:;
    sp = sp - 32;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s3 = LD32(a0+208);
    { u64 r_ = func_08882AAC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882330;
L_08882330:;
    ST32(s1+224, 0);
    cnd_ = s3 == 0;
    ST32(s1+220, 0);
    if (cnd_) { goto L_08882378; }
    goto L_0888233C;
L_0888233C:;
    s4 = s1 + 228;
    a1 = s2 + 0;
    goto L_08882344;
L_08882344:;
    a0 = s1 + 0;
    v0 = func_088826F8(a0, a1);
    goto L_0888234C;
L_0888234C:;
    a1 = LD32(v0+4);
    a2 = LD32(v0);
    a3 = LD32(s1+172);
    a0 = s1 + 0;
    s0 = v0 + 0;
    s2 = s2 + 1;
    v0 = func_088824D8(a1, a2, a3);
    goto L_08882368;
L_08882368:;
    cnd_ = v0 != 0;
    v1 = s2 < s3;
    if (cnd_) { goto L_08882398; }
    goto L_08882370;
L_08882370:;
    cnd_ = v1 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08882344; }
    goto L_08882378;
L_08882378:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08882398:;
    v1 = LD32(s0+8);
    v0 = s0 + 16;
    f3 = BITSF(LD32(s0+16));
    ST32(s1+220, v1);
    f0 = BITSF(LD32(v0+12));
    v1 = LD32(s0+12);
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(s1+228, FBITS(f3));
    ST32(s4+12, FBITS(f0));
    ST32(s1+224, v1);
    ST32(s4+4, FBITS(f1));
    ST32(s4+8, FBITS(f2));
    goto L_08882378;
}

/* 088823D0 */
rv_t func_088823D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088823D0:;
    sp = sp - 48;
    s3 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08880148(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088823F4;
L_088823F4:;
    a0 = s3 + 0;
    v0 = func_088825EC(a0);
    goto L_088823FC;
L_088823FC:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08882534(a0, a1, 0, 0, 0);
    goto L_08882408;
L_08882408:;
    a0 = s3 + 0;
    f0 = func_088825F4(a0);
    goto L_08882410;
L_08882410:;
    ST32(s1+200, FBITS(f0));
    a0 = s3 + 0;
    v0 = func_0888260C(a0);
    goto L_0888241C;
L_0888241C:;
    ST32(s1+204, v0);
    a0 = s1 + 160;
    a1 = s3 + 160;
    { rv_t r_ = func_0887E394(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888242C;
L_0888242C:;
    v0 = LD32(s1+216);
    cnd_ = v0 == 0;
    s2 = LD32(s3+208);
    if (cnd_) { goto L_088824C4; }
    goto L_08882438;
L_08882438:;
    cnd_ = s2 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0888245C; }
    goto L_08882440;
L_08882440:;
    goto L_08882444;
L_08882444:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0888245C:;
    a1 = s0 + 0;
    goto L_08882460;
L_08882460:;
    a0 = s3 + 0;
    v0 = func_088826F8(a0, a1);
    goto L_08882468;
L_08882468:;
    s0 = s0 + 1;
    v1 = v0 + 16;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    t1 = sp + 0;
    if (cnd_) { goto L_088824B0; }
    goto L_0888247C;
L_0888247C:;
    f3 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v0+16));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    t0 = LD32(v0);
    a1 = LD32(v0+8);
    a2 = LD32(v0+12);
    a3 = LD32(v0+4);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    { rv_t r_ = func_08882614(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088824B0;
L_088824B0:;
    v0 = s0 < s2;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = s0 + 0; goto L_08882460; }
    goto L_088824BC;
L_088824BC:;
    goto L_08882444;
L_088824C4:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_08882918(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088824D0;
L_088824D0:;
    goto L_08882438;
}

/* 088824D8 */
u32 func_088824D8(u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u32 t_;
L_088824D8:;
    v0 = a1 < 0x6u;
    cnd_ = v0 == 0;
    v1 = D_08AD4D04 - (19716);
    if (cnd_) { goto L_08882508; }
    goto L_088824E4;
L_088824E4:;
    v0 = a1 << 2;
    v1 = v1 + 19716;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088824FCu: goto L_088824FC; case 0x08882508u: goto L_08882508; case 0x08882510u: goto L_08882510; case 0x08882518u: goto L_08882518; case 0x08882524u: goto L_08882524; case 0x0888252Cu: goto L_0888252C; default: rs_break(0, 0x088824f4); }
L_088824FC:;
    v0 = a3 ^ a2;
    v0 = v0 < 0x1u;
    return v0;
L_08882508:;
    v0 = 1;
    return v0;
L_08882510:;
    v0 = (s32)a2 < (s32)a3;
    return v0;
L_08882518:;
    v0 = (s32)a3 < (s32)a2;
    goto L_0888251C;
L_0888251C:;
    v0 = v0 ^ 0x1;
    return v0;
L_08882524:;
    v0 = (s32)a3 < (s32)a2;
    return v0;
L_0888252C:;
    v0 = (s32)a2 < (s32)a3;
    goto L_0888251C;
}

/* 08882534 */
void func_08882534(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08882534:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+180);
    cnd_ = v0 == 0;
    s0 = a0 + 180;
    if (cnd_) { goto L_08882570; }
    goto L_0888255C;
L_0888255C:;
    cnd_ = a1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088825B4; }
    goto L_08882564;
L_08882564:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888256C;
L_0888256C:;
    ST32(s2+180, 0);
    goto L_08882570;
L_08882570:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088825E4; }
    goto L_08882580;
L_08882580:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882588;
L_08882588:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888259C;
L_0888259C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+180, v0);
    if (cnd_) { goto L_088825D4; }
    goto L_088825AC;
L_088825AC:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_088825B4;
L_088825B4:;
    v0 = (u32)-1;
    goto L_088825B8;
L_088825B8:;
    ST32(s2+176, v0);
    sp = sp + 16;
    return;
L_088825D4:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088825DC;
L_088825DC:;
    v0 = (u32)-1;
    goto L_088825B8;
L_088825E4:;
    ST32(s2+180, 0);
    goto L_088825B4;
}

/* 088825EC */
u32 func_088825EC(u32 a0)
{
    u32 v0 = 0;
L_088825EC:;
    v0 = LD32(a0+180);
    return v0;
}

/* 088825F4 */
float func_088825F4(u32 a0)
{
    float f0 = 0;
L_088825F4:;
    f0 = BITSF(LD32(a0+200));
    return f0;
}

/* 088825FC */
float func_088825FC(u32 a0)
{
    float f0 = 0;
L_088825FC:;
    f0 = BITSF(LD32(a0+192));
    return f0;
}

/* 08882604 */
float func_08882604(u32 a0)
{
    float f0 = 0;
L_08882604:;
    f0 = BITSF(LD32(a0+196));
    return f0;
}

/* 0888260C */
u32 func_0888260C(u32 a0)
{
    u32 v0 = 0;
L_0888260C:;
    v0 = LD32(a0+204);
    return v0;
}

/* 08882614 */
rv_t func_08882614(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08882614:;
    sp = sp - 32;
    s5 = a3 + 0;
    s4 = t0 + 0;
    s3 = a2 + 0;
    s2 = a1 + 0;
    s1 = t1 + 0;
    v1 = LD32(a0+208);
    v0 = LD32(a0+212);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088826E8; }
    goto L_08882658;
L_08882658:;
    a1 = LD32(s0+216);
    v1 = v1 << 5;
    f3 = BITSF(LD32(s1+12));
    v1 = v1 + a1;
    ST32(v1+8, s2);
    v0 = LD32(s0+208);
    f0 = BITSF(LD32(s1));
    f1 = BITSF(LD32(s1+4));
    v0 = v0 << 5;
    v0 = v0 + a1;
    ST32(v0+12, s3);
    v1 = LD32(s0+208);
    f2 = BITSF(LD32(s1+8));
    v1 = v1 << 5;
    v1 = v1 + a1;
    ST32(v1, s4);
    a0 = LD32(s0+208);
    ST32(v1+4, s5);
    v0 = a0 << 5;
    a0 = a0 + 1;
    ST32(s0+208, a0);
    a1 = a1 + v0;
    v0 = a1 + 16;
    ST32(a1+16, FBITS(f0));
    ST32(v0+12, FBITS(f3));
    ST32(v0+4, FBITS(f1));
    ST32(v0+8, FBITS(f2));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088826E8:;
    func_088829C0(a0, t1, t2, t3);
    goto L_088826F0;
L_088826F0:;
    v1 = LD32(s0+208);
    goto L_08882658;
}

/* 088826F8 */
u32 func_088826F8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088826F8:;
    v0 = LD32(a0+208);
    v1 = a1 << 5;
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08882714; }
    goto L_0888270C;
L_0888270C:;
    v0 = LD32(a0+216);
    v0 = v0 + v1;
    goto L_08882714;
L_08882714:;
    return v0;
}

/* 0888271C */
rv_t func_0888271C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[1136] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 1136);
L_0888271C:;
    sp = sp - 1136;
    fp = a3 + 0;
    a3 = (u32)-1;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08880268(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888275C;
L_0888275C:;
    a1 = sp + 0;
    a2 = 1024;
    a0 = s0 + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0888276C;
L_0888276C:;
    a0 = sp + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882774;
L_08882774:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+1028, v0);
    ST32(sp+1032, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882788;
L_08882788:;
    cnd_ = v0 != 0;
    ST32(sp+1024, v0);
    if (cnd_) { goto L_08882904; }
    goto L_08882790;
L_08882790:;
    ST32(sp+1032, 0);
    ST32(sp+1028, 0);
    a1 = LD32(sp+1024);
    goto L_0888279C;
L_0888279C:;
    a0 = s1 + 0;
    s2 = 0 + 0;
    func_08882534(a0, a1, 0, 0, 0);
    goto L_088827A8;
L_088827A8:;
    a1 = s1 + 200;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088827B4;
L_088827B4:;
    a1 = s1 + 204;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088827C0;
L_088827C0:;
    a0 = s1 + 160;
    a1 = s0 + 0;
    { rv_t r_ = func_0887E318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088827CC;
L_088827CC:;
    a0 = s0 + 0;
    a1 = sp + 1056;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088827D8;
L_088827D8:;
    a1 = LD32(sp+1056);
    a0 = s1 + 0;
    { rv_t r_ = func_08882918(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088827E4;
L_088827E4:;
    v0 = LD32(sp+1056);
    cnd_ = v0 == 0;
    s4 = 0x330000u;
    if (cnd_) { goto L_08882898; }
    goto L_088827F0;
L_088827F0:;
    s3 = sp + 1040;
    s7 = sp + 1044;
    s6 = sp + 1048;
    s5 = sp + 1052;
    s4 = s4 | 0x155f;
    a1 = sp + 1060;
    goto L_08882808;
L_08882808:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882810;
L_08882810:;
    a0 = s0 + 0;
    a1 = sp + 1064;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888281C;
L_0888281C:;
    a0 = s0 + 0;
    cnd_ = fp != 0;
    a1 = sp + 1068;
    if (cnd_) { goto L_088828F4; }
    goto L_08882828;
L_08882828:;
    ST32(sp+1068, s4);
    a0 = s0 + 0;
    goto L_08882830;
L_08882830:;
    a1 = sp + 1072;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882838;
L_08882838:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882844;
L_08882844:;
    a0 = s0 + 0;
    a1 = s7 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882850;
L_08882850:;
    a0 = s0 + 0;
    a1 = s6 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888285C;
L_0888285C:;
    a0 = s0 + 0;
    a1 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882868;
L_08882868:;
    a1 = LD32(sp+1068);
    a2 = LD32(sp+1072);
    a3 = LD32(sp+1060);
    t0 = LD32(sp+1064);
    a0 = s1 + 0;
    t1 = s3 + 0;
    { rv_t r_ = func_08882614(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882884;
L_08882884:;
    v0 = LD32(sp+1056);
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    a1 = sp + 1060;
    if (cnd_) { goto L_08882808; }
    goto L_08882898;
L_08882898:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088828A8;
L_088828A8:;
    a0 = LD32(sp+1024);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088828E4; }
    goto L_088828B4;
L_088828B4:;
    sp = sp + 1136;
    return (rv_t){ v0, v1, f0 };
L_088828E4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088828EC;
L_088828EC:;
    ST32(sp+1024, 0);
    goto L_088828B4;
L_088828F4:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088828FC;
L_088828FC:;
    a0 = s0 + 0;
    goto L_08882830;
L_08882904:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882910;
L_08882910:;
    a1 = LD32(sp+1024);
    goto L_0888279C;
}

/* 08882918 */
rv_t func_08882918(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08882918:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08882940; }
    goto L_08882934;
L_08882934:;
    v0 = LD32(a0+216);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s1+212, a1); goto L_08882954; }
    goto L_08882940;
L_08882940:;
    goto L_08882944;
L_08882944:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08882954:;
    a0 = a1 << 5;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888295C;
L_0888295C:;
    a0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = s0 - 1;
    if (cnd_) { goto L_08882978; }
    goto L_08882968;
L_08882968:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_08882970;
L_08882970:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_08882970; }
    goto L_08882978;
L_08882978:;
    v0 = LD32(s1+212);
    ST32(s1+216, a0);
    s0 = 0 + 0;
    cnd_ = v0 == 0;
    ST32(s1+208, 0);
    if (cnd_) { goto L_08882940; }
    goto L_0888298C;
L_0888298C:;
    a0 = LD32(s1+216);
    goto L_08882990;
L_08882990:;
    v0 = s0 << 5;
    a1 = 0 + 0;
    a0 = a0 + v0;
    a2 = 32;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088829A4;
L_088829A4:;
    v1 = LD32(s1+212);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s1+216); goto L_08882990; }
    goto L_088829B8;
L_088829B8:;
    goto L_08882944;
}

/* 088829C0 */
void func_088829C0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088829C0:;
    sp = sp - 32;
    s0 = LD32(a0+208);
    v0 = LD32(a0+212);
    cnd_ = s0 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08882A0C; }
    goto L_088829EC;
L_088829EC:;
    goto L_088829F0;
L_088829F0:;
    sp = sp + 32;
    return;
L_08882A0C:;
    s3 = s0 + 5;
    a0 = s3 << 5;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882A18;
L_08882A18:;
    s4 = v0 + 0;
    v1 = s0 + 4;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08882A38; }
    goto L_08882A2C;
L_08882A2C:;
    v1 = v1 - 1;
    goto L_08882A30;
L_08882A30:;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = v1 - 1; goto L_08882A30; }
    goto L_08882A38;
L_08882A38:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_088829F0; }
    goto L_08882A40;
L_08882A40:;
    cnd_ = s3 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08882A6C; }
    goto L_08882A48;
L_08882A48:;
    s0 = s4 + 0;
    goto L_08882A4C;
L_08882A4C:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 32;
    s2 = s2 + 1;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882A60;
L_08882A60:;
    v1 = s2 < s3;
    cnd_ = v1 != 0;
    s0 = s0 + 32;
    if (cnd_) { goto L_08882A4C; }
    goto L_08882A6C;
L_08882A6C:;
    a1 = LD32(s1+216);
    cnd_ = a1 != 0;
    if (cnd_) { a2 = LD32(s1+212); goto L_08882A84; }
    goto L_08882A78;
L_08882A78:;
    ST32(s1+216, s4);
    goto L_08882A7C;
L_08882A7C:;
    ST32(s1+212, s3);
    goto L_088829EC;
L_08882A84:;
    a0 = s4 + 0;
    a2 = a2 << 5;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882A90;
L_08882A90:;
    a0 = LD32(s1+216);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+216, s4); goto L_08882A7C; }
    goto L_08882A9C;
L_08882A9C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882AA4;
L_08882AA4:;
    ST32(s1+216, s4);
    goto L_08882A7C;
}

/* 08882AAC */
u64 func_08882AAC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08882AAC:;
    sp = sp - 16;
    a1 = a0 + 172;
    a0 = a0 + 160;
    { u64 r_ = func_0887E15C(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882AC0;
L_08882AC0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08882ACC */
void func_08882ACC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144); memcpy(stack_ + 144, PTR(sp_in), 16); /* stack-passed arguments */
L_08882ACC:;
    sp = sp - 144;
    v0 = LD32(sp+144);
    v1 = LD32(sp+152);
    fp = t0 + 0;
    s7 = t1 + 0;
    s6 = t3 + 0;
    s5 = t2 + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    ST32(sp+48, a3);
    ST32(sp+52, v0);
    ST32(sp+56, v1);
    v0 = func_08889014(a0);
    goto L_08882B34;
L_08882B34:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08882C64; }
    goto L_08882B3C;
L_08882B3C:;
    v0 = LD32(s2+136);
    goto L_08882B40;
L_08882B40:;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08882BFC; }
    goto L_08882B48;
L_08882B48:;
    s0 = LD32(s2+148);
    goto L_08882B4C;
L_08882B4C:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08882B64; }
    goto L_08882B54;
L_08882B54:;
    v0 = LD32(s0+136);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08882B94; }
    goto L_08882B60;
L_08882B60:;
    goto L_08882B64;
L_08882B64:;
    sp = sp + 144;
    return;
L_08882B94:;
    a1 = s1 + 0;
    goto L_08882B98;
L_08882B98:;
    a0 = s0 + 0;
    v0 = func_08889118(a0, a1);
    goto L_08882BA0;
L_08882BA0:;
    v1 = LD32(sp+52);
    a1 = v0 + 0;
    t0 = LD32(sp+48);
    v0 = LD32(sp+148);
    ST32(sp+4, v1);
    a0 = s2 + 0;
    a2 = s4 + 0;
    v1 = LD32(sp+56);
    a3 = s3 + 0;
    t1 = fp + 0;
    t2 = s7 + 0;
    t3 = s5 + 0;
    ST32(sp+8, v0);
    s1 = s1 + 1;
    ST32(sp, s6);
    ST32(sp+12, v1);
    func_08882F58(a1, a2, a3, t0, t1, t3);
    goto L_08882BE4;
L_08882BE4:;
    v0 = LD32(s0+136);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08882B98; }
    goto L_08882BF4;
L_08882BF4:;
    goto L_08882B64;
L_08882BFC:;
    a1 = s1 + 0;
    goto L_08882C00;
L_08882C00:;
    a0 = s2 + 0;
    v0 = func_08889118(a0, a1);
    goto L_08882C08;
L_08882C08:;
    a1 = v0 + 0;
    v0 = LD32(sp+52);
    v1 = LD32(sp+148);
    t0 = LD32(sp+48);
    ST32(sp+4, v0);
    a0 = s2 + 0;
    a2 = s4 + 0;
    v0 = LD32(sp+56);
    a3 = s3 + 0;
    t1 = fp + 0;
    t2 = s7 + 0;
    t3 = s5 + 0;
    ST32(sp+12, v0);
    s1 = s1 + 1;
    ST32(sp, s6);
    ST32(sp+8, v1);
    func_08882F58(a1, a2, a3, t0, t1, t3);
    goto L_08882C4C;
L_08882C4C:;
    v0 = LD32(s2+136);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08882C00; }
    goto L_08882C5C;
L_08882C5C:;
    s0 = LD32(s2+148);
    goto L_08882B4C;
L_08882C64:;
    a1 = s1 + 0;
    goto L_08882C68;
L_08882C68:;
    a0 = s2 + 0;
    v0 = func_0888901C(a0, a1);
    goto L_08882C70;
L_08882C70:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08882CF4; }
    goto L_08882C78;
L_08882C78:;
    v0 = LD32(v0);
    v0 = v0 & s4;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08882CF8; }
    goto L_08882C88;
L_08882C88:;
    v1 = LD32(a1+4);
    v0 = v1 < 0x10u;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08882CF8; }
    goto L_08882C98;
L_08882C98:;
    v0 = v1 << 2;
    v1 = D_08AD4D1C - (19740);
    v1 = v1 + 19740;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08882CB4u: goto L_08882CB4; case 0x08882CF4u: goto L_08882CF4; case 0x08882D0Cu: goto L_08882D0C; case 0x08882E2Cu: goto L_08882E2C; case 0x08882E3Cu: goto L_08882E3C; case 0x08882E54u: goto L_08882E54; case 0x08882E68u: goto L_08882E68; case 0x08882E7Cu: goto L_08882E7C; case 0x08882E90u: goto L_08882E90; case 0x08882EA0u: goto L_08882EA0; case 0x08882EB4u: goto L_08882EB4; case 0x08882ED4u: goto L_08882ED4; case 0x08882EE4u: goto L_08882EE4; case 0x08882EFCu: goto L_08882EFC; default: rs_break(0, 0x08882cac); }
L_08882CB4:;
    a0 = sp + 16;
    func_088861D0(a0, a1);
    goto L_08882CBC;
L_08882CBC:;
    f4 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f3 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    f1 = BITSF(LD32(s3+12));
    f3 = f3 + f4;
    f0 = f0 + f4;
    f2 = f2 + f5;
    f1 = f1 + f5;
    ST32(s3, FBITS(f3));
    ST32(s3+4, FBITS(f2));
    ST32(s3+8, FBITS(f0));
    goto L_08882CF0;
L_08882CF0:;
    ST32(s3+12, FBITS(f1));
    goto L_08882CF4;
L_08882CF4:;
    s1 = s1 + 1;
    goto L_08882CF8;
L_08882CF8:;
    v0 = s1 < s0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08882C68; }
    goto L_08882D04;
L_08882D04:;
    v0 = LD32(s2+136);
    goto L_08882B40;
L_08882D0C:;
    a2 = sp + 32;
    a0 = a2 + 0;
    ST32(sp+64, a2);
    func_088861A4(a0, a1);
    goto L_08882D1C;
L_08882D1C:;
    v1 = D_08AEC158 - (-16040);
    f0 = BITSF(LD32(v1-16040));
    f1 = BITSF(LD32(sp+44));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+64);
    if (cnd_) { goto L_08882E1C; }
    goto L_08882D40;
L_08882D40:;
    a0 = D_08AEC15C - (-16036);
    f0 = BITSF(LD32(a0-16036));
    f0 = f1 + f0;
    goto L_08882D4C;
L_08882D4C:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(v1-16040));
    a1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = a1 << 8;
    if (cnd_) { goto L_08882E10; }
    goto L_08882D74;
L_08882D74:;
    f0 = BITSF(LD32(a0-16036));
    f0 = f2 + f0;
    goto L_08882D7C;
L_08882D7C:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(v1-16040));
    a1 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + a1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08882E04; }
    goto L_08882DA8;
L_08882DA8:;
    f0 = BITSF(LD32(a0-16036));
    f0 = f1 + f0;
    goto L_08882DB0;
L_08882DB0:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+8));
    f0 = BITSF(LD32(v1-16040));
    v1 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    v0 = v0 + v1;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08882DF8; }
    goto L_08882DDC;
L_08882DDC:;
    f0 = BITSF(LD32(a0-16036));
    f0 = f1 + f0;
    goto L_08882DE4;
L_08882DE4:;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    v0 = v0 + a0;
    goto L_08882DF0;
L_08882DF0:;
    ST32(s5, v0);
    goto L_08882CF4;
L_08882DF8:;
    f0 = BITSF(LD32(a0-16036));
    f0 = f1 - f0;
    goto L_08882DE4;
L_08882E04:;
    f0 = BITSF(LD32(a0-16036));
    f0 = f1 - f0;
    goto L_08882DB0;
L_08882E10:;
    f0 = BITSF(LD32(a0-16036));
    f0 = f2 - f0;
    goto L_08882D7C;
L_08882E1C:;
    a0 = D_08AEC15C - (-16036);
    f0 = BITSF(LD32(a0-16036));
    f0 = f1 - f0;
    goto L_08882D4C;
L_08882E2C:;
    a0 = a1 + 0;
    v0 = func_0888618C(a0);
    goto L_08882E34;
L_08882E34:;
    ST32(s6, v0);
    goto L_08882CF4;
L_08882E3C:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08882E44;
L_08882E44:;
    f1 = BITSF(LD32(s3));
    f1 = f1 + f0;
    ST32(s3+8, FBITS(f1));
    goto L_08882CF4;
L_08882E54:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08882E5C;
L_08882E5C:;
    f1 = BITSF(LD32(s3+4));
    f1 = f1 + f0;
    goto L_08882CF0;
L_08882E68:;
    a0 = a1 + 0;
    v0 = func_088861F4(a0);
    goto L_08882E70;
L_08882E70:;
    a1 = LD32(sp+148);
    goto L_08882E74;
L_08882E74:;
    ST32(a1, v0);
    goto L_08882CF4;
L_08882E7C:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08882E84;
L_08882E84:;
    v0 = LD32(sp+48);
    ST32(v0, FBITS(f0));
    goto L_08882CF4;
L_08882E90:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08882E98;
L_08882E98:;
    ST32(fp, FBITS(f0));
    goto L_08882CF4;
L_08882EA0:;
    a0 = a1 + 0;
    v0 = func_08886180(a0);
    goto L_08882EA8;
L_08882EA8:;
    v1 = LD32(sp+52);
    ST32(v1, v0);
    goto L_08882CF4;
L_08882EB4:;
    a0 = a1 + 0;
    v0 = func_08886180(a0);
    goto L_08882EBC;
L_08882EBC:;
    a0 = LD32(s2+220);
    a1 = v0 + 0;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08882EC8;
L_08882EC8:;
    a0 = LD32(sp+148);
    ST32(a0, v0);
    goto L_08882CF4;
L_08882ED4:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08882EDC;
L_08882EDC:;
    ST32(s7, FBITS(f0));
    goto L_08882CF4;
L_08882EE4:;
    a0 = a1 + 0;
    v0 = func_088861FC(a0);
    goto L_08882EEC;
L_08882EEC:;
    a0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08882EF4;
L_08882EF4:;
    a1 = LD32(sp+56);
    goto L_08882E74;
L_08882EFC:;
    v0 = LD_U8(s5+3);
    f20 = BITSF(v0);
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08882F0C;
L_08882F0C:;
    f1 = (float)(s32)FBITS(f20);
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC15C - (-16036);
    if (cnd_) { goto L_08882F4C; }
    goto L_08882F28;
L_08882F28:;
    f0 = BITSF(LD32(v0-16036));
    f0 = f1 + f0;
    goto L_08882F30;
L_08882F30:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s5);
    a0 = FBITS(f0);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    v1 = a0 << 24;
    v0 = v0 | v1;
    goto L_08882DF0;
L_08882F4C:;
    f0 = BITSF(LD32(v0-16036));
    f0 = f1 - f0;
    goto L_08882F30;
}

/* 08882F58 */
void func_08882F58(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08882F58:;
    sp = sp - 64;
    s0 = a1 + 0;
    a0 = s0 + 0;
    a1 = a2 + 0;
    s4 = t0 + 0;
    s3 = t1 + 0;
    s2 = t3 + 0;
    s1 = a3 + 0;
    v0 = func_0887D0EC(a0, a1);
    goto L_08882F98;
L_08882F98:;
    cnd_ = v0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_08882FCC; }
    goto L_08882FA0;
L_08882FA0:;
    ST32(s0+12, v0);
    ST32(s0+4, 0);
    goto L_08882FA8;
L_08882FA8:;
    goto L_08882FAC;
L_08882FAC:;
    sp = sp + 64;
    return;
L_08882FCC:;
    a0 = s0 + 0;
    v0 = func_0887D134(a0);
    goto L_08882FD4;
L_08882FD4:;
    v1 = v0 + 0;
    v0 = v0 < 0x12u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08882FAC; }
    goto L_08882FE4;
L_08882FE4:;
    v0 = v1 << 2;
    v1 = D_08AD4D5C - (19804);
    v1 = v1 + 19804;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08882FA8u: goto L_08882FA8; case 0x08883000u: goto L_08883000; case 0x08883048u: goto L_08883048; case 0x08883058u: goto L_08883058; case 0x08883068u: goto L_08883068; case 0x088830C8u: goto L_088830C8; case 0x088830ECu: goto L_088830EC; default: rs_break(0, 0x08882ff8); }
L_08883000:;
    a1 = s0 + 0;
    a0 = sp + 0;
    func_0887D1C8(a0, a1);
    goto L_0888300C;
L_0888300C:;
    f4 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s1+8));
    f2 = f2 + f4;
    f0 = f0 + f5;
    f3 = f3 + f5;
    f1 = f1 + f4;
    ST32(s1, FBITS(f2));
    ST32(s1+12, FBITS(f0));
    ST32(s1+4, FBITS(f3));
    goto L_08883040;
L_08883040:;
    ST32(s1+8, FBITS(f1));
    goto L_08882FA8;
L_08883048:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08883050;
L_08883050:;
    ST32(s4, FBITS(f0));
    goto L_08882FA8;
L_08883058:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08883060;
L_08883060:;
    ST32(s3, FBITS(f0));
    goto L_08882FA8;
L_08883068:;
    v0 = LD_U8(s2+3);
    f20 = BITSF(v0);
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08883078;
L_08883078:;
    f1 = (float)(s32)FBITS(f20);
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC160 - (-16032);
    if (cnd_) { goto L_088830BC; }
    goto L_08883094;
L_08883094:;
    f0 = BITSF(LD32(v0-16032));
    f0 = f1 + f0;
    goto L_0888309C;
L_0888309C:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s2);
    v1 = FBITS(f0);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    v1 = v1 << 24;
    v0 = v0 | v1;
    ST32(s2, v0);
    goto L_08882FA8;
L_088830BC:;
    f0 = BITSF(LD32(v0-16032));
    f0 = f1 - f0;
    goto L_0888309C;
L_088830C8:;
    f20 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    a0 = s0 + 0;
    f20 = f20 - f0;
    f0 = func_0887D2BC(a0);
    goto L_088830DC;
L_088830DC:;
    f1 = BITSF(LD32(s1));
    f20 = f20 * f0;
    f1 = f1 + f20;
    goto L_08883040;
L_088830EC:;
    f20 = BITSF(LD32(s1+12));
    f0 = BITSF(LD32(s1+4));
    a0 = s0 + 0;
    f20 = f20 - f0;
    f0 = func_0887D2BC(a0);
    goto L_08883100;
L_08883100:;
    f1 = BITSF(LD32(s1+4));
    f20 = f20 * f0;
    f1 = f1 + f20;
    ST32(s1+12, FBITS(f1));
    goto L_08882FA8;
}

/* 08883114 */
rv_t func_08883114(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08883114:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0887FFC0(a0);
    goto L_08883128;
L_08883128:;
    v0 = D_08AEC168 - (-16024);
    f0 = BITSF(LD32(v0-16024));
    v0 = D_08AF6D28 - (27944);
    v0 = v0 + 27944;
    a1 = s0 + 172;
    ST32(s0, v0);
    v1 = (u32)-1;
    v0 = 1002;
    a0 = 0x330000u;
    ST32(s0+168, v1);
    a0 = a0 | 0x155f;
    ST32(s0+164, 0);
    ST32(a1+8, 0);
    ST32(a1+4, 0);
    ST32(s0+4, v0);
    v0 = 128;
    ST32(s0+216, FBITS(f0));
    ST32(s0+188, a0);
    ST32(s0+204, v0);
    ST32(s0+160, 0);
    ST32(s0+172, 0);
    ST32(s0+184, 0);
    ST32(s0+192, 0);
    ST32(s0+196, 0);
    ST32(s0+200, FBITS(f0));
    ST32(s0+208, 0);
    ST32(s0+212, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088831A4 */
rv_t func_088831A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088831A4:;
    v0 = D_08AF6D28 - (27944);
    v0 = v0 + 27944;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 172;
    func_08883C58(a0, t1, t2, t3);
    goto L_088831CC;
L_088831CC:;
    v0 = LD32(s0+172);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088831FC; }
    goto L_088831D8;
L_088831D8:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08880004(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088831E8;
L_088831E8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088831FC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883204;
L_08883204:;
    ST32(s0+172, 0);
    goto L_088831D8;
}

/* 0888320C */
rv_t func_0888320C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888320C:;
    v0 = D_08AF6D28 - (27944);
    v0 = v0 + 27944;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = a0 + 172;
    func_08883C58(a0, t1, t2, t3);
    goto L_08883234;
L_08883234:;
    v0 = LD32(s0+172);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888326C; }
    goto L_08883240;
L_08883240:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_08880004(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883250;
L_08883250:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883258;
L_08883258:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888326C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883274;
L_08883274:;
    ST32(s0+172, 0);
    goto L_08883240;
}

/* 0888327C */
rv_t func_0888327C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888327C:;
    sp = sp - 16;
    { rv_t r_ = func_088800A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888328C;
L_0888328C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08883298 */
rv_t func_08883298(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08883298:;
    sp = sp - 128;
    s1 = a0 + 0;
    s0 = a1 + 0;
    f23 = f15;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    ST32(sp+40, 0);
    f0 = func_08883934(a0);
    goto L_088832E0;
L_088832E0:;
    a0 = s1 + 0;
    ST32(sp+60, FBITS(f0));
    v0 = func_0888381C(a0);
    goto L_088832EC;
L_088832EC:;
    a0 = s1 + 0;
    f0 = BITSF(LD32(s1+192));
    f1 = BITSF(LD32(s1+196));
    s2 = v0 + 0;
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, FBITS(f1));
    v0 = func_08883944(a0);
    goto L_08883308;
L_08883308:;
    f0 = BITSF(LD32(s1+208));
    v1 = LD32(s1+168);
    ST32(sp+36, v0);
    v0 = (u32)-1;
    ST32(sp+48, FBITS(f0));
    cnd_ = v1 == v0;
    f24 = BITSF(LD32(s1+216));
    if (cnd_) { goto L_088836BC; }
    goto L_08883324;
L_08883324:;
    f2 = BITSF(F2I(f20, 1));
    goto L_08883328;
L_08883328:;
    f3 = BITSF(F2I(f21, 1));
    a0 = s1 + 0;
    ST32(sp+24, FBITS(f22));
    f0 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f3);
    ST32(sp+28, FBITS(f23));
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    v0 = func_08887404(a0);
    goto L_0888334C;
L_0888334C:;
    v1 = D_08AEC170 - (-16016);
    f2 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1-16016));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    a1 = D_08AEC174 - (-16012);
    if (cnd_) { goto L_088836B0; }
    goto L_08883370;
L_08883370:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f2 + f0;
    goto L_08883378;
L_08883378:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v1-16016));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a0 = a2 << 8;
    if (cnd_) { goto L_088836A4; }
    goto L_088833A0;
L_088833A0:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f2 + f0;
    goto L_088833A8;
L_088833A8:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1-16016));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_08883698; }
    goto L_088833D4;
L_088833D4:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f1 + f0;
    goto L_088833DC;
L_088833DC:;
    f3 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1-16016));
    v0 = FBITS(f3);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a0 = a0 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_0888368C; }
    goto L_08883408;
L_08883408:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f1 + f0;
    goto L_08883410;
L_08883410:;
    f0 = BITSF(F2I(f0, 1));
    v1 = LD32(s1);
    a2 = FBITS(f0);
    v0 = LD32(v1+140);
    a0 = a0 + a2;
    ST32(sp+64, a0);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883430;
L_08883430:;
    v1 = LD32(s1+160);
    cnd_ = v1 == 0;
    ST32(sp+32, v0);
    if (cnd_) { goto L_08883670; }
    goto L_0888343C;
L_0888343C:;
    ST32(sp+40, v1);
    goto L_08883440;
L_08883440:;
    v1 = LD32(s1+168);
    goto L_08883444;
L_08883444:;
    v0 = sp + 32;
    a1 = s0 + 0;
    ST32(sp+44, v1);
    v1 = sp + 36;
    a2 = sp + 16;
    a3 = sp + 48;
    t0 = sp + 52;
    t1 = sp + 56;
    t2 = sp + 60;
    t3 = sp + 64;
    a0 = s1 + 0;
    ST32(sp, v0);
    v0 = sp + 40;
    ST32(sp+4, v1);
    v1 = sp + 44;
    ST32(sp+12, v1);
    ST32(sp+8, v0);
    func_08883C98(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_0888348C;
L_0888348C:;
    a0 = LD32(sp+32);
    { u64 r_ = func_088CD6B0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883494;
L_08883494:;
    a0 = LD32(sp+44);
    s2 = v0 + 0;
    func_088CD5B0(a0);
    goto L_088834A0;
L_088834A0:;
    a0 = LD32(sp+40);
    cnd_ = a0 == 0;
    f0 = BITSF(LD32(sp+48));
    if (cnd_) { goto L_08883560; }
    goto L_088834AC;
L_088834AC:;
    f21 = BITSF(0);
    fcc = FCMP(f0, f21, 2);
    cnd_ = !fcc;
    f12 = BITSF(LD32(sp+60));
    if (cnd_) { goto L_088834D8; }
    goto L_088834C0;
L_088834C0:;
    f0 = BITSF(LD32(s1+212));
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    f12 = BITSF(LD32(sp+52));
    if (cnd_) { goto L_08883520; }
    goto L_088834D4;
L_088834D4:;
    f12 = BITSF(LD32(sp+60));
    goto L_088834D8;
L_088834D8:;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_088834E0;
L_088834E0:;
    f20 = f0;
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+16));
    f1 = f1 - f0;
    fcc = FCMP(f20, f1, 14);
    cnd_ = fcc;
    a0 = LD32(sp+40);
    if (cnd_) { goto L_08883518; }
    goto L_08883500;
L_08883500:;
    v0 = D_08AEC16C - (-16020);
    f0 = BITSF(LD32(v0-16020));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = D_08B2859C - (-31332);
    if (cnd_) { goto L_08883594; }
    goto L_08883518;
L_08883518:;
    ST32(s1+212, FBITS(f21));
    f12 = BITSF(LD32(sp+52));
    goto L_08883520;
L_08883520:;
    f0 = BITSF(0);
    v0 = LD32(sp+36);
    fcc = FCMP(f12, f0, 2);
    v0 = v0 | 0x100;
    cnd_ = fcc;
    ST32(sp+36, v0);
    if (cnd_) { goto L_08883540; }
    goto L_08883538;
L_08883538:;
    v0 = (v0 & ~(0x1u << 7)) | ((0 & 0x1) << 7);
    ST32(sp+36, v0);
    goto L_08883540;
L_08883540:;
    f13 = BITSF(LD32(sp+56));
    f15 = BITSF(LD32(sp+60));
    a2 = LD32(sp+64);
    a3 = LD32(sp+36);
    f14 = f24;
    a1 = sp + 16;
    goto L_08883558;
L_08883558:;
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883560;
L_08883560:;
    a0 = s2 + 0;
    { u64 r_ = func_088CD6B0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883568;
L_08883568:;
    sp = sp + 128;
    return (rv_t){ v0, v1, f0 };
L_08883594:;
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(sp+48));
    f2 = BITSF(LD32(s1+212));
    s0 = D_08B15F98 - (24472);
    f1 = f1 * f0;
    a0 = LD32(s0+24472);
    f12 = BITSF(LD32(sp+60));
    a1 = (u32)-1;
    f2 = f2 + f1;
    ST32(s1+212, FBITS(f2));
    f0 = func_088CB674(a0, a1, f12);
    goto L_088835C0;
L_088835C0:;
    f13 = f20 + f0;
    f12 = BITSF(LD32(s1+212));
    f21 = f0;
    { rv_t r_ = func_08A9F740(f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088835D0;
L_088835D0:;
    ST32(s1+212, FBITS(f0));
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    a1 = sp + 16;
    v0 = LD32(sp+36);
    a0 = LD32(sp+40);
    f13 = BITSF(LD32(sp+56));
    f15 = BITSF(LD32(sp+60));
    a2 = LD32(sp+64);
    v0 = v0 | 0x100;
    v0 = (v0 & ~(0x1u << 2)) | ((0 & 0x1) << 2);
    f12 = f1;
    a3 = v0 + 0;
    f14 = f24;
    ST32(sp+52, FBITS(f1));
    ST32(sp+36, v0);
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883610;
L_08883610:;
    a1 = sp + 16;
    f0 = BITSF(LD32(sp+52));
    a0 = LD32(s0+24472);
    f13 = BITSF(LD32(sp+56));
    f0 = f0 + f20;
    f15 = BITSF(LD32(sp+60));
    a2 = LD32(sp+64);
    a3 = LD32(sp+36);
    f12 = f0;
    f14 = f24;
    ST32(sp+52, FBITS(f0));
    { rv_t r_ = func_088CC808(a0, a1, a2, a3, f12, f13, f14, f15); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883640;
L_08883640:;
    f14 = f24;
    f0 = BITSF(LD32(sp+52));
    a0 = LD32(sp+40);
    f13 = BITSF(LD32(sp+56));
    f0 = f0 + f21;
    f15 = BITSF(LD32(sp+60));
    a2 = LD32(sp+64);
    a3 = LD32(sp+36);
    f12 = f0;
    a1 = sp + 16;
    ST32(sp+52, FBITS(f0));
    goto L_08883558;
L_08883670:;
    cnd_ = s2 == 0;
    if (cnd_) { v1 = LD32(s1+168); goto L_08883444; }
    goto L_08883678;
L_08883678:;
    a0 = LD32(s1+188);
    a1 = s2 + 0;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883684;
L_08883684:;
    ST32(sp+40, v0);
    goto L_08883440;
L_0888368C:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f1 - f0;
    goto L_08883410;
L_08883698:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f1 - f0;
    goto L_088833DC;
L_088836A4:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f2 - f0;
    goto L_088833A8;
L_088836B0:;
    f0 = BITSF(LD32(a1-16012));
    f0 = f2 - f0;
    goto L_08883378;
L_088836BC:;
    a0 = s1 + 0;
    v0 = func_0888392C(a0);
    goto L_088836C4;
L_088836C4:;
    cnd_ = v0 == 0;
    f2 = BITSF(F2I(f20, 1));
    if (cnd_) { goto L_08883328; }
    goto L_088836CC;
L_088836CC:;
    a0 = s1 + 0;
    v0 = func_0888392C(a0);
    goto L_088836D4;
L_088836D4:;
    a0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088836DC;
L_088836DC:;
    ST32(s1+168, v0);
    goto L_08883324;
}

/* 088836E4 */
rv_t func_088836E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088836E4:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_08880148(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883700;
L_08883700:;
    a0 = s0 + 0;
    v0 = func_0888392C(a0);
    goto L_08883708;
L_08883708:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08883874(a0, a1, 0, 0, 0);
    goto L_08883714;
L_08883714:;
    v0 = LD32(s0+188);
    a0 = s0 + 0;
    ST32(s1+188, v0);
    v0 = func_08883814(a0);
    goto L_08883724;
L_08883724:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08883784; }
    goto L_0888372C;
L_0888372C:;
    v0 = func_08883814(a0);
    goto L_08883734;
L_08883734:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883740;
L_08883740:;
    a0 = s0 + 0;
    f0 = func_08883934(a0);
    goto L_08883748;
L_08883748:;
    ST32(s1+200, FBITS(f0));
    a0 = s0 + 0;
    v0 = func_08883944(a0);
    goto L_08883754;
L_08883754:;
    f0 = BITSF(LD32(s0+208));
    f1 = BITSF(LD32(s0+192));
    f2 = BITSF(LD32(s0+196));
    ST32(s1+208, FBITS(f0));
    ST32(s1+204, v0);
    ST32(s1+192, FBITS(f1));
    ST32(s1+196, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08883784:;
    a0 = s0 + 0;
    v0 = func_0888381C(a0);
    goto L_0888378C;
L_0888378C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08883824(a0, a1, 0, 0, 0);
    goto L_08883798;
L_08883798:;
    goto L_08883740;
}

/* 088837A0 */
u64 func_088837A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088837A0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088837E4; }
    goto L_088837C0;
L_088837C0:;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088837C8;
L_088837C8:;
    v0 = v0 + 1;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08883C04(a0, a1, 0, 0, 0);
    goto L_088837D8;
L_088837D8:;
    a0 = LD32(s1+160);
    a1 = s0 + 0;
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088837E4;
L_088837E4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088837F8 */
void func_088837F8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088837F8:;
    sp = sp - 16;
    func_08883C58(a0, t1, t2, t3);
    goto L_08883808;
L_08883808:;
    sp = sp + 16;
    return;
}

/* 08883814 */
u32 func_08883814(u32 a0)
{
    u32 v0 = 0;
L_08883814:;
    v0 = LD32(a0+160);
    return v0;
}

/* 0888381C */
u32 func_0888381C(u32 a0)
{
    u32 v0 = 0;
L_0888381C:;
    v0 = LD32(a0+184);
    return v0;
}

/* 08883824 */
void func_08883824(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08883824:;
    ST32(a0+184, a1);
    sp = sp - 16;
    func_08883C58(a0, t1, t2, t3);
    goto L_08883838;
L_08883838:;
    sp = sp + 16;
    return;
}

/* 08883844 */
u32 func_08883844(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08883844:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0888381C(a0);
    goto L_08883858;
L_08883858:;
    a0 = LD32(s0+188);
    a1 = v0 + 0;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883864;
L_08883864:;
    sp = sp + 16;
    return v0;
}

/* 08883874 */
void func_08883874(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08883874:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+172);
    cnd_ = v0 == 0;
    s0 = a0 + 172;
    if (cnd_) { goto L_088838B0; }
    goto L_0888389C;
L_0888389C:;
    cnd_ = a1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088838F4; }
    goto L_088838A4;
L_088838A4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088838AC;
L_088838AC:;
    ST32(s2+172, 0);
    goto L_088838B0;
L_088838B0:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08883924; }
    goto L_088838C0;
L_088838C0:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088838C8;
L_088838C8:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088838DC;
L_088838DC:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+172, v0);
    if (cnd_) { goto L_08883914; }
    goto L_088838EC;
L_088838EC:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_088838F4;
L_088838F4:;
    v0 = (u32)-1;
    goto L_088838F8;
L_088838F8:;
    ST32(s2+168, v0);
    sp = sp + 16;
    return;
L_08883914:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888391C;
L_0888391C:;
    v0 = (u32)-1;
    goto L_088838F8;
L_08883924:;
    ST32(s2+172, 0);
    goto L_088838F4;
}

/* 0888392C */
u32 func_0888392C(u32 a0)
{
    u32 v0 = 0;
L_0888392C:;
    v0 = LD32(a0+172);
    return v0;
}

/* 08883934 */
float func_08883934(u32 a0)
{
    float f0 = 0;
L_08883934:;
    f0 = BITSF(LD32(a0+200));
    return f0;
}

/* 0888393C */
u32 func_0888393C(u32 a0)
{
    u32 v0 = 0;
L_0888393C:;
    v0 = LD32(a0+168);
    return v0;
}

/* 08883944 */
u32 func_08883944(u32 a0)
{
    u32 v0 = 0;
L_08883944:;
    v0 = LD32(a0+204);
    return v0;
}

/* 0888394C */
void func_0888394C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0888394C:;
    a2 = a2 & 0xff;
    cnd_ = a2 == 0;
    v1 = ~(0 | a1);
    if (cnd_) { goto L_08883968; }
    goto L_08883958;
L_08883958:;
    v0 = LD32(a0+204);
    v0 = v0 | a1;
    goto L_08883960;
L_08883960:;
    ST32(a0+204, v0);
    return;
L_08883968:;
    v0 = LD32(a0+204);
    v0 = v0 & v1;
    goto L_08883960;
}

/* 08883974 */
rv_t func_08883974(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[3152] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 3152);
L_08883974:;
    sp = sp - 3152;
    s7 = a3 < 0x6u;
    s3 = a3 + 0;
    a3 = (u32)-1;
    s4 = a0 + 0;
    s2 = a1 + 0;
    ST32(sp+3072, 0);
    ST32(sp+3076, 0);
    ST32(sp+3080, 0);
    { rv_t r_ = func_08880268(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088839C0;
L_088839C0:;
    cnd_ = s7 == 0;
    s6 = s3 < 0x4u;
    if (cnd_) { goto L_088839F8; }
    goto L_088839C8;
L_088839C8:;
    cnd_ = s6 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08883BB8; }
    goto L_088839D0;
L_088839D0:;
    a1 = sp + 0;
    a2 = 1024;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088839DC;
L_088839DC:;
    cnd_ = s6 != 0;
    a1 = D_08AD4DB4 - (19892);
    if (cnd_) { goto L_08883B98; }
    goto L_088839E4;
L_088839E4:;
    v0 = LD_U16(sp+1024);
    goto L_088839E8;
L_088839E8:;
    cnd_ = v0 != 0;
    a1 = sp + 1024;
    if (cnd_) { goto L_08883B88; }
    goto L_088839F0;
L_088839F0:;
    cnd_ = s7 != 0;
    v0 = s3 < 0x2u;
    if (cnd_) { goto L_08883A08; }
    goto L_088839F8;
L_088839F8:;
    a1 = s4 + 188;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883A04;
L_08883A04:;
    v0 = s3 < 0x2u;
    goto L_08883A08;
L_08883A08:;
    cnd_ = v0 == 0;
    a1 = sp + 3092;
    if (cnd_) { goto L_08883B64; }
    goto L_08883A10;
L_08883A10:;
    a0 = s2 + 0;
    goto L_08883A14;
L_08883A14:;
    a1 = sp + 0;
    a2 = 1024;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08883A20;
L_08883A20:;
    a0 = LD32(sp+3072);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_08883A44; }
    goto L_08883A2C;
L_08883A2C:;
    cnd_ = sp == a0;
    a1 = LD32(sp+3072);
    if (cnd_) { goto L_08883A78; }
    goto L_08883A34;
L_08883A34:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883A3C;
L_08883A3C:;
    ST32(sp+3072, 0);
    a0 = sp + 0;
    goto L_08883A44;
L_08883A44:;
    ST32(sp+3080, 0);
    ST32(sp+3076, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883A50;
L_08883A50:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+3076, v0);
    ST32(sp+3080, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883A64;
L_08883A64:;
    cnd_ = v0 != 0;
    ST32(sp+3072, v0);
    if (cnd_) { goto L_08883B50; }
    goto L_08883A6C;
L_08883A6C:;
    ST32(sp+3080, 0);
    ST32(sp+3076, 0);
    a1 = LD32(sp+3072);
    goto L_08883A78;
L_08883A78:;
    a0 = s4 + 0;
    func_08883874(a0, a1, 0, 0, 0);
    goto L_08883A80;
L_08883A80:;
    cnd_ = s3 != 0;
    a1 = s4 + 200;
    if (cnd_) { goto L_08883B40; }
    goto L_08883A88;
L_08883A88:;
    v0 = s3 < 0x3u;
    goto L_08883A8C;
L_08883A8C:;
    cnd_ = v0 == 0;
    a1 = s4 + 204;
    if (cnd_) { goto L_08883B30; }
    goto L_08883A94;
L_08883A94:;
    v0 = s3 < 0x5u;
    goto L_08883A98;
L_08883A98:;
    cnd_ = v0 == 0;
    a1 = s4 + 208;
    if (cnd_) { goto L_08883B20; }
    goto L_08883AA0;
L_08883AA0:;
    v0 = LD32(s4+204);
    v0 = v0 | 0x80;
    ST32(s4+204, v0);
    v0 = s3 < 0x7u;
    goto L_08883AB0;
L_08883AB0:;
    cnd_ = v0 == 0;
    a1 = s4 + 216;
    if (cnd_) { goto L_08883B10; }
    goto L_08883AB8;
L_08883AB8:;
    a0 = s4 + 0;
    goto L_08883ABC;
L_08883ABC:;
    a1 = s2 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883AC8;
L_08883AC8:;
    a0 = LD32(sp+3072);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08883B00; }
    goto L_08883AD4;
L_08883AD4:;
    sp = sp + 3152;
    return (rv_t){ v0, v1, f0 };
L_08883B00:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883B08;
L_08883B08:;
    ST32(sp+3072, 0);
    goto L_08883AD4;
L_08883B10:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883B18;
L_08883B18:;
    a0 = s4 + 0;
    goto L_08883ABC;
L_08883B20:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883B28;
L_08883B28:;
    v0 = s3 < 0x7u;
    goto L_08883AB0;
L_08883B30:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883B38;
L_08883B38:;
    v0 = s3 < 0x5u;
    goto L_08883A98;
L_08883B40:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883B48;
L_08883B48:;
    v0 = s3 < 0x3u;
    goto L_08883A8C;
L_08883B50:;
    a0 = v0 + 0;
    a1 = sp + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883B5C;
L_08883B5C:;
    a1 = LD32(sp+3072);
    goto L_08883A78;
L_08883B64:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883B6C;
L_08883B6C:;
    a1 = LD32(sp+3092);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = s2 + 0; goto L_08883A14; }
    goto L_08883B78;
L_08883B78:;
    a0 = s4 + 0;
    func_08883824(a0, a1, 0, 0, 0);
    goto L_08883B80;
L_08883B80:;
    a0 = s2 + 0;
    goto L_08883A14;
L_08883B88:;
    a0 = s4 + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883B90;
L_08883B90:;
    goto L_088839F0;
L_08883B98:;
    a0 = sp + 1024;
    a1 = a1 + 19892;
    a2 = 1024;
    a3 = 1;
    t0 = sp + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883BB0;
L_08883BB0:;
    v0 = LD_U16(sp+1024);
    goto L_088839E8;
L_08883BB8:;
    a1 = sp + 3088;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883BC0;
L_08883BC0:;
    v0 = LD32(sp+3088);
    ST16(sp+1024, 0);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088839DC; }
    goto L_08883BD0;
L_08883BD0:;
    s5 = sp + 1024;
    goto L_08883BD4;
L_08883BD4:;
    s0 = s1 << 1;
    a1 = s5 + s0;
    a0 = s2 + 0;
    func_0882DBD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08883BE4;
L_08883BE4:;
    v0 = LD32(sp+3088);
    s1 = s1 + 1;
    s0 = s0 + sp;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    ST16(s0+1026, 0);
    if (cnd_) { goto L_08883BD4; }
    goto L_08883BFC;
L_08883BFC:;
    goto L_088839DC;
}

/* 08883C04 */
void func_08883C04(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08883C04:;
    sp = sp - 16;
    s1 = a0 + 0;
    v0 = LD32(a0+164);
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_08883C3C; }
    goto L_08883C28;
L_08883C28:;
    sp = sp + 16;
    return;
L_08883C3C:;
    func_08883C58(a0, t1, t2, t3);
    goto L_08883C44;
L_08883C44:;
    a0 = s0 << 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08883C4C;
L_08883C4C:;
    ST32(s1+160, v0);
    ST32(s1+164, s0);
    goto L_08883C28;
}

/* 08883C58 */
void func_08883C58(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08883C58:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+160);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08883C84; }
    goto L_08883C74;
L_08883C74:;
    sp = sp + 16;
    return;
L_08883C84:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08883C8C;
L_08883C8C:;
    ST32(s0+164, 0);
    ST32(s0+160, 0);
    goto L_08883C74;
}

/* 08883C98 */
void func_08883C98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160); memcpy(stack_ + 160, PTR(sp_in), 16); /* stack-passed arguments */
L_08883C98:;
    sp = sp - 160;
    v0 = LD32(sp+160);
    v1 = LD32(sp+164);
    fp = t0 + 0;
    ST32(sp+68, v0);
    v0 = LD32(sp+172);
    s7 = t1 + 0;
    s6 = t2 + 0;
    s5 = t3 + 0;
    s4 = a1 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    ST32(sp+64, a3);
    ST32(sp+72, v1);
    ST32(sp+76, v0);
    v0 = func_08889014(a0);
    goto L_08883D08;
L_08883D08:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08883E48; }
    goto L_08883D10;
L_08883D10:;
    v0 = LD32(s2+136);
    goto L_08883D14;
L_08883D14:;
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08883DD8; }
    goto L_08883D1C;
L_08883D1C:;
    s0 = LD32(s2+148);
    goto L_08883D20;
L_08883D20:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08883D38; }
    goto L_08883D28;
L_08883D28:;
    v0 = LD32(s0+136);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08883D68; }
    goto L_08883D34;
L_08883D34:;
    goto L_08883D38;
L_08883D38:;
    sp = sp + 160;
    return;
L_08883D68:;
    a1 = s1 + 0;
    goto L_08883D6C;
L_08883D6C:;
    a0 = s0 + 0;
    v0 = func_08889118(a0, a1);
    goto L_08883D74;
L_08883D74:;
    a1 = v0 + 0;
    v1 = LD32(sp+72);
    v0 = LD32(sp+68);
    t0 = LD32(sp+64);
    ST32(sp+8, v1);
    a0 = s2 + 0;
    a2 = s4 + 0;
    ST32(sp+4, v0);
    a3 = s3 + 0;
    t1 = fp + 0;
    v0 = LD32(sp+168);
    v1 = LD32(sp+76);
    t2 = s7 + 0;
    t3 = s6 + 0;
    ST32(sp+12, v0);
    s1 = s1 + 1;
    ST32(sp, s5);
    ST32(sp+16, v1);
    func_08884144(a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08883DC0;
L_08883DC0:;
    v0 = LD32(s0+136);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08883D6C; }
    goto L_08883DD0;
L_08883DD0:;
    goto L_08883D38;
L_08883DD8:;
    a1 = s1 + 0;
    goto L_08883DDC;
L_08883DDC:;
    a0 = s2 + 0;
    v0 = func_08889118(a0, a1);
    goto L_08883DE4;
L_08883DE4:;
    a1 = v0 + 0;
    v1 = LD32(sp+72);
    v0 = LD32(sp+68);
    t0 = LD32(sp+64);
    ST32(sp+8, v1);
    a0 = s2 + 0;
    a2 = s4 + 0;
    ST32(sp+4, v0);
    a3 = s3 + 0;
    t1 = fp + 0;
    v0 = LD32(sp+168);
    v1 = LD32(sp+76);
    t2 = s7 + 0;
    t3 = s6 + 0;
    ST32(sp+12, v0);
    s1 = s1 + 1;
    ST32(sp, s5);
    ST32(sp+16, v1);
    func_08884144(a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_08883E30;
L_08883E30:;
    v0 = LD32(s2+136);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08883DDC; }
    goto L_08883E40;
L_08883E40:;
    s0 = LD32(s2+148);
    goto L_08883D20;
L_08883E48:;
    a1 = s1 + 0;
    goto L_08883E4C;
L_08883E4C:;
    a0 = s2 + 0;
    v0 = func_0888901C(a0, a1);
    goto L_08883E54;
L_08883E54:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08883ED8; }
    goto L_08883E5C;
L_08883E5C:;
    v0 = LD32(v0);
    v0 = v0 & s4;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08883EDC; }
    goto L_08883E6C;
L_08883E6C:;
    v1 = LD32(a1+4);
    v0 = v1 < 0x13u;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = s1 + 1; goto L_08883EDC; }
    goto L_08883E7C;
L_08883E7C:;
    v0 = v1 << 2;
    v1 = D_08AD4DBC - (19900);
    v1 = v1 + 19900;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08883E98u: goto L_08883E98; case 0x08883ED8u: goto L_08883ED8; case 0x08883EF0u: goto L_08883EF0; case 0x08884010u: goto L_08884010; case 0x08884024u: goto L_08884024; case 0x0888403Cu: goto L_0888403C; case 0x08884050u: goto L_08884050; case 0x08884060u: goto L_08884060; case 0x08884070u: goto L_08884070; case 0x08884080u: goto L_08884080; case 0x08884090u: goto L_08884090; case 0x088840ACu: goto L_088840AC; case 0x088840BCu: goto L_088840BC; case 0x088840D4u: goto L_088840D4; case 0x08884130u: goto L_08884130; default: rs_break(0, 0x08883e90); }
L_08883E98:;
    a0 = sp + 32;
    func_088861D0(a0, a1);
    goto L_08883EA0;
L_08883EA0:;
    f4 = BITSF(LD32(sp+32));
    f5 = BITSF(LD32(sp+36));
    f3 = BITSF(LD32(s3));
    f2 = BITSF(LD32(s3+4));
    f0 = BITSF(LD32(s3+8));
    f1 = BITSF(LD32(s3+12));
    f3 = f3 + f4;
    f0 = f0 + f4;
    f2 = f2 + f5;
    f1 = f1 + f5;
    ST32(s3, FBITS(f3));
    ST32(s3+4, FBITS(f2));
    ST32(s3+8, FBITS(f0));
    goto L_08883ED4;
L_08883ED4:;
    ST32(s3+12, FBITS(f1));
    goto L_08883ED8;
L_08883ED8:;
    s1 = s1 + 1;
    goto L_08883EDC;
L_08883EDC:;
    v0 = s1 < s0;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08883E4C; }
    goto L_08883EE8;
L_08883EE8:;
    v0 = LD32(s2+136);
    goto L_08883D14;
L_08883EF0:;
    a2 = sp + 48;
    a0 = a2 + 0;
    ST32(sp+80, a2);
    func_088861A4(a0, a1);
    goto L_08883F00;
L_08883F00:;
    a0 = D_08AEC178 - (-16008);
    f0 = BITSF(LD32(a0-16008));
    f1 = BITSF(LD32(sp+60));
    f2 = BITSF(0);
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+80);
    if (cnd_) { goto L_08884000; }
    goto L_08883F24;
L_08883F24:;
    a1 = D_08AEC17C - (-16004);
    f0 = BITSF(LD32(a1-16004));
    f0 = f1 + f0;
    goto L_08883F30;
L_08883F30:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a2));
    f1 = BITSF(LD32(a0-16008));
    v0 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08883FF4; }
    goto L_08883F58;
L_08883F58:;
    f0 = BITSF(LD32(a1-16004));
    f0 = f2 + f0;
    goto L_08883F60;
L_08883F60:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+4));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-16008));
    v0 = v0 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08883FE8; }
    goto L_08883F8C;
L_08883F8C:;
    f0 = BITSF(LD32(a1-16004));
    f0 = f1 + f0;
    goto L_08883F94;
L_08883F94:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a2+8));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-16008));
    v0 = v0 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08883FDC; }
    goto L_08883FC0;
L_08883FC0:;
    f0 = BITSF(LD32(a1-16004));
    f0 = f1 + f0;
    goto L_08883FC8;
L_08883FC8:;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f0);
    v0 = v0 + a0;
    goto L_08883FD4;
L_08883FD4:;
    ST32(s5, v0);
    goto L_08883ED8;
L_08883FDC:;
    f0 = BITSF(LD32(a1-16004));
    f0 = f1 - f0;
    goto L_08883FC8;
L_08883FE8:;
    f0 = BITSF(LD32(a1-16004));
    f0 = f1 - f0;
    goto L_08883F94;
L_08883FF4:;
    f0 = BITSF(LD32(a1-16004));
    f0 = f2 - f0;
    goto L_08883F60;
L_08884000:;
    a1 = D_08AEC17C - (-16004);
    f0 = BITSF(LD32(a1-16004));
    f0 = f1 - f0;
    goto L_08883F30;
L_08884010:;
    a0 = a1 + 0;
    v0 = func_0888618C(a0);
    goto L_08884018;
L_08884018:;
    v1 = LD32(sp+68);
    goto L_0888401C;
L_0888401C:;
    ST32(v1, v0);
    goto L_08883ED8;
L_08884024:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_0888402C;
L_0888402C:;
    f1 = BITSF(LD32(s3));
    f1 = f1 + f0;
    ST32(s3+8, FBITS(f1));
    goto L_08883ED8;
L_0888403C:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08884044;
L_08884044:;
    f1 = BITSF(LD32(s3+4));
    f1 = f1 + f0;
    goto L_08883ED4;
L_08884050:;
    a0 = a1 + 0;
    v0 = func_088861F4(a0);
    goto L_08884058;
L_08884058:;
    v1 = LD32(sp+168);
    goto L_0888401C;
L_08884060:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08884068;
L_08884068:;
    ST32(fp, FBITS(f0));
    goto L_08883ED8;
L_08884070:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08884078;
L_08884078:;
    ST32(s7, FBITS(f0));
    goto L_08883ED8;
L_08884080:;
    a0 = a1 + 0;
    v0 = func_08886180(a0);
    goto L_08884088;
L_08884088:;
    v1 = LD32(sp+72);
    goto L_0888401C;
L_08884090:;
    a0 = a1 + 0;
    v0 = func_08886180(a0);
    goto L_08884098;
L_08884098:;
    a0 = LD32(s2+188);
    a1 = v0 + 0;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088840A4;
L_088840A4:;
    v1 = LD32(sp+168);
    goto L_0888401C;
L_088840AC:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_088840B4;
L_088840B4:;
    ST32(s6, FBITS(f0));
    goto L_08883ED8;
L_088840BC:;
    a0 = a1 + 0;
    v0 = func_088861FC(a0);
    goto L_088840C4;
L_088840C4:;
    a0 = v0 + 0;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088840CC;
L_088840CC:;
    v1 = LD32(sp+76);
    goto L_0888401C;
L_088840D4:;
    v0 = LD_U8(s5+3);
    f20 = BITSF(v0);
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_088840E4;
L_088840E4:;
    f1 = (float)(s32)FBITS(f20);
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC17C - (-16004);
    if (cnd_) { goto L_08884124; }
    goto L_08884100;
L_08884100:;
    f0 = BITSF(LD32(v0-16004));
    f0 = f1 + f0;
    goto L_08884108;
L_08884108:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s5);
    v1 = FBITS(f0);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    v1 = v1 << 24;
    v0 = v0 | v1;
    goto L_08883FD4;
L_08884124:;
    f0 = BITSF(LD32(v0-16004));
    f0 = f1 - f0;
    goto L_08884108;
L_08884130:;
    a0 = a1 + 0;
    f0 = func_08886198(a0);
    goto L_08884138;
L_08884138:;
    v1 = LD32(sp+64);
    ST32(v1, FBITS(f0));
    goto L_08883ED8;
}

/* 08884144 */
void func_08884144(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, u32 sp_in)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64); memcpy(stack_ + 64, PTR(sp_in), 16); /* stack-passed arguments */
L_08884144:;
    sp = sp - 64;
    s0 = a1 + 0;
    a0 = s0 + 0;
    a1 = a2 + 0;
    s5 = t0 + 0;
    s4 = t1 + 0;
    s3 = t3 + 0;
    s2 = t2 + 0;
    s1 = a3 + 0;
    s6 = LD32(sp+64);
    v0 = func_0887D0EC(a0, a1);
    goto L_08884194;
L_08884194:;
    cnd_ = v0 != 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_088841D0; }
    goto L_0888419C;
L_0888419C:;
    ST32(s0+12, v0);
    ST32(s0+4, 0);
    goto L_088841A4;
L_088841A4:;
    goto L_088841A8;
L_088841A8:;
    sp = sp + 64;
    return;
L_088841D0:;
    a0 = s0 + 0;
    v0 = func_0887D134(a0);
    goto L_088841D8;
L_088841D8:;
    v1 = v0 + 0;
    v0 = v0 < 0x13u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088841A8; }
    goto L_088841E8;
L_088841E8:;
    v0 = v1 << 2;
    v1 = D_08AD4E08 - (19976);
    v1 = v1 + 19976;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088841A4u: goto L_088841A4; case 0x08884204u: goto L_08884204; case 0x0888424Cu: goto L_0888424C; case 0x0888425Cu: goto L_0888425C; case 0x0888426Cu: goto L_0888426C; case 0x08884284u: goto L_08884284; case 0x088842E4u: goto L_088842E4; case 0x08884308u: goto L_08884308; case 0x08884330u: goto L_08884330; default: rs_break(0, 0x088841fc); }
L_08884204:;
    a1 = s0 + 0;
    a0 = sp + 0;
    func_0887D1C8(a0, a1);
    goto L_08884210;
L_08884210:;
    f4 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f0 = BITSF(LD32(s1+12));
    f1 = BITSF(LD32(s1+8));
    f2 = f2 + f4;
    f0 = f0 + f5;
    f3 = f3 + f5;
    f1 = f1 + f4;
    ST32(s1, FBITS(f2));
    ST32(s1+12, FBITS(f0));
    ST32(s1+4, FBITS(f3));
    goto L_08884244;
L_08884244:;
    ST32(s1+8, FBITS(f1));
    goto L_088841A4;
L_0888424C:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08884254;
L_08884254:;
    ST32(s4, FBITS(f0));
    goto L_088841A4;
L_0888425C:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08884264;
L_08884264:;
    ST32(s2, FBITS(f0));
    goto L_088841A4;
L_0888426C:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08884274;
L_08884274:;
    f1 = BITSF(LD32(s3));
    f1 = f1 * f0;
    ST32(s3, FBITS(f1));
    goto L_088841A4;
L_08884284:;
    v0 = LD_U8(s6+3);
    f20 = BITSF(v0);
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08884294;
L_08884294:;
    f1 = (float)(s32)FBITS(f20);
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC180 - (-16000);
    if (cnd_) { goto L_088842D8; }
    goto L_088842B0;
L_088842B0:;
    f0 = BITSF(LD32(v0-16000));
    f0 = f1 + f0;
    goto L_088842B8;
L_088842B8:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s6);
    a0 = FBITS(f0);
    v0 = (v0 & ~(0xffu << 24)) | ((0 & 0xff) << 24);
    v1 = a0 << 24;
    v0 = v0 | v1;
    ST32(s6, v0);
    goto L_088841A4;
L_088842D8:;
    f0 = BITSF(LD32(v0-16000));
    f0 = f1 - f0;
    goto L_088842B8;
L_088842E4:;
    f20 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(s1));
    a0 = s0 + 0;
    f20 = f20 - f0;
    f0 = func_0887D2BC(a0);
    goto L_088842F8;
L_088842F8:;
    f1 = BITSF(LD32(s1));
    f20 = f20 * f0;
    f1 = f1 + f20;
    goto L_08884244;
L_08884308:;
    f20 = BITSF(LD32(s1+12));
    f0 = BITSF(LD32(s1+4));
    a0 = s0 + 0;
    f20 = f20 - f0;
    f0 = func_0887D2BC(a0);
    goto L_0888431C;
L_0888431C:;
    f1 = BITSF(LD32(s1+4));
    f20 = f20 * f0;
    f1 = f1 + f20;
    ST32(s1+12, FBITS(f1));
    goto L_088841A4;
L_08884330:;
    a0 = s0 + 0;
    f0 = func_0887D2BC(a0);
    goto L_08884338;
L_08884338:;
    ST32(s5, FBITS(f0));
    goto L_088841A4;
}

/* 08884340 */
void func_08884340(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884340:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_08886850(a0);
    goto L_08884354;
L_08884354:;
    v0 = 7;
    ST32(s0+240, 0);
    v1 = s0 + 188;
    a1 = s0 + 200;
    ST32(s0+176, v0);
    v0 = D_08AF6DD0 - (28112);
    v0 = v0 + 28112;
    f0 = BITSF(LD32(s0+240));
    a2 = s0 + 212;
    a3 = s0 + 224;
    ST32(s0, v0);
    v0 = 1;
    a0 = s0 + 0;
    ST32(s0+160, 0);
    ST32(s0+164, 0);
    ST32(s0+172, 0);
    ST32(s0+180, FBITS(f0));
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(a1+8, 0);
    ST32(a1+4, 0);
    ST32(a2+8, 0);
    ST32(a2+4, 0);
    ST32(a3+8, 0);
    ST32(a3+4, 0);
    ST32(s0+184, FBITS(f0));
    ST32(s0+4, v0);
    ST32(s0+152, 0);
    ST32(s0+168, 0);
    ST32(s0+188, 0);
    ST32(s0+200, 0);
    ST32(s0+212, 0);
    ST32(s0+224, 0);
    ST32(s0+236, 0);
    ST32(s0+244, 0);
    { rv_t r_ = func_088856AC(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088843E4;
L_088843E4:;
    sp = sp + 16;
    return;
}

/* 088843F4 */
rv_t func_088843F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088843F4:;
    sp = sp - 32;
    v0 = D_08AF6DD0 - (28112);
    v0 = v0 + 28112;
    s0 = a0 + 0;
    s3 = s0 + 212;
    s1 = s0 + 224;
    v1 = LD32(a0+224);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088844D8; }
    goto L_08884434;
L_08884434:;
    v0 = LD32(s0+212);
    ST32(s1+4, 0);
    s4 = s0 + 188;
    s2 = s0 + 200;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_088844C8; }
    goto L_08884450;
L_08884450:;
    v0 = LD32(s0+200);
    ST32(s3+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s3+8, 0);
    if (cnd_) { goto L_088844B8; }
    goto L_08884464;
L_08884464:;
    v0 = LD32(s0+188);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_088844A8; }
    goto L_08884478;
L_08884478:;
    ST32(s4+4, 0);
    a0 = s0 + 0;
    ST32(s4+8, 0);
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08884488;
L_08884488:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088844A8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088844B0;
L_088844B0:;
    ST32(s0+188, 0);
    goto L_08884478;
L_088844B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088844C0;
L_088844C0:;
    ST32(s0+200, 0);
    goto L_08884464;
L_088844C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088844D0;
L_088844D0:;
    ST32(s0+212, 0);
    goto L_08884450;
L_088844D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088844E0;
L_088844E0:;
    ST32(s0+224, 0);
    goto L_08884434;
}

/* 088844E8 */
rv_t func_088844E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088844E8:;
    sp = sp - 32;
    v0 = D_08AF6DD0 - (28112);
    v0 = v0 + 28112;
    s0 = a0 + 0;
    s3 = s0 + 212;
    s1 = s0 + 224;
    v1 = LD32(a0+224);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088845D4; }
    goto L_08884528;
L_08884528:;
    v0 = LD32(s0+212);
    ST32(s1+4, 0);
    s4 = s0 + 188;
    s2 = s0 + 200;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_088845C4; }
    goto L_08884544;
L_08884544:;
    v0 = LD32(s0+200);
    ST32(s3+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s3+8, 0);
    if (cnd_) { goto L_088845B4; }
    goto L_08884558;
L_08884558:;
    v0 = LD32(s0+188);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_088845A4; }
    goto L_0888456C;
L_0888456C:;
    ST32(s4+4, 0);
    a0 = s0 + 0;
    ST32(s4+8, 0);
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888457C;
L_0888457C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08884584;
L_08884584:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088845A4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088845AC;
L_088845AC:;
    ST32(s0+188, 0);
    goto L_0888456C;
L_088845B4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088845BC;
L_088845BC:;
    ST32(s0+200, 0);
    goto L_08884558;
L_088845C4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088845CC;
L_088845CC:;
    ST32(s0+212, 0);
    goto L_08884544;
L_088845D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088845DC;
L_088845DC:;
    ST32(s0+224, 0);
    goto L_08884528;
}

/* 088845E4 */
rv_t func_088845E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088845E4:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08884608;
L_08884608:;
    v1 = LD32(s0+144);
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s0+156); goto L_0888474C; }
    goto L_08884614;
L_08884614:;
    v1 = LD32(s0+236);
    s1 = 4096;
    cnd_ = v1 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_08884630; }
    goto L_08884624;
L_08884624:;
    f12 = f20;
    { rv_t r_ = func_08886F58(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888462C;
L_0888462C:;
    v1 = LD32(s0+236);
    goto L_08884630;
L_08884630:;
    v0 = 2048;
    cnd_ = v1 == v0;
    v0 = v1 < 0x801u;
    if (cnd_) { goto L_08884710; }
    goto L_0888463C;
L_0888463C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0+152); goto L_08884658; }
    goto L_08884644;
L_08884644:;
    cnd_ = v1 == s1;
    v0 = 8192;
    if (cnd_) { goto L_088846E0; }
    goto L_0888464C;
L_0888464C:;
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(s0+240)); goto L_088846D4; }
    goto L_08884654;
L_08884654:;
    a0 = LD32(s0+152);
    goto L_08884658;
L_08884658:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0888467C; }
    goto L_08884660;
L_08884660:;
    goto L_08884664;
L_08884664:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888467C:;
    v0 = func_08888FD8(a0);
    goto L_08884684;
L_08884684:;
    v0 = v0 - 2000;
    v0 = v0 < 0x7d0u;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+156, 0); goto L_088846CC; }
    goto L_08884694;
L_08884694:;
    v1 = LD32(s0+152);
    v0 = LD_U8(v1+152);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+144); goto L_088846B4; }
    goto L_088846A4;
L_088846A4:;
    v0 = LD_U8(v1+153);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08884664; }
    goto L_088846B0;
L_088846B0:;
    a1 = LD32(s0+144);
    goto L_088846B4;
L_088846B4:;
    a0 = LD32(s0+156);
    a2 = 5;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088846C8;
L_088846C8:;
    ST32(s0+156, 0);
    goto L_088846CC;
L_088846CC:;
    ST32(s0+152, 0);
    goto L_08884660;
L_088846D4:;
    f0 = f0 + f20;
    ST32(s0+240, FBITS(f0));
    goto L_08884654;
L_088846E0:;
    f0 = BITSF(LD32(s0+240));
    f21 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    ST32(s0+240, FBITS(f0));
    if (cnd_) { goto L_08884654; }
    goto L_088846FC;
L_088846FC:;
    a0 = s0 + 0;
    { u64 r_ = func_0888AD48(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08884704;
L_08884704:;
    ST32(s0+240, FBITS(f21));
    ST32(s0+236, 0);
    goto L_08884654;
L_08884710:;
    v0 = D_08B29BFC - (-25604);
    v1 = LD32(v0-25604);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08884664; }
    goto L_08884720;
L_08884720:;
    f0 = BITSF(LD32(s0+240));
    f1 = BITSF(0);
    f0 = f0 - f20;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(s0+240, FBITS(f0));
    if (cnd_) { goto L_08884654; }
    goto L_0888473C;
L_0888473C:;
    v0 = 8192;
    ST32(s0+240, FBITS(f1));
    ST32(s0+236, v0);
    goto L_08884654;
L_0888474C:;
    v0 = D_08B29C60 - (-25504);
    ST32(v0-25504, v1);
    goto L_08884614;
}

/* 08884758 */
rv_t func_08884758(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08884758:;
    sp = sp - 32;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888701C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884774;
L_08884774:;
    v1 = LD32(s0);
    v0 = LD32(v1+160);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884784;
L_08884784:;
    a2 = LD32(s1);
    ST32(sp+4, v1);
    a1 = sp + 0;
    ST32(sp, v0);
    v0 = LD32(a2+168);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088847A0;
L_088847A0:;
    a0 = s0 + 0;
    v0 = func_08884FB0(a0);
    goto L_088847A8;
L_088847A8:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    f0 = func_08884FB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088847B4;
L_088847B4:;
    a0 = s1 + 188;
    a1 = s0 + 188;
    { u64 r_ = func_0887DFCC(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088847C0;
L_088847C0:;
    a1 = s0 + 212;
    a0 = s1 + 212;
    { u64 r_ = func_0887DFCC(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088847CC;
L_088847CC:;
    a0 = s0 + 0;
    v0 = func_08885038(a0);
    goto L_088847D4;
L_088847D4:;
    ST32(s1+176, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088847EC */
rv_t func_088847EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088847EC:;
    sp = sp - 16;
    v0 = func_08885CAC(a0);
    goto L_088847FC;
L_088847FC:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0887DED0(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888480C;
L_0888480C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08884818 */
rv_t func_08884818(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08884818:;
    sp = sp - 48;
    s4 = 0 + 0;
    s2 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088848E8; }
    goto L_08884854;
L_08884854:;
    s7 = 2001;
    v0 = LD32(s1+48);
    goto L_0888485C;
L_0888485C:;
    s0 = s2 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v0 = func_08888FD8(a0);
    goto L_0888486C;
L_0888486C:;
    v0 = v0 - 2000;
    v0 = v0 < 0x7d0u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_088848D8; }
    goto L_0888487C;
L_0888487C:;
    v0 = LD32(s1+48);
    v0 = s0 + v0;
    s0 = LD32(v0);
    v1 = LD_U8(s0+152);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_088848D8; }
    goto L_08884894;
L_08884894:;
    v0 = LD_U8(s0+153);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_088848D8; }
    goto L_088848A0;
L_088848A0:;
    cnd_ = s4 == 0;
    if (cnd_) { s4 = s0 + 0; goto L_088848B8; }
    goto L_088848A8;
L_088848A8:;
    a0 = s0 + 0;
    v0 = func_08888FD8(a0);
    goto L_088848B0;
L_088848B0:;
    cnd_ = v0 == s7;
    s3 = v0 + 0;
    if (cnd_) { goto L_08884918; }
    goto L_088848B8;
L_088848B8:;
    v1 = LD32(s4+144);
    goto L_088848BC;
L_088848BC:;
    v0 = LD32(s1+160);
    cnd_ = v1 == v0;
    v0 = s4 + 0;
    if (cnd_) { goto L_088848EC; }
    goto L_088848C8;
L_088848C8:;
    v0 = LD32(s1+164);
    cnd_ = v1 == v0;
    v0 = s4 + 0;
    if (cnd_) { goto L_088848EC; }
    goto L_088848D4;
L_088848D4:;
    v0 = LD32(s1+52);
    goto L_088848D8;
L_088848D8:;
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_0888485C; }
    goto L_088848E8;
L_088848E8:;
    v0 = s4 + 0;
    goto L_088848EC;
L_088848EC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08884918:;
    a0 = s4 + 0;
    v0 = func_08888FD8(a0);
    goto L_08884920;
L_08884920:;
    cnd_ = v0 == s3;
    s6 = 0 + 0;
    if (cnd_) { goto L_08884930; }
    goto L_08884928;
L_08884928:;
    s4 = s0 + 0;
    goto L_088848B8;
L_08884930:;
    s5 = 0 + 0;
    s3 = 0 + 0;
    goto L_08884938;
L_08884938:;
    a1 = s3 + 0;
    a0 = s4 + 0;
    { rv_t r_ = func_0888CC44(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884944;
L_08884944:;
    v0 = 0 < v0;
    a1 = s3 + 0;
    a0 = s0 + 0;
    s6 = s6 + v0;
    s3 = s3 + 1;
    { rv_t r_ = func_0888CC44(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888495C;
L_0888495C:;
    v0 = 0 < v0;
    v1 = s3 < 0x4u;
    cnd_ = v1 != 0;
    s5 = s5 + v0;
    if (cnd_) { goto L_08884938; }
    goto L_0888496C;
L_0888496C:;
    v0 = s6 < s5;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s4+144); goto L_088848BC; }
    goto L_08884978;
L_08884978:;
    s4 = s0 + 0;
    goto L_088848B8;
}

/* 08884980 */
rv_t func_08884980(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884980:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+152);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08884A9C; }
    goto L_088849A8;
L_088849A8:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088849BC;
L_088849BC:;
    s2 = v0 + 0;
    v0 = 0x20000000u;
    v0 = v0 | 0x4000;
    cnd_ = s1 == v0;
    v0 = s2 & 0x4000;
    if (cnd_) { goto L_088849EC; }
    goto L_088849D0;
L_088849D0:;
    v0 = s2 + 0;
    goto L_088849D4;
L_088849D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088849EC:;
    cnd_ = v0 != 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_088849D4; }
    goto L_088849F4;
L_088849F4:;
    a0 = LD32(s0+168);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08884A18; }
    goto L_08884A00;
L_08884A00:;
    v0 = LD_U8(a0+152);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08884A18; }
    goto L_08884A0C;
L_08884A0C:;
    v0 = LD_U8(a0+153);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08884A70; }
    goto L_08884A18;
L_08884A18:;
    a0 = s0 + 0;
    v0 = func_088855F4(a0);
    goto L_08884A20;
L_08884A20:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_088849D4; }
    goto L_08884A28;
L_08884A28:;
    a0 = 2;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884A30;
L_08884A30:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    v0 = func_0888561C(a0, a1);
    goto L_08884A3C;
L_08884A3C:;
    a0 = v0 + 0;
    a1 = 1;
    a2 = 0 + 0;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884A4C;
L_08884A4C:;
    ST32(s0+172, 0);
    a0 = s0 + 0;
    v0 = func_08885600(a0);
    goto L_08884A58;
L_08884A58:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s2 + 0; goto L_088849D4; }
    goto L_08884A60;
L_08884A60:;
    a0 = LD32(s0+144);
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08884A68;
L_08884A68:;
    v0 = s2 + 0;
    goto L_088849D4;
L_08884A70:;
    v0 = func_0888D7F0(a0);
    goto L_08884A78;
L_08884A78:;
    cnd_ = v0 == 0;
    a1 = 16;
    if (cnd_) { goto L_08884A18; }
    goto L_08884A80;
L_08884A80:;
    a0 = LD32(s0+168);
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s2 = s2 | 0x4000;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884A94;
L_08884A94:;
    v0 = s2 + 0;
    goto L_088849D4;
L_08884A9C:;
    { rv_t r_ = func_08884818(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884AA4;
L_08884AA4:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08884AD8; }
    goto L_08884AAC;
L_08884AAC:;
    v0 = LD32(v0+144);
    a1 = LD32(s0+144);
    ST32(s0+152, v1);
    a0 = v0 + 0;
    a2 = 4;
    ST32(s0+156, v0);
    a3 = 0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08884AD0;
L_08884AD0:;
    v0 = s2 + 0;
    goto L_088849D4;
L_08884AD8:;
    ST32(s0+156, 0);
    goto L_088849D0;
}

/* 08884AE0 */
rv_t func_08884AE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884AE0:;
    sp = sp - 16;
    v0 = LD32(a0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08884B40; }
    goto L_08884B04;
L_08884B04:;
    a1 = LD32(a0+52);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08884B40; }
    goto L_08884B10;
L_08884B10:;
    v0 = LD32(s1+48);
    goto L_08884B14;
L_08884B14:;
    s0 = s2 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0+116);
    v1 = (v1 >> 8) & 0x1;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08884B58; }
    goto L_08884B30;
L_08884B30:;
    s2 = s2 + 1;
    goto L_08884B34;
L_08884B34:;
    v0 = s2 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08884B14; }
    goto L_08884B40;
L_08884B40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08884B58:;
    v0 = func_08888FE0(a0);
    goto L_08884B60;
L_08884B60:;
    cnd_ = v0 == 0;
    a1 = 1087;
    if (cnd_) { goto L_08884B90; }
    goto L_08884B68;
L_08884B68:;
    v0 = LD32(s1+48);
    a1 = LD32(s1+236);
    goto L_08884B70;
L_08884B70:;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s2 = s2 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884B88;
L_08884B88:;
    a1 = LD32(s1+52);
    goto L_08884B34;
L_08884B90:;
    v0 = LD32(s1+48);
    goto L_08884B70;
}

/* 08884B98 */
rv_t func_08884B98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884B98:;
    sp = sp - 16;
    { rv_t r_ = func_08885BCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884BA8;
L_08884BA8:;
    v0 = 0 < v0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08884BB8 */
rv_t func_08884BB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884BB8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v1 = LD_U16(a1);
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08884C20; }
    goto L_08884BDC;
L_08884BDC:;
    v0 = v1 < 0x9u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_08884C24; }
    goto L_08884BE8;
L_08884BE8:;
    v0 = v1 << 2;
    v1 = D_08AD4E54 - (20052);
    v1 = v1 + 20052;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08884C04u: goto L_08884C04; case 0x08884C20u: goto L_08884C20; case 0x08884C38u: goto L_08884C38; case 0x08884C4Cu: goto L_08884C4C; case 0x08884C60u: goto L_08884C60; case 0x08884C74u: goto L_08884C74; case 0x08884CD0u: goto L_08884CD0; case 0x08884CE4u: goto L_08884CE4; case 0x08884CF8u: goto L_08884CF8; default: rs_break(0, 0x08884bfc); }
L_08884C04:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+184);
    goto L_08884C14;
L_08884C14:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884C1C;
L_08884C1C:;
    a1 = v0 + 0;
    goto L_08884C20;
L_08884C20:;
    goto L_08884C24;
L_08884C24:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08884C38:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+192);
    goto L_08884C14;
L_08884C4C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+196);
    goto L_08884C14;
L_08884C60:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+200);
    goto L_08884C14;
L_08884C74:;
    a1 = LD32(s1+8);
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08884CA4; }
    goto L_08884C80;
L_08884C80:;
    v0 = LD32(s0+144);
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(s0); goto L_08884CA4; }
    goto L_08884C8C;
L_08884C8C:;
    ST32(s0+156, a1);
    a0 = s0 + 0;
    { rv_t r_ = func_08885BCC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884C98;
L_08884C98:;
    cnd_ = v0 != 0;
    ST32(s0+152, v0);
    if (cnd_) { goto L_08884CB4; }
    goto L_08884CA0;
L_08884CA0:;
    v1 = LD32(s0);
    goto L_08884CA4;
L_08884CA4:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+204);
    goto L_08884C14;
L_08884CB4:;
    a0 = v0 + 0;
    v0 = func_08888FE0(a0);
    goto L_08884CBC;
L_08884CBC:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08884CA4; }
    goto L_08884CC4;
L_08884CC4:;
    ST32(s0+152, 0);
    ST32(s0+156, 0);
    goto L_08884CA0;
L_08884CD0:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+208);
    goto L_08884C14;
L_08884CE4:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+212);
    goto L_08884C14;
L_08884CF8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = s1 + 0;
    v0 = LD32(v1+188);
    goto L_08884C14;
}

/* 08884D0C */
rv_t func_08884D0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08884D0C:;
    sp = sp - 32;
    s0 = a0 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08888148(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884D30;
L_08884D30:;
    a0 = sp + 0;
    v0 = LD32(s0+52);
    v1 = LD32(s0+56);
    a3 = v0 << 2;
    a2 = v0 + 1;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08884D6C; }
    goto L_08884D50;
L_08884D50:;
    v0 = s2 + 0;
    goto L_08884D54;
L_08884D54:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08884D6C:;
    v0 = LD32(s0+48);
    v1 = LD32(s1);
    ST32(s0+52, a2);
    v0 = a3 + v0;
    s2 = 1;
    ST32(v0, s1);
    v0 = LD32(v1+28);
    t_ = v0;
    ST32(s1+148, s0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884D90;
L_08884D90:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884DA4;
L_08884DA4:;
    v0 = s2 + 0;
    goto L_08884D54;
}

/* 08884DAC */
rv_t func_08884DAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08884DAC:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+156);
    t_ = v0;
    a1 = LD32(a1+8);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884DE4;
L_08884DE4:;
    a0 = v0 + 0;
    v1 = LD32(s3+8);
    v0 = LD32(s0+144);
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s0); goto L_08884E90; }
    goto L_08884DF8;
L_08884DF8:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_08884E90; }
    goto L_08884E00;
L_08884E00:;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = LD32(s0); goto L_08884E90; }
    goto L_08884E0C;
L_08884E0C:;
    v0 = LD32(s0+52);
    goto L_08884E10;
L_08884E10:;
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08884E58; }
    goto L_08884E18;
L_08884E18:;
    s4 = 1;
    v1 = LD32(s0+48);
    goto L_08884E20;
L_08884E20:;
    v0 = s1 << 2;
    a1 = s3 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884E40;
L_08884E40:;
    cnd_ = v0 == s4;
    s2 = v0 + 0;
    if (cnd_) { goto L_08884E7C; }
    goto L_08884E48;
L_08884E48:;
    v0 = LD32(s0+52);
    goto L_08884E4C;
L_08884E4C:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_08884E20; }
    goto L_08884E58;
L_08884E58:;
    v0 = s2 + 0;
    goto L_08884E5C;
L_08884E5C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08884E7C:;
    v0 = LD32(s3+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+52); goto L_08884E4C; }
    goto L_08884E88;
L_08884E88:;
    v0 = s2 + 0;
    goto L_08884E5C;
L_08884E90:;
    a0 = s0 + 0;
    v0 = LD32(v1+24);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884EA0;
L_08884EA0:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08884E0C; }
    goto L_08884EA8;
L_08884EA8:;
    v0 = LD32(s3+8);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = s2 + 0; goto L_08884E5C; }
    goto L_08884EB4;
L_08884EB4:;
    v0 = LD32(s0+52);
    goto L_08884E10;
}

/* 08884EBC */
rv_t func_08884EBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884EBC:;
    v0 = LD32(a0+180);
    v1 = LD32(a0+184);
    sp = sp - 16;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08884ED0 */
rv_t func_08884ED0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08884ED0:;
    ST32(a0+184, FBITS(f13));
    ST32(a0+180, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 08884EDC */
rv_t func_08884EDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884EDC:;
    sp = sp - 16;
    v1 = LD32(a0);
    f13 = BITSF(LD32(a1+4));
    v0 = LD32(v1+164);
    t_ = v0;
    f12 = BITSF(LD32(a1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884EF8;
L_08884EF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08884F04 */
rv_t func_08884F04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884F04:;
    sp = sp - 16;
    v1 = LD32(a0);
    f13 = BITSF(LD32(a1+4));
    v0 = LD32(v1+164);
    t_ = v0;
    f12 = BITSF(LD32(a1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884F20;
L_08884F20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08884F2C */
rv_t func_08884F2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08884F2C:;
    sp = sp - 32;
    a2 = a0 + 4;
    a3 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a0 = a1 + 0;
    v0 = LD32(a1);
    t0 = LD32(v0+48);
    t_ = t0;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884F60;
L_08884F60:;
    v1 = LD32(s1);
    v0 = LD32(v1+160);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884F70;
L_08884F70:;
    ST32(sp, v0);
    v0 = s0 + 0;
    ST32(sp+4, v1);
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f2 = f2 + f0;
    f3 = f3 + f1;
    ST32(s0+8, FBITS(f2));
    ST32(s0+12, FBITS(f3));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08884FB0 */
u32 func_08884FB0(u32 a0)
{
    u32 v0 = 0;
L_08884FB0:;
    v0 = LD32(a0+160);
    return v0;
}

/* 08884FB8 */
float func_08884FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08884FB8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0888818C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08884FD4;
L_08884FD4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08884FEC; }
    goto L_08884FDC;
L_08884FDC:;
    v0 = func_08888FE0(a0);
    goto L_08884FE4;
L_08884FE4:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+160, s0); goto L_08884FEC; }
    goto L_08884FEC;
L_08884FEC:;
    sp = sp + 16;
    return f0;
}

/* 08885000 */
u64 func_08885000(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885000:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_08887F6C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888501C;
L_0888501C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+164, s0); goto L_08885024; }
    goto L_08885024;
L_08885024:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08885038 */
u32 func_08885038(u32 a0)
{
    u32 v0 = 0;
L_08885038:;
    v0 = LD32(a0+176);
    return v0;
}

/* 08885040 */
rv_t func_08885040(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08885040:;
    sp = sp - 32;
    s2 = a3 + 0;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08888454(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885068;
L_08885068:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885074;
L_08885074:;
    a1 = sp + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885080;
L_08885080:;
    v1 = LD32(s0);
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    v0 = LD32(v1+164);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885098;
L_08885098:;
    a2 = s0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088850A8;
L_088850A8:;
    a0 = s1 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088850B4;
L_088850B4:;
    a1 = LD32(sp+8);
    a0 = s0 + 0;
    f0 = func_08884FB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088850C0;
L_088850C0:;
    a0 = s1 + 0;
    cnd_ = s2 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08885158; }
    goto L_088850CC;
L_088850CC:;
    v0 = s2 < 0x2u;
    goto L_088850D0;
L_088850D0:;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 12;
    if (cnd_) { goto L_08885148; }
    goto L_088850DC;
L_088850DC:;
    v0 = s2 < 0x3u;
    goto L_088850E0;
L_088850E0:;
    a0 = s0 + 188;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0888512C; }
    goto L_088850EC;
L_088850EC:;
    v0 = s2 < 0x4u;
    goto L_088850F0;
L_088850F0:;
    a1 = s0 + 176;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888511C; }
    goto L_088850FC;
L_088850FC:;
    a0 = s0 + 0;
    { u64 r_ = func_0888B098(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885104;
L_08885104:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888511C:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885124;
L_08885124:;
    goto L_088850FC;
L_0888512C:;
    { rv_t r_ = func_0887DF60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885134;
L_08885134:;
    a1 = s1 + 0;
    a0 = s0 + 212;
    { rv_t r_ = func_0887DF60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885140;
L_08885140:;
    v0 = s2 < 0x4u;
    goto L_088850F0;
L_08885148:;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885150;
L_08885150:;
    v0 = s2 < 0x3u;
    goto L_088850E0;
L_08885158:;
    f0 = func_0882DE98(a0, a1);
    goto L_08885160;
L_08885160:;
    v0 = s2 < 0x2u;
    goto L_088850D0;
}

/* 08885168 */
rv_t func_08885168(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08885168:;
    sp = sp - 48;
    s0 = a0 + 0;
    v1 = LD32(a1+8);
    v0 = LD32(a0+144);
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088851C4; }
    goto L_0888519C;
L_0888519C:;
    v0 = a1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088851C4:;
    v1 = LD32(a0+236);
    v0 = 4096;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08885404; }
    goto L_088851D4;
L_088851D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08889264(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088851DC;
L_088851DC:;
    v0 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0+148);
    t_ = v1;
    a1 = 2048;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088851F0;
L_088851F0:;
    v0 = D_08AEC184 - (-15996);
    f1 = BITSF(LD32(v0-15996));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08885208; }
    goto L_08885208;
L_08885208:;
    v1 = LD32(s0+52);
    v0 = 2048;
    ST32(s0+240, FBITS(f1));
    s1 = 0 + 0;
    cnd_ = v1 != 0;
    ST32(s0+236, v0);
    if (cnd_) { goto L_088853C0; }
    goto L_08885220;
L_08885220:;
    a0 = s0 + 0;
    v0 = func_08885CA4(a0);
    goto L_08885228;
L_08885228:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0887DED0(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885238;
L_08885238:;
    v0 = LD32(s0+164);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+160); goto L_088853B8; }
    goto L_08885244;
L_08885244:;
    ST32(s0+156, v0);
    ST32(s0+164, 0);
    goto L_0888524C;
L_0888524C:;
    a1 = LD32(s0+156);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08885260; }
    goto L_08885258;
L_08885258:;
    a1 = 1;
    goto L_0888519C;
L_08885260:;
    a0 = s0 + 0;
    { rv_t r_ = func_08885BCC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885268;
L_08885268:;
    cnd_ = v0 != 0;
    ST32(s0+152, v0);
    if (cnd_) { goto L_0888539C; }
    goto L_08885270;
L_08885270:;
    a0 = s0 + 0;
    { rv_t r_ = func_08884818(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885278;
L_08885278:;
    a0 = LD32(s0+152);
    cnd_ = a0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08885328; }
    goto L_08885284;
L_08885284:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888529C; }
    goto L_0888528C;
L_0888528C:;
    v0 = LD32(s1+144);
    goto L_08885290;
L_08885290:;
    a0 = s1 + 0;
    ST32(s0+152, s1);
    ST32(s0+156, v0);
    goto L_0888529C;
L_0888529C:;
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(s0+144); goto L_0888530C; }
    goto L_088852A4;
L_088852A4:;
    v0 = LD32(s0+176);
    goto L_088852A8;
L_088852A8:;
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_0888519C; }
    goto L_088852B4;
L_088852B4:;
    v0 = D_08AEC188 - (-15992);
    f0 = BITSF(LD32(v0-15992));
    f1 = BITSF(LD32(s0+180));
    f2 = BITSF(LD32(s0+184));
    v0 = D_08B306F4 - (1780);
    f1 = f1 * f0;
    f2 = f2 * f0;
    v1 = D_08B306F8 - (1784);
    f3 = BITSF(LD32(v0+1780));
    f0 = BITSF(LD32(v1+1784));
    a2 = LD32(s0);
    f3 = f3 - f1;
    f0 = f0 - f2;
    ST32(sp+8, 0);
    a0 = s0 + 0;
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f0));
    v0 = LD32(a2+36);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885304;
L_08885304:;
    a1 = 1;
    goto L_0888519C;
L_0888530C:;
    a0 = LD32(s0+156);
    a2 = 4;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885320;
L_08885320:;
    v0 = LD32(s0+176);
    goto L_088852A8;
L_08885328:;
    v0 = func_08888FE0(a0);
    goto L_08885330;
L_08885330:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+152); goto L_0888529C; }
    goto L_08885338;
L_08885338:;
    cnd_ = s1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08885394; }
    goto L_08885340;
L_08885340:;
    s5 = LD32(s0+152);
    s3 = 0 + 0;
    s2 = 0 + 0;
    goto L_0888534C;
L_0888534C:;
    a1 = s2 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0888CC44(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885358;
L_08885358:;
    v0 = 0 < v0;
    a1 = s2 + 0;
    a0 = s5 + 0;
    s4 = s4 + v0;
    s2 = s2 + 1;
    { rv_t r_ = func_0888CC44(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885370;
L_08885370:;
    v0 = 0 < v0;
    v1 = s2 < 0x4u;
    cnd_ = v1 != 0;
    s3 = s3 + v0;
    if (cnd_) { goto L_0888534C; }
    goto L_08885380;
L_08885380:;
    v0 = s3 < 0x1u;
    v1 = 0 < s4;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+144); goto L_08885290; }
    goto L_08885394;
L_08885394:;
    a0 = LD32(s0+152);
    goto L_0888529C;
L_0888539C:;
    a0 = v0 + 0;
    v0 = func_08888FE0(a0);
    goto L_088853A4;
L_088853A4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08885270; }
    goto L_088853AC;
L_088853AC:;
    ST32(s0+152, 0);
    ST32(s0+156, 0);
    goto L_08885270;
L_088853B8:;
    ST32(s0+156, v0);
    goto L_0888524C;
L_088853C0:;
    v1 = LD32(s0+48);
    goto L_088853C4;
L_088853C4:;
    v0 = s1 << 2;
    a1 = LD32(s0+144);
    v0 = v0 + v1;
    a3 = LD32(v0);
    a2 = 7;
    t0 = 0 + 0;
    a0 = LD32(a3+144);
    a3 = 0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088853EC;
L_088853EC:;
    v1 = LD32(s0+52);
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_088853C4; }
    goto L_088853FC;
L_088853FC:;
    goto L_08885220;
L_08885404:;
    { u64 r_ = func_0888AD48(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888540C;
L_0888540C:;
    goto L_088851D4;
}

/* 08885414 */
rv_t func_08885414(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885414:;
    sp = sp - 16;
    s0 = a0 + 0;
    v1 = LD32(a1+8);
    v0 = LD32(a0+144);
    cnd_ = v1 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08885450; }
    goto L_08885438;
L_08885438:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08885450:;
    v0 = LD32(a0);
    v1 = LD32(v0+148);
    t_ = v1;
    a1 = 4096;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885460;
L_08885460:;
    v0 = D_08AEC18C - (-15988);
    f1 = BITSF(LD32(v0-15988));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_08885478; }
    goto L_08885478;
L_08885478:;
    v0 = 4096;
    ST32(s0+240, FBITS(f1));
    a0 = s0 + 0;
    s1 = 0 + 0;
    ST32(s0+236, v0);
    func_0888AD0C(a0);
    goto L_08885490;
L_08885490:;
    a0 = s0 + 0;
    v0 = func_08885CAC(a0);
    goto L_08885498;
L_08885498:;
    a0 = v0 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0887DED0(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088854A8;
L_088854A8:;
    v1 = LD32(s0+52);
    cnd_ = v1 == 0;
    a1 = 1;
    if (cnd_) { goto L_08885438; }
    goto L_088854B4;
L_088854B4:;
    v1 = LD32(s0+48);
    goto L_088854B8;
L_088854B8:;
    v0 = s1 << 2;
    a1 = LD32(s0+144);
    v0 = v0 + v1;
    a3 = LD32(v0);
    a2 = 8;
    t0 = 0 + 0;
    a0 = LD32(a3+144);
    a3 = 0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088854E0;
L_088854E0:;
    v1 = LD32(s0+52);
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_088854B8; }
    goto L_088854F0;
L_088854F0:;
    a1 = 1;
    goto L_08885438;
}

/* 088854F8 */
rv_t func_088854F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088854F8:;
    sp = sp - 16;
    a2 = 2;
    a3 = 0 + 0;
    v1 = LD32(a0+144);
    v0 = LD32(a1+8);
    a0 = 0 + 0;
    t0 = 0 + 0;
    cnd_ = v0 == v1;
    t1 = 0 + 0;
    if (cnd_) { goto L_08885530; }
    goto L_08885520;
L_08885520:;
    v0 = t1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08885530:;
    a1 = LD32(a1+12);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885538;
L_08885538:;
    t1 = 1;
    goto L_08885520;
}

/* 08885540 */
rv_t func_08885540(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08885540:;
    sp = sp - 32;
    s1 = a0 + 0;
    s2 = a1 + 0;
    s0 = 0 + 0;
    { rv_t r_ = func_0888912C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885568;
L_08885568:;
    v0 = LD32(s1+52);
    cnd_ = v0 != 0;
    f20 = f0;
    if (cnd_) { goto L_08885594; }
    goto L_08885574;
L_08885574:;
    f0 = f20;
    goto L_08885578;
L_08885578:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08885594:;
    v1 = LD32(s1+48);
    v0 = s0 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+148);
    t_ = v0;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088855B8;
L_088855B8:;
    f1 = f0;
    fcc = FCMP(f1, f20, 14);
    cnd_ = fcc;
    f0 = f20;
    if (cnd_) { goto L_088855D0; }
    goto L_088855CC;
L_088855CC:;
    f0 = f1;
    goto L_088855D0;
L_088855D0:;
    v0 = LD32(s1+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    f20 = f0;
    if (cnd_) { goto L_08885594; }
    goto L_088855E0;
L_088855E0:;
    f0 = f20;
    goto L_08885578;
}

/* 088855E8 */
u32 func_088855E8(u32 a0)
{
    u32 v0 = 0;
L_088855E8:;
    v0 = LD32(a0+176);
    v0 = v0 & 0x1;
    return v0;
}

/* 088855F4 */
u32 func_088855F4(u32 a0)
{
    u32 v0 = 0;
L_088855F4:;
    v0 = LD32(a0+176);
    v0 = (v0 >> 1) & 0x1;
    return v0;
}

/* 08885600 */
u32 func_08885600(u32 a0)
{
    u32 v0 = 0;
L_08885600:;
    v0 = LD32(a0+176);
    v0 = (v0 >> 2) & 0x1;
    return v0;
}

/* 0888560C */
void func_0888560C(u32 a0, u32 a1)
{
L_0888560C:;
    ST32(a0+168, a1);
    return;
}

/* 08885614 */
void func_08885614(u32 a0)
{
L_08885614:;
    ST32(a0+168, 0);
    return;
}

/* 0888561C */
u32 func_0888561C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888561C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    s1 = LD32(a0+172);
    if (cnd_) { goto L_08885650; }
    goto L_08885638;
L_08885638:;
    v0 = s1 + 0;
    goto L_0888563C;
L_0888563C:;
    sp = sp + 16;
    return v0;
L_08885650:;
    a0 = s1 + 0;
    { u64 r_ = func_0888AB24(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885658;
L_08885658:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08885638; }
    goto L_08885660;
L_08885660:;
    a0 = s0 + 0;
    v0 = func_088855E8(a0);
    goto L_08885668;
L_08885668:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0888569C; }
    goto L_08885674;
L_08885674:;
    v0 = func_0888561C(a0, a1);
    goto L_0888567C;
L_0888567C:;
    ST32(s0+172, 0);
    a0 = v0 + 0;
    s1 = v0 + 0;
    { u64 r_ = func_0888AB24(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888568C;
L_0888568C:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08885660; }
    goto L_08885694;
L_08885694:;
    v0 = s1 + 0;
    goto L_0888563C;
L_0888569C:;
    s1 = LD32(s0+144);
    goto L_08885638;
}

/* 088856A4 */
void func_088856A4(u32 a0, u32 a1)
{
L_088856A4:;
    ST32(a0+172, a1);
    return;
}

/* 088856AC */
rv_t func_088856AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088856AC:;
    return (rv_t){ v0, v1, f0 };
}

/* 088856B4 */
rv_t func_088856B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088856B4:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = 0 + 0;
    { rv_t r_ = func_088876E0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088856D0;
L_088856D0:;
    v0 = LD32(s0+52);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088856EC; }
    goto L_088856DC;
L_088856DC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088856EC:;
    v1 = LD32(s0+48);
    goto L_088856F0;
L_088856F0:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+100);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888570C;
L_0888570C:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_088856F0; }
    goto L_0888571C;
L_0888571C:;
    goto L_088856DC;
}

/* 08885724 */
rv_t func_08885724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08885724:;
    sp = sp - 96;
    v0 = D_08AD4E78 - (20088);
    fp = a0 + 0;
    s0 = v0 + 20088;
    ST32(sp+32, a1);
    cnd_ = s0 == 0;
    s5 = LD32(a0+148);
    if (cnd_) { goto L_08885B34; }
    goto L_08885768;
L_08885768:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885770;
L_08885770:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885784;
L_08885784:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08885B20; }
    goto L_0888578C;
L_0888578C:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    goto L_08885798;
L_08885798:;
    s6 = sp + 16;
    ST32(sp+20, 0);
    cnd_ = s5 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08885948; }
    goto L_088857A8;
L_088857A8:;
    a0 = LD32(sp+16);
    goto L_088857AC;
L_088857AC:;
    cnd_ = a0 == 0;
    s0 = LD32(sp);
    if (cnd_) { goto L_088857C8; }
    goto L_088857B4;
L_088857B4:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = LD32(sp); goto L_08885804; }
    goto L_088857BC;
L_088857BC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088857C4;
L_088857C4:;
    ST32(sp+16, 0);
    goto L_088857C8;
L_088857C8:;
    ST32(s6+8, 0);
    cnd_ = s0 == 0;
    ST32(s6+4, 0);
    if (cnd_) { goto L_08885B18; }
    goto L_088857D4;
L_088857D4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088857DC;
L_088857DC:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s6+4, v0);
    ST32(s6+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088857F0;
L_088857F0:;
    cnd_ = v0 != 0;
    ST32(s6, v0);
    if (cnd_) { goto L_08885B04; }
    goto L_088857F8;
L_088857F8:;
    ST32(s6+8, 0);
    ST32(s6+4, 0);
    goto L_08885800;
L_08885800:;
    a0 = LD32(sp);
    goto L_08885804;
L_08885804:;
    cnd_ = a0 == 0;
    s0 = LD32(s5+84);
    if (cnd_) { goto L_08885828; }
    goto L_0888580C;
L_0888580C:;
    cnd_ = s0 == a0;
    if (cnd_) { v0 = D_08AD4E7C - (20092); goto L_08885864; }
    goto L_08885814;
L_08885814:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+8, 0); goto L_0888582C; }
    goto L_0888581C;
L_0888581C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885824;
L_08885824:;
    ST32(sp, 0);
    goto L_08885828;
L_08885828:;
    ST32(sp+8, 0);
    goto L_0888582C;
L_0888582C:;
    cnd_ = s0 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08885AFC; }
    goto L_08885834;
L_08885834:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888583C;
L_0888583C:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885850;
L_08885850:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08885AE8; }
    goto L_08885858;
L_08885858:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_08885860;
L_08885860:;
    v0 = D_08AD4E7C - (20092);
    goto L_08885864;
L_08885864:;
    a0 = v0 + 20092;
    cnd_ = a0 == 0;
    s1 = LD32(sp+20);
    if (cnd_) { goto L_088858E0; }
    goto L_08885870;
L_08885870:;
    s4 = a0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885878;
L_08885878:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    s2 = sp + 0;
    if (cnd_) { goto L_088858DC; }
    goto L_08885884;
L_08885884:;
    v1 = LD32(sp+8);
    v0 = v0 + 1;
    s7 = sp + 0;
    if (v1 != 0) v0 = s1;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088858A0;
L_088858A0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088858DC; }
    goto L_088858A8;
L_088858A8:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08885AC4; }
    goto L_088858B4;
L_088858B4:;
    ST32(s7, s0);
    goto L_088858B8;
L_088858B8:;
    a1 = s4 + 0;
    a0 = LD32(s2);
    v0 = LD32(s2+4);
    ST32(s7+8, s3);
    a0 = a0 + v0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088858D0;
L_088858D0:;
    v1 = LD32(s2+4);
    v1 = v1 + s1;
    ST32(s2+4, v1);
    goto L_088858DC;
L_088858DC:;
    s1 = LD32(sp+20);
    goto L_088858E0;
L_088858E0:;
    s2 = sp + 0;
    cnd_ = s1 == 0;
    s4 = LD32(sp+16);
    if (cnd_) { goto L_0888593C; }
    goto L_088858EC;
L_088858EC:;
    v1 = LD32(sp+8);
    v0 = s1 + 1;
    if (v1 != 0) v0 = s1;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885904;
L_08885904:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0888593C; }
    goto L_0888590C;
L_0888590C:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08885AA0; }
    goto L_08885918;
L_08885918:;
    a0 = LD32(s2+4);
    goto L_0888591C;
L_0888591C:;
    ST32(s2+8, s3);
    a1 = s4 + 0;
    a0 = s0 + a0;
    ST32(s2, s0);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885930;
L_08885930:;
    v1 = LD32(s2+4);
    v1 = v1 + s1;
    ST32(s2+4, v1);
    goto L_0888593C;
L_0888593C:;
    s5 = LD32(s5+148);
    cnd_ = s5 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_088857AC; }
    goto L_08885948;
L_08885948:;
    s0 = LD32(fp+84);
    cnd_ = s0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_088859C4; }
    goto L_08885954;
L_08885954:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888595C;
L_0888595C:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    s3 = sp + 0;
    if (cnd_) { goto L_088859C0; }
    goto L_08885968;
L_08885968:;
    v1 = LD32(sp+8);
    v0 = v0 + 1;
    s5 = sp + 0;
    if (v1 != 0) v0 = s2;
    s4 = v1 + v0;
    a0 = s4 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885984;
L_08885984:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088859C0; }
    goto L_0888598C;
L_0888598C:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08885A7C; }
    goto L_08885998;
L_08885998:;
    ST32(s5, s1);
    goto L_0888599C;
L_0888599C:;
    a1 = s0 + 0;
    a0 = LD32(s3);
    v0 = LD32(s3+4);
    ST32(s5+8, s4);
    a0 = a0 + v0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088859B4;
L_088859B4:;
    v1 = LD32(s3+4);
    v1 = v1 + s2;
    ST32(s3+4, v1);
    goto L_088859C0;
L_088859C0:;
    a0 = LD32(sp);
    goto L_088859C4;
L_088859C4:;
    s0 = 0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088859CC;
L_088859CC:;
    v1 = LD32(fp+52);
    cnd_ = v1 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08885A40; }
    goto L_088859D8;
L_088859D8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08885A30; }
    goto L_088859E0;
L_088859E0:;
    a0 = LD32(sp);
    ST32(s6+4, 0);
    cnd_ = a0 != 0;
    ST32(s6+8, 0);
    if (cnd_) { goto L_08885A20; }
    goto L_088859F0;
L_088859F0:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08885A20:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885A28;
L_08885A28:;
    ST32(sp, 0);
    goto L_088859F0;
L_08885A30:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885A38;
L_08885A38:;
    ST32(sp+16, 0);
    goto L_088859E0;
L_08885A40:;
    v1 = LD32(fp+48);
    goto L_08885A44;
L_08885A44:;
    v0 = s0 << 2;
    a1 = LD32(sp+32);
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+104);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885A64;
L_08885A64:;
    v0 = LD32(fp+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(fp+48); goto L_08885A44; }
    goto L_08885A74;
L_08885A74:;
    a0 = LD32(sp+16);
    goto L_088859D8;
L_08885A7C:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885A84;
L_08885A84:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s5, s1); goto L_0888599C; }
    goto L_08885A90;
L_08885A90:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885A98;
L_08885A98:;
    ST32(s5, s1);
    goto L_0888599C;
L_08885AA0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885AA8;
L_08885AA8:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_0888591C; }
    goto L_08885AB4;
L_08885AB4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885ABC;
L_08885ABC:;
    a0 = LD32(s2+4);
    goto L_0888591C;
L_08885AC4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885ACC;
L_08885ACC:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s7, s0); goto L_088858B8; }
    goto L_08885AD8;
L_08885AD8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885AE0;
L_08885AE0:;
    ST32(s7, s0);
    goto L_088858B8;
L_08885AE8:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885AF4;
L_08885AF4:;
    v0 = D_08AD4E7C - (20092);
    goto L_08885864;
L_08885AFC:;
    ST32(sp, 0);
    goto L_08885860;
L_08885B04:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885B10;
L_08885B10:;
    a0 = LD32(sp);
    goto L_08885804;
L_08885B18:;
    ST32(s6, 0);
    goto L_08885800;
L_08885B20:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885B2C;
L_08885B2C:;
    ST32(sp+16, 0);
    goto L_08885798;
L_08885B34:;
    ST32(sp, 0);
    goto L_0888578C;
}

/* 08885B3C */
rv_t func_08885B3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885B3C:;
    sp = sp - 16;
    s2 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08885B78; }
    goto L_08885B60;
L_08885B60:;
    goto L_08885B64;
L_08885B64:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08885B78:;
    v0 = LD32(s1+48);
    goto L_08885B7C;
L_08885B7C:;
    s0 = s2 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+72);
    t_ = v0;
    s2 = s2 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885B98;
L_08885B98:;
    v1 = LD32(s1+48);
    s0 = s0 + v1;
    a0 = LD32(s0);
    v0 = LD32(a0);
    v1 = LD32(v0+76);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885BB4;
L_08885BB4:;
    v0 = LD32(s1+52);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08885B7C; }
    goto L_08885BC4;
L_08885BC4:;
    goto L_08885B64;
}

/* 08885BCC */
rv_t func_08885BCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08885BCC:;
    sp = sp - 32;
    s4 = 0 + 0;
    s3 = a1 + 0;
    s2 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08885C5C; }
    goto L_08885C00;
L_08885C00:;
    v0 = LD32(s1+48);
    goto L_08885C04;
L_08885C04:;
    v1 = s2 << 2;
    a1 = s3 + 0;
    v1 = v1 + v0;
    v1 = LD32(v1);
    s2 = s2 + 1;
    v0 = LD32(v1+144);
    cnd_ = v0 == s3;
    a0 = v1 + 0;
    if (cnd_) { goto L_08885C9C; }
    goto L_08885C24;
L_08885C24:;
    { rv_t r_ = func_0888818C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885C2C;
L_08885C2C:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08885C4C; }
    goto L_08885C38;
L_08885C38:;
    v0 = func_08888FD8(a0);
    goto L_08885C40;
L_08885C40:;
    v0 = v0 < 0x7d0u;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08885C80; }
    goto L_08885C4C;
L_08885C4C:;
    v0 = LD32(s1+52);
    goto L_08885C50;
L_08885C50:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_08885C04; }
    goto L_08885C5C;
L_08885C5C:;
    v0 = s4 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08885C80:;
    v0 = func_08888FD8(a0);
    goto L_08885C88;
L_08885C88:;
    v0 = v0 < 0xbb8u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_08885C50; }
    goto L_08885C94;
L_08885C94:;
    s4 = s0 + 0;
    goto L_08885C5C;
L_08885C9C:;
    s4 = v1 + 0;
    goto L_08885C5C;
}

/* 08885CA4 */
u32 func_08885CA4(u32 a0)
{
    u32 v0 = 0;
L_08885CA4:;
    v0 = a0 + 188;
    return v0;
}

/* 08885CAC */
u32 func_08885CAC(u32 a0)
{
    u32 v0 = 0;
L_08885CAC:;
    v0 = a0 + 212;
    return v0;
}

/* 08885CB4 */
float func_08885CB4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08885CB4:;
    v1 = LD32(a0+236);
    v0 = 8192;
    f0 = BITSF(0);
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(a0+240)); goto L_08885CC8; }
    goto L_08885CC8;
L_08885CC8:;
    return f0;
}

/* 08885CD0 */
void func_08885CD0(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885CD0:;
    sp = sp - 16;
    func_08885CFC();
    goto L_08885CE0;
L_08885CE0:;
    a0 = 2560;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08885CE8;
L_08885CE8:;
    v1 = D_08B29954 - (-26284);
    ST32(v1-26284, v0);
    sp = sp + 16;
    return;
}

/* 08885CFC */
void func_08885CFC(void)
{
    u32 v0 = 0, v1 = 0;
L_08885CFC:;
    v0 = D_08B29958 - (-26280);
    v1 = D_08B2995C - (-26276);
    ST32(v0-26280, 0);
    ST32(v1-26276, 0);
    return;
}

/* 08885D10 */
void func_08885D10(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885D10:;
    sp = sp - 16;
    s0 = D_08B29954 - (-26284);
    v0 = LD32(s0-26284);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08885D3C; }
    goto L_08885D2C;
L_08885D2C:;
    sp = sp + 16;
    return;
L_08885D3C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885D44;
L_08885D44:;
    ST32(s0-26284, 0);
    goto L_08885D2C;
}

/* 08885D4C */
u32 func_08885D4C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_08885D4C:;
    a2 = D_08B29958 - (-26280);
    v0 = LD32(a2-26280);
    t1 = D_08B2995C - (-26276);
    a0 = LD32(t1-26276);
    v1 = v0 << 2;
    v1 = v1 + v0;
    a0 = v0 < a0;
    t0 = 0 + 0;
    a3 = v1 << 2;
    cnd_ = a0 == 0;
    a1 = v0 + 1;
    if (cnd_) { goto L_08885D90; }
    goto L_08885D78;
L_08885D78:;
    v0 = D_08B29954 - (-26284);
    v1 = LD32(v0-26284);
    ST32(a2-26280, a1);
    t0 = v1 + a3;
    goto L_08885D88;
L_08885D88:;
    v0 = t0 + 0;
    return v0;
L_08885D90:;
    ST32(a2-26280, 0);
    ST32(t1-26276, 0);
    goto L_08885D88;
}

/* 08885D9C */
u64 func_08885D9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    int cnd_;
L_08885D9C:;
    t1 = D_08B2995C - (-26276);
    a1 = LD32(t1-26276);
    a2 = a0 + 0;
    v0 = a1 < 0x80u;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_08885E04; }
    goto L_08885DB4;
L_08885DB4:;
    v1 = D_08B29954 - (-26284);
    v0 = a1 << 2;
    a0 = LD32(v1-26284);
    v0 = v0 + a1;
    v0 = v0 << 2;
    t2 = a1 + 1;
    cnd_ = a0 == 0;
    a3 = v0 + a0;
    if (cnd_) { goto L_08885E04; }
    goto L_08885DD4;
L_08885DD4:;
    v0 = LD32(a2+16);
    v1 = LD32(a2+8);
    a0 = LD32(a2+12);
    a1 = LD32(a2);
    a2 = LD32(a2+4);
    ST32(a3+16, v0);
    t0 = 1;
    ST32(a3+8, v1);
    ST32(a3+12, a0);
    ST32(a3, a1);
    ST32(a3+4, a2);
    ST32(t1-26276, t2);
    goto L_08885E04;
L_08885E04:;
    v0 = t0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08885E0C */
u64 func_08885E0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08885E0C:;
    sp = sp - 48;
    v0 = a0 + 0;
    a0 = sp + 0;
    ST32(sp+8, v0);
    ST32(sp+12, a1);
    ST32(sp, a2);
    ST32(sp+4, a3);
    ST32(sp+16, t0);
    { u64 r_ = func_08885D9C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08885E34;
L_08885E34:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08885E40 */
void func_08885E40(u32 a0)
{
    u32 v0 = 0;
L_08885E40:;
    v0 = 2;
    ST32(a0, v0);
    ST32(a0+12, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 08885E58 */
void func_08885E58(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885E58:;
    sp = sp - 16;
    func_088866B0(a0, t1, t2, t3);
    goto L_08885E68;
L_08885E68:;
    sp = sp + 16;
    return;
}

/* 08885E74 */
void func_08885E74(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885E74:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a0 == a1;
    if (cnd_) { goto L_08885E90; }
    goto L_08885E88;
L_08885E88:;
    func_0888654C(a0, a1);
    goto L_08885E90;
L_08885E90:;
    v0 = s0 + 0;
    sp = sp + 16;
    return;
}

/* 08885EA4 */
float func_08885EA4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885EA4:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 1;
    s0 = a0 + 0;
    f0 = func_08886730(a0, a1, a2, t1, t2, t3);
    goto L_08885EC8;
L_08885EC8:;
    v0 = LD32(s0+12);
    ST32(v0, s1);
    sp = sp + 16;
    return f0;
}

/* 08885EE4 */
float func_08885EE4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885EE4:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 2;
    s0 = a0 + 0;
    f0 = func_08886730(a0, a1, a2, t1, t2, t3);
    goto L_08885F08;
L_08885F08:;
    v0 = LD32(s0+12);
    ST32(v0, s1);
    sp = sp + 16;
    return f0;
}

/* 08885F24 */
float func_08885F24(u32 a0, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08885F24:;
    sp = sp - 32;
    a1 = 3;
    s0 = a0 + 0;
    a2 = 0 + 0;
    f20 = f12;
    f0 = func_08886730(a0, a1, a2, t1, t2, t3);
    goto L_08885F48;
L_08885F48:;
    v0 = LD32(s0+12);
    ST32(v0, FBITS(f20));
    sp = sp + 32;
    return f0;
}

/* 08885F64 */
float func_08885F64(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885F64:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 4;
    f0 = func_08886730(a0, a1, a2, t1, t2, t3);
    goto L_08885F88;
L_08885F88:;
    v0 = LD32(s1+12);
    f0 = BITSF(LD32(s0+12));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    ST32(v0+12, FBITS(f0));
    ST32(v0, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    sp = sp + 16;
    return f0;
}

/* 08885FC0 */
float func_08885FC0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08885FC0:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 5;
    f0 = func_08886730(a0, a1, a2, t1, t2, t3);
    goto L_08885FE4;
L_08885FE4:;
    v0 = LD32(s1+12);
    f0 = BITSF(LD32(s0+8));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    ST32(v0+8, FBITS(f0));
    ST32(v0, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    sp = sp + 16;
    return f0;
}

/* 08886014 */
u64 func_08886014(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08886014:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08886064; }
    goto L_08886038;
L_08886038:;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886040;
L_08886040:;
    s0 = v0 + 1;
    a0 = s2 + 0;
    a1 = 6;
    a2 = s0 + 0;
    f0 = func_08886730(a0, a1, a2, 0, 0, 0);
    goto L_08886054;
L_08886054:;
    a0 = LD32(s2+12);
    a1 = s1 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_088F9148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886064;
L_08886064:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888607C */
u64 func_0888607C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888607C:;
    sp = sp - 16;
    s2 = a0 + 0;
    a0 = a1 + 0;
    s1 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088860CC; }
    goto L_088860A0;
L_088860A0:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088860A8;
L_088860A8:;
    s0 = v0 + 1;
    a0 = s2 + 0;
    a1 = 7;
    a2 = s0 + 0;
    f0 = func_08886730(a0, a1, a2, 0, 0, 0);
    goto L_088860BC;
L_088860BC:;
    a0 = LD32(s2+12);
    a1 = s1 + 0;
    a2 = s0 + 0;
    { u64 r_ = func_08A89CF4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088860CC;
L_088860CC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088860E4 */
float func_088860E4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088860E4:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 8;
    f0 = func_08886730(a0, a1, a2, t1, t2, t3);
    goto L_08886108;
L_08886108:;
    v0 = LD32(s0);
    a0 = LD32(s1+12);
    ST32(a0, v0);
    v1 = LD32(s0+4);
    ST32(a0+4, v1);
    v0 = LD32(s0+8);
    ST32(a0+8, v0);
    v1 = LD32(s0+12);
    ST32(a0+12, v1);
    sp = sp + 16;
    return f0;
}

/* 08886140 */
float func_08886140(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08886140:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 9;
    s0 = a0 + 0;
    f0 = func_08886730(a0, a1, a2, t1, t2, t3);
    goto L_08886164;
L_08886164:;
    v0 = LD32(s0+12);
    ST32(v0, s1);
    sp = sp + 16;
    return f0;
}

/* 08886180 */
u32 func_08886180(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_08886180:;
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    return v0;
}

/* 0888618C */
u32 func_0888618C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0888618C:;
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    return v0;
}

/* 08886198 */
float func_08886198(u32 a0)
{
    u32 v0 = 0;
    float f0 = 0;
L_08886198:;
    v0 = LD32(a0+12);
    f0 = BITSF(LD32(v0));
    return f0;
}

/* 088861A4 */
void func_088861A4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_088861A4:;
    v1 = LD32(a1+12);
    v0 = a0 + 0;
    f3 = BITSF(LD32(v1+12));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    ST32(a0, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    ST32(a0+12, FBITS(f3));
    return;
}

/* 088861D0 */
void func_088861D0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088861D0:;
    v1 = LD32(a1+12);
    v0 = a0 + 0;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(a0+8, FBITS(f0));
    ST32(a0, FBITS(f1));
    ST32(a0+4, FBITS(f2));
    return;
}

/* 088861F4 */
u32 func_088861F4(u32 a0)
{
    u32 v0 = 0;
L_088861F4:;
    v0 = LD32(a0+12);
    return v0;
}

/* 088861FC */
u32 func_088861FC(u32 a0)
{
    u32 v0 = 0;
L_088861FC:;
    v0 = LD32(a0+12);
    return v0;
}

/* 08886204 */
u32 func_08886204(u32 a0)
{
    u32 v0 = 0;
L_08886204:;
    v0 = LD32(a0+12);
    return v0;
}

/* 0888620C */
u32 func_0888620C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
L_0888620C:;
    v1 = LD32(a0+12);
    v0 = LD32(v1);
    return v0;
}

/* 08886218 */
float func_08886218(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[368] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 368);
L_08886218:;
    sp = sp - 368;
    s1 = a1 + 0;
    a1 = sp + 304;
    s2 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886248;
L_08886248:;
    v0 = LD32(sp+304);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08886278; }
    goto L_08886254;
L_08886254:;
    v0 = v1 + 0;
    sp = sp + 368;
    return f0;
L_08886278:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886284;
L_08886284:;
    a1 = s2 + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886290;
L_08886290:;
    a0 = s1 + 0;
    a1 = sp + 308;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888629C;
L_0888629C:;
    v1 = LD32(sp+308);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_088862E0; }
    goto L_088862AC;
L_088862AC:;
    v0 = v1 << 2;
    v1 = D_08AD4E80 - (20096);
    v1 = v1 + 20096;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088862C8u: goto L_088862C8; case 0x088862E0u: goto L_088862E0; case 0x088862E8u: goto L_088862E8; case 0x08886308u: goto L_08886308; case 0x08886328u: goto L_08886328; case 0x0888636Cu: goto L_0888636C; case 0x088863A8u: goto L_088863A8; case 0x08886420u: goto L_08886420; case 0x0888648Cu: goto L_0888648C; case 0x088864D4u: goto L_088864D4; default: rs_break(0, 0x088862c0); }
L_088862C8:;
    a0 = s1 + 0;
    a1 = sp + 308;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088862D4;
L_088862D4:;
    a1 = LD32(sp+308);
    a0 = s2 + 0;
    f0 = func_08885EA4(a0, a1, 0, 0, 0);
    goto L_088862E0;
L_088862E0:;
    v1 = 1;
    goto L_08886254;
L_088862E8:;
    a0 = s1 + 0;
    a1 = sp + 312;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088862F4;
L_088862F4:;
    a1 = LD32(sp+312);
    a0 = s2 + 0;
    f0 = func_08885EE4(a0, a1, 0, 0, 0);
    goto L_08886300;
L_08886300:;
    v1 = 1;
    goto L_08886254;
L_08886308:;
    a0 = s1 + 0;
    a1 = sp + 316;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886314;
L_08886314:;
    f12 = BITSF(LD32(sp+316));
    a0 = s2 + 0;
    f0 = func_08885F24(a0, 0, 0, 0, f12);
    goto L_08886320;
L_08886320:;
    v1 = 1;
    goto L_08886254;
L_08886328:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886334;
L_08886334:;
    a1 = sp + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886340;
L_08886340:;
    a1 = sp + 8;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888634C;
L_0888634C:;
    a0 = s1 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886358;
L_08886358:;
    a0 = s2 + 0;
    a1 = sp + 0;
    f0 = func_08885F64(a0, a1, 0, 0, 0);
    goto L_08886364;
L_08886364:;
    v1 = 1;
    goto L_08886254;
L_0888636C:;
    s0 = sp + 16;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888637C;
L_0888637C:;
    a1 = sp + 20;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886388;
L_08886388:;
    a0 = s1 + 0;
    a1 = sp + 24;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886394;
L_08886394:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    f0 = func_08885FC0(a0, a1, 0, 0, 0);
    goto L_088863A0;
L_088863A0:;
    v1 = 1;
    goto L_08886254;
L_088863A8:;
    a0 = s1 + 0;
    a1 = sp + 320;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088863B4;
L_088863B4:;
    a0 = LD32(sp+320);
    s3 = 0 + 0;
    a0 = a0 + 1;
    a0 = a0 << 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088863C8;
L_088863C8:;
    s4 = v0 + 0;
    v0 = LD32(sp+320);
    cnd_ = v0 == 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_088863FC; }
    goto L_088863D8;
L_088863D8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_0882DBD0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088863E4;
L_088863E4:;
    v0 = LD32(sp+320);
    s3 = s3 + 1;
    ST16(s0+2, 0);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 2;
    if (cnd_) { goto L_088863D8; }
    goto L_088863FC;
L_088863FC:;
    a0 = s2 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08886014(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886408;
L_08886408:;
    cnd_ = s4 == 0;
    if (cnd_) { v1 = 1; goto L_08886254; }
    goto L_08886410;
L_08886410:;
    a0 = s4 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886418;
L_08886418:;
    v1 = 1;
    goto L_08886254;
L_08886420:;
    a0 = s1 + 0;
    a1 = sp + 324;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888642C;
L_0888642C:;
    a0 = LD32(sp+324);
    s3 = 0 + 0;
    a0 = a0 + 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888643C;
L_0888643C:;
    s4 = v0 + 0;
    v0 = LD32(sp+324);
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0888645C; }
    goto L_0888644C;
L_0888644C:;
    a1 = s4 + 0;
    { u64 r_ = func_0888607C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886454;
L_08886454:;
    goto L_08886408;
L_0888645C:;
    s0 = s4 + s3;
    goto L_08886460;
L_08886460:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    func_0882DAA0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0888646C;
L_0888646C:;
    ST8(s0+1, 0);
    s3 = s3 + 1;
    v0 = LD32(sp+324);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    s0 = s4 + s3;
    if (cnd_) { goto L_08886460; }
    goto L_08886484;
L_08886484:;
    a0 = s2 + 0;
    goto L_0888644C;
L_0888648C:;
    s0 = sp + 32;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888649C;
L_0888649C:;
    a1 = sp + 36;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088864A8;
L_088864A8:;
    a1 = sp + 40;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088864B4;
L_088864B4:;
    a0 = s1 + 0;
    a1 = sp + 44;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088864C0;
L_088864C0:;
    a0 = s2 + 0;
    a1 = s0 + 0;
    f0 = func_088860E4(a0, a1, 0, 0, 0);
    goto L_088864CC;
L_088864CC:;
    v1 = 1;
    goto L_08886254;
L_088864D4:;
    s0 = sp + 48;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 256;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088864E8;
L_088864E8:;
    v0 = (u32)(s32)LD_S8(sp+48);
    cnd_ = v0 != 0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08886504; }
    goto L_088864F4;
L_088864F4:;
    a0 = s2 + 0;
    f0 = func_08886140(a0, a1, 0, 0, 0);
    goto L_088864FC;
L_088864FC:;
    v1 = 1;
    goto L_08886254;
L_08886504:;
    v0 = D_08B263B8 - (25528);
    a1 = LD32(v0+25528);
    a0 = s0 + 0;
    a2 = 0 + 0;
    v0 = func_0883A334(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_08886518;
L_08886518:;
    a1 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v0 = a1 < 0xfau;
    if (cnd_) { goto L_088864F4; }
    goto L_08886528;
L_08886528:;
    cnd_ = v0 == 0;
    a0 = a1 << 2;
    if (cnd_) { goto L_088864F4; }
    goto L_08886530;
L_08886530:;
    v1 = D_08B25FC4 - (24516);
    v1 = v1 + 24516;
    v0 = D_08AD4C70 - (19568);
    a0 = a0 + v1;
    v1 = LD32(v0+19568);
    ST32(a0, v1);
    goto L_088864F4;
}

/* 0888654C */
void func_0888654C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888654C:;
    sp = sp - 48;
    a2 = a1 + 0;
    s1 = a0 + 0;
    a3 = LD32(a1+8);
    v0 = LD32(a1);
    a1 = LD32(a1+4);
    v1 = a3 < 0xau;
    ST32(a0, v0);
    cnd_ = v1 == 0;
    ST32(a0+4, a1);
    if (cnd_) { goto L_088865B0; }
    goto L_08886580;
L_08886580:;
    v1 = D_08AD4EA8 - (20136);
    v0 = a3 << 2;
    v1 = v1 + 20136;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0888659Cu: goto L_0888659C; case 0x088865B0u: goto L_088865B0; case 0x088865C4u: goto L_088865C4; case 0x088865E0u: goto L_088865E0; case 0x088865FCu: goto L_088865FC; case 0x0888661Cu: goto L_0888661C; case 0x08886640u: goto L_08886640; case 0x0888665Cu: goto L_0888665C; case 0x08886678u: goto L_08886678; case 0x08886694u: goto L_08886694; default: rs_break(0, 0x08886594); }
L_0888659C:;
    a0 = a2 + 0;
    v0 = func_08886180(a0);
    goto L_088865A4;
L_088865A4:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    f0 = func_08885EA4(a0, a1, 0, 0, 0);
    goto L_088865B0;
L_088865B0:;
    goto L_088865B4;
L_088865B4:;
    sp = sp + 48;
    return;
L_088865C4:;
    a0 = a2 + 0;
    v0 = func_0888618C(a0);
    goto L_088865CC;
L_088865CC:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    f0 = func_08885EE4(a0, a1, 0, 0, 0);
    goto L_088865D8;
L_088865D8:;
    goto L_088865B4;
L_088865E0:;
    a0 = a2 + 0;
    f0 = func_08886198(a0);
    goto L_088865E8;
L_088865E8:;
    f12 = f0;
    a0 = s1 + 0;
    f0 = func_08885F24(a0, 0, 0, 0, f12);
    goto L_088865F4;
L_088865F4:;
    goto L_088865B4;
L_088865FC:;
    a1 = a2 + 0;
    a0 = sp + 0;
    func_088861A4(a0, a1);
    goto L_08886608;
L_08886608:;
    a0 = s1 + 0;
    a1 = sp + 0;
    f0 = func_08885F64(a0, a1, 0, 0, 0);
    goto L_08886614;
L_08886614:;
    goto L_088865B4;
L_0888661C:;
    s0 = sp + 16;
    a1 = a2 + 0;
    a0 = s0 + 0;
    func_088861D0(a0, a1);
    goto L_0888662C;
L_0888662C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    f0 = func_08885FC0(a0, a1, 0, 0, 0);
    goto L_08886638;
L_08886638:;
    goto L_088865B4;
L_08886640:;
    a0 = a2 + 0;
    v0 = func_088861F4(a0);
    goto L_08886648;
L_08886648:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_08886014(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886654;
L_08886654:;
    goto L_088865B4;
L_0888665C:;
    a0 = a2 + 0;
    v0 = func_088861FC(a0);
    goto L_08886664;
L_08886664:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { u64 r_ = func_0888607C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886670;
L_08886670:;
    goto L_088865B4;
L_08886678:;
    a0 = a2 + 0;
    v0 = func_08886204(a0);
    goto L_08886680;
L_08886680:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    f0 = func_088860E4(a0, a1, 0, 0, 0);
    goto L_0888668C;
L_0888668C:;
    goto L_088865B4;
L_08886694:;
    a0 = a2 + 0;
    v0 = func_0888620C(a0);
    goto L_0888669C;
L_0888669C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    f0 = func_08886140(a0, a1, 0, 0, 0);
    goto L_088866A8;
L_088866A8:;
    goto L_088865B4;
}

/* 088866B0 */
void func_088866B0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088866B0:;
    sp = sp - 16;
    v1 = LD32(a0+8);
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888670C; }
    goto L_088866CC;
L_088866CC:;
    v0 = v1 << 2;
    v1 = D_08AD4ED0 - (20176);
    v1 = v1 + 20176;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088866E8u: goto L_088866E8; case 0x0888670Cu: goto L_0888670C; case 0x08886714u: goto L_08886714; default: rs_break(0, 0x088866e0); }
L_088866E8:;
    a0 = LD32(s0+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08886704; }
    goto L_088866F4;
L_088866F4:;
    goto L_088866F8;
L_088866F8:;
    sp = sp + 16;
    return;
L_08886704:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888670C;
L_0888670C:;
    ST32(s0+12, 0);
    goto L_088866F4;
L_08886714:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088866F8; }
    goto L_08886720;
L_08886720:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886728;
L_08886728:;
    ST32(s0+12, 0);
    goto L_088866F4;
}

/* 08886730 */
float func_08886730(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08886730:;
    sp = sp - 16;
    s1 = a1 + 0;
    s2 = a2 + 0;
    s0 = a0 + 0;
    func_088866B0(a0, t1, t2, t3);
    goto L_08886754;
L_08886754:;
    v0 = s1 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+12, 0); goto L_0888678C; }
    goto L_08886760;
L_08886760:;
    v1 = D_08AD4EF8 - (20216);
    v0 = s1 << 2;
    v1 = v1 + 20216;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0888677Cu: goto L_0888677C; case 0x088867A8u: goto L_088867A8; case 0x088867B0u: goto L_088867B0; case 0x088867B8u: goto L_088867B8; case 0x088867CCu: goto L_088867CC; case 0x088867D4u: goto L_088867D4; default: rs_break(0, 0x08886774); }
L_0888677C:;
    a0 = 4;
    goto L_08886780;
L_08886780:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886788;
L_08886788:;
    ST32(s0+12, v0);
    goto L_0888678C;
L_0888678C:;
    ST32(s0+8, s1);
    sp = sp + 16;
    return f0;
L_088867A8:;
    ST32(s0+12, 0);
    goto L_0888678C;
L_088867B0:;
    a0 = 12;
    goto L_08886780;
L_088867B8:;
    a0 = s2 << 1;
    goto L_088867BC;
L_088867BC:;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088867C4;
L_088867C4:;
    ST32(s0+12, v0);
    goto L_0888678C;
L_088867CC:;
    a0 = s2 + 0;
    goto L_088867BC;
L_088867D4:;
    a0 = 16;
    goto L_08886780;
L_088867DC:;
    v0 = a0 < 0x13u;
    cnd_ = v0 == 0;
    v1 = D_08AD4F20 - (20256);
    if (cnd_) { goto L_08886808; }
    goto L_088867E8;
L_088867E8:;
    v0 = a0 << 2;
    v1 = v1 + 20256;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08886800u: goto L_08886800; case 0x08886808u: goto L_08886808; case 0x08886810u: goto L_08886810; case 0x08886818u: goto L_08886818; case 0x08886820u: goto L_08886820; case 0x08886828u: goto L_08886828; case 0x08886830u: goto L_08886830; case 0x08886838u: goto L_08886838; case 0x08886840u: goto L_08886840; case 0x08886848u: goto L_08886848; default: rs_break(0, 0x088867f8); }
L_08886800:;
    v0 = 5;
    return f0;
L_08886808:;
    v0 = 0 + 0;
    return f0;
L_08886810:;
    v0 = 4;
    return f0;
L_08886818:;
    v0 = 6;
    return f0;
L_08886820:;
    v0 = 1;
    return f0;
L_08886828:;
    v0 = 2;
    return f0;
L_08886830:;
    v0 = 7;
    return f0;
L_08886838:;
    v0 = 9;
    return f0;
L_08886840:;
    v0 = 8;
    return f0;
L_08886848:;
    v0 = 3;
    return f0;
}

/* 08886850 */
float func_08886850(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08886850:;
    v0 = D_08AF6EB0 - (28336);
    sp = sp - 16;
    v0 = v0 + 28336;
    v1 = a0 + 84;
    ST32(a0, v0);
    v0 = 1;
    s0 = a0 + 0;
    ST32(s0+4, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    ST32(s0+76, 0);
    ST32(s0+80, 0);
    ST32(s0+96, v0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s0+48, 0);
    ST32(s0+84, 0);
    a0 = a0 + 100;
    func_0887E6DC(a0);
    goto L_088868A4;
L_088868A4:;
    v0 = 255;
    f0 = BITSF(v0);
    v0 = D_08AEC190 - (-15984);
    v1 = s0 + 32;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15984));
    a0 = s0 + 8;
    v0 = s0 + 20;
    f1 = f1 * f0;
    ST32(a0+4, 0);
    a1 = s0 + 0;
    a2 = 0 + 0;
    ST32(a0+8, 0);
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    ST32(s0+8, 0);
    ST32(s0+20, 0);
    ST32(s0+32, FBITS(f1));
    ST32(v1+4, FBITS(f1));
    ST32(s0+116, 0);
    ST32(s0+120, 0);
    ST32(s0+124, 0);
    ST32(s0+128, 0);
    ST32(s0+132, 0);
    ST32(s0+136, 0);
    ST32(s0+140, 0);
    ST32(s0+144, 0);
    ST32(s0+148, 0);
    ST32(v1+12, FBITS(f1));
    ST32(v1+8, FBITS(f1));
    goto L_0888691C;
L_0888691C:;
    a2 = a2 + 1;
    v0 = a2 < 0x2u;
    ST32(a1+64, 0);
    ST32(a1+60, 0);
    cnd_ = v0 != 0;
    a1 = a1 + 8;
    if (cnd_) { goto L_0888691C; }
    goto L_08886934;
L_08886934:;
    sp = sp + 16;
    return f0;
}

/* 08886944 */
u64 func_08886944(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08886944:;
    sp = sp - 32;
    v0 = D_08AF6EB0 - (28336);
    v0 = v0 + 28336;
    s2 = a0 + 0;
    s4 = s2 + 84;
    a0 = LD32(a0+84);
    cnd_ = a0 != 0;
    ST32(s2, v0);
    if (cnd_) { goto L_08886B38; }
    goto L_0888697C;
L_0888697C:;
    a1 = LD32(s2+48);
    ST32(s4+8, 0);
    cnd_ = a1 == 0;
    ST32(s4+4, 0);
    if (cnd_) { goto L_088869D0; }
    goto L_0888698C;
L_0888698C:;
    v1 = LD32(s2+52);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088869BC; }
    goto L_08886998;
L_08886998:;
    v0 = s1 << 2;
    goto L_0888699C;
L_0888699C:;
    v0 = v0 + a1;
    v0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08886B1C; }
    goto L_088869B0;
L_088869B0:;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_0888699C; }
    goto L_088869BC;
L_088869BC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08886B0C; }
    goto L_088869C4;
L_088869C4:;
    ST32(s2+48, 0);
    goto L_088869C8;
L_088869C8:;
    ST32(s2+52, 0);
    ST32(s2+56, 0);
    goto L_088869D0;
L_088869D0:;
    a1 = LD32(s2+120);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s2+132); goto L_08886A28; }
    goto L_088869DC;
L_088869DC:;
    a2 = LD32(s2+124);
    cnd_ = a2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08886A10; }
    goto L_088869E8;
L_088869E8:;
    s3 = s1 << 2;
    v0 = s3 + a1;
    s0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08886AF0; }
    goto L_08886A00;
L_08886A00:;
    v0 = s3 + a1;
    v1 = s1 < a2;
    cnd_ = v1 != 0;
    ST32(v0, 0);
    if (cnd_) { goto L_088869E8; }
    goto L_08886A10;
L_08886A10:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08886AE0; }
    goto L_08886A18;
L_08886A18:;
    ST32(s2+120, 0);
    goto L_08886A1C;
L_08886A1C:;
    ST32(s2+128, 0);
    ST32(s2+124, 0);
    a0 = LD32(s2+132);
    goto L_08886A28;
L_08886A28:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08886A50; }
    goto L_08886A30;
L_08886A30:;
    v0 = LD32(s2+136);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08886AAC; }
    goto L_08886A3C;
L_08886A3C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08886A9C; }
    goto L_08886A44;
L_08886A44:;
    ST32(s2+132, 0);
    goto L_08886A48;
L_08886A48:;
    ST32(s2+140, 0);
    ST32(s2+136, 0);
    goto L_08886A50;
L_08886A50:;
    a0 = s2 + 100;
    { u64 r_ = func_0887E6F0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886A58;
L_08886A58:;
    a0 = LD32(s2+84);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08886A8C; }
    goto L_08886A64;
L_08886A64:;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08886A8C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886A94;
L_08886A94:;
    ST32(s2+84, 0);
    goto L_08886A64;
L_08886A9C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886AA4;
L_08886AA4:;
    ST32(s2+132, 0);
    goto L_08886A48;
L_08886AAC:;
    s0 = s1 << 2;
    v0 = s0 + a0;
    a0 = LD32(v0);
    s1 = s1 + 1;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886AC0;
L_08886AC0:;
    a0 = LD32(s2+132);
    v0 = LD32(s2+136);
    s0 = s0 + a0;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_08886AAC; }
    goto L_08886AD8;
L_08886AD8:;
    goto L_08886A3C;
L_08886AE0:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886AE8;
L_08886AE8:;
    ST32(s2+120, 0);
    goto L_08886A1C;
L_08886AF0:;
    func_08885E58(a0, t1, t2, t3);
    goto L_08886AF8;
L_08886AF8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886B00;
L_08886B00:;
    a1 = LD32(s2+120);
    a2 = LD32(s2+124);
    goto L_08886A00;
L_08886B0C:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886B14;
L_08886B14:;
    ST32(s2+48, 0);
    goto L_088869C8;
L_08886B1C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886B2C;
L_08886B2C:;
    a1 = LD32(s2+48);
    v1 = LD32(s2+52);
    goto L_088869B0;
L_08886B38:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886B40;
L_08886B40:;
    ST32(s2+84, 0);
    goto L_0888697C;
}

/* 08886B48 */
rv_t func_08886B48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08886B48:;
    sp = sp - 32;
    v0 = D_08AF6EB0 - (28336);
    v0 = v0 + 28336;
    s2 = a0 + 0;
    s4 = s2 + 84;
    a0 = LD32(a0+84);
    cnd_ = a0 != 0;
    ST32(s2, v0);
    if (cnd_) { goto L_08886D3C; }
    goto L_08886B80;
L_08886B80:;
    a1 = LD32(s2+48);
    ST32(s4+8, 0);
    cnd_ = a1 == 0;
    ST32(s4+4, 0);
    if (cnd_) { goto L_08886BD4; }
    goto L_08886B90;
L_08886B90:;
    v1 = LD32(s2+52);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08886BC0; }
    goto L_08886B9C;
L_08886B9C:;
    v0 = s1 << 2;
    goto L_08886BA0;
L_08886BA0:;
    v0 = v0 + a1;
    v0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08886D20; }
    goto L_08886BB4;
L_08886BB4:;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08886BA0; }
    goto L_08886BC0;
L_08886BC0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08886D10; }
    goto L_08886BC8;
L_08886BC8:;
    ST32(s2+48, 0);
    goto L_08886BCC;
L_08886BCC:;
    ST32(s2+52, 0);
    ST32(s2+56, 0);
    goto L_08886BD4;
L_08886BD4:;
    a1 = LD32(s2+120);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s2+132); goto L_08886C2C; }
    goto L_08886BE0;
L_08886BE0:;
    a2 = LD32(s2+124);
    cnd_ = a2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08886C14; }
    goto L_08886BEC;
L_08886BEC:;
    s3 = s1 << 2;
    v0 = s3 + a1;
    s0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08886CF4; }
    goto L_08886C04;
L_08886C04:;
    v0 = s3 + a1;
    v1 = s1 < a2;
    cnd_ = v1 != 0;
    ST32(v0, 0);
    if (cnd_) { goto L_08886BEC; }
    goto L_08886C14;
L_08886C14:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08886CE4; }
    goto L_08886C1C;
L_08886C1C:;
    ST32(s2+120, 0);
    goto L_08886C20;
L_08886C20:;
    ST32(s2+128, 0);
    ST32(s2+124, 0);
    a0 = LD32(s2+132);
    goto L_08886C2C;
L_08886C2C:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08886C54; }
    goto L_08886C34;
L_08886C34:;
    v0 = LD32(s2+136);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08886CB0; }
    goto L_08886C40;
L_08886C40:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08886CA0; }
    goto L_08886C48;
L_08886C48:;
    ST32(s2+132, 0);
    goto L_08886C4C;
L_08886C4C:;
    ST32(s2+140, 0);
    ST32(s2+136, 0);
    goto L_08886C54;
L_08886C54:;
    a0 = s2 + 100;
    { u64 r_ = func_0887E6F0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886C5C;
L_08886C5C:;
    a0 = LD32(s2+84);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08886C90; }
    goto L_08886C68;
L_08886C68:;
    ST32(s4+4, 0);
    ST32(s4+8, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08886C90:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886C98;
L_08886C98:;
    ST32(s2+84, 0);
    goto L_08886C68;
L_08886CA0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886CA8;
L_08886CA8:;
    ST32(s2+132, 0);
    goto L_08886C4C;
L_08886CB0:;
    s0 = s1 << 2;
    v0 = s0 + a0;
    a0 = LD32(v0);
    s1 = s1 + 1;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886CC4;
L_08886CC4:;
    a0 = LD32(s2+132);
    v0 = LD32(s2+136);
    s0 = s0 + a0;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_08886CB0; }
    goto L_08886CDC;
L_08886CDC:;
    goto L_08886C40;
L_08886CE4:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886CEC;
L_08886CEC:;
    ST32(s2+120, 0);
    goto L_08886C20;
L_08886CF4:;
    func_08885E58(a0, t1, t2, t3);
    goto L_08886CFC;
L_08886CFC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886D04;
L_08886D04:;
    a1 = LD32(s2+120);
    a2 = LD32(s2+124);
    goto L_08886C04;
L_08886D10:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886D18;
L_08886D18:;
    ST32(s2+48, 0);
    goto L_08886BCC;
L_08886D20:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886D30;
L_08886D30:;
    a1 = LD32(s2+48);
    v1 = LD32(s2+52);
    goto L_08886BB4;
L_08886D3C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886D44;
L_08886D44:;
    ST32(s2+84, 0);
    goto L_08886B80;
}

/* 08886D4C */
rv_t func_08886D4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08886D4C:;
    sp = sp - 32;
    v0 = D_08AF6EB0 - (28336);
    v0 = v0 + 28336;
    s1 = a0 + 0;
    s4 = s1 + 84;
    a0 = LD32(a0+84);
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_08886F48; }
    goto L_08886D84;
L_08886D84:;
    a1 = LD32(s1+48);
    ST32(s4+8, 0);
    cnd_ = a1 == 0;
    ST32(s4+4, 0);
    if (cnd_) { goto L_08886DD8; }
    goto L_08886D94;
L_08886D94:;
    v1 = LD32(s1+52);
    cnd_ = v1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08886DC4; }
    goto L_08886DA0;
L_08886DA0:;
    v0 = s2 << 2;
    goto L_08886DA4;
L_08886DA4:;
    v0 = v0 + a1;
    v0 = LD32(v0);
    s2 = s2 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08886F2C; }
    goto L_08886DB8;
L_08886DB8:;
    v0 = s2 < v1;
    cnd_ = v0 != 0;
    v0 = s2 << 2;
    if (cnd_) { goto L_08886DA4; }
    goto L_08886DC4;
L_08886DC4:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08886F1C; }
    goto L_08886DCC;
L_08886DCC:;
    ST32(s1+48, 0);
    goto L_08886DD0;
L_08886DD0:;
    ST32(s1+52, 0);
    ST32(s1+56, 0);
    goto L_08886DD8;
L_08886DD8:;
    a1 = LD32(s1+120);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s1+132); goto L_08886E30; }
    goto L_08886DE4;
L_08886DE4:;
    a2 = LD32(s1+124);
    cnd_ = a2 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08886E18; }
    goto L_08886DF0;
L_08886DF0:;
    s3 = s2 << 2;
    v0 = s3 + a1;
    s0 = LD32(v0);
    s2 = s2 + 1;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08886F00; }
    goto L_08886E08;
L_08886E08:;
    v0 = s3 + a1;
    v1 = s2 < a2;
    cnd_ = v1 != 0;
    ST32(v0, 0);
    if (cnd_) { goto L_08886DF0; }
    goto L_08886E18;
L_08886E18:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08886EF0; }
    goto L_08886E20;
L_08886E20:;
    ST32(s1+120, 0);
    goto L_08886E24;
L_08886E24:;
    ST32(s1+128, 0);
    ST32(s1+124, 0);
    a0 = LD32(s1+132);
    goto L_08886E30;
L_08886E30:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08886E58; }
    goto L_08886E38;
L_08886E38:;
    v0 = LD32(s1+136);
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08886EBC; }
    goto L_08886E44;
L_08886E44:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08886EAC; }
    goto L_08886E4C;
L_08886E4C:;
    ST32(s1+132, 0);
    goto L_08886E50;
L_08886E50:;
    ST32(s1+140, 0);
    ST32(s1+136, 0);
    goto L_08886E58;
L_08886E58:;
    a0 = s1 + 100;
    { u64 r_ = func_0887E6F0(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886E60;
L_08886E60:;
    a0 = LD32(s1+84);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08886E9C; }
    goto L_08886E6C;
L_08886E6C:;
    ST32(s4+4, 0);
    a0 = s1 + 0;
    ST32(s4+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886E7C;
L_08886E7C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08886E9C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886EA4;
L_08886EA4:;
    ST32(s1+84, 0);
    goto L_08886E6C;
L_08886EAC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886EB4;
L_08886EB4:;
    ST32(s1+132, 0);
    goto L_08886E50;
L_08886EBC:;
    s0 = s2 << 2;
    v0 = s0 + a0;
    a0 = LD32(v0);
    s2 = s2 + 1;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886ED0;
L_08886ED0:;
    a0 = LD32(s1+132);
    v0 = LD32(s1+136);
    s0 = s0 + a0;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    ST32(s0, 0);
    if (cnd_) { goto L_08886EBC; }
    goto L_08886EE8;
L_08886EE8:;
    goto L_08886E44;
L_08886EF0:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886EF8;
L_08886EF8:;
    ST32(s1+120, 0);
    goto L_08886E24;
L_08886F00:;
    func_08885E58(a0, t1, t2, t3);
    goto L_08886F08;
L_08886F08:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886F10;
L_08886F10:;
    a1 = LD32(s1+120);
    a2 = LD32(s1+124);
    goto L_08886E08;
L_08886F1C:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886F24;
L_08886F24:;
    ST32(s1+48, 0);
    goto L_08886DD0;
L_08886F2C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886F3C;
L_08886F3C:;
    a1 = LD32(s1+48);
    v1 = LD32(s1+52);
    goto L_08886DB8;
L_08886F48:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886F50;
L_08886F50:;
    ST32(s1+84, 0);
    goto L_08886D84;
}

/* 08886F58 */
rv_t func_08886F58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08886F58:;
    sp = sp - 32;
    s0 = a0 + 0;
    a0 = a0 + 100;
    f20 = f12;
    { rv_t r_ = func_0887E7B0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886F7C;
L_08886F7C:;
    v0 = v0 ^ 0x1;
    v1 = LD32(s0+116);
    s1 = v0 & 0xff;
    v1 = (v1 >> 9) & 0x1;
    cnd_ = s1 == v1;
    if (cnd_) { v1 = LD32(s0+48); goto L_08886FBC; }
    goto L_08886F94;
L_08886F94:;
    v1 = LD32(s0);
    a1 = s1 + 0;
    v0 = LD32(v1+80);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886FA8;
L_08886FA8:;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a1 = 256;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08886FB8;
L_08886FB8:;
    v1 = LD32(s0+48);
    goto L_08886FBC;
L_08886FBC:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08887008; }
    goto L_08886FC4;
L_08886FC4:;
    v0 = LD32(s0+52);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08887008; }
    goto L_08886FD0;
L_08886FD0:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    f12 = f20;
    v0 = LD32(a0);
    v1 = LD32(v0+12);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08886FF0;
L_08886FF0:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08887008; }
    goto L_08887000;
L_08887000:;
    v1 = LD32(s0+48);
    goto L_08886FD0;
L_08887008:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888701C */
rv_t func_0888701C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888701C:;
    sp = sp - 32;
    s3 = a0 + 0;
    a0 = a1 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    v0 = func_08887510(a0);
    goto L_08887048;
L_08887048:;
    a0 = s1 + 0;
    ST32(s3+116, v0);
    v0 = func_08887404(a0);
    goto L_08887054;
L_08887054:;
    a1 = v0 + 0;
    a0 = s3 + 0;
    func_08887420(a0, a1);
    goto L_08887060;
L_08887060:;
    v1 = LD32(s1);
    v0 = LD32(v1+140);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887070;
L_08887070:;
    v1 = LD32(s3);
    a1 = v0 + 0;
    v0 = LD32(v1+144);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887084;
L_08887084:;
    a0 = s3 + 100;
    a1 = s1 + 100;
    func_0887E920(a0, a1, 0, 0, 0);
    goto L_08887090;
L_08887090:;
    a0 = s3 + 0;
    func_08888310(a0);
    goto L_08887098;
L_08887098:;
    a0 = s1 + 0;
    v0 = func_08888368(a0);
    goto L_088870A0;
L_088870A0:;
    v0 = s2 < v0;
    a1 = s2 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088870E0; }
    goto L_088870B0;
L_088870B0:;
    v0 = func_08888338(a0, a1);
    goto L_088870B8;
L_088870B8:;
    a1 = s2 + 0;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08888348(a0, a1);
    goto L_088870C8;
L_088870C8:;
    a2 = v0 + 0;
    a0 = s3 + 0;
    a1 = s0 + 0;
    func_088882D8(a0, a1, a2);
    goto L_088870D8;
L_088870D8:;
    s2 = s2 + 1;
    goto L_08887098;
L_088870E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088870FC */
rv_t func_088870FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088870FC:;
    v0 = a1 + 8;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a1+8));
    v0 = a0 + 0;
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f0));
    ST32(a0+8, FBITS(f2));
    return (rv_t){ v0, v1, f0 };
}

/* 08887120 */
rv_t func_08887120(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08887120:;
    sp = sp - 32;
    v0 = a0 + 8;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a0+8));
    f1 = BITSF(LD32(v0+4));
    v1 = LD32(a0);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    ST32(a0+8, FBITS(f12));
    ST32(a0+12, FBITS(f13));
    ST32(a0+16, FBITS(f14));
    v0 = LD32(v1+72);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887164;
L_08887164:;
    v1 = LD32(s0);
    v0 = LD32(v1+76);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887174;
L_08887174:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08887184 */
rv_t func_08887184(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08887184:;
    sp = sp - 16;
    v1 = LD32(a0);
    f14 = BITSF(LD32(a1+8));
    f12 = BITSF(LD32(a1));
    v0 = LD32(v1+32);
    t_ = v0;
    f13 = BITSF(LD32(a1+4));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088871A4;
L_088871A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088871B0 */
rv_t func_088871B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088871B0:;
    sp = sp - 16;
    v1 = LD32(a0);
    f14 = BITSF(LD32(a1+8));
    f12 = BITSF(LD32(a1));
    v0 = LD32(v1+32);
    t_ = v0;
    f13 = BITSF(LD32(a1+4));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088871D0;
L_088871D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088871DC */
rv_t func_088871DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
L_088871DC:;
    v0 = a1 + 20;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a1+20));
    v0 = a0 + 0;
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f0));
    ST32(a0+8, FBITS(f2));
    return (rv_t){ v0, v1, f0 };
}

/* 08887200 */
rv_t func_08887200(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08887200:;
    v1 = 0 < a1;
    v0 = 0 < a2;
    sp = sp - 32;
    v1 = v1 & v0;
    v0 = a0 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    a1 = a0 + 0;
    cnd_ = v1 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_08887254; }
    goto L_0888723C;
L_0888723C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08887254:;
    v0 = LD32(v0);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887264;
L_08887264:;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp));
    ST32(s0, FBITS(f0));
    cnd_ = s2 == 0;
    ST32(s1, FBITS(f1));
    if (cnd_) { goto L_0888723C; }
    goto L_08887278;
L_08887278:;
    f0 = BITSF(LD32(sp+8));
    ST32(s2, FBITS(f0));
    goto L_0888723C;
}

/* 08887284 */
rv_t func_08887284(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08887284:;
    sp = sp - 32;
    s2 = a1 + 0;
    a1 = a0 + 0;
    s1 = a3 + 0;
    s0 = a2 + 0;
    v0 = LD32(a0);
    v1 = LD32(v0+44);
    t_ = v1;
    a0 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088872B8;
L_088872B8:;
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f0 = BITSF(LD32(sp));
    ST32(s2, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s1, FBITS(f2));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088872E8 */
rv_t func_088872E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088872E8:;
    ST32(a0+28, FBITS(f14));
    ST32(a0+20, FBITS(f12));
    ST32(a0+24, FBITS(f13));
    return (rv_t){ v0, v1, f0 };
}

/* 088872F8 */
rv_t func_088872F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088872F8:;
    sp = sp - 16;
    v1 = LD32(a0);
    f14 = BITSF(LD32(a1+8));
    f12 = BITSF(LD32(a1));
    v0 = LD32(v1+56);
    t_ = v0;
    f13 = BITSF(LD32(a1+4));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887318;
L_08887318:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08887324 */
rv_t func_08887324(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08887324:;
    sp = sp - 16;
    v1 = LD32(a0);
    f14 = BITSF(LD32(a1+8));
    f12 = BITSF(LD32(a1));
    v0 = LD32(v1+56);
    t_ = v0;
    f13 = BITSF(LD32(a1+4));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887344;
L_08887344:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08887350 */
rv_t func_08887350(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08887350:;
    sp = sp - 48;
    a1 = a0 + 0;
    s0 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887374;
L_08887374:;
    v0 = LD32(s0+148);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088873A4; }
    goto L_08887380;
L_08887380:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887394;
L_08887394:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088873A4:;
    v0 = LD32(v0);
    v1 = LD32(v0+72);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088873B4;
L_088873B4:;
    a1 = LD32(s0+148);
    v1 = LD32(a1);
    v0 = LD32(v1+44);
    t_ = v0;
    a0 = sp + 16;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088873C8;
L_088873C8:;
    f3 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+16));
    f2 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f3 = f3 + f0;
    f0 = BITSF(LD32(sp+20));
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp+24));
    ST32(sp, FBITS(f3));
    f1 = f1 + f0;
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    goto L_08887380;
}

/* 088873FC */
rv_t func_088873FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088873FC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08887404 */
u32 func_08887404(u32 a0)
{
    u32 v0 = 0;
L_08887404:;
    v0 = a0 + 32;
    return v0;
}

/* 0888740C */
void func_0888740C(u32 a0, float f12, float f13, float f14, float f15)
{
L_0888740C:;
    ST32(a0+44, FBITS(f15));
    ST32(a0+32, FBITS(f12));
    ST32(a0+36, FBITS(f13));
    ST32(a0+40, FBITS(f14));
    return;
}

/* 08887420 */
void func_08887420(u32 a0, u32 a1)
{
    float f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08887420:;
    f15 = BITSF(LD32(a1+12));
    f12 = BITSF(LD32(a1));
    f13 = BITSF(LD32(a1+4));
    f14 = BITSF(LD32(a1+8));
    sp = sp - 16;
    func_0888740C(a0, f12, f13, f14, f15);
    goto L_08887440;
L_08887440:;
    sp = sp + 16;
    return;
}

/* 0888744C */
void func_0888744C(u32 a0, u32 a1)
{
    float f12 = 0, f13 = 0, f14 = 0, f15 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888744C:;
    f15 = BITSF(LD32(a1+12));
    f12 = BITSF(LD32(a1));
    f13 = BITSF(LD32(a1+4));
    f14 = BITSF(LD32(a1+8));
    sp = sp - 16;
    func_0888740C(a0, f12, f13, f14, f15);
    goto L_0888746C;
L_0888746C:;
    sp = sp + 16;
    return;
}

/* 08887478 */
rv_t func_08887478(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
L_08887478:;
    v0 = a1 >> 24;
    f6 = BITSF(v0);
    v0 = a1 & 0xff;
    f0 = BITSF(v0);
    v0 = (a1 >> 8) & 0xff;
    a1 = (a1 >> 16) & 0xff;
    f1 = BITSF(v0);
    f3 = BITSF(a1);
    f4 = (float)(s32)FBITS(f0);
    f5 = (float)(s32)FBITS(f1);
    v0 = D_08AEC198 - (-15976);
    f2 = (float)(s32)FBITS(f3);
    f1 = (float)(s32)FBITS(f6);
    f0 = BITSF(LD32(v0-15976));
    v0 = a0 + 32;
    f1 = f1 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f2 = f2 * f0;
    ST32(a0+32, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+12, FBITS(f4));
    ST32(v0+8, FBITS(f5));
    return (rv_t){ v0, v1, f0 };
}

/* 088874D8 */
u64 func_088874D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088874D8:;
    a2 = a2 & 0xff;
    cnd_ = a2 == 0;
    v1 = ~(0 | a1);
    if (cnd_) { goto L_088874F4; }
    goto L_088874E4;
L_088874E4:;
    v0 = LD32(a0+116);
    v0 = v0 | a1;
    goto L_088874EC;
L_088874EC:;
    ST32(a0+116, v0);
    return (u64)v0 | ((u64)v1 << 32);
L_088874F4:;
    v0 = LD32(a0+116);
    v0 = v0 & v1;
    goto L_088874EC;
}

/* 08887500 */
u32 func_08887500(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08887500:;
    v0 = LD32(a0+116);
    v0 = v0 & a1;
    v0 = 0 < v0;
    return v0;
}

/* 08887510 */
u32 func_08887510(u32 a0)
{
    u32 v0 = 0;
L_08887510:;
    v0 = LD32(a0+116);
    return v0;
}

/* 08887518 */
u64 func_08887518(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_08887518:;
    a0 = LD32(a0+148);
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08887548; }
    goto L_08887524;
L_08887524:;
    v1 = LD32(a0+148);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08887540; }
    goto L_08887530;
L_08887530:;
    v0 = LD32(v1+148);
    a0 = v1 + 0;
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08887530; }
    goto L_08887540;
L_08887540:;
    cnd_ = a0 == 0;
    v0 = a0 + 0;
    if (cnd_) { goto L_08887550; }
    goto L_08887548;
L_08887548:;
    return (u64)v0 | ((u64)v1 << 32);
L_08887550:;
    v0 = 0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08887558 */
rv_t func_08887558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08887558:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s0 = a0 + 84;
    v0 = LD32(a0+84);
    cnd_ = v0 == 0;
    s1 = LD32(a1);
    if (cnd_) { goto L_0888759C; }
    goto L_08887588;
L_08887588:;
    cnd_ = s1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088875E4; }
    goto L_08887590;
L_08887590:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887598;
L_08887598:;
    ST32(s2+84, 0);
    goto L_0888759C;
L_0888759C:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0888761C; }
    goto L_088875AC;
L_088875AC:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088875B4;
L_088875B4:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088875C8;
L_088875C8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+84, v0);
    if (cnd_) { goto L_0888760C; }
    goto L_088875D8;
L_088875D8:;
    ST32(s0+4, 0);
    s1 = LD32(s3);
    ST32(s0+8, 0);
    goto L_088875E4;
L_088875E4:;
    a0 = s1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088875EC;
L_088875EC:;
    ST32(s2+80, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888760C:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887614;
L_08887614:;
    s1 = LD32(s3);
    goto L_088875E4;
L_0888761C:;
    ST32(s2+84, 0);
    goto L_08887614;
}

/* 08887624 */
rv_t func_08887624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08887624:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+84);
    cnd_ = v0 == 0;
    s0 = a0 + 84;
    if (cnd_) { goto L_08887660; }
    goto L_0888764C;
L_0888764C:;
    cnd_ = a1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088876A4; }
    goto L_08887654;
L_08887654:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888765C;
L_0888765C:;
    ST32(s2+84, 0);
    goto L_08887660;
L_08887660:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_088876D8; }
    goto L_08887670;
L_08887670:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887678;
L_08887678:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888768C;
L_0888768C:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+84, v0);
    if (cnd_) { goto L_088876C8; }
    goto L_0888769C;
L_0888769C:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_088876A4;
L_088876A4:;
    a0 = s1 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088876AC;
L_088876AC:;
    ST32(s2+80, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088876C8:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088876D0;
L_088876D0:;
    goto L_088876A4;
L_088876D8:;
    ST32(s2+84, 0);
    goto L_088876A4;
}

/* 088876E0 */
rv_t func_088876E0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088876E0:;
    sp = sp - 80;
    v0 = D_08AD4F6C - (20332);
    fp = a0 + 0;
    s0 = v0 + 20332;
    cnd_ = s0 == 0;
    s5 = LD32(a0+148);
    if (cnd_) { goto L_08887A98; }
    goto L_08887720;
L_08887720:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887728;
L_08887728:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888773C;
L_0888773C:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08887A84; }
    goto L_08887744;
L_08887744:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    goto L_08887750;
L_08887750:;
    s6 = sp + 16;
    ST32(sp+20, 0);
    cnd_ = s5 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08887900; }
    goto L_08887760;
L_08887760:;
    a0 = LD32(sp+16);
    goto L_08887764;
L_08887764:;
    cnd_ = a0 == 0;
    s0 = LD32(sp);
    if (cnd_) { goto L_08887780; }
    goto L_0888776C;
L_0888776C:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = LD32(sp); goto L_088877BC; }
    goto L_08887774;
L_08887774:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888777C;
L_0888777C:;
    ST32(sp+16, 0);
    goto L_08887780;
L_08887780:;
    ST32(s6+8, 0);
    cnd_ = s0 == 0;
    ST32(s6+4, 0);
    if (cnd_) { goto L_08887A7C; }
    goto L_0888778C;
L_0888778C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887794;
L_08887794:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s6+4, v0);
    ST32(s6+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088877A8;
L_088877A8:;
    cnd_ = v0 != 0;
    ST32(s6, v0);
    if (cnd_) { goto L_08887A68; }
    goto L_088877B0;
L_088877B0:;
    ST32(s6+8, 0);
    ST32(s6+4, 0);
    goto L_088877B8;
L_088877B8:;
    a0 = LD32(sp);
    goto L_088877BC;
L_088877BC:;
    cnd_ = a0 == 0;
    s0 = LD32(s5+84);
    if (cnd_) { goto L_088877E0; }
    goto L_088877C4;
L_088877C4:;
    cnd_ = s0 == a0;
    if (cnd_) { v0 = D_08AD4F70 - (20336); goto L_0888781C; }
    goto L_088877CC;
L_088877CC:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+8, 0); goto L_088877E4; }
    goto L_088877D4;
L_088877D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088877DC;
L_088877DC:;
    ST32(sp, 0);
    goto L_088877E0;
L_088877E0:;
    ST32(sp+8, 0);
    goto L_088877E4;
L_088877E4:;
    cnd_ = s0 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08887A60; }
    goto L_088877EC;
L_088877EC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088877F4;
L_088877F4:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887808;
L_08887808:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08887A4C; }
    goto L_08887810;
L_08887810:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_08887818;
L_08887818:;
    v0 = D_08AD4F70 - (20336);
    goto L_0888781C;
L_0888781C:;
    a0 = v0 + 20336;
    cnd_ = a0 == 0;
    s1 = LD32(sp+20);
    if (cnd_) { goto L_08887898; }
    goto L_08887828;
L_08887828:;
    s4 = a0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887830;
L_08887830:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    s2 = sp + 0;
    if (cnd_) { goto L_08887894; }
    goto L_0888783C;
L_0888783C:;
    v1 = LD32(sp+8);
    v0 = v0 + 1;
    s7 = sp + 0;
    if (v1 != 0) v0 = s1;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887858;
L_08887858:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08887894; }
    goto L_08887860;
L_08887860:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08887A28; }
    goto L_0888786C;
L_0888786C:;
    ST32(s7, s0);
    goto L_08887870;
L_08887870:;
    a1 = s4 + 0;
    a0 = LD32(s2);
    v0 = LD32(s2+4);
    ST32(s7+8, s3);
    a0 = a0 + v0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887888;
L_08887888:;
    v1 = LD32(s2+4);
    v1 = v1 + s1;
    ST32(s2+4, v1);
    goto L_08887894;
L_08887894:;
    s1 = LD32(sp+20);
    goto L_08887898;
L_08887898:;
    s2 = sp + 0;
    cnd_ = s1 == 0;
    s4 = LD32(sp+16);
    if (cnd_) { goto L_088878F4; }
    goto L_088878A4;
L_088878A4:;
    v1 = LD32(sp+8);
    v0 = s1 + 1;
    if (v1 != 0) v0 = s1;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088878BC;
L_088878BC:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088878F4; }
    goto L_088878C4;
L_088878C4:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08887A04; }
    goto L_088878D0;
L_088878D0:;
    a0 = LD32(s2+4);
    goto L_088878D4;
L_088878D4:;
    ST32(s2+8, s3);
    a1 = s4 + 0;
    a0 = s0 + a0;
    ST32(s2, s0);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088878E8;
L_088878E8:;
    v1 = LD32(s2+4);
    v1 = v1 + s1;
    ST32(s2+4, v1);
    goto L_088878F4;
L_088878F4:;
    s5 = LD32(s5+148);
    cnd_ = s5 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08887764; }
    goto L_08887900;
L_08887900:;
    s0 = LD32(fp+88);
    s2 = sp + 0;
    cnd_ = s0 == 0;
    s4 = LD32(fp+84);
    if (cnd_) { goto L_08887960; }
    goto L_08887910;
L_08887910:;
    v1 = LD32(sp+8);
    v0 = s0 + 1;
    if (v1 != 0) v0 = s0;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887928;
L_08887928:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08887960; }
    goto L_08887930;
L_08887930:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088879E0; }
    goto L_0888793C;
L_0888793C:;
    a0 = LD32(s2+4);
    goto L_08887940;
L_08887940:;
    ST32(s2+8, s3);
    a1 = s4 + 0;
    a0 = s1 + a0;
    ST32(s2, s1);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887954;
L_08887954:;
    v1 = LD32(s2+4);
    v1 = v1 + s0;
    ST32(s2+4, v1);
    goto L_08887960;
L_08887960:;
    a0 = LD32(sp);
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887968;
L_08887968:;
    a1 = v0 + 0;
    a0 = fp + 0;
    { rv_t r_ = func_08887AA0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887974;
L_08887974:;
    a0 = LD32(sp+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088879D0; }
    goto L_08887980;
L_08887980:;
    a0 = LD32(sp);
    ST32(s6+4, 0);
    cnd_ = a0 != 0;
    ST32(s6+8, 0);
    if (cnd_) { goto L_088879C0; }
    goto L_08887990;
L_08887990:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088879C0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088879C8;
L_088879C8:;
    ST32(sp, 0);
    goto L_08887990;
L_088879D0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088879D8;
L_088879D8:;
    ST32(sp+16, 0);
    goto L_08887980;
L_088879E0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088879E8;
L_088879E8:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08887940; }
    goto L_088879F4;
L_088879F4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088879FC;
L_088879FC:;
    a0 = LD32(s2+4);
    goto L_08887940;
L_08887A04:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887A0C;
L_08887A0C:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_088878D4; }
    goto L_08887A18;
L_08887A18:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887A20;
L_08887A20:;
    a0 = LD32(s2+4);
    goto L_088878D4;
L_08887A28:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887A30;
L_08887A30:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s7, s0); goto L_08887870; }
    goto L_08887A3C;
L_08887A3C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887A44;
L_08887A44:;
    ST32(s7, s0);
    goto L_08887870;
L_08887A4C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887A58;
L_08887A58:;
    v0 = D_08AD4F70 - (20336);
    goto L_0888781C;
L_08887A60:;
    ST32(sp, 0);
    goto L_08887818;
L_08887A68:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887A74;
L_08887A74:;
    a0 = LD32(sp);
    goto L_088877BC;
L_08887A7C:;
    ST32(s6, 0);
    goto L_088877B8;
L_08887A84:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887A90;
L_08887A90:;
    ST32(sp+16, 0);
    goto L_08887750;
L_08887A98:;
    ST32(sp, 0);
    goto L_08887744;
}

/* 08887AA0 */
rv_t func_08887AA0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08887AA0:;
    sp = sp - 16;
    s1 = a1 + 0;
    v1 = LD32(a0+148);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08887AE4; }
    goto L_08887AC0;
L_08887AC0:;
    v0 = LD32(a0+144);
    a2 = a1 + 0;
    a0 = v1 + 0;
    cnd_ = s1 == v0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08887AE4; }
    goto L_08887AD4;
L_08887AD4:;
    v0 = LD32(v1);
    v1 = LD32(v0+88);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887AE4;
L_08887AE4:;
    ST32(s0+144, s1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08887AFC */
rv_t func_08887AFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08887AFC:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = 0 + 0;
    { rv_t r_ = func_088876E0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887B18;
L_08887B18:;
    v0 = LD32(s0+52);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08887B34; }
    goto L_08887B24;
L_08887B24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08887B34:;
    v1 = LD32(s0+48);
    goto L_08887B38;
L_08887B38:;
    v0 = s1 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = LD32(a0);
    v1 = LD32(a1+100);
    t_ = v1;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887B54;
L_08887B54:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_08887B38; }
    goto L_08887B64;
L_08887B64:;
    goto L_08887B24;
}

/* 08887B6C */
rv_t func_08887B6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08887B6C:;
    sp = sp - 96;
    v0 = D_08AD4F6C - (20332);
    fp = a0 + 0;
    s0 = v0 + 20332;
    ST32(sp+32, a1);
    cnd_ = s0 == 0;
    s5 = LD32(a0+148);
    if (cnd_) { goto L_08887F5C; }
    goto L_08887BB0;
L_08887BB0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887BB8;
L_08887BB8:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887BCC;
L_08887BCC:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08887F48; }
    goto L_08887BD4;
L_08887BD4:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    ST32(sp+16, 0);
    goto L_08887BE0;
L_08887BE0:;
    s6 = sp + 16;
    ST32(sp+20, 0);
    cnd_ = s5 == 0;
    ST32(sp+24, 0);
    if (cnd_) { goto L_08887D90; }
    goto L_08887BF0;
L_08887BF0:;
    a0 = LD32(sp+16);
    goto L_08887BF4;
L_08887BF4:;
    cnd_ = a0 == 0;
    s0 = LD32(sp);
    if (cnd_) { goto L_08887C10; }
    goto L_08887BFC;
L_08887BFC:;
    cnd_ = s0 == a0;
    if (cnd_) { a0 = LD32(sp); goto L_08887C4C; }
    goto L_08887C04;
L_08887C04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887C0C;
L_08887C0C:;
    ST32(sp+16, 0);
    goto L_08887C10;
L_08887C10:;
    ST32(s6+8, 0);
    cnd_ = s0 == 0;
    ST32(s6+4, 0);
    if (cnd_) { goto L_08887F40; }
    goto L_08887C1C;
L_08887C1C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887C24;
L_08887C24:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(s6+4, v0);
    ST32(s6+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887C38;
L_08887C38:;
    cnd_ = v0 != 0;
    ST32(s6, v0);
    if (cnd_) { goto L_08887F2C; }
    goto L_08887C40;
L_08887C40:;
    ST32(s6+8, 0);
    ST32(s6+4, 0);
    goto L_08887C48;
L_08887C48:;
    a0 = LD32(sp);
    goto L_08887C4C;
L_08887C4C:;
    cnd_ = a0 == 0;
    s0 = LD32(s5+84);
    if (cnd_) { goto L_08887C70; }
    goto L_08887C54;
L_08887C54:;
    cnd_ = s0 == a0;
    if (cnd_) { v0 = D_08AD4F70 - (20336); goto L_08887CAC; }
    goto L_08887C5C;
L_08887C5C:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+8, 0); goto L_08887C74; }
    goto L_08887C64;
L_08887C64:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887C6C;
L_08887C6C:;
    ST32(sp, 0);
    goto L_08887C70;
L_08887C70:;
    ST32(sp+8, 0);
    goto L_08887C74;
L_08887C74:;
    cnd_ = s0 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_08887F24; }
    goto L_08887C7C;
L_08887C7C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887C84;
L_08887C84:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887C98;
L_08887C98:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_08887F10; }
    goto L_08887CA0;
L_08887CA0:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_08887CA8;
L_08887CA8:;
    v0 = D_08AD4F70 - (20336);
    goto L_08887CAC;
L_08887CAC:;
    a0 = v0 + 20336;
    cnd_ = a0 == 0;
    s1 = LD32(sp+20);
    if (cnd_) { goto L_08887D28; }
    goto L_08887CB8;
L_08887CB8:;
    s4 = a0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887CC0;
L_08887CC0:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    s2 = sp + 0;
    if (cnd_) { goto L_08887D24; }
    goto L_08887CCC;
L_08887CCC:;
    v1 = LD32(sp+8);
    v0 = v0 + 1;
    s7 = sp + 0;
    if (v1 != 0) v0 = s1;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887CE8;
L_08887CE8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08887D24; }
    goto L_08887CF0;
L_08887CF0:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08887EEC; }
    goto L_08887CFC;
L_08887CFC:;
    ST32(s7, s0);
    goto L_08887D00;
L_08887D00:;
    a1 = s4 + 0;
    a0 = LD32(s2);
    v0 = LD32(s2+4);
    ST32(s7+8, s3);
    a0 = a0 + v0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887D18;
L_08887D18:;
    v1 = LD32(s2+4);
    v1 = v1 + s1;
    ST32(s2+4, v1);
    goto L_08887D24;
L_08887D24:;
    s1 = LD32(sp+20);
    goto L_08887D28;
L_08887D28:;
    s2 = sp + 0;
    cnd_ = s1 == 0;
    s4 = LD32(sp+16);
    if (cnd_) { goto L_08887D84; }
    goto L_08887D34;
L_08887D34:;
    v1 = LD32(sp+8);
    v0 = s1 + 1;
    if (v1 != 0) v0 = s1;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887D4C;
L_08887D4C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08887D84; }
    goto L_08887D54;
L_08887D54:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08887EC8; }
    goto L_08887D60;
L_08887D60:;
    a0 = LD32(s2+4);
    goto L_08887D64;
L_08887D64:;
    ST32(s2+8, s3);
    a1 = s4 + 0;
    a0 = s0 + a0;
    ST32(s2, s0);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887D78;
L_08887D78:;
    v1 = LD32(s2+4);
    v1 = v1 + s1;
    ST32(s2+4, v1);
    goto L_08887D84;
L_08887D84:;
    s5 = LD32(s5+148);
    cnd_ = s5 != 0;
    a0 = LD32(sp+16);
    if (cnd_) { goto L_08887BF4; }
    goto L_08887D90;
L_08887D90:;
    s0 = LD32(fp+88);
    s2 = sp + 0;
    cnd_ = s0 == 0;
    s4 = LD32(fp+84);
    if (cnd_) { goto L_08887DF0; }
    goto L_08887DA0;
L_08887DA0:;
    v1 = LD32(sp+8);
    v0 = s0 + 1;
    if (v1 != 0) v0 = s0;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887DB8;
L_08887DB8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08887DF0; }
    goto L_08887DC0;
L_08887DC0:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08887EA4; }
    goto L_08887DCC;
L_08887DCC:;
    a0 = LD32(s2+4);
    goto L_08887DD0;
L_08887DD0:;
    ST32(s2+8, s3);
    a1 = s4 + 0;
    a0 = s1 + a0;
    ST32(s2, s1);
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887DE4;
L_08887DE4:;
    v1 = LD32(s2+4);
    v1 = v1 + s0;
    ST32(s2+4, v1);
    goto L_08887DF0;
L_08887DF0:;
    v0 = LD32(fp+52);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08887E68; }
    goto L_08887DFC;
L_08887DFC:;
    a0 = LD32(sp+16);
    goto L_08887E00;
L_08887E00:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08887E58; }
    goto L_08887E08;
L_08887E08:;
    a0 = LD32(sp);
    ST32(s6+4, 0);
    cnd_ = a0 != 0;
    ST32(s6+8, 0);
    if (cnd_) { goto L_08887E48; }
    goto L_08887E18;
L_08887E18:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08887E48:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887E50;
L_08887E50:;
    ST32(sp, 0);
    goto L_08887E18;
L_08887E58:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887E60;
L_08887E60:;
    ST32(sp+16, 0);
    goto L_08887E08;
L_08887E68:;
    v1 = LD32(fp+48);
    goto L_08887E6C;
L_08887E6C:;
    v0 = s0 << 2;
    a1 = LD32(sp+32);
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+104);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08887E8C;
L_08887E8C:;
    v0 = LD32(fp+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(fp+48); goto L_08887E6C; }
    goto L_08887E9C;
L_08887E9C:;
    a0 = LD32(sp+16);
    goto L_08887E00;
L_08887EA4:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887EAC;
L_08887EAC:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08887DD0; }
    goto L_08887EB8;
L_08887EB8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887EC0;
L_08887EC0:;
    a0 = LD32(s2+4);
    goto L_08887DD0;
L_08887EC8:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887ED0;
L_08887ED0:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s2+4); goto L_08887D64; }
    goto L_08887EDC;
L_08887EDC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887EE4;
L_08887EE4:;
    a0 = LD32(s2+4);
    goto L_08887D64;
L_08887EEC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887EF4;
L_08887EF4:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s7, s0); goto L_08887D00; }
    goto L_08887F00;
L_08887F00:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887F08;
L_08887F08:;
    ST32(s7, s0);
    goto L_08887D00;
L_08887F10:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887F1C;
L_08887F1C:;
    v0 = D_08AD4F70 - (20336);
    goto L_08887CAC;
L_08887F24:;
    ST32(sp, 0);
    goto L_08887CA8;
L_08887F2C:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887F38;
L_08887F38:;
    a0 = LD32(sp);
    goto L_08887C4C;
L_08887F40:;
    ST32(s6, 0);
    goto L_08887C48;
L_08887F48:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887F54;
L_08887F54:;
    ST32(sp+16, 0);
    goto L_08887BE0;
L_08887F5C:;
    ST32(sp, 0);
    goto L_08887BD4;
}

/* 08887F64 */
rv_t func_08887F64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08887F64:;
    return (rv_t){ v0, v1, f0 };
}

/* 08887F6C */
u64 func_08887F6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08887F6C:;
    sp = sp - 32;
    s3 = 0 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08887FE0; }
    goto L_08887F9C;
L_08887F9C:;
    v0 = LD32(s0+48);
    goto L_08887FA0;
L_08887FA0:;
    v1 = s1 << 2;
    a1 = s2 + 0;
    v1 = v1 + v0;
    v1 = LD32(v1);
    s1 = s1 + 1;
    v0 = LD32(v1+144);
    cnd_ = v0 == s2;
    a0 = v1 + 0;
    if (cnd_) { goto L_08888000; }
    goto L_08887FC0;
L_08887FC0:;
    { u64 r_ = func_08887F6C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08887FC8;
L_08887FC8:;
    cnd_ = v0 != 0;
    if (cnd_) { s3 = v0 + 0; goto L_08887FE0; }
    goto L_08887FD0;
L_08887FD0:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_08887FA0; }
    goto L_08887FE0;
L_08887FE0:;
    v0 = s3 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08888000:;
    s3 = v1 + 0;
    goto L_08887FE0;
}

/* 08888008 */
rv_t func_08888008(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888008:;
    sp = sp - 16;
    s0 = a0 + 0;
    s2 = 0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08888148(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888802C;
L_0888802C:;
    v0 = LD32(s0+52);
    v1 = LD32(s0+56);
    a2 = v0 << 2;
    a1 = v0 + 1;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08888064; }
    goto L_08888048;
L_08888048:;
    v0 = s2 + 0;
    goto L_0888804C;
L_0888804C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08888064:;
    v0 = LD32(s0+48);
    v1 = LD32(s0);
    ST32(s0+52, a1);
    v0 = a2 + v0;
    s2 = 1;
    ST32(v0, s1);
    v0 = LD32(v1+72);
    t_ = v0;
    ST32(s1+148, s0);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888088;
L_08888088:;
    v1 = LD32(s0);
    v0 = LD32(v1+76);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888098;
L_08888098:;
    v0 = s2 + 0;
    goto L_0888804C;
}

/* 088880A0 */
rv_t func_088880A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088880A0:;
    v0 = LD32(a0+52);
    v1 = a1 << 2;
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088880C0; }
    goto L_088880B4;
L_088880B4:;
    v0 = LD32(a0+48);
    v0 = v1 + v0;
    v0 = LD32(v0);
    goto L_088880C0;
L_088880C0:;
    return (rv_t){ v0, v1, f0 };
}

/* 088880C8 */
rv_t func_088880C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088880C8:;
    a3 = LD32(a0+52);
    t0 = 0 + 0;
    cnd_ = a3 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_08888104; }
    goto L_088880D8;
L_088880D8:;
    v1 = LD32(a0+48);
    t1 = 1;
    goto L_088880E0;
L_088880E0:;
    v0 = LD32(v1);
    cnd_ = v0 == a1;
    if (cnd_) { t0 = 1; goto L_08888120; }
    goto L_088880EC;
L_088880EC:;
    cnd_ = t0 == t1;
    if (cnd_) { ST32(v1-4, v0); goto L_088880F4; }
    goto L_088880F4;
L_088880F4:;
    a2 = a2 + 1;
    v0 = a2 < a3;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_088880E0; }
    goto L_08888104;
L_08888104:;
    v0 = 1;
    cnd_ = t0 == v0;
    if (cnd_) { v0 = a3 - 1; goto L_08888118; }
    goto L_08888110;
L_08888110:;
    v0 = t0 + 0;
    return (rv_t){ v0, v1, f0 };
L_08888118:;
    ST32(a0+52, v0);
    goto L_08888110;
L_08888120:;
    ST32(v1, 0);
    goto L_088880F4;
}

/* 08888128 */
rv_t func_08888128(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888128:;
    sp = sp - 16;
    { rv_t r_ = func_08888148(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888138;
L_08888138:;
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08888148 */
rv_t func_08888148(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888148:;
    sp = sp - 16;
    a1 = LD32(a0+56);
    v1 = LD32(a0+52);
    v1 = v1 < a1;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_08888170; }
    goto L_08888164;
L_08888164:;
    goto L_08888168;
L_08888168:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08888170:;
    { rv_t r_ = func_08888E34(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888178;
L_08888178:;
    goto L_08888168;
}

/* 08888180 */
rv_t func_08888180(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08888180:;
    v0 = LD32(a0+52);
    v0 = v0 < 0x1u;
    return (rv_t){ v0, v1, f0 };
}

/* 0888818C */
rv_t func_0888818C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888818C:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    goto L_088881B4;
L_088881B4:;
    v1 = LD32(s0);
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088881C4;
L_088881C4:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_0888820C; }
    goto L_088881D8;
L_088881D8:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088881E8;
L_088881E8:;
    v1 = LD32(v0+144);
    a0 = v0 + 0;
    a1 = s3 + 0;
    cnd_ = v1 == s3;
    s2 = v0 + 0;
    if (cnd_) { goto L_0888820C; }
    goto L_088881FC;
L_088881FC:;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888204;
L_08888204:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088881B4; }
    goto L_0888820C;
L_0888820C:;
    v0 = s2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888822C */
rv_t func_0888822C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888822C:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    goto L_08888254;
L_08888254:;
    v1 = LD32(s1);
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888264;
L_08888264:;
    v0 = s2 < v0;
    a1 = s2 + 0;
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_088882B8; }
    goto L_08888278;
L_08888278:;
    v1 = LD32(s1);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888288;
L_08888288:;
    a1 = LD32(s3);
    a0 = v0 + 84;
    a2 = 1;
    s0 = v0 + 0;
    { u64 r_ = func_08AA3308(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888829C;
L_0888829C:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s3 + 0;
    if (cnd_) { goto L_088882B8; }
    goto L_088882A8;
L_088882A8:;
    { rv_t r_ = func_0888822C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088882B0;
L_088882B0:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08888254; }
    goto L_088882B8;
L_088882B8:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088882D8 */
void func_088882D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088882D8:;
    v0 = LD32(a0+76);
    v1 = v0 << 3;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v1 = v1 + a0;
    if (cnd_) { goto L_08888308; }
    goto L_088882EC;
L_088882EC:;
    ST32(v1+60, a1);
    v1 = LD32(a0+76);
    v0 = v1 << 3;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0+64, a2);
    ST32(a0+76, v1);
    goto L_08888308;
L_08888308:;
    return;
}

/* 08888310 */
void func_08888310(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_08888310:;
    a1 = 0 + 0;
    v1 = a0 + 0;
    goto L_08888318;
L_08888318:;
    a1 = a1 + 1;
    v0 = a1 < 0x2u;
    ST32(v1+60, 0);
    ST32(v1+64, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 8;
    if (cnd_) { goto L_08888318; }
    goto L_08888330;
L_08888330:;
    ST32(a0+76, 0);
    return;
}

/* 08888338 */
u32 func_08888338(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08888338:;
    a1 = a1 << 3;
    a1 = a1 + a0;
    v0 = LD32(a1+60);
    return v0;
}

/* 08888348 */
u32 func_08888348(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08888348:;
    a1 = a1 << 3;
    a1 = a1 + a0;
    v0 = LD32(a1+64);
    return v0;
}

/* 08888358 */
u32 func_08888358(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08888358:;
    a1 = a1 << 3;
    v0 = a0 + a1;
    v0 = v0 + 60;
    return v0;
}

/* 08888368 */
u32 func_08888368(u32 a0)
{
    u32 v0 = 0;
L_08888368:;
    v0 = LD32(a0+76);
    return v0;
}

/* 08888370 */
u64 func_08888370(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08888370:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = 0 + 0;
    s0 = 1;
    goto L_08888398;
L_08888398:;
    a0 = s2 + 0;
    v0 = func_08888368(a0);
    goto L_088883A0;
L_088883A0:;
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_088883F8; }
    goto L_088883AC;
L_088883AC:;
    a0 = s2 + 0;
    v0 = func_08888358(a0, a1);
    goto L_088883B4;
L_088883B4:;
    v1 = LD32(v0+4);
    a1 = v0 + 0;
    v0 = v1 < 0x6u;
    cnd_ = v0 == 0;
    if (cnd_) { s0 = 1; goto L_088883F0; }
    goto L_088883C8;
L_088883C8:;
    v0 = v1 << 2;
    v1 = D_08AD4F74 - (20340);
    v1 = v1 + 20340;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088883E4u: goto L_088883E4; case 0x08888418u: goto L_08888418; case 0x08888420u: goto L_08888420; case 0x0888842Cu: goto L_0888842C; case 0x0888843Cu: goto L_0888843C; case 0x08888448u: goto L_08888448; default: rs_break(0, 0x088883dc); }
L_088883E4:;
    v0 = LD32(a1);
    v0 = s3 ^ v0;
    s0 = v0 < 0x1u;
    goto L_088883F0;
L_088883F0:;
    cnd_ = s0 != 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08888398; }
    goto L_088883F8;
L_088883F8:;
    v0 = s0 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08888418:;
    s0 = 1;
    goto L_088883F0;
L_08888420:;
    v0 = LD32(a1);
    s0 = (s32)v0 < (s32)s3;
    goto L_088883F0;
L_0888842C:;
    v0 = LD32(a1);
    v0 = (s32)s3 < (s32)v0;
    goto L_08888434;
L_08888434:;
    s0 = v0 ^ 0x1;
    goto L_088883F0;
L_0888843C:;
    v0 = LD32(a1);
    s0 = (s32)s3 < (s32)v0;
    goto L_088883F0;
L_08888448:;
    v0 = LD32(a1);
    v0 = (s32)v0 < (s32)s3;
    goto L_08888434;
}

/* 08888454 */
rv_t func_08888454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[352] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 352);
L_08888454:;
    sp = sp - 352;
    s7 = a2 + 0;
    s5 = a1 + 0;
    s3 = a0 + 0;
    v0 = func_088888F4(a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0888848C;
L_0888848C:;
    a1 = v0 + 0;
    a0 = s3 + 0;
    a2 = 10001;
    s6 = v0 + 0;
    v0 = func_08888990(a1, a2);
    goto L_088884A0;
L_088884A0:;
    v1 = 1;
    cnd_ = v0 == v1;
    a2 = 256;
    if (cnd_) { goto L_088884F0; }
    goto L_088884AC;
L_088884AC:;
    cnd_ = s7 == 0;
    a0 = s7 + 0;
    if (cnd_) { goto L_088884C4; }
    goto L_088884B4;
L_088884B4:;
    v1 = LD32(s7);
    v0 = LD32(v1+116);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088884C4;
L_088884C4:;
    sp = sp + 352;
    return (rv_t){ v0, v1, f0 };
L_088884F0:;
    a0 = s5 + 0;
    a1 = sp + 0;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088884FC;
L_088884FC:;
    v1 = LD32(s3);
    a0 = s3 + 0;
    v0 = LD32(v1+96);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888510;
L_08888510:;
    a1 = s3 + 32;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888851C;
L_0888851C:;
    a1 = s3 + 36;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888528;
L_08888528:;
    a1 = s3 + 40;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888534;
L_08888534:;
    a1 = s3 + 44;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888540;
L_08888540:;
    a1 = s3 + 8;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888854C;
L_0888854C:;
    a1 = s3 + 12;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888558;
L_08888558:;
    a1 = s3 + 16;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888564;
L_08888564:;
    a1 = s3 + 144;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888570;
L_08888570:;
    a1 = s3 + 116;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888857C;
L_0888857C:;
    v1 = s6 < 0x7u;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0888859C; }
    goto L_08888588;
L_08888588:;
    v1 = LD32(s3+116);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    v0 = v1 | 0x400;
    if (cnd_) { goto L_0888859C; }
    goto L_08888598;
L_08888598:;
    ST32(s3+116, v0);
    goto L_0888859C;
L_0888859C:;
    cnd_ = s6 != 0;
    if (cnd_) { a1 = s3 + 76; goto L_08888870; }
    goto L_088885A4;
L_088885A4:;
    v0 = 1;
    ST32(s3+76, v0);
    a1 = s3 + 60;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088885B8;
L_088885B8:;
    a0 = s5 + 0;
    a1 = sp + 256;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088885C4;
L_088885C4:;
    v1 = LD32(sp+256);
    ST32(s3+64, v1);
    goto L_088885CC;
L_088885CC:;
    a0 = s5 + 0;
    goto L_088885D0;
L_088885D0:;
    a1 = sp + 264;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088885D8;
L_088885D8:;
    v0 = LD32(sp+264);
    v1 = s6 - 2;
    v1 = v1 < 0x7u;
    cnd_ = v1 != 0;
    ST32(s3+96, v0);
    if (cnd_) { goto L_08888850; }
    goto L_088885EC;
L_088885EC:;
    v0 = s6 < 0x3u;
    goto L_088885F0;
L_088885F0:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = sp + 276; goto L_08888834; }
    goto L_088885F8;
L_088885F8:;
    v0 = s6 < 0x4u;
    goto L_088885FC;
L_088885FC:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = sp + 284; goto L_08888818; }
    goto L_08888604;
L_08888604:;
    v0 = s6 < 0x5u;
    goto L_08888608;
L_08888608:;
    cnd_ = v0 != 0;
    v0 = s6 < 0x6u;
    if (cnd_) { goto L_0888862C; }
    goto L_08888610;
L_08888610:;
    v0 = s6 < 0xau;
    cnd_ = v0 != 0;
    s0 = 1;
    if (cnd_) { goto L_08888748; }
    goto L_0888861C;
L_0888861C:;
    a0 = s3 + 100;
    a1 = s5 + 0;
    { rv_t r_ = func_0887EA90(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888628;
L_08888628:;
    v0 = s6 < 0x6u;
    goto L_0888862C;
L_0888862C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = sp + 292; goto L_088886C4; }
    goto L_08888634;
L_08888634:;
    v0 = s6 < 0x8u;
    goto L_08888638;
L_08888638:;
    cnd_ = v0 != 0;
    a1 = sp + 296;
    if (cnd_) { goto L_088884AC; }
    goto L_08888640;
L_08888640:;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888648;
L_08888648:;
    a1 = LD32(sp+296);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088884AC; }
    goto L_08888654;
L_08888654:;
    a0 = s3 + 0;
    { rv_t r_ = func_08888F50(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888865C;
L_0888865C:;
    v1 = LD32(sp+296);
    cnd_ = v1 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08888670; }
    goto L_08888668;
L_08888668:;
    ST32(s3+136, v1);
    goto L_088884AC;
L_08888670:;
    s1 = LD32(s3+132);
    goto L_08888674;
L_08888674:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888867C;
L_0888867C:;
    s0 = s4 << 2;
    a0 = v0 + 0;
    s2 = v0 + 0;
    s1 = s0 + s1;
    func_0887D0A0(a0);
    goto L_08888690;
L_08888690:;
    v0 = LD32(s3+132);
    ST32(s1, s2);
    a1 = s5 + 0;
    s0 = s0 + v0;
    a0 = LD32(s0);
    s4 = s4 + 1;
    f0 = func_0887D79C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088886AC;
L_088886AC:;
    v1 = LD32(sp+296);
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(s3+132); goto L_08888674; }
    goto L_088886BC;
L_088886BC:;
    ST32(s3+136, v1);
    goto L_088884AC;
L_088886C4:;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088886CC;
L_088886CC:;
    a1 = LD32(sp+292);
    cnd_ = a1 == 0;
    v0 = s6 < 0x8u;
    if (cnd_) { goto L_08888638; }
    goto L_088886D8;
L_088886D8:;
    a0 = s3 + 0;
    f0 = func_08888EE4(a0, a1, 0, 0, 0);
    goto L_088886E0;
L_088886E0:;
    v1 = LD32(sp+292);
    cnd_ = v1 != 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088886F4; }
    goto L_088886EC;
L_088886EC:;
    ST32(s3+124, v1);
    goto L_08888634;
L_088886F4:;
    s1 = LD32(s3+120);
    goto L_088886F8;
L_088886F8:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888700;
L_08888700:;
    s0 = s4 << 2;
    a0 = v0 + 0;
    s2 = v0 + 0;
    s1 = s0 + s1;
    func_08885E40(a0);
    goto L_08888714;
L_08888714:;
    v0 = LD32(s3+120);
    ST32(s1, s2);
    a1 = s5 + 0;
    s0 = s0 + v0;
    a0 = LD32(s0);
    s4 = s4 + 1;
    f0 = func_08886218(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08888730;
L_08888730:;
    v1 = LD32(sp+292);
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(s3+120); goto L_088886F8; }
    goto L_08888740;
L_08888740:;
    ST32(s3+124, v1);
    goto L_08888634;
L_08888748:;
    ST32(s3+100, s0);
    a0 = 32;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888754;
L_08888754:;
    s1 = v0 + 4;
    ST32(s1-4, s0);
    a0 = s1 + 0;
    func_0887E438(a0);
    goto L_08888764;
L_08888764:;
    ST32(s3+104, s1);
    a0 = s1 + 0;
    a1 = s5 + 0;
    { rv_t r_ = func_0887E588(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888774;
L_08888774:;
    a0 = LD32(s3+104);
    v0 = func_0887E378(a0);
    goto L_0888877C;
L_0888877C:;
    cnd_ = v0 == 0;
    v0 = s6 < 0x6u;
    if (cnd_) { goto L_0888862C; }
    goto L_08888784;
L_08888784:;
    a0 = LD32(s3+104);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s3+104, 0); goto L_08888810; }
    goto L_08888790;
L_08888790:;
    v1 = LD32(a0-4);
    v0 = v1 << 3;
    v0 = v0 - v1;
    v0 = v0 << 2;
    s1 = a0 + v0;
    goto L_088887A4;
L_088887A4:;
    cnd_ = a0 == s1;
    s0 = s1 - 28;
    if (cnd_) { goto L_08888804; }
    goto L_088887AC;
L_088887AC:;
    v0 = LD32(s0+12);
    s2 = s0 + 12;
    s1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088887F4; }
    goto L_088887C0;
L_088887C0:;
    v0 = LD32(s0);
    ST32(s2+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s2+8, 0);
    if (cnd_) { goto L_088887E4; }
    goto L_088887D4;
L_088887D4:;
    a0 = LD32(s3+104);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_088887A4;
L_088887E4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088887EC;
L_088887EC:;
    ST32(s0, 0);
    goto L_088887D4;
L_088887F4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088887FC;
L_088887FC:;
    ST32(s0+12, 0);
    goto L_088887C0;
L_08888804:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888880C;
L_0888880C:;
    ST32(s3+104, 0);
    goto L_08888810;
L_08888810:;
    ST32(s3+100, 0);
    goto L_08888628;
L_08888818:;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888820;
L_08888820:;
    a0 = s5 + 0;
    a1 = sp + 288;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888882C;
L_0888882C:;
    v0 = s6 < 0x5u;
    goto L_08888608;
L_08888834:;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888883C;
L_0888883C:;
    a0 = s5 + 0;
    a1 = sp + 280;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888848;
L_08888848:;
    v0 = s6 < 0x4u;
    goto L_088885FC;
L_08888850:;
    a1 = sp + 268;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888885C;
L_0888885C:;
    a0 = s5 + 0;
    a1 = sp + 272;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888868;
L_08888868:;
    v0 = s6 < 0x3u;
    goto L_088885F0;
L_08888870:;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888878;
L_08888878:;
    s4 = 0 + 0;
    v1 = s3 + 0;
    goto L_08888880;
L_08888880:;
    s4 = s4 + 1;
    v0 = s4 < 0x2u;
    ST32(v1+60, 0);
    ST32(v1+64, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 8;
    if (cnd_) { goto L_08888880; }
    goto L_08888898;
L_08888898:;
    v0 = LD32(s3+76);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_088885CC; }
    goto L_088888A4;
L_088888A4:;
    s0 = s3 + 0;
    goto L_088888A8;
L_088888A8:;
    a1 = sp + 260;
    a0 = s5 + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088888B4;
L_088888B4:;
    a0 = s5 + 0;
    a1 = sp + 256;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088888C0;
L_088888C0:;
    v1 = s4 < 0x2u;
    cnd_ = v1 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_088888DC; }
    goto L_088888CC;
L_088888CC:;
    v0 = LD32(sp+260);
    ST32(s0+60, v0);
    v1 = LD32(sp+256);
    ST32(s0+64, v1);
    goto L_088888DC;
L_088888DC:;
    v0 = LD32(s3+76);
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    s0 = s0 + 8;
    if (cnd_) { goto L_088888A8; }
    goto L_088888EC;
L_088888EC:;
    a0 = s5 + 0;
    goto L_088885D0;
}

/* 088888F4 */
u32 func_088888F4(u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088888F4:;
    sp = sp - 32;
    a0 = a1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888908;
L_08888908:;
    v0 = LD32(sp);
    sp = sp + 32;
    return v0;
}

/* 08888918 */
u32 func_08888918(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08888918:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s2 = a2 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888944;
L_08888944:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888950;
L_08888950:;
    a2 = LD32(s2);
    a1 = LD32(sp);
    a0 = s1 + 0;
    v0 = func_08888990(a1, a2);
    goto L_08888960;
L_08888960:;
    cnd_ = v0 != 0;
    v0 = LD32(sp);
    if (cnd_) { goto L_08888978; }
    goto L_08888968;
L_08888968:;
    v0 = (u32)-1;
    ST32(s2, 0);
    ST32(sp, v0);
    v0 = LD32(sp);
    goto L_08888978;
L_08888978:;
    sp = sp + 32;
    return v0;
}

/* 08888990 */
u32 func_08888990(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
L_08888990:;
    v0 = 2003;
    cnd_ = a2 == v0;
    a0 = 1;
    if (cnd_) { goto L_08888AAC; }
    goto L_0888899C;
L_0888899C:;
    v0 = a2 < 0x7d4u;
    cnd_ = v0 == 0;
    v0 = 2008;
    if (cnd_) { goto L_08888A28; }
    goto L_088889A8;
L_088889A8:;
    v0 = 1003;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088889E8; }
    goto L_088889B4;
L_088889B4:;
    v0 = a2 < 0x3ecu;
    cnd_ = v0 == 0;
    v0 = 1005;
    if (cnd_) { goto L_088889F4; }
    goto L_088889C0;
L_088889C0:;
    v0 = 1001;
    cnd_ = a2 == v0;
    v0 = v1 < a1;
    if (cnd_) { goto L_088889EC; }
    goto L_088889CC;
L_088889CC:;
    v0 = a2 < 0x3eau;
    cnd_ = v0 == 0;
    v1 = 7;
    if (cnd_) { goto L_088889E8; }
    goto L_088889D8;
L_088889D8:;
    cnd_ = a2 == a0;
    if (cnd_) { v1 = 5; goto L_088889E8; }
    goto L_088889E0;
L_088889E0:;
    v0 = a0 + 0;
    return v0;
L_088889E8:;
    v0 = v1 < a1;
    goto L_088889EC;
L_088889EC:;
    if (v0 != 0) a0 = 0;
    goto L_088889E0;
L_088889F4:;
    cnd_ = a2 == v0;
    v1 = 1;
    if (cnd_) { goto L_088889E8; }
    goto L_088889FC;
L_088889FC:;
    v0 = a2 < 0x3edu;
    cnd_ = v0 != 0;
    v1 = 3;
    if (cnd_) { goto L_088889E8; }
    goto L_08888A08;
L_08888A08:;
    v0 = 2001;
    cnd_ = a2 == v0;
    v0 = v1 < a1;
    if (cnd_) { goto L_088889EC; }
    goto L_08888A14;
L_08888A14:;
    v0 = 2002;
    goto L_08888A18;
L_08888A18:;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_088889E0; }
    goto L_08888A20;
L_08888A20:;
    v1 = 1;
    goto L_088889E8;
L_08888A28:;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088889E8; }
    goto L_08888A30;
L_08888A30:;
    v0 = a2 < 0x7d9u;
    cnd_ = v0 == 0;
    v0 = 10001;
    if (cnd_) { goto L_08888A74; }
    goto L_08888A3C;
L_08888A3C:;
    v0 = 2005;
    cnd_ = a2 == v0;
    v1 = 6;
    if (cnd_) { goto L_088889E8; }
    goto L_08888A48;
L_08888A48:;
    v0 = a2 < 0x7d5u;
    cnd_ = v0 != 0;
    v1 = 4;
    if (cnd_) { goto L_088889E8; }
    goto L_08888A54;
L_08888A54:;
    v0 = 2006;
    cnd_ = a2 == v0;
    if (cnd_) { v1 = 0 + 0; goto L_088889E8; }
    goto L_08888A60;
L_08888A60:;
    v0 = 2007;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_088889E0; }
    goto L_08888A6C;
L_08888A6C:;
    v1 = 0 + 0;
    goto L_088889E8;
L_08888A74:;
    cnd_ = a2 == v0;
    v1 = 11;
    if (cnd_) { goto L_088889E8; }
    goto L_08888A7C;
L_08888A7C:;
    v0 = a2 < 0x2712u;
    cnd_ = v0 == 0;
    v0 = 10002;
    if (cnd_) { goto L_08888A9C; }
    goto L_08888A88;
L_08888A88:;
    v0 = 2009;
    cnd_ = a2 != v0;
    if (cnd_) { goto L_088889E0; }
    goto L_08888A94;
L_08888A94:;
    v1 = 3;
    goto L_088889E8;
L_08888A9C:;
    cnd_ = a2 == v0;
    if (cnd_) { v1 = 0 + 0; goto L_088889E8; }
    goto L_08888AA4;
L_08888AA4:;
    v0 = 10003;
    goto L_08888A18;
L_08888AAC:;
    v1 = 2;
    goto L_088889E8;
}

/* 08888AB4 */
rv_t func_08888AB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08888AB4:;
    sp = sp - 48;
    s3 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s3 + 0;
    s2 = a2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888AE4;
L_08888AE4:;
    a0 = s1 + 0;
    a1 = LD32(sp);
    s0 = 0 + 0;
    { rv_t r_ = func_08888DC8(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888AF4;
L_08888AF4:;
    v0 = LD32(sp);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08888B1C; }
    goto L_08888B00;
L_08888B00:;
    v0 = 1;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08888B1C:;
    a0 = s1 + 0;
    goto L_08888B20;
L_08888B20:;
    a1 = s3 + 0;
    a2 = s2 + 0;
    { rv_t r_ = func_08888B48(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888B2C;
L_08888B2C:;
    v0 = LD32(sp);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08888B20; }
    goto L_08888B40;
L_08888B40:;
    goto L_08888B00;
}

/* 08888B48 */
rv_t func_08888B48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_08888B48:;
    sp = sp - 96;
    s3 = a2 + 0;
    a2 = sp + 48;
    s2 = a1 + 0;
    ST32(sp+48, 0);
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    v0 = func_08888918(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08888B80;
L_08888B80:;
    s1 = v0 + 0;
    v1 = LD32(sp+48);
    v0 = 2003;
    cnd_ = v1 == v0;
    v0 = v1 < 0x7d4u;
    if (cnd_) { goto L_08888DB8; }
    goto L_08888B94;
L_08888B94:;
    cnd_ = v0 == 0;
    v0 = 2008;
    if (cnd_) { goto L_08888CC8; }
    goto L_08888B9C;
L_08888B9C:;
    v0 = 1003;
    cnd_ = v1 == v0;
    v0 = v1 < 0x3ecu;
    if (cnd_) { goto L_08888CB8; }
    goto L_08888BA8;
L_08888BA8:;
    cnd_ = v0 == 0;
    v0 = 1005;
    if (cnd_) { goto L_08888C58; }
    goto L_08888BB0;
L_08888BB0:;
    v0 = 1001;
    cnd_ = v1 == v0;
    v0 = v1 < 0x3eau;
    if (cnd_) { goto L_08888C48; }
    goto L_08888BBC;
L_08888BBC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08888C38; }
    goto L_08888BC4;
L_08888BC4:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08888C08; }
    goto L_08888BCC;
L_08888BCC:;
    a0 = LD32(sp);
    goto L_08888BD0;
L_08888BD0:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08888BF8; }
    goto L_08888BD8;
L_08888BD8:;
    v0 = 1;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_08888BF8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08888C00;
L_08888C00:;
    ST32(sp, 0);
    goto L_08888BD8;
L_08888C08:;
    v0 = func_0887C840(0, 0, 0);
    goto L_08888C10;
L_08888C10:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888C14:;
    cnd_ = a0 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_08888BCC; }
    goto L_08888C1C;
L_08888C1C:;
    v0 = LD32(a0);
    a2 = s3 + 0;
    v1 = LD32(v0+84);
    t_ = v1;
    a3 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888C30;
L_08888C30:;
    a0 = LD32(sp);
    goto L_08888BD0;
L_08888C38:;
    { rv_t r_ = func_0887C874(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888C40;
L_08888C40:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888C48:;
    { rv_t r_ = func_0887C8DC(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888C50;
L_08888C50:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888C58:;
    cnd_ = v1 == v0;
    v0 = v1 < 0x3edu;
    if (cnd_) { goto L_08888CA8; }
    goto L_08888C60;
L_08888C60:;
    cnd_ = v0 != 0;
    v0 = 2001;
    if (cnd_) { goto L_08888C98; }
    goto L_08888C68;
L_08888C68:;
    cnd_ = v1 == v0;
    v0 = 2002;
    if (cnd_) { goto L_08888C88; }
    goto L_08888C70;
L_08888C70:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = LD32(sp); goto L_08888BD0; }
    goto L_08888C78;
L_08888C78:;
    { rv_t r_ = func_0887C9AC(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888C80;
L_08888C80:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888C88:;
    v0 = func_0887C978(0, 0, 0);
    goto L_08888C90;
L_08888C90:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888C98:;
    { rv_t r_ = func_0887C944(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888CA0;
L_08888CA0:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888CA8:;
    { rv_t r_ = func_0887C8A8(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888CB0;
L_08888CB0:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888CB8:;
    { rv_t r_ = func_0887C910(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888CC0;
L_08888CC0:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888CC8:;
    cnd_ = v1 == v0;
    v0 = v1 < 0x7d9u;
    if (cnd_) { goto L_08888DA8; }
    goto L_08888CD0;
L_08888CD0:;
    cnd_ = v0 == 0;
    v0 = 2010;
    if (cnd_) { goto L_08888D3C; }
    goto L_08888CD8;
L_08888CD8:;
    v0 = 2005;
    cnd_ = v1 == v0;
    v0 = v1 < 0x7d5u;
    if (cnd_) { goto L_08888D2C; }
    goto L_08888CE4;
L_08888CE4:;
    cnd_ = v0 != 0;
    v0 = 2006;
    if (cnd_) { goto L_08888D1C; }
    goto L_08888CEC;
L_08888CEC:;
    cnd_ = v1 == v0;
    v0 = 2007;
    if (cnd_) { goto L_08888D0C; }
    goto L_08888CF4;
L_08888CF4:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = LD32(sp); goto L_08888BD0; }
    goto L_08888CFC;
L_08888CFC:;
    { rv_t r_ = func_0887C9E0(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888D04;
L_08888D04:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888D0C:;
    { rv_t r_ = func_0887CA14(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888D14;
L_08888D14:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888D1C:;
    { rv_t r_ = func_0887CB18(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888D24;
L_08888D24:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888D2C:;
    { rv_t r_ = func_0887CA48(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888D34;
L_08888D34:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888D3C:;
    cnd_ = v1 == v0;
    v0 = v1 < 0x7dau;
    if (cnd_) { goto L_08888D98; }
    goto L_08888D44;
L_08888D44:;
    cnd_ = v0 != 0;
    v0 = 2011;
    if (cnd_) { goto L_08888D88; }
    goto L_08888D4C;
L_08888D4C:;
    cnd_ = v1 == v0;
    v0 = 2012;
    if (cnd_) { goto L_08888D6C; }
    goto L_08888D54;
L_08888D54:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = LD32(sp); goto L_08888BD0; }
    goto L_08888D5C;
L_08888D5C:;
    { u64 r_ = func_0887CB80(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08888D64;
L_08888D64:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888D6C:;
    a0 = 180;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888D74;
L_08888D74:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_0888E148(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888D80;
L_08888D80:;
    a0 = s0 + 0;
    goto L_08888C14;
L_08888D88:;
    { rv_t r_ = func_0887CA7C(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888D90;
L_08888D90:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888D98:;
    { u64 r_ = func_0887CB4C(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08888DA0;
L_08888DA0:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888DA8:;
    { u64 r_ = func_0887CAB0(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08888DB0;
L_08888DB0:;
    a0 = v0 + 0;
    goto L_08888C14;
L_08888DB8:;
    { rv_t r_ = func_0887CAE4(0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888DC0;
L_08888DC0:;
    a0 = v0 + 0;
    goto L_08888C14;
}

/* 08888DC8 */
rv_t func_08888DC8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888DC8:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08888DE8; }
    goto L_08888DDC;
L_08888DDC:;
    v0 = LD32(a0+48);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0+56, a1); goto L_08888DF8; }
    goto L_08888DE8;
L_08888DE8:;
    goto L_08888DEC;
L_08888DEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08888DF8:;
    a0 = a1 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888E00;
L_08888E00:;
    a1 = LD32(s0+56);
    ST32(s0+48, v0);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s0+52, 0);
    if (cnd_) { goto L_08888DE8; }
    goto L_08888E14;
L_08888E14:;
    v1 = v0 + 0;
    goto L_08888E18;
L_08888E18:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08888E18; }
    goto L_08888E2C;
L_08888E2C:;
    goto L_08888DEC;
}

/* 08888E34 */
rv_t func_08888E34(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888E34:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+52);
    v0 = LD32(s0+56);
    cnd_ = a0 == v0;
    s1 = a0 + 5;
    if (cnd_) { goto L_08888E74; }
    goto L_08888E5C;
L_08888E5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08888E74:;
    a0 = s1 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888E7C;
L_08888E7C:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08888E5C; }
    goto L_08888E84;
L_08888E84:;
    cnd_ = s1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08888EA4; }
    goto L_08888E8C;
L_08888E8C:;
    v1 = v0 + 0;
    goto L_08888E90;
L_08888E90:;
    a0 = a0 + 1;
    v0 = a0 < s1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08888E90; }
    goto L_08888EA4;
L_08888EA4:;
    a1 = LD32(s0+48);
    cnd_ = a1 != 0;
    if (cnd_) { a2 = LD32(s0+56); goto L_08888EBC; }
    goto L_08888EB0;
L_08888EB0:;
    ST32(s0+48, s2);
    goto L_08888EB4;
L_08888EB4:;
    ST32(s0+56, s1);
    goto L_08888E5C;
L_08888EBC:;
    a0 = s2 + 0;
    a2 = a2 << 2;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08888EC8;
L_08888EC8:;
    a0 = LD32(s0+48);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+48, s2); goto L_08888EB4; }
    goto L_08888ED4;
L_08888ED4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08888EDC;
L_08888EDC:;
    ST32(s0+48, s2);
    goto L_08888EB4;
}

/* 08888EE4 */
float func_08888EE4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888EE4:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08888F04; }
    goto L_08888EF8;
L_08888EF8:;
    v0 = LD32(a0+120);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0+128, a1); goto L_08888F14; }
    goto L_08888F04;
L_08888F04:;
    goto L_08888F08;
L_08888F08:;
    sp = sp + 16;
    return f0;
L_08888F14:;
    a0 = a1 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888F1C;
L_08888F1C:;
    a1 = LD32(s0+128);
    ST32(s0+120, v0);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s0+124, 0);
    if (cnd_) { goto L_08888F04; }
    goto L_08888F30;
L_08888F30:;
    v1 = v0 + 0;
    goto L_08888F34;
L_08888F34:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08888F34; }
    goto L_08888F48;
L_08888F48:;
    goto L_08888F08;
}

/* 08888F50 */
rv_t func_08888F50(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888F50:;
    sp = sp - 16;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08888F70; }
    goto L_08888F64;
L_08888F64:;
    v0 = LD32(a0+132);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0+140, a1); goto L_08888F80; }
    goto L_08888F70;
L_08888F70:;
    goto L_08888F74;
L_08888F74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08888F80:;
    a0 = a1 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08888F88;
L_08888F88:;
    a1 = LD32(s0+140);
    ST32(s0+132, v0);
    a0 = 0 + 0;
    cnd_ = a1 == 0;
    ST32(s0+136, 0);
    if (cnd_) { goto L_08888F70; }
    goto L_08888F9C;
L_08888F9C:;
    v1 = v0 + 0;
    goto L_08888FA0;
L_08888FA0:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_08888FA0; }
    goto L_08888FB4;
L_08888FB4:;
    goto L_08888F74;
}

/* 08888FBC */
u32 func_08888FBC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888FBC:;
    sp = sp - 16;
    v0 = func_08887500(a0, a1);
    goto L_08888FCC;
L_08888FCC:;
    sp = sp + 16;
    return v0;
}

/* 08888FD8 */
u32 func_08888FD8(u32 a0)
{
    u32 v0 = 0;
L_08888FD8:;
    v0 = LD32(a0+4);
    return v0;
}

/* 08888FE0 */
u32 func_08888FE0(u32 a0)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08888FE0:;
    sp = sp - 16;
    v0 = func_08888FD8(a0);
    goto L_08888FF0;
L_08888FF0:;
    v0 = v0 - 2000;
    v0 = v0 < 0x7d0u;
    sp = sp + 16;
    return v0;
}

/* 08889004 */
rv_t func_08889004(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08889004:;
    v0 = LD32(a0+96);
    return (rv_t){ v0, v1, f0 };
}

/* 0888900C */
rv_t func_0888900C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888900C:;
    ST32(a0+96, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08889014 */
u32 func_08889014(u32 a0)
{
    u32 v0 = 0;
L_08889014:;
    v0 = LD32(a0+124);
    return v0;
}

/* 0888901C */
u32 func_0888901C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0888901C:;
    v0 = LD32(a0+128);
    v1 = a1 << 2;
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0888903C; }
    goto L_08889030;
L_08889030:;
    v0 = LD32(a0+120);
    v0 = v1 + v0;
    v0 = LD32(v0);
    goto L_0888903C;
L_0888903C:;
    return v0;
}

/* 08889044 */
void func_08889044(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08889044:;
    sp = sp - 32;
    s6 = a1 + 0;
    s4 = a0 + 0;
    a0 = a1 + 0;
    s3 = 0 + 0;
    v0 = func_08889014(a0);
    goto L_0888907C;
L_0888907C:;
    s5 = v0 + 0;
    a0 = s4 + 0;
    a1 = v0 + 0;
    f0 = func_08888EE4(a0, a1, 0, 0, 0);
    goto L_0888908C;
L_0888908C:;
    cnd_ = s5 != 0;
    if (cnd_) { s0 = LD32(s4+120); goto L_088890C0; }
    goto L_08889094;
L_08889094:;
    ST32(s4+124, s5);
    goto L_08889098;
L_08889098:;
    sp = sp + 32;
    return;
L_088890C0:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088890C8;
L_088890C8:;
    s2 = s3 << 2;
    s1 = v0 + 0;
    a0 = v0 + 0;
    s0 = s2 + s0;
    func_08885E40(a0);
    goto L_088890DC;
L_088890DC:;
    ST32(s0, s1);
    a1 = s3 + 0;
    a0 = s6 + 0;
    v0 = func_0888901C(a0, a1);
    goto L_088890EC;
L_088890EC:;
    v1 = LD32(s4+120);
    a1 = v0 + 0;
    s3 = s3 + 1;
    s2 = s2 + v1;
    a0 = LD32(s2);
    func_08885E74(a0, a1);
    goto L_08889104;
L_08889104:;
    v1 = s3 < s5;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(s4+120); goto L_088890C0; }
    goto L_08889110;
L_08889110:;
    ST32(s4+124, s5);
    goto L_08889098;
}

/* 08889118 */
u32 func_08889118(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_08889118:;
    v0 = LD32(a0+132);
    a1 = a1 << 2;
    a1 = a1 + v0;
    v0 = LD32(a1);
    return v0;
}

/* 0888912C */
rv_t func_0888912C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888912C:;
    sp = sp - 48;
    s3 = a1 + 0;
    s2 = 0 + 0;
    f20 = BITSF(0);
    v0 = LD32(a0+136);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088891E4; }
    goto L_08889160;
L_08889160:;
    v0 = LD32(s1+52);
    goto L_08889164;
L_08889164:;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08889190; }
    goto L_0888916C;
L_0888916C:;
    f0 = f20;
    goto L_08889170;
L_08889170:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08889190:;
    v1 = LD32(s1+48);
    v0 = s0 << 2;
    a1 = s3 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+148);
    t_ = v0;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088891B4;
L_088891B4:;
    f1 = f0;
    fcc = FCMP(f1, f20, 14);
    cnd_ = fcc;
    f0 = f20;
    if (cnd_) { goto L_088891CC; }
    goto L_088891C8;
L_088891C8:;
    f0 = f1;
    goto L_088891CC;
L_088891CC:;
    v0 = LD32(s1+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    f20 = f0;
    if (cnd_) { goto L_08889190; }
    goto L_088891DC;
L_088891DC:;
    f0 = f20;
    goto L_08889170;
L_088891E4:;
    v0 = LD32(s1+132);
    goto L_088891E8;
L_088891E8:;
    s0 = s2 << 2;
    s2 = s2 + 1;
    v0 = s0 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_0887D14C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088891FC;
L_088891FC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+132); goto L_0888921C; }
    goto L_08889204;
L_08889204:;
    v0 = LD32(s1+136);
    goto L_08889208;
L_08889208:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+132); goto L_088891E8; }
    goto L_08889214;
L_08889214:;
    v0 = LD32(s1+52);
    goto L_08889164;
L_0888921C:;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v0 = func_0887D11C(a0);
    goto L_08889228;
L_08889228:;
    v0 = v0 & s3;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+136); goto L_08889208; }
    goto L_08889234;
L_08889234:;
    v0 = LD32(s1+132);
    v0 = s0 + v0;
    a0 = LD32(v0);
    f0 = func_0887D188(a0);
    goto L_08889244;
L_08889244:;
    f1 = f0;
    fcc = FCMP(f1, f20, 14);
    cnd_ = fcc;
    f0 = f20;
    if (cnd_) { goto L_0888925C; }
    goto L_08889258;
L_08889258:;
    f0 = f1;
    goto L_0888925C;
L_0888925C:;
    f20 = f0;
    goto L_08889204;
}

/* 08889264 */
u64 func_08889264(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08889264:;
    sp = sp - 16;
    a1 = 0 + 0;
    v0 = LD32(a0+136);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088892AC; }
    goto L_08889284;
L_08889284:;
    a0 = LD32(a0+132);
    a2 = (u32)-1;
    goto L_0888928C;
L_0888928C:;
    v1 = LD32(a0);
    a1 = a1 + 1;
    a0 = a0 + 4;
    ST32(v1+12, a2);
    v0 = LD32(s1+136);
    v0 = a1 < v0;
    cnd_ = v0 != 0;
    ST32(v1+4, 0);
    if (cnd_) { goto L_0888928C; }
    goto L_088892AC;
L_088892AC:;
    v0 = LD32(s1+52);
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088892CC; }
    goto L_088892B8;
L_088892B8:;
    goto L_088892BC;
L_088892BC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088892CC:;
    v1 = LD32(s1+48);
    goto L_088892D0;
L_088892D0:;
    v0 = s0 << 2;
    s0 = s0 + 1;
    v0 = v0 + v1;
    a0 = LD32(v0);
    { u64 r_ = func_08889264(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088892E4;
L_088892E4:;
    v0 = LD32(s1+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+48); goto L_088892D0; }
    goto L_088892F4;
L_088892F4:;
    goto L_088892BC;
}

/* 088892FC */
void func_088892FC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088892FC:;
    sp = sp - 32;
    s6 = a1 + 0;
    s4 = a0 + 0;
    s3 = 0 + 0;
    s5 = LD32(a1+136);
    a1 = s5 + 0;
    { rv_t r_ = func_08888F50(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889338;
L_08889338:;
    cnd_ = s5 != 0;
    if (cnd_) { s0 = LD32(s4+132); goto L_0888936C; }
    goto L_08889340;
L_08889340:;
    ST32(s4+136, s5);
    goto L_08889344;
L_08889344:;
    sp = sp + 32;
    return;
L_0888936C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889374;
L_08889374:;
    s2 = s3 << 2;
    s1 = v0 + 0;
    a0 = v0 + 0;
    s0 = s2 + s0;
    func_0887D0A0(a0);
    goto L_08889388;
L_08889388:;
    ST32(s0, s1);
    a1 = s3 + 0;
    a0 = s6 + 0;
    v0 = func_08889118(a0, a1);
    goto L_08889398;
L_08889398:;
    v1 = LD32(s4+132);
    a1 = v0 + 0;
    s3 = s3 + 1;
    s2 = s2 + v1;
    a0 = LD32(s2);
    func_0887D0C0(a0, a1);
    goto L_088893B0;
L_088893B0:;
    v1 = s3 < s5;
    cnd_ = v1 != 0;
    if (cnd_) { s0 = LD32(s4+132); goto L_0888936C; }
    goto L_088893BC;
L_088893BC:;
    ST32(s4+136, s5);
    goto L_08889344;
}

/* 088893C4 */
void func_088893C4(void)
{
    u32 a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088893C4:;
    a1 = 0x330000u;
    a0 = D_08AD4F8C - (20364);
    sp = sp - 16;
    a0 = a0 + 20364;
    a1 = a1 | 0x155f;
    a2 = (u32)-1;
    a3 = 0 + 0;
    func_0888B474(a0, a2);
    goto L_088893E8;
L_088893E8:;
    func_0887D84C();
    goto L_088893F0;
L_088893F0:;
    func_0887DD74();
    goto L_088893F8;
L_088893F8:;
    func_0888B514(0, 0, 0, 0);
    goto L_08889400;
L_08889400:;
    func_08889454();
    goto L_08889408;
L_08889408:;
    func_0888B020();
    goto L_08889410;
L_08889410:;
    func_08885CD0();
    goto L_08889418;
L_08889418:;
    func_088FD4B8(0, 0, 0);
    goto L_08889420;
L_08889420:;
    a3 = 0x7fff0000u;
    a0 = D_08AD4F94 - (20372);
    a1 = D_08B29C60 - (-25504);
    a0 = a0 + 20372;
    a1 = a1 - 25504;
    a2 = 0x80000000u;
    a3 = a3 | 0xffff;
    t0 = 0 + 0;
    t1 = 0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_08889448;
L_08889448:;
    sp = sp + 16;
    return;
}

/* 08889454 */
void func_08889454(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08889454:;
    sp = sp - 16;
    func_08885CFC();
    goto L_08889464;
L_08889464:;
    func_0888A7F4();
    goto L_0888946C;
L_0888946C:;
    func_0887D854(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08889474;
L_08889474:;
    sp = sp + 16;
    return;
}

/* 08889480 */
void func_08889480(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08889480:;
    sp = sp - 16;
    func_088FD738(a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08889490;
L_08889490:;
    func_0888A7F4();
    goto L_08889498;
L_08889498:;
    func_0887D870(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088894A0;
L_088894A0:;
    func_0887DD90();
    goto L_088894A8;
L_088894A8:;
    func_08885D10(0, 0, 0);
    goto L_088894B0;
L_088894B0:;
    sp = sp + 16;
    return;
}

/* 088894BC */
void func_088894BC(void)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088894BC:;
    sp = sp - 16;
    s0 = D_08B15F9C - (24476);
    v0 = func_088FD758();
    goto L_088894D0;
L_088894D0:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088894E8; }
    goto L_088894D8;
L_088894D8:;
    v0 = LD_U8(s0+24476);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08889510; }
    goto L_088894E4;
L_088894E4:;
    v0 = 0 + 0;
    goto L_088894E8;
L_088894E8:;
    a0 = v0 + 0;
    func_088896C8(a0);
    goto L_088894F0;
L_088894F0:;
    v0 = LD_U8(s0+24476);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08889504; }
    goto L_088894FC;
L_088894FC:;
    v0 = 1;
    ST8(s0+24476, v0);
    goto L_08889504;
L_08889504:;
    sp = sp + 16;
    return;
L_08889510:;
    v0 = func_088898D0(0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08889518;
L_08889518:;
    goto L_088894E8;
}

/* 08889520 */
void func_08889520(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08889520:;
    sp = sp - 32;
    v0 = func_088FD77C();
    goto L_08889540;
L_08889540:;
    cnd_ = v0 == 0;
    v0 = D_08B29974 - (-26252);
    if (cnd_) { goto L_088895E4; }
    goto L_08889548;
L_08889548:;
    s2 = D_08B29BF8 - (-25608);
    v0 = LD32(s2-25608);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0888958C; }
    goto L_08889558;
L_08889558:;
    v0 = D_08B29978 - (-26248);
    s1 = v0 - 26248;
    s3 = 1;
    s4 = D_08B15FA0 - (24480);
    goto L_08889568;
L_08889568:;
    a0 = s0 + 0;
    { u64 r_ = func_0888AA28(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889570;
L_08889570:;
    cnd_ = v0 == s3;
    if (cnd_) { v1 = LD32(s1); goto L_08889688; }
    goto L_08889578;
L_08889578:;
    v0 = LD32(s2-25608);
    goto L_0888957C;
L_0888957C:;
    s0 = s0 + 1;
    v0 = (s32)s0 < (s32)v0;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_08889568; }
    goto L_0888958C;
L_0888958C:;
    s3 = D_08B29BFC - (-25604);
    v0 = LD32(s3-25604);
    cnd_ = v0 == 0;
    v1 = 0 < v0;
    if (cnd_) { goto L_08889620; }
    goto L_0888959C;
L_0888959C:;
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088895E0; }
    goto L_088895A4;
L_088895A4:;
    v0 = D_08B29C00 - (-25600);
    s0 = v0 - 25600;
    a0 = LD32(s0);
    goto L_088895B0;
L_088895B0:;
    a1 = (u32)-1;
    s1 = s1 + 1;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s0 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088895C8;
L_088895C8:;
    v0 = func_08901790();
    goto L_088895D0;
L_088895D0:;
    v0 = LD32(s3-25604);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_088895B0; }
    goto L_088895E0;
L_088895E0:;
    v0 = D_08B29974 - (-26252);
    goto L_088895E4;
L_088895E4:;
    v1 = LD32(v0-26252);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08889610; }
    goto L_088895F0;
L_088895F0:;
    goto L_088895F4;
L_088895F4:;
    sp = sp + 32;
    return;
L_08889610:;
    func_088FD8B4();
    goto L_08889618;
L_08889618:;
    goto L_088895F4;
L_08889620:;
    s0 = D_08B15FA0 - (24480);
    a0 = LD32(s0+24480);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = LD32(s2-25608);
    if (cnd_) { goto L_088895E0; }
    goto L_08889634;
L_08889634:;
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = D_08B29974 - (-26252);
    if (cnd_) { goto L_088895E4; }
    goto L_08889640;
L_08889640:;
    { u64 r_ = func_0888AA28(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889648;
L_08889648:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = D_08B29974 - (-26252); goto L_088895E4; }
    goto L_08889650;
L_08889650:;
    v1 = LD32(s0+24480);
    v0 = D_08B29978 - (-26248);
    v0 = v0 - 26248;
    v1 = v1 << 2;
    v1 = v1 + v0;
    a0 = LD32(v1);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = (u32)-1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889678;
L_08889678:;
    v0 = func_08901790();
    goto L_08889680;
L_08889680:;
    v0 = D_08B29974 - (-26252);
    goto L_088895E4;
L_08889688:;
    v0 = LD32(v1+236);
    v0 = (v0 >> 12) & 0x1;
    cnd_ = v0 != 0;
    v0 = LD32(s2-25608);
    if (cnd_) { goto L_0888957C; }
    goto L_08889698;
L_08889698:;
    v0 = LD32(s4+24480);
    a0 = v1 + 0;
    cnd_ = s0 == v0;
    a1 = (u32)-1;
    if (cnd_) { goto L_08889578; }
    goto L_088896A8;
L_088896A8:;
    v0 = LD32(v1);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088896B8;
L_088896B8:;
    v0 = func_08901790();
    goto L_088896C0;
L_088896C0:;
    v0 = LD32(s2-25608);
    goto L_0888957C;
}

/* 088896C8 */
void func_088896C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088896C8:;
    sp = sp - 64;
    v0 = D_08B2859C - (-31332);
    s7 = a0 + 0;
    s6 = D_08B29978 - (-26248);
    s5 = (u32)-1;
    s4 = D_08B29BF8 - (-25608);
    f20 = BITSF(LD32(v0-31332));
    goto L_0888970C;
L_0888970C:;
    v0 = func_08885D4C();
    goto L_08889714;
L_08889714:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08889794; }
    goto L_0888971C;
L_0888971C:;
    v0 = LD32(s1+8);
    cnd_ = v0 == s5;
    v0 = LD32(s4-25608);
    if (cnd_) { goto L_08889784; }
    goto L_08889728;
L_08889728:;
    cnd_ = (s32)v0 <= 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0888970C; }
    goto L_08889730;
L_08889730:;
    s3 = 1;
    s0 = s6 - 26248;
    a0 = LD32(s0);
    goto L_0888973C;
L_0888973C:;
    a1 = s1 + 0;
    s2 = s2 + 1;
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    s0 = s0 + 4;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889754;
L_08889754:;
    cnd_ = v0 == s3;
    if (cnd_) { v0 = LD32(s1+8); goto L_08889774; }
    goto L_0888975C;
L_0888975C:;
    v0 = LD32(s4-25608);
    goto L_08889760;
L_08889760:;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_0888973C; }
    goto L_0888976C;
L_0888976C:;
    goto L_0888970C;
L_08889774:;
    cnd_ = v0 == 0;
    v0 = LD32(s4-25608);
    if (cnd_) { goto L_08889760; }
    goto L_0888977C;
L_0888977C:;
    goto L_0888970C;
L_08889784:;
    a0 = s1 + 0;
    func_0888A654(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0888978C;
L_0888978C:;
    goto L_0888970C;
L_08889794:;
    v1 = LD32(s4-25608);
    v0 = D_08B15FA0 - (24480);
    s3 = LD32(v0+24480);
    s2 = 0 + 0;
    cnd_ = (s32)v1 <= 0;
    s6 = D_08B29974 - (-26252);
    if (cnd_) { goto L_08889814; }
    goto L_088897AC;
L_088897AC:;
    v0 = D_08B29978 - (-26248);
    s1 = v0 - 26248;
    s5 = 1;
    a0 = s2 + 0;
    goto L_088897BC;
L_088897BC:;
    s0 = s2 << 2;
    { u64 r_ = func_0888AA28(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088897C4;
L_088897C4:;
    cnd_ = v0 == s5;
    v1 = s0 + s1;
    if (cnd_) { goto L_088898C8; }
    goto L_088897CC;
L_088897CC:;
    v1 = LD32(v1);
    v0 = LD32(v1+236);
    v0 = (v0 >> 12) & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(s4-25608);
    if (cnd_) { goto L_08889804; }
    goto L_088897E0;
L_088897E0:;
    cnd_ = s2 == s3;
    v0 = LD32(s6-26252);
    if (cnd_) { goto L_0888989C; }
    goto L_088897E8;
L_088897E8:;
    v0 = s0 + s1;
    goto L_088897EC;
L_088897EC:;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    f12 = f20;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889800;
L_08889800:;
    v0 = LD32(s4-25608);
    goto L_08889804;
L_08889804:;
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_088897BC; }
    goto L_08889814;
L_08889814:;
    v0 = LD32(s6-26252);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08889850; }
    goto L_08889820;
L_08889820:;
    goto L_08889824;
L_08889824:;
    sp = sp + 64;
    return;
L_08889850:;
    func_088FD898(a0, 0, 0, 0, 0, 0, 0, 0);
    goto L_08889858;
L_08889858:;
    v0 = func_088FD8BC();
    goto L_08889860;
L_08889860:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08889824; }
    goto L_08889868;
L_08889868:;
    func_088FD8D0();
    goto L_08889870;
L_08889870:;
    a0 = LD32(s6-26252);
    { rv_t r_ = func_0888B288(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889878;
L_08889878:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08889890; }
    goto L_08889880;
L_08889880:;
    v1 = LD32(v0);
    v0 = LD32(v1+112);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889890;
L_08889890:;
    v0 = D_08B29974 - (-26252);
    ST32(v0-26252, 0);
    goto L_08889820;
L_0888989C:;
    v1 = s0 + s1;
    cnd_ = v0 != 0;
    a1 = s7 + 0;
    if (cnd_) { goto L_088897E8; }
    goto L_088898A8;
L_088898A8:;
    v0 = LD32(v1);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088898C0;
L_088898C0:;
    v0 = s0 + s1;
    goto L_088897EC;
L_088898C8:;
    s0 = s2 << 2;
    goto L_088897E0;
}

/* 088898D0 */
u32 func_088898D0(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088898D0:;
    a0 = D_08B29960 - (-26272);
    sp = sp - 16;
    a0 = a0 - 26272;
    { rv_t r_ = func_0889679C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088898E8;
L_088898E8:;
    a0 = 0 + 0;
    v0 = func_08889AD8(a0);
    goto L_088898F0;
L_088898F0:;
    a0 = 1;
    s0 = v0 + 0;
    v0 = func_08889AD8(a0);
    goto L_088898FC;
L_088898FC:;
    v0 = v0 << 1;
    a0 = 2;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888990C;
L_0888990C:;
    v0 = v0 << 2;
    a0 = 3;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888991C;
L_0888991C:;
    v0 = v0 << 3;
    a0 = 4;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888992C;
L_0888992C:;
    v0 = v0 << 4;
    a0 = 5;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888993C;
L_0888993C:;
    v0 = v0 << 5;
    a0 = 6;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888994C;
L_0888994C:;
    v0 = v0 << 6;
    a0 = 7;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888995C;
L_0888995C:;
    v0 = v0 << 7;
    a0 = 8;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888996C;
L_0888996C:;
    v0 = v0 << 8;
    a0 = 9;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888997C;
L_0888997C:;
    v0 = v0 << 9;
    a0 = 10;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888998C;
L_0888998C:;
    v0 = v0 << 10;
    a0 = 11;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_0888999C;
L_0888999C:;
    v0 = v0 << 11;
    a0 = 12;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_088899AC;
L_088899AC:;
    v0 = v0 << 12;
    a0 = 13;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_088899BC;
L_088899BC:;
    v0 = v0 << 13;
    a0 = 14;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_088899CC;
L_088899CC:;
    v0 = v0 << 14;
    a0 = 15;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_088899DC;
L_088899DC:;
    v0 = v0 << 15;
    a0 = 16;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_088899EC;
L_088899EC:;
    v0 = v0 << 16;
    a0 = 17;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_088899FC;
L_088899FC:;
    v0 = v0 << 17;
    a0 = 18;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A0C;
L_08889A0C:;
    v0 = v0 << 18;
    a0 = 19;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A1C;
L_08889A1C:;
    v0 = v0 << 19;
    a0 = 20;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A2C;
L_08889A2C:;
    v0 = v0 << 20;
    a0 = 21;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A3C;
L_08889A3C:;
    v0 = v0 << 21;
    a0 = 22;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A4C;
L_08889A4C:;
    v0 = v0 << 22;
    a0 = 23;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A5C;
L_08889A5C:;
    v0 = v0 << 23;
    a0 = 24;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A6C;
L_08889A6C:;
    v0 = v0 << 24;
    a0 = 25;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A7C;
L_08889A7C:;
    v0 = v0 << 25;
    a0 = 26;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A8C;
L_08889A8C:;
    v0 = v0 << 26;
    a0 = 27;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889A9C;
L_08889A9C:;
    v0 = v0 << 27;
    a0 = 28;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889AAC;
L_08889AAC:;
    v0 = v0 << 28;
    a0 = 29;
    s0 = s0 | v0;
    v0 = func_08889AD8(a0);
    goto L_08889ABC;
L_08889ABC:;
    v0 = v0 << 29;
    s0 = s0 | v0;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
}

/* 08889AD8 */
u32 func_08889AD8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08889AD8:;
    a1 = a0 + 0;
    a0 = D_08B29960 - (-26272);
    sp = sp - 16;
    a0 = a0 - 26272;
    { rv_t r_ = func_088968BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889AF0;
L_08889AF0:;
    f1 = BITSF(0);
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08889B08; }
    goto L_08889B04;
L_08889B04:;
    v0 = 0 + 0;
    goto L_08889B08;
L_08889B08:;
    sp = sp + 16;
    return v0;
}

/* 08889B14 */
void func_08889B14(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08889B14:;
    sp = sp - 272;
    s1 = D_08B29C54 - (-25516);
    a1 = D_08AD4FC0 - (20416);
    t0 = LD32(s1-25516);
    a0 = sp + 0;
    a1 = a1 + 20416;
    a2 = 255;
    a3 = 1;
    s0 = D_08B29C14 - (-25580);
    s0 = s0 - 25580;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889B4C;
L_08889B4C:;
    a1 = D_08AD4FD0 - (20432);
    a0 = s0 + 0;
    a1 = a1 + 20432;
    a2 = 64;
    a3 = 1;
    t0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889B68;
L_08889B68:;
    v1 = LD32(s1-25516);
    ST8(s0+63, 0);
    v1 = v1 + 1;
    ST32(s1-25516, v1);
    sp = sp + 272;
    return;
}

/* 08889B8C */
void func_08889B8C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08889B8C:;
    sp = sp - 288;
    v0 = 2006;
    s0 = a0 + 0;
    a0 = 0 + 0;
    ST32(sp+256, 0);
    ST32(sp+260, 0);
    cnd_ = s0 == v0;
    ST32(sp+264, 0);
    if (cnd_) { goto L_08889EA0; }
    goto L_08889BB8;
L_08889BB8:;
    v0 = s0 < 0x7d7u;
    cnd_ = v0 == 0;
    v0 = 2009;
    if (cnd_) { goto L_08889E1C; }
    goto L_08889BC4;
L_08889BC4:;
    v0 = 2002;
    cnd_ = s0 == v0;
    v0 = s0 < 0x7d3u;
    if (cnd_) { goto L_08889E10; }
    goto L_08889BD0;
L_08889BD0:;
    cnd_ = v0 == 0;
    v0 = 2004;
    if (cnd_) { goto L_08889DDC; }
    goto L_08889BD8;
L_08889BD8:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(sp+256); goto L_08889BF0; }
    goto L_08889BE0;
L_08889BE0:;
    v0 = 2001;
    cnd_ = s0 == v0;
    v0 = D_08AD4FD4 - (20436);
    if (cnd_) { goto L_08889D9C; }
    goto L_08889BEC;
L_08889BEC:;
    a0 = LD32(sp+256);
    goto L_08889BF0;
L_08889BF0:;
    v0 = D_08AD4FDC - (20444);
    s1 = v0 + 20444;
    goto L_08889BF8;
L_08889BF8:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+264, 0); goto L_08889C20; }
    goto L_08889C00;
L_08889C00:;
    cnd_ = a0 == s1;
    v0 = s0 - 3000;
    if (cnd_) { goto L_08889C64; }
    goto L_08889C08;
L_08889C08:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+264, 0); goto L_08889C20; }
    goto L_08889C10;
L_08889C10:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889C18;
L_08889C18:;
    ST32(sp+256, 0);
    ST32(sp+264, 0);
    goto L_08889C20;
L_08889C20:;
    a0 = 0 + 0;
    cnd_ = s1 == 0;
    ST32(sp+260, 0);
    if (cnd_) { goto L_08889D94; }
    goto L_08889C2C;
L_08889C2C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889C34;
L_08889C34:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+260, v0);
    ST32(sp+264, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889C48;
L_08889C48:;
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(sp+256, v0);
    if (cnd_) { goto L_08889D84; }
    goto L_08889C54;
L_08889C54:;
    a0 = 0 + 0;
    goto L_08889C58;
L_08889C58:;
    ST32(sp+264, 0);
    ST32(sp+260, 0);
    goto L_08889C60;
L_08889C60:;
    v0 = s0 - 3000;
    goto L_08889C64;
L_08889C64:;
    v0 = v0 < 0x3e9u;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = D_08B29C58 - (-25512); goto L_08889CCC; }
    goto L_08889C70;
L_08889C70:;
    v0 = D_08AD4FE4 - (20452);
    cnd_ = a0 == 0;
    s0 = v0 + 20452;
    if (cnd_) { goto L_08889C8C; }
    goto L_08889C7C;
L_08889C7C:;
    cnd_ = a0 == s0;
    if (cnd_) { s1 = D_08B29C58 - (-25512); goto L_08889CCC; }
    goto L_08889C84;
L_08889C84:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08889D74; }
    goto L_08889C8C;
L_08889C8C:;
    ST32(sp+264, 0);
    cnd_ = s0 == 0;
    ST32(sp+260, 0);
    if (cnd_) { goto L_08889D68; }
    goto L_08889C98;
L_08889C98:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889CA0;
L_08889CA0:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+260, v0);
    ST32(sp+264, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889CB4;
L_08889CB4:;
    cnd_ = v0 != 0;
    ST32(sp+256, v0);
    if (cnd_) { goto L_08889D54; }
    goto L_08889CBC;
L_08889CBC:;
    ST32(sp+264, 0);
    ST32(sp+260, 0);
    a0 = LD32(sp+256);
    goto L_08889CC8;
L_08889CC8:;
    s1 = D_08B29C58 - (-25512);
    goto L_08889CCC;
L_08889CCC:;
    t1 = LD32(s1-25512);
    a1 = D_08AD4FEC - (20460);
    t0 = a0 + 0;
    a1 = a1 + 20460;
    a0 = sp + 0;
    a2 = 255;
    a3 = 1;
    s0 = D_08B29C14 - (-25580);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889CF0;
L_08889CF0:;
    s0 = s0 - 25580;
    a1 = D_08AD4FD0 - (20432);
    a0 = s0 + 0;
    a1 = a1 + 20432;
    a2 = 64;
    a3 = 1;
    t0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889D10;
L_08889D10:;
    v1 = LD32(s1-25512);
    a0 = LD32(sp+256);
    ST8(s0+63, 0);
    v1 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s1-25512, v1);
    if (cnd_) { goto L_08889D44; }
    goto L_08889D28;
L_08889D28:;
    ST32(sp+260, 0);
    ST32(sp+264, 0);
    sp = sp + 288;
    return;
L_08889D44:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889D4C;
L_08889D4C:;
    ST32(sp+256, 0);
    goto L_08889D28;
L_08889D54:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889D60;
L_08889D60:;
    a0 = LD32(sp+256);
    goto L_08889CC8;
L_08889D68:;
    a0 = 0 + 0;
    ST32(sp+256, 0);
    goto L_08889CC8;
L_08889D74:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889D7C;
L_08889D7C:;
    ST32(sp+256, 0);
    goto L_08889C8C;
L_08889D84:;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889D8C;
L_08889D8C:;
    a0 = LD32(sp+256);
    goto L_08889C60;
L_08889D94:;
    ST32(sp+256, 0);
    goto L_08889C60;
L_08889D9C:;
    s1 = v0 + 20436;
    goto L_08889DA0;
L_08889DA0:;
    ST32(sp+264, 0);
    cnd_ = s1 == 0;
    ST32(sp+260, 0);
    if (cnd_) { goto L_08889D94; }
    goto L_08889DAC;
L_08889DAC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889DB4;
L_08889DB4:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+260, v0);
    ST32(sp+264, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889DC8;
L_08889DC8:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    ST32(sp+256, v0);
    if (cnd_) { goto L_08889C58; }
    goto L_08889DD4;
L_08889DD4:;
    goto L_08889D84;
L_08889DDC:;
    cnd_ = s0 == v0;
    v0 = s0 < 0x7d5u;
    if (cnd_) { goto L_08889E04; }
    goto L_08889DE4;
L_08889DE4:;
    cnd_ = v0 == 0;
    v0 = D_08AD4FFC - (20476);
    if (cnd_) { goto L_08889DFC; }
    goto L_08889DEC;
L_08889DEC:;
    a0 = LD32(sp+256);
    v0 = D_08AD5008 - (20488);
    s1 = v0 + 20488;
    goto L_08889BF8;
L_08889DFC:;
    s1 = v0 + 20476;
    goto L_08889DA0;
L_08889E04:;
    v0 = D_08AD5010 - (20496);
    s1 = v0 + 20496;
    goto L_08889DA0;
L_08889E10:;
    v0 = D_08AD5018 - (20504);
    s1 = v0 + 20504;
    goto L_08889DA0;
L_08889E1C:;
    cnd_ = s0 == v0;
    v0 = s0 < 0x7dau;
    if (cnd_) { goto L_08889E94; }
    goto L_08889E24;
L_08889E24:;
    cnd_ = v0 == 0;
    v0 = 2011;
    if (cnd_) { goto L_08889E58; }
    goto L_08889E2C;
L_08889E2C:;
    v0 = 2007;
    cnd_ = s0 == v0;
    v0 = 2008;
    if (cnd_) { goto L_08889E4C; }
    goto L_08889E38;
L_08889E38:;
    cnd_ = s0 != v0;
    if (cnd_) { a0 = LD32(sp+256); goto L_08889BF0; }
    goto L_08889E40;
L_08889E40:;
    v0 = D_08AD5024 - (20516);
    s1 = v0 + 20516;
    goto L_08889DA0;
L_08889E4C:;
    v0 = D_08AD5030 - (20528);
    s1 = v0 + 20528;
    goto L_08889DA0;
L_08889E58:;
    cnd_ = s0 == v0;
    v0 = s0 < 0x7dbu;
    if (cnd_) { goto L_08889E88; }
    goto L_08889E60;
L_08889E60:;
    cnd_ = v0 != 0;
    v0 = D_08AD503C - (20540);
    if (cnd_) { goto L_08889E80; }
    goto L_08889E68;
L_08889E68:;
    v0 = 2012;
    cnd_ = s0 != v0;
    if (cnd_) { a0 = LD32(sp+256); goto L_08889BF0; }
    goto L_08889E74;
L_08889E74:;
    v0 = D_08AD5044 - (20548);
    s1 = v0 + 20548;
    goto L_08889DA0;
L_08889E80:;
    s1 = v0 + 20540;
    goto L_08889DA0;
L_08889E88:;
    v0 = D_08AD5050 - (20560);
    s1 = v0 + 20560;
    goto L_08889DA0;
L_08889E94:;
    v0 = D_08AD5060 - (20576);
    s1 = v0 + 20576;
    goto L_08889DA0;
L_08889EA0:;
    v0 = D_08AD5068 - (20584);
    s1 = v0 + 20584;
    goto L_08889DA0;
}

/* 08889EAC */
void func_08889EAC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_08889EAC:;
    sp = sp - 288;
    v0 = 1002;
    t0 = 0 + 0;
    ST32(sp+256, 0);
    ST32(sp+260, 0);
    cnd_ = a0 == v0;
    ST32(sp+264, 0);
    if (cnd_) { goto L_0888A0D4; }
    goto L_08889ED8;
L_08889ED8:;
    v0 = a0 < 0x3ebu;
    cnd_ = v0 == 0;
    v0 = 1003;
    if (cnd_) { goto L_0888A070; }
    goto L_08889EE4;
L_08889EE4:;
    cnd_ = a0 == 0;
    if (cnd_) { t0 = LD32(sp+256); goto L_08889EFC; }
    goto L_08889EEC;
L_08889EEC:;
    v0 = 1001;
    cnd_ = a0 == v0;
    v0 = D_08AD5070 - (20592);
    if (cnd_) { goto L_0888A010; }
    goto L_08889EF8;
L_08889EF8:;
    t0 = LD32(sp+256);
    goto L_08889EFC;
L_08889EFC:;
    v0 = D_08AD4FDC - (20444);
    s0 = v0 + 20444;
    cnd_ = t0 == 0;
    s2 = sp + 256;
    if (cnd_) { goto L_08889F28; }
    goto L_08889F0C;
L_08889F0C:;
    cnd_ = t0 == s0;
    s1 = D_08B29C5C - (-25508);
    if (cnd_) { goto L_08889F6C; }
    goto L_08889F14;
L_08889F14:;
    cnd_ = t0 == 0;
    if (cnd_) { ST32(sp+264, 0); goto L_08889F2C; }
    goto L_08889F1C;
L_08889F1C:;
    a0 = t0 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889F24;
L_08889F24:;
    ST32(sp+256, 0);
    goto L_08889F28;
L_08889F28:;
    ST32(sp+264, 0);
    goto L_08889F2C;
L_08889F2C:;
    t0 = 0 + 0;
    cnd_ = s0 == 0;
    ST32(sp+260, 0);
    if (cnd_) { goto L_0888A008; }
    goto L_08889F38;
L_08889F38:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889F40;
L_08889F40:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+260, v0);
    ST32(sp+264, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889F54;
L_08889F54:;
    t0 = 0 + 0;
    cnd_ = v0 != 0;
    ST32(sp+256, v0);
    if (cnd_) { goto L_08889FF4; }
    goto L_08889F60;
L_08889F60:;
    ST32(sp+264, 0);
    goto L_08889F64;
L_08889F64:;
    ST32(sp+260, 0);
    goto L_08889F68;
L_08889F68:;
    s1 = D_08B29C5C - (-25508);
    goto L_08889F6C;
L_08889F6C:;
    t1 = LD32(s1-25508);
    a1 = D_08AD5078 - (20600);
    a1 = a1 + 20600;
    a0 = sp + 0;
    a2 = 255;
    a3 = 1;
    s0 = D_08B29C14 - (-25580);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889F8C;
L_08889F8C:;
    s0 = s0 - 25580;
    a1 = D_08AD4FD0 - (20432);
    a0 = s0 + 0;
    a1 = a1 + 20432;
    a2 = 64;
    a3 = 1;
    t0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08889FAC;
L_08889FAC:;
    v1 = LD32(s1-25508);
    a0 = LD32(sp+256);
    ST8(s0+63, 0);
    v1 = v1 + 1;
    cnd_ = a0 != 0;
    ST32(s1-25508, v1);
    if (cnd_) { goto L_08889FE4; }
    goto L_08889FC4;
L_08889FC4:;
    ST32(s2+4, 0);
    ST32(s2+8, 0);
    sp = sp + 288;
    return;
L_08889FE4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08889FEC;
L_08889FEC:;
    ST32(sp+256, 0);
    goto L_08889FC4;
L_08889FF4:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A000;
L_0888A000:;
    t0 = LD32(sp+256);
    goto L_08889F68;
L_0888A008:;
    ST32(sp+256, 0);
    goto L_08889F68;
L_0888A010:;
    s0 = v0 + 20592;
    goto L_0888A014;
L_0888A014:;
    ST32(sp+264, 0);
    cnd_ = s0 == 0;
    ST32(sp+260, 0);
    if (cnd_) { goto L_0888A068; }
    goto L_0888A020;
L_0888A020:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A028;
L_0888A028:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+260, v0);
    ST32(sp+264, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A03C;
L_0888A03C:;
    t0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(sp+256, v0);
    if (cnd_) { goto L_0888A050; }
    goto L_0888A048;
L_0888A048:;
    s2 = sp + 256;
    goto L_08889F60;
L_0888A050:;
    a0 = t0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A05C;
L_0888A05C:;
    t0 = LD32(sp+256);
    s2 = sp + 256;
    goto L_08889F68;
L_0888A068:;
    s2 = sp + 256;
    goto L_0888A008;
L_0888A070:;
    cnd_ = a0 == v0;
    v0 = 1005;
    if (cnd_) { goto L_0888A0C8; }
    goto L_0888A078;
L_0888A078:;
    cnd_ = a0 != v0;
    if (cnd_) { t0 = LD32(sp+256); goto L_08889EFC; }
    goto L_0888A080;
L_0888A080:;
    v0 = D_08AD5088 - (20616);
    s0 = v0 + 20616;
    ST32(sp+264, 0);
    cnd_ = s0 == 0;
    ST32(sp+260, 0);
    if (cnd_) { goto L_0888A068; }
    goto L_0888A094;
L_0888A094:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A09C;
L_0888A09C:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+260, v0);
    ST32(sp+264, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A0B0;
L_0888A0B0:;
    t0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(sp+256, v0);
    if (cnd_) { goto L_0888A050; }
    goto L_0888A0BC;
L_0888A0BC:;
    ST32(sp+264, 0);
    s2 = sp + 256;
    goto L_08889F64;
L_0888A0C8:;
    v0 = D_08AD5094 - (20628);
    s0 = v0 + 20628;
    goto L_0888A014;
L_0888A0D4:;
    v0 = D_08AD509C - (20636);
    s0 = v0 + 20636;
    goto L_0888A014;
}

/* 0888A0E0 */
u32 func_0888A0E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888A0E0:;
    sp = sp - 16;
    v0 = 2003;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = 0 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0888A394; }
    goto L_0888A108;
L_0888A108:;
    v0 = a0 < 0x7d4u;
    cnd_ = v0 == 0;
    v0 = 2007;
    if (cnd_) { goto L_0888A270; }
    goto L_0888A114;
L_0888A114:;
    v0 = 1003;
    cnd_ = a0 == v0;
    v0 = a0 < 0x3ecu;
    if (cnd_) { goto L_0888A254; }
    goto L_0888A120;
L_0888A120:;
    cnd_ = v0 == 0;
    v0 = 1005;
    if (cnd_) { goto L_0888A1C4; }
    goto L_0888A128;
L_0888A128:;
    v0 = 1001;
    cnd_ = a0 == v0;
    v0 = a0 < 0x3eau;
    if (cnd_) { goto L_0888A1A8; }
    goto L_0888A134;
L_0888A134:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0888A18C; }
    goto L_0888A13C;
L_0888A13C:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0888A170; }
    goto L_0888A144;
L_0888A144:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A148:;
    a2 = s2 + 0;
    a1 = s0 + 0;
    func_0888A470(a0, a1, a2, t1, t2, t3);
    goto L_0888A154;
L_0888A154:;
    v0 = s0 + 0;
    sp = sp + 16;
    return v0;
L_0888A170:;
    a0 = 248;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A178;
L_0888A178:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_08884340(a0);
    goto L_0888A184;
L_0888A184:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A18C:;
    a0 = 220;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A194;
L_0888A194:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08883114(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A1A0;
L_0888A1A0:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A1A8:;
    a0 = 196;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A1B0;
L_0888A1B0:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_088802E4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A1BC;
L_0888A1BC:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A1C4:;
    cnd_ = a0 == v0;
    v0 = a0 < 0x3edu;
    if (cnd_) { goto L_0888A238; }
    goto L_0888A1CC;
L_0888A1CC:;
    cnd_ = v0 != 0;
    v0 = 2001;
    if (cnd_) { goto L_0888A21C; }
    goto L_0888A1D4;
L_0888A1D4:;
    cnd_ = a0 == v0;
    v0 = 2002;
    if (cnd_) { goto L_0888A200; }
    goto L_0888A1DC;
L_0888A1DC:;
    cnd_ = a0 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_0888A148; }
    goto L_0888A1E4;
L_0888A1E4:;
    a0 = 192;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A1EC;
L_0888A1EC:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0888D958(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A1F8;
L_0888A1F8:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A200:;
    a0 = 200;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A208;
L_0888A208:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_0888D09C(a0);
    goto L_0888A214;
L_0888A214:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A21C:;
    a0 = 228;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A224;
L_0888A224:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0887F198(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A230;
L_0888A230:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A238:;
    a0 = 244;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A240;
L_0888A240:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08881DF4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A24C;
L_0888A24C:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A254:;
    a0 = 168;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A25C;
L_0888A25C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_088811D8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A268;
L_0888A268:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A270:;
    cnd_ = a0 == v0;
    v0 = a0 < 0x7d8u;
    if (cnd_) { goto L_0888A378; }
    goto L_0888A278;
L_0888A278:;
    cnd_ = v0 == 0;
    v0 = 2009;
    if (cnd_) { goto L_0888A2E8; }
    goto L_0888A280;
L_0888A280:;
    v0 = 2005;
    cnd_ = a0 == v0;
    v0 = a0 < 0x7d6u;
    if (cnd_) { goto L_0888A2CC; }
    goto L_0888A28C;
L_0888A28C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888A2B0; }
    goto L_0888A294;
L_0888A294:;
    a0 = 212;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A29C;
L_0888A29C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08893C9C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A2A8;
L_0888A2A8:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A2B0:;
    a0 = 176;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A2B8;
L_0888A2B8:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0888DF00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A2C4;
L_0888A2C4:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A2CC:;
    a0 = 344;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A2D4;
L_0888A2D4:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_088945E0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A2E0;
L_0888A2E0:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A2E8:;
    cnd_ = a0 == v0;
    v0 = a0 < 0x7d9u;
    if (cnd_) { goto L_0888A35C; }
    goto L_0888A2F0;
L_0888A2F0:;
    cnd_ = v0 != 0;
    v0 = 2010;
    if (cnd_) { goto L_0888A340; }
    goto L_0888A2F8;
L_0888A2F8:;
    cnd_ = a0 == v0;
    v0 = 2012;
    if (cnd_) { goto L_0888A324; }
    goto L_0888A300;
L_0888A300:;
    cnd_ = a0 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_0888A148; }
    goto L_0888A308;
L_0888A308:;
    a0 = 456;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A310;
L_0888A310:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0889038C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A31C;
L_0888A31C:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A324:;
    a0 = 456;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A32C;
L_0888A32C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_0888EBDC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A338;
L_0888A338:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A340:;
    a0 = 504;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A348;
L_0888A348:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08891B8C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A354;
L_0888A354:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A35C:;
    a0 = 276;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A364;
L_0888A364:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08890658(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A370;
L_0888A370:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A378:;
    a0 = 668;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A380;
L_0888A380:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_0888B60C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A38C;
L_0888A38C:;
    a0 = s1 + 0;
    goto L_0888A148;
L_0888A394:;
    a0 = 236;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A39C;
L_0888A39C:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08892F68(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A3A8;
L_0888A3A8:;
    a0 = s1 + 0;
    goto L_0888A148;
}

/* 0888A3B0 */
u32 func_0888A3B0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888A3B0:;
    sp = sp - 48;
    s2 = a0 + 0;
    a0 = 220;
    { s64 p_ = (s64)(s32)s2 * (s32)a0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = lo;
    a0 = a0 + 4;
    s1 = s2 - 1;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A3E8;
L_0888A3E8:;
    s4 = v0 + 4;
    ST32(s4-4, s2);
    cnd_ = s2 == 0;
    s0 = s4 + 0;
    if (cnd_) { goto L_0888A410; }
    goto L_0888A3F8;
L_0888A3F8:;
    s3 = (u32)-1;
    goto L_0888A3FC;
L_0888A3FC:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_08883114(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A408;
L_0888A408:;
    cnd_ = s1 != s3;
    s0 = s0 + 220;
    if (cnd_) { goto L_0888A3FC; }
    goto L_0888A410;
L_0888A410:;
    ST32(sp, 0);
    s1 = 0 + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    cnd_ = s2 == 0;
    ST32(sp+12, 0);
    if (cnd_) { goto L_0888A44C; }
    goto L_0888A428;
L_0888A428:;
    s0 = s4 + 0;
    goto L_0888A42C;
L_0888A42C:;
    a1 = s0 + 0;
    a0 = 1002;
    a2 = sp + 0;
    s1 = s1 + 1;
    func_0888A470(a0, a1, a2, 0, 0, 0);
    goto L_0888A440;
L_0888A440:;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    s0 = s0 + 220;
    if (cnd_) { goto L_0888A42C; }
    goto L_0888A44C;
L_0888A44C:;
    v0 = s4 + 0;
    sp = sp + 48;
    return v0;
}

/* 0888A470 */
void func_0888A470(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0, f14 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888A470:;
    sp = sp - 32;
    v0 = a0 - 2001;
    s0 = a1 + 0;
    a1 = v0 < 0x3e6u;
    s1 = a2 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_0888A4B0; }
    goto L_0888A494;
L_0888A494:;
    v0 = a0 - 1001;
    cnd_ = a1 != 0;
    v0 = v0 < 0x3e6u;
    if (cnd_) { goto L_0888A5A4; }
    goto L_0888A4A0;
L_0888A4A0:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_0888A53C; }
    goto L_0888A4A8;
L_0888A4A8:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_0888A4C4; }
    goto L_0888A4B0;
L_0888A4B0:;
    goto L_0888A4B4;
L_0888A4B4:;
    sp = sp + 32;
    return;
L_0888A4C4:;
    func_08889B14(t1, t2, t3);
    goto L_0888A4CC;
L_0888A4CC:;
    v0 = LD32(s0);
    a1 = D_08B29C14 - (-25580);
    a1 = a1 - 25580;
    v1 = LD32(v0+96);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A4E4;
L_0888A4E4:;
    f13 = BITSF(LD32(s1+4));
    f12 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1+12));
    v0 = LD32(s0);
    f0 = f0 - f12;
    f1 = f1 - f13;
    a1 = LD32(v0+32);
    f14 = BITSF(0);
    ST32(sp, FBITS(f0));
    a0 = s0 + 0;
    t_ = a1;
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A518;
L_0888A518:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+168);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A52C;
L_0888A52C:;
    a0 = s0 + 0;
    { u64 r_ = func_0888B098(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A534;
L_0888A534:;
    goto L_0888A4B4;
L_0888A53C:;
    func_08889EAC(a0, t1, t2, t3);
    goto L_0888A544;
L_0888A544:;
    v0 = LD32(s0);
    a1 = D_08B29C14 - (-25580);
    a1 = a1 - 25580;
    v1 = LD32(v0+96);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A55C;
L_0888A55C:;
    f13 = BITSF(LD32(s1+4));
    f12 = BITSF(LD32(s1));
    f0 = BITSF(LD32(s1+8));
    f1 = BITSF(LD32(s1+12));
    v0 = LD32(s0);
    f0 = f0 - f12;
    f1 = f1 - f13;
    v1 = LD32(v0+32);
    f14 = BITSF(0);
    ST32(sp, FBITS(f0));
    a0 = s0 + 0;
    t_ = v1;
    ST32(sp+4, FBITS(f1));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A590;
L_0888A590:;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_088801B4(a0, a1);
    goto L_0888A59C;
L_0888A59C:;
    goto L_0888A4B4;
L_0888A5A4:;
    func_08889B8C(a0, t1, t2, t3);
    goto L_0888A5AC;
L_0888A5AC:;
    v0 = LD32(s0);
    a1 = D_08B29C14 - (-25580);
    a0 = s0 + 0;
    v1 = LD32(v0+96);
    t_ = v1;
    a1 = a1 - 25580;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A5C4;
L_0888A5C4:;
    v0 = LD32(s0);
    f13 = BITSF(LD32(s1+4));
    f12 = BITSF(LD32(s1));
    v1 = LD32(v0+32);
    f14 = BITSF(0);
    t_ = v1;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A5E0;
L_0888A5E0:;
    goto L_0888A4B4;
}

/* 0888A5E8 */
u32 func_0888A5E8(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888A5E8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 1001;
    s2 = a2 + 0;
    v0 = func_0888A0E0(a0, a1, t1, t2, t3);
    goto L_0888A60C;
L_0888A60C:;
    s1 = v0 + 0;
    a1 = s0 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888A638; }
    goto L_0888A620;
L_0888A620:;
    func_088804E8(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0888A628;
L_0888A628:;
    cnd_ = s2 == 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_0888A638; }
    goto L_0888A630;
L_0888A630:;
    a0 = s1 + 0;
    func_0888744C(a0, a1);
    goto L_0888A638;
L_0888A638:;
    v0 = s1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0888A654 */
void func_0888A654(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888A654:;
    sp = sp - 16;
    v0 = D_08B29C10 - (-25584);
    v0 = LD32(v0-25584);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0888A6E8; }
    goto L_0888A674;
L_0888A674:;
    v0 = D_08B2BB78 - (-17544);
    v1 = LD32(v0-17544);
    a3 = 0 + 0;
    a0 = 134;
    a1 = 20;
    cnd_ = v1 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888A6A4; }
    goto L_0888A690;
L_0888A690:;
    goto L_0888A694;
L_0888A694:;
    sp = sp + 16;
    return;
L_0888A6A4:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A6AC;
L_0888A6AC:;
    a0 = LD32(v0+24);
    a2 = 20;
    a1 = s1 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A6C0;
L_0888A6C0:;
    v1 = 4;
    ST32(s0, v1);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A6CC;
L_0888A6CC:;
    ST32(s0+4, v0);
    a0 = s0 + 0;
    a1 = 1;
    a2 = 1;
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A6E0;
L_0888A6E0:;
    goto L_0888A694;
L_0888A6E8:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A6F0;
L_0888A6F0:;
    goto L_0888A694;
}

/* 0888A6F8 */
void func_0888A6F8(u32 a0)
{
    u32 v0 = 0;
L_0888A6F8:;
    v0 = D_08B29C10 - (-25584);
    ST32(v0-25584, a0);
    return;
}

/* 0888A704 */
void func_0888A704(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888A704:;
    sp = sp - 16;
    s0 = a1 & 0xff;
    { u64 r_ = func_0888B1B4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A718;
L_0888A718:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0888A734; }
    goto L_0888A728;
L_0888A728:;
    v0 = func_0888A748(a0, a1);
    goto L_0888A730;
L_0888A730:;
    v1 = v0 + 0;
    goto L_0888A734;
L_0888A734:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
}

/* 0888A748 */
u32 func_0888A748(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888A748:;
    sp = sp - 16;
    a2 = D_08B29BF8 - (-25608);
    s0 = a0 + 0;
    a1 = a1 & 0xff;
    a3 = 0 + 0;
    v0 = LD32(a2-25608);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0888A7A0; }
    goto L_0888A770;
L_0888A770:;
    v0 = D_08B29978 - (-26248);
    v1 = v0 - 26248;
    v0 = LD32(v1);
    goto L_0888A77C;
L_0888A77C:;
    a0 = a0 + 1;
    cnd_ = v0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0888A790; }
    goto L_0888A788;
L_0888A788:;
    cnd_ = s0 == v0;
    if (cnd_) { v0 = LD32(s0+244); goto L_0888A7B4; }
    goto L_0888A790;
L_0888A790:;
    v0 = LD32(a2-25608);
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0888A77C; }
    goto L_0888A7A0;
L_0888A7A0:;
    goto L_0888A7A4;
L_0888A7A4:;
    v0 = a3 + 0;
    sp = sp + 16;
    return v0;
L_0888A7B4:;
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(s0+244, v0);
    if (cnd_) { goto L_0888A7CC; }
    goto L_0888A7C0;
L_0888A7C0:;
    v0 = 1;
    cnd_ = a1 != v0;
    if (cnd_) { goto L_0888A7A4; }
    goto L_0888A7CC;
L_0888A7CC:;
    a0 = s0 + 0;
    func_0888B200(a0);
    goto L_0888A7D4;
L_0888A7D4:;
    cnd_ = s0 == 0;
    if (cnd_) { a3 = 1; goto L_0888A7A0; }
    goto L_0888A7DC;
L_0888A7DC:;
    v1 = LD32(s0);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A7EC;
L_0888A7EC:;
    a3 = 1;
    goto L_0888A7A0;
}

/* 0888A7F4 */
void func_0888A7F4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888A7F4:;
    sp = sp - 32;
    a0 = 0 + 0;
    s4 = D_08B29BF8 - (-25608);
    s0 = 0 + 0;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A820;
L_0888A820:;
    v1 = LD32(s4-25608);
    cnd_ = v1 == 0;
    v0 = D_08B29978 - (-26248);
    if (cnd_) { goto L_0888A854; }
    goto L_0888A82C;
L_0888A82C:;
    s1 = v0 - 26248;
    goto L_0888A830;
L_0888A830:;
    a0 = s0 + 0;
    s0 = s0 + 1;
    { u64 r_ = func_0888AA28(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A83C;
L_0888A83C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1); goto L_0888A8E4; }
    goto L_0888A844;
L_0888A844:;
    v0 = LD32(s4-25608);
    goto L_0888A848;
L_0888A848:;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0888A830; }
    goto L_0888A854;
L_0888A854:;
    s4 = D_08B29BF8 - (-25608);
    v1 = LD32(s4-25608);
    cnd_ = v1 == 0;
    a1 = s4 + 0;
    if (cnd_) { goto L_0888A8AC; }
    goto L_0888A864;
L_0888A864:;
    a0 = v1 + 0;
    v0 = D_08B29978 - (-26248);
    v1 = D_08B29B78 - (-25736);
    s3 = v0 - 26248;
    s2 = v1 - 25736;
    goto L_0888A878;
L_0888A878:;
    s0 = a0 - 1;
    v0 = s0 << 2;
    s1 = v0 + s3;
    v0 = LD32(s1);
    ST32(a1-25608, s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888A8CC; }
    goto L_0888A894;
L_0888A894:;
    v1 = LD32(s4-25608);
    v0 = s0 + s2;
    a1 = D_08B29BF8 - (-25608);
    ST8(v0, 0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0888A878; }
    goto L_0888A8AC;
L_0888A8AC:;
    sp = sp + 32;
    return;
L_0888A8CC:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A8DC;
L_0888A8DC:;
    ST32(s1, 0);
    goto L_0888A894;
L_0888A8E4:;
    v1 = LD32(a0);
    v0 = LD32(v1+152);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888A8F4;
L_0888A8F4:;
    v1 = LD32(s1);
    a0 = LD32(v1+144);
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888A900;
L_0888A900:;
    v0 = LD32(s4-25608);
    goto L_0888A848;
}

/* 0888A908 */
void func_0888A908(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_0888A908:;
    cnd_ = (s32)a0 < 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_0888A944; }
    goto L_0888A910;
L_0888A910:;
    v0 = D_08B29B78 - (-25736);
    v0 = v0 - 25736;
    goto L_0888A918;
L_0888A918:;
    cnd_ = a1 == 0;
    a2 = a0 + v0;
    if (cnd_) { goto L_0888A930; }
    goto L_0888A920;
L_0888A920:;
    v0 = LD_U8(a2);
    v0 = v0 | 0x2;
    ST8(a2, v0);
    return;
L_0888A930:;
    v0 = LD_U8(a2);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST8(a2, v0);
    goto L_0888A93C;
L_0888A93C:;
    return;
L_0888A944:;
    v1 = D_08B29BF8 - (-25608);
    v0 = LD32(v1-25608);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = D_08B29B78 - (-25736);
    if (cnd_) { goto L_0888A93C; }
    goto L_0888A958;
L_0888A958:;
    v0 = v0 - 25736;
    goto L_0888A918;
}

/* 0888A960 */
u64 func_0888A960(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_0888A960:;
    cnd_ = (s32)a0 < 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_0888A99C; }
    goto L_0888A968;
L_0888A968:;
    v0 = D_08B29B78 - (-25736);
    v0 = v0 - 25736;
    goto L_0888A970;
L_0888A970:;
    cnd_ = a1 == 0;
    a2 = a0 + v0;
    if (cnd_) { goto L_0888A988; }
    goto L_0888A978;
L_0888A978:;
    v0 = LD_U8(a2);
    v0 = v0 | 0x1;
    ST8(a2, v0);
    return (u64)v0 | ((u64)v1 << 32);
L_0888A988:;
    v0 = LD_U8(a2);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST8(a2, v0);
    goto L_0888A994;
L_0888A994:;
    return (u64)v0 | ((u64)v1 << 32);
L_0888A99C:;
    v1 = D_08B29BF8 - (-25608);
    v0 = LD32(v1-25608);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    v0 = D_08B29B78 - (-25736);
    if (cnd_) { goto L_0888A994; }
    goto L_0888A9B0;
L_0888A9B0:;
    v0 = v0 - 25736;
    goto L_0888A970;
}

/* 0888A9B8 */
u64 func_0888A9B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888A9B8:;
    sp = sp - 16;
    a3 = D_08B29BF8 - (-25608);
    a2 = a0 + 0;
    v0 = LD32(a3-25608);
    a1 = a1 & 0xff;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0888AA0C; }
    goto L_0888A9D8;
L_0888A9D8:;
    v0 = D_08B29978 - (-26248);
    v1 = v0 - 26248;
    v0 = LD32(v1);
    goto L_0888A9E4;
L_0888A9E4:;
    cnd_ = v0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0888A9F8; }
    goto L_0888A9EC;
L_0888A9EC:;
    v0 = LD32(v0+144);
    cnd_ = v0 == a2;
    if (cnd_) { goto L_0888AA18; }
    goto L_0888A9F8;
L_0888A9F8:;
    v0 = LD32(a3-25608);
    a0 = a0 + 1;
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0888A9E4; }
    goto L_0888AA0C;
L_0888AA0C:;
    goto L_0888AA10;
L_0888AA10:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0888AA18:;
    { u64 r_ = func_0888A960(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AA20;
L_0888AA20:;
    goto L_0888AA10;
}

/* 0888AA28 */
u64 func_0888AA28(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0888AA28:;
    cnd_ = (s32)a0 < 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888AA58; }
    goto L_0888AA30;
L_0888AA30:;
    v0 = D_08B29B78 - (-25736);
    v0 = v0 - 25736;
    v1 = D_08B29BF8 - (-25608);
    a1 = a0 + v0;
    v0 = LD32(v1-25608);
    v0 = (s32)a0 < (s32)v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888AA58; }
    goto L_0888AA50;
L_0888AA50:;
    v0 = LD_U8(a1);
    a2 = v0 & 0x1;
    goto L_0888AA58;
L_0888AA58:;
    v0 = a2 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888AA60 */
u64 func_0888AA60(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888AA60:;
    sp = sp - 16;
    v0 = D_08B29BF8 - (-25608);
    a2 = a0 + 0;
    v0 = LD32(v0-25608);
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0888AAB4; }
    goto L_0888AA80;
L_0888AA80:;
    a1 = v0 + 0;
    v0 = D_08B29978 - (-26248);
    v1 = v0 - 26248;
    v0 = LD32(v1);
    goto L_0888AA90;
L_0888AA90:;
    cnd_ = v0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0888AAA4; }
    goto L_0888AA98;
L_0888AA98:;
    v0 = LD32(v0+144);
    cnd_ = v0 == a2;
    if (cnd_) { goto L_0888AAC4; }
    goto L_0888AAA4;
L_0888AAA4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0888AA90; }
    goto L_0888AAB4;
L_0888AAB4:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0888AAC4:;
    { u64 r_ = func_0888AA28(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AACC;
L_0888AACC:;
    a3 = v0 + 0;
    goto L_0888AAB4;
}

/* 0888AAD4 */
u64 func_0888AAD4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0888AAD4:;
    v0 = D_08B29BF8 - (-25608);
    v0 = LD32(v0-25608);
    t0 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888AB1C; }
    goto L_0888AAE8;
L_0888AAE8:;
    a3 = v0 + 0;
    v0 = D_08B29978 - (-26248);
    a1 = v0 - 26248;
    v0 = LD32(a1);
    goto L_0888AAF8;
L_0888AAF8:;
    a2 = a2 + 1;
    v1 = a2 < a3;
    cnd_ = v0 == 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0888AB14; }
    goto L_0888AB08;
L_0888AB08:;
    v0 = LD32(v0+144);
    cnd_ = v0 == a0;
    if (cnd_) { t0 = 1; goto L_0888AB1C; }
    goto L_0888AB14;
L_0888AB14:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_0888AAF8; }
    goto L_0888AB1C;
L_0888AB1C:;
    v0 = t0 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888AB24 */
u64 func_0888AB24(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_0888AB24:;
    v0 = D_08B29BF8 - (-25608);
    v0 = LD32(v0-25608);
    t1 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0888AB64; }
    goto L_0888AB38;
L_0888AB38:;
    t0 = v0 + 0;
    v0 = D_08B29978 - (-26248);
    a1 = v0 - 26248;
    a2 = LD32(a1);
    goto L_0888AB48;
L_0888AB48:;
    a3 = a3 + 1;
    v1 = a3 < t0;
    v0 = LD32(a2+144);
    cnd_ = v0 == a0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0888AB6C; }
    goto L_0888AB5C;
L_0888AB5C:;
    cnd_ = v1 != 0;
    if (cnd_) { a2 = LD32(a1); goto L_0888AB48; }
    goto L_0888AB64;
L_0888AB64:;
    v0 = t1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
L_0888AB6C:;
    t1 = a2 + 0;
    goto L_0888AB64;
}

/* 0888AB74 */
rv_t func_0888AB74(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888AB74:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_0888AAD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AB90;
L_0888AB90:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0888ABB4; }
    goto L_0888AB9C;
L_0888AB9C:;
    v0 = s0 + 0;
    goto L_0888ABA0;
L_0888ABA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888ABB4:;
    { rv_t r_ = func_0888B320(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888ABBC;
L_0888ABBC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888AB9C; }
    goto L_0888ABC4;
L_0888ABC4:;
    { u64 r_ = func_08887518(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888ABCC;
L_0888ABCC:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = s0 + 0; goto L_0888ABA0; }
    goto L_0888ABD4;
L_0888ABD4:;
    v0 = LD32(v0+144);
    v0 = v0 ^ s1;
    s0 = v0 < 0x1u;
    goto L_0888AB9C;
}

/* 0888ABE4 */
u64 func_0888ABE4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888ABE4:;
    sp = sp - 32;
    a1 = D_08B29BF8 - (-25608);
    s2 = D_08B15FA0 - (24480);
    s1 = a0 + 0;
    s0 = 0 + 0;
    v0 = LD32(a1-25608);
    cnd_ = v0 == 0;
    s3 = LD32(s2+24480);
    if (cnd_) { goto L_0888AC4C; }
    goto L_0888AC18;
L_0888AC18:;
    v0 = D_08B29978 - (-26248);
    v1 = v0 - 26248;
    v0 = LD32(v1);
    goto L_0888AC24;
L_0888AC24:;
    cnd_ = v0 == 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0888AC38; }
    goto L_0888AC2C;
L_0888AC2C:;
    v0 = LD32(v0+144);
    cnd_ = v0 == s1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888AC7C; }
    goto L_0888AC38;
L_0888AC38:;
    v0 = LD32(a1-25608);
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0888AC24; }
    goto L_0888AC4C;
L_0888AC4C:;
    cnd_ = s1 != 0;
    v0 = s3 + 0;
    if (cnd_) { goto L_0888AC60; }
    goto L_0888AC54;
L_0888AC54:;
    v0 = (u32)-1;
    ST32(s2+24480, v0);
    v0 = s3 + 0;
    goto L_0888AC60;
L_0888AC60:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0888AC7C:;
    a1 = 1;
    { u64 r_ = func_0888A960(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AC84;
L_0888AC84:;
    ST32(s2+24480, s0);
    goto L_0888AC4C;
}

/* 0888AC8C */
u64 func_0888AC8C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888AC8C:;
    sp = sp - 16;
    v0 = D_08B15FA0 - (24480);
    s1 = 0 + 0;
    s0 = LD32(v0+24480);
    v0 = ~(0 | s0);
    v0 = 0 < v0;
    v1 = (s32)s0 < 128;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888ACE0; }
    goto L_0888ACC0;
L_0888ACC0:;
    { u64 r_ = func_0888AA28(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888ACC8;
L_0888ACC8:;
    v1 = D_08B29978 - (-26248);
    a1 = s0 << 2;
    v1 = v1 - 26248;
    a0 = 1;
    cnd_ = v0 == a0;
    v1 = a1 + v1;
    if (cnd_) { goto L_0888ACF8; }
    goto L_0888ACE0;
L_0888ACE0:;
    v0 = s1 + 0;
    goto L_0888ACE4;
L_0888ACE4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0888ACF8:;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0+144); goto L_0888ACE0; }
    goto L_0888AD04;
L_0888AD04:;
    v0 = s1 + 0;
    goto L_0888ACE4;
}

/* 0888AD0C */
void func_0888AD0C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0888AD0C:;
    a2 = D_08B29BFC - (-25604);
    v0 = LD32(a2-25604);
    v1 = D_08B29C00 - (-25600);
    v1 = v1 - 25600;
    a1 = a0 + 0;
    a0 = v0 << 2;
    a0 = a0 + v1;
    v1 = v0 + 1;
    v0 = v0 < 0x4u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888AD40; }
    goto L_0888AD38;
L_0888AD38:;
    ST32(a0, a1);
    ST32(a2-25604, v1);
    goto L_0888AD40;
L_0888AD40:;
    return;
}

/* 0888AD48 */
u64 func_0888AD48(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0888AD48:;
    a2 = D_08B29BFC - (-25604);
    v0 = LD32(a2-25604);
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = a2 + 0;
    if (cnd_) { goto L_0888AD88; }
    goto L_0888AD5C;
L_0888AD5C:;
    v0 = D_08B29C00 - (-25600);
    a1 = v0 - 25600;
    t0 = a1 + 0;
    goto L_0888AD68;
L_0888AD68:;
    v0 = LD32(a1);
    cnd_ = v0 == a0;
    v1 = v1 + 1;
    if (cnd_) { goto L_0888AD90; }
    goto L_0888AD74;
L_0888AD74:;
    v0 = LD32(a2-25604);
    a1 = a1 + 4;
    v0 = v1 < v0;
    cnd_ = v0 != 0;
    a3 = D_08B29BFC - (-25604);
    if (cnd_) { goto L_0888AD68; }
    goto L_0888AD88;
L_0888AD88:;
    return (u64)v0 | ((u64)v1 << 32);
L_0888AD90:;
    v0 = LD32(a3-25604);
    v0 = v0 - 1;
    v1 = v0 << 2;
    v1 = v1 + t0;
    a0 = LD32(v1);
    ST32(a3-25604, v0);
    ST32(a1, a0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888ADB0 */
rv_t func_0888ADB0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888ADB0:;
    a1 = a1 & 0xff;
    sp = sp - 16;
    a3 = a2 & 0xff;
    a2 = a1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_0888ADD8(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888ADCC;
L_0888ADCC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888ADD8 */
rv_t func_0888ADD8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888ADD8:;
    sp = sp - 32;
    s5 = a2 & 0xff;
    s4 = 0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a3 & 0xff;
    { u64 r_ = func_0888AB24(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AE10;
L_0888AE10:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0888AE58; }
    goto L_0888AE18;
L_0888AE18:;
    a0 = v0 + 0;
    v0 = func_08885038(a0);
    goto L_0888AE20;
L_0888AE20:;
    v0 = v0 & 0x10;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = s4 + 0; goto L_0888AE5C; }
    goto L_0888AE2C;
L_0888AE2C:;
    cnd_ = s3 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0888AF50; }
    goto L_0888AE34;
L_0888AE34:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_0888AEF8; }
    goto L_0888AE3C;
L_0888AE3C:;
    a0 = s2 + 0;
    { u64 r_ = func_0888AA60(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AE44;
L_0888AE44:;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0888AE90; }
    goto L_0888AE4C;
L_0888AE4C:;
    v0 = 1;
    cnd_ = s5 == v0;
    if (cnd_) { goto L_0888AE80; }
    goto L_0888AE58;
L_0888AE58:;
    v0 = s4 + 0;
    goto L_0888AE5C;
L_0888AE5C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888AE80:;
    a0 = s2 + 0;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AE88;
L_0888AE88:;
    v0 = s4 + 0;
    goto L_0888AE5C;
L_0888AE90:;
    a0 = s2 + 0;
    { u64 r_ = func_0888A9B8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AE98;
L_0888AE98:;
    a0 = s2 + 0;
    a1 = 0 + 0;
    a2 = 7;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AEB0;
L_0888AEB0:;
    cnd_ = s3 != 0;
    if (cnd_) { goto L_0888AEC0; }
    goto L_0888AEB8;
L_0888AEB8:;
    s4 = 1;
    goto L_0888AE4C;
L_0888AEC0:;
    a0 = s2 + 0;
    { rv_t r_ = func_0888B288(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888AEC8;
L_0888AEC8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0888AEB8; }
    goto L_0888AED0;
L_0888AED0:;
    a0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_0888AED8;
L_0888AED8:;
    v1 = 1;
    cnd_ = v0 != v1;
    if (cnd_) { s4 = 1; goto L_0888AE4C; }
    goto L_0888AEE4;
L_0888AEE4:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    { u64 r_ = func_08885000(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AEF0;
L_0888AEF0:;
    s4 = 1;
    goto L_0888AE4C;
L_0888AEF8:;
    a0 = s0 + 0;
    v0 = func_088855F4(a0);
    goto L_0888AF00;
L_0888AF00:;
    cnd_ = v0 == 0;
    v0 = D_08B15FA0 - (24480);
    if (cnd_) { goto L_0888AE3C; }
    goto L_0888AF08;
L_0888AF08:;
    v0 = LD32(v0+24480);
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    v1 = v0 << 2;
    if (cnd_) { goto L_0888AF30; }
    goto L_0888AF18;
L_0888AF18:;
    v0 = D_08B29978 - (-26248);
    v0 = v0 - 26248;
    v1 = v1 + v0;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1+144); goto L_0888AF48; }
    goto L_0888AF30;
L_0888AF30:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    goto L_0888AF38;
L_0888AF38:;
    func_088856A4(a0, a1);
    goto L_0888AF40;
L_0888AF40:;
    goto L_0888AE3C;
L_0888AF48:;
    a0 = s0 + 0;
    goto L_0888AF38;
L_0888AF50:;
    a1 = s3 + 0;
    { rv_t r_ = func_0888AB74(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888AF58;
L_0888AF58:;
    cnd_ = v0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_0888AE5C; }
    goto L_0888AF60;
L_0888AF60:;
    goto L_0888AE34;
}

/* 0888AF68 */
u64 func_0888AF68(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888AF68:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = 0 + 0;
    { u64 r_ = func_0888AB24(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AF84;
L_0888AF84:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888AFA0; }
    goto L_0888AF8C;
L_0888AF8C:;
    v0 = func_08885038(a0);
    goto L_0888AF94;
L_0888AF94:;
    v0 = v0 & 0x10;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888AFB8; }
    goto L_0888AFA0;
L_0888AFA0:;
    v0 = s0 + 0;
    goto L_0888AFA4;
L_0888AFA4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0888AFB8:;
    { u64 r_ = func_0888AA60(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AFC0;
L_0888AFC0:;
    v1 = 1;
    cnd_ = v0 != v1;
    v0 = s0 + 0;
    if (cnd_) { goto L_0888AFA4; }
    goto L_0888AFCC;
L_0888AFCC:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AFD4;
L_0888AFD4:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    a2 = 8;
    a3 = 0 + 0;
    t0 = 0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AFF0;
L_0888AFF0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0888A9B8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888AFFC;
L_0888AFFC:;
    cnd_ = s0 == s1;
    a0 = 0 + 0;
    if (cnd_) { goto L_0888B010; }
    goto L_0888B004;
L_0888B004:;
    s0 = 1;
    v0 = s0 + 0;
    goto L_0888AFA4;
L_0888B010:;
    s0 = 1;
    { u64 r_ = func_0888ABE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B018;
L_0888B018:;
    v0 = s0 + 0;
    goto L_0888AFA4;
}

/* 0888B020 */
void func_0888B020(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_0888B020:;
    v0 = D_08B29B78 - (-25736);
    v1 = D_08B29978 - (-26248);
    a2 = v0 - 25736;
    a1 = v1 - 26248;
    a0 = 0 + 0;
    goto L_0888B034;
L_0888B034:;
    v0 = a0 + a2;
    a0 = a0 + 1;
    v1 = a0 < 0x80u;
    ST32(a1, 0);
    a1 = a1 + 4;
    cnd_ = v1 != 0;
    ST8(v0, 0);
    if (cnd_) { goto L_0888B034; }
    goto L_0888B050;
L_0888B050:;
    v0 = D_08B15FA0 - (24480);
    v1 = D_08B29BF8 - (-25608);
    a0 = (u32)-1;
    ST32(v0+24480, a0);
    v0 = D_08B29C10 - (-25584);
    ST32(v1-25608, 0);
    v1 = D_08B29970 - (-26256);
    ST32(v0-25584, 0);
    v0 = D_08B29C14 - (-25580);
    ST8(v1-26256, 0);
    v1 = D_08B29C54 - (-25516);
    ST8(v0-25580, 0);
    v0 = D_08B29C58 - (-25512);
    ST32(v1-25516, 0);
    v1 = D_08B29C5C - (-25508);
    ST32(v0-25512, 0);
    ST32(v1-25508, 0);
    return;
}

/* 0888B098 */
u64 func_0888B098(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B098:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = D_08B29BF8 - (-25608);
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0888B0CC; }
    goto L_0888B0BC;
L_0888B0BC:;
    v0 = LD32(s1-25608);
    v0 = v0 < 0x80u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888B0E8; }
    goto L_0888B0CC;
L_0888B0CC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0888B0E8:;
    a0 = LD32(a0+84);
    v0 = func_0888B3D8(a0);
    goto L_0888B0F0;
L_0888B0F0:;
    s2 = v0 + 0;
    a1 = D_08B29978 - (-26248);
    v0 = (u32)-1;
    a2 = a1 - 26248;
    cnd_ = s2 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888B168; }
    goto L_0888B108;
L_0888B108:;
    v0 = LD32(s0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B118;
L_0888B118:;
    a1 = D_08B29978 - (-26248);
    a0 = s2 << 2;
    goto L_0888B120;
L_0888B120:;
    v0 = a1 - 26248;
    v0 = a0 + v0;
    a1 = LD32(v0);
    v1 = LD32(a1+244);
    a0 = a1 + 0;
    v1 = v1 + 1;
    ST32(a1+244, v1);
    v0 = func_08885038(a0);
    goto L_0888B140;
L_0888B140:;
    v0 = v0 & 0x10;
    a0 = s2 + 0;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_0888B158; }
    goto L_0888B150;
L_0888B150:;
    v1 = 1;
    goto L_0888B0CC;
L_0888B158:;
    func_0888A908(a0, a1);
    goto L_0888B160;
L_0888B160:;
    v1 = 1;
    goto L_0888B0CC;
L_0888B168:;
    s2 = LD32(s1-25608);
    a0 = s2 << 2;
    v1 = s2 + 1;
    v0 = a0 + a2;
    ST32(v0, s0);
    ST32(s1-25608, v1);
    goto L_0888B120;
}

/* 0888B184 */
u32 func_0888B184(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0888B184:;
    v0 = D_08B29BF8 - (-25608);
    a1 = LD32(v0-25608);
    v0 = D_08B29978 - (-26248);
    v1 = a0 << 2;
    v0 = v0 - 26248;
    a0 = a0 < a1;
    v1 = v1 + v0;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0888B1AC; }
    goto L_0888B1A8;
L_0888B1A8:;
    v0 = LD32(v1);
    goto L_0888B1AC;
L_0888B1AC:;
    return v0;
}

/* 0888B1B4 */
u64 func_0888B1B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_0888B1B4:;
    v0 = D_08B29BF8 - (-25608);
    v0 = LD32(v0-25608);
    t1 = a0 + 0;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888B1F8; }
    goto L_0888B1CC;
L_0888B1CC:;
    t0 = v0 + 0;
    v0 = D_08B29978 - (-26248);
    a1 = v0 - 26248;
    goto L_0888B1D8;
L_0888B1D8:;
    v0 = LD32(a1);
    a2 = a2 + 1;
    a0 = a2 < t0;
    v1 = LD32(v0+144);
    a1 = a1 + 4;
    v1 = v1 ^ t1;
    cnd_ = a0 != 0;
    if (v1 == 0) a3 = v0;
    if (cnd_) { goto L_0888B1D8; }
    goto L_0888B1F8;
L_0888B1F8:;
    v0 = a3 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888B200 */
void func_0888B200(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int cnd_;
L_0888B200:;
    t4 = D_08B29BF8 - (-25608);
    v1 = LD32(t4-25608);
    t1 = 0 + 0;
    cnd_ = v1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0888B250; }
    goto L_0888B214;
L_0888B214:;
    v0 = D_08B29B78 - (-25736);
    t3 = v0 - 25736;
    v0 = D_08B29978 - (-26248);
    t0 = v1 + 0;
    a2 = v0 - 26248;
    t2 = 1;
    goto L_0888B22C;
L_0888B22C:;
    a1 = LD32(a2);
    cnd_ = a1 == a0;
    if (cnd_) { t1 = 1; goto L_0888B280; }
    goto L_0888B238;
L_0888B238:;
    cnd_ = t1 == t2;
    v1 = a3 + t3;
    if (cnd_) { goto L_0888B270; }
    goto L_0888B240;
L_0888B240:;
    a3 = a3 + 1;
    v0 = a3 < t0;
    cnd_ = v0 != 0;
    a2 = a2 + 4;
    if (cnd_) { goto L_0888B22C; }
    goto L_0888B250;
L_0888B250:;
    v0 = 1;
    cnd_ = t1 == v0;
    if (cnd_) { v0 = LD32(t4-25608); goto L_0888B264; }
    goto L_0888B25C;
L_0888B25C:;
    v0 = t1 + 0;
    return;
L_0888B264:;
    v0 = v0 - 1;
    ST32(t4-25608, v0);
    goto L_0888B25C;
L_0888B270:;
    v0 = LD_U8(v1);
    ST32(a2-4, a1);
    ST8(v1-1, v0);
    ST8(v1, 0);
    goto L_0888B280;
L_0888B280:;
    ST32(a2, 0);
    goto L_0888B240;
}

/* 0888B288 */
rv_t func_0888B288(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888B288:;
    sp = sp - 32;
    s3 = D_08B29BF8 - (-25608);
    a2 = 0 + 0;
    v0 = LD32(s3-25608);
    s2 = a0 + 0;
    s1 = 0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888B300; }
    goto L_0888B2B8;
L_0888B2B8:;
    v0 = D_08B29978 - (-26248);
    s0 = v0 - 26248;
    v0 = LD32(s0);
    goto L_0888B2C4;
L_0888B2C4:;
    s1 = s1 + 1;
    a1 = s2 + 0;
    v1 = LD32(v0+144);
    a0 = v0 + 0;
    s0 = s0 + 4;
    cnd_ = v1 == s2;
    a2 = v0 + 0;
    if (cnd_) { goto L_0888B300; }
    goto L_0888B2E0;
L_0888B2E0:;
    { rv_t r_ = func_0888818C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B2E8;
L_0888B2E8:;
    cnd_ = v0 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0888B300; }
    goto L_0888B2F0;
L_0888B2F0:;
    v0 = LD32(s3-25608);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0888B2C4; }
    goto L_0888B300;
L_0888B300:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B320 */
rv_t func_0888B320(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B320:;
    sp = sp - 16;
    { rv_t r_ = func_0888B288(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B334;
L_0888B334:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888B358; }
    goto L_0888B340;
L_0888B340:;
    v0 = func_08888FD8(a0);
    goto L_0888B348;
L_0888B348:;
    v0 = v0 - 2000;
    v0 = v0 < 0x7d0u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0888B35C; }
    goto L_0888B358;
L_0888B358:;
    v1 = s0 + 0;
    goto L_0888B35C;
L_0888B35C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B370 */
rv_t func_0888B370(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B370:;
    sp = sp - 16;
    s2 = 0 + 0;
    { rv_t r_ = func_0888B288(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B38C;
L_0888B38C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0888B3BC; }
    goto L_0888B394;
L_0888B394:;
    s1 = 1;
    s0 = LD32(s0+148);
    goto L_0888B39C;
L_0888B39C:;
    cnd_ = s0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888B3B4; }
    goto L_0888B3A4;
L_0888B3A4:;
    v0 = func_08888FD8(a0);
    goto L_0888B3AC;
L_0888B3AC:;
    cnd_ = v0 == s1;
    if (cnd_) { s2 = s0 + 0; goto L_0888B3BC; }
    goto L_0888B3B4;
L_0888B3B4:;
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0+148); goto L_0888B39C; }
    goto L_0888B3BC;
L_0888B3BC:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B3D8 */
u32 func_0888B3D8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888B3D8:;
    sp = sp - 32;
    s4 = (u32)-1;
    s3 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0888B440; }
    goto L_0888B400;
L_0888B400:;
    v0 = D_08B29BF8 - (-25608);
    s2 = LD32(v0-25608);
    cnd_ = s2 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0888B440; }
    goto L_0888B410;
L_0888B410:;
    v0 = D_08B29978 - (-26248);
    s0 = v0 - 26248;
    v0 = LD32(s0);
    goto L_0888B41C;
L_0888B41C:;
    a1 = s3 + 0;
    a2 = 1;
    a0 = v0 + 84;
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0888B464; }
    goto L_0888B430;
L_0888B430:;
    s1 = s1 + 1;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_0888B41C; }
    goto L_0888B440;
L_0888B440:;
    v0 = s4 + 0;
    sp = sp + 32;
    return v0;
L_0888B464:;
    { u64 r_ = func_08AA3308(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B46C;
L_0888B46C:;
    if (v0 == 0) s4 = s1;
    goto L_0888B430;
}

/* 0888B474 */
void func_0888B474(u32 a0, u32 a2)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0888B474:;
    sp = sp - 80;
    v0 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = (s32)a2 <= 0;
    if (cnd_) { goto L_0888B4D0; }
    goto L_0888B48C;
L_0888B48C:;
    a0 = v0 + 0;
    v0 = func_088342EC(a0);
    goto L_0888B494;
L_0888B494:;
    a1 = D_08AD50AC - (20652);
    t0 = s0 + 0;
    t1 = v0 + 0;
    a0 = sp + 0;
    a2 = 50;
    a3 = 1;
    a1 = a1 + 20652;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B4B4;
L_0888B4B4:;
    a0 = sp + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08827BEC(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B4C0;
L_0888B4C0:;
    sp = sp + 80;
    return;
L_0888B4D0:;
    v0 = func_088342C0();
    goto L_0888B4D8;
L_0888B4D8:;
    goto L_0888B48C;
}

/* 0888B4E0 */
void func_0888B4E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B4E0:;
    sp = sp - 16;
    v0 = D_08B29974 - (-26252);
    cnd_ = a3 == 0;
    ST32(v0-26252, a0);
    if (cnd_) { goto L_0888B508; }
    goto L_0888B4F4;
L_0888B4F4:;
    a0 = a3 + 0;
    func_088FD804(a0, a1, a2, t1, t2, t3);
    goto L_0888B4FC;
L_0888B4FC:;
    sp = sp + 16;
    return;
L_0888B508:;
    v0 = D_08AD50C0 - (20672);
    a3 = v0 + 20672;
    goto L_0888B4F4;
}

/* 0888B514 */
void func_0888B514(u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_0888B514:;
    sp = sp - 272;
    a1 = D_08AD50C4 - (20676);
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    a1 = a1 + 20676;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B534;
L_0888B534:;
    a0 = sp + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_08827BEC(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B540;
L_0888B540:;
    sp = sp + 272;
    return;
}

/* 0888B54C */
rv_t func_0888B54C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B54C:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B29960 - (-26272);
    cnd_ = v0 != 0;
    a0 = a0 - 26272;
    if (cnd_) { goto L_0888B5B8; }
    goto L_0888B580;
L_0888B580:;
    v0 = s1 < 0x1u;
    a0 = D_08B29960 - (-26272);
    v0 = s0 & v0;
    cnd_ = v0 != 0;
    a0 = a0 - 26272;
    if (cnd_) { goto L_0888B5A8; }
    goto L_0888B594;
L_0888B594:;
    goto L_0888B598;
L_0888B598:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888B5A8:;
    { rv_t r_ = func_08896370(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B5B0;
L_0888B5B0:;
    goto L_0888B598;
L_0888B5B8:;
    func_0889635C(a0);
    goto L_0888B5C0;
L_0888B5C0:;
    v0 = D_08B29C14 - (-25580);
    ST8(v0-25580, 0);
    goto L_0888B580;
}

/* 0888B5CC */
rv_t func_0888B5CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B5CC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_0888B54C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B5E0;
L_0888B5E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B5EC */
rv_t func_0888B5EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B5EC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_0888B54C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B600;
L_0888B600:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B60C */
rv_t func_0888B60C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888B60C:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0888B620;
L_0888B620:;
    v0 = D_08AF6F50 - (28496);
    v0 = v0 + 28496;
    ST32(s0, v0);
    v0 = D_08AEC1A4 - (-15964);
    v1 = s0 + 184;
    f0 = BITSF(LD32(v0-15964));
    ST32(s0+180, 0);
    a0 = 7;
    a1 = (u32)-1;
    ST32(s0+176, FBITS(f0));
    goto L_0888B648;
L_0888B648:;
    v0 = v1 + 4;
    a0 = a0 - 1;
    ST32(v1+4, 0);
    v1 = v1 + 52;
    ST32(v0+8, 0);
    cnd_ = a0 != a1;
    ST32(v0+4, 0);
    if (cnd_) { goto L_0888B648; }
    goto L_0888B664;
L_0888B664:;
    v0 = 1;
    ST16(s0+664, v0);
    v0 = (u32)-1;
    a1 = (u32)-1;
    ST16(s0+666, v0);
    v0 = 2007;
    v1 = s0 + 0;
    ST32(s0+4, v0);
    v0 = D_08AEC1A4 - (-15964);
    a0 = s0 + 416;
    ST32(s0+600, 0);
    ST32(s0+652, 0);
    ST16(s0+656, 0);
    ST16(s0+658, 0);
    ST16(s0+660, 0);
    ST16(s0+662, 0);
    f0 = BITSF(LD32(v0-15964));
    ST32(v1+200, a1);
    goto L_0888B6AC;
L_0888B6AC:;
    ST32(v1+224, 0);
    ST32(v1+220, 0);
    ST32(v1+232, FBITS(f0));
    ST32(v1+228, FBITS(f0));
    ST32(v1+184, 0);
    v1 = v1 + 52;
    v0 = v1 < a0;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v1+200, a1); goto L_0888B6AC; }
    goto L_0888B6D0;
L_0888B6D0:;
    a0 = s0 + 0;
    v1 = 0 + 0;
    goto L_0888B6D8;
L_0888B6D8:;
    v1 = v1 + 1;
    v0 = v1 < 0x4u;
    ST32(a0+612, 0);
    ST32(a0+608, 0);
    ST16(a0+604, 0);
    ST16(a0+606, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_0888B6D8; }
    goto L_0888B6F8;
L_0888B6F8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B708 */
rv_t func_0888B708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888B708:;
    v0 = D_08AF6F50 - (28496);
    sp = sp - 32;
    v0 = v0 + 28496;
    ST32(a0, v0);
    s3 = a0 + 0;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_0888B738;
L_0888B738:;
    a0 = s3 + 0;
    s0 = s0 + 1;
    func_0888C170(a0, a1, t1, t2, t3);
    goto L_0888B744;
L_0888B744:;
    v1 = s0 < 0x4u;
    cnd_ = v1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0888B738; }
    goto L_0888B750;
L_0888B750:;
    v0 = (u32)-184;
    cnd_ = s3 == v0;
    s0 = s3 + 600;
    if (cnd_) { goto L_0888B794; }
    goto L_0888B75C;
L_0888B75C:;
    s2 = s3 + 184;
    goto L_0888B760;
L_0888B760:;
    cnd_ = s2 == s0;
    s0 = s0 - 52;
    if (cnd_) { goto L_0888B794; }
    goto L_0888B768;
L_0888B768:;
    v0 = LD32(s0+4);
    s1 = s0 + 4;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888B784; }
    goto L_0888B778;
L_0888B778:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_0888B760;
L_0888B784:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B78C;
L_0888B78C:;
    ST32(s0+4, 0);
    goto L_0888B778;
L_0888B794:;
    a0 = s3 + 0;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B79C;
L_0888B79C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B7B8 */
rv_t func_0888B7B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888B7B8:;
    v0 = D_08AF6F50 - (28496);
    sp = sp - 32;
    v0 = v0 + 28496;
    ST32(a0, v0);
    s2 = a0 + 0;
    s0 = 0 + 0;
    a1 = s0 + 0;
    goto L_0888B7E8;
L_0888B7E8:;
    a0 = s2 + 0;
    s0 = s0 + 1;
    func_0888C170(a0, a1, t1, t2, t3);
    goto L_0888B7F4;
L_0888B7F4:;
    v1 = s0 < 0x4u;
    cnd_ = v1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0888B7E8; }
    goto L_0888B800;
L_0888B800:;
    v0 = (u32)-184;
    cnd_ = s2 == v0;
    s0 = s2 + 600;
    if (cnd_) { goto L_0888B844; }
    goto L_0888B80C;
L_0888B80C:;
    s3 = s2 + 184;
    goto L_0888B810;
L_0888B810:;
    cnd_ = s3 == s0;
    s0 = s0 - 52;
    if (cnd_) { goto L_0888B844; }
    goto L_0888B818;
L_0888B818:;
    v0 = LD32(s0+4);
    s1 = s0 + 4;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888B834; }
    goto L_0888B828;
L_0888B828:;
    ST32(s1+4, 0);
    ST32(s1+8, 0);
    goto L_0888B810;
L_0888B834:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B83C;
L_0888B83C:;
    ST32(s0+4, 0);
    goto L_0888B828;
L_0888B844:;
    a0 = s2 + 0;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B84C;
L_0888B84C:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B854;
L_0888B854:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888B870 */
rv_t func_0888B870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_0888B870:;
    sp = sp - 160;
    s0 = a0 + 0;
    a1 = (u32)(s32)LD_S16(a0+666);
    ST32(sp+88, 0);
    ST8(sp+92, 0);
    ST8(sp+93, 0);
    { u64 r_ = func_0888C238(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888B8A0;
L_0888B8A0:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0888B8C4; }
    goto L_0888B8AC;
L_0888B8AC:;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_0888B8C4:;
    a1 = LD32(s0+652);
    a0 = s0 + 0;
    s3 = sp + 112;
    v0 = func_0888C3CC(a0, a1);
    goto L_0888B8D4;
L_0888B8D4:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    a0 = sp + 96;
    v1 = LD32(v0+44);
    t_ = v1;
    a1 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888B8EC;
L_0888B8EC:;
    a0 = s0 + 0;
    v0 = func_08887404(a0);
    goto L_0888B8F4;
L_0888B8F4:;
    a0 = D_08AEC1A8 - (-15960);
    f4 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(a0-15960));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f5 = f4 * f0;
    f0 = BITSF(0);
    f3 = BITSF(LD32(v0+8));
    ST32(sp+112, FBITS(f1));
    fcc = FCMP(f0, f5, 12);
    ST32(sp+116, FBITS(f2));
    ST32(sp+120, FBITS(f3));
    cnd_ = !fcc;
    ST32(sp+124, FBITS(f4));
    if (cnd_) { goto L_0888BAB4; }
    goto L_0888B92C;
L_0888B92C:;
    s2 = D_08AEC1AC - (-15956);
    f0 = BITSF(LD32(s2-15956));
    f0 = f5 + f0;
    goto L_0888B938;
L_0888B938:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(s3));
    f1 = BITSF(LD32(a0-15960));
    v0 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_0888BAA8; }
    goto L_0888B960;
L_0888B960:;
    f0 = BITSF(LD32(s2-15956));
    f0 = f2 + f0;
    goto L_0888B968;
L_0888B968:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s3+4));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15960));
    v0 = v0 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_0888BA9C; }
    goto L_0888B994;
L_0888B994:;
    f0 = BITSF(LD32(s2-15956));
    f0 = f1 + f0;
    goto L_0888B99C;
L_0888B99C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s3+8));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15960));
    v0 = v0 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_0888BA90; }
    goto L_0888B9C8;
L_0888B9C8:;
    f0 = BITSF(LD32(s2-15956));
    f0 = f1 + f0;
    goto L_0888B9D0;
L_0888B9D0:;
    f0 = BITSF(F2I(f0, 1));
    ST8(sp+92, 0);
    v1 = FBITS(f0);
    v0 = v0 + v1;
    ST32(sp+64, v0);
    v0 = 1;
    a1 = LD32(s0);
    v1 = LD32(s1+16);
    ST8(sp+93, v0);
    ST32(sp+80, v1);
    v0 = LD32(a1+140);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888BA04;
L_0888BA04:;
    f0 = BITSF(LD32(s1+20));
    f2 = BITSF(LD32(s1+24));
    f12 = BITSF(LD32(sp+96));
    f13 = BITSF(LD32(sp+100));
    f1 = BITSF(LD32(s2-15956));
    f12 = f12 + f0;
    f13 = f13 + f2;
    f14 = BITSF(LD32(s1+28));
    f15 = BITSF(LD32(s1+32));
    f12 = f12 - f1;
    f13 = f13 - f1;
    a0 = sp + 0;
    ST32(sp+84, v0);
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_0888BA3C;
L_0888BA3C:;
    f1 = BITSF(LD32(s1+36));
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+32, FBITS(f1));
    f0 = BITSF(LD32(s1+40));
    ST32(sp+48, FBITS(f0));
    f1 = BITSF(LD32(s1+44));
    ST32(sp+36, FBITS(f1));
    f0 = BITSF(LD32(s1+40));
    ST32(sp+52, FBITS(f0));
    f1 = BITSF(LD32(s1+44));
    ST32(sp+40, FBITS(f1));
    f0 = BITSF(LD32(s1+48));
    ST32(sp+56, FBITS(f0));
    f1 = BITSF(LD32(s1+36));
    ST32(sp+44, FBITS(f1));
    f0 = BITSF(LD32(s1+48));
    ST32(sp+60, FBITS(f0));
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888BA88;
L_0888BA88:;
    goto L_0888B8AC;
L_0888BA90:;
    f0 = BITSF(LD32(s2-15956));
    f0 = f1 - f0;
    goto L_0888B9D0;
L_0888BA9C:;
    f0 = BITSF(LD32(s2-15956));
    f0 = f1 - f0;
    goto L_0888B99C;
L_0888BAA8:;
    f0 = BITSF(LD32(s2-15956));
    f0 = f2 - f0;
    goto L_0888B968;
L_0888BAB4:;
    s2 = D_08AEC1AC - (-15956);
    f0 = BITSF(LD32(s2-15956));
    f0 = f5 - f0;
    goto L_0888B938;
}

/* 0888BAC4 */
rv_t func_0888BAC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0, f21 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888BAC4:;
    sp = sp - 32;
    s0 = a0 + 0;
    f21 = f12;
    s1 = 0 + 0;
    f0 = func_0888C3EC(a0);
    goto L_0888BAEC;
L_0888BAEC:;
    a0 = s0 + 0;
    f12 = f21;
    f20 = f0;
    { rv_t r_ = func_0888C7F4(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888BAFC;
L_0888BAFC:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { a1 = (u32)(s32)LD_S16(s0+666); goto L_0888BB2C; }
    goto L_0888BB10;
L_0888BB10:;
    goto L_0888BB14;
L_0888BB14:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888BB2C:;
    a0 = s0 + 0;
    { u64 r_ = func_0888C238(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888BB34;
L_0888BB34:;
    v1 = 1;
    cnd_ = v0 != v1;
    if (cnd_) { goto L_0888BB14; }
    goto L_0888BB40;
L_0888BB40:;
    v1 = (u32)(s32)LD_S16(s0+666);
    f0 = BITSF(LD32(s0+180));
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = s0 + v0;
    t0 = v0 + 604;
    f1 = BITSF(LD32(t0+8));
    v0 = D_08AEC1B0 - (-15952);
    f12 = f0 + f21;
    f1 = f1 * f20;
    f0 = BITSF(LD32(v0-15952));
    f1 = f0 / f1;
    fcc = FCMP(f1, f12, 12);
    cnd_ = !fcc;
    ST32(s0+180, FBITS(f12));
    if (cnd_) { goto L_0888BB14; }
    goto L_0888BB84;
L_0888BB84:;
    f0 = f12;
    t1 = 1;
    t3 = 2;
    t4 = 3;
    t5 = 0xffff;
    t6 = (u32)-1;
    f0 = f0 - f1;
    goto L_0888BBA0;
L_0888BBA0:;
    v1 = LD_U16(s0+656);
    cnd_ = v1 == t1;
    ST32(s0+180, FBITS(f0));
    if (cnd_) { goto L_0888BD00; }
    goto L_0888BBAC;
L_0888BBAC:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+180)); goto L_0888BBCC; }
    goto L_0888BBB8;
L_0888BBB8:;
    cnd_ = v1 == t3;
    if (cnd_) { a3 = LD_U16(s0+662); goto L_0888BC78; }
    goto L_0888BBC0;
L_0888BBC0:;
    cnd_ = v1 == t4;
    if (cnd_) { t2 = LD_U16(s0+662); goto L_0888BBE4; }
    goto L_0888BBC8;
L_0888BBC8:;
    f0 = BITSF(LD32(s0+180));
    goto L_0888BBCC;
L_0888BBCC:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f0 - f1; goto L_0888BBA0; }
    goto L_0888BBDC;
L_0888BBDC:;
    goto L_0888BB14;
L_0888BBE4:;
    a3 = t2 & 0xffff;
    cnd_ = a3 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+180)); goto L_0888BBCC; }
    goto L_0888BBF0;
L_0888BBF0:;
    a2 = (u32)(s32)LD_S16(s0+658);
    a1 = (u32)(s32)LD_S16(s0+664);
    v0 = LD32(s0+652);
    v1 = LD_U16(t0+2);
    { s64 p_ = (s64)(s32)a2 * (s32)a1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = v1 - 1;
    a0 = lo;
    v0 = v0 + a0;
    cnd_ = v0 == v1;
    ST32(s0+652, v0);
    if (cnd_) { goto L_0888BC60; }
    goto L_0888BC18;
L_0888BC18:;
    v0 = LD32(s0+652);
    cnd_ = v0 != 0;
    a0 = a1 ^ t1;
    if (cnd_) { goto L_0888BC38; }
    goto L_0888BC24;
L_0888BC24:;
    v0 = (u32)(s32)LD_S16(s0+658);
    v1 = 1;
    v0 = 0 - v0;
    ST16(s0+658, v0);
    if (a0 == 0) s1 = v1;
    goto L_0888BC38;
L_0888BC38:;
    cnd_ = a3 == t5;
    if (cnd_) { f0 = BITSF(LD32(s0+180)); goto L_0888BBCC; }
    goto L_0888BC40;
L_0888BC40:;
    cnd_ = s1 != t1;
    if (cnd_) { f0 = BITSF(LD32(s0+180)); goto L_0888BBCC; }
    goto L_0888BC48;
L_0888BC48:;
    v0 = t2 - 1;
    v1 = v0 & 0xffff;
    cnd_ = v1 != 0;
    ST16(s0+662, v0);
    if (cnd_) { goto L_0888BBC8; }
    goto L_0888BC58;
L_0888BC58:;
    ST16(s0+656, 0);
    goto L_0888BBC8;
L_0888BC60:;
    v0 = 0 - a2;
    ST16(s0+658, v0);
    v1 = a1 ^ t6;
    v0 = 1;
    if (v1 == 0) s1 = v0;
    goto L_0888BC18;
L_0888BC78:;
    a2 = a3 & 0xffff;
    cnd_ = a2 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+180)); goto L_0888BBCC; }
    goto L_0888BC84;
L_0888BC84:;
    v0 = LD32(s0+652);
    t2 = (u32)(s32)LD_S16(s0+664);
    a1 = LD_U16(t0+2);
    a0 = 1;
    v0 = v0 + t2;
    v1 = a1 & 0xffff;
    v1 = v0 < v1;
    if (v1 == 0) s1 = a0;
    cnd_ = a2 == t5;
    ST32(s0+652, v0);
    if (cnd_) { goto L_0888BCB4; }
    goto L_0888BCAC;
L_0888BCAC:;
    cnd_ = s1 == t1;
    v0 = a3 - 1;
    if (cnd_) { goto L_0888BCCC; }
    goto L_0888BCB4;
L_0888BCB4:;
    a0 = LD32(s0+652);
    v0 = a1 & 0xffff;
    { u32 x_ = a0, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    v1 = hi;
    ST32(s0+652, v1);
    goto L_0888BBC8;
L_0888BCCC:;
    v1 = v0 & 0xffff;
    cnd_ = v1 != 0;
    ST16(s0+662, v0);
    if (cnd_) { goto L_0888BCF8; }
    goto L_0888BCD8;
L_0888BCD8:;
    cnd_ = (s32)t2 <= 0;
    ST16(s0+656, 0);
    if (cnd_) { goto L_0888BCF0; }
    goto L_0888BCE0;
L_0888BCE0:;
    v0 = LD_U16(t0+2);
    v0 = v0 - 1;
    ST32(s0+652, v0);
    goto L_0888BBC8;
L_0888BCF0:;
    ST32(s0+652, 0);
    goto L_0888BBC8;
L_0888BCF8:;
    a1 = LD_U16(t0+2);
    goto L_0888BCB4;
L_0888BD00:;
    v0 = LD32(s0+652);
    v1 = (u32)(s32)LD_S16(s0+664);
    v0 = v0 + v1;
    cnd_ = (s32)v1 <= 0;
    ST32(s0+652, v0);
    if (cnd_) { goto L_0888BD30; }
    goto L_0888BD14;
L_0888BD14:;
    v1 = LD_U16(t0+2);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+180)); goto L_0888BBCC; }
    goto L_0888BD24;
L_0888BD24:;
    v0 = v1 - 1;
    ST32(s0+652, v0);
    goto L_0888BC58;
L_0888BD30:;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(s0+180)); goto L_0888BBCC; }
    goto L_0888BD38;
L_0888BD38:;
    ST32(s0+652, 0);
    goto L_0888BC58;
}

/* 0888BD40 */
rv_t func_0888BD40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888BD40:;
    sp = sp - 16;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888BD50;
L_0888BD50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BD5C */
rv_t func_0888BD5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888BD5C:;
    sp = sp - 16;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888BD6C;
L_0888BD6C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BD7C */
rv_t func_0888BD7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888BD7C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BD84 */
rv_t func_0888BD84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888BD84:;
    sp = sp - 16;
    a3 = a1 + 0;
    v1 = LD32(a3+12);
    a1 = LD32(a0+144);
    cnd_ = v1 == a1;
    v0 = 2007;
    if (cnd_) { goto L_0888BDAC; }
    goto L_0888BDA0;
L_0888BDA0:;
    v1 = LD32(a3+4);
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(a3+16); goto L_0888BDBC; }
    goto L_0888BDAC;
L_0888BDAC:;
    goto L_0888BDB0;
L_0888BDB0:;
    v0 = 1;
    goto L_0888BDB4;
L_0888BDB4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888BDBC:;
    t0 = LD_U16(a3+2);
    v0 = 1;
    a1 = LD_U8(a3+16);
    a2 = (v1 >> 8) & 0xff;
    cnd_ = t0 == v0;
    a3 = v1 >> 16;
    if (cnd_) { goto L_0888BE10; }
    goto L_0888BDD4;
L_0888BDD4:;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_0888BDB4; }
    goto L_0888BDDC;
L_0888BDDC:;
    v0 = 2;
    cnd_ = t0 == v0;
    v0 = 3;
    if (cnd_) { goto L_0888BE00; }
    goto L_0888BDE8;
L_0888BDE8:;
    cnd_ = t0 != v0;
    v0 = 1;
    if (cnd_) { goto L_0888BDB4; }
    goto L_0888BDF0;
L_0888BDF0:;
    func_0888C3A4(a0);
    goto L_0888BDF8;
L_0888BDF8:;
    goto L_0888BDB0;
L_0888BE00:;
    { u64 r_ = func_0888C304(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888BE08;
L_0888BE08:;
    goto L_0888BDB0;
L_0888BE10:;
    { u64 r_ = func_0888C288(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888BE18;
L_0888BE18:;
    goto L_0888BDB0;
}

/* 0888BE20 */
rv_t func_0888BE20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888BE20:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BE28 */
rv_t func_0888BE28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888BE28:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BE30 */
rv_t func_0888BE30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888BE30:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BE38 */
rv_t func_0888BE38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888BE38:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BE40 */
rv_t func_0888BE40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888BE40:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888BE48 */
u32 func_0888BE48(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0888BE48:;
    sp = sp - 96;
    fp = 0 + 0;
    s7 = 0 + 0;
    s6 = a1 + 0;
    s5 = 0xffff;
    s3 = sp + 0;
    s2 = a0 + 0;
    f23 = f15;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    v1 = LD32(a0+600);
    a3 = LD32(a2+12);
    v0 = LD32(a2);
    a0 = LD32(a2+4);
    a2 = LD32(a2+8);
    v1 = v1 < 0x8u;
    ST32(sp, v0);
    ST32(sp+4, a0);
    ST32(sp+8, a2);
    cnd_ = v1 == 0;
    ST32(sp+12, a3);
    if (cnd_) { goto L_0888BF28; }
    goto L_0888BED8;
L_0888BED8:;
    v0 = LD32(s2+52);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0888BF1C; }
    goto L_0888BEE4;
L_0888BEE4:;
    s4 = 1001;
    v0 = LD32(s2+48);
    goto L_0888BEEC;
L_0888BEEC:;
    v1 = s1 << 2;
    s1 = s1 + 1;
    v1 = v1 + v0;
    s0 = LD32(v1);
    a0 = s0 + 0;
    v0 = func_08888FD8(a0);
    goto L_0888BF04;
L_0888BF04:;
    cnd_ = v0 == s4;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888C0AC; }
    goto L_0888BF0C;
L_0888BF0C:;
    v0 = LD32(s2+52);
    goto L_0888BF10;
L_0888BF10:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+48); goto L_0888BEEC; }
    goto L_0888BF1C;
L_0888BF1C:;
    v0 = 1;
    cnd_ = fp == v0;
    if (cnd_) { v0 = LD32(s2+600); goto L_0888BF6C; }
    goto L_0888BF28;
L_0888BF28:;
    v0 = s5 + 0;
    sp = sp + 96;
    return v0;
L_0888BF6C:;
    s1 = 52;
    a0 = s7 + 0;
    { s64 p_ = (s64)(s32)v0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    fp = sp + 16;
    v0 = lo;
    v0 = v0 + s2;
    ST32(v0+200, s6);
    s0 = LD32(s2+600);
    { s64 p_ = (s64)(s32)s0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s0 = lo;
    s0 = s0 + s2;
    v0 = func_08880ACC(a0);
    goto L_0888BF9C;
L_0888BF9C:;
    ST32(s0+184, v0);
    a0 = fp + 0;
    a1 = s7 + 0;
    v0 = LD32(s2+600);
    { s64 p_ = (s64)(s32)v0 * (s32)s1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s4 = s2 + v0;
    func_08880A48(a0, a1);
    goto L_0888BFBC;
L_0888BFBC:;
    a0 = LD32(s4+188);
    s0 = s4 + 188;
    cnd_ = a0 == 0;
    s1 = LD32(sp+16);
    if (cnd_) { goto L_0888BFE0; }
    goto L_0888BFCC;
L_0888BFCC:;
    cnd_ = s1 == a0;
    if (cnd_) { goto L_0888C01C; }
    goto L_0888BFD4;
L_0888BFD4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888BFDC;
L_0888BFDC:;
    ST32(s4+188, 0);
    goto L_0888BFE0;
L_0888BFE0:;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0888C0A4; }
    goto L_0888BFEC;
L_0888BFEC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888BFF4;
L_0888BFF4:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C008;
L_0888C008:;
    cnd_ = v0 != 0;
    ST32(s4+188, v0);
    if (cnd_) { goto L_0888C090; }
    goto L_0888C010;
L_0888C010:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_0888C018;
L_0888C018:;
    s1 = LD32(sp+16);
    goto L_0888C01C;
L_0888C01C:;
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s2+600); goto L_0888C034; }
    goto L_0888C024;
L_0888C024:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C02C;
L_0888C02C:;
    ST32(sp+16, 0);
    a0 = LD32(s2+600);
    goto L_0888C034;
L_0888C034:;
    v0 = 52;
    ST32(fp+4, 0);
    { s64 p_ = (s64)(s32)a0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = a0 + 1;
    s5 = a0 + 0;
    ST32(s2+600, v1);
    v0 = lo;
    v0 = v0 + s2;
    ST32(v0+220, FBITS(f20));
    a1 = v0 + 204;
    ST32(v0+224, FBITS(f21));
    ST32(v0+228, FBITS(f22));
    ST32(v0+232, FBITS(f23));
    a0 = LD32(s3);
    ST32(fp+8, 0);
    ST32(v0+204, a0);
    v1 = LD32(s3+4);
    ST32(a1+4, v1);
    v0 = LD32(s3+8);
    ST32(a1+8, v0);
    v1 = LD32(s3+12);
    ST32(a1+12, v1);
    goto L_0888BF28;
L_0888C090:;
    a1 = s1 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C09C;
L_0888C09C:;
    s1 = LD32(sp+16);
    goto L_0888C01C;
L_0888C0A4:;
    ST32(s4+188, 0);
    goto L_0888C018;
L_0888C0AC:;
    v0 = func_08880710(a0);
    goto L_0888C0B4;
L_0888C0B4:;
    cnd_ = v0 != s6;
    if (cnd_) { v0 = LD32(s2+52); goto L_0888BF10; }
    goto L_0888C0BC;
L_0888C0BC:;
    s7 = s0 + 0;
    fp = 1;
    goto L_0888BF1C;
}

/* 0888C0C8 */
rv_t func_0888C0C8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888C0C8:;
    sp = sp - 32;
    v1 = (u32)-1;
    s2 = a1 & 0xffff;
    s3 = 0 < s2;
    s1 = 0 + 0;
    s0 = a0 + 0;
    goto L_0888C0F4;
L_0888C0F4:;
    v0 = LD32(s0+608);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+612, FBITS(f12)); goto L_0888C130; }
    goto L_0888C100;
L_0888C100:;
    s1 = s1 + 1;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    s0 = s0 + 12;
    if (cnd_) { goto L_0888C0F4; }
    goto L_0888C110;
L_0888C110:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888C130:;
    a0 = s2 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C138;
L_0888C138:;
    ST32(s0+608, v0);
    a0 = 0 + 0;
    cnd_ = s3 == 0;
    ST16(s0+604, s2);
    if (cnd_) { goto L_0888C164; }
    goto L_0888C148;
L_0888C148:;
    v1 = v0 + 0;
    a1 = (u32)-1;
    goto L_0888C150;
L_0888C150:;
    a0 = a0 + 1;
    v0 = a0 < s2;
    ST32(v1, a1);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0888C150; }
    goto L_0888C164;
L_0888C164:;
    v1 = s1 + 0;
    ST16(s0+606, 0);
    goto L_0888C110;
}

/* 0888C170 */
void func_0888C170(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C170:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    sp = sp - 16;
    v0 = v0 << 2;
    a1 = a1 < 0x4u;
    v1 = 0 + 0;
    s0 = v0 + a0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0888C1A4; }
    goto L_0888C198;
L_0888C198:;
    v0 = LD32(s0+608);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888C1B8; }
    goto L_0888C1A4;
L_0888C1A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_0888C1B8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C1C0;
L_0888C1C0:;
    v0 = s0 + 592;
    ST16(v0+12, 0);
    v1 = 1;
    ST32(s0+608, 0);
    ST32(s0+612, 0);
    ST16(v0+14, 0);
    goto L_0888C1A4;
}

/* 0888C1DC */
void func_0888C1DC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    int cnd_;
L_0888C1DC:;
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 2;
    a3 = v0 + a0;
    a1 = a1 < 0x4u;
    a0 = a3 + 592;
    cnd_ = a1 == 0;
    t1 = 0 + 0;
    if (cnd_) { goto L_0888C230; }
    goto L_0888C1FC;
L_0888C1FC:;
    v0 = LD_U16(a0+14);
    v1 = LD_U16(a0+12);
    a1 = v0 + 1;
    v0 = v0 & 0xffff;
    t0 = v0 << 2;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888C230; }
    goto L_0888C21C;
L_0888C21C:;
    v0 = LD32(a3+608);
    ST16(a0+14, a1);
    t1 = 1;
    v0 = t0 + v0;
    ST32(v0, a2);
    goto L_0888C230;
L_0888C230:;
    v0 = t1 + 0;
    return;
}

/* 0888C238 */
u64 func_0888C238(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0888C238:;
    a1 = (u32)(s32)(s16)a1;
    v0 = a1 << 1;
    v0 = v0 + a1;
    a1 = a1 & 0xffff;
    v0 = v0 << 2;
    a1 = a1 < 0x4u;
    v1 = v0 + a0;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0888C264; }
    goto L_0888C25C;
L_0888C25C:;
    v0 = LD32(v1+608);
    v0 = 0 < v0;
    goto L_0888C264;
L_0888C264:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888C26C */
void func_0888C26C(u32 a0, float f12)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_0888C26C:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+176, FBITS(f12)); goto L_0888C280; }
    goto L_0888C280;
L_0888C280:;
    return;
}

/* 0888C288 */
u64 func_0888C288(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888C288:;
    sp = sp - 32;
    s3 = a1 + 0;
    a1 = (u32)(s32)(s16)a1;
    s2 = a2 & 0xffff;
    s1 = a3 & 0xffff;
    s0 = a0 + 0;
    { u64 r_ = func_0888C238(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C2B8;
L_0888C2B8:;
    v1 = v0 + 0;
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0888C2E4; }
    goto L_0888C2C8;
L_0888C2C8:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0888C2E4:;
    ST16(s0+662, s1);
    ST16(s0+656, s2);
    cnd_ = s2 == v0;
    ST16(s0+660, s1);
    if (cnd_) { goto L_0888C2FC; }
    goto L_0888C2F4;
L_0888C2F4:;
    ST16(s0+666, s3);
    goto L_0888C2C8;
L_0888C2FC:;
    ST16(s0+658, v1);
    goto L_0888C2F4;
}

/* 0888C304 */
u64 func_0888C304(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888C304:;
    sp = sp - 32;
    s4 = a1 + 0;
    a1 = (u32)(s32)(s16)a1;
    s3 = a3 & 0xffff;
    s1 = a2 & 0xffff;
    s0 = a0 + 0;
    { u64 r_ = func_0888C238(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C338;
L_0888C338:;
    s2 = v0 + 0;
    v0 = 1;
    a1 = 1;
    cnd_ = s2 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888C36C; }
    goto L_0888C34C;
L_0888C34C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0888C36C:;
    ST16(s0+656, s1);
    ST16(s0+662, s3);
    ST16(s0+660, s3);
    func_0888C3B4(a0, a1);
    goto L_0888C37C;
L_0888C37C:;
    a0 = s0 + 0;
    v0 = func_0888C3E4(a0);
    goto L_0888C384;
L_0888C384:;
    v1 = LD_U16(s0+656);
    v0 = v0 - 1;
    ST32(s0+652, v0);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { ST16(s0+658, s2); goto L_0888C39C; }
    goto L_0888C39C;
L_0888C39C:;
    ST16(s0+666, s4);
    goto L_0888C34C;
}

/* 0888C3A4 */
void func_0888C3A4(u32 a0)
{
L_0888C3A4:;
    ST16(a0+662, 0);
    ST16(a0+656, 0);
    ST16(a0+660, 0);
    return;
}

/* 0888C3B4 */
void func_0888C3B4(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0888C3B4:;
    a1 = a1 & 0xff;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v0 = (u32)-1; goto L_0888C3C4; }
    goto L_0888C3C4;
L_0888C3C4:;
    ST16(a0+664, v0);
    return;
}

/* 0888C3CC */
u32 func_0888C3CC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    u32 hi = 0, lo = 0;
L_0888C3CC:;
    v0 = 52;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a1 = lo;
    v0 = a0 + a1;
    v0 = v0 + 184;
    return v0;
}

/* 0888C3E4 */
u32 func_0888C3E4(u32 a0)
{
    u32 v0 = 0;
L_0888C3E4:;
    v0 = LD32(a0+600);
    return v0;
}

/* 0888C3EC */
float func_0888C3EC(u32 a0)
{
    float f0 = 0;
L_0888C3EC:;
    f0 = BITSF(LD32(a0+176));
    return f0;
}

/* 0888C3F4 */
rv_t func_0888C3F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[384] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 384);
L_0888C3F4:;
    sp = sp - 384;
    a3 = (u32)-1;
    s3 = a0 + 0;
    s1 = a1 + 0;
    s4 = 0 + 0;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C440;
L_0888C440:;
    a0 = s3 + 0;
    a1 = s1 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C450;
L_0888C450:;
    a0 = s1 + 0;
    a1 = sp + 292;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C45C;
L_0888C45C:;
    v1 = LD32(sp+292);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888C598; }
    goto L_0888C468;
L_0888C468:;
    s2 = sp + 32;
    s5 = sp + 16;
    fp = sp + 20;
    s6 = sp + 24;
    s7 = sp + 28;
    s0 = sp + 0;
    goto L_0888C480;
L_0888C480:;
    a1 = sp + 296;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C488;
L_0888C488:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = 256;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0888C498;
L_0888C498:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0888C4C4; }
    goto L_0888C4A4;
L_0888C4A4:;
    cnd_ = s2 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888C500; }
    goto L_0888C4AC;
L_0888C4AC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888C4C0; }
    goto L_0888C4B4;
L_0888C4B4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C4BC;
L_0888C4BC:;
    ST32(sp, 0);
    goto L_0888C4C0;
L_0888C4C0:;
    a0 = s2 + 0;
    goto L_0888C4C4;
L_0888C4C4:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C4D0;
L_0888C4D0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C4E4;
L_0888C4E4:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0888C690; }
    goto L_0888C4F4;
L_0888C4F4:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    a0 = s1 + 0;
    goto L_0888C500;
L_0888C500:;
    a1 = s5 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C508;
L_0888C508:;
    a0 = s1 + 0;
    a1 = fp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C514;
L_0888C514:;
    a0 = s1 + 0;
    a1 = s6 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C520;
L_0888C520:;
    a0 = s1 + 0;
    a1 = s7 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C52C;
L_0888C52C:;
    a0 = s1 + 0;
    a1 = sp + 300;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C538;
L_0888C538:;
    a0 = s1 + 0;
    a1 = sp + 304;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C544;
L_0888C544:;
    a0 = s1 + 0;
    a1 = sp + 308;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C550;
L_0888C550:;
    a1 = sp + 312;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C55C;
L_0888C55C:;
    a0 = LD32(sp+296);
    s4 = s4 + 1;
    { u64 r_ = func_0883A8BC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C568;
L_0888C568:;
    f12 = BITSF(LD32(sp+300));
    f13 = BITSF(LD32(sp+304));
    f14 = BITSF(LD32(sp+308));
    f15 = BITSF(LD32(sp+312));
    a1 = v0 + 0;
    a0 = s3 + 0;
    a2 = s5 + 0;
    v0 = func_0888BE48(a0, a1, a2, f12, f13, f14, f15);
    goto L_0888C588;
L_0888C588:;
    v1 = LD32(sp+292);
    v1 = s4 < v1;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888C480; }
    goto L_0888C598;
L_0888C598:;
    a1 = sp + 316;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C5A0;
L_0888C5A0:;
    v0 = LD32(sp+316);
    cnd_ = v0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_0888C60C; }
    goto L_0888C5AC;
L_0888C5AC:;
    s6 = sp + 288;
    s5 = sp + 290;
    a0 = s1 + 0;
    goto L_0888C5B8;
L_0888C5B8:;
    a1 = sp + 320;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C5C0;
L_0888C5C0:;
    a0 = s1 + 0;
    a1 = s6 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C5CC;
L_0888C5CC:;
    a0 = s1 + 0;
    a1 = s5 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C5D8;
L_0888C5D8:;
    a1 = LD_U16(sp+288);
    f12 = BITSF(LD32(sp+320));
    a0 = s3 + 0;
    s0 = 0 + 0;
    { rv_t r_ = func_0888C0C8(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C5EC;
L_0888C5EC:;
    s2 = v0 + 0;
    v0 = LD_U16(sp+290);
    cnd_ = v0 != 0;
    v0 = LD32(sp+316);
    if (cnd_) { goto L_0888C658; }
    goto L_0888C5FC;
L_0888C5FC:;
    s4 = s4 + 1;
    v0 = s4 < v0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888C5B8; }
    goto L_0888C60C;
L_0888C60C:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0888C648; }
    goto L_0888C618;
L_0888C618:;
    sp = sp + 384;
    return (rv_t){ v0, v1, f0 };
L_0888C648:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C650;
L_0888C650:;
    ST32(sp, 0);
    goto L_0888C618;
L_0888C658:;
    a0 = s1 + 0;
    goto L_0888C65C;
L_0888C65C:;
    a1 = sp + 324;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C664;
L_0888C664:;
    a2 = LD32(sp+324);
    a0 = s3 + 0;
    a1 = s2 + 0;
    func_0888C1DC(a0, a1, a2);
    goto L_0888C674;
L_0888C674:;
    v1 = LD_U16(sp+290);
    s0 = s0 + 1;
    v1 = s0 < v1;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888C65C; }
    goto L_0888C688;
L_0888C688:;
    v0 = LD32(sp+316);
    goto L_0888C5FC;
L_0888C690:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C698;
L_0888C698:;
    a0 = s1 + 0;
    goto L_0888C500;
}

/* 0888C6A0 */
rv_t func_0888C6A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888C6A0:;
    return (rv_t){ v0, v1, f0 };
}

/* 0888C6A8 */
rv_t func_0888C6A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C6A8:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v0 = func_08888FD8(a0);
    goto L_0888C6C8;
L_0888C6C8:;
    v1 = 1001;
    a0 = s1 + 0;
    a1 = s0 + 0;
    cnd_ = v0 == v1;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888C6F4; }
    goto L_0888C6DC;
L_0888C6DC:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888C6F4:;
    { rv_t r_ = func_08888008(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C6FC;
L_0888C6FC:;
    a2 = 1;
    goto L_0888C6DC;
}

/* 0888C704 */
float func_0888C704(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C704:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_08886850(a0);
    goto L_0888C718;
L_0888C718:;
    v0 = D_08AF7018 - (28696);
    v0 = v0 + 28696;
    v1 = 1;
    ST32(s0, v0);
    v0 = 2;
    a0 = s0 + 160;
    ST8(s0+153, v1);
    a1 = 0 + 0;
    ST32(s0+156, v0);
    ST8(s0+152, v1);
    ST8(s0+154, 0);
    ST8(s0+155, 0);
    goto L_0888C748;
L_0888C748:;
    a1 = a1 + 1;
    v0 = a1 < 0x4u;
    ST32(a0, 0);
    cnd_ = v0 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0888C748; }
    goto L_0888C75C;
L_0888C75C:;
    sp = sp + 16;
    return f0;
}

/* 0888C76C */
u64 func_0888C76C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C76C:;
    v0 = D_08AF7018 - (28696);
    v0 = v0 + 28696;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C788;
L_0888C788:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888C794 */
rv_t func_0888C794(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C794:;
    v0 = D_08AF7018 - (28696);
    v0 = v0 + 28696;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C7B0;
L_0888C7B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888C7BC */
rv_t func_0888C7BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C7BC:;
    v0 = D_08AF7018 - (28696);
    v0 = v0 + 28696;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_08886944(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C7DC;
L_0888C7DC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888C7E4;
L_0888C7E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888C7F4 */
rv_t func_0888C7F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C7F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08886F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C808;
L_0888C808:;
    v0 = 8;
    v1 = LD32(s0+156);
    cnd_ = v1 == v0;
    a0 = (s32)v1 < 9;
    if (cnd_) { goto L_0888C858; }
    goto L_0888C818;
L_0888C818:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0888C844; }
    goto L_0888C820;
L_0888C820:;
    v0 = 32;
    cnd_ = v1 == v0;
    a0 = (s32)v1 < 33;
    if (cnd_) { goto L_0888C844; }
    goto L_0888C82C;
L_0888C82C:;
    cnd_ = a0 == 0;
    if (cnd_) {  goto L_0888C848; }
    goto L_0888C834;
L_0888C834:;
    v0 = 16;
    cnd_ = v1 == v0;
    v0 = 2;
    if (cnd_) { goto L_0888C850; }
    goto L_0888C840;
L_0888C840:;
    goto L_0888C844;
L_0888C844:;
    goto L_0888C848;
L_0888C848:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888C850:;
    ST32(s0+156, v0);
    goto L_0888C840;
L_0888C858:;
    v0 = 32;
    goto L_0888C850;
}

/* 0888C860 */
rv_t func_0888C860(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888C860:;
    sp = sp - 32;
    s3 = a1 + 0;
    v0 = LD32(a0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888C898; }
    goto L_0888C88C;
L_0888C88C:;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0888C8B4; }
    goto L_0888C898;
L_0888C898:;
    goto L_0888C89C;
L_0888C89C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888C8B4:;
    v0 = LD32(s0+48);
    goto L_0888C8B8;
L_0888C8B8:;
    s1 = s2 << 2;
    a1 = LD32(s0+156);
    v0 = s1 + v0;
    a0 = LD32(v0);
    s2 = s2 + 1;
    v0 = func_08888FBC(a0, a1);
    goto L_0888C8D0;
L_0888C8D0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_0888C8F0; }
    goto L_0888C8D8;
L_0888C8D8:;
    v0 = LD32(s0+52);
    goto L_0888C8DC;
L_0888C8DC:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_0888C8B8; }
    goto L_0888C8E8;
L_0888C8E8:;
    goto L_0888C89C;
L_0888C8F0:;
    a1 = LD32(s0+156);
    v0 = s1 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s3 | a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C90C;
L_0888C90C:;
    v0 = func_08901790();
    goto L_0888C914;
L_0888C914:;
    v0 = LD32(s0+52);
    goto L_0888C8DC;
}

/* 0888C91C */
rv_t func_0888C91C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888C91C:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888701C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C938;
L_0888C938:;
    v0 = LD_U8(s0+153);
    ST8(s1+153, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888C954 */
rv_t func_0888C954(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888C954:;
    sp = sp - 32;
    v0 = a1 & 0x1;
    s2 = a0 + 0;
    s1 = 0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888CA50; }
    goto L_0888C97C;
L_0888C97C:;
    v0 = a1 & 0x2;
    cnd_ = v0 != 0;
    v0 = a1 & 0x4;
    if (cnd_) { goto L_0888CA3C; }
    goto L_0888C988;
L_0888C988:;
    cnd_ = v0 != 0;
    v0 = a1 & 0x8;
    if (cnd_) { goto L_0888CA28; }
    goto L_0888C990;
L_0888C990:;
    cnd_ = v0 != 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0888C9B4; }
    goto L_0888C998;
L_0888C998:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888C9B4:;
    a1 = 1;
    { rv_t r_ = func_0888CC44(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C9BC;
L_0888C9BC:;
    s0 = v0 + 0;
    s1 = 8;
    goto L_0888C9C4;
L_0888C9C4:;
    cnd_ = s0 != 0;
    s3 = 1;
    if (cnd_) { goto L_0888C9F0; }
    goto L_0888C9CC;
L_0888C9CC:;
    cnd_ = s3 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0888C998; }
    goto L_0888C9D4;
L_0888C9D4:;
    cnd_ = s0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0888C9E0; }
    goto L_0888C9DC;
L_0888C9DC:;
    a0 = 4;
    goto L_0888C9E0;
L_0888C9E0:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888C9E8;
L_0888C9E8:;
    v0 = s1 + 0;
    goto L_0888C998;
L_0888C9F0:;
    a1 = LD32(s2+144);
    a0 = s0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888CA08;
L_0888CA08:;
    a0 = LD32(s2+144);
    a2 = 5;
    a3 = 0 + 0;
    a1 = a0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888CA20;
L_0888CA20:;
    goto L_0888C9CC;
L_0888CA28:;
    a1 = 0 + 0;
    { rv_t r_ = func_0888CC44(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CA30;
L_0888CA30:;
    s0 = v0 + 0;
    s1 = 4;
    goto L_0888C9C4;
L_0888CA3C:;
    a1 = 3;
    { rv_t r_ = func_0888CC44(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CA44;
L_0888CA44:;
    s0 = v0 + 0;
    s1 = 2;
    goto L_0888C9C4;
L_0888CA50:;
    a1 = 2;
    { rv_t r_ = func_0888CC44(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CA58;
L_0888CA58:;
    s0 = v0 + 0;
    s1 = 1;
    goto L_0888C9C4;
}

/* 0888CA64 */
rv_t func_0888CA64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888CA64:;
    sp = sp - 32;
    s3 = a0 + 0;
    s2 = (u32)-1;
    s0 = a1 + 0;
    { rv_t r_ = func_0888C954(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CA8C;
L_0888CA8C:;
    cnd_ = v0 != 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0888CAF0; }
    goto L_0888CA94;
L_0888CA94:;
    a0 = 4;
    a2 = 1;
    v1 = a2 << (a0 & 31);
    goto L_0888CAA0;
L_0888CAA0:;
    v0 = s0 & v1;
    a0 = a0 + 1;
    cnd_ = v0 == 0;
    a1 = a0 < 0xeu;
    if (cnd_) { goto L_0888CAB8; }
    goto L_0888CAB0;
L_0888CAB0:;
    s2 = v1 + 0;
    s1 = s1 | v1;
    goto L_0888CAB8;
L_0888CAB8:;
    cnd_ = a1 != 0;
    v1 = a2 << (a0 & 31);
    if (cnd_) { goto L_0888CAA0; }
    goto L_0888CAC0;
L_0888CAC0:;
    v0 = (u32)-1;
    cnd_ = s2 == v0;
    v0 = s1 + 0;
    if (cnd_) { goto L_0888CAF4; }
    goto L_0888CACC;
L_0888CACC:;
    s0 = LD32(s3+144);
    a0 = s3 + 0;
    v0 = func_08888FD8(a0);
    goto L_0888CAD8;
L_0888CAD8:;
    a3 = v0 + 0;
    a0 = s0 + 0;
    a1 = s0 + 0;
    t0 = s2 + 0;
    a2 = 3;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888CAF0;
L_0888CAF0:;
    v0 = s1 + 0;
    goto L_0888CAF4;
L_0888CAF4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888CB10 */
rv_t func_0888CB10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888CB10:;
    sp = sp - 16;
    s0 = a1 & 0xff;
    a2 = s0 + 0;
    a1 = 512;
    s1 = a0 + 0;
    s0 = s0 ^ 0x1;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888CB38;
L_0888CB38:;
    ST8(s1+152, s0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888CB50 */
rv_t func_0888CB50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888CB50:;
    sp = sp - 16;
    v1 = LD_U16(a1);
    a2 = a0 + 0;
    v0 = v1 < 0x9u;
    t0 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = LD32(a0+156);
    if (cnd_) { goto L_0888CBA4; }
    goto L_0888CB70;
L_0888CB70:;
    v0 = v1 << 2;
    v1 = D_08AD50DC - (20700);
    v1 = v1 + 20700;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0888CB8Cu: goto L_0888CB8C; case 0x0888CBA4u: goto L_0888CBA4; case 0x0888CBB4u: goto L_0888CBB4; case 0x0888CBC4u: goto L_0888CBC4; case 0x0888CBD4u: goto L_0888CBD4; case 0x0888CBECu: goto L_0888CBEC; case 0x0888CC08u: goto L_0888CC08; case 0x0888CC24u: goto L_0888CC24; case 0x0888CC34u: goto L_0888CC34; default: rs_break(0, 0x0888cb84); }
L_0888CB8C:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    v0 = LD32(v1+152);
    goto L_0888CB98;
L_0888CB98:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CBA0;
L_0888CBA0:;
    t0 = v0 + 0;
    goto L_0888CBA4;
L_0888CBA4:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888CBB4:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    v0 = LD32(v1+160);
    goto L_0888CB98;
L_0888CBC4:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    v0 = LD32(v1+164);
    goto L_0888CB98;
L_0888CBD4:;
    v0 = 1;
    cnd_ = a3 == v0;
    a0 = a2 + 0;
    if (cnd_) { goto L_0888CBA4; }
    goto L_0888CBE0;
L_0888CBE0:;
    v1 = LD32(a2);
    v0 = LD32(v1+168);
    goto L_0888CB98;
L_0888CBEC:;
    v0 = 1;
    cnd_ = a3 == v0;
    ST8(a2+155, v0);
    if (cnd_) { goto L_0888CBA4; }
    goto L_0888CBF8;
L_0888CBF8:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    v0 = LD32(v1+172);
    goto L_0888CB98;
L_0888CC08:;
    v0 = 1;
    cnd_ = a3 == v0;
    ST8(a2+155, 0);
    if (cnd_) { goto L_0888CBA4; }
    goto L_0888CC14;
L_0888CC14:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    v0 = LD32(v1+176);
    goto L_0888CB98;
L_0888CC24:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    v0 = LD32(v1+180);
    goto L_0888CB98;
L_0888CC34:;
    v1 = LD32(a2);
    a0 = a2 + 0;
    v0 = LD32(v1+156);
    goto L_0888CB98;
}

/* 0888CC44 */
rv_t func_0888CC44(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_0888CC44:;
    sp = sp - 272;
    a2 = sp + 0;
    a3 = 0 + 0;
    { rv_t r_ = func_0888CC64(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CC58;
L_0888CC58:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
}

/* 0888CC64 */
rv_t func_0888CC64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888CC64:;
    sp = sp - 32;
    s3 = a1 << 2;
    s2 = a2 + 0;
    s1 = a3 + 0;
    goto L_0888CC88;
L_0888CC88:;
    v0 = s3 + a0;
    s0 = LD32(v0+160);
    cnd_ = s0 == 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_0888CD08; }
    goto L_0888CC98;
L_0888CC98:;
    cnd_ = s1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0888CCC4; }
    goto L_0888CCA0;
L_0888CCA0:;
    v1 = s2 + 0;
    v0 = LD32(v1);
    goto L_0888CCA8;
L_0888CCA8:;
    a1 = a1 + 1;
    a0 = a1 < s1;
    v1 = v1 + 4;
    cnd_ = s0 == v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888CD08; }
    goto L_0888CCBC;
L_0888CCBC:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_0888CCA8; }
    goto L_0888CCC4;
L_0888CCC4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0888B320(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CCCC;
L_0888CCCC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888CD04; }
    goto L_0888CCD4;
L_0888CCD4:;
    v0 = LD_U8(v0+152);
    cnd_ = v0 == 0;
    v0 = s1 < 0x40u;
    if (cnd_) { goto L_0888CCEC; }
    goto L_0888CCE0;
L_0888CCE0:;
    v0 = LD_U8(a0+153);
    cnd_ = v0 != 0;
    v0 = s1 < 0x40u;
    if (cnd_) { goto L_0888CD04; }
    goto L_0888CCEC;
L_0888CCEC:;
    cnd_ = v0 == 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_0888CD04; }
    goto L_0888CCF4;
L_0888CCF4:;
    v0 = v0 + s2;
    s1 = s1 + 1;
    ST32(v0, s0);
    goto L_0888CC88;
L_0888CD04:;
    a2 = s0 + 0;
    goto L_0888CD08;
L_0888CD08:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888CD28 */
void func_0888CD28(u32 a0, u32 a1, u32 a2)
{
L_0888CD28:;
    a1 = a1 << 2;
    a1 = a1 + a0;
    ST32(a1+160, a2);
    return;
}

/* 0888CD38 */
void func_0888CD38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888CD38:;
    sp = sp - 32;
    s3 = a2 + 0;
    a2 = a3 + 0;
    s2 = a1 + 0;
    a1 = 0 + 0;
    s1 = t0 + 0;
    s0 = a0 + 0;
    func_0888CD28(a0, a1, a2);
    goto L_0888CD6C;
L_0888CD6C:;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a1 = 1;
    func_0888CD28(a0, a1, a2);
    goto L_0888CD7C;
L_0888CD7C:;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a1 = 2;
    func_0888CD28(a0, a1, a2);
    goto L_0888CD8C;
L_0888CD8C:;
    a0 = s0 + 0;
    a2 = s3 + 0;
    a1 = 3;
    func_0888CD28(a0, a1, a2);
    goto L_0888CD9C;
L_0888CD9C:;
    sp = sp + 32;
    return;
}

/* 0888CDB8 */
rv_t func_0888CDB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888CDB8:;
    sp = sp - 16;
    s2 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0888CDF4; }
    goto L_0888CDDC;
L_0888CDDC:;
    goto L_0888CDE0;
L_0888CDE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888CDF4:;
    v0 = LD32(s1+48);
    goto L_0888CDF8;
L_0888CDF8:;
    s0 = s2 << 2;
    v0 = s0 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+72);
    t_ = v0;
    s2 = s2 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CE14;
L_0888CE14:;
    v1 = LD32(s1+48);
    s0 = s0 + v1;
    a0 = LD32(s0);
    v0 = LD32(a0);
    v1 = LD32(v0+76);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CE30;
L_0888CE30:;
    v0 = LD32(s1+52);
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+48); goto L_0888CDF8; }
    goto L_0888CE40;
L_0888CE40:;
    goto L_0888CDE0;
}

/* 0888CE48 */
rv_t func_0888CE48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888CE48:;
    sp = sp - 32;
    a2 = 0 + 0;
    s2 = a1 + 0;
    v0 = LD32(a0+144);
    v1 = LD32(a1+8);
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0888CE80; }
    goto L_0888CE78;
L_0888CE78:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0888CEA8; }
    goto L_0888CE80;
L_0888CE80:;
    v1 = LD32(s1);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CE90;
L_0888CE90:;
    cnd_ = v0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0888CEA4; }
    goto L_0888CE98;
L_0888CE98:;
    v0 = LD32(s2+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888CEF4; }
    goto L_0888CEA4;
L_0888CEA4:;
    v0 = LD32(s1+52);
    goto L_0888CEA8;
L_0888CEA8:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0888CEF0; }
    goto L_0888CEB0;
L_0888CEB0:;
    s3 = 1;
    v1 = LD32(s1+48);
    goto L_0888CEB8;
L_0888CEB8:;
    v0 = s0 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+108);
    t_ = v0;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888CED8;
L_0888CED8:;
    cnd_ = v0 == s3;
    a2 = v0 + 0;
    if (cnd_) { goto L_0888CF10; }
    goto L_0888CEE0;
L_0888CEE0:;
    v0 = LD32(s1+52);
    goto L_0888CEE4;
L_0888CEE4:;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+48); goto L_0888CEB8; }
    goto L_0888CEF0;
L_0888CEF0:;
    goto L_0888CEF4;
L_0888CEF4:;
    v0 = a2 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888CF10:;
    v0 = LD32(s2+8);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0888CEE4; }
    goto L_0888CF1C;
L_0888CF1C:;
    goto L_0888CEF4;
}

/* 0888CF24 */
rv_t func_0888CF24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888CF24:;
    sp = sp - 16;
    s2 = 0 + 0;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888CF6C; }
    goto L_0888CF48;
L_0888CF48:;
    v0 = 2;
    goto L_0888CF4C;
L_0888CF4C:;
    ST32(s0+156, v0);
    v0 = 0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888CF6C:;
    v0 = LD32(s0+48);
    goto L_0888CF70;
L_0888CF70:;
    s1 = s2 << 2;
    s2 = s2 + 1;
    v0 = s1 + v0;
    a0 = LD32(v0);
    v0 = func_08888FD8(a0);
    goto L_0888CF84;
L_0888CF84:;
    v0 = v0 < 0x7d0u;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_0888CFA8; }
    goto L_0888CF90;
L_0888CF90:;
    v0 = LD32(s0+52);
    goto L_0888CF94;
L_0888CF94:;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_0888CF70; }
    goto L_0888CFA0;
L_0888CFA0:;
    v0 = 2;
    goto L_0888CF4C;
L_0888CFA8:;
    v0 = s1 + v0;
    a0 = LD32(v0);
    v0 = func_08888FD8(a0);
    goto L_0888CFB4;
L_0888CFB4:;
    v0 = v0 < 0xbb8u;
    a2 = 7;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0888CF90; }
    goto L_0888CFC8;
L_0888CFC8:;
    v0 = LD32(s0+48);
    a1 = LD32(s0+144);
    v0 = s1 + v0;
    v1 = LD32(v0);
    a0 = LD32(v1+144);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888CFE0;
L_0888CFE0:;
    v0 = LD32(s0+52);
    goto L_0888CF94;
}

/* 0888CFE8 */
rv_t func_0888CFE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888CFE8:;
    sp = sp - 32;
    a3 = (u32)-1;
    s3 = a1 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_08888454(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D014;
L_0888D014:;
    a0 = s2 + 0;
    a1 = s3 + 0;
    v0 = func_088888F4(a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0888D020;
L_0888D020:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    a2 = 10003;
    s4 = v0 + 0;
    v0 = func_08888990(a1, a2);
    goto L_0888D034;
L_0888D034:;
    v1 = 1;
    cnd_ = v0 == v1;
    s1 = 0 + 0;
    if (cnd_) { goto L_0888D060; }
    goto L_0888D040;
L_0888D040:;
    goto L_0888D044;
L_0888D044:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888D060:;
    s0 = s2 + 160;
    goto L_0888D064;
L_0888D064:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D074;
L_0888D074:;
    v1 = s1 < 0x4u;
    cnd_ = v1 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0888D064; }
    goto L_0888D080;
L_0888D080:;
    cnd_ = s4 == 0;
    if (cnd_) {  goto L_0888D044; }
    goto L_0888D088;
L_0888D088:;
    a1 = s2 + 153;
    a0 = s3 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D094;
L_0888D094:;
    goto L_0888D044;
}

/* 0888D09C */
void func_0888D09C(u32 a0)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D09C:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0888D0B0;
L_0888D0B0:;
    v0 = D_08AF70E0 - (28896);
    v0 = v0 + 28896;
    ST32(s0, v0);
    v0 = 1;
    a0 = s0 + 184;
    ST32(s0+176, v0);
    ST32(s0+180, 0);
    func_0887EBB0(a0);
    goto L_0888D0D0;
L_0888D0D0:;
    v0 = 2001;
    ST32(s0+4, v0);
    ST32(s0+192, 0);
    ST32(s0+196, 0);
    sp = sp + 16;
    return;
}

/* 0888D0F0 */
rv_t func_0888D0F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D0F0:;
    v0 = D_08AF70E0 - (28896);
    v0 = v0 + 28896;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 184;
    func_0887EBCC(a0, t1, t2, t3);
    goto L_0888D114;
L_0888D114:;
    a0 = s0 + 0;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D11C;
L_0888D11C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D12C */
rv_t func_0888D12C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D12C:;
    v0 = D_08AF70E0 - (28896);
    v0 = v0 + 28896;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 184;
    func_0887EBCC(a0, t1, t2, t3);
    goto L_0888D150;
L_0888D150:;
    a0 = s0 + 0;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D158;
L_0888D158:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D160;
L_0888D160:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D170 */
rv_t func_0888D170(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888D170:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    { u64 r_ = func_08887518(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D194;
L_0888D194:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0888D21C; }
    goto L_0888D19C;
L_0888D19C:;
    a0 = v0 + 0;
    f0 = func_08885CB4(a0);
    goto L_0888D1A4;
L_0888D1A4:;
    f21 = f0;
    f0 = BITSF(LD32(s0+192));
    fcc = FCMP(f21, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0888D1C0; }
    goto L_0888D1BC;
L_0888D1BC:;
    v0 = 0 + 0;
    goto L_0888D1C0;
L_0888D1C0:;
    ST8(s0+112, v0);
    f12 = f20;
    a0 = s0 + 0;
    { rv_t r_ = func_08886F58(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D1D0;
L_0888D1D0:;
    v0 = LD_U8(s0+152);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+156); goto L_0888D1EC; }
    goto L_0888D1DC;
L_0888D1DC:;
    v0 = LD_U8(s0+153);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_0888D2E4; }
    goto L_0888D1E8;
L_0888D1E8:;
    v1 = LD32(s0+156);
    goto L_0888D1EC;
L_0888D1EC:;
    v0 = 8;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 9;
    if (cnd_) { goto L_0888D238; }
    goto L_0888D1F8;
L_0888D1F8:;
    cnd_ = v0 == 0;
    v0 = 32;
    if (cnd_) { goto L_0888D244; }
    goto L_0888D200;
L_0888D200:;
    cnd_ = (s32)v1 <= 0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_0888D21C; }
    goto L_0888D208;
L_0888D208:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888D220; }
    goto L_0888D210;
L_0888D210:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 32;
    if (cnd_) { goto L_0888D23C; }
    goto L_0888D21C;
L_0888D21C:;
    goto L_0888D220;
L_0888D220:;
    goto L_0888D224;
L_0888D224:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888D238:;
    v0 = 32;
    goto L_0888D23C;
L_0888D23C:;
    ST32(s0+156, v0);
    goto L_0888D21C;
L_0888D244:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 33;
    if (cnd_) { goto L_0888D268; }
    goto L_0888D24C;
L_0888D24C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888D220; }
    goto L_0888D254;
L_0888D254:;
    v0 = 16;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0888D224; }
    goto L_0888D260;
L_0888D260:;
    v0 = 2;
    goto L_0888D23C;
L_0888D268:;
    v0 = LD_U8(s0+152);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0888D284; }
    goto L_0888D274;
L_0888D274:;
    v0 = LD_U8(s0+153);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888D220; }
    goto L_0888D280;
L_0888D280:;
    s1 = 0 + 0;
    goto L_0888D284;
L_0888D284:;
    a1 = s1 + 0;
    goto L_0888D288;
L_0888D288:;
    a0 = s0 + 0;
    s1 = s1 + 1;
    { rv_t r_ = func_0888CC44(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D294;
L_0888D294:;
    cnd_ = v0 != 0;
    v1 = s1 < 0x4u;
    if (cnd_) { goto L_0888D2AC; }
    goto L_0888D29C;
L_0888D29C:;
    cnd_ = v1 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0888D288; }
    goto L_0888D2A4;
L_0888D2A4:;
    goto L_0888D220;
L_0888D2AC:;
    a1 = LD32(s0+144);
    a0 = v0 + 0;
    a2 = 4;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D2C4;
L_0888D2C4:;
    a0 = LD32(s0+144);
    a2 = 5;
    a3 = 0 + 0;
    a1 = a0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D2DC;
L_0888D2DC:;
    goto L_0888D220;
L_0888D2E4:;
    a1 = 2;
    v0 = func_0888D7F8(a0, a1);
    goto L_0888D2EC;
L_0888D2EC:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0+156); goto L_0888D1EC; }
    goto L_0888D2F4;
L_0888D2F4:;
    f0 = BITSF(LD32(s0+196));
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s0+156); goto L_0888D1EC; }
    goto L_0888D308;
L_0888D308:;
    { u64 r_ = func_0888AC8C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D310;
L_0888D310:;
    v1 = LD32(s1+144);
    cnd_ = v0 != v1;
    v1 = LD32(s0+156);
    if (cnd_) { goto L_0888D1EC; }
    goto L_0888D31C;
L_0888D31C:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) {  goto L_0888D220; }
    goto L_0888D328;
L_0888D328:;
    a0 = s0 + 0;
    a1 = 16;
    { rv_t r_ = func_0888D4B0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D334;
L_0888D334:;
    goto L_0888D220;
}

/* 0888D33C */
rv_t func_0888D33C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D33C:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D358;
L_0888D358:;
    a0 = s0 + 0;
    v0 = func_0888D840(a0);
    goto L_0888D360;
L_0888D360:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_0888D848(a0, a1);
    goto L_0888D36C;
L_0888D36C:;
    a0 = s0 + 0;
    v0 = func_0888D7F0(a0);
    goto L_0888D374;
L_0888D374:;
    ST32(s1+180, v0);
    a0 = s1 + 184;
    a1 = s0 + 184;
    { u64 r_ = func_0887F0C0(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D384;
L_0888D384:;
    f0 = BITSF(LD32(s0+196));
    f1 = BITSF(LD32(s0+192));
    ST32(s1+196, FBITS(f0));
    ST32(s1+192, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D3A8 */
rv_t func_0888D3A8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D3A8:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D3BC;
L_0888D3BC:;
    a0 = s0 + 0;
    v0 = func_0888D824(a0);
    goto L_0888D3C4;
L_0888D3C4:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888D3E4; }
    goto L_0888D3CC;
L_0888D3CC:;
    ST8(s0+112, 0);
    goto L_0888D3D0;
L_0888D3D0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888D3E4:;
    { u64 r_ = func_08887518(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D3EC;
L_0888D3EC:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0888D3CC; }
    goto L_0888D3F8;
L_0888D3F8:;
    func_0888560C(a0, a1);
    goto L_0888D400;
L_0888D400:;
    ST8(s0+112, 0);
    goto L_0888D3D0;
}
