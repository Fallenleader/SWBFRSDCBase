#include "game.h"

/* 0888D408 */
rv_t func_0888D408(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D408:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0888D824(a0);
    goto L_0888D41C;
L_0888D41C:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888D43C; }
    goto L_0888D424;
L_0888D424:;
    ST8(s0+112, 0);
    goto L_0888D428;
L_0888D428:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888D43C:;
    { u64 r_ = func_08887518(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D444;
L_0888D444:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0888D424; }
    goto L_0888D450;
L_0888D450:;
    func_08885614(a0);
    goto L_0888D458;
L_0888D458:;
    ST8(s0+112, 0);
    goto L_0888D428;
}

/* 0888D460 */
rv_t func_0888D460(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888D460:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D468 */
rv_t func_0888D468(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888D468:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D470 */
rv_t func_0888D470(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D470:;
    sp = sp - 16;
    v0 = LD_U8(a0+152);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888D490; }
    goto L_0888D484;
L_0888D484:;
    v0 = LD_U8(a0+153);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888D4A0; }
    goto L_0888D490;
L_0888D490:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888D4A0:;
    a1 = LD32(a1+16);
    { rv_t r_ = func_0888D4B0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D4A8;
L_0888D4A8:;
    a2 = 1;
    goto L_0888D490;
}

/* 0888D4B0 */
rv_t func_0888D4B0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888D4B0:;
    sp = sp - 48;
    v0 = 4;
    s2 = 16;
    s1 = a1 + 0;
    a1 = sp + 0;
    s4 = 0 + 0;
    s3 = 1;
    s0 = a0 + 0;
    cnd_ = s1 == s2;
    ST32(a0+156, v0);
    if (cnd_) { goto L_0888D57C; }
    goto L_0888D4F0;
L_0888D4F0:;
    a0 = s0 + 0;
    a1 = 128;
    v0 = func_08887500(a0, a1);
    goto L_0888D4FC;
L_0888D4FC:;
    v1 = 1;
    cnd_ = v0 == v1;
    a3 = 2001;
    if (cnd_) { goto L_0888D55C; }
    goto L_0888D508;
L_0888D508:;
    a0 = s0 + 184;
    goto L_0888D50C;
L_0888D50C:;
    a1 = s1 + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_0887EDFC(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D518;
L_0888D518:;
    cnd_ = s4 != 0;
    if (cnd_) { goto L_0888D53C; }
    goto L_0888D520;
L_0888D520:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0888D53C:;
    a0 = LD32(s0+144);
    { rv_t r_ = func_0888B370(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D544;
L_0888D544:;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0888D520; }
    goto L_0888D54C;
L_0888D54C:;
    a0 = LD32(v0+144);
    { u64 r_ = func_0888AF68(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D554;
L_0888D554:;
    goto L_0888D520;
L_0888D55C:;
    t0 = 0 + 0;
    a0 = (u32)-1;
    cnd_ = s1 != s2;
    a2 = 3;
    if (cnd_) { goto L_0888D508; }
    goto L_0888D56C;
L_0888D56C:;
    a1 = LD32(s0+144);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D574;
L_0888D574:;
    a0 = s0 + 184;
    goto L_0888D50C;
L_0888D57C:;
    ST8(sp, 0);
    v0 = func_0888D5DC(a0, a1);
    goto L_0888D584;
L_0888D584:;
    s4 = v0 + 0;
    v0 = LD_U8(sp);
    s3 = v0 ^ 0x1;
    goto L_0888D4F0;
}

/* 0888D594 */
rv_t func_0888D594(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888D594:;
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D5A4 */
rv_t func_0888D5A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888D5A4:;
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D5B4 */
rv_t func_0888D5B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0888D5B4:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0888D5D0; }
    goto L_0888D5C0;
L_0888D5C0:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_0888D5D0;
L_0888D5D0:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 0888D5DC */
u32 func_0888D5DC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888D5DC:;
    sp = sp - 48;
    s3 = a1 + 0;
    s2 = a0 + 0;
    v0 = func_0888D7F0(a0);
    goto L_0888D610;
L_0888D610:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    ST8(s3, 0);
    if (cnd_) { goto L_0888D75C; }
    goto L_0888D61C;
L_0888D61C:;
    a0 = v0 + 0;
    { rv_t r_ = func_0888B288(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D624;
L_0888D624:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0888D6A4; }
    goto L_0888D62C;
L_0888D62C:;
    a0 = LD32(s2+144);
    s7 = 1;
    { rv_t r_ = func_0888B370(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D638;
L_0888D638:;
    a0 = s1 + 0;
    s6 = v0 + 0;
    { rv_t r_ = func_0888B370(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D644;
L_0888D644:;
    a0 = s0 + 0;
    s5 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_0888D650;
L_0888D650:;
    cnd_ = v0 == s7;
    s4 = v0 + 0;
    if (cnd_) { goto L_0888D70C; }
    goto L_0888D658;
L_0888D658:;
    cnd_ = s6 == s5;
    if (cnd_) { a1 = LD32(s2+144); goto L_0888D6D8; }
    goto L_0888D660;
L_0888D660:;
    a0 = s2 + 0;
    func_0888D79C(a0);
    goto L_0888D668;
L_0888D668:;
    ST8(s3, s7);
    a0 = s2 + 0;
    v0 = func_0888D808(a0);
    goto L_0888D674;
L_0888D674:;
    v0 = v0 ^ 0x1;
    a0 = LD32(s5+144);
    v0 = v0 & 0xff;
    a1 = s1 + 0;
    a3 = v0 + 0;
    a2 = 1;
    { rv_t r_ = func_0888ADD8(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D690;
L_0888D690:;
    a0 = s2 + 0;
    a1 = 1;
    v0 = func_0888D7F8(a0, a1);
    goto L_0888D69C;
L_0888D69C:;
    cnd_ = v0 == s7;
    v1 = 0 < s6;
    if (cnd_) { goto L_0888D6A8; }
    goto L_0888D6A4;
L_0888D6A4:;
    v1 = 0 + 0;
    goto L_0888D6A8;
L_0888D6A8:;
    goto L_0888D6AC;
L_0888D6AC:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_0888D6D8:;
    a0 = s1 + 0;
    a2 = 4;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D6EC;
L_0888D6EC:;
    a0 = LD32(s2+144);
    a2 = 5;
    a3 = 0 + 0;
    a1 = a0 + 0;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D704;
L_0888D704:;
    v1 = 0 + 0;
    goto L_0888D6A8;
L_0888D70C:;
    cnd_ = s6 == s0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0888D6A8; }
    goto L_0888D714;
L_0888D714:;
    a0 = s2 + 0;
    func_0888D79C(a0);
    goto L_0888D71C;
L_0888D71C:;
    ST8(s3, s4);
    a0 = s2 + 0;
    v0 = func_0888D808(a0);
    goto L_0888D728;
L_0888D728:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    a2 = v0 + 0;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_0888ADB0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D740;
L_0888D740:;
    a0 = s2 + 0;
    a1 = 1;
    v0 = func_0888D7F8(a0, a1);
    goto L_0888D74C;
L_0888D74C:;
    cnd_ = v0 != s4;
    v1 = 0 < s6;
    if (cnd_) { goto L_0888D6A4; }
    goto L_0888D754;
L_0888D754:;
    goto L_0888D6AC;
L_0888D75C:;
    a0 = s2 + 0;
    a1 = 1;
    v0 = func_0888D7F8(a0, a1);
    goto L_0888D768;
L_0888D768:;
    s0 = v0 + 0;
    v0 = 1;
    cnd_ = s0 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0888D6A8; }
    goto L_0888D778;
L_0888D778:;
    a0 = LD32(s2+144);
    { rv_t r_ = func_0888B370(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D780;
L_0888D780:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = 0 + 0; goto L_0888D6A8; }
    goto L_0888D788;
L_0888D788:;
    a0 = s2 + 0;
    func_0888D79C(a0);
    goto L_0888D790;
L_0888D790:;
    v1 = 1;
    ST8(s3, s0);
    goto L_0888D6A8;
}

/* 0888D79C */
void func_0888D79C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D79C:;
    sp = sp - 16;
    a1 = 2;
    s0 = a0 + 0;
    v0 = func_0888D7F8(a0, a1);
    goto L_0888D7B4;
L_0888D7B4:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888D7CC; }
    goto L_0888D7BC;
L_0888D7BC:;
    goto L_0888D7C0;
L_0888D7C0:;
    sp = sp + 16;
    return;
L_0888D7CC:;
    v0 = func_0888D824(a0);
    goto L_0888D7D4;
L_0888D7D4:;
    cnd_ = v0 != 0;
    a0 = 2;
    if (cnd_) { goto L_0888D7E0; }
    goto L_0888D7DC;
L_0888D7DC:;
    a0 = 1;
    goto L_0888D7E0;
L_0888D7E0:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D7E8;
L_0888D7E8:;
    goto L_0888D7C0;
}

/* 0888D7F0 */
u32 func_0888D7F0(u32 a0)
{
    u32 v0 = 0;
L_0888D7F0:;
    v0 = LD32(a0+180);
    return v0;
}

/* 0888D7F8 */
u32 func_0888D7F8(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_0888D7F8:;
    v0 = LD32(a0+176);
    v0 = v0 & a1;
    v0 = 0 < v0;
    return v0;
}

/* 0888D808 */
u32 func_0888D808(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D808:;
    sp = sp - 16;
    a1 = 4;
    v0 = func_0888D7F8(a0, a1);
    goto L_0888D818;
L_0888D818:;
    sp = sp + 16;
    return v0;
}

/* 0888D824 */
u32 func_0888D824(u32 a0)
{
    u32 v0 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D824:;
    sp = sp - 16;
    a1 = 8;
    v0 = func_0888D7F8(a0, a1);
    goto L_0888D834;
L_0888D834:;
    sp = sp + 16;
    return v0;
}

/* 0888D840 */
u32 func_0888D840(u32 a0)
{
    u32 v0 = 0;
L_0888D840:;
    v0 = LD32(a0+176);
    return v0;
}

/* 0888D848 */
void func_0888D848(u32 a0, u32 a1)
{
L_0888D848:;
    ST32(a0+176, a1);
    return;
}

/* 0888D850 */
rv_t func_0888D850(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888D850:;
    sp = sp - 32;
    s2 = a3 + 0;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D87C;
L_0888D87C:;
    a2 = s0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D88C;
L_0888D88C:;
    a1 = s0 + 180;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D898;
L_0888D898:;
    a1 = s0 + 176;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D8A4;
L_0888D8A4:;
    s3 = s0 + 184;
    v0 = 1;
    a1 = 1;
    cnd_ = s2 == v0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0888D920; }
    goto L_0888D8B8;
L_0888D8B8:;
    v0 = s2 < 0x2u;
    goto L_0888D8BC;
L_0888D8BC:;
    a0 = s0 + 184;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0888D910; }
    goto L_0888D8C8;
L_0888D8C8:;
    v0 = s2 < 0x3u;
    goto L_0888D8CC;
L_0888D8CC:;
    a1 = s0 + 192;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888D8F4; }
    goto L_0888D8D8;
L_0888D8D8:;
    goto L_0888D8DC;
L_0888D8DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888D8F4:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D8FC;
L_0888D8FC:;
    a1 = s0 + 196;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D908;
L_0888D908:;
    goto L_0888D8DC;
L_0888D910:;
    { rv_t r_ = func_0887F000(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D918;
L_0888D918:;
    v0 = s2 < 0x3u;
    goto L_0888D8CC;
L_0888D920:;
    func_0887F14C(a0, a1);
    goto L_0888D928;
L_0888D928:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_0887F160(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D934;
L_0888D934:;
    a0 = v0 + 4;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0888D8B8; }
    goto L_0888D940;
L_0888D940:;
    { rv_t r_ = func_0887DF60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888D948;
L_0888D948:;
    v0 = s2 < 0x2u;
    goto L_0888D8BC;
}

/* 0888D950 */
rv_t func_0888D950(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888D950:;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D958 */
rv_t func_0888D958(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D958:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0888D96C;
L_0888D96C:;
    v0 = D_08AF71A8 - (29096);
    v0 = v0 + 29096;
    v1 = s0 + 180;
    ST32(s0, v0);
    v0 = 2002;
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST8(s0+176, 0);
    ST32(s0+4, v0);
    ST32(s0+180, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888D9A4 */
rv_t func_0888D9A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888D9A4:;
    sp = sp - 16;
    v0 = D_08AF71A8 - (29096);
    v0 = v0 + 29096;
    s0 = a0 + 0;
    s1 = s0 + 180;
    v1 = LD32(a0+180);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0888D9F8; }
    goto L_0888D9D4;
L_0888D9D4:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888D9E4;
L_0888D9E4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888D9F8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DA00;
L_0888DA00:;
    ST32(s0+180, 0);
    goto L_0888D9D4;
}

/* 0888DA08 */
rv_t func_0888DA08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DA08:;
    sp = sp - 16;
    v0 = D_08AF71A8 - (29096);
    v0 = v0 + 29096;
    s0 = a0 + 0;
    s1 = s0 + 180;
    v1 = LD32(a0+180);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_0888DA64; }
    goto L_0888DA38;
L_0888DA38:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DA48;
L_0888DA48:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DA50;
L_0888DA50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888DA64:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DA6C;
L_0888DA6C:;
    ST32(s0+180, 0);
    goto L_0888DA38;
}

/* 0888DA74 */
rv_t func_0888DA74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888DA74:;
    sp = sp - 32;
    s5 = a1 + 0;
    v0 = LD32(a0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888DAEC; }
    goto L_0888DAA8;
L_0888DAA8:;
    v0 = LD32(a0+52);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0888DAEC; }
    goto L_0888DAB4;
L_0888DAB4:;
    s4 = 1;
    v0 = LD32(s0+48);
    goto L_0888DABC;
L_0888DABC:;
    s1 = s3 << 2;
    a1 = LD32(s0+156);
    v0 = s1 + v0;
    a0 = LD32(v0);
    s3 = s3 + 1;
    v0 = func_08888FBC(a0, a1);
    goto L_0888DAD4;
L_0888DAD4:;
    cnd_ = v0 == s4;
    s2 = v0 + 0;
    if (cnd_) { goto L_0888DB10; }
    goto L_0888DADC;
L_0888DADC:;
    v0 = LD32(s0+52);
    goto L_0888DAE0;
L_0888DAE0:;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_0888DABC; }
    goto L_0888DAEC;
L_0888DAEC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888DB10:;
    v0 = LD32(s0+48);
    a1 = LD_U8(s0+176);
    v0 = s1 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_08888370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DB24;
L_0888DB24:;
    cnd_ = v0 != s2;
    if (cnd_) { v0 = LD32(s0+52); goto L_0888DAE0; }
    goto L_0888DB2C;
L_0888DB2C:;
    v0 = LD32(s0+48);
    a1 = LD32(s0+156);
    v0 = s1 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s5 | a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DB4C;
L_0888DB4C:;
    v0 = func_08901790();
    goto L_0888DB54;
L_0888DB54:;
    v0 = LD32(s0+52);
    goto L_0888DAE0;
}

/* 0888DB5C */
rv_t func_0888DB5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DB5C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08886F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DB70;
L_0888DB70:;
    v0 = 8;
    v1 = LD32(s0+156);
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 9;
    if (cnd_) { goto L_0888DBB4; }
    goto L_0888DB80;
L_0888DB80:;
    cnd_ = v0 == 0;
    v0 = 32;
    if (cnd_) { goto L_0888DBC0; }
    goto L_0888DB88;
L_0888DB88:;
    cnd_ = (s32)v1 <= 0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_0888DBA4; }
    goto L_0888DB90;
L_0888DB90:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888DBA8; }
    goto L_0888DB98;
L_0888DB98:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 32;
    if (cnd_) { goto L_0888DBB8; }
    goto L_0888DBA4;
L_0888DBA4:;
    goto L_0888DBA8;
L_0888DBA8:;
    goto L_0888DBAC;
L_0888DBAC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888DBB4:;
    v0 = 32;
    goto L_0888DBB8;
L_0888DBB8:;
    ST32(s0+156, v0);
    goto L_0888DBA4;
L_0888DBC0:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 33;
    if (cnd_) { goto L_0888DBA4; }
    goto L_0888DBC8;
L_0888DBC8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888DBA8; }
    goto L_0888DBD0;
L_0888DBD0:;
    v0 = 16;
    cnd_ = v1 != v0;
    if (cnd_) {  goto L_0888DBAC; }
    goto L_0888DBDC;
L_0888DBDC:;
    v0 = 2;
    goto L_0888DBB8;
}

/* 0888DBE4 */
rv_t func_0888DBE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DBE4:;
    sp = sp - 16;
    s1 = a1 + 0;
    s1 = s1 + 180;
    s0 = a0 + 0;
    s0 = s0 + 180;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DC08;
L_0888DC08:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0887E394(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DC14;
L_0888DC14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DC28 */
rv_t func_0888DC28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DC28:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DC3C;
L_0888DC3C:;
    a0 = s0 + 0;
    func_0888DEC0(a0, 0, 0, 0);
    goto L_0888DC44;
L_0888DC44:;
    a1 = LD32(s0+144);
    a0 = (u32)-1;
    a2 = 2;
    a3 = 2002;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DC5C;
L_0888DC5C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DC70 */
rv_t func_0888DC70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DC70:;
    sp = sp - 16;
    a1 = 64;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_0888DC88;
L_0888DC88:;
    v1 = 1;
    a0 = (u32)-1;
    a2 = 1;
    cnd_ = v0 == v1;
    a3 = 2002;
    if (cnd_) { goto L_0888DCB0; }
    goto L_0888DC9C;
L_0888DC9C:;
    goto L_0888DCA0;
L_0888DCA0:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888DCB0:;
    a1 = LD32(s0+144);
    t0 = LD_U8(s0+176);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DCBC;
L_0888DCBC:;
    a0 = s0 + 0;
    { rv_t r_ = func_0888DEE0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DCC4;
L_0888DCC4:;
    goto L_0888DCA0;
}

/* 0888DCCC */
rv_t func_0888DCCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DCCC:;
    sp = sp - 16;
    v1 = LD32(a0+144);
    v0 = LD32(a1+12);
    cnd_ = v0 == v1;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888DCF8; }
    goto L_0888DCE4;
L_0888DCE4:;
    v1 = LD32(a1+4);
    v0 = 2002;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a1+16); goto L_0888DD08; }
    goto L_0888DCF4;
L_0888DCF4:;
    a2 = 1;
    goto L_0888DCF8;
L_0888DCF8:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888DD08:;
    v0 = 0 < v0;
    ST8(a0+176, v0);
    { rv_t r_ = func_0888DEE0(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DD14;
L_0888DD14:;
    a2 = 1;
    goto L_0888DCF8;
}

/* 0888DD1C */
rv_t func_0888DD1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DD1C:;
    sp = sp - 16;
    t1 = a0 + 0;
    a2 = 1;
    v1 = LD32(a1+12);
    v0 = LD32(a0+144);
    a3 = 2002;
    a0 = v1 + 0;
    a1 = v0 + 0;
    cnd_ = v1 == v0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0888DD54; }
    goto L_0888DD48;
L_0888DD48:;
    t0 = LD_U8(t1+176);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DD50;
L_0888DD50:;
    t0 = 1;
    goto L_0888DD54;
L_0888DD54:;
    v0 = t0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DD64 */
rv_t func_0888DD64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DD64:;
    sp = sp - 16;
    v0 = 16;
    s0 = a0 + 0;
    v1 = LD32(a1+16);
    cnd_ = v1 == v0;
    a0 = 1;
    if (cnd_) { goto L_0888DDE4; }
    goto L_0888DD84;
L_0888DD84:;
    a0 = s0 + 0;
    v0 = func_08887510(a0);
    goto L_0888DD8C;
L_0888DD8C:;
    v0 = v0 | 0x80;
    ST32(s0+116, v0);
    a0 = s0 + 0;
    a1 = 128;
    v0 = func_08887500(a0, a1);
    goto L_0888DDA0;
L_0888DDA0:;
    v1 = 1;
    a0 = (u32)-1;
    a2 = 1;
    cnd_ = v0 == v1;
    a3 = 2002;
    if (cnd_) { goto L_0888DDC8; }
    goto L_0888DDB4;
L_0888DDB4:;
    goto L_0888DDB8;
L_0888DDB8:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888DDC8:;
    a1 = LD32(s0+144);
    t0 = LD_U8(s0+176);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DDD4;
L_0888DDD4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0888DEE0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DDDC;
L_0888DDDC:;
    goto L_0888DDB8;
L_0888DDE4:;
    v0 = LD_U8(s0+176);
    v0 = v0 ^ 0x1;
    v0 = 0 < v0;
    ST8(s0+176, v0);
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DDF8;
L_0888DDF8:;
    goto L_0888DD84;
}

/* 0888DE00 */
rv_t func_0888DE00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888DE00:;
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DE10 */
rv_t func_0888DE10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888DE10:;
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DE20 */
rv_t func_0888DE20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0888DE20:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0888DE3C; }
    goto L_0888DE2C;
L_0888DE2C:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_0888DE3C;
L_0888DE3C:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 0888DE48 */
rv_t func_0888DE48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DE48:;
    sp = sp - 16;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = a3 + 0;
    a3 = (u32)-1;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DE70;
L_0888DE70:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    s1 = s1 + 180;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DE84;
L_0888DE84:;
    a0 = s1 + 0;
    cnd_ = s0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_0888DEA8; }
    goto L_0888DE90;
L_0888DE90:;
    goto L_0888DE94;
L_0888DE94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888DEA8:;
    { rv_t r_ = func_0887E318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DEB0;
L_0888DEB0:;
    goto L_0888DE94;
}

/* 0888DEB8 */
rv_t func_0888DEB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888DEB8:;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DEC0 */
void func_0888DEC0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DEC0:;
    sp = sp - 16;
    a1 = a0 + 176;
    a0 = a0 + 180;
    func_0887E0EC(a0, a1, t1, t2, t3);
    goto L_0888DED4;
L_0888DED4:;
    sp = sp + 16;
    return;
}

/* 0888DEE0 */
rv_t func_0888DEE0(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DEE0:;
    sp = sp - 16;
    a1 = LD_U8(a0+176);
    a0 = a0 + 180;
    { rv_t r_ = func_0887E20C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888DEF4;
L_0888DEF4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DF00 */
rv_t func_0888DF00(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DF00:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0888DF14;
L_0888DF14:;
    v0 = D_08AF7270 - (29296);
    v1 = 2006;
    v0 = v0 + 29296;
    ST32(s0+4, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DF38 */
rv_t func_0888DF38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DF38:;
    v0 = D_08AF7270 - (29296);
    v0 = v0 + 29296;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DF54;
L_0888DF54:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DF60 */
rv_t func_0888DF60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DF60:;
    v0 = D_08AF7270 - (29296);
    v0 = v0 + 29296;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DF80;
L_0888DF80:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888DF88;
L_0888DF88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888DF98 */
rv_t func_0888DF98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888DF98:;
    sp = sp - 16;
    s2 = a1 + 0;
    v0 = LD32(a0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888DFCC; }
    goto L_0888DFC0;
L_0888DFC0:;
    v0 = LD32(a0+52);
    cnd_ = v0 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_0888DFE4; }
    goto L_0888DFCC;
L_0888DFCC:;
    goto L_0888DFD0;
L_0888DFD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888DFE4:;
    v1 = LD32(s0+48);
    goto L_0888DFE8;
L_0888DFE8:;
    v0 = s1 << 2;
    a1 = s2 + 0;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E008;
L_0888E008:;
    v0 = func_08901790();
    goto L_0888E010;
L_0888E010:;
    v0 = LD32(s0+52);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0+48); goto L_0888DFE8; }
    goto L_0888E020;
L_0888E020:;
    goto L_0888DFD0;
}

/* 0888E028 */
rv_t func_0888E028(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E028:;
    sp = sp - 16;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E048;
L_0888E048:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E058;
L_0888E058:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888E06C */
rv_t func_0888E06C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888E06C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0888E074 */
u32 func_0888E074(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888E074:;
    v1 = LD_U16(a0);
    sp = sp - 32;
    v0 = 48;
    cnd_ = v1 == v0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0888E09C; }
    goto L_0888E08C;
L_0888E08C:;
    v0 = t0 + 0;
    sp = sp + 32;
    return v0;
L_0888E09C:;
    v1 = LD_U16(a0+2);
    v0 = 120;
    a1 = sp + 0;
    cnd_ = v1 != v0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0888E08C; }
    goto L_0888E0B0;
L_0888E0B0:;
    v0 = func_08837CB8(a0, a1, a2);
    goto L_0888E0B8;
L_0888E0B8:;
    v1 = LD32(sp);
    t0 = 0 + 0;
    if (v0 != 0) t0 = v1;
    goto L_0888E08C;
}

/* 0888E0C8 */
u64 func_0888E0C8(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E0C8:;
    sp = sp - 16;
    v0 = func_0888E074(a0);
    goto L_0888E0D8;
L_0888E0D8:;
    v1 = v0 + 0;
    a0 = 0x5ac30000u;
    a0 = a0 | 0xa2c4;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0888E0FC; }
    goto L_0888E0EC;
L_0888E0EC:;
    v0 = LD32(v1);
    v0 = v0 ^ a0;
    if (v0 != 0) v1 = 0;
    v0 = v1 + 0;
    goto L_0888E0FC;
L_0888E0FC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888E108 */
u64 func_0888E108(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E108:;
    sp = sp - 16;
    v0 = func_0888E074(a0);
    goto L_0888E118;
L_0888E118:;
    v1 = v0 + 0;
    a0 = 0xc91b0000u;
    a0 = a0 | 0x7788;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0888E13C; }
    goto L_0888E12C;
L_0888E12C:;
    v0 = LD32(v1);
    v0 = v0 ^ a0;
    if (v0 != 0) v1 = 0;
    v0 = v1 + 0;
    goto L_0888E13C;
L_0888E13C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888E148 */
rv_t func_0888E148(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E148:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0888E15C;
L_0888E15C:;
    v0 = D_08AF74C8 - (29896);
    v1 = 2011;
    v0 = v0 + 29896;
    ST32(s0+4, v1);
    ST32(s0, v0);
    ST32(s0+176, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888E184 */
u64 func_0888E184(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_0888E184:;
    v1 = LD32(a0+176);
    a1 = 0 + 0;
    v0 = v1 + 196;
    cnd_ = v1 == 0;
    v0 = v0 ^ a0;
    if (cnd_) { goto L_0888E19C; }
    goto L_0888E198;
L_0888E198:;
    a1 = v0 < 0x1u;
    goto L_0888E19C;
L_0888E19C:;
    v0 = a1 + 0;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888E1A4 */
rv_t func_0888E1A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888E1A4:;
    sp = sp - 48;
    s0 = a0 + 0;
    a1 = s0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E1C8;
L_0888E1C8:;
    v0 = LD32(s0+176);
    a0 = sp + 16;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_0888E1FC; }
    goto L_0888E1D8;
L_0888E1D8:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E1EC;
L_0888E1EC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0888E1FC:;
    v0 = LD32(v0);
    v1 = LD32(v0+44);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E20C;
L_0888E20C:;
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
    goto L_0888E1D8;
}

/* 0888E240 */
rv_t func_0888E240(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0888E240:;
    sp = sp - 64;
    a2 = D_08B29C9C - (-25444);
    s4 = sp + 16;
    s3 = a0 + 0;
    s2 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+124);
    t_ = v0;
    a1 = LD32(a2-25444);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E27C;
L_0888E27C:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888E2C8; }
    goto L_0888E288;
L_0888E288:;
    v0 = func_08888FD8(a0);
    goto L_0888E290;
L_0888E290:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_0888E29C;
L_0888E29C:;
    a1 = s1 + 0;
    cnd_ = s0 == v0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0888E330; }
    goto L_0888E2A8;
L_0888E2A8:;
    v1 = LD32(s3);
    v0 = LD32(v1+128);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E2B8;
L_0888E2B8:;
    v1 = LD32(s1);
    v0 = LD32(v1+4);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E2C8;
L_0888E2C8:;
    a0 = s2 + 0;
    ST32(sp, 0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    ST32(sp+12, 0);
    v0 = func_08888FD8(a0);
    goto L_0888E2E0;
L_0888E2E0:;
    a0 = v0 + 0;
    a1 = sp + 0;
    v0 = func_0888A0E0(a0, a1, 0, 0, 0);
    goto L_0888E2EC;
L_0888E2EC:;
    v1 = LD32(v0);
    s1 = v0 + 0;
    a0 = v0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E304;
L_0888E304:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_08889044(a0, a1);
    goto L_0888E310;
L_0888E310:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_088892FC(a0, a1, 0, 0, 0);
    goto L_0888E31C;
L_0888E31C:;
    v1 = LD32(s3);
    a0 = s3 + 0;
    v0 = LD32(v1+116);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E330;
L_0888E330:;
    v1 = LD32(s2);
    a1 = s2 + 0;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E344;
L_0888E344:;
    v1 = LD32(s1);
    a1 = s4 + 0;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E358;
L_0888E358:;
    v0 = s1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 0888E37C */
rv_t func_0888E37C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E37C:;
    sp = sp - 16;
    v0 = D_08B29C98 - (-25448);
    s1 = a1 + 0;
    s0 = a0 + 0;
    a2 = LD32(v0-25448);
    v0 = D_08B29C9C - (-25444);
    a1 = LD32(v0-25444);
    v1 = LD32(a2);
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E3B4;
L_0888E3B4:;
    a1 = v0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888E3D4; }
    goto L_0888E3C0;
L_0888E3C0:;
    goto L_0888E3C4;
L_0888E3C4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888E3D4:;
    { rv_t r_ = func_0888E240(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E3DC;
L_0888E3DC:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0888E3C0; }
    goto L_0888E3E8;
L_0888E3E8:;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E3F0;
L_0888E3F0:;
    goto L_0888E3C4;
}

/* 0888E3F8 */
rv_t func_0888E3F8(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E3F8:;
    sp = sp - 16;
    v0 = D_08B29C98 - (-25448);
    s1 = a1 + 0;
    s0 = a0 + 0;
    a2 = LD32(v0-25448);
    v0 = D_08B29C9C - (-25444);
    a1 = LD32(v0-25444);
    v1 = LD32(a2);
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E430;
L_0888E430:;
    a1 = v0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888E450; }
    goto L_0888E43C;
L_0888E43C:;
    goto L_0888E440;
L_0888E440:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888E450:;
    { rv_t r_ = func_0888E240(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E458;
L_0888E458:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888E43C; }
    goto L_0888E464;
L_0888E464:;
    { u64 r_ = func_0888E108(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E46C;
L_0888E46C:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888E43C; }
    goto L_0888E478;
L_0888E478:;
    a1 = LD32(v0+4);
    func_0887FF20(a0, a1);
    goto L_0888E480;
L_0888E480:;
    a1 = LD32(s1+8);
    a2 = LD32(s1+12);
    a0 = s0 + 0;
    f0 = func_0887FF88(a0, a1, a2, 0);
    goto L_0888E490;
L_0888E490:;
    v0 = LD32(s0+160);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888E4F4; }
    goto L_0888E49C;
L_0888E49C:;
    v0 = LD_U8(s1+29);
    goto L_0888E4A0;
L_0888E4A0:;
    a1 = s1 + 16;
    a0 = s0 + 0;
    a3 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = s0 + 184;
    if (cnd_) { goto L_0888E4CC; }
    goto L_0888E4B4;
L_0888E4B4:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(s1+16));
    f2 = BITSF(LD32(a1+4));
    ST32(v1+8, FBITS(f0));
    ST32(s0+184, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    goto L_0888E4CC;
L_0888E4CC:;
    v0 = LD_U8(s1+28);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0888E440; }
    goto L_0888E4D8;
L_0888E4D8:;
    v0 = D_08B1C2C8 - (-15672);
    v1 = D_08B1C2CC - (-15668);
    a1 = LD32(v0-15672);
    a2 = LD32(v1-15668);
    { rv_t r_ = func_0887FBB0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E4EC;
L_0888E4EC:;
    goto L_0888E440;
L_0888E4F4:;
    f0 = func_0887F434(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0888E4FC;
L_0888E4FC:;
    v0 = LD_U8(s1+29);
    goto L_0888E4A0;
}

/* 0888E504 */
rv_t func_0888E504(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888E504:;
    sp = sp - 32;
    v0 = D_08B29C98 - (-25448);
    s1 = a1 + 0;
    s0 = a0 + 0;
    a2 = LD32(v0-25448);
    v0 = D_08B29C9C - (-25444);
    a1 = LD32(v0-25444);
    v1 = LD32(a2);
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E540;
L_0888E540:;
    a1 = v0 + 0;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0888E564; }
    goto L_0888E54C;
L_0888E54C:;
    goto L_0888E550;
L_0888E550:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888E564:;
    { rv_t r_ = func_0888E240(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E56C;
L_0888E56C:;
    s2 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888E54C; }
    goto L_0888E578;
L_0888E578:;
    { u64 r_ = func_0888E0C8(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E580;
L_0888E580:;
    s1 = v0 + 0;
    a2 = v0 + 12;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0888E54C; }
    goto L_0888E594;
L_0888E594:;
    v0 = LD32(v0+8);
    ST32(s2+160, v0);
    func_08880A24(a0, a1, a2);
    goto L_0888E5A0;
L_0888E5A0:;
    a0 = s2 + 0;
    a1 = 1;
    a2 = s1 + 20;
    func_08880A24(a0, a1, a2);
    goto L_0888E5B0;
L_0888E5B0:;
    v0 = LD_U8(s1+4);
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_0888E54C; }
    goto L_0888E5C0;
L_0888E5C0:;
    v0 = LD32(s0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E5D0;
L_0888E5D0:;
    f0 = BITSF(LD32(s1+28));
    v1 = LD32(s2);
    a0 = s2 + 0;
    ST32(sp, FBITS(f0));
    a1 = sp + 0;
    f0 = BITSF(LD32(s1+32));
    v0 = LD32(v1+36);
    t_ = v0;
    ST32(sp+4, FBITS(f0));
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E5F4;
L_0888E5F4:;
    a1 = s1 + 36;
    a0 = s2 + 0;
    func_088801B4(a0, a1);
    goto L_0888E600;
L_0888E600:;
    goto L_0888E550;
}

/* 0888E608 */
u32 func_0888E608(u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_0888E608:;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0888E618; }
    goto L_0888E610;
L_0888E610:;
    v0 = LD32(a1+4);
    v0 = 0 < v0;
    goto L_0888E618;
L_0888E618:;
    return v0;
}

/* 0888E620 */
u32 func_0888E620(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 288);
L_0888E620:;
    sp = sp - 288;
    t0 = a1 + 0;
    a1 = D_08AD5100 - (20736);
    a1 = a1 + 20736;
    s3 = a0 + 0;
    a0 = sp + 0;
    s2 = a2 + 0;
    a3 = 1;
    a2 = 12;
    fp = D_08B29C94 - (-25452);
    s5 = 1;
    s4 = D_08B29C9C - (-25444);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E688;
L_0888E688:;
    v0 = D_08B29C98 - (-25448);
    v1 = LD32(s2);
    ST32(v0-25448, s2);
    ST32(fp-25452, s3);
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E6A4;
L_0888E6A4:;
    s6 = v0 + 0;
    ST32(s4-25444, 0);
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_0888E72C; }
    goto L_0888E6B4;
L_0888E6B4:;
    s7 = sp + 16;
    goto L_0888E6B8;
L_0888E6B8:;
    v1 = LD32(s2);
    a1 = LD32(a0-25444);
    v0 = LD32(v1+124);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E6CC;
L_0888E6CC:;
    a1 = LD32(v0+144);
    s1 = v0 + 0;
    a0 = s2 + 0;
    v0 = func_0888EA94(a0, a1);
    goto L_0888E6DC;
L_0888E6DC:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08888FD8(a0);
    goto L_0888E6E8;
L_0888E6E8:;
    v1 = v0 + 0;
    v0 = 1002;
    cnd_ = v1 == v0;
    v0 = v1 < 0x3ebu;
    if (cnd_) { goto L_0888E908; }
    goto L_0888E6F8;
L_0888E6F8:;
    cnd_ = v0 == 0;
    v0 = 1004;
    if (cnd_) { goto L_0888E878; }
    goto L_0888E700;
L_0888E700:;
    v0 = 1001;
    cnd_ = v1 == v0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0888E77C; }
    goto L_0888E70C;
L_0888E70C:;
    cnd_ = s5 == 0;
    v0 = LD32(s4-25444);
    if (cnd_) { goto L_0888E72C; }
    goto L_0888E714;
L_0888E714:;
    v0 = v0 + 1;
    ST32(s4-25444, v0);
    s4 = D_08B29C9C - (-25444);
    v0 = v0 < s6;
    cnd_ = v0 != 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_0888E6B8; }
    goto L_0888E72C;
L_0888E72C:;
    v0 = s5 + 0;
    ST32(fp-25452, 0);
    v1 = D_08B29C98 - (-25448);
    ST32(s4-25444, 0);
    ST32(v1-25448, 0);
    sp = sp + 288;
    return v0;
L_0888E77C:;
    a1 = s0 + 0;
    v0 = func_0888E608(a1);
    goto L_0888E784;
L_0888E784:;
    cnd_ = v0 == 0;
    v0 = ((u32)(uintptr_t)func_08AB1790) - (6032);
    if (cnd_) { goto L_0888E7A8; }
    goto L_0888E78C;
L_0888E78C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = v0 + 6032;
    goto L_0888E798;
L_0888E798:;
    { rv_t r_ = func_0887DED0(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E7A0;
L_0888E7A0:;
    s5 = s5 & v0;
    goto L_0888E70C;
L_0888E7A8:;
    a0 = s1 + 0;
    v0 = func_08880710(a0);
    goto L_0888E7B0;
L_0888E7B0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E7C0;
L_0888E7C0:;
    ST32(sp+160, v0);
    a0 = s1 + 0;
    a1 = 0 + 0;
    f22 = BITSF(LD32(sp+160));
    ST32(sp+164, v1);
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E7D8;
L_0888E7D8:;
    a0 = s1 + 0;
    ST32(sp+180, v1);
    a1 = 1;
    f21 = BITSF(LD32(sp+180));
    ST32(sp+176, v0);
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E7F0;
L_0888E7F0:;
    a0 = s1 + 0;
    ST32(sp+192, v0);
    a1 = 1;
    f20 = BITSF(LD32(sp+192));
    ST32(sp+196, v1);
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E808;
L_0888E808:;
    a2 = D_08AD5104 - (20740);
    ST32(sp+212, v1);
    v1 = 0x5ac30000u;
    a1 = a2 + 20740;
    f0 = BITSF(LD32(sp+212));
    v1 = v1 | 0xa2c4;
    a0 = s7 + 0;
    a2 = 32;
    a3 = 1;
    t0 = sp + 112;
    ST32(sp+208, v0);
    ST32(sp+112, v1);
    ST32(sp+120, s0);
    ST32(sp+124, FBITS(f22));
    ST32(sp+128, FBITS(f21));
    ST32(sp+132, FBITS(f20));
    ST32(sp+136, FBITS(f0));
    ST8(sp+116, 0);
    ST32(sp+140, 0);
    ST32(sp+144, 0);
    ST32(sp+148, 0);
    ST32(sp+152, 0);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E864;
L_0888E864:;
    a0 = s3 + 0;
    a1 = s7 + 0;
    { rv_t r_ = func_0888E504(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E870;
L_0888E870:;
    goto L_0888E70C;
L_0888E878:;
    cnd_ = v1 != v0;
    a0 = s3 + 0;
    if (cnd_) { goto L_0888E70C; }
    goto L_0888E880;
L_0888E880:;
    a1 = s0 + 0;
    v0 = func_0888E608(a1);
    goto L_0888E888;
L_0888E888:;
    cnd_ = v0 == 0;
    if (cnd_) { t2 = LD32(s1+172); goto L_0888E8A4; }
    goto L_0888E890;
L_0888E890:;
    v0 = ((u32)(uintptr_t)func_08AB17B8) - (6072);
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = v0 + 6072;
    goto L_0888E798;
L_0888E8A4:;
    v1 = LD32(s1+164);
    t1 = LD32(s1+168);
    a2 = D_08AD5104 - (20740);
    v0 = 0xc91b0000u;
    a0 = s7 + 0;
    a1 = a2 + 20740;
    v0 = v0 | 0x7788;
    a2 = 32;
    a3 = 1;
    t0 = sp + 80;
    ST32(sp+80, v0);
    ST32(sp+84, v1);
    ST32(sp+88, t1);
    ST32(sp+92, t2);
    ST32(sp+104, 0);
    ST32(sp+100, 0);
    ST32(sp+96, 0);
    ST8(sp+108, 0);
    ST8(sp+109, 0);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E8F4;
L_0888E8F4:;
    a0 = s3 + 0;
    a1 = s7 + 0;
    { rv_t r_ = func_0888E3F8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E900;
L_0888E900:;
    goto L_0888E70C;
L_0888E908:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    v0 = func_0888E608(a1);
    goto L_0888E914;
L_0888E914:;
    cnd_ = v0 == 0;
    v1 = ((u32)(uintptr_t)func_08AB1768) - (5992);
    if (cnd_) { goto L_0888E92C; }
    goto L_0888E91C;
L_0888E91C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = v1 + 5992;
    goto L_0888E798;
L_0888E92C:;
    a0 = s1 + 0;
    v0 = func_08883814(a0);
    goto L_0888E934;
L_0888E934:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888E958; }
    goto L_0888E93C;
L_0888E93C:;
    a0 = s1 + 0;
    v0 = func_08883814(a0);
    goto L_0888E944;
L_0888E944:;
    a0 = s3 + 0;
    goto L_0888E948;
L_0888E948:;
    a1 = v0 + 0;
    { rv_t r_ = func_0888E37C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E950;
L_0888E950:;
    goto L_0888E70C;
L_0888E958:;
    a0 = s1 + 0;
    v0 = func_08883844(a0);
    goto L_0888E960;
L_0888E960:;
    a0 = s3 + 0;
    goto L_0888E948;
}

/* 0888E968 */
rv_t func_0888E968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E968:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08888008(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E984;
L_0888E984:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0888E9A4; }
    goto L_0888E990;
L_0888E990:;
    { u64 r_ = func_0888E184(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888E998;
L_0888E998:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_0888E9BC; }
    goto L_0888E9A0;
L_0888E9A0:;
    v1 = 1;
    goto L_0888E9A4;
L_0888E9A4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888E9BC:;
    { rv_t r_ = func_088876E0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E9C4;
L_0888E9C4:;
    a1 = LD32(s1+144);
    a0 = LD32(s0+176);
    f0 = func_08890128(a0, a1, 0, 0, 0);
    goto L_0888E9D0;
L_0888E9D0:;
    v1 = 1;
    goto L_0888E9A4;
}

/* 0888E9D8 */
rv_t func_0888E9D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888E9D8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_088880C8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888E9F4;
L_0888E9F4:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0888EA14; }
    goto L_0888EA00;
L_0888EA00:;
    { u64 r_ = func_0888E184(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EA08;
L_0888EA08:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+144); goto L_0888EA2C; }
    goto L_0888EA10;
L_0888EA10:;
    v1 = 1;
    goto L_0888EA14;
L_0888EA14:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888EA2C:;
    a0 = LD32(s0+176);
    f0 = func_088901EC(a0, a1, 0, 0, 0);
    goto L_0888EA34;
L_0888EA34:;
    v1 = 1;
    goto L_0888EA14;
}

/* 0888EA3C */
rv_t func_0888EA3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888EA3C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_0888E184(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EA60;
L_0888EA60:;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_0888EA84; }
    goto L_0888EA6C;
L_0888EA6C:;
    goto L_0888EA70;
L_0888EA70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888EA84:;
    a0 = LD32(s2+176);
    { u64 r_ = func_088902CC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EA8C;
L_0888EA8C:;
    goto L_0888EA70;
}

/* 0888EA94 */
u32 func_0888EA94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888EA94:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0+176);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0888EAB8; }
    goto L_0888EAAC;
L_0888EAAC:;
    v0 = func_08890108(a0, a1);
    goto L_0888EAB4;
L_0888EAB4:;
    v1 = v0 + 0;
    goto L_0888EAB8;
L_0888EAB8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 0888EAC8 */
rv_t func_0888EAC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888EAC8:;
    sp = sp - 16;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888EAE8;
L_0888EAE8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888EAF8;
L_0888EAF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888EB0C */
void func_0888EB0C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888EB0C:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0888EB24;
L_0888EB24:;
    v0 = D_08AF7400 - (29696);
    v0 = v0 + 29696;
    ST32(s0, v0);
    v0 = D_08AEC1B8 - (-15944);
    s1 = s0 + 196;
    f0 = BITSF(LD32(v0-15944));
    v0 = D_08AEC1BC - (-15940);
    ST32(s0+176, 0);
    a0 = s1 + 0;
    ST32(s0+188, FBITS(f0));
    f0 = BITSF(LD32(v0-15940));
    ST32(s0+180, 0);
    ST32(s0+192, FBITS(f0));
    ST32(s0+184, 0);
    { rv_t r_ = func_0888E148(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888EB60;
L_0888EB60:;
    v0 = 1;
    ST32(s0+412, v0);
    a0 = s0 + 424;
    ST32(s0+376, 0);
    ST32(s0+380, 0);
    ST32(s0+392, 0);
    ST32(s0+396, 0);
    ST32(s0+400, 0);
    ST32(s0+404, 0);
    ST32(s0+408, 0);
    ST32(s0+416, 0);
    ST8(s0+420, 0);
    ST8(s0+421, 0);
    func_0887EBB0(a0);
    goto L_0888EB98;
L_0888EB98:;
    v1 = s0 + 432;
    v0 = 2010;
    ST32(s1+176, s0);
    ST32(s0+384, 0);
    ST32(v1+4, 0);
    ST32(v1+16, 0);
    ST32(s0+432, 0);
    ST32(s0+4, v0);
    ST32(s0+388, 0);
    ST32(v1+20, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    sp = sp + 16;
    return;
}

/* 0888EBDC */
u64 func_0888EBDC(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888EBDC:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0888EBF4;
L_0888EBF4:;
    v0 = D_08AF7400 - (29696);
    v0 = v0 + 29696;
    ST32(s0, v0);
    v0 = D_08AEC1C0 - (-15936);
    s1 = s0 + 196;
    f0 = BITSF(LD32(v0-15936));
    v0 = D_08AEC1C4 - (-15932);
    ST32(s0+176, 0);
    a0 = s1 + 0;
    ST32(s0+188, FBITS(f0));
    f0 = BITSF(LD32(v0-15932));
    ST32(s0+180, 0);
    ST32(s0+192, FBITS(f0));
    ST32(s0+184, 0);
    { rv_t r_ = func_0888E148(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888EC30;
L_0888EC30:;
    v0 = 1;
    ST32(s0+412, v0);
    a0 = s0 + 424;
    ST32(s0+376, 0);
    ST32(s0+380, 0);
    ST32(s0+392, 0);
    ST32(s0+396, 0);
    ST32(s0+400, 0);
    ST32(s0+404, 0);
    ST32(s0+408, 0);
    ST32(s0+416, 0);
    ST8(s0+420, 0);
    ST8(s0+421, 0);
    func_0887EBB0(a0);
    goto L_0888EC68;
L_0888EC68:;
    v1 = s0 + 432;
    v0 = 2010;
    ST32(s1+176, s0);
    ST32(s0+384, 0);
    ST32(v1+4, 0);
    ST32(v1+16, 0);
    ST32(s0+432, 0);
    ST32(s0+4, v0);
    ST32(s0+388, 0);
    ST32(v1+20, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888ECAC */
u64 func_0888ECAC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888ECAC:;
    v0 = D_08AF7400 - (29696);
    v0 = v0 + 29696;
    ST32(a0, v0);
    sp = sp - 32;
    s1 = a0 + 0;
    s2 = a0 + 432;
    { u64 r_ = func_08890080(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888ECE0;
L_0888ECE0:;
    s0 = LD32(s1+432);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s2+12); goto L_0888ED38; }
    goto L_0888ECEC;
L_0888ECEC:;
    a1 = LD32(s0+28);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0888EDCC; }
    goto L_0888ECF8;
L_0888ECF8:;
    a1 = LD32(s0+32);
    goto L_0888ECFC;
L_0888ECFC:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0888EDBC; }
    goto L_0888ED04;
L_0888ED04:;
    a0 = LD32(s0+16);
    goto L_0888ED08;
L_0888ED08:;
    s4 = s0 + 4;
    cnd_ = a0 != 0;
    s3 = s0 + 16;
    if (cnd_) { goto L_0888EDAC; }
    goto L_0888ED14;
L_0888ED14:;
    a0 = LD32(s0+4);
    ST32(s3+4, 0);
    cnd_ = a0 != 0;
    ST32(s3+8, 0);
    if (cnd_) { goto L_0888ED9C; }
    goto L_0888ED24;
L_0888ED24:;
    ST32(s4+4, 0);
    a0 = s0 + 0;
    ST32(s4+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888ED34;
L_0888ED34:;
    a0 = LD32(s2+12);
    goto L_0888ED38;
L_0888ED38:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0888ED8C; }
    goto L_0888ED40;
L_0888ED40:;
    ST32(s2+16, 0);
    goto L_0888ED44;
L_0888ED44:;
    a0 = s1 + 424;
    ST32(s2+12, 0);
    func_0887EBCC(a0, 0, 0, 0);
    goto L_0888ED50;
L_0888ED50:;
    v0 = D_08AF74C8 - (29896);
    v0 = v0 + 29896;
    ST32(s1+196, v0);
    a0 = s1 + 196;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888ED64;
L_0888ED64:;
    a0 = s1 + 0;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888ED6C;
L_0888ED6C:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0888ED8C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888ED94;
L_0888ED94:;
    ST32(s2+16, 0);
    goto L_0888ED44;
L_0888ED9C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EDA4;
L_0888EDA4:;
    ST32(s0+4, 0);
    goto L_0888ED24;
L_0888EDAC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EDB4;
L_0888EDB4:;
    ST32(s0+16, 0);
    goto L_0888ED14;
L_0888EDBC:;
    a0 = s2 + 0;
    func_08AB1850(a0, a1, 0, 0, 0);
    goto L_0888EDC4;
L_0888EDC4:;
    a0 = LD32(s0+16);
    goto L_0888ED08;
L_0888EDCC:;
    a0 = s2 + 0;
    func_08AB1850(a0, a1, 0, 0, 0);
    goto L_0888EDD4;
L_0888EDD4:;
    a1 = LD32(s0+32);
    goto L_0888ECFC;
}

/* 0888EDDC */
rv_t func_0888EDDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888EDDC:;
    v0 = D_08AF7400 - (29696);
    v0 = v0 + 29696;
    ST32(a0, v0);
    sp = sp - 32;
    s1 = a0 + 0;
    s2 = a0 + 432;
    { u64 r_ = func_08890080(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EE10;
L_0888EE10:;
    s0 = LD32(s1+432);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s2+12); goto L_0888EE68; }
    goto L_0888EE1C;
L_0888EE1C:;
    a1 = LD32(s0+28);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0888EEFC; }
    goto L_0888EE28;
L_0888EE28:;
    a1 = LD32(s0+32);
    goto L_0888EE2C;
L_0888EE2C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0888EEEC; }
    goto L_0888EE34;
L_0888EE34:;
    a0 = LD32(s0+16);
    goto L_0888EE38;
L_0888EE38:;
    s4 = s0 + 4;
    cnd_ = a0 != 0;
    s3 = s0 + 16;
    if (cnd_) { goto L_0888EEDC; }
    goto L_0888EE44;
L_0888EE44:;
    a0 = LD32(s0+4);
    ST32(s3+4, 0);
    cnd_ = a0 != 0;
    ST32(s3+8, 0);
    if (cnd_) { goto L_0888EECC; }
    goto L_0888EE54;
L_0888EE54:;
    ST32(s4+4, 0);
    a0 = s0 + 0;
    ST32(s4+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EE64;
L_0888EE64:;
    a0 = LD32(s2+12);
    goto L_0888EE68;
L_0888EE68:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0888EEBC; }
    goto L_0888EE70;
L_0888EE70:;
    ST32(s2+16, 0);
    goto L_0888EE74;
L_0888EE74:;
    a0 = s1 + 424;
    ST32(s2+12, 0);
    func_0887EBCC(a0, 0, 0, 0);
    goto L_0888EE80;
L_0888EE80:;
    v0 = D_08AF74C8 - (29896);
    v0 = v0 + 29896;
    ST32(s1+196, v0);
    a0 = s1 + 196;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EE94;
L_0888EE94:;
    a0 = s1 + 0;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EE9C;
L_0888EE9C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888EEBC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EEC4;
L_0888EEC4:;
    ST32(s2+16, 0);
    goto L_0888EE74;
L_0888EECC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EED4;
L_0888EED4:;
    ST32(s0+4, 0);
    goto L_0888EE54;
L_0888EEDC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EEE4;
L_0888EEE4:;
    ST32(s0+16, 0);
    goto L_0888EE44;
L_0888EEEC:;
    a0 = s2 + 0;
    func_08AB1850(a0, a1, 0, 0, 0);
    goto L_0888EEF4;
L_0888EEF4:;
    a0 = LD32(s0+16);
    goto L_0888EE38;
L_0888EEFC:;
    a0 = s2 + 0;
    func_08AB1850(a0, a1, 0, 0, 0);
    goto L_0888EF04;
L_0888EF04:;
    a1 = LD32(s0+32);
    goto L_0888EE2C;
}

/* 0888EF0C */
rv_t func_0888EF0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888EF0C:;
    v0 = D_08AF7400 - (29696);
    v0 = v0 + 29696;
    ST32(a0, v0);
    sp = sp - 32;
    s1 = a0 + 0;
    s2 = a0 + 432;
    { u64 r_ = func_08890080(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EF40;
L_0888EF40:;
    s0 = LD32(s1+432);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s2+12); goto L_0888EF98; }
    goto L_0888EF4C;
L_0888EF4C:;
    a1 = LD32(s0+28);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0888F034; }
    goto L_0888EF58;
L_0888EF58:;
    a1 = LD32(s0+32);
    goto L_0888EF5C;
L_0888EF5C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0888F024; }
    goto L_0888EF64;
L_0888EF64:;
    a0 = LD32(s0+16);
    goto L_0888EF68;
L_0888EF68:;
    s4 = s0 + 4;
    cnd_ = a0 != 0;
    s3 = s0 + 16;
    if (cnd_) { goto L_0888F014; }
    goto L_0888EF74;
L_0888EF74:;
    a0 = LD32(s0+4);
    ST32(s3+4, 0);
    cnd_ = a0 != 0;
    ST32(s3+8, 0);
    if (cnd_) { goto L_0888F004; }
    goto L_0888EF84;
L_0888EF84:;
    ST32(s4+4, 0);
    a0 = s0 + 0;
    ST32(s4+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EF94;
L_0888EF94:;
    a0 = LD32(s2+12);
    goto L_0888EF98;
L_0888EF98:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0888EFF4; }
    goto L_0888EFA0;
L_0888EFA0:;
    ST32(s2+16, 0);
    goto L_0888EFA4;
L_0888EFA4:;
    a0 = s1 + 424;
    ST32(s2+12, 0);
    func_0887EBCC(a0, 0, 0, 0);
    goto L_0888EFB0;
L_0888EFB0:;
    v0 = D_08AF74C8 - (29896);
    v0 = v0 + 29896;
    ST32(s1+196, v0);
    a0 = s1 + 196;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EFC4;
L_0888EFC4:;
    a0 = s1 + 0;
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EFCC;
L_0888EFCC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EFD4;
L_0888EFD4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888EFF4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888EFFC;
L_0888EFFC:;
    ST32(s2+16, 0);
    goto L_0888EFA4;
L_0888F004:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F00C;
L_0888F00C:;
    ST32(s0+4, 0);
    goto L_0888EF84;
L_0888F014:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F01C;
L_0888F01C:;
    ST32(s0+16, 0);
    goto L_0888EF74;
L_0888F024:;
    a0 = s2 + 0;
    func_08AB1850(a0, a1, 0, 0, 0);
    goto L_0888F02C;
L_0888F02C:;
    a0 = LD32(s0+16);
    goto L_0888EF68;
L_0888F034:;
    a0 = s2 + 0;
    func_08AB1850(a0, a1, 0, 0, 0);
    goto L_0888F03C;
L_0888F03C:;
    a1 = LD32(s0+32);
    goto L_0888EF5C;
}

/* 0888F044 */
rv_t func_0888F044(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888F044:;
    sp = sp - 48;
    s4 = a1 + 0;
    v0 = LD32(a0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888F094; }
    goto L_0888F074;
L_0888F074:;
    goto L_0888F078;
L_0888F078:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0888F094:;
    { rv_t r_ = func_0888C860(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F09C;
L_0888F09C:;
    f0 = BITSF(LD32(s0+400));
    a0 = LD32(s0+412);
    a1 = LD32(s0+380);
    f0 = BITSF(F2I(f0, 1));
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    a2 = FBITS(f0);
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    s3 = a2 + a0;
    v0 = a1 < s3;
    if (v0 != 0) s3 = a1;
    v0 = a2 < s3;
    s2 = a2 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    cnd_ = v0 == 0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0888F074; }
    goto L_0888F0E8;
L_0888F0E8:;
    v0 = 180;
    { s64 p_ = (s64)(s32)a2 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s1 = lo;
    goto L_0888F0F4;
L_0888F0F4:;
    a0 = LD32(s0+376);
    a1 = LD32(s0+392);
    v1 = 2;
    a0 = a0 + s1;
    a2 = LD32(a0);
    a1 = s2 ^ a1;
    v0 = 32;
    if (a1 != 0) v0 = v1;
    ST32(a0+156, v0);
    a1 = sp + 0;
    v0 = LD32(a2+36);
    t_ = v0;
    s2 = s2 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F128;
L_0888F128:;
    a0 = LD32(s0+376);
    a1 = s4 + 0;
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    s1 = s1 + 180;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F144;
L_0888F144:;
    f1 = BITSF(LD32(s0+416));
    f0 = BITSF(LD32(sp+4));
    v0 = s2 < s3;
    f0 = f0 + f1;
    cnd_ = v0 != 0;
    ST32(sp+4, FBITS(f0));
    if (cnd_) { goto L_0888F0F4; }
    goto L_0888F15C;
L_0888F15C:;
    goto L_0888F078;
}

/* 0888F164 */
rv_t func_0888F164(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888F164:;
    sp = sp - 48;
    s0 = a0 + 0;
    ST32(s0+176, FBITS(f12));
    f20 = f12;
    { rv_t r_ = func_0888C7F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F190;
L_0888F190:;
    v0 = LD32(s0+376);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888F2D8; }
    goto L_0888F19C;
L_0888F19C:;
    a0 = s0 + 0;
    func_0888FF80(a0);
    goto L_0888F1A4;
L_0888F1A4:;
    v0 = LD32(s0+408);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_0888F20C; }
    goto L_0888F1B0;
L_0888F1B0:;
    s3 = s0 + 196;
    s1 = 0 + 0;
    goto L_0888F1B8;
L_0888F1B8:;
    a0 = LD32(s0+376);
    a1 = s2 + 0;
    a2 = s3 + 0;
    a0 = a0 + s1;
    v0 = func_0888E620(a0, a1, a2, 0, 0, 0);
    goto L_0888F1CC;
L_0888F1CC:;
    s2 = s2 + 1;
    cnd_ = v0 == 0;
    f12 = f20;
    if (cnd_) { goto L_0888F20C; }
    goto L_0888F1D8;
L_0888F1D8:;
    v0 = LD32(s0+376);
    v0 = s1 + v0;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+12);
    t_ = v0;
    s1 = s1 + 180;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F1F4;
L_0888F1F4:;
    v1 = LD32(s0+380);
    v0 = LD32(s0+408);
    v1 = v1 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    ST32(s0+380, v1);
    if (cnd_) { goto L_0888F1B8; }
    goto L_0888F20C;
L_0888F20C:;
    v0 = LD32(s0+392);
    v1 = LD32(s0+380);
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_0888F224; }
    goto L_0888F220;
L_0888F220:;
    ST32(s0+392, v0);
    goto L_0888F224;
L_0888F224:;
    a0 = s0 + 0;
    { rv_t r_ = func_0888FA80(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F22C;
L_0888F22C:;
    v0 = LD32(s0+156);
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_0888F288; }
    goto L_0888F23C;
L_0888F23C:;
    f0 = BITSF(LD32(s0+404));
    f3 = BITSF(0);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEC1C8 - (-15928);
    if (cnd_) { goto L_0888F2A4; }
    goto L_0888F254;
L_0888F254:;
    f0 = BITSF(LD32(v0-15928));
    f1 = BITSF(LD32(s0+400));
    f2 = BITSF(LD32(s0+396));
    f0 = f20 * f0;
    ST8(s0+420, v1);
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    goto L_0888F274;
L_0888F274:;
    cnd_ = !fcc;
    ST32(s0+400, FBITS(f1));
    if (cnd_) { goto L_0888F284; }
    goto L_0888F27C;
L_0888F27C:;
    ST32(s0+404, FBITS(f3));
    ST32(s0+400, FBITS(f2));
    goto L_0888F284;
L_0888F284:;
    goto L_0888F288;
L_0888F288:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0888F2A4:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0888F288; }
    goto L_0888F2B4;
L_0888F2B4:;
    v0 = D_08AEC1C8 - (-15928);
    f0 = BITSF(LD32(v0-15928));
    f1 = BITSF(LD32(s0+400));
    f2 = BITSF(LD32(s0+396));
    f0 = f20 * f0;
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 12);
    ST8(s0+420, v1);
    goto L_0888F274;
L_0888F2D8:;
    a0 = s0 + 0;
    v0 = func_0888FD4C(a0);
    goto L_0888F2E0;
L_0888F2E0:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0888FF88(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F2EC;
L_0888F2EC:;
    goto L_0888F19C;
}

/* 0888F2F4 */
rv_t func_0888F2F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888F2F4:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F310;
L_0888F310:;
    a0 = s1 + 0;
    { u64 r_ = func_0888FD38(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F318;
L_0888F318:;
    a1 = sp + 0;
    a0 = s0 + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    func_0888FD68(a0, a1);
    goto L_0888F32C;
L_0888F32C:;
    a0 = s1 + 0;
    v0 = func_0888FD54(a0);
    goto L_0888F334;
L_0888F334:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_0888FCC8(a0, a1);
    goto L_0888F340;
L_0888F340:;
    a0 = s1 + 0;
    v0 = func_0888FD4C(a0);
    goto L_0888F348;
L_0888F348:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_0888FC44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F354;
L_0888F354:;
    a0 = s0 + 424;
    a1 = s1 + 424;
    s0 = s0 + 196;
    s1 = s1 + 196;
    { u64 r_ = func_0887F0C0(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F368;
L_0888F368:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F374;
L_0888F374:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0888F388 */
rv_t func_0888F388(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888F388:;
    sp = sp - 48;
    s0 = a1 + 0;
    s4 = a0 + 0;
    { rv_t r_ = func_08887558(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F3B8;
L_0888F3B8:;
    s0 = LD32(s0);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(sp, 0); goto L_0888F3E8; }
    goto L_0888F3C4;
L_0888F3C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F3CC;
L_0888F3CC:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F3E0;
L_0888F3E0:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_0888F4E0; }
    goto L_0888F3E8;
L_0888F3E8:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    v0 = D_08AD5110 - (20752);
    goto L_0888F3F4;
L_0888F3F4:;
    a0 = v0 + 20752;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s4 + 196; goto L_0888F470; }
    goto L_0888F400;
L_0888F400:;
    s5 = a0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F408;
L_0888F408:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    s2 = sp + 0;
    if (cnd_) { goto L_0888F46C; }
    goto L_0888F414;
L_0888F414:;
    v1 = LD32(sp+8);
    v0 = v0 + 1;
    s6 = sp + 0;
    if (v1 != 0) v0 = s1;
    s3 = v1 + v0;
    a0 = s3 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F430;
L_0888F430:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0888F46C; }
    goto L_0888F438;
L_0888F438:;
    a1 = LD32(sp);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0888F4BC; }
    goto L_0888F444;
L_0888F444:;
    ST32(s6, s0);
    goto L_0888F448;
L_0888F448:;
    a1 = s5 + 0;
    a0 = LD32(s2);
    v0 = LD32(s2+4);
    ST32(s6+8, s3);
    a0 = a0 + v0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F460;
L_0888F460:;
    v1 = LD32(s2+4);
    v1 = v1 + s1;
    ST32(s2+4, v1);
    goto L_0888F46C;
L_0888F46C:;
    a0 = s4 + 196;
    goto L_0888F470;
L_0888F470:;
    a1 = sp + 0;
    { rv_t r_ = func_08887558(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F478;
L_0888F478:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0888F4AC; }
    goto L_0888F484;
L_0888F484:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0888F4AC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F4B4;
L_0888F4B4:;
    ST32(sp, 0);
    goto L_0888F484;
L_0888F4BC:;
    a0 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F4C4;
L_0888F4C4:;
    a0 = LD32(sp);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s6, s0); goto L_0888F448; }
    goto L_0888F4D0;
L_0888F4D0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F4D8;
L_0888F4D8:;
    ST32(s6, s0);
    goto L_0888F448;
L_0888F4E0:;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F4EC;
L_0888F4EC:;
    v0 = D_08AD5110 - (20752);
    goto L_0888F3F4;
}

/* 0888F4F4 */
rv_t func_0888F4F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_0888F4F4:;
    sp = sp - 144;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_08887624(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F510;
L_0888F510:;
    a1 = D_08AD5118 - (20760);
    t0 = s1 + 0;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    a1 = a1 + 20760;
    s0 = s0 + 196;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F530;
L_0888F530:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_08887624(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F53C;
L_0888F53C:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
}

/* 0888F550 */
u32 func_0888F550(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_0888F550:;
    a1 = a1 & 0xff;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+180); goto L_0888F570; }
    goto L_0888F560;
L_0888F560:;
    ST32(a0+184, 0);
    ST32(a0+180, 0);
    goto L_0888F568;
L_0888F568:;
    v0 = a1 + 0;
    return v0;
L_0888F570:;
    cnd_ = v1 == a1;
    v0 = 2;
    if (cnd_) { goto L_0888F5C4; }
    goto L_0888F578;
L_0888F578:;
    cnd_ = v1 == v0;
    v0 = v1 + 1;
    if (cnd_) { goto L_0888F590; }
    goto L_0888F580;
L_0888F580:;
    f0 = BITSF(LD32(a0+188));
    ST32(a0+180, v0);
    goto L_0888F588;
L_0888F588:;
    ST32(a0+184, FBITS(f0));
    goto L_0888F568;
L_0888F590:;
    f0 = BITSF(LD32(a0+184));
    f1 = BITSF(LD32(a0+176));
    f2 = BITSF(0);
    f1 = f0 - f1;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+184, FBITS(f1));
    if (cnd_) { goto L_0888F5BC; }
    goto L_0888F5B0;
L_0888F5B0:;
    f0 = BITSF(LD32(a0+192));
    goto L_0888F5B4;
L_0888F5B4:;
    f0 = f1 + f0;
    goto L_0888F588;
L_0888F5BC:;
    a1 = 0 + 0;
    goto L_0888F568;
L_0888F5C4:;
    f0 = BITSF(LD32(a0+184));
    f1 = BITSF(LD32(a0+176));
    f2 = BITSF(0);
    f1 = f0 - f1;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+184, FBITS(f1));
    if (cnd_) { goto L_0888F5BC; }
    goto L_0888F5E4;
L_0888F5E4:;
    f0 = BITSF(LD32(a0+192));
    v0 = 2;
    ST32(a0+180, v0);
    goto L_0888F5B4;
}

/* 0888F5F4 */
rv_t func_0888F5F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888F5F4:;
    sp = sp - 32;
    s2 = a0 + 0;
    s3 = a1 + 0;
    s1 = (s3 >> 16) & 0x1;
    v0 = func_0888FD4C(a0);
    goto L_0888F628;
L_0888F628:;
    a0 = s2 + 0;
    s6 = v0 + 0;
    s0 = (s3 >> 15) & 0x1;
    v0 = func_0888FD54(a0);
    goto L_0888F638;
L_0888F638:;
    s5 = v0 + 0;
    cnd_ = s1 == 0;
    s4 = s0 << 15;
    if (cnd_) { goto L_0888F64C; }
    goto L_0888F644;
L_0888F644:;
    v0 = 0x10000u;
    s4 = s4 | v0;
    goto L_0888F64C;
L_0888F64C:;
    a1 = s0 | s1;
    a0 = s2 + 0;
    v0 = func_0888F550(a0, a1);
    goto L_0888F658;
L_0888F658:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0888F668; }
    goto L_0888F660;
L_0888F660:;
    s0 = 0 + 0;
    s1 = 0 + 0;
    goto L_0888F668;
L_0888F668:;
    cnd_ = s0 == 0;
    v0 = 2012;
    if (cnd_) { goto L_0888F7C8; }
    goto L_0888F670;
L_0888F670:;
    v1 = LD32(s2+4);
    cnd_ = v1 == v0;
    a0 = LD32(s2+392);
    if (cnd_) { goto L_0888F7B4; }
    goto L_0888F67C;
L_0888F67C:;
    cnd_ = a0 != 0;
    if (cnd_) { f2 = BITSF(LD32(s2+396)); goto L_0888F6A0; }
    goto L_0888F684;
L_0888F684:;
    v0 = LD_U8(s2+421);
    goto L_0888F688;
L_0888F688:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888F7A4; }
    goto L_0888F690;
L_0888F690:;
    a0 = LD32(s2+392);
    goto L_0888F694;
L_0888F694:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(s2+380); goto L_0888F788; }
    goto L_0888F69C;
L_0888F69C:;
    f2 = BITSF(LD32(s2+396));
    goto L_0888F6A0;
L_0888F6A0:;
    f0 = BITSF(0);
    v0 = a0 - 1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(s2+392, v0);
    if (cnd_) { goto L_0888F778; }
    goto L_0888F6B8;
L_0888F6B8:;
    v0 = D_08AEC1CC - (-15924);
    f0 = BITSF(LD32(v0-15924));
    f0 = f2 + f0;
    goto L_0888F6C4;
L_0888F6C4:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s2+392);
    v1 = FBITS(f0);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = D_08AEC1D0 - (-15920);
    if (cnd_) { goto L_0888F710; }
    goto L_0888F6DC;
L_0888F6DC:;
    f1 = BITSF(LD32(v0-15920));
    f3 = BITSF(0);
    v0 = 1;
    f1 = f2 - f1;
    ST8(s2+420, v0);
    v0 = D_08AEC1D4 - (-15916);
    fcc = FCMP(f1, f3, 12);
    f0 = BITSF(LD32(v0-15916));
    ST32(s2+396, FBITS(f1));
    cnd_ = !fcc;
    ST32(s2+404, FBITS(f0));
    if (cnd_) { goto L_0888F710; }
    goto L_0888F708;
L_0888F708:;
    ST32(s2+404, FBITS(f3));
    ST32(s2+396, FBITS(f3));
    goto L_0888F710;
L_0888F710:;
    a0 = 0 + 0;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F718;
L_0888F718:;
    a0 = s2 + 0;
    a1 = 128;
    v0 = func_08887500(a0, a1);
    goto L_0888F724;
L_0888F724:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = LD32(s2+144); goto L_0888F75C; }
    goto L_0888F730;
L_0888F730:;
    v0 = s4 + 0;
    goto L_0888F734;
L_0888F734:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0888F75C:;
    t0 = LD32(s2+392);
    a0 = (u32)-1;
    a2 = 1;
    a3 = 2010;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F770;
L_0888F770:;
    v0 = s4 + 0;
    goto L_0888F734;
L_0888F778:;
    v0 = D_08AEC1CC - (-15924);
    f0 = BITSF(LD32(v0-15924));
    f0 = f2 - f0;
    goto L_0888F6C4;
L_0888F788:;
    a0 = s2 + 0;
    v0 = v0 - 1;
    ST32(s2+392, v0);
    goto L_0888F794;
L_0888F794:;
    { rv_t r_ = func_0888FA80(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F79C;
L_0888F79C:;
    goto L_0888F710;
L_0888F7A4:;
    a0 = 4;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F7AC;
L_0888F7AC:;
    v0 = s4 + 0;
    goto L_0888F734;
L_0888F7B4:;
    v0 = a0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888F694; }
    goto L_0888F7C0;
L_0888F7C0:;
    v0 = LD_U8(s2+421);
    goto L_0888F688;
L_0888F7C8:;
    cnd_ = s1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0888F92C; }
    goto L_0888F7D0;
L_0888F7D0:;
    v1 = LD32(s2+4);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s2+408); goto L_0888F908; }
    goto L_0888F7DC;
L_0888F7DC:;
    v1 = LD32(s2+380);
    a0 = LD32(s2+392);
    v0 = v1 - 1;
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_0888F80C; }
    goto L_0888F7F4;
L_0888F7F4:;
    v0 = LD_U8(s2+421);
    goto L_0888F7F8;
L_0888F7F8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0888F7A4; }
    goto L_0888F800;
L_0888F800:;
    a0 = LD32(s2+392);
    v1 = LD32(s2+380);
    goto L_0888F808;
L_0888F808:;
    v0 = v1 - 1;
    goto L_0888F80C;
L_0888F80C:;
    cnd_ = a0 == v0;
    v0 = a0 + 1;
    if (cnd_) { goto L_0888F8FC; }
    goto L_0888F814;
L_0888F814:;
    f1 = BITSF(LD32(s2+396));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(s2+392, v0);
    if (cnd_) { goto L_0888F8EC; }
    goto L_0888F82C;
L_0888F82C:;
    v0 = D_08AEC1CC - (-15924);
    f0 = BITSF(LD32(v0-15924));
    f0 = f1 + f0;
    goto L_0888F838;
L_0888F838:;
    f0 = BITSF(F2I(f0, 1));
    s0 = FBITS(f0);
    a0 = s2 + 0;
    v0 = func_0888FD54(a0);
    goto L_0888F848;
L_0888F848:;
    v1 = LD32(s2+392);
    v0 = s0 + v0;
    v1 = v1 < v0;
    cnd_ = v1 != 0;
    v0 = D_08AEC1D0 - (-15920);
    if (cnd_) { goto L_0888F710; }
    goto L_0888F85C;
L_0888F85C:;
    f1 = BITSF(LD32(v0-15920));
    f0 = BITSF(LD32(s2+396));
    a0 = s6 - s5;
    f3 = BITSF(a0);
    f0 = f0 + f1;
    v0 = 1;
    ST8(s2+420, v0);
    f2 = (float)(s32)FBITS(f3);
    ST32(s2+396, FBITS(f0));
    cnd_ = (s32)a0 < 0;
    ST32(s2+404, FBITS(f1));
    if (cnd_) { goto L_0888F8D0; }
    goto L_0888F888;
L_0888F888:;
    f0 = BITSF(LD32(s2+396));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0888F710; }
    goto L_0888F89C;
L_0888F89C:;
    f1 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0888F8B4; }
    goto L_0888F8A8;
L_0888F8A8:;
    ST32(s2+400, FBITS(f0));
    ST32(s2+404, 0);
    goto L_0888F710;
L_0888F8B4:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_0888F8A8;
L_0888F8D0:;
    v0 = a0 & 0x1;
    v1 = a0 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_0888F888;
L_0888F8EC:;
    v0 = D_08AEC1CC - (-15924);
    f0 = BITSF(LD32(v0-15924));
    f0 = f1 - f0;
    goto L_0888F838;
L_0888F8FC:;
    ST32(s2+392, 0);
    a0 = s2 + 0;
    goto L_0888F794;
L_0888F908:;
    v1 = LD32(s2+412);
    a0 = LD32(s2+392);
    v0 = v0 - v1;
    v0 = v0 + 1;
    v0 = a0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s2+380); goto L_0888F808; }
    goto L_0888F924;
L_0888F924:;
    v0 = LD_U8(s2+421);
    goto L_0888F7F8;
L_0888F92C:;
    a1 = s3 + 0;
    { rv_t r_ = func_0888CA64(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F934;
L_0888F934:;
    s4 = s4 | v0;
    goto L_0888F730;
}

/* 0888F93C */
rv_t func_0888F93C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888F93C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888F950;
L_0888F950:;
    a0 = (u32)-1;
    a1 = LD32(s0+144);
    a2 = 2;
    a3 = 2010;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F968;
L_0888F968:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888F97C */
rv_t func_0888F97C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888F97C:;
    sp = sp - 16;
    a1 = 64;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_0888F994;
L_0888F994:;
    v1 = 1;
    a0 = (u32)-1;
    a2 = 1;
    cnd_ = v0 == v1;
    a3 = 2010;
    if (cnd_) { goto L_0888F9BC; }
    goto L_0888F9A8;
L_0888F9A8:;
    goto L_0888F9AC;
L_0888F9AC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888F9BC:;
    a1 = LD32(s0+144);
    t0 = LD32(s0+392);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888F9C8;
L_0888F9C8:;
    goto L_0888F9AC;
}

/* 0888F9D0 */
rv_t func_0888F9D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888F9D0:;
    sp = sp - 16;
    a3 = LD32(a0+144);
    v0 = LD32(a1+12);
    cnd_ = v0 == a3;
    v0 = 2010;
    if (cnd_) { goto L_0888F9F4; }
    goto L_0888F9E8;
L_0888F9E8:;
    v1 = LD32(a1+4);
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(a1+2); goto L_0888FA04; }
    goto L_0888F9F4;
L_0888F9F4:;
    goto L_0888F9F8;
L_0888F9F8:;
    v0 = 1;
    goto L_0888F9FC;
L_0888F9FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888FA04:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0888FA70; }
    goto L_0888FA10;
L_0888FA10:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_0888F9FC; }
    goto L_0888FA18;
L_0888FA18:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_0888FA50; }
    goto L_0888FA24;
L_0888FA24:;
    cnd_ = v1 != v0;
    v0 = 1;
    if (cnd_) { goto L_0888F9FC; }
    goto L_0888FA2C;
L_0888FA2C:;
    a1 = LD32(a1+16);
    v0 = LD32(a0+380);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_0888F9FC; }
    goto L_0888FA40;
L_0888FA40:;
    ST32(a0+392, a1);
    { rv_t r_ = func_0888FA80(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FA48;
L_0888FA48:;
    goto L_0888F9F8;
L_0888FA50:;
    t0 = LD32(a0+392);
    a1 = a3 + 0;
    a0 = (u32)-1;
    a2 = 1;
    a3 = 2010;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888FA68;
L_0888FA68:;
    goto L_0888F9F8;
L_0888FA70:;
    func_0888FF80(a0);
    goto L_0888FA78;
L_0888FA78:;
    goto L_0888F9F8;
}

/* 0888FA80 */
rv_t func_0888FA80(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888FA80:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_0888FD54(a0);
    goto L_0888FA94;
L_0888FA94:;
    a0 = LD32(s0+380);
    cnd_ = a0 == 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_0888FAEC; }
    goto L_0888FAA0;
L_0888FAA0:;
    a1 = LD32(s0+392);
    v0 = 1;
    ST8(s0+420, v0);
    f1 = BITSF(a1);
    cnd_ = (s32)a1 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0888FB18; }
    goto L_0888FAB8;
L_0888FAB8:;
    a0 = a0 - a2;
    v0 = a0 < a1;
    cnd_ = v0 == 0;
    ST32(s0+396, FBITS(f0));
    if (cnd_) { goto L_0888FAD8; }
    goto L_0888FAC8;
L_0888FAC8:;
    f1 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0888FAFC; }
    goto L_0888FAD4;
L_0888FAD4:;
    ST32(s0+396, FBITS(f0));
    goto L_0888FAD8;
L_0888FAD8:;
    v0 = a1 < a2;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+396, 0); goto L_0888FAE4; }
    goto L_0888FAE4;
L_0888FAE4:;
    f0 = BITSF(LD32(s0+396));
    ST32(s0+400, FBITS(f0));
    goto L_0888FAEC;
L_0888FAEC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888FAFC:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_0888FAD4;
L_0888FB18:;
    v0 = a1 & 0x1;
    v1 = a1 >> 1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_0888FAB8;
}

/* 0888FB34 */
rv_t func_0888FB34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888FB34:;
    sp = sp - 16;
    t0 = a0 + 0;
    a2 = 1;
    v0 = LD32(a0+144);
    v1 = LD32(a1+12);
    a0 = (u32)-1;
    a1 = v0 + 0;
    cnd_ = v1 == v0;
    a3 = 2010;
    if (cnd_) { goto L_0888FB64; }
    goto L_0888FB5C;
L_0888FB5C:;
    t0 = LD32(t0+392);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888FB64;
L_0888FB64:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0888FB74 */
rv_t func_0888FB74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888FB74:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 128;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_0888FB94;
L_0888FB94:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s1+16); goto L_0888FBCC; }
    goto L_0888FBA0;
L_0888FBA0:;
    a1 = LD32(s1+16);
    goto L_0888FBA4;
L_0888FBA4:;
    a2 = LD32(s0+392);
    a0 = s0 + 424;
    a3 = 1;
    { rv_t r_ = func_0887EEE4(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FBB4;
L_0888FBB4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0888FBCC:;
    v0 = 16;
    a0 = (u32)-1;
    a2 = 1;
    cnd_ = v1 != v0;
    a3 = 2010;
    if (cnd_) { goto L_0888FBA0; }
    goto L_0888FBE0;
L_0888FBE0:;
    a1 = LD32(s0+144);
    t0 = LD32(s0+392);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888FBEC;
L_0888FBEC:;
    a0 = 0 + 0;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FBF4;
L_0888FBF4:;
    a1 = LD32(s1+16);
    goto L_0888FBA4;
}

/* 0888FBFC */
rv_t func_0888FBFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888FBFC:;
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888FC0C */
rv_t func_0888FC0C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0888FC0C:;
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 0888FC1C */
rv_t func_0888FC1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0888FC1C:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0888FC38; }
    goto L_0888FC28;
L_0888FC28:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_0888FC38;
L_0888FC38:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 0888FC44 */
u64 func_0888FC44(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888FC44:;
    sp = sp - 16;
    s1 = a1 + 0;
    v0 = LD32(a0+376);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0888FC84; }
    goto L_0888FC64;
L_0888FC64:;
    v0 = 1;
    goto L_0888FC68;
L_0888FC68:;
    ST32(s0+408, s1);
    ST8(s0+420, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0888FC84:;
    v0 = func_0888FD4C(a0);
    goto L_0888FC8C;
L_0888FC8C:;
    a0 = s0 + 0;
    cnd_ = s1 == v0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0888FC64; }
    goto L_0888FC98;
L_0888FC98:;
    { u64 r_ = func_0888FF88(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888FCA0;
L_0888FCA0:;
    v0 = 1;
    goto L_0888FC68;
}

/* 0888FCA8 */
void func_0888FCA8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888FCA8:;
    ST32(a0+392, a1);
    sp = sp - 16;
    { rv_t r_ = func_0888FA80(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FCBC;
L_0888FCBC:;
    sp = sp + 16;
    return;
}

/* 0888FCC8 */
void func_0888FCC8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0888FCC8:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_0888FD38(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888FCE4;
L_0888FCE4:;
    f1 = BITSF(s0);
    ST32(sp+4, v1);
    a0 = s0 >> 1;
    a1 = s0 & 0x1;
    f0 = (float)(s32)FBITS(f1);
    a1 = a1 | a0;
    f1 = BITSF(LD32(sp+4));
    ST32(sp, v0);
    cnd_ = (s32)s0 < 0;
    ST32(s1+412, s0);
    if (cnd_) { goto L_0888FD28; }
    goto L_0888FD0C;
L_0888FD0C:;
    f0 = f1 / f0;
    ST32(s1+416, FBITS(f0));
    sp = sp + 32;
    return;
L_0888FD28:;
    f2 = BITSF(a1);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_0888FD0C;
}

/* 0888FD38 */
u64 func_0888FD38(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888FD38:;
    v0 = LD32(a0+384);
    v1 = LD32(a0+388);
    sp = sp - 16;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0888FD4C */
u32 func_0888FD4C(u32 a0)
{
    u32 v0 = 0;
L_0888FD4C:;
    v0 = LD32(a0+408);
    return v0;
}

/* 0888FD54 */
u32 func_0888FD54(u32 a0)
{
    u32 v0 = 0;
L_0888FD54:;
    v0 = LD32(a0+412);
    return v0;
}

/* 0888FD5C */
void func_0888FD5C(u32 a0, float f12, float f13)
{
L_0888FD5C:;
    ST32(a0+388, FBITS(f13));
    ST32(a0+384, FBITS(f12));
    return;
}

/* 0888FD68 */
void func_0888FD68(u32 a0, u32 a1)
{
    float f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0888FD68:;
    f13 = BITSF(LD32(a1+4));
    f12 = BITSF(LD32(a1));
    sp = sp - 16;
    func_0888FD5C(a0, f12, f13);
    goto L_0888FD80;
L_0888FD80:;
    sp = sp + 16;
    return;
}

/* 0888FD8C */
rv_t func_0888FD8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0888FD8C:;
    sp = sp - 64;
    s6 = a3 + 0;
    a3 = (u32)-1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    s2 = s1 + 196;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FDC8;
L_0888FDC8:;
    a2 = s1 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FDD8;
L_0888FDD8:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FDE4;
L_0888FDE4:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FDF0;
L_0888FDF0:;
    a0 = s0 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FDFC;
L_0888FDFC:;
    a0 = s0 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FE08;
L_0888FE08:;
    a0 = s1 + 424;
    a1 = s0 + 0;
    { rv_t r_ = func_0887F000(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FE14;
L_0888FE14:;
    a2 = sp + 16;
    a0 = s2 + 0;
    a1 = s0 + 0;
    ST32(sp+16, 0);
    v0 = func_08888918(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0888FE28;
L_0888FE28:;
    a3 = v0 + 0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0888EAC8(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FE3C;
L_0888FE3C:;
    cnd_ = s6 == 0;
    a1 = s1 + 188;
    if (cnd_) { goto L_0888FEDC; }
    goto L_0888FE44;
L_0888FE44:;
    v0 = LD32(s2+52);
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0888FEDC; }
    goto L_0888FE50;
L_0888FE50:;
    s5 = s6 < 0x2u;
    s4 = s1 + 432;
    a0 = s2 + 0;
    goto L_0888FE5C;
L_0888FE5C:;
    a1 = s3 + 0;
    { rv_t r_ = func_088880A0(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FE64;
L_0888FE64:;
    v1 = LD32(v0+144);
    cnd_ = s5 == 0;
    ST32(sp+20, v1);
    if (cnd_) { goto L_0888FF6C; }
    goto L_0888FE70;
L_0888FE70:;
    v0 = LD32(s1+432);
    goto L_0888FE74;
L_0888FE74:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+20);
    if (cnd_) { goto L_0888FEA8; }
    goto L_0888FE7C;
L_0888FE7C:;
    v0 = LD32(s4);
    v1 = LD32(v0);
    goto L_0888FE84;
L_0888FE84:;
    a0 = v0 + 32;
    a2 = v0 + 28;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_0888FEB4; }
    goto L_0888FE9C;
L_0888FE9C:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_0888FE84; }
    goto L_0888FEA8;
L_0888FEA8:;
    a0 = LD32(s4+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_0888FF5C; }
    goto L_0888FEB4;
L_0888FEB4:;
    cnd_ = a3 == 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_0888FEC4; }
    goto L_0888FEBC;
L_0888FEBC:;
    a1 = s0 + 0;
    { rv_t r_ = func_0887DF60(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FEC4;
L_0888FEC4:;
    v0 = LD32(s2+52);
    s3 = s3 + 1;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0888FE5C; }
    goto L_0888FED8;
L_0888FED8:;
    a1 = s1 + 188;
    goto L_0888FEDC;
L_0888FEDC:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FEE4;
L_0888FEE4:;
    a1 = s1 + 192;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FEF0;
L_0888FEF0:;
    v1 = s6 < 0x3u;
    cnd_ = v1 == 0;
    a1 = s1 + 421;
    if (cnd_) { goto L_0888FF4C; }
    goto L_0888FEFC;
L_0888FEFC:;
    f12 = BITSF(LD32(sp));
    goto L_0888FF00;
L_0888FF00:;
    f13 = BITSF(LD32(sp+4));
    a0 = s1 + 0;
    func_0888FD5C(a0, f12, f13);
    goto L_0888FF0C;
L_0888FF0C:;
    a1 = LD32(sp+12);
    a0 = s1 + 0;
    func_0888FCC8(a0, a1);
    goto L_0888FF18;
L_0888FF18:;
    a1 = LD32(sp+8);
    a0 = s1 + 0;
    { u64 r_ = func_0888FC44(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888FF24;
L_0888FF24:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0888FF4C:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FF54;
L_0888FF54:;
    f12 = BITSF(LD32(sp));
    goto L_0888FF00;
L_0888FF5C:;
    a2 = 1;
    { u64 r_ = func_08AB190C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0888FF64;
L_0888FF64:;
    a3 = v0 + 0;
    goto L_0888FEB4;
L_0888FF6C:;
    a0 = s0 + 0;
    a1 = sp + 20;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FF78;
L_0888FF78:;
    v0 = LD32(s1+432);
    goto L_0888FE74;
}

/* 0888FF80 */
void func_0888FF80(u32 a0)
{
L_0888FF80:;
    ST32(a0+380, 0);
    return;
}

/* 0888FF88 */
u64 func_0888FF88(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0888FF88:;
    v0 = 180;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    sp = sp - 48;
    s4 = a0 + 0;
    v0 = lo;
    v0 = v0 + 4;
    a0 = v0 + 0;
    s3 = a1 + 0;
    s1 = a1 - 1;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FFCC;
L_0888FFCC:;
    s5 = v0 + 4;
    ST32(s5-4, s3);
    cnd_ = s3 == 0;
    s0 = s5 + 0;
    if (cnd_) { goto L_0888FFF4; }
    goto L_0888FFDC;
L_0888FFDC:;
    s2 = (u32)-1;
    goto L_0888FFE0;
L_0888FFE0:;
    a0 = s0 + 0;
    s1 = s1 - 1;
    { rv_t r_ = func_0888E148(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0888FFEC;
L_0888FFEC:;
    cnd_ = s1 != s2;
    s0 = s0 + 180;
    if (cnd_) { goto L_0888FFE0; }
    goto L_0888FFF4;
L_0888FFF4:;
    ST32(sp, 0);
    s1 = 0 + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    cnd_ = s3 == 0;
    ST32(sp+12, 0);
    if (cnd_) { goto L_08890050; }
    goto L_0889000C;
L_0889000C:;
    s2 = s4 + 196;
    s0 = s5 + 0;
    goto L_08890014;
L_08890014:;
    a1 = s0 + 0;
    a2 = sp + 0;
    a0 = 2011;
    func_0888A470(a0, a1, a2, 0, 0, 0);
    goto L_08890024;
L_08890024:;
    ST32(s0+176, s4);
    a0 = s0 + 0;
    a1 = s2 + 0;
    func_08889044(a0, a1);
    goto L_08890034;
L_08890034:;
    s1 = s1 + 1;
    a0 = s0 + 0;
    a1 = s2 + 0;
    func_088892FC(a0, a1, 0, 0, 0);
    goto L_08890044;
L_08890044:;
    v0 = s1 < s3;
    cnd_ = v0 != 0;
    s0 = s0 + 180;
    if (cnd_) { goto L_08890014; }
    goto L_08890050;
L_08890050:;
    a0 = s4 + 0;
    { u64 r_ = func_08890080(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08890058;
L_08890058:;
    ST32(s4+376, s5);
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08890080 */
u64 func_08890080(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08890080:;
    sp = sp - 16;
    v0 = LD32(a0+376);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088900B0; }
    goto L_0889009C;
L_0889009C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088900B0:;
    func_0888FF80(a0);
    goto L_088900B8;
L_088900B8:;
    a0 = LD32(s1+376);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+376, 0); goto L_0889009C; }
    goto L_088900C4;
L_088900C4:;
    v0 = LD32(a0-4);
    v1 = 180;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_088900D8;
L_088900D8:;
    cnd_ = a0 == s0;
    s0 = s0 - 180;
    if (cnd_) { goto L_088900F8; }
    goto L_088900E0;
L_088900E0:;
    v1 = LD32(s0);
    v0 = LD32(v1);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088900F0;
L_088900F0:;
    a0 = LD32(s1+376);
    goto L_088900D8;
L_088900F8:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08890100;
L_08890100:;
    ST32(s1+376, 0);
    goto L_0889009C;
}

/* 08890108 */
u32 func_08890108(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08890108:;
    sp = sp - 16;
    a0 = a0 + 432;
    a2 = 1;
    { u64 r_ = func_08AB190C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889011C;
L_0889011C:;
    sp = sp + 16;
    return v0;
}

/* 08890128 */
float func_08890128(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08890128:;
    sp = sp - 16;
    s2 = a0 + 432;
    s1 = a1 + 0;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088901D0; }
    goto L_08890150;
L_08890150:;
    v0 = LD32(a0+432);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_08890188; }
    goto L_0889015C;
L_0889015C:;
    v1 = v0 + 0;
    goto L_08890160;
L_08890160:;
    a0 = v1 + 32;
    s0 = v1 + 28;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_088901D0; }
    goto L_0889017C;
L_0889017C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08890160; }
    goto L_08890188;
L_08890188:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890190;
L_08890190:;
    v1 = v0 + 4;
    a0 = v0 + 16;
    ST32(v1+4, 0);
    a1 = v1 + 0;
    ST32(v1+8, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    ST32(v0, s1);
    v1 = LD32(s2+4);
    ST32(v0+28, 0);
    v1 = v1 + 1;
    ST32(v0+32, 0);
    ST32(s2+4, v1);
    ST32(s0, v0);
    ST32(v0+4, 0);
    ST32(v0+16, 0);
    goto L_088901D0;
L_088901D0:;
    v0 = a1 + 0;
    sp = sp + 16;
    return f0;
}

/* 088901EC */
float func_088901EC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088901EC:;
    sp = sp - 16;
    s2 = a1 + 0;
    s0 = a0 + 432;
    v0 = LD_U8(s0+8);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08890264; }
    goto L_08890214;
L_08890214:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_08890250; }
    goto L_08890220;
L_08890220:;
    v1 = LD32(s1+448);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s2);
    ST32(s1+448, v1);
    goto L_08890238;
L_08890238:;
    goto L_0889023C;
L_0889023C:;
    sp = sp + 16;
    return f0;
L_08890250:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890258;
L_08890258:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_08890220;
L_08890264:;
    a0 = s0 + 0;
    { u64 r_ = func_08AB1618(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889026C;
L_0889026C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08890238; }
    goto L_08890274;
L_08890274:;
    a0 = LD32(v0+16);
    s2 = v0 + 4;
    cnd_ = a0 != 0;
    s1 = v0 + 16;
    if (cnd_) { goto L_088902BC; }
    goto L_08890284;
L_08890284:;
    a0 = LD32(s0+4);
    ST32(s1+4, 0);
    cnd_ = a0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_088902AC; }
    goto L_08890294;
L_08890294:;
    ST32(s2+4, 0);
    a0 = s0 + 0;
    ST32(s2+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088902A4;
L_088902A4:;
    goto L_0889023C;
L_088902AC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088902B4;
L_088902B4:;
    ST32(s0+4, 0);
    goto L_08890294;
L_088902BC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088902C4;
L_088902C4:;
    ST32(s0+16, 0);
    goto L_08890284;
}

/* 088902CC */
u64 func_088902CC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088902CC:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s0 = a0 + 432;
    v0 = LD_U8(s0+8);
    cnd_ = v0 == 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_08890318; }
    goto L_088902FC;
L_088902FC:;
    goto L_08890300;
L_08890300:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08890318:;
    a1 = a2 + 0;
    a0 = s0 + 0;
    a2 = 1;
    { u64 r_ = func_08AB190C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08890328;
L_08890328:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08890300; }
    goto L_08890330;
L_08890330:;
    a1 = s3 + 0;
    a0 = s0 + 0;
    { u64 r_ = func_08AB1618(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889033C;
L_0889033C:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_088902FC; }
    goto L_08890344;
L_08890344:;
    v1 = LD32(s2+432);
    ST32(v0, s1);
    cnd_ = v1 == 0;
    a2 = s0 + 0;
    if (cnd_) { goto L_08890378; }
    goto L_08890354;
L_08890354:;
    a1 = v1 + 0;
    goto L_08890358;
L_08890358:;
    v0 = LD32(a1);
    a0 = a1 + 28;
    a2 = a1 + 32;
    v0 = v0 < s1;
    if (v0 == 0) a2 = a0;
    v1 = LD32(a2);
    cnd_ = v1 != 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08890358; }
    goto L_08890378;
L_08890378:;
    v0 = LD32(s0+4);
    ST32(a2, a3);
    v0 = v0 + 1;
    ST32(s0+4, v0);
    goto L_088902FC;
}

/* 0889038C */
u64 func_0889038C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889038C:;
    sp = sp - 16;
    s0 = a0 + 0;
    func_0888EB0C(a0);
    goto L_088903A0;
L_088903A0:;
    v0 = D_08AF7338 - (29496);
    v1 = 2012;
    v0 = v0 + 29496;
    ST32(s0+4, v1);
    ST32(s0, v0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088903C4 */
rv_t func_088903C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088903C4:;
    sp = sp - 48;
    s3 = a1 + 0;
    v0 = LD32(a0+116);
    v0 = (v0 >> 8) & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08890400; }
    goto L_088903F4;
L_088903F4:;
    v0 = LD32(a0+380);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08890420; }
    goto L_08890400;
L_08890400:;
    goto L_08890404;
L_08890404:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08890420:;
    { rv_t r_ = func_0888C860(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890428;
L_08890428:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f1 = BITSF(LD32(v0+23196));
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1+4));
    v0 = LD_U8(s1+421);
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    cnd_ = v0 != 0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_08890570; }
    goto L_08890450;
L_08890450:;
    a0 = LD32(s1+412);
    v0 = a0 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088904A0; }
    goto L_08890460;
L_08890460:;
    v1 = LD32(s1+408);
    v0 = v1 < 0x2u;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088904A0; }
    goto L_08890470;
L_08890470:;
    a1 = LD32(s1+392);
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0889049C; }
    goto L_0889047C;
L_0889047C:;
    v0 = v1 - a0;
    v0 = v0 + 1;
    v1 = v0 < a1;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088904A0; }
    goto L_08890490;
L_08890490:;
    cnd_ = v0 != 0;
    ST32(s1+392, v0);
    if (cnd_) { goto L_088904A0; }
    goto L_08890498;
L_08890498:;
    v0 = 1;
    goto L_0889049C;
L_0889049C:;
    ST32(s1+392, v0);
    goto L_088904A0;
L_088904A0:;
    cnd_ = a0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_08890400; }
    goto L_088904A8;
L_088904A8:;
    s4 = 180;
    goto L_088904AC;
L_088904AC:;
    a2 = LD32(s1+392);
    v0 = a2 + s2;
    a1 = v0 - 1;
    cnd_ = (s32)a1 < 0;
    if (cnd_) { v0 = LD_U8(s1+421); goto L_0889055C; }
    goto L_088904C0;
L_088904C0:;
    v1 = LD32(s1+380);
    v0 = (s32)a1 < (s32)v1;
    cnd_ = v0 != 0;
    { s64 p_ = (s64)(s32)a1 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    if (cnd_) { goto L_08890504; }
    goto L_088904D0;
L_088904D0:;
    v0 = LD_U8(s1+421);
    cnd_ = v0 != 0;
    a1 = a1 - v1;
    if (cnd_) { goto L_08890500; }
    goto L_088904DC;
L_088904DC:;
    f1 = BITSF(LD32(s1+416));
    goto L_088904E0;
L_088904E0:;
    f0 = BITSF(LD32(sp+4));
    s2 = s2 + 1;
    v0 = s2 < a0;
    f0 = f0 + f1;
    cnd_ = v0 != 0;
    ST32(sp+4, FBITS(f0));
    if (cnd_) { goto L_088904AC; }
    goto L_088904F8;
L_088904F8:;
    goto L_08890404;
L_08890500:;
    { s64 p_ = (s64)(s32)a1 * (s32)s4; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    goto L_08890504;
L_08890504:;
    a0 = LD32(s1+376);
    a1 = a1 ^ a2;
    v0 = 2;
    v1 = 32;
    s0 = lo;
    a0 = a0 + s0;
    a2 = LD32(a0);
    if (a1 != 0) v1 = v0;
    ST32(a0+156, v1);
    v0 = LD32(a2+36);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890534;
L_08890534:;
    v1 = LD32(s1+376);
    a1 = s3 + 0;
    s0 = s0 + v1;
    a2 = LD32(s0);
    v0 = LD32(a2+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890550;
L_08890550:;
    f1 = BITSF(LD32(s1+416));
    a0 = LD32(s1+412);
    goto L_088904E0;
L_0889055C:;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s1+416)); goto L_088904E0; }
    goto L_08890564;
L_08890564:;
    v0 = LD32(s1+380);
    a1 = a1 + v0;
    goto L_08890500;
L_08890570:;
    a0 = LD32(s1+412);
    goto L_088904A0;
}

/* 08890578 */
rv_t func_08890578(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_08890578:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08B29C64 - (-25500);
    t1 = D_08B29C74 - (-25484);
    t2 = D_08B29C84 - (-25468);
    a1 = a1 & a0;
    v1 = t0 - 25500;
    a2 = t1 - 25484;
    cnd_ = a1 == 0;
    a3 = t2 - 25468;
    if (cnd_) { goto L_08890630; }
    goto L_088905A8;
L_088905A8:;
    v0 = D_08AEC1D8 - (-15912);
    f4 = BITSF(LD32(v0-15912));
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
    ST32(t0-25500, FBITS(f2));
    ST32(t1-25484, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-25468, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_08890630;
L_08890630:;
    return (rv_t){ v0, v1, f0 };
}

/* 08890638 */
rv_t func_08890638(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08890638:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_08890578(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889064C;
L_0889064C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08890658 */
rv_t func_08890658(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08890658:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_0889066C;
L_0889066C:;
    v0 = D_08AEC1F4 - (-15884);
    f1 = BITSF(LD32(v0-15884));
    v0 = D_08AEC1EC - (-15892);
    f0 = BITSF(LD32(v0-15892));
    v0 = D_08AEC1F0 - (-15888);
    a1 = s0 + 264;
    ST32(s0+188, FBITS(f0));
    v1 = 3;
    a0 = s0 + 212;
    f0 = BITSF(LD32(v0-15888));
    v0 = D_08AEC1F8 - (-15880);
    ST32(s0+176, 0);
    ST32(s0+192, FBITS(f0));
    f0 = BITSF(LD32(v0-15880));
    v0 = D_08AF7590 - (30096);
    v0 = v0 + 30096;
    ST32(s0, v0);
    v0 = 2009;
    ST32(s0+236, FBITS(f0));
    ST32(s0+184, 0);
    ST32(s0+196, 0);
    ST32(s0+200, 0);
    ST32(s0+204, FBITS(f1));
    ST32(s0+208, 0);
    ST32(s0+228, 0);
    ST32(s0+232, 0);
    ST32(s0+256, v1);
    ST32(s0+180, 0);
    ST32(s0+260, 0);
    ST32(s0+212, FBITS(f1));
    ST32(a1+8, 0);
    ST32(a1+4, 0);
    ST32(s0+240, 0);
    ST32(s0+4, v0);
    ST32(s0+244, 0);
    ST32(s0+248, 0);
    ST8(s0+252, 0);
    ST32(s0+264, 0);
    ST32(a0+12, FBITS(f1));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f1));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08890720 */
rv_t func_08890720(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08890720:;
    sp = sp - 16;
    v0 = D_08AF7590 - (30096);
    v0 = v0 + 30096;
    s0 = a0 + 0;
    s1 = s0 + 264;
    v1 = LD32(a0+264);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08890774; }
    goto L_08890750;
L_08890750:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08890760;
L_08890760:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08890774:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889077C;
L_0889077C:;
    ST32(s0+264, 0);
    goto L_08890750;
}

/* 08890784 */
rv_t func_08890784(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08890784:;
    sp = sp - 16;
    v0 = D_08AF7590 - (30096);
    v0 = v0 + 30096;
    s0 = a0 + 0;
    s1 = s0 + 264;
    v1 = LD32(a0+264);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088907E0; }
    goto L_088907B4;
L_088907B4:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088907C4;
L_088907C4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088907CC;
L_088907CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088907E0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088907E8;
L_088907E8:;
    ST32(s0+264, 0);
    goto L_088907B4;
}

/* 088907F0 */
rv_t func_088907F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088907F0:;
    sp = sp - 48;
    s3 = (u32)-1;
    s2 = (u32)-1;
    s0 = a0 + 0;
    a0 = LD32(a0+240);
    cnd_ = a0 != 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_088909C8; }
    goto L_08890820;
L_08890820:;
    a0 = LD32(s0+244);
    goto L_08890824;
L_08890824:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889088C; }
    goto L_0889082C;
L_0889082C:;
    a0 = s0 + 0;
    goto L_08890830;
L_08890830:;
    a1 = s1 + 0;
    { rv_t r_ = func_0888C860(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890838;
L_08890838:;
    a0 = LD32(s0+240);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889087C; }
    goto L_08890844;
L_08890844:;
    a0 = LD32(s0+244);
    goto L_08890848;
L_08890848:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889086C; }
    goto L_08890850;
L_08890850:;
    goto L_08890854;
L_08890854:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_0889086C:;
    a1 = s3 + 0;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890874;
L_08890874:;
    goto L_08890854;
L_0889087C:;
    a1 = s2 + 0;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890884;
L_08890884:;
    a0 = LD32(s0+244);
    goto L_08890848;
L_0889088C:;
    v0 = func_08887404(a0);
    goto L_08890894;
L_08890894:;
    v1 = D_08AEC1FC - (-15876);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v1-15876));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a0 = D_08AEC200 - (-15872);
    if (cnd_) { goto L_088909BC; }
    goto L_088908B8;
L_088908B8:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 + f0;
    goto L_088908C0;
L_088908C0:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-15876));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = a2 << 8;
    if (cnd_) { goto L_088909B0; }
    goto L_088908E8;
L_088908E8:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f2 + f0;
    goto L_088908F0;
L_088908F0:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1-15876));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_088909A4; }
    goto L_0889091C;
L_0889091C:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 + f0;
    goto L_08890924;
L_08890924:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1-15876));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08890998; }
    goto L_08890950;
L_08890950:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 + f0;
    goto L_08890958;
L_08890958:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s0+232));
    a2 = FBITS(f0);
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s3 = a1 + a2;
    if (cnd_) { goto L_0889082C; }
    goto L_08890978;
L_08890978:;
    a0 = sp + 0;
    a1 = s0 + 0;
    func_088911DC(a0, a1);
    goto L_08890984;
L_08890984:;
    a0 = LD32(s0+244);
    a1 = sp + 0;
    func_0888744C(a0, a1);
    goto L_08890990;
L_08890990:;
    a0 = s0 + 0;
    goto L_08890830;
L_08890998:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 - f0;
    goto L_08890958;
L_088909A4:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 - f0;
    goto L_08890924;
L_088909B0:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f2 - f0;
    goto L_088908F0;
L_088909BC:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 - f0;
    goto L_088908C0;
L_088909C8:;
    v0 = func_08887404(a0);
    goto L_088909D0;
L_088909D0:;
    v1 = D_08AEC1FC - (-15876);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v1-15876));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a0 = D_08AEC200 - (-15872);
    if (cnd_) { goto L_08890AF8; }
    goto L_088909F4;
L_088909F4:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 + f0;
    goto L_088909FC;
L_088909FC:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-15876));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = a2 << 8;
    if (cnd_) { goto L_08890AEC; }
    goto L_08890A24;
L_08890A24:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f2 + f0;
    goto L_08890A2C;
L_08890A2C:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1-15876));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08890AE0; }
    goto L_08890A58;
L_08890A58:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 + f0;
    goto L_08890A60;
L_08890A60:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1-15876));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08890AD4; }
    goto L_08890A8C;
L_08890A8C:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 + f0;
    goto L_08890A94;
L_08890A94:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s0+228));
    a2 = FBITS(f0);
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s2 = a1 + a2;
    if (cnd_) { goto L_08890820; }
    goto L_08890AB4;
L_08890AB4:;
    a0 = sp + 0;
    a1 = s0 + 0;
    func_088911DC(a0, a1);
    goto L_08890AC0;
L_08890AC0:;
    a0 = LD32(s0+240);
    a1 = sp + 0;
    func_0888744C(a0, a1);
    goto L_08890ACC;
L_08890ACC:;
    a0 = LD32(s0+244);
    goto L_08890824;
L_08890AD4:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 - f0;
    goto L_08890A94;
L_08890AE0:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 - f0;
    goto L_08890A60;
L_08890AEC:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f2 - f0;
    goto L_08890A2C;
L_08890AF8:;
    f0 = BITSF(LD32(a0-15872));
    f0 = f1 - f0;
    goto L_088909FC;
}

/* 08890B04 */
rv_t func_08890B04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08890B04:;
    sp = sp - 32;
    s1 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08886F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890B24;
L_08890B24:;
    v0 = 8;
    v1 = LD32(s1+156);
    cnd_ = v1 == v0;
    ST32(s1+176, FBITS(f20));
    if (cnd_) { goto L_08890BCC; }
    goto L_08890B34;
L_08890B34:;
    v0 = (s32)v1 < 9;
    cnd_ = v0 == 0;
    v0 = 32;
    if (cnd_) { goto L_08890BD8; }
    goto L_08890B40;
L_08890B40:;
    cnd_ = (s32)v1 <= 0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_08890B5C; }
    goto L_08890B48;
L_08890B48:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_08890B60; }
    goto L_08890B50;
L_08890B50:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 32;
    if (cnd_) { goto L_08890BD0; }
    goto L_08890B5C;
L_08890B5C:;
    v0 = LD32(s1+52);
    goto L_08890B60;
L_08890B60:;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08890B90; }
    goto L_08890B68;
L_08890B68:;
    a0 = s1 + 0;
    func_0889104C(a0);
    goto L_08890B70;
L_08890B70:;
    a0 = s1 + 0;
    { u64 r_ = func_08891098(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08890B78;
L_08890B78:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08890B90:;
    v1 = LD32(s1+48);
    goto L_08890B94;
L_08890B94:;
    v0 = s0 << 2;
    f12 = f20;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+12);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890BB4;
L_08890BB4:;
    v0 = LD32(s1+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+48); goto L_08890B94; }
    goto L_08890BC4;
L_08890BC4:;
    goto L_08890B68;
L_08890BCC:;
    v0 = 32;
    goto L_08890BD0;
L_08890BD0:;
    ST32(s1+156, v0);
    goto L_08890B5C;
L_08890BD8:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 33;
    if (cnd_) { goto L_08890B5C; }
    goto L_08890BE0;
L_08890BE0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_08890B60; }
    goto L_08890BE8;
L_08890BE8:;
    v0 = 16;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1+52); goto L_08890B60; }
    goto L_08890BF4;
L_08890BF4:;
    v0 = 2;
    goto L_08890BD0;
}

/* 08890BFC */
rv_t func_08890BFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08890BFC:;
    sp = sp - 32;
    s0 = a1 + 0;
    s2 = a0 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890C20;
L_08890C20:;
    a0 = s2 + 0;
    f13 = BITSF(LD32(s0+204));
    f12 = BITSF(LD32(s0+200));
    func_0889151C(a0, f12, f13);
    goto L_08890C30;
L_08890C30:;
    f12 = BITSF(LD32(s0+208));
    a0 = s2 + 0;
    func_0889154C(a0, f12);
    goto L_08890C3C;
L_08890C3C:;
    a1 = LD32(s0+256);
    a0 = s2 + 0;
    func_088917D0(a0, a1);
    goto L_08890C48;
L_08890C48:;
    f13 = BITSF(LD32(s2+216));
    f14 = BITSF(LD32(s2+220));
    f15 = BITSF(LD32(s2+224));
    f12 = BITSF(LD32(s2+212));
    a0 = s2 + 0;
    func_08891208(a0, f12, f13, f14, f15);
    goto L_08890C60;
L_08890C60:;
    f12 = BITSF(LD32(s0+236));
    a0 = s2 + 0;
    func_088917EC(a0, f12);
    goto L_08890C6C;
L_08890C6C:;
    a1 = s0 + 264;
    a0 = s2 + 264;
    { rv_t r_ = func_0887E394(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890C78;
L_08890C78:;
    a0 = s0 + 0;
    v0 = func_08891804(a0);
    goto L_08890C80;
L_08890C80:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    func_088917FC(a0, a1);
    goto L_08890C8C;
L_08890C8C:;
    v0 = LD32(s0+248);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08890D04; }
    goto L_08890C98;
L_08890C98:;
    s3 = LD32(v0+144);
    goto L_08890C9C;
L_08890C9C:;
    v1 = LD32(s0);
    goto L_08890CA0;
L_08890CA0:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890CAC;
L_08890CAC:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08890D04; }
    goto L_08890CBC;
L_08890CBC:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890CCC;
L_08890CCC:;
    v0 = LD32(v0+144);
    a1 = s1 + 0;
    a0 = s2 + 0;
    cnd_ = v0 != s3;
    s1 = s1 + 1;
    if (cnd_) { goto L_08890C9C; }
    goto L_08890CE0;
L_08890CE0:;
    v1 = LD32(s2);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890CF0;
L_08890CF0:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08891724(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890CFC;
L_08890CFC:;
    v1 = LD32(s0);
    goto L_08890CA0;
L_08890D04:;
    v0 = LD32(s0+240);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08890D7C; }
    goto L_08890D10;
L_08890D10:;
    s3 = LD32(v0+144);
    goto L_08890D14;
L_08890D14:;
    v1 = LD32(s0);
    goto L_08890D18;
L_08890D18:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890D24;
L_08890D24:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08890D7C; }
    goto L_08890D34;
L_08890D34:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890D44;
L_08890D44:;
    v0 = LD32(v0+144);
    a1 = s1 + 0;
    a0 = s2 + 0;
    cnd_ = v0 != s3;
    s1 = s1 + 1;
    if (cnd_) { goto L_08890D14; }
    goto L_08890D58;
L_08890D58:;
    v1 = LD32(s2);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890D68;
L_08890D68:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08891604(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890D74;
L_08890D74:;
    v1 = LD32(s0);
    goto L_08890D18;
L_08890D7C:;
    v0 = LD32(s0+244);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08890DF4; }
    goto L_08890D88;
L_08890D88:;
    s3 = LD32(v0+144);
    goto L_08890D8C;
L_08890D8C:;
    v1 = LD32(s0);
    goto L_08890D90;
L_08890D90:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890D9C;
L_08890D9C:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08890DF4; }
    goto L_08890DAC;
L_08890DAC:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890DBC;
L_08890DBC:;
    v0 = LD32(v0+144);
    a1 = s1 + 0;
    a0 = s2 + 0;
    cnd_ = v0 != s3;
    s1 = s1 + 1;
    if (cnd_) { goto L_08890D8C; }
    goto L_08890DD0;
L_08890DD0:;
    v1 = LD32(s2);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890DE0;
L_08890DE0:;
    a1 = v0 + 0;
    a0 = s2 + 0;
    { rv_t r_ = func_08891694(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890DEC;
L_08890DEC:;
    v1 = LD32(s0);
    goto L_08890D90;
L_08890DF4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08890E10 */
rv_t func_08890E10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08890E10:;
    sp = sp - 32;
    s3 = a0 + 0;
    s1 = 1024;
    s0 = LD32(a0+156);
    cnd_ = s0 == s1;
    s2 = a1 + 0;
    if (cnd_) { goto L_08890E90; }
    goto L_08890E40;
L_08890E40:;
    { rv_t r_ = func_0888C954(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890E48;
L_08890E48:;
    s4 = v0 + 0;
    v0 = s2 & 0x10;
    cnd_ = v0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_08890E70; }
    goto L_08890E58;
L_08890E58:;
    v0 = 1;
    cnd_ = s0 == v0;
    v0 = s4 + 0;
    if (cnd_) { goto L_08890E70; }
    goto L_08890E64;
L_08890E64:;
    ST32(s3+156, s1);
    s4 = s4 | 0x10;
    goto L_08890E6C;
L_08890E6C:;
    v0 = s4 + 0;
    goto L_08890E70;
L_08890E70:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08890E90:;
    s1 = (a1 >> 17) & 0x1;
    s0 = (a1 >> 18) & 0x1;
    cnd_ = s0 == 0;
    s4 = s1 << 17;
    if (cnd_) { goto L_08890EA8; }
    goto L_08890EA0;
L_08890EA0:;
    v0 = 0x40000u;
    s4 = s4 | v0;
    goto L_08890EA8;
L_08890EA8:;
    a1 = s1 | s0;
    { rv_t r_ = func_08890FA8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890EB0;
L_08890EB0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08890EC0; }
    goto L_08890EB8;
L_08890EB8:;
    s1 = 0 + 0;
    s0 = 0 + 0;
    goto L_08890EC0;
L_08890EC0:;
    cnd_ = s1 != 0;
    if (cnd_) { goto L_08890F50; }
    goto L_08890EC8;
L_08890EC8:;
    cnd_ = s0 != 0;
    v0 = s2 & 0x4010;
    if (cnd_) { goto L_08890EF8; }
    goto L_08890ED0;
L_08890ED0:;
    cnd_ = v0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_08890E70; }
    goto L_08890ED8;
L_08890ED8:;
    v0 = s4 | 0x10;
    a0 = s4 | 0x4000;
    a1 = s2 & 0x10;
    s4 = v0 + 0;
    v1 = 32;
    if (a1 == 0) s4 = a0;
    ST32(s3+156, v1);
    goto L_08890E6C;
L_08890EF8:;
    a0 = s3 + 0;
    f0 = func_088915A4(a0);
    goto L_08890F00;
L_08890F00:;
    f1 = BITSF(LD32(s3+196));
    a0 = s3 + 0;
    f1 = f1 + f0;
    ST32(s3+196, FBITS(f1));
    f0 = func_088914B4(a0);
    goto L_08890F14;
L_08890F14:;
    f1 = BITSF(LD32(s3+196));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08890F40; }
    goto L_08890F28;
L_08890F28:;
    a0 = s3 + 0;
    { rv_t r_ = func_08891B0C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890F30;
L_08890F30:;
    a0 = s3 + 0;
    f0 = func_088915D4(a0);
    goto L_08890F38;
L_08890F38:;
    v0 = s4 + 0;
    goto L_08890E70;
L_08890F40:;
    a0 = s3 + 0;
    f0 = func_088914B4(a0);
    goto L_08890F48;
L_08890F48:;
    ST32(s3+196, FBITS(f0));
    goto L_08890F28;
L_08890F50:;
    a0 = s3 + 0;
    f0 = func_088915A4(a0);
    goto L_08890F58;
L_08890F58:;
    f1 = BITSF(LD32(s3+196));
    a0 = s3 + 0;
    f1 = f1 - f0;
    ST32(s3+196, FBITS(f1));
    f0 = func_08891514(a0);
    goto L_08890F6C;
L_08890F6C:;
    f1 = BITSF(LD32(s3+196));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08890F98; }
    goto L_08890F80;
L_08890F80:;
    a0 = s3 + 0;
    { rv_t r_ = func_08891B0C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08890F88;
L_08890F88:;
    a0 = s3 + 0;
    f0 = func_088915AC(a0);
    goto L_08890F90;
L_08890F90:;
    v0 = s4 + 0;
    goto L_08890E70;
L_08890F98:;
    a0 = s3 + 0;
    f0 = func_08891514(a0);
    goto L_08890FA0;
L_08890FA0:;
    ST32(s3+196, FBITS(f0));
    goto L_08890F80;
}

/* 08890FA8 */
rv_t func_08890FA8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08890FA8:;
    a1 = a1 & 0xff;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+180); goto L_08890FC8; }
    goto L_08890FB8;
L_08890FB8:;
    ST32(a0+184, 0);
    ST32(a0+180, 0);
    goto L_08890FC0;
L_08890FC0:;
    v0 = a1 + 0;
    return (rv_t){ v0, v1, f0 };
L_08890FC8:;
    cnd_ = v1 == a1;
    v0 = 2;
    if (cnd_) { goto L_0889101C; }
    goto L_08890FD0;
L_08890FD0:;
    cnd_ = v1 == v0;
    v0 = v1 + 1;
    if (cnd_) { goto L_08890FE8; }
    goto L_08890FD8;
L_08890FD8:;
    f0 = BITSF(LD32(a0+188));
    ST32(a0+180, v0);
    goto L_08890FE0;
L_08890FE0:;
    ST32(a0+184, FBITS(f0));
    goto L_08890FC0;
L_08890FE8:;
    f0 = BITSF(LD32(a0+184));
    f1 = BITSF(LD32(a0+176));
    f2 = BITSF(0);
    f1 = f0 - f1;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+184, FBITS(f1));
    if (cnd_) { goto L_08891014; }
    goto L_08891008;
L_08891008:;
    f0 = BITSF(LD32(a0+192));
    goto L_0889100C;
L_0889100C:;
    f0 = f1 + f0;
    goto L_08890FE0;
L_08891014:;
    a1 = 0 + 0;
    goto L_08890FC0;
L_0889101C:;
    f0 = BITSF(LD32(a0+184));
    f1 = BITSF(LD32(a0+176));
    f2 = BITSF(0);
    f1 = f0 - f1;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+184, FBITS(f1));
    if (cnd_) { goto L_08891014; }
    goto L_0889103C;
L_0889103C:;
    f0 = BITSF(LD32(a0+192));
    v0 = 2;
    ST32(a0+180, v0);
    goto L_0889100C;
}

/* 0889104C */
void func_0889104C(u32 a0)
{
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_0889104C:;
    f1 = BITSF(LD32(a0+228));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a0+232)); goto L_08891074; }
    goto L_08891064;
L_08891064:;
    f0 = BITSF(LD32(a0+176));
    f0 = f1 - f0;
    ST32(a0+228, FBITS(f0));
    f1 = BITSF(LD32(a0+232));
    goto L_08891074;
L_08891074:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08891090; }
    goto L_08891084;
L_08891084:;
    f0 = BITSF(LD32(a0+176));
    f0 = f1 - f0;
    ST32(a0+232, FBITS(f0));
    goto L_08891090;
L_08891090:;
    return;
}

/* 08891098 */
u64 func_08891098(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08891098:;
    sp = sp - 192;
    v0 = LD32(a0+248);
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088910C8; }
    goto L_088910B4;
L_088910B4:;
    goto L_088910B8;
L_088910B8:;
    sp = sp + 192;
    return (u64)v0 | ((u64)v1 << 32);
L_088910C8:;
    v0 = func_088917C8(a0);
    goto L_088910D0;
L_088910D0:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08891164; }
    goto L_088910D8;
L_088910D8:;
    a1 = 1;
    v0 = func_0889180C(a0, a1);
    goto L_088910E0;
L_088910E0:;
    cnd_ = v0 != 0;
    a0 = s1 + 264;
    if (cnd_) { goto L_08891148; }
    goto L_088910E8;
L_088910E8:;
    f1 = BITSF(LD32(s1+196));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC204 - (-15868);
    if (cnd_) { goto L_0889113C; }
    goto L_08891100;
L_08891100:;
    f0 = BITSF(LD32(v0-15868));
    f0 = f1 + f0;
    goto L_08891108;
L_08891108:;
    f0 = BITSF(F2I(f0, 1));
    a1 = D_08AD5124 - (20772);
    a1 = a1 + 20772;
    a0 = sp + 0;
    t0 = FBITS(f0);
    a2 = 64;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891128;
L_08891128:;
    a0 = LD32(s1+248);
    goto L_0889112C;
L_0889112C:;
    a1 = sp + 0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891134;
L_08891134:;
    goto L_088910B8;
L_0889113C:;
    f0 = BITSF(LD32(v0-15868));
    f0 = f1 - f0;
    goto L_08891108;
L_08891148:;
    a1 = sp + 160;
    ST32(sp+160, 0);
    { u64 r_ = func_0887E15C(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891154;
L_08891154:;
    f0 = BITSF(LD32(sp+160));
    f1 = (float)(s32)FBITS(f0);
    ST32(s1+196, FBITS(f1));
    goto L_088910E8;
L_08891164:;
    a1 = 1;
    v0 = func_0889180C(a0, a1);
    goto L_0889116C;
L_0889116C:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 264; goto L_088911CC; }
    goto L_08891174;
L_08891174:;
    a0 = s1 + 0;
    v0 = func_088917E4(a0);
    goto L_0889117C;
L_0889117C:;
    s0 = sp + 128;
    a1 = D_08AD512C - (20780);
    t1 = v0 + 0;
    a1 = a1 + 20780;
    a2 = 16;
    a3 = 1;
    t0 = 37;
    a0 = s0 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088911A0;
L_088911A0:;
    f12 = BITSF(LD32(s1+196));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088911A8;
L_088911A8:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    t1 = v1 + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088911C4;
L_088911C4:;
    a0 = LD32(s1+248);
    goto L_0889112C;
L_088911CC:;
    a1 = s1 + 196;
    func_0887E124(a0, a1, 0, 0, 0);
    goto L_088911D4;
L_088911D4:;
    goto L_08891174;
}

/* 088911DC */
void func_088911DC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_088911DC:;
    v0 = a1 + 212;
    f3 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1+212));
    v0 = a0 + 0;
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f0));
    ST32(a0+8, FBITS(f2));
    ST32(a0+12, FBITS(f3));
    return;
}

/* 08891208 */
void func_08891208(u32 a0, float f12, float f13, float f14, float f15)
{
L_08891208:;
    ST32(a0+224, FBITS(f15));
    ST32(a0+212, FBITS(f12));
    ST32(a0+216, FBITS(f13));
    ST32(a0+220, FBITS(f14));
    return;
}

/* 0889121C */
rv_t func_0889121C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889121C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891230;
L_08891230:;
    a0 = s0 + 0;
    func_08891A40(a0, 0, 0, 0);
    goto L_08891238;
L_08891238:;
    a1 = LD32(s0+144);
    a0 = (u32)-1;
    a2 = 2;
    a3 = 2009;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891250;
L_08891250:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08891264 */
rv_t func_08891264(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08891264:;
    sp = sp - 16;
    a1 = 64;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_0889127C;
L_0889127C:;
    v1 = 1;
    cnd_ = v0 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_0889129C; }
    goto L_08891288;
L_08891288:;
    goto L_0889128C;
L_0889128C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889129C:;
    { rv_t r_ = func_08891B0C(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088912A4;
L_088912A4:;
    v0 = D_08AEC20C - (-15860);
    f0 = BITSF(LD32(v0-15860));
    f1 = BITSF(LD32(s0+196));
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = LD32(s0+144);
    if (cnd_) { goto L_088912F4; }
    goto L_088912C8;
L_088912C8:;
    v0 = D_08AEC210 - (-15856);
    f0 = BITSF(LD32(v0-15856));
    f0 = f1 + f0;
    goto L_088912D4;
L_088912D4:;
    f0 = BITSF(F2I(f0, 1));
    a0 = (u32)-1;
    a2 = 1;
    t0 = FBITS(f0);
    a3 = 2009;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088912EC;
L_088912EC:;
    goto L_0889128C;
L_088912F4:;
    v0 = D_08AEC210 - (-15856);
    f0 = BITSF(LD32(v0-15856));
    f0 = f1 - f0;
    goto L_088912D4;
}

/* 08891304 */
rv_t func_08891304(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08891304:;
    sp = sp - 16;
    a2 = a0 + 0;
    v1 = LD32(a0+144);
    v0 = LD32(a1+12);
    cnd_ = v0 == v1;
    a0 = 0 + 0;
    if (cnd_) { goto L_08891334; }
    goto L_08891320;
L_08891320:;
    v1 = LD32(a1+4);
    v0 = 2009;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(a1+2); goto L_08891344; }
    goto L_08891330;
L_08891330:;
    a0 = 1;
    goto L_08891334;
L_08891334:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08891344:;
    v0 = 1;
    cnd_ = v1 != v0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08891330; }
    goto L_08891350;
L_08891350:;
    v0 = LD32(a1+16);
    f1 = BITSF(v0);
    v1 = v0 >> 1;
    a1 = v0 & 0x1;
    a1 = a1 | v1;
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_0889137C; }
    goto L_0889136C;
L_0889136C:;
    ST32(a2+196, FBITS(f0));
    { rv_t r_ = func_08891B0C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891374;
L_08891374:;
    a0 = 1;
    goto L_08891334;
L_0889137C:;
    f1 = BITSF(a1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_0889136C;
}

/* 0889138C */
rv_t func_0889138C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889138C:;
    sp = sp - 16;
    a2 = LD32(a0+144);
    v0 = LD32(a1+12);
    cnd_ = v0 == a2;
    v1 = 0 + 0;
    if (cnd_) { goto L_088913F0; }
    goto L_088913A4;
L_088913A4:;
    v0 = D_08AEC214 - (-15852);
    f2 = BITSF(LD32(a0+196));
    f1 = BITSF(LD32(v0-15852));
    f0 = BITSF(0);
    f2 = f2 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEC218 - (-15848);
    if (cnd_) { goto L_08891400; }
    goto L_088913C8;
L_088913C8:;
    f0 = BITSF(LD32(v0-15848));
    f0 = f2 + f0;
    goto L_088913D0;
L_088913D0:;
    f0 = BITSF(F2I(f0, 1));
    a0 = LD32(a1+12);
    a3 = 2009;
    a1 = a2 + 0;
    t0 = FBITS(f0);
    a2 = 1;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088913EC;
L_088913EC:;
    v1 = 1;
    goto L_088913F0;
L_088913F0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08891400:;
    f0 = BITSF(LD32(v0-15848));
    f0 = f2 - f0;
    goto L_088913D0;
}

/* 0889140C */
rv_t func_0889140C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0889140C:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08891414 */
rv_t func_08891414(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08891414:;
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08891424 */
rv_t func_08891424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08891424:;
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08891434 */
rv_t func_08891434(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08891434:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08891450; }
    goto L_08891440;
L_08891440:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_08891450;
L_08891450:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 0889145C */
void func_0889145C(u32 a0, float f12)
{
    u32 s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889145C:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    f0 = func_08891514(a0);
    goto L_08891478;
L_08891478:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+204, FBITS(f20)); goto L_08891488; }
    goto L_08891488;
L_08891488:;
    f0 = BITSF(LD32(s0+196));
    f1 = BITSF(LD32(s0+204));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+196, FBITS(f1)); goto L_088914A0; }
    goto L_088914A0;
L_088914A0:;
    sp = sp + 32;
    return;
}

/* 088914B4 */
float func_088914B4(u32 a0)
{
    float f0 = 0;
L_088914B4:;
    f0 = BITSF(LD32(a0+204));
    return f0;
}

/* 088914BC */
void func_088914BC(u32 a0, float f12)
{
    u32 s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088914BC:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    f0 = func_088914B4(a0);
    goto L_088914D8;
L_088914D8:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+200, FBITS(f20)); goto L_088914E8; }
    goto L_088914E8;
L_088914E8:;
    f0 = BITSF(LD32(s0+196));
    f1 = BITSF(LD32(s0+200));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+196, FBITS(f1)); goto L_08891500; }
    goto L_08891500;
L_08891500:;
    sp = sp + 32;
    return;
}

/* 08891514 */
float func_08891514(u32 a0)
{
    float f0 = 0;
L_08891514:;
    f0 = BITSF(LD32(a0+200));
    return f0;
}

/* 0889151C */
void func_0889151C(u32 a0, float f12, float f13)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_0889151C:;
    fcc = FCMP(f12, f13, 14);
    cnd_ = fcc;
    f0 = f12;
    if (cnd_) { goto L_08891530; }
    goto L_0889152C;
L_0889152C:;
    f12 = f13;
    goto L_08891530;
L_08891530:;
    fcc = FCMP(f13, f0, 14);
    cnd_ = fcc;
    ST32(a0+200, FBITS(f12));
    if (cnd_) { goto L_08891544; }
    goto L_08891540;
L_08891540:;
    f0 = f13;
    goto L_08891544;
L_08891544:;
    ST32(a0+204, FBITS(f0));
    return;
}

/* 0889154C */
void func_0889154C(u32 a0, float f12)
{
    u32 s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889154C:;
    sp = sp - 32;
    s0 = a0 + 0;
    f21 = f12;
    f0 = func_088914B4(a0);
    goto L_0889156C;
L_0889156C:;
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_08891514(a0);
    goto L_08891578;
L_08891578:;
    f20 = f20 - f0;
    fcc = FCMP(f21, f20, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+208, FBITS(f21)); goto L_0889158C; }
    goto L_0889158C;
L_0889158C:;
    sp = sp + 32;
    return;
}

/* 088915A4 */
float func_088915A4(u32 a0)
{
    float f0 = 0;
L_088915A4:;
    f0 = BITSF(LD32(a0+208));
    return f0;
}

/* 088915AC */
float func_088915AC(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088915AC:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_088917F4(a0);
    goto L_088915C0;
L_088915C0:;
    ST32(s0+228, FBITS(f0));
    sp = sp + 16;
    return f0;
}

/* 088915D4 */
float func_088915D4(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088915D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_088917F4(a0);
    goto L_088915E8;
L_088915E8:;
    ST32(s0+232, FBITS(f0));
    sp = sp + 16;
    return f0;
}

/* 088915FC */
rv_t func_088915FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088915FC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08891604 */
rv_t func_08891604(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08891604:;
    sp = sp - 32;
    s3 = 0 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(s0);
    goto L_08891630;
L_08891630:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889163C;
L_0889163C:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_0889166C; }
    goto L_08891650;
L_08891650:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891660;
L_08891660:;
    cnd_ = s2 != v0;
    if (cnd_) { v1 = LD32(s0); goto L_08891630; }
    goto L_08891668;
L_08891668:;
    s3 = 1;
    goto L_0889166C;
L_0889166C:;
    v0 = 1;
    cnd_ = s3 == v0;
    if (cnd_) { ST32(s0+240, s2); goto L_08891678; }
    goto L_08891678;
L_08891678:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08891694 */
rv_t func_08891694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08891694:;
    sp = sp - 32;
    s3 = 0 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(s0);
    goto L_088916C0;
L_088916C0:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088916CC;
L_088916CC:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_088916FC; }
    goto L_088916E0;
L_088916E0:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088916F0;
L_088916F0:;
    cnd_ = s2 != v0;
    if (cnd_) { v1 = LD32(s0); goto L_088916C0; }
    goto L_088916F8;
L_088916F8:;
    s3 = 1;
    goto L_088916FC;
L_088916FC:;
    v0 = 1;
    cnd_ = s3 == v0;
    if (cnd_) { ST32(s0+244, s2); goto L_08891708; }
    goto L_08891708;
L_08891708:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08891724 */
rv_t func_08891724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08891724:;
    sp = sp - 32;
    s3 = 0 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(s0);
    goto L_08891750;
L_08891750:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889175C;
L_0889175C:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_0889178C; }
    goto L_08891770;
L_08891770:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891780;
L_08891780:;
    cnd_ = s2 != v0;
    if (cnd_) { v1 = LD32(s0); goto L_08891750; }
    goto L_08891788;
L_08891788:;
    s3 = 1;
    goto L_0889178C;
L_0889178C:;
    v0 = 1;
    cnd_ = s3 == v0;
    if (cnd_) { ST32(s0+248, s2); goto L_08891798; }
    goto L_08891798;
L_08891798:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088917B4 */
void func_088917B4(u32 a0)
{
    u32 v0 = 0;
L_088917B4:;
    v0 = 1;
    ST8(a0+252, v0);
    return;
}

/* 088917C0 */
void func_088917C0(u32 a0)
{
L_088917C0:;
    ST8(a0+252, 0);
    return;
}

/* 088917C8 */
u32 func_088917C8(u32 a0)
{
    u32 v0 = 0;
L_088917C8:;
    v0 = LD_U8(a0+252);
    return v0;
}

/* 088917D0 */
void func_088917D0(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_088917D0:;
    v0 = a1 < 0x6u;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a0+256, a1); goto L_088917DC; }
    goto L_088917DC;
L_088917DC:;
    return;
}

/* 088917E4 */
u32 func_088917E4(u32 a0)
{
    u32 v0 = 0;
L_088917E4:;
    v0 = LD32(a0+256);
    return v0;
}

/* 088917EC */
void func_088917EC(u32 a0, float f12)
{
L_088917EC:;
    ST32(a0+236, FBITS(f12));
    return;
}

/* 088917F4 */
float func_088917F4(u32 a0)
{
    float f0 = 0;
L_088917F4:;
    f0 = BITSF(LD32(a0+236));
    return f0;
}

/* 088917FC */
void func_088917FC(u32 a0, u32 a1)
{
L_088917FC:;
    ST32(a0+260, a1);
    return;
}

/* 08891804 */
u32 func_08891804(u32 a0)
{
    u32 v0 = 0;
L_08891804:;
    v0 = LD32(a0+260);
    return v0;
}

/* 0889180C */
u32 func_0889180C(u32 a0, u32 a1)
{
    u32 v0 = 0;
L_0889180C:;
    v0 = LD32(a0+260);
    v0 = v0 & a1;
    v0 = 0 < v0;
    return v0;
}

/* 0889181C */
rv_t func_0889181C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0889181C:;
    sp = sp - 48;
    s2 = a3 + 0;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891844;
L_08891844:;
    a2 = s0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891854;
L_08891854:;
    a1 = sp + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891860;
L_08891860:;
    f12 = BITSF(LD32(sp));
    a0 = s0 + 0;
    func_0889145C(a0, f12);
    goto L_0889186C;
L_0889186C:;
    a1 = sp + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891878;
L_08891878:;
    f12 = BITSF(LD32(sp));
    a0 = s0 + 0;
    func_088914BC(a0, f12);
    goto L_08891884;
L_08891884:;
    a1 = sp + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891890;
L_08891890:;
    f12 = BITSF(LD32(sp));
    a0 = s0 + 0;
    func_0889154C(a0, f12);
    goto L_0889189C;
L_0889189C:;
    a1 = s0 + 212;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088918A8;
L_088918A8:;
    a1 = s0 + 216;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088918B4;
L_088918B4:;
    a1 = s0 + 220;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088918C0;
L_088918C0:;
    a1 = s0 + 224;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088918CC;
L_088918CC:;
    a1 = s0 + 236;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088918D8;
L_088918D8:;
    a0 = s1 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088918E4;
L_088918E4:;
    v1 = LD32(sp+4);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08891A30; }
    goto L_088918F4;
L_088918F4:;
    a0 = s0 + 0;
    func_088917C0(a0);
    goto L_088918FC;
L_088918FC:;
    a0 = s1 + 0;
    goto L_08891900;
L_08891900:;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891908;
L_08891908:;
    a1 = LD32(sp+8);
    a0 = s0 + 0;
    func_088917D0(a0, a1);
    goto L_08891914;
L_08891914:;
    a1 = sp + 12;
    a0 = s1 + 0;
    ST32(sp+12, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889192C;
L_0889192C:;
    a0 = s1 + 0;
    a1 = sp + 16;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891938;
L_08891938:;
    a1 = sp + 20;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891944;
L_08891944:;
    a1 = LD32(sp+12);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08891A14; }
    goto L_08891950;
L_08891950:;
    a1 = LD32(sp+16);
    goto L_08891954;
L_08891954:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088919F8; }
    goto L_0889195C;
L_0889195C:;
    a1 = LD32(sp+20);
    goto L_08891960;
L_08891960:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088919DC; }
    goto L_08891968;
L_08891968:;
    cnd_ = s2 != 0;
    if (cnd_) { a0 = s0 + 264; goto L_088919CC; }
    goto L_08891970;
L_08891970:;
    v0 = s2 < 0x2u;
    goto L_08891974;
L_08891974:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s0 + 188; goto L_088919B0; }
    goto L_0889197C;
L_0889197C:;
    v0 = s2 < 0x3u;
    goto L_08891980;
L_08891980:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s0 + 260; goto L_088919A0; }
    goto L_08891988;
L_08891988:;
    goto L_0889198C;
L_0889198C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088919A0:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088919A8;
L_088919A8:;
    goto L_0889198C;
L_088919B0:;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088919B8;
L_088919B8:;
    a1 = s0 + 192;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088919C4;
L_088919C4:;
    v0 = s2 < 0x3u;
    goto L_08891980;
L_088919CC:;
    a1 = s1 + 0;
    { rv_t r_ = func_0887E318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088919D4;
L_088919D4:;
    v0 = s2 < 0x2u;
    goto L_08891974;
L_088919DC:;
    a0 = s0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088919E4;
L_088919E4:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08891724(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088919F0;
L_088919F0:;
    goto L_08891968;
L_088919F8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891A00;
L_08891A00:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08891694(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891A0C;
L_08891A0C:;
    a1 = LD32(sp+20);
    goto L_08891960;
L_08891A14:;
    a0 = s0 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891A1C;
L_08891A1C:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_08891604(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891A28;
L_08891A28:;
    a1 = LD32(sp+16);
    goto L_08891954;
L_08891A30:;
    a0 = s0 + 0;
    func_088917B4(a0);
    goto L_08891A38;
L_08891A38:;
    a0 = s1 + 0;
    goto L_08891900;
}

/* 08891A40 */
void func_08891A40(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0, f13 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08891A40:;
    sp = sp - 32;
    v0 = 1;
    s1 = a0 + 264;
    s0 = a0 + 0;
    v1 = LD32(a0+264);
    cnd_ = v1 == 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08891A70; }
    goto L_08891A68;
L_08891A68:;
    v0 = (u32)(s32)LD_S8(v1);
    v0 = v0 < 0x1u;
    goto L_08891A70;
L_08891A70:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08891A90; }
    goto L_08891A7C;
L_08891A7C:;
    goto L_08891A80;
L_08891A80:;
    sp = sp + 32;
    return;
L_08891A90:;
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891A98;
L_08891A98:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08891A7C; }
    goto L_08891AA0;
L_08891AA0:;
    a1 = LD32(v0+16);
    v0 = 1;
    cnd_ = a1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08891ADC; }
    goto L_08891AB0;
L_08891AB0:;
    v0 = 2;
    cnd_ = a1 != v0;
    if (cnd_) {  goto L_08891A80; }
    goto L_08891ABC;
L_08891ABC:;
    f13 = BITSF(LD32(v1+32));
    f12 = BITSF(LD32(v1+28));
    func_0889151C(a0, f12, f13);
    goto L_08891AC8;
L_08891AC8:;
    a1 = s0 + 196;
    a0 = s1 + 0;
    func_0887E124(a0, a1, 0, 0, 0);
    goto L_08891AD4;
L_08891AD4:;
    goto L_08891A80;
L_08891ADC:;
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+28));
    f13 = (float)(s32)FBITS(f0);
    f12 = (float)(s32)FBITS(f1);
    func_0889151C(a0, f12, f13);
    goto L_08891AF0;
L_08891AF0:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { u64 r_ = func_0887E15C(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891AFC;
L_08891AFC:;
    f0 = BITSF(LD32(sp));
    f1 = (float)(s32)FBITS(f0);
    ST32(s0+196, FBITS(f1));
    goto L_08891A7C;
}

/* 08891B0C */
rv_t func_08891B0C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08891B0C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = s0 + 264;
    a0 = LD32(a0+264);
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891B2C;
L_08891B2C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08891B50; }
    goto L_08891B34;
L_08891B34:;
    v1 = LD32(v0+16);
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08891B70; }
    goto L_08891B44;
L_08891B44:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08891B60; }
    goto L_08891B50;
L_08891B50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08891B60:;
    f12 = BITSF(LD32(s0+196));
    { rv_t r_ = func_0887E23C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891B68;
L_08891B68:;
    goto L_08891B50;
L_08891B70:;
    f0 = BITSF(LD32(s0+196));
    f1 = BITSF(F2I(f0, 1));
    a1 = FBITS(f1);
    { rv_t r_ = func_0887E26C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891B84;
L_08891B84:;
    goto L_08891B50;
}

/* 08891B8C */
u64 func_08891B8C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08891B8C:;
    sp = sp - 16;
    s2 = 0 + 0;
    s0 = a0 + 0;
    s1 = s0 + 0;
    f0 = func_0888C704(a0);
    goto L_08891BB0;
L_08891BB0:;
    v0 = D_08AF7658 - (30296);
    v0 = v0 + 30296;
    ST32(s0, v0);
    v0 = D_08AEC220 - (-15840);
    f0 = BITSF(LD32(v0-15840));
    v0 = 2008;
    ST32(s0+4, v0);
    ST32(s0+192, FBITS(f0));
    ST32(s0+176, 0);
    ST32(s0+180, 0);
    ST32(s0+184, 0);
    ST32(s0+188, 0);
    ST32(s0+196, 0);
    goto L_08891BE4;
L_08891BE4:;
    ST32(s1+200, 0);
    a0 = s1 + 208;
    a1 = 0 + 0;
    a2 = 16;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891BF8;
L_08891BF8:;
    s2 = s2 + 1;
    a0 = s1 + 224;
    a1 = 0 + 0;
    a2 = 16;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891C0C;
L_08891C0C:;
    v1 = s2 < 0x4u;
    ST32(s1+244, 0);
    ST32(s1+240, 0);
    ST32(s1+252, 0);
    ST32(s1+248, 0);
    ST32(s1+260, 0);
    ST32(s1+256, 0);
    ST32(s1+268, 0);
    ST32(s1+264, 0);
    ST32(s1+204, 0);
    ST32(s1+272, 0);
    cnd_ = v1 != 0;
    s1 = s1 + 76;
    if (cnd_) { goto L_08891BE4; }
    goto L_08891C40;
L_08891C40:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08891C58 */
rv_t func_08891C58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08891C58:;
    v0 = D_08AF7658 - (30296);
    v0 = v0 + 30296;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891C74;
L_08891C74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08891C80 */
rv_t func_08891C80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08891C80:;
    v0 = D_08AF7658 - (30296);
    v0 = v0 + 30296;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891CA0;
L_08891CA0:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891CA8;
L_08891CA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08891CB8 */
rv_t func_08891CB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08891CB8:;
    sp = sp - 48;
    s5 = a1 + 0;
    s2 = 0 + 0;
    s0 = a0 + 0;
    f12 = BITSF(LD32(a0+180));
    f0 = func_08892D44(a0);
    goto L_08891CF4;
L_08891CF4:;
    v0 = LD32(s0+52);
    f20 = f0;
    cnd_ = v0 == 0;
    s3 = LD32(s0+156);
    if (cnd_) { goto L_08891D48; }
    goto L_08891D04;
L_08891D04:;
    s4 = 1;
    s6 = (u32)-1;
    v0 = LD32(s0+48);
    goto L_08891D10;
L_08891D10:;
    s1 = s2 << 2;
    a1 = s3 + 0;
    v0 = s1 + v0;
    a0 = LD32(v0);
    v0 = func_08888FBC(a0, a1);
    goto L_08891D24;
L_08891D24:;
    f0 = BITSF(F2I(f20, 1));
    a1 = FBITS(f0);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_08891D74; }
    goto L_08891D34;
L_08891D34:;
    v0 = LD32(s0+52);
    goto L_08891D38;
L_08891D38:;
    s2 = s2 + 1;
    v0 = s2 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0+48); goto L_08891D10; }
    goto L_08891D48;
L_08891D48:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08891D74:;
    v0 = s1 + v0;
    a0 = LD32(v0);
    { u64 r_ = func_08888370(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08891D80;
L_08891D80:;
    cnd_ = v0 != s4;
    a0 = s0 + 0;
    if (cnd_) { goto L_08891D34; }
    goto L_08891D88;
L_08891D88:;
    v0 = LD32(s0+48);
    v0 = s1 + v0;
    v1 = LD32(v0);
    a1 = LD32(v1+144);
    v0 = func_08892AB8(a0, a1);
    goto L_08891D9C;
L_08891D9C:;
    a1 = v0 + 0;
    cnd_ = v0 == s6;
    a0 = s0 + 0;
    if (cnd_) { goto L_08891DB8; }
    goto L_08891DA8;
L_08891DA8:;
    { rv_t r_ = func_08891DDC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891DB0;
L_08891DB0:;
    v0 = LD32(s0+52);
    goto L_08891D38;
L_08891DB8:;
    v0 = LD32(s0+48);
    v0 = s1 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s5 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891DD4;
L_08891DD4:;
    v0 = LD32(s0+52);
    goto L_08891D38;
}

/* 08891DDC */
rv_t func_08891DDC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[240] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 240);
L_08891DDC:;
    sp = sp - 240;
    v0 = a1 < 0x4u;
    s1 = a0 + 0;
    s0 = a1 + 0;
    ST32(sp+88, 0);
    ST8(sp+92, 0);
    cnd_ = v0 != 0;
    ST8(sp+93, 0);
    if (cnd_) { goto L_08891E2C; }
    goto L_08891E10;
L_08891E10:;
    goto L_08891E14;
L_08891E14:;
    sp = sp + 240;
    return (rv_t){ v0, v1, f0 };
L_08891E2C:;
    a0 = sp + 96;
    a1 = s1 + 0;
    a2 = s0 + 0;
    func_088929D8(a0, a1, a2);
    goto L_08891E3C;
L_08891E3C:;
    a1 = LD32(sp+96);
    a0 = s1 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891E48;
L_08891E48:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_08891E10; }
    goto L_08891E50;
L_08891E50:;
    f20 = BITSF(0);
    a0 = s1 + 0;
    a1 = s0 + 0;
    ST32(sp+196, FBITS(f20));
    ST32(sp+192, FBITS(f20));
    v0 = func_08892A8C(a0, a1);
    goto L_08891E68;
L_08891E68:;
    a0 = LD32(s2+148);
    cnd_ = a0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_08891E8C; }
    goto L_08891E74;
L_08891E74:;
    v0 = LD32(a0);
    a1 = sp + 192;
    a2 = sp + 196;
    v1 = LD32(v0+48);
    t_ = v1;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891E8C;
L_08891E8C:;
    a0 = s2 + 0;
    v0 = func_08887404(a0);
    goto L_08891E94;
L_08891E94:;
    a0 = D_08AEC224 - (-15836);
    f4 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(a0-15836));
    f1 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+4));
    f5 = f4 * f0;
    f2 = BITSF(LD32(v0+8));
    ST32(sp+176, FBITS(f1));
    a1 = sp + 176;
    fcc = FCMP(f20, f5, 12);
    ST32(sp+180, FBITS(f3));
    ST32(sp+184, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+188, FBITS(f4));
    if (cnd_) { goto L_08892058; }
    goto L_08891ECC;
L_08891ECC:;
    s1 = D_08AEC228 - (-15832);
    f0 = BITSF(LD32(s1-15832));
    f0 = f5 + f0;
    goto L_08891ED8;
L_08891ED8:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0-15836));
    v0 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_0889204C; }
    goto L_08891F00;
L_08891F00:;
    f0 = BITSF(LD32(s1-15832));
    f0 = f2 + f0;
    goto L_08891F08;
L_08891F08:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a1+4));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15836));
    v0 = v0 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08892040; }
    goto L_08891F34;
L_08891F34:;
    f0 = BITSF(LD32(s1-15832));
    f0 = f1 + f0;
    goto L_08891F3C;
L_08891F3C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(a1+8));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15836));
    v0 = v0 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = v0 << 8;
    if (cnd_) { goto L_08892034; }
    goto L_08891F68;
L_08891F68:;
    f0 = BITSF(LD32(s1-15832));
    f0 = f1 + f0;
    goto L_08891F70;
L_08891F70:;
    f0 = BITSF(F2I(f0, 1));
    a0 = s2 + 0;
    ST8(sp+92, 0);
    v1 = FBITS(f0);
    v0 = v0 + v1;
    ST32(sp+64, v0);
    v0 = 1;
    ST8(sp+93, v0);
    v0 = func_08880710(a0);
    goto L_08891F94;
L_08891F94:;
    v1 = LD32(s2);
    ST32(sp+80, v0);
    v0 = LD32(v1+140);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08891FA8;
L_08891FA8:;
    f0 = BITSF(LD32(s0+24));
    f2 = BITSF(LD32(s0+28));
    f12 = BITSF(LD32(sp+192));
    f13 = BITSF(LD32(sp+196));
    f1 = BITSF(LD32(s1-15832));
    f12 = f12 + f0;
    f13 = f13 + f2;
    f14 = BITSF(LD32(s0+32));
    f15 = BITSF(LD32(s0+36));
    f12 = f12 - f1;
    f13 = f13 - f1;
    a0 = sp + 0;
    ST32(sp+84, v0);
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_08891FE0;
L_08891FE0:;
    f1 = BITSF(LD32(s0+56));
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+32, FBITS(f1));
    f0 = BITSF(LD32(s0+60));
    ST32(sp+48, FBITS(f0));
    f1 = BITSF(LD32(s0+64));
    ST32(sp+36, FBITS(f1));
    f0 = BITSF(LD32(s0+60));
    ST32(sp+52, FBITS(f0));
    f1 = BITSF(LD32(s0+64));
    ST32(sp+40, FBITS(f1));
    f0 = BITSF(LD32(s0+68));
    ST32(sp+56, FBITS(f0));
    f1 = BITSF(LD32(s0+56));
    ST32(sp+44, FBITS(f1));
    f0 = BITSF(LD32(s0+68));
    ST32(sp+60, FBITS(f0));
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889202C;
L_0889202C:;
    goto L_08891E14;
L_08892034:;
    f0 = BITSF(LD32(s1-15832));
    f0 = f1 - f0;
    goto L_08891F70;
L_08892040:;
    f0 = BITSF(LD32(s1-15832));
    f0 = f1 - f0;
    goto L_08891F3C;
L_0889204C:;
    f0 = BITSF(LD32(s1-15832));
    f0 = f2 - f0;
    goto L_08891F08;
L_08892058:;
    s1 = D_08AEC228 - (-15832);
    f0 = BITSF(LD32(s1-15832));
    f0 = f5 - f0;
    goto L_08891ED8;
}

/* 08892068 */
rv_t func_08892068(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892068:;
    sp = sp - 32;
    s1 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08886F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892088;
L_08892088:;
    a0 = s1 + 0;
    ST32(s1+176, FBITS(f20));
    f0 = func_088922F4(a0);
    goto L_08892094;
L_08892094:;
    v1 = LD32(s1+156);
    v0 = 8;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 9;
    if (cnd_) { goto L_08892128; }
    goto L_088920A4;
L_088920A4:;
    cnd_ = v0 == 0;
    v0 = 32;
    if (cnd_) { goto L_08892134; }
    goto L_088920AC;
L_088920AC:;
    cnd_ = (s32)v1 <= 0;
    v0 = (s32)v1 < 3;
    if (cnd_) { goto L_088920C8; }
    goto L_088920B4;
L_088920B4:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_088920CC; }
    goto L_088920BC;
L_088920BC:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 32;
    if (cnd_) { goto L_0889212C; }
    goto L_088920C8;
L_088920C8:;
    v0 = LD32(s1+52);
    goto L_088920CC;
L_088920CC:;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088920EC; }
    goto L_088920D4;
L_088920D4:;
    goto L_088920D8;
L_088920D8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088920EC:;
    v1 = LD32(s1+48);
    goto L_088920F0;
L_088920F0:;
    v0 = s0 << 2;
    f12 = f20;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+12);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892110;
L_08892110:;
    v0 = LD32(s1+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+48); goto L_088920F0; }
    goto L_08892120;
L_08892120:;
    goto L_088920D8;
L_08892128:;
    v0 = 32;
    goto L_0889212C;
L_0889212C:;
    ST32(s1+156, v0);
    goto L_088920C8;
L_08892134:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 33;
    if (cnd_) { goto L_088920C8; }
    goto L_0889213C;
L_0889213C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_088920CC; }
    goto L_08892144;
L_08892144:;
    v0 = 16;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1+52); goto L_088920CC; }
    goto L_08892150;
L_08892150:;
    v0 = 2;
    goto L_0889212C;
}

/* 08892158 */
rv_t func_08892158(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08892158:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892174;
L_08892174:;
    f13 = BITSF(LD32(s0+192));
    f12 = BITSF(LD32(s0+188));
    a0 = s1 + 0;
    func_08892B80(a0, f12, f13);
    goto L_08892184;
L_08892184:;
    f12 = BITSF(LD32(s0+196));
    a0 = s1 + 0;
    func_08892BB0(a0, f12);
    goto L_08892190;
L_08892190:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_088921B0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889219C;
L_0889219C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088921B0 */
rv_t func_088921B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088921B0:;
    sp = sp - 48;
    ST32(sp, 0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    s4 = a0 + 0;
    s3 = a1 + 0;
    s2 = 0 + 0;
    s0 = a1 + 0;
    goto L_088921E8;
L_088921E8:;
    v0 = s0 + 200;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08892290; }
    goto L_088921F4;
L_088921F4:;
    a1 = LD32(s0+200);
    a0 = s3 + 0;
    { rv_t r_ = func_08892DF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892200;
L_08892200:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_0889228C; }
    goto L_08892208;
L_08892208:;
    cnd_ = a0 == 0;
    s1 = LD32(v0+84);
    if (cnd_) { goto L_0889222C; }
    goto L_08892210;
L_08892210:;
    cnd_ = s1 == a0;
    if (cnd_) { a0 = s4 + 0; goto L_08892268; }
    goto L_08892218;
L_08892218:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(sp+8, 0); goto L_08892230; }
    goto L_08892220;
L_08892220:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08892228;
L_08892228:;
    ST32(sp, 0);
    goto L_0889222C;
L_0889222C:;
    ST32(sp+8, 0);
    goto L_08892230;
L_08892230:;
    cnd_ = s1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_088922EC; }
    goto L_08892238;
L_08892238:;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08892240;
L_08892240:;
    v1 = v0 + 1;
    a0 = v1 + 0;
    ST32(sp+4, v0);
    ST32(sp+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892254;
L_08892254:;
    cnd_ = v0 != 0;
    ST32(sp, v0);
    if (cnd_) { goto L_088922D8; }
    goto L_0889225C;
L_0889225C:;
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    goto L_08892264;
L_08892264:;
    a0 = s4 + 0;
    goto L_08892268;
L_08892268:;
    a1 = sp + 0;
    { rv_t r_ = func_0888822C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892270;
L_08892270:;
    cnd_ = v0 == 0;
    a0 = s4 + 0;
    if (cnd_) { goto L_0889228C; }
    goto L_08892278;
L_08892278:;
    a2 = LD32(v0+144);
    a3 = LD32(s0+204);
    t0 = LD32(s0+272);
    a1 = s2 + 0;
    { u64 r_ = func_08892828(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889228C;
L_0889228C:;
    s2 = s2 + 1;
    goto L_08892290;
L_08892290:;
    v0 = s2 < 0x4u;
    cnd_ = v0 != 0;
    s0 = s0 + 76;
    if (cnd_) { goto L_088921E8; }
    goto L_0889229C;
L_0889229C:;
    a0 = LD32(sp);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088922C8; }
    goto L_088922A8;
L_088922A8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088922C8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088922D0;
L_088922D0:;
    ST32(sp, 0);
    goto L_088922A8;
L_088922D8:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088922E4;
L_088922E4:;
    a0 = s4 + 0;
    goto L_08892268;
L_088922EC:;
    ST32(sp, 0);
    goto L_08892264;
}

/* 088922F4 */
float func_088922F4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088922F4:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a0 + 0;
    s0 = a0 + 200;
    goto L_08892314;
L_08892314:;
    a0 = s1 + 0;
    a1 = s2 + 0;
    v0 = func_08892A8C(a0, a1);
    goto L_08892320;
L_08892320:;
    t2 = v0 + 0;
    v0 = LD32(s0);
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s2 + 1; goto L_08892398; }
    goto L_08892330;
L_08892330:;
    v0 = LD32(t2+8);
    v1 = LD32(t2+12);
    a0 = LD32(t2+16);
    a1 = LD32(t2+20);
    a2 = LD32(t2+40);
    a3 = LD32(t2+44);
    t0 = LD32(t2+48);
    t1 = LD32(t2+52);
    t3 = LD32(t2+4);
    ST32(t2+24, v0);
    v0 = 2;
    ST32(t2+28, v1);
    ST32(t2+32, a0);
    ST32(t2+36, a1);
    ST32(t2+56, a2);
    ST32(t2+60, a3);
    ST32(t2+64, t0);
    cnd_ = t3 == v0;
    ST32(t2+68, t1);
    if (cnd_) { goto L_088924B4; }
    goto L_0889237C;
L_0889237C:;
    v0 = (s32)t3 < 3;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_08892410; }
    goto L_08892388;
L_08892388:;
    v0 = 1;
    cnd_ = t3 == v0;
    if (cnd_) { f2 = BITSF(LD32(t2+12)); goto L_088923BC; }
    goto L_08892394;
L_08892394:;
    s2 = s2 + 1;
    goto L_08892398;
L_08892398:;
    v0 = s2 < 0x4u;
    cnd_ = v0 != 0;
    s0 = s0 + 76;
    if (cnd_) { goto L_08892314; }
    goto L_088923A4;
L_088923A4:;
    sp = sp + 16;
    return f0;
L_088923BC:;
    f1 = BITSF(LD32(t2+20));
    f0 = BITSF(LD32(s1+180));
    v0 = LD32(t2+72);
    f1 = f2 + f1;
    v0 = v0 & 0x1;
    f2 = f1 - f2;
    f0 = f2 * f0;
    f1 = f1 - f0;
    ST32(t2+28, FBITS(f1));
    f0 = BITSF(LD32(s1+180));
    f0 = f2 * f0;
    cnd_ = v0 == 0;
    ST32(t2+36, FBITS(f0));
    if (cnd_) { goto L_08892394; }
    goto L_088923F0;
L_088923F0:;
    f4 = BITSF(LD32(t2+52));
    f3 = BITSF(LD32(t2+44));
    f0 = BITSF(LD32(s1+180));
    f2 = f4 - f3;
    f0 = f2 * f0;
    f0 = f4 - f0;
    ST32(t2+60, FBITS(f0));
    goto L_08892394;
L_08892410:;
    cnd_ = t3 == v0;
    v0 = 4;
    if (cnd_) { goto L_08892478; }
    goto L_08892418;
L_08892418:;
    cnd_ = t3 != v0;
    if (cnd_) { s2 = s2 + 1; goto L_08892398; }
    goto L_08892420;
L_08892420:;
    f2 = BITSF(LD32(t2+8));
    f1 = BITSF(LD32(t2+16));
    f0 = BITSF(LD32(s1+180));
    v0 = LD32(t2+72);
    f1 = f2 + f1;
    v0 = v0 & 0x1;
    f2 = f1 - f2;
    f0 = f2 * f0;
    f1 = f1 - f0;
    ST32(t2+24, FBITS(f1));
    f0 = BITSF(LD32(s1+180));
    f0 = f2 * f0;
    cnd_ = v0 == 0;
    ST32(t2+32, FBITS(f0));
    if (cnd_) { goto L_08892394; }
    goto L_08892458;
L_08892458:;
    f4 = BITSF(LD32(t2+48));
    f3 = BITSF(LD32(t2+40));
    f0 = BITSF(LD32(s1+180));
    f2 = f4 - f3;
    f0 = f2 * f0;
    f0 = f4 - f0;
    ST32(t2+56, FBITS(f0));
    goto L_08892394;
L_08892478:;
    f0 = BITSF(LD32(s1+180));
    f1 = BITSF(LD32(t2+20));
    v0 = LD32(t2+72);
    f1 = f1 * f0;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST32(t2+36, FBITS(f1));
    if (cnd_) { goto L_08892394; }
    goto L_08892494;
L_08892494:;
    f3 = BITSF(LD32(t2+40));
    f4 = BITSF(LD32(t2+48));
    f0 = BITSF(LD32(s1+180));
    f2 = f4 - f3;
    f0 = f2 * f0;
    f0 = f3 + f0;
    ST32(t2+68, FBITS(f0));
    goto L_08892394;
L_088924B4:;
    f0 = BITSF(LD32(s1+180));
    f1 = BITSF(LD32(t2+16));
    v0 = LD32(t2+72);
    f1 = f1 * f0;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST32(t2+32, FBITS(f1));
    if (cnd_) { goto L_08892394; }
    goto L_088924D0;
L_088924D0:;
    f3 = BITSF(LD32(t2+40));
    f4 = BITSF(LD32(t2+48));
    f0 = BITSF(LD32(s1+180));
    f2 = f4 - f3;
    f0 = f2 * f0;
    f0 = f3 + f0;
    ST32(t2+64, FBITS(f0));
    goto L_08892394;
}

/* 088924F0 */
rv_t func_088924F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088924F0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892504;
L_08892504:;
    a0 = (u32)-1;
    a1 = LD32(s0+144);
    a2 = 2;
    a3 = 2008;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889251C;
L_0889251C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08892530 */
rv_t func_08892530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08892530:;
    sp = sp - 16;
    a1 = 128;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_08892548;
L_08892548:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08892564; }
    goto L_08892554;
L_08892554:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08892564:;
    v0 = D_08AEC22C - (-15828);
    f2 = BITSF(LD32(s0+180));
    f1 = BITSF(LD32(v0-15828));
    f0 = BITSF(0);
    f2 = f2 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = LD32(s0+144);
    if (cnd_) { goto L_088925B4; }
    goto L_08892588;
L_08892588:;
    v0 = D_08AEC230 - (-15824);
    f0 = BITSF(LD32(v0-15824));
    f0 = f2 + f0;
    goto L_08892594;
L_08892594:;
    f0 = BITSF(F2I(f0, 1));
    a0 = (u32)-1;
    a2 = 1;
    t0 = FBITS(f0);
    a3 = 2008;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088925AC;
L_088925AC:;
    goto L_08892554;
L_088925B4:;
    v0 = D_08AEC230 - (-15824);
    f0 = BITSF(LD32(v0-15824));
    f0 = f2 - f0;
    goto L_08892594;
}

/* 088925C4 */
rv_t func_088925C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088925C4:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = LD32(a1+12);
    v1 = LD32(a0+144);
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_08892600; }
    goto L_088925EC;
L_088925EC:;
    v1 = LD32(s0+4);
    v0 = 2008;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(s0+2); goto L_08892618; }
    goto L_088925FC;
L_088925FC:;
    a1 = 1;
    goto L_08892600;
L_08892600:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08892618:;
    v0 = 2;
    cnd_ = v1 == v0;
    v0 = v1 < 0x3u;
    if (cnd_) { goto L_088926B0; }
    goto L_08892624;
L_08892624:;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_08892680; }
    goto L_0889262C;
L_0889262C:;
    v0 = 1;
    cnd_ = v1 != v0;
    a1 = 1;
    if (cnd_) { goto L_08892600; }
    goto L_08892638;
L_08892638:;
    v0 = LD32(s0+16);
    f1 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08892664; }
    goto L_08892648;
L_08892648:;
    v0 = D_08AEC234 - (-15820);
    f12 = BITSF(LD32(v0-15820));
    a0 = s1 + 0;
    f12 = f0 * f12;
    f0 = func_08892CA8(a0, f12);
    goto L_0889265C;
L_0889265C:;
    a1 = 1;
    goto L_08892600;
L_08892664:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f1 = BITSF(v0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08892648;
L_08892680:;
    cnd_ = v1 == v0;
    v0 = 4;
    if (cnd_) { goto L_088926A0; }
    goto L_08892688;
L_08892688:;
    cnd_ = v1 != v0;
    if (cnd_) { a1 = 1; goto L_08892600; }
    goto L_08892690;
L_08892690:;
    f0 = func_08892C5C(a0);
    goto L_08892698;
L_08892698:;
    a1 = 1;
    goto L_08892600;
L_088926A0:;
    f0 = func_08892C10(a0);
    goto L_088926A8;
L_088926A8:;
    a1 = 1;
    goto L_08892600;
L_088926B0:;
    f12 = BITSF(LD32(a0+180));
    f0 = func_08892D44(a0);
    goto L_088926B8;
L_088926B8:;
    v0 = D_08AEC238 - (-15816);
    f1 = BITSF(LD32(v0-15816));
    f1 = f0 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = LD32(s1+144);
    if (cnd_) { goto L_08892704; }
    goto L_088926D8;
L_088926D8:;
    v0 = D_08AEC23C - (-15812);
    f0 = BITSF(LD32(v0-15812));
    f0 = f1 + f0;
    goto L_088926E4;
L_088926E4:;
    f0 = BITSF(F2I(f0, 1));
    a0 = LD32(s0+12);
    a2 = 1;
    t0 = FBITS(f0);
    a3 = 2008;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088926FC;
L_088926FC:;
    a1 = 1;
    goto L_08892600;
L_08892704:;
    v0 = D_08AEC23C - (-15812);
    f0 = BITSF(LD32(v0-15812));
    f0 = f1 - f0;
    goto L_088926E4;
}

/* 08892714 */
rv_t func_08892714(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892714:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a1+12);
    v1 = LD32(a0+144);
    cnd_ = v0 == v1;
    a1 = 0 + 0;
    if (cnd_) { goto L_088927AC; }
    goto L_08892740;
L_08892740:;
    f0 = func_08892B78(a0);
    goto L_08892748;
L_08892748:;
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_08892B30(a0);
    goto L_08892754;
L_08892754:;
    f0 = f0 - f20;
    f1 = BITSF(LD32(s0+180));
    v0 = D_08AEC240 - (-15808);
    f0 = f0 * f1;
    f1 = BITSF(0);
    f20 = f20 + f0;
    f0 = BITSF(LD32(v0-15808));
    f20 = f20 * f0;
    fcc = FCMP(f1, f20, 12);
    cnd_ = !fcc;
    a1 = LD32(s0+144);
    if (cnd_) { goto L_088927C8; }
    goto L_08892784;
L_08892784:;
    v0 = D_08AEC244 - (-15804);
    f0 = BITSF(LD32(v0-15804));
    f0 = f20 + f0;
    goto L_08892790;
L_08892790:;
    f0 = BITSF(F2I(f0, 1));
    a0 = LD32(s1+12);
    a2 = 1;
    t0 = FBITS(f0);
    a3 = 2008;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088927A8;
L_088927A8:;
    a1 = 1;
    goto L_088927AC;
L_088927AC:;
    v0 = a1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088927C8:;
    v0 = D_08AEC244 - (-15804);
    f0 = BITSF(LD32(v0-15804));
    f0 = f20 - f0;
    goto L_08892790;
}

/* 088927D8 */
rv_t func_088927D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088927D8:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088927E0 */
rv_t func_088927E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088927E0:;
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088927F0 */
rv_t func_088927F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088927F0:;
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08892800 */
rv_t func_08892800(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08892800:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_0889281C; }
    goto L_0889280C;
L_0889280C:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_0889281C;
L_0889281C:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08892828 */
u64 func_08892828(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_08892828:;
    sp = sp - 112;
    v0 = a1 < 0x4u;
    s5 = t0 + 0;
    s4 = a3 + 0;
    s2 = a0 + 0;
    s1 = a1 + 0;
    a1 = a2 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08892888; }
    goto L_08892864;
L_08892864:;
    sp = sp + 112;
    return (u64)v0 | ((u64)v1 << 32);
L_08892888:;
    { rv_t r_ = func_0888818C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892890;
L_08892890:;
    s3 = v0 + 0;
    a2 = 16;
    a1 = 0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08892980; }
    goto L_088928A4;
L_088928A4:;
    v0 = func_08888FD8(a0);
    goto L_088928AC;
L_088928AC:;
    v1 = 1001;
    a1 = s3 + 0;
    cnd_ = v0 != v1;
    a0 = sp + 16;
    if (cnd_) { goto L_08892864; }
    goto L_088928BC;
L_088928BC:;
    s0 = 76;
    { s64 p_ = (s64)(s32)s1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = LD32(s3+144);
    v1 = LD32(s3);
    s0 = lo;
    s0 = s0 + s2;
    ST32(s0+200, v0);
    s1 = s0 + 240;
    s2 = s0 + 248;
    v0 = LD32(v1+28);
    ST32(s0+204, s4);
    t_ = v0;
    ST32(s0+272, s5);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088928F0;
L_088928F0:;
    f2 = BITSF(LD32(sp+16));
    f0 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+24));
    ST32(sp, FBITS(f2));
    a0 = s3 + 0;
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(s0+208, FBITS(f2));
    f0 = BITSF(LD32(sp+4));
    ST32(s0+212, FBITS(f0));
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889291C;
L_0889291C:;
    ST32(sp+32, v0);
    a0 = s3 + 0;
    a1 = 0 + 0;
    f0 = BITSF(LD32(sp+32));
    ST32(sp+36, v1);
    ST32(sp+48, v0);
    ST32(sp+52, v1);
    ST32(s0+216, FBITS(f0));
    f1 = BITSF(LD32(sp+36));
    ST32(s0+220, FBITS(f1));
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08892948;
L_08892948:;
    ST32(sp+68, v1);
    a0 = s3 + 0;
    a1 = 1;
    ST32(sp+64, v0);
    ST32(s0+240, v0);
    v0 = LD32(sp+68);
    ST32(s1+4, v0);
    { u64 r_ = func_088809CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08892968;
L_08892968:;
    ST32(sp+68, v1);
    ST32(sp+64, v0);
    ST32(s0+248, v0);
    v0 = LD32(sp+68);
    ST32(s2+4, v0);
    goto L_08892864;
L_08892980:;
    s0 = 76;
    { s64 p_ = (s64)(s32)s1 * (s32)s0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    s0 = lo;
    s0 = s0 + s2;
    ST32(s0+200, 0);
    a0 = s0 + 208;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889299C;
L_0889299C:;
    a0 = s0 + 224;
    a1 = 0 + 0;
    a2 = 16;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088929AC;
L_088929AC:;
    ST32(s0+272, 0);
    ST32(s0+244, 0);
    ST32(s0+240, 0);
    ST32(s0+252, 0);
    ST32(s0+248, 0);
    ST32(s0+260, 0);
    ST32(s0+256, 0);
    ST32(s0+268, 0);
    ST32(s0+264, 0);
    ST32(s0+204, 0);
    goto L_08892864;
}

/* 088929D8 */
void func_088929D8(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088929D8:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 0 + 0;
    s0 = a2 + 0;
    a2 = 76;
    s2 = a0 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08892A04;
L_08892A04:;
    v1 = s0 < 0x4u;
    cnd_ = v1 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_08892A74; }
    goto L_08892A10;
L_08892A10:;
    v0 = 76;
    { s64 p_ = (s64)(s32)s0 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a3 = s2 + 0;
    v0 = lo;
    v0 = v0 + s1;
    t0 = v0 + 264;
    a2 = v0 + 200;
    goto L_08892A2C;
L_08892A2C:;
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
    if (cnd_) { goto L_08892A2C; }
    goto L_08892A58;
L_08892A58:;
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    a0 = LD32(a2+8);
    ST32(a3, v0);
    ST32(a3+4, v1);
    ST32(a3+8, a0);
    v0 = s2 + 0;
    goto L_08892A74;
L_08892A74:;
    sp = sp + 16;
    return;
}

/* 08892A8C */
u32 func_08892A8C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_08892A8C:;
    v0 = a1 < 0x4u;
    v1 = a0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08892AB0; }
    goto L_08892A9C;
L_08892A9C:;
    v0 = 76;
    { s64 p_ = (s64)(s32)a1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    v0 = v1 + v0;
    a0 = v0 + 200;
    goto L_08892AB0;
L_08892AB0:;
    v0 = a0 + 0;
    return v0;
}

/* 08892AB8 */
u32 func_08892AB8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
L_08892AB8:;
    a0 = a0 + 200;
    a2 = (u32)-1;
    v1 = 0 + 0;
    v0 = LD32(a0);
    goto L_08892AC8;
L_08892AC8:;
    cnd_ = v0 == a1;
    a0 = a0 + 76;
    if (cnd_) { goto L_08892AE8; }
    goto L_08892AD0;
L_08892AD0:;
    v1 = v1 + 1;
    v0 = v1 < 0x4u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_08892AC8; }
    goto L_08892AE0;
L_08892AE0:;
    v0 = a2 + 0;
    return v0;
L_08892AE8:;
    a2 = v1 + 0;
    goto L_08892AE0;
}

/* 08892AF0 */
void func_08892AF0(u32 a0, float f12)
{
    u32 s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892AF0:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    f0 = func_08892B78(a0);
    goto L_08892B0C;
L_08892B0C:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+192, FBITS(f20)); goto L_08892B1C; }
    goto L_08892B1C;
L_08892B1C:;
    sp = sp + 32;
    return;
}

/* 08892B30 */
float func_08892B30(u32 a0)
{
    float f0 = 0;
L_08892B30:;
    f0 = BITSF(LD32(a0+192));
    return f0;
}

/* 08892B38 */
void func_08892B38(u32 a0, float f12)
{
    u32 s0 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892B38:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    f0 = func_08892B30(a0);
    goto L_08892B54;
L_08892B54:;
    fcc = FCMP(f20, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+188, FBITS(f20)); goto L_08892B64; }
    goto L_08892B64;
L_08892B64:;
    sp = sp + 32;
    return;
}

/* 08892B78 */
float func_08892B78(u32 a0)
{
    float f0 = 0;
L_08892B78:;
    f0 = BITSF(LD32(a0+188));
    return f0;
}

/* 08892B80 */
void func_08892B80(u32 a0, float f12, float f13)
{
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_08892B80:;
    fcc = FCMP(f12, f13, 14);
    cnd_ = fcc;
    f0 = f12;
    if (cnd_) { goto L_08892B94; }
    goto L_08892B90;
L_08892B90:;
    f12 = f13;
    goto L_08892B94;
L_08892B94:;
    fcc = FCMP(f13, f0, 14);
    cnd_ = fcc;
    ST32(a0+188, FBITS(f12));
    if (cnd_) { goto L_08892BA8; }
    goto L_08892BA4;
L_08892BA4:;
    f0 = f13;
    goto L_08892BA8;
L_08892BA8:;
    ST32(a0+192, FBITS(f0));
    return;
}

/* 08892BB0 */
void func_08892BB0(u32 a0, float f12)
{
    u32 s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892BB0:;
    sp = sp - 32;
    s0 = a0 + 0;
    f21 = f12;
    f0 = func_08892B30(a0);
    goto L_08892BD0;
L_08892BD0:;
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_08892B78(a0);
    goto L_08892BDC;
L_08892BDC:;
    f20 = f20 - f0;
    fcc = FCMP(f21, f20, 14);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+196, FBITS(f21)); goto L_08892BF0; }
    goto L_08892BF0;
L_08892BF0:;
    sp = sp + 32;
    return;
}

/* 08892C08 */
float func_08892C08(u32 a0)
{
    float f0 = 0;
L_08892C08:;
    f0 = BITSF(LD32(a0+196));
    return f0;
}

/* 08892C10 */
float func_08892C10(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892C10:;
    sp = sp - 32;
    s0 = a0 + 0;
    f12 = BITSF(LD32(a0+180));
    f0 = func_08892D44(a0);
    goto L_08892C2C;
L_08892C2C:;
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_08892C08(a0);
    goto L_08892C38;
L_08892C38:;
    f20 = f20 + f0;
    a0 = s0 + 0;
    f12 = f20;
    f0 = func_08892CA8(a0, f12);
    goto L_08892C48;
L_08892C48:;
    sp = sp + 32;
    return f0;
}

/* 08892C5C */
float func_08892C5C(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892C5C:;
    sp = sp - 32;
    s0 = a0 + 0;
    f12 = BITSF(LD32(a0+180));
    f0 = func_08892D44(a0);
    goto L_08892C78;
L_08892C78:;
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_08892C08(a0);
    goto L_08892C84;
L_08892C84:;
    f20 = f20 - f0;
    a0 = s0 + 0;
    f12 = f20;
    f0 = func_08892CA8(a0, f12);
    goto L_08892C94;
L_08892C94:;
    sp = sp + 32;
    return f0;
}

/* 08892CA8 */
float func_08892CA8(u32 a0, float f12)
{
    u32 v0 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892CA8:;
    sp = sp - 32;
    s0 = a0 + 0;
    f20 = f12;
    f0 = func_08892B78(a0);
    goto L_08892CC4;
L_08892CC4:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08892CEC; }
    goto L_08892CD4;
L_08892CD4:;
    f0 = func_08892B30(a0);
    goto L_08892CDC;
L_08892CDC:;
    fcc = FCMP(f20, f0, 14);
    f12 = f20;
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_08892D00; }
    goto L_08892CEC;
L_08892CEC:;
    goto L_08892CF0;
L_08892CF0:;
    sp = sp + 32;
    return f0;
L_08892D00:;
    f0 = func_08892D90(a0, f12);
    goto L_08892D08;
L_08892D08:;
    v0 = D_08AEC248 - (-15800);
    f1 = BITSF(LD32(v0-15800));
    f2 = BITSF(0);
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(s0+180, FBITS(f0));
    if (cnd_) { goto L_08892D28; }
    goto L_08892D24;
L_08892D24:;
    ST32(s0+180, FBITS(f1));
    goto L_08892D28;
L_08892D28:;
    f0 = BITSF(LD32(s0+180));
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s0+180, FBITS(f2)); goto L_08892CEC; }
    goto L_08892D3C;
L_08892D3C:;
    goto L_08892CF0;
}

/* 08892D44 */
float func_08892D44(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892D44:;
    sp = sp - 32;
    s0 = a0 + 0;
    f0 = func_08892B78(a0);
    goto L_08892D5C;
L_08892D5C:;
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_08892B30(a0);
    goto L_08892D68;
L_08892D68:;
    f0 = f0 - f20;
    f1 = BITSF(LD32(s0+180));
    f0 = f0 * f1;
    f20 = f20 + f0;
    f0 = f20;
    sp = sp + 32;
    return f0;
}

/* 08892D90 */
float func_08892D90(u32 a0, float f12)
{
    u32 s0 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892D90:;
    sp = sp - 32;
    s0 = a0 + 0;
    f21 = f12;
    f0 = func_08892B78(a0);
    goto L_08892DB0;
L_08892DB0:;
    a0 = s0 + 0;
    f21 = f21 - f0;
    f0 = func_08892B30(a0);
    goto L_08892DBC;
L_08892DBC:;
    a0 = s0 + 0;
    f20 = f0;
    f0 = func_08892B78(a0);
    goto L_08892DC8;
L_08892DC8:;
    f20 = f20 - f0;
    f21 = f21 / f20;
    f0 = f21;
    sp = sp + 32;
    return f0;
}

/* 08892DEC */
rv_t func_08892DEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08892DEC:;
    return (rv_t){ v0, v1, f0 };
}

/* 08892DF4 */
rv_t func_08892DF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892DF4:;
    sp = sp - 32;
    s3 = 0 + 0;
    s2 = a1 + 0;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v1 = LD32(s0);
    goto L_08892E20;
L_08892E20:;
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892E2C;
L_08892E2C:;
    v0 = s1 < v0;
    a1 = s1 + 0;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_08892E64; }
    goto L_08892E40;
L_08892E40:;
    v1 = LD32(s0);
    v0 = LD32(v1+124);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892E50;
L_08892E50:;
    v1 = v0 + 0;
    v0 = LD32(v0+144);
    cnd_ = v0 != s2;
    if (cnd_) { v1 = LD32(s0); goto L_08892E20; }
    goto L_08892E60;
L_08892E60:;
    s3 = v1 + 0;
    goto L_08892E64;
L_08892E64:;
    v0 = s3 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08892E84 */
rv_t func_08892E84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08892E84:;
    sp = sp - 32;
    a3 = (u32)-1;
    s2 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892EA8;
L_08892EA8:;
    a2 = s2 + 0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892EB8;
L_08892EB8:;
    a1 = sp + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892EC4;
L_08892EC4:;
    f12 = BITSF(LD32(sp));
    a0 = s2 + 0;
    s1 = 0 + 0;
    func_08892AF0(a0, f12);
    goto L_08892ED4;
L_08892ED4:;
    a1 = sp + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892EE0;
L_08892EE0:;
    f12 = BITSF(LD32(sp));
    a0 = s2 + 0;
    func_08892B38(a0, f12);
    goto L_08892EEC;
L_08892EEC:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892EF8;
L_08892EF8:;
    f12 = BITSF(LD32(sp));
    a0 = s2 + 0;
    func_08892BB0(a0, f12);
    goto L_08892F04;
L_08892F04:;
    a1 = sp + 4;
    goto L_08892F08;
L_08892F08:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892F10;
L_08892F10:;
    a0 = s0 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892F1C;
L_08892F1C:;
    a0 = s0 + 0;
    a1 = sp + 12;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08892F28;
L_08892F28:;
    a2 = LD32(sp+4);
    a3 = LD32(sp+8);
    t0 = LD32(sp+12);
    a1 = s1 + 0;
    a0 = s2 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08892828(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08892F44;
L_08892F44:;
    v0 = s1 < 0x4u;
    cnd_ = v0 != 0;
    a1 = sp + 4;
    if (cnd_) { goto L_08892F08; }
    goto L_08892F50;
L_08892F50:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08892F68 */
rv_t func_08892F68(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08892F68:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_08892F7C;
L_08892F7C:;
    v1 = (u32)-1;
    ST32(s0+212, v1);
    v1 = D_08AEC250 - (-15792);
    v0 = D_08AF7720 - (30496);
    f0 = BITSF(LD32(v1-15792));
    v0 = v0 + 30496;
    a0 = s0 + 224;
    ST32(s0, v0);
    v0 = 2003;
    ST32(s0+204, 0);
    ST32(s0+208, 0);
    ST32(s0+220, FBITS(f0));
    ST32(a0+8, 0);
    ST32(a0+4, 0);
    ST32(s0+176, 0);
    ST32(s0+4, v0);
    ST32(s0+180, 0);
    ST32(s0+184, 0);
    ST32(s0+188, 0);
    ST32(s0+192, 0);
    ST32(s0+196, 0);
    ST32(s0+200, 0);
    ST32(s0+216, 0);
    ST32(s0+224, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08892FEC */
rv_t func_08892FEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08892FEC:;
    sp = sp - 16;
    v0 = D_08AF7720 - (30496);
    v0 = v0 + 30496;
    s0 = a0 + 0;
    s1 = s0 + 224;
    v1 = LD32(a0+224);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08893040; }
    goto L_0889301C;
L_0889301C:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889302C;
L_0889302C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08893040:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893048;
L_08893048:;
    ST32(s0+224, 0);
    goto L_0889301C;
}

/* 08893050 */
rv_t func_08893050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893050:;
    sp = sp - 16;
    v0 = D_08AF7720 - (30496);
    v0 = v0 + 30496;
    s0 = a0 + 0;
    s1 = s0 + 224;
    v1 = LD32(a0+224);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_088930AC; }
    goto L_08893080;
L_08893080:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893090;
L_08893090:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893098;
L_08893098:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088930AC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088930B4;
L_088930B4:;
    ST32(s0+224, 0);
    goto L_08893080;
}

/* 088930BC */
rv_t func_088930BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088930BC:;
    sp = sp - 32;
    s1 = a0 + 0;
    f20 = f12;
    { rv_t r_ = func_08886F58(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088930DC;
L_088930DC:;
    a0 = 1024;
    v1 = LD32(s1+156);
    cnd_ = v1 == a0;
    ST32(s1+188, FBITS(f20));
    if (cnd_) { goto L_088930F4; }
    goto L_088930EC;
L_088930EC:;
    ST32(s1+192, 0);
    ST32(s1+196, 0);
    goto L_088930F4;
L_088930F4:;
    v0 = 8;
    cnd_ = v1 == v0;
    v0 = v1 < 0x9u;
    if (cnd_) { goto L_08893234; }
    goto L_08893100;
L_08893100:;
    cnd_ = v0 == 0;
    v0 = 32;
    if (cnd_) { goto L_08893240; }
    goto L_08893108;
L_08893108:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_08893110;
L_08893110:;
    v0 = v1 < 0x3u;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_0889311C;
L_0889311C:;
    v0 = 4;
    cnd_ = v1 == v0;
    v0 = 32;
    if (cnd_) { goto L_08893238; }
    goto L_08893128;
L_08893128:;
    v0 = LD32(s1+52);
    goto L_0889312C;
L_0889312C:;
    cnd_ = v0 != 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088931F8; }
    goto L_08893134;
L_08893134:;
    a0 = LD32(s1+176);
    goto L_08893138;
L_08893138:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08893158; }
    goto L_08893140;
L_08893140:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08893158:;
    f12 = BITSF(LD32(s1+180));
    { u64 r_ = func_08881C14(a0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893160;
L_08893160:;
    f0 = BITSF(LD32(s1+184));
    f1 = BITSF(LD32(s1+180));
    fcc = FCMP(f0, f1, 2);
    cnd_ = !fcc;
    if (cnd_) { a0 = s1 + 0; goto L_08893180; }
    goto L_08893178;
L_08893178:;
    ST32(s1+184, FBITS(f1));
    goto L_08893140;
L_08893180:;
    a1 = 128;
    v0 = func_08887500(a0, a1);
    goto L_08893188;
L_08893188:;
    v1 = 1;
    cnd_ = v0 == v1;
    v0 = D_08AEC254 - (-15788);
    if (cnd_) { goto L_0889319C; }
    goto L_08893194;
L_08893194:;
    f1 = BITSF(LD32(s1+180));
    goto L_08893178;
L_0889319C:;
    f2 = BITSF(LD32(s1+180));
    f0 = BITSF(LD32(v0-15788));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    a1 = LD32(s1+144);
    if (cnd_) { goto L_088931E8; }
    goto L_088931BC;
L_088931BC:;
    v0 = D_08AEC258 - (-15784);
    f0 = BITSF(LD32(v0-15784));
    f0 = f2 + f0;
    goto L_088931C8;
L_088931C8:;
    f0 = BITSF(F2I(f0, 1));
    a0 = (u32)-1;
    a2 = 1;
    t0 = FBITS(f0);
    a3 = 2003;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088931E0;
L_088931E0:;
    f1 = BITSF(LD32(s1+180));
    goto L_08893178;
L_088931E8:;
    v0 = D_08AEC258 - (-15784);
    f0 = BITSF(LD32(v0-15784));
    f0 = f2 - f0;
    goto L_088931C8;
L_088931F8:;
    v1 = LD32(s1+48);
    goto L_088931FC;
L_088931FC:;
    v0 = s0 << 2;
    f12 = f20;
    v0 = v0 + v1;
    a0 = LD32(v0);
    v0 = LD32(a0);
    v1 = LD32(v0+12);
    t_ = v1;
    s0 = s0 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889321C;
L_0889321C:;
    v0 = LD32(s1+52);
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1+48); goto L_088931FC; }
    goto L_0889322C;
L_0889322C:;
    a0 = LD32(s1+176);
    goto L_08893138;
L_08893234:;
    v0 = 32;
    goto L_08893238;
L_08893238:;
    ST32(s1+156, v0);
    goto L_08893128;
L_08893240:;
    cnd_ = v1 == v0;
    v0 = v1 < 0x21u;
    if (cnd_) { goto L_08893128; }
    goto L_08893248;
L_08893248:;
    cnd_ = v0 == 0;
    v0 = 16;
    if (cnd_) { goto L_08893260; }
    goto L_08893250;
L_08893250:;
    cnd_ = v1 != v0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_08893258;
L_08893258:;
    v0 = 2;
    goto L_08893238;
L_08893260:;
    cnd_ = v1 != a0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_08893268;
L_08893268:;
    a0 = LD32(s1+212);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_08893278;
L_08893278:;
    v0 = LD32(s1+208);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_08893288;
L_08893288:;
    { u64 r_ = func_088DFF84(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893290;
L_08893290:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_08893298;
L_08893298:;
    v0 = LD32(s1+208);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+52); goto L_0889312C; }
    goto L_088932A8;
L_088932A8:;
    a0 = LD32(s1+212);
    { u64 r_ = func_088DFF50(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088932B0;
L_088932B0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088932CC; }
    goto L_088932B8;
L_088932B8:;
    a0 = LD32(s1+212);
    f12 = BITSF(LD32(s1+180));
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088932C4;
L_088932C4:;
    v0 = LD32(s1+52);
    goto L_0889312C;
L_088932CC:;
    a0 = s1 + 0;
    func_088937D0(a0);
    goto L_088932D4;
L_088932D4:;
    a0 = s1 + 0;
    { rv_t r_ = func_088936D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088932DC;
L_088932DC:;
    v0 = LD32(s1+52);
    goto L_0889312C;
}

/* 088932E4 */
rv_t func_088932E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088932E4:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893300;
L_08893300:;
    v0 = LD32(s0+204);
    v1 = LD32(s0+208);
    f0 = BITSF(LD32(s0+200));
    ST32(s1+204, v0);
    s0 = s0 + 224;
    a0 = s1 + 224;
    ST32(s1+208, v1);
    a1 = s0 + 0;
    ST32(s1+200, FBITS(f0));
    { rv_t r_ = func_0887E394(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893328;
L_08893328:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889333C */
rv_t func_0889333C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889333C:;
    sp = sp - 32;
    s4 = 0 + 0;
    s3 = a0 + 0;
    s2 = 1024;
    s1 = LD32(a0+156);
    cnd_ = s1 == s2;
    s0 = a1 + 0;
    if (cnd_) { goto L_088933E4; }
    goto L_08893370;
L_08893370:;
    { rv_t r_ = func_0888C954(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893378;
L_08893378:;
    s4 = v0 + 0;
    v0 = s0 & 0x10;
    cnd_ = v0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_088933B4; }
    goto L_08893388;
L_08893388:;
    v0 = 1;
    cnd_ = s1 == v0;
    a0 = 1;
    if (cnd_) { goto L_088933B0; }
    goto L_08893394;
L_08893394:;
    ST32(s3+156, s2);
    s4 = s4 | 0x10;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088933A0;
L_088933A0:;
    v0 = LD32(s3+208);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088933D4; }
    goto L_088933B0;
L_088933B0:;
    v0 = s4 + 0;
    goto L_088933B4;
L_088933B4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088933D4:;
    a0 = s3 + 0;
    { rv_t r_ = func_088936D0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088933DC;
L_088933DC:;
    v0 = s4 + 0;
    goto L_088933B4;
L_088933E4:;
    v0 = 0x20000u;
    a1 = a1 & v0;
    f3 = BITSF(0);
    a2 = 0 + 0;
    a3 = 0 + 0;
    cnd_ = a1 != 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08893404; }
    goto L_08893400;
L_08893400:;
    ST32(a0+192, FBITS(f3));
    goto L_08893404;
L_08893404:;
    v0 = 0x40000u;
    v1 = s0 & v0;
    cnd_ = v1 == 0;
    if (cnd_) { ST32(s3+196, FBITS(f3)); goto L_08893414; }
    goto L_08893414;
L_08893414:;
    v0 = s0 & 0x4010;
    cnd_ = v0 != 0;
    v0 = s0 & 0x4;
    if (cnd_) { goto L_08893694; }
    goto L_08893420;
L_08893420:;
    cnd_ = v0 == 0;
    v0 = s0 & 0x8;
    if (cnd_) { goto L_088935E8; }
    goto L_08893428;
L_08893428:;
    s4 = 4;
    a2 = 1;
    goto L_08893430;
L_08893430:;
    f1 = BITSF(LD32(s3+200));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    f3 = f1;
    if (cnd_) { goto L_088935E0; }
    goto L_08893448;
L_08893448:;
    f3 = BITSF(LD32(s3+188));
    goto L_0889344C;
L_0889344C:;
    cnd_ = a2 == 0;
    if (cnd_) { goto L_0889352C; }
    goto L_08893454;
L_08893454:;
    f1 = BITSF(LD32(s3+180));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = s4 + 0;
    if (cnd_) { goto L_088933B4; }
    goto L_0889346C;
L_0889346C:;
    v0 = D_08AEC260 - (-15776);
    f0 = BITSF(LD32(v0-15776));
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a0 = D_08AEC264 - (-15772);
    if (cnd_) { goto L_08893520; }
    goto L_08893488;
L_08893488:;
    f0 = BITSF(LD32(a0-15772));
    f0 = f1 + f0;
    goto L_08893490;
L_08893490:;
    f4 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(v0-15776));
    f1 = BITSF(0);
    f2 = f3 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a0-15772));
    if (cnd_) { goto L_08893518; }
    goto L_088934B0;
L_088934B0:;
    f0 = f2 + f0;
    goto L_088934B4;
L_088934B4:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f4);
    f2 = BITSF(0);
    v1 = FBITS(f0);
    v0 = v0 - v1;
    f0 = BITSF(v0);
    v0 = D_08AEC268 - (-15768);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15768));
    f1 = f1 * f0;
    fcc = FCMP(f1, f2, 12);
    goto L_088934E4;
L_088934E4:;
    cnd_ = !fcc;
    ST32(s3+180, FBITS(f1));
    if (cnd_) { goto L_088934F0; }
    goto L_088934EC;
L_088934EC:;
    ST32(s3+180, FBITS(f2));
    goto L_088934F0;
L_088934F0:;
    a0 = s3 + 0;
    { rv_t r_ = func_08893C3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088934F8;
L_088934F8:;
    cnd_ = s1 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_088933B4; }
    goto L_08893500;
L_08893500:;
    v0 = LD32(s3+208);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = s4 + 0; goto L_088933B4; }
    goto L_08893510;
L_08893510:;
    goto L_088933D4;
L_08893518:;
    f0 = f2 - f0;
    goto L_088934B4;
L_08893520:;
    f0 = BITSF(LD32(a0-15772));
    f0 = f1 - f0;
    goto L_08893490;
L_0889352C:;
    cnd_ = a3 == 0;
    v1 = D_08AEC26C - (-15764);
    if (cnd_) { goto L_088934F8; }
    goto L_08893534;
L_08893534:;
    f1 = BITSF(LD32(s3+180));
    f0 = BITSF(LD32(v1-15764));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { s1 = 0 + 0; goto L_088934F8; }
    goto L_0889354C;
L_0889354C:;
    v0 = D_08AEC260 - (-15776);
    f0 = BITSF(LD32(v0-15776));
    f2 = f1 * f0;
    f1 = BITSF(0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    a0 = D_08AEC264 - (-15772);
    if (cnd_) { goto L_088935D4; }
    goto L_0889356C;
L_0889356C:;
    f0 = BITSF(LD32(a0-15772));
    f0 = f2 + f0;
    goto L_08893574;
L_08893574:;
    f4 = BITSF(F2I(f0, 1));
    f0 = BITSF(LD32(v0-15776));
    f1 = BITSF(0);
    f2 = f3 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(a0-15772));
    if (cnd_) { goto L_088935CC; }
    goto L_08893594;
L_08893594:;
    f0 = f2 + f0;
    goto L_08893598;
L_08893598:;
    f0 = BITSF(F2I(f0, 1));
    a0 = FBITS(f4);
    f2 = BITSF(LD32(v1-15764));
    v0 = FBITS(f0);
    a0 = a0 + v0;
    f0 = BITSF(a0);
    v0 = D_08AEC268 - (-15768);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15768));
    f1 = f1 * f0;
    fcc = FCMP(f2, f1, 12);
    goto L_088934E4;
L_088935CC:;
    f0 = f2 - f0;
    goto L_08893598;
L_088935D4:;
    f0 = BITSF(LD32(a0-15772));
    f0 = f2 - f0;
    goto L_08893574;
L_088935E0:;
    s1 = 1;
    goto L_0889344C;
L_088935E8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088935FC; }
    goto L_088935F0;
L_088935F0:;
    s4 = 8;
    a3 = 1;
    goto L_08893430;
L_088935FC:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_08893648; }
    goto L_08893604;
L_08893604:;
    f0 = BITSF(LD32(s3+200));
    s4 = 0x20000u;
    fcc = FCMP(f0, f3, 2);
    cnd_ = fcc;
    a2 = 1;
    if (cnd_) { goto L_08893430; }
    goto L_0889361C;
L_0889361C:;
    f1 = BITSF(LD32(s3+192));
    f0 = BITSF(LD32(s3+188));
    v0 = D_08AEC25C - (-15780);
    f1 = f1 + f0;
    f0 = BITSF(LD32(v0-15780));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(s3+192, FBITS(f1));
    if (cnd_) { goto L_088933B0; }
    goto L_08893640;
L_08893640:;
    ST32(s3+192, FBITS(f3));
    goto L_08893430;
L_08893648:;
    cnd_ = v1 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_088933B4; }
    goto L_08893650;
L_08893650:;
    f0 = BITSF(LD32(s3+200));
    s4 = 0x40000u;
    fcc = FCMP(f0, f3, 2);
    cnd_ = fcc;
    a3 = 1;
    if (cnd_) { goto L_08893430; }
    goto L_08893668;
L_08893668:;
    f1 = BITSF(LD32(s3+196));
    f0 = BITSF(LD32(s3+188));
    v0 = D_08AEC25C - (-15780);
    f1 = f1 + f0;
    f0 = BITSF(LD32(v0-15780));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    ST32(s3+196, FBITS(f1));
    if (cnd_) { goto L_088933B0; }
    goto L_0889368C;
L_0889368C:;
    ST32(s3+196, FBITS(f3));
    goto L_08893430;
L_08893694:;
    v0 = 32;
    ST32(s3+156, v0);
    s4 = 16;
    { rv_t r_ = func_08893C3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088936A4;
L_088936A4:;
    a0 = s3 + 0;
    func_088937D0(a0);
    goto L_088936AC;
L_088936AC:;
    v0 = s0 & 0x10;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_088936C0; }
    goto L_088936B8;
L_088936B8:;
    a0 = 2;
    s4 = 16384;
    goto L_088936C0;
L_088936C0:;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088936C8;
L_088936C8:;
    v0 = s4 + 0;
    goto L_088933B4;
}

/* 088936D0 */
rv_t func_088936D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088936D0:;
    sp = sp - 48;
    s0 = a0 + 0;
    v0 = LD32(a0+204);
    a0 = D_08B30A5C - (2652);
    a0 = a0 + 2652;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08893704; }
    goto L_088936F4;
L_088936F4:;
    goto L_088936F8;
L_088936F8:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_08893704:;
    { u64 r_ = func_088DF4A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889370C;
L_0889370C:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_088936F4; }
    goto L_08893714;
L_08893714:;
    v0 = D_08B159FC - (23036);
    v1 = LD32(v0+23036);
    v0 = LD32(s0+208);
    a0 = a3 + 0;
    f2 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(v1));
    f1 = BITSF(LD32(v1+4));
    v0 = v0 & 0x2;
    a1 = sp + 16;
    a2 = sp + 0;
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_0889378C; }
    goto L_0889374C;
L_0889374C:;
    v1 = LD32(s0+212);
    v0 = (u32)-1;
    cnd_ = v1 != v0;
    a1 = s0 + 212;
    if (cnd_) { goto L_088936F4; }
    goto L_0889375C;
L_0889375C:;
    v0 = D_08AEC270 - (-15760);
    f12 = BITSF(LD32(v0-15760));
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893768;
L_08893768:;
    v0 = LD32(s0+208);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088936F8; }
    goto L_08893778;
L_08893778:;
    f12 = BITSF(LD32(s0+180));
    a0 = LD32(s0+212);
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893784;
L_08893784:;
    goto L_088936F8;
L_0889378C:;
    v1 = D_08AEC270 - (-15760);
    f12 = BITSF(LD32(v1-15760));
    v0 = (u32)-1;
    ST32(sp+16, v0);
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088937A0;
L_088937A0:;
    v0 = LD32(s0+208);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s0+180)); goto L_088937C0; }
    goto L_088937B0;
L_088937B0:;
    a0 = sp + 16;
    { rv_t r_ = func_088DFEC0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088937B8;
L_088937B8:;
    goto L_088936F8;
L_088937C0:;
    a0 = LD32(sp+16);
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088937C8;
L_088937C8:;
    goto L_088937B0;
}

/* 088937D0 */
void func_088937D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088937D0:;
    sp = sp - 16;
    s1 = (u32)-1;
    s0 = a0 + 0;
    v0 = LD32(s0+212);
    cnd_ = v0 == s1;
    a0 = a0 + 212;
    if (cnd_) { goto L_08893800; }
    goto L_088937F4;
L_088937F4:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088937FC;
L_088937FC:;
    ST32(s0+212, s1);
    goto L_08893800;
L_08893800:;
    sp = sp + 16;
    return;
}

/* 08893814 */
rv_t func_08893814(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893814:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893828;
L_08893828:;
    a0 = s0 + 0;
    func_08893BB8(a0);
    goto L_08893830;
L_08893830:;
    a1 = LD32(s0+144);
    a0 = (u32)-1;
    a2 = 2;
    a3 = 2003;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893848;
L_08893848:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889385C */
rv_t func_0889385C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889385C:;
    sp = sp - 16;
    a1 = 64;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_08893874;
L_08893874:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_08893890; }
    goto L_08893880;
L_08893880:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08893890:;
    v0 = D_08AEC274 - (-15756);
    f2 = BITSF(LD32(s0+180));
    f1 = BITSF(LD32(v0-15756));
    f0 = BITSF(0);
    f2 = f2 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = LD32(s0+144);
    if (cnd_) { goto L_088938E8; }
    goto L_088938B4;
L_088938B4:;
    v0 = D_08AEC278 - (-15752);
    f0 = BITSF(LD32(v0-15752));
    f0 = f2 + f0;
    goto L_088938C0;
L_088938C0:;
    f0 = BITSF(F2I(f0, 1));
    a0 = (u32)-1;
    a2 = 1;
    t0 = FBITS(f0);
    a3 = 2003;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088938D8;
L_088938D8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08893C3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088938E0;
L_088938E0:;
    goto L_08893880;
L_088938E8:;
    v0 = D_08AEC278 - (-15752);
    f0 = BITSF(LD32(v0-15752));
    f0 = f2 - f0;
    goto L_088938C0;
}

/* 088938F8 */
rv_t func_088938F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088938F8:;
    sp = sp - 16;
    a2 = a0 + 0;
    v1 = LD32(a0+144);
    v0 = LD32(a1+12);
    cnd_ = v0 == v1;
    a0 = 0 + 0;
    if (cnd_) { goto L_08893928; }
    goto L_08893914;
L_08893914:;
    v1 = LD32(a1+4);
    v0 = 2003;
    cnd_ = v1 == v0;
    a0 = a2 + 0;
    if (cnd_) { goto L_08893938; }
    goto L_08893924;
L_08893924:;
    a0 = 1;
    goto L_08893928;
L_08893928:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08893938:;
    v0 = LD32(a1+16);
    f0 = BITSF(v0);
    v1 = v0 >> 1;
    a1 = v0 & 0x1;
    a1 = a1 | v1;
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_08893970; }
    goto L_08893954;
L_08893954:;
    v0 = D_08AEC27C - (-15748);
    f0 = BITSF(LD32(v0-15748));
    f0 = f1 * f0;
    ST32(a2+180, FBITS(f0));
    { rv_t r_ = func_08893C3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893968;
L_08893968:;
    a0 = 1;
    goto L_08893928;
L_08893970:;
    f0 = BITSF(a1);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_08893954;
}

/* 08893980 */
rv_t func_08893980(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893980:;
    sp = sp - 16;
    a2 = LD32(a0+144);
    v0 = LD32(a1+12);
    cnd_ = v0 == a2;
    v1 = 0 + 0;
    if (cnd_) { goto L_088939E4; }
    goto L_08893998;
L_08893998:;
    v0 = D_08AEC280 - (-15744);
    f2 = BITSF(LD32(a0+180));
    f1 = BITSF(LD32(v0-15744));
    f0 = BITSF(0);
    f2 = f2 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEC284 - (-15740);
    if (cnd_) { goto L_088939F4; }
    goto L_088939BC;
L_088939BC:;
    f0 = BITSF(LD32(v0-15740));
    f0 = f2 + f0;
    goto L_088939C4;
L_088939C4:;
    f0 = BITSF(F2I(f0, 1));
    a0 = LD32(a1+12);
    a3 = 2003;
    a1 = a2 + 0;
    t0 = FBITS(f0);
    a2 = 1;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088939E0;
L_088939E0:;
    v1 = 1;
    goto L_088939E4;
L_088939E4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088939F4:;
    f0 = BITSF(LD32(v0-15740));
    f0 = f2 - f0;
    goto L_088939C4;
}

/* 08893A00 */
rv_t func_08893A00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08893A00:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08893A08 */
rv_t func_08893A08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08893A08:;
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08893A18 */
rv_t func_08893A18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08893A18:;
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 08893A28 */
rv_t func_08893A28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08893A28:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08893A44; }
    goto L_08893A34;
L_08893A34:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_08893A44;
L_08893A44:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08893A50 */
u64 func_08893A50(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08893A50:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 0;
    a2 = LD32(a0+52);
    cnd_ = a2 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_08893AAC; }
    goto L_08893A80;
L_08893A80:;
    s4 = 1003;
    v0 = LD32(s2+48);
    goto L_08893A88;
L_08893A88:;
    s1 = s0 << 2;
    v0 = s1 + v0;
    a0 = LD32(v0);
    v1 = LD32(a0+144);
    cnd_ = v1 == s3;
    s0 = s0 + 1;
    if (cnd_) { goto L_08893ACC; }
    goto L_08893AA0;
L_08893AA0:;
    v0 = s0 < a2;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2+48); goto L_08893A88; }
    goto L_08893AAC;
L_08893AAC:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_08893ACC:;
    v0 = func_08888FD8(a0);
    goto L_08893AD4;
L_08893AD4:;
    cnd_ = v0 == s4;
    if (cnd_) { v0 = LD32(s2+48); goto L_08893AE4; }
    goto L_08893ADC;
L_08893ADC:;
    a2 = LD32(s2+52);
    goto L_08893AA0;
L_08893AE4:;
    v0 = s1 + v0;
    v1 = LD32(v0);
    ST32(s2+176, v1);
    goto L_08893AAC;
}

/* 08893AF4 */
rv_t func_08893AF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08893AF4:;
    sp = sp - 32;
    s2 = a3 + 0;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893B1C;
L_08893B1C:;
    a2 = s0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893B2C;
L_08893B2C:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893B38;
L_08893B38:;
    a1 = LD32(sp);
    a0 = s0 + 0;
    { u64 r_ = func_08893A50(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893B44;
L_08893B44:;
    a1 = s0 + 200;
    cnd_ = s2 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08893B88; }
    goto L_08893B50;
L_08893B50:;
    v0 = s2 < 0x2u;
    goto L_08893B54;
L_08893B54:;
    a0 = s0 + 224;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08893B78; }
    goto L_08893B60;
L_08893B60:;
    goto L_08893B64;
L_08893B64:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08893B78:;
    { rv_t r_ = func_0887E318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893B80;
L_08893B80:;
    goto L_08893B64;
L_08893B88:;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893B90;
L_08893B90:;
    a1 = s0 + 204;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893B9C;
L_08893B9C:;
    a1 = s0 + 208;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893BA8;
L_08893BA8:;
    v0 = s2 < 0x2u;
    goto L_08893B54;
}

/* 08893BB0 */
rv_t func_08893BB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08893BB0:;
    return (rv_t){ v0, v1, f0 };
}

/* 08893BB8 */
void func_08893BB8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08893BB8:;
    sp = sp - 32;
    s0 = a0 + 224;
    s1 = a0 + 0;
    a0 = s0 + 0;
    v0 = func_0887E378(a0);
    goto L_08893BD8;
L_08893BD8:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 0;
    if (cnd_) { goto L_08893BF8; }
    goto L_08893BE4;
L_08893BE4:;
    sp = sp + 32;
    return;
L_08893BF8:;
    func_0887E124(a0, a1, 0, 0, 0);
    goto L_08893C00;
L_08893C00:;
    a0 = LD32(s1+224);
    { u64 r_ = func_08899358(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893C08;
L_08893C08:;
    cnd_ = v0 == 0;
    f2 = BITSF(LD32(sp));
    if (cnd_) { goto L_08893C20; }
    goto L_08893C10;
L_08893C10:;
    f0 = BITSF(LD32(v0+28));
    ST32(s1+216, FBITS(f0));
    f1 = BITSF(LD32(v0+32));
    ST32(s1+220, FBITS(f1));
    goto L_08893C20;
L_08893C20:;
    f0 = BITSF(LD32(s1+216));
    f1 = BITSF(LD32(s1+220));
    f1 = f1 - f0;
    f0 = f2 - f0;
    f0 = f0 / f1;
    ST32(s1+180, FBITS(f0));
    goto L_08893BE4;
}

/* 08893C3C */
rv_t func_08893C3C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893C3C:;
    sp = sp - 16;
    s0 = a0 + 224;
    s1 = a0 + 0;
    a0 = s0 + 0;
    v0 = func_0887E378(a0);
    goto L_08893C5C;
L_08893C5C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08893C78; }
    goto L_08893C64;
L_08893C64:;
    goto L_08893C68;
L_08893C68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08893C78:;
    f1 = BITSF(LD32(s1+216));
    f0 = BITSF(LD32(s1+220));
    f12 = BITSF(LD32(s1+180));
    f0 = f0 - f1;
    f12 = f12 * f0;
    f12 = f12 + f1;
    { rv_t r_ = func_0887E23C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893C94;
L_08893C94:;
    goto L_08893C68;
}

/* 08893C9C */
rv_t func_08893C9C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893C9C:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_08893CB0;
L_08893CB0:;
    v0 = D_08AF77E8 - (30696);
    v0 = v0 + 30696;
    v1 = s0 + 200;
    ST32(s0, v0);
    v0 = 2004;
    ST32(s0+184, 0);
    ST32(s0+192, 0);
    ST32(s0+176, 0);
    ST32(v1+8, 0);
    ST32(v1+4, 0);
    ST32(s0+180, 0);
    ST32(s0+4, v0);
    ST32(s0+188, 0);
    ST8(s0+196, 0);
    ST8(s0+197, 0);
    ST32(s0+200, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08893D00 */
rv_t func_08893D00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893D00:;
    sp = sp - 16;
    v0 = D_08AF77E8 - (30696);
    s0 = a0 + 0;
    v0 = v0 + 30696;
    v1 = LD32(a0+188);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08893D70; }
    goto L_08893D2C;
L_08893D2C:;
    v0 = LD32(s0+200);
    goto L_08893D30;
L_08893D30:;
    s1 = s0 + 200;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08893D60; }
    goto L_08893D3C;
L_08893D3C:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893D4C;
L_08893D4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08893D60:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893D68;
L_08893D68:;
    ST32(s0+200, 0);
    goto L_08893D3C;
L_08893D70:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893D78;
L_08893D78:;
    v0 = LD32(s0+200);
    goto L_08893D30;
}

/* 08893D80 */
rv_t func_08893D80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893D80:;
    sp = sp - 16;
    v0 = D_08AF77E8 - (30696);
    s0 = a0 + 0;
    v0 = v0 + 30696;
    v1 = LD32(a0+188);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08893DF8; }
    goto L_08893DAC;
L_08893DAC:;
    v0 = LD32(s0+200);
    goto L_08893DB0;
L_08893DB0:;
    s1 = s0 + 200;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08893DE8; }
    goto L_08893DBC;
L_08893DBC:;
    ST32(s1+4, 0);
    a0 = s0 + 0;
    ST32(s1+8, 0);
    { u64 r_ = func_0888C76C(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893DCC;
L_08893DCC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893DD4;
L_08893DD4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08893DE8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893DF0;
L_08893DF0:;
    ST32(s0+200, 0);
    goto L_08893DBC;
L_08893DF8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893E00;
L_08893E00:;
    v0 = LD32(s0+200);
    goto L_08893DB0;
}

/* 08893E08 */
rv_t func_08893E08(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08893E08:;
    sp = sp - 144;
    s1 = a1 + 0;
    v0 = LD32(a0+192);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08893E84; }
    goto L_08893E28;
L_08893E28:;
    a1 = LD32(a0+188);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08893E88; }
    goto L_08893E34;
L_08893E34:;
    a2 = LD32(a0+180);
    cnd_ = a2 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_08893E88; }
    goto L_08893E40;
L_08893E40:;
    v0 = LD_U8(a0+196);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U16(a1); goto L_08893EF8; }
    goto L_08893E4C;
L_08893E4C:;
    v0 = D_08B29974 - (-26252);
    a0 = LD32(v0-26252);
    v1 = LD32(s0+144);
    cnd_ = a0 == v1;
    a0 = a2 + 0;
    if (cnd_) { goto L_08893EA4; }
    goto L_08893E60;
L_08893E60:;
    v0 = LD_U16(a1);
    a1 = D_08AD513C - (20796);
    cnd_ = v0 != 0;
    a1 = a1 + 20796;
    if (cnd_) { goto L_08893E7C; }
    goto L_08893E70;
L_08893E70:;
    a1 = D_08AD5150 - (20816);
    a0 = a2 + 0;
    a1 = a1 + 20816;
    goto L_08893E7C;
L_08893E7C:;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893E84;
L_08893E84:;
    a0 = s0 + 0;
    goto L_08893E88;
L_08893E88:;
    a1 = s1 + 0;
    { rv_t r_ = func_0888C860(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893E90;
L_08893E90:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_08893EA4:;
    a0 = a1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08893EAC;
L_08893EAC:;
    v1 = 63;
    a1 = v1 + 0;
    v1 = v1 < v0;
    if (v1 == 0) a1 = v0;
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_08893EE0; }
    goto L_08893EC4;
L_08893EC4:;
    a2 = 42;
    v1 = sp + 0;
    goto L_08893ECC;
L_08893ECC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST16(v1, a2);
    cnd_ = v0 != 0;
    v1 = v1 + 2;
    if (cnd_) { goto L_08893ECC; }
    goto L_08893EE0;
L_08893EE0:;
    a0 = LD32(s0+180);
    v0 = a1 << 1;
    v0 = v0 + sp;
    a1 = sp + 0;
    ST16(v0, 0);
    goto L_08893E7C;
L_08893EF8:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = a2 + 0; goto L_08893E7C; }
    goto L_08893F00;
L_08893F00:;
    v0 = LD_U8(a0+197);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08893F14; }
    goto L_08893F0C;
L_08893F0C:;
    a0 = a2 + 0;
    goto L_08893E7C;
L_08893F14:;
    a0 = a2 + 0;
    v0 = func_0888381C(a0);
    goto L_08893F1C;
L_08893F1C:;
    a0 = LD32(s0+180);
    a1 = v0 + 0;
    func_08883824(a0, a1, 0, 0, 0);
    goto L_08893F28;
L_08893F28:;
    a0 = s0 + 0;
    goto L_08893E88;
}

/* 08893F30 */
rv_t func_08893F30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893F30:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888C7F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893F44;
L_08893F44:;
    a0 = s0 + 0;
    { rv_t r_ = func_088944A8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893F4C;
L_08893F4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08893F5C */
rv_t func_08893F5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893F5C:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893F78;
L_08893F78:;
    a1 = LD32(s0+192);
    a0 = s1 + 0;
    func_08894350(a0, a1, 0, 0, 0);
    goto L_08893F84;
L_08893F84:;
    v0 = LD32(s0+192);
    a1 = s0 + 200;
    a0 = s1 + 200;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08893FA0; }
    goto L_08893F98;
L_08893F98:;
    v0 = LD_U8(s0+196);
    v1 = 0 < v0;
    goto L_08893FA0;
L_08893FA0:;
    ST8(s1+196, v1);
    { rv_t r_ = func_0887E394(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893FA8;
L_08893FA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08893FBC */
rv_t func_08893FBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08893FBC:;
    sp = sp - 16;
    s2 = a0 + 200;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+192);
    cnd_ = v0 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_08894010; }
    goto L_08893FE8;
L_08893FE8:;
    a0 = s0 + 0;
    goto L_08893FEC;
L_08893FEC:;
    a1 = s1 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08893FF4;
L_08893FF4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08894010:;
    v0 = func_0887E2CC(a0, t1, t2, t3);
    goto L_08894018;
L_08894018:;
    a1 = v0 - 1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08894040; }
    goto L_08894028;
L_08894028:;
    a1 = LD32(s0+188);
    goto L_0889402C;
L_0889402C:;
    a2 = LD32(s0+192);
    a0 = s2 + 0;
    func_0887E194(a0, a1, a2, 0, 0, 0);
    goto L_08894038;
L_08894038:;
    a0 = s0 + 0;
    goto L_08893FEC;
L_08894040:;
    func_08894350(a0, a1, 0, 0, 0);
    goto L_08894048;
L_08894048:;
    a1 = LD32(s0+188);
    goto L_0889402C;
}

/* 08894050 */
rv_t func_08894050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08894050:;
    sp = sp - 16;
    v0 = LD32(a0+192);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08894090; }
    goto L_08894068;
L_08894068:;
    v0 = LD_U8(a0+197);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08894094; }
    goto L_08894074;
L_08894074:;
    v0 = LD32(a0+188);
    v1 = LD_U16(v0);
    cnd_ = v1 != 0;
    if (cnd_) {  goto L_08894098; }
    goto L_08894084;
L_08894084:;
    v0 = LD32(a0+180);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088940A4; }
    goto L_08894090;
L_08894090:;
    goto L_08894094;
L_08894094:;
    goto L_08894098;
L_08894098:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088940A4:;
    v0 = func_08883844(a0);
    goto L_088940AC;
L_088940AC:;
    a1 = v0 + 0;
    a0 = s0 + 200;
    { rv_t r_ = func_0887E29C(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088940B8;
L_088940B8:;
    goto L_08894094;
}

/* 088940C0 */
rv_t func_088940C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088940C0:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088940C8 */
rv_t func_088940C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088940C8:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088940D0 */
rv_t func_088940D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088940D0:;
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088940D8 */
rv_t func_088940D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088940D8:;
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088940E8 */
rv_t func_088940E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088940E8:;
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    return (rv_t){ v0, v1, f0 };
}

/* 088940F8 */
rv_t func_088940F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088940F8:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08894114; }
    goto L_08894104;
L_08894104:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_08894114;
L_08894114:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08894120 */
rv_t func_08894120(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08894120:;
    sp = sp - 16;
    a1 = LD32(a0+188);
    a0 = a0 + 200;
    { rv_t r_ = func_0887E29C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894134;
L_08894134:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08894140 */
rv_t func_08894140(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08894140:;
    sp = sp - 16;
    s2 = 0 + 0;
    s0 = a0 + 0;
    a0 = LD32(a0+180);
    cnd_ = a0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_08894198; }
    goto L_08894168;
L_08894168:;
    v0 = 0x80000u;
    v0 = v0 | 0x10;
    v0 = a1 & v0;
    v1 = 0x80000u;
    cnd_ = v0 == v1;
    v0 = a1 & 0x10;
    if (cnd_) { goto L_088941EC; }
    goto L_08894180;
L_08894180:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088941B4; }
    goto L_08894188;
L_08894188:;
    a0 = s0 + 0;
    goto L_0889418C;
L_0889418C:;
    a1 = s1 + 0;
    { rv_t r_ = func_0888C954(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894194;
L_08894194:;
    s2 = s2 | v0;
    goto L_08894198;
L_08894198:;
    v0 = s2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088941B4:;
    a0 = 1;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088941BC;
L_088941BC:;
    v0 = LD32(s0+192);
    cnd_ = v0 == 0;
    s2 = 16;
    if (cnd_) { goto L_08894188; }
    goto L_088941C8;
L_088941C8:;
    a0 = LD32(s0+180);
    v0 = func_08883844(a0);
    goto L_088941D0;
L_088941D0:;
    a0 = LD32(s0+144);
    a1 = LD32(s0+188);
    a2 = LD32(s0+192);
    a3 = v0 + 0;
    func_0888B4E0(a0, a1, a2, a3, 0, 0, 0);
    goto L_088941E4;
L_088941E4:;
    a0 = s0 + 0;
    goto L_0889418C;
L_088941EC:;
    v1 = LD32(s0+156);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = a1 & 0x8000;
    if (cnd_) { goto L_08894198; }
    goto L_088941FC;
L_088941FC:;
    cnd_ = v0 == 0;
    f1 = BITSF(LD32(a0+196));
    if (cnd_) { goto L_08894230; }
    goto L_08894204;
L_08894204:;
    v0 = D_08AEC288 - (-15736);
    f0 = BITSF(LD32(v0-15736));
    f2 = BITSF(0);
    s2 = 0x8000;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    goto L_08894220;
L_08894220:;
    cnd_ = fcc;
    if (cnd_) { f1 = f2; goto L_08894228; }
    goto L_08894228;
L_08894228:;
    ST32(a0+196, FBITS(f1));
    goto L_08894198;
L_08894230:;
    v0 = 0x10000u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(a0+196, FBITS(f1)); goto L_08894198; }
    goto L_08894240;
L_08894240:;
    v0 = D_08AEC288 - (-15736);
    f0 = BITSF(LD32(v0-15736));
    f2 = BITSF(LD32(s0+176));
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 14);
    s2 = 0x10000u;
    goto L_08894220;
}

/* 0889425C */
rv_t func_0889425C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889425C:;
    sp = sp - 32;
    s5 = 0 + 0;
    s4 = a1 + 0;
    s2 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+120);
    t_ = v0;
    s1 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894298;
L_08894298:;
    cnd_ = v0 != 0;
    s3 = v0 + 0;
    if (cnd_) { goto L_088942C8; }
    goto L_088942A0;
L_088942A0:;
    v0 = s5 + 0;
    goto L_088942A4;
L_088942A4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088942C8:;
    v1 = LD32(s2);
    goto L_088942CC;
L_088942CC:;
    a1 = s1 + 0;
    a0 = s2 + 0;
    v0 = LD32(v1+124);
    t_ = v0;
    s1 = s1 + 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088942E0;
L_088942E0:;
    s0 = v0 + 0;
    v0 = LD32(v0+144);
    cnd_ = v0 == s4;
    v1 = s1 < s3;
    if (cnd_) { goto L_08894300; }
    goto L_088942F0;
L_088942F0:;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s2); goto L_088942CC; }
    goto L_088942F8;
L_088942F8:;
    v0 = s5 + 0;
    goto L_088942A4;
L_08894300:;
    a0 = LD32(s2+180);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(s2+184); goto L_08894340; }
    goto L_0889430C;
L_0889430C:;
    ST32(s2+180, s0);
    goto L_08894310;
L_08894310:;
    a0 = s0 + 0;
    s5 = 1;
    v0 = func_08887510(a0);
    goto L_0889431C;
L_0889431C:;
    ST32(s2+184, v0);
    a1 = 1087;
    a2 = 1;
    a0 = LD32(s2+180);
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08894330;
L_08894330:;
    a0 = s2 + 0;
    { rv_t r_ = func_088944A8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894338;
L_08894338:;
    v0 = s5 + 0;
    goto L_088942A4;
L_08894340:;
    a2 = 0 + 0;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08894348;
L_08894348:;
    ST32(s2+180, s0);
    goto L_08894310;
}

/* 08894350 */
void func_08894350(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08894350:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+188);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088943A0; }
    goto L_08894374;
L_08894374:;
    a0 = s1 + 2;
    goto L_08894378;
L_08894378:;
    a0 = a0 << 1;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894380;
L_08894380:;
    ST32(s0+188, v0);
    ST32(s0+192, s1);
    ST16(v0, 0);
    sp = sp + 16;
    return;
L_088943A0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088943A8;
L_088943A8:;
    a0 = s1 + 2;
    goto L_08894378;
}

/* 088943B0 */
rv_t func_088943B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088943B0:;
    sp = sp - 32;
    s2 = a3 + 0;
    a3 = (u32)-1;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088943D8;
L_088943D8:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    a2 = s0 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088943E8;
L_088943E8:;
    a0 = s1 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088943F4;
L_088943F4:;
    a0 = s1 + 0;
    cnd_ = s2 != 0;
    a1 = sp + 4;
    if (cnd_) { goto L_08894484; }
    goto L_08894400;
L_08894400:;
    v0 = s2 < 0x3u;
    goto L_08894404;
L_08894404:;
    a1 = s0 + 196;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08894474; }
    goto L_08894410;
L_08894410:;
    v0 = s2 < 0x4u;
    goto L_08894414;
L_08894414:;
    a1 = s0 + 197;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08894464; }
    goto L_08894420;
L_08894420:;
    v0 = s2 < 0x2u;
    goto L_08894424;
L_08894424:;
    a0 = s0 + 200;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_08894454; }
    goto L_08894430;
L_08894430:;
    a1 = LD32(sp);
    goto L_08894434;
L_08894434:;
    a0 = s0 + 0;
    { rv_t r_ = func_0889425C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889443C;
L_0889443C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08894454:;
    { rv_t r_ = func_0887E318(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889445C;
L_0889445C:;
    a1 = LD32(sp);
    goto L_08894434;
L_08894464:;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889446C;
L_0889446C:;
    v0 = s2 < 0x2u;
    goto L_08894424;
L_08894474:;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889447C;
L_0889447C:;
    v0 = s2 < 0x4u;
    goto L_08894414;
L_08894484:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889448C;
L_0889448C:;
    a1 = LD32(sp+4);
    a0 = s0 + 0;
    func_08894350(a0, a1, 0, 0, 0);
    goto L_08894498;
L_08894498:;
    v0 = s2 < 0x3u;
    goto L_08894404;
}

/* 088944A0 */
rv_t func_088944A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088944A0:;
    return (rv_t){ v0, v1, f0 };
}

/* 088944A8 */
rv_t func_088944A8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088944A8:;
    sp = sp - 64;
    v0 = LD32(a0+180);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088944E0; }
    goto L_088944C4;
L_088944C4:;
    f1 = BITSF(LD32(s0+176));
    f0 = BITSF(0);
    a1 = v0 + 0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = fcc;
    a0 = sp + 16;
    if (cnd_) { goto L_088944F4; }
    goto L_088944E0;
L_088944E0:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_088944F4:;
    v0 = LD32(v0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894504;
L_08894504:;
    a0 = LD32(s0+180);
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889450C;
L_0889450C:;
    ST32(sp+36, v1);
    ST32(sp+32, v0);
    f2 = BITSF(LD32(sp+16));
    f3 = BITSF(LD32(sp+20));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+36));
    a0 = LD32(s0+180);
    f1 = f2 + f1;
    f0 = f3 + f0;
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f0));
    ST32(sp+4, FBITS(f3));
    v0 = func_0888381C(a0);
    goto L_08894544;
L_08894544:;
    a1 = v0 + 0;
    v1 = LD32(s0+180);
    a0 = v1 + 0;
    cnd_ = v0 == 0;
    v1 = LD32(v1+188);
    if (cnd_) { goto L_088945D0; }
    goto L_08894558;
L_08894558:;
    a0 = v1 + 0;
    { rv_t r_ = func_088329F8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894560;
L_08894560:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_088944E0; }
    goto L_08894568;
L_08894568:;
    a0 = LD32(s0+180);
    v0 = func_0888393C(a0);
    goto L_08894570;
L_08894570:;
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    a0 = v0 + 0;
    if (cnd_) { goto L_088944E0; }
    goto L_0889457C;
L_0889457C:;
    func_088CD5B0(a0);
    goto L_08894584;
L_08894584:;
    v0 = D_08AEC28C - (-15732);
    f12 = BITSF(LD32(v0-15732));
    a0 = s1 + 0;
    a1 = sp + 0;
    f13 = f12;
    a2 = 384;
    { rv_t r_ = func_088CCF50(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088945A0;
L_088945A0:;
    f2 = BITSF(FBITS(f0) ^ 0x80000000u);
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    ST32(s0+176, FBITS(f2));
    if (cnd_) { goto L_088944E0; }
    goto L_088945B8;
L_088945B8:;
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(sp+4));
    f0 = f0 - f1;
    f0 = f2 + f0;
    ST32(s0+176, FBITS(f0));
    goto L_088944E0;
L_088945D0:;
    v0 = func_08883814(a0);
    goto L_088945D8;
L_088945D8:;
    goto L_08894560;
}

/* 088945E0 */
rv_t func_088945E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088945E0:;
    sp = sp - 32;
    s0 = a0 + 0;
    f0 = func_0888C704(a0);
    goto L_088945F8;
L_088945F8:;
    v1 = 1;
    ST32(s0+276, v1);
    v0 = D_08AEC2AC - (-15700);
    v1 = D_08AEC2A0 - (-15712);
    f20 = BITSF(LD32(v0-15700));
    f0 = BITSF(LD32(v1-15712));
    v0 = D_08AF78B0 - (30896);
    v0 = v0 + 30896;
    ST32(s0, v0);
    v0 = D_08AEC2A4 - (-15708);
    a2 = s0 + 284;
    ST32(s0+188, FBITS(f0));
    a1 = (u32)-1;
    a0 = s0 + 312;
    f0 = BITSF(LD32(v0-15708));
    v0 = D_08AEC2A8 - (-15704);
    ST32(s0+256, a1);
    ST32(s0+192, FBITS(f0));
    f0 = BITSF(LD32(v0-15704));
    ST32(s0+252, a1);
    ST32(s0+236, FBITS(f0));
    ST32(s0+180, 0);
    ST32(s0+240, 0);
    ST32(s0+272, 0);
    ST32(s0+176, 0);
    ST32(a2+8, 0);
    ST32(a2+4, 0);
    ST32(s0+184, 0);
    ST32(s0+196, 0);
    ST32(s0+200, 0);
    ST32(s0+204, 0);
    ST32(s0+208, 0);
    ST32(s0+228, 0);
    ST32(s0+232, 0);
    ST32(s0+260, 0);
    ST32(s0+264, 0);
    ST32(s0+268, 0);
    ST32(s0+280, 0);
    ST32(s0+284, 0);
    ST32(s0+296, 0);
    ST32(s0+300, 0);
    ST8(s0+304, 0);
    ST8(s0+305, 0);
    ST32(s0+308, FBITS(f20));
    func_0887EBB0(a0);
    goto L_088946AC;
L_088946AC:;
    f0 = BITSF(0);
    v0 = s0 + 320;
    v1 = s0 + 212;
    a0 = s0 + 332;
    ST32(v0+8, 0);
    ST32(v0+4, 0);
    v0 = 2005;
    ST32(s0+248, FBITS(f0));
    ST32(s0+244, FBITS(f0));
    ST32(s0+212, FBITS(f20));
    ST32(a0+8, 0);
    ST32(v1+12, FBITS(f20));
    ST32(s0+320, 0);
    ST32(a0+4, 0);
    ST32(s0+332, 0);
    ST32(s0+4, v0);
    ST32(v1+4, FBITS(f20));
    ST32(v1+8, FBITS(f20));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08894708 */
rv_t func_08894708(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08894708:;
    v0 = D_08AF78B0 - (30896);
    v0 = v0 + 30896;
    ST32(a0, v0);
    sp = sp - 32;
    s0 = a0 + 0;
    s3 = s0 + 284;
    s2 = a0 + 320;
    s1 = a0 + 332;
    func_0889626C(a0);
    goto L_08894740;
L_08894740:;
    v0 = LD32(s0+332);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088947C8; }
    goto L_0889474C;
L_0889474C:;
    v0 = LD32(s0+320);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_088947B8; }
    goto L_08894760;
L_08894760:;
    ST32(s2+4, 0);
    a0 = s0 + 312;
    ST32(s2+8, 0);
    func_0887EBCC(a0, 0, 0, 0);
    goto L_08894770;
L_08894770:;
    v0 = LD32(s0+284);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088947A8; }
    goto L_0889477C;
L_0889477C:;
    ST32(s3+4, 0);
    a0 = s0 + 0;
    ST32(s3+8, 0);
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889478C;
L_0889478C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088947A8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088947B0;
L_088947B0:;
    ST32(s0+284, 0);
    goto L_0889477C;
L_088947B8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088947C0;
L_088947C0:;
    ST32(s0+320, 0);
    goto L_08894760;
L_088947C8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088947D0;
L_088947D0:;
    ST32(s0+332, 0);
    goto L_0889474C;
}

/* 088947D8 */
rv_t func_088947D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088947D8:;
    v0 = D_08AF78B0 - (30896);
    v0 = v0 + 30896;
    ST32(a0, v0);
    sp = sp - 32;
    s0 = a0 + 0;
    s3 = s0 + 284;
    s2 = a0 + 320;
    s1 = a0 + 332;
    func_0889626C(a0);
    goto L_08894810;
L_08894810:;
    v0 = LD32(s0+332);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088948A0; }
    goto L_0889481C;
L_0889481C:;
    v0 = LD32(s0+320);
    ST32(s1+4, 0);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST32(s1+8, 0);
    if (cnd_) { goto L_08894890; }
    goto L_08894830;
L_08894830:;
    ST32(s2+4, 0);
    a0 = s0 + 312;
    ST32(s2+8, 0);
    func_0887EBCC(a0, 0, 0, 0);
    goto L_08894840;
L_08894840:;
    v0 = LD32(s0+284);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08894880; }
    goto L_0889484C;
L_0889484C:;
    ST32(s3+4, 0);
    a0 = s0 + 0;
    ST32(s3+8, 0);
    { u64 r_ = func_0888C76C(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889485C;
L_0889485C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08894864;
L_08894864:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08894880:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08894888;
L_08894888:;
    ST32(s0+284, 0);
    goto L_0889484C;
L_08894890:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08894898;
L_08894898:;
    ST32(s0+320, 0);
    goto L_08894830;
L_088948A0:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088948A8;
L_088948A8:;
    ST32(s0+332, 0);
    goto L_0889481C;
}

/* 088948B0 */
rv_t func_088948B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_088948B0:;
    sp = sp - 112;
    s4 = a1 + 0;
    s3 = (u32)-1;
    s1 = a0 + 0;
    a0 = LD32(a0+204);
    cnd_ = a0 != 0;
    s2 = (u32)-1;
    if (cnd_) { goto L_08894C54; }
    goto L_088948F8;
L_088948F8:;
    a0 = LD32(s1+208);
    goto L_088948FC;
L_088948FC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08894B14; }
    goto L_08894904;
L_08894904:;
    a0 = s1 + 0;
    goto L_08894908;
L_08894908:;
    a1 = s4 + 0;
    { rv_t r_ = func_0888C860(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894910;
L_08894910:;
    v0 = func_08901790();
    goto L_08894918;
L_08894918:;
    a0 = LD32(s1+204);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08894B04; }
    goto L_08894924;
L_08894924:;
    a0 = LD32(s1+208);
    goto L_08894928;
L_08894928:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08894AF4; }
    goto L_08894930;
L_08894930:;
    v0 = LD32(s1+240);
    goto L_08894934;
L_08894934:;
    cnd_ = v0 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_088949B8; }
    goto L_0889493C;
L_0889493C:;
    s6 = D_08AEC2B8 - (-15688);
    f20 = BITSF(LD32(s6-15688));
    s3 = 32;
    s5 = s1 + 212;
    s7 = D_08B2859C - (-31332);
    s2 = 0 + 0;
    fp = D_08AEC2B0 - (-15696);
    goto L_08894958;
L_08894958:;
    v0 = LD32(s1+252);
    cnd_ = s0 == v0;
    if (cnd_) { v0 = LD32(s1+156); goto L_08894A0C; }
    goto L_08894964;
L_08894964:;
    a0 = LD32(s1+196);
    goto L_08894968;
L_08894968:;
    a1 = LD32(s1+200);
    v0 = s0 << 4;
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = v0 + a1;
    f15 = BITSF(LD32(v0+12));
    f12 = BITSF(LD32(v0));
    f13 = BITSF(LD32(v0+4));
    f14 = BITSF(LD32(v0+8));
    a2 = LD32(v1+152);
    t_ = a2;
    a1 = s4 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14, f15, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894998;
L_08894998:;
    v0 = LD32(s1+252);
    cnd_ = s0 == v0;
    if (cnd_) { v0 = LD32(s1+156); goto L_088949EC; }
    goto L_088949A4;
L_088949A4:;
    v0 = LD32(s1+240);
    goto L_088949A8;
L_088949A8:;
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    s2 = s2 + 220;
    if (cnd_) { goto L_08894958; }
    goto L_088949B8;
L_088949B8:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_088949EC:;
    cnd_ = v0 != s3;
    if (cnd_) { v0 = LD32(s1+240); goto L_088949A8; }
    goto L_088949F4;
L_088949F4:;
    a0 = LD32(s1+196);
    a1 = sp + 16;
    a0 = a0 + s2;
    func_0888744C(a0, a1);
    goto L_08894A04;
L_08894A04:;
    v0 = LD32(s1+240);
    goto L_088949A8;
L_08894A0C:;
    cnd_ = v0 != s3;
    a0 = LD32(s1+196);
    if (cnd_) { goto L_08894968; }
    goto L_08894A14;
L_08894A14:;
    a0 = a0 + s2;
    v0 = func_08887404(a0);
    goto L_08894A1C;
L_08894A1C:;
    a0 = LD32(s1+196);
    f3 = BITSF(LD32(s1+308));
    f7 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+4));
    f6 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(s1+212));
    f1 = BITSF(LD32(s5+4));
    f2 = BITSF(LD32(s5+8));
    a0 = a0 + s2;
    a1 = sp + 32;
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f5));
    ST32(sp+24, FBITS(f6));
    ST32(sp+28, FBITS(f7));
    ST32(sp+32, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    ST32(sp+44, FBITS(f3));
    ST32(sp, FBITS(f4));
    ST32(sp+4, FBITS(f5));
    ST32(sp+8, FBITS(f6));
    ST32(sp+12, FBITS(f7));
    func_08887420(a0, a1);
    goto L_08894A7C;
L_08894A7C:;
    v0 = LD32(s1+156);
    cnd_ = v0 != s3;
    if (cnd_) { a0 = LD32(s1+196); goto L_08894968; }
    goto L_08894A88;
L_08894A88:;
    v0 = LD_U8(s1+305);
    cnd_ = v0 == 0;
    f1 = BITSF(LD32(s7-31332));
    if (cnd_) { goto L_08894AC4; }
    goto L_08894A94;
L_08894A94:;
    f0 = BITSF(LD32(s7-31332));
    f1 = BITSF(LD32(s1+308));
    f2 = BITSF(LD32(fp-15696));
    f0 = f0 * f20;
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 14);
    cnd_ = !fcc;
    ST32(s1+308, FBITS(f1));
    if (cnd_) { goto L_08894964; }
    goto L_08894AB8;
L_08894AB8:;
    ST32(s1+308, FBITS(f2));
    ST8(s1+305, 0);
    goto L_08894964;
L_08894AC4:;
    f2 = BITSF(LD32(s6-15688));
    f0 = BITSF(LD32(s1+308));
    f1 = f1 * f2;
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(s1+308, FBITS(f0));
    if (cnd_) { goto L_08894964; }
    goto L_08894AE4;
L_08894AE4:;
    v0 = 1;
    ST32(s1+308, FBITS(f2));
    ST8(s1+305, v0);
    goto L_08894964;
L_08894AF4:;
    a1 = s3 + 0;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894AFC;
L_08894AFC:;
    v0 = LD32(s1+240);
    goto L_08894934;
L_08894B04:;
    a1 = s2 + 0;
    { rv_t r_ = func_08887478(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894B0C;
L_08894B0C:;
    a0 = LD32(s1+208);
    goto L_08894928;
L_08894B14:;
    v0 = func_08887404(a0);
    goto L_08894B1C;
L_08894B1C:;
    a0 = D_08AEC2B4 - (-15692);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a0-15692));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a2 = D_08AEC2B8 - (-15688);
    if (cnd_) { goto L_08894C48; }
    goto L_08894B40;
L_08894B40:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 + f0;
    goto L_08894B48;
L_08894B48:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a0-15692));
    v1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = v1 << 8;
    if (cnd_) { goto L_08894C3C; }
    goto L_08894B70;
L_08894B70:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f2 + f0;
    goto L_08894B78;
L_08894B78:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+8));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15692));
    a1 = a1 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08894C30; }
    goto L_08894BA4;
L_08894BA4:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 + f0;
    goto L_08894BAC;
L_08894BAC:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+12));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15692));
    a1 = a1 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08894C24; }
    goto L_08894BD8;
L_08894BD8:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 + f0;
    goto L_08894BE0;
L_08894BE0:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s1+232));
    v0 = FBITS(f0);
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s3 = a1 + v0;
    if (cnd_) { goto L_08894904; }
    goto L_08894C00;
L_08894C00:;
    s0 = sp + 32;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08895DB0(a0, a1);
    goto L_08894C10;
L_08894C10:;
    a0 = LD32(s1+208);
    a1 = s0 + 0;
    func_0888744C(a0, a1);
    goto L_08894C1C;
L_08894C1C:;
    a0 = s1 + 0;
    goto L_08894908;
L_08894C24:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 - f0;
    goto L_08894BE0;
L_08894C30:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 - f0;
    goto L_08894BAC;
L_08894C3C:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f2 - f0;
    goto L_08894B78;
L_08894C48:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 - f0;
    goto L_08894B48;
L_08894C54:;
    v0 = func_08887404(a0);
    goto L_08894C5C;
L_08894C5C:;
    a0 = D_08AEC2B4 - (-15692);
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(a0-15692));
    f2 = BITSF(0);
    f1 = f0 * f1;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    a2 = D_08AEC2B8 - (-15688);
    if (cnd_) { goto L_08894D88; }
    goto L_08894C80;
L_08894C80:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 + f0;
    goto L_08894C88;
L_08894C88:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(a0-15692));
    v1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = v1 << 8;
    if (cnd_) { goto L_08894D7C; }
    goto L_08894CB0;
L_08894CB0:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f2 + f0;
    goto L_08894CB8;
L_08894CB8:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+8));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15692));
    a1 = a1 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08894D70; }
    goto L_08894CE4;
L_08894CE4:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 + f0;
    goto L_08894CEC;
L_08894CEC:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+12));
    v1 = FBITS(f0);
    f0 = BITSF(LD32(a0-15692));
    a1 = a1 + v1;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_08894D64; }
    goto L_08894D18;
L_08894D18:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 + f0;
    goto L_08894D20;
L_08894D20:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(s1+228));
    v0 = FBITS(f0);
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s2 = a1 + v0;
    if (cnd_) { goto L_088948F8; }
    goto L_08894D40;
L_08894D40:;
    s0 = sp + 32;
    a0 = s0 + 0;
    a1 = s1 + 0;
    func_08895DB0(a0, a1);
    goto L_08894D50;
L_08894D50:;
    a0 = LD32(s1+204);
    a1 = s0 + 0;
    func_0888744C(a0, a1);
    goto L_08894D5C;
L_08894D5C:;
    a0 = LD32(s1+208);
    goto L_088948FC;
L_08894D64:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 - f0;
    goto L_08894D20;
L_08894D70:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 - f0;
    goto L_08894CEC;
L_08894D7C:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f2 - f0;
    goto L_08894CB8;
L_08894D88:;
    f0 = BITSF(LD32(a2-15688));
    f0 = f1 - f0;
    goto L_08894C88;
}

/* 08894D94 */
rv_t func_08894D94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08894D94:;
    sp = sp - 64;
    s0 = a0 + 0;
    ST32(s0+176, FBITS(f12));
    s5 = D_08B29CA0 - (-25440);
    s1 = 0 + 0;
    f20 = f12;
    { rv_t r_ = func_0888C7F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894DD0;
L_08894DD0:;
    a0 = s0 + 0;
    v0 = LD32(s0+252);
    ST32(s0+256, v0);
    func_0889608C(a0);
    goto L_08894DE0;
L_08894DE0:;
    v0 = LD32(s0+272);
    cnd_ = v0 == 0;
    ST32(s5-25440, s0);
    if (cnd_) { goto L_08894E34; }
    goto L_08894DEC;
L_08894DEC:;
    s4 = D_08AD5154 - (20820);
    s2 = s0 + 320;
    s3 = ((u32)(uintptr_t)func_08896118) - (24856);
    t0 = s1 + 0;
    goto L_08894DFC;
L_08894DFC:;
    a2 = 12;
    a3 = 1;
    a0 = sp + 0;
    a1 = s4 + 20820;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894E10;
L_08894E10:;
    a0 = s2 + 0;
    a1 = sp + 0;
    a2 = s3 + 24856;
    { rv_t r_ = func_0887DED0(a0, a1, a2, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894E20;
L_08894E20:;
    v1 = LD32(s0+272);
    s1 = s1 + 1;
    v1 = s1 < v1;
    cnd_ = v1 != 0;
    t0 = s1 + 0;
    if (cnd_) { goto L_08894DFC; }
    goto L_08894E34;
L_08894E34:;
    v1 = LD32(s0+240);
    cnd_ = v1 == 0;
    ST32(s5-25440, 0);
    if (cnd_) { goto L_08894E5C; }
    goto L_08894E40;
L_08894E40:;
    a0 = LD32(s0+256);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    v0 = v1 - 1;
    if (cnd_) { goto L_08894E5C; }
    goto L_08894E50;
L_08894E50:;
    v1 = v0 < a0;
    if (v1 == 0) v0 = a0;
    ST32(s0+252, v0);
    goto L_08894E5C;
L_08894E5C:;
    v0 = LD32(s0+156);
    s1 = 1;
    cnd_ = v0 == s1;
    if (cnd_) { goto L_08894EBC; }
    goto L_08894E6C;
L_08894E6C:;
    a0 = s0 + 0;
    func_08895224(a0);
    goto L_08894E74;
L_08894E74:;
    f0 = BITSF(LD32(s0+268));
    f3 = BITSF(0);
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEC2BC - (-15684);
    if (cnd_) { goto L_08894EF4; }
    goto L_08894E8C;
L_08894E8C:;
    f0 = BITSF(LD32(v0-15684));
    f1 = BITSF(LD32(s0+264));
    f2 = BITSF(LD32(s0+260));
    f0 = f20 * f0;
    ST8(s0+304, s1);
    f1 = f1 + f0;
    fcc = FCMP(f2, f1, 12);
    goto L_08894EAC;
L_08894EAC:;
    cnd_ = !fcc;
    ST32(s0+264, FBITS(f1));
    if (cnd_) { goto L_08894EBC; }
    goto L_08894EB4;
L_08894EB4:;
    ST32(s0+264, FBITS(f2));
    ST32(s0+268, FBITS(f3));
    goto L_08894EBC;
L_08894EBC:;
    a0 = s0 + 0;
    func_08895104(a0);
    goto L_08894EC4;
L_08894EC4:;
    a0 = s0 + 0;
    f0 = func_08895188(a0);
    goto L_08894ECC;
L_08894ECC:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08894EF4:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(v0-15684));
    if (cnd_) { goto L_08894EBC; }
    goto L_08894F04;
L_08894F04:;
    f1 = BITSF(LD32(s0+264));
    f2 = BITSF(LD32(s0+260));
    f0 = f20 * f0;
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 12);
    ST8(s0+304, s1);
    goto L_08894EAC;
}

/* 08894F20 */
rv_t func_08894F20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08894F20:;
    sp = sp - 48;
    s0 = a1 + 0;
    s1 = a0 + 0;
    { rv_t r_ = func_0888C91C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894F3C;
L_08894F3C:;
    a0 = s0 + 0;
    { u64 r_ = func_08895E4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08894F44;
L_08894F44:;
    a1 = sp + 0;
    a0 = s1 + 0;
    ST32(sp+4, v1);
    ST32(sp, v0);
    func_08895E7C(a0, a1);
    goto L_08894F58;
L_08894F58:;
    a0 = s0 + 0;
    v0 = func_08895E68(a0);
    goto L_08894F60;
L_08894F60:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08895BFC(a0, a1);
    goto L_08894F6C;
L_08894F6C:;
    a0 = s0 + 0;
    v0 = func_08895E60(a0);
    goto L_08894F74;
L_08894F74:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08895B84(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08894F80;
L_08894F80:;
    a0 = sp + 16;
    a1 = s0 + 0;
    func_08895D1C(a0, a1);
    goto L_08894F8C;
L_08894F8C:;
    a1 = LD32(sp+16);
    a0 = s1 + 0;
    func_08895C6C(a0, a1, 0, 0, 0);
    goto L_08894F98;
L_08894F98:;
    a0 = LD32(sp+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088950F4; }
    goto L_08894FA4;
L_08894FA4:;
    a0 = s0 + 0;
    ST32(sp+24, 0);
    ST32(sp+20, 0);
    v0 = func_08896140(a0);
    goto L_08894FB4;
L_08894FB4:;
    a0 = s1 + 312;
    ST32(s1+300, v0);
    a1 = s0 + 312;
    { u64 r_ = func_0887F0C0(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08894FC4;
L_08894FC4:;
    v1 = D_08AEC2C0 - (-15680);
    f2 = BITSF(LD32(s0+212));
    f1 = BITSF(LD32(v1-15680));
    f0 = BITSF(0);
    f2 = f2 * f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = s0 + 212;
    if (cnd_) { goto L_088950E4; }
    goto L_08894FE8;
L_08894FE8:;
    a0 = D_08AEC2C4 - (-15676);
    f0 = BITSF(LD32(a0-15676));
    f0 = f2 + f0;
    goto L_08894FF4;
L_08894FF4:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v1-15680));
    a2 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = a2 << 8;
    if (cnd_) { goto L_088950D8; }
    goto L_0889501C;
L_0889501C:;
    f0 = BITSF(LD32(a0-15676));
    f0 = f2 + f0;
    goto L_08895024;
L_08895024:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1-15680));
    a2 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + a2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_088950CC; }
    goto L_08895050;
L_08895050:;
    f0 = BITSF(LD32(a0-15676));
    f0 = f1 + f0;
    goto L_08895058;
L_08895058:;
    f2 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1-15680));
    v0 = FBITS(f2);
    f1 = f1 * f0;
    f0 = BITSF(0);
    a1 = a1 + v0;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_088950C0; }
    goto L_08895084;
L_08895084:;
    f0 = BITSF(LD32(a0-15676));
    f0 = f1 + f0;
    goto L_0889508C;
L_0889508C:;
    f0 = BITSF(F2I(f0, 1));
    a0 = s1 + 0;
    a2 = FBITS(f0);
    a1 = a1 + a2;
    func_08895DDC(a0, a1);
    goto L_088950A0;
L_088950A0:;
    f12 = BITSF(LD32(s0+236));
    a0 = s1 + 0;
    func_08895E3C(a0, f12);
    goto L_088950AC;
L_088950AC:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088950C0:;
    f0 = BITSF(LD32(a0-15676));
    f0 = f1 - f0;
    goto L_0889508C;
L_088950CC:;
    f0 = BITSF(LD32(a0-15676));
    f0 = f1 - f0;
    goto L_08895058;
L_088950D8:;
    f0 = BITSF(LD32(a0-15676));
    f0 = f2 - f0;
    goto L_08895024;
L_088950E4:;
    a0 = D_08AEC2C4 - (-15676);
    f0 = BITSF(LD32(a0-15676));
    f0 = f2 - f0;
    goto L_08894FF4;
L_088950F4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088950FC;
L_088950FC:;
    ST32(sp+16, 0);
    goto L_08894FA4;
}

/* 08895104 */
void func_08895104(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895104:;
    sp = sp - 16;
    a1 = 256;
    s0 = a0 + 0;
    v0 = LD32(a0+272);
    a2 = LD32(a0+252);
    v1 = LD32(a0+204);
    v0 = v0 - 1;
    v0 = a2 < v0;
    a0 = v1 + 0;
    s1 = v0 < 0x1u;
    cnd_ = v1 != 0;
    a2 = a2 < 0x1u;
    if (cnd_) { goto L_08895178; }
    goto L_08895140;
L_08895140:;
    v0 = LD32(s0+208);
    goto L_08895144;
L_08895144:;
    a2 = s1 + 0;
    a1 = 256;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08895168; }
    goto L_08895154;
L_08895154:;
    goto L_08895158;
L_08895158:;
    sp = sp + 16;
    return;
L_08895168:;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895170;
L_08895170:;
    goto L_08895158;
L_08895178:;
    { u64 r_ = func_088874D8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895180;
L_08895180:;
    v0 = LD32(s0+208);
    goto L_08895144;
}

/* 08895188 */
float func_08895188(u32 a0)
{
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_08895188:;
    f1 = BITSF(LD32(a0+228));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a0+232)); goto L_088951B0; }
    goto L_088951A0;
L_088951A0:;
    f0 = BITSF(LD32(a0+176));
    f0 = f1 - f0;
    ST32(a0+228, FBITS(f0));
    f1 = BITSF(LD32(a0+232));
    goto L_088951B0;
L_088951B0:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088951CC; }
    goto L_088951C0;
L_088951C0:;
    f0 = BITSF(LD32(a0+176));
    f0 = f1 - f0;
    ST32(a0+232, FBITS(f0));
    goto L_088951CC;
L_088951CC:;
    return f0;
}

/* 088951D4 */
void func_088951D4(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088951D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_08895E44(a0);
    goto L_088951E8;
L_088951E8:;
    ST32(s0+228, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 088951FC */
void func_088951FC(u32 a0)
{
    u32 s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088951FC:;
    sp = sp - 16;
    s0 = a0 + 0;
    f0 = func_08895E44(a0);
    goto L_08895210;
L_08895210:;
    ST32(s0+232, FBITS(f0));
    sp = sp + 16;
    return;
}

/* 08895224 */
void func_08895224(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[128] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 128);
L_08895224:;
    sp = sp - 128;
    v0 = 1;
    v1 = LD_U8(a0+304);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08895280; }
    goto L_08895258;
L_08895258:;
    sp = sp + 128;
    return;
L_08895280:;
    s4 = 0 + 0;
    { u64 r_ = func_08895E4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895288;
L_08895288:;
    t0 = LD32(s0);
    ST32(sp+32, v0);
    a0 = s0 + 0;
    a1 = sp + 64;
    ST32(sp+48, v0);
    a2 = sp + 68;
    a3 = 0 + 0;
    v0 = LD32(t0+48);
    ST32(sp+36, v1);
    t_ = v0;
    ST32(sp+52, v1);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088952B4;
L_088952B4:;
    f2 = BITSF(LD32(s0+264));
    f4 = BITSF(LD32(sp+64));
    f5 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+36));
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    f0 = f4 + f0;
    f1 = f5 + f1;
    f3 = BITSF(LD32(s0+280));
    v0 = LD32(s0+240);
    ST32(sp+8, FBITS(f0));
    f20 = f2 * f3;
    ST32(sp+12, FBITS(f1));
    ST32(sp, FBITS(f4));
    cnd_ = v0 == 0;
    ST32(sp+4, FBITS(f5));
    if (cnd_) { goto L_08895398; }
    goto L_088952F4;
L_088952F4:;
    s5 = 1002;
    s3 = 0 + 0;
    goto L_088952FC;
L_088952FC:;
    a0 = LD32(s0+196);
    s1 = s4 << 4;
    a0 = a0 + s3;
    { u64 r_ = func_08880194(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889530C;
L_0889530C:;
    f1 = BITSF(LD32(sp+68));
    a1 = LD32(s0+200);
    f2 = BITSF(LD32(sp+64));
    f1 = f1 + f20;
    a1 = s1 + a1;
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+52, v1);
    ST32(sp+48, v0);
    ST32(a1, FBITS(f2));
    ST32(a1+4, FBITS(f1));
    f0 = BITSF(LD32(sp+16));
    a0 = LD32(s0+196);
    f2 = f2 + f0;
    a0 = a0 + s3;
    ST32(a1+8, FBITS(f2));
    f0 = BITSF(LD32(sp+20));
    f1 = f1 + f0;
    ST32(a1+12, FBITS(f1));
    v0 = func_08888FD8(a0);
    goto L_0889535C;
L_0889535C:;
    a1 = 32;
    cnd_ = v0 == s5;
    a2 = 0 + 0;
    if (cnd_) { goto L_088953A0; }
    goto L_08895368;
L_08895368:;
    a2 = LD32(s0+200);
    goto L_0889536C;
L_0889536C:;
    a2 = a2 + s1;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_088953F0(a1, a2);
    goto L_0889537C;
L_0889537C:;
    v0 = LD32(s0+240);
    f0 = BITSF(LD32(sp+20));
    s4 = s4 + 1;
    v0 = s4 < v0;
    s3 = s3 + 220;
    cnd_ = v0 != 0;
    f20 = f20 + f0;
    if (cnd_) { goto L_088952FC; }
    goto L_08895398;
L_08895398:;
    ST8(s0+304, 0);
    goto L_08895258;
L_088953A0:;
    v0 = LD32(s0+196);
    s2 = v0 + s3;
    a0 = s2 + 0;
    func_0888394C(a0, a1, a2);
    goto L_088953B0;
L_088953B0:;
    a2 = 0 + 0;
    a0 = s2 + 0;
    a1 = 64;
    func_0888394C(a0, a1, a2);
    goto L_088953C0;
L_088953C0:;
    a2 = LD32(s0+200);
    f1 = BITSF(LD32(sp+4));
    v0 = s1 + a2;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    f2 = f0 - f1;
    if (cnd_) { goto L_088953E8; }
    goto L_088953E0;
L_088953E0:;
    ST32(s2+196, FBITS(f2));
    goto L_0889536C;
L_088953E8:;
    ST32(s2+196, 0);
    goto L_0889536C;
}

/* 088953F0 */
void func_088953F0(u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
L_088953F0:;
    f2 = BITSF(LD32(a2+4));
    f0 = BITSF(LD32(a1+12));
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a2, 0); goto L_08895454; }
    goto L_08895408;
L_08895408:;
    f3 = BITSF(LD32(a2+12));
    f1 = BITSF(LD32(a1+4));
    fcc = FCMP(f3, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a2, 0); goto L_08895454; }
    goto L_08895420;
L_08895420:;
    f6 = BITSF(LD32(a2));
    f4 = BITSF(LD32(a1+8));
    fcc = FCMP(f4, f6, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a2, 0); goto L_08895454; }
    goto L_08895438;
L_08895438:;
    f5 = BITSF(LD32(a1));
    f7 = BITSF(LD32(a2+8));
    fcc = FCMP(f7, f5, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08895464; }
    goto L_08895450;
L_08895450:;
    ST32(a2, 0);
    goto L_08895454;
L_08895454:;
    ST32(a2+12, 0);
    ST32(a2+4, 0);
    ST32(a2+8, 0);
    return;
L_08895464:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a2+12, FBITS(f0)); goto L_08895474; }
    goto L_08895474;
L_08895474:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a2+4, FBITS(f1)); goto L_08895484; }
    goto L_08895484;
L_08895484:;
    fcc = FCMP(f4, f7, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a2+8, FBITS(f4)); goto L_08895494; }
    goto L_08895494;
L_08895494:;
    fcc = FCMP(f6, f5, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a2, FBITS(f5)); goto L_088954A4; }
    goto L_088954A4;
L_088954A4:;
    return;
}

/* 088954AC */
u32 func_088954AC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
L_088954AC:;
    a1 = a1 & 0xff;
    v0 = 1;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(a0+180); goto L_088954CC; }
    goto L_088954BC;
L_088954BC:;
    ST32(a0+184, 0);
    ST32(a0+180, 0);
    goto L_088954C4;
L_088954C4:;
    v0 = a1 + 0;
    return v0;
L_088954CC:;
    cnd_ = v1 == a1;
    v0 = 2;
    if (cnd_) { goto L_08895520; }
    goto L_088954D4;
L_088954D4:;
    cnd_ = v1 == v0;
    v0 = v1 + 1;
    if (cnd_) { goto L_088954EC; }
    goto L_088954DC;
L_088954DC:;
    f0 = BITSF(LD32(a0+188));
    ST32(a0+180, v0);
    goto L_088954E4;
L_088954E4:;
    ST32(a0+184, FBITS(f0));
    goto L_088954C4;
L_088954EC:;
    f0 = BITSF(LD32(a0+184));
    f1 = BITSF(LD32(a0+176));
    f2 = BITSF(0);
    f1 = f0 - f1;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+184, FBITS(f1));
    if (cnd_) { goto L_08895518; }
    goto L_0889550C;
L_0889550C:;
    f0 = BITSF(LD32(a0+192));
    goto L_08895510;
L_08895510:;
    f0 = f1 + f0;
    goto L_088954E4;
L_08895518:;
    a1 = 0 + 0;
    goto L_088954C4;
L_08895520:;
    f0 = BITSF(LD32(a0+184));
    f1 = BITSF(LD32(a0+176));
    f2 = BITSF(0);
    f1 = f0 - f1;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+184, FBITS(f1));
    if (cnd_) { goto L_08895518; }
    goto L_08895540;
L_08895540:;
    f0 = BITSF(LD32(a0+192));
    v0 = 2;
    ST32(a0+180, v0);
    goto L_08895510;
}

/* 08895550 */
rv_t func_08895550(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08895550:;
    sp = sp - 32;
    s2 = a0 + 0;
    s3 = a1 + 0;
    s1 = (s3 >> 16) & 0x1;
    v0 = func_08895E60(a0);
    goto L_08895584;
L_08895584:;
    a0 = s2 + 0;
    s6 = v0 + 0;
    s0 = (s3 >> 15) & 0x1;
    v0 = func_08895E68(a0);
    goto L_08895594;
L_08895594:;
    s5 = v0 + 0;
    cnd_ = s1 == 0;
    s4 = s0 << 15;
    if (cnd_) { goto L_088955A8; }
    goto L_088955A0;
L_088955A0:;
    v0 = 0x10000u;
    s4 = s4 | v0;
    goto L_088955A8;
L_088955A8:;
    a1 = s0 | s1;
    a0 = s2 + 0;
    v0 = func_088954AC(a0, a1);
    goto L_088955B4;
L_088955B4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088955C4; }
    goto L_088955BC;
L_088955BC:;
    s0 = 0 + 0;
    s1 = 0 + 0;
    goto L_088955C4;
L_088955C4:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_088956DC; }
    goto L_088955CC;
L_088955CC:;
    v0 = LD32(s2+252);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088956CC; }
    goto L_088955D8;
L_088955D8:;
    v0 = v0 - 1;
    ST32(s2+252, v0);
    a0 = 0 + 0;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088955E8;
L_088955E8:;
    a0 = s2 + 0;
    func_088951D4(a0);
    goto L_088955F0;
L_088955F0:;
    a0 = s2 + 0;
    a1 = 128;
    v0 = func_08887500(a0, a1);
    goto L_088955FC;
L_088955FC:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = LD32(s2+144); goto L_088956B0; }
    goto L_08895608;
L_08895608:;
    f2 = BITSF(LD32(s2+260));
    goto L_0889560C;
L_0889560C:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    v0 = D_08AEC2C8 - (-15672);
    if (cnd_) { goto L_088956A4; }
    goto L_08895620;
L_08895620:;
    f0 = BITSF(LD32(v0-15672));
    f0 = f2 + f0;
    goto L_08895628;
L_08895628:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s2+252);
    v1 = FBITS(f0);
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_0889567C; }
    goto L_08895640;
L_08895640:;
    v0 = D_08AEC2CC - (-15668);
    f1 = BITSF(LD32(v0-15668));
    f3 = BITSF(0);
    v0 = 1;
    f1 = f2 - f1;
    ST8(s2+304, v0);
    v0 = D_08AEC2D0 - (-15664);
    fcc = FCMP(f1, f3, 12);
    f0 = BITSF(LD32(v0-15664));
    ST32(s2+260, FBITS(f1));
    cnd_ = !fcc;
    ST32(s2+268, FBITS(f0));
    if (cnd_) { goto L_08895678; }
    goto L_08895670;
L_08895670:;
    ST32(s2+268, FBITS(f3));
    ST32(s2+260, FBITS(f3));
    goto L_08895678;
L_08895678:;
    v0 = s4 + 0;
    goto L_0889567C;
L_0889567C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088956A4:;
    f0 = BITSF(LD32(v0-15672));
    f0 = f2 - f0;
    goto L_08895628;
L_088956B0:;
    t0 = LD32(s2+252);
    a0 = (u32)-1;
    a2 = 1;
    a3 = 2005;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088956C4;
L_088956C4:;
    f2 = BITSF(LD32(s2+260));
    goto L_0889560C;
L_088956CC:;
    a0 = 4;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088956D4;
L_088956D4:;
    v0 = s4 + 0;
    goto L_0889567C;
L_088956DC:;
    cnd_ = s1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0889582C; }
    goto L_088956E4;
L_088956E4:;
    v0 = LD32(s2+240);
    v1 = LD32(s2+252);
    v0 = v0 - 1;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088956CC; }
    goto L_088956FC;
L_088956FC:;
    v0 = v1 + 1;
    ST32(s2+252, v0);
    a0 = 0 + 0;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889570C;
L_0889570C:;
    a0 = s2 + 0;
    func_088951FC(a0);
    goto L_08895714;
L_08895714:;
    a0 = s2 + 0;
    a1 = 128;
    v0 = func_08887500(a0, a1);
    goto L_08895720;
L_08895720:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { a1 = LD32(s2+144); goto L_08895810; }
    goto L_0889572C;
L_0889572C:;
    f1 = BITSF(LD32(s2+260));
    goto L_08895730;
L_08895730:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC2C8 - (-15672);
    if (cnd_) { goto L_08895804; }
    goto L_08895744;
L_08895744:;
    f0 = BITSF(LD32(v0-15672));
    f0 = f1 + f0;
    goto L_0889574C;
L_0889574C:;
    f0 = BITSF(F2I(f0, 1));
    s0 = FBITS(f0);
    a0 = s2 + 0;
    v0 = func_08895E68(a0);
    goto L_0889575C;
L_0889575C:;
    v1 = LD32(s2+252);
    v0 = s0 + v0;
    v1 = v1 < v0;
    cnd_ = v1 != 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_0889567C; }
    goto L_08895770;
L_08895770:;
    v0 = D_08AEC2CC - (-15668);
    f1 = BITSF(LD32(v0-15668));
    f0 = BITSF(LD32(s2+260));
    a0 = s6 - s5;
    f3 = BITSF(a0);
    f0 = f0 + f1;
    v0 = 1;
    ST8(s2+304, v0);
    f2 = (float)(s32)FBITS(f3);
    ST32(s2+260, FBITS(f0));
    cnd_ = (s32)a0 < 0;
    ST32(s2+268, FBITS(f1));
    if (cnd_) { goto L_088957E8; }
    goto L_088957A0;
L_088957A0:;
    f0 = BITSF(LD32(s2+260));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    v0 = s4 + 0;
    if (cnd_) { goto L_0889567C; }
    goto L_088957B4;
L_088957B4:;
    f1 = BITSF(a0);
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_088957CC; }
    goto L_088957C0;
L_088957C0:;
    ST32(s2+264, FBITS(f0));
    ST32(s2+268, 0);
    goto L_08895678;
L_088957CC:;
    v1 = a0 >> 1;
    v0 = a0 & 0x1;
    v0 = v0 | v1;
    f3 = BITSF(v0);
    f0 = (float)(s32)FBITS(f3);
    f0 = f0 + f0;
    goto L_088957C0;
L_088957E8:;
    v0 = a0 & 0x1;
    v1 = a0 >> 1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f2 = (float)(s32)FBITS(f0);
    f2 = f2 + f2;
    goto L_088957A0;
L_08895804:;
    f0 = BITSF(LD32(v0-15672));
    f0 = f1 - f0;
    goto L_0889574C;
L_08895810:;
    t0 = LD32(s2+252);
    a0 = (u32)-1;
    a2 = 1;
    a3 = 2005;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895824;
L_08895824:;
    f1 = BITSF(LD32(s2+260));
    goto L_08895730;
L_0889582C:;
    a1 = s3 + 0;
    { rv_t r_ = func_0888CA64(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895834;
L_08895834:;
    s4 = s4 | v0;
    goto L_08895678;
}

/* 0889583C */
rv_t func_0889583C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889583C:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_0888CF24(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895850;
L_08895850:;
    a0 = (u32)-1;
    a1 = LD32(s0+144);
    a2 = 2;
    a3 = 2005;
    t0 = 0 + 0;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895868;
L_08895868:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889587C */
rv_t func_0889587C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889587C:;
    sp = sp - 16;
    a1 = 64;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_08895894;
L_08895894:;
    v1 = 1;
    a0 = (u32)-1;
    a2 = 1;
    cnd_ = v0 == v1;
    a3 = 2005;
    if (cnd_) { goto L_088958BC; }
    goto L_088958A8;
L_088958A8:;
    goto L_088958AC;
L_088958AC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088958BC:;
    a1 = LD32(s0+144);
    t0 = LD32(s0+252);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088958C8;
L_088958C8:;
    goto L_088958AC;
}

/* 088958D0 */
rv_t func_088958D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088958D0:;
    sp = sp - 16;
    a3 = LD32(a0+144);
    v0 = LD32(a1+12);
    cnd_ = v0 == a3;
    a2 = a0 + 0;
    if (cnd_) { goto L_088958F8; }
    goto L_088958E8;
L_088958E8:;
    v1 = LD32(a1+4);
    v0 = 2005;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD_U16(a1+2); goto L_08895908; }
    goto L_088958F8;
L_088958F8:;
    goto L_088958FC;
L_088958FC:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08895908:;
    v0 = v1 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088958FC; }
    goto L_08895914;
L_08895914:;
    v0 = v1 << 2;
    v1 = D_08AD5158 - (20824);
    v1 = v1 + 20824;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088958F8u: goto L_088958F8; case 0x08895930u: goto L_08895930; case 0x08895940u: goto L_08895940; case 0x08895960u: goto L_08895960; case 0x08895990u: goto L_08895990; default: rs_break(0, 0x08895928); }
L_08895930:;
    a0 = a2 + 0;
    func_0889608C(a0);
    goto L_08895938;
L_08895938:;
    goto L_088958FC;
L_08895940:;
    t0 = LD32(a2+252);
    a1 = a3 + 0;
    a0 = (u32)-1;
    a2 = 1;
    a3 = 2005;
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895958;
L_08895958:;
    goto L_088958FC;
L_08895960:;
    a1 = LD32(a1+16);
    v0 = LD32(a2+240);
    v0 = a1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088958FC; }
    goto L_08895974;
L_08895974:;
    v1 = LD32(a2);
    ST32(a2+252, a1);
    v0 = LD32(v1+188);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895988;
L_08895988:;
    goto L_088958FC;
L_08895990:;
    a1 = LD32(a1+16);
    a0 = a2 + 0;
    { u64 r_ = func_0889609C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889599C;
L_0889599C:;
    goto L_088958FC;
}

/* 088959A4 */
rv_t func_088959A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088959A4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_08895E68(a0);
    goto L_088959B8;
L_088959B8:;
    a1 = v0 + 0;
    a0 = LD32(s0+252);
    v0 = 1;
    ST8(s0+304, v0);
    f1 = BITSF(a0);
    v1 = a0 & 0x1;
    v0 = a0 >> 1;
    v1 = v1 | v0;
    a2 = a0 < a1;
    cnd_ = (s32)a0 < 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08895A44; }
    goto L_088959E4;
L_088959E4:;
    v0 = LD32(s0+240);
    ST32(s0+260, FBITS(f0));
    v1 = v0 - a1;
    f1 = BITSF(v1);
    v0 = v1 < a0;
    cnd_ = v0 == 0;
    f0 = (float)(s32)FBITS(f1);
    if (cnd_) { goto L_08895A14; }
    goto L_08895A00;
L_08895A00:;
    v0 = v1 >> 1;
    a0 = v1 & 0x1;
    cnd_ = (s32)v1 < 0;
    a0 = a0 | v0;
    if (cnd_) { goto L_08895A34; }
    goto L_08895A10;
L_08895A10:;
    ST32(s0+260, FBITS(f0));
    goto L_08895A14;
L_08895A14:;
    cnd_ = a2 != 0;
    if (cnd_) { ST32(s0+260, 0); goto L_08895A1C; }
    goto L_08895A1C;
L_08895A1C:;
    f0 = BITSF(LD32(s0+260));
    ST32(s0+264, FBITS(f0));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08895A34:;
    f1 = BITSF(a0);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_08895A10;
L_08895A44:;
    f1 = BITSF(v1);
    f0 = (float)(s32)FBITS(f1);
    f0 = f0 + f0;
    goto L_088959E4;
}

/* 08895A54 */
rv_t func_08895A54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895A54:;
    sp = sp - 16;
    t0 = a0 + 0;
    a2 = 1;
    v0 = LD32(a0+144);
    v1 = LD32(a1+12);
    a0 = (u32)-1;
    a1 = v0 + 0;
    cnd_ = v1 == v0;
    a3 = 2005;
    if (cnd_) { goto L_08895A84; }
    goto L_08895A7C;
L_08895A7C:;
    t0 = LD32(t0+252);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895A84;
L_08895A84:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08895A94 */
rv_t func_08895A94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895A94:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 128;
    s0 = a0 + 0;
    v0 = func_08887500(a0, a1);
    goto L_08895AB4;
L_08895AB4:;
    v1 = 1;
    cnd_ = v0 == v1;
    if (cnd_) { v1 = LD32(s1+16); goto L_08895AEC; }
    goto L_08895AC0;
L_08895AC0:;
    a1 = LD32(s1+16);
    goto L_08895AC4;
L_08895AC4:;
    a2 = LD32(s0+252);
    a0 = s0 + 312;
    a3 = 1;
    { rv_t r_ = func_0887EEE4(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895AD4;
L_08895AD4:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08895AEC:;
    v0 = 16;
    a0 = (u32)-1;
    a2 = 1;
    cnd_ = v1 != v0;
    a3 = 2005;
    if (cnd_) { goto L_08895AC0; }
    goto L_08895B00;
L_08895B00:;
    a1 = LD32(s0+144);
    t0 = LD32(s0+252);
    { u64 r_ = func_08885E0C(a0, a1, a2, a3, t0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895B0C;
L_08895B0C:;
    a0 = 0 + 0;
    { rv_t r_ = func_0887DD98(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895B14;
L_08895B14:;
    a1 = LD32(s1+16);
    goto L_08895AC4;
}

/* 08895B1C */
rv_t func_08895B1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08895B1C:;
    v1 = D_08AEC2D4 - (-15660);
    f0 = BITSF(LD32(v1-15660));
    v0 = 8;
    ST32(a0+156, v0);
    v0 = 1;
    ST32(a0+308, FBITS(f0));
    ST8(a0+305, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08895B3C */
rv_t func_08895B3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08895B3C:;
    v1 = D_08AEC2D8 - (-15656);
    f0 = BITSF(LD32(v1-15656));
    v0 = 16;
    ST32(a0+156, v0);
    v0 = 1;
    ST32(a0+308, FBITS(f0));
    ST8(a0+305, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08895B5C */
rv_t func_08895B5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_08895B5C:;
    v0 = LD32(a1+16);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_08895B78; }
    goto L_08895B68;
L_08895B68:;
    v1 = LD_U8(a0+155);
    a1 = 32;
    v0 = 2;
    if (v1 == 0) a1 = v0;
    goto L_08895B78;
L_08895B78:;
    v0 = 1;
    ST32(a0+156, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 08895B84 */
rv_t func_08895B84(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895B84:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_08895E60(a0);
    goto L_08895BA0;
L_08895BA0:;
    a2 = v0 + 0;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08896150(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895BB0;
L_08895BB0:;
    v0 = 1;
    ST32(s0+272, s1);
    ST8(s0+304, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08895BD0 */
rv_t func_08895BD0(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895BD0:;
    sp = sp - 16;
    a2 = LD32(a0);
    ST32(a0+256, a1);
    ST32(a0+252, a1);
    v1 = LD32(a2+188);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895BF0;
L_08895BF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08895BFC */
void func_08895BFC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08895BFC:;
    sp = sp - 32;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { u64 r_ = func_08895E4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895C18;
L_08895C18:;
    f1 = BITSF(s0);
    ST32(sp+4, v1);
    a0 = s0 >> 1;
    a1 = s0 & 0x1;
    f0 = (float)(s32)FBITS(f1);
    a1 = a1 | a0;
    f1 = BITSF(LD32(sp+4));
    ST32(sp, v0);
    cnd_ = (s32)s0 < 0;
    ST32(s1+276, s0);
    if (cnd_) { goto L_08895C5C; }
    goto L_08895C40;
L_08895C40:;
    f0 = f1 / f0;
    ST32(s1+280, FBITS(f0));
    sp = sp + 32;
    return;
L_08895C5C:;
    f2 = BITSF(a1);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_08895C40;
}

/* 08895C6C */
void func_08895C6C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895C6C:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = LD32(a0+284);
    cnd_ = v0 == 0;
    s0 = a0 + 284;
    if (cnd_) { goto L_08895CA8; }
    goto L_08895C94;
L_08895C94:;
    cnd_ = a1 == v0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08895CEC; }
    goto L_08895C9C;
L_08895C9C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895CA4;
L_08895CA4:;
    ST32(s2+284, 0);
    goto L_08895CA8;
L_08895CA8:;
    a0 = s1 + 0;
    ST32(s0+8, 0);
    cnd_ = s1 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_08895D14; }
    goto L_08895CB8;
L_08895CB8:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895CC0;
L_08895CC0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895CD4;
L_08895CD4:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s2+284, v0);
    if (cnd_) { goto L_08895D04; }
    goto L_08895CE4;
L_08895CE4:;
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    goto L_08895CEC;
L_08895CEC:;
    goto L_08895CF0;
L_08895CF0:;
    sp = sp + 16;
    return;
L_08895D04:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895D0C;
L_08895D0C:;
    goto L_08895CF0;
L_08895D14:;
    ST32(s2+284, 0);
    goto L_08895CEC;
}

/* 08895D1C */
void func_08895D1C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895D1C:;
    sp = sp - 16;
    s0 = a0 + 0;
    s1 = LD32(a1+284);
    cnd_ = s1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08895D98; }
    goto L_08895D3C;
L_08895D3C:;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895D44;
L_08895D44:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895D58;
L_08895D58:;
    a0 = v0 + 0;
    a1 = s1 + 0;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08895D88; }
    goto L_08895D68;
L_08895D68:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    v0 = s0 + 0;
    goto L_08895D74;
L_08895D74:;
    sp = sp + 16;
    return;
L_08895D88:;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08895D90;
L_08895D90:;
    v0 = s0 + 0;
    goto L_08895D74;
L_08895D98:;
    ST32(s0, 0);
    goto L_08895D68;
}

/* 08895DA0 */
void func_08895DA0(u32 a0, u32 a1)
{
L_08895DA0:;
    ST32(a0+204, a1);
    return;
}

/* 08895DA8 */
void func_08895DA8(u32 a0, u32 a1)
{
L_08895DA8:;
    ST32(a0+208, a1);
    return;
}

/* 08895DB0 */
void func_08895DB0(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
L_08895DB0:;
    v0 = a1 + 212;
    f3 = BITSF(LD32(v0+12));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(a1+212));
    v0 = a0 + 0;
    ST32(a0+4, FBITS(f1));
    ST32(a0, FBITS(f0));
    ST32(a0+8, FBITS(f2));
    ST32(a0+12, FBITS(f3));
    return;
}

/* 08895DDC */
void func_08895DDC(u32 a0, u32 a1)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
L_08895DDC:;
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
    v0 = D_08AEC2DC - (-15652);
    f2 = (float)(s32)FBITS(f3);
    f1 = (float)(s32)FBITS(f6);
    f0 = BITSF(LD32(v0-15652));
    v0 = a0 + 212;
    f1 = f1 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f2 = f2 * f0;
    ST32(a0+212, FBITS(f1));
    ST32(v0+4, FBITS(f2));
    ST32(v0+12, FBITS(f4));
    ST32(v0+8, FBITS(f5));
    return;
}

/* 08895E3C */
void func_08895E3C(u32 a0, float f12)
{
L_08895E3C:;
    ST32(a0+236, FBITS(f12));
    return;
}

/* 08895E44 */
float func_08895E44(u32 a0)
{
    float f0 = 0;
L_08895E44:;
    f0 = BITSF(LD32(a0+236));
    return f0;
}

/* 08895E4C */
u64 func_08895E4C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895E4C:;
    v0 = LD32(a0+244);
    v1 = LD32(a0+248);
    sp = sp - 16;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08895E60 */
u32 func_08895E60(u32 a0)
{
    u32 v0 = 0;
L_08895E60:;
    v0 = LD32(a0+272);
    return v0;
}

/* 08895E68 */
u32 func_08895E68(u32 a0)
{
    u32 v0 = 0;
L_08895E68:;
    v0 = LD32(a0+276);
    return v0;
}

/* 08895E70 */
void func_08895E70(u32 a0, float f12, float f13)
{
L_08895E70:;
    ST32(a0+248, FBITS(f13));
    ST32(a0+244, FBITS(f12));
    return;
}

/* 08895E7C */
void func_08895E7C(u32 a0, u32 a1)
{
    float f12 = 0, f13 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08895E7C:;
    f13 = BITSF(LD32(a1+4));
    f12 = BITSF(LD32(a1));
    sp = sp - 16;
    func_08895E70(a0, f12, f13);
    goto L_08895E94;
L_08895E94:;
    sp = sp + 16;
    return;
}

/* 08895EA0 */
rv_t func_08895EA0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08895EA0:;
    sp = sp - 304;
    s2 = a3 + 0;
    a3 = (u32)-1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_0888CFE8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895EC8;
L_08895EC8:;
    a2 = s1 + 0;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08888AB4(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895ED8;
L_08895ED8:;
    a0 = s0 + 0;
    a1 = sp + 256;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895EE4;
L_08895EE4:;
    a0 = s0 + 0;
    a1 = sp + 260;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895EF0;
L_08895EF0:;
    a0 = s0 + 0;
    a1 = sp + 264;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895EFC;
L_08895EFC:;
    a0 = s0 + 0;
    a1 = sp + 268;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895F08;
L_08895F08:;
    a0 = s0 + 0;
    a1 = sp + 0;
    a2 = 256;
    f0 = func_0882DD88(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08895F18;
L_08895F18:;
    a0 = s1 + 0;
    a1 = sp + 0;
    func_08895C6C(a0, a1, 0, 0, 0);
    goto L_08895F24;
L_08895F24:;
    cnd_ = s2 != 0;
    if (cnd_) { a1 = s1 + 300; goto L_0889607C; }
    goto L_08895F2C;
L_08895F2C:;
    v0 = s2 < 0x2u;
    goto L_08895F30;
L_08895F30:;
    cnd_ = v0 == 0;
    a0 = s1 + 312;
    if (cnd_) { goto L_0889606C; }
    goto L_08895F38;
L_08895F38:;
    v0 = s2 < 0x3u;
    goto L_08895F3C;
L_08895F3C:;
    cnd_ = v0 == 0;
    a0 = s1 + 320;
    if (cnd_) { goto L_0889605C; }
    goto L_08895F44;
L_08895F44:;
    v0 = s2 < 0x4u;
    goto L_08895F48;
L_08895F48:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = sp + 272; goto L_08895FD4; }
    goto L_08895F50;
L_08895F50:;
    v0 = s2 < 0x5u;
    goto L_08895F54;
L_08895F54:;
    cnd_ = v0 == 0;
    a1 = s1 + 188;
    if (cnd_) { goto L_08895FB8; }
    goto L_08895F5C;
L_08895F5C:;
    v0 = s2 < 0x6u;
    goto L_08895F60;
L_08895F60:;
    cnd_ = v0 == 0;
    a1 = s1 + 296;
    if (cnd_) { goto L_08895FA8; }
    goto L_08895F68;
L_08895F68:;
    f12 = BITSF(LD32(sp+256));
    goto L_08895F6C;
L_08895F6C:;
    f13 = BITSF(LD32(sp+260));
    a0 = s1 + 0;
    func_08895E70(a0, f12, f13);
    goto L_08895F78;
L_08895F78:;
    a1 = LD32(sp+268);
    a0 = s1 + 0;
    func_08895BFC(a0, a1);
    goto L_08895F84;
L_08895F84:;
    a1 = LD32(sp+264);
    a0 = s1 + 0;
    { rv_t r_ = func_08895B84(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895F90;
L_08895F90:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
L_08895FA8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895FB0;
L_08895FB0:;
    f12 = BITSF(LD32(sp+256));
    goto L_08895F6C;
L_08895FB8:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895FC0;
L_08895FC0:;
    a1 = s1 + 192;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895FCC;
L_08895FCC:;
    v0 = s2 < 0x6u;
    goto L_08895F60;
L_08895FD4:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895FDC;
L_08895FDC:;
    a0 = s0 + 0;
    a1 = sp + 276;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895FE8;
L_08895FE8:;
    a1 = LD32(sp+272);
    a0 = s1 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08895FF4;
L_08895FF4:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08895DA0(a0, a1);
    goto L_08896000;
L_08896000:;
    a1 = LD32(sp+276);
    a0 = s1 + 0;
    { rv_t r_ = func_0888818C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889600C;
L_0889600C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    func_08895DA8(a0, a1);
    goto L_08896018;
L_08896018:;
    a1 = s1 + 212;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896024;
L_08896024:;
    a1 = s1 + 216;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896030;
L_08896030:;
    a1 = s1 + 220;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889603C;
L_0889603C:;
    a1 = s1 + 224;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896048;
L_08896048:;
    a1 = s1 + 236;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896054;
L_08896054:;
    v0 = s2 < 0x5u;
    goto L_08895F54;
L_0889605C:;
    a1 = s0 + 0;
    { rv_t r_ = func_0887DF60(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896064;
L_08896064:;
    v0 = s2 < 0x4u;
    goto L_08895F48;
L_0889606C:;
    a1 = s0 + 0;
    { rv_t r_ = func_0887F000(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896074;
L_08896074:;
    v0 = s2 < 0x3u;
    goto L_08895F3C;
L_0889607C:;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896084;
L_08896084:;
    v0 = s2 < 0x2u;
    goto L_08895F30;
}

/* 0889608C */
void func_0889608C(u32 a0)
{
    u32 v0 = 0;
L_0889608C:;
    v0 = (u32)-1;
    ST32(a0+252, v0);
    ST32(a0+240, 0);
    return;
}

/* 0889609C */
u64 func_0889609C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889609C:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v0 = func_08895E60(a0);
    goto L_088960B8;
L_088960B8:;
    v1 = LD32(s1+240);
    a1 = s0 + 0;
    v0 = v1 < v0;
    cnd_ = v0 != 0;
    a2 = v1 + 1;
    if (cnd_) { goto L_088960E0; }
    goto L_088960CC;
L_088960CC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088960E0:;
    v0 = 220;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    a0 = LD32(s1+196);
    ST32(s1+240, a2);
    v0 = lo;
    a0 = a0 + v0;
    { u64 r_ = func_088837A0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088960FC;
L_088960FC:;
    v1 = LD32(s1+252);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { ST32(s1+252, 0); goto L_0889610C; }
    goto L_0889610C;
L_0889610C:;
    v0 = 1;
    ST8(s1+304, v0);
    goto L_088960CC;
}

/* 08896118 */
rv_t func_08896118(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896118:;
    v0 = D_08B29CA0 - (-25440);
    a1 = a0 + 0;
    a0 = LD32(v0-25440);
    sp = sp - 16;
    { u64 r_ = func_0889609C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08896134;
L_08896134:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08896140 */
u32 func_08896140(u32 a0)
{
    u32 v0 = 0;
L_08896140:;
    v0 = LD32(a0+300);
    return v0;
}

/* 08896148 */
rv_t func_08896148(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08896148:;
    return (rv_t){ v0, v1, f0 };
}

/* 08896150 */
rv_t func_08896150(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08896150:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 << 4;
    s3 = a1 + 0;
    v0 = func_0888A3B0(a0, t1, t2, t3);
    goto L_08896184;
L_08896184:;
    a0 = s0 + 0;
    s5 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896190;
L_08896190:;
    s4 = v0 + 0;
    cnd_ = s3 == 0;
    v0 = s3 - 1;
    if (cnd_) { goto L_088961AC; }
    goto L_0889619C;
L_0889619C:;
    v1 = (u32)-1;
    v0 = v0 - 1;
    goto L_088961A4;
L_088961A4:;
    cnd_ = v0 != v1;
    v0 = v0 - 1;
    if (cnd_) { goto L_088961A4; }
    goto L_088961AC;
L_088961AC:;
    a2 = s0 + 0;
    a1 = 0 + 0;
    a0 = s4 + 0;
    { u64 r_ = func_088F870C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088961BC;
L_088961BC:;
    a0 = s1 + 0;
    func_0889626C(a0);
    goto L_088961C4;
L_088961C4:;
    a0 = s1 + 0;
    { u64 r_ = func_08895E4C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088961CC;
L_088961CC:;
    ST32(sp+16, v0);
    s2 = 0 + 0;
    f1 = BITSF(LD32(s1+280));
    f0 = BITSF(LD32(sp+16));
    ST32(sp+20, v1);
    ST32(sp, FBITS(f0));
    cnd_ = s3 == 0;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_08896240; }
    goto L_088961EC;
L_088961EC:;
    s0 = s5 + 0;
    goto L_088961F0;
L_088961F0:;
    a1 = LD32(s1+284);
    a0 = s0 + 0;
    s2 = s2 + 1;
    func_08883874(a0, a1, 0, 0, 0);
    goto L_08896200;
L_08896200:;
    a0 = s1 + 0;
    v0 = func_08896140(a0);
    goto L_08896208;
L_08896208:;
    ST32(s0+204, v0);
    a0 = s1 + 0;
    v0 = func_08887404(a0);
    goto L_08896214;
L_08896214:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    func_08887420(a0, a1);
    goto L_08896220;
L_08896220:;
    a0 = s0 + 0;
    a1 = sp + 0;
    func_088801B4(a0, a1);
    goto L_0889622C;
L_0889622C:;
    f0 = BITSF(LD32(s1+296));
    v0 = s2 < s3;
    ST32(s0+208, FBITS(f0));
    cnd_ = v0 != 0;
    s0 = s0 + 220;
    if (cnd_) { goto L_088961F0; }
    goto L_08896240;
L_08896240:;
    ST32(s1+200, s4);
    ST32(s1+196, s5);
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 0889626C */
void func_0889626C(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889626C:;
    sp = sp - 16;
    v0 = LD32(a0+196);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_08896294; }
    goto L_08896288;
L_08896288:;
    v0 = LD32(a0+200);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088962A8; }
    goto L_08896294;
L_08896294:;
    sp = sp + 16;
    return;
L_088962A8:;
    func_0889608C(a0);
    goto L_088962B0;
L_088962B0:;
    a0 = LD32(s1+196);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+200); goto L_088962FC; }
    goto L_088962BC;
L_088962BC:;
    v0 = LD32(a0-4);
    v1 = 220;
    { s64 p_ = (s64)(s32)v0 * (s32)v1; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v0 = lo;
    s0 = a0 + v0;
    goto L_088962D0;
L_088962D0:;
    cnd_ = a0 == s0;
    s0 = s0 - 220;
    if (cnd_) { goto L_088962F0; }
    goto L_088962D8;
L_088962D8:;
    v1 = LD32(s0);
    v0 = LD32(v1);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088962E8;
L_088962E8:;
    a0 = LD32(s1+196);
    goto L_088962D0;
L_088962F0:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088962F8;
L_088962F8:;
    a0 = LD32(s1+200);
    goto L_088962FC;
L_088962FC:;
    cnd_ = a0 != 0;
    ST32(s1+196, 0);
    if (cnd_) { goto L_0889630C; }
    goto L_08896304;
L_08896304:;
    ST32(s1+200, 0);
    goto L_08896294;
L_0889630C:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08896314;
L_08896314:;
    ST32(s1+200, 0);
    goto L_08896294;
}

/* 0889631C */
void func_0889631C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0889631C:;
    a0 = LD32(a0+4);
    a1 = a1 << 2;
    v0 = a1 + a0;
    v0 = LD32(v0);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = a1 + a0; goto L_08896354; }
    goto L_08896334;
L_08896334:;
    v1 = v0 + 0;
    goto L_08896338;
L_08896338:;
    v0 = LD32(v0+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = v0 + 0; goto L_08896338; }
    goto L_08896344;
L_08896344:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = a1 + a0; goto L_08896354; }
    goto L_0889634C;
L_0889634C:;
    ST32(v1+8, a2);
    return;
L_08896354:;
    ST32(v0, a2);
    return;
}

/* 0889635C */
void func_0889635C(u32 a0)
{
L_0889635C:;
    ST32(a0+12, 0);
    ST32(a0, 0);
    ST32(a0+4, 0);
    ST32(a0+8, 0);
    return;
}

/* 08896370 */
rv_t func_08896370(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896370:;
    sp = sp - 16;
    { rv_t r_ = func_08896444(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896380;
L_08896380:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889638C */
void func_0889638C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889638C:;
    sp = sp - 16;
    s2 = a1 + 0;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088963C8; }
    goto L_088963B0;
L_088963B0:;
    goto L_088963B4;
L_088963B4:;
    sp = sp + 16;
    return;
L_088963C8:;
    ST32(s1, a1);
    s0 = a1 << 2;
    a0 = s0 + 0;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088963D8;
L_088963D8:;
    ST32(s1+4, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088963E4;
L_088963E4:;
    ST32(s1+8, v0);
    a0 = s0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088963F0;
L_088963F0:;
    v1 = v0 + 0;
    ST32(s1+12, v0);
    cnd_ = s2 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088963B0; }
    goto L_08896400;
L_08896400:;
    v0 = D_08AEC2E0 - (-15648);
    t1 = LD32(s1+8);
    f0 = BITSF(LD32(v0-15648));
    t0 = LD32(s1+4);
    a3 = v1 + 0;
    goto L_08896414;
L_08896414:;
    v0 = a2 << 2;
    a2 = a2 + 1;
    a1 = v0 + a3;
    v1 = v0 + t0;
    a0 = a2 < s2;
    v0 = v0 + t1;
    ST32(v0, FBITS(f0));
    ST32(v1, 0);
    cnd_ = a0 != 0;
    ST32(a1, 0);
    if (cnd_) { goto L_08896414; }
    goto L_0889643C;
L_0889643C:;
    goto L_088963B4;
}

/* 08896444 */
rv_t func_08896444(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896444:;
    sp = sp - 16;
    a1 = LD32(a0+4);
    cnd_ = a1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08896498; }
    goto L_08896460;
L_08896460:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_08896490; }
    goto L_0889646C;
L_0889646C:;
    v0 = s1 << 2;
    goto L_08896470;
L_08896470:;
    v0 = v0 + a1;
    v0 = LD32(v0);
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08896504; }
    goto L_08896484;
L_08896484:;
    v0 = s1 < v1;
    cnd_ = v0 != 0;
    v0 = s1 << 2;
    if (cnd_) { goto L_08896470; }
    goto L_08896490;
L_08896490:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_088964F4; }
    goto L_08896498;
L_08896498:;
    a0 = LD32(s0+8);
    goto L_0889649C;
L_0889649C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088964E4; }
    goto L_088964A4;
L_088964A4:;
    a0 = LD32(s0+12);
    goto L_088964A8;
L_088964A8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088964D4; }
    goto L_088964B0;
L_088964B0:;
    ST32(s0+12, 0);
    goto L_088964B4;
L_088964B4:;
    ST32(s0, 0);
    ST32(s0+4, 0);
    ST32(s0+8, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088964D4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088964DC;
L_088964DC:;
    ST32(s0+12, 0);
    goto L_088964B4;
L_088964E4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088964EC;
L_088964EC:;
    a0 = LD32(s0+12);
    goto L_088964A8;
L_088964F4:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088964FC;
L_088964FC:;
    a0 = LD32(s0+8);
    goto L_0889649C;
L_08896504:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896514;
L_08896514:;
    a1 = LD32(s0+4);
    v1 = LD32(s0);
    goto L_08896484;
}

/* 08896520 */
void func_08896520(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0, f21 = 0, f22 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08896520:;
    sp = sp - 48;
    s4 = a0 + 0;
    a0 = 32;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    f22 = f14;
    f21 = f13;
    f20 = f12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889656C;
L_0889656C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    f13 = f21;
    f14 = f22;
    a1 = s1 + 0;
    a2 = s3 + 0;
    func_088969FC(a0, a1, a2, f12, f13, f14);
    goto L_0889658C;
L_0889658C:;
    a0 = s4 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    func_0889631C(a0, a1, a2);
    goto L_0889659C;
L_0889659C:;
    sp = sp + 48;
    return;
}

/* 088965C8 */
void func_088965C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3, float f12)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088965C8:;
    sp = sp - 48;
    s4 = a0 + 0;
    a0 = 28;
    s3 = a1 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    f20 = f12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896604;
L_08896604:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    a1 = s1 + 0;
    a2 = s2 + 0;
    func_0889705C(a0, a1, a2, f12);
    goto L_0889661C;
L_0889661C:;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a2 = s0 + 0;
    func_0889631C(a0, a1, a2);
    goto L_0889662C;
L_0889662C:;
    sp = sp + 48;
    return;
}

/* 08896650 */
void func_08896650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08896650:;
    sp = sp - 48;
    s5 = a0 + 0;
    a0 = 36;
    s4 = t0 + 0;
    s3 = a1 + 0;
    s2 = a3 + 0;
    s1 = a2 + 0;
    f21 = f13;
    f20 = f12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889669C;
L_0889669C:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    f13 = f21;
    a3 = s4 + 0;
    a1 = s1 + 0;
    a2 = s2 + 0;
    func_08896E50(a0, a1, a2, a3, f12, f13);
    goto L_088966BC;
L_088966BC:;
    a0 = s5 + 0;
    a1 = s3 + 0;
    a2 = s0 + 0;
    func_0889631C(a0, a1, a2);
    goto L_088966CC;
L_088966CC:;
    sp = sp + 48;
    return;
}

/* 088966F8 */
void func_088966F8(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f20 = 0, f21 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088966F8:;
    sp = sp - 48;
    s3 = a0 + 0;
    a0 = 44;
    s2 = a1 + 0;
    s1 = a2 + 0;
    f21 = f13;
    f20 = f12;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896734;
L_08896734:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    f12 = f20;
    f13 = f21;
    a1 = s1 + 0;
    func_0889741C(a0, a1, f12, f13);
    goto L_0889674C;
L_0889674C:;
    a0 = s3 + 0;
    a1 = s2 + 0;
    a2 = s0 + 0;
    func_0889631C(a0, a1, a2);
    goto L_0889675C;
L_0889675C:;
    sp = sp + 48;
    return;
}

/* 08896780 */
void func_08896780(u32 a0, u32 a1, u32 a2)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896780:;
    sp = sp - 16;
    func_0889631C(a0, a1, a2);
    goto L_08896790;
L_08896790:;
    sp = sp + 16;
    return;
}

/* 0889679C */
rv_t func_0889679C(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0, f21 = 0, f22 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0889679C:;
    sp = sp - 48;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_0889687C; }
    goto L_088967CC;
L_088967CC:;
    a1 = LD32(a0);
    cnd_ = a1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0889687C; }
    goto L_088967D8;
L_088967D8:;
    s1 = s3 << 2;
    v0 = s1 + v0;
    f20 = BITSF(0);
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    f21 = f20;
    if (cnd_) { goto L_08896844; }
    goto L_088967F0;
L_088967F0:;
    f22 = f20;
    v1 = LD32(s0);
    goto L_088967F8;
L_088967F8:;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896804;
L_08896804:;
    f1 = BITSF(LD32(s0+4));
    f3 = f20;
    f0 = f0 * f1;
    fcc = FCMP(f22, f0, 14);
    cnd_ = !fcc;
    f2 = f21;
    if (cnd_) { goto L_088968A4; }
    goto L_08896820;
L_08896820:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = f0; goto L_08896830; }
    goto L_08896830;
L_08896830:;
    f20 = f3;
    goto L_08896834;
L_08896834:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_088967F8; }
    goto L_08896840;
L_08896840:;
    a1 = LD32(s2);
    goto L_08896844;
L_08896844:;
    f1 = f21 + f20;
    v1 = LD32(s2+12);
    v0 = LD32(s2+8);
    s3 = s3 + 1;
    v1 = s1 + v1;
    ST32(v1, FBITS(f1));
    v0 = s1 + v0;
    a0 = s3 < a1;
    f0 = BITSF(LD32(v0));
    f1 = f1 * f0;
    cnd_ = a0 == 0;
    ST32(v1, FBITS(f1));
    if (cnd_) { goto L_0889687C; }
    goto L_08896874;
L_08896874:;
    v0 = LD32(s2+4);
    goto L_088967D8;
L_0889687C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_088968A4:;
    fcc = FCMP(f21, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f2 = f0; goto L_088968B4; }
    goto L_088968B4;
L_088968B4:;
    f21 = f2;
    goto L_08896834;
}

/* 088968BC */
rv_t func_088968BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088968BC:;
    v0 = LD32(a0);
    v1 = a1 << 2;
    f0 = BITSF(0);
    a1 = a1 < v0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_088968E0; }
    goto L_088968D4;
L_088968D4:;
    v0 = LD32(a0+12);
    v0 = v1 + v0;
    f0 = BITSF(LD32(v0));
    goto L_088968E0;
L_088968E0:;
    return (rv_t){ v0, v1, f0 };
}

/* 088968E8 */
rv_t func_088968E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088968E8:;
    sp = sp - 32;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0889696C; }
    goto L_0889690C;
L_0889690C:;
    a0 = LD32(a0);
    cnd_ = a0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0889696C; }
    goto L_08896918;
L_08896918:;
    s2 = s3 << 2;
    v0 = s2 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1+12); goto L_08896950; }
    goto L_0889692C;
L_0889692C:;
    v1 = LD32(s0);
    goto L_08896930;
L_08896930:;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889693C;
L_0889693C:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_08896930; }
    goto L_08896948;
L_08896948:;
    a0 = LD32(s1);
    v0 = LD32(s1+12);
    goto L_08896950;
L_08896950:;
    s3 = s3 + 1;
    v1 = s3 < a0;
    v0 = s2 + v0;
    cnd_ = v1 == 0;
    ST32(v0, 0);
    if (cnd_) { goto L_0889696C; }
    goto L_08896964;
L_08896964:;
    v0 = LD32(s1+4);
    goto L_08896918;
L_0889696C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08896988 */
void func_08896988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896988:;
    sp = sp - 16;
    v1 = LD32(a0+4);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088969E4; }
    goto L_088969A8;
L_088969A8:;
    s2 = a1 << 2;
    v0 = s2 + v1;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1+12); goto L_088969DC; }
    goto L_088969BC;
L_088969BC:;
    v1 = LD32(s0);
    goto L_088969C0;
L_088969C0:;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088969CC;
L_088969CC:;
    s0 = LD32(s0+8);
    cnd_ = s0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_088969C0; }
    goto L_088969D8;
L_088969D8:;
    v0 = LD32(s1+12);
    goto L_088969DC;
L_088969DC:;
    v0 = s2 + v0;
    ST32(v0, 0);
    goto L_088969E4;
L_088969E4:;
    sp = sp + 16;
    return;
}

/* 088969FC */
void func_088969FC(u32 a0, u32 a1, u32 a2, float f12, float f13, float f14)
{
    u32 v0 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
L_088969FC:;
    ST32(a0+16, 0);
    v0 = D_08AF7978 - (31096);
    v0 = v0 + 31096;
    f0 = BITSF(LD32(a0+16));
    ST32(a0+4, FBITS(f12));
    fcc = FCMP(f14, f0, 12);
    ST32(a0, v0);
    ST32(a0+12, a1);
    ST32(a0+28, a2);
    ST32(a0+24, FBITS(f14));
    ST32(a0+8, 0);
    cnd_ = !fcc;
    ST32(a0+20, FBITS(f13));
    if (cnd_) { goto L_08896A34; }
    goto L_08896A30;
L_08896A30:;
    ST32(a0+24, FBITS(f13));
    goto L_08896A34;
L_08896A34:;
    return;
}

/* 08896A3C */
rv_t func_08896A3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_08896A3C:;
    v1 = LD32(a0+12);
    f0 = BITSF(0);
    cnd_ = v1 == 0;
    v0 = D_08B28AB8 - (-30024);
    if (cnd_) { goto L_08896BE8; }
    goto L_08896A4C;
L_08896A4C:;
    a1 = LD32(a0+28);
    v1 = v1 << 2;
    v0 = v0 - 30024;
    v1 = v1 + v0;
    cnd_ = a1 == 0;
    f4 = BITSF(LD32(v1));
    if (cnd_) { goto L_08896AB4; }
    goto L_08896A64;
L_08896A64:;
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_08896A7C; }
    goto L_08896A74;
L_08896A74:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08896BE8; }
    goto L_08896A7C;
L_08896A7C:;
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    v0 = 2;
    if (cnd_) { goto L_08896A94; }
    goto L_08896A8C;
L_08896A8C:;
    cnd_ = a1 == v0;
    if (cnd_) { goto L_08896BE4; }
    goto L_08896A94;
L_08896A94:;
    f0 = BITSF(0);
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f6 = BITSF(LD32(a0+20)); goto L_08896ABC; }
    goto L_08896AA8;
L_08896AA8:;
    v0 = 2;
    cnd_ = a1 == v0;
    if (cnd_) { f4 = BITSF(FBITS(f4) ^ 0x80000000u); goto L_08896AB4; }
    goto L_08896AB4;
L_08896AB4:;
    f6 = BITSF(LD32(a0+20));
    f0 = BITSF(0);
    goto L_08896ABC;
L_08896ABC:;
    fcc = FCMP(f6, f0, 2);
    cnd_ = !fcc;
    f5 = BITSF(LD32(a0+24));
    if (cnd_) { goto L_08896AE8; }
    goto L_08896ACC;
L_08896ACC:;
    fcc = FCMP(f5, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { goto L_08896AE8; }
    goto L_08896ADC;
L_08896ADC:;
    ST32(a0+16, FBITS(f4));
    goto L_08896AE0;
L_08896AE0:;
    f0 = BITSF(LD32(a0+16));
    return (rv_t){ v0, v1, f0 };
L_08896AE8:;
    f7 = BITSF(0);
    v1 = D_08B2859C - (-31332);
    v0 = D_08AEC2EC - (-15636);
    fcc = FCMP(f5, f7, 2);
    f9 = BITSF(LD32(v1-31332));
    cnd_ = !fcc;
    f8 = BITSF(LD32(v0-15636));
    if (cnd_) { goto L_08896BDC; }
    goto L_08896B04;
L_08896B04:;
    fcc = FCMP(f4, f7, 2);
    cnd_ = fcc;
    f3 = BITSF(LD32(a0+16));
    if (cnd_) { goto L_08896B54; }
    goto L_08896B14;
L_08896B14:;
    v0 = FBITS(f4);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    v0 = FBITS(f3);
    {v[4]=BITSF(v0);}
    {float s0=v[4];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_08896B54; }
    goto L_08896B4C;
L_08896B4C:;
    f3 = f7;
    ST32(a0+16, FBITS(f7));
    goto L_08896B54;
L_08896B54:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f4, 12);
    cnd_ = !fcc;
    f0 = f4 - f3;
    if (cnd_) { goto L_08896B78; }
    goto L_08896B68;
L_08896B68:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08896B98; }
    goto L_08896B78;
L_08896B78:;
    fcc = FCMP(f4, f1, 12);
    cnd_ = !fcc;
    f0 = f4 - f3;
    if (cnd_) { goto L_08896BC0; }
    goto L_08896B88;
L_08896B88:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08896BC0; }
    goto L_08896B98;
L_08896B98:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f6, 12);
    cnd_ = fcc;
    if (cnd_) { f8 = f9 / f6; goto L_08896BAC; }
    goto L_08896BAC;
L_08896BAC:;
    f0 = f4 - f3;
    goto L_08896BB0;
L_08896BB0:;
    f0 = f0 * f8;
    f0 = f3 + f0;
    ST32(a0+16, FBITS(f0));
    goto L_08896AE0;
L_08896BC0:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f5, 12);
    cnd_ = fcc;
    if (cnd_) { f8 = f9 / f5; goto L_08896BAC; }
    goto L_08896BD4;
L_08896BD4:;
    f0 = f4 - f3;
    goto L_08896BB0;
L_08896BDC:;
    f3 = BITSF(LD32(a0+16));
    goto L_08896B54;
L_08896BE4:;
    f0 = BITSF(0);
    goto L_08896BE8;
L_08896BE8:;
    return (rv_t){ v0, v1, f0 };
}

/* 08896BF0 */
rv_t func_08896BF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08896BF0:;
    ST32(a0+16, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08896BF8 */
void func_08896BF8(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0;
L_08896BF8:;
    v0 = D_08AF79B8 - (31160);
    v0 = v0 + 31160;
    ST32(a0+16, a2);
    ST32(a0+4, FBITS(f12));
    ST32(a0, v0);
    ST32(a0+12, a1);
    ST32(a0+8, 0);
    return;
}

/* 08896C18 */
rv_t func_08896C18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896C18:;
    sp = sp - 16;
    v0 = D_08AF79B8 - (31160);
    s0 = a0 + 0;
    v0 = v0 + 31160;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08896CA4; }
    goto L_08896C40;
L_08896C40:;
    v0 = LD32(s0+16);
    goto L_08896C44;
L_08896C44:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08896C8C; }
    goto L_08896C4C;
L_08896C4C:;
    v1 = LD32(s0+8);
    goto L_08896C50;
L_08896C50:;
    v0 = D_08AF7998 - (31128);
    v0 = v0 + 31128;
    a0 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08896C74; }
    goto L_08896C64;
L_08896C64:;
    goto L_08896C68;
L_08896C68:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08896C74:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896C84;
L_08896C84:;
    goto L_08896C68;
L_08896C8C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896C9C;
L_08896C9C:;
    v1 = LD32(s0+8);
    goto L_08896C50;
L_08896CA4:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896CB4;
L_08896CB4:;
    v0 = LD32(s0+16);
    goto L_08896C44;
}

/* 08896CBC */
rv_t func_08896CBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896CBC:;
    sp = sp - 16;
    v0 = D_08AF79B8 - (31160);
    s0 = a0 + 0;
    v0 = v0 + 31160;
    v1 = LD32(a0+12);
    ST32(s0, v0);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08896D50; }
    goto L_08896CE4;
L_08896CE4:;
    v0 = LD32(s0+16);
    goto L_08896CE8;
L_08896CE8:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08896D38; }
    goto L_08896CF0;
L_08896CF0:;
    v1 = LD32(s0+8);
    goto L_08896CF4;
L_08896CF4:;
    v0 = D_08AF7998 - (31128);
    v0 = v0 + 31128;
    a0 = v1 + 0;
    cnd_ = v1 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_08896D20; }
    goto L_08896D08;
L_08896D08:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08896D10;
L_08896D10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08896D20:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896D30;
L_08896D30:;
    goto L_08896D08;
L_08896D38:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896D48;
L_08896D48:;
    v1 = LD32(s0+8);
    goto L_08896CF4;
L_08896D50:;
    v0 = LD32(v1);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896D60;
L_08896D60:;
    v0 = LD32(s0+16);
    goto L_08896CE8;
}

/* 08896D68 */
rv_t func_08896D68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08896D68:;
    sp = sp - 32;
    v1 = LD32(a0+12);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_08896D90; }
    goto L_08896D84;
L_08896D84:;
    v0 = LD32(s0+16);
    cnd_ = v0 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08896DAC; }
    goto L_08896D90;
L_08896D90:;
    ST32(s0+20, 0);
    goto L_08896D94;
L_08896D94:;
    f0 = BITSF(LD32(s0+20));
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_08896DAC:;
    v0 = LD32(v1);
    v1 = LD32(v0+8);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896DBC;
L_08896DBC:;
    a0 = LD32(s0+16);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    f20 = f0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896DD0;
L_08896DD0:;
    f20 = f20 * f0;
    ST32(s0+20, FBITS(f20));
    goto L_08896D94;
}

/* 08896DDC */
rv_t func_08896DDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08896DDC:;
    f0 = BITSF(LD32(a0+20));
    return (rv_t){ v0, v1, f0 };
}

/* 08896DE4 */
rv_t func_08896DE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08896DE4:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08896E38; }
    goto L_08896E00;
L_08896E00:;
    v0 = LD32(s0+16);
    goto L_08896E04;
L_08896E04:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08896E20; }
    goto L_08896E0C;
L_08896E0C:;
    ST32(s0+20, 0);
    goto L_08896E10;
L_08896E10:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08896E20:;
    v0 = LD32(v0);
    v1 = LD32(v0+12);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896E30;
L_08896E30:;
    ST32(s0+20, 0);
    goto L_08896E10;
L_08896E38:;
    v0 = LD32(v0);
    v1 = LD32(v0+12);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08896E48;
L_08896E48:;
    v0 = LD32(s0+16);
    goto L_08896E04;
}

/* 08896E50 */
void func_08896E50(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13)
{
    u32 v0 = 0;
L_08896E50:;
    v0 = D_08AF79D8 - (31192);
    v0 = v0 + 31192;
    ST32(a0+4, FBITS(f13));
    ST32(a0, v0);
    ST32(a0+12, a1);
    ST32(a0+16, FBITS(f12));
    ST32(a0+24, a3);
    ST32(a0+28, a2);
    ST32(a0+32, 0);
    ST32(a0+8, 0);
    ST32(a0+20, 0);
    return;
}

/* 08896E80 */
rv_t func_08896E80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
L_08896E80:;
    v1 = LD32(a0+12);
    v0 = D_08B2889C - (-30564);
    v0 = v0 - 30564;
    v1 = v1 + v0;
    v1 = LD_U8(v1);
    v0 = D_08AEC2F0 - (-15632);
    f3 = BITSF(0);
    f0 = BITSF(v1);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15632));
    f4 = f1 * f0;
    fcc = FCMP(f3, f4, 12);
    cnd_ = !fcc;
    f5 = BITSF(LD32(a0+20));
    if (cnd_) { goto L_08897030; }
    goto L_08896EBC;
L_08896EBC:;
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(v0-31332));
    f0 = BITSF(LD32(a0+32));
    f2 = BITSF(LD32(a0+16));
    f0 = f0 + f1;
    fcc = FCMP(f2, f0, 14);
    cnd_ = !fcc;
    ST32(a0+32, FBITS(f0));
    if (cnd_) { goto L_08896FE8; }
    goto L_08896EE0;
L_08896EE0:;
    v1 = LD32(a0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08896FD4; }
    goto L_08896EF0;
L_08896EF0:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08896FC4; }
    goto L_08896EF8;
L_08896EF8:;
    cnd_ = v1 == v0;
    v1 = LD32(a0+24);
    if (cnd_) { goto L_08896FBC; }
    goto L_08896F00;
L_08896F00:;
    ST32(a0+20, 0);
    goto L_08896F04;
L_08896F04:;
    v0 = 1;
    goto L_08896F08;
L_08896F08:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08896F94; }
    goto L_08896F10;
L_08896F10:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08896F84; }
    goto L_08896F18;
L_08896F18:;
    cnd_ = v1 == v0;
    v0 = 3;
    if (cnd_) { goto L_08896F58; }
    goto L_08896F20;
L_08896F20:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08896F34; }
    goto L_08896F28;
L_08896F28:;
    f1 = BITSF(0);
    goto L_08896F2C;
L_08896F2C:;
    f0 = f1;
    return (rv_t){ v0, v1, f0 };
L_08896F34:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f4, 12);
    cnd_ = fcc;
    f1 = f2;
    if (cnd_) { goto L_08896F2C; }
    goto L_08896F48;
L_08896F48:;
    f0 = BITSF(LD32(a0+20));
    ST32(a0+20, FBITS(f2));
    f1 = f0;
    goto L_08896F2C;
L_08896F58:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f4, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a0+20)); goto L_08896F2C; }
    goto L_08896F6C;
L_08896F6C:;
    fcc = FCMP(f0, f5, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(a0+20, FBITS(f0)); goto L_08896F7C; }
    goto L_08896F7C;
L_08896F7C:;
    f1 = BITSF(LD32(a0+20));
    goto L_08896F2C;
L_08896F84:;
    cnd_ = v1 == 0;
    if (cnd_) { f1 = BITSF(LD32(a0+20)); goto L_08896F2C; }
    goto L_08896F8C;
L_08896F8C:;
    goto L_08896F28;
L_08896F94:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f4, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_08896F2C; }
    goto L_08896FA8;
L_08896FA8:;
    v0 = D_08AEC2F4 - (-15628);
    f0 = BITSF(LD32(v0-15628));
    f1 = f0;
    ST32(a0+20, FBITS(f0));
    goto L_08896F2C;
L_08896FBC:;
    ST32(a0+20, FBITS(f4));
    goto L_08896F04;
L_08896FC4:;
    cnd_ = v1 == 0;
    v1 = LD32(a0+24);
    if (cnd_) { goto L_08896FBC; }
    goto L_08896FCC;
L_08896FCC:;
    ST32(a0+20, 0);
    goto L_08896F04;
L_08896FD4:;
    v0 = D_08AEC2F4 - (-15628);
    v1 = LD32(a0+24);
    f0 = BITSF(LD32(v0-15628));
    goto L_08896FE0;
L_08896FE0:;
    ST32(a0+20, FBITS(f0));
    goto L_08896F04;
L_08896FE8:;
    v1 = LD32(a0+28);
    v0 = 1;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08897024; }
    goto L_08896FF8;
L_08896FF8:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08897014; }
    goto L_08897000;
L_08897000:;
    cnd_ = v1 != v0;
    v1 = LD32(a0+24);
    if (cnd_) { goto L_08896F00; }
    goto L_08897008;
L_08897008:;
    f0 = f0 / f2;
    f0 = f4 * f0;
    goto L_08896FE0;
L_08897014:;
    cnd_ = v1 != 0;
    v1 = LD32(a0+24);
    if (cnd_) { goto L_08896F00; }
    goto L_0889701C;
L_0889701C:;
    ST32(a0+20, FBITS(f3));
    goto L_08896F04;
L_08897024:;
    f0 = f0 / f2;
    v1 = LD32(a0+24);
    goto L_08896FE0;
L_08897030:;
    v1 = LD32(a0+24);
    v0 = 3;
    cnd_ = v1 != v0;
    ST32(a0+32, FBITS(f3));
    if (cnd_) { goto L_0889701C; }
    goto L_08897040;
L_08897040:;
    v0 = 1;
    goto L_08896F08;
}

/* 08897048 */
rv_t func_08897048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08897048:;
    f0 = BITSF(LD32(a0+20));
    return (rv_t){ v0, v1, f0 };
}

/* 08897050 */
rv_t func_08897050(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08897050:;
    ST32(a0+32, 0);
    ST32(a0+20, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0889705C */
void func_0889705C(u32 a0, u32 a1, u32 a2, float f12)
{
    u32 v0 = 0;
L_0889705C:;
    v0 = D_08AF79F8 - (31224);
    v0 = v0 + 31224;
    ST32(a0+4, FBITS(f12));
    ST32(a0, v0);
    ST32(a0+12, a1);
    ST32(a0+16, a2);
    ST32(a0+24, 0);
    ST32(a0+8, 0);
    ST32(a0+20, 0);
    return;
}

/* 08897084 */
rv_t func_08897084(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897084:;
    sp = sp - 16;
    v0 = D_08B2889C - (-30564);
    v0 = v0 - 30564;
    v1 = LD32(a0+12);
    a1 = a0 + 0;
    f0 = BITSF(0);
    cnd_ = v1 == 0;
    v0 = v1 + v0;
    if (cnd_) { goto L_088970D8; }
    goto L_088970A8;
L_088970A8:;
    v0 = LD_U8(v0);
    f1 = BITSF(LD32(a0+24));
    a0 = LD32(a0+16);
    f0 = BITSF(v0);
    v0 = D_08AEC2F8 - (-15624);
    ST32(a1+20, FBITS(f1));
    f13 = (float)(s32)FBITS(f0);
    f12 = f1;
    f0 = BITSF(LD32(v0-15624));
    f13 = f13 * f0;
    ST32(a1+24, FBITS(f13));
    { rv_t r_ = func_088970E4(a0, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088970D8;
L_088970D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088970E4 */
rv_t func_088970E4(u32 a0, float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_088970E4:;
    v0 = 1;
    cnd_ = a0 == v0;
    v0 = (s32)a0 < 2;
    if (cnd_) { goto L_08897138; }
    goto L_088970F0;
L_088970F0:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08897184; }
    goto L_088970F8;
L_088970F8:;
    cnd_ = a0 == v0;
    v0 = 3;
    if (cnd_) { goto L_08897154; }
    goto L_08897100;
L_08897100:;
    cnd_ = a0 == v0;
    v0 = D_08AEC300 - (-15616);
    if (cnd_) { goto L_08897114; }
    goto L_08897108;
L_08897108:;
    f0 = BITSF(0);
    goto L_0889710C;
L_0889710C:;
    return (rv_t){ v0, v1, f0 };
L_08897114:;
    f0 = BITSF(LD32(v0-15616));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08897148; }
    goto L_08897128;
L_08897128:;
    fcc = FCMP(f13, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08897148; }
    goto L_08897138;
L_08897138:;
    v0 = D_08AEC2FC - (-15620);
    f0 = BITSF(LD32(v0-15620));
    f0 = f0 - f13;
    return (rv_t){ v0, v1, f0 };
L_08897148:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
L_08897154:;
    v0 = D_08AEC300 - (-15616);
    f1 = BITSF(LD32(v0-15616));
    fcc = FCMP(f12, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_08897148; }
    goto L_0889716C;
L_0889716C:;
    fcc = FCMP(f1, f13, 14);
    cnd_ = fcc;
    f0 = f13;
    if (cnd_) { goto L_0889710C; }
    goto L_0889717C;
L_0889717C:;
    goto L_08897148;
L_08897184:;
    cnd_ = a0 == 0;
    f0 = f13;
    if (cnd_) { goto L_0889710C; }
    goto L_0889718C;
L_0889718C:;
    goto L_08897108;
}

/* 08897194 */
rv_t func_08897194(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08897194:;
    ST32(a0+20, 0);
    ST32(a0+24, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 088971A0 */
void func_088971A0(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13, float f14, float f15)
{
    u32 v0 = 0;
L_088971A0:;
    v0 = D_08AF7A18 - (31256);
    v0 = v0 + 31256;
    ST32(a0+4, FBITS(f15));
    ST32(a0, v0);
    ST32(a0+12, a1);
    ST32(a0+16, a2);
    ST32(a0+20, a3);
    ST32(a0+24, FBITS(f12));
    ST32(a0+28, FBITS(f13));
    ST32(a0+32, FBITS(f14));
    ST32(a0+44, 0);
    ST32(a0+8, 0);
    ST32(a0+36, 0);
    return;
}

/* 088971D8 */
rv_t func_088971D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
L_088971D8:;
    v1 = LD32(a0+12);
    v0 = D_08B28AB8 - (-30024);
    v0 = v0 - 30024;
    v1 = v1 << 2;
    v1 = v1 + v0;
    f2 = BITSF(LD32(v1));
    f4 = BITSF(LD32(a0+32));
    a1 = a0 + 0;
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = FBITS(f4);
    {v[4]=BITSF(v0);}
    {float s0=v[4];float d0=(float)((s0>0)-(s0<0));v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    v0 = D_08B2859C - (-31332);
    fcc = FCMP(f3, f0, 2);
    f3 = BITSF(LD32(v0-31332));
    v0 = FBITS(f2);
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    cnd_ = fcc;
    v1 = LD32(a1+36);
    if (cnd_) { goto L_08897244; }
    goto L_08897240;
L_08897240:;
    f2 = BITSF(0);
    goto L_08897244;
L_08897244:;
    a2 = 1;
    cnd_ = v1 == a2;
    v0 = (s32)v1 < 2;
    if (cnd_) { goto L_08897370; }
    goto L_08897250;
L_08897250:;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_08897330; }
    goto L_08897258;
L_08897258:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0889726C; }
    goto L_08897260;
L_08897260:;
    f0 = BITSF(0);
    return (rv_t){ v0, v1, f0 };
L_0889726C:;
    v0 = FBITS(f4);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+44)); goto L_08897304; }
    goto L_08897288;
L_08897288:;
    f1 = BITSF(LD32(a1+44));
    f0 = BITSF(LD32(a1+28));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { ST32(a1+40, a2); goto L_088972F8; }
    goto L_088972A0;
L_088972A0:;
    v0 = LD32(a1+40);
    ST32(a1+36, a2);
    v0 = v0 + 1;
    ST32(a1+40, v0);
    ST32(a1+44, FBITS(f3));
    goto L_088972B4;
L_088972B4:;
    v0 = LD32(a1+40);
    v1 = LD32(a1+16);
    v0 = v0 < v1;
    goto L_088972C0;
L_088972C0:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088972E4; }
    goto L_088972C8;
L_088972C8:;
    v0 = LD32(a1+20);
    v1 = v0 ^ 0x2;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    goto L_088972D8;
L_088972D8:;
    v0 = v0 | v1;
    cnd_ = v0 != 0;
    v0 = D_08AEC304 - (-15612);
    if (cnd_) { goto L_088972F0; }
    goto L_088972E4;
L_088972E4:;
    f0 = BITSF(0);
    goto L_088972E8;
L_088972E8:;
    return (rv_t){ v0, v1, f0 };
L_088972F0:;
    f0 = BITSF(LD32(v0-15612));
    return (rv_t){ v0, v1, f0 };
L_088972F8:;
    ST32(a1+44, FBITS(f3));
    ST32(a1+36, a2);
    goto L_088972B4;
L_08897304:;
    v0 = LD32(a1+40);
    v1 = LD32(a1+16);
    f0 = f0 + f3;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    ST32(a1+44, FBITS(f0));
    if (cnd_) { goto L_088972E4; }
    goto L_0889731C;
L_0889731C:;
    v0 = LD32(a1+20);
    cnd_ = v0 != a2;
    v0 = D_08AEC304 - (-15612);
    if (cnd_) { goto L_088972E4; }
    goto L_08897328;
L_08897328:;
    goto L_088972F0;
L_08897330:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08897260; }
    goto L_08897338;
L_08897338:;
    v0 = FBITS(f4);
    f0 = BITSF(0);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088972E8; }
    goto L_08897358;
L_08897358:;
    v0 = LD32(a1+16);
    ST32(a1+44, FBITS(f3));
    v0 = a2 < v0;
    ST32(a1+36, a2);
    ST32(a1+40, a2);
    goto L_088972C0;
L_08897370:;
    v0 = FBITS(f4);
    v0 = (v0 >> 0) & 0x7fffffff;
    f1 = BITSF(v0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a1+44)); goto L_088973BC; }
    goto L_0889738C;
L_0889738C:;
    f0 = BITSF(LD32(a1+44));
    v0 = LD32(a1+40);
    v1 = LD32(a1+16);
    f0 = f0 + f3;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    ST32(a1+44, FBITS(f0));
    if (cnd_) { goto L_088972E4; }
    goto L_088973A8;
L_088973A8:;
    v0 = LD32(a1+20);
    cnd_ = v0 != 0;
    v0 = D_08AEC304 - (-15612);
    if (cnd_) { goto L_088972E4; }
    goto L_088973B4;
L_088973B4:;
    goto L_088972F0;
L_088973BC:;
    f0 = BITSF(LD32(a1+24));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = 2;
    if (cnd_) { goto L_08897400; }
    goto L_088973D0;
L_088973D0:;
    v0 = LD32(a1+40);
    a0 = LD32(a1+16);
    ST32(a1+36, v1);
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    ST32(a1+44, FBITS(f3));
    if (cnd_) { goto L_088972E4; }
    goto L_088973E8;
L_088973E8:;
    v0 = LD32(a1+20);
    v1 = v0 ^ 0x3;
    v0 = v0 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    goto L_088972D8;
L_08897400:;
    f0 = BITSF(0);
    ST32(a1+36, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0889740C */
rv_t func_0889740C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0889740C:;
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    ST32(a0+44, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0889741C */
void func_0889741C(u32 a0, u32 a1, float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
L_0889741C:;
    v0 = D_08AF7A38 - (31288);
    v0 = v0 + 31288;
    ST32(a0, v0);
    v1 = 3;
    v0 = 1;
    ST32(a0+4, FBITS(f13));
    ST32(a0+12, a1);
    ST32(a0+16, v0);
    ST32(a0+20, v1);
    ST32(a0+24, FBITS(f12));
    ST32(a0+40, 0);
    ST32(a0+8, 0);
    ST32(a0+28, 0);
    ST32(a0+32, 0);
    return;
}

/* 08897458 */
rv_t func_08897458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_08897458:;
    v1 = LD32(a0+12);
    v0 = D_08B2889C - (-30564);
    v0 = v0 - 30564;
    v1 = v1 + v0;
    v1 = LD_U8(v1);
    v0 = D_08AEC308 - (-15608);
    a1 = a0 + 0;
    f0 = BITSF(v1);
    v1 = LD32(a0+32);
    a0 = 1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15608));
    v0 = D_08B2859C - (-31332);
    f3 = BITSF(LD32(v0-31332));
    cnd_ = v1 == a0;
    f1 = f1 * f0;
    if (cnd_) { goto L_088975B8; }
    goto L_08897498;
L_08897498:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_0889757C; }
    goto L_088974A4;
L_088974A4:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = D_08AEC30C - (-15604); goto L_088974B8; }
    goto L_088974AC;
L_088974AC:;
    f2 = BITSF(0);
    goto L_088974B0;
L_088974B0:;
    f0 = f2;
    return (rv_t){ v0, v1, f0 };
L_088974B8:;
    f0 = BITSF(LD32(v0-15604));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(a1+40)); goto L_08897550; }
    goto L_088974CC;
L_088974CC:;
    f1 = BITSF(LD32(a1+40));
    f0 = BITSF(LD32(a1+28));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = LD32(a1+16);
    if (cnd_) { goto L_0889753C; }
    goto L_088974E4;
L_088974E4:;
    a2 = LD32(a1+36);
    v0 = a2 < v1;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_08897540; }
    goto L_088974F4;
L_088974F4:;
    v0 = a2 + 1;
    ST32(a1+32, a0);
    ST32(a1+36, v0);
    ST32(a1+40, FBITS(f3));
    goto L_08897504;
L_08897504:;
    v0 = LD32(a1+36);
    v0 = v0 < v1;
    goto L_0889750C;
L_0889750C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088974AC; }
    goto L_08897514;
L_08897514:;
    v0 = LD32(a1+20);
    v1 = v0 ^ 0x2;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    goto L_08897524;
L_08897524:;
    v0 = v0 | v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088974AC; }
    goto L_08897530;
L_08897530:;
    v0 = D_08AEC310 - (-15600);
    goto L_08897534;
L_08897534:;
    f2 = BITSF(LD32(v0-15600));
    goto L_088974B0;
L_0889753C:;
    v0 = 1;
    goto L_08897540;
L_08897540:;
    ST32(a1+36, v0);
    ST32(a1+40, FBITS(f3));
    ST32(a1+32, v0);
    goto L_08897504;
L_08897550:;
    v0 = LD32(a1+36);
    v1 = LD32(a1+16);
    f0 = f0 + f3;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    ST32(a1+40, FBITS(f0));
    if (cnd_) { goto L_088974AC; }
    goto L_08897568;
L_08897568:;
    v0 = LD32(a1+20);
    cnd_ = v0 != a0;
    if (cnd_) { goto L_088974AC; }
    goto L_08897574;
L_08897574:;
    v0 = D_08AEC310 - (-15600);
    goto L_08897534;
L_0889757C:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088974AC; }
    goto L_08897584;
L_08897584:;
    v0 = D_08AEC30C - (-15604);
    f0 = BITSF(LD32(v0-15604));
    f2 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_088974B0; }
    goto L_088975A0;
L_088975A0:;
    v0 = LD32(a1+16);
    ST32(a1+40, FBITS(f3));
    v0 = a0 < v0;
    ST32(a1+32, a0);
    ST32(a1+36, a0);
    goto L_0889750C;
L_088975B8:;
    v0 = D_08AEC30C - (-15604);
    f0 = BITSF(LD32(v0-15604));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(a1+40)); goto L_08897600; }
    goto L_088975D0;
L_088975D0:;
    f0 = BITSF(LD32(a1+40));
    v0 = LD32(a1+36);
    v1 = LD32(a1+16);
    f0 = f0 + f3;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    ST32(a1+40, FBITS(f0));
    if (cnd_) { goto L_088974AC; }
    goto L_088975EC;
L_088975EC:;
    v0 = LD32(a1+20);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088974AC; }
    goto L_088975F8;
L_088975F8:;
    v0 = D_08AEC310 - (-15600);
    goto L_08897534;
L_08897600:;
    f0 = BITSF(LD32(a1+24));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_08897648; }
    goto L_08897614;
L_08897614:;
    v0 = LD32(a1+36);
    a0 = LD32(a1+16);
    v1 = 2;
    ST32(a1+32, v1);
    v0 = v0 < a0;
    cnd_ = v0 != 0;
    ST32(a1+40, FBITS(f3));
    if (cnd_) { goto L_088974AC; }
    goto L_08897630;
L_08897630:;
    v0 = LD32(a1+20);
    v1 = v0 ^ 0x3;
    v0 = v0 ^ 0x1;
    v0 = v0 < 0x1u;
    v1 = v1 < 0x1u;
    goto L_08897524;
L_08897648:;
    f2 = BITSF(0);
    ST32(a1+32, 0);
    goto L_088974B0;
}

/* 08897654 */
rv_t func_08897654(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_08897654:;
    ST32(a0+32, 0);
    ST32(a0+36, 0);
    ST32(a0+40, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 08897664 */
void func_08897664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897664:;
    sp = sp - 32;
    t0 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 0 + 0;
    a2 = sp + 0;
    ST32(sp, v0);
    func_08898524(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08897688;
L_08897688:;
    sp = sp + 32;
    return;
}

/* 08897694 */
void func_08897694(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897694:;
    sp = sp - 32;
    t0 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 1;
    a2 = sp + 0;
    ST32(sp, v0);
    func_08898524(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088976B8;
L_088976B8:;
    sp = sp + 32;
    return;
}

/* 088976C4 */
void func_088976C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088976C4:;
    sp = sp - 32;
    t0 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 2;
    a2 = sp + 0;
    ST32(sp, v0);
    func_08898524(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088976E8;
L_088976E8:;
    sp = sp + 32;
    return;
}

/* 088976F4 */
void func_088976F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088976F4:;
    sp = sp - 32;
    t0 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 3;
    a2 = sp + 0;
    ST32(sp, v0);
    func_08898524(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08897718;
L_08897718:;
    sp = sp + 32;
    return;
}

/* 08897724 */
void func_08897724(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897724:;
    sp = sp - 32;
    t0 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 4;
    a2 = sp + 0;
    ST32(sp, v0);
    func_08898524(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08897748;
L_08897748:;
    sp = sp + 32;
    return;
}

/* 08897754 */
void func_08897754(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, t0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897754:;
    sp = sp - 32;
    t0 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 6;
    a2 = sp + 0;
    ST32(sp, v0);
    func_08898524(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_08897778;
L_08897778:;
    sp = sp + 32;
    return;
}

/* 08897784 */
void func_08897784(u32 a0)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897784:;
    sp = sp - 16;
    func_088986EC(a0);
    goto L_08897794;
L_08897794:;
    sp = sp + 16;
    return;
}

/* 088977A0 */
rv_t func_088977A0(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088977A0:;
    sp = sp - 32;
    v1 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 0 + 0;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+12, v1);
    { rv_t r_ = func_08898EDC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088977C8;
L_088977C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088977D4 */
void func_088977D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088977D4:;
    sp = sp - 32;
    v1 = a2 + 0;
    t2 = a3 + 0;
    v0 = a1 + 0;
    a3 = t0 + 0;
    a1 = 1;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, t2);
    ST32(sp+12, t1);
    { rv_t r_ = func_08898EDC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897808;
L_08897808:;
    sp = sp + 32;
    return;
}

/* 08897814 */
void func_08897814(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1)
{
    u32 v0 = 0, v1 = 0, t2 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897814:;
    sp = sp - 32;
    v1 = a2 + 0;
    t2 = a3 + 0;
    v0 = a1 + 0;
    a3 = t0 + 0;
    a1 = 1;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, t2);
    ST32(sp+12, t1);
    { rv_t r_ = func_08898EDC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897848;
L_08897848:;
    sp = sp + 32;
    return;
}

/* 08897854 */
void func_08897854(u32 a0, u32 a1, u32 a2, u32 a3, float f12, float f13)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897854:;
    sp = sp - 32;
    v1 = a3 + 0;
    v0 = a1 + 0;
    a3 = a2 + 0;
    a1 = 2;
    a2 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, FBITS(f12));
    ST32(sp+8, FBITS(f13));
    ST32(sp+12, v1);
    { rv_t r_ = func_08898EDC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897884;
L_08897884:;
    sp = sp + 32;
    return;
}

/* 08897890 */
void func_08897890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897890:;
    sp = sp - 32;
    v1 = a2 + 0;
    v0 = a1 + 0;
    a2 = sp + 0;
    a1 = 3;
    ST32(sp, v0);
    ST32(sp+8, v1);
    ST32(sp+12, t0);
    { rv_t r_ = func_08898EDC(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088978B8;
L_088978B8:;
    sp = sp + 32;
    return;
}

/* 088978C4 */
rv_t func_088978C4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088978C4:;
    sp = sp - 16;
    { rv_t r_ = func_08899094(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088978D4;
L_088978D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088978E0 */
void func_088978E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088978E0:;
    sp = sp - 16;
    func_088991B0(a0, a1, t1, t2, t3);
    goto L_088978F0;
L_088978F0:;
    sp = sp + 16;
    return;
}

/* 088978FC */
void func_088978FC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088978FC:;
    sp = sp - 16;
    func_0889920C(a0, t1, t2, t3);
    goto L_0889790C;
L_0889790C:;
    sp = sp + 16;
    return;
}

/* 08897918 */
void func_08897918(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897918:;
    sp = sp - 16;
    func_08899240(a0, a1, t1, t2, t3);
    goto L_08897928;
L_08897928:;
    sp = sp + 16;
    return;
}

/* 08897934 */
void func_08897934(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897934:;
    sp = sp - 16;
    s1 = a0 & 0xff;
    s0 = a1 & 0xff;
    v0 = func_08A60B64();
    goto L_08897950;
L_08897950:;
    a2 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08897964; }
    goto L_0889795C;
L_0889795C:;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088979A4; }
    goto L_08897964;
L_08897964:;
    v0 = D_08B29CAC - (-25428);
    a3 = LD32(v0-25428);
    v1 = D_08B29CA4 - (-25436);
    ST8(v1-25436, 0);
    v0 = LD32(a3);
    v1 = LD32(v0+24);
    t_ = v1;
    a0 = a3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897984;
L_08897984:;
    func_0889A574();
    goto L_0889798C;
L_0889798C:;
    func_0889A588();
    goto L_08897994;
L_08897994:;
    v0 = D_08B2A6CC - (-22836);
    v1 = (u32)-1;
    ST32(v0-22836, v1);
    v0 = 1;
    goto L_088979A4;
L_088979A4:;
    sp = sp + 16;
    return;
}

/* 088979B8 */
void func_088979B8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088979B8:;
    sp = sp - 16;
    s0 = D_08B29CAC - (-25428);
    v0 = func_08A60B30(t1, t2, t3);
    goto L_088979D0;
L_088979D0:;
    a0 = v0 + 0;
    v1 = LD32(v0);
    ST32(s0-25428, v0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088979E8;
L_088979E8:;
    a0 = LD32(s0-25428);
    v0 = v0 ^ 0x1;
    v1 = D_08B29CA4 - (-25436);
    a2 = LD32(a0);
    ST8(v1-25436, v0);
    a1 = 1;
    v0 = D_08B29CA5 - (-25435);
    v1 = D_08B29CA8 - (-25432);
    ST8(v0-25435, a1);
    ST32(v1-25432, 0);
    v0 = LD32(a2+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897A1C;
L_08897A1C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08897B64; }
    goto L_08897A24;
L_08897A24:;
    s0 = ((u32)(uintptr_t)func_0889A038) - (-24520);
    func_0889A574();
    goto L_08897A2C;
L_08897A2C:;
    s0 = s0 - 24520;
    func_0889A588();
    goto L_08897A34;
L_08897A34:;
    v1 = D_08B2A6C4 - (-22844);
    a0 = (u32)-1;
    v0 = D_08B2A6CC - (-22836);
    ST32(v1-22844, 0);
    ST32(v0-22836, a0);
    func_08898BC0();
    goto L_08897A4C;
L_08897A4C:;
    func_08899390();
    goto L_08897A54;
L_08897A54:;
    a0 = D_08AD5180 - (20864);
    a1 = ((u32)(uintptr_t)func_08899FE8) - (-24600);
    a0 = a0 + 20864;
    a1 = a1 - 24600;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897A70;
L_08897A70:;
    a0 = D_08AD518C - (20876);
    a1 = s0 + 0;
    a0 = a0 + 20876;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897A88;
L_08897A88:;
    a0 = D_08AD5198 - (20888);
    a1 = s0 + 0;
    a0 = a0 + 20888;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897AA0;
L_08897AA0:;
    a0 = D_08AD519C - (20892);
    a1 = ((u32)(uintptr_t)func_0889A1AC) - (-24148);
    a0 = a0 + 20892;
    a1 = a1 - 24148;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897ABC;
L_08897ABC:;
    a0 = D_08AD51B0 - (20912);
    a1 = ((u32)(uintptr_t)func_0889A2B8) - (-23880);
    a0 = a0 + 20912;
    a1 = a1 - 23880;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897754(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897AD8;
L_08897AD8:;
    a0 = D_08AD51C4 - (20932);
    a1 = ((u32)(uintptr_t)func_0889A3C4) - (-23612);
    a0 = a0 + 20932;
    a1 = a1 - 23612;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897724(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897AF4;
L_08897AF4:;
    a0 = D_08AD51D8 - (20952);
    a1 = ((u32)(uintptr_t)func_08898210) - (-32240);
    a0 = a0 + 20952;
    a1 = a1 - 32240;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897724(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897B10;
L_08897B10:;
    a0 = D_08AD51F0 - (20976);
    a1 = ((u32)(uintptr_t)func_088982E4) - (-32028);
    a0 = a0 + 20976;
    a1 = a1 - 32028;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_088976C4(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897B2C;
L_08897B2C:;
    a0 = D_08AD5200 - (20992);
    a1 = ((u32)(uintptr_t)func_0889A4C8) - (-23352);
    a0 = a0 + 20992;
    a1 = a1 - 23352;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_08897724(a0, a1, a2, a3, 0, 0, 0);
    goto L_08897B48;
L_08897B48:;
    func_088FDE9C(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08897B50;
L_08897B50:;
    sp = sp + 16;
    return;
L_08897B64:;
    a0 = 256;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897B6C;
L_08897B6C:;
    s0 = D_08B29CB0 - (-25424);
    a0 = 0x8000;
    s1 = v0 + 0;
    ST32(s0-25424, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897B80;
L_08897B80:;
    a2 = 1;
    a3 = LD32(s0-25424);
    ST32(s1, v0);
    a1 = a3 + 4;
    goto L_08897B90;
L_08897B90:;
    v0 = LD32(a3);
    v1 = a2 << 9;
    a2 = a2 + 1;
    v0 = v0 + v1;
    a0 = a2 < 0x40u;
    ST32(a1, v0);
    cnd_ = a0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_08897B90; }
    goto L_08897BB0;
L_08897BB0:;
    v0 = D_08B29CB4 - (-25420);
    ST32(v0-25420, 0);
    goto L_08897A24;
}

/* 08897BBC */
u64 func_08897BBC(void)
{
    u32 v0 = 0, v1 = 0;
L_08897BBC:;
    v1 = D_08B29CA4 - (-25436);
    v0 = LD_U8(v1-25436);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08897BC8 */
u64 func_08897BC8(void)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897BC8:;
    sp = sp - 16;
    { u64 r_ = func_08897BBC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08897BD8;
L_08897BD8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08897BE4 */
rv_t func_08897BE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08897BE4:;
    sp = sp - 32;
    v0 = a0 + 0;
    a2 = D_08B29DC0 - (-25152);
    a0 = D_08B29CC0 - (-25408);
    a3 = ((u32)(uintptr_t)func_08897C28) - (31784);
    a2 = a2 - 25152;
    a0 = a0 - 25408;
    a3 = a3 + 31784;
    a1 = 128;
    t0 = sp + 0;
    t1 = 1;
    ST16(sp, v0);
    { rv_t r_ = func_0883C3F8(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897C1C;
L_08897C1C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08897C28 */
rv_t func_08897C28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897C28:;
    sp = sp - 16;
    v0 = 290;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08897D8C; }
    goto L_08897C38;
L_08897C38:;
    v0 = (s32)a0 < 291;
    cnd_ = v0 == 0;
    v0 = 294;
    if (cnd_) { goto L_08897D00; }
    goto L_08897C44;
L_08897C44:;
    v0 = 13;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = D_08B29CC0 - (-25408); goto L_08897CE0; }
    goto L_08897C50;
L_08897C50:;
    v0 = (s32)a0 < 14;
    cnd_ = v0 == 0;
    v0 = 27;
    if (cnd_) { goto L_08897C90; }
    goto L_08897C5C;
L_08897C5C:;
    v0 = 9;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08897C80; }
    goto L_08897C68;
L_08897C68:;
    func_0889A588();
    goto L_08897C70;
L_08897C70:;
    v0 = 0 + 0;
    goto L_08897C74;
L_08897C74:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08897C80:;
    a0 = 0 + 0;
    { rv_t r_ = func_08899D14(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897C88;
L_08897C88:;
    v0 = 1;
    goto L_08897C74;
L_08897C90:;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_08897CC8; }
    goto L_08897C98;
L_08897C98:;
    v0 = 289;
    cnd_ = a0 != v0;
    v0 = D_08B29CAC - (-25428);
    if (cnd_) { goto L_08897C68; }
    goto L_08897CA4;
L_08897CA4:;
    a0 = LD32(v0-25428);
    a1 = 0 + 0;
    goto L_08897CAC;
L_08897CAC:;
    a2 = 0 + 0;
    goto L_08897CB0;
L_08897CB0:;
    v1 = LD32(a0);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897CC0;
L_08897CC0:;
    v0 = 1;
    goto L_08897C74;
L_08897CC8:;
    func_0889A574();
    goto L_08897CD0;
L_08897CD0:;
    func_0889A588();
    goto L_08897CD8;
L_08897CD8:;
    v0 = 1;
    goto L_08897C74;
L_08897CE0:;
    a0 = a0 - 25408;
    goto L_08897CE4;
L_08897CE4:;
    a1 = 1;
    a2 = 1;
    a3 = 0 + 0;
    t0 = 0 + 0;
    { rv_t r_ = func_0889A628(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897CF8;
L_08897CF8:;
    v0 = 1;
    goto L_08897C74;
L_08897D00:;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = 1; goto L_08897D7C; }
    goto L_08897D08;
L_08897D08:;
    v0 = (s32)a0 < 295;
    cnd_ = v0 == 0;
    v0 = 296;
    if (cnd_) { goto L_08897D60; }
    goto L_08897D14;
L_08897D14:;
    v0 = 291;
    cnd_ = a0 == v0;
    v0 = 292;
    if (cnd_) { goto L_08897D44; }
    goto L_08897D20;
L_08897D20:;
    cnd_ = a0 != v0;
    v0 = D_08B289AD - (-30291);
    if (cnd_) { goto L_08897C68; }
    goto L_08897D28;
L_08897D28:;
    v1 = LD_U8(v0-30291);
    cnd_ = v1 == 0;
    v0 = D_08B29CAC - (-25428);
    if (cnd_) { goto L_08897C68; }
    goto L_08897D34;
L_08897D34:;
    a0 = LD32(v0-25428);
    a1 = 0 + 0;
    goto L_08897D3C;
L_08897D3C:;
    a2 = 1;
    goto L_08897CB0;
L_08897D44:;
    v0 = D_08B289AD - (-30291);
    v1 = LD_U8(v0-30291);
    cnd_ = v1 == 0;
    v0 = D_08B29CAC - (-25428);
    if (cnd_) { goto L_08897C68; }
    goto L_08897D54;
L_08897D54:;
    a0 = LD32(v0-25428);
    a1 = 1;
    goto L_08897D3C;
L_08897D60:;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = (u32)-1; goto L_08897D7C; }
    goto L_08897D68;
L_08897D68:;
    v0 = 364;
    cnd_ = a0 != v0;
    a0 = D_08B29CC0 - (-25408);
    if (cnd_) { goto L_08897C68; }
    goto L_08897D74;
L_08897D74:;
    a0 = a0 - 25408;
    goto L_08897CE4;
L_08897D7C:;
    func_0889A9E0(a0);
    goto L_08897D84;
L_08897D84:;
    v0 = 1;
    goto L_08897C74;
L_08897D8C:;
    v0 = D_08B29CAC - (-25428);
    a0 = LD32(v0-25428);
    a1 = 1;
    goto L_08897CAC;
}

/* 08897D9C */
void func_08897D9C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897D9C:;
    sp = sp - 16;
    v0 = func_08A60B74();
    goto L_08897DAC;
L_08897DAC:;
    a0 = D_08B29CC0 - (-25408);
    a2 = D_08B29DC0 - (-25152);
    a3 = ((u32)(uintptr_t)func_08897C28) - (31784);
    a0 = a0 - 25408;
    a2 = a2 - 25152;
    a3 = a3 + 31784;
    cnd_ = v0 == 0;
    a1 = 128;
    if (cnd_) { goto L_08897E0C; }
    goto L_08897DCC;
L_08897DCC:;
    v0 = D_08B29CAC - (-25428);
    a1 = LD32(v0-25428);
    v1 = LD32(a1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897DE4;
L_08897DE4:;
    a0 = 0 + 0;
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08897DFC; }
    goto L_08897DF0;
L_08897DF0:;
    goto L_08897DF4;
L_08897DF4:;
    sp = sp + 16;
    return;
L_08897DFC:;
    func_08897934(a0, a1);
    goto L_08897E04;
L_08897E04:;
    goto L_08897DF4;
L_08897E0C:;
    v0 = D_08B28B5C - (-29860);
    v1 = D_08B28B58 - (-29864);
    t0 = LD32(v0-29860);
    t1 = LD32(v1-29864);
    { rv_t r_ = func_0883C3F8(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897E20;
L_08897E20:;
    goto L_08897DF4;
}

/* 08897E28 */
void func_08897E28(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897E28:;
    sp = sp - 16;
    v0 = D_08B29CAC - (-25428);
    a0 = LD32(v0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897E48;
L_08897E48:;
    sp = sp + 16;
    return;
}

/* 08897E54 */
void func_08897E54(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897E54:;
    sp = sp - 16;
    s0 = D_08B29CAC - (-25428);
    func_088997F0(t1, t2, t3);
    goto L_08897E68;
L_08897E68:;
    func_08898BCC(0, 0, 0);
    goto L_08897E70;
L_08897E70:;
    a0 = LD32(s0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897E84;
L_08897E84:;
    a0 = LD32(s0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897E98;
L_08897E98:;
    v0 = v0 ^ 0x1;
    v1 = D_08B29CA4 - (-25436);
    ST8(v1-25436, v0);
    a0 = 1;
    v0 = D_08B29CA5 - (-25435);
    v1 = D_08B29CA8 - (-25432);
    ST8(v0-25435, a0);
    ST32(v1-25432, 0);
    sp = sp + 16;
    return;
}

/* 08897EC8 */
void func_08897EC8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897EC8:;
    sp = sp - 16;
    s0 = D_08B29CB0 - (-25424);
    func_08899C28(t1, t2, t3);
    goto L_08897EE0;
L_08897EE0:;
    s1 = D_08B29CAC - (-25428);
    func_08898CA8(0, 0, 0);
    goto L_08897EE8;
L_08897EE8:;
    v1 = LD32(s0-25424);
    cnd_ = v1 == 0;
    v0 = LD32(s1-25428);
    if (cnd_) { goto L_08897F10; }
    goto L_08897EF4;
L_08897EF4:;
    v0 = LD32(v1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08897F58; }
    goto L_08897F00;
L_08897F00:;
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_08897F48; }
    goto L_08897F08;
L_08897F08:;
    ST32(s0-25424, 0);
    goto L_08897F0C;
L_08897F0C:;
    v0 = LD32(s1-25428);
    goto L_08897F10;
L_08897F10:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08897F30; }
    goto L_08897F18;
L_08897F18:;
    ST32(s1-25428, 0);
    goto L_08897F1C;
L_08897F1C:;
    sp = sp + 16;
    return;
L_08897F30:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897F40;
L_08897F40:;
    ST32(s1-25428, 0);
    goto L_08897F1C;
L_08897F48:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08897F50;
L_08897F50:;
    ST32(s0-25424, 0);
    goto L_08897F0C;
L_08897F58:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08897F60;
L_08897F60:;
    v1 = LD32(s0-25424);
    goto L_08897F00;
}

/* 08897F68 */
void func_08897F68(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08897F68:;
    sp = sp - 16;
    v0 = D_08B29CA4 - (-25436);
    v1 = LD_U8(v0-25436);
    cnd_ = v1 != 0;
    s0 = D_08B29CAC - (-25428);
    if (cnd_) { goto L_08897FF8; }
    goto L_08897F84;
L_08897F84:;
    v0 = D_08B29CA5 - (-25435);
    v1 = LD_U8(v0-25435);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_08897FC0; }
    goto L_08897F94;
L_08897F94:;
    func_0889AB14(t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_08897F9C;
L_08897F9C:;
    a0 = LD32(s0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08897FB0;
L_08897FB0:;
    sp = sp + 16;
    return;
L_08897FC0:;
    v0 = func_08A60B74();
    goto L_08897FC8;
L_08897FC8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08897F94; }
    goto L_08897FD0;
L_08897FD0:;
    v0 = func_08A60B6C();
    goto L_08897FD8;
L_08897FD8:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08897F94; }
    goto L_08897FE0;
L_08897FE0:;
    func_0889A91C(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_08897FE8;
L_08897FE8:;
    func_0889ABC8();
    goto L_08897FF0;
L_08897FF0:;
    goto L_08897F94;
L_08897FF8:;
    v0 = LD32(s0-25428);
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898010;
L_08898010:;
    a1 = ((u32)(uintptr_t)func_08897BE4) - (31716);
    cnd_ = v0 == 0;
    a1 = a1 + 31716;
    if (cnd_) { goto L_08898038; }
    goto L_0889801C;
L_0889801C:;
    v0 = LD32(s0-25428);
    v1 = LD32(v0);
    a2 = LD32(v1+36);
    t_ = a2;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898030;
L_08898030:;
    goto L_08897F94;
L_08898038:;
    func_08897D9C();
    goto L_08898040;
L_08898040:;
    goto L_08897F94;
}

/* 08898048 */
rv_t func_08898048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 560);
L_08898048:;
    sp = sp - 560;
    ST32(sp+532, a1);
    a1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp+536, a2);
    a2 = sp + 532;
    ST32(sp+540, a3);
    a3 = 256;
    ST32(sp+544, t0);
    t0 = 1;
    s1 = D_08B29CA8 - (-25432);
    ST32(sp+548, t1);
    ST32(sp+552, t2);
    ST32(sp+556, t3);
    func_08837534(a0, a1, a2, a3, t0);
    goto L_08898094;
L_08898094:;
    a0 = sp + 0;
    a1 = 2;
    func_08837EB4(a0, a1);
    goto L_088980A0;
L_088980A0:;
    v1 = LD32(s1-25432);
    v0 = ((u32)(uintptr_t)func_08898424) - (-31708);
    a0 = sp + 0;
    s0 = v0 - 31708;
    cnd_ = v1 == 0;
    s2 = 0 < v1;
    if (cnd_) { goto L_088980C0; }
    goto L_088980B8;
L_088980B8:;
    ST32(s1-25432, 0);
    s0 = v1 + 0;
    goto L_088980C0;
L_088980C0:;
    t_ = s0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088980C8;
L_088980C8:;
    v0 = D_08B29CAC - (-25428);
    a0 = LD32(v0-25428);
    v0 = LD32(s1-25432);
    a1 = 1;
    v1 = LD32(a0);
    if (s2 != 0) v0 = s0;
    ST32(s1-25432, v0);
    a3 = LD32(v1+52);
    t_ = a3;
    a2 = 1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088980F0;
L_088980F0:;
    sp = sp + 560;
    return (rv_t){ v0, v1, f0 };
}

/* 08898108 */
rv_t func_08898108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 304);
L_08898108:;
    sp = sp - 304;
    ST32(sp+276, a1);
    a1 = a0 + 0;
    a0 = sp + 0;
    ST32(sp+280, a2);
    a2 = sp + 276;
    ST32(sp+284, a3);
    a3 = 256;
    ST32(sp+288, t0);
    t0 = 1;
    ST32(sp+292, t1);
    ST32(sp+296, t2);
    ST32(sp+300, t3);
    func_08837508(a0, a1, a2, a3, t0);
    goto L_08898144;
L_08898144:;
    a0 = D_08AD5214 - (21012);
    a0 = a0 + 21012;
    a1 = sp + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898154;
L_08898154:;
    sp = sp + 304;
    return (rv_t){ v0, v1, f0 };
}

/* 08898160 */
rv_t func_08898160(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08898160:;
    sp = sp - 16;
    v0 = D_08B29CA8 - (-25432);
    v1 = LD32(v0-25432);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898178;
L_08898178:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08898184 */
void func_08898184(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08898184:;
    sp = sp - 16;
    v0 = D_08B29CAC - (-25428);
    a0 = LD32(v0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+64);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088981A4;
L_088981A4:;
    sp = sp + 16;
    return;
}

/* 088981B0 */
void func_088981B0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088981B0:;
    sp = sp - 16;
    v0 = D_08B29CAC - (-25428);
    a1 = a0 + 0;
    a2 = LD32(v0-25428);
    v1 = LD32(a2);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088981D4;
L_088981D4:;
    sp = sp + 16;
    return;
}

/* 088981E0 */
void func_088981E0(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088981E0:;
    sp = sp - 16;
    v0 = D_08B29CAC - (-25428);
    a1 = a0 + 0;
    a2 = LD32(v0-25428);
    v1 = LD32(a2);
    v0 = LD32(v1+76);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898204;
L_08898204:;
    sp = sp + 16;
    return;
}

/* 08898210 */
rv_t func_08898210(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08898210:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AD521C - (21020);
    a1 = a1 & 0xff;
    a0 = a0 + 21020;
    cnd_ = a1 != 0;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_088982D4; }
    goto L_08898230;
L_08898230:;
    cnd_ = v0 != 0;
    a0 = D_08AD52A0 - (21152);
    if (cnd_) { goto L_08898298; }
    goto L_08898238;
L_08898238:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    a0 = a0 + 21152;
    if (cnd_) { goto L_08898264; }
    goto L_0889824C;
L_0889824C:;
    v0 = D_08AEC314 - (-15596);
    f0 = BITSF(LD32(v0-15596));
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    v0 = D_08B29CAC - (-25428);
    if (cnd_) { goto L_0889827C; }
    goto L_08898264;
L_08898264:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889826C;
L_0889826C:;
    v0 = 0 + 0;
    goto L_08898270;
L_08898270:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889827C:;
    a1 = LD32(v0-25428);
    v0 = LD32(a1);
    v1 = LD32(v0+64);
    t_ = v1;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898290;
L_08898290:;
    v0 = 1;
    goto L_08898270;
L_08898298:;
    v0 = D_08B29CAC - (-25428);
    a1 = LD32(v0-25428);
    v0 = LD32(a1);
    v1 = LD32(v0+68);
    t_ = v1;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088982B0;
L_088982B0:;
    f12 = f0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088982B8;
L_088982B8:;
    a0 = D_08AD52E8 - (21224);
    a0 = a0 + 21224;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088982CC;
L_088982CC:;
    v0 = 1;
    goto L_08898270;
L_088982D4:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088982DC;
L_088982DC:;
    v0 = 1;
    goto L_08898270;
}

/* 088982E4 */
rv_t func_088982E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088982E4:;
    sp = sp - 16;
    v1 = a0 + 0;
    a2 = a2 & 0xff;
    a0 = D_08AD5310 - (21264);
    a0 = a0 + 21264;
    cnd_ = a2 != 0;
    v0 = a1 & 0xff;
    if (cnd_) { goto L_0889830C; }
    goto L_08898304;
L_08898304:;
    cnd_ = v0 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_08898324; }
    goto L_0889830C;
L_0889830C:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898314;
L_08898314:;
    v0 = 1;
    goto L_0889831C;
L_0889831C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08898324:;
    v0 = D_08B29CAC - (-25428);
    a2 = LD32(v0-25428);
    v1 = LD32(a2);
    v0 = LD32(v1+84);
    t_ = v0;
    a0 = a2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889833C;
L_0889833C:;
    goto L_0889831C;
}

/* 08898344 */
rv_t func_08898344(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08898344:;
    sp = sp - 16;
    v0 = D_08B29CAC - (-25428);
    a0 = LD32(v0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+56);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898364;
L_08898364:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08898370 */
float func_08898370(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08898370:;
    sp = sp - 16;
    v0 = D_08B29CAC - (-25428);
    a0 = LD32(v0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898390;
L_08898390:;
    sp = sp + 16;
    return f0;
}

/* 0889839C */
void func_0889839C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_0889839C:;
    cnd_ = a0 == 0;
    v0 = D_08B29CC0 - (-25408);
    if (cnd_) { goto L_088983AC; }
    goto L_088983A4;
L_088983A4:;
    v0 = v0 - 25408;
    ST32(a0, v0);
    goto L_088983AC;
L_088983AC:;
    cnd_ = a1 == 0;
    v0 = D_08B29DC0 - (-25152);
    if (cnd_) { goto L_088983BC; }
    goto L_088983B4;
L_088983B4:;
    v1 = LD32(v0-25152);
    ST32(a1, v1);
    goto L_088983BC;
L_088983BC:;
    return;
}

/* 088983C4 */
void func_088983C4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088983C4:;
    cnd_ = a0 == 0;
    v0 = D_08B29CB0 - (-25424);
    if (cnd_) { goto L_088983D4; }
    goto L_088983CC;
L_088983CC:;
    v1 = LD32(v0-25424);
    ST32(a0, v1);
    goto L_088983D4;
L_088983D4:;
    cnd_ = a1 == 0;
    v0 = D_08B29CB8 - (-25416);
    if (cnd_) { goto L_088983E4; }
    goto L_088983DC;
L_088983DC:;
    v1 = LD32(v0-25416);
    ST32(a1, v1);
    goto L_088983E4;
L_088983E4:;
    cnd_ = a2 == 0;
    v0 = D_08B29CB4 - (-25420);
    if (cnd_) { goto L_088983F4; }
    goto L_088983EC;
L_088983EC:;
    v1 = LD32(v0-25420);
    ST32(a2, v1);
    goto L_088983F4;
L_088983F4:;
    return;
}

/* 088983FC */
rv_t func_088983FC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088983FC:;
    sp = sp - 16;
    a3 = a1 + 0;
    t0 = a2 + 0;
    a1 = 0 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_0889A628(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898418;
L_08898418:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 08898424 */
rv_t func_08898424(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08898424:;
    sp = sp - 32;
    s3 = D_08B29CAC - (-25428);
    s6 = D_08B29CBC - (-25412);
    s5 = D_08B29CB0 - (-25424);
    s2 = a0 + 0;
    v0 = LD32(s3-25428);
    a0 = v0 + 0;
    v1 = LD32(v0);
    v0 = LD32(v1+40);
    t_ = v0;
    s4 = D_08AD53A4 - (21412);
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898470;
L_08898470:;
    cnd_ = v0 != 0;
    a0 = LD32(s3-25428);
    if (cnd_) { goto L_0889850C; }
    goto L_08898478;
L_08898478:;
    v1 = LD32(a0);
    v0 = LD32(v1+88);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898488;
L_08898488:;
    s0 = v0 - s2;
    s0 = (u32)((s32)s0 >> 1);
    s0 = s0 + 1;
    v1 = s0 < 0x101u;
    s1 = v0 + 0;
    v0 = 256;
    if (v1 == 0) s0 = v0;
    func_0889A958();
    goto L_088984A8;
L_088984A8:;
    v0 = LD32(s6-25412);
    v1 = LD32(s5-25424);
    t0 = s2 + 0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a2 = s0 + 0;
    a1 = s4 + 21412;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088984D0;
L_088984D0:;
    cnd_ = s1 == 0;
    s2 = s1 + 0;
    if (cnd_) { goto L_088984E4; }
    goto L_088984D8;
L_088984D8:;
    v0 = LD_U16(s1);
    cnd_ = v0 != 0;
    a0 = LD32(s3-25428);
    if (cnd_) { goto L_08898478; }
    goto L_088984E4;
L_088984E4:;
    goto L_088984E8;
L_088984E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0889850C:;
    v1 = LD32(a0);
    v0 = LD32(v1+44);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889851C;
L_0889851C:;
    goto L_088984E8;
}

/* 08898524 */
void func_08898524(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08898524:;
    sp = sp - 176;
    s4 = t0 + 0;
    s3 = a3 + 0;
    s2 = a1 + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0889857C; }
    goto L_08898564;
L_08898564:;
    v0 = LD_U16(a0);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08898580; }
    goto L_08898570;
L_08898570:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088985B0; }
    goto L_0889857C;
L_0889857C:;
    v1 = 0 + 0;
    goto L_08898580;
L_08898580:;
    v0 = v1 + 0;
    sp = sp + 176;
    return;
L_088985B0:;
    a1 = 0 + 0;
    { u64 r_ = func_08898A48(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088985B8;
L_088985B8:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08898580; }
    goto L_088985C0;
L_088985C0:;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088985C8;
L_088985C8:;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08898580; }
    goto L_088985D0;
L_088985D0:;
    a0 = 24;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088985D8;
L_088985D8:;
    s5 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08898580; }
    goto L_088985E4;
L_088985E4:;
    s7 = D_08B2A70C - (-22772);
    v0 = LD32(s1);
    s1 = LD32(s7-22772);
    s6 = 0 + 0;
    ST32(s5+4, s2);
    ST32(s5+8, v0);
    ST32(s5+12, s3);
    ST32(s5+16, s4);
    ST32(s5, s0);
    goto L_08898608;
L_08898608:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_08898630; }
    goto L_08898610;
L_08898610:;
    a1 = LD32(s1);
    a0 = LD32(s5);
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889861C;
L_0889861C:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08898630; }
    goto L_08898624;
L_08898624:;
    s6 = s1 + 0;
    s1 = LD32(s1+20);
    goto L_08898608;
L_08898630:;
    cnd_ = s6 == 0;
    if (cnd_) { ST32(s7-22772, s5); goto L_0889863C; }
    goto L_08898638;
L_08898638:;
    ST32(s6+20, s5);
    goto L_0889863C;
L_0889863C:;
    ST32(s5+20, s1);
    a1 = D_08AD53AC - (21420);
    a1 = a1 + 21420;
    t0 = s0 + 0;
    a2 = 128;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889865C;
L_0889865C:;
    s2 = D_08B2A710 - (-22768);
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898668;
L_08898668:;
    v1 = s2 - 22768;
    s0 = v0 + 0;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088986E0; }
    goto L_0889867C;
L_0889867C:;
    v0 = LD32(s2-22768);
    cnd_ = v0 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_088986B4; }
    goto L_08898688;
L_08898688:;
    v1 = v0 + 0;
    goto L_0889868C;
L_0889868C:;
    a0 = v1 + 12;
    s1 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_088986E0; }
    goto L_088986A8;
L_088986A8:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0889868C; }
    goto L_088986B4;
L_088986B4:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088986BC;
L_088986BC:;
    ST32(v0, s0);
    a0 = s2 - 22768;
    a1 = v0 + 4;
    v1 = LD32(a0+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(a0+4, v1);
    ST32(s1, v0);
    goto L_088986E0;
L_088986E0:;
    ST32(a1, s5);
    v1 = 1;
    goto L_08898580;
}

/* 088986EC */
void func_088986EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_088986EC:;
    sp = sp - 144;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0889882C; }
    goto L_08898708;
L_08898708:;
    v0 = LD_U16(a0);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088987E0; }
    goto L_08898714;
L_08898714:;
    s2 = D_08B2A70C - (-22772);
    s0 = LD32(s2-22772);
    goto L_0889871C;
L_0889871C:;
    a1 = s1 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088987E0; }
    goto L_08898728;
L_08898728:;
    a0 = LD32(s0);
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898730;
L_08898730:;
    cnd_ = v0 == 0;
    a1 = LD32(s2-22772);
    if (cnd_) { goto L_08898740; }
    goto L_08898738;
L_08898738:;
    s0 = LD32(s0+20);
    goto L_0889871C;
L_08898740:;
    cnd_ = a1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088987E0; }
    goto L_08898748;
L_08898748:;
    v1 = LD32(a1+20);
    cnd_ = v1 == s0;
    if (cnd_) { goto L_08898768; }
    goto L_08898754;
L_08898754:;
    cnd_ = v1 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0889882C; }
    goto L_0889875C;
L_0889875C:;
    v0 = LD32(v1+20);
    cnd_ = v0 != s0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08898754; }
    goto L_08898768;
L_08898768:;
    cnd_ = a1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0889882C; }
    goto L_08898770;
L_08898770:;
    v0 = LD32(s0+20);
    ST32(a1+20, v0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889877C;
L_0889877C:;
    a1 = D_08AD53AC - (21420);
    t0 = s1 + 0;
    a1 = a1 + 21420;
    a2 = 128;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898798;
L_08898798:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088987A0;
L_088987A0:;
    s1 = v0 + 0;
    v0 = D_08B2A710 - (-22768);
    s0 = v0 - 22768;
    v1 = LD_U8(s0+8);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0889880C; }
    goto L_088987B8;
L_088987B8:;
    a0 = LD32(s0+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s0+4); goto L_088987F8; }
    goto L_088987C4;
L_088987C4:;
    v1 = LD32(s0+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s1);
    ST32(s0+16, v1);
    v0 = 1;
    goto L_088987E0;
L_088987E0:;
    sp = sp + 144;
    return;
L_088987F8:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898800;
L_08898800:;
    ST32(s0+12, v0);
    a0 = v0 + 0;
    goto L_088987C4;
L_0889880C:;
    a1 = s1 + 0;
    v0 = func_08AB1D50(a0, a1);
    goto L_08898814;
L_08898814:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 1; goto L_088987E0; }
    goto L_0889881C;
L_0889881C:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898824;
L_08898824:;
    v0 = 1;
    goto L_088987E0;
L_0889882C:;
    v0 = 0 + 0;
    goto L_088987E0;
}

/* 08898834 */
rv_t func_08898834(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[192] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 192);
L_08898834:;
    sp = sp - 192;
    s2 = a1 + 0;
    a1 = 0 + 0;
    s4 = a3 + 0;
    s3 = a2 & 0xff;
    { u64 r_ = func_08898A48(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898864;
L_08898864:;
    s1 = v0 + 0;
    cnd_ = s1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088988C4; }
    goto L_08898870;
L_08898870:;
    a0 = LD32(s1+16);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08898A30; }
    goto L_0889887C;
L_0889887C:;
    a2 = LD32(s1+4);
    goto L_08898880;
L_08898880:;
    v0 = a2 < 0x7u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088988B8; }
    goto L_0889888C;
L_0889888C:;
    v1 = D_08AD5440 - (21568);
    v0 = a2 << 2;
    v1 = v1 + 21568;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088988A8u: goto L_088988A8; case 0x088988E4u: goto L_088988E4; case 0x08898940u: goto L_08898940; case 0x088989ACu: goto L_088989AC; case 0x088989F0u: goto L_088989F0; case 0x08898A20u: goto L_08898A20; default: rs_break(0, 0x088988a0); }
L_088988A8:;
    v0 = LD32(s1+8);
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088988B4;
L_088988B4:;
    v1 = v0 + 0;
    goto L_088988B8;
L_088988B8:;
    cnd_ = s4 != 0;
    if (cnd_) { ST8(s4, v1); goto L_088988C0; }
    goto L_088988C0;
L_088988C0:;
    v0 = 1;
    goto L_088988C4;
L_088988C4:;
    sp = sp + 192;
    return (rv_t){ v0, v1, f0 };
L_088988E4:;
    a1 = LD_U16(s2);
    cnd_ = a1 == 0;
    ST8(sp, 0);
    if (cnd_) { goto L_08898908; }
    goto L_088988F0;
L_088988F0:;
    a0 = s2 + 0;
    a1 = sp + 0;
    v0 = func_08837A40(a0, a1);
    goto L_088988FC;
L_088988FC:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08898928; }
    goto L_08898904;
L_08898904:;
    a1 = LD_U16(s2);
    goto L_08898908;
L_08898908:;
    a0 = LD_U8(sp);
    v0 = LD32(s1+8);
    goto L_08898910;
L_08898910:;
    a1 = a1 & 0xffff;
    goto L_08898914;
L_08898914:;
    a1 = a1 < 0x1u;
    t_ = v0;
    a2 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898920;
L_08898920:;
    v1 = v0 + 0;
    goto L_088988B8;
L_08898928:;
    a0 = D_08AD53B0 - (21424);
    a0 = a0 + 21424;
    goto L_08898930;
L_08898930:;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898938;
L_08898938:;
    v1 = 0 + 0;
    goto L_088988B8;
L_08898940:;
    a1 = LD_U16(s2);
    cnd_ = a1 != 0;
    ST32(sp+144, 0);
    if (cnd_) { goto L_08898988; }
    goto L_0889894C;
L_0889894C:;
    v0 = 3;
    cnd_ = a2 == v0;
    a0 = LD32(sp+144);
    if (cnd_) { goto L_08898960; }
    goto L_08898958;
L_08898958:;
    v0 = LD32(s1+8);
    goto L_08898910;
L_08898960:;
    v0 = a1 & 0xffff;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08898910; }
    goto L_0889896C;
L_0889896C:;
    a0 = LD32(sp+144);
    cnd_ = (s32)a0 >= 0;
    if (cnd_) { v0 = LD32(s1+8); goto L_08898910; }
    goto L_08898978;
L_08898978:;
    a1 = LD32(s1);
    a0 = D_08AD53EC - (21484);
    a0 = a0 + 21484;
    goto L_08898930;
L_08898988:;
    a0 = s2 + 0;
    a1 = sp + 144;
    a2 = 0 + 0;
    v0 = func_08837CB8(a0, a1, a2);
    goto L_08898998;
L_08898998:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08898928; }
    goto L_088989A0;
L_088989A0:;
    a1 = LD_U16(s2);
    a2 = LD32(s1+4);
    goto L_0889894C;
L_088989AC:;
    a1 = LD_U16(s2);
    cnd_ = a1 == 0;
    ST32(sp+148, 0);
    if (cnd_) { goto L_088989D0; }
    goto L_088989B8;
L_088989B8:;
    a0 = s2 + 0;
    a1 = sp + 148;
    v0 = func_08837B28(a0, a1);
    goto L_088989C4;
L_088989C4:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_08898928; }
    goto L_088989CC;
L_088989CC:;
    a1 = LD_U16(s2);
    goto L_088989D0;
L_088989D0:;
    v0 = LD32(s1+8);
    f12 = BITSF(LD32(sp+148));
    a0 = a1 & 0xffff;
    a0 = a0 < 0x1u;
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088989E8;
L_088989E8:;
    v1 = v0 + 0;
    goto L_088988B8;
L_088989F0:;
    s0 = sp + 16;
    a1 = D_08AD53AC - (21420);
    a1 = a1 + 21420;
    a0 = s0 + 0;
    a2 = 128;
    a3 = 1;
    t0 = s2 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898A10;
L_08898A10:;
    a1 = LD_U16(s2);
    v0 = LD32(s1+8);
    a0 = s0 + 0;
    goto L_08898914;
L_08898A20:;
    a1 = LD_U16(s2);
    v0 = LD32(s1+8);
    a0 = s2 + 0;
    goto L_08898914;
L_08898A30:;
    a1 = 1;
    { rv_t r_ = func_08A60B98(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898A38;
L_08898A38:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088988B8; }
    goto L_08898A40;
L_08898A40:;
    a2 = LD32(s1+4);
    goto L_08898880;
}

/* 08898A48 */
u64 func_08898A48(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08898A48:;
    sp = sp - 160;
    s2 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_08898B18; }
    goto L_08898A70;
L_08898A70:;
    cnd_ = a0 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_08898A84; }
    goto L_08898A78;
L_08898A78:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08898AA8; }
    goto L_08898A84;
L_08898A84:;
    v0 = s4 + 0;
    goto L_08898A88;
L_08898A88:;
    sp = sp + 160;
    return (u64)v0 | ((u64)v1 << 32);
L_08898AA8:;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898AB0;
L_08898AB0:;
    s3 = v0 + 0;
    v0 = D_08B2A70C - (-22772);
    s0 = LD32(v0-22772);
    cnd_ = s0 == 0;
    v0 = s4 + 0;
    if (cnd_) { goto L_08898A88; }
    goto L_08898AC4;
L_08898AC4:;
    a0 = s1 + 0;
    goto L_08898AC8;
L_08898AC8:;
    cnd_ = s2 == 0;
    a2 = s3 + 0;
    if (cnd_) { goto L_08898B04; }
    goto L_08898AD0;
L_08898AD0:;
    a1 = LD32(s0);
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898AD8;
L_08898AD8:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08898AF4; }
    goto L_08898AE0;
L_08898AE0:;
    s0 = LD32(s0+20);
    cnd_ = s0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_08898AC8; }
    goto L_08898AEC;
L_08898AEC:;
    v0 = s4 + 0;
    goto L_08898A88;
L_08898AF4:;
    cnd_ = v0 == 0;
    if (cnd_) { s4 = s0 + 0; goto L_08898A84; }
    goto L_08898AFC;
L_08898AFC:;
    v0 = s4 + 0;
    goto L_08898A88;
L_08898B04:;
    a1 = LD32(s0);
    a0 = s1 + 0;
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898B10;
L_08898B10:;
    goto L_08898AD8;
L_08898B18:;
    cnd_ = a0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08898A88; }
    goto L_08898B20;
L_08898B20:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    a1 = D_08AD53AC - (21420);
    if (cnd_) { goto L_08898B34; }
    goto L_08898B2C;
L_08898B2C:;
    v0 = 0 + 0;
    goto L_08898A88;
L_08898B34:;
    t0 = a0 + 0;
    a1 = a1 + 21420;
    a2 = 128;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898B4C;
L_08898B4C:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898B54;
L_08898B54:;
    t0 = D_08B2A710 - (-22768);
    v1 = LD32(t0-22768);
    cnd_ = v1 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08898B90; }
    goto L_08898B64;
L_08898B64:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08898B6C;
L_08898B6C:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08898BA0; }
    goto L_08898B84;
L_08898B84:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08898B6C; }
    goto L_08898B90;
L_08898B90:;
    v0 = t0 - 22768;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08898BB0; }
    goto L_08898BA0;
L_08898BA0:;
    cnd_ = a3 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_08898A88; }
    goto L_08898BA8;
L_08898BA8:;
    v0 = LD32(a3);
    goto L_08898A88;
L_08898BB0:;
    a2 = 1;
    { u64 r_ = func_08AB1FB8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898BB8;
L_08898BB8:;
    a3 = v0 + 0;
    goto L_08898BA0;
}

/* 08898BC0 */
void func_08898BC0(void)
{
    u32 v0 = 0;
L_08898BC0:;
    v0 = D_08B2A70C - (-22772);
    ST32(v0-22772, 0);
    return;
}

/* 08898BCC */
void func_08898BCC(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_08898BCC:;
    sp = sp - 160;
    s4 = D_08B2A70C - (-22772);
    s0 = LD32(s4-22772);
    s2 = 0 + 0;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08898C24; }
    goto L_08898C00;
L_08898C00:;
    s3 = 1;
    s6 = D_08AD53AC - (21420);
    s5 = D_08B2A710 - (-22768);
    goto L_08898C0C;
L_08898C0C:;
    v0 = LD32(s0+12);
    cnd_ = v0 == s3;
    s1 = LD32(s0+20);
    if (cnd_) { goto L_08898C4C; }
    goto L_08898C18;
L_08898C18:;
    s2 = s0 + 0;
    goto L_08898C1C;
L_08898C1C:;
    cnd_ = s1 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_08898C0C; }
    goto L_08898C24;
L_08898C24:;
    sp = sp + 160;
    return;
L_08898C4C:;
    cnd_ = s2 == 0;
    v0 = LD32(s4-22772);
    if (cnd_) { goto L_08898C94; }
    goto L_08898C54;
L_08898C54:;
    ST32(s2+20, s1);
    goto L_08898C58;
L_08898C58:;
    t0 = LD32(s0);
    a1 = s6 + 21420;
    a2 = 128;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898C70;
L_08898C70:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898C78;
L_08898C78:;
    a1 = v0 + 0;
    a0 = s5 - 22768;
    func_08AB1F20(a0, a1, 0, 0, 0);
    goto L_08898C84;
L_08898C84:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898C8C;
L_08898C8C:;
    goto L_08898C1C;
L_08898C94:;
    v1 = v0 + 0;
    v0 = s0 ^ v0;
    if (v0 == 0) v1 = s1;
    ST32(s4-22772, v1);
    goto L_08898C58;
}

/* 08898CA8 */
void func_08898CA8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_08898CA8:;
    sp = sp - 32;
    s1 = D_08B2A710 - (-22768);
    s0 = LD32(s1-22768);
    s2 = s1 - 22768;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08898CF0; }
    goto L_08898CD0;
L_08898CD0:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08898D6C; }
    goto L_08898CDC;
L_08898CDC:;
    a1 = LD32(s0+12);
    goto L_08898CE0;
L_08898CE0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08898D5C; }
    goto L_08898CE8;
L_08898CE8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898CF0;
L_08898CF0:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08898D4C; }
    goto L_08898CFC;
L_08898CFC:;
    s3 = D_08B2A70C - (-22772);
    a0 = LD32(s3-22772);
    goto L_08898D04;
L_08898D04:;
    v0 = s1 - 22768;
    ST32(s2+16, 0);
    ST32(v0+4, 0);
    ST32(s1-22768, 0);
    cnd_ = a0 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_08898D2C; }
    goto L_08898D1C;
L_08898D1C:;
    s0 = LD32(a0+20);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898D24;
L_08898D24:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08898D1C; }
    goto L_08898D2C;
L_08898D2C:;
    ST32(s3-22772, 0);
    sp = sp + 32;
    return;
L_08898D4C:;
    s3 = D_08B2A70C - (-22772);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898D54;
L_08898D54:;
    a0 = LD32(s3-22772);
    goto L_08898D04;
L_08898D5C:;
    a0 = s2 + 0;
    func_08AB2030(a0, a1, t1, t2, t3);
    goto L_08898D64;
L_08898D64:;
    goto L_08898CE8;
L_08898D6C:;
    a0 = s2 + 0;
    func_08AB2030(a0, a1, t1, t2, t3);
    goto L_08898D74;
L_08898D74:;
    a1 = LD32(s0+12);
    goto L_08898CE0;
}

/* 08898D7C */
u64 func_08898D7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_08898D7C:;
    sp = sp - 48;
    s3 = D_08B2A728 - (-22744);
    t5 = LD32(t3+12);
    v0 = LD32(t3);
    v1 = LD32(t3+4);
    t4 = LD32(t3+8);
    s0 = LD32(s3-22744);
    s2 = 0 + 0;
    s1 = a0 + 0;
    ST32(a0, a1);
    ST32(a0+12, t0);
    ST32(a0+24, v0);
    ST32(a0+28, v1);
    ST32(a0+32, t4);
    ST32(a0+36, t5);
    ST32(a0+4, a2);
    ST8(a0+8, a3);
    ST32(a0+16, t1);
    ST32(a0+20, t2);
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, t4);
    ST32(sp+12, t5);
    goto L_08898DEC;
L_08898DEC:;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_08898E14; }
    goto L_08898DF4;
L_08898DF4:;
    a1 = LD32(s0);
    a0 = LD32(s1);
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898E00;
L_08898E00:;
    cnd_ = (s32)v0 <= 0;
    if (cnd_) { goto L_08898E14; }
    goto L_08898E08;
L_08898E08:;
    s2 = s0 + 0;
    s0 = LD32(s0+40);
    goto L_08898DEC;
L_08898E14:;
    cnd_ = s2 == 0;
    if (cnd_) { ST32(s3-22744, s1); goto L_08898E20; }
    goto L_08898E1C;
L_08898E1C:;
    ST32(s2+40, s1);
    goto L_08898E20;
L_08898E20:;
    ST32(s1+40, s0);
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08898E40 */
void func_08898E40(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08898E40:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08898ECC; }
    goto L_08898E5C;
L_08898E5C:;
    a0 = LD32(s0+4);
    goto L_08898E60;
L_08898E60:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08898EBC; }
    goto L_08898E68;
L_08898E68:;
    v1 = D_08B2A728 - (-22744);
    goto L_08898E6C;
L_08898E6C:;
    v0 = LD32(v1-22744);
    cnd_ = v0 == s0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08898EB0; }
    goto L_08898E78;
L_08898E78:;
    v0 = LD32(v0+40);
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s0+40); goto L_08898E9C; }
    goto L_08898E84;
L_08898E84:;
    v1 = v0 + 0;
    goto L_08898E88;
L_08898E88:;
    v0 = LD32(v1+40);
    a1 = v1 + 0;
    cnd_ = v0 != s0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08898E88; }
    goto L_08898E98;
L_08898E98:;
    v0 = LD32(s0+40);
    goto L_08898E9C;
L_08898E9C:;
    ST32(a1+40, v0);
    goto L_08898EA0;
L_08898EA0:;
    sp = sp + 16;
    return;
L_08898EB0:;
    v0 = LD32(s0+40);
    ST32(v1-22744, v0);
    goto L_08898EA0;
L_08898EBC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898EC4;
L_08898EC4:;
    v1 = D_08B2A728 - (-22744);
    goto L_08898E6C;
L_08898ECC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898ED4;
L_08898ED4:;
    a0 = LD32(s0+4);
    goto L_08898E60;
}

/* 08898EDC */
rv_t func_08898EDC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_08898EDC:;
    sp = sp - 176;
    s2 = a1 + 0;
    s1 = a3 + 0;
    s0 = a2 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_08898F20; }
    goto L_08898F08;
L_08898F08:;
    v0 = LD_U16(a0);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08898F24; }
    goto L_08898F14;
L_08898F14:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08898F44; }
    goto L_08898F20;
L_08898F20:;
    v0 = 0 + 0;
    goto L_08898F24;
L_08898F24:;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_08898F44:;
    { rv_t r_ = func_08838030(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898F4C;
L_08898F4C:;
    s3 = v0 + 0;
    cnd_ = s3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08898F24; }
    goto L_08898F58;
L_08898F58:;
    a0 = s3 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898F60;
L_08898F60:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_08898F7C; }
    goto L_08898F68;
L_08898F68:;
    a0 = s3 + 0;
    a1 = 0 + 0;
    { u64 r_ = func_08898A48(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898F74;
L_08898F74:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08898F8C; }
    goto L_08898F7C;
L_08898F7C:;
    a0 = s3 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898F84;
L_08898F84:;
    v0 = 0 + 0;
    goto L_08898F24;
L_08898F8C:;
    a0 = 44;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08898F94;
L_08898F94:;
    s4 = v0 + 0;
    t5 = LD32(s0+12);
    v0 = LD32(s0);
    v1 = LD32(s0+4);
    t4 = LD32(s0+8);
    t1 = s2 + 0;
    t2 = s1 + 0;
    a0 = s4 + 0;
    a1 = s3 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t3 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    ST32(sp+8, t4);
    ST32(sp+12, t5);
    { u64 r_ = func_08898D7C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08898FDC;
L_08898FDC:;
    cnd_ = s4 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08898F24; }
    goto L_08898FE4;
L_08898FE4:;
    s0 = sp + 16;
    a1 = D_08AD53AC - (21420);
    a1 = a1 + 21420;
    a0 = s0 + 0;
    t0 = s3 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899004;
L_08899004:;
    s2 = D_08B2A72C - (-22740);
    a0 = s0 + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899010;
L_08899010:;
    v1 = s2 - 22740;
    s0 = v0 + 0;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08899088; }
    goto L_08899024;
L_08899024:;
    v0 = LD32(s2-22740);
    cnd_ = v0 == 0;
    s1 = v1 + 0;
    if (cnd_) { goto L_0889905C; }
    goto L_08899030;
L_08899030:;
    v1 = v0 + 0;
    goto L_08899034;
L_08899034:;
    a0 = v1 + 12;
    s1 = v1 + 8;
    v1 = LD32(v1);
    a1 = 0 + 0;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) s1 = a0;
    if (cnd_) { goto L_08899088; }
    goto L_08899050;
L_08899050:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_08899034; }
    goto L_0889905C;
L_0889905C:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899064;
L_08899064:;
    ST32(v0, s0);
    a0 = s2 - 22740;
    a1 = v0 + 4;
    v1 = LD32(a0+4);
    ST32(v0+8, 0);
    v1 = v1 + 1;
    ST32(v0+12, 0);
    ST32(a0+4, v1);
    ST32(s1, v0);
    goto L_08899088;
L_08899088:;
    ST32(a1, s4);
    v0 = 1;
    goto L_08898F24;
}

/* 08899094 */
rv_t func_08899094(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_08899094:;
    sp = sp - 144;
    s1 = a0 + 0;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088990BC; }
    goto L_088990B0;
L_088990B0:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    v0 = D_08B2A728 - (-22744);
    if (cnd_) { goto L_088990D8; }
    goto L_088990BC;
L_088990BC:;
    v0 = 0 + 0;
    goto L_088990C0;
L_088990C0:;
    sp = sp + 144;
    return (rv_t){ v0, v1, f0 };
L_088990D8:;
    s0 = LD32(v0-22744);
    goto L_088990DC;
L_088990DC:;
    a1 = s1 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088990C0; }
    goto L_088990E8;
L_088990E8:;
    a0 = LD32(s0);
    { u64 r_ = func_088F8F38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088990F0;
L_088990F0:;
    cnd_ = v0 == 0;
    a1 = D_08AD53AC - (21420);
    if (cnd_) { goto L_08899100; }
    goto L_088990F8;
L_088990F8:;
    s0 = LD32(s0+40);
    goto L_088990DC;
L_08899100:;
    t0 = s1 + 0;
    a1 = a1 + 21420;
    a2 = 128;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899118;
L_08899118:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899120;
L_08899120:;
    s2 = v0 + 0;
    v0 = D_08B2A72C - (-22740);
    s1 = v0 - 22740;
    v1 = LD_U8(s1+8);
    cnd_ = v1 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_08899190; }
    goto L_08899138;
L_08899138:;
    a0 = LD32(s1+12);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+4); goto L_0889917C; }
    goto L_08899144;
L_08899144:;
    v1 = LD32(s1+16);
    v0 = v1 << 2;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST32(v0, s2);
    ST32(s1+16, v1);
    goto L_0889915C;
L_0889915C:;
    cnd_ = s0 == 0;
    if (cnd_) { v0 = 1; goto L_088990C0; }
    goto L_08899164;
L_08899164:;
    a0 = s0 + 0;
    func_08898E40(a0, 0, 0, 0);
    goto L_0889916C;
L_0889916C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899174;
L_08899174:;
    v0 = 1;
    goto L_088990C0;
L_0889917C:;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899184;
L_08899184:;
    ST32(s1+12, v0);
    a0 = v0 + 0;
    goto L_08899144;
L_08899190:;
    a1 = s2 + 0;
    { u64 r_ = func_08AB1E38(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899198;
L_08899198:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889915C; }
    goto L_088991A0;
L_088991A0:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088991A8;
L_088991A8:;
    goto L_0889915C;
}

/* 088991B0 */
void func_088991B0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088991B0:;
    sp = sp - 16;
    s1 = a1 + 0;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088991C8;
L_088991C8:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_088991DC; }
    goto L_088991D0;
L_088991D0:;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088991F8; }
    goto L_088991DC;
L_088991DC:;
    v1 = 0 + 0;
    goto L_088991E0;
L_088991E0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
L_088991F8:;
    v0 = func_08837FD0(a0);
    goto L_08899200;
L_08899200:;
    v1 = 1;
    ST32(s0+4, v0);
    goto L_088991E0;
}

/* 0889920C */
void func_0889920C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889920C:;
    sp = sp - 16;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889921C;
L_0889921C:;
    v1 = v0 + 0;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08899234; }
    goto L_08899228;
L_08899228:;
    v0 = 1;
    ST8(v1+8, v0);
    v0 = 1;
    goto L_08899234;
L_08899234:;
    sp = sp + 16;
    return;
}

/* 08899240 */
void func_08899240(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899240:;
    sp = sp - 16;
    s0 = a1 + 0;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899254;
L_08899254:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08899264; }
    goto L_0889925C;
L_0889925C:;
    ST32(v0+12, s0);
    v1 = 1;
    goto L_08899264;
L_08899264:;
    v0 = v1 + 0;
    sp = sp + 16;
    return;
}

/* 08899278 */
u32 func_08899278(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899278:;
    sp = sp - 16;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899288;
L_08899288:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_08899294; }
    goto L_08899290;
L_08899290:;
    v1 = LD_U8(v0+8);
    goto L_08899294;
L_08899294:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088992A4 */
u64 func_088992A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 144);
L_088992A4:;
    sp = sp - 144;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088992BC; }
    goto L_088992B0;
L_088992B0:;
    v0 = LD_U16(a0);
    cnd_ = v0 != 0;
    a1 = D_08AD53AC - (21420);
    if (cnd_) { goto L_088992CC; }
    goto L_088992BC;
L_088992BC:;
    v0 = 0 + 0;
    goto L_088992C0;
L_088992C0:;
    sp = sp + 144;
    return (u64)v0 | ((u64)v1 << 32);
L_088992CC:;
    t0 = a0 + 0;
    a1 = a1 + 21420;
    a2 = 128;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088992E4;
L_088992E4:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088992EC;
L_088992EC:;
    t0 = D_08B2A72C - (-22740);
    v1 = LD32(t0-22740);
    cnd_ = v1 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_08899328; }
    goto L_088992FC;
L_088992FC:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_08899304;
L_08899304:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_08899338; }
    goto L_0889931C;
L_0889931C:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_08899304; }
    goto L_08899328;
L_08899328:;
    v0 = t0 - 22740;
    a0 = LD32(v0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_08899348; }
    goto L_08899338;
L_08899338:;
    cnd_ = a3 == 0;
    if (cnd_) { v0 = 0 + 0; goto L_088992C0; }
    goto L_08899340;
L_08899340:;
    v0 = LD32(a3);
    goto L_088992C0;
L_08899348:;
    a2 = 1;
    { u64 r_ = func_08AB2138(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899350;
L_08899350:;
    a3 = v0 + 0;
    goto L_08899338;
}

/* 08899358 */
u64 func_08899358(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08899358:;
    sp = sp - 272;
    a1 = D_08AD5214 - (21012);
    t0 = a0 + 0;
    a1 = a1 + 21012;
    a0 = sp + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889937C;
L_0889937C:;
    a0 = sp + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899384;
L_08899384:;
    sp = sp + 272;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 08899390 */
void func_08899390(void)
{
    u32 v0 = 0;
L_08899390:;
    v0 = D_08B2A728 - (-22744);
    ST32(v0-22744, 0);
    return;
}

/* 0889939C */
u32 func_0889939C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889939C:;
    sp = sp - 16;
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088993AC;
L_088993AC:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088993CC; }
    goto L_088993B8;
L_088993B8:;
    v0 = LD32(v0+16);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088993D0; }
    goto L_088993C4;
L_088993C4:;
    v0 = LD32(v1+24);
    a0 = LD_U8(v0);
    goto L_088993CC;
L_088993CC:;
    goto L_088993D0;
L_088993D0:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
}

/* 088993DC */
u64 func_088993DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088993DC:;
    sp = sp - 16;
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088993EC;
L_088993EC:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_08899408; }
    goto L_088993F8;
L_088993F8:;
    v1 = LD32(v0+16);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+24); goto L_08899418; }
    goto L_08899408;
L_08899408:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_08899418:;
    a1 = LD32(v0);
    goto L_08899408;
}

/* 08899420 */
u32 func_08899420(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899420:;
    sp = sp - 16;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899430;
L_08899430:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0889944C; }
    goto L_0889943C;
L_0889943C:;
    v1 = LD32(v0+16);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+24); goto L_0889945C; }
    goto L_0889944C;
L_0889944C:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
L_0889945C:;
    a1 = LD32(v0);
    goto L_0889944C;
}

/* 08899464 */
float func_08899464(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899464:;
    sp = sp - 16;
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899474;
L_08899474:;
    f0 = BITSF(0);
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_08899498; }
    goto L_08899480;
L_08899480:;
    v1 = LD32(v0+16);
    v0 = 2;
    cnd_ = v1 != v0;
    if (cnd_) { goto L_0889949C; }
    goto L_08899490;
L_08899490:;
    v0 = LD32(a0+24);
    f0 = BITSF(LD32(v0));
    goto L_08899498;
L_08899498:;
    goto L_0889949C;
L_0889949C:;
    sp = sp + 16;
    return f0;
}

/* 088994A4 */
u32 func_088994A4(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088994A4:;
    sp = sp - 16;
    { u64 r_ = func_08899358(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088994B4;
L_088994B4:;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088994D0; }
    goto L_088994C0;
L_088994C0:;
    v1 = LD32(v0+16);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { a1 = LD32(a0+24); goto L_088994D0; }
    goto L_088994D0;
L_088994D0:;
    v0 = a1 + 0;
    sp = sp + 16;
    return v0;
}

/* 088994E0 */
rv_t func_088994E0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088994E0:;
    sp = sp - 64;
    t0 = a1 & 0xff;
    a1 = D_08AD545C - (21596);
    a3 = 1;
    s0 = a0 + 0;
    a1 = a1 + 21596;
    a0 = sp + 0;
    a2 = 16;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889950C;
L_0889950C:;
    a0 = s0 + 0;
    a2 = sp + 32;
    a1 = sp + 0;
    ST8(sp+32, 0);
    { rv_t r_ = func_08899BD0(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899520;
L_08899520:;
    v0 = LD_U8(sp+32);
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08899534 */
rv_t func_08899534(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08899534:;
    sp = sp - 64;
    t0 = a1 + 0;
    a1 = D_08AD545C - (21596);
    a3 = 1;
    s0 = a0 + 0;
    a1 = a1 + 21596;
    a0 = sp + 0;
    a2 = 16;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899560;
L_08899560:;
    a0 = s0 + 0;
    a2 = sp + 32;
    a1 = sp + 0;
    ST8(sp+32, 0);
    { rv_t r_ = func_08899BD0(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899574;
L_08899574:;
    v0 = LD_U8(sp+32);
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 08899588 */
rv_t func_08899588(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08899588:;
    sp = sp - 64;
    s0 = a0 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889959C;
L_0889959C:;
    a1 = D_08AD5464 - (21604);
    t0 = v0 + 0;
    t1 = v1 + 0;
    a0 = sp + 0;
    a3 = 1;
    a1 = a1 + 21604;
    a2 = 16;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088995BC;
L_088995BC:;
    a0 = s0 + 0;
    a2 = sp + 32;
    a1 = sp + 0;
    ST8(sp+32, 0);
    { rv_t r_ = func_08899BD0(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088995D0;
L_088995D0:;
    v0 = LD_U8(sp+32);
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
}

/* 088995E4 */
rv_t func_088995E4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088995E4:;
    sp = sp - 32;
    a2 = sp + 0;
    ST8(sp, 0);
    { rv_t r_ = func_08899BD0(a0, a1, a2, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088995F8;
L_088995F8:;
    v0 = LD_U8(sp);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 08899608 */
rv_t func_08899608(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899608:;
    sp = sp - 16;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889961C;
L_0889961C:;
    s0 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0889968C; }
    goto L_08899628;
L_08899628:;
    v0 = LD32(s0+16);
    v0 = v0 + 1;
    v1 = v0 < 0x5u;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = 1; goto L_0889968C; }
    goto L_0889963C;
L_0889963C:;
    v1 = D_08AD54B8 - (21688);
    v0 = v0 << 2;
    v1 = v1 + 21688;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08899658u: goto L_08899658; case 0x08899688u: goto L_08899688; case 0x0889969Cu: goto L_0889969C; case 0x088996B4u: goto L_088996B4; case 0x088996E0u: goto L_088996E0; default: rs_break(0, 0x08899650); }
L_08899658:;
    v0 = LD32(s0+24);
    v1 = D_08AD546C - (21612);
    a0 = LD_U8(v0);
    cnd_ = a0 != 0;
    a2 = v1 + 21612;
    if (cnd_) { goto L_08899674; }
    goto L_0889966C;
L_0889966C:;
    v0 = D_08AD5478 - (21624);
    a2 = v0 + 21624;
    goto L_08899674;
L_08899674:;
    a1 = LD32(s0);
    a0 = D_08AD5484 - (21636);
    a0 = a0 + 21636;
    goto L_08899680;
L_08899680:;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899688;
L_08899688:;
    v0 = 1;
    goto L_0889968C;
L_0889968C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889969C:;
    v0 = LD32(s0+24);
    a1 = LD32(s0);
    a0 = D_08AD5494 - (21652);
    a2 = LD32(v0);
    a0 = a0 + 21652;
    goto L_08899680;
L_088996B4:;
    v0 = LD32(s0+24);
    f12 = BITSF(LD32(v0));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088996C0;
L_088996C0:;
    a1 = LD32(s0);
    a0 = D_08AD54A4 - (21668);
    a0 = a0 + 21668;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088996D8;
L_088996D8:;
    v0 = 1;
    goto L_0889968C;
L_088996E0:;
    a2 = LD32(s0+24);
    goto L_08899674;
}

/* 088996E8 */
rv_t func_088996E8(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088996E8:;
    sp = sp - 16;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899700;
L_08899700:;
    s2 = v0 + 0;
    cnd_ = s2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_08899740; }
    goto L_0889970C;
L_0889970C:;
    v1 = LD32(s2+16);
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { a3 = LD32(s2+32); goto L_088997D4; }
    goto L_0889971C;
L_0889971C:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088997B4; }
    goto L_08899728;
L_08899728:;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08899774; }
    goto L_08899730;
L_08899730:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { a2 = LD32(s2+32); goto L_08899758; }
    goto L_0889973C;
L_0889973C:;
    v0 = 1;
    goto L_08899740;
L_08899740:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08899758:;
    a1 = LD32(s2);
    a0 = D_08AD54CC - (21708);
    a2 = a2 - 1;
    a0 = a0 + 21708;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889976C;
L_0889976C:;
    v0 = 1;
    goto L_08899740;
L_08899774:;
    f12 = BITSF(LD32(s2+28));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889977C;
L_0889977C:;
    f12 = BITSF(LD32(s2+32));
    s0 = v0 + 0;
    s1 = v1 + 0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889978C;
L_0889978C:;
    a1 = LD32(s2);
    a0 = D_08AD5514 - (21780);
    a0 = a0 + 21780;
    a2 = s0 + 0;
    a3 = s1 + 0;
    t0 = v0 + 0;
    t1 = v1 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088997AC;
L_088997AC:;
    v0 = 1;
    goto L_08899740;
L_088997B4:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = 1; goto L_08899740; }
    goto L_088997BC;
L_088997BC:;
    a1 = LD32(s2);
    a0 = D_08AD5558 - (21848);
    a0 = a0 + 21848;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088997CC;
L_088997CC:;
    v0 = 1;
    goto L_08899740;
L_088997D4:;
    a1 = LD32(s2);
    a2 = LD32(s2+28);
    a0 = D_08AD55CC - (21964);
    a0 = a0 + 21964;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088997E8;
L_088997E8:;
    v0 = 1;
    goto L_08899740;
}

/* 088997F0 */
void func_088997F0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_088997F0:;
    sp = sp - 160;
    v0 = D_08B2A728 - (-22744);
    s0 = LD32(v0-22744);
    cnd_ = s0 == 0;
    s2 = 1;
    if (cnd_) { goto L_08899848; }
    goto L_0889981C;
L_0889981C:;
    s3 = D_08AD53AC - (21420);
    s4 = D_08B2A72C - (-22740);
    goto L_08899824;
L_08899824:;
    v0 = LD32(s0+20);
    a2 = 128;
    a3 = 1;
    a1 = s3 + 21420;
    a0 = sp + 0;
    cnd_ = v0 == s2;
    s1 = LD32(s0+40);
    if (cnd_) { goto L_08899868; }
    goto L_08899840;
L_08899840:;
    cnd_ = s1 != 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_08899824; }
    goto L_08899848;
L_08899848:;
    sp = sp + 160;
    return;
L_08899868:;
    t0 = LD32(s0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899870;
L_08899870:;
    a0 = sp + 0;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899878;
L_08899878:;
    a1 = v0 + 0;
    a0 = s4 - 22740;
    func_08AB20A0(a0, a1, 0, 0, 0);
    goto L_08899884;
L_08899884:;
    a0 = s0 + 0;
    func_08898E40(a0, 0, 0, 0);
    goto L_0889988C;
L_0889988C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899894;
L_08899894:;
    goto L_08899840;
}

/* 0889989C */
rv_t func_0889989C(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_0889989C:;
    sp = sp - 80;
    s6 = a2 + 0;
    s3 = a0 + 0;
    s1 = a1 + 0;
    { u64 r_ = func_088992A4(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088998D8;
L_088998D8:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088999C0; }
    goto L_088998E4;
L_088998E4:;
    v0 = LD_U8(v0+8);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088999C4; }
    goto L_088998F0;
L_088998F0:;
    s2 = s0 + 24;
    a0 = LD32(s2+12);
    s4 = 0 + 0;
    ST32(sp+16, 0);
    cnd_ = a0 != 0;
    s7 = 0 + 0;
    if (cnd_) { goto L_08899BB0; }
    goto L_08899908;
L_08899908:;
    v0 = LD32(s0+16);
    goto L_0889990C;
L_0889990C:;
    v1 = D_08AD5608 - (22024);
    fp = v1 + 22024;
    v0 = v0 + 1;
    v1 = v0 < 0x5u;
    cnd_ = v1 == 0;
    s5 = 0 + 0;
    if (cnd_) { goto L_08899A20; }
    goto L_08899924;
L_08899924:;
    v1 = D_08AD582C - (22572);
    v0 = v0 << 2;
    v1 = v1 + 22572;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x08899940u: goto L_08899940; case 0x08899A30u: goto L_08899A30; case 0x08899A48u: goto L_08899A48; case 0x08899ABCu: goto L_08899ABC; case 0x08899B24u: goto L_08899B24; default: rs_break(0, 0x08899938); }
L_08899940:;
    v0 = D_08AD5618 - (22040);
    a0 = s1 + 0;
    a1 = sp + 0;
    s5 = v0 + 22040;
    v0 = func_08837A40(a0, a1);
    goto L_08899954;
L_08899954:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+24); goto L_08899A04; }
    goto L_0889995C;
L_0889995C:;
    s4 = 1;
    goto L_08899960;
L_08899960:;
    v1 = LD32(s0+16);
    goto L_08899964;
L_08899964:;
    a0 = D_08AD5628 - (22056);
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = a0 + 22056;
    if (cnd_) { goto L_0889997C; }
    goto L_08899974;
L_08899974:;
    a0 = D_08AD56B4 - (22196);
    a0 = a0 + 22196;
    goto L_0889997C;
L_0889997C:;
    a1 = s5 + 0;
    a3 = fp + 0;
    a2 = s3 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889998C;
L_0889998C:;
    v0 = LD32(sp+16);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088999F4; }
    goto L_08899998;
L_08899998:;
    cnd_ = s7 == 0;
    if (cnd_) { goto L_088999B0; }
    goto L_088999A0;
L_088999A0:;
    v1 = LD32(s0+12);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088999B0; }
    goto L_088999AC;
L_088999AC:;
    ST8(v1, v0);
    goto L_088999B0;
L_088999B0:;
    cnd_ = s6 == 0;
    v0 = s4 ^ 0x1;
    if (cnd_) { goto L_088999BC; }
    goto L_088999B8;
L_088999B8:;
    ST8(s6, v0);
    goto L_088999BC;
L_088999BC:;
    v1 = 1;
    goto L_088999C0;
L_088999C0:;
    goto L_088999C4;
L_088999C4:;
    v0 = v1 + 0;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_088999F4:;
    a0 = s3 + 0;
    { rv_t r_ = func_088996E8(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088999FC;
L_088999FC:;
    goto L_08899998;
L_08899A04:;
    a0 = LD_U8(sp);
    v1 = LD_U8(a1);
    v0 = a0 & 0xff;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_08899A20; }
    goto L_08899A18;
L_08899A18:;
    s7 = 1;
    ST8(a1, a0);
    goto L_08899A20;
L_08899A20:;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_08899998; }
    goto L_08899A28;
L_08899A28:;
    v1 = LD32(s0+16);
    goto L_08899964;
L_08899A30:;
    v0 = D_08AD5734 - (22324);
    v1 = D_08AD5750 - (22352);
    s5 = v0 + 22324;
    fp = v1 + 22352;
    s4 = 1;
    goto L_08899A20;
L_08899A48:;
    v0 = D_08AD57A8 - (22440);
    a0 = s1 + 0;
    a1 = sp + 8;
    a2 = 0 + 0;
    s5 = v0 + 22440;
    v0 = func_08837CB8(a0, a1, a2);
    goto L_08899A60;
L_08899A60:;
    cnd_ = v0 == 0;
    s4 = 1;
    if (cnd_) { goto L_08899960; }
    goto L_08899A68;
L_08899A68:;
    v0 = LD32(s2+4);
    a1 = LD32(sp+8);
    v0 = (s32)a1 < (s32)v0;
    cnd_ = v0 != 0;
    v0 = D_08AD57B8 - (22456);
    if (cnd_) { goto L_08899AAC; }
    goto L_08899A7C;
L_08899A7C:;
    v0 = LD32(s2+8);
    v0 = (s32)v0 < (s32)a1;
    cnd_ = v0 != 0;
    v0 = D_08AD57B8 - (22456);
    if (cnd_) { goto L_08899AAC; }
    goto L_08899A8C;
L_08899A8C:;
    v1 = LD32(s2);
    v0 = LD32(v1);
    cnd_ = v0 == a1;
    if (cnd_) { s4 = 0 + 0; goto L_08899998; }
    goto L_08899A9C;
L_08899A9C:;
    ST32(v1, a1);
    goto L_08899AA0;
L_08899AA0:;
    s7 = 1;
    s4 = 0 + 0;
    goto L_08899998;
L_08899AAC:;
    fp = v0 + 22456;
    v0 = 1;
    ST32(sp+16, v0);
    goto L_08899960;
L_08899ABC:;
    v0 = D_08AD57E8 - (22504);
    a0 = s1 + 0;
    a1 = sp + 4;
    s5 = v0 + 22504;
    v0 = func_08837B28(a0, a1);
    goto L_08899AD0;
L_08899AD0:;
    cnd_ = v0 == 0;
    s4 = 1;
    if (cnd_) { goto L_08899960; }
    goto L_08899AD8;
L_08899AD8:;
    f0 = BITSF(LD32(s2+4));
    f1 = BITSF(LD32(sp+4));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08AD57B8 - (22456); goto L_08899AAC; }
    goto L_08899AF0;
L_08899AF0:;
    f0 = BITSF(LD32(s2+8));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = D_08AD57B8 - (22456); goto L_08899AAC; }
    goto L_08899B04;
L_08899B04:;
    v1 = LD32(s2);
    f0 = BITSF(LD32(v1));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { s4 = 0 + 0; goto L_08899998; }
    goto L_08899B1C;
L_08899B1C:;
    ST32(v1, FBITS(f1));
    goto L_08899AA0;
L_08899B24:;
    a0 = s1 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899B2C;
L_08899B2C:;
    a0 = s1 + 0;
    a1 = sp + 12;
    ST32(sp+12, v0);
    v0 = func_08838094(a0, a1);
    goto L_08899B3C;
L_08899B3C:;
    s1 = v0 + 0;
    a2 = LD32(sp+12);
    v1 = LD32(s2+8);
    v0 = a2 + 1;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2); goto L_08899B7C; }
    goto L_08899B58;
L_08899B58:;
    a2 = v1 - 1;
    s4 = 1;
    ST32(sp+12, a2);
    v0 = D_08AD5808 - (22536);
    v1 = D_08AD5818 - (22552);
    ST32(sp+16, s4);
    s5 = v0 + 22536;
    fp = v1 + 22552;
    a0 = LD32(s2);
    goto L_08899B7C;
L_08899B7C:;
    a1 = s1 + 0;
    v0 = func_088F90CC(a0, a1, a2);
    goto L_08899B84;
L_08899B84:;
    a0 = LD32(s2);
    a2 = LD32(sp+12);
    a1 = s1 + 0;
    s7 = 0 < v0;
    { u64 r_ = func_088F9148(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899B98;
L_08899B98:;
    v0 = LD32(sp+12);
    v1 = LD32(s2);
    v0 = v0 << 1;
    v0 = v0 + v1;
    ST16(v0, 0);
    goto L_08899A20;
L_08899BB0:;
    a1 = 0 + 0;
    { rv_t r_ = func_08A60B98(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899BB8;
L_08899BB8:;
    v0 = v0 ^ 0x1;
    s4 = v0 & 0xff;
    cnd_ = s4 != 0;
    if (cnd_) { goto L_088999B0; }
    goto L_08899BC8;
L_08899BC8:;
    v0 = LD32(s0+16);
    goto L_0889990C;
}

/* 08899BD0 */
rv_t func_08899BD0(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_08899BD0:;
    sp = sp - 272;
    s0 = a1 + 0;
    a1 = D_08AD5214 - (21012);
    t0 = a0 + 0;
    a0 = sp + 0;
    s1 = a2 + 0;
    a3 = 1;
    a1 = a1 + 21012;
    a2 = 128;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899C04;
L_08899C04:;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_0889989C(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899C14;
L_08899C14:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
}

/* 08899C28 */
void func_08899C28(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899C28:;
    sp = sp - 16;
    s1 = D_08B2A72C - (-22740);
    s0 = LD32(s1-22740);
    cnd_ = s0 == 0;
    s2 = s1 - 22740;
    if (cnd_) { goto L_08899C6C; }
    goto L_08899C4C;
L_08899C4C:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08899D04; }
    goto L_08899C58;
L_08899C58:;
    a1 = LD32(s0+12);
    goto L_08899C5C;
L_08899C5C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_08899CF4; }
    goto L_08899C64;
L_08899C64:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899C6C;
L_08899C6C:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_08899CE4; }
    goto L_08899C78;
L_08899C78:;
    a0 = D_08B2A728 - (-22744);
    goto L_08899C7C;
L_08899C7C:;
    v1 = LD32(a0-22744);
    v0 = s1 - 22740;
    ST32(s2+16, 0);
    ST32(v0+4, 0);
    ST32(s1-22740, 0);
    cnd_ = v1 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_08899CB4; }
    goto L_08899C98;
L_08899C98:;
    s1 = a0 + 0;
    s0 = LD32(s1-22744);
    goto L_08899CA0;
L_08899CA0:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_08899CCC; }
    goto L_08899CA8;
L_08899CA8:;
    v0 = LD32(s1-22744);
    goto L_08899CAC;
L_08899CAC:;
    cnd_ = v0 != 0;
    s0 = LD32(s1-22744);
    if (cnd_) { goto L_08899CA0; }
    goto L_08899CB4;
L_08899CB4:;
    sp = sp + 16;
    return;
L_08899CCC:;
    func_08898E40(a0, t1, t2, t3);
    goto L_08899CD4;
L_08899CD4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899CDC;
L_08899CDC:;
    v0 = LD32(s1-22744);
    goto L_08899CAC;
L_08899CE4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899CEC;
L_08899CEC:;
    a0 = D_08B2A728 - (-22744);
    goto L_08899C7C;
L_08899CF4:;
    a0 = s2 + 0;
    func_08AB21B0(a0, a1, t1, t2, t3);
    goto L_08899CFC;
L_08899CFC:;
    goto L_08899C64;
L_08899D04:;
    a0 = s2 + 0;
    func_08AB21B0(a0, a1, t1, t2, t3);
    goto L_08899D0C;
L_08899D0C:;
    a1 = LD32(s0+12);
    goto L_08899C5C;
}

/* 08899D14 */
rv_t func_08899D14(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_08899D14:;
    sp = sp - 64;
    s6 = D_08B29CC0 - (-25408);
    v0 = a0 + 0;
    s0 = s6 - 25408;
    a0 = s0 + 0;
    fp = v0 & 0xff;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899D58;
L_08899D58:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_08899D8C; }
    goto L_08899D60;
L_08899D60:;
    v0 = v0 << 1;
    v0 = v0 + s0;
    s0 = v0 - 2;
    a0 = LD_U16(s0);
    goto L_08899D70;
L_08899D70:;
    s0 = s0 - 2;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899D78;
L_08899D78:;
    cnd_ = v0 == 0;
    v0 = D_08B29DC4 - (-25148);
    if (cnd_) { goto L_08899D90; }
    goto L_08899D80;
L_08899D80:;
    s1 = s1 - 1;
    cnd_ = s1 != 0;
    if (cnd_) { a0 = LD_U16(s0); goto L_08899D70; }
    goto L_08899D8C;
L_08899D8C:;
    v0 = D_08B29DC4 - (-25148);
    goto L_08899D90;
L_08899D90:;
    s0 = v0 - 25148;
    a0 = s0 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899D9C;
L_08899D9C:;
    s2 = v0 + 0;
    s4 = s0 + 0;
    cnd_ = v0 != 0;
    s5 = 1;
    if (cnd_) { goto L_08899DBC; }
    goto L_08899DAC;
L_08899DAC:;
    cnd_ = s1 == 0;
    s2 = s1 + 0;
    if (cnd_) { goto L_08899E34; }
    goto L_08899DB4;
L_08899DB4:;
    s4 = s6 - 25408;
    s5 = 0 + 0;
    goto L_08899DBC;
L_08899DBC:;
    v0 = D_08B2A70C - (-22772);
    s0 = LD32(v0-22772);
    s3 = 0 + 0;
    s7 = 0 + 0;
    cnd_ = s0 != 0;
    ST32(sp, 0);
    if (cnd_) { goto L_08899F14; }
    goto L_08899DD4;
L_08899DD4:;
    v0 = D_08B2A728 - (-22744);
    s0 = LD32(v0-22744);
    goto L_08899DDC;
L_08899DDC:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_08899EA8; }
    goto L_08899DE4;
L_08899DE4:;
    cnd_ = s3 == 0;
    if (cnd_) { goto L_08899E84; }
    goto L_08899DEC;
L_08899DEC:;
    cnd_ = s5 == 0;
    v0 = D_08B29DC4 - (-25148);
    if (cnd_) { goto L_08899E64; }
    goto L_08899DF4;
L_08899DF4:;
    s1 = s6 - 25408;
    a0 = s1 + 0;
    s2 = D_08B29DC0 - (-25152);
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899E04;
L_08899E04:;
    s0 = LD32(s2-25152);
    a1 = D_08AD5840 - (22592);
    a0 = s1 + 0;
    s0 = s0 ^ v0;
    s0 = s0 < 0x1u;
    a1 = a1 + 22592;
    t0 = s3 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899E2C;
L_08899E2C:;
    cnd_ = s0 != 0;
    if (cnd_) { ST32(s2-25152, v0); goto L_08899E34; }
    goto L_08899E34;
L_08899E34:;
    goto L_08899E38;
L_08899E38:;
    goto L_08899E3C;
L_08899E3C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_08899E64:;
    s0 = v0 - 25148;
    a1 = s6 - 25408;
    a0 = s0 + 0;
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899E74;
L_08899E74:;
    v1 = s2 << 1;
    v1 = v1 + s0;
    ST16(v1, 0);
    goto L_08899DF4;
L_08899E84:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_08899E38; }
    goto L_08899E8C;
L_08899E8C:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_08899E3C; }
    goto L_08899E98;
L_08899E98:;
    a0 = 1;
    { rv_t r_ = func_08899D14(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899EA0;
L_08899EA0:;
    goto L_08899E38;
L_08899EA8:;
    a1 = s4 + 0;
    a2 = s2 + 0;
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899EB4;
L_08899EB4:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s0+40); goto L_08899EE0; }
    goto L_08899EBC;
L_08899EBC:;
    cnd_ = s5 == 0;
    if (cnd_) { s3 = LD32(s0); goto L_08899EDC; }
    goto L_08899EC4;
L_08899EC4:;
    cnd_ = fp != 0;
    if (cnd_) { s3 = LD32(s0); goto L_08899EDC; }
    goto L_08899ECC;
L_08899ECC:;
    a1 = s6 - 25408;
    cnd_ = s7 == 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_08899EFC; }
    goto L_08899ED8;
L_08899ED8:;
    s3 = LD32(s0);
    goto L_08899EDC;
L_08899EDC:;
    s0 = LD32(s0+40);
    goto L_08899EE0;
L_08899EE0:;
    v0 = s3 < 0x1u;
    v1 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_08899EA8; }
    goto L_08899EF4;
L_08899EF4:;
    goto L_08899DE4;
L_08899EFC:;
    a0 = LD32(s0);
    v0 = 1;
    ST32(sp, v0);
    v0 = func_088F90CC(a0, a1, a2);
    goto L_08899F0C;
L_08899F0C:;
    s7 = v0 < 0x1u;
    goto L_08899EDC;
L_08899F14:;
    a0 = LD32(s0);
    goto L_08899F18;
L_08899F18:;
    a1 = s4 + 0;
    a2 = s2 + 0;
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_08899F24;
L_08899F24:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(s0+20); goto L_08899F50; }
    goto L_08899F2C;
L_08899F2C:;
    cnd_ = s5 == 0;
    if (cnd_) { s3 = LD32(s0); goto L_08899F4C; }
    goto L_08899F34;
L_08899F34:;
    cnd_ = fp != 0;
    if (cnd_) { s3 = LD32(s0); goto L_08899F4C; }
    goto L_08899F3C;
L_08899F3C:;
    a1 = s6 - 25408;
    cnd_ = s7 == 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_08899F74; }
    goto L_08899F48;
L_08899F48:;
    s3 = LD32(s0);
    goto L_08899F4C;
L_08899F4C:;
    s0 = LD32(s0+20);
    goto L_08899F50;
L_08899F50:;
    v0 = s3 < 0x1u;
    v1 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s0); goto L_08899F18; }
    goto L_08899F64;
L_08899F64:;
    cnd_ = s3 != 0;
    v0 = D_08B2A728 - (-22744);
    if (cnd_) { goto L_08899DEC; }
    goto L_08899F6C;
L_08899F6C:;
    s0 = LD32(v0-22744);
    goto L_08899DDC;
L_08899F74:;
    a0 = LD32(s0);
    v0 = 1;
    ST32(sp, v0);
    v0 = func_088F90CC(a0, a1, a2);
    goto L_08899F84;
L_08899F84:;
    s7 = v0 < 0x1u;
    goto L_08899F4C;
}

/* 08899F8C */
rv_t func_08899F8C(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899F8C:;
    sp = sp - 16;
    s0 = D_08B29CAC - (-25428);
    a0 = LD32(s0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899FB0;
L_08899FB0:;
    cnd_ = v0 != 0;
    v0 = D_08B29CB4 - (-25420);
    if (cnd_) { goto L_08899FCC; }
    goto L_08899FB8;
L_08899FB8:;
    ST32(v0-25420, 0);
    goto L_08899FC0;
L_08899FC0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_08899FCC:;
    v0 = LD32(s0-25428);
    v1 = LD32(v0);
    a1 = LD32(v1+48);
    t_ = a1;
    a0 = v0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_08899FE0;
L_08899FE0:;
    goto L_08899FC0;
}

/* 08899FE8 */
rv_t func_08899FE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_08899FE8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AD5180 - (20864);
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    a0 = a0 + 20864;
    if (cnd_) { goto L_0889A028; }
    goto L_0889A004;
L_0889A004:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A00C;
L_0889A00C:;
    a0 = D_08AD5848 - (22600);
    a0 = a0 + 22600;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A018;
L_0889A018:;
    goto L_0889A01C;
L_0889A01C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889A028:;
    { rv_t r_ = func_08899F8C(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A030;
L_0889A030:;
    goto L_0889A01C;
}

/* 0889A038 */
rv_t func_0889A038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889A038:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_0889A194; }
    goto L_0889A058;
L_0889A058:;
    cnd_ = a1 == 0;
    a1 = D_08AD5878 - (22648);
    if (cnd_) { goto L_0889A100; }
    goto L_0889A060;
L_0889A060:;
    a0 = D_08AD587C - (22652);
    s0 = D_08AD5878 - (22648);
    a0 = a0 + 22652;
    s0 = s0 + 22648;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A074;
L_0889A074:;
    a0 = s0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A07C;
L_0889A07C:;
    a0 = D_08AD58AC - (22700);
    a0 = a0 + 22700;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A088;
L_0889A088:;
    a0 = D_08AD5920 - (22816);
    a0 = a0 + 22816;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A094;
L_0889A094:;
    a0 = D_08AD59BC - (22972);
    a0 = a0 + 22972;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A0A0;
L_0889A0A0:;
    a0 = D_08AD5A58 - (23128);
    a0 = a0 + 23128;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A0AC;
L_0889A0AC:;
    a0 = s0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A0B4;
L_0889A0B4:;
    a0 = D_08AD5ACC - (23244);
    a0 = a0 + 23244;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A0C0;
L_0889A0C0:;
    a0 = D_08AD5B44 - (23364);
    a0 = a0 + 23364;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A0CC;
L_0889A0CC:;
    a0 = D_08AD5BE0 - (23520);
    a0 = a0 + 23520;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A0D8;
L_0889A0D8:;
    a0 = D_08AD5C50 - (23632);
    a0 = a0 + 23632;
    goto L_0889A0E0;
L_0889A0E0:;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A0E8;
L_0889A0E8:;
    v0 = 1;
    goto L_0889A0EC;
L_0889A0EC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889A100:;
    a1 = a1 + 22648;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_08898834(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A110;
L_0889A110:;
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_0889A0EC; }
    goto L_0889A118;
L_0889A118:;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A120;
L_0889A120:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0889A17C; }
    goto L_0889A128;
L_0889A128:;
    a0 = LD32(v0+4);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = D_08AD5CCC - (23756); goto L_0889A168; }
    goto L_0889A134;
L_0889A134:;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A13C;
L_0889A13C:;
    v0 = LD_U8(s1+8);
    goto L_0889A140;
L_0889A140:;
    cnd_ = v0 == 0;
    a0 = D_08AD5CEC - (23788);
    if (cnd_) { goto L_0889A158; }
    goto L_0889A148;
L_0889A148:;
    a0 = a0 + 23788;
    { rv_t r_ = func_08898108(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A150;
L_0889A150:;
    v0 = 1;
    goto L_0889A0EC;
L_0889A158:;
    a0 = s0 + 0;
    { rv_t r_ = func_088996E8(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A160;
L_0889A160:;
    v0 = 1;
    goto L_0889A0EC;
L_0889A168:;
    a0 = a0 + 23756;
    a1 = s0 + 0;
    { rv_t r_ = func_08898108(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A174;
L_0889A174:;
    v0 = LD_U8(s1+8);
    goto L_0889A140;
L_0889A17C:;
    a0 = D_08AD5D00 - (23808);
    a0 = a0 + 23808;
    a1 = s0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A18C;
L_0889A18C:;
    v0 = 0 + 0;
    goto L_0889A0EC;
L_0889A194:;
    a0 = D_08AD518C - (20876);
    a0 = a0 + 20876;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A1A0;
L_0889A1A0:;
    a0 = D_08AD5D30 - (23856);
    a0 = a0 + 23856;
    goto L_0889A0E0;
}

/* 0889A1AC */
rv_t func_0889A1AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889A1AC:;
    sp = sp - 32;
    a2 = a2 & 0xff;
    s2 = a0 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_0889A288; }
    goto L_0889A1D4;
L_0889A1D4:;
    v0 = D_08B2A70C - (-22772);
    s0 = LD32(v0-22772);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = D_08AD5D7C - (23932); goto L_0889A280; }
    goto L_0889A1E4;
L_0889A1E4:;
    s3 = 0 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A1EC;
L_0889A1EC:;
    a0 = D_08AD5DAC - (23980);
    a0 = a0 + 23980;
    s1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A1FC;
L_0889A1FC:;
    s4 = D_08AD5DE4 - (24036);
    a1 = s2 + 0;
    goto L_0889A204;
L_0889A204:;
    cnd_ = s1 == 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_0889A268; }
    goto L_0889A20C;
L_0889A20C:;
    a0 = LD32(s0);
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A214;
L_0889A214:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0); goto L_0889A26C; }
    goto L_0889A21C;
L_0889A21C:;
    s0 = LD32(s0+20);
    goto L_0889A220;
L_0889A220:;
    cnd_ = s0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_0889A204; }
    goto L_0889A228;
L_0889A228:;
    a0 = D_08AD5DF4 - (24052);
    cnd_ = s3 == 0;
    a0 = a0 + 24052;
    if (cnd_) { goto L_0889A258; }
    goto L_0889A234;
L_0889A234:;
    goto L_0889A238;
L_0889A238:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0889A258:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A260;
L_0889A260:;
    goto L_0889A238;
L_0889A268:;
    a1 = LD32(s0);
    goto L_0889A26C;
L_0889A26C:;
    a0 = s4 + 24036;
    s3 = 1;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A278;
L_0889A278:;
    s0 = LD32(s0+20);
    goto L_0889A220;
L_0889A280:;
    a0 = a0 + 23932;
    goto L_0889A258;
L_0889A288:;
    a0 = D_08AD5E4C - (24140);
    a0 = a0 + 24140;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A294;
L_0889A294:;
    a0 = D_08AD5E74 - (24180);
    a0 = a0 + 24180;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A2A0;
L_0889A2A0:;
    a0 = D_08AD5EE4 - (24292);
    a0 = a0 + 24292;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A2AC;
L_0889A2AC:;
    a0 = D_08AD5F54 - (24404);
    a0 = a0 + 24404;
    goto L_0889A258;
}

/* 0889A2B8 */
rv_t func_0889A2B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889A2B8:;
    sp = sp - 32;
    a2 = a2 & 0xff;
    s2 = a0 + 0;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_0889A394; }
    goto L_0889A2E0;
L_0889A2E0:;
    v0 = D_08B2A728 - (-22744);
    s0 = LD32(v0-22744);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = D_08AD5F98 - (24472); goto L_0889A38C; }
    goto L_0889A2F0;
L_0889A2F0:;
    s3 = 0 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A2F8;
L_0889A2F8:;
    a0 = D_08AD5FC8 - (24520);
    a0 = a0 + 24520;
    s1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A308;
L_0889A308:;
    s4 = D_08AD5DE4 - (24036);
    a1 = s2 + 0;
    goto L_0889A310;
L_0889A310:;
    cnd_ = s1 == 0;
    a2 = s1 + 0;
    if (cnd_) { goto L_0889A374; }
    goto L_0889A318;
L_0889A318:;
    a0 = LD32(s0);
    { u64 r_ = func_088F8FA8(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A320;
L_0889A320:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0); goto L_0889A378; }
    goto L_0889A328;
L_0889A328:;
    s0 = LD32(s0+40);
    goto L_0889A32C;
L_0889A32C:;
    cnd_ = s0 != 0;
    a1 = s2 + 0;
    if (cnd_) { goto L_0889A310; }
    goto L_0889A334;
L_0889A334:;
    a0 = D_08AD5DF4 - (24052);
    cnd_ = s3 == 0;
    a0 = a0 + 24052;
    if (cnd_) { goto L_0889A364; }
    goto L_0889A340;
L_0889A340:;
    goto L_0889A344;
L_0889A344:;
    v0 = 1;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0889A364:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A36C;
L_0889A36C:;
    goto L_0889A344;
L_0889A374:;
    a1 = LD32(s0);
    goto L_0889A378;
L_0889A378:;
    a0 = s4 + 24036;
    s3 = 1;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A384;
L_0889A384:;
    s0 = LD32(s0+40);
    goto L_0889A32C;
L_0889A38C:;
    a0 = a0 + 24472;
    goto L_0889A364;
L_0889A394:;
    a0 = D_08AD5FF4 - (24564);
    a0 = a0 + 24564;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A3A0;
L_0889A3A0:;
    a0 = D_08AD601C - (24604);
    a0 = a0 + 24604;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A3AC;
L_0889A3AC:;
    a0 = D_08AD6080 - (24704);
    a0 = a0 + 24704;
    { rv_t r_ = func_08898048(a0, 0, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A3B8;
L_0889A3B8:;
    a0 = D_08AD5F54 - (24404);
    a0 = a0 + 24404;
    goto L_0889A364;
}

/* 0889A3C4 */
rv_t func_0889A3C4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889A3C4:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AD60F4 - (24820);
    a1 = a1 & 0xff;
    a0 = a0 + 24820;
    cnd_ = a1 != 0;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_0889A48C; }
    goto L_0889A3E4;
L_0889A3E4:;
    cnd_ = v0 != 0;
    a0 = D_08AD6124 - (24868);
    if (cnd_) { goto L_0889A460; }
    goto L_0889A3EC;
L_0889A3EC:;
    v0 = D_08AEC318 - (-15592);
    f0 = BITSF(LD32(v0-15592));
    fcc = FCMP(f0, f12, 14);
    cnd_ = !fcc;
    a0 = a0 + 24868;
    if (cnd_) { goto L_0889A41C; }
    goto L_0889A404;
L_0889A404:;
    v0 = D_08AEC31C - (-15588);
    f0 = BITSF(LD32(v0-15588));
    fcc = FCMP(f12, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_0889A450; }
    goto L_0889A41C;
L_0889A41C:;
    a2 = D_08AEC328 - (-15576);
    a2 = LD32(a2-15576);
    a3 = D_08AEC32C - (-15572);
    a3 = LD32(a3-15572);
    t0 = D_08AEC330 - (-15568);
    t0 = LD32(t0-15568);
    t1 = D_08AEC334 - (-15564);
    t1 = LD32(t1-15564);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A440;
L_0889A440:;
    v0 = 0 + 0;
    goto L_0889A444;
L_0889A444:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889A450:;
    { rv_t r_ = func_08898344(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A458;
L_0889A458:;
    v0 = 1;
    goto L_0889A444;
L_0889A460:;
    f0 = func_08898370(a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0889A468;
L_0889A468:;
    f12 = f0;
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A470;
L_0889A470:;
    a0 = D_08AD6170 - (24944);
    a0 = a0 + 24944;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A484;
L_0889A484:;
    v0 = 1;
    goto L_0889A444;
L_0889A48C:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A494;
L_0889A494:;
    a2 = D_08AEC328 - (-15576);
    a2 = LD32(a2-15576);
    a3 = D_08AEC32C - (-15572);
    a3 = LD32(a3-15572);
    t0 = D_08AEC330 - (-15568);
    t0 = LD32(t0-15568);
    t1 = D_08AEC334 - (-15564);
    t1 = LD32(t1-15564);
    a0 = D_08AD61B0 - (25008);
    a0 = a0 + 25008;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A4C0;
L_0889A4C0:;
    v0 = 1;
    goto L_0889A444;
}

/* 0889A4C8 */
rv_t func_0889A4C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889A4C8:;
    v0 = a0 + 0;
    sp = sp - 16;
    a0 = D_08AD6238 - (25144);
    a1 = a1 & 0xff;
    a0 = a0 + 25144;
    f0 = f12;
    cnd_ = a1 != 0;
    v0 = v0 & 0xff;
    if (cnd_) { goto L_0889A564; }
    goto L_0889A4EC;
L_0889A4EC:;
    f1 = BITSF(0);
    cnd_ = v0 != 0;
    v0 = D_08B285A4 - (-31324);
    if (cnd_) { goto L_0889A550; }
    goto L_0889A4F8;
L_0889A4F8:;
    fcc = FCMP(f12, f1, 12);
    v0 = D_08AEC320 - (-15584);
    cnd_ = !fcc;
    f2 = BITSF(LD32(v0-15584));
    if (cnd_) { goto L_0889A50C; }
    goto L_0889A508;
L_0889A508:;
    f0 = f1;
    goto L_0889A50C;
L_0889A50C:;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f2; goto L_0889A51C; }
    goto L_0889A51C;
L_0889A51C:;
    v0 = D_08B285A4 - (-31324);
    f12 = f0;
    ST32(v0-31324, FBITS(f0));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A52C;
L_0889A52C:;
    a0 = D_08AD6278 - (25208);
    a0 = a0 + 25208;
    goto L_0889A534;
L_0889A534:;
    a2 = v0 + 0;
    a3 = v1 + 0;
    { rv_t r_ = func_08898048(a0, 0, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A540;
L_0889A540:;
    goto L_0889A544;
L_0889A544:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889A550:;
    f12 = BITSF(LD32(v0-31324));
    { u64 r_ = func_08A93068(f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A558;
L_0889A558:;
    a0 = D_08AD62A4 - (25252);
    a0 = a0 + 25252;
    goto L_0889A534;
L_0889A564:;
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A56C;
L_0889A56C:;
    goto L_0889A544;
}

/* 0889A574 */
void func_0889A574(void)
{
    u32 v0 = 0, v1 = 0;
L_0889A574:;
    v0 = D_08B29CC0 - (-25408);
    v1 = D_08B29DC0 - (-25152);
    ST16(v0-25408, 0);
    ST32(v1-25152, 0);
    return;
}

/* 0889A588 */
void func_0889A588(void)
{
    u32 v0 = 0;
L_0889A588:;
    v0 = D_08B29DC4 - (-25148);
    ST16(v0-25148, 0);
    return;
}

/* 0889A594 */
void func_0889A594(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889A594:;
    sp = sp - 16;
    v1 = D_08B2A6C4 - (-22844);
    a0 = D_08B2A6C8 - (-22840);
    v0 = LD32(v1-22844);
    cnd_ = v0 == 0;
    a1 = v1 + 0;
    if (cnd_) { goto L_0889A618; }
    goto L_0889A5B0;
L_0889A5B0:;
    v0 = LD32(a0-22840);
    cnd_ = v0 == 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_0889A60C; }
    goto L_0889A5BC;
L_0889A5BC:;
    ST32(a0-22840, v1);
    goto L_0889A5C0;
L_0889A5C0:;
    v0 = LD32(a1-22844);
    v1 = v0 + 1;
    v0 = v0 < 0x8u;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(a1-22844, v1); goto L_0889A5D4; }
    goto L_0889A5D4;
L_0889A5D4:;
    a0 = LD32(a0-22840);
    v0 = D_08B29EC4 - (-24892);
    v0 = v0 - 24892;
    a0 = a0 << 8;
    a1 = D_08B29CC0 - (-25408);
    a0 = a0 + v0;
    a1 = a1 - 25408;
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A5F4;
L_0889A5F4:;
    v1 = (u32)-1;
    v0 = D_08B2A6CC - (-22836);
    ST32(v0-22836, v1);
    sp = sp + 16;
    return;
L_0889A60C:;
    v0 = 7;
    ST32(a0-22840, v0);
    goto L_0889A5C0;
L_0889A618:;
    v0 = 1;
    ST32(v1-22844, v0);
    ST32(a0-22840, 0);
    goto L_0889A5D4;
}

/* 0889A628 */
rv_t func_0889A628(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[576] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 576);
L_0889A628:;
    sp = sp - 576;
    a2 = a2 & 0xff;
    s6 = a3 + 0;
    s2 = t0 + 0;
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    v0 = LD_U16(a0);
    cnd_ = v0 == 0;
    ST32(sp+512, a2);
    if (cnd_) { goto L_0889A6A4; }
    goto L_0889A674;
L_0889A674:;
    a0 = v0 + 0;
    goto L_0889A678;
L_0889A678:;
    v1 = a0 ^ 0x9;
    v0 = a0 ^ 0x20;
    v0 = 0 < v0;
    v1 = 0 < v1;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889A6A4; }
    goto L_0889A694;
L_0889A694:;
    s0 = s0 + 2;
    v0 = LD_U16(s0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0889A678; }
    goto L_0889A6A4;
L_0889A6A4:;
    a0 = s0 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A6AC;
L_0889A6AC:;
    v1 = v0 + 0;
    cnd_ = (s32)v0 <= 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0889A7E8; }
    goto L_0889A6B8;
L_0889A6B8:;
    v0 = (s32)v0 < 3;
    cnd_ = v0 != 0;
    v0 = (s32)v1 < 128;
    if (cnd_) { goto L_0889A6D8; }
    goto L_0889A6C4;
L_0889A6C4:;
    a0 = LD_U16(s0);
    v0 = 92;
    cnd_ = a0 == v0;
    if (cnd_) { v0 = LD_U16(s0+2); goto L_0889A90C; }
    goto L_0889A6D4;
L_0889A6D4:;
    v0 = (s32)v1 < 128;
    goto L_0889A6D8;
L_0889A6D8:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_0889A7E8; }
    goto L_0889A6E0;
L_0889A6E0:;
    v0 = D_08B29CA8 - (-25432);
    cnd_ = s1 != 0;
    ST32(v0-25432, s2);
    if (cnd_) { goto L_0889A8F4; }
    goto L_0889A6EC;
L_0889A6EC:;
    v0 = LD_U16(s0);
    goto L_0889A6F0;
L_0889A6F0:;
    s2 = 0 + 0;
    s5 = sp + 0;
    s4 = sp + 256;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0889A75C; }
    goto L_0889A704;
L_0889A704:;
    a0 = 0 + 0;
    s7 = 1;
    fp = 2;
    v0 = a0 + s0;
    goto L_0889A714;
L_0889A714:;
    cnd_ = s2 == s7;
    s1 = LD_U16(v0);
    if (cnd_) { goto L_0889A8DC; }
    goto L_0889A71C;
L_0889A71C:;
    v0 = (s32)s2 < 2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889A8B4; }
    goto L_0889A728;
L_0889A728:;
    cnd_ = s2 == fp;
    v0 = 3;
    if (cnd_) { goto L_0889A89C; }
    goto L_0889A730;
L_0889A730:;
    cnd_ = s2 == v0;
    if (cnd_) { ST16(s4, s1); goto L_0889A894; }
    goto L_0889A738;
L_0889A738:;
    s3 = s3 + 1;
    goto L_0889A73C;
L_0889A73C:;
    v0 = s3 < 0x7fu;
    cnd_ = v0 == 0;
    v0 = s3 << 1;
    if (cnd_) { goto L_0889A75C; }
    goto L_0889A748;
L_0889A748:;
    v1 = v0 + s0;
    a0 = v0 + 0;
    v0 = LD_U16(v1);
    cnd_ = v0 != 0;
    v0 = a0 + s0;
    if (cnd_) { goto L_0889A714; }
    goto L_0889A75C;
L_0889A75C:;
    ST16(s5, 0);
    ST16(s4, 0);
    v0 = LD_U16(sp);
    cnd_ = v0 == 0;
    a0 = D_08AD62C8 - (25288);
    if (cnd_) { goto L_0889A87C; }
    goto L_0889A770;
L_0889A770:;
    s1 = sp + 256;
    a0 = s1 + 0;
    a1 = 3;
    func_08837EB4(a0, a1);
    goto L_0889A780;
L_0889A780:;
    a0 = sp + 0;
    a1 = s1 + 0;
    a2 = 0 + 0;
    a3 = s6 + 0;
    { rv_t r_ = func_08898834(a0, a1, a2, a3, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A794;
L_0889A794:;
    cnd_ = v0 != 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0889A7D0; }
    goto L_0889A79C;
L_0889A79C:;
    v0 = LD_U16(sp+256);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889A864; }
    goto L_0889A7A8;
L_0889A7A8:;
    a0 = sp + 0;
    v0 = func_08899278(a0, 0, 0, 0);
    goto L_0889A7B0;
L_0889A7B0:;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_0889A83C; }
    goto L_0889A7B8;
L_0889A7B8:;
    a0 = D_08AD6310 - (25360);
    a0 = a0 + 25360;
    a1 = sp + 0;
    s0 = 1;
    goto L_0889A7C8;
L_0889A7C8:;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A7D0;
L_0889A7D0:;
    v0 = LD32(sp+512);
    goto L_0889A7D4;
L_0889A7D4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889A81C; }
    goto L_0889A7DC;
L_0889A7DC:;
    v0 = D_08B29CA8 - (-25432);
    goto L_0889A7E0;
L_0889A7E0:;
    ST32(v0-25432, 0);
    a1 = s0 + 0;
    goto L_0889A7E8;
L_0889A7E8:;
    goto L_0889A7EC;
L_0889A7EC:;
    v0 = a1 + 0;
    sp = sp + 576;
    return (rv_t){ v0, v1, f0 };
L_0889A81C:;
    func_0889A594();
    goto L_0889A824;
L_0889A824:;
    func_0889A574();
    goto L_0889A82C;
L_0889A82C:;
    func_0889A588();
    goto L_0889A834;
L_0889A834:;
    v0 = D_08B29CA8 - (-25432);
    goto L_0889A7E0;
L_0889A83C:;
    a2 = s6 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_0889989C(a0, a1, a2, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A848;
L_0889A848:;
    s0 = v0 + 0;
    goto L_0889A84C;
L_0889A84C:;
    cnd_ = s0 != 0;
    v0 = LD32(sp+512);
    if (cnd_) { goto L_0889A7D4; }
    goto L_0889A854;
L_0889A854:;
    a0 = D_08AD6348 - (25416);
    a0 = a0 + 25416;
    a1 = sp + 0;
    goto L_0889A7C8;
L_0889A864:;
    a0 = sp + 0;
    { rv_t r_ = func_08899608(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A86C;
L_0889A86C:;
    cnd_ = s6 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0889A84C; }
    goto L_0889A874;
L_0889A874:;
    ST8(s6, v0);
    goto L_0889A84C;
L_0889A87C:;
    a1 = s0 + 0;
    a0 = a0 + 25288;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A888;
L_0889A888:;
    s0 = 0 + 0;
    goto L_0889A7DC;
L_0889A890:;
    ST16(s4, s1);
    goto L_0889A894;
L_0889A894:;
    s4 = s4 + 2;
    goto L_0889A738;
L_0889A89C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A8A4;
L_0889A8A4:;
    cnd_ = v0 != 0;
    if (cnd_) { s3 = s3 + 1; goto L_0889A73C; }
    goto L_0889A8AC;
L_0889A8AC:;
    s2 = 3;
    goto L_0889A890;
L_0889A8B4:;
    cnd_ = s2 != 0;
    if (cnd_) { s3 = s3 + 1; goto L_0889A73C; }
    goto L_0889A8BC;
L_0889A8BC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A8C4;
L_0889A8C4:;
    cnd_ = v0 != 0;
    if (cnd_) { s3 = s3 + 1; goto L_0889A73C; }
    goto L_0889A8CC;
L_0889A8CC:;
    s2 = 1;
    ST16(s5, s1);
    goto L_0889A8D4;
L_0889A8D4:;
    s5 = s5 + 2;
    goto L_0889A738;
L_0889A8DC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A8715C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889A8E4;
L_0889A8E4:;
    cnd_ = v0 == 0;
    if (cnd_) { ST16(s5, s1); goto L_0889A8D4; }
    goto L_0889A8EC;
L_0889A8EC:;
    s2 = 2;
    goto L_0889A738;
L_0889A8F4:;
    a0 = D_08AD638C - (25484);
    a0 = a0 + 25484;
    a1 = s0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A904;
L_0889A904:;
    v0 = LD_U16(s0);
    goto L_0889A6F0;
L_0889A90C:;
    cnd_ = v0 != a0;
    v0 = (s32)v1 < 128;
    if (cnd_) { goto L_0889A6D8; }
    goto L_0889A914;
L_0889A914:;
    goto L_0889A7EC;
}

/* 0889A91C */
void func_0889A91C(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889A91C:;
    sp = sp - 16;
    v0 = D_08B29CAC - (-25428);
    v1 = 1;
    a0 = LD32(v0-25428);
    v0 = D_08B29CA4 - (-25436);
    ST8(v0-25436, v1);
    a1 = 1;
    a2 = LD32(a0);
    v0 = LD32(a2+24);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889A94C;
L_0889A94C:;
    sp = sp + 16;
    return;
}

/* 0889A958 */
void func_0889A958(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_0889A958:;
    a0 = D_08B29CB4 - (-25420);
    v0 = LD32(a0-25420);
    cnd_ = v0 != 0;
    a3 = 64;
    if (cnd_) { goto L_0889A984; }
    goto L_0889A968;
L_0889A968:;
    v0 = 1;
    ST32(a0-25420, v0);
    v1 = D_08B29CB8 - (-25416);
    v0 = D_08B29CBC - (-25412);
    ST32(v1-25416, 0);
    ST32(v0-25412, 0);
    return;
L_0889A984:;
    a1 = D_08B29CBC - (-25412);
    t0 = D_08B29CB8 - (-25416);
    cnd_ = v0 == a3;
    v1 = v0 + 1;
    if (cnd_) { goto L_0889A9B4; }
    goto L_0889A994;
L_0889A994:;
    v0 = LD32(a1-25412);
    ST32(a0-25420, v1);
    v0 = v0 + 1;
    v1 = v0 ^ 0x40;
    if (v1 == 0) v0 = 0;
    ST32(a1-25412, v0);
    goto L_0889A9AC;
L_0889A9AC:;
    return;
L_0889A9B4:;
    v0 = LD32(t0-25416);
    a0 = LD32(a1-25412);
    v0 = v0 + 1;
    v1 = v0 ^ 0x40;
    if (v1 == 0) v0 = 0;
    a0 = a0 + 1;
    ST32(t0-25416, v0);
    cnd_ = a0 != a3;
    ST32(a1-25412, a0);
    if (cnd_) { goto L_0889A9AC; }
    goto L_0889A9D8;
L_0889A9D8:;
    ST32(a1-25412, 0);
    return;
}

/* 0889A9E0 */
void func_0889A9E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889A9E0:;
    sp = sp - 16;
    v0 = D_08B2A6C4 - (-22844);
    a2 = LD32(v0-22844);
    cnd_ = a2 == 0;
    if (cnd_) {  goto L_0889AA74; }
    goto L_0889A9FC;
L_0889A9FC:;
    a1 = D_08B2A6CC - (-22836);
    a3 = LD32(a1-22836);
    t0 = (u32)-1;
    cnd_ = a3 == t0;
    v0 = 1;
    if (cnd_) { goto L_0889AADC; }
    goto L_0889AA10;
L_0889AA10:;
    cnd_ = a0 == v0;
    v0 = D_08B2A6C8 - (-22840);
    if (cnd_) { goto L_0889AAA4; }
    goto L_0889AA18;
L_0889AA18:;
    v1 = LD32(v0-22840);
    cnd_ = a3 == v1;
    v0 = a3 - 1;
    if (cnd_) { goto L_0889AA9C; }
    goto L_0889AA24;
L_0889AA24:;
    cnd_ = (s32)v0 < 0;
    ST32(a1-22836, v0);
    if (cnd_) { goto L_0889AA90; }
    goto L_0889AA2C;
L_0889AA2C:;
    a1 = LD32(a1-22836);
    goto L_0889AA30;
L_0889AA30:;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    v0 = D_08B29EC4 - (-24892);
    if (cnd_) { goto L_0889AA80; }
    goto L_0889AA3C;
L_0889AA3C:;
    s0 = D_08B29CC0 - (-25408);
    v0 = v0 - 24892;
    s0 = s0 - 25408;
    a1 = a1 << 8;
    a1 = a1 + v0;
    a0 = s0 + 0;
    { u64 r_ = func_088F9110(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889AA58;
L_0889AA58:;
    a0 = s0 + 0;
    { u64 r_ = func_088F9038(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889AA60;
L_0889AA60:;
    v1 = D_08B29DC0 - (-25152);
    ST32(v1-25152, v0);
    goto L_0889AA68;
L_0889AA68:;
    func_0889A588();
    goto L_0889AA70;
L_0889AA70:;
    goto L_0889AA74;
L_0889AA74:;
    sp = sp + 16;
    return;
L_0889AA80:;
    func_0889A574();
    goto L_0889AA88;
L_0889AA88:;
    goto L_0889AA68;
L_0889AA90:;
    v0 = 7;
    goto L_0889AA94;
L_0889AA94:;
    ST32(a1-22836, v0);
    goto L_0889AA2C;
L_0889AA9C:;
    ST32(a1-22836, t0);
    goto L_0889AA2C;
L_0889AAA4:;
    v1 = D_08B2A6C8 - (-22840);
    v0 = LD32(v1-22840);
    v0 = v0 + a2;
    v1 = v0 - 1;
    a0 = v1 < 0x8u;
    v0 = v0 - 9;
    if (a0 == 0) v1 = v0;
    cnd_ = a3 == v1;
    v0 = a3 + 1;
    if (cnd_) { goto L_0889AA9C; }
    goto L_0889AAC8;
L_0889AAC8:;
    v1 = v0 < 0x8u;
    cnd_ = v1 != 0;
    ST32(a1-22836, v0);
    if (cnd_) { goto L_0889AA2C; }
    goto L_0889AAD4;
L_0889AAD4:;
    ST32(a1-22836, 0);
    goto L_0889AA2C;
L_0889AADC:;
    cnd_ = a0 == v0;
    v0 = D_08B2A6C8 - (-22840);
    if (cnd_) { goto L_0889AB08; }
    goto L_0889AAE4;
L_0889AAE4:;
    v1 = LD32(v0-22840);
    a0 = v1 + a2;
    v0 = a0 - 1;
    v1 = v0 < 0x8u;
    ST32(a1-22836, v0);
    cnd_ = v1 == 0;
    v0 = a0 - 9;
    if (cnd_) { goto L_0889AA94; }
    goto L_0889AB00;
L_0889AB00:;
    a1 = LD32(a1-22836);
    goto L_0889AA30;
L_0889AB08:;
    v1 = LD32(v0-22840);
    ST32(a1-22836, v1);
    goto L_0889AA2C;
}

/* 0889AB14 */
void func_0889AB14(u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889AB14:;
    sp = sp - 16;
    a1 = D_08B2A6D0 - (-22832);
    a3 = LD32(a1-22832);
    cnd_ = a3 == 0;
    t0 = a1 + 0;
    if (cnd_) { goto L_0889ABBC; }
    goto L_0889AB2C;
L_0889AB2C:;
    v0 = D_08B2859C - (-31332);
    f1 = BITSF(LD32(v0-31332));
    cnd_ = a3 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0889AB9C; }
    goto L_0889AB3C;
L_0889AB3C:;
    f2 = BITSF(0);
    v0 = D_08B2A6D4 - (-22828);
    t1 = v0 - 22828;
    goto L_0889AB48;
L_0889AB48:;
    v0 = a2 << 2;
    a0 = v0 + t1;
    f0 = BITSF(LD32(a0));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    ST32(a0, FBITS(f0));
    if (cnd_) { goto L_0889AB88; }
    goto L_0889AB68;
L_0889AB68:;
    v0 = LD32(t0-22832);
    a2 = a2 - 1;
    v1 = v0 << 2;
    v1 = v1 + t1;
    f0 = BITSF(LD32(v1-4));
    v0 = v0 - 1;
    ST32(t0-22832, v0);
    ST32(a0, FBITS(f0));
    goto L_0889AB88;
L_0889AB88:;
    v0 = LD32(a1-22832);
    a2 = a2 + 1;
    v0 = a2 < v0;
    cnd_ = v0 != 0;
    t0 = D_08B2A6D0 - (-22832);
    if (cnd_) { goto L_0889AB48; }
    goto L_0889AB9C;
L_0889AB9C:;
    a1 = LD32(a1-22832);
    cnd_ = a3 == a1;
    v0 = D_08B29CAC - (-25428);
    if (cnd_) { goto L_0889ABBC; }
    goto L_0889ABA8;
L_0889ABA8:;
    a0 = LD32(v0-25428);
    v1 = LD32(a0);
    v0 = LD32(v1+28);
    t_ = v0;
    a2 = 0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889ABBC;
L_0889ABBC:;
    sp = sp + 16;
    return;
}

/* 0889ABC8 */
void func_0889ABC8(void)
{
    u32 v0 = 0;
L_0889ABC8:;
    v0 = D_08B2A6D0 - (-22832);
    ST32(v0-22832, 0);
    return;
}

/* 0889ABD4 */
void func_0889ABD4(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889ABD4:;
    sp = sp - 16;
    func_088AA43C();
    goto L_0889ABE4;
L_0889ABE4:;
    func_0881C9E4(0, 0, 0);
    goto L_0889ABEC;
L_0889ABEC:;
    sp = sp + 16;
    return;
}

/* 0889ABF8 */
u64 func_0889ABF8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889ABF8:;
    sp = sp - 32;
    v0 = a0 ^ 0x1;
    s3 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    a2 = s3 < 0x1u;
    v0 = a2 & v0;
    a3 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889AC6C; }
    goto L_0889AC2C;
L_0889AC2C:;
    a0 = D_08B2A710 - (-22768);
    a1 = D_08B2A72C - (-22740);
    v0 = a0 - 22768;
    v1 = a1 - 22740;
    ST32(v0+4, 0);
    ST32(v0+16, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(a0-22768, 0);
    ST32(v0+20, 0);
    ST32(a1-22740, 0);
    ST32(v1+20, 0);
    ST32(v1+4, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    ST32(v1+16, 0);
    goto L_0889AC6C;
L_0889AC6C:;
    s1 = a3 < 0x1u;
    v0 = a2 & s1;
    cnd_ = v0 == 0;
    v0 = s3 < 0x1u;
    if (cnd_) { goto L_0889ACC4; }
    goto L_0889AC7C;
L_0889AC7C:;
    v0 = D_08B2A72C - (-22740);
    s0 = LD32(v0-22740);
    cnd_ = s0 == 0;
    s2 = v0 - 22740;
    if (cnd_) { goto L_0889ACAC; }
    goto L_0889AC8C;
L_0889AC8C:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889AD80; }
    goto L_0889AC98;
L_0889AC98:;
    a1 = LD32(s0+12);
    goto L_0889AC9C;
L_0889AC9C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889AD70; }
    goto L_0889ACA4;
L_0889ACA4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889ACAC;
L_0889ACAC:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889AD60; }
    goto L_0889ACB8;
L_0889ACB8:;
    ST32(s2+16, 0);
    goto L_0889ACBC;
L_0889ACBC:;
    ST32(s2+12, 0);
    v0 = s3 < 0x1u;
    goto L_0889ACC4;
L_0889ACC4:;
    v0 = v0 & s1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889AD18; }
    goto L_0889ACD0;
L_0889ACD0:;
    v0 = D_08B2A710 - (-22768);
    s0 = LD32(v0-22768);
    cnd_ = s0 == 0;
    s1 = v0 - 22768;
    if (cnd_) { goto L_0889AD00; }
    goto L_0889ACE0;
L_0889ACE0:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889AD50; }
    goto L_0889ACEC;
L_0889ACEC:;
    a1 = LD32(s0+12);
    goto L_0889ACF0;
L_0889ACF0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889AD40; }
    goto L_0889ACF8;
L_0889ACF8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889AD00;
L_0889AD00:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889AD30; }
    goto L_0889AD0C;
L_0889AD0C:;
    ST32(s1+16, 0);
    goto L_0889AD10;
L_0889AD10:;
    ST32(s1+12, 0);
    goto L_0889AD18;
L_0889AD18:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_0889AD30:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889AD38;
L_0889AD38:;
    ST32(s1+16, 0);
    goto L_0889AD10;
L_0889AD40:;
    a0 = s1 + 0;
    func_08AB2030(a0, a1, t1, t2, t3);
    goto L_0889AD48;
L_0889AD48:;
    goto L_0889ACF8;
L_0889AD50:;
    a0 = s1 + 0;
    func_08AB2030(a0, a1, t1, t2, t3);
    goto L_0889AD58;
L_0889AD58:;
    a1 = LD32(s0+12);
    goto L_0889ACF0;
L_0889AD60:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889AD68;
L_0889AD68:;
    ST32(s2+16, 0);
    goto L_0889ACBC;
L_0889AD70:;
    a0 = s2 + 0;
    func_08AB21B0(a0, a1, t1, t2, t3);
    goto L_0889AD78;
L_0889AD78:;
    goto L_0889ACA4;
L_0889AD80:;
    a0 = s2 + 0;
    func_08AB21B0(a0, a1, t1, t2, t3);
    goto L_0889AD88;
L_0889AD88:;
    a1 = LD32(s0+12);
    goto L_0889AC9C;
}

/* 0889AD90 */
rv_t func_0889AD90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889AD90:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0889ABF8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889ADA4;
L_0889ADA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889ADB0 */
rv_t func_0889ADB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889ADB0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0889ABF8(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889ADC4;
L_0889ADC4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889ADD0 */
void func_0889ADD0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0;
L_0889ADD0:;
    v1 = D_08AEC344 - (-15548);
    f0 = BITSF(LD32(v1-15548));
    v0 = D_08AF7A58 - (31320);
    v0 = v0 + 31320;
    v1 = D_08AEC348 - (-15544);
    ST32(a0, v0);
    v0 = (u32)-2;
    a1 = 0xc0ff0000u;
    ST32(a0+20, FBITS(f0));
    a1 = a1 | 0xffff;
    f0 = BITSF(LD32(v1-15544));
    ST32(a0+24, v0);
    v0 = (u32)-1;
    ST32(a0+32, v0);
    v0 = D_08AEC34C - (-15540);
    ST32(a0+40, FBITS(f0));
    f0 = BITSF(LD32(v0-15540));
    ST32(a0+28, a1);
    ST32(a0+44, FBITS(f0));
    ST32(a0+48, 0);
    ST8(a0+4, 0);
    ST8(a0+5, 0);
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+16, 0);
    ST32(a0+36, 0);
    return;
}

/* 0889AE3C */
rv_t func_0889AE3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0889AE3C:;
    sp = sp - 64;
    f0 = BITSF(0);
    f1 = BITSF(LD32(a0+8));
    fcc = FCMP(f1, f0, 2);
    cnd_ = fcc;
    s1 = a0 + 0;
    if (cnd_) { goto L_0889B038; }
    goto L_0889AE74;
L_0889AE74:;
    v1 = LD32(a0+24);
    v0 = (u32)-2;
    cnd_ = v1 == v0;
    v1 = D_08B263B8 - (25528);
    if (cnd_) { goto L_0889B0F0; }
    goto L_0889AE84;
L_0889AE84:;
    v1 = LD32(s1+28);
    goto L_0889AE88;
L_0889AE88:;
    s0 = D_08B2C12C - (-16084);
    s0 = s0 - 16084;
    ST32(s0+64, v1);
    v0 = D_08B306F0 - (1776);
    f20 = BITSF(0);
    f0 = BITSF(LD32(v0+1776));
    v1 = LD32(s1+24);
    v0 = 1;
    f14 = (float)(s32)FBITS(f0);
    ST32(s0+80, v1);
    a0 = s0 + 0;
    f12 = f20;
    f15 = BITSF(LD32(s1+8));
    ST32(s0+84, v0);
    f13 = f20;
    func_088CF074(a0, f12, f13, f14, f15);
    goto L_0889AEC8;
L_0889AEC8:;
    v0 = D_08B306EC - (1772);
    f0 = BITSF(LD32(v0+1772));
    f15 = BITSF(LD32(s1+8));
    v0 = D_08AEC350 - (-15536);
    f1 = (float)(s32)FBITS(f0);
    f13 = BITSF(LD32(v0-15536));
    f12 = f20;
    a0 = s0 + 0;
    f15 = f15 / f1;
    f14 = f13;
    f13 = f13 - f15;
    func_088CF048(a0, f12, f13, f14, f15);
    goto L_0889AEF8;
L_0889AEF8:;
    a0 = s0 + 0;
    a1 = 1;
    { u64 r_ = func_088CF194(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889AF04;
L_0889AF04:;
    v0 = func_08901790();
    goto L_0889AF0C;
L_0889AF0C:;
    a0 = sp + 4;
    a1 = sp + 8;
    func_0889839C(a0, a1);
    goto L_0889AF18;
L_0889AF18:;
    a1 = sp + 16;
    a2 = sp + 20;
    a0 = sp + 12;
    func_088983C4(a0, a1, a2);
    goto L_0889AF28;
L_0889AF28:;
    a0 = s1 + 0;
    func_0889B504(a0);
    goto L_0889AF30;
L_0889AF30:;
    a0 = LD32(s1+32);
    func_088CD5B0(a0);
    goto L_0889AF38;
L_0889AF38:;
    f12 = BITSF(LD32(s1+40));
    a0 = 32;
    f0 = func_088CB580(a0, f12);
    goto L_0889AF44;
L_0889AF44:;
    f23 = f0;
    f0 = func_088CD39C();
    goto L_0889AF4C;
L_0889AF4C:;
    f14 = BITSF(LD32(s1+40));
    v0 = D_08AEC354 - (-15532);
    f2 = BITSF(LD32(s1+8));
    f22 = f0 * f14;
    f0 = BITSF(LD32(v0-15532));
    f0 = f22 + f0;
    f21 = f2 - f0;
    f1 = f21 + f22;
    fcc = FCMP(f20, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889B030; }
    goto L_0889AF7C;
L_0889AF7C:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 != 0;
    if (cnd_) { f12 = BITSF(LD32(s1+20)); goto L_0889B05C; }
    goto L_0889AF88;
L_0889AF88:;
    v0 = LD32(sp+20);
    goto L_0889AF8C;
L_0889AF8C:;
    cnd_ = v0 == 0;
    a0 = v0 < 0xfu;
    if (cnd_) { goto L_0889B030; }
    goto L_0889AF94;
L_0889AF94:;
    v1 = 14;
    if (a0 != 0) v1 = v0;
    a1 = LD32(s1+16);
    v0 = LD32(sp+16);
    v1 = v1 - 1;
    v0 = v0 + a1;
    a1 = LD_U8(s1+5);
    s0 = v0 + v1;
    a0 = s0 < 0x40u;
    v0 = s0 - 64;
    cnd_ = a1 == 0;
    if (a0 == 0) s0 = v0;
    if (cnd_) { goto L_0889AFCC; }
    goto L_0889AFC4;
L_0889AFC4:;
    f0 = f22 + f22;
    f21 = f21 - f0;
    goto L_0889AFCC;
L_0889AFCC:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f21, 14);
    cnd_ = !fcc;
    f20 = f0;
    if (cnd_) { goto L_0889B030; }
    goto L_0889AFE0;
L_0889AFE0:;
    v1 = LD32(sp+12);
    f12 = BITSF(LD32(s1+20));
    v0 = s0 << 2;
    v0 = v0 + v1;
    f12 = f12 * f23;
    a2 = LD32(v0);
    f14 = BITSF(LD32(s1+40));
    f13 = f21;
    a0 = (u32)-1;
    f21 = f21 - f22;
    a1 = 2;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889B010;
L_0889B010:;
    v0 = LD32(sp+16);
    fcc = FCMP(f20, f21, 14);
    cnd_ = s0 == v0;
    v1 = s0 - 1;
    if (cnd_) { goto L_0889B030; }
    goto L_0889B020;
L_0889B020:;
    v0 = 63;
    if (s0 != 0) v0 = v1;
    cnd_ = fcc;
    s0 = v0 + 0;
    if (cnd_) { goto L_0889AFE0; }
    goto L_0889B030;
L_0889B030:;
    v0 = func_08901790();
    goto L_0889B038;
L_0889B038:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_0889B05C:;
    a3 = LD32(sp+4);
    a2 = D_08AD63AC - (25516);
    f12 = f12 * f23;
    a2 = a2 + 25516;
    f13 = f21;
    a0 = (u32)-1;
    a1 = 4098;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, a3, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889B07C;
L_0889B07C:;
    f0 = BITSF(LD32(s1+48));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(sp+20); goto L_0889AF8C; }
    goto L_0889B090;
L_0889B090:;
    f20 = BITSF(LD32(s1+20));
    f12 = BITSF(LD32(s1+40));
    a0 = D_08AD63B8 - (25528);
    f20 = f20 * f23;
    a0 = a0 + 25528;
    a1 = (u32)-1;
    f0 = func_088CB674(a0, a1, f12);
    goto L_0889B0AC;
L_0889B0AC:;
    f20 = f20 + f0;
    f12 = BITSF(LD32(s1+40));
    a0 = LD32(sp+4);
    a1 = LD32(sp+8);
    f0 = func_088CB674(a0, a1, f12);
    goto L_0889B0C0;
L_0889B0C0:;
    f20 = f20 + f0;
    f14 = BITSF(LD32(s1+40));
    a0 = 0xffef0000u;
    a2 = D_08AD63C0 - (25536);
    f12 = f20;
    a2 = a2 + 25536;
    f13 = f21;
    a0 = a0 | 0x2222;
    a1 = 2;
    { rv_t r_ = func_088CBBF4(a0, a1, a2, 0, 0, 0, 0, 0, f12, f13, f14); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889B0E8;
L_0889B0E8:;
    v0 = LD32(sp+20);
    goto L_0889AF8C;
L_0889B0F0:;
    v0 = D_08B15FA4 - (24484);
    a1 = LD32(v1+25528);
    a0 = LD32(v0+24484);
    a2 = sp + 0;
    v0 = func_0883A334(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_0889B104;
L_0889B104:;
    v1 = LD_U8(sp);
    cnd_ = v1 == 0;
    ST32(s1+24, v0);
    if (cnd_) { goto L_0889AE84; }
    goto L_0889B110;
L_0889B110:;
    func_0883A610(0, 0, 0, 0, 0, 0, 0, 0);
    goto L_0889B118;
L_0889B118:;
    v1 = LD32(s1+24);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    v0 = v1 << 2;
    if (cnd_) { goto L_0889B140; }
    goto L_0889B128;
L_0889B128:;
    v1 = D_08B25BDC - (23516);
    v1 = v1 + 23516;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = (s32)a0 > 0;
    if (cnd_) { v1 = LD32(s1+28); goto L_0889AE88; }
    goto L_0889B140;
L_0889B140:;
    a0 = LD32(s1+24);
    { u64 r_ = func_08839BE8(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B148;
L_0889B148:;
    v0 = (u32)-1;
    ST32(s1+24, v0);
    goto L_0889AE84;
}

/* 0889B154 */
rv_t func_0889B154(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0889B154:;
    v0 = LD32(a0+24);
    v1 = (u32)-1;
    cnd_ = v0 == v1;
    v0 = (u32)-2;
    if (cnd_) { goto L_0889B168; }
    goto L_0889B164;
L_0889B164:;
    ST32(a0+24, v0);
    goto L_0889B168;
L_0889B168:;
    ST32(a0+32, v1);
    ST32(a0+12, 0);
    ST8(a0+4, 0);
    ST32(a0+8, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0889B17C */
rv_t func_0889B17C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889B17C:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    a0 = 0 + 0;
    s0 = a1 & 0xff;
    a1 = 0 + 0;
    func_088983C4(a0, a1, a2);
    goto L_0889B1A4;
L_0889B1A4:;
    cnd_ = s0 == 0;
    v1 = 10;
    if (cnd_) { goto L_0889B1EC; }
    goto L_0889B1AC;
L_0889B1AC:;
    v0 = LD32(sp);
    a1 = LD32(s1+16);
    v1 = v0 - 14;
    v0 = v0 < 0xfu;
    if (v0 != 0) v1 = 0;
    v1 = v1 - a1;
    a0 = v1 < 0xau;
    v0 = 10;
    if (a0 != 0) v0 = v1;
    goto L_0889B1D0;
L_0889B1D0:;
    v0 = a1 + v0;
    ST32(s1+16, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0889B1EC:;
    a1 = LD32(s1+16);
    v0 = a1 < 0xau;
    if (v0 != 0) v1 = a1;
    v0 = 0 - v1;
    goto L_0889B1D0;
}

/* 0889B200 */
rv_t func_0889B200(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0889B200:;
    v0 = D_08B306EC - (1772);
    f0 = BITSF(LD32(v0+1772));
    v1 = D_08AEC358 - (-15528);
    f1 = BITSF(LD32(v1-15528));
    f0 = (float)(s32)FBITS(f0);
    a1 = a1 & 0xff;
    ST8(a0+4, a1);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_0889B230; }
    goto L_0889B22C;
L_0889B22C:;
    f1 = f0;
    goto L_0889B230;
L_0889B230:;
    cnd_ = a1 != 0;
    f0 = f1;
    if (cnd_) { goto L_0889B23C; }
    goto L_0889B238;
L_0889B238:;
    f0 = BITSF(0);
    goto L_0889B23C;
L_0889B23C:;
    cnd_ = a2 == 0;
    ST32(a0+12, FBITS(f0));
    if (cnd_) { goto L_0889B248; }
    goto L_0889B244;
L_0889B244:;
    ST32(a0+8, FBITS(f0));
    goto L_0889B248;
L_0889B248:;
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_0889B254; }
    goto L_0889B250;
L_0889B250:;
    ST8(a0+5, v0);
    goto L_0889B254;
L_0889B254:;
    return (rv_t){ v0, v1, f0 };
}

/* 0889B25C */
rv_t func_0889B25C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B25C:;
    sp = sp - 16;
    v1 = D_08B2BFEC - (-16404);
    v1 = v1 - 16404;
    s2 = a2 & 0xff;
    s0 = a0 + 0;
    v0 = LD32(a0+32);
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    s1 = a1 + 0;
    if (cnd_) { goto L_0889B2BC; }
    goto L_0889B298;
L_0889B298:;
    cnd_ = a1 != 0;
    ST8(s0+4, 0);
    if (cnd_) { goto L_0889B2D4; }
    goto L_0889B2A0;
L_0889B2A0:;
    ST32(s0+12, 0);
    goto L_0889B2A4;
L_0889B2A4:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_0889B2B4; }
    goto L_0889B2AC;
L_0889B2AC:;
    f0 = BITSF(LD32(s0+12));
    ST32(s0+8, FBITS(f0));
    goto L_0889B2B4;
L_0889B2B4:;
    cnd_ = s1 != 0;
    if (cnd_) { ST8(s0+5, 0); goto L_0889B2BC; }
    goto L_0889B2BC;
L_0889B2BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889B2D4:;
    f0 = func_088CD94C(a0);
    goto L_0889B2DC;
L_0889B2DC:;
    f2 = BITSF(s1);
    f1 = f0;
    cnd_ = (s32)s1 < 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_0889B30C; }
    goto L_0889B2EC;
L_0889B2EC:;
    f0 = f1 * f0;
    f1 = BITSF(LD32(s0+40));
    v0 = D_08AEC35C - (-15524);
    f0 = f0 * f1;
    f1 = BITSF(LD32(v0-15524));
    f0 = f0 + f1;
    ST32(s0+12, FBITS(f0));
    goto L_0889B2A4;
L_0889B30C:;
    v0 = s1 & 0x1;
    v1 = s1 >> 1;
    v0 = v0 | v1;
    f2 = BITSF(v0);
    f0 = (float)(s32)FBITS(f2);
    f0 = f0 + f0;
    goto L_0889B2EC;
}

/* 0889B328 */
rv_t func_0889B328(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_0889B328:;
    v0 = D_08B306EC - (1772);
    f0 = BITSF(LD32(v0+1772));
    f1 = BITSF(LD32(a0+12));
    v0 = D_08B2859C - (-31332);
    f0 = (float)(s32)FBITS(f0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    f3 = BITSF(LD32(v0-31332));
    if (cnd_) { goto L_0889B350; }
    goto L_0889B34C;
L_0889B34C:;
    f1 = f0;
    goto L_0889B350;
L_0889B350:;
    f2 = BITSF(LD32(a0+8));
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    ST32(a0+12, FBITS(f1));
    if (cnd_) { goto L_0889B40C; }
    goto L_0889B364;
L_0889B364:;
    v0 = D_08AEC360 - (-15520);
    f0 = BITSF(LD32(v0-15520));
    f0 = f3 * f0;
    f0 = f2 - f0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_0889B384; }
    goto L_0889B384;
L_0889B384:;
    f2 = f1;
    ST32(a0+8, FBITS(f1));
    goto L_0889B38C;
L_0889B38C:;
    f1 = BITSF(0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889B3DC; }
    goto L_0889B3A0;
L_0889B3A0:;
    f0 = BITSF(LD32(a0+48));
    fcc = FCMP(f0, f1, 2);
    cnd_ = fcc;
    if (cnd_) { f0 = BITSF(LD32(a0+44)); goto L_0889B3E4; }
    goto L_0889B3B4;
L_0889B3B4:;
    f0 = f0 - f3;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a0+48, FBITS(f0));
    if (cnd_) { goto L_0889B3DC; }
    goto L_0889B3C8;
L_0889B3C8:;
    v0 = D_08AEC364 - (-15516);
    f0 = BITSF(LD32(v0-15516));
    ST32(a0+48, FBITS(f1));
    ST32(a0+44, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
L_0889B3DC:;
    return (rv_t){ v0, v1, f0 };
L_0889B3E4:;
    f0 = f0 - f3;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    ST32(a0+44, FBITS(f0));
    if (cnd_) { goto L_0889B3DC; }
    goto L_0889B3F8;
L_0889B3F8:;
    v0 = D_08AEC368 - (-15512);
    f0 = BITSF(LD32(v0-15512));
    ST32(a0+44, FBITS(f1));
    ST32(a0+48, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
L_0889B40C:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEC360 - (-15520);
    if (cnd_) { goto L_0889B38C; }
    goto L_0889B41C;
L_0889B41C:;
    f0 = BITSF(LD32(v0-15520));
    f0 = f3 * f0;
    f0 = f2 + f0;
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f1 = f0; goto L_0889B438; }
    goto L_0889B438;
L_0889B438:;
    ST32(a0+8, FBITS(f1));
    f2 = f1;
    goto L_0889B38C;
}

/* 0889B444 */
rv_t func_0889B444(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0889B444:;
    v0 = (u32)-1;
    ST32(a0+32, v0);
    ST32(a0+36, a1);
    return (rv_t){ v0, v1, f0 };
}

/* 0889B454 */
rv_t func_0889B454(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_0889B454:;
    v1 = D_08B2BFEC - (-16404);
    v0 = a1 << 2;
    v1 = v1 - 16404;
    v1 = v0 + v1;
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = 0 + 0; goto L_0889B480; }
    goto L_0889B470;
L_0889B470:;
    v0 = LD32(v1);
    cnd_ = v0 == 0;
    v1 = 1;
    if (cnd_) { goto L_0889B488; }
    goto L_0889B47C;
L_0889B47C:;
    ST32(a0+32, a1);
    goto L_0889B480;
L_0889B480:;
    v0 = v1 + 0;
    return (rv_t){ v0, v1, f0 };
L_0889B488:;
    v1 = 0 + 0;
    goto L_0889B480;
}

/* 0889B490 */
rv_t func_0889B490(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889B490:;
    sp = sp - 32;
    s0 = a0 + 0;
    s1 = a1 + 0;
    func_0889B504(a0);
    goto L_0889B4AC;
L_0889B4AC:;
    a0 = LD32(s0+32);
    func_088CD5B0(a0);
    goto L_0889B4B4;
L_0889B4B4:;
    f12 = BITSF(LD32(s0+40));
    a0 = 32;
    f0 = func_088CB580(a0, f12);
    goto L_0889B4C0;
L_0889B4C0:;
    f1 = BITSF(LD32(s0+20));
    v0 = D_08B306F0 - (1776);
    f2 = BITSF(LD32(v0+1776));
    f1 = f1 + f1;
    f13 = BITSF(LD32(s0+40));
    f12 = (float)(s32)FBITS(f2);
    a0 = s1 + 0;
    f1 = f1 * f0;
    a1 = sp + 0;
    a2 = sp + 4;
    f12 = f12 - f1;
    { rv_t r_ = func_088CC1E8(a0, a1, a2, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889B4F0;
L_0889B4F0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 0889B504 */
void func_0889B504(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B504:;
    sp = sp - 16;
    v0 = (u32)-1;
    s1 = LD32(a0+32);
    cnd_ = s1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0889B538; }
    goto L_0889B524;
L_0889B524:;
    sp = sp + 16;
    return;
L_0889B538:;
    v0 = LD32(a0+36);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0889B54C; }
    goto L_0889B544;
L_0889B544:;
    ST32(s0+32, 0);
    goto L_0889B524;
L_0889B54C:;
    { u64 r_ = func_088CD61C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B554;
L_0889B554:;
    cnd_ = v0 != s1;
    ST32(s0+32, v0);
    if (cnd_) { goto L_0889B524; }
    goto L_0889B55C;
L_0889B55C:;
    ST32(s0+32, 0);
    goto L_0889B524;
}

/* 0889B564 */
void func_0889B564(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B564:;
    a0 = D_08B2A7A4 - (-22620);
    sp = sp - 16;
    a0 = a0 - 22620;
    func_0889B5D4(a0);
    goto L_0889B578;
L_0889B578:;
    sp = sp + 16;
    return;
}

/* 0889B584 */
void func_0889B584(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B584:;
    a0 = D_08B2A7A4 - (-22620);
    sp = sp - 16;
    a0 = a0 - 22620;
    func_0889B628(a0);
    goto L_0889B598;
L_0889B598:;
    sp = sp + 16;
    return;
}

/* 0889B5A4 */
void func_0889B5A4(void)
{
    u32 a0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B5A4:;
    a0 = D_08B2A7A4 - (-22620);
    sp = sp - 16;
    a0 = a0 - 22620;
    func_0889B674(a0);
    goto L_0889B5B8;
L_0889B5B8:;
    sp = sp + 16;
    return;
}

/* 0889B5C4 */
void func_0889B5C4(void)
{
L_0889B5C4:;
    return;
}

/* 0889B5CC */
void func_0889B5CC(void)
{
L_0889B5CC:;
    return;
}

/* 0889B5D4 */
void func_0889B5D4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B5D4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 8;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B5EC;
L_0889B5EC:;
    a0 = s0 + 8;
    ST32(s0, 0);
    a1 = 6;
    ST32(s0+4, 0);
    s0 = s0 + 12;
    func_08AB2344(a0, a1, 0, 0, 0);
    goto L_0889B604;
L_0889B604:;
    a0 = s0 + 0;
    a1 = 6;
    func_08AA3FC0(a0, a1, 0, 0, 0);
    goto L_0889B610;
L_0889B610:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B618;
L_0889B618:;
    sp = sp + 16;
    return;
}

/* 0889B628 */
void func_0889B628(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B628:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 8;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B640;
L_0889B640:;
    a0 = s0 + 12;
    func_08AA109C(a0, 0, 0, 0);
    goto L_0889B648;
L_0889B648:;
    a0 = s0 + 8;
    func_08AB2388(a0, 0, 0, 0);
    goto L_0889B650;
L_0889B650:;
    a0 = s0 + 4;
    func_08AB23C8(a0, 0, 0, 0);
    goto L_0889B658;
L_0889B658:;
    ST32(s0, 0);
    ST32(s0+4, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B664;
L_0889B664:;
    sp = sp + 16;
    return;
}

/* 0889B674 */
void func_0889B674(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889B674:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 8;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B68C;
L_0889B68C:;
    a0 = s0 + 4;
    func_08AB23C8(a0, 0, 0, 0);
    goto L_0889B694;
L_0889B694:;
    ST32(s0, 0);
    ST32(s0+4, 0);
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889B6A0;
L_0889B6A0:;
    sp = sp + 16;
    return;
}

/* 0889B6B0 */
void func_0889B6B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0889B6B0:;
    t1 = a0 + 0;
    sp = sp - 48;
    a0 = 0 + 0;
    v1 = a1 + 0;
    goto L_0889B6C0;
L_0889B6C0:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    ST32(v1+16, 0);
    ST32(v1+32, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0889B6C0; }
    goto L_0889B6DC;
L_0889B6DC:;
    t3 = LD32(t1+4);
    t6 = LD32(t1+8);
    cnd_ = t3 == 0;
    t5 = LD32(t1+12);
    if (cnd_) { goto L_0889B6F8; }
    goto L_0889B6EC;
L_0889B6EC:;
    v0 = LD32(t1);
    cnd_ = v0 != 0;
    v0 = D_08B2A814 - (-22508);
    if (cnd_) { goto L_0889B714; }
    goto L_0889B6F8;
L_0889B6F8:;
    v0 = D_08AEC36C - (-15508);
    f0 = BITSF(LD32(v0-15508));
    ST32(a1+8, FBITS(f0));
    ST32(a1+40, FBITS(f0));
    ST32(a1+24, FBITS(f0));
    goto L_0889B70C;
L_0889B70C:;
    sp = sp + 48;
    return;
L_0889B714:;
    f3 = BITSF(0);
    ST32(v0-22508, 0);
    t2 = v0 - 22508;
    t4 = 0 + 0;
    f5 = BITSF(LD32(a2));
    f6 = BITSF(LD32(a2+4));
    f4 = BITSF(LD32(a2+8));
    t7 = 0 + 0;
    t2 = t2 + 4;
    a3 = 1;
    f7 = f3;
    goto L_0889B740;
L_0889B740:;
    a0 = a3 << 1;
    goto L_0889B744;
L_0889B744:;
    v0 = a0 + a3;
    v0 = v0 << 3;
    t0 = t3 + v0;
    v1 = LD32(t0+4);
    v0 = LD32(t1);
    a3 = a0 + 0;
    v1 = v1 & 0x3;
    v1 = v1 << 2;
    a0 = v1 + t0;
    v1 = v1 + a2;
    f1 = BITSF(LD32(v1));
    f0 = BITSF(LD32(a0));
    v0 = v0 - 1;
    v0 = a3 < v0;
    f0 = f1 - f0;
    cnd_ = v0 == 0;
    v1 = a3 + 0;
    if (cnd_) { goto L_0889B7CC; }
    goto L_0889B788;
L_0889B788:;
    fcc = FCMP(f7, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = a3 + 1; goto L_0889B79C; }
    goto L_0889B798;
L_0889B798:;
    a3 = a3 + 1;
    goto L_0889B79C;
L_0889B79C:;
    v0 = t4 < 0x6u;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(t2, v1); goto L_0889B7C0; }
    goto L_0889B7A8;
L_0889B7A8:;
    f0 = f0 * f0;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { ST32(t2, a3); goto L_0889B7C8; }
    goto L_0889B7BC;
L_0889B7BC:;
    ST32(t2, v1);
    goto L_0889B7C0;
L_0889B7C0:;
    t2 = t2 + 4;
    ST32(t2, a3);
    goto L_0889B7C8;
L_0889B7C8:;
    t2 = t2 + 4;
    goto L_0889B7CC;
L_0889B7CC:;
    t2 = t2 - 4;
    a3 = LD32(t2);
    cnd_ = a3 == 0;
    v0 = t4 < 0x6u;
    if (cnd_) { goto L_0889B8A8; }
    goto L_0889B7DC;
L_0889B7DC:;
    f0 = BITSF(LD32(t0));
    f1 = BITSF(LD32(t0+4));
    f2 = BITSF(LD32(t0+8));
    f0 = f0 - f5;
    f1 = f1 - f6;
    f2 = f2 - f4;
    f0 = f0 * f0;
    f1 = f1 * f1;
    f2 = f2 * f2;
    f0 = f0 + f1;
    cnd_ = v0 == 0;
    f0 = f0 + f2;
    if (cnd_) { goto L_0889B840; }
    goto L_0889B80C;
L_0889B80C:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    v1 = t4 << 2;
    if (cnd_) { goto L_0889B824; }
    goto L_0889B81C;
L_0889B81C:;
    f3 = f0;
    t7 = t4 + 0;
    goto L_0889B824;
L_0889B824:;
    v0 = v1 + t6;
    ST32(v0, t0);
    v1 = v1 + t5;
    t4 = t4 + 1;
    t3 = LD32(t1+4);
    ST32(v1, FBITS(f0));
    goto L_0889B740;
L_0889B840:;
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    a0 = a3 << 1;
    if (cnd_) { goto L_0889B744; }
    goto L_0889B850;
L_0889B850:;
    v0 = t7 << 2;
    v1 = v0 + t5;
    ST32(v1, FBITS(f0));
    v0 = v0 + t6;
    t7 = 0 + 0;
    ST32(v0, t0);
    a0 = 1;
    v1 = t5 + 4;
    f3 = BITSF(LD32(t5));
    f0 = BITSF(LD32(v1));
    goto L_0889B878;
L_0889B878:;
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    v1 = v1 + 4;
    if (cnd_) { goto L_0889B890; }
    goto L_0889B888;
L_0889B888:;
    f3 = f0;
    t7 = a0 + 0;
    goto L_0889B890;
L_0889B890:;
    a0 = a0 + 1;
    v0 = a0 < 0x6u;
    cnd_ = v0 != 0;
    if (cnd_) { f0 = BITSF(LD32(v1)); goto L_0889B878; }
    goto L_0889B8A0;
L_0889B8A0:;
    t3 = LD32(t1+4);
    goto L_0889B740;
L_0889B8A8:;
    cnd_ = t4 == 0;
    t0 = 0 + 0;
    if (cnd_) { goto L_0889B70C; }
    goto L_0889B8B0;
L_0889B8B0:;
    f7 = BITSF(0);
    cnd_ = t4 == 0;
    t2 = D_08AEC374 - (-15500);
    if (cnd_) { goto L_0889B99C; }
    goto L_0889B8BC;
L_0889B8BC:;
    v0 = D_08AEC370 - (-15504);
    f8 = BITSF(LD32(v0-15504));
    f9 = BITSF(LD32(t2-15500));
    v0 = t0 << 2;
    goto L_0889B8CC;
L_0889B8CC:;
    v1 = v0 + t5;
    f0 = BITSF(LD32(v1));
    v0 = v0 + t6;
    a3 = LD32(v0);
    f0 = f0 + f8;
    a2 = 0 + 0;
    f6 = f9 / f0;
    ST32(v1, FBITS(f0));
    f7 = f7 + f6;
    goto L_0889B8F0;
L_0889B8F0:;
    v0 = a3 + a2;
    v0 = LD_U8(v0+12);
    v1 = a2 << 2;
    a0 = v1 + t1;
    f0 = BITSF(v0);
    f2 = BITSF(LD32(a0+64));
    v0 = sp + v1;
    f1 = (float)(s32)FBITS(f0);
    a2 = a2 + 1;
    v1 = a2 < 0xcu;
    f1 = f1 * f2;
    ST32(v0, FBITS(f1));
    f0 = BITSF(LD32(a0+16));
    f1 = f1 + f0;
    cnd_ = v1 != 0;
    ST32(v0, FBITS(f1));
    if (cnd_) { goto L_0889B8F0; }
    goto L_0889B930;
L_0889B930:;
    a2 = sp + 0;
    a0 = 0 + 0;
    goto L_0889B938;
L_0889B938:;
    v1 = a0 << 2;
    v0 = v1 + a2;
    f5 = BITSF(LD32(v0+32));
    f2 = BITSF(LD32(v0));
    f3 = BITSF(LD32(v0+16));
    v1 = v1 + a1;
    f5 = f5 * f6;
    f2 = f2 * f6;
    f3 = f3 * f6;
    f1 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+16));
    f0 = BITSF(LD32(v1+32));
    f1 = f1 + f2;
    f4 = f4 + f3;
    f0 = f0 + f5;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, FBITS(f1));
    ST32(v1+32, FBITS(f0));
    cnd_ = v0 != 0;
    ST32(v1+16, FBITS(f4));
    if (cnd_) { goto L_0889B938; }
    goto L_0889B98C;
L_0889B98C:;
    t0 = t0 + 1;
    v0 = t0 < t4;
    cnd_ = v0 != 0;
    v0 = t0 << 2;
    if (cnd_) { goto L_0889B8CC; }
    goto L_0889B99C;
L_0889B99C:;
    f0 = BITSF(LD32(t2-15500));
    v1 = 0 + 0;
    f3 = f0 / f7;
    goto L_0889B9A8;
L_0889B9A8:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a1+16));
    f2 = BITSF(LD32(a1+32));
    f0 = f0 * f3;
    f1 = f1 * f3;
    f2 = f2 * f3;
    v1 = v1 + 1;
    v0 = v1 < 0x4u;
    ST32(a1, FBITS(f0));
    ST32(a1+16, FBITS(f1));
    ST32(a1+32, FBITS(f2));
    cnd_ = v0 != 0;
    a1 = a1 + 4;
    if (cnd_) { goto L_0889B9A8; }
    goto L_0889B9DC;
L_0889B9DC:;
    goto L_0889B70C;
}

/* 0889B9E4 */
void func_0889B9E4(u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0889B9E4:;
    sp = sp - 112;
    t0 = a1 + 0;
    t2 = a2 + 0;
    a0 = 0 + 0;
    v1 = a1 + 0;
    goto L_0889BA0C;
L_0889BA0C:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    ST32(v1+16, 0);
    ST32(v1+32, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0889BA0C; }
    goto L_0889BA28;
L_0889BA28:;
    v0 = D_08B2A9CC - (-22068);
    v1 = LD32(v0-22068);
    ST32(sp+4, 0);
    v0 = (u32)-1;
    a2 = sp + 0;
    a0 = LD32(v1);
    ST32(sp+16, v0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    ST32(sp, v1);
    cnd_ = a0 == 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_0889BA94; }
    goto L_0889BA58;
L_0889BA58:;
    ST32(sp+4, a0);
    a3 = sp + 8;
    goto L_0889BA60;
L_0889BA60:;
    a1 = LD32(a2+4);
    ST32(sp+36, 0);
    a0 = LD32(a1+4);
    ST32(a2+12, 0);
    ST32(a2+8, a0);
    v0 = LD32(a0+12);
    ST32(sp+32, a0);
    v1 = v0 - 1;
    cnd_ = (s32)v1 >= 0;
    ST32(a3+4, v1);
    if (cnd_) { goto L_0889BDCC; }
    goto L_0889BA88;
L_0889BA88:;
    v0 = LD32(a1+12);
    cnd_ = v0 != 0;
    ST32(a2+4, v0);
    if (cnd_) { goto L_0889BA60; }
    goto L_0889BA94;
L_0889BA94:;
    v0 = D_08AEC378 - (-15496);
    f24 = BITSF(LD32(v0-15496));
    t1 = LD32(sp+4);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[16]=(float)1;v[17]=(float)1;v[18]=(float)1;v[19]=(float)1;}
    goto L_0889BAA4;
L_0889BAA4:;
    cnd_ = t1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0889BD10; }
    goto L_0889BAAC;
L_0889BAAC:;
    cnd_ = (s32)v0 < 0;
    v1 = LD32(sp+20);
    if (cnd_) { goto L_0889BD10; }
    goto L_0889BAB4;
L_0889BAB4:;
    f7 = BITSF(0);
    f6 = BITSF(LD32(v1+12));
    fcc = FCMP(f6, f7, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(v1+56); goto L_0889BB68; }
    goto L_0889BACC;
L_0889BACC:;
    v0 = LD32(sp+12);
    goto L_0889BAD0;
L_0889BAD0:;
    a3 = sp + 0;
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+12, v0);
    if (cnd_) { goto L_0889BB60; }
    goto L_0889BAE0;
L_0889BAE0:;
    v0 = LD32(a3+4);
    a0 = a3 + 8;
    v0 = LD32(v0+12);
    cnd_ = v0 == 0;
    ST32(a3+4, v0);
    if (cnd_) { goto L_0889BB58; }
    goto L_0889BAF4;
L_0889BAF4:;
    v1 = LD32(v0+4);
    ST32(sp+36, 0);
    ST32(a3+8, v1);
    ST32(a3+12, 0);
    v0 = LD32(v1+12);
    ST32(sp+32, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 < 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_0889BAE0; }
    goto L_0889BB18;
L_0889BB18:;
    t1 = LD32(sp+4);
    goto L_0889BB1C;
L_0889BB1C:;
    v0 = LD32(a3+8);
    v1 = LD32(a0+4);
    a0 = LD32(a3+4);
    a2 = LD32(v0+4);
    v1 = v1 << 2;
    a1 = LD32(a0);
    v1 = v1 + a2;
    a0 = LD32(v1);
    v0 = a0 << 4;
    v0 = v0 - a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    ST32(a3+20, a1);
    ST32(a3+16, a0);
    goto L_0889BAA4;
L_0889BB58:;
    t1 = LD32(sp+4);
    goto L_0889BAA4;
L_0889BB60:;
    a0 = sp + 8;
    goto L_0889BB1C;
L_0889BB68:;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0889BAD0; }
    goto L_0889BB74;
L_0889BB74:;
    f0 = BITSF(LD32(t2));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(t2+4));
    f2 = BITSF(LD32(t2+8));
    f3 = f3 - f0;
    f4 = f4 - f1;
    f5 = f5 - f2;
    {float s0=v[12];float s1=v[13];float s2=v[14];float s3=v[15];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    v0 = FBITS(f3);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    f20 = f7;
    ST32(sp+48, FBITS(f3));
    fcc = FCMP(f0, f7, 2);
    ST32(sp+52, FBITS(f4));
    cnd_ = fcc;
    ST32(sp+56, FBITS(f5));
    if (cnd_) { goto L_0889BC18; }
    goto L_0889BBD8;
L_0889BBD8:;
    {float s0=v[0];float d0=sqrtf(s0);v[4]=d0;}
    {v0=FBITS(v[4]);}
    f20 = BITSF(v0);
    {float s0=v[16];float t0=v[4];float d0=s0/t0;v[0]=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
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
    goto L_0889BC18;
L_0889BC18:;
    fcc = FCMP(f20, f6, 12);
    cnd_ = !fcc;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0889BAD0; }
    goto L_0889BC28;
L_0889BC28:;
    f0 = f24 / f6;
    f1 = BITSF(LD32(v1+20));
    f7 = BITSF(LD32(v1+24));
    f6 = BITSF(LD32(v1+16));
    f3 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(sp+52));
    f5 = BITSF(LD32(sp+56));
    f19 = BITSF(LD32(t0));
    f8 = BITSF(LD32(t0+4));
    f9 = BITSF(LD32(t0+8));
    f10 = BITSF(LD32(t0+12));
    f11 = BITSF(LD32(t0+16));
    f12 = BITSF(LD32(t0+20));
    f13 = BITSF(LD32(t0+24));
    f14 = BITSF(LD32(t0+28));
    f15 = BITSF(LD32(t0+32));
    f16 = BITSF(LD32(t0+36));
    f17 = BITSF(LD32(t0+40));
    f18 = BITSF(LD32(t0+44));
    f0 = f20 * f0;
    f0 = f24 - f0;
    f7 = f0 * f7;
    f6 = f0 * f6;
    f0 = f0 * f1;
    f23 = f7 * f5;
    f20 = f6 * f5;
    f21 = f7 * f3;
    f22 = f7 * f4;
    f1 = f6 * f3;
    f2 = f6 * f4;
    f5 = f0 * f5;
    f3 = f0 * f3;
    f4 = f0 * f4;
    f8 = f8 + f1;
    f9 = f9 + f2;
    f10 = f10 + f20;
    f12 = f12 + f3;
    f13 = f13 + f4;
    f14 = f14 + f5;
    f16 = f16 + f21;
    f17 = f17 + f22;
    f18 = f18 + f23;
    f19 = f19 + f6;
    f11 = f11 + f0;
    f15 = f15 + f7;
    ST32(t0+4, FBITS(f8));
    ST32(t0, FBITS(f19));
    ST32(t0+8, FBITS(f9));
    ST32(t0+12, FBITS(f10));
    ST32(t0+16, FBITS(f11));
    ST32(t0+20, FBITS(f12));
    ST32(t0+24, FBITS(f13));
    ST32(t0+28, FBITS(f14));
    ST32(t0+32, FBITS(f15));
    ST32(t0+36, FBITS(f16));
    ST32(t0+40, FBITS(f17));
    ST32(t0+44, FBITS(f18));
    goto L_0889BACC;
L_0889BD10:;
    v0 = D_08AEC380 - (-15488);
    v1 = D_08AEC37C - (-15492);
    f0 = BITSF(LD32(v0-15488));
    f2 = BITSF(LD32(v1-15492));
    f3 = BITSF(LD32(t0));
    f4 = BITSF(LD32(t0+4));
    f5 = BITSF(LD32(t0+8));
    f6 = BITSF(LD32(t0+12));
    f7 = BITSF(LD32(t0+16));
    f8 = BITSF(LD32(t0+20));
    f9 = BITSF(LD32(t0+24));
    f10 = BITSF(LD32(t0+28));
    f11 = BITSF(LD32(t0+32));
    f12 = BITSF(LD32(t0+36));
    f13 = BITSF(LD32(t0+40));
    f1 = BITSF(LD32(t0+44));
    f11 = f11 * f2;
    f3 = f3 * f2;
    f1 = f1 * f0;
    f4 = f4 * f0;
    f5 = f5 * f0;
    f6 = f6 * f0;
    f7 = f7 * f2;
    f8 = f8 * f0;
    f9 = f9 * f0;
    f10 = f10 * f0;
    f12 = f12 * f0;
    f13 = f13 * f0;
    ST32(t0+44, FBITS(f1));
    ST32(t0, FBITS(f3));
    ST32(t0+4, FBITS(f4));
    ST32(t0+8, FBITS(f5));
    ST32(t0+12, FBITS(f6));
    ST32(t0+16, FBITS(f7));
    ST32(t0+20, FBITS(f8));
    ST32(t0+24, FBITS(f9));
    ST32(t0+28, FBITS(f10));
    ST32(t0+32, FBITS(f11));
    ST32(t0+36, FBITS(f12));
    ST32(t0+40, FBITS(f13));
    sp = sp + 112;
    return;
L_0889BDCC:;
    v0 = LD32(a0+4);
    v1 = v1 << 2;
    a1 = LD32(a1);
    v1 = v1 + v0;
    a0 = LD32(v1);
    v0 = a0 << 4;
    v0 = v0 - a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    ST32(a2+20, a1);
    ST32(a2+16, a0);
    goto L_0889BA94;
}

/* 0889BDFC */
void func_0889BDFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 112);
L_0889BDFC:;
    sp = sp - 112;
    t0 = t0 & 0xff;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a3 + 0;
    cnd_ = t0 == 0;
    if (cnd_) { goto L_0889BF70; }
    goto L_0889BE24;
L_0889BE24:;
    func_0889BF80(a0, a1, a2);
    goto L_0889BE2C;
L_0889BE2C:;
    f1 = BITSF(LD32(s0));
    goto L_0889BE30;
L_0889BE30:;
    f4 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f6 = BITSF(LD32(s0+8));
    f2 = f2 * f1;
    f0 = f0 * f4;
    f1 = BITSF(LD32(sp+12));
    f3 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f1 = f1 * f6;
    f2 = f2 + f0;
    f0 = BITSF(LD32(sp));
    f6 = BITSF(LD32(sp+28));
    f10 = BITSF(LD32(sp+16));
    f2 = f2 + f1;
    f4 = BITSF(LD32(sp+36));
    f7 = BITSF(LD32(sp+40));
    f8 = BITSF(LD32(sp+44));
    f11 = f2 + f0;
    f12 = BITSF(0);
    v0 = D_08AEC384 - (-15484);
    a0 = s1 + 4;
    ST32(s1, FBITS(f11));
    fcc = FCMP(f11, f12, 12);
    a1 = sp + 48;
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f3 = f3 * f0;
    f5 = f5 * f1;
    f6 = f6 * f2;
    f9 = BITSF(LD32(sp+32));
    a2 = sp + 52;
    f3 = f3 + f5;
    f5 = BITSF(LD32(v0-15484));
    f3 = f3 + f6;
    f3 = f3 + f10;
    ST32(s1+4, FBITS(f3));
    f0 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    f4 = f4 * f0;
    f7 = f7 * f1;
    f8 = f8 * f2;
    f4 = f4 + f7;
    f4 = f4 + f8;
    f4 = f4 + f9;
    cnd_ = fcc;
    ST32(s1+8, FBITS(f4));
    if (cnd_) { goto L_0889BF08; }
    goto L_0889BEF4;
L_0889BEF4:;
    fcc = FCMP(f5, f11, 12);
    cnd_ = fcc;
    f12 = f5;
    if (cnd_) { goto L_0889BF08; }
    goto L_0889BF04;
L_0889BF04:;
    f12 = f11;
    goto L_0889BF08;
L_0889BF08:;
    f20 = BITSF(LD32(v0-15484));
    ST32(s1, FBITS(f12));
    ST32(sp+52, FBITS(f20));
    ST32(sp+48, 0);
    f0 = func_0889C08C(a0, a1, a2);
    goto L_0889BF1C;
L_0889BF1C:;
    a0 = s1 + 8;
    ST32(s1+4, FBITS(f0));
    a1 = sp + 56;
    a2 = sp + 60;
    ST32(sp+60, FBITS(f20));
    ST32(sp+56, 0);
    f0 = func_0889C08C(a0, a1, a2);
    goto L_0889BF38;
L_0889BF38:;
    a0 = s1 + 12;
    ST32(s1+8, FBITS(f0));
    a1 = sp + 64;
    a2 = sp + 68;
    ST32(sp+68, FBITS(f20));
    ST32(sp+64, 0);
    f0 = func_0889C08C(a0, a1, a2);
    goto L_0889BF54;
L_0889BF54:;
    ST32(s1+12, FBITS(f0));
    sp = sp + 112;
    return;
L_0889BF70:;
    a1 = sp + 0;
    func_0889B6B0(a0, a1, a2);
    goto L_0889BF78;
L_0889BF78:;
    f1 = BITSF(LD32(s0));
    goto L_0889BE30;
}

/* 0889BF80 */
void func_0889BF80(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0889BF80:;
    sp = sp - 64;
    s2 = a1 + 0;
    a1 = sp + 0;
    s1 = a2 + 0;
    s0 = a0 + 0;
    func_0889B9E4(a1, a2);
    goto L_0889BFA8;
L_0889BFA8:;
    a0 = s0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    func_0889B6B0(a0, a1, a2);
    goto L_0889BFB8;
L_0889BFB8:;
    a1 = sp + 0;
    a0 = 0 + 0;
    goto L_0889BFC0;
L_0889BFC0:;
    v0 = a0 << 2;
    v1 = v0 + a1;
    v0 = v0 + s2;
    f5 = BITSF(LD32(v1+32));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+32));
    f1 = f1 + f3;
    f2 = f2 + f4;
    f0 = f0 + f5;
    a0 = a0 + 1;
    v1 = a0 < 0x4u;
    ST32(v0, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(v0+16, FBITS(f2));
    if (cnd_) { goto L_0889BFC0; }
    goto L_0889C008;
L_0889C008:;
    sp = sp + 64;
    return;
}

/* 0889C020 */
u32 func_0889C020(u32 a0, u32 a1)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889C020:;
    sp = sp - 16;
    v0 = a0 ^ 0x1;
    a1 = a1 ^ 0xffff;
    v0 = v0 < 0x1u;
    s0 = a1 < 0x1u;
    v0 = s0 & v0;
    s1 = a0 + 0;
    a0 = D_08B2A7A4 - (-22620);
    cnd_ = v0 == 0;
    a0 = a0 - 22620;
    if (cnd_) { goto L_0889C05C; }
    goto L_0889C054;
L_0889C054:;
    func_0889B5C4();
    goto L_0889C05C;
L_0889C05C:;
    v0 = s1 < 0x1u;
    a0 = D_08B2A7A4 - (-22620);
    v0 = s0 & v0;
    cnd_ = v0 == 0;
    a0 = a0 - 22620;
    if (cnd_) { goto L_0889C078; }
    goto L_0889C070;
L_0889C070:;
    func_0889B5CC();
    goto L_0889C078;
L_0889C078:;
    sp = sp + 16;
    return v0;
}

/* 0889C08C */
float func_0889C08C(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0889C08C:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_0889C0B8; }
    goto L_0889C0A4;
L_0889C0A4:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_0889C0B8; }
    goto L_0889C0B8;
L_0889C0B8:;
    return f0;
}

/* 0889C0C0 */
rv_t func_0889C0C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889C0C0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    v0 = func_0889C020(a0, a1);
    goto L_0889C0D4;
L_0889C0D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889C0E0 */
rv_t func_0889C0E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889C0E0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    v0 = func_0889C020(a0, a1);
    goto L_0889C0F4;
L_0889C0F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889C100 */
void func_0889C100(u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889C100:;
    sp = sp - 16;
    func_0889CC04(t1, t2, t3);
    goto L_0889C110;
L_0889C110:;
    sp = sp + 16;
    return;
}

/* 0889C11C */
void func_0889C11C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889C11C:;
    sp = sp - 32;
    s3 = D_08B2A894 - (-22380);
    v0 = (u32)-1;
    s0 = LD32(s3-22380);
    s2 = D_08B2A898 - (-22376);
    s0 = s0 - 1;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_0889C164; }
    goto L_0889C14C;
L_0889C14C:;
    s1 = (u32)-1;
    a0 = LD32(s2-22376);
    goto L_0889C154;
L_0889C154:;
    s0 = s0 - 1;
    func_0889C2D0(a0);
    goto L_0889C15C;
L_0889C15C:;
    cnd_ = s0 != s1;
    a0 = LD32(s2-22376);
    if (cnd_) { goto L_0889C154; }
    goto L_0889C164;
L_0889C164:;
    v0 = D_08AEC3B0 - (-15440);
    f0 = BITSF(LD32(v0-15440));
    v1 = D_08B2A8A4 - (-22364);
    v0 = D_08B2A89C - (-22372);
    ST32(v1-22364, FBITS(f0));
    v1 = D_08B2A8A0 - (-22368);
    ST32(v0-22372, FBITS(f0));
    v0 = D_08B2A8A8 - (-22360);
    ST32(v1-22368, FBITS(f0));
    v1 = D_08B2A8AC - (-22356);
    ST32(v0-22360, 0);
    v0 = D_08B2A8B0 - (-22352);
    ST32(v1-22356, 0);
    v1 = D_08B2A8B4 - (-22348);
    ST32(v0-22352, 0);
    v0 = D_08B2A8B8 - (-22344);
    ST32(v1-22348, 0);
    v1 = D_08B2A8BC - (-22340);
    ST32(v0-22344, 0);
    v0 = D_08B2A8C0 - (-22336);
    ST32(v1-22340, 0);
    v1 = D_08B2A8C4 - (-22332);
    ST32(v0-22336, 0);
    ST8(v1-22332, 0);
    ST32(s3-22380, 0);
    func_0889C3F0(t1, t2, t3);
    goto L_0889C1CC;
L_0889C1CC:;
    func_0889CC68(0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0889C1D4;
L_0889C1D4:;
    a0 = LD32(s2-22376);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889C1FC; }
    goto L_0889C1E0;
L_0889C1E0:;
    sp = sp + 32;
    return;
L_0889C1FC:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889C204;
L_0889C204:;
    ST32(s2-22376, 0);
    goto L_0889C1E0;
}

/* 0889C20C */
void func_0889C20C(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889C20C:;
    sp = sp - 32;
    s3 = D_08B2A894 - (-22380);
    v0 = (u32)-1;
    s0 = LD32(s3-22380);
    s2 = D_08B2A898 - (-22376);
    s0 = s0 - 1;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_0889C254; }
    goto L_0889C23C;
L_0889C23C:;
    s1 = (u32)-1;
    a0 = LD32(s2-22376);
    goto L_0889C244;
L_0889C244:;
    s0 = s0 - 1;
    func_0889C2D0(a0);
    goto L_0889C24C;
L_0889C24C:;
    cnd_ = s0 != s1;
    a0 = LD32(s2-22376);
    if (cnd_) { goto L_0889C244; }
    goto L_0889C254;
L_0889C254:;
    ST32(s3-22380, 0);
    func_0889CD20(t1, t2, t3);
    goto L_0889C25C;
L_0889C25C:;
    a0 = LD32(s2-22376);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889C284; }
    goto L_0889C268;
L_0889C268:;
    sp = sp + 32;
    return;
L_0889C284:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889C28C;
L_0889C28C:;
    ST32(s2-22376, 0);
    goto L_0889C268;
}

/* 0889C294 */
u32 func_0889C294(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_0889C294:;
    a2 = D_08B2A894 - (-22380);
    v1 = LD32(a2-22380);
    v0 = 2048;
    a0 = 0 + 0;
    cnd_ = v1 == v0;
    a1 = v1 + 1;
    if (cnd_) { goto L_0889C2C8; }
    goto L_0889C2AC;
L_0889C2AC:;
    v0 = 108;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    v1 = D_08B2A898 - (-22376);
    a0 = LD32(v1-22376);
    ST32(a2-22380, a1);
    v0 = lo;
    a0 = a0 + v0;
    goto L_0889C2C8;
L_0889C2C8:;
    v0 = a0 + 0;
    return v0;
}

/* 0889C2D0 */
void func_0889C2D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
L_0889C2D0:;
    a2 = D_08B2A894 - (-22380);
    a3 = a0 + 0;
    a1 = a0 + 12;
    cnd_ = a0 == 0;
    t0 = a0 + 88;
    if (cnd_) { goto L_0889C3E8; }
    goto L_0889C2E4;
L_0889C2E4:;
    v1 = LD32(a2-22380);
    v0 = D_08B2A898 - (-22376);
    a0 = LD32(v0-22376);
    v1 = v1 - 1;
    v0 = 108;
    { s64 p_ = (s64)(s32)v1 * (s32)v0; lo = (u32)p_; hi = (u32)((u64)p_ >> 32); }
    ST32(a2-22380, v1);
    v0 = lo;
    a0 = a0 + v0;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(a3, FBITS(f0));
    v0 = a0 + 12;
    a2 = a0 + 88;
    ST32(a3+4, FBITS(f1));
    ST32(a3+8, FBITS(f2));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(a0+12));
    ST32(a1+4, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    ST32(a3+12, FBITS(f2));
    f0 = BITSF(LD32(a0+24));
    f1 = BITSF(LD32(a0+28));
    f2 = BITSF(LD32(a0+32));
    f3 = BITSF(LD32(a0+36));
    f4 = BITSF(LD32(a0+40));
    f5 = BITSF(LD32(a0+44));
    f6 = BITSF(LD32(a0+48));
    f7 = BITSF(LD32(a0+52));
    ST32(a3+24, FBITS(f0));
    ST32(a3+28, FBITS(f1));
    ST32(a3+32, FBITS(f2));
    ST32(a3+36, FBITS(f3));
    ST32(a3+40, FBITS(f4));
    ST32(a3+44, FBITS(f5));
    ST32(a3+48, FBITS(f6));
    ST32(a3+52, FBITS(f7));
    v0 = LD32(a0+56);
    ST32(a3+56, v0);
    v1 = LD32(a0+60);
    ST32(a3+60, v1);
    v0 = LD32(a0+64);
    a1 = LD_U8(a0+104);
    ST32(a3+64, v0);
    v1 = LD32(a0+68);
    ST8(a3+104, a1);
    ST32(a3+68, v1);
    v0 = LD32(a0+72);
    ST32(a3+72, v0);
    v1 = LD32(a0+76);
    ST32(a3+76, v1);
    f0 = BITSF(LD32(a0+84));
    v0 = LD32(a0+80);
    ST32(a3+84, FBITS(f0));
    ST32(a3+80, v0);
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a0+88));
    ST32(t0+4, FBITS(f0));
    ST32(t0+8, FBITS(f1));
    ST32(a3+88, FBITS(f2));
    f0 = BITSF(LD32(a0+100));
    ST32(a3+100, FBITS(f0));
    goto L_0889C3E8;
L_0889C3E8:;
    return;
}

/* 0889C3F0 */
void func_0889C3F0(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889C3F0:;
    sp = sp - 32;
    s1 = D_08B2A9D4 - (-22060);
    a0 = LD32(s1-22060);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889C634; }
    goto L_0889C414;
L_0889C414:;
    s3 = D_08B2A9D0 - (-22064);
    s0 = LD32(s3-22064);
    goto L_0889C41C;
L_0889C41C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0889C61C; }
    goto L_0889C424;
L_0889C424:;
    s2 = D_08B2A894 - (-22380);
    goto L_0889C428;
L_0889C428:;
    v0 = LD32(s2-22380);
    cnd_ = (s32)v0 <= 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0889C470; }
    goto L_0889C434;
L_0889C434:;
    f1 = BITSF(0);
    v1 = D_08B2A898 - (-22376);
    a0 = LD32(v1-22376);
    v1 = v0 + 0;
    goto L_0889C444;
L_0889C444:;
    v0 = LD32(a0+80);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    v1 = v1 - 1;
    if (cnd_) { goto L_0889C468; }
    goto L_0889C454;
L_0889C454:;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { s0 = s0 + 1; goto L_0889C468; }
    goto L_0889C468;
L_0889C468:;
    cnd_ = v1 != 0;
    a0 = a0 + 108;
    if (cnd_) { goto L_0889C444; }
    goto L_0889C470;
L_0889C470:;
    v0 = D_08B2A9D8 - (-22056);
    cnd_ = s0 != 0;
    ST32(v0-22056, s0);
    if (cnd_) { goto L_0889C4A0; }
    goto L_0889C47C;
L_0889C47C:;
    ST32(s1-22060, 0);
    ST32(s3-22064, 0);
    goto L_0889C484;
L_0889C484:;
    sp = sp + 32;
    return;
L_0889C4A0:;
    a0 = s0 << 4;
    a0 = a0 - s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889C4B0;
L_0889C4B0:;
    a2 = s1 - 22060;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_0889C4CC; }
    goto L_0889C4BC;
L_0889C4BC:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_0889C4C4;
L_0889C4C4:;
    cnd_ = v1 != a0;
    v1 = v1 - 1;
    if (cnd_) { goto L_0889C4C4; }
    goto L_0889C4CC;
L_0889C4CC:;
    a1 = LD32(s2-22380);
    cnd_ = (s32)a1 <= 0;
    ST32(a2, v0);
    if (cnd_) { goto L_0889C5D8; }
    goto L_0889C4D8;
L_0889C4D8:;
    v1 = D_08B2A898 - (-22376);
    v0 = D_08AEC3B4 - (-15436);
    f5 = BITSF(LD32(v0-15436));
    a0 = LD32(v1-22376);
    a3 = LD32(s1-22060);
    f4 = BITSF(0);
    a2 = a1 + 0;
    t0 = 1;
    goto L_0889C4F8;
L_0889C4F8:;
    v0 = LD32(a0+80);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { a2 = a2 - 1; goto L_0889C5D0; }
    goto L_0889C508;
L_0889C508:;
    f0 = BITSF(LD32(a0+40));
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    a1 = a3 + 0;
    if (cnd_) { goto L_0889C5CC; }
    goto L_0889C51C;
L_0889C51C:;
    ST32(a3+56, t0);
    v0 = LD32(a0+80);
    v0 = v0 & 0x40;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(a0+36)); goto L_0889C5F0; }
    goto L_0889C530;
L_0889C530:;
    f0 = BITSF(LD32(a0+52));
    ST32(a3+24, FBITS(f0));
    ST32(a3+16, FBITS(f0));
    ST32(a3+20, FBITS(f0));
    goto L_0889C540;
L_0889C540:;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    ST32(a1, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    f0 = BITSF(LD32(a0+40));
    v1 = LD32(a1+56);
    ST32(a1+12, FBITS(f0));
    v0 = LD32(a0+80);
    v0 = (v0 >> 5) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(a1+56, v1);
    v1 = LD32(a0+80);
    v0 = v1 & 0x20;
    cnd_ = v0 == 0;
    a3 = a3 + 60;
    if (cnd_) { goto L_0889C5B8; }
    goto L_0889C584;
L_0889C584:;
    v0 = LD32(a0+56);
    ST32(a1+32, v0);
    v1 = LD32(a0+60);
    ST32(a1+36, v1);
    v0 = LD32(a0+64);
    ST32(a1+40, v0);
    v1 = LD32(a0+68);
    ST32(a1+44, v1);
    v0 = LD32(a0+72);
    ST32(a1+48, v0);
    v1 = LD32(a0+76);
    ST32(a1+52, v1);
    v1 = LD32(a0+80);
    goto L_0889C5B8;
L_0889C5B8:;
    v1 = (v1 >> 6) & 0x1;
    v0 = LD32(a1+56);
    v0 = (v0 & ~(0x1u << 4)) | ((v1 & 0x1) << 4);
    v0 = (v0 & ~(0x1u << 5)) | ((t0 & 0x1) << 5);
    ST32(a1+56, v0);
    goto L_0889C5CC;
L_0889C5CC:;
    a2 = a2 - 1;
    goto L_0889C5D0;
L_0889C5D0:;
    cnd_ = a2 != 0;
    a0 = a0 + 108;
    if (cnd_) { goto L_0889C4F8; }
    goto L_0889C5D8;
L_0889C5D8:;
    a1 = ((u32)(uintptr_t)func_0889D8F4) - (-9996);
    a0 = s0 + 0;
    a1 = a1 - 9996;
    v0 = func_0882FD00(a0, a1);
    goto L_0889C5E8;
L_0889C5E8:;
    ST32(s3-22064, v0);
    goto L_0889C484;
L_0889C5F0:;
    f2 = BITSF(LD32(a0+24));
    f3 = BITSF(LD32(a0+28));
    f1 = f1 * f5;
    f0 = BITSF(LD32(a0+32));
    f2 = f2 * f1;
    f0 = f0 * f1;
    f3 = f3 * f1;
    ST32(a3+16, FBITS(f2));
    ST32(a3+24, FBITS(f0));
    ST32(a3+20, FBITS(f3));
    goto L_0889C540;
L_0889C61C:;
    a0 = s0 + 0;
    func_0882F864(a0);
    goto L_0889C624;
L_0889C624:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889C62C;
L_0889C62C:;
    s2 = D_08B2A894 - (-22380);
    goto L_0889C428;
L_0889C634:;
    s3 = D_08B2A9D0 - (-22064);
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889C63C;
L_0889C63C:;
    s0 = LD32(s3-22064);
    goto L_0889C41C;
}

/* 0889C644 */
void func_0889C644(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889C644:;
    v0 = a0 + 8;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s1 = a2 & 0xff;
    s0 = a0 + 0;
    ST32(v0+4, 0);
    ST32(v0+8, 0);
    v0 = LD32(a0+20);
    v0 = (v0 & ~(0x1u << 0)) | ((a1 & 0x1) << 0);
    v0 = (v0 & ~(0x1u << 1)) | ((s1 & 0x1) << 1);
    ST32(s0+20, v0);
    a0 = 48;
    v0 = 0 + 0;
    cnd_ = a1 != 0;
    ST32(s0+8, 0);
    if (cnd_) { goto L_0889C6CC; }
    goto L_0889C68C;
L_0889C68C:;
    ST32(s0, v0);
    goto L_0889C690;
L_0889C690:;
    a0 = 48;
    cnd_ = s1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_0889C6BC; }
    goto L_0889C69C;
L_0889C69C:;
    ST32(s0+4, v0);
    goto L_0889C6A0;
L_0889C6A0:;
    a0 = s0 + 0;
    func_0889C70C(a0);
    goto L_0889C6A8;
L_0889C6A8:;
    sp = sp + 16;
    return;
L_0889C6BC:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889C6C4;
L_0889C6C4:;
    ST32(s0+4, v0);
    goto L_0889C6A0;
L_0889C6CC:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889C6D4;
L_0889C6D4:;
    ST32(s0, v0);
    goto L_0889C690;
}

/* 0889C6DC */
u64 func_0889C6DC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889C6DC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889C6F4;
L_0889C6F4:;
    a0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889C6FC;
L_0889C6FC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0889C70C */
void func_0889C70C(u32 a0)
{
    u32 v0 = 0;
L_0889C70C:;
    v0 = LD32(a0+20);
    v0 = (v0 & ~(0x3u << 2)) | ((0 & 0x3) << 2);
    ST32(a0+20, v0);
    return;
}

/* 0889C71C */
void func_0889C71C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
L_0889C71C:;
    v1 = LD32(a0+20);
    v0 = v1 & 0x4;
    cnd_ = v0 == 0;
    t1 = a0 + 0;
    if (cnd_) { goto L_0889C810; }
    goto L_0889C72C;
L_0889C72C:;
    a2 = LD32(a0);
    v0 = D_08B2A774 - (-22668);
    a3 = v0 - 22668;
    t0 = a2 + 48;
    goto L_0889C73C;
L_0889C73C:;
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
    if (cnd_) { goto L_0889C73C; }
    goto L_0889C768;
L_0889C768:;
    a2 = LD32(t1);
    v1 = D_08B2A744 - (-22716);
    a3 = v1 - 22716;
    t0 = a2 + 48;
    goto L_0889C778;
L_0889C778:;
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
    if (cnd_) { goto L_0889C778; }
    goto L_0889C7A4;
L_0889C7A4:;
    v0 = LD32(t1+20);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    v0 = D_08B2A744 - (-22716);
    if (cnd_) { goto L_0889C808; }
    goto L_0889C7B4;
L_0889C7B4:;
    a0 = LD32(t1+4);
    a2 = v0 - 22716;
    a1 = 0 + 0;
    goto L_0889C7C0;
L_0889C7C0:;
    v0 = a1 << 2;
    v1 = v0 + a0;
    v0 = v0 + a2;
    f5 = BITSF(LD32(v1+32));
    f4 = BITSF(LD32(v1));
    f3 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+32));
    f1 = f1 + f4;
    f2 = f2 + f3;
    f0 = f0 + f5;
    a1 = a1 + 1;
    v1 = a1 < 0x4u;
    ST32(v0, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(v0+16, FBITS(f2));
    if (cnd_) { goto L_0889C7C0; }
    goto L_0889C808;
L_0889C808:;
    return;
L_0889C810:;
    v0 = v1 & 0x8;
    v1 = D_08B2A744 - (-22716);
    v1 = v1 - 22716;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0889C864; }
    goto L_0889C824;
L_0889C824:;
    a2 = LD32(t1+4);
    a3 = v1 + 0;
    t0 = a2 + 48;
    goto L_0889C830;
L_0889C830:;
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
    if (cnd_) { goto L_0889C830; }
    goto L_0889C85C;
L_0889C85C:;
    return;
L_0889C864:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    ST32(v1+16, 0);
    ST32(v1+32, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0889C864; }
    goto L_0889C880;
L_0889C880:;
    goto L_0889C85C;
}

/* 0889C888 */
void func_0889C888(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889C888:;
    a2 = LD32(a0+20);
    sp = sp - 16;
    v0 = a2 & 0xc;
    cnd_ = v0 == 0;
    v1 = a0 + 8;
    if (cnd_) { goto L_0889C8FC; }
    goto L_0889C89C;
L_0889C89C:;
    f4 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(a0+8));
    f3 = BITSF(LD32(a1));
    f0 = BITSF(LD32(a1+4));
    f5 = BITSF(LD32(v1+8));
    f3 = f3 - f1;
    f0 = f0 - f4;
    f2 = BITSF(LD32(a1+8));
    v0 = D_08AEC3B8 - (-15432);
    f1 = f3 * f3;
    f2 = f2 - f5;
    f4 = f0 * f0;
    ST32(sp+4, FBITS(f0));
    a2 = (a2 & ~(0x3u << 2)) | ((0 & 0x3) << 2);
    f5 = f2 * f2;
    f1 = f1 + f4;
    f0 = BITSF(LD32(v0-15432));
    ST32(sp+8, FBITS(f2));
    f1 = f1 + f5;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    ST32(sp, FBITS(f3));
    if (cnd_) { goto L_0889C914; }
    goto L_0889C8F8;
L_0889C8F8:;
    ST32(a0+20, a2);
    goto L_0889C8FC;
L_0889C8FC:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(v1+8, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    goto L_0889C914;
L_0889C914:;
    sp = sp + 16;
    return;
}

/* 0889C91C */
void func_0889C91C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0889C91C:;
    sp = sp - 64;
    a1 = a1 & 0xff;
    s1 = a2 & 0xff;
    v1 = LD32(a0+20);
    v0 = (v1 >> 2) & 0x1;
    cnd_ = a1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_0889CBE8; }
    goto L_0889C944;
L_0889C944:;
    v0 = D_08B2A744 - (-22716);
    goto L_0889C948;
L_0889C948:;
    v1 = v0 - 22716;
    a0 = 0 + 0;
    goto L_0889C950;
L_0889C950:;
    a0 = a0 + 1;
    v0 = a0 < 0x4u;
    ST32(v1, 0);
    ST32(v1+16, 0);
    ST32(v1+32, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0889C950; }
    goto L_0889C96C;
L_0889C96C:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_0889C9D8; }
    goto L_0889C974;
L_0889C974:;
    v0 = LD32(s0+20);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    v0 = D_08B2A744 - (-22716);
    if (cnd_) { goto L_0889CB20; }
    goto L_0889C984;
L_0889C984:;
    a1 = LD32(s0);
    a2 = v0 - 22716;
    a0 = 0 + 0;
    goto L_0889C990;
L_0889C990:;
    v0 = a0 << 2;
    v1 = v0 + a1;
    v0 = v0 + a2;
    f5 = BITSF(LD32(v1+32));
    f4 = BITSF(LD32(v1));
    f3 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+32));
    f1 = f1 + f4;
    f2 = f2 + f3;
    f0 = f0 + f5;
    a0 = a0 + 1;
    v1 = a0 < 0x4u;
    ST32(v0, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(v0+16, FBITS(f2));
    if (cnd_) { goto L_0889C990; }
    goto L_0889C9D8;
L_0889C9D8:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_0889CA48; }
    goto L_0889C9E0;
L_0889C9E0:;
    v0 = LD32(s0+20);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    v0 = D_08B2A744 - (-22716);
    if (cnd_) { goto L_0889CA58; }
    goto L_0889C9F0;
L_0889C9F0:;
    a0 = LD32(s0+4);
    a2 = v0 - 22716;
    a1 = 0 + 0;
    goto L_0889C9FC;
L_0889C9FC:;
    v0 = a1 << 2;
    v1 = v0 + a0;
    v0 = v0 + a2;
    f5 = BITSF(LD32(v1+32));
    f4 = BITSF(LD32(v1));
    f3 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+32));
    f1 = f1 + f4;
    f2 = f2 + f3;
    f0 = f0 + f5;
    a1 = a1 + 1;
    v1 = a1 < 0x4u;
    ST32(v0, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(v0+16, FBITS(f2));
    if (cnd_) { goto L_0889C9FC; }
    goto L_0889CA44;
L_0889CA44:;
    goto L_0889CA48;
L_0889CA48:;
    sp = sp + 64;
    return;
L_0889CA58:;
    a0 = D_08B2A7A4 - (-22620);
    a2 = s0 + 8;
    a0 = a0 - 22620;
    a1 = sp + 0;
    func_0889B9E4(a1, a2);
    goto L_0889CA6C;
L_0889CA6C:;
    v0 = LD32(s0+20);
    v0 = v0 & 0x2;
    cnd_ = v0 == 0;
    v0 = D_08B2A744 - (-22716);
    if (cnd_) { goto L_0889CAC4; }
    goto L_0889CA7C;
L_0889CA7C:;
    a2 = LD32(s0+4);
    a3 = sp + 0;
    t0 = sp + 48;
    goto L_0889CA88;
L_0889CA88:;
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
    if (cnd_) { goto L_0889CA88; }
    goto L_0889CAB4;
L_0889CAB4:;
    v0 = LD32(s0+20);
    v0 = v0 | 0x8;
    ST32(s0+20, v0);
    v0 = D_08B2A744 - (-22716);
    goto L_0889CAC4;
L_0889CAC4:;
    a2 = v0 - 22716;
    a1 = sp + 0;
    a0 = 0 + 0;
    goto L_0889CAD0;
L_0889CAD0:;
    v0 = a0 << 2;
    v1 = v0 + a1;
    v0 = v0 + a2;
    f5 = BITSF(LD32(v1+32));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+32));
    f1 = f1 + f3;
    f2 = f2 + f4;
    f0 = f0 + f5;
    a0 = a0 + 1;
    v1 = a0 < 0x4u;
    ST32(v0, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(v0+16, FBITS(f2));
    if (cnd_) { goto L_0889CAD0; }
    goto L_0889CB18;
L_0889CB18:;
    goto L_0889CA48;
L_0889CB20:;
    a0 = D_08B2A7A4 - (-22620);
    a2 = s0 + 8;
    a0 = a0 - 22620;
    a1 = sp + 0;
    func_0889B6B0(a0, a1, a2);
    goto L_0889CB34;
L_0889CB34:;
    v0 = LD32(s0+20);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08B2A744 - (-22716);
    if (cnd_) { goto L_0889CB8C; }
    goto L_0889CB44;
L_0889CB44:;
    a2 = LD32(s0);
    a3 = sp + 0;
    t0 = sp + 48;
    goto L_0889CB50;
L_0889CB50:;
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
    if (cnd_) { goto L_0889CB50; }
    goto L_0889CB7C;
L_0889CB7C:;
    v0 = LD32(s0+20);
    v0 = v0 | 0x4;
    ST32(s0+20, v0);
    v0 = D_08B2A744 - (-22716);
    goto L_0889CB8C;
L_0889CB8C:;
    a2 = v0 - 22716;
    a1 = sp + 0;
    a0 = 0 + 0;
    goto L_0889CB98;
L_0889CB98:;
    v0 = a0 << 2;
    v1 = v0 + a1;
    v0 = v0 + a2;
    f5 = BITSF(LD32(v1+32));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+16));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v0+32));
    f1 = f1 + f3;
    f2 = f2 + f4;
    f0 = f0 + f5;
    a0 = a0 + 1;
    v1 = a0 < 0x4u;
    ST32(v0, FBITS(f1));
    ST32(v0+32, FBITS(f0));
    cnd_ = v1 != 0;
    ST32(v0+16, FBITS(f2));
    if (cnd_) { goto L_0889CB98; }
    goto L_0889CBE0;
L_0889CBE0:;
    goto L_0889C9D8;
L_0889CBE8:;
    v0 = (v1 >> 3) & 0x1;
    cnd_ = s1 != v0;
    if (cnd_) { v0 = D_08B2A744 - (-22716); goto L_0889C948; }
    goto L_0889CBF4;
L_0889CBF4:;
    func_0889C71C(a0);
    goto L_0889CBFC;
L_0889CBFC:;
    goto L_0889CA48;
}

/* 0889CC04 */
void func_0889CC04(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889CC04:;
    sp = sp - 16;
    a0 = 60;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889CC14;
L_0889CC14:;
    v1 = D_08B2A9DC - (-22052);
    a0 = 20;
    ST32(v1-22052, v0);
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889CC24;
L_0889CC24:;
    v1 = D_08B2A9CC - (-22068);
    ST32(v1-22068, v0);
    v1 = (u32)-1;
    a0 = 16;
    ST32(v0+12, v1);
    v1 = D_08B2A9D0 - (-22064);
    ST32(v0+4, a0);
    a0 = D_08B2A9D4 - (-22060);
    ST32(v1-22064, 0);
    v1 = D_08B2A9D8 - (-22056);
    ST32(v0+16, 0);
    ST32(a0-22060, 0);
    ST32(v1-22056, 0);
    ST32(v0, 0);
    sp = sp + 16;
    return;
}

/* 0889CC68 */
void func_0889CC68(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889CC68:;
    sp = sp - 16;
    v0 = D_08B2A9CC - (-22068);
    s2 = LD32(v0-22068);
    s1 = LD32(s2);
    cnd_ = s1 == 0;
    v0 = (u32)-1;
    if (cnd_) { goto L_0889CCC0; }
    goto L_0889CC90;
L_0889CC90:;
    v0 = LD32(s1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0889CD10; }
    goto L_0889CC9C;
L_0889CC9C:;
    v0 = LD32(s1+4);
    goto L_0889CCA0;
L_0889CCA0:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_0889CCF8; }
    goto L_0889CCA8;
L_0889CCA8:;
    s0 = LD32(s1+12);
    goto L_0889CCAC;
L_0889CCAC:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_0889CCE0; }
    goto L_0889CCB4;
L_0889CCB4:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CCBC;
L_0889CCBC:;
    v0 = (u32)-1;
    goto L_0889CCC0;
L_0889CCC0:;
    ST32(s2, 0);
    ST32(s2+12, v0);
    sp = sp + 16;
    return;
L_0889CCE0:;
    func_08AB2408(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0889CCE8;
L_0889CCE8:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CCF0;
L_0889CCF0:;
    goto L_0889CCB4;
L_0889CCF8:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889CD08;
L_0889CD08:;
    s0 = LD32(s1+12);
    goto L_0889CCAC;
L_0889CD10:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CD18;
L_0889CD18:;
    v0 = LD32(s1+4);
    goto L_0889CCA0;
}

/* 0889CD20 */
void func_0889CD20(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889CD20:;
    sp = sp - 32;
    s3 = D_08B2A9CC - (-22068);
    s0 = D_08B2A9DC - (-22052);
    a0 = LD32(s0-22052);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CD48;
L_0889CD48:;
    s1 = LD32(s3-22068);
    cnd_ = s1 == 0;
    ST32(s0-22052, 0);
    if (cnd_) { goto L_0889CD94; }
    goto L_0889CD54;
L_0889CD54:;
    s2 = LD32(s1);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_0889CD8C; }
    goto L_0889CD60;
L_0889CD60:;
    a0 = LD32(s2);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889CE30; }
    goto L_0889CD6C;
L_0889CD6C:;
    a0 = LD32(s2+4);
    goto L_0889CD70;
L_0889CD70:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_0889CE1C; }
    goto L_0889CD78;
L_0889CD78:;
    s0 = LD32(s2+12);
    goto L_0889CD7C;
L_0889CD7C:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0889CE04; }
    goto L_0889CD84;
L_0889CD84:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CD8C;
L_0889CD8C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CD94;
L_0889CD94:;
    s1 = D_08B2A9D4 - (-22060);
    a0 = LD32(s1-22060);
    cnd_ = a0 != 0;
    ST32(s3-22068, 0);
    if (cnd_) { goto L_0889CDF4; }
    goto L_0889CDA4;
L_0889CDA4:;
    s2 = D_08B2A9D0 - (-22064);
    s0 = LD32(s2-22064);
    goto L_0889CDAC;
L_0889CDAC:;
    cnd_ = s0 != 0;
    ST32(s1-22060, 0);
    if (cnd_) { goto L_0889CDDC; }
    goto L_0889CDB4;
L_0889CDB4:;
    ST32(s2-22064, 0);
    goto L_0889CDB8;
L_0889CDB8:;
    v0 = D_08B2A9D8 - (-22056);
    ST32(v0-22056, 0);
    sp = sp + 32;
    return;
L_0889CDDC:;
    a0 = s0 + 0;
    func_0882F864(a0);
    goto L_0889CDE4;
L_0889CDE4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CDEC;
L_0889CDEC:;
    ST32(s2-22064, 0);
    goto L_0889CDB8;
L_0889CDF4:;
    s2 = D_08B2A9D0 - (-22064);
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CDFC;
L_0889CDFC:;
    s0 = LD32(s2-22064);
    goto L_0889CDAC;
L_0889CE04:;
    a0 = s0 + 0;
    func_08AB2408(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0889CE0C;
L_0889CE0C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CE14;
L_0889CE14:;
    goto L_0889CD84;
L_0889CE1C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889CE28;
L_0889CE28:;
    s0 = LD32(s2+12);
    goto L_0889CD7C;
L_0889CE30:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889CE38;
L_0889CE38:;
    a0 = LD32(s2+4);
    goto L_0889CD70;
}

/* 0889CE40 */
rv_t func_0889CE40(u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889CE40:;
    sp = sp - 32;
    s5 = D_08B2A9CC - (-22068);
    s4 = LD32(s5-22068);
    t1 = LD32(s4);
    cnd_ = t1 == 0;
    a1 = t1 + 0;
    if (cnd_) { goto L_0889CEC4; }
    goto L_0889CE74;
L_0889CE74:;
    t2 = (u32)-1;
    a0 = LD32(a1+4);
    goto L_0889CE7C;
L_0889CE7C:;
    v0 = LD32(a0+12);
    v1 = LD32(a0+8);
    a3 = v0 + 1;
    t0 = v0 << 2;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 == 0;
    a2 = (u32)-1;
    if (cnd_) { goto L_0889CEB0; }
    goto L_0889CE98;
L_0889CE98:;
    v0 = LD32(a0+4);
    ST32(a0+12, a3);
    v0 = t0 + v0;
    a2 = LD32(v0);
    v1 = LD32(a1+8);
    a2 = a2 + v1;
    goto L_0889CEB0;
L_0889CEB0:;
    cnd_ = a2 != t2;
    a3 = a2 + 0;
    if (cnd_) { goto L_0889CF0C; }
    goto L_0889CEB8;
L_0889CEB8:;
    a1 = LD32(a1+12);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1+4); goto L_0889CE7C; }
    goto L_0889CEC4;
L_0889CEC4:;
    v1 = t1 + 0;
    cnd_ = t1 == 0;
    s1 = LD32(s4+16);
    if (cnd_) { goto L_0889D144; }
    goto L_0889CED0;
L_0889CED0:;
    s0 = LD32(s4+4);
    v0 = LD32(v1+8);
    goto L_0889CED8;
L_0889CED8:;
    cnd_ = v0 == s1;
    if (cnd_) { s1 = s1 + s0; goto L_0889D13C; }
    goto L_0889CEE0;
L_0889CEE0:;
    v1 = LD32(v1+12);
    goto L_0889CEE4;
L_0889CEE4:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(v1+8); goto L_0889CED8; }
    goto L_0889CEEC;
L_0889CEEC:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889CEF4;
L_0889CEF4:;
    s2 = v0 + 0;
    ST32(v0, 0);
    ST32(v0+4, 0);
    cnd_ = v0 != 0;
    ST32(v0+12, 0);
    if (cnd_) { goto L_0889D010; }
    goto L_0889CF08;
L_0889CF08:;
    a3 = (u32)-1;
    goto L_0889CF0C;
L_0889CF0C:;
    v0 = (u32)-1;
    cnd_ = a3 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_0889CFD0; }
    goto L_0889CF18;
L_0889CF18:;
    t2 = LD32(s5-22068);
    v0 = LD32(t2+12);
    cnd_ = a3 == v0;
    if (cnd_) { a0 = LD32(t2+8); goto L_0889CFC0; }
    goto L_0889CF28;
L_0889CF28:;
    a0 = LD32(t2);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0889CF68; }
    goto L_0889CF34;
L_0889CF34:;
    a1 = LD32(a0+8);
    goto L_0889CF38;
L_0889CF38:;
    v0 = (s32)a3 < (s32)a1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_0889CF58; }
    goto L_0889CF44;
L_0889CF44:;
    v0 = LD32(t2+4);
    v0 = a1 + v0;
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889CF68; }
    goto L_0889CF58;
L_0889CF58:;
    a0 = LD32(a0+12);
    cnd_ = a0 != 0;
    if (cnd_) { a1 = LD32(a0+8); goto L_0889CF38; }
    goto L_0889CF64;
L_0889CF64:;
    v1 = 0 + 0;
    goto L_0889CF68;
L_0889CF68:;
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0889CFC0; }
    goto L_0889CF70;
L_0889CF70:;
    a0 = LD32(v1+4);
    v0 = LD32(v1+8);
    a2 = 0 + 0;
    t1 = LD32(a0+12);
    cnd_ = (s32)t1 <= 0;
    t0 = a3 - v0;
    if (cnd_) { goto L_0889CFA8; }
    goto L_0889CF88;
L_0889CF88:;
    a0 = LD32(a0+4);
    v0 = LD32(a0);
    goto L_0889CF90;
L_0889CF90:;
    a2 = a2 + 1;
    a1 = (s32)a2 < (s32)t1;
    cnd_ = v0 == t0;
    a0 = a0 + 4;
    if (cnd_) { goto L_0889CFF8; }
    goto L_0889CFA0;
L_0889CFA0:;
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_0889CF90; }
    goto L_0889CFA8;
L_0889CFA8:;
    v0 = 0 + 0;
    goto L_0889CFAC;
L_0889CFAC:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_0889CFC0; }
    goto L_0889CFB4;
L_0889CFB4:;
    a0 = v0 + 0;
    ST32(t2+8, v0);
    ST32(t2+12, a3);
    goto L_0889CFC0;
L_0889CFC0:;
    v0 = 1;
    ST32(a0+56, v0);
    v1 = a0 + 0;
    ST32(a0+28, a3);
    goto L_0889CFD0;
L_0889CFD0:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0889CFF8:;
    v1 = LD32(v1);
    v0 = t0 << 4;
    v0 = v0 - t0;
    v0 = v0 << 2;
    v0 = v1 + v0;
    goto L_0889CFAC;
L_0889D010:;
    a0 = s0 << 4;
    a0 = a0 - s0;
    a0 = a0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889D020;
L_0889D020:;
    cnd_ = s0 == 0;
    v1 = s0 - 1;
    if (cnd_) { goto L_0889D038; }
    goto L_0889D028;
L_0889D028:;
    a0 = (u32)-1;
    v1 = v1 - 1;
    goto L_0889D030;
L_0889D030:;
    cnd_ = v1 != a0;
    v1 = v1 - 1;
    if (cnd_) { goto L_0889D030; }
    goto L_0889D038;
L_0889D038:;
    ST32(s2, v0);
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889D044;
L_0889D044:;
    s3 = v0 + 0;
    v0 = D_08AF0F80 - (3968);
    v0 = v0 + 3968;
    ST32(s3, v0);
    a0 = s0 << 2;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889D05C;
L_0889D05C:;
    ST32(s3+4, v0);
    a0 = 0 + 0;
    ST32(s3+12, 0);
    cnd_ = (s32)s0 <= 0;
    ST32(s3+8, s0);
    if (cnd_) { goto L_0889D088; }
    goto L_0889D070;
L_0889D070:;
    v1 = v0 + 0;
    goto L_0889D074;
L_0889D074:;
    ST32(v1, a0);
    a0 = a0 + 1;
    v0 = (s32)a0 < (s32)s0;
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_0889D074; }
    goto L_0889D088;
L_0889D088:;
    v1 = LD32(s2);
    v0 = D_08AF1BD0 - (7120);
    v0 = v0 + 7120;
    ST32(s3, v0);
    cnd_ = v1 != 0;
    ST32(s2+4, s3);
    if (cnd_) { goto L_0889D0EC; }
    goto L_0889D0A0;
L_0889D0A0:;
    cnd_ = s3 != 0;
    if (cnd_) { v0 = LD32(v0+4); goto L_0889D0DC; }
    goto L_0889D0A8;
L_0889D0A8:;
    s0 = LD32(s2+12);
    goto L_0889D0AC;
L_0889D0AC:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0889D0C4; }
    goto L_0889D0B4;
L_0889D0B4:;
    a0 = s2 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889D0BC;
L_0889D0BC:;
    a3 = (u32)-1;
    goto L_0889CF0C;
L_0889D0C4:;
    a0 = s0 + 0;
    func_08AB2408(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0889D0CC;
L_0889D0CC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889D0D4;
L_0889D0D4:;
    goto L_0889D0B4;
L_0889D0DC:;
    t_ = v0;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889D0E4;
L_0889D0E4:;
    s0 = LD32(s2+12);
    goto L_0889D0AC;
L_0889D0EC:;
    cnd_ = s2 == 0;
    ST32(s2+8, s1);
    if (cnd_) { goto L_0889CF08; }
    goto L_0889D0F4;
L_0889D0F4:;
    a2 = LD32(s3+12);
    v0 = LD32(s3+8);
    v1 = LD32(s4);
    a0 = (u32)-1;
    v0 = (s32)a2 < (s32)v0;
    ST32(s2+12, v1);
    cnd_ = v0 == 0;
    ST32(s4, s2);
    if (cnd_) { goto L_0889D134; }
    goto L_0889D114;
L_0889D114:;
    v1 = a2 + 1;
    a0 = LD32(s3+4);
    ST32(s3+12, v1);
    v0 = a2 << 2;
    v0 = v0 + a0;
    a0 = LD32(v0);
    v1 = LD32(s2+8);
    a0 = a0 + v1;
    goto L_0889D134;
L_0889D134:;
    a3 = a0 + 0;
    goto L_0889CF0C;
L_0889D13C:;
    v1 = t1 + 0;
    goto L_0889CEE4;
L_0889D144:;
    s0 = LD32(s4+4);
    goto L_0889CEEC;
}

/* 0889D14C */
rv_t func_0889D14C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889D14C:;
    sp = sp - 16;
    a2 = (u32)-1;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_0889D1AC; }
    goto L_0889D160;
L_0889D160:;
    v0 = D_08B2A9CC - (-22068);
    s0 = LD32(a0+28);
    v1 = LD32(v0-22068);
    a1 = s0 + 0;
    cnd_ = s0 == a2;
    a0 = v1 + 0;
    if (cnd_) { goto L_0889D1AC; }
    goto L_0889D178;
L_0889D178:;
    v0 = LD32(v1+12);
    cnd_ = s0 == v0;
    if (cnd_) { ST32(v1+12, a2); goto L_0889D184; }
    goto L_0889D184;
L_0889D184:;
    { u64 r_ = func_08AB255C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889D18C;
L_0889D18C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889D1B0; }
    goto L_0889D194;
L_0889D194:;
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s0 - a1;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889D1AC;
L_0889D1AC:;
    goto L_0889D1B0;
L_0889D1B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889D1BC */
u64 func_0889D1BC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889D1BC:;
    sp = sp - 16;
    v0 = D_08B2A9CC - (-22068);
    a1 = a0 + 0;
    a0 = LD32(v0-22068);
    { u64 r_ = func_08AB248C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889D1D4;
L_0889D1D4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 0889D1E0 */
rv_t func_0889D1E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_0889D1E0:;
    f1 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(a1+4));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    v0 = 1;
    if (cnd_) { goto L_0889D20C; }
    goto L_0889D1F8;
L_0889D1F8:;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    v0 = (u32)-1;
    if (cnd_) { goto L_0889D20C; }
    goto L_0889D208;
L_0889D208:;
    v0 = 0 + 0;
    goto L_0889D20C;
L_0889D20C:;
    return (rv_t){ v0, v1, f0 };
}

/* 0889D214 */
rv_t func_0889D214(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889D214:;
    a1 = a0 + 0;
    a0 = LD32(a0+56);
    v0 = a0 & 0x1;
    cnd_ = v0 == 0;
    sp = sp - 16;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D228;
L_0889D228:;
    v0 = D_08B2A9F0 - (-22032);
    v1 = LD_U8(v0-22032);
    cnd_ = v1 == 0;
    if (cnd_) { f4 = BITSF(LD32(a1+12)); goto L_0889D248; }
    goto L_0889D238;
L_0889D238:;
    v0 = a0 & 0x40;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D244;
L_0889D244:;
    f4 = BITSF(LD32(a1+12));
    goto L_0889D248;
L_0889D248:;
    f0 = BITSF(0);
    fcc = FCMP(f4, f0, 14);
    cnd_ = fcc;
    v0 = a0 & 0x8;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D25C;
L_0889D25C:;
    cnd_ = v0 == 0;
    a0 = D_08B2A9E4 - (-22044);
    if (cnd_) { goto L_0889D2F8; }
    goto L_0889D264;
L_0889D264:;
    v0 = LD32(a0-22044);
    f1 = BITSF(LD32(a1+32));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = a1 + 32;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D280;
L_0889D280:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D298;
L_0889D298:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D2B0;
L_0889D2B0:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D2C8;
L_0889D2C8:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D2E0;
L_0889D2E0:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D2F8;
L_0889D2F8:;
    f5 = BITSF(LD32(a1));
    v0 = LD32(a0-22044);
    f1 = f5 - f4;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    f1 = f5 + f4;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D318;
L_0889D318:;
    f0 = BITSF(LD32(v0));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D32C;
L_0889D32C:;
    f6 = BITSF(LD32(a1+4));
    f1 = BITSF(LD32(v0+12));
    f0 = f6 - f4;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f1 = f6 + f4;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D348;
L_0889D348:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D35C;
L_0889D35C:;
    f7 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(v0+20));
    f0 = f7 - f4;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    f1 = f7 + f4;
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D378;
L_0889D378:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    v0 = D_08B2A9E0 - (-22048);
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D38C;
L_0889D38C:;
    a0 = LD32(v0-22048);
    v1 = D_08AEC3BC - (-15428);
    f3 = BITSF(LD32(v1-15428));
    f2 = BITSF(LD32(a0+8));
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = f7 - f2;
    f0 = f5 - f0;
    f1 = f6 - f1;
    f5 = BITSF(0);
    ST32(sp+8, FBITS(f2));
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
    f0 = f1 / f4;
    f3 = f3 - f0;
    fcc = FCMP(f3, f5, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f5; goto L_0889D400; }
    goto L_0889D400;
L_0889D400:;
    f0 = BITSF(LD32(a1+16));
    f1 = BITSF(LD32(a1+20));
    f2 = BITSF(LD32(a1+24));
    a0 = D_08B2A8C8 - (-22328);
    f0 = f0 + f1;
    v1 = LD32(a0-22328);
    v0 = 32;
    f0 = f0 + f2;
    cnd_ = v1 == v0;
    f3 = f3 * f0;
    if (cnd_) { goto L_0889D464; }
    goto L_0889D428;
L_0889D428:;
    v0 = v1 + 1;
    ST32(a0-22328, v0);
    t3 = D_08B2A8CC - (-22324);
    v0 = v1 + 0;
    a0 = D_08B2A9E8 - (-22040);
    goto L_0889D43C;
L_0889D43C:;
    f0 = BITSF(LD32(a0-22040));
    v1 = t3 - 22324;
    v0 = v0 << 3;
    f0 = f0 + f3;
    v0 = v0 + v1;
    ST32(v0+4, FBITS(f3));
    ST32(v0, a1);
    ST32(a0-22040, FBITS(f0));
    goto L_0889D45C;
L_0889D45C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889D464:;
    t3 = D_08B2A8CC - (-22324);
    t2 = 0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    t0 = t3 - 22324;
    t1 = 32;
    a0 = a2 << 3;
    goto L_0889D480;
L_0889D480:;
    v0 = a3 + t0;
    v1 = a0 + t0;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = a2 + 1; goto L_0889D4AC; }
    goto L_0889D4A0;
L_0889D4A0:;
    a3 = a0 + 0;
    t2 = a2 + 0;
    a2 = a2 + 1;
    goto L_0889D4AC;
L_0889D4AC:;
    v0 = a2 < t1;
    cnd_ = v0 != 0;
    a0 = a2 << 3;
    if (cnd_) { goto L_0889D480; }
    goto L_0889D4B8;
L_0889D4B8:;
    v0 = t3 - 22324;
    v0 = a3 + v0;
    f1 = BITSF(LD32(v0+4));
    fcc = FCMP(f3, f1, 14);
    cnd_ = fcc;
    a0 = D_08B2A9E8 - (-22040);
    if (cnd_) { goto L_0889D45C; }
    goto L_0889D4D4;
L_0889D4D4:;
    f0 = BITSF(LD32(a0-22040));
    v0 = t2 + 0;
    f0 = f0 - f1;
    ST32(a0-22040, FBITS(f0));
    goto L_0889D43C;
}

/* 0889D4E8 */
rv_t func_0889D4E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889D4E8:;
    a0 = a0 & 0xffff;
    v1 = D_08B2A9D4 - (-22060);
    a1 = LD32(v1-22060);
    v0 = a0 << 4;
    v0 = v0 - a0;
    v0 = v0 << 2;
    a1 = a1 + v0;
    v1 = LD32(a1+56);
    v1 = v1 & 0x8;
    cnd_ = v1 == 0;
    sp = sp - 16;
    if (cnd_) { goto L_0889D5AC; }
    goto L_0889D514;
L_0889D514:;
    v0 = D_08B2A9E4 - (-22044);
    v0 = LD32(v0-22044);
    f1 = BITSF(LD32(a1+32));
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v1 = a1 + 32;
    if (cnd_) { goto L_0889D674; }
    goto L_0889D534;
L_0889D534:;
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 1; goto L_0889D678; }
    goto L_0889D54C;
L_0889D54C:;
    f1 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v1+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 1; goto L_0889D678; }
    goto L_0889D564;
L_0889D564:;
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v1+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 1; goto L_0889D678; }
    goto L_0889D57C;
L_0889D57C:;
    f1 = BITSF(LD32(v0+20));
    f0 = BITSF(LD32(v1+16));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { v0 = 1; goto L_0889D678; }
    goto L_0889D594;
L_0889D594:;
    f1 = BITSF(LD32(v0+16));
    f0 = BITSF(LD32(v1+20));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_0889D678; }
    goto L_0889D5AC;
L_0889D5AC:;
    v0 = D_08B2A9E0 - (-22048);
    v1 = LD32(v0-22048);
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    f3 = BITSF(LD32(v1));
    f4 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(v1+8));
    f0 = BITSF(LD32(a1+8));
    f1 = f1 - f3;
    f2 = f2 - f4;
    f0 = f0 - f5;
    f4 = BITSF(0);
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f2 = BITSF(LD32(a1+12));
    f0 = BITSF(v0);
    v0 = D_08AEC3C0 - (-15424);
    f1 = BITSF(LD32(v0-15424));
    f0 = f0 / f2;
    f3 = f1 - f0;
    fcc = FCMP(f3, f4, 12);
    cnd_ = fcc;
    if (cnd_) { f3 = f4; goto L_0889D634; }
    goto L_0889D634;
L_0889D634:;
    v0 = LD32(a1+56);
    v0 = (v0 >> 4) & 0x1;
    cnd_ = v0 == 0;
    f0 = BITSF(LD32(a1+16));
    if (cnd_) { goto L_0889D680; }
    goto L_0889D644;
L_0889D644:;
    f0 = f0 * f3;
    f1 = f1 - f0;
    fcc = FCMP(f1, f4, 12);
    cnd_ = fcc;
    if (cnd_) { f1 = f4; goto L_0889D65C; }
    goto L_0889D65C;
L_0889D65C:;
    v0 = D_08B2A9EC - (-22036);
    f0 = BITSF(LD32(v0-22036));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(v0-22036, FBITS(f1)); goto L_0889D674; }
    goto L_0889D674;
L_0889D674:;
    v0 = 1;
    goto L_0889D678;
L_0889D678:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889D680:;
    f1 = BITSF(LD32(a1+20));
    f2 = BITSF(LD32(a1+24));
    a0 = D_08B2A8C8 - (-22328);
    f0 = f0 + f1;
    v1 = LD32(a0-22328);
    v0 = 32;
    f0 = f0 + f2;
    cnd_ = v1 == v0;
    f3 = f3 * f0;
    if (cnd_) { goto L_0889D6DC; }
    goto L_0889D6A4;
L_0889D6A4:;
    v0 = v1 + 1;
    ST32(a0-22328, v0);
    t2 = D_08B2A8CC - (-22324);
    v0 = v1 + 0;
    a0 = D_08B2A9E8 - (-22040);
    goto L_0889D6B8;
L_0889D6B8:;
    f0 = BITSF(LD32(a0-22040));
    v1 = t2 - 22324;
    v0 = v0 << 3;
    f0 = f0 + f3;
    v0 = v0 + v1;
    ST32(v0+4, FBITS(f3));
    ST32(v0, a1);
    ST32(a0-22040, FBITS(f0));
    goto L_0889D674;
L_0889D6DC:;
    t2 = D_08B2A8CC - (-22324);
    t3 = 0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    t0 = t2 - 22324;
    t1 = 32;
    a0 = a2 << 3;
    goto L_0889D6F8;
L_0889D6F8:;
    v0 = a3 + t0;
    v1 = a0 + t0;
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v1+4));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a2 = a2 + 1; goto L_0889D724; }
    goto L_0889D718;
L_0889D718:;
    a3 = a0 + 0;
    t3 = a2 + 0;
    a2 = a2 + 1;
    goto L_0889D724;
L_0889D724:;
    v0 = a2 < t1;
    cnd_ = v0 != 0;
    a0 = a2 << 3;
    if (cnd_) { goto L_0889D6F8; }
    goto L_0889D730;
L_0889D730:;
    v0 = t2 - 22324;
    v0 = a3 + v0;
    f1 = BITSF(LD32(v0+4));
    fcc = FCMP(f3, f1, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = 1; goto L_0889D678; }
    goto L_0889D74C;
L_0889D74C:;
    a0 = D_08B2A9E8 - (-22040);
    f0 = BITSF(LD32(a0-22040));
    v0 = t3 + 0;
    f0 = f0 - f1;
    ST32(a0-22040, FBITS(f0));
    goto L_0889D6B8;
}

/* 0889D764 */
void func_0889D764(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_0889D764:;
    sp = sp - 48;
    t1 = t1 & 0xff;
    a3 = a3 & 0xff;
    s5 = D_08B2A8C8 - (-22328);
    s4 = a0 + 0;
    s3 = t0 + 0;
    s2 = a2 & 0xff;
    cnd_ = t1 == 0;
    if (cnd_) { goto L_0889D7A8; }
    goto L_0889D7A4;
L_0889D7A4:;
    ST32(s5-22328, 0);
    goto L_0889D7A8;
L_0889D7A8:;
    v0 = D_08B2A9E0 - (-22048);
    s6 = D_08B2A9F0 - (-22032);
    a0 = s2 ^ 0x1;
    ST32(v0-22048, a1);
    v1 = D_08B2A9E8 - (-22040);
    v0 = D_08B2A9E4 - (-22044);
    ST32(v1-22040, 0);
    ST32(v0-22044, s4);
    cnd_ = a3 == 0;
    ST8(s6-22032, a0);
    if (cnd_) { goto L_0889D810; }
    goto L_0889D7D0;
L_0889D7D0:;
    v0 = D_08B2A9CC - (-22068);
    v1 = LD32(v0-22068);
    s0 = LD32(v1);
    cnd_ = s0 == 0;
    v0 = ((u32)(uintptr_t)func_0889D214) - (-11756);
    if (cnd_) { goto L_0889D810; }
    goto L_0889D7E4;
L_0889D7E4:;
    s1 = v0 - 11756;
    ST32(sp+4, 0);
    goto L_0889D7EC;
L_0889D7EC:;
    v1 = LD32(s0+4);
    v0 = LD32(v1+12);
    ST32(sp, v1);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_0889D8AC; }
    goto L_0889D804;
L_0889D804:;
    s0 = LD32(s0+12);
    goto L_0889D808;
L_0889D808:;
    cnd_ = s0 != 0;
    if (cnd_) { ST32(sp+4, 0); goto L_0889D7EC; }
    goto L_0889D810;
L_0889D810:;
    cnd_ = s2 == 0;
    a1 = LD32(s5-22328);
    if (cnd_) { goto L_0889D828; }
    goto L_0889D818;
L_0889D818:;
    v0 = D_08B2A9D8 - (-22056);
    v1 = LD32(v0-22056);
    cnd_ = v1 != 0;
    v0 = D_08B2A9D0 - (-22064);
    if (cnd_) { goto L_0889D880; }
    goto L_0889D828;
L_0889D828:;
    a0 = D_08B2A8CC - (-22324);
    a3 = ((u32)(uintptr_t)func_0889D1E0) - (-11808);
    a0 = a0 - 22324;
    a3 = a3 - 11808;
    a2 = 8;
    ST8(s6-22032, 0);
    func_08A88510(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0889D844;
L_0889D844:;
    v0 = LD32(s5-22328);
    v1 = v0 + 0;
    v0 = s3 < v0;
    if (v0 != 0) v1 = s3;
    ST32(s5-22328, v1);
    sp = sp + 48;
    return;
L_0889D880:;
    a0 = LD32(v0-22064);
    v0 = D_08AEC3C4 - (-15420);
    f0 = BITSF(LD32(v0-15420));
    a2 = ((u32)(uintptr_t)func_0889D4E8) - (-11032);
    v1 = D_08B2A9EC - (-22036);
    a1 = s4 + 0;
    a2 = a2 - 11032;
    ST32(v1-22036, FBITS(f0));
    func_0882F89C(a0, a1, a2, a3, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0889D8A4;
L_0889D8A4:;
    a1 = LD32(s5-22328);
    goto L_0889D828;
L_0889D8AC:;
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
    goto L_0889D8DC;
L_0889D8DC:;
    v0 = LD32(sp+4);
    v0 = v0 - 1;
    cnd_ = (s32)v0 >= 0;
    ST32(sp+4, v0);
    if (cnd_) { goto L_0889D8AC; }
    goto L_0889D8EC;
L_0889D8EC:;
    s0 = LD32(s0+12);
    goto L_0889D808;
}

/* 0889D8F4 */
rv_t func_0889D8F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_0889D8F4:;
    sp = sp - 96;
    s4 = a0 + 0;
    s3 = 0 + 0;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_0889DB08; }
    goto L_0889D92C;
L_0889D92C:;
    v0 = D_08AEC3D4 - (-15404);
    v1 = D_08AEC3D8 - (-15400);
    f21 = BITSF(LD32(v0-15404));
    f20 = BITSF(LD32(v1-15400));
    s1 = a1 + 0;
    s6 = D_08B2A9D4 - (-22060);
    s5 = sp + 16;
    s2 = 0 + 0;
    goto L_0889D94C;
L_0889D94C:;
    v0 = LD32(s6-22060);
    ST32(s1, FBITS(f21));
    a0 = s1 + 0;
    s0 = v0 + s2;
    ST32(s1+8, FBITS(f21));
    a1 = s5 + 0;
    ST32(s1+16, FBITS(f21));
    ST32(s1+4, FBITS(f20));
    ST32(s1+12, FBITS(f20));
    ST32(s1+20, FBITS(f20));
    f0 = BITSF(LD32(s0+12));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f0));
    f1 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f3 = BITSF(LD32(s0+8));
    f1 = f1 - f0;
    f2 = f2 - f0;
    f3 = f3 - f0;
    ST32(sp+16, FBITS(f1));
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f3));
    f0 = func_08AA0F30(a0, a1);
    goto L_0889D9AC;
L_0889D9AC:;
    a0 = s1 + 0;
    f2 = BITSF(LD32(s0));
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(s0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    a1 = s5 + 0;
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f4));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f3));
    ST32(sp+40, FBITS(f4));
    f0 = func_08AA0F30(a0, a1);
    goto L_0889D9F4;
L_0889D9F4:;
    v0 = LD32(s0+56);
    v0 = (v0 >> 3) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s3 + 1; goto L_0889DAF8; }
    goto L_0889DA04;
L_0889DA04:;
    f0 = BITSF(LD32(s0+32));
    f6 = BITSF(LD32(s1));
    fcc = FCMP(f6, f0, 12);
    cnd_ = !fcc;
    v0 = s0 + 32;
    if (cnd_) { goto L_0889DA24; }
    goto L_0889DA1C;
L_0889DA1C:;
    ST32(s1, FBITS(f0));
    f6 = f0;
    goto L_0889DA24;
L_0889DA24:;
    f5 = BITSF(LD32(s1+8));
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f4 = BITSF(LD32(s1+16)); goto L_0889DA48; }
    goto L_0889DA3C;
L_0889DA3C:;
    ST32(s1+8, FBITS(f0));
    f5 = f0;
    f4 = BITSF(LD32(s1+16));
    goto L_0889DA48;
L_0889DA48:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(s1+4)); goto L_0889DA68; }
    goto L_0889DA5C;
L_0889DA5C:;
    ST32(s1+16, FBITS(f0));
    f4 = f0;
    f3 = BITSF(LD32(s1+4));
    goto L_0889DA68;
L_0889DA68:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    if (cnd_) { f2 = BITSF(LD32(s1+12)); goto L_0889DA88; }
    goto L_0889DA7C;
L_0889DA7C:;
    ST32(s1+4, FBITS(f0));
    f3 = f0;
    f2 = BITSF(LD32(s1+12));
    goto L_0889DA88;
L_0889DA88:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(v0+20)); goto L_0889DAA8; }
    goto L_0889DA9C;
L_0889DA9C:;
    ST32(s1+12, FBITS(f0));
    f2 = f0;
    f1 = BITSF(LD32(v0+20));
    goto L_0889DAA8;
L_0889DAA8:;
    f0 = BITSF(LD32(s1+20));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_0889DAC4; }
    goto L_0889DABC;
L_0889DABC:;
    ST32(s1+20, FBITS(f1));
    f0 = f1;
    goto L_0889DAC4;
L_0889DAC4:;
    fcc = FCMP(f3, f6, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+4, FBITS(f6)); goto L_0889DAD4; }
    goto L_0889DAD4;
L_0889DAD4:;
    fcc = FCMP(f2, f5, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+12, FBITS(f5)); goto L_0889DAE4; }
    goto L_0889DAE4;
L_0889DAE4:;
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(s1+20, FBITS(f4)); goto L_0889DAF4; }
    goto L_0889DAF4;
L_0889DAF4:;
    s3 = s3 + 1;
    goto L_0889DAF8;
L_0889DAF8:;
    v0 = s3 < s4;
    s2 = s2 + 60;
    cnd_ = v0 != 0;
    s1 = s1 + 24;
    if (cnd_) { goto L_0889D94C; }
    goto L_0889DB08;
L_0889DB08:;
    v0 = 0 + 0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 0889DB3C */
void func_0889DB3C(u32 a0)
{
    u32 v0 = 0;
L_0889DB3C:;
    v0 = D_08AF7B38 - (31544);
    v0 = v0 + 31544;
    ST32(a0, v0);
    ST32(a0+4, 0);
    return;
}

/* 0889DB50 */
u32 func_0889DB50(u32 a0)
{
    u32 v0 = 0;
L_0889DB50:;
    v0 = D_08AF7B38 - (31544);
    v0 = v0 + 31544;
    ST32(a0, v0);
    return v0;
}

/* 0889DB60 */
rv_t func_0889DB60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0889DB60:;
    v0 = D_08AF7B38 - (31544);
    v0 = v0 + 31544;
    ST32(a0, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 0889DB70 */
rv_t func_0889DB70(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889DB70:;
    v0 = D_08AF7B38 - (31544);
    v0 = v0 + 31544;
    ST32(a0, v0);
    sp = sp - 16;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DB8C;
L_0889DB8C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889DB98 */
rv_t func_0889DB98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0889DB98:;
    v0 = 0 + 0;
    ST32(a0+4, FBITS(f12));
    return (rv_t){ v0, v1, f0 };
}

/* 0889DBA4 */
rv_t func_0889DBA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0889DBA4:;
    ST32(a0+4, 0);
    return (rv_t){ v0, v1, f0 };
}

/* 0889DBAC */
rv_t func_0889DBAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889DBAC:;
    v0 = D_08AF7B58 - (31576);
    v0 = v0 + 31576;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 3;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DBD0;
L_0889DBD0:;
    a0 = s0 + 44;
    func_08AA119C(a0, 0, 0, 0);
    goto L_0889DBD8;
L_0889DBD8:;
    a0 = s0 + 52;
    func_08AB25A4(a0, 0, 0, 0);
    goto L_0889DBE0;
L_0889DBE0:;
    a0 = s0 + 56;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_0889DBE8;
L_0889DBE8:;
    a0 = s0 + 64;
    func_08AB25E4(a0, 0, 0, 0);
    goto L_0889DBF0;
L_0889DBF0:;
    a0 = s0 + 60;
    func_08AA2994(a0, 0, 0, 0);
    goto L_0889DBF8;
L_0889DBF8:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DC00;
L_0889DC00:;
    v1 = D_08AF19C8 - (6600);
    v1 = v1 + 6600;
    ST32(s0, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889DC1C */
rv_t func_0889DC1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889DC1C:;
    v0 = D_08AF7B58 - (31576);
    v0 = v0 + 31576;
    ST32(a0, v0);
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 3;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DC40;
L_0889DC40:;
    a0 = s0 + 44;
    func_08AA119C(a0, 0, 0, 0);
    goto L_0889DC48;
L_0889DC48:;
    a0 = s0 + 52;
    func_08AB25A4(a0, 0, 0, 0);
    goto L_0889DC50;
L_0889DC50:;
    a0 = s0 + 56;
    func_08AA0CE4(a0, 0, 0, 0);
    goto L_0889DC58;
L_0889DC58:;
    a0 = s0 + 64;
    func_08AB25E4(a0, 0, 0, 0);
    goto L_0889DC60;
L_0889DC60:;
    a0 = s0 + 60;
    func_08AA2994(a0, 0, 0, 0);
    goto L_0889DC68;
L_0889DC68:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DC70;
L_0889DC70:;
    v1 = D_08AF19C8 - (6600);
    v1 = v1 + 6600;
    ST32(s0, v1);
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DC84;
L_0889DC84:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889DC94 */
void func_0889DC94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0889DC94:;
    sp = sp - 64;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_0884A818(a0);
    goto L_0889DCB0;
L_0889DCB0:;
    v0 = D_08AF7B58 - (31576);
    v0 = v0 + 31576;
    ST32(s0+40, 0);
    a0 = s0 + 0;
    v1 = (u32)-1;
    ST32(s0+48, 0);
    a1 = sp + 0;
    ST32(s0, v0);
    v0 = D_08AF0EE8 - (3816);
    v0 = v0 + 3816;
    a2 = LD32(s1);
    ST32(s0+44, 0);
    ST32(s0+52, 0);
    ST32(s0+56, 0);
    ST32(s0+60, 0);
    ST32(s0+64, 0);
    ST32(sp, v0);
    v0 = 1;
    ST32(sp+32, s1);
    ST32(sp+12, v1);
    ST32(sp+28, a2);
    ST8(sp+40, v0);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+16, 0);
    ST32(sp+20, 0);
    ST32(sp+24, 0);
    ST32(sp+36, 0);
    func_0889DD38(a0, a1);
    goto L_0889DD24;
L_0889DD24:;
    sp = sp + 64;
    return;
}

/* 0889DD38 */
void func_0889DD38(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_0889DD38:;
    sp = sp - 64;
    s2 = a1 + 0;
    s1 = a0 + 0;
    a0 = 3;
    { u64 r_ = func_0882F7EC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DD60;
L_0889DD60:;
    a0 = s2 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_0882D854(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DD6C;
L_0889DD6C:;
    a3 = LD32(sp);
    v0 = (s32)a3 < 3;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = s1 + 40; goto L_0889DEE8; }
    goto L_0889DD7C;
L_0889DD7C:;
    v0 = (s32)a3 < 4;
    cnd_ = v0 == 0;
    v0 = 4;
    if (cnd_) { goto L_0889DE98; }
    goto L_0889DD88;
L_0889DD88:;
    v0 = LD32(s1+56);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD_U16(s1+32); goto L_0889DDF4; }
    goto L_0889DD94;
L_0889DD94:;
    t3 = LD32(s1+48);
    a1 = v0 + 0;
    cnd_ = t3 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0889DDF0; }
    goto L_0889DDA4;
L_0889DDA4:;
    a0 = LD_U16(a1);
    a2 = a2 + 1;
    t0 = a2 < t3;
    v0 = a0 & 0x20;
    v1 = a0 & 0x40;
    t1 = v0 + 0;
    v0 = a0 & 0x200;
    a0 = (a0 >> 10) & 0x1;
    t2 = v1 + 0;
    cnd_ = v0 == 0;
    v1 = a0 | 0x2;
    if (cnd_) { goto L_0889DDD4; }
    goto L_0889DDD0;
L_0889DDD0:;
    a0 = v1 & 0xffff;
    goto L_0889DDD4;
L_0889DDD4:;
    v0 = a0 | 0x4;
    if (t1 != 0) a0 = v0;
    v1 = a0 | 0x8;
    if (t2 != 0) a0 = v1;
    ST16(a1, a0);
    cnd_ = t0 != 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_0889DDA4; }
    goto L_0889DDF0;
L_0889DDF0:;
    v1 = LD_U16(s1+32);
    goto L_0889DDF4;
L_0889DDF4:;
    v0 = v1 & 0x200;
    cnd_ = v0 == 0;
    a1 = (v1 >> 10) & 0x1;
    if (cnd_) { goto L_0889DE08; }
    goto L_0889DE00;
L_0889DE00:;
    v0 = a1 | 0x2;
    a1 = v0 & 0xffff;
    goto L_0889DE08;
L_0889DE08:;
    v0 = v1 & 0x20;
    a0 = a1 | 0x4;
    if (v0 != 0) a1 = a0;
    v1 = v1 & 0x40;
    v0 = a1 | 0x8;
    if (v1 != 0) a1 = v0;
    ST16(s1+32, a1);
    goto L_0889DE24;
L_0889DE24:;
    v0 = (s32)a3 < 8;
    goto L_0889DE28;
L_0889DE28:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s2); goto L_0889DE54; }
    goto L_0889DE30;
L_0889DE30:;
    { u64 r_ = func_0882F824(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889DE38;
L_0889DE38:;
    sp = sp + 64;
    return;
L_0889DE54:;
    a1 = 4;
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DE64;
L_0889DE64:;
    a0 = s2 + 0;
    a1 = sp + 16;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DE70;
L_0889DE70:;
    v1 = LD32(sp+16);
    cnd_ = v1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0889DE30; }
    goto L_0889DE7C;
L_0889DE7C:;
    v1 = LD32(s2);
    a1 = LD32(s1+48);
    v0 = LD32(v1+12);
    t_ = v0;
    a1 = a1 << 2;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DE90;
L_0889DE90:;
    goto L_0889DE30;
L_0889DE98:;
    cnd_ = a3 != v0;
    v0 = (s32)a3 < 8;
    if (cnd_) { goto L_0889DE28; }
    goto L_0889DEA0;
L_0889DEA0:;
    v0 = LD32(s1+56);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = (s32)a3 < 8; goto L_0889DE28; }
    goto L_0889DEAC;
L_0889DEAC:;
    t0 = LD32(s1+48);
    cnd_ = t0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0889DE24; }
    goto L_0889DEB8;
L_0889DEB8:;
    a1 = v0 + 0;
    goto L_0889DEBC;
L_0889DEBC:;
    v0 = LD_U16(a1);
    a2 = a2 + 1;
    a0 = a2 < t0;
    v1 = v0 & 0xf0;
    v1 = v1 << 4;
    v0 = v0 | v1;
    ST16(a1, v0);
    cnd_ = a0 != 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_0889DEBC; }
    goto L_0889DEE0;
L_0889DEE0:;
    v0 = (s32)a3 < 8;
    goto L_0889DE28;
L_0889DEE8:;
    a0 = s2 + 0;
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    ST32(sp+12, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DEFC;
L_0889DEFC:;
    a1 = s1 + 48;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DF08;
L_0889DF08:;
    a0 = s2 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DF14;
L_0889DF14:;
    a0 = s2 + 0;
    a1 = sp + 8;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DF20;
L_0889DF20:;
    v1 = LD32(sp);
    v1 = (s32)v1 < 9;
    cnd_ = v1 == 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_0889E120; }
    goto L_0889DF30;
L_0889DF30:;
    a1 = s1 + 32;
    goto L_0889DF34;
L_0889DF34:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882DA28(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DF3C;
L_0889DF3C:;
    a0 = s2 + 0;
    a1 = s1 + 34;
    func_0882D9B0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0889DF48;
L_0889DF48:;
    a0 = (u32)(s32)LD_S16(s1+34);
    v0 = ~(0 | a0);
    v0 = 0 < v0;
    v1 = (s32)a0 < 1000;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889E110; }
    goto L_0889DF64;
L_0889DF64:;
    v0 = LD32(sp);
    v0 = (s32)v0 < 9;
    cnd_ = v0 == 0;
    a1 = s1 + 36;
    if (cnd_) { goto L_0889E100; }
    goto L_0889DF74;
L_0889DF74:;
    a1 = s1 + 4;
    goto L_0889DF78;
L_0889DF78:;
    a0 = s2 + 0;
    func_0882E1D8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0889DF80;
L_0889DF80:;
    a1 = s1 + 28;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DF8C;
L_0889DF8C:;
    a0 = s1 + 0;
    func_0884A854(a0);
    goto L_0889DF94;
L_0889DF94:;
    a1 = LD32(s1+40);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889E0CC; }
    goto L_0889DFA0;
L_0889DFA0:;
    a1 = LD32(s1+48);
    goto L_0889DFA4;
L_0889DFA4:;
    cnd_ = a1 == 0;
    a3 = LD32(sp);
    if (cnd_) { goto L_0889DD7C; }
    goto L_0889DFAC;
L_0889DFAC:;
    a0 = s1 + 52;
    func_08AB2624(a0, a1, 0, 0, 0);
    goto L_0889DFB4;
L_0889DFB4:;
    v1 = LD32(s2);
    a1 = LD32(s1+48);
    a2 = LD32(s1+52);
    v0 = LD32(v1+8);
    a1 = a1 << 3;
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889DFD0;
L_0889DFD0:;
    v1 = LD32(sp+4);
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(s1+48); goto L_0889E0A0; }
    goto L_0889DFDC;
L_0889DFDC:;
    v0 = LD32(sp+8);
    goto L_0889DFE0;
L_0889DFE0:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+48); goto L_0889E024; }
    goto L_0889DFE8;
L_0889DFE8:;
    v0 = LD32(sp+12);
    goto L_0889DFEC;
L_0889DFEC:;
    cnd_ = v0 == 0;
    if (cnd_) { a3 = LD32(sp); goto L_0889DD7C; }
    goto L_0889DFF4;
L_0889DFF4:;
    a1 = LD32(s1+48);
    a0 = s1 + 60;
    func_08AA3E6C(a0, a1, 0, 0, 0);
    goto L_0889E000;
L_0889E000:;
    v1 = LD32(s2);
    a1 = LD32(s1+48);
    a2 = LD32(s1+60);
    v0 = LD32(v1+8);
    a1 = a1 << 2;
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E01C;
L_0889E01C:;
    a3 = LD32(sp);
    goto L_0889DD7C;
L_0889E024:;
    a0 = s1 + 64;
    s3 = 0 + 0;
    func_08AA61EC(a0, a1, 0, 0, 0);
    goto L_0889E030;
L_0889E030:;
    v1 = LD32(s1+48);
    cnd_ = v1 == 0;
    v0 = LD32(sp+12);
    if (cnd_) { goto L_0889DFEC; }
    goto L_0889E03C;
L_0889E03C:;
    a1 = LD32(s1+64);
    goto L_0889E040;
L_0889E040:;
    s0 = s3 << 1;
    a0 = s2 + 0;
    a1 = a1 + s0;
    func_0882D9B0(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_0889E050;
L_0889E050:;
    a0 = LD32(s1+64);
    s0 = s0 + a0;
    v1 = (u32)(s32)LD_S16(s0);
    v0 = ~(0 | v1);
    v0 = 0 < v0;
    a0 = v1 + 0;
    v1 = (s32)v1 < 1000;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_0889E090; }
    goto L_0889E078;
L_0889E078:;
    v0 = LD32(s1+48);
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1+64); goto L_0889E040; }
    goto L_0889E088;
L_0889E088:;
    v0 = LD32(sp+12);
    goto L_0889DFEC;
L_0889E090:;
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889E098;
L_0889E098:;
    ST16(s0, v0);
    goto L_0889E078;
L_0889E0A0:;
    a0 = s1 + 56;
    func_08AA2E18(a0, a1, 0, 0, 0);
    goto L_0889E0A8;
L_0889E0A8:;
    v1 = LD32(s2);
    a1 = LD32(s1+48);
    a2 = LD32(s1+56);
    v0 = LD32(v1+8);
    a1 = a1 << 1;
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E0C4;
L_0889E0C4:;
    v0 = LD32(sp+8);
    goto L_0889DFE0;
L_0889E0CC:;
    a0 = s1 + 44;
    func_08AA2D50(a0, a1, 0, 0, 0);
    goto L_0889E0D4;
L_0889E0D4:;
    v1 = LD32(s1+40);
    a0 = LD32(s2);
    a2 = LD32(s1+44);
    a1 = v1 << 1;
    v0 = LD32(a0+8);
    a1 = a1 + v1;
    a1 = a1 << 2;
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E0F8;
L_0889E0F8:;
    a1 = LD32(s1+48);
    goto L_0889DFA4;
L_0889E100:;
    a0 = s2 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E108;
L_0889E108:;
    a1 = s1 + 4;
    goto L_0889DF78;
L_0889E110:;
    { u64 r_ = func_0883558C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889E118;
L_0889E118:;
    ST16(s1+34, v0);
    goto L_0889DF64;
L_0889E120:;
    a1 = sp + 12;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E128;
L_0889E128:;
    a1 = s1 + 32;
    goto L_0889DF34;
}

/* 0889E130 */
rv_t func_0889E130(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0)
{
    u32 v0 = 0, v1 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[768] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 768);
L_0889E130:;
    sp = sp - 768;
    v1 = 0 + 0;
    s6 = t0 + 0;
    s3 = a1 + 0;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s7 = LD32(a3+48);
    v0 = LD_U16(a0+32);
    v0 = v0 & s7;
    cnd_ = v0 == 0;
    s0 = a3 + 0;
    if (cnd_) { goto L_0889E1F8; }
    goto L_0889E1A4;
L_0889E1A4:;
    v0 = v1 + 0;
    sp = sp + 768;
    return (rv_t){ v0, v1, f0 };
L_0889E1F8:;
    s4 = a0 + 4;
    f6 = BITSF(LD32(a0+4));
    f0 = BITSF(LD32(s4+4));
    f2 = BITSF(LD32(s4+12));
    f1 = BITSF(LD32(s4+20));
    f5 = BITSF(LD32(s4+8));
    f4 = BITSF(LD32(s4+16));
    v0 = LD32(a2);
    v1 = LD32(a2+4);
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    f6 = f6 + f0;
    {v[32]=BITSF(v0);}
    f5 = f5 + f2;
    v0 = LD32(a2+8);
    {v[33]=BITSF(v1);}
    f4 = f4 + f1;
    v1 = LD32(a2+12);
    {v[34]=BITSF(v0);}
    v0 = LD32(a2+16);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {v[32]=BITSF(v1);}
    {v[33]=BITSF(v0);}
    v0 = D_08AEC3F4 - (-15372);
    f0 = BITSF(LD32(v0-15372));
    v1 = LD32(a2+20);
    v0 = LD32(a2+28);
    f4 = f4 * f0;
    f6 = f6 * f0;
    f5 = f5 * f0;
    f7 = BITSF(LD32(a1));
    f8 = BITSF(LD32(a1+4));
    f9 = BITSF(LD32(a1+8));
    {v[34]=BITSF(v1);}
    a0 = FBITS(f4);
    v1 = LD32(a2+24);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[32]=d0;v[33]=d1;v[34]=d2;v[35]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    {v[32]=BITSF(v1);}
    v1 = LD32(a2+32);
    {v[33]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[34]=BITSF(v1);}
    {v[20]=BITSF(v0);}
    v1 = FBITS(f5);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v1);}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    {v1=FBITS(v[16]);}
    {a0=FBITS(v[17]);}
    f3 = BITSF(v0);
    f0 = BITSF(a0);
    f2 = BITSF(v1);
    f9 = f9 + f3;
    f8 = f8 + f0;
    f7 = f7 + f2;
    f12 = BITSF(LD32(s2+28));
    s5 = a3 + 12;
    a0 = a3 + 0;
    a1 = s5 + 0;
    a2 = sp + 0;
    a3 = sp + 192;
    ST32(sp, FBITS(f7));
    {u32 a_=sp+(496);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    ST32(sp+4, FBITS(f8));
    ST32(sp+8, FBITS(f9));
    ST32(sp+32, FBITS(f6));
    ST32(sp+36, FBITS(f5));
    ST32(sp+40, FBITS(f4));
    ST32(sp+48, v1);
    ST32(sp+52, FBITS(f0));
    ST32(sp+56, v0);
    ST32(sp+16, v1);
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, v0);
    {u32 a_=sp+(512);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(544);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    {u32 a_=sp+(608);ST32(a_+0,FBITS(v[108]));ST32(a_+4,FBITS(v[109]));ST32(a_+8,FBITS(v[110]));ST32(a_+12,FBITS(v[111]));}
    {u32 a_=sp+(528);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(560);ST32(a_+0,FBITS(v[96]));ST32(a_+4,FBITS(v[97]));ST32(a_+8,FBITS(v[98]));ST32(a_+12,FBITS(v[99]));}
    {u32 a_=sp+(576);ST32(a_+0,FBITS(v[100]));ST32(a_+4,FBITS(v[101]));ST32(a_+8,FBITS(v[102]));ST32(a_+12,FBITS(v[103]));}
    {u32 a_=sp+(592);ST32(a_+0,FBITS(v[104]));ST32(a_+4,FBITS(v[105]));ST32(a_+8,FBITS(v[106]));ST32(a_+12,FBITS(v[107]));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { rv_t r_ = func_088347A0(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E364;
L_0889E364:;
    {u32 a_=sp+(544);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(608);v[108]=BITSF(LD32(a_+0));v[109]=BITSF(LD32(a_+4));v[110]=BITSF(LD32(a_+8));v[111]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889E388; }
    goto L_0889E370;
L_0889E370:;
    f1 = BITSF(LD32(s6));
    f0 = BITSF(LD32(sp+192));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f15 = BITSF(LD32(s1+20)); goto L_0889E390; }
    goto L_0889E388;
L_0889E388:;
    v1 = 0 + 0;
    goto L_0889E1A4;
L_0889E390:;
    f18 = BITSF(LD32(s1+4));
    f13 = BITSF(LD32(s1+8));
    f14 = BITSF(LD32(s1+12));
    f16 = BITSF(LD32(s1+24));
    f17 = BITSF(LD32(s1+28));
    v0 = FBITS(f18);
    v1 = FBITS(f13);
    a0 = FBITS(f14);
    {u32 a_=sp+(208);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {v[76]=BITSF(v0);}
    v0 = FBITS(f15);
    {v[77]=BITSF(v1);}
    {v[72]=BITSF(v0);}
    {v[78]=BITSF(a0);}
    v1 = FBITS(f16);
    {v[73]=BITSF(v1);}
    {v1=FBITS(v[78]);}
    f1 = BITSF(v1);
    f25 = BITSF(LD32(s1));
    a0 = FBITS(f17);
    {v[74]=BITSF(a0);}
    {v0=FBITS(v[73]);}
    f0 = BITSF(v0);
    f3 = BITSF(LD32(s3+8));
    f10 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s3+4));
    f11 = BITSF(LD32(s0+4));
    f12 = BITSF(LD32(s0+8));
    f26 = BITSF(v0);
    v0 = FBITS(f1);
    f1 = BITSF(LD32(s3));
    f23 = BITSF(LD32(s1+16));
    a0 = FBITS(f25);
    f27 = BITSF(v1);
    {u32 a_=sp+(320);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v1 = FBITS(f0);
    {v[68]=BITSF(a0);}
    {u32 a_=sp+(256);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[69]=BITSF(v0);}
    {v[64]=BITSF(a0);}
    {v[65]=BITSF(v0);}
    {v0=FBITS(v[74]);}
    f0 = BITSF(v0);
    f10 = f10 - f1;
    f11 = f11 - f2;
    f12 = f12 - f3;
    f9 = BITSF(LD32(s0+12));
    f8 = BITSF(LD32(s5+8));
    f7 = BITSF(LD32(s5+4));
    {a0=FBITS(v[76]);}
    f21 = BITSF(LD32(s1+32));
    {v[70]=BITSF(v1);}
    {v[66]=BITSF(v1);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[16]=d0;v[17]=d1;v[18]=d2;v[19]=d3;}
    v1 = FBITS(f0);
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    f24 = BITSF(a0);
    f22 = BITSF(v0);
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    v0 = FBITS(f23);
    {v[68]=BITSF(a0);}
    {u32 a_=sp+(272);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {v[69]=BITSF(v0);}
    {v[64]=BITSF(a0);}
    {v[70]=BITSF(v1);}
    {a0=FBITS(v[72]);}
    {v[65]=BITSF(v0);}
    f1 = BITSF(a0);
    {v[66]=BITSF(v1);}
    {v1=FBITS(v[77]);}
    f0 = BITSF(v1);
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[20]=d0;v[21]=d1;v[22]=d2;v[23]=d3;}
    f19 = BITSF(v1);
    v0 = FBITS(f0);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {float s0=v[108];float s1=v[109];float s2=v[110];float s3=v[111];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[28]=d0;v[29]=d1;v[30]=d2;v[31]=d3;}
    f20 = BITSF(a0);
    {u32 a_=sp+(352);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    a0 = FBITS(f21);
    {v[68]=BITSF(v1);}
    {u32 a_=sp+(288);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    v1 = FBITS(f1);
    {v[64]=BITSF(v0);}
    {v[69]=BITSF(v1);}
    v0 = FBITS(f10);
    {v[70]=BITSF(a0);}
    {v[65]=BITSF(v1);}
    {float s0=v[68];float s1=v[69];float s2=v[70];float s3=v[71];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[24]=d0;v[25]=d1;v[26]=d2;v[27]=d3;}
    {v[66]=BITSF(a0);}
    v1 = FBITS(f9);
    a0 = FBITS(f11);
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(240);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[40]=BITSF(LD32(a_+0));v[41]=BITSF(LD32(a_+4));v[42]=BITSF(LD32(a_+8));v[43]=BITSF(LD32(a_+12));}
    {v[36]=BITSF(v0);}
    {v[40]=BITSF(v1);}
    v0 = FBITS(f7);
    v1 = FBITS(f12);
    {v[37]=BITSF(a0);}
    {v[41]=BITSF(v0);}
    {v[38]=BITSF(v1);}
    a0 = FBITS(f8);
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[32]=o0;v[33]=o1;v[34]=o2;}
    {v[42]=BITSF(a0);}
    {v0=FBITS(v[34]);}
    {float t0=v[40];float t1=v[41];float t2=v[42];float o0=0;o0+=v[16]*t0;o0+=v[17]*t1;o0+=v[18]*t2;float o1=0;o1+=v[20]*t0;o1+=v[21]*t1;o1+=v[22]*t2;float o2=0;o2+=v[24]*t0;o2+=v[25]*t1;o2+=v[26]*t2;v[0]=o0;v[1]=o1;v[2]=o2;}
    f5 = BITSF(v0);
    {v1=FBITS(v[32]);}
    {v0=FBITS(v[33]);}
    f3 = BITSF(v1);
    f2 = BITSF(v0);
    {v1=FBITS(v[2]);}
    f6 = BITSF(v1);
    a2 = s4 + 0;
    a0 = sp + 48;
    a1 = sp + 32;
    a3 = sp + 192;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    {v0=FBITS(v[0]);}
    {v1=FBITS(v[1]);}
    ST32(sp+48, FBITS(f3));
    ST32(sp+64, FBITS(f25));
    ST32(sp+80, FBITS(f23));
    ST32(sp+96, FBITS(f21));
    ST32(sp+84, FBITS(f22));
    ST32(sp+52, FBITS(f2));
    ST32(sp+56, FBITS(f5));
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    ST32(sp+40, FBITS(f6));
    ST32(sp+88, FBITS(f19));
    ST32(sp+92, FBITS(f20));
    ST32(sp+68, FBITS(f27));
    ST32(sp+72, FBITS(f26));
    ST32(sp+76, FBITS(f24));
    ST32(sp+16, v0);
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f6));
    ST32(sp+112, v0);
    ST32(sp+116, v1);
    ST32(sp+120, FBITS(f6));
    { rv_t r_ = func_08834B8C(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E5D8;
L_0889E5D8:;
    {u32 a_=sp+(624);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(672);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889E388; }
    goto L_0889E5EC;
L_0889E5EC:;
    f1 = BITSF(LD32(s6));
    f0 = BITSF(LD32(sp+192));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_0889E1A4; }
    goto L_0889E604;
L_0889E604:;
    v1 = LD32(s2+48);
    v0 = D_08AEC3F8 - (-15368);
    a0 = (u32)-1;
    f20 = BITSF(LD32(v0-15368));
    ST32(sp+368, a0);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_0889E680; }
    goto L_0889E620;
L_0889E620:;
    f21 = BITSF(0);
    v0 = s0 << 3;
    goto L_0889E628;
L_0889E628:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    ST32(sp+372, v0);
    { rv_t r_ = func_08AB26C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E648;
L_0889E648:;
    v0 = v0 & s7;
    a0 = sp + 48;
    a1 = sp + 32;
    t1 = sp + 128;
    {u32 a_=sp+(624);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(672);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889E958; }
    goto L_0889E66C;
L_0889E66C:;
    v0 = LD32(s2+48);
    goto L_0889E670;
L_0889E670:;
    s0 = s0 + 1;
    v0 = s0 < v0;
    cnd_ = v0 != 0;
    v0 = s0 << 3;
    if (cnd_) { goto L_0889E628; }
    goto L_0889E680;
L_0889E680:;
    v1 = LD32(sp+368);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = 0 + 0; goto L_0889E1A4; }
    goto L_0889E690;
L_0889E690:;
    f0 = BITSF(LD32(s6));
    fcc = FCMP(f20, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = 0 + 0; goto L_0889E1A4; }
    goto L_0889E6A4;
L_0889E6A4:;
    ST32(s6, FBITS(f20));
    a1 = v1 + 0;
    a0 = s2 + 0;
    ST32(s6+12, v0);
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    ST32(s6+8, v0);
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    { rv_t r_ = func_08AB26C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E6CC;
L_0889E6CC:;
    v1 = LD32(s2+64);
    ST16(s6+16, v0);
    cnd_ = v1 == 0;
    {u32 a_=sp+(672);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889E950; }
    goto L_0889E6DC;
L_0889E6DC:;
    a0 = LD32(sp+368);
    v0 = a0 << 1;
    v0 = v0 + v1;
    v1 = (u32)(s32)LD_S16(v0);
    goto L_0889E6EC;
L_0889E6EC:;
    ST16(s6+18, v1);
    {u32 a_=sp+(384);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(400);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = LD32(sp+368);
    v0 = LD32(s2+52);
    a1 = LD32(s2+44);
    a3 = v1 << 3;
    a3 = a3 + v0;
    a0 = LD_U16(a3);
    a2 = LD_U16(a3+2);
    {u32 a_=sp+(416);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v1 = a0 << 1;
    v0 = a2 << 1;
    v1 = v1 + a0;
    v0 = v0 + a2;
    v1 = v1 << 2;
    v0 = v0 << 2;
    v1 = a1 + v1;
    v0 = a1 + v0;
    f4 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v1+8));
    f5 = BITSF(LD32(v0+8));
    f1 = f1 - f4;
    f0 = f0 - f2;
    f5 = f5 - f3;
    a0 = LD_U16(a3+4);
    ST32(sp+144, FBITS(f1));
    v0 = a0 << 1;
    ST32(sp+148, FBITS(f0));
    v0 = v0 + a0;
    v0 = v0 << 2;
    ST32(sp+152, FBITS(f5));
    a1 = a1 + v0;
    a0 = FBITS(f1);
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f6 = BITSF(LD32(a1));
    f7 = BITSF(LD32(a1+4));
    f8 = BITSF(LD32(a1+8));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(v1));
    f7 = f7 - f1;
    f8 = f8 - f2;
    f6 = f6 - f0;
    {v[8]=BITSF(a0);}
    a0 = FBITS(f5);
    {v[9]=BITSF(v0);}
    v1 = FBITS(f6);
    {v[10]=BITSF(a0);}
    {v[0]=BITSF(v1);}
    v0 = FBITS(f7);
    v1 = FBITS(f8);
    {v[1]=BITSF(v0);}
    {v[2]=BITSF(v1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[4]=d0;v[5]=d1;v[6]=d2;}
    {v0=FBITS(v[4]);}
    {a0=FBITS(v[6]);}
    f1 = BITSF(v0);
    f5 = BITSF(a0);
    {a0=FBITS(v[5]);}
    f0 = BITSF(a0);
    f4 = BITSF(v0);
    f3 = BITSF(a0);
    v1 = FBITS(f1);
    v0 = FBITS(f0);
    {v[12]=BITSF(v1);}
    f1 = BITSF(0);
    {v[13]=BITSF(v0);}
    v1 = FBITS(f5);
    {v[14]=BITSF(v1);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {a0=FBITS(v[0]);}
    f0 = BITSF(a0);
    ST32(sp+160, FBITS(f6));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+164, FBITS(f7));
    ST32(sp+168, FBITS(f8));
    ST32(sp+176, FBITS(f4));
    ST32(sp+180, FBITS(f3));
    ST32(sp+184, FBITS(f5));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f3));
    ST32(sp+24, FBITS(f5));
    ST32(sp+112, FBITS(f4));
    ST32(sp+116, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+120, FBITS(f5));
    if (cnd_) { goto L_0889E888; }
    goto L_0889E854;
L_0889E854:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    {v1=FBITS(v[0]);}
    {a0=FBITS(v[1]);}
    ST32(sp+176, v1);
    ST32(sp+180, a0);
    ST32(sp+184, v0);
    ST32(sp+112, v1);
    ST32(sp+116, a0);
    ST32(sp+120, v0);
    goto L_0889E888;
L_0889E888:;
    v1 = LD32(s1);
    v0 = LD32(s1+4);
    a0 = LD32(s1+32);
    {u32 a_=sp+(448);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {float s0=v[124];float s1=v[125];float s2=v[126];float s3=v[127];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(480);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(s1+8);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(432);v[36]=BITSF(LD32(a_+0));v[37]=BITSF(LD32(a_+4));v[38]=BITSF(LD32(a_+8));v[39]=BITSF(LD32(a_+12));}
    v0 = LD32(s1+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s1+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(464);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(v1);}
    v1 = LD32(s1+20);
    {v[49]=BITSF(v0);}
    v0 = LD32(s1+24);
    {v[50]=BITSF(v1);}
    {v[32]=BITSF(v0);}
    v1 = LD32(s1+28);
    v0 = LD32(sp+112);
    {v[33]=BITSF(v1);}
    {v[36]=BITSF(v0);}
    v1 = LD32(sp+116);
    {v[34]=BITSF(a0);}
    {v[37]=BITSF(v1);}
    a0 = LD32(sp+120);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[38]=BITSF(a0);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {float t0=v[36];float t1=v[37];float t2=v[38];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {a0=FBITS(v[18]);}
    f3 = BITSF(a0);
    {a0=FBITS(v[16]);}
    f2 = BITSF(a0);
    v0 = s6 + 20;
    v1 = 1;
    {a0=FBITS(v[17]);}
    ST32(s6+20, FBITS(f2));
    ST32(v0+8, FBITS(f3));
    ST32(v0+4, a0);
    ST32(sp+160, FBITS(f2));
    ST32(sp+164, a0);
    ST32(sp+168, FBITS(f3));
    ST32(sp+176, FBITS(f2));
    ST32(sp+180, a0);
    ST32(sp+184, FBITS(f3));
    goto L_0889E1A4;
L_0889E950:;
    v1 = (u32)(s32)LD_S16(s2+34);
    goto L_0889E6EC;
L_0889E958:;
    v1 = LD32(sp+372);
    t2 = LD32(s2+52);
    a3 = LD32(s2+44);
    t2 = v1 + t2;
    s4 = LD_U16(t2);
    v1 = LD_U16(t2+2);
    s3 = LD_U16(t2+4);
    v0 = s4 << 1;
    ST32(sp+376, v0);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v1 = LD32(sp+376);
    fp = s3 << 1;
    t0 = fp + s3;
    a2 = v1 + s4;
    v0 = v0 << 2;
    a2 = a2 << 2;
    t0 = t0 << 2;
    t0 = a3 + t0;
    a2 = a3 + a2;
    a3 = a3 + v0;
    s5 = LD_U16(t2+6);
    { rv_t r_ = func_088348A0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889E9B4;
L_0889E9B4:;
    fcc = FCMP(f21, f0, 14);
    {u32 a_=sp+(624);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = !fcc;
    {u32 a_=sp+(672);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889E9E0; }
    goto L_0889E9D0;
L_0889E9D0:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { ST32(sp+368, s0); goto L_0889EA78; }
    goto L_0889E9E0;
L_0889E9E0:;
    v0 = s5 << 1;
    v0 = v0 + s5;
    v1 = LD32(s2+52);
    t2 = v0 << 2;
    v0 = LD32(sp+372);
    a0 = LD32(sp+376);
    a2 = fp + s3;
    v1 = v1 + v0;
    v0 = LD_U16(v1+6);
    a3 = a0 + s4;
    t1 = sp + 128;
    v0 = v0 ^ 0xffff;
    a0 = sp + 48;
    a1 = sp + 32;
    a2 = a2 << 2;
    cnd_ = v0 == 0;
    t0 = a3 << 2;
    if (cnd_) { goto L_0889E66C; }
    goto L_0889EA24;
L_0889EA24:;
    a3 = LD32(s2+44);
    {u32 a_=sp+(624);ST32(a_+0,FBITS(v[112]));ST32(a_+4,FBITS(v[113]));ST32(a_+8,FBITS(v[114]));ST32(a_+12,FBITS(v[115]));}
    {u32 a_=sp+(640);ST32(a_+0,FBITS(v[116]));ST32(a_+4,FBITS(v[117]));ST32(a_+8,FBITS(v[118]));ST32(a_+12,FBITS(v[119]));}
    a2 = a3 + a2;
    t0 = a3 + t0;
    a3 = a3 + t2;
    {u32 a_=sp+(656);ST32(a_+0,FBITS(v[120]));ST32(a_+4,FBITS(v[121]));ST32(a_+8,FBITS(v[122]));ST32(a_+12,FBITS(v[123]));}
    {u32 a_=sp+(672);ST32(a_+0,FBITS(v[124]));ST32(a_+4,FBITS(v[125]));ST32(a_+8,FBITS(v[126]));ST32(a_+12,FBITS(v[127]));}
    { rv_t r_ = func_088348A0(a0, a1, a2, a3, t0, t1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889EA48;
L_0889EA48:;
    fcc = FCMP(f21, f0, 14);
    {u32 a_=sp+(624);v[112]=BITSF(LD32(a_+0));v[113]=BITSF(LD32(a_+4));v[114]=BITSF(LD32(a_+8));v[115]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(640);v[116]=BITSF(LD32(a_+0));v[117]=BITSF(LD32(a_+4));v[118]=BITSF(LD32(a_+8));v[119]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(656);v[120]=BITSF(LD32(a_+0));v[121]=BITSF(LD32(a_+4));v[122]=BITSF(LD32(a_+8));v[123]=BITSF(LD32(a_+12));}
    cnd_ = !fcc;
    {u32 a_=sp+(672);v[124]=BITSF(LD32(a_+0));v[125]=BITSF(LD32(a_+4));v[126]=BITSF(LD32(a_+8));v[127]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889E66C; }
    goto L_0889EA64;
L_0889EA64:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s2+48); goto L_0889E670; }
    goto L_0889EA74;
L_0889EA74:;
    ST32(sp+368, s0);
    goto L_0889EA78;
L_0889EA78:;
    f20 = f0;
    goto L_0889E66C;
}

/* 0889EA80 */
rv_t func_0889EA80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 320);
L_0889EA80:;
    sp = sp - 320;
    v1 = 0 + 0;
    s6 = a3 + 0;
    s5 = a2 + 0;
    s2 = a1 + 0;
    s1 = a0 + 0;
    s0 = t0 + 0;
    cnd_ = (s32)a1 <= 0;
    if (cnd_) { goto L_0889EB2C; }
    goto L_0889EAC0;
L_0889EAC0:;
    v0 = LD32(a2);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_0889EB30; }
    goto L_0889EACC;
L_0889EACC:;
    v0 = LD32(a0+48);
    s4 = 0 + 0;
    cnd_ = v0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_0889EB28; }
    goto L_0889EADC;
L_0889EADC:;
    cnd_ = s2 == s4;
    a0 = s1 + 0;
    if (cnd_) { goto L_0889EB28; }
    goto L_0889EAE4;
L_0889EAE4:;
    a1 = s3 + 0;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_08AB26C8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889EAFC;
L_0889EAFC:;
    v0 = v0 & 0x4;
    {u32 a_=sp+(224);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889EB58; }
    goto L_0889EB14;
L_0889EB14:;
    v0 = LD32(s1+48);
    s3 = s3 + 1;
    v0 = s3 < v0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889EADC; }
    goto L_0889EB28;
L_0889EB28:;
    v1 = s4 + 0;
    goto L_0889EB2C;
L_0889EB2C:;
    goto L_0889EB30;
L_0889EB30:;
    v0 = v1 + 0;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_0889EB58:;
    t1 = LD32(s1+52);
    t0 = s3 << 3;
    a3 = LD32(s1+44);
    a2 = t1 + t0;
    v1 = LD_U16(a2);
    a0 = LD_U16(a2+2);
    a1 = LD_U16(a2+4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a3 + v0;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = a0 << 1;
    ST32(sp, FBITS(f0));
    v1 = v1 + a0;
    v1 = v1 << 2;
    ST32(sp+4, FBITS(f1));
    v1 = a3 + v1;
    v0 = a1 << 1;
    ST32(sp+8, FBITS(f2));
    v0 = v0 + a1;
    v0 = v0 << 2;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1));
    f2 = BITSF(LD32(v1+4));
    ST32(sp+20, FBITS(f0));
    v0 = a3 + v0;
    ST32(sp+12, FBITS(f1));
    ST32(sp+16, FBITS(f2));
    a0 = LD_U16(a2+6);
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = a0 ^ 0xffff;
    ST32(sp+24, FBITS(f0));
    ST32(sp+28, FBITS(f1));
    cnd_ = v1 == 0;
    ST32(sp+32, FBITS(f2));
    if (cnd_) { goto L_0889EC20; }
    goto L_0889EBF8;
L_0889EBF8:;
    v0 = a0 << 1;
    v0 = v0 + a0;
    v0 = v0 << 2;
    v0 = a3 + v0;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(sp+44, FBITS(f0));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f2));
    goto L_0889EC20;
L_0889EC20:;
    v0 = LD_U16(a2+6);
    a0 = 4;
    v1 = 3;
    v0 = v0 ^ 0xffff;
    if (v0 == 0) a0 = v1;
    cnd_ = a0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_0889ED48; }
    goto L_0889EC3C;
L_0889EC3C:;
    f6 = BITSF(LD32(s6));
    f5 = BITSF(LD32(s6+4));
    f4 = BITSF(LD32(s6+8));
    a0 = sp + 0;
    goto L_0889EC4C;
L_0889EC4C:;
    cnd_ = s0 == 0;
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_0889ED18; }
    goto L_0889EC54;
L_0889EC54:;
    v1 = LD32(s0);
    v0 = LD32(s0+4);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    {v[48]=BITSF(v1);}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    v1 = LD32(s0+8);
    {v[49]=BITSF(v0);}
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    v0 = LD32(s0+16);
    {v[50]=BITSF(v1);}
    v1 = LD32(s0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[64]=d0;v[65]=d1;v[66]=d2;v[67]=d3;}
    {u32 a_=sp+(144);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
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
    v0 = LD32(a0+4);
    {v[34]=BITSF(v1);}
    v1 = LD32(a0);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[20]=BITSF(v1);}
    v1 = LD32(a0+8);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f2 = BITSF(v0);
    ST32(sp+72, FBITS(f3));
    {v0=FBITS(v[17]);}
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[68]=d0;v[69]=d1;v[70]=d2;v[71]=d3;}
    ST32(sp+64, FBITS(f2));
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[72]=d0;v[73]=d1;v[74]=d2;v[75]=d3;}
    ST32(sp+68, v0);
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+56, FBITS(f3));
    ST32(a0, FBITS(f2));
    ST32(a0+4, v0);
    ST32(a0+8, FBITS(f3));
    goto L_0889ED18;
L_0889ED18:;
    f0 = BITSF(LD32(a0));
    f1 = BITSF(LD32(a0+4));
    f2 = BITSF(LD32(a0+8));
    f0 = f0 + f6;
    f1 = f1 + f5;
    f2 = f2 + f4;
    a1 = a1 - 1;
    ST32(a0, FBITS(f0));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f2));
    cnd_ = a1 != 0;
    a0 = a0 + 12;
    if (cnd_) { goto L_0889EC4C; }
    goto L_0889ED48;
L_0889ED48:;
    a2 = LD32(s5);
    a0 = 0 + 0;
    a1 = 2;
    goto L_0889ED54;
L_0889ED54:;
    v0 = sp + a0;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v1 = a2 + a0;
    a1 = a1 - 1;
    ST32(v1+8, FBITS(f0));
    a0 = a0 + 12;
    ST32(v1, FBITS(f1));
    cnd_ = (s32)a1 >= 0;
    ST32(v1+4, FBITS(f2));
    if (cnd_) { goto L_0889ED54; }
    goto L_0889ED80;
L_0889ED80:;
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f11 = BITSF(LD32(sp+24));
    f10 = BITSF(LD32(sp+28));
    f9 = BITSF(LD32(sp+32));
    f7 = BITSF(LD32(sp+12));
    f6 = BITSF(LD32(sp+16));
    f5 = BITSF(LD32(sp+20));
    f11 = f11 - f0;
    f10 = f10 - f1;
    f7 = f7 - f0;
    f6 = f6 - f1;
    f9 = f9 - f2;
    f5 = f5 - f2;
    v0 = FBITS(f7);
    {u32 a_=sp+(176);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    v0 = FBITS(f11);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f10);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[6]=BITSF(v0);}
    v0 = FBITS(f9);
    {v[2]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[0];float t1=v[1];float t2=v[2];float d0=s1*t2-s2*t1;float d1=s2*t0-s0*t2;float d2=s0*t1-s1*t0;v[8]=d0;v[9]=d1;v[10]=d2;}
    {v0=FBITS(v[10]);}
    f8 = BITSF(v0);
    {v0=FBITS(v[8]);}
    f1 = BITSF(v0);
    f4 = BITSF(v0);
    {u32 a_=sp+(208);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    v0 = FBITS(f1);
    {v[12]=BITSF(v0);}
    {v0=FBITS(v[9]);}
    f0 = BITSF(v0);
    f3 = BITSF(v0);
    f1 = BITSF(0);
    v0 = FBITS(f0);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f8);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    a3 = a2 + 36;
    ST32(sp+48, FBITS(f7));
    fcc = FCMP(f0, f1, 2);
    ST32(sp+52, FBITS(f6));
    ST32(sp+56, FBITS(f5));
    ST32(sp+80, FBITS(f11));
    ST32(sp+84, FBITS(f10));
    ST32(sp+88, FBITS(f9));
    ST32(sp+96, FBITS(f4));
    ST32(sp+100, FBITS(f3));
    ST32(sp+104, FBITS(f8));
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f8));
    ST32(a2+36, FBITS(f4));
    ST32(a3+4, FBITS(f3));
    cnd_ = fcc;
    ST32(a3+8, FBITS(f8));
    if (cnd_) { goto L_0889EEC8; }
    goto L_0889EE8C;
L_0889EE8C:;
    {float s0=v[0];float d0=sqrtf(s0);v[8]=d0;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[8];float d0=s0/t0;v[0]=d0;}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[0];v[0]=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    ST32(a3+8, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(a2+36, FBITS(f2));
    ST32(a3+4, v0);
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, v0);
    ST32(sp+104, FBITS(f3));
    goto L_0889EEC8;
L_0889EEC8:;
    v0 = t1 + t0;
    v1 = LD_U16(v0+6);
    a0 = a2 + 48;
    ST32(s5, a0);
    v1 = v1 ^ 0xffff;
    cnd_ = v1 == 0;
    s4 = s4 + 1;
    if (cnd_) { goto L_0889EB14; }
    goto L_0889EEE4;
L_0889EEE4:;
    cnd_ = s2 == s4;
    f0 = BITSF(LD32(sp+28));
    if (cnd_) { goto L_0889EB28; }
    goto L_0889EEEC;
L_0889EEEC:;
    v0 = a2 + 60;
    v1 = a2 + 72;
    ST32(a0+4, FBITS(f0));
    a1 = a2 + 96;
    s4 = s4 + 1;
    f0 = BITSF(LD32(sp+32));
    f1 = BITSF(LD32(sp+40));
    f2 = BITSF(LD32(a2+36));
    ST32(a0+8, FBITS(f0));
    a0 = a2 + 84;
    f0 = BITSF(LD32(sp+24));
    ST32(v0+4, FBITS(f1));
    ST32(a2+48, FBITS(f0));
    f0 = BITSF(LD32(sp+44));
    ST32(s5, a1);
    ST32(v0+8, FBITS(f0));
    f0 = BITSF(LD32(sp+36));
    f1 = BITSF(LD32(sp+8));
    ST32(a2+60, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(v1+8, FBITS(f1));
    ST32(v1+4, FBITS(f0));
    f1 = BITSF(LD32(a3+8));
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(a3+4));
    ST32(a0+8, FBITS(f1));
    ST32(a2+72, FBITS(f0));
    ST32(a2+84, FBITS(f2));
    ST32(a0+4, FBITS(f3));
    goto L_0889EB14;
}

/* 0889EF64 */
void func_0889EF64(void)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889EF64:;
    sp = sp - 16;
    func_088FAB20();
    goto L_0889EF74;
L_0889EF74:;
    sp = sp + 16;
    return;
}

/* 0889EF80 */
void func_0889EF80(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889EF80:;
    sp = sp - 32;
    s2 = D_08B2A9F4 - (-22028);
    s3 = s2 - 22028;
    func_088FAB30();
    goto L_0889EFA4;
L_0889EFA4:;
    s1 = LD32(s2-22028);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s3+12); goto L_0889F044; }
    goto L_0889EFB0;
L_0889EFB0:;
    a1 = LD32(s1+44);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889F0C4; }
    goto L_0889EFBC;
L_0889EFBC:;
    a1 = LD32(s1+48);
    goto L_0889EFC0;
L_0889EFC0:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889F0B4; }
    goto L_0889EFC8;
L_0889EFC8:;
    s0 = s1 + 4;
    goto L_0889EFCC;
L_0889EFCC:;
    v0 = LD_U8(s0+28);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_0889F01C; }
    goto L_0889EFD8;
L_0889EFD8:;
    v0 = LD32(s0+12);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_0889F01C; }
    goto L_0889EFE4;
L_0889EFE4:;
    a0 = LD32(s0+16);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+12, 0); goto L_0889F018; }
    goto L_0889EFF0;
L_0889EFF0:;
    v1 = LD32(a0-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    goto L_0889F004;
L_0889F004:;
    cnd_ = a0 != v0;
    v0 = v0 - 12;
    if (cnd_) { goto L_0889F004; }
    goto L_0889F00C;
L_0889F00C:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F014;
L_0889F014:;
    ST32(s0+12, 0);
    goto L_0889F018;
L_0889F018:;
    a0 = LD32(s0+24);
    goto L_0889F01C;
L_0889F01C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F0A4; }
    goto L_0889F024;
L_0889F024:;
    a0 = LD32(s0);
    goto L_0889F028;
L_0889F028:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F094; }
    goto L_0889F030;
L_0889F030:;
    ST32(s0+4, 0);
    a0 = s1 + 0;
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F040;
L_0889F040:;
    a0 = LD32(s3+12);
    goto L_0889F044;
L_0889F044:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F084; }
    goto L_0889F04C;
L_0889F04C:;
    v0 = s2 - 22028;
    goto L_0889F050;
L_0889F050:;
    ST32(s3+16, 0);
    ST32(s2-22028, 0);
    ST32(s3+12, 0);
    ST32(v0+4, 0);
    v0 = D_08B2AA0C - (-22004);
    ST32(v0-22004, 0);
    sp = sp + 32;
    return;
L_0889F084:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F08C;
L_0889F08C:;
    v0 = s2 - 22028;
    goto L_0889F050;
L_0889F094:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F09C;
L_0889F09C:;
    ST32(s0, 0);
    goto L_0889F030;
L_0889F0A4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F0AC;
L_0889F0AC:;
    a0 = LD32(s0);
    goto L_0889F028;
L_0889F0B4:;
    a0 = s3 + 0;
    func_08AB2800(a0, a1, 0, 0, 0);
    goto L_0889F0BC;
L_0889F0BC:;
    s0 = s1 + 4;
    goto L_0889EFCC;
L_0889F0C4:;
    a0 = s3 + 0;
    func_08AB2800(a0, a1, 0, 0, 0);
    goto L_0889F0CC;
L_0889F0CC:;
    a1 = LD32(s1+48);
    goto L_0889EFC0;
}

/* 0889F0D4 */
void func_0889F0D4(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889F0D4:;
    sp = sp - 32;
    s2 = D_08B2A9F4 - (-22028);
    s3 = s2 - 22028;
    func_088FAB38();
    goto L_0889F0F8;
L_0889F0F8:;
    s1 = LD32(s2-22028);
    cnd_ = s1 == 0;
    if (cnd_) { a0 = LD32(s3+12); goto L_0889F198; }
    goto L_0889F104;
L_0889F104:;
    a1 = LD32(s1+44);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889F218; }
    goto L_0889F110;
L_0889F110:;
    a1 = LD32(s1+48);
    goto L_0889F114;
L_0889F114:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889F208; }
    goto L_0889F11C;
L_0889F11C:;
    s0 = s1 + 4;
    goto L_0889F120;
L_0889F120:;
    v0 = LD_U8(s0+28);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_0889F170; }
    goto L_0889F12C;
L_0889F12C:;
    v0 = LD32(s0+12);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_0889F170; }
    goto L_0889F138;
L_0889F138:;
    a0 = LD32(s0+16);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+12, 0); goto L_0889F16C; }
    goto L_0889F144;
L_0889F144:;
    v1 = LD32(a0-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    goto L_0889F158;
L_0889F158:;
    cnd_ = a0 != v0;
    v0 = v0 - 12;
    if (cnd_) { goto L_0889F158; }
    goto L_0889F160;
L_0889F160:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F168;
L_0889F168:;
    ST32(s0+12, 0);
    goto L_0889F16C;
L_0889F16C:;
    a0 = LD32(s0+24);
    goto L_0889F170;
L_0889F170:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F1F8; }
    goto L_0889F178;
L_0889F178:;
    a0 = LD32(s0);
    goto L_0889F17C;
L_0889F17C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F1E8; }
    goto L_0889F184;
L_0889F184:;
    ST32(s0+4, 0);
    a0 = s1 + 0;
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F194;
L_0889F194:;
    a0 = LD32(s3+12);
    goto L_0889F198;
L_0889F198:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F1D8; }
    goto L_0889F1A0;
L_0889F1A0:;
    v0 = s2 - 22028;
    goto L_0889F1A4;
L_0889F1A4:;
    ST32(s3+16, 0);
    ST32(s2-22028, 0);
    ST32(s3+12, 0);
    ST32(v0+4, 0);
    v0 = D_08B2AA0C - (-22004);
    ST32(v0-22004, 0);
    sp = sp + 32;
    return;
L_0889F1D8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F1E0;
L_0889F1E0:;
    v0 = s2 - 22028;
    goto L_0889F1A4;
L_0889F1E8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F1F0;
L_0889F1F0:;
    ST32(s0, 0);
    goto L_0889F184;
L_0889F1F8:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F200;
L_0889F200:;
    a0 = LD32(s0);
    goto L_0889F17C;
L_0889F208:;
    a0 = s3 + 0;
    func_08AB2800(a0, a1, 0, 0, 0);
    goto L_0889F210;
L_0889F210:;
    s0 = s1 + 4;
    goto L_0889F120;
L_0889F218:;
    a0 = s3 + 0;
    func_08AB2800(a0, a1, 0, 0, 0);
    goto L_0889F220;
L_0889F220:;
    a1 = LD32(s1+48);
    goto L_0889F114;
}

/* 0889F228 */
void func_0889F228(void)
{
    u32 v0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889F228:;
    sp = sp - 16;
    func_088FAB28();
    goto L_0889F238;
L_0889F238:;
    v0 = D_08B2AA0C - (-22004);
    v0 = LD32(v0-22004);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889F250; }
    goto L_0889F248;
L_0889F248:;
    ST32(v0+36, 0);
    ST32(v0+32, 0);
    goto L_0889F250;
L_0889F250:;
    sp = sp + 16;
    return;
}

/* 0889F258 */
u32 func_0889F258(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889F258:;
    sp = sp - 32;
    s3 = D_08B2A9F4 - (-22028);
    s4 = a0 + 0;
    s1 = s3 - 22028;
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F284;
L_0889F284:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 1;
    s2 = v0 + 0;
    v0 = func_08AB2788(a0, a1, a2);
    goto L_0889F298;
L_0889F298:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_0889F2D4; }
    goto L_0889F2A0;
L_0889F2A0:;
    a0 = D_08B2AA0C - (-22004);
    goto L_0889F2A4;
L_0889F2A4:;
    v1 = LD32(a0-22004);
    v0 = s0 + 0;
    if (v1 == 0) v1 = s0;
    ST32(a0-22004, v1);
    sp = sp + 32;
    return v0;
L_0889F2D4:;
    v0 = LD_U8(s1+8);
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_0889F36C; }
    goto L_0889F2E0;
L_0889F2E0:;
    v0 = LD32(s3-22028);
    cnd_ = v0 == 0;
    s0 = s1 + 0;
    if (cnd_) { goto L_0889F318; }
    goto L_0889F2EC;
L_0889F2EC:;
    v1 = v0 + 0;
    goto L_0889F2F0;
L_0889F2F0:;
    a0 = v1 + 48;
    s0 = v1 + 44;
    v1 = LD32(v1);
    a2 = 0 + 0;
    v0 = s2 < v1;
    cnd_ = v1 == s2;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_0889F36C; }
    goto L_0889F30C;
L_0889F30C:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_0889F2F0; }
    goto L_0889F318;
L_0889F318:;
    a0 = 52;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F320;
L_0889F320:;
    a0 = v0 + 4;
    ST32(a0+4, 0);
    a1 = s3 - 22028;
    a2 = a0 + 0;
    ST32(a0+8, 0);
    ST32(a0+12, 0);
    ST32(a0+20, 0);
    ST32(a0+32, 0);
    ST32(a0+36, 0);
    ST32(v0, s2);
    v1 = LD32(a1+4);
    ST32(v0+44, 0);
    v1 = v1 + 1;
    ST32(v0+48, 0);
    ST32(a1+4, v1);
    ST32(s0, v0);
    ST32(v0+4, 0);
    ST8(a0+28, 0);
    ST32(a0+24, 0);
    goto L_0889F36C;
L_0889F36C:;
    a0 = LD32(a2);
    cnd_ = a0 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_0889F38C; }
    goto L_0889F378;
L_0889F378:;
    cnd_ = s4 == a0;
    if (cnd_) { a0 = D_08B2AA0C - (-22004); goto L_0889F2A4; }
    goto L_0889F380;
L_0889F380:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F388;
L_0889F388:;
    ST32(s0, 0);
    goto L_0889F38C;
L_0889F38C:;
    ST32(s0+8, 0);
    cnd_ = s4 == 0;
    ST32(s0+4, 0);
    if (cnd_) { goto L_0889F3DC; }
    goto L_0889F398;
L_0889F398:;
    a0 = s4 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F3A0;
L_0889F3A0:;
    v1 = v0 + 1;
    ST32(s0+4, v0);
    a0 = v1 + 0;
    ST32(s0+8, v1);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F3B4;
L_0889F3B4:;
    cnd_ = v0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_0889F3C8; }
    goto L_0889F3BC;
L_0889F3BC:;
    ST32(s0+8, 0);
    ST32(s0+4, 0);
    goto L_0889F2A0;
L_0889F3C8:;
    a0 = v0 + 0;
    a1 = s4 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F3D4;
L_0889F3D4:;
    a0 = D_08B2AA0C - (-22004);
    goto L_0889F2A4;
L_0889F3DC:;
    ST32(s0, 0);
    goto L_0889F2A0;
}

/* 0889F3E4 */
u64 func_0889F3E4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889F3E4:;
    a1 = a1 ^ 0xffff;
    v0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889F430; }
    goto L_0889F410;
L_0889F410:;
    v1 = D_08B2A9F4 - (-22028);
    v0 = v1 - 22028;
    ST32(v1-22028, 0);
    ST32(v0+20, 0);
    ST32(v0+4, 0);
    ST8(v0+8, 0);
    ST32(v0+12, 0);
    ST32(v0+16, 0);
    goto L_0889F430;
L_0889F430:;
    v0 = a0 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889F4F8; }
    goto L_0889F440;
L_0889F440:;
    v0 = D_08B2A9F4 - (-22028);
    s1 = LD32(v0-22028);
    cnd_ = s1 == 0;
    s2 = v0 - 22028;
    if (cnd_) { goto L_0889F4E0; }
    goto L_0889F450;
L_0889F450:;
    a1 = LD32(s1+44);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889F54C; }
    goto L_0889F45C;
L_0889F45C:;
    a1 = LD32(s1+48);
    goto L_0889F460;
L_0889F460:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_0889F53C; }
    goto L_0889F468;
L_0889F468:;
    s0 = s1 + 4;
    goto L_0889F46C;
L_0889F46C:;
    v0 = LD_U8(s0+28);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_0889F4BC; }
    goto L_0889F478;
L_0889F478:;
    v0 = LD32(s0+12);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+24); goto L_0889F4BC; }
    goto L_0889F484;
L_0889F484:;
    a0 = LD32(s0+16);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s0+12, 0); goto L_0889F4B8; }
    goto L_0889F490;
L_0889F490:;
    v1 = LD32(a0-4);
    v0 = v1 << 1;
    v0 = v0 + v1;
    v0 = v0 << 2;
    v0 = a0 + v0;
    goto L_0889F4A4;
L_0889F4A4:;
    cnd_ = a0 != v0;
    v0 = v0 - 12;
    if (cnd_) { goto L_0889F4A4; }
    goto L_0889F4AC;
L_0889F4AC:;
    a0 = a0 - 4;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F4B4;
L_0889F4B4:;
    ST32(s0+12, 0);
    goto L_0889F4B8;
L_0889F4B8:;
    a0 = LD32(s0+24);
    goto L_0889F4BC;
L_0889F4BC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F52C; }
    goto L_0889F4C4;
L_0889F4C4:;
    a0 = LD32(s0);
    goto L_0889F4C8;
L_0889F4C8:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F51C; }
    goto L_0889F4D0;
L_0889F4D0:;
    ST32(s0+4, 0);
    a0 = s1 + 0;
    ST32(s0+8, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F4E0;
L_0889F4E0:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_0889F50C; }
    goto L_0889F4EC;
L_0889F4EC:;
    ST32(s2+16, 0);
    goto L_0889F4F0;
L_0889F4F0:;
    ST32(s2+12, 0);
    goto L_0889F4F8;
L_0889F4F8:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_0889F50C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F514;
L_0889F514:;
    ST32(s2+16, 0);
    goto L_0889F4F0;
L_0889F51C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F524;
L_0889F524:;
    ST32(s0, 0);
    goto L_0889F4D0;
L_0889F52C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F534;
L_0889F534:;
    a0 = LD32(s0);
    goto L_0889F4C8;
L_0889F53C:;
    a0 = s2 + 0;
    func_08AB2800(a0, a1, t1, t2, t3);
    goto L_0889F544;
L_0889F544:;
    s0 = s1 + 4;
    goto L_0889F46C;
L_0889F54C:;
    a0 = s2 + 0;
    func_08AB2800(a0, a1, t1, t2, t3);
    goto L_0889F554;
L_0889F554:;
    a1 = LD32(s1+48);
    goto L_0889F460;
}

/* 0889F55C */
rv_t func_0889F55C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889F55C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_0889F3E4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F570;
L_0889F570:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889F57C */
rv_t func_0889F57C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889F57C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { u64 r_ = func_0889F3E4(a0, a1, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F590;
L_0889F590:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889F59C */
rv_t func_0889F59C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889F59C:;
    sp = sp - 32;
    s0 = a0 + 0;
    { u64 r_ = func_08A62C44(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F5B8;
L_0889F5B8:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889F604; }
    goto L_0889F5C4;
L_0889F5C4:;
    v0 = LD_U16(s0+16);
    v0 = v0 - 40;
    v1 = v0 < 0x61u;
    cnd_ = v1 == 0;
    v1 = D_08AD63EC - (25580);
    if (cnd_) { goto L_0889F740; }
    goto L_0889F5D8;
L_0889F5D8:;
    v0 = v0 << 2;
    v1 = v1 + 25580;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x0889F5F0u: goto L_0889F5F0; case 0x0889F600u: goto L_0889F600; case 0x0889F618u: goto L_0889F618; case 0x0889F630u: goto L_0889F630; case 0x0889F674u: goto L_0889F674; case 0x0889F694u: goto L_0889F694; case 0x0889F6A4u: goto L_0889F6A4; case 0x0889F700u: goto L_0889F700; case 0x0889F710u: goto L_0889F710; case 0x0889F720u: goto L_0889F720; case 0x0889F730u: goto L_0889F730; case 0x0889F740u: goto L_0889F740; case 0x0889F770u: goto L_0889F770; default: rs_break(0, 0x0889f5e8); }
L_0889F5F0:;
    f12 = BITSF(LD32(s0+8));
    a0 = LD32(s0+24);
    a1 = LD_U16(s0+20);
    { rv_t r_ = func_088A5558(a0, a1, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F600;
L_0889F600:;
    goto L_0889F604;
L_0889F604:;
    goto L_0889F608;
L_0889F608:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_0889F618:;
    v0 = LD32(s0+24);
    f12 = BITSF(LD32(v0+4));
    a0 = LD32(v0);
    { u64 r_ = func_088E0790(a0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F628;
L_0889F628:;
    goto L_0889F604;
L_0889F630:;
    v1 = LD32(s0+24);
    f20 = BITSF(LD32(s0+8));
    v0 = D_08B2BBAC - (-17492);
    a1 = LD32(v1);
    a0 = 1;
    v1 = D_08B2BBA8 - (-17496);
    ST32(v0-17492, a1);
    v0 = D_08B2BB74 - (-17548);
    ST8(v0-17548, a0);
    ST32(v1-17496, a1);
    f0 = func_088AD25C();
    goto L_0889F65C;
L_0889F65C:;
    f13 = f0;
    f12 = f20;
    a0 = 1;
    { rv_t r_ = func_0883BD44(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F66C;
L_0889F66C:;
    goto L_0889F604;
L_0889F674:;
    a0 = LD32(s0+24);
    cnd_ = a0 == 0;
    v0 = D_08B2BB90 - (-17520);
    if (cnd_) { goto L_0889F688; }
    goto L_0889F680;
L_0889F680:;
    v1 = LD32(a0+4);
    ST32(v0-17520, v1);
    goto L_0889F688;
L_0889F688:;
    v0 = D_08B2BB72 - (-17550);
    ST8(v0-17550, 0);
    goto L_0889F600;
L_0889F694:;
    a0 = s0 + 0;
    { rv_t r_ = func_088EB1DC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F69C;
L_0889F69C:;
    goto L_0889F604;
L_0889F6A4:;
    s1 = LD32(s0+24);
    s0 = LD_U8(s1+4);
    { u64 r_ = func_088D7E58(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F6B0;
L_0889F6B0:;
    cnd_ = s0 == v0;
    if (cnd_) { goto L_0889F604; }
    goto L_0889F6B8;
L_0889F6B8:;
    a0 = LD_U8(s1+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD_U8(s1+6); goto L_0889F6D4; }
    goto L_0889F6C4;
L_0889F6C4:;
    f12 = BITSF(LD32(s1));
    { rv_t r_ = func_088D7D74(f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F6CC;
L_0889F6CC:;
    goto L_0889F604;
L_0889F6D4:;
    a1 = LD_U8(s1+5);
    f13 = BITSF(LD32(s1));
    f0 = BITSF(v0);
    v0 = D_08AEC3FC - (-15364);
    a1 = 0 < a1;
    f12 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-15364));
    f12 = f12 * f0;
    { rv_t r_ = func_088D7BCC(a0, a1, f12, f13); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F6F8;
L_0889F6F8:;
    goto L_0889F604;
L_0889F700:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D5D00(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F708;
L_0889F708:;
    goto L_0889F604;
L_0889F710:;
    a0 = s0 + 0;
    { rv_t r_ = func_0881B0E0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F718;
L_0889F718:;
    goto L_0889F604;
L_0889F720:;
    { u64 r_ = func_08845D38(0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F728;
L_0889F728:;
    goto L_0889F604;
L_0889F730:;
    a0 = s0 + 0;
    { rv_t r_ = func_088D52F0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F738;
L_0889F738:;
    goto L_0889F604;
L_0889F740:;
    a0 = s0 + 0;
    v0 = func_088FF5E0();
    goto L_0889F748;
L_0889F748:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889F604; }
    goto L_0889F750;
L_0889F750:;
    v0 = D_08B2BBA0 - (-17504);
    v0 = LD32(v0-17504);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889F608; }
    goto L_0889F760;
L_0889F760:;
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)PTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F768;
L_0889F768:;
    goto L_0889F604;
L_0889F770:;
    a0 = s0 + 0;
    { u64 r_ = func_088F2BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F778;
L_0889F778:;
    goto L_0889F604;
}

/* 0889F780 */
void func_0889F780(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889F780:;
    sp = sp - 16;
    s1 = D_08B2AA1C - (-21988);
    a0 = 0x30000u;
    v0 = LD32(s1-21988);
    s2 = 1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889F7C0; }
    goto L_0889F7A8;
L_0889F7A8:;
    goto L_0889F7AC;
L_0889F7AC:;
    sp = sp + 16;
    return;
L_0889F7C0:;
    { rv_t r_ = func_088F99D0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F7C8;
L_0889F7C8:;
    ST32(s1-21988, v0);
    cnd_ = v0 == 0;
    a0 = 24;
    if (cnd_) { goto L_0889F800; }
    goto L_0889F7D4;
L_0889F7D4:;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F7DC;
L_0889F7DC:;
    a0 = v0 + 0;
    s0 = v0 + 0;
    func_088360C8(a0);
    goto L_0889F7E8;
L_0889F7E8:;
    a1 = LD32(s1-21988);
    v0 = D_08B2AA18 - (-21992);
    a0 = s0 + 0;
    a2 = 0x30000u;
    ST32(v0-21992, s0);
    func_08836134(a0, a1, a2);
    goto L_0889F800;
L_0889F800:;
    a3 = ((u32)(uintptr_t)func_0889FE74) - (-396);
    a0 = ((u32)(uintptr_t)func_0889FD8C) - (-628);
    a1 = ((u32)(uintptr_t)func_0889FDDC) - (-548);
    a2 = ((u32)(uintptr_t)func_0889FE04) - (-508);
    a0 = a0 - 628;
    a1 = a1 - 548;
    a2 = a2 - 508;
    a3 = a3 - 396;
    func_08A6AF58(a0, a1, a2, a3);
    goto L_0889F824;
L_0889F824:;
    v0 = D_08B2AA10 - (-22000);
    v1 = LD32(v0-22000);
    a0 = D_08AD6570 - (25968);
    a1 = ((u32)(uintptr_t)func_0889FB3C) - (-1220);
    a0 = a0 + 25968;
    a1 = a1 - 1220;
    a2 = 0 + 0;
    cnd_ = v1 == s2;
    s0 = v0 - 22000;
    if (cnd_) { goto L_0889F888; }
    goto L_0889F848;
L_0889F848:;
    ST8(s0+5, s2);
    ST8(s0+4, 0);
    ST8(s0+6, 0);
    v0 = func_088F8AE4(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_0889F858;
L_0889F858:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = D_08B2AA24 - (-21980);
    if (cnd_) { goto L_0889F86C; }
    goto L_0889F864;
L_0889F864:;
    ST32(v0-21980, s2);
    goto L_0889F7A8;
L_0889F86C:;
    v1 = 2;
    ST32(v0-21980, v1);
    ST8(s0+5, 0);
    goto L_0889F878;
L_0889F878:;
    func_0889FE7C();
    goto L_0889F880;
L_0889F880:;
    goto L_0889F7AC;
L_0889F888:;
    v1 = 2;
    v0 = D_08B2AA24 - (-21980);
    ST32(v0-21980, v1);
    goto L_0889F878;
}

/* 0889F898 */
void func_0889F898(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889F898:;
    sp = sp - 16;
    s2 = D_08B2AA24 - (-21980);
    v0 = 1;
    v1 = LD32(s2-21980);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0889F9C8; }
    goto L_0889F8BC;
L_0889F8BC:;
    v1 = D_08B2AA21 - (-21983);
    goto L_0889F8C0;
L_0889F8C0:;
    v0 = LD_U8(v1-21983);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889F9B8; }
    goto L_0889F8CC;
L_0889F8CC:;
    v0 = D_08B2AC5F - (-21409);
    goto L_0889F8D0;
L_0889F8D0:;
    v1 = LD_U8(v0-21409);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0889F9A8; }
    goto L_0889F8DC;
L_0889F8DC:;
    v0 = D_08B2ACE8 - (-21272);
    goto L_0889F8E0;
L_0889F8E0:;
    v1 = LD_U8(v0-21272);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0889F998; }
    goto L_0889F8EC;
L_0889F8EC:;
    v0 = D_08B2ACFC - (-21252);
    goto L_0889F8F0;
L_0889F8F0:;
    v1 = LD_U8(v0-21252);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0889F988; }
    goto L_0889F8FC;
L_0889F8FC:;
    v0 = D_08B2ACDC - (-21284);
    goto L_0889F900;
L_0889F900:;
    v1 = LD_U8(v0-21284);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0889F978; }
    goto L_0889F90C;
L_0889F90C:;
    s1 = D_08B2AA18 - (-21992);
    func_088A1010();
    goto L_0889F914;
L_0889F914:;
    a0 = 0 + 0;
    func_08A7A098(a0, 0, 0, 0);
    goto L_0889F91C;
L_0889F91C:;
    func_08A7BD90(0, 0, 0);
    goto L_0889F924;
L_0889F924:;
    s0 = LD32(s1-21992);
    cnd_ = s0 != 0;
    if (cnd_) { goto L_0889F960; }
    goto L_0889F930;
L_0889F930:;
    s0 = D_08B2AA1C - (-21988);
    goto L_0889F934;
L_0889F934:;
    a0 = LD32(s0-21988);
    ST32(s1-21992, 0);
    { rv_t r_ = func_088F9A14(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889F940;
L_0889F940:;
    ST32(s0-21988, 0);
    ST32(s2-21980, 0);
    sp = sp + 16;
    return;
L_0889F960:;
    a0 = s0 + 0;
    func_088360D4(a0);
    goto L_0889F968;
L_0889F968:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F970;
L_0889F970:;
    s0 = D_08B2AA1C - (-21988);
    goto L_0889F934;
L_0889F978:;
    func_088A15F4(a1, a2, a3, t0, t1, t2, t3);
    goto L_0889F980;
L_0889F980:;
    goto L_0889F90C;
L_0889F988:;
    { u64 r_ = func_088A2388(t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F990;
L_0889F990:;
    v0 = D_08B2ACDC - (-21284);
    goto L_0889F900;
L_0889F998:;
    { u64 r_ = func_088A1EC0(a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F9A0;
L_0889F9A0:;
    v0 = D_08B2ACFC - (-21252);
    goto L_0889F8F0;
L_0889F9A8:;
    func_088A01E8(t1, t2, t3);
    goto L_0889F9B0;
L_0889F9B0:;
    v0 = D_08B2ACE8 - (-21272);
    goto L_0889F8E0;
L_0889F9B8:;
    ST8(v1-21983, 0);
    func_08A6D208();
    goto L_0889F9C0;
L_0889F9C0:;
    v0 = D_08B2AC5F - (-21409);
    goto L_0889F8D0;
L_0889F9C8:;
    v0 = D_08B2AA10 - (-22000);
    a0 = v0 - 22000;
    ST8(a0+4, v1);
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_0889F8BC; }
    goto L_0889F9E0;
L_0889F9E0:;
    s0 = D_08AEC400 - (-15360);
    f12 = BITSF(LD32(s0-15360));
    goto L_0889F9E8;
L_0889F9E8:;
    a0 = 1;
    { u64 r_ = func_088F8BA0(a0, a1, a2, a3, t0, t1, t2, t3, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889F9F0;
L_0889F9F0:;
    v0 = LD_U8(s1+5);
    cnd_ = v0 != 0;
    f12 = BITSF(LD32(s0-15360));
    if (cnd_) { goto L_0889F9E8; }
    goto L_0889F9FC;
L_0889F9FC:;
    v1 = D_08B2AA21 - (-21983);
    goto L_0889F8C0;
}

/* 0889FA04 */
void func_0889FA04(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889FA04:;
    sp = sp - 32;
    s1 = D_08B2AA24 - (-21980);
    v0 = 1;
    v1 = LD32(s1-21980);
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0889FA64; }
    goto L_0889FA28;
L_0889FA28:;
    v0 = 2;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_0889FA4C; }
    goto L_0889FA34;
L_0889FA34:;
    goto L_0889FA38;
L_0889FA38:;
    sp = sp + 32;
    return;
L_0889FA4C:;
    func_088A03B4(a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_0889FA54;
L_0889FA54:;
    func_08A6D494();
    goto L_0889FA5C;
L_0889FA5C:;
    goto L_0889FA38;
L_0889FA64:;
    a0 = D_08B2AA10 - (-22000);
    s0 = LD32(a0-22000);
    s2 = 2;
    cnd_ = s0 == s2;
    a1 = a0 - 22000;
    if (cnd_) { goto L_0889FB34; }
    goto L_0889FA78;
L_0889FA78:;
    v0 = (s32)s0 < 3;
    cnd_ = v0 == 0;
    v0 = 3;
    if (cnd_) { goto L_0889FB20; }
    goto L_0889FA84;
L_0889FA84:;
    cnd_ = s0 != v1;
    if (cnd_) { goto L_0889FA38; }
    goto L_0889FA8C;
L_0889FA8C:;
    v0 = LD_U8(a1+6);
    cnd_ = v0 == 0;
    v0 = 5;
    if (cnd_) { goto L_0889FAA8; }
    goto L_0889FA98;
L_0889FA98:;
    ST32(s1-21980, v0);
    ST32(a0-22000, 0);
    goto L_0889FA38;
L_0889FAA8:;
    func_0889FE7C();
    goto L_0889FAB0;
L_0889FAB0:;
    v1 = D_08B15FA8 - (24488);
    v0 = LD_U8(v1+24488);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889FAC8; }
    goto L_0889FAC0;
L_0889FAC0:;
    ST32(s1-21980, s2);
    goto L_0889FA34;
L_0889FAC8:;
    ST8(v1+24488, 0);
    v0 = func_0889FD70();
    goto L_0889FAD0;
L_0889FAD0:;
    a1 = D_08AD6580 - (25984);
    a1 = a1 + 25984;
    t0 = v0 + 0;
    a0 = sp + 0;
    a2 = 16;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889FAEC;
L_0889FAEC:;
    func_08A6D1A8();
    goto L_0889FAF4;
L_0889FAF4:;
    v0 = func_08A62458();
    goto L_0889FAFC;
L_0889FAFC:;
    a1 = v0 + 0;
    a0 = 0 + 0;
    a2 = sp + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    func_08A7CBDC(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_0889FB14;
L_0889FB14:;
    v1 = D_08B2AA21 - (-21983);
    ST8(v1-21983, s0);
    goto L_0889FAC0;
L_0889FB20:;
    cnd_ = s0 != v0;
    if (cnd_) { goto L_0889FA38; }
    goto L_0889FB28;
L_0889FB28:;
    v0 = 4;
    goto L_0889FB2C;
L_0889FB2C:;
    ST32(s1-21980, v0);
    goto L_0889FA34;
L_0889FB34:;
    v0 = 3;
    goto L_0889FB2C;
}

/* 0889FB3C */
rv_t func_0889FB3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 336);
L_0889FB3C:;
    sp = sp - 336;
    s5 = D_08B2AA10 - (-22000);
    s3 = D_08AEC404 - (-15356);
    s0 = s5 - 22000;
    v0 = func_08A62460();
    goto L_0889FB70;
L_0889FB70:;
    a0 = v0 + 0;
    v0 = func_08A6ABD8(a0);
    goto L_0889FB78;
L_0889FB78:;
    s2 = v0 + 0;
    goto L_0889FB7C;
L_0889FB7C:;
    v0 = func_08A6ADC8(0, 0, 0);
    goto L_0889FB84;
L_0889FB84:;
    f12 = BITSF(LD32(s3-15356));
    s1 = v0 + 0;
    a0 = 1;
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FB94;
L_0889FB94:;
    cnd_ = s1 != 0;
    if (cnd_) { s0 = s5 - 22000; goto L_0889FBAC; }
    goto L_0889FB9C;
L_0889FB9C:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889FB7C; }
    goto L_0889FBA8;
L_0889FBA8:;
    s0 = s5 - 22000;
    goto L_0889FBAC;
L_0889FBAC:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_0889FD5C; }
    goto L_0889FBB8;
L_0889FBB8:;
    cnd_ = s2 != 0;
    v0 = 1;
    if (cnd_) { goto L_0889FD50; }
    goto L_0889FBC0;
L_0889FBC0:;
    v1 = D_08AD65A0 - (26016);
    a0 = D_08AD65C8 - (26056);
    v0 = a0 + 26056;
    a1 = v1 + 26016;
    a2 = LD32(v1+26016);
    t0 = LD32(a1+8);
    t1 = LD32(a0+26056);
    v1 = LD32(a1+4);
    t2 = LD32(v0+16);
    a0 = LD32(v0+4);
    a1 = LD32(v0+8);
    a3 = LD32(v0+12);
    ST32(sp+256, a2);
    s2 = 0 + 0;
    s4 = D_08AD65DC - (26076);
    ST32(sp+260, v1);
    s0 = sp + 256;
    ST32(sp+264, t0);
    ST32(sp+272, t1);
    ST32(sp+276, a0);
    ST32(sp+280, a1);
    ST32(sp+284, a3);
    ST32(sp+288, t2);
    t0 = LD32(s0);
    goto L_0889FC20;
L_0889FC20:;
    a1 = s4 + 26076;
    a2 = 256;
    a3 = 1;
    a0 = sp + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889FC34;
L_0889FC34:;
    a0 = sp + 0;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FC3C;
L_0889FC3C:;
    s2 = s2 + 1;
    a0 = 1;
    cnd_ = v0 == 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_0889FD3C; }
    goto L_0889FC4C;
L_0889FC4C:;
    f12 = BITSF(LD32(s3-15356));
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FC54;
L_0889FC54:;
    a0 = s5 - 22000;
    v0 = LD_U8(a0+4);
    cnd_ = v0 != 0;
    v1 = s2 < 0x3u;
    if (cnd_) { goto L_0889FD30; }
    goto L_0889FC64;
L_0889FC64:;
    cnd_ = v1 != 0;
    if (cnd_) { t0 = LD32(s0); goto L_0889FC20; }
    goto L_0889FC6C;
L_0889FC6C:;
    v0 = D_08B2AA10 - (-22000);
    goto L_0889FC70;
L_0889FC70:;
    s4 = v0 - 22000;
    s2 = 0 + 0;
    s6 = D_08AD65EC - (26092);
    s0 = sp + 272;
    goto L_0889FC80;
L_0889FC80:;
    v0 = LD_U8(s4+6);
    cnd_ = v0 != 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_0889FCE0; }
    goto L_0889FC8C;
L_0889FC8C:;
    v0 = func_08A62460();
    goto L_0889FC94;
L_0889FC94:;
    t1 = LD32(s0);
    a0 = sp + 0;
    t0 = v0 + 0;
    a1 = s6 + 26092;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889FCB0;
L_0889FCB0:;
    a0 = sp + 0;
    { u64 r_ = func_08A6A824(a0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FCB8;
L_0889FCB8:;
    s0 = s0 + 4;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_0889FD20; }
    goto L_0889FCC4;
L_0889FCC4:;
    f12 = BITSF(LD32(s3-15356));
    { u64 r_ = func_088F8BA0(a0, 0, 0, 0, 0, 0, 0, 0, f12); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FCCC;
L_0889FCCC:;
    v0 = LD_U8(s4+4);
    cnd_ = v0 != 0;
    v1 = s2 < 0x5u;
    if (cnd_) { goto L_0889FD14; }
    goto L_0889FCD8;
L_0889FCD8:;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_0889FC80; }
    goto L_0889FCE0;
L_0889FCE0:;
    v0 = s5 - 22000;
    goto L_0889FCE4;
L_0889FCE4:;
    ST32(s5-22000, s1);
    ST8(v0+5, 0);
    goto L_0889FCF0;
L_0889FCF0:;
    sp = sp + 336;
    return (rv_t){ v0, v1, f0 };
L_0889FD14:;
    ST8(s4+5, 0);
    goto L_0889FCF0;
L_0889FD20:;
    v0 = 1;
    ST8(s4+6, v0);
    v0 = s5 - 22000;
    goto L_0889FCE4;
L_0889FD30:;
    ST8(a0+5, 0);
    goto L_0889FCF0;
L_0889FD3C:;
    v1 = s5 - 22000;
    v0 = 1;
    ST8(v1+6, v0);
    v0 = D_08B2AA10 - (-22000);
    goto L_0889FC70;
L_0889FD50:;
    ST8(s0+6, v0);
    v0 = s5 - 22000;
    goto L_0889FCE4;
L_0889FD5C:;
    { u64 r_ = func_08A6AF0C(0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FD64;
L_0889FD64:;
    ST8(s0+5, 0);
    goto L_0889FCF0;
}

/* 0889FD70 */
u32 func_0889FD70(void)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889FD70:;
    sp = sp - 16;
    v0 = func_08A62434();
    goto L_0889FD80;
L_0889FD80:;
    sp = sp + 16;
    return v0;
}

/* 0889FD8C */
rv_t func_0889FD8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889FD8C:;
    sp = sp - 16;
    s1 = D_08B2AA18 - (-21992);
    v0 = LD32(s1-21992);
    s0 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889FDCC; }
    goto L_0889FDAC;
L_0889FDAC:;
    a0 = LD32(s1-21992);
    goto L_0889FDB0;
L_0889FDB0:;
    a1 = s0 + 0;
    { u64 r_ = func_088361BC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FDB8;
L_0889FDB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_0889FDCC:;
    func_0889F780(t1, t2, t3);
    goto L_0889FDD4;
L_0889FDD4:;
    a0 = LD32(s1-21992);
    goto L_0889FDB0;
}

/* 0889FDDC */
rv_t func_0889FDDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889FDDC:;
    v0 = D_08B2AA18 - (-21992);
    a1 = a0 + 0;
    a0 = LD32(v0-21992);
    sp = sp - 16;
    { u64 r_ = func_088362AC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FDF8;
L_0889FDF8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889FE04 */
rv_t func_0889FE04(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_0889FE04:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a1 + 0;
    s2 = a1 + 0;
    { u64 r_ = func_08A6AF74(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FE28;
L_0889FE28:;
    cnd_ = s0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_0889FE58; }
    goto L_0889FE30;
L_0889FE30:;
    a2 = s2 + 0;
    a0 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_0889FE48; }
    goto L_0889FE40;
L_0889FE40:;
    func_08A87AE0(a0, a1, a2);
    goto L_0889FE48;
L_0889FE48:;
    v0 = D_08B2AA18 - (-21992);
    a0 = LD32(v0-21992);
    a1 = s0 + 0;
    { u64 r_ = func_088362AC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_0889FE58;
L_0889FE58:;
    v0 = s1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 0889FE74 */
rv_t func_0889FE74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_0889FE74:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 0889FE7C */
void func_0889FE7C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_0889FE7C:;
    sp = sp - 32;
    s3 = D_08B2AC5F - (-21409);
    v0 = LD_U8(s3-21409);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_0889FECC; }
    goto L_0889FEA8;
L_0889FEA8:;
    sp = sp + 32;
    return;
L_0889FECC:;
    s0 = D_08B2AA28 - (-21976);
    s0 = s0 - 21976;
    v0 = func_08A62450();
    goto L_0889FED8;
L_0889FED8:;
    a1 = v0 + 0;
    a2 = 1;
    a0 = s0 + 0;
    func_08A6F5FC(a0, a1, a2, 0, 0, 0);
    goto L_0889FEE8;
L_0889FEE8:;
    a0 = s0 + 0;
    a1 = 256;
    func_08A6F670(a0, a1);
    goto L_0889FEF4;
L_0889FEF4:;
    a2 = ((u32)(uintptr_t)func_088A0BEC) - (3052);
    a0 = s0 + 0;
    a2 = a2 + 3052;
    a1 = 0 + 0;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FF0C;
L_0889FF0C:;
    a2 = ((u32)(uintptr_t)func_088A0C80) - (3200);
    a0 = s0 + 0;
    a2 = a2 + 3200;
    a1 = 1;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FF24;
L_0889FF24:;
    a2 = ((u32)(uintptr_t)func_088A0BDC) - (3036);
    a0 = s0 + 0;
    a2 = a2 + 3036;
    a1 = 2;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FF3C;
L_0889FF3C:;
    a2 = ((u32)(uintptr_t)func_088A0BE4) - (3044);
    a0 = s0 + 0;
    a2 = a2 + 3044;
    a1 = 3;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FF54;
L_0889FF54:;
    a2 = ((u32)(uintptr_t)func_088A0C88) - (3208);
    a0 = s0 + 0;
    a2 = a2 + 3208;
    a1 = 5;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FF6C;
L_0889FF6C:;
    a2 = ((u32)(uintptr_t)func_088A0CB0) - (3248);
    a0 = s0 + 0;
    a2 = a2 + 3248;
    a1 = 6;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FF84;
L_0889FF84:;
    a2 = ((u32)(uintptr_t)func_088A0CB8) - (3256);
    a0 = s0 + 0;
    a2 = a2 + 3256;
    a1 = 7;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FF9C;
L_0889FF9C:;
    a2 = ((u32)(uintptr_t)func_088A0CC0) - (3264);
    a0 = s0 + 0;
    a2 = a2 + 3264;
    a1 = 8;
    a3 = 0 + 0;
    func_08A6F6F8(a0, a1, a2, a3);
    goto L_0889FFB4;
L_0889FFB4:;
    v0 = D_08B2AC5D - (-21411);
    ST8(v0-21411, 0);
    v0 = D_08B2AC68 - (-21400);
    s4 = D_08B2AC58 - (-21416);
    s5 = D_08B2AC5C - (-21412);
    ST8(v0-21400, 0);
    v0 = D_08B2AC88 - (-21368);
    v1 = D_08B2AC30 - (-21456);
    ST8(v0-21368, 0);
    s1 = v1 - 21456;
    s0 = 0 + 0;
    ST32(s4-21416, 0);
    ST8(s5-21412, 0);
    goto L_0889FFE8;
L_0889FFE8:;
    a0 = 62;
    s0 = s0 + 1;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_0889FFF4;
L_0889FFF4:;
    v1 = s0 < 0xau;
    ST32(s1, v0);
    cnd_ = v1 != 0;
    s1 = s1 + 4;
    if (cnd_) { goto L_0889FFE8; }
    goto L_088A0004;
L_088A0004:;
    s0 = D_08B2ACA8 - (-21336);
    func_088A0F48();
    goto L_088A000C;
L_088A000C:;
    a0 = 62;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0014;
L_088A0014:;
    ST16(v0, 0);
    a0 = 102;
    ST32(s0-21336, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0024;
L_088A0024:;
    s1 = D_08B2ACAC - (-21332);
    ST16(v0, 0);
    a0 = 62;
    s2 = D_08B2ACB0 - (-21328);
    ST32(s1-21332, v0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A003C;
L_088A003C:;
    a0 = D_08AD6600 - (26112);
    a1 = LD32(s0-21336);
    ST16(v0, 0);
    a0 = a0 + 26112;
    a2 = 21;
    a3 = 1;
    t0 = 0 + 0;
    ST32(s2-21328, v0);
    func_08897890(a0, a1, a2, a3, t0);
    goto L_088A0060;
L_088A0060:;
    a0 = D_08AD6624 - (26148);
    a1 = LD32(s1-21332);
    a0 = a0 + 26148;
    a2 = 51;
    a3 = 1;
    t0 = 0 + 0;
    func_08897890(a0, a1, a2, a3, t0);
    goto L_088A007C;
L_088A007C:;
    a1 = LD32(s2-21328);
    a0 = D_08AD664C - (26188);
    t0 = 0 + 0;
    a0 = a0 + 26188;
    a2 = 31;
    a3 = 1;
    func_08897890(a0, a1, a2, a3, t0);
    goto L_088A0098;
L_088A0098:;
    a0 = D_08AD6670 - (26224);
    a1 = ((u32)(uintptr_t)func_088A0D58) - (3416);
    a0 = a0 + 26224;
    a1 = a1 + 3416;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_088A00B4;
L_088A00B4:;
    a0 = D_08AD6698 - (26264);
    a1 = ((u32)(uintptr_t)func_088A0DB4) - (3508);
    a0 = a0 + 26264;
    a1 = a1 + 3508;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_088A00D0;
L_088A00D0:;
    a0 = D_08AD66C0 - (26304);
    a1 = ((u32)(uintptr_t)func_088A0E14) - (3604);
    a0 = a0 + 26304;
    a1 = a1 + 3604;
    a2 = 1;
    a3 = 0 + 0;
    func_08897664(a0, a1, a2, a3, 0, 0, 0);
    goto L_088A00EC;
L_088A00EC:;
    a0 = D_08AD66F4 - (26356);
    a1 = ((u32)(uintptr_t)func_088A0E60) - (3680);
    a0 = a0 + 26356;
    a1 = a1 + 3680;
    a2 = 1;
    a3 = 0 + 0;
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_088A0108;
L_088A0108:;
    a0 = D_08AD6734 - (26420);
    a1 = ((u32)(uintptr_t)func_088A0EC8) - (3784);
    a0 = a0 + 26420;
    a1 = a1 + 3784;
    a2 = 1;
    a3 = 0 + 0;
    s0 = D_08AD6774 - (26484);
    func_088976F4(a0, a1, a2, a3, 0, 0, 0);
    goto L_088A0128;
L_088A0128:;
    s0 = s0 + 26484;
    a3 = 0x7fff0000u;
    t0 = 1;
    t1 = 0 + 0;
    a2 = 0x80000000u;
    a3 = a3 | 0xffff;
    a1 = s4 - 21416;
    a0 = s0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_088A014C;
L_088A014C:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_088A0154;
L_088A0154:;
    a0 = s0 + 0;
    a1 = D_08AD67A0 - (26528);
    s0 = D_08AD6808 - (26632);
    s0 = s0 + 26632;
    a1 = a1 + 26528;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_088A016C;
L_088A016C:;
    a2 = 1;
    a3 = 0 + 0;
    a1 = s5 - 21412;
    a0 = s0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0180;
L_088A0180:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_088A0188;
L_088A0188:;
    a1 = D_08AD683C - (26684);
    a0 = s0 + 0;
    a1 = a1 + 26684;
    s0 = D_08AD685C - (26716);
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_088A019C;
L_088A019C:;
    s0 = s0 + 26716;
    a3 = 0x7fff0000u;
    a1 = D_08B2ACB4 - (-21324);
    a1 = a1 - 21324;
    a2 = 0x80000000u;
    a3 = a3 | 0xffff;
    t0 = 1;
    t1 = 0 + 0;
    a0 = s0 + 0;
    func_088977D4(a0, a1, a2, a3, t0, t1);
    goto L_088A01C4;
L_088A01C4:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_088A01CC;
L_088A01CC:;
    a1 = D_08AD6890 - (26768);
    a0 = s0 + 0;
    a1 = a1 + 26768;
    func_088978E0(a0, a1, 0, 0, 0);
    goto L_088A01DC;
L_088A01DC:;
    v1 = 1;
    ST8(s3-21409, v1);
    goto L_0889FEA8;
}

/* 088A01E8 */
void func_088A01E8(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A01E8:;
    sp = sp - 32;
    s3 = D_08B2AC5F - (-21409);
    v0 = LD_U8(s3-21409);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A0228; }
    goto L_088A020C;
L_088A020C:;
    sp = sp + 32;
    return;
L_088A0228:;
    a0 = D_08B2AA28 - (-21976);
    a0 = a0 - 21976;
    func_08A6F63C(a0, t1, t2, t3);
    goto L_088A0234;
L_088A0234:;
    v0 = D_08B15FAC - (24492);
    a0 = (u32)-1;
    v1 = D_08B2AC30 - (-21456);
    ST32(v0+24492, a0);
    v0 = D_08B2AC58 - (-21416);
    s0 = v1 - 21456;
    ST32(v0-21416, 0);
    v1 = D_08B2AC5D - (-21411);
    v0 = D_08B2AC5C - (-21412);
    ST8(v0-21412, 0);
    v0 = D_08B2AC5E - (-21410);
    s1 = 0 + 0;
    ST8(v1-21411, 0);
    v1 = D_08B2AC64 - (-21404);
    ST8(v0-21410, 0);
    ST32(v1-21404, 0);
    goto L_088A0274;
L_088A0274:;
    v0 = LD32(s0);
    s1 = s1 + 1;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A03A4; }
    goto L_088A0284;
L_088A0284:;
    v0 = s1 < 0xau;
    goto L_088A0288;
L_088A0288:;
    ST32(s0, 0);
    cnd_ = v0 != 0;
    s0 = s0 + 4;
    if (cnd_) { goto L_088A0274; }
    goto L_088A0294;
L_088A0294:;
    s0 = D_08B2ACA8 - (-21336);
    func_088A0F50(0, 0, 0, 0, 0, 0);
    goto L_088A029C;
L_088A029C:;
    a0 = LD32(s0-21336);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A0394; }
    goto L_088A02A8;
L_088A02A8:;
    s1 = D_08B2ACAC - (-21332);
    a0 = LD32(s1-21332);
    goto L_088A02B0;
L_088A02B0:;
    cnd_ = a0 != 0;
    ST32(s0-21336, 0);
    if (cnd_) { goto L_088A0384; }
    goto L_088A02B8;
L_088A02B8:;
    s2 = D_08B2ACB0 - (-21328);
    a0 = LD32(s2-21328);
    goto L_088A02C0;
L_088A02C0:;
    cnd_ = a0 != 0;
    ST32(s1-21332, 0);
    if (cnd_) { goto L_088A0374; }
    goto L_088A02C8;
L_088A02C8:;
    v0 = D_08AD6600 - (26112);
    goto L_088A02CC;
L_088A02CC:;
    s0 = v0 + 26112;
    a0 = s0 + 0;
    ST32(s2-21328, 0);
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A02DC;
L_088A02DC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A02EC; }
    goto L_088A02E4;
L_088A02E4:;
    ST8(s3-21409, 0);
    goto L_088A020C;
L_088A02EC:;
    a0 = s0 + 0;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A02F4;
L_088A02F4:;
    a0 = D_08AD6624 - (26148);
    a0 = a0 + 26148;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0300;
L_088A0300:;
    a0 = D_08AD664C - (26188);
    a0 = a0 + 26188;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A030C;
L_088A030C:;
    a0 = D_08AD6670 - (26224);
    a0 = a0 + 26224;
    func_08897784(a0);
    goto L_088A0318;
L_088A0318:;
    a0 = D_08AD6698 - (26264);
    a0 = a0 + 26264;
    func_08897784(a0);
    goto L_088A0324;
L_088A0324:;
    a0 = D_08AD66C0 - (26304);
    a0 = a0 + 26304;
    func_08897784(a0);
    goto L_088A0330;
L_088A0330:;
    a0 = D_08AD66F4 - (26356);
    a0 = a0 + 26356;
    func_08897784(a0);
    goto L_088A033C;
L_088A033C:;
    a0 = D_08AD6734 - (26420);
    a0 = a0 + 26420;
    func_08897784(a0);
    goto L_088A0348;
L_088A0348:;
    a0 = D_08AD6774 - (26484);
    a0 = a0 + 26484;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0354;
L_088A0354:;
    a0 = D_08AD6808 - (26632);
    a0 = a0 + 26632;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0360;
L_088A0360:;
    a0 = D_08AD685C - (26716);
    a0 = a0 + 26716;
    { rv_t r_ = func_088978C4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A036C;
L_088A036C:;
    ST8(s3-21409, 0);
    goto L_088A020C;
L_088A0374:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A037C;
L_088A037C:;
    v0 = D_08AD6600 - (26112);
    goto L_088A02CC;
L_088A0384:;
    s2 = D_08B2ACB0 - (-21328);
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A038C;
L_088A038C:;
    a0 = LD32(s2-21328);
    goto L_088A02C0;
L_088A0394:;
    s1 = D_08B2ACAC - (-21332);
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A039C;
L_088A039C:;
    a0 = LD32(s1-21332);
    goto L_088A02B0;
L_088A03A4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A03AC;
L_088A03AC:;
    v0 = s1 < 0xau;
    goto L_088A0288;
}

/* 088A03B4 */
void func_088A03B4(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A03B4:;
    sp = sp - 16;
    v0 = D_08B2AC5F - (-21409);
    a0 = D_08B2AA28 - (-21976);
    v1 = LD_U8(v0-21409);
    cnd_ = v1 != 0;
    a0 = a0 - 21976;
    if (cnd_) { goto L_088A03DC; }
    goto L_088A03D0;
L_088A03D0:;
    goto L_088A03D4;
L_088A03D4:;
    sp = sp + 16;
    return;
L_088A03DC:;
    func_08A6F6AC(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088A03E4;
L_088A03E4:;
    v1 = D_08B15FAC - (24492);
    v0 = LD32(v1+24492);
    v0 = ~(0 | v0);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088A03D4; }
    goto L_088A03F8;
L_088A03F8:;
    func_088A0F90(0, 0, 0);
    goto L_088A0400;
L_088A0400:;
    goto L_088A03D4;
}

/* 088A0408 */
rv_t func_088A0408(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 160);
L_088A0408:;
    sp = sp - 160;
    s0 = D_08AD68AC - (26796);
    s0 = s0 + 26796;
    t0 = a0 + 0;
    a0 = sp + 0;
    a3 = 1;
    s3 = sp + 32;
    s2 = a2 + 0;
    a2 = 31;
    s1 = a1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A044C;
L_088A044C:;
    t0 = s1 + 0;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = 51;
    a3 = 1;
    s1 = sp + 96;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0468;
L_088A0468:;
    a1 = s0 + 0;
    t0 = s2 + 0;
    a0 = s1 + 0;
    a2 = 31;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0480;
L_088A0480:;
    v1 = (u32)(s32)LD_S8(sp);
    cnd_ = v1 == 0;
    t1 = 4;
    if (cnd_) { goto L_088A0558; }
    goto L_088A048C;
L_088A048C:;
    v0 = (u32)(s32)LD_S8(sp+32);
    t1 = 4;
    cnd_ = v0 == 0;
    v1 = 259;
    if (cnd_) { goto L_088A054C; }
    goto L_088A049C;
L_088A049C:;
    v0 = D_08AD68B0 - (26800);
    s0 = v0 + 26800;
    v0 = (u32)(s32)LD_S8(sp+96);
    a0 = D_08B2AC68 - (-21400);
    v1 = D_08B2AC58 - (-21416);
    a2 = 31;
    a3 = 1;
    t0 = sp + 0;
    t1 = 4;
    a0 = a0 - 21400;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_088A0548; }
    goto L_088A04CC;
L_088A04CC:;
    v0 = LD32(v1-21416);
    v0 = v0 | 0x1;
    ST32(v1-21416, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A04DC;
L_088A04DC:;
    a0 = D_08B2AC88 - (-21368);
    a0 = a0 - 21368;
    a1 = s0 + 0;
    a2 = 31;
    a3 = 1;
    t0 = s1 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A04F8;
L_088A04F8:;
    a0 = D_08B2AA28 - (-21976);
    t2 = ((u32)(uintptr_t)func_088A0840) - (2112);
    t1 = 0 + 0;
    a0 = a0 - 21976;
    a2 = s3 + 0;
    a3 = s1 + 0;
    t2 = t2 + 2112;
    a1 = sp + 0;
    t0 = 0 + 0;
    t3 = 0 + 0;
    { rv_t r_ = func_08A6F758(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0524;
L_088A0524:;
    t1 = v0 + 0;
    goto L_088A0528;
L_088A0528:;
    v0 = t1 + 0;
    sp = sp + 160;
    return (rv_t){ v0, v1, f0 };
L_088A0548:;
    v1 = 260;
    goto L_088A054C;
L_088A054C:;
    v0 = D_08B2ACB4 - (-21324);
    ST32(v0-21324, v1);
    goto L_088A0528;
L_088A0558:;
    v1 = 258;
    goto L_088A054C;
}

/* 088A0560 */
rv_t func_088A0560(u32 a0, u32 a1, u32 a2, u32 a3, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 176);
L_088A0560:;
    sp = sp - 176;
    s0 = D_08AD68AC - (26796);
    s0 = s0 + 26796;
    v0 = a3 + 0;
    t0 = a0 + 0;
    a0 = sp + 16;
    a3 = 1;
    s3 = sp + 48;
    s2 = a2 + 0;
    a2 = 31;
    s1 = a1 + 0;
    a1 = s0 + 0;
    s4 = v0 & 0xff;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A05B0;
L_088A05B0:;
    t0 = s1 + 0;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = 51;
    a3 = 1;
    s1 = sp + 112;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A05CC;
L_088A05CC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    t0 = s2 + 0;
    a2 = 31;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A05E4;
L_088A05E4:;
    a0 = sp + 16;
    a1 = 92;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A05F0;
L_088A05F0:;
    cnd_ = v0 != 0;
    a0 = sp + 16;
    if (cnd_) { goto L_088A0608; }
    goto L_088A05F8;
L_088A05F8:;
    a1 = 39;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0600;
L_088A0600:;
    cnd_ = v0 == 0;
    a0 = sp + 16;
    if (cnd_) { goto L_088A063C; }
    goto L_088A0608;
L_088A0608:;
    a0 = 4;
    goto L_088A060C;
L_088A060C:;
    v1 = 515;
    goto L_088A0610;
L_088A0610:;
    v0 = D_08B2ACB4 - (-21324);
    ST32(v0-21324, v1);
    goto L_088A0618;
L_088A0618:;
    v0 = a0 + 0;
    sp = sp + 176;
    return (rv_t){ v0, v1, f0 };
L_088A063C:;
    a1 = 44;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0644;
L_088A0644:;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_088A060C; }
    goto L_088A064C;
L_088A064C:;
    a0 = sp + 16;
    a1 = 32;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0658;
L_088A0658:;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_088A060C; }
    goto L_088A0660;
L_088A0660:;
    a0 = LD_U8(sp+16);
    v0 = 64;
    v1 = (u32)(s32)(s8)a0;
    cnd_ = v1 == v0;
    v0 = 35;
    if (cnd_) { goto L_088A0608; }
    goto L_088A0674;
L_088A0674:;
    cnd_ = v1 == v0;
    v0 = 43;
    if (cnd_) { goto L_088A0608; }
    goto L_088A067C;
L_088A067C:;
    cnd_ = v1 == v0;
    v0 = 58;
    if (cnd_) { goto L_088A0608; }
    goto L_088A0684;
L_088A0684:;
    cnd_ = v1 == v0;
    v0 = a0 - 48;
    if (cnd_) { goto L_088A0608; }
    goto L_088A068C;
L_088A068C:;
    v0 = v0 & 0xff;
    v0 = v0 < 0xau;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_088A060C; }
    goto L_088A069C;
L_088A069C:;
    a0 = sp + 16;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A06A4;
L_088A06A4:;
    v0 = v0 < 0x3u;
    cnd_ = v0 != 0;
    a0 = 4;
    if (cnd_) { goto L_088A060C; }
    goto L_088A06B0;
L_088A06B0:;
    a0 = sp + 16;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A06B8;
L_088A06B8:;
    v0 = v0 < 0x15u;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_088A060C; }
    goto L_088A06C4;
L_088A06C4:;
    v0 = (u32)(s32)LD_S8(sp+48);
    cnd_ = v0 == 0;
    v1 = 259;
    if (cnd_) { goto L_088A0610; }
    goto L_088A06D0;
L_088A06D0:;
    a0 = s3 + 0;
    a1 = 64;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A06DC;
L_088A06DC:;
    cnd_ = v0 == 0;
    a0 = 4;
    if (cnd_) { goto L_088A07C0; }
    goto L_088A06E4;
L_088A06E4:;
    a0 = s3 + 0;
    a1 = 46;
    { u64 r_ = func_08A8986C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A06F0;
L_088A06F0:;
    cnd_ = v0 == 0;
    v0 = (u32)(s32)LD_S8(sp+112);
    if (cnd_) { goto L_088A07BC; }
    goto L_088A06F8;
L_088A06F8:;
    cnd_ = v0 == 0;
    s2 = D_08B2AC58 - (-21416);
    if (cnd_) { goto L_088A07B0; }
    goto L_088A0700;
L_088A0700:;
    v0 = LD32(s2-21416);
    s0 = D_08AD68B0 - (26800);
    s0 = s0 + 26800;
    a0 = D_08B2AC68 - (-21400);
    v0 = v0 | 0x2;
    a0 = a0 - 21400;
    a1 = s0 + 0;
    a2 = 31;
    a3 = 1;
    t0 = sp + 16;
    ST32(s2-21416, v0);
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0730;
L_088A0730:;
    a0 = D_08B2AC88 - (-21368);
    a0 = a0 - 21368;
    a1 = s0 + 0;
    a2 = 31;
    a3 = 1;
    t0 = s1 + 0;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A074C;
L_088A074C:;
    cnd_ = s4 != 0;
    v1 = 2;
    if (cnd_) { goto L_088A0768; }
    goto L_088A0754;
L_088A0754:;
    v0 = LD32(s2-21416);
    goto L_088A0758;
L_088A0758:;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    ST32(s2-21416, v0);
    goto L_088A0760;
L_088A0760:;
    a0 = v1 + 0;
    goto L_088A0618;
L_088A0768:;
    a1 = sp + 16;
    a0 = D_08B2AA28 - (-21976);
    v0 = ((u32)(uintptr_t)func_088A0940) - (2368);
    v0 = v0 + 2368;
    a0 = a0 - 21976;
    a3 = s3 + 0;
    t0 = s1 + 0;
    a2 = a1 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    t3 = 0 + 0;
    ST32(sp, v0);
    ST32(sp+4, 0);
    { rv_t r_ = func_08A6F85C(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, sp); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A07A0;
L_088A07A0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088A0760; }
    goto L_088A07A8;
L_088A07A8:;
    v0 = LD32(s2-21416);
    goto L_088A0758;
L_088A07B0:;
    a0 = 4;
    v1 = 260;
    goto L_088A0610;
L_088A07BC:;
    a0 = 4;
    goto L_088A07C0;
L_088A07C0:;
    v1 = 259;
    goto L_088A0610;
}

/* 088A07C8 */
rv_t func_088A07C8(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A07C8:;
    sp = sp - 16;
    s0 = D_08B15FAC - (24492);
    a0 = 0 + 0;
    v0 = LD32(s0+24492);
    v0 = ~(0 | v0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A07FC; }
    goto L_088A07E8;
L_088A07E8:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A07FC:;
    func_088A0F88();
    goto L_088A0804;
L_088A0804:;
    a0 = D_08B2AA28 - (-21976);
    a0 = a0 - 21976;
    f0 = func_08A6F974(a0, 0, 0, 0);
    goto L_088A0810;
L_088A0810:;
    v0 = (u32)-1;
    v1 = D_08B2AC5D - (-21411);
    ST32(s0+24492, v0);
    v0 = D_08B2AC5C - (-21412);
    a0 = 1;
    ST8(v0-21412, 0);
    v0 = D_08B2AC5E - (-21410);
    ST8(v1-21411, 0);
    v1 = D_08B2AC64 - (-21404);
    ST8(v0-21410, 0);
    ST32(v1-21404, 0);
    goto L_088A07E8;
}

/* 088A0840 */
rv_t func_088A0840(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0840:;
    sp = sp - 16;
    v1 = D_08B2AC58 - (-21416);
    a3 = a1 + 0;
    s0 = a1 + 8;
    s1 = 1;
    a0 = s0 + 0;
    v0 = LD32(v1-21416);
    a2 = LD32(a1);
    a1 = D_08AD68B4 - (26804);
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    a1 = a1 + 26804;
    cnd_ = a2 == 0;
    ST32(v1-21416, v0);
    if (cnd_) { goto L_088A089C; }
    goto L_088A0880;
L_088A0880:;
    v0 = D_08B2AC5C - (-21412);
    ST8(v0-21412, 0);
    goto L_088A088C;
L_088A088C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A089C:;
    a2 = LD32(a3+4);
    v0 = D_08B2AC5C - (-21412);
    ST8(v0-21412, s1);
    v1 = D_08B2AC60 - (-21408);
    v0 = D_08B15FAC - (24492);
    ST8(v1-21408, s1);
    ST32(v0+24492, a2);
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A08BC;
L_088A08BC:;
    a1 = D_08AD68C4 - (26820);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = a1 + 26820;
    if (cnd_) { goto L_088A0928; }
    goto L_088A08CC;
L_088A08CC:;
    v1 = D_08B2AC5E - (-21410);
    ST8(v1-21410, 0);
    goto L_088A08D4;
L_088A08D4:;
    v0 = LD_U8(v1-21410);
    a0 = D_08B2AA28 - (-21976);
    a2 = D_08AD68D0 - (26832);
    a3 = D_08AD68D8 - (26840);
    a1 = 1;
    a0 = a0 - 21976;
    a2 = a2 + 26832;
    cnd_ = v0 != 0;
    a3 = a3 + 26840;
    if (cnd_) { goto L_088A0910; }
    goto L_088A08F8;
L_088A08F8:;
    v1 = 265;
    v0 = D_08B2ACB4 - (-21324);
    ST32(v0-21324, v1);
    { rv_t r_ = func_088A07C8(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0908;
L_088A0908:;
    goto L_088A088C;
L_088A0910:;
    func_08A6FB6C(a0, a1, a2, a3);
    goto L_088A0918;
L_088A0918:;
    { u64 r_ = func_088A0F6C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0920;
L_088A0920:;
    goto L_088A088C;
L_088A0928:;
    { u64 r_ = func_08A8996C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0930;
L_088A0930:;
    cnd_ = v0 == 0;
    v1 = D_08B2AC5E - (-21410);
    if (cnd_) { goto L_088A08CC; }
    goto L_088A0938;
L_088A0938:;
    ST8(v1-21410, s1);
    goto L_088A08D4;
}

/* 088A0940 */
rv_t func_088A0940(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0940:;
    sp = sp - 16;
    t0 = D_08B2AC58 - (-21416);
    s0 = a1 + 0;
    a0 = D_08B2AA28 - (-21976);
    a2 = D_08AD68D0 - (26832);
    v0 = LD32(t0-21416);
    v1 = LD32(s0);
    a3 = D_08AD68D8 - (26840);
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    a0 = a0 - 21976;
    a2 = a2 + 26832;
    a3 = a3 + 26840;
    a1 = 1;
    cnd_ = v1 == 0;
    ST32(t0-21416, v0);
    if (cnd_) { goto L_088A099C; }
    goto L_088A0984;
L_088A0984:;
    v0 = D_08B2AC5D - (-21411);
    ST8(v0-21411, 0);
    goto L_088A0990;
L_088A0990:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A099C:;
    v1 = LD32(s0+4);
    v0 = D_08B15FAC - (24492);
    ST32(v0+24492, v1);
    func_08A6FB6C(a0, a1, a2, a3);
    goto L_088A09AC;
L_088A09AC:;
    a0 = 1;
    v0 = D_08B2AC60 - (-21408);
    v1 = D_08B2AC5D - (-21411);
    ST8(v0-21408, a0);
    v0 = D_08B2AC5C - (-21412);
    ST8(v1-21411, a0);
    v1 = D_08B2AC5E - (-21410);
    ST8(v1-21410, a0);
    ST8(v0-21412, a0);
    { u64 r_ = func_088A0F6C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A09D4;
L_088A09D4:;
    a0 = LD32(s0+4);
    { rv_t r_ = func_088A09E4(a0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A09DC;
L_088A09DC:;
    goto L_088A0990;
}

/* 088A09E4 */
rv_t func_088A09E4(u32 a0, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A09E4:;
    sp = sp - 16;
    t3 = D_08B2AC58 - (-21416);
    t0 = ((u32)(uintptr_t)func_088A0A40) - (2624);
    v0 = LD32(t3-21416);
    a1 = a0 + 0;
    a0 = D_08B2AA28 - (-21976);
    t2 = v0 | 0x10;
    v0 = v0 & 0x10;
    t0 = t0 + 2624;
    a2 = 1;
    a3 = 0 + 0;
    t1 = 0 + 0;
    a0 = a0 - 21976;
    cnd_ = v0 != 0;
    v1 = 5;
    if (cnd_) { goto L_088A0A30; }
    goto L_088A0A24;
L_088A0A24:;
    ST32(t3-21416, t2);
    { rv_t r_ = func_08A6FAAC(a0, a1, a2, a3, t0, t1, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0A2C;
L_088A0A2C:;
    v1 = v0 + 0;
    goto L_088A0A30;
L_088A0A30:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0A40 */
rv_t func_088A0A40(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088A0A40:;
    v0 = D_08B2AA2C - (-21972);
    a2 = a1 + 0;
    a3 = v0 - 21972;
    t0 = a1 + 512;
    goto L_088A0A50;
L_088A0A50:;
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
    if (cnd_) { goto L_088A0A50; }
    goto L_088A0A7C;
L_088A0A7C:;
    v1 = D_08B2AC58 - (-21416);
    v0 = LD32(v1-21416);
    a0 = LD32(a2);
    ST32(a3, a0);
    v0 = (v0 & ~(0x1u << 4)) | ((0 & 0x1) << 4);
    ST32(v1-21416, v0);
    return (rv_t){ v0, v1, f0 };
}

/* 088A0A98 */
rv_t func_088A0A98(u32 a0, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088A0A98:;
    sp = sp - 48;
    s0 = D_08B2AC58 - (-21416);
    t1 = a0 + 0;
    v0 = LD32(s0-21416);
    v0 = v0 & 0x8;
    cnd_ = v0 != 0;
    v1 = 5;
    if (cnd_) { goto L_088A0B1C; }
    goto L_088A0ABC;
L_088A0ABC:;
    a1 = D_08AD68AC - (26796);
    t0 = a0 + 0;
    a1 = a1 + 26796;
    a0 = sp + 0;
    a2 = 31;
    a3 = 1;
    cnd_ = t1 == 0;
    v1 = 2;
    if (cnd_) { goto L_088A0B1C; }
    goto L_088A0ADC;
L_088A0ADC:;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0AE4;
L_088A0AE4:;
    v1 = LD32(s0-21416);
    v0 = D_08B2AC64 - (-21404);
    a0 = D_08B2AA28 - (-21976);
    a3 = ((u32)(uintptr_t)func_088A0B30) - (2864);
    v1 = v1 | 0x8;
    t0 = v0 - 21404;
    a0 = a0 - 21976;
    a3 = a3 + 2864;
    a1 = sp + 0;
    a2 = 0 + 0;
    ST32(s0-21416, v1);
    ST32(v0-21404, 0);
    { rv_t r_ = func_08A6F9C8(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0B18;
L_088A0B18:;
    v1 = v0 + 0;
    goto L_088A0B1C;
L_088A0B1C:;
    v0 = v1 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0B30 */
rv_t func_088A0B30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A0B30:;
    sp = sp - 32;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_088A0BB0; }
    goto L_088A0B54;
L_088A0B54:;
    v1 = LD32(a1+4);
    ST32(a2, v1);
    v0 = LD32(a1+4);
    cnd_ = (s32)v0 <= 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_088A0BB0; }
    goto L_088A0B68;
L_088A0B68:;
    v0 = D_08B2AC30 - (-21456);
    s3 = v0 - 21456;
    s2 = D_08AD68DC - (26844);
    a0 = LD32(s0+8);
    goto L_088A0B78;
L_088A0B78:;
    v0 = s1 << 2;
    v1 = v0 + s3;
    v0 = v0 + a0;
    t0 = LD32(v0);
    a0 = LD32(v1);
    a1 = s2 + 26844;
    a2 = 31;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0B9C;
L_088A0B9C:;
    v1 = LD32(s0+4);
    s1 = s1 + 1;
    v1 = (s32)s1 < (s32)v1;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(s0+8); goto L_088A0B78; }
    goto L_088A0BB0;
L_088A0BB0:;
    v1 = D_08B2AC58 - (-21416);
    v0 = LD32(v1-21416);
    v0 = (v0 & ~(0x1u << 3)) | ((0 & 0x1) << 3);
    ST32(v1-21416, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0BDC */
rv_t func_088A0BDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088A0BDC:;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0BE4 */
rv_t func_088A0BE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088A0BE4:;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0BEC */
rv_t func_088A0BEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0BEC:;
    sp = sp - 16;
    v0 = D_08AD68E4 - (26852);
    s0 = a1 + 0;
    a0 = D_08AD68EC - (26860);
    v1 = LD32(a1+12);
    a1 = v0 + 26852;
    v0 = 1;
    cnd_ = v1 == v0;
    a0 = a0 + 26860;
    if (cnd_) { goto L_088A0C20; }
    goto L_088A0C18;
L_088A0C18:;
    v0 = D_08AD68FC - (26876);
    a1 = v0 + 26876;
    goto L_088A0C20;
L_088A0C20:;
    a2 = LD32(s0+8);
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0C28;
L_088A0C28:;
    v1 = LD32(s0+12);
    v0 = 1;
    cnd_ = v1 == v0;
    v1 = D_08B15FAC - (24492);
    if (cnd_) { goto L_088A0C54; }
    goto L_088A0C38;
L_088A0C38:;
    v1 = LD32(s0+4);
    v0 = D_08B2ACB4 - (-21324);
    ST32(v0-21324, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A0C54:;
    v0 = LD32(v1+24492);
    v0 = ~(0 | v0);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A0C70; }
    goto L_088A0C64;
L_088A0C64:;
    v0 = D_08B2AC58 - (-21416);
    goto L_088A0C68;
L_088A0C68:;
    ST32(v0-21416, 0);
    goto L_088A0C38;
L_088A0C70:;
    { rv_t r_ = func_088A07C8(); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0C78;
L_088A0C78:;
    v0 = D_08B2AC58 - (-21416);
    goto L_088A0C68;
}

/* 088A0C80 */
rv_t func_088A0C80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088A0C80:;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0C88 */
rv_t func_088A0C88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0C88:;
    sp = sp - 16;
    a0 = D_08AD6908 - (26888);
    a0 = a0 + 26888;
    a2 = LD32(a1);
    a1 = LD32(a1+4);
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0CA4;
L_088A0CA4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0CB0 */
rv_t func_088A0CB0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088A0CB0:;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0CB8 */
rv_t func_088A0CB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088A0CB8:;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0CC0 */
rv_t func_088A0CC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088A0CC0:;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0CC8 */
rv_t func_088A0CC8(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0CC8:;
    sp = sp - 16;
    v0 = D_08B2ACA8 - (-21336);
    t0 = a0 + 0;
    a3 = 1;
    s2 = a2 + 0;
    a2 = 31;
    s1 = a1 + 0;
    s0 = D_08AD6A4C - (27212);
    s0 = s0 + 27212;
    a0 = LD32(v0-21336);
    a1 = s0 + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0D08;
L_088A0D08:;
    v1 = D_08B2ACAC - (-21332);
    a0 = LD32(v1-21332);
    t0 = s1 + 0;
    a1 = s0 + 0;
    a2 = 51;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0D24;
L_088A0D24:;
    v1 = D_08B2ACB0 - (-21328);
    a0 = LD32(v1-21328);
    a1 = s0 + 0;
    t0 = s2 + 0;
    a2 = 31;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0D40;
L_088A0D40:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A0D58 */
rv_t func_088A0D58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0D58:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    v0 = 1;
    if (cnd_) { goto L_088A0D7C; }
    goto L_088A0D6C;
L_088A0D6C:;
    v0 = D_08B2AC5F - (-21409);
    v1 = LD_U8(v0-21409);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A0D88; }
    goto L_088A0D7C;
L_088A0D7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A0D88:;
    v0 = D_08B2ACA8 - (-21336);
    a0 = LD32(v0-21336);
    v1 = D_08B2ACAC - (-21332);
    v0 = D_08B2ACB0 - (-21328);
    a1 = LD32(v1-21332);
    a2 = LD32(v0-21328);
    v1 = D_08B2ACB4 - (-21324);
    ST32(v1-21324, 0);
    { rv_t r_ = func_088A0408(a0, a1, a2, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0DAC;
L_088A0DAC:;
    v0 = v0 < 0x1u;
    goto L_088A0D7C;
}

/* 088A0DB4 */
rv_t func_088A0DB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0DB4:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    v0 = 1;
    if (cnd_) { goto L_088A0DDC; }
    goto L_088A0DC8;
L_088A0DC8:;
    v0 = D_08B2AC5F - (-21409);
    v1 = LD_U8(v0-21409);
    a3 = 1;
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A0DE8; }
    goto L_088A0DDC;
L_088A0DDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A0DE8:;
    v0 = D_08B2ACA8 - (-21336);
    a0 = LD32(v0-21336);
    v1 = D_08B2ACAC - (-21332);
    v0 = D_08B2ACB0 - (-21328);
    a1 = LD32(v1-21332);
    a2 = LD32(v0-21328);
    v1 = D_08B2ACB4 - (-21324);
    ST32(v1-21324, 0);
    { rv_t r_ = func_088A0560(a0, a1, a2, a3, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0E0C;
L_088A0E0C:;
    v0 = v0 < 0x1u;
    goto L_088A0DDC;
}

/* 088A0E14 */
rv_t func_088A0E14(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0E14:;
    sp = sp - 16;
    a0 = a0 & 0xff;
    cnd_ = a0 != 0;
    v0 = 1;
    if (cnd_) { goto L_088A0E38; }
    goto L_088A0E28;
L_088A0E28:;
    v0 = D_08B2AC5F - (-21409);
    v1 = LD_U8(v0-21409);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A0E44; }
    goto L_088A0E38;
L_088A0E38:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A0E44:;
    v0 = D_08B2ACA8 - (-21336);
    a0 = LD32(v0-21336);
    v1 = D_08B2ACB4 - (-21324);
    ST32(v1-21324, 0);
    { rv_t r_ = func_088A0A98(a0, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0E58;
L_088A0E58:;
    v0 = v0 < 0x1u;
    goto L_088A0E38;
}

/* 088A0E60 */
rv_t func_088A0E60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0E60:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = 1;
    a3 = a0 + 0;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_088A0EA8; }
    goto L_088A0E7C;
L_088A0E7C:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088A0EAC; }
    goto L_088A0E84;
L_088A0E84:;
    v0 = D_08B2AC30 - (-21456);
    v0 = v0 - 21456;
    v1 = D_08B2AC64 - (-21404);
    a0 = a0 << 2;
    a0 = a0 + v0;
    v0 = LD32(v1-21404);
    v0 = (s32)a3 < (s32)v0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A0EB8; }
    goto L_088A0EA8;
L_088A0EA8:;
    goto L_088A0EAC;
L_088A0EAC:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A0EB8:;
    a0 = LD32(a0);
    { rv_t r_ = func_08898048(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0EC0;
L_088A0EC0:;
    v1 = 1;
    goto L_088A0EA8;
}

/* 088A0EC8 */
rv_t func_088A0EC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0EC8:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v1 = 1;
    a3 = a0 + 0;
    cnd_ = a1 != 0;
    a2 = a2 & 0xff;
    if (cnd_) { goto L_088A0F20; }
    goto L_088A0EE4;
L_088A0EE4:;
    cnd_ = a2 != 0;
    if (cnd_) { goto L_088A0F24; }
    goto L_088A0EEC;
L_088A0EEC:;
    v0 = D_08B2AC30 - (-21456);
    v0 = v0 - 21456;
    v1 = D_08B2AC64 - (-21404);
    a0 = a0 << 2;
    t0 = a0 + v0;
    v0 = LD32(v1-21404);
    a1 = D_08AD6A4C - (27212);
    a1 = a1 + 27212;
    v0 = (s32)a3 < (s32)v0;
    a2 = 31;
    a3 = 1;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A0F30; }
    goto L_088A0F20;
L_088A0F20:;
    goto L_088A0F24;
L_088A0F24:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A0F30:;
    v0 = D_08B2ACA8 - (-21336);
    a0 = LD32(v0-21336);
    t0 = LD32(t0);
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A0F40;
L_088A0F40:;
    v1 = 1;
    goto L_088A0F20;
}

/* 088A0F48 */
void func_088A0F48(void)
{
L_088A0F48:;
    return;
}

/* 088A0F50 */
void func_088A0F50(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0F50:;
    sp = sp - 16;
    func_088A1434(a2, a3, t0, t1, t2, t3);
    goto L_088A0F60;
L_088A0F60:;
    sp = sp + 16;
    return;
}

/* 088A0F6C */
u64 func_088A0F6C(void)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0F6C:;
    sp = sp - 16;
    { u64 r_ = func_088A1270(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A0F7C;
L_088A0F7C:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A0F88 */
void func_088A0F88(void)
{
L_088A0F88:;
    return;
}

/* 088A0F90 */
void func_088A0F90(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0F90:;
    sp = sp - 16;
    v0 = func_088A1360(t1, t2, t3);
    goto L_088A0FA0;
L_088A0FA0:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A0FBC; }
    goto L_088A0FA8;
L_088A0FA8:;
    v0 = D_08B2ACD8 - (-21288);
    a0 = LD32(v0-21288);
    v1 = 4;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_088A0FC4; }
    goto L_088A0FBC;
L_088A0FBC:;
    sp = sp + 16;
    return;
L_088A0FC4:;
    func_088A1434(0, 0, 0, 0, 0, 0);
    goto L_088A0FCC;
L_088A0FCC:;
    goto L_088A0FBC;
}

/* 088A0FD4 */
void func_088A0FD4(void)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A0FD4:;
    sp = sp - 16;
    s0 = D_08B2ACBC - (-21316);
    v0 = LD_U8(s0-21316);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A0FFC; }
    goto L_088A0FEC;
L_088A0FEC:;
    sp = sp + 16;
    return;
L_088A0FFC:;
    func_08A6D1A8();
    goto L_088A1004;
L_088A1004:;
    v0 = 1;
    ST8(s0-21316, v0);
    goto L_088A0FEC;
}

/* 088A1010 */
void func_088A1010(void)
{
    u32 v0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1010:;
    sp = sp - 16;
    s0 = D_08B2ACBC - (-21316);
    v0 = LD_U8(s0-21316);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A1038; }
    goto L_088A1028;
L_088A1028:;
    sp = sp + 16;
    return;
L_088A1038:;
    func_08A6D208();
    goto L_088A1040;
L_088A1040:;
    v0 = D_08B2ACBD - (-21315);
    ST8(s0-21316, 0);
    ST8(v0-21315, 0);
    goto L_088A1028;
}

/* 088A1050 */
void func_088A1050(void)
{
L_088A1050:;
    return;
}

/* 088A1058 */
u32 func_088A1058(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, s0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A1058:;
    sp = sp - 32;
    s0 = D_08B2ACBD - (-21315);
    t3 = ((u32)(uintptr_t)func_088A11C0) - (4544);
    v0 = LD_U8(s0-21315);
    t3 = t3 + 4544;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    t0 = 0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    cnd_ = v0 == 0;
    t4 = 0 + 0;
    if (cnd_) { goto L_088A10A8; }
    goto L_088A1094;
L_088A1094:;
    v0 = t4 + 0;
    sp = sp + 32;
    return v0;
L_088A10A8:;
    v0 = ((u32)(uintptr_t)func_088A120C) - (4620);
    v0 = v0 + 4620;
    ST32(sp, v0);
    ST32(sp+4, 0);
    v0 = func_08A6D2C8(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_088A10BC;
L_088A10BC:;
    a0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    t4 = 1;
    if (cnd_) { goto L_088A10E0; }
    goto L_088A10CC;
L_088A10CC:;
    v0 = 1;
    v1 = D_08B2ACD0 - (-21296);
    ST8(s0-21315, v0);
    ST32(v1-21296, a0);
    goto L_088A1094;
L_088A10E0:;
    v1 = 1;
    v0 = D_08B2ACC4 - (-21308);
    ST32(v0-21308, v1);
    t4 = 0 + 0;
    goto L_088A1094;
}

/* 088A10F4 */
u64 func_088A10F4(void)
{
    u32 v0 = 0, v1 = 0;
L_088A10F4:;
    v1 = D_08B2ACBD - (-21315);
    v0 = LD_U8(v1-21315);
    v0 = v0 ^ 0x1;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A1104 */
u32 func_088A1104(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_088A1104:;
    v0 = D_08B2ACBD - (-21315);
    v1 = LD_U8(v0-21315);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A1120; }
    goto L_088A1114;
L_088A1114:;
    v0 = D_08B2ACC4 - (-21308);
    v1 = LD32(v0-21308);
    v0 = 0 < v1;
    goto L_088A1120;
L_088A1120:;
    return v0;
}

/* 088A1128 */
void func_088A1128(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1128:;
    sp = sp - 16;
    s0 = D_08B2ACBD - (-21315);
    v0 = LD_U8(s0-21315);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A1150; }
    goto L_088A1140;
L_088A1140:;
    sp = sp + 16;
    return;
L_088A1150:;
    v0 = D_08B2ACD0 - (-21296);
    a0 = LD32(v0-21296);
    func_08A6D4B4(a0);
    goto L_088A115C;
L_088A115C:;
    v1 = 15;
    v0 = D_08B2ACC4 - (-21308);
    ST32(v0-21308, v1);
    ST8(s0-21315, 0);
    goto L_088A1140;
}

/* 088A1170 */
u32 func_088A1170(void)
{
    u32 v0 = 0, v1 = 0;
L_088A1170:;
    v1 = D_08B2ACC8 - (-21304);
    v0 = LD32(v1-21304);
    return v0;
}

/* 088A117C */
u32 func_088A117C(void)
{
    u32 v0 = 0, v1 = 0;
L_088A117C:;
    v1 = D_08B2ACCC - (-21300);
    v0 = LD32(v1-21300);
    return v0;
}

/* 088A1188 */
void func_088A1188(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1188:;
    sp = sp - 16;
    s0 = D_08B2ACC8 - (-21304);
    a0 = LD32(s0-21304);
    { u64 r_ = func_08A6AFBC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A11A4;
L_088A11A4:;
    ST32(s0-21304, 0);
    v0 = D_08B2ACCC - (-21300);
    ST32(v0-21300, 0);
    sp = sp + 16;
    return;
}

/* 088A11C0 */
rv_t func_088A11C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
L_088A11C0:;
    v0 = (u32)-1;
    cnd_ = t1 == v0;
    v0 = D_08AEC40C - (-15348);
    if (cnd_) { goto L_088A1204; }
    goto L_088A11CC;
L_088A11CC:;
    f0 = BITSF(t0);
    f2 = BITSF(t1);
    f1 = (float)(s32)FBITS(f0);
    cnd_ = t1 != 0;
    f0 = (float)(s32)FBITS(f2);
    if (cnd_) { goto L_088A11F4; }
    goto L_088A11E0;
L_088A11E0:;
    v0 = D_08AEC410 - (-15344);
    f0 = BITSF(LD32(v0-15344));
    goto L_088A11E8;
L_088A11E8:;
    v1 = D_08B2ACC0 - (-21312);
    ST32(v1-21312, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
L_088A11F4:;
    f0 = f1 / f0;
    v0 = D_08B2ACC0 - (-21312);
    ST32(v0-21312, FBITS(f0));
    return (rv_t){ v0, v1, f0 };
L_088A1204:;
    f0 = BITSF(LD32(v0-15348));
    goto L_088A11E8;
}

/* 088A120C */
rv_t func_088A120C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_088A120C:;
    v0 = D_08B2ACBD - (-21315);
    ST8(v0-21315, 0);
    v0 = D_08B2ACC4 - (-21308);
    cnd_ = a1 != 0;
    ST32(v0-21308, a1);
    if (cnd_) { goto L_088A1230; }
    goto L_088A1220;
L_088A1220:;
    v0 = D_08AEC414 - (-15340);
    f0 = BITSF(LD32(v0-15340));
    v1 = D_08B2ACC0 - (-21312);
    ST32(v1-21312, FBITS(f0));
    goto L_088A1230;
L_088A1230:;
    v0 = D_08B2ACC8 - (-21304);
    ST32(v0-21304, a2);
    v1 = D_08B2ACCC - (-21300);
    v0 = 0 + 0;
    ST32(v1-21300, a3);
    return (rv_t){ v0, v1, f0 };
}

/* 088A1248 */
u32 func_088A1248(void)
{
    u32 v0 = 0;
L_088A1248:;
    v0 = 0 + 0;
    return v0;
}

/* 088A1250 */
void func_088A1250(void)
{
    u32 v0 = 0;
L_088A1250:;
    v0 = 0 + 0;
    return;
}

/* 088A1258 */
void func_088A1258(void)
{
L_088A1258:;
    return;
}

/* 088A1260 */
void func_088A1260(void)
{
L_088A1260:;
    return;
}

/* 088A1268 */
u32 func_088A1268(void)
{
    u32 v0 = 0;
L_088A1268:;
    v0 = 0 + 0;
    return v0;
}

/* 088A1270 */
u64 func_088A1270(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1270:;
    sp = sp - 16;
    v0 = func_08A624B0();
    goto L_088A1280;
L_088A1280:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v1 = D_08AD6A54 - (27220);
    if (cnd_) { goto L_088A12F0; }
    goto L_088A128C;
L_088A128C:;
    v0 = D_08B1D2D0 - (-11568);
    v0 = v0 - 11568;
    v1 = v1 + 27220;
    a0 = LDU32(v1);
    a1 = LDU32(v1+4);
    a2 = LDU32(v1+8);
    a3 = LDU32(v1+12);
    STU32(v0, a0);
    STU32(v0+4, a1);
    STU32(v0+8, a2);
    STU32(v0+12, a3);
    a0 = (u32)(s32)LD_S8(v1+16);
    a1 = (u32)(s32)LD_S8(v1+17);
    a2 = (u32)(s32)LD_S8(v1+18);
    ST8(v0+16, a0);
    ST8(v0+17, a1);
    ST8(v0+18, a2);
    goto L_088A12F0;
L_088A12F0:;
    v0 = func_08A62460();
    goto L_088A12F8;
L_088A12F8:;
    a0 = D_08B1D078 - (-12168);
    a0 = a0 - 12168;
    a1 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1308;
L_088A1308:;
    v0 = func_08A6246C();
    goto L_088A1310;
L_088A1310:;
    a0 = D_08B1D178 - (-11912);
    a0 = a0 - 11912;
    a1 = v0 + 0;
    { u64 r_ = func_08A899E0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1320;
L_088A1320:;
    a0 = 0 + 0;
    a1 = 0 + 0;
    v0 = func_08A79948(a0, a1);
    goto L_088A132C;
L_088A132C:;
    v1 = v0 ^ 0x6;
    v1 = v1 < 0x1u;
    v0 = v0 < 0x1u;
    a0 = v0 | v1;
    v0 = a0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A1354; }
    goto L_088A1348;
L_088A1348:;
    v1 = 1;
    v0 = D_08B2ACD8 - (-21288);
    ST32(v0-21288, v1);
    goto L_088A1354;
L_088A1354:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A1360 */
u32 func_088A1360(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088A1360:;
    sp = sp - 64;
    s0 = D_08B2ACD8 - (-21288);
    a1 = 0 + 0;
    v1 = LD32(s0-21288);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088A13A8; }
    goto L_088A137C;
L_088A137C:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_088A13BC; }
    goto L_088A1388;
L_088A1388:;
    v0 = func_08A7A418(t1, t2, t3);
    goto L_088A1390;
L_088A1390:;
    v1 = LD32(s0-21288);
    v0 = v0 ^ 0x1;
    v0 = v0 < 0x1u;
    if (v0 == 0) v1 = 0;
    ST32(s0-21288, v1);
    a1 = v0 + 0;
    goto L_088A13A8;
L_088A13A8:;
    v0 = a1 + 0;
    sp = sp + 64;
    return v0;
L_088A13BC:;
    v0 = func_08A79B40(t1, t2, t3);
    goto L_088A13C4;
L_088A13C4:;
    v1 = v0 + 0;
    v0 = 6;
    cnd_ = v1 == v0;
    a1 = 1;
    if (cnd_) { goto L_088A13A8; }
    goto L_088A13D4;
L_088A13D4:;
    a0 = 0 + 0;
    cnd_ = v1 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088A13E8; }
    goto L_088A13E0;
L_088A13E0:;
    ST32(s0-21288, 0);
    goto L_088A13A8;
L_088A13E8:;
    v0 = func_08A79E50(a0, 0, 0, 0, 0, 0);
    goto L_088A13F0;
L_088A13F0:;
    a1 = D_08B2AC88 - (-21368);
    a2 = sp + 0;
    a0 = v0 + 0;
    a1 = a1 - 21368;
    v0 = func_08A79824(a0, a1, a2);
    goto L_088A1404;
L_088A1404:;
    v1 = D_08B15FAC - (24492);
    a1 = LD32(v1+24492);
    a3 = ((u32)(uintptr_t)func_088A1458) - (5208);
    v0 = 2;
    a3 = a3 + 5208;
    a0 = 0 + 0;
    a2 = sp + 0;
    t0 = 0 + 0;
    ST32(s0-21288, v0);
    func_08A7A320(a0, a1, a2, a3, t0);
    goto L_088A142C;
L_088A142C:;
    goto L_088A1388;
}

/* 088A1434 */
void func_088A1434(u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1434:;
    sp = sp - 16;
    func_08A79DC4(a2, a3, t0, t1, t2, t3);
    goto L_088A1444;
L_088A1444:;
    v0 = D_08B2ACD8 - (-21288);
    ST32(v0-21288, 0);
    sp = sp + 16;
    return;
}

/* 088A1458 */
rv_t func_088A1458(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1458:;
    sp = sp - 16;
    a0 = D_08AD6A68 - (27240);
    a0 = a0 + 27240;
    cnd_ = a2 == 0;
    a1 = a3 + 0;
    if (cnd_) { goto L_088A1494; }
    goto L_088A1470;
L_088A1470:;
    a0 = D_08AD6AA0 - (27296);
    a0 = a0 + 27296;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A147C;
L_088A147C:;
    v1 = 3;
    goto L_088A1480;
L_088A1480:;
    v0 = D_08B2ACD8 - (-21288);
    ST32(v0-21288, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A1494:;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A149C;
L_088A149C:;
    v1 = 4;
    goto L_088A1480;
}

/* 088A14A4 */
u32 func_088A14A4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 64);
L_088A14A4:;
    sp = sp - 64;
    s4 = a1 + 0;
    s1 = a2 & 0xffff;
    s0 = a0 & 0xff;
    v0 = func_08A62460();
    goto L_088A14D0;
L_088A14D0:;
    s3 = v0 + 0;
    v0 = func_08A6246C();
    goto L_088A14D8;
L_088A14D8:;
    s2 = v0 + 0;
    func_088A16AC();
    goto L_088A14E0;
L_088A14E0:;
    v0 = ((u32)(uintptr_t)func_088A18EC) - (6380);
    v0 = v0 + 6380;
    ST32(sp, v0);
    v1 = ((u32)(uintptr_t)func_088A19E8) - (6632);
    v0 = ((u32)(uintptr_t)func_088A1A90) - (6800);
    v1 = v1 + 6632;
    v0 = v0 + 6800;
    s0 = s0 ^ 0x1;
    ST32(sp+4, v1);
    t3 = ((u32)(uintptr_t)func_088A1744) - (5956);
    v1 = ((u32)(uintptr_t)func_088A1C4C) - (7244);
    ST32(sp+8, v0);
    v0 = ((u32)(uintptr_t)func_088A1C94) - (7316);
    a1 = s4 + 0;
    a0 = 0 + 0;
    v1 = v1 + 7244;
    v0 = v0 + 7316;
    a2 = s1 + 0;
    a3 = s3 + 0;
    t0 = s2 + 0;
    t3 = t3 + 5956;
    t1 = s0 + 0;
    t2 = s0 + 0;
    ST32(sp+12, v1);
    ST32(sp+16, v0);
    ST32(sp+20, 0);
    v0 = func_08A7CCB0(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_088A154C;
L_088A154C:;
    a0 = D_08AD6B20 - (27424);
    a1 = ((u32)(uintptr_t)func_088A1D28) - (7464);
    a0 = a0 + 27424;
    cnd_ = v0 == 0;
    a1 = a1 + 7464;
    if (cnd_) { goto L_088A1590; }
    goto L_088A1560;
L_088A1560:;
    { u64 r_ = func_088FB130(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1568;
L_088A1568:;
    a0 = 0 + 0;
    goto L_088A156C;
L_088A156C:;
    v0 = a0 + 0;
    sp = sp + 64;
    return v0;
L_088A1590:;
    a0 = 0 + 0;
    func_08A7CEE8(a0, a1);
    goto L_088A1598;
L_088A1598:;
    a1 = ((u32)(uintptr_t)func_088A1CF0) - (7408);
    a1 = a1 + 7408;
    cnd_ = s0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A15E4; }
    goto L_088A15A8;
L_088A15A8:;
    a1 = ((u32)(uintptr_t)func_088A1D30) - (7472);
    goto L_088A15AC;
L_088A15AC:;
    a0 = 0 + 0;
    a1 = a1 + 7472;
    func_08A7CF00(a0, a1);
    goto L_088A15B8;
L_088A15B8:;
    v1 = 1;
    v0 = D_08B2ACDC - (-21284);
    ST8(v0-21284, v1);
    v0 = D_08B2ACDD - (-21283);
    v1 = D_08B2ACE0 - (-21280);
    ST8(v0-21283, 0);
    v0 = D_08B2ACE4 - (-21276);
    a0 = 1;
    ST32(v1-21280, 0);
    ST16(v0-21276, 0);
    goto L_088A156C;
L_088A15E4:;
    func_08A7CED0(a0, a1);
    goto L_088A15EC;
L_088A15EC:;
    a1 = ((u32)(uintptr_t)func_088A1D30) - (7472);
    goto L_088A15AC;
}

/* 088A15F4 */
void func_088A15F4(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A15F4:;
    sp = sp - 16;
    s0 = D_08B2ACDC - (-21284);
    a0 = 0 + 0;
    v0 = LD_U8(s0-21284);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A1634; }
    goto L_088A1610;
L_088A1610:;
    ST8(s0-21284, 0);
    goto L_088A1614;
L_088A1614:;
    v0 = D_08B2ACE0 - (-21280);
    v1 = D_08B2ACE4 - (-21276);
    ST32(v0-21280, 0);
    ST16(v1-21276, 0);
    sp = sp + 16;
    return;
L_088A1634:;
    func_08A7D1A8(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A163C;
L_088A163C:;
    ST8(s0-21284, 0);
    goto L_088A1614;
}

/* 088A1644 */
void func_088A1644(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1644:;
    v0 = D_08B2ACDC - (-21284);
    v1 = LD_U8(v0-21284);
    sp = sp - 16;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A1668; }
    goto L_088A165C;
L_088A165C:;
    goto L_088A1660;
L_088A1660:;
    sp = sp + 16;
    return;
L_088A1668:;
    func_08A7CF18(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A1670;
L_088A1670:;
    goto L_088A1660;
}

/* 088A1678 */
void func_088A1678(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1678:;
    v0 = D_08B2ACDC - (-21284);
    v1 = LD_U8(v0-21284);
    sp = sp - 16;
    cnd_ = v1 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A169C; }
    goto L_088A1690;
L_088A1690:;
    goto L_088A1694;
L_088A1694:;
    sp = sp + 16;
    return;
L_088A169C:;
    func_08A7D130(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A16A4;
L_088A16A4:;
    goto L_088A1694;
}

/* 088A16AC */
void func_088A16AC(void)
{
    u32 v0 = 0, a0 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A16AC:;
    a1 = D_08AD6B48 - (27464);
    sp = sp - 16;
    a1 = a1 + 27464;
    a0 = 50;
    s1 = 0 + 0;
    func_08A7EA84(a0, a1);
    goto L_088A16D4;
L_088A16D4:;
    a1 = D_08AD6B50 - (27472);
    a1 = a1 + 27472;
    a0 = 51;
    func_08A7EA84(a0, a1);
    goto L_088A16E4;
L_088A16E4:;
    v0 = func_08A62798();
    goto L_088A16EC;
L_088A16EC:;
    cnd_ = v0 != 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088A170C; }
    goto L_088A16F4;
L_088A16F4:;
    goto L_088A16FC;
L_088A16FC:;
    sp = sp + 16;
    return;
L_088A170C:;
    a0 = s1 + 0;
    v0 = func_08A6274C(a0);
    goto L_088A1714;
L_088A1714:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    v0 = func_08A6276C(a0);
    goto L_088A1720;
L_088A1720:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    s1 = s1 + 1;
    func_08A7EA84(a0, a1);
    goto L_088A1730;
L_088A1730:;
    v0 = s1 < s2;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A170C; }
    goto L_088A173C;
L_088A173C:;
    goto L_088A16FC;
}

/* 088A1744 */
rv_t func_088A1744(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088A1744:;
    sp = sp - 272;
    s1 = a1 + 0;
    s0 = a0 + 0;
    { u64 r_ = func_08A627A0(a0, a1, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1760;
L_088A1760:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A17B0; }
    goto L_088A1768;
L_088A1768:;
    v0 = s0 < 0x34u;
    cnd_ = v0 == 0;
    v1 = D_08AD6B64 - (27492);
    if (cnd_) { goto L_088A18BC; }
    goto L_088A1774;
L_088A1774:;
    v0 = s0 << 2;
    v1 = v1 + 27492;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A178Cu: goto L_088A178C; case 0x088A17C0u: goto L_088A17C0; case 0x088A17ECu: goto L_088A17EC; case 0x088A17FCu: goto L_088A17FC; case 0x088A180Cu: goto L_088A180C; case 0x088A1828u: goto L_088A1828; case 0x088A183Cu: goto L_088A183C; case 0x088A1848u: goto L_088A1848; case 0x088A186Cu: goto L_088A186C; case 0x088A187Cu: goto L_088A187C; case 0x088A188Cu: goto L_088A188C; case 0x088A189Cu: goto L_088A189C; case 0x088A18B0u: goto L_088A18B0; case 0x088A18BCu: goto L_088A18BC; case 0x088A18CCu: goto L_088A18CC; case 0x088A18DCu: goto L_088A18DC; default: rs_break(0, 0x088a1784); }
L_088A178C:;
    a0 = D_08B16040 - (24640);
    a0 = a0 + 24640;
    goto L_088A1794;
L_088A1794:;
    a1 = sp + 0;
    func_08A6BAFC(a0, a1);
    goto L_088A179C;
L_088A179C:;
    a0 = s1 + 0;
    goto L_088A17A0;
L_088A17A0:;
    a1 = sp + 0;
    goto L_088A17A4;
L_088A17A4:;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A17AC;
L_088A17AC:;
    goto L_088A17B0;
L_088A17B0:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_088A17C0:;
    v0 = func_0889FD70();
    goto L_088A17C8;
L_088A17C8:;
    a1 = D_08AD6B5C - (27484);
    a1 = a1 + 27484;
    t0 = v0 + 0;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A17E4;
L_088A17E4:;
    a0 = s1 + 0;
    goto L_088A17A0;
L_088A17EC:;
    v0 = func_08A624B8();
    goto L_088A17F4;
L_088A17F4:;
    a0 = v0 + 0;
    goto L_088A1794;
L_088A17FC:;
    v0 = func_08A62508();
    goto L_088A1804;
L_088A1804:;
    a0 = v0 + 0;
    goto L_088A1794;
L_088A180C:;
    v0 = D_08B2BB84 - (-17532);
    a1 = LD32(v0-17532);
    goto L_088A1814;
L_088A1814:;
    a0 = s1 + 0;
    goto L_088A1818;
L_088A1818:;
    { u64 r_ = func_08A7D28C(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1820;
L_088A1820:;
    goto L_088A17B0;
L_088A1828:;
    v0 = func_08A62530();
    goto L_088A1830;
L_088A1830:;
    a0 = s1 + 0;
    goto L_088A1834;
L_088A1834:;
    a1 = v0 + 0;
    goto L_088A1818;
L_088A183C:;
    v0 = D_08B2BB7C - (-17540);
    a1 = LD32(v0-17540);
    goto L_088A1814;
L_088A1848:;
    v0 = func_08A62528();
    goto L_088A1850;
L_088A1850:;
    v1 = D_08B15FB0 - (24496);
    v0 = v0 << 2;
    v1 = v1 + 24496;
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = s1 + 0;
    goto L_088A17A4;
L_088A186C:;
    v0 = func_08A62558();
    goto L_088A1874;
L_088A1874:;
    a0 = s1 + 0;
    goto L_088A1834;
L_088A187C:;
    v0 = func_08A62560();
    goto L_088A1884;
L_088A1884:;
    a0 = s1 + 0;
    goto L_088A1834;
L_088A188C:;
    v0 = func_08A6256C();
    goto L_088A1894;
L_088A1894:;
    a0 = s1 + 0;
    goto L_088A1834;
L_088A189C:;
    v0 = D_08B2AE94 - (-20844);
    a1 = LD32(v0-20844);
    a0 = s1 + 0;
    a1 = 0 < a1;
    goto L_088A1818;
L_088A18B0:;
    v0 = D_08B15FCC - (24524);
    a1 = LD32(v0+24524);
    goto L_088A1814;
L_088A18BC:;
    a1 = D_08AD6B60 - (27488);
    a0 = s1 + 0;
    a1 = a1 + 27488;
    goto L_088A17A4;
L_088A18CC:;
    v0 = func_08A62720();
    goto L_088A18D4;
L_088A18D4:;
    a0 = s1 + 0;
    goto L_088A1834;
L_088A18DC:;
    v0 = func_08A62740();
    goto L_088A18E4;
L_088A18E4:;
    a0 = s1 + 0;
    goto L_088A1834;
}

/* 088A18EC */
rv_t func_088A18EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088A18EC:;
    sp = sp - 272;
    v0 = D_08B2BB84 - (-17532);
    s1 = a2 + 0;
    v1 = LD32(v0-17532);
    v1 = a1 < v1;
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088A19A8; }
    goto L_088A1914;
L_088A1914:;
    a0 = a1 + 0;
    v0 = func_088AD218(a0);
    goto L_088A191C;
L_088A191C:;
    a1 = v0 + 0;
    v0 = 999;
    cnd_ = a1 == v0;
    if (cnd_) { a1 = D_08AD6B60 - (27488); goto L_088A19AC; }
    goto L_088A192C;
L_088A192C:;
    a0 = s0 - 21;
    v0 = a0 < 0x6u;
    cnd_ = v0 == 0;
    v1 = D_08AD6C34 - (27700);
    if (cnd_) { goto L_088A19A8; }
    goto L_088A193C;
L_088A193C:;
    v0 = a0 << 2;
    v1 = v1 + 27700;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A1954u: goto L_088A1954; case 0x088A198Cu: goto L_088A198C; case 0x088A19A8u: goto L_088A19A8; case 0x088A19B8u: goto L_088A19B8; case 0x088A19C8u: goto L_088A19C8; case 0x088A19D8u: goto L_088A19D8; default: rs_break(0, 0x088a194c); }
L_088A1954:;
    a0 = a1 + 0;
    v0 = func_088AD558(a0);
    goto L_088A195C;
L_088A195C:;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_08A6BAFC(a0, a1);
    goto L_088A1968;
L_088A1968:;
    a0 = s1 + 0;
    a1 = sp + 0;
    goto L_088A1970;
L_088A1970:;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1978;
L_088A1978:;
    goto L_088A197C;
L_088A197C:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_088A198C:;
    a0 = a1 + 0;
    v0 = func_08A625AC(a0);
    goto L_088A1994;
L_088A1994:;
    a0 = s1 + 0;
    goto L_088A1998;
L_088A1998:;
    a1 = v0 + 0;
    { u64 r_ = func_08A7D28C(a0, a1, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A19A0;
L_088A19A0:;
    goto L_088A197C;
L_088A19A8:;
    a1 = D_08AD6B60 - (27488);
    goto L_088A19AC;
L_088A19AC:;
    a0 = s1 + 0;
    a1 = a1 + 27488;
    goto L_088A1970;
L_088A19B8:;
    a0 = a1 + 0;
    v0 = func_088AD288(a0);
    goto L_088A19C0;
L_088A19C0:;
    a0 = s1 + 0;
    goto L_088A1998;
L_088A19C8:;
    a0 = a1 + 0;
    v0 = func_08A62670(a0);
    goto L_088A19D0;
L_088A19D0:;
    a0 = s1 + 0;
    goto L_088A1998;
L_088A19D8:;
    a0 = a1 + 0;
    v0 = func_08A62638(a0);
    goto L_088A19E0;
L_088A19E0:;
    a0 = s1 + 0;
    goto L_088A1998;
}

/* 088A19E8 */
rv_t func_088A19E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088A19E8:;
    sp = sp - 272;
    s2 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = func_08A62530();
    goto L_088A1A0C;
L_088A1A0C:;
    v0 = (s32)s0 < (s32)v0;
    a1 = D_08AD6B60 - (27488);
    a0 = s1 + 0;
    cnd_ = v0 == 0;
    a1 = a1 + 27488;
    if (cnd_) { goto L_088A1A40; }
    goto L_088A1A20;
L_088A1A20:;
    v0 = 28;
    cnd_ = s2 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A1A70; }
    goto L_088A1A2C;
L_088A1A2C:;
    v0 = 29;
    cnd_ = s2 == v0;
    a1 = D_08AD6B60 - (27488);
    if (cnd_) { goto L_088A1A60; }
    goto L_088A1A38;
L_088A1A38:;
    a0 = s1 + 0;
    a1 = a1 + 27488;
    goto L_088A1A40;
L_088A1A40:;
    { u64 r_ = func_08A7D2CC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1A48;
L_088A1A48:;
    goto L_088A1A4C;
L_088A1A4C:;
    sp = sp + 272;
    return (rv_t){ v0, v1, f0 };
L_088A1A60:;
    v0 = func_08A626B0();
    goto L_088A1A68;
L_088A1A68:;
    goto L_088A1A4C;
L_088A1A70:;
    v0 = func_08A626B8(a0);
    goto L_088A1A78;
L_088A1A78:;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_08A6BAFC(a0, a1);
    goto L_088A1A84;
L_088A1A84:;
    a0 = s1 + 0;
    a1 = sp + 0;
    goto L_088A1A40;
}

/* 088A1A90 */
rv_t func_088A1A90(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1A90:;
    sp = sp - 16;
    v0 = 1;
    s0 = a1 + 0;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088A1C10; }
    goto L_088A1AB0;
L_088A1AB0:;
    v0 = (s32)a0 < 2;
    cnd_ = v0 != 0;
    v0 = 2;
    if (cnd_) { goto L_088A1AFC; }
    goto L_088A1ABC;
L_088A1ABC:;
    cnd_ = a0 == v0;
    if (cnd_) { a1 = 28; goto L_088A1ADC; }
    goto L_088A1AC4;
L_088A1AC4:;
    goto L_088A1AC8;
L_088A1AC8:;
    goto L_088A1ACC;
L_088A1ACC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A1ADC:;
    a0 = s0 + 0;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1AE4;
L_088A1AE4:;
    a0 = s0 + 0;
    a1 = 29;
    goto L_088A1AEC;
L_088A1AEC:;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1AF4;
L_088A1AF4:;
    goto L_088A1AC8;
L_088A1AFC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A1AC8; }
    goto L_088A1B04;
L_088A1B04:;
    a1 = 1;
    a0 = s0 + 0;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B10;
L_088A1B10:;
    a0 = s0 + 0;
    a1 = 3;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B1C;
L_088A1B1C:;
    a0 = s0 + 0;
    a1 = 4;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B28;
L_088A1B28:;
    a0 = s0 + 0;
    a1 = 5;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B34;
L_088A1B34:;
    a0 = s0 + 0;
    a1 = 6;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B40;
L_088A1B40:;
    a0 = s0 + 0;
    a1 = 8;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B4C;
L_088A1B4C:;
    a0 = s0 + 0;
    a1 = 9;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B58;
L_088A1B58:;
    a0 = s0 + 0;
    a1 = 10;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B64;
L_088A1B64:;
    a0 = s0 + 0;
    a1 = 11;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B70;
L_088A1B70:;
    a0 = s0 + 0;
    a1 = 12;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B7C;
L_088A1B7C:;
    a0 = s0 + 0;
    a1 = 13;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B88;
L_088A1B88:;
    a0 = s0 + 0;
    a1 = 16;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1B94;
L_088A1B94:;
    a0 = s0 + 0;
    a1 = 19;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1BA0;
L_088A1BA0:;
    v1 = D_08B15FCC - (24524);
    a0 = LD32(v1+24524);
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A1BBC; }
    goto L_088A1BB4;
L_088A1BB4:;
    a1 = 20;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1BBC;
L_088A1BBC:;
    a1 = 50;
    a0 = s0 + 0;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1BC8;
L_088A1BC8:;
    a0 = s0 + 0;
    a1 = 51;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1BD4;
L_088A1BD4:;
    s1 = 0 + 0;
    v0 = func_08A62798();
    goto L_088A1BDC;
L_088A1BDC:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_088A1AC4; }
    goto L_088A1BE4;
L_088A1BE4:;
    a0 = s1 + 0;
    v0 = func_08A6274C(a0);
    goto L_088A1BEC;
L_088A1BEC:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    s1 = s1 + 1;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1BFC;
L_088A1BFC:;
    v1 = s1 < s2;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088A1BE4; }
    goto L_088A1C08;
L_088A1C08:;
    goto L_088A1ACC;
L_088A1C10:;
    a0 = a1 + 0;
    a1 = 21;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1C1C;
L_088A1C1C:;
    a0 = s0 + 0;
    a1 = 22;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1C28;
L_088A1C28:;
    a0 = s0 + 0;
    a1 = 26;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1C34;
L_088A1C34:;
    a0 = s0 + 0;
    a1 = 24;
    { u64 r_ = func_08A7D254(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1C40;
L_088A1C40:;
    a0 = s0 + 0;
    a1 = 25;
    goto L_088A1AEC;
}

/* 088A1C4C */
rv_t func_088A1C4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1C4C:;
    sp = sp - 16;
    v0 = 1;
    cnd_ = a0 == v0;
    if (cnd_) { goto L_088A1C88; }
    goto L_088A1C5C;
L_088A1C5C:;
    v0 = 2;
    cnd_ = a0 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A1C78; }
    goto L_088A1C68;
L_088A1C68:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A1C78:;
    v0 = func_08A62530();
    goto L_088A1C80;
L_088A1C80:;
    v1 = v0 + 0;
    goto L_088A1C68;
L_088A1C88:;
    v0 = D_08B2BB84 - (-17532);
    v1 = LD32(v0-17532);
    goto L_088A1C68;
}

/* 088A1C94 */
rv_t func_088A1C94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1C94:;
    sp = sp - 16;
    v0 = a0 + 0;
    a0 = D_08AD6C4C - (27724);
    a2 = a1 + 0;
    s0 = D_08B2ACDD - (-21283);
    a1 = v0 + 0;
    v0 = 0 < v0;
    ST8(s0-21283, v0);
    a0 = a0 + 27724;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1CC4;
L_088A1CC4:;
    v0 = LD_U8(s0-21283);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A1CE4; }
    goto L_088A1CD0;
L_088A1CD0:;
    v0 = 18;
    v1 = D_08B2BB90 - (-17520);
    a0 = D_08B2BB72 - (-17550);
    ST32(v1-17520, v0);
    ST8(a0-17550, 0);
    goto L_088A1CE4;
L_088A1CE4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A1CF0 */
rv_t func_088A1CF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1CF0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = D_08AD6C6C - (27756);
    a1 = s0 + 0;
    a0 = a0 + 27756;
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1D10;
L_088A1D10:;
    a0 = s0 + 0;
    { rv_t r_ = func_088AA68C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A1D18;
L_088A1D18:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A1D28 */
rv_t func_088A1D28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_088A1D28:;
    return (rv_t){ v0, v1, f0 };
}

/* 088A1D30 */
rv_t func_088A1D30(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1D30:;
    t3 = a1 & 0xffff;
    t2 = a0 + 0;
    t0 = a0 >> 24;
    a1 = a0 & 0xff;
    a2 = (a0 >> 8) & 0xff;
    a3 = (a0 >> 16) & 0xff;
    a0 = D_08AD6C84 - (27780);
    sp = sp - 16;
    v0 = D_08B2ACE0 - (-21280);
    v1 = D_08B2ACE4 - (-21276);
    a0 = a0 + 27780;
    t1 = t3 + 0;
    ST32(v0-21280, t2);
    ST16(v1-21276, t3);
    { u64 r_ = func_088FB130(a0, a1, a2, a3, t0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1D70;
L_088A1D70:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A1D7C */
void func_088A1D7C(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1D7C:;
    sp = sp - 16;
    s0 = D_08AD6D28 - (27944);
    s0 = s0 + 27944;
    a1 = D_08B2ACF1 - (-21263);
    a1 = a1 - 21263;
    a0 = s0 + 0;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A1DA8;
L_088A1DA8:;
    a0 = s0 + 0;
    func_088978FC(a0, 0, 0, 0);
    goto L_088A1DB0;
L_088A1DB0:;
    sp = sp + 16;
    return;
}

/* 088A1DC0 */
void func_088A1DC0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088A1DC0:;
    sp = sp - 48;
    s5 = D_08B2ACE8 - (-21272);
    v0 = LD_U8(s5-21272);
    s4 = a0 & 0xff;
    s3 = a2 + 0;
    s2 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A1E78; }
    goto L_088A1DF8;
L_088A1DF8:;
    cnd_ = s4 == 0;
    v1 = 1;
    if (cnd_) { goto L_088A1E08; }
    goto L_088A1E00;
L_088A1E00:;
    v0 = D_08C320DC - (8412);
    ST32(v0+8412, v1);
    goto L_088A1E08;
L_088A1E08:;
    func_088A16AC();
    goto L_088A1E10;
L_088A1E10:;
    v0 = func_08A62460();
    goto L_088A1E18;
L_088A1E18:;
    s0 = v0 + 0;
    v0 = func_08A6246C();
    goto L_088A1E20;
L_088A1E20:;
    s1 = v0 + 0;
    v0 = func_0889FD70();
    goto L_088A1E28;
L_088A1E28:;
    t3 = ((u32)(uintptr_t)func_088A20E0) - (8416);
    a0 = s0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = v0 + 0;
    t0 = s2 + 0;
    t3 = t3 + 8416;
    t1 = 1;
    t2 = 0 + 0;
    ST32(sp, 0);
    v0 = func_08A80828(a0, a1, a2, a3, t0, t1, t2, t3, sp);
    goto L_088A1E54;
L_088A1E54:;
    v1 = D_08B2ACEC - (-21268);
    a0 = s3 + 0;
    a1 = 0 + 0;
    cnd_ = v0 != 0;
    ST32(v1-21268, v0);
    if (cnd_) { goto L_088A1E9C; }
    goto L_088A1E68;
L_088A1E68:;
    v0 = D_08B2AE20 - (-20960);
    goto L_088A1E6C;
L_088A1E6C:;
    v1 = D_08B2AE24 - (-20956);
    ST32(v0-20960, 0);
    ST8(v1-20956, 0);
    goto L_088A1E78;
L_088A1E78:;
    sp = sp + 48;
    return;
L_088A1E9C:;
    v0 = D_08B2ACF0 - (-21264);
    ST8(v0-21264, s4);
    v1 = 1;
    v0 = D_08B2ACF1 - (-21263);
    ST8(s5-21272, v1);
    ST8(v0-21263, 0);
    func_088A22D4(a0, a1, 0, 0, 0);
    goto L_088A1EB8;
L_088A1EB8:;
    v0 = D_08B2AE20 - (-20960);
    goto L_088A1E6C;
}

/* 088A1EC0 */
u64 func_088A1EC0(u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1EC0:;
    sp = sp - 16;
    s0 = D_08B2ACE8 - (-21272);
    v0 = LD_U8(s0-21272);
    s1 = D_08B2ACEC - (-21268);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A1EF4; }
    goto L_088A1EE0;
L_088A1EE0:;
    goto L_088A1EE4;
L_088A1EE4:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088A1EF4:;
    a0 = LD32(s1-21268);
    v0 = D_08B2AE20 - (-20960);
    v1 = D_08B2AE24 - (-20956);
    ST32(v0-20960, 0);
    ST8(v1-20956, 0);
    func_08A80934(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A1F0C;
L_088A1F0C:;
    ST32(s1-21268, 0);
    ST8(s0-21272, 0);
    { u64 r_ = func_088A2388(0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A1F18;
L_088A1F18:;
    goto L_088A1EE4;
}

/* 088A1F20 */
void func_088A1F20(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A1F20:;
    sp = sp - 16;
    s0 = D_08B2ACEC - (-21268);
    v0 = LD32(s0-21268);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A1F50; }
    goto L_088A1F38;
L_088A1F38:;
    v0 = D_08B2AE24 - (-20956);
    v1 = LD_U8(v0-20956);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088A1F60; }
    goto L_088A1F48;
L_088A1F48:;
    a0 = LD32(s0-21268);
    { rv_t r_ = func_08A80C3C(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A1F50;
L_088A1F50:;
    sp = sp + 16;
    return;
L_088A1F60:;
    { rv_t r_ = func_088A1F70(a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A1F68;
L_088A1F68:;
    goto L_088A1F48;
}

/* 088A1F70 */
rv_t func_088A1F70(u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0, t4 = 0, t5 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A1F70:;
    sp = sp - 32;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    if (cnd_) {  goto L_088A1FE4; }
    goto L_088A1F8C;
L_088A1F8C:;
    a1 = D_08B2AE24 - (-20956);
    a0 = LD_U8(a1-20956);
    cnd_ = a0 != 0;
    a2 = D_08B2AE20 - (-20960);
    if (cnd_) { goto L_088A1FB0; }
    goto L_088A1F9C;
L_088A1F9C:;
    v0 = D_08B2ACF1 - (-21263);
    v1 = LD_U8(v0-21263);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088A1FE4; }
    goto L_088A1FAC;
L_088A1FAC:;
    a2 = D_08B2AE20 - (-20960);
    goto L_088A1FB0;
L_088A1FB0:;
    v0 = LD32(a2-20960);
    v1 = D_08B285B0 - (-31312);
    v1 = LD32(v1-31312);
    v0 = v0 + 5000;
    v0 = v1 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A1FF0; }
    goto L_088A1FCC;
L_088A1FCC:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_088A1FE4; }
    goto L_088A1FD4;
L_088A1FD4:;
    v1 = 1;
    v0 = D_08B2ACF1 - (-21263);
    ST8(v0-21263, v1);
    ST8(a1-20956, v1);
    goto L_088A1FE4;
L_088A1FE4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088A1FF0:;
    cnd_ = a0 != 0;
    if (cnd_) { ST8(a1-20956, 0); goto L_088A1FF8; }
    goto L_088A1FF8;
L_088A1FF8:;
    s0 = D_08B2ACEC - (-21268);
    a0 = LD32(s0-21268);
    ST32(a2-20960, v1);
    func_08A80C9C(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A2008;
L_088A2008:;
    func_088A2374();
    goto L_088A2010;
L_088A2010:;
    v0 = D_08B2ACF0 - (-21264);
    a0 = LD_U8(v0-21264);
    v1 = 1;
    v0 = D_08B2ACF1 - (-21263);
    cnd_ = a0 != 0;
    ST8(v0-21263, v1);
    if (cnd_) { goto L_088A20C4; }
    goto L_088A2028;
L_088A2028:;
    v0 = D_08B2ACF8 - (-21256);
    t0 = LD32(v0-21256);
    cnd_ = t0 == 0;
    v0 = D_08B2AD00 - (-21248);
    if (cnd_) { goto L_088A2068; }
    goto L_088A2038;
L_088A2038:;
    t1 = LD32(v0-21248);
    v1 = D_08B2AE08 - (-20984);
    v0 = D_08B2ACF4 - (-21260);
    t2 = LD32(v1-20984);
    a0 = LD32(s0-21268);
    a3 = LD32(v0-21260);
    a1 = 1;
    a2 = 1;
    goto L_088A2058;
L_088A2058:;
    { rv_t r_ = func_08A80B08(a0, a1, a2, a3, t0, t1, t2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2060;
L_088A2060:;
    goto L_088A1FE4;
L_088A2068:;
    t1 = LD32(v0-21248);
    v0 = D_08AD6D6C - (28012);
    v1 = D_08B2AE08 - (-20984);
    v0 = v0 + 28012;
    t2 = LD32(v1-20984);
    a0 = LD32(s0-21268);
    v1 = LDU32(v0);
    t3 = LDU32(v0+4);
    t4 = (u32)(s32)LD_S8(v0+8);
    t5 = (u32)(s32)LD_S8(v0+9);
    STU32(sp, v1);
    STU32(sp+4, t3);
    ST8(sp+8, t4);
    ST8(sp+9, t5);
    a1 = 1;
    a2 = 1;
    a3 = sp + 0;
    t0 = 10;
    goto L_088A2058;
L_088A20C4:;
    a0 = LD32(s0-21268);
    a1 = 1;
    a2 = 3658;
    a3 = 3708;
    { rv_t r_ = func_08A80B28(a0, a1, a2, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A20D8;
L_088A20D8:;
    goto L_088A1FE4;
}

/* 088A20E0 */
rv_t func_088A20E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A20E0:;
    sp = sp - 16;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    s0 = a2 + 0;
    if (cnd_) { goto L_088A213C; }
    goto L_088A20FC;
L_088A20FC:;
    v0 = a1 < 0x7u;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_088A2140; }
    goto L_088A2108;
L_088A2108:;
    v1 = D_08AD6D78 - (28024);
    v0 = a1 << 2;
    v1 = v1 + 28024;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A2124u: goto L_088A2124; case 0x088A2134u: goto L_088A2134; case 0x088A213Cu: goto L_088A213C; case 0x088A214Cu: goto L_088A214C; case 0x088A215Cu: goto L_088A215C; default: rs_break(0, 0x088a211c); }
L_088A2124:;
    a0 = a2 + 0;
    v0 = func_08A7FCD0(a0);
    goto L_088A212C;
L_088A212C:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A2140; }
    goto L_088A2134;
L_088A2134:;
    a0 = s0 + 0;
    { u64 r_ = func_088A2414(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A213C;
L_088A213C:;
    goto L_088A2140;
L_088A2140:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A214C:;
    a0 = a2 + 0;
    { u64 r_ = func_088A2574(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2154;
L_088A2154:;
    goto L_088A2140;
L_088A215C:;
    v0 = D_08B15FD0 - (24528);
    a0 = LD32(v0+24528);
    v1 = D_08B2ACF1 - (-21263);
    v0 = 10;
    cnd_ = a0 == v0;
    ST8(v1-21263, 0);
    if (cnd_) { goto L_088A213C; }
    goto L_088A2174;
L_088A2174:;
    v0 = D_08B2ACF2 - (-21262);
    a1 = LD_U8(v0-21262);
    { u64 r_ = func_088A2188(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2180;
L_088A2180:;
    goto L_088A2140;
}

/* 088A2188 */
u64 func_088A2188(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2188:;
    sp = sp - 16;
    v0 = D_08B2ACE8 - (-21272);
    s2 = a1 & 0xff;
    v1 = LD_U8(v0-21272);
    cnd_ = v1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088A21CC; }
    goto L_088A21B0;
L_088A21B0:;
    v0 = D_08B2ACF1 - (-21263);
    a1 = LD_U8(v0-21263);
    v1 = D_08B15FD0 - (24528);
    v0 = D_08B2ACF2 - (-21262);
    ST32(v1+24528, a0);
    cnd_ = a1 == 0;
    ST8(v0-21262, s2);
    if (cnd_) { goto L_088A21E4; }
    goto L_088A21CC;
L_088A21CC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088A21E4:;
    s1 = D_08B2ACEC - (-21268);
    v0 = func_088A27D0(a0);
    goto L_088A21EC;
L_088A21EC:;
    v1 = D_08B15FD4 - (24532);
    v1 = v1 + 24532;
    a0 = s0 << 2;
    a0 = a0 + v1;
    a2 = LD32(a0);
    a0 = LD32(s1-21268);
    a3 = 3;
    a1 = 0 < s2;
    if (v0 == 0) a3 = 0;
    func_08A80D88(a0, a1, a2, a3, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_088A2214;
L_088A2214:;
    s0 = 0 + 0;
    func_088A2374();
    goto L_088A221C;
L_088A221C:;
    s2 = s1 + 0;
    goto L_088A2220;
L_088A2220:;
    a0 = LD32(s1-21268);
    v0 = func_08A80D6C(a0);
    goto L_088A2228;
L_088A2228:;
    v0 = (s32)s0 < (s32)v0;
    a1 = s0 + 0;
    cnd_ = v0 == 0;
    s0 = s0 + 1;
    if (cnd_) { goto L_088A21CC; }
    goto L_088A2238;
L_088A2238:;
    a0 = LD32(s2-21268);
    v0 = func_08A80D50(a0, a1);
    goto L_088A2240;
L_088A2240:;
    a0 = v0 + 0;
    { u64 r_ = func_088A2414(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2248;
L_088A2248:;
    goto L_088A2220;
}

/* 088A2250 */
u32 func_088A2250(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2250:;
    sp = sp - 16;
    v0 = D_08B2ACE8 - (-21272);
    v1 = LD_U8(v0-21272);
    cnd_ = v1 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A2274; }
    goto L_088A2268;
L_088A2268:;
    goto L_088A226C;
L_088A226C:;
    sp = sp + 16;
    return v0;
L_088A2274:;
    v0 = D_08B2ACEC - (-21268);
    a0 = LD32(v0-21268);
    v0 = func_08A80DA4(a0);
    goto L_088A2280;
L_088A2280:;
    goto L_088A226C;
}

/* 088A2288 */
void func_088A2288(u32 a0, u32 a1, u32 a2, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2288:;
    sp = sp - 16;
    v0 = D_08B2ACE8 - (-21272);
    v1 = a1 + 0;
    t0 = LD_U8(v0-21272);
    v1 = v1 & 0xffff;
    a3 = a2 + 0;
    a1 = a0 + 0;
    a2 = v1 + 0;
    cnd_ = t0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A22C0; }
    goto L_088A22B4;
L_088A22B4:;
    sp = sp + 16;
    return;
L_088A22C0:;
    v0 = D_08B2ACEC - (-21268);
    a0 = LD32(v0-21268);
    v0 = func_08A80BDC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A22CC;
L_088A22CC:;
    v0 = v0 < 0x1u;
    goto L_088A22B4;
}

/* 088A22D4 */
void func_088A22D4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A22D4:;
    sp = sp - 16;
    s2 = D_08B2ACFC - (-21252);
    v0 = LD_U8(s2-21252);
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    a0 = a0 << 2;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A2318; }
    goto L_088A2300;
L_088A2300:;
    goto L_088A2304;
L_088A2304:;
    sp = sp + 16;
    return;
L_088A2318:;
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2320;
L_088A2320:;
    v1 = D_08B2AE04 - (-20988);
    ST32(v1-20988, v0);
    v0 = D_08B2AE08 - (-20984);
    v1 = D_08B2AE0C - (-20980);
    ST32(v0-20984, s0);
    a0 = s0 + 0;
    v0 = D_08B2AE10 - (-20976);
    ST32(v1-20980, 0);
    ST32(v0-20976, 0);
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2348;
L_088A2348:;
    v1 = D_08B2AE14 - (-20972);
    ST32(v1-20972, v0);
    v0 = D_08B2AE1C - (-20964);
    v1 = 1;
    ST8(v0-20964, s1);
    v0 = D_08B2AE18 - (-20968);
    ST8(s2-21252, v1);
    ST32(v0-20968, 0);
    func_088A27DC();
    goto L_088A236C;
L_088A236C:;
    goto L_088A2304;
}

/* 088A2374 */
void func_088A2374(void)
{
    u32 v0 = 0, v1 = 0;
L_088A2374:;
    v0 = D_08B2AE0C - (-20980);
    v1 = D_08B2AE18 - (-20968);
    ST32(v0-20980, 0);
    ST32(v1-20968, 0);
    return;
}

/* 088A2388 */
u64 func_088A2388(u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a0 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2388:;
    sp = sp - 16;
    s1 = D_08B2ACFC - (-21252);
    v0 = LD_U8(s1-21252);
    s2 = D_08B2AE14 - (-20972);
    s0 = D_08B2AE04 - (-20988);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A23D4; }
    goto L_088A23B0;
L_088A23B0:;
    v0 = LD32(s0-20988);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A2404; }
    goto L_088A23BC;
L_088A23BC:;
    v0 = LD32(s2-20972);
    goto L_088A23C0;
L_088A23C0:;
    ST32(s0-20988, 0);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A23F4; }
    goto L_088A23CC;
L_088A23CC:;
    ST32(s2-20972, 0);
    goto L_088A23D0;
L_088A23D0:;
    ST8(s1-21252, 0);
    goto L_088A23D4;
L_088A23D4:;
    v0 = D_08B2AE0C - (-20980);
    ST32(v0-20980, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088A23F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A23FC;
L_088A23FC:;
    ST32(s2-20972, 0);
    goto L_088A23D0;
L_088A2404:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A240C;
L_088A240C:;
    v0 = LD32(s2-20972);
    goto L_088A23C0;
}

/* 088A2414 */
u64 func_088A2414(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2414:;
    sp = sp - 16;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_088A2448; }
    goto L_088A2434;
L_088A2434:;
    goto L_088A2438;
L_088A2438:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_088A2448:;
    v0 = func_08A7FCD0(a0);
    goto L_088A2450;
L_088A2450:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A2438; }
    goto L_088A2458;
L_088A2458:;
    s0 = D_08B2AE10 - (-20976);
    v0 = LD32(s0-20976);
    cnd_ = v0 == 0;
    a1 = D_08AD6CA8 - (27816);
    if (cnd_) { goto L_088A2484; }
    goto L_088A2468;
L_088A2468:;
    a0 = s1 + 0;
    v0 = func_08A80440(a0);
    goto L_088A2470;
L_088A2470:;
    v1 = LD32(s0-20976);
    v1 = (s32)v1 < (s32)v0;
    cnd_ = v1 != 0;
    if (cnd_) { goto L_088A2438; }
    goto L_088A2480;
L_088A2480:;
    a1 = D_08AD6CA8 - (27816);
    goto L_088A2484;
L_088A2484:;
    a1 = a1 + 27816;
    a0 = s1 + 0;
    a2 = (u32)-1;
    { rv_t r_ = func_08A7FBC8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2494;
L_088A2494:;
    s0 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = s0 == v0;
    a0 = D_08AD6D94 - (28052);
    if (cnd_) { goto L_088A2564; }
    goto L_088A24A4;
L_088A24A4:;
    v0 = func_0889FD70();
    goto L_088A24AC;
L_088A24AC:;
    cnd_ = s0 == v0;
    a0 = D_08AD6DC0 - (28096);
    if (cnd_) { goto L_088A24C8; }
    goto L_088A24B4;
L_088A24B4:;
    a0 = a0 + 28096;
    a1 = s0 + 0;
    { u64 r_ = func_088FB130(a0, a1, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A24C0;
L_088A24C0:;
    goto L_088A2438;
L_088A24C8:;
    t0 = D_08B2AE0C - (-20980);
    a0 = LD32(t0-20980);
    cnd_ = a0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088A250C; }
    goto L_088A24D8;
L_088A24D8:;
    v0 = D_08B2AE04 - (-20988);
    v1 = LD32(v0-20988);
    a2 = a0 + 0;
    v0 = LD32(v1);
    goto L_088A24E8;
L_088A24E8:;
    a1 = a1 + 1;
    a0 = a1 < a2;
    cnd_ = v0 == s1;
    v1 = v1 + 4;
    if (cnd_) { goto L_088A2434; }
    goto L_088A24F8;
L_088A24F8:;
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(v1); goto L_088A24E8; }
    goto L_088A2500;
L_088A2500:;
    v0 = 0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A2438; }
    goto L_088A250C;
L_088A250C:;
    v1 = D_08B2AE08 - (-20984);
    v0 = LD32(v1-20984);
    a3 = LD32(t0-20980);
    v0 = a3 < v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_088A2438; }
    goto L_088A2524;
L_088A2524:;
    a2 = D_08B2AE18 - (-20968);
    v0 = D_08B2AE14 - (-20972);
    v1 = D_08B2AE04 - (-20988);
    a1 = LD32(v1-20988);
    a0 = LD32(v0-20972);
    v0 = LD32(a2-20968);
    v1 = a3 << 2;
    v1 = v1 + a1;
    a0 = a0 + a3;
    v0 = v0 + 1;
    a1 = a3 + 1;
    ST32(a2-20968, v0);
    ST32(v1, s1);
    ST32(t0-20980, a1);
    ST8(a0, 0);
    goto L_088A2438;
L_088A2564:;
    a0 = a0 + 28052;
    { u64 r_ = func_088FB130(a0, 0, 0, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A256C;
L_088A256C:;
    goto L_088A2438;
}

/* 088A2574 */
u64 func_088A2574(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    int cnd_;
L_088A2574:;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088A25C4; }
    goto L_088A2584;
L_088A2584:;
    a2 = D_08B2AE0C - (-20980);
    v0 = LD32(a2-20980);
    v1 = 0 + 0;
    cnd_ = v0 == 0;
    a3 = a2 + 0;
    if (cnd_) { goto L_088A25C4; }
    goto L_088A2598;
L_088A2598:;
    v0 = D_08B2AE04 - (-20988);
    a1 = LD32(v0-20988);
    t0 = a1 + 0;
    goto L_088A25A4;
L_088A25A4:;
    v0 = LD32(a1);
    cnd_ = v0 == a0;
    v1 = v1 + 1;
    if (cnd_) { goto L_088A25CC; }
    goto L_088A25B0;
L_088A25B0:;
    v0 = LD32(a2-20980);
    a1 = a1 + 4;
    v0 = v1 < v0;
    cnd_ = v0 != 0;
    a3 = D_08B2AE0C - (-20980);
    if (cnd_) { goto L_088A25A4; }
    goto L_088A25C4;
L_088A25C4:;
    return (u64)v0 | ((u64)v1 << 32);
L_088A25CC:;
    v0 = LD32(a3-20980);
    v0 = v0 - 1;
    v1 = v0 << 2;
    v1 = v1 + t0;
    a0 = LD32(v1);
    ST32(a3-20980, v0);
    ST32(a1, a0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A25EC */
u32 func_088A25EC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_088A25EC:;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_088A2620; }
    goto L_088A25FC;
L_088A25FC:;
    v1 = D_08B2AE0C - (-20980);
    v0 = LD32(v1-20980);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = a0 << 2;
    if (cnd_) { goto L_088A2620; }
    goto L_088A2610;
L_088A2610:;
    v1 = D_08B2AE04 - (-20988);
    v0 = LD32(v1-20988);
    v0 = a1 + v0;
    a2 = LD32(v0);
    goto L_088A2620;
L_088A2620:;
    v0 = a2 + 0;
    return v0;
}

/* 088A2628 */
u32 func_088A2628(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2628:;
    sp = sp - 16;
    v0 = D_08B2AE04 - (-20988);
    a0 = a0 << 2;
    v1 = LD32(v0-20988);
    a1 = D_08AD6CB0 - (27824);
    a2 = D_08AD6DE8 - (28136);
    a0 = a0 + v1;
    a0 = LD32(a0);
    a1 = a1 + 27824;
    a2 = a2 + 28136;
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2658;
L_088A2658:;
    sp = sp + 16;
    return v0;
}

/* 088A2664 */
void func_088A2664(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 80);
L_088A2664:;
    sp = sp - 80;
    s1 = a2 + 0;
    s0 = a1 + 0;
    v0 = func_088A2628(a0, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_088A2680;
L_088A2680:;
    a0 = v0 + 0;
    a1 = sp + 0;
    func_08A6BB7C(a0, a1);
    goto L_088A268C;
L_088A268C:;
    a1 = D_08AD6DF4 - (28148);
    a0 = s0 + 0;
    a2 = s1 + 0;
    a1 = a1 + 28148;
    a3 = 1;
    t0 = sp + 0;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A26A8;
L_088A26A8:;
    sp = sp + 80;
    return;
}

/* 088A26BC */
u32 func_088A26BC(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A26BC:;
    sp = sp - 16;
    v0 = D_08B2AE04 - (-20988);
    a0 = a0 << 2;
    v1 = LD32(v0-20988);
    a1 = D_08AD6CBC - (27836);
    a2 = D_08AD6DE8 - (28136);
    a0 = a0 + v1;
    a0 = LD32(a0);
    a1 = a1 + 27836;
    a2 = a2 + 28136;
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A26EC;
L_088A26EC:;
    sp = sp + 16;
    return v0;
}

/* 088A26F8 */
u32 func_088A26F8(u32 a0, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A26F8:;
    sp = sp - 16;
    v0 = D_08B2AE04 - (-20988);
    a0 = a0 << 2;
    v1 = LD32(v0-20988);
    a1 = D_08AD6CC8 - (27848);
    a2 = D_08AD6DE8 - (28136);
    a0 = a0 + v1;
    a0 = LD32(a0);
    a1 = a1 + 27848;
    a2 = a2 + 28136;
    { rv_t r_ = func_08A7FB7C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2728;
L_088A2728:;
    sp = sp + 16;
    return v0;
}

/* 088A2734 */
u32 func_088A2734(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2734:;
    sp = sp - 16;
    v0 = D_08B2AE04 - (-20988);
    a0 = a0 << 2;
    v1 = LD32(v0-20988);
    a1 = D_08AD6CE4 - (27876);
    a1 = a1 + 27876;
    a0 = a0 + v1;
    a0 = LD32(a0);
    a2 = 0 + 0;
    { rv_t r_ = func_08A7FBC8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2760;
L_088A2760:;
    sp = sp + 16;
    return v0;
}

/* 088A276C */
u32 func_088A276C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A276C:;
    sp = sp - 16;
    v0 = D_08B2AE04 - (-20988);
    a0 = a0 << 2;
    v1 = LD32(v0-20988);
    a1 = D_08AD6CF0 - (27888);
    a1 = a1 + 27888;
    a0 = a0 + v1;
    a0 = LD32(a0);
    a2 = 0 + 0;
    { rv_t r_ = func_08A7FBC8(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2798;
L_088A2798:;
    sp = sp + 16;
    return v0;
}

/* 088A27A4 */
u32 func_088A27A4(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A27A4:;
    sp = sp - 16;
    v0 = D_08B2AE04 - (-20988);
    a0 = a0 << 2;
    v1 = LD32(v0-20988);
    a0 = a0 + v1;
    a0 = LD32(a0);
    v0 = func_08A80440(a0);
    goto L_088A27C4;
L_088A27C4:;
    sp = sp + 16;
    return v0;
}

/* 088A27D0 */
u32 func_088A27D0(u32 a0)
{
    u32 v0 = 0;
L_088A27D0:;
    v0 = a0 - 1;
    v0 = v0 < 0x3u;
    return v0;
}

/* 088A27DC */
void func_088A27DC(void)
{
    u32 v0 = 0, v1 = 0, a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A27DC:;
    a0 = D_08B2AD04 - (-21244);
    v1 = a0 - 21244;
    v0 = D_08B2AD00 - (-21248);
    sp = sp - 16;
    ST32(v0-21248, v1);
    v0 = D_08B2AE10 - (-20976);
    ST8(a0-21244, 0);
    ST32(v0-20976, 0);
    v0 = func_0889FD70();
    goto L_088A2804;
L_088A2804:;
    a2 = v0 + 0;
    a0 = 0 + 0;
    a1 = 0 + 0;
    func_088A28B0(a0, a1, a2);
    goto L_088A2814;
L_088A2814:;
    sp = sp + 16;
    return;
}

/* 088A2820 */
void func_088A2820(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2820:;
    sp = sp - 16;
    s2 = a0 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A283C;
L_088A283C:;
    s0 = v0 + 0;
    v0 = D_08B2AD04 - (-21244);
    s1 = v0 - 21244;
    a0 = s1 + 0;
    { u64 r_ = func_08A89AE4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2850;
L_088A2850:;
    v1 = v0 + 0;
    v0 = s0 + 5;
    if (v1 != 0) s0 = v0;
    s0 = v1 + s0;
    s0 = s0 < 0x100u;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A2884; }
    goto L_088A286C;
L_088A286C:;
    cnd_ = v1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_088A289C; }
    goto L_088A2874;
L_088A2874:;
    a0 = s1 + 0;
    goto L_088A2878;
L_088A2878:;
    a1 = s2 + 0;
    func_08A897C0(a0, a1);
    goto L_088A2880;
L_088A2880:;
    v0 = 1;
    goto L_088A2884;
L_088A2884:;
    sp = sp + 16;
    return;
L_088A289C:;
    a1 = D_08AD6E64 - (28260);
    a1 = a1 + 28260;
    func_08A897C0(a0, a1);
    goto L_088A28A8;
L_088A28A8:;
    a0 = s1 + 0;
    goto L_088A2878;
}

/* 088A28B0 */
void func_088A28B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088A28B0:;
    sp = sp - 272;
    v1 = D_08AD6E6C - (28268);
    v0 = D_08B15FD4 - (24532);
    v0 = v0 + 24532;
    a0 = a0 << 2;
    a1 = a1 << 2;
    a0 = a0 + v0;
    s2 = a2 + 0;
    a2 = 255;
    a3 = LD_U8(v1+28268);
    v1 = D_08B15FFC - (24572);
    v1 = v1 + 24572;
    a1 = a1 + v1;
    s0 = LD32(a0);
    s1 = LD32(a1);
    a0 = sp + 1;
    a1 = 0 + 0;
    ST8(sp, a3);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A290C;
L_088A290C:;
    a1 = D_08AD6F8C - (28556);
    t0 = s0 + 0;
    t1 = s1 + 0;
    t2 = s2 + 0;
    a1 = a1 + 28556;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A2930;
L_088A2930:;
    a0 = sp + 0;
    func_088A2820(a0);
    goto L_088A2938;
L_088A2938:;
    sp = sp + 272;
    return;
}

/* 088A2950 */
void func_088A2950(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[272] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 272);
L_088A2950:;
    sp = sp - 272;
    v0 = D_08AD6E6C - (28268);
    v1 = D_08B15FD4 - (24532);
    v1 = v1 + 24532;
    a0 = a0 << 2;
    a2 = a2 << 2;
    a1 = a1 << 2;
    a2 = a2 + v1;
    a0 = a0 + v1;
    a3 = LD_U8(v0+28268);
    v0 = D_08B15FFC - (24572);
    v0 = v0 + 24572;
    a1 = a1 + v0;
    s1 = LD32(a0);
    s2 = LD32(a2);
    s0 = LD32(a1);
    a0 = sp + 1;
    a1 = 0 + 0;
    a2 = 255;
    ST8(sp, a3);
    { u64 r_ = func_08A87F00(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A29B4;
L_088A29B4:;
    a1 = D_08AD6FA4 - (28580);
    t0 = s1 + 0;
    t1 = s0 + 0;
    t2 = s2 + 0;
    a1 = a1 + 28580;
    a0 = sp + 0;
    a2 = 256;
    a3 = 1;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A29D8;
L_088A29D8:;
    a0 = sp + 0;
    func_088A2820(a0);
    goto L_088A29E0;
L_088A29E0:;
    sp = sp + 272;
    return;
}

/* 088A29F8 */
void func_088A29F8(void)
{
    u32 a0 = 0, a1 = 0, a2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A29F8:;
    sp = sp - 16;
    a0 = 6;
    a1 = 2;
    a2 = 7;
    func_088A2950(a0, a1, a2);
    goto L_088A2A10;
L_088A2A10:;
    sp = sp + 16;
    return;
}

/* 088A2A1C */
u32 func_088A2A1C(void)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2A1C:;
    sp = sp - 16;
    v0 = D_08B2AE1C - (-20964);
    v1 = LD_U8(v0-20964);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_088A2A48; }
    goto L_088A2A34;
L_088A2A34:;
    v0 = func_088A1248();
    goto L_088A2A3C;
L_088A2A3C:;
    goto L_088A2A40;
L_088A2A40:;
    sp = sp + 16;
    return v0;
L_088A2A48:;
    v0 = func_088A2250();
    goto L_088A2A50;
L_088A2A50:;
    goto L_088A2A40;
}

/* 088A2A58 */
u32 func_088A2A58(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2A58:;
    sp = sp - 16;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A2A94; }
    goto L_088A2A74;
L_088A2A74:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_088A2A98; }
    goto L_088A2A7C;
L_088A2A7C:;
    v0 = func_08A7FD00(a0);
    goto L_088A2A84;
L_088A2A84:;
    s0 = v0 + 0;
    v0 = func_088A2A1C();
    goto L_088A2A8C;
L_088A2A8C:;
    s0 = s0 ^ v0;
    v0 = s0 < 0x1u;
    goto L_088A2A94;
L_088A2A94:;
    goto L_088A2A98;
L_088A2A98:;
    sp = sp + 16;
    return v0;
}

/* 088A2AA4 */
u32 func_088A2AA4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2AA4:;
    sp = sp - 16;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = 0 + 0; goto L_088A2AFC; }
    goto L_088A2AC0;
L_088A2AC0:;
    v0 = func_088A25EC(a0);
    goto L_088A2AC8;
L_088A2AC8:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A2B2C; }
    goto L_088A2AD4;
L_088A2AD4:;
    v0 = func_08A7FD20(a0);
    goto L_088A2ADC;
L_088A2ADC:;
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A2B10; }
    goto L_088A2AE8;
L_088A2AE8:;
    v0 = func_088A2A58(a0);
    goto L_088A2AF0;
L_088A2AF0:;
    cnd_ = v0 != 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A2AFC; }
    goto L_088A2AF8;
L_088A2AF8:;
    a0 = 1;
    goto L_088A2AFC;
L_088A2AFC:;
    goto L_088A2B00;
L_088A2B00:;
    v0 = a0 + 0;
    sp = sp + 16;
    return v0;
L_088A2B10:;
    a0 = s0 + 0;
    v0 = func_08A7FD2C(a0);
    goto L_088A2B18;
L_088A2B18:;
    v1 = 1;
    cnd_ = v0 != v1;
    a0 = 0 + 0;
    if (cnd_) { goto L_088A2AF8; }
    goto L_088A2B24;
L_088A2B24:;
    goto L_088A2B00;
L_088A2B2C:;
    a0 = 0 + 0;
    goto L_088A2AFC;
}

/* 088A2B34 */
void func_088A2B34(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2B34:;
    sp = sp - 16;
    v0 = D_08B2ACFC - (-21252);
    s1 = a1 + 0;
    v1 = LD_U8(v0-21252);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_088A2B74; }
    goto L_088A2B5C;
L_088A2B5C:;
    goto L_088A2B60;
L_088A2B60:;
    sp = sp + 16;
    return;
L_088A2B74:;
    v0 = func_088A2CB4(a0);
    goto L_088A2B7C;
L_088A2B7C:;
    s2 = v0 + 0;
    v0 = D_08B2AE1C - (-20964);
    v1 = LD_U8(v0-20964);
    cnd_ = v1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A2BB0; }
    goto L_088A2B90;
L_088A2B90:;
    v0 = func_088A2C44(a0);
    goto L_088A2B98;
L_088A2B98:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    func_088A1250();
    goto L_088A2BA8;
L_088A2BA8:;
    goto L_088A2B60;
L_088A2BB0:;
    a0 = s0 + 0;
    v0 = func_088A2BD0(a0);
    goto L_088A2BB8;
L_088A2BB8:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = s1 + 0;
    func_088A2288(a0, a1, a2, 0, 0, 0);
    goto L_088A2BC8;
L_088A2BC8:;
    goto L_088A2B60;
}

/* 088A2BD0 */
u32 func_088A2BD0(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2BD0:;
    sp = sp - 16;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 == 0;
    v0 = D_08AD6FB0 - (28592);
    if (cnd_) { goto L_088A2C3C; }
    goto L_088A2BEC;
L_088A2BEC:;
    v0 = func_088A25EC(a0);
    goto L_088A2BF4;
L_088A2BF4:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A2C38; }
    goto L_088A2C00;
L_088A2C00:;
    v0 = func_088A2A58(a0);
    goto L_088A2C08;
L_088A2C08:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A2C28; }
    goto L_088A2C10;
L_088A2C10:;
    v0 = func_08A7FD38(a0, 0, 0, 0, 0);
    goto L_088A2C18;
L_088A2C18:;
    goto L_088A2C1C;
L_088A2C1C:;
    sp = sp + 16;
    return v0;
L_088A2C28:;
    a0 = s0 + 0;
    v0 = func_08A7FCDC(a0, 0, 0, 0, 0);
    goto L_088A2C30;
L_088A2C30:;
    goto L_088A2C1C;
L_088A2C38:;
    v0 = D_08AD6FB0 - (28592);
    goto L_088A2C3C;
L_088A2C3C:;
    v0 = v0 + 28592;
    goto L_088A2C18;
}

/* 088A2C44 */
u32 func_088A2C44(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2C44:;
    sp = sp - 16;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A2C8C; }
    goto L_088A2C60;
L_088A2C60:;
    v0 = func_088A25EC(a0);
    goto L_088A2C68;
L_088A2C68:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A2CAC; }
    goto L_088A2C74;
L_088A2C74:;
    v0 = func_088A2A58(a0);
    goto L_088A2C7C;
L_088A2C7C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A2C9C; }
    goto L_088A2C84;
L_088A2C84:;
    v0 = func_08A7FD5C(a0);
    goto L_088A2C8C;
L_088A2C8C:;
    goto L_088A2C90;
L_088A2C90:;
    sp = sp + 16;
    return v0;
L_088A2C9C:;
    a0 = s0 + 0;
    v0 = func_08A7FD00(a0);
    goto L_088A2CA4;
L_088A2CA4:;
    goto L_088A2C90;
L_088A2CAC:;
    v0 = 0 + 0;
    goto L_088A2C8C;
}

/* 088A2CB4 */
u32 func_088A2CB4(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2CB4:;
    sp = sp - 16;
    v0 = D_08B2ACFC - (-21252);
    v1 = LD_U8(v0-21252);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A2CFC; }
    goto L_088A2CD0;
L_088A2CD0:;
    v0 = func_088A25EC(a0);
    goto L_088A2CD8;
L_088A2CD8:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A2D1C; }
    goto L_088A2CE4;
L_088A2CE4:;
    v0 = func_088A2A58(a0);
    goto L_088A2CEC;
L_088A2CEC:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_088A2D0C; }
    goto L_088A2CF4;
L_088A2CF4:;
    v0 = func_08A7FD64(a0);
    goto L_088A2CFC;
L_088A2CFC:;
    goto L_088A2D00;
L_088A2D00:;
    sp = sp + 16;
    return v0;
L_088A2D0C:;
    a0 = s0 + 0;
    v0 = func_08A7FD08(a0);
    goto L_088A2D14;
L_088A2D14:;
    goto L_088A2D00;
L_088A2D1C:;
    v0 = 0 + 0;
    goto L_088A2CFC;
}

/* 088A2D24 */
u64 func_088A2D24(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A2D24:;
    sp = sp - 16;
    v1 = a0 + 0;
    a0 = a1 + 0;
    s2 = a2 + 0;
    v0 = 22;
    s0 = 15;
    if (v1 != 0) s0 = v0;
    s1 = a3 + 0;
    { u64 r_ = func_088A30E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2D58;
L_088A2D58:;
    a0 = s2 + 0;
    s0 = s0 + v0;
    { u64 r_ = func_088A30E0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2D64;
L_088A2D64:;
    s0 = s0 + v0;
    s0 = s0 + 32;
    v0 = s0 + 11;
    if (s1 != 0) s0 = v0;
    s0 = s0 + 7;
    s0 = s0 >> 3;
    s0 = s0 + s1;
    v0 = s0 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A2D9C */
u64 func_088A2D9C(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f12 = 0, f20 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088A2D9C:;
    sp = sp - 96;
    s7 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    s2 = LD_U16(a2+18);
    s3 = LD32(a2);
    f20 = BITSF(LD32(a2+8));
    s5 = LD32(a2+20);
    s4 = LD32(a2+4);
    a1 = s3 + 0;
    a0 = s2 + 0;
    a2 = s4 + 0;
    f12 = f20;
    a3 = s5 + 0;
    { u64 r_ = func_088A2D24(a0, a1, a2, a3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2E00;
L_088A2E00:;
    s0 = s0 < v0;
    s6 = v0 + 0;
    cnd_ = s0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_088A2E40; }
    goto L_088A2E10;
L_088A2E10:;
    sp = sp + 96;
    return (u64)v0 | ((u64)v1 << 32);
L_088A2E40:;
    a0 = sp + 0;
    a1 = 15;
    func_08830CCC(a0, a1, 0, 0, 0);
    goto L_088A2E4C;
L_088A2E4C:;
    a0 = LD_U16(s1+16);
    a1 = sp + 0;
    func_088A31D4(a0, a1);
    goto L_088A2E58;
L_088A2E58:;
    cnd_ = s2 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088A2F80; }
    goto L_088A2E60;
L_088A2E60:;
    a2 = 1;
    a1 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2E6C;
L_088A2E6C:;
    a0 = s2 + 0;
    a1 = sp + 0;
    func_088A3244(a0, a1);
    goto L_088A2E78;
L_088A2E78:;
    v0 = 999;
    goto L_088A2E7C;
L_088A2E7C:;
    cnd_ = s3 == v0;
    a0 = sp + 0;
    if (cnd_) { goto L_088A2F6C; }
    goto L_088A2E84;
L_088A2E84:;
    a2 = 1;
    a1 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2E90;
L_088A2E90:;
    a0 = s3 + 0;
    a1 = sp + 0;
    func_088A3124(a0, a1);
    goto L_088A2E9C;
L_088A2E9C:;
    v0 = 999;
    goto L_088A2EA0;
L_088A2EA0:;
    cnd_ = s4 == v0;
    a0 = sp + 0;
    if (cnd_) { goto L_088A2F58; }
    goto L_088A2EA8;
L_088A2EA8:;
    a2 = 1;
    a1 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2EB4;
L_088A2EB4:;
    a0 = s4 + 0;
    a1 = sp + 0;
    func_088A3124(a0, a1);
    goto L_088A2EC0;
L_088A2EC0:;
    a2 = 1;
    goto L_088A2EC4;
L_088A2EC4:;
    a0 = sp + 0;
    a1 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2ED0;
L_088A2ED0:;
    a1 = FBITS(f20);
    a0 = sp + 0;
    a2 = 32;
    func_08830D78(a0, a1, a2);
    goto L_088A2EE0;
L_088A2EE0:;
    a0 = sp + 0;
    a1 = 0 + 0;
    cnd_ = s5 == 0;
    a2 = 1;
    if (cnd_) { goto L_088A2F0C; }
    goto L_088A2EF0;
L_088A2EF0:;
    a0 = sp + 0;
    a2 = 1;
    a1 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2F00;
L_088A2F00:;
    a0 = sp + 0;
    a1 = s5 + 0;
    a2 = 11;
    goto L_088A2F0C;
L_088A2F0C:;
    func_08830D78(a0, a1, a2);
    goto L_088A2F14;
L_088A2F14:;
    a0 = sp + 0;
    a1 = sp + 16;
    a2 = sp + 20;
    func_08830DFC(a0, a1, a2);
    goto L_088A2F24;
L_088A2F24:;
    a1 = LD32(sp+16);
    a2 = LD32(sp+20);
    a0 = s7 + 0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2F34;
L_088A2F34:;
    a0 = LD32(sp+20);
    a1 = LD32(s1+24);
    a2 = s5 + 0;
    a0 = s7 + a0;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2F48;
L_088A2F48:;
    a0 = sp + 0;
    { u64 r_ = func_08830D10(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2F50;
L_088A2F50:;
    v0 = s6 + 0;
    goto L_088A2E10;
L_088A2F58:;
    a1 = 0 + 0;
    a2 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2F64;
L_088A2F64:;
    a2 = 1;
    goto L_088A2EC4;
L_088A2F6C:;
    a1 = 0 + 0;
    a2 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2F78;
L_088A2F78:;
    v0 = 999;
    goto L_088A2EA0;
L_088A2F80:;
    a1 = 0 + 0;
    a2 = 1;
    func_08830D78(a0, a1, a2);
    goto L_088A2F8C;
L_088A2F8C:;
    v0 = 999;
    goto L_088A2E7C;
}

/* 088A2F94 */
u32 func_088A2F94(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A2F94:;
    sp = sp - 32;
    a2 = 15;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = a0 + 0;
    a0 = sp + 0;
    func_08830E38(a0, a1, a2);
    goto L_088A2FBC;
L_088A2FBC:;
    a0 = sp + 0;
    v0 = func_088A3210(a0);
    goto L_088A2FC4;
L_088A2FC4:;
    ST16(s0, v0);
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2FD4;
L_088A2FD4:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A3098; }
    goto L_088A2FDC;
L_088A2FDC:;
    ST16(s0+2, 0);
    goto L_088A2FE0;
L_088A2FE0:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A2FEC;
L_088A2FEC:;
    cnd_ = v0 != 0;
    v0 = 999;
    if (cnd_) { goto L_088A3088; }
    goto L_088A2FF4;
L_088A2FF4:;
    ST32(s0+4, v0);
    goto L_088A2FF8;
L_088A2FF8:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3004;
L_088A3004:;
    cnd_ = v0 != 0;
    v0 = 999;
    if (cnd_) { goto L_088A3078; }
    goto L_088A300C;
L_088A300C:;
    ST32(s0+8, v0);
    goto L_088A3010;
L_088A3010:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A301C;
L_088A301C:;
    a0 = sp + 0;
    a1 = 32;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3028;
L_088A3028:;
    ST32(s0+12, v0);
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3038;
L_088A3038:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_088A3068; }
    goto L_088A3040;
L_088A3040:;
    ST32(s0+16, 0);
    goto L_088A3044;
L_088A3044:;
    v0 = LD32(sp+4);
    v0 = v0 + 7;
    v0 = v0 >> 3;
    v0 = s1 + v0;
    sp = sp + 32;
    return v0;
L_088A3068:;
    a1 = 11;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3070;
L_088A3070:;
    ST32(s0+16, v0);
    goto L_088A3044;
L_088A3078:;
    a0 = sp + 0;
    v0 = func_088A3190(a0);
    goto L_088A3080;
L_088A3080:;
    ST32(s0+8, v0);
    goto L_088A3010;
L_088A3088:;
    a0 = sp + 0;
    v0 = func_088A3190(a0);
    goto L_088A3090;
L_088A3090:;
    ST32(s0+4, v0);
    goto L_088A2FF8;
L_088A3098:;
    a0 = sp + 0;
    v0 = func_088A3280(a0);
    goto L_088A30A0;
L_088A30A0:;
    ST16(s0+2, v0);
    goto L_088A2FE0;
}

/* 088A30A8 */
u32 func_088A30A8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_088A30A8:;
    v0 = a0 < 0x4u;
    a1 = a0 < 0x800u;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A30D8; }
    goto L_088A30B8;
L_088A30B8:;
    v0 = 0x30000u;
    v0 = v0 | 0xffff;
    a0 = v0 < a0;
    cnd_ = a1 != 0;
    v1 = 1;
    if (cnd_) { goto L_088A30D8; }
    goto L_088A30CC;
L_088A30CC:;
    v1 = 2;
    v0 = 3;
    if (a0 != 0) v1 = v0;
    goto L_088A30D8;
L_088A30D8:;
    v0 = v1 + 0;
    return v0;
}

/* 088A30E0 */
u64 func_088A30E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A30E0:;
    sp = sp - 16;
    v0 = 999;
    cnd_ = a0 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_088A3114; }
    goto L_088A30F4;
L_088A30F4:;
    v0 = func_088A30A8(a0);
    goto L_088A30FC;
L_088A30FC:;
    v1 = D_08AD6FB8 - (28600);
    v0 = v0 << 2;
    v1 = v1 + 28600;
    v0 = v0 + v1;
    a0 = LD32(v0);
    a1 = a0 + 2;
    goto L_088A3114;
L_088A3114:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 088A3124 */
void func_088A3124(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3124:;
    sp = sp - 16;
    s2 = a0 + 0;
    s1 = a1 + 0;
    v0 = func_088A30A8(a0);
    goto L_088A3144;
L_088A3144:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = 2;
    s0 = v0 + 0;
    func_08830D78(a0, a1, a2);
    goto L_088A3158;
L_088A3158:;
    v0 = D_08AD6FB8 - (28600);
    v0 = v0 + 28600;
    s0 = s0 << 2;
    s0 = s0 + v0;
    a2 = LD32(s0);
    a0 = s1 + 0;
    a1 = s2 + 0;
    func_08830D78(a0, a1, a2);
    goto L_088A3178;
L_088A3178:;
    sp = sp + 16;
    return;
}

/* 088A3190 */
u32 func_088A3190(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3190:;
    sp = sp - 16;
    a1 = 2;
    s0 = a0 + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A31A8;
L_088A31A8:;
    v1 = D_08AD6FB8 - (28600);
    v1 = v1 + 28600;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    a0 = s0 + 0;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A31C4;
L_088A31C4:;
    sp = sp + 16;
    return v0;
}

/* 088A31D4 */
void func_088A31D4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A31D4:;
    v1 = a0 & 0xffff;
    sp = sp - 16;
    v0 = (u32)(s32)(s16)v1;
    a2 = 10;
    a3 = v1 - 32627;
    cnd_ = (s32)v0 < 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088A3208; }
    goto L_088A31F4;
L_088A31F4:;
    a1 = v1 + 0;
    func_08830D78(a0, a1, a2);
    goto L_088A31FC;
L_088A31FC:;
    sp = sp + 16;
    return;
L_088A3208:;
    v1 = a3 & 0xffff;
    goto L_088A31F4;
}

/* 088A3210 */
u32 func_088A3210(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3210:;
    sp = sp - 16;
    a1 = 10;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3220;
L_088A3220:;
    a0 = v0 < 0x8du;
    v1 = v0 + 32627;
    if (a0 == 0) v0 = v1;
    v0 = v0 & 0xffff;
    sp = sp + 16;
    return v0;
}

/* 088A323C */
u32 func_088A323C(void)
{
    u32 v0 = 0;
L_088A323C:;
    v0 = 10;
    return v0;
}

/* 088A3244 */
void func_088A3244(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3244:;
    v1 = a0 & 0xffff;
    sp = sp - 16;
    v0 = (u32)(s32)(s16)v1;
    a2 = 7;
    a3 = v1 - 32694;
    cnd_ = (s32)v0 < 0;
    a0 = a1 + 0;
    if (cnd_) { goto L_088A3278; }
    goto L_088A3264;
L_088A3264:;
    a1 = v1 + 0;
    func_08830D78(a0, a1, a2);
    goto L_088A326C;
L_088A326C:;
    sp = sp + 16;
    return;
L_088A3278:;
    v1 = a3 & 0xffff;
    goto L_088A3264;
}

/* 088A3280 */
u32 func_088A3280(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3280:;
    sp = sp - 16;
    a1 = 7;
    { u64 r_ = func_08830E4C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3290;
L_088A3290:;
    a0 = v0 < 0x4au;
    v1 = v0 + 32694;
    if (a0 == 0) v0 = v1;
    v0 = v0 & 0xffff;
    sp = sp + 16;
    return v0;
}

/* 088A32AC */
float func_088A32AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[560] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 560);
L_088A32AC:;
    sp = sp - 560;
    v1 = (u32)-1;
    s0 = a1 + 0;
    v0 = LD32(a0+28);
    ST32(sp+536, a2);
    a0 = v0 + 0;
    ST32(sp+540, a3);
    ST32(sp+544, t0);
    ST32(sp+548, t1);
    ST32(sp+552, t2);
    cnd_ = v0 != 0;
    ST32(sp+556, t3);
    if (cnd_) { goto L_088A3324; }
    goto L_088A32E4;
L_088A32E4:;
    a1 = D_08AD6FF0 - (28656);
    t1 = s0 + 0;
    t0 = v1 + 0;
    a0 = sp + 0;
    a3 = 1;
    a1 = a1 + 28656;
    a2 = 256;
    { rv_t r_ = func_08837560(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3304;
L_088A3304:;
    a0 = sp + 256;
    a2 = sp + 536;
    a1 = sp + 0;
    { rv_t r_ = func_08A8E17C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3314;
L_088A3314:;
    sp = sp + 560;
    return f0;
L_088A3324:;
    v0 = func_088AB6A8(a0);
    goto L_088A332C;
L_088A332C:;
    v1 = v0 + 0;
    goto L_088A32E4;
}

/* 088A3334 */
void func_088A3334(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3334:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 32;
    func_088A99C4(a0, t1, t2, t3);
    goto L_088A334C;
L_088A334C:;
    ST8(s0+1581, 0);
    sp = sp + 16;
    return;
}

/* 088A3360 */
void func_088A3360(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3360:;
    sp = sp - 16;
    a0 = a0 + 32;
    func_088A9A34(a0, t1, t2, t3);
    goto L_088A3370;
L_088A3370:;
    sp = sp + 16;
    return;
}

/* 088A337C */
float func_088A337C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 48);
L_088A337C:;
    sp = sp - 48;
    v0 = D_08B285B0 - (-31312);
    s2 = 3;
    s1 = a0 + 0;
    s0 = t2 & 0xff;
    t0 = LD32(a2);
    t1 = LD32(a2+4);
    v1 = LD32(v0-31312);
    v0 = 1;
    ST8(a0+1581, v0);
    v0 = 1;
    ST16(a0+1582, v0);
    v0 = (u32)-4087;
    ST32(a0, t0);
    ST16(a0+8, a3);
    ST32(a0+12, a1);
    ST32(a0+4, t1);
    ST32(a0+1584, v1);
    ST16(a0+1596, v0);
    ST32(a0+16, 0);
    ST8(a0+1580, s0);
    ST32(a0+20, s2);
    ST32(a0+28, 0);
    ST32(a0+1588, 0);
    ST32(a0+1592, 0);
    ST32(a0+1664, 0);
    ST32(a0+1668, 0);
    ST32(a0+1672, 0);
    ST32(a0+1676, 0);
    ST16(a0+1808, 0);
    ST32(a0+1812, 0);
    ST32(sp, t0);
    ST32(sp+4, t1);
    v0 = func_08A62930();
    goto L_088A3414;
L_088A3414:;
    a0 = s1 + 0;
    a1 = 0xf00a;
    a2 = 1;
    a3 = sp + 16;
    t0 = 4;
    cnd_ = s0 != 0;
    ST16(s1+1598, v0);
    if (cnd_) { goto L_088A344C; }
    goto L_088A3430;
L_088A3430:;
    ST32(s1+20, 0);
    goto L_088A3434;
L_088A3434:;
    sp = sp + 48;
    return f0;
L_088A344C:;
    ST32(sp+16, 0);
    { rv_t r_ = func_088A4300(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3454;
L_088A3454:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s1+20, 0); goto L_088A3434; }
    goto L_088A345C;
L_088A345C:;
    ST32(s1+20, s2);
    goto L_088A3434;
}

/* 088A3464 */
void func_088A3464(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3464:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = a0 + 32;
    { u64 r_ = func_088A9B1C(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A347C;
L_088A347C:;
    ST8(s0+1581, 0);
    sp = sp + 16;
    return;
}

/* 088A3490 */
u32 func_088A3490(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3490:;
    sp = sp - 16;
    a1 = 0xf003;
    a2 = 1;
    v0 = LD32(a0+16);
    a3 = 0 + 0;
    t0 = 0 + 0;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A34C4; }
    goto L_088A34B4;
L_088A34B4:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
L_088A34C4:;
    v0 = 1;
    ST32(a0+16, v0);
    { rv_t r_ = func_088A4300(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A34D0;
L_088A34D0:;
    v1 = v0 + 0;
    goto L_088A34B4;
}

/* 088A34D8 */
rv_t func_088A34D8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A34D8:;
    sp = sp - 32;
    v1 = 3;
    s0 = a0 + 0;
    ST32(a0+16, v1);
    a1 = D_08AD7010 - (28688);
    ST32(s0+24, a2);
    a1 = a1 + 28688;
    f0 = func_088A32AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A3500;
L_088A3500:;
    a0 = s0 + 0;
    v0 = LD32(s0+24);
    a1 = 1;
    cnd_ = v0 != 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_088A352C; }
    goto L_088A3514;
L_088A3514:;
    { rv_t r_ = func_088A4420(a0, a1, a3, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A351C;
L_088A351C:;
    goto L_088A3520;
L_088A3520:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_088A352C:;
    a2 = LD_U16(s0+8);
    a0 = LD32(s0+12);
    v0 = LD32(s0);
    v1 = LD32(s0+4);
    a1 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    { rv_t r_ = func_088A9200(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A354C;
L_088A354C:;
    goto L_088A3520;
}

/* 088A3554 */
u32 func_088A3554(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3554:;
    sp = sp - 16;
    a1 = 0 + 0;
    a2 = 0 + 0;
    a3 = 0 + 0;
    func_088AAF74(a0, a1, a2, a3);
    goto L_088A356C;
L_088A356C:;
    v0 = 1;
    sp = sp + 16;
    return v0;
}

/* 088A357C */
u32 func_088A357C(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A357C:;
    a2 = a2 - 2;
    v0 = a2 >> 31;
    sp = sp - 32;
    a2 = a2 + v0;
    s3 = (u32)((s32)a2 >> 1);
    a1 = a1 + 2;
    s4 = a0 + 0;
    cnd_ = (s32)s3 <= 0;
    if (cnd_) { goto L_088A35D8; }
    goto L_088A35B4;
L_088A35B4:;
    s1 = a1 + 0;
    s2 = a0 + 32;
    s0 = s3 + 0;
    goto L_088A35C0;
L_088A35C0:;
    a1 = LD_U16(s1);
    a0 = s2 + 0;
    s0 = s0 - 1;
    func_088A9D00(a0, a1, t2, t3);
    goto L_088A35D0;
L_088A35D0:;
    cnd_ = s0 != 0;
    s1 = s1 + 2;
    if (cnd_) { goto L_088A35C0; }
    goto L_088A35D8;
L_088A35D8:;
    a0 = s4 + 0;
    v0 = func_088AB684(a0);
    goto L_088A35E0;
L_088A35E0:;
    cnd_ = v0 == 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_088A35F4; }
    goto L_088A35E8;
L_088A35E8:;
    v0 = LD32(v0+44);
    v0 = v0 + s3;
    ST32(v1+44, v0);
    goto L_088A35F4;
L_088A35F4:;
    v0 = 1;
    sp = sp + 32;
    return v0;
}

/* 088A3618 */
rv_t func_088A3618(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3618:;
    sp = sp - 16;
    v0 = 3;
    a2 = LD_U16(a1+2);
    ST32(a0+16, v0);
    a1 = D_08AD7030 - (28720);
    a1 = a1 + 28720;
    ST32(a0+24, a2);
    f0 = func_088A32AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A363C;
L_088A363C:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 088A364C */
rv_t func_088A364C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A364C:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = D_08AD7060 - (28768);
    a1 = a1 + 28768;
    s0 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A3698; }
    goto L_088A367C;
L_088A367C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A3698:;
    v0 = 3;
    ST32(a0+16, v0);
    s2 = a2 - 2;
    s1 = s1 + 2;
    f0 = func_088A32AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A36AC;
L_088A36AC:;
    a0 = s0 + 0;
    a1 = 2;
    { rv_t r_ = func_088A4420(a0, a1, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A36B8;
L_088A36B8:;
    a0 = s0 + 0;
    a2 = s1 + 0;
    a3 = s2 + 0;
    a1 = 2;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A367C; }
    goto L_088A36D0;
L_088A36D0:;
    func_088AAF74(a0, a1, a2, a3);
    goto L_088A36D8;
L_088A36D8:;
    v1 = 1;
    goto L_088A367C;
}

/* 088A36E0 */
rv_t func_088A36E0(u32 a0, u32 a1, u32 a2, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A36E0:;
    sp = sp - 16;
    v0 = D_08B285B0 - (-31312);
    a3 = a1 + 0;
    t1 = LD32(v0-31312);
    v1 = LD32(a0+1592);
    t0 = a2 + 0;
    a1 = 0xf008;
    v1 = t1 - v1;
    v1 = v1 < 0x1f4u;
    a2 = 0 + 0;
    a3 = a3 + 2;
    t0 = t0 - 2;
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_088A3728; }
    goto L_088A371C;
L_088A371C:;
    goto L_088A3720;
L_088A3720:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A3728:;
    ST32(a0+1592, t1);
    { rv_t r_ = func_088A4300(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3730;
L_088A3730:;
    goto L_088A3720;
}

/* 088A3738 */
u32 func_088A3738(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_088A3738:;
    a3 = LD32(a0+28);
    cnd_ = a3 == 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_088A379C; }
    goto L_088A3744;
L_088A3744:;
    v1 = LD32(a3+24);
    v0 = D_08B285B0 - (-31312);
    a0 = LD32(v0-31312);
    a1 = LD32(a1);
    v0 = v1 << 2;
    v1 = v1 + 1;
    v1 = v1 & 0x3;
    ST32(a3+24, v1);
    a0 = a0 - a1;
    v0 = v0 + a3;
    ST32(v0+8, a0);
    a2 = 0 + 0;
    a1 = 0 + 0;
    a0 = a3 + 8;
    goto L_088A377C;
L_088A377C:;
    v0 = LD32(a0);
    a1 = a1 + 1;
    v1 = a1 < 0x4u;
    a2 = a2 + v0;
    cnd_ = v1 != 0;
    a0 = a0 + 4;
    if (cnd_) { goto L_088A377C; }
    goto L_088A3794;
L_088A3794:;
    v0 = a2 >> 2;
    ST32(a3+4, v0);
    goto L_088A379C;
L_088A379C:;
    v0 = 1;
    return v0;
}

/* 088A37A4 */
rv_t func_088A37A4(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088A37A4:;
    sp = sp - 96;
    s3 = a1 + 0;
    s2 = a0 + 0;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    s1 = a2 + 0;
    if (cnd_) { goto L_088A37F0; }
    goto L_088A37D0;
L_088A37D0:;
    goto L_088A37D4;
L_088A37D4:;
    v0 = 1;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088A37F0:;
    s0 = LD_U16(a1);
    v0 = func_08A62930();
    goto L_088A37F8;
L_088A37F8:;
    cnd_ = s0 == v0;
    a1 = D_08AD709C - (28828);
    if (cnd_) { goto L_088A3830; }
    goto L_088A3800;
L_088A3800:;
    a1 = a1 + 28828;
    a0 = s2 + 0;
    v0 = 10;
    ST32(sp+16, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A3814;
L_088A3814:;
    a0 = s2 + 0;
    a1 = sp + 16;
    goto L_088A381C;
L_088A381C:;
    a2 = 4;
    goto L_088A3820;
L_088A3820:;
    f0 = func_088A3FE8(a0, a1, a2, 0, 0, 0);
    goto L_088A3828;
L_088A3828:;
    goto L_088A37D4;
L_088A3830:;
    v0 = D_08B2BB8C - (-17524);
    v1 = D_08B2BB80 - (-17536);
    a0 = LD32(v0-17524);
    v0 = LD32(v1-17536);
    s3 = s3 + 2;
    a0 = a0 < v0;
    cnd_ = a0 == 0;
    s1 = s1 - 2;
    if (cnd_) { goto L_088A3AC4; }
    goto L_088A3850;
L_088A3850:;
    v0 = (s32)s1 < 20;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = D_08AD70D0 - (28880); goto L_088A3880; }
    goto L_088A385C;
L_088A385C:;
    a1 = D_08AD70FC - (28924);
    a1 = a1 + 28924;
    a0 = s2 + 0;
    v0 = 10;
    ST32(sp+24, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A3874;
L_088A3874:;
    a0 = s2 + 0;
    a1 = sp + 24;
    goto L_088A381C;
L_088A3880:;
    a1 = a1 + 28880;
    a0 = s2 + 0;
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A388C;
L_088A388C:;
    v0 = func_08A62998();
    goto L_088A3894;
L_088A3894:;
    v0 = v0 + 20;
    cnd_ = s1 == v0;
    a1 = D_08AD709C - (28828);
    if (cnd_) { goto L_088A38C0; }
    goto L_088A38A0;
L_088A38A0:;
    a1 = a1 + 28828;
    a0 = s2 + 0;
    v0 = 10;
    ST32(sp+28, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A38B4;
L_088A38B4:;
    a0 = s2 + 0;
    a1 = sp + 28;
    goto L_088A381C;
L_088A38C0:;
    s0 = LD_U16(s3);
    v0 = func_08A62930();
    goto L_088A38C8;
L_088A38C8:;
    cnd_ = s0 == v0;
    a1 = D_08AD709C - (28828);
    if (cnd_) { goto L_088A38F0; }
    goto L_088A38D0;
L_088A38D0:;
    a1 = a1 + 28828;
    a0 = s2 + 0;
    v0 = 10;
    ST32(sp+32, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A38E4;
L_088A38E4:;
    a0 = s2 + 0;
    a1 = sp + 32;
    goto L_088A381C;
L_088A38F0:;
    v1 = D_08B16038 - (24632);
    v0 = LD32(v1+24632);
    a1 = LD_U16(s3+2);
    v0 = v0 < a1;
    cnd_ = v0 != 0;
    v0 = D_08B2BB84 - (-17532);
    if (cnd_) { goto L_088A3AA0; }
    goto L_088A3908;
L_088A3908:;
    v1 = LD32(v0-17532);
    a0 = D_08B2BB7C - (-17540);
    v0 = LD32(a0-17540);
    v1 = v1 + a1;
    v0 = v0 < v1;
    cnd_ = v0 != 0;
    v0 = D_08B2AE94 - (-20844);
    if (cnd_) { goto L_088A3A7C; }
    goto L_088A3924;
L_088A3924:;
    v1 = LD32(v0-20844);
    cnd_ = v1 == 0;
    v0 = D_08B2AE9C - (-20836);
    if (cnd_) { goto L_088A3960; }
    goto L_088A3930;
L_088A3930:;
    v0 = LD32(s3+4);
    cnd_ = v0 == v1;
    a1 = D_08AD712C - (28972);
    if (cnd_) { goto L_088A395C; }
    goto L_088A393C;
L_088A393C:;
    a1 = a1 + 28972;
    a0 = s2 + 0;
    v0 = 9;
    ST32(sp+44, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A3950;
L_088A3950:;
    a0 = s2 + 0;
    a1 = sp + 44;
    goto L_088A381C;
L_088A395C:;
    v0 = D_08B2AE9C - (-20836);
    goto L_088A3960;
L_088A3960:;
    s0 = v0 - 20836;
    a0 = s0 + 0;
    a1 = 4;
    v0 = func_08832688(a0, a1);
    goto L_088A3970;
L_088A3970:;
    v1 = LD32(s3+12);
    cnd_ = v0 == v1;
    a0 = s0 + 4;
    if (cnd_) { goto L_088A39B0; }
    goto L_088A397C;
L_088A397C:;
    a1 = 4;
    v0 = func_08832688(a0, a1);
    goto L_088A3984;
L_088A3984:;
    v1 = LD32(s3+12);
    cnd_ = v0 == v1;
    a1 = D_08AD7160 - (29024);
    if (cnd_) { goto L_088A39B0; }
    goto L_088A3990;
L_088A3990:;
    a1 = a1 + 29024;
    a0 = s2 + 0;
    v0 = 14;
    ST32(sp+48, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A39A4;
L_088A39A4:;
    a0 = s2 + 0;
    a1 = sp + 48;
    goto L_088A381C;
L_088A39B0:;
    s1 = s3 + 20;
    a0 = s1 + 0;
    a1 = sp + 52;
    v0 = func_08A62AA0(a0, a1);
    goto L_088A39C0;
L_088A39C0:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD_U16(s2+8); goto L_088A39F0; }
    goto L_088A39C8;
L_088A39C8:;
    v0 = LD32(sp+52);
    a1 = D_08AD71A4 - (29092);
    a1 = a1 + 29092;
    a0 = s2 + 0;
    a2 = v0 + 0;
    ST32(sp+56, v0);
    f0 = func_088A32AC(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_088A39E4;
L_088A39E4:;
    a0 = s2 + 0;
    a1 = sp + 56;
    goto L_088A381C;
L_088A39F0:;
    v0 = LD32(s2);
    v1 = LD32(s2+4);
    a0 = sp + 0;
    ST32(sp, v0);
    ST32(sp+4, v1);
    v0 = func_08900298(a0, a1);
    goto L_088A3A08;
L_088A3A08:;
    a0 = s2 + 0;
    s0 = v0 + 0;
    v0 = func_088A3490(a0, 0, 0, 0);
    goto L_088A3A14;
L_088A3A14:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = D_08AD71C8 - (29128); goto L_088A3A60; }
    goto L_088A3A1C;
L_088A3A1C:;
    a1 = LD_U16(s3+2);
    a3 = s1 + 0;
    a0 = s2 + 0;
    a2 = 1;
    func_088AABB4(a0, a1, a2, a3);
    goto L_088A3A30;
L_088A3A30:;
    a1 = D_08AD71E4 - (29156);
    a0 = s2 + 0;
    a1 = a1 + 29156;
    a2 = s0 + 0;
    f0 = func_088A32AC(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_088A3A44;
L_088A3A44:;
    a0 = D_08AD7200 - (29184);
    a0 = a0 + 29184;
    goto L_088A3A4C;
L_088A3A4C:;
    a1 = s0 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_088FB130(a0, a1, a2, 0, 0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3A58;
L_088A3A58:;
    goto L_088A37D4;
L_088A3A60:;
    a0 = s2 + 0;
    a1 = a1 + 29128;
    a2 = s0 + 0;
    f0 = func_088A32AC(a0, a1, a2, 0, 0, 0, 0, 0);
    goto L_088A3A70;
L_088A3A70:;
    a0 = D_08AD7220 - (29216);
    a0 = a0 + 29216;
    goto L_088A3A4C;
L_088A3A7C:;
    a1 = D_08AD723C - (29244);
    a1 = a1 + 29244;
    a0 = s2 + 0;
    v0 = 8;
    ST32(sp+40, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A3A94;
L_088A3A94:;
    a0 = s2 + 0;
    a1 = sp + 40;
    goto L_088A381C;
L_088A3AA0:;
    a1 = D_08AD709C - (28828);
    a1 = a1 + 28828;
    a0 = s2 + 0;
    v0 = 10;
    ST32(sp+36, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A3AB8;
L_088A3AB8:;
    a0 = s2 + 0;
    a1 = sp + 36;
    goto L_088A381C;
L_088A3AC4:;
    v0 = 8;
    a0 = s2 + 0;
    a1 = sp + 20;
    a2 = 4;
    ST32(sp+20, v0);
    goto L_088A3820;
}

/* 088A3ADC */
rv_t func_088A3ADC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3ADC:;
    sp = sp - 16;
    a2 = a2 - 2;
    v0 = 4;
    a1 = a1 + 2;
    s1 = a0 + 0;
    cnd_ = a2 == v0;
    if (cnd_) { goto L_088A3B20; }
    goto L_088A3B04;
L_088A3B04:;
    goto L_088A3B08;
L_088A3B08:;
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A3B20:;
    v1 = LD32(a1);
    v0 = D_08B2AE9C - (-20836);
    ST32(v0-20836, v1);
    v0 = func_088AAEE4();
    goto L_088A3B30;
L_088A3B30:;
    a0 = v0 + 0;
    s2 = v0 + 0;
    { rv_t r_ = func_08A94838(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3B3C;
L_088A3B3C:;
    s0 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_088A3B04; }
    goto L_088A3B48;
L_088A3B48:;
    func_088AAF04(a0);
    goto L_088A3B50;
L_088A3B50:;
    a0 = s1 + 0;
    t0 = s2 + 0;
    a1 = 0xf002;
    a2 = 1;
    a3 = s0 + 0;
    { rv_t r_ = func_088A4300(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3B68;
L_088A3B68:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3B70;
L_088A3B70:;
    goto L_088A3B08;
}

/* 088A3B78 */
u32 func_088A3B78(void)
{
    u32 v0 = 0;
L_088A3B78:;
    v0 = 0 + 0;
    return v0;
}

/* 088A3B80 */
rv_t func_088A3B80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 96);
L_088A3B80:;
    sp = sp - 96;
    v0 = (s32)a2 < 6;
    v1 = 1;
    s3 = a0 + 0;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_088A3C30; }
    goto L_088A3BB4;
L_088A3BB4:;
    a1 = LD_U16(a1);
    s4 = 0 < a1;
    cnd_ = s4 != 0;
    s2 = LD_U16(s0+4);
    if (cnd_) { goto L_088A3DBC; }
    goto L_088A3BC4;
L_088A3BC4:;
    v0 = D_08B285B0 - (-31312);
    goto L_088A3BC8;
L_088A3BC8:;
    a0 = LD32(v0-31312);
    v1 = 0xefff;
    v1 = v1 < s2;
    ST32(s3+1584, a0);
    s0 = s0 + 4;
    cnd_ = v1 == 0;
    s1 = s1 - 4;
    if (cnd_) { goto L_088A3D60; }
    goto L_088A3BE4;
L_088A3BE4:;
    v0 = 0xffff0000u;
    v0 = v0 | 0x1000;
    v0 = s2 + v0;
    v1 = v0 < 0xdu;
    s0 = s0 + 2;
    cnd_ = v1 == 0;
    s1 = s1 - 2;
    if (cnd_) { goto L_088A3D2C; }
    goto L_088A3C00;
L_088A3C00:;
    v1 = D_08AD7300 - (29440);
    v0 = v0 << 2;
    v1 = v1 + 29440;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x088A3C1Cu: goto L_088A3C1C; case 0x088A3C2Cu: goto L_088A3C2C; case 0x088A3C54u: goto L_088A3C54; case 0x088A3C6Cu: goto L_088A3C6C; case 0x088A3C84u: goto L_088A3C84; case 0x088A3C9Cu: goto L_088A3C9C; case 0x088A3CB4u: goto L_088A3CB4; case 0x088A3CCCu: goto L_088A3CCC; case 0x088A3CE4u: goto L_088A3CE4; case 0x088A3CFCu: goto L_088A3CFC; case 0x088A3D14u: goto L_088A3D14; default: rs_break(0, 0x088a3c14); }
L_088A3C1C:;
    a1 = D_08AD7270 - (29296);
    a0 = s3 + 0;
    a1 = a1 + 29296;
    f0 = func_088A32AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A3C2C;
L_088A3C2C:;
    v1 = 1;
    goto L_088A3C30;
L_088A3C30:;
    v0 = v1 + 0;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_088A3C54:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088A37A4(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3C64;
L_088A3C64:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3C6C:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    v0 = func_088A3554(a0);
    goto L_088A3C7C;
L_088A3C7C:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3C84:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088A364C(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3C94;
L_088A3C94:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3C9C:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088A3618(a0, a1, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3CAC;
L_088A3CAC:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3CB4:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088A36E0(a0, a1, a2, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3CC4;
L_088A3CC4:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3CCC:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    v0 = func_088A3738(a0, a1);
    goto L_088A3CDC;
L_088A3CDC:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3CE4:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    v0 = func_088A357C(a0, a1, a2, t2, t3);
    goto L_088A3CF4;
L_088A3CF4:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3CFC:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    { rv_t r_ = func_088A3ADC(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3D0C;
L_088A3D0C:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3D14:;
    a0 = s3 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    v0 = func_088A3B78();
    goto L_088A3D24;
L_088A3D24:;
    v1 = v0 + 0;
    goto L_088A3C30;
L_088A3D2C:;
    v1 = LD32(s3+4);
    a1 = LD_U16(s3+8);
    v0 = LD32(s3);
    a2 = s0 - 2;
    a3 = s1 + 2;
    a0 = sp + 32;
    ST32(sp+36, v1);
    ST32(sp+32, v0);
    v0 = func_088AB0F0(a0, a1);
    goto L_088A3D50;
L_088A3D50:;
    v0 = v0 ^ 0x1;
    v0 = v0 & 0xff;
    v1 = v0 < 0x1u;
    goto L_088A3C30;
L_088A3D60:;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 20;
    { u64 r_ = func_088F86E4(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3D70;
L_088A3D70:;
    v0 = LD32(sp+16);
    v0 = v0 + 20;
    cnd_ = v0 != s1;
    v1 = 0 + 0;
    if (cnd_) { goto L_088A3C30; }
    goto L_088A3D80;
L_088A3D80:;
    v0 = D_08B2BB73 - (-17549);
    v1 = LD_U8(v0-17549);
    cnd_ = v1 != 0;
    v0 = 94;
    if (cnd_) { goto L_088A3DA4; }
    goto L_088A3D90;
L_088A3D90:;
    v1 = LD_U16(sp);
    cnd_ = v1 == v0;
    a1 = s0 + 20;
    if (cnd_) { goto L_088A3DA8; }
    goto L_088A3D9C;
L_088A3D9C:;
    cnd_ = s4 == 0;
    if (cnd_) { v1 = 1; goto L_088A3C30; }
    goto L_088A3DA4;
L_088A3DA4:;
    a1 = s0 + 20;
    goto L_088A3DA8;
L_088A3DA8:;
    a0 = sp + 0;
    a2 = s4 + 0;
    func_088ACD44(a0, a1, a2);
    goto L_088A3DB4;
L_088A3DB4:;
    v1 = 1;
    goto L_088A3C30;
L_088A3DBC:;
    { rv_t r_ = func_088A3E84(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3DC4;
L_088A3DC4:;
    cnd_ = v0 == 0;
    v0 = D_08B285B0 - (-31312);
    if (cnd_) { goto L_088A3BC8; }
    goto L_088A3DCC;
L_088A3DCC:;
    v0 = 0xf00a;
    cnd_ = s2 != v0;
    v1 = 1;
    if (cnd_) { goto L_088A3C30; }
    goto L_088A3DD8;
L_088A3DD8:;
    a0 = s3 + 0;
    { u64 r_ = func_088A457C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_088A3DE0;
L_088A3DE0:;
    f0 = BITSF(v0);
    cnd_ = (s32)v0 < 0;
    f1 = (float)(s32)FBITS(f0);
    if (cnd_) { goto L_088A3E34; }
    goto L_088A3DEC;
L_088A3DEC:;
    v0 = D_08AEC418 - (-15336);
    f0 = BITSF(LD32(v0-15336));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = 1; goto L_088A3C30; }
    goto L_088A3E04;
L_088A3E04:;
    a1 = D_08AD72AC - (29356);
    a0 = s3 + 0;
    v0 = 15;
    a1 = a1 + 29356;
    ST32(sp+48, v0);
    f0 = func_088A32AC(a0, a1, 0, 0, 0, 0, 0, 0);
    goto L_088A3E1C;
L_088A3E1C:;
    a0 = s3 + 0;
    a1 = sp + 48;
    a2 = 4;
    f0 = func_088A3FE8(a0, a1, a2, 0, 0, 0);
    goto L_088A3E2C;
L_088A3E2C:;
    v1 = 1;
    goto L_088A3C30;
L_088A3E34:;
    v1 = v0 >> 1;
    v0 = v0 & 0x1;
    v0 = v0 | v1;
    f0 = BITSF(v0);
    f1 = (float)(s32)FBITS(f0);
    f1 = f1 + f1;
    goto L_088A3DEC;
}

/* 088A3E50 */
void func_088A3E50(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 32);
L_088A3E50:;
    sp = sp - 32;
    v0 = D_08B285B0 - (-31312);
    a1 = 0xf007;
    v1 = LD32(v0-31312);
    a2 = 0 + 0;
    a3 = sp + 0;
    t0 = 4;
    ST32(sp, v1);
    { rv_t r_ = func_088A4300(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_088A3E78;
L_088A3E78:;
    sp = sp + 32;
    return;
}

/* 088A3E84 */
rv_t func_088A3E84(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = (u32)(uintptr_t)(stack_ + 16);
L_088A3E84:;
    sp = sp - 16;
    s1 = a1 & 0xffff;
    s0 = a0 + 0;
    v1 = LD32(a0+1664);
    v0 = v1 << 1;
    v0 = v0 + a0;
    v1 = v1 + 1;
    ST16(v0+1600, s1);
    v0 = 32;
    cnd_ = v1 == v0;
    ST32(a0+1664, v1);
    if (cnd_) { goto L_088A3FD0; }
    goto L_088A3EBC;
L_088A3EBC:;
    a0 = LD_U16(s0+1808);
    goto L_088A3EC0;
L_088A3EC0:;
    v1 = a0 & 0xffff;
    cnd_ = v1 == s1;
    a1 = 1;
    if (cnd_) { goto L_088A3F34; }
    goto L_088A3ECC;
L_088A3ECC:;
    v0 = v1 < s1;
    cnd_ = v0 == 0;
    t0 = 1;
    if (cnd_) { goto L_088A3F70; }
    goto L_088A3ED8;
L_088A3ED8:;
    a2 = LD32(s0+1676);
    v0 = s1 - v1;
    a3 = a2 + v0;
    v1 = a3 < 0x41u;
    cnd_ = v1 == 0;
    v0 = a0 + 1;
    if (cnd_) { goto L_088A3F4C; }
    goto L_088A3EF0;
L_088A3EF0:;
    a0 = v0 & 0xffff;
    v1 = a0 < s1;
    cnd_ = v1 == 0;
    if (cnd_) { t0 = 0 + 0; goto L_088A3F2C; }
    goto L_088A3F00;
L_088A3F00:;
    v0 = a2 << 1;
    v0 = v0 + s0;
    v1 = a0 + 1;
    ST16(v0+1680, a0);
    a0 = v1 & 0xffff;
    v0 = a2 + 1;
    v1 = a0 < s1;
    ST32(s0+1676, v0);
    cnd_ = v1 != 0;
    a2 = v0 + 0;
    if (cnd_) { goto L_088A3F00; }
    goto L_088A3F28;
L_088A3F28:;
    t0 = 0 + 0;
    goto L_088A3F2C;
L_088A3F2C:;
    ST16(s0+1808, s1);
    goto L_088A3F30;
L_088A3F30:;
    a1 = t0 + 0;
    goto L_088A3F34;
L_088A3F34:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_088A3F4C:;
    a1 = D_08AD7334 - (29492);
    a1 = a1 + 29492;
    a0 = s0 + 0;
    t0 = 64;
    f0 = func_088A32AC(a0, a1, a2, a3, t0, t1, t2, t3);
    goto L_088A3F60;
L_088A3F60:;
    v0 = 3;
    a1 = 1;
    ST32(s0+16, v0);
    goto L_088A3F34;
L_088A3F70:;
    a2 = LD32(s0+1676);
    cnd_ = a2 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_088A3F30; }
    goto L_088A3F7C;
L_088A3F7C:;
    t1 = a2 + 0;
    v1 = s0 + 1680;
    a1 = s0 + 0;
    goto L_088A3F88;
L_088A3F88:;
    v0 = LD_U16(v1);
    a3 = a3 + 1;
    a0 = a3 < a2;
    cnd_ = v0 == s1;
    v1 = v1 + 2;
    if (cnd_) { goto L_088A3FAC; }
    goto L_088A3F9C;
L_088A3F9C:;
    cnd_ = a0 != 0;
    a1 = a1 + 2;
    if (cnd_) { goto L_088A3F88; }
    goto L_088A3FA4;
L_088A3FA4:;
    a1 = t0 + 0;
    goto L_088A3F34;
L_088A3FAC:;
    v0 = t1 - 1;
    v1 = v0 << 1;
    v1 = v1 + s0;
    a0 = LD_U16(v1+1680);
    t0 = 0 + 0;
    ST32(s0+1676, v0);
    ST16(a1+1680, a0);
    ST16(v1+1680, 0);
    goto L_088A3F30;
L_088A3FD0:;
    f0 = func_088A43A4(a0, t1, t2, t3);
    goto L_088A3FD8;
L_088A3FD8:;
    a0 = LD_U16(s0+1808);
    goto L_088A3EC0;
}
