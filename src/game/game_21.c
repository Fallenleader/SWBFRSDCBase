#include "game.h"

/* 089DA674 */
rv_t func_089DA674(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DA674:;
    sp = sp - 32;
    v1 = D_08B04178 - (16760);
    v1 = v1 + 16760;
    v0 = v1 + 544;
    s1 = a0 + 0;
    s3 = s1 + 500;
    a1 = LD_U8(a0+195);
    a0 = v1 + 656;
    ST32(s1+236, v0);
    ST32(s1+500, a0);
    cnd_ = a1 == 0;
    ST32(s1, v1);
    if (cnd_) { goto L_089DA6C4; }
    goto L_089DA6B8;
L_089DA6B8:;
    v0 = LD_U8(s1+232);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DA850; }
    goto L_089DA6C4;
L_089DA6C4:;
    v0 = LD32(s1+104);
    goto L_089DA6C8;
L_089DA6C8:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DA840; }
    goto L_089DA6D0;
L_089DA6D0:;
    a0 = LD32(s1+84);
    goto L_089DA6D4;
L_089DA6D4:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089DA82C; }
    goto L_089DA6DC;
L_089DA6DC:;
    a0 = LD32(s1+88);
    goto L_089DA6E0;
L_089DA6E0:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089DA818; }
    goto L_089DA6E8;
L_089DA6E8:;
    a0 = LD32(s1+92);
    goto L_089DA6EC;
L_089DA6EC:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089DA804; }
    goto L_089DA6F4;
L_089DA6F4:;
    s0 = LD32(s1+96);
    goto L_089DA6F8;
L_089DA6F8:;
    cnd_ = s0 != 0;
    if (cnd_) { goto L_089DA7EC; }
    goto L_089DA700;
L_089DA700:;
    a0 = LD32(s1+100);
    goto L_089DA704;
L_089DA704:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089DA7D8; }
    goto L_089DA70C;
L_089DA70C:;
    a0 = LD32(s1+104);
    goto L_089DA710;
L_089DA710:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089DA7C4; }
    goto L_089DA718;
L_089DA718:;
    s2 = s1 + 224;
    a0 = LD32(s2+4);
    goto L_089DA720;
L_089DA720:;
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_089DA73C; }
    goto L_089DA728;
L_089DA728:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA730;
L_089DA730:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DA728; }
    goto L_089DA738;
L_089DA738:;
    ST32(s2, 0);
    goto L_089DA73C;
L_089DA73C:;
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    ST32(s2+4, 0);
    a1 = s1 + 0;
    func_08AC7084(a0, a1, t1, t2, t3);
    goto L_089DA750;
L_089DA750:;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2+4, 0); goto L_089DA770; }
    goto L_089DA75C;
L_089DA75C:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA764;
L_089DA764:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DA75C; }
    goto L_089DA76C;
L_089DA76C:;
    ST32(s2+4, 0);
    goto L_089DA770;
L_089DA770:;
    s0 = D_08B04420 - (17440);
    s0 = s0 + 17440;
    ST32(s2, 0);
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DA78C;
L_089DA78C:;
    a1 = s0 + 0;
    a0 = s1 + 236;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DA798;
L_089DA798:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA7A0;
L_089DA7A0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA7A8;
L_089DA7A8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DA7C4:;
    v0 = LD32(v1+4);
    t_ = v0;
    s2 = s1 + 224;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA7D0;
L_089DA7D0:;
    a0 = LD32(s2+4);
    goto L_089DA720;
L_089DA7D8:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA7E4;
L_089DA7E4:;
    a0 = LD32(s1+104);
    goto L_089DA710;
L_089DA7EC:;
    a0 = s0 + 0;
    func_0896D344(a0);
    goto L_089DA7F4;
L_089DA7F4:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA7FC;
L_089DA7FC:;
    a0 = LD32(s1+100);
    goto L_089DA704;
L_089DA804:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA810;
L_089DA810:;
    s0 = LD32(s1+96);
    goto L_089DA6F8;
L_089DA818:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA824;
L_089DA824:;
    a0 = LD32(s1+92);
    goto L_089DA6EC;
L_089DA82C:;
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA838;
L_089DA838:;
    a0 = LD32(s1+88);
    goto L_089DA6E0;
L_089DA840:;
    a0 = s1 + 0;
    { u64 r_ = func_089DD8E4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA848;
L_089DA848:;
    a0 = LD32(s1+84);
    goto L_089DA6D4;
L_089DA850:;
    a0 = LD32(s1+144);
    { u64 r_ = func_08A08BFC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA858;
L_089DA858:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+104); goto L_089DA6C8; }
    goto L_089DA860;
L_089DA860:;
    a1 = LD32(s3+4);
    a0 = v0 + 0;
    { u64 r_ = func_08A0A130(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DA86C;
L_089DA86C:;
    v0 = LD32(s1+104);
    goto L_089DA6C8;
}

/* 089DA874 */
rv_t func_089DA874(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_089DA874:;
    sp = sp - 80;
    s2 = a0 + 0;
    { rv_t r_ = func_08A03DFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA89C;
L_089DA89C:;
    a0 = LD32(s2+88);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DAC78; }
    goto L_089DA8A8;
L_089DA8A8:;
    v0 = LD_U8(s2+195);
    goto L_089DA8AC;
L_089DA8AC:;
    cnd_ = v0 == 0;
    v1 = LD32(s2);
    if (cnd_) { goto L_089DA910; }
    goto L_089DA8B4;
L_089DA8B4:;
    v0 = LD32(v1-12);
    v0 = s2 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    if (cnd_) { v0 = LD32(v1+348); goto L_089DA914; }
    goto L_089DA8C8;
L_089DA8C8:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA8D4;
L_089DA8D4:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA8E8;
L_089DA8E8:;
    a2 = LD32(s2);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v1 = LD32(a2-12);
    a3 = 0x3000000u;
    a2 = v0 + 0;
    v1 = s2 + v1;
    f12 = BITSF(LD32(v1+200));
    { rv_t r_ = func_088067CC(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA90C;
L_089DA90C:;
    v1 = LD32(s2);
    goto L_089DA910;
L_089DA910:;
    v0 = LD32(v1+348);
    goto L_089DA914;
L_089DA914:;
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA91C;
L_089DA91C:;
    f1 = BITSF(LD32(s2+160));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { ST8(s2+193, 0); goto L_089DA940; }
    goto L_089DA930;
L_089DA930:;
    v0 = LD_U8(s2+193);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2); goto L_089DAC50; }
    goto L_089DA93C;
L_089DA93C:;
    ST8(s2+193, 0);
    goto L_089DA940;
L_089DA940:;
    f1 = BITSF(LD32(s2+132));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f1 = BITSF(LD32(s2+136)); goto L_089DA96C; }
    goto L_089DA958;
L_089DA958:;
    v0 = D_08B285A4 - (-31324);
    f0 = BITSF(LD32(v0-31324));
    f0 = f1 - f0;
    ST32(s2+132, FBITS(f0));
    f1 = BITSF(LD32(s2+136));
    goto L_089DA96C;
L_089DA96C:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(s2+84); goto L_089DA990; }
    goto L_089DA97C;
L_089DA97C:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(s2+136, FBITS(f0));
    a0 = LD32(s2+84);
    goto L_089DA990;
L_089DA990:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DAC40; }
    goto L_089DA998;
L_089DA998:;
    a0 = LD32(s2+100);
    goto L_089DA99C;
L_089DA99C:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DAC30; }
    goto L_089DA9A4;
L_089DA9A4:;
    v1 = LD32(s2);
    goto L_089DA9A8;
L_089DA9A8:;
    v0 = LD32(v1+220);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA9B4;
L_089DA9B4:;
    cnd_ = v0 == 0;
    v0 = 999;
    if (cnd_) { goto L_089DAA2C; }
    goto L_089DA9BC;
L_089DA9BC:;
    v0 = D_08C2C3E0 - (-15392);
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    s0 = 4;
    if (cnd_) { goto L_089DAA28; }
    goto L_089DA9CC;
L_089DA9CC:;
    v0 = LD32(v0+24);
    cnd_ = v0 == s0;
    v0 = 999;
    if (cnd_) { goto L_089DAA2C; }
    goto L_089DA9D8;
L_089DA9D8:;
    v1 = LD32(s2);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DA9E8;
L_089DA9E8:;
    cnd_ = v0 == s0;
    s3 = v0 + 0;
    if (cnd_) { goto L_089DABDC; }
    goto L_089DA9F0;
L_089DA9F0:;
    s0 = D_08C2933C - (-27844);
    s0 = s0 - 27844;
    s0 = s0 + 1312;
    a0 = s0 + 0;
    a1 = s3 + 0;
    v0 = func_0897843C(a0, a1);
    goto L_089DAA08;
L_089DAA08:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    s1 = v0 + 0;
    v0 = func_0897848C(a0, a1);
    goto L_089DAA18;
L_089DAA18:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s1 + 0;
    f0 = func_089DE2B8(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DAA28;
L_089DAA28:;
    v0 = 999;
    goto L_089DAA2C;
L_089DAA2C:;
    ST32(s2+112, v0);
    a2 = D_08C2BDB8 - (-16968);
    v0 = a2 - 16968;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089DAAA8; }
    goto L_089DAA5C;
L_089DAA5C:;
    a2 = LD32(a2-16968);
    a3 = a1 + 0;
    goto L_089DAA64;
L_089DAA64:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089DAA98; }
    goto L_089DAA7C;
L_089DAA7C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089DAAAC; }
    goto L_089DAA8C;
L_089DAA8C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089DAA7C; }
    goto L_089DAA98;
L_089DAA98:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089DAA64; }
    goto L_089DAAA8;
L_089DAAA8:;
    v0 = LD32(sp+8);
    goto L_089DAAAC;
L_089DAAAC:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089DAB78; }
    goto L_089DAAB4;
L_089DAAB4:;
    s1 = LD32(sp);
    goto L_089DAAB8;
L_089DAAB8:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089DAB3C; }
    goto L_089DAAC8;
L_089DAAC8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089DAB3C; }
    goto L_089DAAD4;
L_089DAAD4:;
    v0 = LD32(s1);
    goto L_089DAAD8;
L_089DAAD8:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089DAB2C; }
    goto L_089DAAEC;
L_089DAAEC:;
    v0 = LD_U8(s0+8);
    goto L_089DAAF0;
L_089DAAF0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089DAB70; }
    goto L_089DAAF8;
L_089DAAF8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089DAB60; }
    goto L_089DAB00;
L_089DAB00:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089DAB08;
L_089DAB08:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DAB14;
L_089DAB14:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089DAB20;
L_089DAB20:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089DAAF0; }
    goto L_089DAB28;
L_089DAB28:;
    v1 = LD32(s1+4);
    goto L_089DAB2C;
L_089DAB2C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089DAAD8; }
    goto L_089DAB3C;
L_089DAB3C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089DAB60:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089DAB08;
L_089DAB70:;
    s0 = LD32(s0+4);
    goto L_089DAB20;
L_089DAB78:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC7140(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DAB84;
L_089DAB84:;
    v1 = LD32(s2);
    a2 = LD32(s0);
    v0 = LD32(v1-16);
    a0 = LD32(a2-12);
    v0 = s2 + v0;
    a0 = s0 + a0;
    a1 = LD32(v0+4);
    v1 = LD32(a0+252);
    cnd_ = v1 == a1;
    if (cnd_) { v0 = LD32(a2-16); goto L_089DABCC; }
    goto L_089DABAC;
L_089DABAC:;
    v0 = LD32(s0+92);
    cnd_ = v0 == a1;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089DABC8; }
    goto L_089DABB8;
L_089DABB8:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089DAB78; }
    goto L_089DABC0;
L_089DABC0:;
    s1 = LD32(sp);
    goto L_089DAAB8;
L_089DABC8:;
    v0 = LD32(a2-16);
    goto L_089DABCC;
L_089DABCC:;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s2+112, v1);
    goto L_089DAAB4;
L_089DABDC:;
    v1 = LD32(s2);
    ST32(sp+16, 0);
    v0 = LD32(v1+256);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DABF0;
L_089DABF0:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+260);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAC04;
L_089DAC04:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = sp + 16;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DAC14;
L_089DAC14:;
    a0 = LD32(sp+16);
    a1 = 0xbeeb0000u;
    a1 = a1 | 0x1a1c;
    a2 = 4;
    { u64 r_ = func_0896CFC8(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DAC28;
L_089DAC28:;
    s3 = v0 + 0;
    goto L_089DA9F0;
L_089DAC30:;
    func_08A65940(a0);
    goto L_089DAC38;
L_089DAC38:;
    v1 = LD32(s2);
    goto L_089DA9A8;
L_089DAC40:;
    func_08984BC8(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DAC48;
L_089DAC48:;
    a0 = LD32(s2+100);
    goto L_089DA99C;
L_089DAC50:;
    v0 = D_08B285A0 - (-31328);
    f20 = BITSF(LD32(v0-31328));
    v1 = LD32(a0+376);
    t_ = v1;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAC64;
L_089DAC64:;
    f20 = f20 * f0;
    f0 = BITSF(LD32(s2+160));
    f0 = f0 + f20;
    ST32(s2+160, FBITS(f0));
    goto L_089DA940;
L_089DAC78:;
    func_089DEDA4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DAC80;
L_089DAC80:;
    v0 = LD_U8(s2+195);
    goto L_089DA8AC;
}

/* 089DAC88 */
rv_t func_089DAC88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DAC88:;
    sp = sp - 16;
    v0 = LD_U8(a0+197);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089DAD18; }
    goto L_089DACA8;
L_089DACA8:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089DAD04; }
    goto L_089DACC0;
L_089DACC0:;
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DACCC;
L_089DACCC:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DACE0;
L_089DACE0:;
    a2 = v0 + 0;
    v0 = D_08AEF0D4 - (-3884);
    f12 = BITSF(LD32(v0-3884));
    a0 = s2 + 0;
    a1 = s0 + 0;
    a3 = 0x5000000u;
    goto L_089DACF8;
L_089DACF8:;
    { rv_t r_ = func_088067CC(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAD00;
L_089DAD00:;
    goto L_089DAD04;
L_089DAD04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DAD18:;
    { rv_t r_ = func_08A03E78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAD20;
L_089DAD20:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089DAD04; }
    goto L_089DAD38;
L_089DAD38:;
    v0 = LD_U16(s2+114);
    v0 = v0 ^ 0x1;
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089DAD04; }
    goto L_089DAD4C;
L_089DAD4C:;
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAD58;
L_089DAD58:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAD6C;
L_089DAD6C:;
    a2 = v0 + 0;
    v0 = D_08AEF0D4 - (-3884);
    f12 = BITSF(LD32(v0-3884));
    a0 = s2 + 0;
    a1 = s0 + 0;
    a3 = 0x3000000u;
    goto L_089DACF8;
}

/* 089DAD88 */
rv_t func_089DAD88(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089DAD88:;
    sp = sp - 64;
    s1 = a0 + 0;
    a0 = LD32(a0+88);
    cnd_ = a0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089DAF64; }
    goto L_089DADA8;
L_089DADA8:;
    v1 = LD_U16(s0+16);
    goto L_089DADAC;
L_089DADAC:;
    v0 = 0x8031;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089DAE6C; }
    goto L_089DADB8;
L_089DADB8:;
    cnd_ = v0 != 0;
    v0 = 0x807f;
    if (cnd_) { goto L_089DAE3C; }
    goto L_089DADC0;
L_089DADC0:;
    v0 = 90;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(s0+24); goto L_089DADF4; }
    goto L_089DADCC;
L_089DADCC:;
    a0 = s1 + 0;
    goto L_089DADD0;
L_089DADD0:;
    a1 = s0 + 0;
    { rv_t r_ = func_08A03F38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DADD8;
L_089DADD8:;
    v1 = v0 + 0;
    goto L_089DADDC;
L_089DADDC:;
    goto L_089DADE0;
L_089DADE0:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089DADF4:;
    cnd_ = a0 == 0;
    v1 = 1;
    if (cnd_) { goto L_089DADDC; }
    goto L_089DADFC;
L_089DADFC:;
    v0 = LD_U8(s1+195);
    cnd_ = v0 == 0;
    f12 = BITSF(LD32(s0+8));
    if (cnd_) { goto L_089DAE14; }
    goto L_089DAE08;
L_089DAE08:;
    v0 = LD_U8(s1+124);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DAE2C; }
    goto L_089DAE14;
L_089DAE14:;
    a1 = s1 + 0;
    f0 = func_089E48B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089DAE1C;
L_089DAE1C:;
    v0 = 1;
    ST8(s1+124, v0);
    v1 = 1;
    goto L_089DADDC;
L_089DAE2C:;
    a1 = s1 + 0;
    f0 = func_089E4B1C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089DAE34;
L_089DAE34:;
    v1 = 1;
    goto L_089DADDC;
L_089DAE3C:;
    cnd_ = v1 != v0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089DADD0; }
    goto L_089DAE44;
L_089DAE44:;
    a1 = LD32(s0+24);
    cnd_ = a1 == 0;
    v1 = 1;
    if (cnd_) { goto L_089DADDC; }
    goto L_089DAE50;
L_089DAE50:;
    a0 = LD32(s1+100);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089DADE0; }
    goto L_089DAE5C;
L_089DAE5C:;
    f0 = func_08A65690(a0, a1);
    goto L_089DAE64;
L_089DAE64:;
    v1 = 1;
    goto L_089DADDC;
L_089DAE6C:;
    v0 = LD32(s0+20);
    v0 = (s32)v0 < 24;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089DAF3C; }
    goto L_089DAE7C;
L_089DAE7C:;
    a3 = LD32(s0+24);
    cnd_ = a3 == 0;
    v1 = 1;
    if (cnd_) { goto L_089DADDC; }
    goto L_089DAE88;
L_089DAE88:;
    v0 = LD32(s1);
    a0 = s1 + 0;
    a1 = a3 + 0;
    v1 = LD32(v0+144);
    a2 = sp + 0;
    {v[112]=BITSF(LD32(a3+(12)));}
    {v[113]=BITSF(LD32(a3+(16)));}
    {v[114]=BITSF(LD32(a3+(20)));}
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
    goto L_089DAF2C;
L_089DAF2C:;
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAF34;
L_089DAF34:;
    v1 = 1;
    goto L_089DADDC;
L_089DAF3C:;
    a0 = s1 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    s0 = LD32(s0+24);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAF4C;
L_089DAF4C:;
    a2 = LD32(s1);
    a0 = s1 + 0;
    a1 = s0 + 0;
    v1 = LD32(a2+144);
    a2 = v0 + 0;
    goto L_089DAF2C;
L_089DAF64:;
    { rv_t r_ = func_089DEF50(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAF6C;
L_089DAF6C:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089DADDC; }
    goto L_089DAF74;
L_089DAF74:;
    v1 = LD_U16(s0+16);
    goto L_089DADAC;
}

/* 089DAF7C */
void func_089DAF7C(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[480] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 480);
L_089DAF7C:;
    sp = sp - 480;
    s4 = a3 + 0;
    s3 = a2 + 0;
    s2 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DB558; }
    goto L_089DAFC4;
L_089DAFC4:;
    v1 = LD32(a0);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+268);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    t_ = v0;
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DAFF0;
L_089DAFF0:;
    a2 = v0 + 0;
    v0 = 999;
    {u32 a_=sp+(288);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = a2 == v0;
    {u32 a_=sp+(400);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089DB558; }
    goto L_089DB01C;
L_089DB01C:;
    a0 = D_08C2B3A4 - (-19548);
    v1 = a0 - 19548;
    v0 = LD32(v1+4);
    a1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089DB074; }
    goto L_089DB048;
L_089DB048:;
    a0 = LD32(a1);
    goto L_089DB04C;
L_089DB04C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089DB590; }
    goto L_089DB064;
L_089DB064:;
    a1 = LD32(a1+4);
    goto L_089DB068;
L_089DB068:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089DB04C; }
    goto L_089DB070;
L_089DB070:;
    s1 = 0 + 0;
    goto L_089DB074;
L_089DB074:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089DB55C; }
    goto L_089DB07C;
L_089DB07C:;
    v0 = D_08AEF0D8 - (-3880);
    f23 = BITSF(LD32(v0-3880));
    a1 = 0x4ee30000u;
    a1 = a1 | 0xeca3;
    f12 = f23;
    a0 = s0 + 0;
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    f21 = BITSF(0);
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB0BC;
L_089DB0BC:;
    a1 = 0x25750000u;
    a0 = s0 + 0;
    a1 = a1 | 0xdf94;
    f12 = f23;
    f25 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB0D4;
L_089DB0D4:;
    a1 = 0x27430000u;
    a1 = a1 | 0x23a6;
    f12 = f21;
    a0 = s0 + 0;
    f24 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB0EC;
L_089DB0EC:;
    a1 = 0xfd260000u;
    f20 = f0;
    a0 = s0 + 0;
    a1 = a1 | 0x6101;
    f12 = f21;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB104;
L_089DB104:;
    fcc = FCMP(f20, f21, 2);
    f22 = f0;
    {u32 a_=sp+(288);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(320);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[80]=BITSF(LD32(a_+0));v[81]=BITSF(LD32(a_+4));v[82]=BITSF(LD32(a_+8));v[83]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(368);v[84]=BITSF(LD32(a_+0));v[85]=BITSF(LD32(a_+4));v[86]=BITSF(LD32(a_+8));v[87]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(384);v[88]=BITSF(LD32(a_+0));v[89]=BITSF(LD32(a_+4));v[90]=BITSF(LD32(a_+8));v[91]=BITSF(LD32(a_+12));}
    cnd_ = !fcc;
    {u32 a_=sp+(400);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089DB144; }
    goto L_089DB134;
L_089DB134:;
    fcc = FCMP(f0, f21, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089DB55C; }
    goto L_089DB144;
L_089DB144:;
    v0 = D_08B306F0 - (1776);
    v1 = D_08B306EC - (1772);
    f2 = BITSF(LD32(v0+1776));
    f0 = BITSF(LD32(v1+1772));
    v0 = D_08AEF0DC - (-3876);
    f3 = (float)(s32)FBITS(f2);
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-3876));
    ST32(sp+8, FBITS(f21));
    s0 = sp + 16;
    f3 = f3 * f0;
    f1 = f1 * f0;
    f12 = f21;
    a2 = 0 + 0;
    ST32(sp, FBITS(f3));
    a0 = s1 + 0;
    a1 = s0 + 0;
    ST32(sp+4, FBITS(f1));
    v0 = LD32(s1);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v1 = LD32(v0+56);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[80]));ST32(a_+4,FBITS(v[81]));ST32(a_+8,FBITS(v[82]));ST32(a_+12,FBITS(v[83]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[84]));ST32(a_+4,FBITS(v[85]));ST32(a_+8,FBITS(v[86]));ST32(a_+12,FBITS(v[87]));}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[88]));ST32(a_+4,FBITS(v[89]));ST32(a_+8,FBITS(v[90]));ST32(a_+12,FBITS(v[91]));}
    {u32 a_=sp+(400);ST32(a_+0,FBITS(v[92]));ST32(a_+4,FBITS(v[93]));ST32(a_+8,FBITS(v[94]));ST32(a_+12,FBITS(v[95]));}
    t_ = v1;
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB1B8;
L_089DB1B8:;
    f0 = BITSF(LD32(sp+16));
    a1 = LD32(s2);
    f1 = BITSF(LD32(sp+24));
    ST32(sp+32, FBITS(f0));
    a0 = s2 + 0;
    f0 = BITSF(LD32(sp+20));
    ST32(sp+40, FBITS(f1));
    ST32(sp+36, FBITS(f0));
    v0 = LD32(a1+92);
    ST32(sp+64, FBITS(f20));
    ST32(sp+68, FBITS(f21));
    t_ = v0;
    ST32(sp+72, FBITS(f21));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB1EC;
L_089DB1EC:;
    {u32 a_=sp+(336);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f2 = BITSF(LD32(sp+32));
    {u32 a_=sp+(128);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(112);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
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
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+64);
    v0 = LD32(sp+68);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+72);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
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
    f1 = BITSF(LD32(sp+36));
    a1 = 1;
    a0 = sp + 32;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp+32, FBITS(f2));
    f0 = f0 + f5;
    ST32(sp+80, FBITS(f4));
    ST32(sp+88, FBITS(f5));
    ST32(sp+48, FBITS(f4));
    ST32(sp+56, FBITS(f5));
    ST32(sp+36, FBITS(f1));
    ST32(sp+40, FBITS(f0));
    ST32(sp+84, v0);
    ST32(sp+52, v0);
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB2D8;
L_089DB2D8:;
    a0 = s2 + 0;
    f0 = BITSF(LD32(sp+16));
    v1 = LD32(s2);
    f1 = BITSF(LD32(sp+20));
    ST32(sp+80, FBITS(f0));
    f0 = BITSF(LD32(sp+24));
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    v0 = LD32(v1+92);
    ST32(sp+48, FBITS(f22));
    ST32(sp+40, FBITS(f21));
    ST32(sp+52, FBITS(f21));
    t_ = v0;
    ST32(sp+56, FBITS(f21));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB310;
L_089DB310:;
    {u32 a_=sp+(400);v[92]=BITSF(LD32(a_+0));v[93]=BITSF(LD32(a_+4));v[94]=BITSF(LD32(a_+8));v[95]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[92];float s1=v[93];float s2=v[94];float s3=v[95];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f2 = BITSF(LD32(sp+80));
    {u32 a_=sp+(192);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(176);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(208);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+48);
    v0 = LD32(sp+52);
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
    f4 = BITSF(v0);
    {v0=FBITS(v[17]);}
    f2 = f2 + f1;
    f0 = BITSF(v0);
    f1 = BITSF(LD32(sp+84));
    a0 = sp + 80;
    a1 = 1;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+88));
    ST32(sp+80, FBITS(f2));
    f0 = f0 + f5;
    ST32(sp+84, FBITS(f1));
    ST32(sp+88, FBITS(f0));
    ST32(sp+96, FBITS(f4));
    ST32(sp+104, FBITS(f5));
    ST32(sp+64, FBITS(f4));
    ST32(sp+72, FBITS(f5));
    ST32(sp+100, v0);
    ST32(sp+68, v0);
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB3FC;
L_089DB3FC:;
    a0 = s0 + 0;
    a1 = 1;
    ST32(sp+88, FBITS(f21));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB40C;
L_089DB40C:;
    f0 = BITSF(LD32(sp+24));
    fcc = FCMP(f0, f21, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089DB55C; }
    goto L_089DB420;
L_089DB420:;
    f3 = BITSF(LD32(sp+16));
    f6 = BITSF(LD32(sp+20));
    f8 = BITSF(LD32(sp+32));
    f7 = BITSF(LD32(sp+36));
    f4 = BITSF(LD32(sp));
    f5 = BITSF(LD32(sp+4));
    f8 = f8 - f3;
    f7 = f7 - f6;
    f4 = f4 - f3;
    f5 = f5 - f6;
    f10 = BITSF(LD32(sp+40));
    f9 = BITSF(LD32(sp+8));
    v0 = FBITS(f8);
    {u32 a_=sp+(272);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[4]=BITSF(v0);}
    f2 = BITSF(LD32(sp+80));
    v0 = FBITS(f4);
    f1 = BITSF(LD32(sp+84));
    {v[0]=BITSF(v0);}
    v0 = FBITS(f7);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f5);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f9);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f11 = BITSF(v0);
    v0 = FBITS(f10);
    {v[6]=BITSF(v0);}
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    f0 = BITSF(v0);
    f2 = f2 - f3;
    f1 = f1 - f6;
    fcc = FCMP(f0, f11, 14);
    f3 = BITSF(LD32(sp+88));
    f13 = BITSF(v0);
    {u32 a_=sp+(256);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f2);
    ST32(sp+96, FBITS(f4));
    {v[0]=BITSF(v0);}
    f6 = f23;
    v0 = FBITS(f1);
    ST32(sp+24, FBITS(f21));
    {v[1]=BITSF(v0);}
    f12 = f23;
    v0 = FBITS(f3);
    ST32(sp+96, FBITS(f8));
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+100, FBITS(f7));
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    cnd_ = fcc;
    ST32(sp+104, FBITS(f10));
    if (cnd_) { goto L_089DB540; }
    goto L_089DB508;
L_089DB508:;
    fcc = FCMP(f11, f0, 14);
    f12 = f25;
    cnd_ = fcc;
    f6 = f24;
    if (cnd_) { goto L_089DB540; }
    goto L_089DB518;
L_089DB518:;
    f1 = f13 - f0;
    f0 = f11 - f0;
    f2 = f23 - f24;
    f3 = f23 - f25;
    f1 = f23 / f1;
    f0 = f0 * f1;
    f2 = f0 * f2;
    f0 = f0 * f3;
    f6 = f2 + f24;
    f12 = f0 + f25;
    goto L_089DB540;
L_089DB540:;
    f0 = BITSF(LD32(s3));
    f0 = f0 * f12;
    ST32(s3, FBITS(f0));
    f1 = BITSF(LD32(s4));
    f1 = f1 * f6;
    ST32(s4, FBITS(f1));
    goto L_089DB558;
L_089DB558:;
    goto L_089DB55C;
L_089DB55C:;
    sp = sp + 480;
    return;
L_089DB590:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089DB064; }
    goto L_089DB59C;
L_089DB59C:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089DB068; }
    goto L_089DB5A8;
L_089DB5A8:;
    goto L_089DB074;
}

/* 089DB5B0 */
u32 func_089DB5B0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[448] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 448);
L_089DB5B0:;
    sp = sp - 448;
    v1 = 0 + 0;
    s3 = a2 + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DB76C; }
    goto L_089DB604;
L_089DB604:;
    v1 = LD32(a0);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+268);
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB620;
L_089DB620:;
    a2 = v0 + 0;
    v0 = 999;
    v1 = 0 + 0;
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = a2 == v0;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089DB76C; }
    goto L_089DB640;
L_089DB640:;
    a0 = D_08C2A6C8 - (-22840);
    v1 = a0 - 22840;
    v0 = LD32(v1+4);
    a1 = LD32(a0-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089DB698; }
    goto L_089DB66C;
L_089DB66C:;
    a0 = LD32(a1);
    goto L_089DB670;
L_089DB670:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089DBCD0; }
    goto L_089DB688;
L_089DB688:;
    a1 = LD32(a1+4);
    goto L_089DB68C;
L_089DB68C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089DB670; }
    goto L_089DB694;
L_089DB694:;
    s2 = 0 + 0;
    goto L_089DB698;
L_089DB698:;
    cnd_ = s2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DB76C; }
    goto L_089DB6A0;
L_089DB6A0:;
    f22 = BITSF(0);
    a1 = 0x1ee10000u;
    a1 = a1 | 0x18dc;
    f12 = f22;
    a0 = s0 + 0;
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB6C8;
L_089DB6C8:;
    a1 = 0x485a0000u;
    a0 = s0 + 0;
    a1 = a1 | 0x7fb1;
    f12 = f22;
    f21 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB6E0;
L_089DB6E0:;
    v0 = D_08AEF0E0 - (-3872);
    f12 = BITSF(LD32(v0-3872));
    a1 = 0xfe100000u;
    a0 = s0 + 0;
    a1 = a1 | 0xa28c;
    f23 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB6FC;
L_089DB6FC:;
    v0 = D_08AEF0E4 - (-3868);
    f12 = BITSF(LD32(v0-3868));
    a1 = 0xba240000u;
    a0 = s0 + 0;
    a1 = a1 | 0x7776;
    f24 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB718;
L_089DB718:;
    v0 = D_08AEF0E8 - (-3864);
    f20 = BITSF(LD32(v0-3864));
    a1 = 0x6abb0000u;
    a0 = s0 + 0;
    a1 = a1 | 0x4627;
    f12 = f20;
    f25 = f0;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB738;
L_089DB738:;
    fcc = FCMP(f21, f22, 2);
    f26 = f0;
    {u32 a_=sp+(320);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(336);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = fcc;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089DB768; }
    goto L_089DB758;
L_089DB758:;
    fcc = FCMP(f23, f22, 2);
    cnd_ = !fcc;
    v0 = D_08B306F0 - (1776);
    if (cnd_) { goto L_089DB7B4; }
    goto L_089DB768;
L_089DB768:;
    v1 = 0 + 0;
    goto L_089DB76C;
L_089DB76C:;
    v0 = v1 + 0;
    sp = sp + 448;
    return v0;
L_089DB7B4:;
    v1 = D_08B306EC - (1772);
    f3 = BITSF(LD32(v0+1776));
    f2 = BITSF(LD32(v1+1772));
    ST32(sp+8, FBITS(f22));
    f0 = (float)(s32)FBITS(f3);
    f1 = (float)(s32)FBITS(f2);
    s0 = sp + 16;
    f12 = f22;
    f0 = f0 * f20;
    f1 = f1 * f20;
    a2 = 0 + 0;
    a1 = s0 + 0;
    ST32(sp, FBITS(f0));
    a0 = s2 + 0;
    s5 = sp + 64;
    ST32(sp+4, FBITS(f1));
    v0 = LD32(s2);
    {u32 a_=sp+(320);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v1 = LD32(v0+56);
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v1;
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB810;
L_089DB810:;
    a1 = LD32(s1);
    v0 = LD32(a1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB820;
L_089DB820:;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(sp+20));
    f5 = BITSF(LD32(sp+24));
    f0 = f3 - f0;
    f1 = f4 - f1;
    f2 = f5 - f2;
    {u32 a_=sp+(192);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f0);
    v1 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    v1 = LD32(s1);
    ST32(sp+32, FBITS(f3));
    a0 = s1 + 0;
    ST32(sp+36, FBITS(f4));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    ST32(sp+40, FBITS(f5));
    {v0=FBITS(v[0]);}
    f27 = BITSF(v0);
    ST32(sp+64, FBITS(f21));
    v0 = LD32(v1+92);
    ST32(sp+68, FBITS(f22));
    t_ = v0;
    ST32(sp+72, FBITS(f22));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB898;
L_089DB898:;
    {u32 a_=sp+(368);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    f2 = BITSF(LD32(sp+32));
    {u32 a_=sp+(224);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(208);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(240);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    v1 = LD32(sp+64);
    v0 = LD32(sp+68);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v1);}
    {v[34]=BITSF(a1);}
    v1 = LD32(sp+72);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    {v1=FBITS(v[18]);}
    f5 = BITSF(v1);
    f2 = f2 + f1;
    {v1=FBITS(v[17]);}
    f1 = BITSF(LD32(sp+36));
    f0 = BITSF(v1);
    a0 = sp + 32;
    a1 = 1;
    f1 = f1 + f0;
    f0 = BITSF(LD32(sp+40));
    ST32(sp+84, v1);
    f0 = f0 + f5;
    ST32(sp+52, v1);
    ST32(sp+40, FBITS(f0));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, FBITS(f1));
    ST32(sp+88, FBITS(f5));
    ST32(sp+56, FBITS(f5));
    ST32(sp+80, v0);
    ST32(sp+48, v0);
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB980;
L_089DB980:;
    a0 = s0 + 0;
    a1 = 1;
    ST32(sp+40, FBITS(f22));
    { rv_t r_ = func_0881D3D4(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DB990;
L_089DB990:;
    f0 = BITSF(LD32(sp+24));
    fcc = FCMP(f0, f22, 12);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DB76C; }
    goto L_089DB9A4;
L_089DB9A4:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+32));
    f5 = BITSF(LD32(sp+20));
    f1 = f1 - f0;
    f3 = f3 - f0;
    f4 = BITSF(LD32(sp+36));
    f0 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    f4 = f4 - f5;
    f0 = f0 - f5;
    f5 = BITSF(LD32(sp+40));
    v1 = LD32(s1);
    v0 = FBITS(f1);
    ST32(sp+84, FBITS(f0));
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[4]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[5]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[2]=BITSF(v0);}
    v0 = FBITS(f5);
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v[6]=BITSF(v0);}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+80, FBITS(f1));
    {float s0=v[4];float s1=v[5];float s2=v[6];float t0=v[4];float t1=v[5];float t2=v[6];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[4]=sum;}
    {v0=FBITS(v[4]);}
    ST32(sp+88, FBITS(f2));
    f20 = BITSF(v0);
    ST32(sp+24, FBITS(f22));
    f21 = f0;
    a1 = sp + 80;
    ST32(sp+80, FBITS(f3));
    a0 = s1 + 0;
    ST32(sp+84, FBITS(f4));
    ST32(sp+88, FBITS(f5));
    v0 = LD32(v1+276);
    t_ = v0;
    s4 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBA5C;
L_089DBA5C:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = fcc;
    if (cnd_) { s4 = 0 + 0; goto L_089DBA6C; }
    goto L_089DBA6C;
L_089DBA6C:;
    fcc = FCMP(f23, f27, 12);
    cnd_ = fcc;
    if (cnd_) { s4 = 0 + 0; goto L_089DBA7C; }
    goto L_089DBA7C;
L_089DBA7C:;
    fcc = FCMP(f27, f24, 12);
    cnd_ = fcc;
    if (cnd_) { s4 = 0 + 0; goto L_089DBA8C; }
    goto L_089DBA8C;
L_089DBA8C:;
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+88);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v1=FBITS(v[0]);}
    f0 = BITSF(v1);
    fcc = FCMP(f0, f25, 12);
    cnd_ = fcc;
    if (cnd_) { s4 = 0 + 0; goto L_089DBAC4; }
    goto L_089DBAC4;
L_089DBAC4:;
    cnd_ = s4 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089DBAD4; }
    goto L_089DBACC;
L_089DBACC:;
    v1 = s4 + 0;
    goto L_089DB76C;
L_089DBAD4:;
    f12 = f22;
    a2 = 0 + 0;
    a3 = LD32(v0+56);
    a0 = s2 + 0;
    t_ = a3;
    a1 = s5 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBAEC;
L_089DBAEC:;
    v1 = D_08B159FC - (23036);
    v0 = LD32(v1+23036);
    f2 = BITSF(LD32(sp+64));
    f1 = BITSF(LD32(sp+68));
    f0 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+72));
    f1 = f1 - f3;
    s0 = sp + 96;
    f0 = f0 - f4;
    a1 = s5 + 0;
    a0 = s0 + 0;
    ST32(sp+64, FBITS(f2));
    ST32(sp+72, FBITS(f0));
    ST32(sp+56, FBITS(f0));
    ST32(sp+68, FBITS(f1));
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, FBITS(f1));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBB40;
L_089DBB40:;
    a1 = s0 + 0;
    a0 = sp + 144;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBB4C;
L_089DBB4C:;
    v1 = LD32(s1);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBB5C;
L_089DBB5C:;
    a1 = v0 + 0;
    a0 = sp + 160;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBB68;
L_089DBB68:;
    v0 = LD32(sp+144);
    v1 = LD32(sp+148);
    ST32(sp+176, v0);
    v0 = LD32(sp+152);
    ST32(sp+180, v1);
    ST32(sp+184, v0);
    v0 = D_08AEF0EC - (-3860);
    v1 = LD32(sp+156);
    f0 = BITSF(LD32(v0-3860));
    v0 = FBITS(f26);
    ST32(sp+188, v1);
    v1 = FBITS(f0);
    {v[112]=BITSF(LD32(sp+(176)));}
    {v[113]=BITSF(LD32(sp+(180)));}
    {v[114]=BITSF(LD32(sp+(184)));}
    {v[115]=BITSF(LD32(sp+(188)));}
    {v[116]=BITSF(LD32(sp+(160)));}
    {v[117]=BITSF(LD32(sp+(164)));}
    {v[118]=BITSF(LD32(sp+(168)));}
    {v[119]=BITSF(LD32(sp+(172)));}
    {v[124]=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[96]=sum;}
    {float s0=v[0];v[97]=(float)0;}
    {float s0=v[0];v[98]=(float)1;}
    {float s0=v[97];float t0=v[96];float d0=(s0>=t0?1.f:0.f);v[99]=d0;}
    {float s0=v[96];float d0=fabsf(s0);v[96]=d0;}
    {float s0=v[98];float t0=v[124];float d0=s0-t0;v[125]=d0;}
    {float s0=v[96];float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089DBC04; }
    goto L_089DBBE4;
L_089DBBE4:;
    {float s0=v[96];float d0=asinf(s0)*0.63661977236f;v[100]=d0;}
    {float s0=v[98];float t0=v[100];float d0=s0-t0;v[100]=d0;}
    {float s0=v[100];float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=v[124];float s1=v[125];float t0=v[100];v[124]=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=v[124];float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];v[124]=s0*t0;v[125]=s1*t0;}
    goto L_089DBC04;
L_089DBC04:;
    {float s0=v[99];float t0=v[99];u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089DBC18; }
    goto L_089DBC10;
L_089DBC10:;
    {float s0=v[124];float d0=-s0;v[124]=d0;}
    goto L_089DBC18;
L_089DBC18:;
    {float s0=v[112];float s1=v[113];float s2=v[114];float s3=v[115];float t0=v[125];v[80]=s0*t0;v[81]=s1*t0;v[82]=s2*t0;v[83]=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=v[124];v[84]=s0*t0;v[85]=s1*t0;v[86]=s2*t0;v[87]=s3*t0;}
    {float s0=v[80];float s1=v[81];float s2=v[82];float s3=v[83];float t0=v[84];float t1=v[85];float t2=v[86];float t3=v[87];float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;v[120]=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[120];float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[92]=sum;}
    {float s0=v[92];float t0=v[92];u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089DBC40; }
    goto L_089DBC34;
L_089DBC34:;
    {float s0=v[92];float d0=1.0f/sqrtf(s0);v[92]=d0;}
    {float s0=v[120];float s1=v[121];float s2=v[122];float s3=v[123];float t0=v[92];v[120]=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_089DBC40;
L_089DBC40:;
    {ST32(sp+(144),FBITS(v[120]));}
    {ST32(sp+(148),FBITS(v[121]));}
    {ST32(sp+(152),FBITS(v[122]));}
    {ST32(sp+(156),FBITS(v[123]));}
    {v[112]=BITSF(LD32(sp+(144)));}
    {v[113]=BITSF(LD32(sp+(148)));}
    {v[114]=BITSF(LD32(sp+(152)));}
    {v[115]=BITSF(LD32(sp+(156)));}
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
    {ST32(s3+(0),FBITS(v[96]));}
    {ST32(s3+(4),FBITS(v[97]));}
    {ST32(s3+(8),FBITS(v[98]));}
    {ST32(s3+(12),FBITS(v[100]));}
    {ST32(s3+(16),FBITS(v[101]));}
    {ST32(s3+(20),FBITS(v[102]));}
    {ST32(s3+(24),FBITS(v[104]));}
    {ST32(s3+(28),FBITS(v[105]));}
    {ST32(s3+(32),FBITS(v[106]));}
    v1 = s4 + 0;
    goto L_089DB76C;
L_089DBCD0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089DB688; }
    goto L_089DBCDC;
L_089DBCDC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089DB68C; }
    goto L_089DBCE8;
L_089DBCE8:;
    goto L_089DB698;
}

/* 089DBCF0 */
rv_t func_089DBCF0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DBCF0:;
    sp = sp - 16;
    s1 = D_08C2B3B4 - (-19532);
    v0 = LD_U8(s1-19532);
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DBDA4; }
    goto L_089DBD10;
L_089DBD10:;
    v0 = LD32(s0+92);
    goto L_089DBD14;
L_089DBD14:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DBD2C; }
    goto L_089DBD1C;
L_089DBD1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DBD2C:;
    { u64 r_ = func_08897BBC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBD34;
L_089DBD34:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DBD4C; }
    goto L_089DBD3C;
L_089DBD3C:;
    { u64 r_ = func_08971F74(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBD44;
L_089DBD44:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DBD5C; }
    goto L_089DBD4C;
L_089DBD4C:;
    a0 = LD32(s0+92);
    { rv_t r_ = func_08A5E3E0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBD54;
L_089DBD54:;
    goto L_089DBD1C;
L_089DBD5C:;
    { u64 r_ = func_08971FCC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBD64;
L_089DBD64:;
    v0 = v0 & 0xff;
    cnd_ = v0 != 0;
    v0 = D_08B2C1BC - (-15940);
    if (cnd_) { goto L_089DBD4C; }
    goto L_089DBD70;
L_089DBD70:;
    v1 = LD_U8(v0-15940);
    cnd_ = v1 != 0;
    if (cnd_) { goto L_089DBD4C; }
    goto L_089DBD7C;
L_089DBD7C:;
    v0 = func_08A5D404();
    goto L_089DBD84;
L_089DBD84:;
    cnd_ = v0 != 0;
    v0 = LD_U8(s1-19532);
    if (cnd_) { goto L_089DBD4C; }
    goto L_089DBD8C;
L_089DBD8C:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DBD4C; }
    goto L_089DBD94;
L_089DBD94:;
    a0 = LD32(s0+92);
    { rv_t r_ = func_08A5E3B8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBD9C;
L_089DBD9C:;
    goto L_089DBD1C;
L_089DBDA4:;
    { u64 r_ = func_0883C044(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBDAC;
L_089DBDAC:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s1-19532, 0); goto L_089DBD10; }
    goto L_089DBDB4;
L_089DBDB4:;
    v0 = LD32(s0+92);
    goto L_089DBD14;
}

/* 089DBDBC */
rv_t func_089DBDBC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089DBDBC:;
    sp = sp - 48;
    s2 = a1 + 0;
    a2 = LD32(a0);
    v0 = LD32(a2-12);
    v0 = a0 + v0;
    v1 = LD32(v0+100);
    cnd_ = v1 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089DBEAC; }
    goto L_089DBDF0;
L_089DBDF0:;
    v0 = LD32(v1+16);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = v1 + 0; goto L_089DBE0C; }
    goto L_089DBDFC;
L_089DBDFC:;
    v0 = LD32(v0+64);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(s1+40); goto L_089DBE30; }
    goto L_089DBE08;
L_089DBE08:;
    a0 = v1 + 0;
    goto L_089DBE0C;
L_089DBE0C:;
    a2 = 0 + 0;
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBE14;
L_089DBE14:;
    v1 = LD32(s1);
    goto L_089DBE18;
L_089DBE18:;
    v0 = LD32(v1+256);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBE24;
L_089DBE24:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089DBE68; }
    goto L_089DBE2C;
L_089DBE2C:;
    v0 = LD32(s1+40);
    goto L_089DBE30;
L_089DBE30:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089DBE54; }
    goto L_089DBE38;
L_089DBE38:;
    goto L_089DBE3C;
L_089DBE3C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089DBE54:;
    v0 = LD32(v1+140);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBE60;
L_089DBE60:;
    goto L_089DBE3C;
L_089DBE68:;
    ST32(sp, 0);
    v0 = LD32(v1+256);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBE78;
L_089DBE78:;
    a0 = v0 + 0;
    a1 = s2 + 0;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBE88;
L_089DBE88:;
    a0 = LD32(sp);
    a1 = 0x43ae0000u;
    a2 = s2 + 0;
    a1 = a1 | 0x1c5d;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBE9C;
L_089DBE9C:;
    a0 = v0 + 0;
    { u64 r_ = func_0896C994(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBEA4;
L_089DBEA4:;
    ST32(s1+108, v0);
    goto L_089DBE2C;
L_089DBEAC:;
    cnd_ = a1 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089DBE18; }
    goto L_089DBEB4;
L_089DBEB4:;
    v0 = LD32(a2+436);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBEC0;
L_089DBEC0:;
    v1 = LD32(s1);
    s3 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    ST32(s3+232, v1);
    a1 = LD32(s1);
    v0 = LD32(a1+252);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBEE8;
L_089DBEE8:;
    v1 = LD32(s3+52);
    a1 = v0 + 0;
    cnd_ = v1 == 0;
    t0 = s3 + 52;
    if (cnd_) { goto L_089DBF24; }
    goto L_089DBEF8;
L_089DBEF8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089DBF00;
L_089DBF00:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089DBF30; }
    goto L_089DBF18;
L_089DBF18:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089DBF00; }
    goto L_089DBF24;
L_089DBF24:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DBFD0; }
    goto L_089DBF30;
L_089DBF30:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DBF3C; }
    goto L_089DBF38;
L_089DBF38:;
    v0 = LD32(a3);
    goto L_089DBF3C;
L_089DBF3C:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089DBF6C; }
    goto L_089DBF44;
L_089DBF44:;
    v0 = LD32(s1);
    goto L_089DBF48;
L_089DBF48:;
    a1 = s3 + 0;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    a0 = a0 + 88;
    func_088D0AFC(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DBF5C;
L_089DBF5C:;
    a0 = s1 + 0;
    f0 = func_089DBFE0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DBF64;
L_089DBF64:;
    v1 = LD32(s1);
    goto L_089DBE18;
L_089DBF6C:;
    v0 = LD32(v1+252);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBF78;
L_089DBF78:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+252);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBF8C;
L_089DBF8C:;
    a2 = 0x10000u;
    a3 = 0xff0000u;
    a0 = s3 + 0;
    a1 = s0 + 0;
    t0 = v0 + 0;
    a2 = a2 | 0x3;
    a3 = a3 | 0xffff;
    t1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DBFB4;
L_089DBFB4:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089DBF48; }
    goto L_089DBFBC;
L_089DBFBC:;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBFC8;
L_089DBFC8:;
    v0 = LD32(s1);
    goto L_089DBF48;
L_089DBFD0:;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DBFD8;
L_089DBFD8:;
    a3 = v0 + 0;
    goto L_089DBF30;
}

/* 089DBFE0 */
float func_089DBFE0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089DBFE0:;
    sp = sp - 48;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s2 = LD32(v0+100);
    cnd_ = s2 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089DC2B0; }
    goto L_089DC00C;
L_089DC00C:;
    v0 = LD32(s2+256);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s2+16); goto L_089DC024; }
    goto L_089DC018;
L_089DC018:;
    a0 = s2 + 0;
    { rv_t r_ = func_0880B598(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC020;
L_089DC020:;
    a0 = LD32(s2+16);
    goto L_089DC024;
L_089DC024:;
    cnd_ = a0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089DC2A0; }
    goto L_089DC02C;
L_089DC02C:;
    { u64 r_ = func_088F3ECC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DC034;
L_089DC034:;
    a2 = v0 + 0;
    v0 = (u32)-1;
    cnd_ = a2 == v0;
    v0 = D_08AEF0F0 - (-3856);
    if (cnd_) { goto L_089DC2A0; }
    goto L_089DC044;
L_089DC044:;
    v1 = LD32(s0+184);
    f1 = BITSF(LD32(v0-3856));
    v0 = v1 & 0xff;
    v1 = v1 >> 8;
    a0 = v1 & 0xff;
    v1 = v1 >> 8;
    f4 = BITSF(v0);
    v0 = (v1 >> 8) & 0xff;
    f0 = BITSF(v0);
    v0 = LD32(s0+188);
    f5 = BITSF(a0);
    f10 = (float)(s32)FBITS(f0);
    a0 = v0 & 0xff;
    v0 = v0 >> 8;
    f7 = BITSF(a0);
    a0 = v0 & 0xff;
    v0 = v0 >> 8;
    f8 = BITSF(a0);
    f10 = f10 * f1;
    a0 = (v0 >> 8) & 0xff;
    v1 = v1 & 0xff;
    a3 = D_08AEF0F4 - (-3852);
    v0 = v0 & 0xff;
    f0 = BITSF(v1);
    f3 = BITSF(LD32(a3-3852));
    f11 = BITSF(a0);
    f9 = BITSF(v0);
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
    v1 = sp + 0;
    ST32(sp+4, FBITS(f3));
    ST32(sp, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+20, FBITS(f6));
    ST32(sp+16, FBITS(f7));
    ST32(sp+28, FBITS(f8));
    cnd_ = !fcc;
    ST32(sp+12, FBITS(f10));
    if (cnd_) { goto L_089DC31C; }
    goto L_089DC11C;
L_089DC11C:;
    t0 = D_08AEF0F8 - (-3848);
    f0 = BITSF(LD32(t0-3848));
    f0 = f12 + f0;
    goto L_089DC128;
L_089DC128:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a3-3852));
    a0 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_089DC310; }
    goto L_089DC150;
L_089DC150:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f2 + f0;
    goto L_089DC158;
L_089DC158:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-3852));
    a0 = a0 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_089DC304; }
    goto L_089DC184;
L_089DC184:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 + f0;
    goto L_089DC18C;
L_089DC18C:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-3852));
    a0 = a0 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 << 8;
    if (cnd_) { goto L_089DC2F8; }
    goto L_089DC1B8;
L_089DC1B8:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 + f0;
    goto L_089DC1C0;
L_089DC1C0:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(sp+28));
    v1 = sp + 16;
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-3852));
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = a0 + v0;
    if (cnd_) { goto L_089DC2EC; }
    goto L_089DC1EC;
L_089DC1EC:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 + f0;
    goto L_089DC1F4;
L_089DC1F4:;
    f0 = BITSF(F2I(f0, 1));
    f2 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(a3-3852));
    a1 = FBITS(f0);
    f2 = f2 * f1;
    f0 = BITSF(0);
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_089DC2E0; }
    goto L_089DC21C;
L_089DC21C:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f2 + f0;
    goto L_089DC224;
L_089DC224:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1+4));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-3852));
    a1 = a1 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_089DC2D4; }
    goto L_089DC250;
L_089DC250:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 + f0;
    goto L_089DC258;
L_089DC258:;
    f0 = BITSF(F2I(f0, 1));
    f1 = BITSF(LD32(v1));
    v0 = FBITS(f0);
    f0 = BITSF(LD32(a3-3852));
    a1 = a1 + v0;
    f1 = f1 * f0;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = a1 << 8;
    if (cnd_) { goto L_089DC2C8; }
    goto L_089DC284;
L_089DC284:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 + f0;
    goto L_089DC28C;
L_089DC28C:;
    f0 = BITSF(F2I(f0, 1));
    v0 = FBITS(f0);
    a1 = a1 + v0;
    { rv_t r_ = func_08A6A46C(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC29C;
L_089DC29C:;
    s1 = v0 + 0;
    goto L_089DC2A0;
L_089DC2A0:;
    v0 = RS_FADDR(func_08AB122C, 0x08AB122Cu) - (4652);
    v0 = v0 + 4652;
    ST32(s2+260, v0);
    ST32(s2+256, s1);
    goto L_089DC2B0;
L_089DC2B0:;
    sp = sp + 48;
    return f0;
L_089DC2C8:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 - f0;
    goto L_089DC28C;
L_089DC2D4:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 - f0;
    goto L_089DC258;
L_089DC2E0:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f2 - f0;
    goto L_089DC224;
L_089DC2EC:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 - f0;
    goto L_089DC1F4;
L_089DC2F8:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 - f0;
    goto L_089DC1C0;
L_089DC304:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f1 - f0;
    goto L_089DC18C;
L_089DC310:;
    f0 = BITSF(LD32(t0-3848));
    f0 = f2 - f0;
    goto L_089DC158;
L_089DC31C:;
    t0 = D_08AEF0F8 - (-3848);
    f0 = BITSF(LD32(t0-3848));
    f0 = f12 - f0;
    goto L_089DC128;
}

/* 089DC32C */
rv_t func_089DC32C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DC32C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0885E2D8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC350;
L_089DC350:;
    a0 = LD32(s0+96);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DC418; }
    goto L_089DC35C;
L_089DC35C:;
    a1 = LD32(s0);
    goto L_089DC360;
L_089DC360:;
    v1 = D_08C2C21C - (-15844);
    t0 = v1 - 15844;
    v0 = LD32(a1-16);
    a0 = LD32(t0+4);
    a1 = LD32(v1-15844);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    a0 = a0 - 1;
    v1 = v1 & a0;
    a3 = v1 << 2;
    a1 = a3 + a1;
    a1 = LD32(a1);
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089DC3B8; }
    goto L_089DC398;
L_089DC398:;
    s1 = t0 + 0;
    v0 = LD32(a1);
    goto L_089DC3A0;
L_089DC3A0:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s1+8); goto L_089DC3CC; }
    goto L_089DC3A8;
L_089DC3A8:;
    a2 = a1 + 0;
    a1 = LD32(a1+4);
    cnd_ = a1 != 0;
    if (cnd_) { v0 = LD32(a1); goto L_089DC3A0; }
    goto L_089DC3B8;
L_089DC3B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DC3CC:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089DC3DC; }
    goto L_089DC3D4;
L_089DC3D4:;
    ST8(a1+8, v0);
    goto L_089DC3B8;
L_089DC3DC:;
    cnd_ = a2 == 0;
    v0 = D_08C2C21C - (-15844);
    if (cnd_) { goto L_089DC404; }
    goto L_089DC3E4;
L_089DC3E4:;
    v0 = LD32(a1+4);
    ST32(a2+4, v0);
    goto L_089DC3EC;
L_089DC3EC:;
    a0 = a1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DC3F4;
L_089DC3F4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089DC3B8;
L_089DC404:;
    v1 = LD32(v0-15844);
    a0 = LD32(a1+4);
    v1 = a3 + v1;
    ST32(v1, a0);
    goto L_089DC3EC;
L_089DC418:;
    a1 = 0 + 0;
    { u64 r_ = func_0896D8D0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DC420;
L_089DC420:;
    a1 = LD32(s0);
    goto L_089DC360;
}

/* 089DC428 */
rv_t func_089DC428(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DC428:;
    sp = sp - 32;
    s3 = D_08C2C21C - (-15844);
    v1 = LD32(a0);
    v0 = LD32(v1+144);
    t_ = v0;
    s2 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC454;
L_089DC454:;
    a3 = LD32(s2);
    v1 = 999;
    v0 = LD32(a3-16);
    v0 = s2 + v0;
    a2 = LD32(v0+4);
    cnd_ = a2 == v1;
    a0 = s3 - 15844;
    if (cnd_) { goto L_089DC4E4; }
    goto L_089DC470;
L_089DC470:;
    v0 = LD32(a0+4);
    v1 = LD32(s3-15844);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DC4C0; }
    goto L_089DC494;
L_089DC494:;
    a0 = LD32(a1);
    goto L_089DC498;
L_089DC498:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089DC538; }
    goto L_089DC4B0;
L_089DC4B0:;
    a1 = LD32(a1+4);
    goto L_089DC4B4;
L_089DC4B4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089DC498; }
    goto L_089DC4BC;
L_089DC4BC:;
    v1 = 0 + 0;
    goto L_089DC4C0;
L_089DC4C0:;
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(a3-16); goto L_089DC4E8; }
    goto L_089DC4C8;
L_089DC4C8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DC4E4:;
    v0 = LD32(a3-16);
    goto L_089DC4E8;
L_089DC4E8:;
    s1 = s3 - 15844;
    v1 = LD32(s1+4);
    v0 = s2 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    a0 = 12;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC508;
L_089DC508:;
    a0 = LD32(s3-15844);
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
    goto L_089DC4C8;
L_089DC538:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089DC4B0; }
    goto L_089DC544;
L_089DC544:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089DC4B4; }
    goto L_089DC550;
L_089DC550:;
    goto L_089DC4C0;
}

/* 089DC558 */
rv_t func_089DC558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DC558:;
    sp = sp - 16;
    v0 = LD32(a0+88);
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089DC588; }
    goto L_089DC56C;
L_089DC56C:;
    a1 = LD32(v0+56);
    cnd_ = a1 == 0;
    a0 = v0 + 60;
    if (cnd_) { goto L_089DC588; }
    goto L_089DC578;
L_089DC578:;
    v0 = LD32(a1+112);
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DC5B8; }
    goto L_089DC588;
L_089DC588:;
    v0 = LD_U8(v1+195);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1); goto L_089DC5A4; }
    goto L_089DC594;
L_089DC594:;
    v0 = LD32(v1+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DC5C4; }
    goto L_089DC5A0;
L_089DC5A0:;
    v0 = LD32(v1);
    goto L_089DC5A4;
L_089DC5A4:;
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    { rv_t r_ = func_08875D9C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC5B0;
L_089DC5B0:;
    a0 = v0 + 0;
    goto L_089DC5B4;
L_089DC5B4:;
    goto L_089DC5B8;
L_089DC5B8:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DC5C4:;
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC5CC;
L_089DC5CC:;
    a0 = v0 + 0;
    goto L_089DC5B4;
}

/* 089DC5D4 */
rv_t func_089DC5D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DC5D4:;
    sp = sp - 16;
    v0 = LD32(a0+88);
    cnd_ = v0 == 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089DC604; }
    goto L_089DC5E8;
L_089DC5E8:;
    a1 = LD32(v0+56);
    cnd_ = a1 == 0;
    a0 = v0 + 84;
    if (cnd_) { goto L_089DC604; }
    goto L_089DC5F4;
L_089DC5F4:;
    v0 = LD_U16(a1+114);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DC634; }
    goto L_089DC604;
L_089DC604:;
    v0 = LD_U8(v1+195);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1); goto L_089DC620; }
    goto L_089DC610;
L_089DC610:;
    v0 = LD32(v1+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DC640; }
    goto L_089DC61C;
L_089DC61C:;
    v0 = LD32(v1);
    goto L_089DC620;
L_089DC620:;
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    { rv_t r_ = func_08875DF4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC62C;
L_089DC62C:;
    a0 = v0 + 0;
    goto L_089DC630;
L_089DC630:;
    goto L_089DC634;
L_089DC634:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DC640:;
    { rv_t r_ = func_088BA884(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC648;
L_089DC648:;
    a0 = v0 + 0;
    goto L_089DC630;
}

/* 089DC650 */
rv_t func_089DC650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DC650:;
    sp = sp - 16;
    v1 = a0 + 0;
    a0 = LD32(a0+88);
    cnd_ = a0 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089DC6BC; }
    goto L_089DC66C;
L_089DC66C:;
    v0 = LD32(a0+56);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(v1+195); goto L_089DC6C0; }
    goto L_089DC678;
L_089DC678:;
    v0 = LD32(v0+112);
    a2 = (v0 >> 15) & 0x1;
    v0 = (v0 >> 1) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(v1+195); goto L_089DC6C0; }
    goto L_089DC68C;
L_089DC68C:;
    cnd_ = a2 != 0;
    v0 = a0 + 72;
    if (cnd_) { goto L_089DC6BC; }
    goto L_089DC694;
L_089DC694:;
    f0 = BITSF(LD32(a0+72));
    f1 = BITSF(LD32(v0+8));
    f2 = BITSF(LD32(v0+4));
    ST32(a1, FBITS(f0));
    ST32(a1+8, FBITS(f1));
    goto L_089DC6A8;
L_089DC6A8:;
    ST32(s0+4, FBITS(f2));
    goto L_089DC6B0;
L_089DC6B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DC6BC:;
    v0 = LD_U8(v1+195);
    goto L_089DC6C0;
L_089DC6C0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(v1); goto L_089DC6D8; }
    goto L_089DC6C8;
L_089DC6C8:;
    v0 = LD32(v1+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DC6EC; }
    goto L_089DC6D4;
L_089DC6D4:;
    v0 = LD32(v1);
    goto L_089DC6D8;
L_089DC6D8:;
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    { rv_t r_ = func_08875E48(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC6E4;
L_089DC6E4:;
    goto L_089DC6B0;
L_089DC6EC:;
    { rv_t r_ = func_088BAA20(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC6F4;
L_089DC6F4:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    goto L_089DC6A8;
}

/* 089DC70C */
rv_t func_089DC70C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DC70C:;
    sp = sp - 16;
    v1 = 999;
    s1 = a1 + 0;
    v0 = LD32(a0+144);
    cnd_ = v0 == a1;
    s0 = a0 + 0;
    if (cnd_) { goto L_089DC760; }
    goto L_089DC730;
L_089DC730:;
    cnd_ = v0 == v1;
    if (cnd_) { goto L_089DC7A4; }
    goto L_089DC738;
L_089DC738:;
    v0 = LD32(a0+92);
    ST32(a0+144, v1);
    a0 = v0 + 0;
    cnd_ = v0 != 0;
    ST8(s0+195, 0);
    if (cnd_) { goto L_089DC78C; }
    goto L_089DC74C;
L_089DC74C:;
    s1 = LD32(s0+96);
    goto L_089DC750;
L_089DC750:;
    ST32(s0+92, 0);
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089DC774; }
    goto L_089DC75C;
L_089DC75C:;
    ST32(s0+96, 0);
    goto L_089DC760;
L_089DC760:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DC774:;
    func_0896D344(a0);
    goto L_089DC77C;
L_089DC77C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DC784;
L_089DC784:;
    ST32(s0+96, 0);
    goto L_089DC760;
L_089DC78C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC79C;
L_089DC79C:;
    s1 = LD32(s0+96);
    goto L_089DC750;
L_089DC7A4:;
    ST32(s0+144, a1);
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DC7AC;
L_089DC7AC:;
    v0 = s1 ^ v0;
    v0 = v0 < 0x1u;
    ST8(s0+195, v0);
    goto L_089DC760;
}

/* 089DC7BC */
rv_t func_089DC7BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DC7BC:;
    sp = sp - 32;
    s5 = D_08B285AC - (-31316);
    s3 = a1 + 0;
    s2 = a2 + 0;
    a3 = LD32(a0+96);
    cnd_ = a3 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089DC904; }
    goto L_089DC7F4;
L_089DC7F4:;
    v1 = LD32(a0+128);
    v0 = LD32(s5-31316);
    cnd_ = v1 == v0;
    if (cnd_) { f0 = BITSF(LD32(a3+44)); goto L_089DC878; }
    goto L_089DC804;
L_089DC804:;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    s4 = LD32(v0+100);
    cnd_ = s4 == 0;
    if (cnd_) { goto L_089DC860; }
    goto L_089DC81C;
L_089DC81C:;
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC828;
L_089DC828:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC83C;
L_089DC83C:;
    a2 = LD32(s1);
    a0 = s4 + 0;
    a1 = s0 + 0;
    v1 = LD32(a2-12);
    a3 = 0x3000000u;
    a2 = v0 + 0;
    v1 = s1 + v1;
    f12 = BITSF(LD32(v1+200));
    { rv_t r_ = func_088067CC(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC860;
L_089DC860:;
    a0 = LD32(s1+96);
    func_0896D7E4(a0);
    goto L_089DC868;
L_089DC868:;
    v0 = LD32(s5-31316);
    a3 = LD32(s1+96);
    ST32(s1+128, v0);
    f0 = BITSF(LD32(a3+44));
    goto L_089DC878;
L_089DC878:;
    v0 = a3 + 44;
    f1 = BITSF(LD32(v0+8));
    ST32(s3, FBITS(f0));
    f0 = BITSF(LD32(v0+4));
    ST32(s3+8, FBITS(f1));
    ST32(s3+4, FBITS(f0));
    v1 = LD32(s1+96);
    v0 = v1 + 56;
    f8 = BITSF(LD32(v1+56));
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+20));
    f6 = BITSF(LD32(v0+24));
    f7 = BITSF(LD32(v0+28));
    ST32(s2+32, FBITS(f0));
    ST32(s2, FBITS(f8));
    ST32(s2+4, FBITS(f1));
    ST32(s2+8, FBITS(f2));
    ST32(s2+12, FBITS(f3));
    ST32(s2+16, FBITS(f4));
    ST32(s2+20, FBITS(f5));
    ST32(s2+24, FBITS(f6));
    ST32(s2+28, FBITS(f7));
    goto L_089DC8E0;
L_089DC8E0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DC904:;
    v1 = LD32(a0);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC914;
L_089DC914:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s3+8, FBITS(f0));
    ST32(s3, FBITS(f1));
    ST32(s3+4, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC93C;
L_089DC93C:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    ST32(s2+32, FBITS(f0));
    ST32(s2, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    ST32(s2+8, FBITS(f3));
    ST32(s2+12, FBITS(f4));
    ST32(s2+16, FBITS(f5));
    ST32(s2+20, FBITS(f6));
    ST32(s2+24, FBITS(f7));
    ST32(s2+28, FBITS(f8));
    goto L_089DC8E0;
}

/* 089DC988 */
rv_t func_089DC988(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DC988:;
    sp = sp - 16;
    v0 = LD32(a0+96);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DC9BC; }
    goto L_089DC99C;
L_089DC99C:;
    v0 = D_08AEF0FC - (-3844);
    v1 = D_08AEF100 - (-3840);
    f1 = BITSF(LD32(v0-3844));
    f0 = BITSF(LD32(v1-3840));
    f0 = f1 * f0;
    goto L_089DC9B4;
L_089DC9B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DC9BC:;
    f0 = func_0896EC88(a0);
    goto L_089DC9C4;
L_089DC9C4:;
    goto L_089DC9B4;
}

/* 089DC9CC */
rv_t func_089DC9CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_089DC9CC:;
    sp = sp - 96;
    s1 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+240);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DC9F0;
L_089DC9F0:;
    f10 = BITSF(LD32(v0+32));
    f7 = BITSF(LD32(v0+8));
    f8 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    v1 = D_08AEF104 - (-3836);
    f0 = BITSF(LD32(v1-3836));
    ST32(sp, FBITS(f1));
    f11 = f10 * f0;
    ST32(sp+4, FBITS(f2));
    f9 = f7 * f0;
    f0 = f8 * f0;
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+8, FBITS(f7));
    ST32(sp+20, FBITS(f8));
    ST32(sp+32, FBITS(f10));
    v1 = LD32(s0);
    ST32(sp+52, FBITS(f0));
    ST32(sp+48, FBITS(f9));
    ST32(sp+56, FBITS(f11));
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCA68;
L_089DCA68:;
    f2 = BITSF(LD32(v0));
    f0 = BITSF(LD32(sp+48));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f2 = f2 + f0;
    f1 = BITSF(LD32(sp+52));
    f0 = BITSF(LD32(sp+56));
    f3 = f3 + f1;
    f4 = f4 + f0;
    ST32(s1, FBITS(f2));
    ST32(s1+8, FBITS(f4));
    ST32(s1+4, FBITS(f3));
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
}

/* 089DCAAC */
rv_t func_089DCAAC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DCAAC:;
    sp = sp - 16;
    s2 = a1 + 0;
    v0 = LD32(a0+84);
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089DCADC; }
    goto L_089DCAD0;
L_089DCAD0:;
    v0 = LD_U8(v0+8);
    cnd_ = v0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DCBB8; }
    goto L_089DCADC;
L_089DCADC:;
    a0 = D_08C2B3A4 - (-19548);
    a1 = s2 + 0;
    a0 = a0 - 19548;
    a2 = 1;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DCAF0;
L_089DCAF0:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089DCBD4; }
    goto L_089DCAF8;
L_089DCAF8:;
    a2 = LD32(v0);
    v1 = 0x8004;
    v0 = LD32(a2-16);
    v0 = a1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    if (cnd_) { v1 = LD32(s1); goto L_089DCC74; }
    goto L_089DCB14;
L_089DCB14:;
    v0 = LD32(a2-16);
    v1 = 0x8004;
    v0 = a1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v0 = 0x801e;
    if (cnd_) { goto L_089DCC38; }
    goto L_089DCB2C;
L_089DCB2C:;
    cnd_ = a0 == v0;
    if (cnd_) { v1 = LD32(s1); goto L_089DCC3C; }
    goto L_089DCB34;
L_089DCB34:;
    v0 = LD32(a2+388);
    goto L_089DCB38;
L_089DCB38:;
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCB40;
L_089DCB40:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089DCBD4; }
    goto L_089DCB48;
L_089DCB48:;
    v1 = LD32(v0+20);
    v0 = 0xda0c0000u;
    v0 = v0 | 0xae3b;
    cnd_ = v1 == v0;
    if (cnd_) { v1 = LD32(s1); goto L_089DCBE8; }
    goto L_089DCB5C;
L_089DCB5C:;
    a1 = LD32(s0+364);
    goto L_089DCB60;
L_089DCB60:;
    v0 = (a1 >> 2) & 0x1;
    cnd_ = v0 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DCBB8; }
    goto L_089DCB6C;
L_089DCB6C:;
    v0 = (a1 >> 3) & 0x1;
    cnd_ = v0 == 0;
    v0 = (a1 >> 17) & 0x1;
    if (cnd_) { goto L_089DCB94; }
    goto L_089DCB78;
L_089DCB78:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v0 = (a1 >> 17) & 0x1;
    if (cnd_) { goto L_089DCBB8; }
    goto L_089DCB94;
L_089DCB94:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089DCBD8; }
    goto L_089DCB9C;
L_089DCB9C:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DCBD4; }
    goto L_089DCBB8;
L_089DCBB8:;
    goto L_089DCBBC;
L_089DCBBC:;
    v0 = a3 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DCBD4:;
    a0 = s1 + 0;
    goto L_089DCBD8;
L_089DCBD8:;
    a1 = s2 + 0;
    { rv_t r_ = func_08A0406C(a0, a1, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCBE0;
L_089DCBE0:;
    a3 = v0 + 0;
    goto L_089DCBB8;
L_089DCBE8:;
    v0 = LD32(v1+108);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCBF4;
L_089DCBF4:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s0+364); goto L_089DCB60; }
    goto L_089DCBFC;
L_089DCBFC:;
    v0 = LD32(s1);
    v1 = LD32(v0-16);
    v0 = 0x8004;
    v1 = s1 + v1;
    v1 = LD_U16(v1+8);
    cnd_ = v1 == v0;
    v0 = 0x801d;
    if (cnd_) { goto L_089DCC30; }
    goto L_089DCC18;
L_089DCC18:;
    cnd_ = v1 == v0;
    v0 = 0x801e;
    if (cnd_) { goto L_089DCC30; }
    goto L_089DCC20;
L_089DCC20:;
    cnd_ = v1 == v0;
    v0 = 0x8014;
    if (cnd_) { goto L_089DCC30; }
    goto L_089DCC28;
L_089DCC28:;
    cnd_ = v1 != v0;
    if (cnd_) { a1 = LD32(s0+364); goto L_089DCB60; }
    goto L_089DCC30;
L_089DCC30:;
    a3 = 1;
    goto L_089DCBB8;
L_089DCC38:;
    v1 = LD32(s1);
    goto L_089DCC3C;
L_089DCC3C:;
    v0 = LD32(v1-16);
    v1 = 0x801e;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 != v1;
    if (cnd_) { v0 = LD32(a2+388); goto L_089DCB38; }
    goto L_089DCC54;
L_089DCC54:;
    v1 = LD32(s1+852);
    v0 = LD32(a1+852);
    v1 = v1 & 0x1;
    v0 = v0 & 0x1;
    cnd_ = v1 != v0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DCBB8; }
    goto L_089DCC6C;
L_089DCC6C:;
    v0 = LD32(a2+388);
    goto L_089DCB38;
L_089DCC74:;
    v0 = LD32(v1-16);
    v1 = 0x8005;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 != v1;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DCB14; }
    goto L_089DCC8C;
L_089DCC8C:;
    goto L_089DCBBC;
}

/* 089DCC94 */
rv_t func_089DCC94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DCC94:;
    sp = sp - 16;
    f0 = BITSF(0);
    s0 = a0 + 0;
    f1 = BITSF(LD32(a0+132));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = 0 + 0;
    if (cnd_) { goto L_089DCCD0; }
    goto L_089DCCBC;
L_089DCCBC:;
    v0 = a1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DCCD0:;
    { u64 r_ = func_089DD858(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DCCD8;
L_089DCCD8:;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089DCCBC; }
    goto L_089DCCE0;
L_089DCCE0:;
    a0 = LD32(s0+88);
    v1 = LD32(a0+56);
    v0 = LD32(v1+112);
    v0 = (v0 >> 18) & 0x1;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089DCCBC; }
    goto L_089DCCF8;
L_089DCCF8:;
    a1 = 1;
    goto L_089DCCBC;
}

/* 089DCD00 */
rv_t func_089DCD00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DCD00:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    v0 = LD_U8(a0+196);
    cnd_ = v0 == s1;
    s0 = a0 + 0;
    if (cnd_) { goto L_089DCD2C; }
    goto L_089DCD24;
L_089DCD24:;
    cnd_ = s1 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089DCD48; }
    goto L_089DCD2C;
L_089DCD2C:;
    ST8(s0+196, s1);
    goto L_089DCD30;
L_089DCD30:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DCD48:;
    v0 = LD32(v1+112);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCD54;
L_089DCD54:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+196, s1); goto L_089DCD30; }
    goto L_089DCD5C;
L_089DCD5C:;
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCD6C;
L_089DCD6C:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_089DCE54; }
    goto L_089DCD80;
L_089DCD80:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DCDD0; }
    goto L_089DCDA4;
L_089DCDA4:;
    a0 = LD32(a1);
    goto L_089DCDA8;
L_089DCDA8:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089DCE5C; }
    goto L_089DCDC0;
L_089DCDC0:;
    a1 = LD32(a1+4);
    goto L_089DCDC4;
L_089DCDC4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089DCDA8; }
    goto L_089DCDCC;
L_089DCDCC:;
    v1 = 0 + 0;
    goto L_089DCDD0;
L_089DCDD0:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DCDE0; }
    goto L_089DCDD8;
L_089DCDD8:;
    v0 = LD32(v1+72);
    v0 = (v0 >> 3) & 0x1;
    goto L_089DCDE0;
L_089DCDE0:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+196, s1); goto L_089DCD30; }
    goto L_089DCDE8;
L_089DCDE8:;
    a1 = 0x2c130000u;
    a0 = s0 + 0;
    a1 = a1 | 0x4969;
    { u64 r_ = func_089DCFAC(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DCDF8;
L_089DCDF8:;
    cnd_ = v0 == 0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089DCD2C; }
    goto L_089DCE00;
L_089DCE00:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCE10;
L_089DCE10:;
    f12 = BITSF(LD32(s2+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCE1C;
L_089DCE1C:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+196, s1); goto L_089DCD30; }
    goto L_089DCE24;
L_089DCE24:;
    v1 = LD32(s0);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCE34;
L_089DCE34:;
    a2 = v0 + 0;
    v0 = D_08AEF108 - (-3832);
    f12 = BITSF(LD32(v0-3832));
    a0 = s2 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCE4C;
L_089DCE4C:;
    ST8(s0+196, s1);
    goto L_089DCD30;
L_089DCE54:;
    v0 = 0 + 0;
    goto L_089DCDE0;
L_089DCE5C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089DCDC0; }
    goto L_089DCE68;
L_089DCE68:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089DCDC4; }
    goto L_089DCE74;
L_089DCE74:;
    goto L_089DCDD0;
}

/* 089DCE7C */
rv_t func_089DCE7C(u32 a0, float f12)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089DCE7C:;
    v0 = D_08C2B3A0 - (-19552);
    v1 = LD_U8(v0-19552);
    f0 = BITSF(0);
    fcc = FCMP(f0, f12, 12);
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_089DCEBC; }
    goto L_089DCE94;
L_089DCE94:;
    cnd_ = fcc;
    if (cnd_) { ST8(a0+193, v0); goto L_089DCE9C; }
    goto L_089DCE9C;
L_089DCE9C:;
    f0 = BITSF(LD32(a0+160));
    v0 = 0 + 0;
    fcc = FCMP(f0, f12, 12);
    cnd_ = fcc;
    f1 = f0 - f12;
    if (cnd_) { goto L_089DCEBC; }
    goto L_089DCEB4;
L_089DCEB4:;
    ST32(a0+160, FBITS(f1));
    v0 = 1;
    goto L_089DCEBC;
L_089DCEBC:;
    return (rv_t){ v0, v1, f0 };
}

/* 089DCEC4 */
rv_t func_089DCEC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DCEC4:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+48);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCEE0;
L_089DCEE0:;
    v1 = 999;
    cnd_ = v0 == v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DCF30; }
    goto L_089DCEEC;
L_089DCEEC:;
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCEFC;
L_089DCEFC:;
    a0 = D_08C29F04 - (-24828);
    a0 = a0 - 24828;
    a1 = v0 + 0;
    a2 = 1;
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_089DCF10;
L_089DCF10:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DCF30; }
    goto L_089DCF18;
L_089DCF18:;
    { u64 r_ = func_0897DD80(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DCF20;
L_089DCF20:;
    goto L_089DCF24;
L_089DCF24:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DCF30:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A050C0(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCF38;
L_089DCF38:;
    goto L_089DCF24;
}

/* 089DCF40 */
void func_089DCF40(u32 a0, float f12)
{
    u32 v0 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
L_089DCF40:;
    v0 = D_08AEF10C - (-3828);
    f2 = BITSF(LD32(a0+140));
    f0 = BITSF(LD32(v0-3828));
    f3 = BITSF(LD32(a0+164));
    f0 = f2 * f0;
    f1 = f0 * f3;
    fcc = FCMP(f1, f12, 14);
    cnd_ = !fcc;
    if (cnd_) { f0 = f3 / f0; goto L_089DCF7C; }
    goto L_089DCF68;
L_089DCF68:;
    v0 = 1;
    ST8(a0+192, v0);
    ST32(a0+160, FBITS(f12));
    goto L_089DCF74;
L_089DCF74:;
    ST32(a0+164, FBITS(f12));
    return;
L_089DCF7C:;
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089DCF74; }
    goto L_089DCF8C;
L_089DCF8C:;
    f0 = BITSF(LD32(a0+160));
    fcc = FCMP(f0, f12, 14);
    cnd_ = fcc;
    ST8(a0+192, 0);
    if (cnd_) { goto L_089DCFA4; }
    goto L_089DCFA0;
L_089DCFA0:;
    f0 = f12;
    goto L_089DCFA4;
L_089DCFA4:;
    ST32(a0+160, FBITS(f0));
    goto L_089DCF74;
}

/* 089DCFAC */
u64 func_089DCFAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DCFAC:;
    sp = sp - 32;
    s2 = a1 + 0;
    v1 = LD32(a0);
    ST32(sp, 0);
    v0 = LD32(v1+256);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DCFD8;
L_089DCFD8:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    s0 = s0 + 88;
    a0 = s0 + 0;
    v0 = func_088D1C74(a0);
    goto L_089DCFF4;
L_089DCFF4:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = sp + 0;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD004;
L_089DD004:;
    a0 = LD32(sp);
    a1 = s2 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD014;
L_089DD014:;
    a0 = v0 + 0;
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD020;
L_089DD020:;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089DD038 */
rv_t func_089DD038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DD038:;
    sp = sp - 32;
    s3 = a2 + 0;
    s2 = a3 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+84);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD06C;
L_089DD06C:;
    v1 = LD32(s1);
    v0 = v0 ^ 0x3e7;
    a1 = s0 + 0;
    a2 = LD32(v1+164);
    a0 = s1 + 0;
    t_ = a2;
    s0 = 0 < v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD088;
L_089DD088:;
    ST32(s2, v0);
    ST8(s2+7, 0);
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    v1 = v1 ^ s3;
    v1 = v1 < 0x1u;
    ST8(s2+6, v1);
    a0 = LD32(s1);
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    v1 = LD32(v0+16);
    v1 = v1 & 0x1;
    cnd_ = v1 != 0;
    if (cnd_) { ST8(s2+5, 0); goto L_089DD10C; }
    goto L_089DD0C8;
L_089DD0C8:;
    v0 = LD32(a0-12);
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { ST8(s2+5, 0); goto L_089DD10C; }
    goto L_089DD0E8;
L_089DD0E8:;
    cnd_ = s0 != 0;
    if (cnd_) { ST8(s2+5, 0); goto L_089DD10C; }
    goto L_089DD0F0;
L_089DD0F0:;
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s2+5, 0); goto L_089DD10C; }
    goto L_089DD0FC;
L_089DD0FC:;
    v0 = LD_U8(s1+68);
    cnd_ = v0 != 0;
    v0 = 1;
    if (cnd_) { goto L_089DD14C; }
    goto L_089DD108;
L_089DD108:;
    ST8(s2+5, 0);
    goto L_089DD10C;
L_089DD10C:;
    v0 = LD32(s1);
    a0 = 27;
    ST32(s2+8, a0);
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    v0 = LD32(v1+4);
    v0 = v0 ^ s3;
    v0 = v0 < 0x1u;
    ST8(s2+4, v0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DD14C:;
    ST8(s2+5, v0);
    goto L_089DD10C;
}

/* 089DD154 */
rv_t func_089DD154(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DD154:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = func_0897364C();
    goto L_089DD170;
L_089DD170:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DD194; }
    goto L_089DD178;
L_089DD178:;
    v1 = LD32(s0);
    v0 = LD32(v1+84);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD188;
L_089DD188:;
    v1 = 999;
    cnd_ = v0 != v1;
    a0 = (u32)-256;
    if (cnd_) { goto L_089DD1A4; }
    goto L_089DD194;
L_089DD194:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A055A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD1A0;
L_089DD1A0:;
    a0 = v0 + 0;
    goto L_089DD1A4;
L_089DD1A4:;
    v0 = a0 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089DD1BC */
rv_t func_089DD1BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DD1BC:;
    f12 = BITSF(0);
    sp = sp - 16;
    a2 = 0 + 0;
    { rv_t r_ = func_08A05100(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD1D0;
L_089DD1D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089DD1DC */
rv_t func_089DD1DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089DD1DC:;
    sp = sp - 48;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DD20C; }
    goto L_089DD204;
L_089DD204:;
    v0 = LD_U8(a0+68);
    v1 = 0 < v0;
    goto L_089DD20C;
L_089DD20C:;
    s1 = v1 & 0xff;
    { rv_t r_ = func_08A042E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD214;
L_089DD214:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DD238; }
    goto L_089DD220;
L_089DD220:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089DD23C; }
    goto L_089DD22C;
L_089DD22C:;
    cnd_ = s1 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DD24C; }
    goto L_089DD234;
L_089DD234:;
    goto L_089DD238;
L_089DD238:;
    goto L_089DD23C;
L_089DD23C:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089DD24C:;
    v0 = D_08B2858C - (-31348);
    f20 = BITSF(LD32(v0-31348));
    v1 = LD32(s0);
    f0 = BITSF(LD32(s0+12));
    v0 = LD32(v1+376);
    t_ = v0;
    f20 = f20 - f0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD268;
L_089DD268:;
    f1 = BITSF(LD32(s0+160));
    f0 = f0 * f20;
    v1 = LD32(s0);
    a0 = s0 + 0;
    f1 = f1 + f0;
    v0 = LD32(v1+348);
    t_ = v0;
    ST32(sp, FBITS(f1));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD288;
L_089DD288:;
    a0 = sp + 0;
    a1 = sp + 4;
    a2 = sp + 8;
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, 0);
    f0 = func_089DE7FC(a0, a1, a2);
    goto L_089DD2A0;
L_089DD2A0:;
    a0 = s0 + 0;
    ST32(s0+160, FBITS(f0));
    v0 = LD32(s0);
    v1 = LD32(v0+184);
    t_ = v1;
    f12 = f20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD2B8;
L_089DD2B8:;
    goto L_089DD238;
}

/* 089DD2C0 */
rv_t func_089DD2C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DD2C0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 520;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD2DC;
L_089DD2DC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    func_089D9E6C(a0);
    goto L_089DD2E8;
L_089DD2E8:;
    v1 = LD32(s0);
    a1 = s1 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD2FC;
L_089DD2FC:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    a0 = s0 + 0;
    { rv_t r_ = func_0885E738(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD310;
L_089DD310:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089DD324 */
u32 func_089DD324(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f12 = 0, f20 = 0, f21 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_089DD324:;
    sp = sp - 80;
    a3 = D_08C2B3A4 - (-19548);
    v0 = a3 - 19548;
    s6 = D_08AEF110 - (-3824);
    s5 = a1 + 0;
    s3 = a0 + 0;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp+4, 0);
    v1 = v1 + 1;
    s1 = LD32(s3+36);
    ST32(sp, v0);
    ST32(sp+8, 0);
    ST32(v0+8, v1);
    cnd_ = a2 == 0;
    f20 = BITSF(LD32(s6-3824));
    if (cnd_) { goto L_089DD3D8; }
    goto L_089DD390;
L_089DD390:;
    a3 = LD32(a3-19548);
    goto L_089DD394;
L_089DD394:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089DD3C8; }
    goto L_089DD3AC;
L_089DD3AC:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089DD3DC; }
    goto L_089DD3BC;
L_089DD3BC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089DD3AC; }
    goto L_089DD3C8;
L_089DD3C8:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089DD394; }
    goto L_089DD3D8;
L_089DD3D8:;
    a0 = LD32(sp+8);
    goto L_089DD3DC;
L_089DD3DC:;
    cnd_ = a0 == 0;
    v0 = D_08AEF114 - (-3820);
    if (cnd_) { goto L_089DD42C; }
    goto L_089DD3E4;
L_089DD3E4:;
    f21 = BITSF(LD32(v0-3820));
    v1 = s1 ^ 0x3e7;
    s2 = v1 < 0x1u;
    s4 = 0x10000u;
    s0 = LD32(a0);
    goto L_089DD3F8;
L_089DD3F8:;
    a1 = 1;
    a0 = sp + 0;
    func_08AC7344(a0, a1);
    goto L_089DD404;
L_089DD404:;
    a0 = LD32(s0);
    v1 = LD32(a0-16);
    v1 = s0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(v1+4); goto L_089DD518; }
    goto L_089DD420;
L_089DD420:;
    a0 = LD32(sp+8);
    goto L_089DD424;
L_089DD424:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089DD3F8; }
    goto L_089DD42C;
L_089DD42C:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089DD4B4; }
    goto L_089DD440;
L_089DD440:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089DD4B4; }
    goto L_089DD44C;
L_089DD44C:;
    v0 = LD32(s1);
    goto L_089DD450;
L_089DD450:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089DD4A4; }
    goto L_089DD464;
L_089DD464:;
    v0 = LD_U8(s0+8);
    goto L_089DD468;
L_089DD468:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089DD510; }
    goto L_089DD470;
L_089DD470:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089DD500; }
    goto L_089DD478;
L_089DD478:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089DD480;
L_089DD480:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD48C;
L_089DD48C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089DD498;
L_089DD498:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089DD468; }
    goto L_089DD4A0;
L_089DD4A0:;
    v1 = LD32(s1+4);
    goto L_089DD4A4;
L_089DD4A4:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089DD450; }
    goto L_089DD4B4;
L_089DD4B4:;
    f0 = BITSF(LD32(s6-3824));
    ST32(s5, FBITS(f20));
    fcc = FCMP(f20, f0, 2);
    cnd_ = !fcc;
    v0 = 1;
    if (cnd_) { goto L_089DD4D0; }
    goto L_089DD4CC;
L_089DD4CC:;
    v0 = 0 + 0;
    goto L_089DD4D0;
L_089DD4D0:;
    sp = sp + 80;
    return v0;
L_089DD500:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089DD480;
L_089DD510:;
    s0 = LD32(s0+4);
    goto L_089DD498;
L_089DD518:;
    v0 = s1 ^ a1;
    v0 = 0 < v0;
    v0 = s2 | v0;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089DD424; }
    goto L_089DD52C;
L_089DD52C:;
    v0 = LD32(a0-12);
    a2 = s0 + v0;
    v1 = LD_U8(a2+77);
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089DD424; }
    goto L_089DD540;
L_089DD540:;
    v0 = LD_U8(a2+247);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089DD424; }
    goto L_089DD54C;
L_089DD54C:;
    cnd_ = s1 == a1;
    if (cnd_) { a0 = LD32(sp+8); goto L_089DD424; }
    goto L_089DD554;
L_089DD554:;
    a2 = LD32(a2+100);
    cnd_ = a2 == 0;
    v0 = a2 + 112;
    if (cnd_) { goto L_089DD420; }
    goto L_089DD560;
L_089DD560:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089DD424; }
    goto L_089DD568;
L_089DD568:;
    v0 = LD32(a2+112);
    v0 = v0 & s4;
    cnd_ = v0 == 0;
    a1 = s3 + 12;
    if (cnd_) { goto L_089DD424; }
    goto L_089DD578;
L_089DD578:;
    f12 = BITSF(LD32(a2+368));
    a0 = s3 + 0;
    a2 = a2 + 356;
    f12 = f12 + f21;
    a3 = sp + 16;
    { rv_t r_ = func_088347A0(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD590;
L_089DD590:;
    cnd_ = v0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089DD424; }
    goto L_089DD598;
L_089DD598:;
    f0 = BITSF(LD32(sp+16));
    fcc = FCMP(f0, f20, 12);
    cnd_ = fcc;
    if (cnd_) { f20 = f0; goto L_089DD424; }
    goto L_089DD5AC;
L_089DD5AC:;
    goto L_089DD424;
}

/* 089DD5B4 */
u64 func_089DD5B4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089DD5B4:;
    sp = sp - 48;
    s5 = a1 + 0;
    s4 = a0 + 0;
    f12 = BITSF(LD32(a0+40));
    a0 = a1 + 0;
    s3 = LD32(s4+36);
    func_08834F74(a0, f12);
    goto L_089DD5F0;
L_089DD5F0:;
    v1 = D_08C2B3A4 - (-19548);
    v1 = v1 - 19548;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    func_08AC7344(a0, a1);
    goto L_089DD61C;
L_089DD61C:;
    v1 = LD32(sp+8);
    cnd_ = v1 == 0;
    v0 = s3 ^ 0x3e7;
    if (cnd_) { goto L_089DD664; }
    goto L_089DD628;
L_089DD628:;
    s6 = v0 < 0x1u;
    s1 = LD32(v1);
    goto L_089DD630;
L_089DD630:;
    a1 = 1;
    a0 = sp + 0;
    func_08AC7344(a0, a1);
    goto L_089DD63C;
L_089DD63C:;
    a1 = LD32(s1);
    v1 = LD32(a1-16);
    v1 = s1 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = LD32(v1+4); goto L_089DD6B8; }
    goto L_089DD658;
L_089DD658:;
    v1 = LD32(sp+8);
    goto L_089DD65C;
L_089DD65C:;
    cnd_ = v1 != 0;
    if (cnd_) { s1 = LD32(v1); goto L_089DD630; }
    goto L_089DD664;
L_089DD664:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089DD6A8; }
    goto L_089DD678;
L_089DD678:;
    v0 = LD32(s5+4);
    goto L_089DD67C;
L_089DD67C:;
    v0 = 0 < v0;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089DD6A8:;
    { u64 r_ = func_08AC73E8(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD6B0;
L_089DD6B0:;
    v0 = LD32(s5+4);
    goto L_089DD67C;
L_089DD6B8:;
    v0 = s3 ^ s2;
    v0 = 0 < v0;
    v0 = s6 | v0;
    cnd_ = v0 == 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_089DD65C; }
    goto L_089DD6CC;
L_089DD6CC:;
    v0 = LD32(a1-12);
    v0 = s1 + v0;
    v1 = LD_U8(v0+77);
    cnd_ = v1 != 0;
    v1 = LD32(sp+8);
    if (cnd_) { goto L_089DD65C; }
    goto L_089DD6E0;
L_089DD6E0:;
    v0 = LD_U8(v0+247);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DD65C; }
    goto L_089DD6EC;
L_089DD6EC:;
    cnd_ = s3 == s2;
    a0 = s1 + 0;
    if (cnd_) { goto L_089DD65C; }
    goto L_089DD6F4;
L_089DD6F4:;
    v0 = LD32(a1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD700;
L_089DD700:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD714;
L_089DD714:;
    v1 = LD32(s1);
    a1 = s0 + 0;
    a2 = v0 + 0;
    a0 = LD32(v1-12);
    a3 = s4 + 0;
    t0 = s5 + 0;
    a0 = s1 + a0;
    a0 = a0 + 88;
    { rv_t r_ = func_088D189C(a0, a1, a2, a3, t0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD738;
L_089DD738:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s5+4, s2); goto L_089DD658; }
    goto L_089DD740;
L_089DD740:;
    v1 = LD32(sp+8);
    goto L_089DD65C;
}

/* 089DD748 */
u64 func_089DD748(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DD748:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = func_0897364C();
    goto L_089DD760;
L_089DD760:;
    cnd_ = v0 != 0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_089DD790; }
    goto L_089DD768;
L_089DD768:;
    v1 = LD32(v0-28832);
    v0 = 5;
    cnd_ = v1 == v0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089DD790; }
    goto L_089DD778;
L_089DD778:;
    v0 = a0 + 0;
    sp = sp + 32;
    return (u64)v0 | ((u64)v1 << 32);
L_089DD790:;
    v1 = D_08C2BDB8 - (-16968);
    v1 = v1 - 16968;
    v0 = LD32(v1+8);
    a0 = sp + 0;
    a1 = 1;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC7140(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD7BC;
L_089DD7BC:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_089DD7F0; }
    goto L_089DD7C8;
L_089DD7C8:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089DD7E0; }
    goto L_089DD7D8;
L_089DD7D8:;
    a0 = 0 + 0;
    goto L_089DD778;
L_089DD7E0:;
    { u64 r_ = func_08AC71E4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD7E8;
L_089DD7E8:;
    a0 = 0 + 0;
    goto L_089DD778;
L_089DD7F0:;
    a0 = sp + 0;
    goto L_089DD7F4;
L_089DD7F4:;
    a1 = 1;
    s0 = LD32(s0);
    { u64 r_ = func_08AC7140(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD800;
L_089DD800:;
    v1 = LD32(s1);
    a0 = LD32(s0+92);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 == v1;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_089DD82C; }
    goto L_089DD81C;
L_089DD81C:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_089DD7F4; }
    goto L_089DD824;
L_089DD824:;
    a0 = LD32(sp);
    goto L_089DD7C8;
L_089DD82C:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089DD848; }
    goto L_089DD840;
L_089DD840:;
    a0 = 1;
    goto L_089DD778;
L_089DD848:;
    { u64 r_ = func_08AC71E4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DD850;
L_089DD850:;
    a0 = 1;
    goto L_089DD778;
}

/* 089DD858 */
u64 func_089DD858(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089DD858:;
    v1 = LD32(a0+88);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DD86C; }
    goto L_089DD864;
L_089DD864:;
    v0 = LD32(v1+56);
    v0 = 0 < v0;
    goto L_089DD86C;
L_089DD86C:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089DD874 */
void func_089DD874(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DD874:;
    sp = sp - 16;
    v0 = LD32(a0+104);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DD894; }
    goto L_089DD888;
L_089DD888:;
    goto L_089DD88C;
L_089DD88C:;
    sp = sp + 16;
    return;
L_089DD894:;
    v0 = LD32(v0);
    v1 = LD32(v0+20);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD8A4;
L_089DD8A4:;
    goto L_089DD88C;
}

/* 089DD8AC */
void func_089DD8AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DD8AC:;
    sp = sp - 16;
    v0 = LD32(a0+104);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DD8CC; }
    goto L_089DD8C0;
L_089DD8C0:;
    goto L_089DD8C4;
L_089DD8C4:;
    sp = sp + 16;
    return;
L_089DD8CC:;
    v0 = LD32(v0);
    v1 = LD32(v0+16);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD8DC;
L_089DD8DC:;
    goto L_089DD8C4;
}

/* 089DD8E4 */
u64 func_089DD8E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DD8E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = LD32(a0+104);
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD908;
L_089DD908:;
    v0 = LD32(s0+104);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DD928; }
    goto L_089DD914;
L_089DD914:;
    ST32(s0+104, 0);
    goto L_089DD918;
L_089DD918:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089DD928:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD938;
L_089DD938:;
    ST32(s0+104, 0);
    goto L_089DD918;
}

/* 089DD940 */
rv_t func_089DD940(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DD940:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+84);
    cnd_ = v0 == 0;
    a0 = 28;
    if (cnd_) { goto L_089DD974; }
    goto L_089DD960;
L_089DD960:;
    goto L_089DD964;
L_089DD964:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DD974:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD97C;
L_089DD97C:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08984684(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DD98C;
L_089DD98C:;
    cnd_ = s1 == 0;
    ST32(s0+84, s1);
    if (cnd_) { goto L_089DD960; }
    goto L_089DD994;
L_089DD994:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DD964; }
    goto L_089DD9A0;
L_089DD9A0:;
    v0 = 1;
    ST8(s1+11, v0);
    goto L_089DD964;
}

/* 089DD9AC */
u64 func_089DD9AC(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089DD9AC:;
    v1 = LD32(a0+96);
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DD9C4; }
    goto L_089DD9B8;
L_089DD9B8:;
    v0 = LD32(v1+8);
    v0 = v0 ^ 0x1;
    v0 = v0 < 0x1u;
    goto L_089DD9C4;
L_089DD9C4:;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089DD9CC */
void func_089DD9CC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr4 = v[4];
    u8 stack_[464] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 464);
L_089DD9CC:;
    sp = sp - 464;
    s4 = a1 & 0xff;
    s1 = a0 + 0;
    cnd_ = s4 == 0;
    if (cnd_) { goto L_089DDA30; }
    goto L_089DDA24;
L_089DDA24:;
    v0 = D_08AEF118 - (-3816);
    f0 = BITSF(LD32(v0-3816));
    ST32(a0+172, FBITS(f0));
    goto L_089DDA30;
L_089DDA30:;
    v0 = LD32(s1);
    fp = D_08B159FC - (23036);
    s5 = 999;
    v1 = LD32(v0+444);
    s3 = 0 + 0;
    t_ = v1;
    s2 = sp + 48;
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DDA4C;
L_089DDA4C:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    v0 = LD32(v1+448);
    t_ = v0;
    f23 = f0;
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DDA60;
L_089DDA60:;
    v0 = LD32(s1);
    f12 = BITSF(0);
    a0 = s1 + 0;
    v1 = LD32(v0+56);
    a1 = sp + 0;
    v0 = D_08AEF11C - (-3812);
    a2 = 0 + 0;
    f22 = f0;
    t_ = v1;
    f25 = BITSF(LD32(v0-3812));
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DDA88;
L_089DDA88:;
    v0 = D_08AEF120 - (-3808);
    f0 = BITSF(LD32(v0-3808));
    ST32(sp+16, 0);
    a2 = D_08C2C21C - (-15844);
    a0 = a2 - 15844;
    ST32(sp+24, FBITS(f0));
    ST32(sp+20, 0);
    v0 = LD32(fp+23036);
    v1 = LD32(a0+8);
    a1 = LD32(a0+4);
    f1 = BITSF(LD32(v0+20));
    v1 = v1 + 1;
    ST32(sp+16, FBITS(f1));
    f0 = BITSF(LD32(v0+32));
    ST32(sp+20, FBITS(f0));
    f1 = BITSF(LD32(v0+44));
    ST32(a0+8, v1);
    ST32(sp+24, FBITS(f1));
    ST32(sp+48, a0);
    ST32(sp+52, 0);
    cnd_ = a1 == 0;
    ST32(sp+56, 0);
    if (cnd_) { goto L_089DDB2C; }
    goto L_089DDAE0;
L_089DDAE0:;
    a0 = LD32(a2-15844);
    a2 = a1 + 0;
    goto L_089DDAE8;
L_089DDAE8:;
    a1 = LD32(s2+4);
    v0 = a1 << 2;
    v0 = v0 + a0;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(s2+8, v1);
    if (cnd_) { goto L_089DDB1C; }
    goto L_089DDB00;
L_089DDB00:;
    v1 = LD32(s2+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a2 = LD32(sp+56); goto L_089DDB30; }
    goto L_089DDB10;
L_089DDB10:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_089DDB00; }
    goto L_089DDB1C;
L_089DDB1C:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(s2+4, v0);
    if (cnd_) { goto L_089DDAE8; }
    goto L_089DDB2C;
L_089DDB2C:;
    a2 = LD32(sp+56);
    goto L_089DDB30;
L_089DDB30:;
    cnd_ = a2 == 0;
    v0 = D_08AEF124 - (-3804);
    if (cnd_) { goto L_089DDBA4; }
    goto L_089DDB38;
L_089DDB38:;
    f26 = BITSF(LD32(v0-3804));
    v1 = D_08AEF120 - (-3808);
    v0 = D_08AEF12C - (-3796);
    {vr0=1.57079632679f;}
    f24 = BITSF(LD32(v1-3808));
    f27 = BITSF(LD32(v0-3796));
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];vr4=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(vr4));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    s6 = 0 + 0;
    a0 = s2 + 0;
    goto L_089DDB64;
L_089DDB64:;
    a1 = 1;
    s0 = LD32(a2);
    func_08AC4E2C(a0, a1);
    goto L_089DDB70;
L_089DDB70:;
    v0 = LD32(s1);
    a1 = LD32(s0);
    a0 = s0 + 0;
    v1 = LD32(v0-16);
    v0 = LD32(a1+24);
    v1 = s1 + v1;
    t_ = v0;
    a1 = LD32(v1+4);
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DDB90;
L_089DDB90:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089DDD20; }
    goto L_089DDB98;
L_089DDB98:;
    a2 = LD32(sp+56);
    goto L_089DDB9C;
L_089DDB9C:;
    cnd_ = a2 != 0;
    a0 = s2 + 0;
    if (cnd_) { goto L_089DDB64; }
    goto L_089DDBA4;
L_089DDBA4:;
    v0 = LD32(s1);
    a0 = s1 + 0;
    v1 = LD32(v0+440);
    t_ = v1;
    a1 = s5 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DDBB8;
L_089DDBB8:;
    v0 = 999;
    cnd_ = s5 == v0;
    s0 = s1 + 224;
    if (cnd_) { goto L_089DDC30; }
    goto L_089DDBC4;
L_089DDBC4:;
    v1 = LD32(s0+4);
    goto L_089DDBC8;
L_089DDBC8:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DDBDC; }
    goto L_089DDBD0;
L_089DDBD0:;
    v1 = LD32(v1);
    cnd_ = v1 != 0;
    v0 = v0 + 1;
    if (cnd_) { goto L_089DDBD0; }
    goto L_089DDBDC;
L_089DDBDC:;
    v0 = v0 < s3;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(sp+48); goto L_089DDC34; }
    goto L_089DDBE8;
L_089DDBE8:;
    a0 = LD32(s0+4);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s0+4); goto L_089DDBC8; }
    goto L_089DDBF4;
L_089DDBF4:;
    v1 = LD32(a0);
    cnd_ = v1 == 0;
    v0 = LD32(a0+4);
    if (cnd_) { goto L_089DDC24; }
    goto L_089DDC00;
L_089DDC00:;
    ST32(v1+4, v0);
    goto L_089DDC04;
L_089DDC04:;
    v0 = LD32(a0+4);
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+4, v1); goto L_089DDC14; }
    goto L_089DDC10;
L_089DDC10:;
    ST32(v0, v1);
    goto L_089DDC14;
L_089DDC14:;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DDC1C;
L_089DDC1C:;
    v1 = LD32(s0+4);
    goto L_089DDBC8;
L_089DDC24:;
    ST32(s1+224, v0);
    v1 = LD32(a0);
    goto L_089DDC04;
L_089DDC30:;
    s1 = LD32(sp+48);
    goto L_089DDC34;
L_089DDC34:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089DDCB8; }
    goto L_089DDC44;
L_089DDC44:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089DDCB8; }
    goto L_089DDC50;
L_089DDC50:;
    v0 = LD32(s1);
    goto L_089DDC54;
L_089DDC54:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089DDCA8; }
    goto L_089DDC68;
L_089DDC68:;
    v0 = LD_U8(s0+8);
    goto L_089DDC6C;
L_089DDC6C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089DDD18; }
    goto L_089DDC74;
L_089DDC74:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089DDD08; }
    goto L_089DDC7C;
L_089DDC7C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089DDC84;
L_089DDC84:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DDC90;
L_089DDC90:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089DDC9C;
L_089DDC9C:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089DDC6C; }
    goto L_089DDCA4;
L_089DDCA4:;
    v1 = LD32(s1+4);
    goto L_089DDCA8;
L_089DDCA8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089DDC54; }
    goto L_089DDCB8;
L_089DDCB8:;
    sp = sp + 464;
    { v[0]=vr0;v[4]=vr4;return; }
L_089DDD08:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089DDC84;
L_089DDD18:;
    s0 = LD32(s0+4);
    goto L_089DDC9C;
L_089DDD20:;
    f20 = BITSF(0);
    a0 = s0 + 0;
    v1 = LD32(v0+56);
    a1 = sp + 32;
    f12 = f20;
    t_ = v1;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DDD3C;
L_089DDD3C:;
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+36));
    {u32 a_=sp+(240);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f3 = f1 - f0;
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+40));
    f21 = f20;
    f2 = f2 - f0;
    f0 = BITSF(LD32(sp+8));
    v0 = FBITS(f3);
    {v[8]=BITSF(v0);}
    f4 = f1 - f0;
    v0 = FBITS(f2);
    {v[9]=BITSF(v0);}
    ST32(sp+64, FBITS(f3));
    v0 = FBITS(f4);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    ST32(sp+68, FBITS(f2));
    fcc = FCMP(f0, f20, 2);
    cnd_ = fcc;
    ST32(sp+72, FBITS(f4));
    if (cnd_) { goto L_089DDDE8; }
    goto L_089DDDA4;
L_089DDDA4:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {u32 a_=sp+(256);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v0=FBITS(vr4);}
    f21 = BITSF(v0);
    {float s0=v[12];float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f4 = BITSF(v0);
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    ST32(sp+88, FBITS(f4));
    {v0=FBITS(v[1]);}
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, v0);
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, v0);
    ST32(sp+72, FBITS(f4));
    goto L_089DDDE8;
L_089DDDE8:;
    fcc = FCMP(f21, f23, 14);
    cnd_ = !fcc;
    a2 = LD32(sp+56);
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DDDF8;
L_089DDDF8:;
    f3 = BITSF(LD32(sp+64));
    f4 = BITSF(LD32(sp+72));
    f2 = BITSF(0);
    v0 = FBITS(f3);
    {u32 a_=sp+(272);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    {v[8]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[9]=BITSF(s6);}
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f20 = f2;
    fcc = FCMP(f0, f2, 2);
    cnd_ = fcc;
    ST32(sp+68, FBITS(f2));
    if (cnd_) { goto L_089DDE80; }
    goto L_089DDE3C;
L_089DDE3C:;
    {float s0=vr0;float d0=sqrtf(s0);vr4=d0;}
    {u32 a_=sp+(256);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {float s0=v[12];float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f4 = BITSF(v0);
    {v0=FBITS(vr0);}
    f1 = BITSF(v0);
    f3 = BITSF(v0);
    ST32(sp+72, FBITS(f4));
    {v0=FBITS(v[1]);}
    f2 = BITSF(v0);
    ST32(sp+64, FBITS(f1));
    ST32(sp+68, v0);
    ST32(sp+80, FBITS(f1));
    ST32(sp+84, v0);
    ST32(sp+88, FBITS(f4));
    goto L_089DDE80;
L_089DDE80:;
    a0 = sp + 208;
    a1 = sp + 212;
    a2 = sp + 216;
    v0 = FBITS(f3);
    {u32 a_=sp+(288);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(304);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr4=BITSF(v0);}
    v1 = LD32(sp+20);
    v0 = FBITS(f2);
    ST32(sp+212, FBITS(f26));
    {v[5]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+216, FBITS(f24));
    {v[6]=BITSF(v0);}
    v0 = LD32(sp+16);
    {vr0=BITSF(v0);}
    v0 = LD32(sp+24);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=vr4;float s1=v[5];float s2=v[6];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {u32 a_=sp+(320);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v0=FBITS(vr4);}
    ST32(sp+208, v0);
    v0 = FBITS(f22);
    {vr0=BITSF(v0);}
    {u32 a_=sp+(320);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f0 = func_089DE7FC(a0, a1, a2);
    goto L_089DDEEC;
L_089DDEEC:;
    {vr0=0.63661977236f;}
    {u32 a_=sp+(320);vr4=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f2 = f0;
    {float s0=vr4;float t0=vr0;float d0=s0*t0;vr0=d0;}
    {float s0=vr0;float d0=cosf(s0*1.57079632679f);vr0=d0;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    a2 = LD32(sp+56);
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DDF18;
L_089DDF18:;
    v0 = FBITS(f2);
    {u32 a_=sp+(352);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(fp+23036);
    {u32 a_=sp+(352);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=vr0;float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    f7 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(sp+32));
    f3 = BITSF(LD32(sp+36));
    f2 = BITSF(LD32(sp+40));
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    f4 = f4 - f5;
    f3 = f3 - f6;
    f2 = f2 - f7;
    {u32 a_=sp+(368);v[8]=BITSF(LD32(a_+0));v[9]=BITSF(LD32(a_+4));v[10]=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    v0 = FBITS(f4);
    {v[8]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[9]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[10]=BITSF(v0);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=v[8];float t1=v[9];float t2=v[10];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr4=sum;}
    {v0=FBITS(vr4);}
    f0 = BITSF(v0);
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    {u32 a_=sp+(336);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    fcc = FCMP(f0, f20, 2);
    f12 = f20;
    ST32(sp+80, FBITS(f5));
    {float s0=vr0;float t0=v[12];float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    ST32(sp+84, FBITS(f6));
    s7 = (v0 >> 0) & 0x7fffffff;
    ST32(sp+88, FBITS(f7));
    ST32(sp+96, FBITS(f4));
    ST32(sp+100, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+104, FBITS(f2));
    if (cnd_) { goto L_089DDFFC; }
    goto L_089DDFB8;
L_089DDFB8:;
    {float s0=vr4;float d0=sqrtf(s0);vr4=d0;}
    {u32 a_=sp+(256);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    {v0=FBITS(vr4);}
    f12 = BITSF(v0);
    {float s0=v[12];float t0=vr4;float d0=s0/t0;vr0=d0;}
    {float s0=v[8];float s1=v[9];float s2=v[10];float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+120, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+112, FBITS(f2));
    ST32(sp+116, v0);
    ST32(sp+96, FBITS(f2));
    ST32(sp+100, v0);
    ST32(sp+104, FBITS(f3));
    goto L_089DDFFC;
L_089DDFFC:;
    v1 = LD32(s1);
    a1 = sp + 80;
    a2 = sp + 96;
    v0 = LD32(v1-16);
    t0 = 1;
    a0 = sp + 128;
    v0 = s1 + v0;
    a3 = LD32(v0+4);
    func_08835014(a0, a1, a2, a3, t0, f12);
    goto L_089DE020;
L_089DE020:;
    a0 = sp + 128;
    { rv_t r_ = ({ v[0]=vr0;v[4]=vr4;__auto_type vr_t_ = func_08834E84(a0); vr0=v[0];vr4=v[4];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE028;
L_089DE028:;
    v1 = v0 + 0;
    v0 = LD_U8(v0+32);
    v0 = v0 ^ 0x1;
    cnd_ = v0 != 0;
    f4 = BITSF(LD32(sp+96));
    if (cnd_) { goto L_089DE108; }
    goto L_089DE03C;
L_089DE03C:;
    f1 = BITSF(LD32(v1));
    f3 = BITSF(LD32(sp+100));
    f2 = BITSF(LD32(sp+104));
    f4 = f4 * f1;
    f0 = BITSF(LD32(sp+80));
    f3 = f3 * f1;
    f2 = f2 * f1;
    f5 = f0 + f4;
    f1 = BITSF(LD32(sp+84));
    f0 = BITSF(LD32(sp+88));
    ST32(sp+192, FBITS(f4));
    f1 = f1 + f3;
    f6 = f0 + f2;
    ST32(sp+196, FBITS(f3));
    ST32(sp+200, FBITS(f2));
    ST32(sp+112, FBITS(f5));
    ST32(sp+116, FBITS(f1));
    ST32(sp+120, FBITS(f6));
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+120));
    fcc = FCMP(f0, f5, 14);
    cnd_ = !fcc;
    v0 = v0 + 120;
    if (cnd_) { goto L_089DDB98; }
    goto L_089DE0A4;
L_089DE0A4:;
    f0 = BITSF(LD32(v0+4));
    fcc = FCMP(f5, f0, 14);
    cnd_ = !fcc;
    a2 = LD32(sp+56);
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DE0B8;
L_089DE0B8:;
    f0 = BITSF(LD32(v0+8));
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DE0CC;
L_089DE0CC:;
    f0 = BITSF(LD32(v0+12));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DE0E0;
L_089DE0E0:;
    f0 = BITSF(LD32(v0+16));
    fcc = FCMP(f0, f6, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DE0F4;
L_089DE0F4:;
    f0 = BITSF(LD32(v0+20));
    fcc = FCMP(f6, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DE108;
L_089DE108:;
    f20 = BITSF(0);
    cnd_ = s4 == 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_089DE164; }
    goto L_089DE114;
L_089DE114:;
    v1 = LD32(s0);
    a0 = LD32(s1+228);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v0 = LD32(v0+4);
    cnd_ = a0 == 0;
    ST32(sp+220, v0);
    if (cnd_) { goto L_089DE14C; }
    goto L_089DE130;
L_089DE130:;
    v1 = v0 + 0;
    v0 = LD32(a0+8);
    goto L_089DE138;
L_089DE138:;
    cnd_ = v0 == v1;
    a1 = a0 + 0;
    if (cnd_) { goto L_089DE150; }
    goto L_089DE140;
L_089DE140:;
    a0 = LD32(a0);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0+8); goto L_089DE138; }
    goto L_089DE14C;
L_089DE14C:;
    a1 = 0 + 0;
    goto L_089DE150;
L_089DE150:;
    f0 = BITSF(0);
    cnd_ = a1 == 0;
    v0 = D_08AEF128 - (-3800);
    if (cnd_) { goto L_089DE160; }
    goto L_089DE15C;
L_089DE15C:;
    f0 = BITSF(LD32(v0-3800));
    goto L_089DE160;
L_089DE160:;
    f20 = f0;
    goto L_089DE164;
L_089DE164:;
    f0 = f24 / f23;
    a0 = sp + 224;
    a1 = sp + 228;
    a2 = sp + 232;
    ST32(sp+228, 0);
    ST32(sp+232, FBITS(f24));
    f0 = f21 * f0;
    ST32(sp+224, FBITS(f0));
    f0 = func_089DE7FC(a0, a1, a2);
    goto L_089DE188;
L_089DE188:;
    f1 = f24 / f22;
    f2 = BITSF(s7);
    f0 = f24 - f0;
    f1 = f2 * f1;
    f0 = f0 * f27;
    f1 = f24 - f1;
    f1 = f1 * f27;
    f0 = f0 + f1;
    f20 = f20 + f0;
    fcc = FCMP(f25, f20, 12);
    cnd_ = !fcc;
    a2 = LD32(sp+56);
    if (cnd_) { goto L_089DDB9C; }
    goto L_089DE1BC;
L_089DE1BC:;
    v1 = LD32(s0);
    f25 = f20;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    s5 = LD32(v0+4);
    goto L_089DDB9C;
    v[0]=vr0;v[4]=vr4;
}

/* 089DE1D4 */
void func_089DE1D4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DE1D4:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+200);
    t_ = v0;
    s1 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE1F8;
L_089DE1F8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089DE218; }
    goto L_089DE200;
L_089DE200:;
    goto L_089DE204;
L_089DE204:;
    sp = sp + 16;
    return;
L_089DE218:;
    v0 = LD32(v1+268);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE224;
L_089DE224:;
    v1 = 999;
    cnd_ = v0 == v1;
    if (cnd_) { ST32(s1+172, 0); goto L_089DE230; }
    goto L_089DE230;
L_089DE230:;
    f1 = BITSF(LD32(s1+172));
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    s2 = s1 + 224;
    if (cnd_) { goto L_089DE280; }
    goto L_089DE248;
L_089DE248:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f3 = f2;
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(s1+172, FBITS(f0));
    if (cnd_) { goto L_089DE26C; }
    goto L_089DE268;
L_089DE268:;
    f3 = f0;
    goto L_089DE26C;
L_089DE26C:;
    fcc = FCMP(f2, f3, 12);
    cnd_ = fcc;
    ST32(s1+172, FBITS(f3));
    if (cnd_) { goto L_089DE200; }
    goto L_089DE27C;
L_089DE27C:;
    s2 = s1 + 224;
    goto L_089DE280;
L_089DE280:;
    a0 = LD32(s2+4);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s2+4, 0); goto L_089DE2A0; }
    goto L_089DE28C;
L_089DE28C:;
    s0 = LD32(a0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DE294;
L_089DE294:;
    cnd_ = s0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DE28C; }
    goto L_089DE29C;
L_089DE29C:;
    ST32(s2+4, 0);
    goto L_089DE2A0;
L_089DE2A0:;
    a0 = s1 + 0;
    a1 = 0 + 0;
    ST32(s2, 0);
    func_089DD9CC(a0, a1, 0, 0, 0);
    goto L_089DE2B0;
L_089DE2B0:;
    goto L_089DE204;
}

/* 089DE2B8 */
float func_089DE2B8(u32 a0, u32 a1, u32 a2, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DE2B8:;
    sp = sp - 16;
    a3 = a0 + 0;
    v0 = LD32(a0+184);
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DE30C; }
    goto L_089DE2D0;
L_089DE2D0:;
    v1 = 1;
    goto L_089DE2D4;
L_089DE2D4:;
    ST32(a3+184, a1);
    goto L_089DE2D8;
L_089DE2D8:;
    cnd_ = v1 == 0;
    ST32(a3+188, a2);
    if (cnd_) { goto L_089DE300; }
    goto L_089DE2E0;
L_089DE2E0:;
    v0 = LD32(a3);
    v1 = LD32(v0-12);
    v1 = a3 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    a0 = a3 + 0;
    if (cnd_) { goto L_089DE300; }
    goto L_089DE2F8;
L_089DE2F8:;
    f0 = func_089DBFE0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089DE300;
L_089DE300:;
    sp = sp + 16;
    return f0;
L_089DE30C:;
    v0 = LD32(a0+188);
    cnd_ = a2 != v0;
    if (cnd_) { v1 = 1; goto L_089DE2D4; }
    goto L_089DE318;
L_089DE318:;
    ST32(a3+184, a1);
    goto L_089DE2D8;
}

/* 089DE320 */
u64 func_089DE320(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089DE320:;
    sp = sp - 48;
    a2 = 1;
    a1 = LD32(a0);
    v0 = LD32(a1-12);
    v0 = a0 + v0;
    v0 = LD32(v0+100);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089DE38C; }
    goto L_089DE350;
L_089DE350:;
    s2 = LD32(v0+224);
    v0 = D_08B285AC - (-31316);
    s1 = LD32(v0-31316);
    v1 = s2 + 1;
    cnd_ = v1 == s1;
    v0 = s2 + 2;
    if (cnd_) { goto L_089DE3B4; }
    goto L_089DE368;
L_089DE368:;
    cnd_ = v0 == s1;
    v0 = s2 + 17;
    if (cnd_) { goto L_089DE3AC; }
    goto L_089DE370;
L_089DE370:;
    v0 = LD32(a0+220);
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089DE38C; }
    goto L_089DE380;
L_089DE380:;
    v0 = s1 + 15;
    ST32(a0+220, v0);
    a2 = 1;
    goto L_089DE38C;
L_089DE38C:;
    v0 = a2 + 0;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089DE3A8:;
    a2 = 1;
    goto L_089DE3AC;
L_089DE3AC:;
    ST32(s0+220, v0);
    goto L_089DE38C;
L_089DE3B4:;
    v0 = LD32(a1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE3C0;
L_089DE3C0:;
    v1 = D_08B159FC - (23036);
    a0 = LD32(v1+23036);
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f2 = BITSF(LD32(a0));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+4));
    f5 = BITSF(LD32(a0+8));
    f3 = f3 - f2;
    f1 = f1 - f0;
    f4 = f4 - f5;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f2 = BITSF(v0);
    v0 = D_08AEF130 - (-3792);
    f0 = BITSF(LD32(v0-3792));
    ST32(sp, FBITS(f3));
    a2 = 1;
    fcc = FCMP(f2, f0, 12);
    ST32(sp+4, FBITS(f1));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_089DE38C; }
    goto L_089DE434;
L_089DE434:;
    v0 = D_08AEF134 - (-3788);
    f0 = BITSF(LD32(v0-3788));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    v0 = LD32(s0+220);
    if (cnd_) { goto L_089DE460; }
    goto L_089DE44C;
L_089DE44C:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089DE38C; }
    goto L_089DE458;
L_089DE458:;
    v0 = s2 + 3;
    goto L_089DE3A8;
L_089DE460:;
    v0 = s1 < v0;
    cnd_ = v0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089DE38C; }
    goto L_089DE46C;
L_089DE46C:;
    v0 = s2 + 5;
    goto L_089DE3A8;
}

/* 089DE474 */
rv_t func_089DE474(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DE474:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    v0 = LD32(a0);
    a0 = D_08C2B3A4 - (-19548);
    a0 = a0 - 19548;
    v1 = LD32(v0-12);
    v0 = 999;
    v1 = s0 + v1;
    a3 = LD32(v1+252);
    cnd_ = a3 == v0;
    a1 = a3 + 0;
    if (cnd_) { goto L_089DE4DC; }
    goto L_089DE4AC;
L_089DE4AC:;
    { u64 r_ = func_08ABD8BC(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DE4B4;
L_089DE4B4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DE4DC; }
    goto L_089DE4BC;
L_089DE4BC:;
    v1 = LD32(v0);
    v0 = LD32(v1+220);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE4CC;
L_089DE4CC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DE4DC:;
    v0 = LD_U8(s0+194);
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DE4F4; }
    goto L_089DE4E8;
L_089DE4E8:;
    v0 = LD_U8(s0+195);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = v1 ^ 0x1; goto L_089DE4CC; }
    goto L_089DE4F4;
L_089DE4F4:;
    v1 = 1;
    v0 = v1 ^ 0x1;
    goto L_089DE4CC;
}

/* 089DE500 */
rv_t func_089DE500(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DE500:;
    sp = sp - 16;
    s1 = 0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+248);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE524;
L_089DE524:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DE548; }
    goto L_089DE530;
L_089DE530:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DE548:;
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE558;
L_089DE558:;
    v1 = LD32(v0);
    v0 = 0xf0540000u;
    v0 = v0 | 0x4375;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DE590; }
    goto L_089DE56C;
L_089DE56C:;
    v1 = LD32(s0);
    v0 = LD32(v1+248);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE57C;
L_089DE57C:;
    v1 = LD32(v0);
    v0 = 0x2f0000u;
    v0 = v0 | 0x387c;
    v1 = v1 ^ v0;
    s1 = 0 < v1;
    goto L_089DE590;
L_089DE590:;
    v1 = s1 + 0;
    goto L_089DE530;
}

/* 089DE598 */
rv_t func_089DE598(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DE598:;
    sp = sp - 32;
    s1 = 0 + 0;
    f20 = BITSF(0);
    v0 = LD_U8(a0+197);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089DE5D4; }
    goto L_089DE5C0;
L_089DE5C0:;
    f0 = BITSF(LD32(a0+136));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(a0); goto L_089DE5F0; }
    goto L_089DE5D4;
L_089DE5D4:;
    v0 = s1 + 0;
    goto L_089DE5D8;
L_089DE5D8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DE5F0:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE5FC;
L_089DE5FC:;
    v1 = 999;
    cnd_ = v0 == v1;
    v0 = s1 + 0;
    if (cnd_) { goto L_089DE5D8; }
    goto L_089DE608;
L_089DE608:;
    v0 = LD_U8(s0+4);
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_089DE5D8; }
    goto L_089DE614;
L_089DE614:;
    v0 = LD_U8(s0+68);
    cnd_ = v0 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_089DE5D8; }
    goto L_089DE620;
L_089DE620:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+80));
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    a0 = s0 + 0;
    if (cnd_) { goto L_089DE5D4; }
    goto L_089DE640;
L_089DE640:;
    { rv_t r_ = func_08A04F20(a0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE648;
L_089DE648:;
    s1 = v0 < 0x1u;
    goto L_089DE5D4;
}

/* 089DE650 */
rv_t func_089DE650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
L_089DE650:;
    a2 = a2 & 0xff;
    cnd_ = a2 != 0;
    a1 = a1 & 0xff;
    if (cnd_) { goto L_089DE674; }
    goto L_089DE65C;
L_089DE65C:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DE66C; }
    goto L_089DE664;
L_089DE664:;
    f0 = BITSF(LD32(a0+216));
    return (rv_t){ v0, v1, f0 };
L_089DE66C:;
    f0 = BITSF(LD32(a0+212));
    return (rv_t){ v0, v1, f0 };
L_089DE674:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DE684; }
    goto L_089DE67C;
L_089DE67C:;
    f0 = BITSF(LD32(a0+208));
    return (rv_t){ v0, v1, f0 };
L_089DE684:;
    f0 = BITSF(LD32(a0+204));
    return (rv_t){ v0, v1, f0 };
}

/* 089DE68C */
rv_t func_089DE68C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DE68C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DE7B0; }
    goto L_089DE6C0;
L_089DE6C0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF138 - (-3784);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3784));
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
    t0 = D_08C2B2F0 - (-19728);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B300 - (-19712);
    a3 = D_08C2B310 - (-19696);
    v1 = t0 - 19728;
    a1 = v0 - 19712;
    a2 = a3 - 19696;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B3A4 - (-19548);
    s0 = s3 - 19548;
    ST32(v1+8, FBITS(f5));
    a0 = 128;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-19712, FBITS(f5));
    v0 = 32;
    ST32(t0-19728, FBITS(f1));
    ST32(a3-19696, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE778;
L_089DE778:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-19548, v0);
    if (cnd_) { goto L_089DE7A4; }
    goto L_089DE788;
L_089DE788:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089DE790;
L_089DE790:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089DE790; }
    goto L_089DE7A4;
L_089DE7A4:;
    v0 = s3 - 19548;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089DE7B0;
L_089DE7B0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DE7D4; }
    goto L_089DE7C4;
L_089DE7C4:;
    v0 = D_08C2B3A4 - (-19548);
    a0 = LD32(v0-19548);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DE7EC; }
    goto L_089DE7D4;
L_089DE7D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DE7EC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DE7F4;
L_089DE7F4:;
    goto L_089DE7D4;
}

/* 089DE7FC */
float func_089DE7FC(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089DE7FC:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089DE828; }
    goto L_089DE814;
L_089DE814:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089DE828; }
    goto L_089DE828;
L_089DE828:;
    return f0;
}

/* 089DE830 */
rv_t func_089DE830(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DE830:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089DE68C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE844;
L_089DE844:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089DE850 */
rv_t func_089DE850(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DE850:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089DE68C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE864;
L_089DE864:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089DE870 */
void func_089DE870(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
L_089DE870:;
    a2 = D_08B45A9C - (23196);
    v1 = a2 + 23196;
    f2 = BITSF(LD32(a2+23196));
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(v1+8));
    v0 = a0 + 60;
    ST32(v0+4, FBITS(f1));
    a3 = a0 + 4;
    t0 = a0 + 28;
    ST32(v0+8, FBITS(f0));
    v0 = D_08B04798 - (18328);
    t1 = a0 + 72;
    ST32(a0+60, FBITS(f2));
    v0 = v0 + 18328;
    t2 = D_08B45AA8 - (23208);
    f2 = BITSF(LD32(a2+23196));
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    ST32(a3+20, 0);
    v1 = t2 + 23208;
    a2 = a0 + 84;
    ST32(a3+4, 0);
    ST8(a3+8, 0);
    ST32(a3+12, 0);
    ST32(a3+16, 0);
    ST32(t1+8, FBITS(f0));
    ST32(t0+20, 0);
    ST32(t1+4, FBITS(f1));
    ST32(t0+4, 0);
    ST8(t0+8, 0);
    ST32(t0+12, 0);
    ST32(t0+16, 0);
    ST32(a0, v0);
    ST32(a0+52, a1);
    ST32(a0+72, FBITS(f2));
    ST32(a0+4, 0);
    ST32(a0+28, 0);
    ST32(a0+56, 0);
    f0 = BITSF(LD32(t2+23208));
    f1 = BITSF(LD32(v1+4));
    f3 = BITSF(LD32(v1+12));
    f2 = BITSF(LD32(v1+8));
    ST32(a0+84, FBITS(f0));
    ST32(a2+4, FBITS(f1));
    ST32(a2+8, FBITS(f2));
    ST32(a2+12, FBITS(f3));
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+16));
    f2 = BITSF(LD32(v1+20));
    f3 = BITSF(LD32(v1+24));
    f4 = BITSF(LD32(v1+28));
    ST32(a2+32, FBITS(f0));
    ST32(a2+16, FBITS(f1));
    ST32(a2+20, FBITS(f2));
    ST32(a2+24, FBITS(f3));
    ST32(a2+28, FBITS(f4));
    ST32(a0+128, 0);
    ST32(a0+124, 0);
    return;
}

/* 089DE95C */
rv_t func_089DE95C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DE95C:;
    sp = sp - 16;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DE97C; }
    goto L_089DE970;
L_089DE970:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DE98C; }
    goto L_089DE97C;
L_089DE97C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DE98C:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DE99C;
L_089DE99C:;
    ST32(s0, 0);
    goto L_089DE97C;
}

/* 089DE9A4 */
rv_t func_089DE9A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DE9A4:;
    sp = sp - 32;
    s1 = a0 + 0;
    v0 = D_08B04798 - (18328);
    v0 = v0 + 18328;
    a0 = LD32(a0+124);
    cnd_ = a0 != 0;
    ST32(s1, v0);
    if (cnd_) { goto L_089DEB54; }
    goto L_089DE9D4;
L_089DE9D4:;
    s0 = LD32(s1+28);
    goto L_089DE9D8;
L_089DE9D8:;
    s2 = s1 + 28;
    v0 = 1;
    v1 = RS_FADDR(func_089DE95C, 0x089DE95Cu) - (-5796);
    ST8(s2+8, v0);
    cnd_ = s0 == 0;
    s3 = v1 - 5796;
    if (cnd_) { goto L_089DEA14; }
    goto L_089DE9F0;
L_089DE9F0:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_089DEB44; }
    goto L_089DE9FC;
L_089DE9FC:;
    a1 = LD32(s0+12);
    goto L_089DEA00;
L_089DEA00:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s2 + 0; goto L_089DEB34; }
    goto L_089DEA08;
L_089DEA08:;
    a0 = LD32(s0);
    goto L_089DEA0C;
L_089DEA0C:;
    t_ = s3;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEA14;
L_089DEA14:;
    a0 = s2 + 0;
    { u64 r_ = func_08AC7690(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEA1C;
L_089DEA1C:;
    a0 = LD32(s1+128);
    cnd_ = a0 != 0;
    ST8(s2+8, 0);
    if (cnd_) { goto L_089DEB24; }
    goto L_089DEA28;
L_089DEA28:;
    s0 = LD32(s1+28);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s2+12); goto L_089DEA58; }
    goto L_089DEA34;
L_089DEA34:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DEB14; }
    goto L_089DEA40;
L_089DEA40:;
    a1 = LD32(s0+12);
    goto L_089DEA44;
L_089DEA44:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DEB04; }
    goto L_089DEA4C;
L_089DEA4C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEA54;
L_089DEA54:;
    a0 = LD32(s2+12);
    goto L_089DEA58;
L_089DEA58:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DEAF4; }
    goto L_089DEA60;
L_089DEA60:;
    s0 = LD32(s1+4);
    goto L_089DEA64;
L_089DEA64:;
    ST32(s2+16, 0);
    s1 = s1 + 4;
    cnd_ = s0 == 0;
    ST32(s2+12, 0);
    if (cnd_) { goto L_089DEA94; }
    goto L_089DEA74;
L_089DEA74:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DEAE4; }
    goto L_089DEA80;
L_089DEA80:;
    a1 = LD32(s0+12);
    goto L_089DEA84;
L_089DEA84:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DEAD4; }
    goto L_089DEA8C;
L_089DEA8C:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEA94;
L_089DEA94:;
    a0 = LD32(s1+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DEAC4; }
    goto L_089DEAA0;
L_089DEAA0:;
    ST32(s1+16, 0);
    goto L_089DEAA4;
L_089DEAA4:;
    ST32(s1+12, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DEAC4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEACC;
L_089DEACC:;
    ST32(s1+16, 0);
    goto L_089DEAA4;
L_089DEAD4:;
    a0 = s1 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DEADC;
L_089DEADC:;
    goto L_089DEA8C;
L_089DEAE4:;
    a0 = s1 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DEAEC;
L_089DEAEC:;
    a1 = LD32(s0+12);
    goto L_089DEA84;
L_089DEAF4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEAFC;
L_089DEAFC:;
    s0 = LD32(s1+4);
    goto L_089DEA64;
L_089DEB04:;
    a0 = s2 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DEB0C;
L_089DEB0C:;
    goto L_089DEA4C;
L_089DEB14:;
    a0 = s2 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DEB1C;
L_089DEB1C:;
    a1 = LD32(s0+12);
    goto L_089DEA44;
L_089DEB24:;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEB2C;
L_089DEB2C:;
    ST32(s1+128, 0);
    goto L_089DEA28;
L_089DEB34:;
    a2 = s3 + 0;
    func_08AC760C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089DEB3C;
L_089DEB3C:;
    a0 = LD32(s0);
    goto L_089DEA0C;
L_089DEB44:;
    a2 = s3 + 0;
    func_08AC760C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089DEB4C;
L_089DEB4C:;
    a1 = LD32(s0+12);
    goto L_089DEA00;
L_089DEB54:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEB64;
L_089DEB64:;
    s0 = LD32(s1+28);
    goto L_089DE9D8;
}

/* 089DEB6C */
rv_t func_089DEB6C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DEB6C:;
    sp = sp - 32;
    s3 = a0 + 0;
    v0 = D_08B04798 - (18328);
    v0 = v0 + 18328;
    a0 = LD32(a0+124);
    cnd_ = a0 != 0;
    ST32(s3, v0);
    if (cnd_) { goto L_089DED24; }
    goto L_089DEB9C;
L_089DEB9C:;
    s0 = LD32(s3+28);
    goto L_089DEBA0;
L_089DEBA0:;
    s1 = s3 + 28;
    v0 = 1;
    v1 = RS_FADDR(func_089DE95C, 0x089DE95Cu) - (-5796);
    ST8(s1+8, v0);
    cnd_ = s0 == 0;
    s2 = v1 - 5796;
    if (cnd_) { goto L_089DEBDC; }
    goto L_089DEBB8;
L_089DEBB8:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_089DED14; }
    goto L_089DEBC4;
L_089DEBC4:;
    a1 = LD32(s0+12);
    goto L_089DEBC8;
L_089DEBC8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_089DED04; }
    goto L_089DEBD0;
L_089DEBD0:;
    a0 = LD32(s0);
    goto L_089DEBD4;
L_089DEBD4:;
    t_ = s2;
    a1 = s0 + 4;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEBDC;
L_089DEBDC:;
    a0 = s1 + 0;
    { u64 r_ = func_08AC7690(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEBE4;
L_089DEBE4:;
    a0 = LD32(s3+128);
    cnd_ = a0 != 0;
    ST8(s1+8, 0);
    if (cnd_) { goto L_089DECF4; }
    goto L_089DEBF0;
L_089DEBF0:;
    s0 = LD32(s3+28);
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(s1+12); goto L_089DEC20; }
    goto L_089DEBFC;
L_089DEBFC:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DECE4; }
    goto L_089DEC08;
L_089DEC08:;
    a1 = LD32(s0+12);
    goto L_089DEC0C;
L_089DEC0C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DECD4; }
    goto L_089DEC14;
L_089DEC14:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEC1C;
L_089DEC1C:;
    a0 = LD32(s1+12);
    goto L_089DEC20;
L_089DEC20:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DECC4; }
    goto L_089DEC28;
L_089DEC28:;
    s0 = LD32(s3+4);
    goto L_089DEC2C;
L_089DEC2C:;
    ST32(s1+16, 0);
    s2 = s3 + 4;
    cnd_ = s0 == 0;
    ST32(s1+12, 0);
    if (cnd_) { goto L_089DEC5C; }
    goto L_089DEC3C;
L_089DEC3C:;
    a1 = LD32(s0+8);
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DECB4; }
    goto L_089DEC48;
L_089DEC48:;
    a1 = LD32(s0+12);
    goto L_089DEC4C;
L_089DEC4C:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089DECA4; }
    goto L_089DEC54;
L_089DEC54:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEC5C;
L_089DEC5C:;
    a0 = LD32(s2+12);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DEC94; }
    goto L_089DEC68;
L_089DEC68:;
    ST32(s2+16, 0);
    goto L_089DEC6C;
L_089DEC6C:;
    a0 = s3 + 0;
    ST32(s2+12, 0);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEC78;
L_089DEC78:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DEC94:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEC9C;
L_089DEC9C:;
    ST32(s2+16, 0);
    goto L_089DEC6C;
L_089DECA4:;
    a0 = s2 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DECAC;
L_089DECAC:;
    goto L_089DEC54;
L_089DECB4:;
    a0 = s2 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DECBC;
L_089DECBC:;
    a1 = LD32(s0+12);
    goto L_089DEC4C;
L_089DECC4:;
    { u64 r_ = func_08A94768(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DECCC;
L_089DECCC:;
    s0 = LD32(s3+4);
    goto L_089DEC2C;
L_089DECD4:;
    a0 = s1 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DECDC;
L_089DECDC:;
    goto L_089DEC14;
L_089DECE4:;
    a0 = s1 + 0;
    func_08AC759C(a0, a1, 0, 0, 0);
    goto L_089DECEC;
L_089DECEC:;
    a1 = LD32(s0+12);
    goto L_089DEC0C;
L_089DECF4:;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DECFC;
L_089DECFC:;
    ST32(s3+128, 0);
    goto L_089DEBF0;
L_089DED04:;
    a2 = s2 + 0;
    func_08AC760C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089DED0C;
L_089DED0C:;
    a0 = LD32(s0);
    goto L_089DEBD4;
L_089DED14:;
    a2 = s2 + 0;
    func_08AC760C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089DED1C;
L_089DED1C:;
    a1 = LD32(s0+12);
    goto L_089DEBC8;
L_089DED24:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DED34;
L_089DED34:;
    s0 = LD32(s3+28);
    goto L_089DEBA0;
}

/* 089DED3C */
rv_t func_089DED3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DED3C:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DED64; }
    goto L_089DED58;
L_089DED58:;
    v1 = LD32(a1);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089DED80; }
    goto L_089DED64;
L_089DED64:;
    v1 = 1;
    goto L_089DED68;
L_089DED68:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DED80:;
    v1 = LD32(v1);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DED90;
L_089DED90:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DED64; }
    goto L_089DED98;
L_089DED98:;
    v0 = LD32(s0);
    ST32(s1, v0);
    goto L_089DED68;
}

/* 089DEDA4 */
void func_089DEDA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089DEDA4:;
    sp = sp - 48;
    v0 = LD32(a0+52);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089DEE30; }
    goto L_089DEDC8;
L_089DEDC8:;
    a0 = LD32(a0+56);
    v0 = 1;
    ST8(s0+120, v0);
    cnd_ = a0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DEF38; }
    goto L_089DEDDC;
L_089DEDDC:;
    a1 = LD32(s0+128);
    goto L_089DEDE0;
L_089DEDE0:;
    ST32(s0+56, v0);
    cnd_ = a1 != 0;
    ST8(s0+120, 0);
    if (cnd_) { goto L_089DEF20; }
    goto L_089DEDEC;
L_089DEDEC:;
    a0 = LD32(s0+56);
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089DEE4C; }
    goto L_089DEDF8;
L_089DEDF8:;
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    a1 = s0 + 60;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEE08;
L_089DEE08:;
    a0 = LD32(s0+56);
    v1 = LD32(a0);
    v0 = LD32(v1+40);
    t_ = v0;
    a1 = s0 + 84;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEE1C;
L_089DEE1C:;
    a0 = LD32(s0+56);
    v1 = LD32(a0);
    v0 = LD32(v1+32);
    t_ = v0;
    a1 = s0 + 72;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEE30;
L_089DEE30:;
    goto L_089DEE34;
L_089DEE34:;
    goto L_089DEE38;
L_089DEE38:;
    sp = sp + 48;
    return;
L_089DEE4C:;
    { u64 r_ = func_08897BBC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEE54;
L_089DEE54:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DEE34; }
    goto L_089DEE5C;
L_089DEE5C:;
    v0 = LD32(s0+52);
    v1 = LD_U8(v0+195);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089DEE38; }
    goto L_089DEE6C;
L_089DEE6C:;
    { u64 r_ = func_08971F68(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEE74;
L_089DEE74:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DEE34; }
    goto L_089DEE7C;
L_089DEE7C:;
    s2 = LD32(s0+4);
    s1 = s0 + 4;
    v0 = 1;
    v1 = RS_FADDR(func_089DED3C, 0x089DED3Cu) - (-4804);
    ST8(s1+8, v0);
    s3 = v1 - 4804;
    cnd_ = s2 == 0;
    ST32(sp, 0);
    if (cnd_) { goto L_089DEEDC; }
    goto L_089DEE9C;
L_089DEE9C:;
    a1 = LD32(s2+8);
    cnd_ = a1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089DEF04; }
    goto L_089DEEA8;
L_089DEEA8:;
    a1 = LD32(s2+12);
    goto L_089DEEAC;
L_089DEEAC:;
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s2); goto L_089DEED0; }
    goto L_089DEEB4;
L_089DEEB4:;
    a0 = s1 + 0;
    a2 = s3 + 0;
    a3 = sp + 0;
    { rv_t r_ = func_08AC7728(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEEC4;
L_089DEEC4:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DEEDC; }
    goto L_089DEECC;
L_089DEECC:;
    a0 = LD32(s2);
    goto L_089DEED0;
L_089DEED0:;
    a1 = s2 + 4;
    t_ = s3;
    a2 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEEDC;
L_089DEEDC:;
    a0 = s1 + 0;
    { u64 r_ = func_08AC7690(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEEE4;
L_089DEEE4:;
    a1 = LD32(sp);
    cnd_ = a1 == 0;
    ST8(s1+8, 0);
    if (cnd_) { goto L_089DEE30; }
    goto L_089DEEF0;
L_089DEEF0:;
    a0 = s0 + 0;
    a2 = 0 + 0;
    f0 = func_089DF25C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DEEFC;
L_089DEEFC:;
    goto L_089DEE34;
L_089DEF04:;
    a2 = s3 + 0;
    a3 = sp + 0;
    { rv_t r_ = func_08AC7728(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEF10;
L_089DEF10:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089DEEDC; }
    goto L_089DEF18;
L_089DEF18:;
    a1 = LD32(s2+12);
    goto L_089DEEAC;
L_089DEF20:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DEF50(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEF28;
L_089DEF28:;
    a0 = LD32(s0+128);
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DEF30;
L_089DEF30:;
    ST32(s0+128, 0);
    goto L_089DEDEC;
L_089DEF38:;
    v1 = LD32(a0);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEF48;
L_089DEF48:;
    a1 = LD32(s0+128);
    goto L_089DEDE0;
}

/* 089DEF50 */
rv_t func_089DEF50(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DEF50:;
    sp = sp - 16;
    v1 = 0xffff0000u;
    v1 = v1 | 0x7fce;
    s0 = a1 + 0;
    s1 = a0 + 0;
    a1 = LD_U16(a1+16);
    v0 = a1 & 0xffff;
    v0 = v0 + v1;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DEFE8; }
    goto L_089DEF88;
L_089DEF88:;
    v0 = LD32(a0+52);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+120); goto L_089DEFC0; }
    goto L_089DEF94;
L_089DEF94:;
    v0 = LD_U8(v0+195);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+120); goto L_089DEFC0; }
    goto L_089DEFA0;
L_089DEFA0:;
    v0 = LD32(s0+24);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s1+120); goto L_089DEFC0; }
    goto L_089DEFAC;
L_089DEFAC:;
    v0 = LD32(v0);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089DEFE8; }
    goto L_089DEFBC;
L_089DEFBC:;
    v0 = LD_U8(s1+120);
    goto L_089DEFC0;
L_089DEFC0:;
    cnd_ = v0 == 0;
    v1 = a1 & 0xffff;
    if (cnd_) { goto L_089DF010; }
    goto L_089DEFC8;
L_089DEFC8:;
    a0 = LD32(s1+128);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089DF000; }
    goto L_089DEFD4;
L_089DEFD4:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088AC8FC(a0, a1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DEFE0;
L_089DEFE0:;
    v1 = 1;
    ST32(s1+128, v0);
    goto L_089DEFE8;
L_089DEFE8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DF000:;
    { u64 r_ = func_088ACBAC(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF008;
L_089DF008:;
    ST32(s1+128, 0);
    goto L_089DEFD4;
L_089DF010:;
    v0 = 0x8032;
    cnd_ = v1 == v0;
    v0 = 0x8033;
    if (cnd_) { goto L_089DF04C; }
    goto L_089DF01C;
L_089DF01C:;
    cnd_ = v1 != v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DEFE8; }
    goto L_089DF024;
L_089DF024:;
    a0 = LD32(s1+56);
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089DF038; }
    goto L_089DF030;
L_089DF030:;
    v1 = 1;
    goto L_089DEFE8;
L_089DF038:;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF044;
L_089DF044:;
    ST32(s1+56, 0);
    goto L_089DF030;
L_089DF04C:;
    s0 = LD32(s0+24);
    a0 = s1 + 0;
    a1 = LD32(s0+4);
    v0 = func_089DF3B8(a0, a1);
    goto L_089DF05C;
L_089DF05C:;
    a1 = v0 + 0;
    a0 = s1 + 0;
    a2 = s0 + 0;
    f0 = func_089DF25C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DF06C;
L_089DF06C:;
    v1 = 1;
    goto L_089DEFE8;
}

/* 089DF074 */
void func_089DF074(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DF074:;
    sp = sp - 32;
    s1 = a1 + 0;
    s0 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DF0E8; }
    goto L_089DF098;
L_089DF098:;
    v1 = LD32(a0+4);
    s3 = a0 + 4;
    cnd_ = v1 == 0;
    a1 = LD32(a1+36);
    if (cnd_) { goto L_089DF0D4; }
    goto L_089DF0A8;
L_089DF0A8:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089DF0B0;
L_089DF0B0:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089DF0E0; }
    goto L_089DF0C8;
L_089DF0C8:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089DF0B0; }
    goto L_089DF0D4;
L_089DF0D4:;
    a0 = LD32(s3+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DF178; }
    goto L_089DF0E0;
L_089DF0E0:;
    cnd_ = a3 == 0;
    if (cnd_) { v0 = LD_U8(s3+8); goto L_089DF104; }
    goto L_089DF0E8;
L_089DF0E8:;
    sp = sp + 32;
    return;
L_089DF104:;
    cnd_ = v0 != 0;
    s2 = LD32(s1+36);
    if (cnd_) { goto L_089DF0E8; }
    goto L_089DF10C;
L_089DF10C:;
    v0 = LD32(s0+4);
    cnd_ = v0 == 0;
    s0 = s3 + 0;
    if (cnd_) { goto L_089DF140; }
    goto L_089DF118;
L_089DF118:;
    v1 = LD32(s3);
    goto L_089DF11C;
L_089DF11C:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    v0 = s2 < v1;
    cnd_ = v1 == s2;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_089DF0E8; }
    goto L_089DF134;
L_089DF134:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089DF11C; }
    goto L_089DF140;
L_089DF140:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF148;
L_089DF148:;
    ST32(v0, s2);
    a0 = v0 + 0;
    v1 = v0 + 4;
    v0 = LD32(s3+4);
    ST32(a0+8, 0);
    v0 = v0 + 1;
    ST32(a0+12, 0);
    ST32(s3+4, v0);
    cnd_ = v1 == 0;
    ST32(s0, a0);
    if (cnd_) { goto L_089DF0E8; }
    goto L_089DF170;
L_089DF170:;
    ST32(a0+4, s1);
    goto L_089DF0E8;
L_089DF178:;
    a2 = 1;
    v0 = func_08AC77D0(a0, a1, a2);
    goto L_089DF180;
L_089DF180:;
    a3 = v0 + 0;
    goto L_089DF0E0;
}

/* 089DF188 */
void func_089DF188(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF188:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    v0 = LD32(a0+56);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089DF1F4; }
    goto L_089DF1A4;
L_089DF1A4:;
    cnd_ = a1 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DF1C8; }
    goto L_089DF1AC;
L_089DF1AC:;
    v1 = LD32(v0);
    v0 = LD32(v1+56);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF1BC;
L_089DF1BC:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DF1E4; }
    goto L_089DF1C4;
L_089DF1C4:;
    v0 = LD32(s0+56);
    goto L_089DF1C8;
L_089DF1C8:;
    v1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF1DC;
L_089DF1DC:;
    v0 = 1;
    ST32(s0+56, 0);
    goto L_089DF1E4;
L_089DF1E4:;
    sp = sp + 16;
    return;
L_089DF1F4:;
    v0 = 0 + 0;
    goto L_089DF1E4;
}

/* 089DF1FC */
void func_089DF1FC(u32 a0, u32 a1)
{
    u32 v0 = 0, a2 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF1FC:;
    sp = sp - 16;
    s1 = a0 + 28;
    a2 = 1;
    a0 = s1 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DF230; }
    goto L_089DF220;
L_089DF220:;
    a1 = LD32(a1+36);
    v0 = func_08AC77D0(a0, a1, a2);
    goto L_089DF228;
L_089DF228:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089DF244; }
    goto L_089DF230;
L_089DF230:;
    goto L_089DF234;
L_089DF234:;
    sp = sp + 16;
    return;
L_089DF244:;
    a1 = LD32(s0+36);
    v0 = func_08AC7848(a0, a1, 0, 0, 0);
    goto L_089DF24C;
L_089DF24C:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0, s0); goto L_089DF230; }
    goto L_089DF254;
L_089DF254:;
    goto L_089DF234;
}

/* 089DF25C */
float func_089DF25C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF25C:;
    sp = sp - 16;
    s2 = a2 + 0;
    s1 = a0 + 0;
    a0 = 0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089DF330; }
    goto L_089DF284;
L_089DF284:;
    a0 = LD32(s1+56);
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089DF2D4; }
    goto L_089DF290;
L_089DF290:;
    cnd_ = a2 == 0;
    v1 = LD32(a0);
    if (cnd_) { goto L_089DF2A8; }
    goto L_089DF298;
L_089DF298:;
    v0 = LD32(a2+8);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DF2C4; }
    goto L_089DF2A8;
L_089DF2A8:;
    v0 = LD32(v1+56);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF2B4;
L_089DF2B4:;
    cnd_ = v0 == 0;
    a0 = 1;
    if (cnd_) { goto L_089DF330; }
    goto L_089DF2BC;
L_089DF2BC:;
    a0 = LD32(s1+56);
    v1 = LD32(a0);
    goto L_089DF2C4;
L_089DF2C4:;
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF2D0;
L_089DF2D0:;
    v1 = LD32(s0);
    goto L_089DF2D4;
L_089DF2D4:;
    a0 = s0 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF2E4;
L_089DF2E4:;
    cnd_ = v0 == 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_089DF360; }
    goto L_089DF2EC;
L_089DF2EC:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089DF34C; }
    goto L_089DF2F4;
L_089DF2F4:;
    a1 = s1 + 60;
    v0 = LD32(v1+36);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF304;
L_089DF304:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+40);
    t_ = v0;
    a1 = s1 + 84;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF318;
L_089DF318:;
    v1 = s1 + 72;
    a0 = 1;
    ST32(s1+56, s0);
    ST32(v1+4, 0);
    ST32(v1+8, 0);
    ST32(s1+72, 0);
    goto L_089DF330;
L_089DF330:;
    v0 = a0 + 0;
    sp = sp + 16;
    return f0;
L_089DF34C:;
    v0 = LD32(v1+28);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF358;
L_089DF358:;
    v1 = LD32(s0);
    goto L_089DF2F4;
L_089DF360:;
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF36C;
L_089DF36C:;
    ST32(s1+56, 0);
    a0 = 0 + 0;
    goto L_089DF330;
}

/* 089DF378 */
float func_089DF378(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF378:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a0 + 0;
    v0 = func_089DF3B8(a0, a1);
    goto L_089DF394;
L_089DF394:;
    a1 = v0 + 0;
    a0 = s0 + 0;
    a2 = s1 + 0;
    f0 = func_089DF25C(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089DF3A4;
L_089DF3A4:;
    sp = sp + 16;
    return f0;
}

/* 089DF3B8 */
u32 func_089DF3B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF3B8:;
    sp = sp - 16;
    a0 = a0 + 28;
    a2 = 1;
    v0 = func_08AC77D0(a0, a1, a2);
    goto L_089DF3CC;
L_089DF3CC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DF3D8; }
    goto L_089DF3D4;
L_089DF3D4:;
    v1 = LD32(v0);
    goto L_089DF3D8;
L_089DF3D8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 089DF3E8 */
u64 func_089DF3E8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF3E8:;
    v0 = a0 + 0;
    a1 = a1 ^ 0xffff;
    v0 = v0 ^ 0x1;
    a1 = a1 < 0x1u;
    v0 = v0 < 0x1u;
    sp = sp - 16;
    t0 = D_08C2B3B8 - (-19528);
    t1 = D_08C2B3C8 - (-19512);
    t2 = D_08C2B3D8 - (-19496);
    a0 = D_08ADE944 - (-5820);
    a1 = a1 & v0;
    v1 = t0 - 19528;
    a2 = t1 - 19512;
    a3 = t2 - 19496;
    cnd_ = a1 == 0;
    a0 = a0 - 5820;
    if (cnd_) { goto L_089DF4C0; }
    goto L_089DF42C;
L_089DF42C:;
    v0 = D_08AEF154 - (-3756);
    f4 = BITSF(LD32(v0-3756));
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
    ST32(t0-19528, FBITS(f2));
    ST32(t1-19512, FBITS(f6));
    ST32(t2-19496, FBITS(f1));
    { u64 r_ = func_08832568(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF4B8;
L_089DF4B8:;
    v1 = D_08C2B3E8 - (-19480);
    ST32(v1-19480, v0);
    goto L_089DF4C0;
L_089DF4C0:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089DF4CC */
rv_t func_089DF4CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF4CC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { u64 r_ = func_089DF3E8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF4E0;
L_089DF4E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089DF4EC */
void func_089DF4EC(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DF4EC:;
    sp = sp - 32;
    s3 = D_08B45A9C - (23196);
    v0 = D_08B047B0 - (18352);
    s2 = s3 + 23196;
    v1 = a0 + 8;
    f1 = BITSF(LD32(s3+23196));
    f2 = BITSF(LD32(s2+4));
    f0 = BITSF(LD32(s2+8));
    v0 = v0 + 18352;
    s0 = a0 + 0;
    s1 = D_08B45AA8 - (23208);
    s1 = s1 + 23208;
    ST32(v1+8, FBITS(f0));
    ST32(a0, v0);
    a0 = a0 + 20;
    ST32(s0+4, a1);
    a1 = s1 + 0;
    ST32(s0+8, FBITS(f1));
    ST32(v1+4, FBITS(f2));
    s4 = a2 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF558;
L_089DF558:;
    v0 = D_08AEF15C - (-3748);
    f1 = BITSF(LD32(v0-3748));
    v0 = D_08AEF158 - (-3752);
    f0 = BITSF(LD32(v0-3752));
    v0 = D_08AEF160 - (-3744);
    v1 = s0 + 40;
    ST32(s0+80, FBITS(f0));
    a2 = s0 + 116;
    a0 = s0 + 128;
    f0 = BITSF(LD32(v0-3744));
    v0 = D_08AEF164 - (-3740);
    ST32(s0+92, FBITS(f1));
    a1 = s1 + 0;
    ST32(s0+100, FBITS(f0));
    f0 = BITSF(LD32(v0-3740));
    v0 = D_08AEF168 - (-3736);
    ST32(s0+84, 0);
    ST32(s0+104, FBITS(f0));
    f0 = BITSF(LD32(v0-3736));
    ST32(s0+88, FBITS(f1));
    ST32(s0+108, FBITS(f0));
    ST32(s0+36, s4);
    ST32(v1+20, 0);
    ST32(v1+4, 0);
    ST32(v1+16, 0);
    ST8(v1+8, 0);
    ST32(v1+12, 0);
    ST32(s0+112, 0);
    f0 = BITSF(LD32(s3+23196));
    f1 = BITSF(LD32(s2+8));
    f2 = BITSF(LD32(s2+4));
    ST32(s0+116, FBITS(f0));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f2));
    ST32(s0+40, 0);
    ST32(s0+64, 0);
    ST32(s0+68, 0);
    ST32(s0+72, 0);
    ST32(s0+76, 0);
    ST32(s0+96, 0);
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF5FC;
L_089DF5FC:;
    a0 = LD32(s0+4);
    a1 = s0 + 0;
    func_089DF1FC(a0, a1);
    goto L_089DF608;
L_089DF608:;
    v0 = LD32(s0+112);
    v1 = 0x10000u;
    a0 = 0x40000u;
    v0 = v0 | 0x60a;
    v0 = (v0 & ~(0x1u << 14)) | ((0 & 0x1) << 14);
    v0 = v0 | v1;
    v0 = v0 | a0;
    ST32(s0+112, v0);
    sp = sp + 32;
    return;
}

/* 089DF648 */
u64 func_089DF648(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF648:;
    sp = sp - 16;
    v0 = D_08B047B0 - (18352);
    v0 = v0 + 18352;
    s0 = a0 + 40;
    s1 = LD32(a0+40);
    cnd_ = s1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089DF698; }
    goto L_089DF670;
L_089DF670:;
    v0 = LD32(s1+8);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089DF6E0; }
    goto L_089DF680;
L_089DF680:;
    v0 = LD32(s1+12);
    goto L_089DF684;
L_089DF684:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089DF6D0; }
    goto L_089DF690;
L_089DF690:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF698;
L_089DF698:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DF6C0; }
    goto L_089DF6A4;
L_089DF6A4:;
    ST32(s0+16, 0);
    goto L_089DF6A8;
L_089DF6A8:;
    ST32(s0+12, 0);
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089DF6C0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF6C8;
L_089DF6C8:;
    ST32(s0+16, 0);
    goto L_089DF6A8;
L_089DF6D0:;
    func_08AC759C(a0, a1, t1, t2, t3);
    goto L_089DF6D8;
L_089DF6D8:;
    goto L_089DF690;
L_089DF6E0:;
    func_08AC759C(a0, a1, t1, t2, t3);
    goto L_089DF6E8;
L_089DF6E8:;
    v0 = LD32(s1+12);
    goto L_089DF684;
}

/* 089DF6F0 */
rv_t func_089DF6F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF6F0:;
    sp = sp - 16;
    v0 = D_08B047B0 - (18352);
    v0 = v0 + 18352;
    s0 = a0 + 40;
    s1 = LD32(a0+40);
    cnd_ = s1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089DF740; }
    goto L_089DF718;
L_089DF718:;
    v0 = LD32(s1+8);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089DF788; }
    goto L_089DF728;
L_089DF728:;
    v0 = LD32(s1+12);
    goto L_089DF72C;
L_089DF72C:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089DF778; }
    goto L_089DF738;
L_089DF738:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF740;
L_089DF740:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DF768; }
    goto L_089DF74C;
L_089DF74C:;
    ST32(s0+16, 0);
    goto L_089DF750;
L_089DF750:;
    ST32(s0+12, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DF768:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF770;
L_089DF770:;
    ST32(s0+16, 0);
    goto L_089DF750;
L_089DF778:;
    func_08AC759C(a0, a1, t1, t2, t3);
    goto L_089DF780;
L_089DF780:;
    goto L_089DF738;
L_089DF788:;
    func_08AC759C(a0, a1, t1, t2, t3);
    goto L_089DF790;
L_089DF790:;
    v0 = LD32(s1+12);
    goto L_089DF72C;
}

/* 089DF798 */
rv_t func_089DF798(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DF798:;
    sp = sp - 16;
    v0 = D_08B047B0 - (18352);
    v0 = v0 + 18352;
    s2 = a0 + 0;
    s0 = a0 + 40;
    s1 = LD32(a0+40);
    cnd_ = s1 == 0;
    ST32(a0, v0);
    if (cnd_) { goto L_089DF7F0; }
    goto L_089DF7C8;
L_089DF7C8:;
    v0 = LD32(s1+8);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089DF844; }
    goto L_089DF7D8;
L_089DF7D8:;
    v0 = LD32(s1+12);
    goto L_089DF7DC;
L_089DF7DC:;
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089DF834; }
    goto L_089DF7E8;
L_089DF7E8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF7F0;
L_089DF7F0:;
    v0 = LD32(s0+12);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089DF824; }
    goto L_089DF7FC;
L_089DF7FC:;
    ST32(s0+16, 0);
    goto L_089DF800;
L_089DF800:;
    a0 = s2 + 0;
    ST32(s0+12, 0);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF80C;
L_089DF80C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DF824:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DF82C;
L_089DF82C:;
    ST32(s0+16, 0);
    goto L_089DF800;
L_089DF834:;
    func_08AC759C(a0, a1, t1, t2, t3);
    goto L_089DF83C;
L_089DF83C:;
    goto L_089DF7E8;
L_089DF844:;
    func_08AC759C(a0, a1, t1, t2, t3);
    goto L_089DF84C;
L_089DF84C:;
    v0 = LD32(s1+12);
    goto L_089DF7DC;
}

/* 089DF854 */
rv_t func_089DF854(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089DF854:;
    v0 = LD32(a0+4);
    a1 = LD32(v0+52);
    cnd_ = a1 == 0;
    a2 = 1;
    if (cnd_) { goto L_089DF890; }
    goto L_089DF864;
L_089DF864:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089DF890; }
    goto L_089DF888;
L_089DF888:;
    v0 = LD32(a0+112);
    a2 = (v0 >> 14) & 0x1;
    goto L_089DF890;
L_089DF890:;
    v0 = a2 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089DF898 */
rv_t func_089DF898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DF898:;
    sp = sp - 32;
    v1 = 0 + 0;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089DFB24; }
    goto L_089DF8C8;
L_089DF8C8:;
    v0 = LD32(a0+112);
    v0 = v0 & 0x8;
    cnd_ = v0 == 0;
    v1 = LD32(s1);
    if (cnd_) { goto L_089DF8F8; }
    goto L_089DF8D8;
L_089DF8D8:;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+100);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = LD32(v1+244); goto L_089DF8FC; }
    goto L_089DF8EC;
L_089DF8EC:;
    v0 = LD_U8(a0+13);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089DFBD4; }
    goto L_089DF8F8;
L_089DF8F8:;
    v0 = LD32(v1+244);
    goto L_089DF8FC;
L_089DF8FC:;
    a0 = s1 + 0;
    t_ = v0;
    s0 = s2 + 8;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF908;
L_089DF908:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s2+8, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    v1 = LD32(s1);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF930;
L_089DF930:;
    a1 = v0 + 0;
    a0 = s2 + 20;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DF93C;
L_089DF93C:;
    a0 = LD32(s2+112);
    v0 = a0 & 0x800;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089DFB9C; }
    goto L_089DF94C;
L_089DF94C:;
    v0 = LD32(s2+4);
    a1 = LD32(s2+68);
    a0 = (a0 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    v1 = LD32(v0+56);
    v0 = D_08AEF180 - (-3712);
    f0 = BITSF(LD32(v0-3712));
    v0 = D_08AEF184 - (-3708);
    ST32(s2+64, v1);
    ST32(s2+104, FBITS(f0));
    f0 = BITSF(LD32(v0-3708));
    ST32(s2+112, a0);
    cnd_ = a1 == 0;
    ST32(s2+108, FBITS(f0));
    if (cnd_) { goto L_089DFB20; }
    goto L_089DF980;
L_089DF980:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    v0 = 0x1400000u;
    if (cnd_) { goto L_089DFB20; }
    goto L_089DF998;
L_089DF998:;
    a0 = D_08B204FC - (1276);
    v1 = LD32(s2+72);
    a3 = LD32(a0+1276);
    v0 = v0 | 0x8;
    s1 = v1 | v0;
    cnd_ = a3 == 0;
    t0 = a0 + 1276;
    if (cnd_) { goto L_089DF9E0; }
    goto L_089DF9B4;
L_089DF9B4:;
    v0 = a3 + 0;
    v1 = LD32(v0);
    goto L_089DF9BC;
L_089DF9BC:;
    a0 = v0 + 120;
    a2 = v0 + 116;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089DF9EC; }
    goto L_089DF9D4;
L_089DF9D4:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089DF9BC; }
    goto L_089DF9E0;
L_089DF9E0:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DFB8C; }
    goto L_089DF9EC;
L_089DF9EC:;
    cnd_ = a3 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DFB24; }
    goto L_089DF9F4;
L_089DF9F4:;
    v0 = LD32(s2+112);
    v0 = v0 & 0x100;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089DFB24; }
    goto L_089DFA04;
L_089DFA04:;
    v1 = LD32(s0+28);
    a1 = LD32(s2+96);
    cnd_ = v1 == 0;
    t0 = s0 + 28;
    if (cnd_) { goto L_089DFA40; }
    goto L_089DFA14;
L_089DFA14:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089DFA1C;
L_089DFA1C:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089DFA4C; }
    goto L_089DFA34;
L_089DFA34:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089DFA1C; }
    goto L_089DFA40;
L_089DFA40:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DFB7C; }
    goto L_089DFA4C;
L_089DFA4C:;
    cnd_ = a3 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089DFA58; }
    goto L_089DFA54;
L_089DFA54:;
    s4 = LD32(a3);
    goto L_089DFA58;
L_089DFA58:;
    f1 = BITSF(LD32(s2+80));
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    s3 = 0 + 0;
    if (cnd_) { goto L_089DFB58; }
    goto L_089DFA70;
L_089DFA70:;
    v1 = LD32(s0+52);
    goto L_089DFA74;
L_089DFA74:;
    a1 = LD32(s2+68);
    cnd_ = v1 == 0;
    t0 = s0 + 52;
    if (cnd_) { goto L_089DFAAC; }
    goto L_089DFA80;
L_089DFA80:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089DFA88;
L_089DFA88:;
    a0 = v0 + 12;
    a2 = v0 + 8;
    a3 = v0 + 4;
    v0 = a1 < v1;
    cnd_ = v1 == a1;
    if (v0 == 0) a2 = a0;
    if (cnd_) { goto L_089DFAB8; }
    goto L_089DFAA0;
L_089DFAA0:;
    v0 = LD32(a2);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089DFA88; }
    goto L_089DFAAC;
L_089DFAAC:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089DFB48; }
    goto L_089DFAB8;
L_089DFAB8:;
    cnd_ = a3 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DFAC4; }
    goto L_089DFAC0;
L_089DFAC0:;
    v0 = LD32(a3);
    goto L_089DFAC4;
L_089DFAC4:;
    cnd_ = v0 == 0;
    a1 = LD32(s2+68);
    if (cnd_) { goto L_089DFAD8; }
    goto L_089DFACC;
L_089DFACC:;
    a0 = s0 + 0;
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFAD4;
L_089DFAD4:;
    a1 = LD32(s2+68);
    goto L_089DFAD8;
L_089DFAD8:;
    a3 = LD32(s2+76);
    a0 = s0 + 0;
    a2 = s1 | 0x1;
    t1 = s3 + 0;
    t2 = s4 + 0;
    t0 = a1 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFAF4;
L_089DFAF4:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089DFB20; }
    goto L_089DFAFC;
L_089DFAFC:;
    a1 = 1;
    a0 = v0 + 0;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DFB08;
L_089DFB08:;
    f12 = BITSF(LD32(s2+84));
    a0 = s0 + 0;
    func_08814994(a0, f12);
    goto L_089DFB14;
L_089DFB14:;
    f12 = BITSF(LD32(s2+88));
    a0 = s0 + 0;
    f0 = func_088149B0(a0, f12);
    goto L_089DFB20;
L_089DFB20:;
    v1 = 1;
    goto L_089DFB24;
L_089DFB24:;
    v0 = v1 + 0;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089DFB48:;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DFB50;
L_089DFB50:;
    a3 = v0 + 0;
    goto L_089DFAB8;
L_089DFB58:;
    a0 = 36;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFB60;
L_089DFB60:;
    f12 = BITSF(LD32(s2+80));
    a0 = v0 + 0;
    a1 = 0 + 0;
    s3 = v0 + 0;
    func_08810BE8(a0, a1, f12);
    goto L_089DFB74;
L_089DFB74:;
    v1 = LD32(s0+52);
    goto L_089DFA74;
L_089DFB7C:;
    a2 = 1;
    { u64 r_ = func_08AA1804(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DFB84;
L_089DFB84:;
    a3 = v0 + 0;
    goto L_089DFA4C;
L_089DFB8C:;
    a2 = 1;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DFB94;
L_089DFB94:;
    a3 = v0 + 0;
    goto L_089DF9EC;
L_089DFB9C:;
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFBA8;
L_089DFBA8:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFBBC;
L_089DFBBC:;
    a2 = v0 + 0;
    a0 = s2 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E11D0(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFBCC;
L_089DFBCC:;
    a0 = LD32(s2+112);
    goto L_089DF94C;
L_089DFBD4:;
    { rv_t r_ = func_0880B7A4(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFBDC;
L_089DFBDC:;
    v1 = LD32(s1);
    goto L_089DF8F8;
}

/* 089DFBE4 */
rv_t func_089DFBE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DFBE4:;
    sp = sp - 16;
    a1 = 12;
    a2 = 0 + 0;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x8032;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DFC08;
L_089DFC08:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089DFC88; }
    goto L_089DFC1C;
L_089DFC1C:;
    v0 = LD32(v0+24);
    a3 = LD32(s0+36);
    t2 = 999;
    v1 = LD32(v0);
    ST32(v0+4, a3);
    v1 = v1 | 0x1;
    ST32(v0, v1);
    t1 = LD32(s0+4);
    a3 = LD32(t1+52);
    cnd_ = a3 == 0;
    t3 = 999;
    if (cnd_) { goto L_089DFC5C; }
    goto L_089DFC48;
L_089DFC48:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t2 = LD32(v0+4);
    a3 = LD32(t1+52);
    goto L_089DFC5C;
L_089DFC5C:;
    cnd_ = a3 == 0;
    ST32(t0, t2);
    if (cnd_) { goto L_089DFC74; }
    goto L_089DFC64;
L_089DFC64:;
    v1 = LD32(a3);
    v0 = LD32(v1-16);
    v0 = a3 + v0;
    t3 = LD32(v0+4);
    goto L_089DFC74;
L_089DFC74:;
    v0 = LD32(t0+28);
    ST32(t0+4, t3);
    v0 = v0 | 0x1;
    ST32(t0+28, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFC88;
L_089DFC88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089DFC98 */
rv_t func_089DFC98(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DFC98:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089DFDA8; }
    goto L_089DFCB8;
L_089DFCB8:;
    v0 = LD32(s0);
    a1 = D_08B2BBFC - (-17412);
    v1 = LD32(v0-16);
    v0 = 999;
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    cnd_ = a2 == v0;
    a0 = a1 - 17412;
    if (cnd_) { goto L_089DFD9C; }
    goto L_089DFCD8;
L_089DFCD8:;
    v0 = LD32(a0+4);
    v1 = LD32(a1-17412);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DFD28; }
    goto L_089DFCFC;
L_089DFCFC:;
    a0 = LD32(a1);
    goto L_089DFD00;
L_089DFD00:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089DFDBC; }
    goto L_089DFD18;
L_089DFD18:;
    a1 = LD32(a1+4);
    goto L_089DFD1C;
L_089DFD1C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089DFD00; }
    goto L_089DFD24;
L_089DFD24:;
    v1 = 0 + 0;
    goto L_089DFD28;
L_089DFD28:;
    cnd_ = v1 == 0;
    a0 = 0x8033;
    if (cnd_) { goto L_089DFD9C; }
    goto L_089DFD30;
L_089DFD30:;
    a1 = 4;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DFD40;
L_089DFD40:;
    cnd_ = v0 == 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_089DFD9C; }
    goto L_089DFD48;
L_089DFD48:;
    a3 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    v0 = LD32(a3);
    a2 = 1;
    v0 = v0 | 0x1;
    ST32(a3, v0);
    v1 = LD32(s0);
    t0 = LD32(t1+28);
    v0 = LD32(v1-16);
    t0 = t0 | 0x1;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t1, v1);
    a3 = LD32(s0);
    v0 = LD32(a3-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t1+28, t0);
    ST32(t1+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFD9C;
L_089DFD9C:;
    v0 = LD32(s1+112);
    v0 = (v0 & ~(0x1u << 11)) | ((0 & 0x1) << 11);
    ST32(s1+112, v0);
    goto L_089DFDA8;
L_089DFDA8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DFDBC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089DFD18; }
    goto L_089DFDC8;
L_089DFDC8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089DFD1C; }
    goto L_089DFDD4;
L_089DFDD4:;
    goto L_089DFD28;
}

/* 089DFDDC */
rv_t func_089DFDDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089DFDDC:;
    sp = sp - 16;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089DFF50; }
    goto L_089DFE00;
L_089DFE00:;
    v0 = LD32(s0);
    a0 = D_08B2BBFC - (-17412);
    a0 = a0 - 17412;
    v1 = LD32(v0-16);
    a2 = 1;
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    v0 = func_08AC78EC(a0, a1, a2);
    goto L_089DFE20;
L_089DFE20:;
    v1 = LD32(s1+4);
    s2 = 0 < v0;
    a0 = LD32(v1+52);
    cnd_ = a0 == 0;
    a2 = 999;
    if (cnd_) { goto L_089DFE44; }
    goto L_089DFE34;
L_089DFE34:;
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    a2 = LD32(v0+4);
    goto L_089DFE44;
L_089DFE44:;
    a1 = D_08C2B4CC - (-19252);
    v0 = 999;
    a0 = a1 - 19252;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DFEA8; }
    goto L_089DFE58;
L_089DFE58:;
    v0 = LD32(a0+4);
    v1 = LD32(a1-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089DFEA8; }
    goto L_089DFE7C;
L_089DFE7C:;
    a0 = LD32(a1);
    goto L_089DFE80;
L_089DFE80:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089DFF68; }
    goto L_089DFE98;
L_089DFE98:;
    a1 = LD32(a1+4);
    goto L_089DFE9C;
L_089DFE9C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089DFE80; }
    goto L_089DFEA4;
L_089DFEA4:;
    v1 = 0 + 0;
    goto L_089DFEA8;
L_089DFEA8:;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089DFEB8; }
    goto L_089DFEB0;
L_089DFEB0:;
    v0 = LD32(v1+172);
    v0 = v0 & 0x1;
    goto L_089DFEB8;
L_089DFEB8:;
    cnd_ = s2 != 0;
    if (cnd_) { a0 = 0x8034; goto L_089DFECC; }
    goto L_089DFEC0;
L_089DFEC0:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s1+112); goto L_089DFF44; }
    goto L_089DFEC8;
L_089DFEC8:;
    a0 = 0x8034;
    goto L_089DFECC;
L_089DFECC:;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089DFEDC;
L_089DFEDC:;
    cnd_ = v0 == 0;
    t1 = v0 + 0;
    if (cnd_) { goto L_089DFF40; }
    goto L_089DFEE4;
L_089DFEE4:;
    v1 = LD32(v0+24);
    a0 = v0 + 0;
    a1 = 1;
    v0 = LD32(v1);
    v0 = (v0 & ~(0x1u << 0)) | ((s2 & 0x1) << 0);
    ST32(v1, v0);
    a2 = 1;
    v0 = LD32(s1+36);
    ST32(v1+4, v0);
    a3 = LD32(s0);
    t0 = LD32(t1+28);
    v0 = LD32(a3-16);
    t0 = t0 | 0x1;
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t1, v1);
    a3 = LD32(s0);
    v0 = LD32(a3-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(t1+28, t0);
    ST32(t1+4, v1);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFF40;
L_089DFF40:;
    v0 = LD32(s1+112);
    goto L_089DFF44;
L_089DFF44:;
    v0 = v0 | 0x20;
    v0 = (v0 & ~(0x7u << 11)) | ((0 & 0x7) << 11);
    ST32(s1+112, v0);
    goto L_089DFF50;
L_089DFF50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089DFF68:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089DFE98; }
    goto L_089DFF74;
L_089DFF74:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089DFE9C; }
    goto L_089DFF80;
L_089DFF80:;
    goto L_089DFEA8;
}

/* 089DFF88 */
void func_089DFF88(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089DFF88:;
    sp = sp - 32;
    s3 = a1 + 0;
    s2 = a0 + 40;
    v0 = LD_U8(s2+8);
    cnd_ = v0 != 0;
    s1 = LD32(a1+36);
    if (cnd_) { goto L_089E001C; }
    goto L_089DFFB4;
L_089DFFB4:;
    v0 = LD32(a0+40);
    cnd_ = v0 == 0;
    s0 = s2 + 0;
    if (cnd_) { goto L_089DFFE8; }
    goto L_089DFFC0;
L_089DFFC0:;
    v1 = v0 + 0;
    goto L_089DFFC4;
L_089DFFC4:;
    a0 = v1 + 12;
    s0 = v1 + 8;
    v1 = LD32(v1);
    v0 = s1 < v1;
    cnd_ = v1 == s1;
    if (v0 == 0) s0 = a0;
    if (cnd_) { goto L_089E001C; }
    goto L_089DFFDC;
L_089DFFDC:;
    v0 = LD32(s0);
    cnd_ = v0 != 0;
    v1 = v0 + 0;
    if (cnd_) { goto L_089DFFC4; }
    goto L_089DFFE8;
L_089DFFE8:;
    a0 = 16;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089DFFF0;
L_089DFFF0:;
    ST32(v0, s1);
    a0 = v0 + 0;
    v1 = v0 + 4;
    v0 = LD32(s2+4);
    ST32(a0+8, 0);
    v0 = v0 + 1;
    ST32(a0+12, 0);
    ST32(s2+4, v0);
    cnd_ = v1 == 0;
    ST32(s0, a0);
    if (cnd_) { goto L_089E001C; }
    goto L_089E0018;
L_089E0018:;
    ST32(a0+4, s3);
    goto L_089E001C;
L_089E001C:;
    sp = sp + 32;
    return;
}

/* 089E0038 */
rv_t func_089E0038(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E0038:;
    sp = sp - 16;
    s1 = a2 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089E0060; }
    goto L_089E0054;
L_089E0054:;
    v1 = LD32(a1);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089E007C; }
    goto L_089E0060;
L_089E0060:;
    v1 = 1;
    goto L_089E0064;
L_089E0064:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E007C:;
    v1 = LD32(v1);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E008C;
L_089E008C:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E0060; }
    goto L_089E0094;
L_089E0094:;
    v0 = LD32(s0);
    ST32(s1, v0);
    goto L_089E0064;
}

/* 089E00A0 */
rv_t func_089E00A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E00A0:;
    sp = sp - 32;
    v0 = 1;
    v1 = RS_FADDR(func_089E0038, 0x089E0038u) - (56);
    s0 = a0 + 40;
    s2 = v1 + 56;
    s1 = LD32(a0+40);
    ST8(s0+8, v0);
    cnd_ = s1 == 0;
    ST32(sp, 0);
    if (cnd_) { goto L_089E0114; }
    goto L_089E00D4;
L_089E00D4:;
    a1 = LD32(s1+8);
    cnd_ = a1 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E01A4; }
    goto L_089E00E0;
L_089E00E0:;
    a1 = LD32(s1+12);
    goto L_089E00E4;
L_089E00E4:;
    cnd_ = a1 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_089E0108; }
    goto L_089E00EC;
L_089E00EC:;
    a0 = s0 + 0;
    a2 = s2 + 0;
    a3 = sp + 0;
    { rv_t r_ = func_08AC7728(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E00FC;
L_089E00FC:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+12); goto L_089E0118; }
    goto L_089E0104;
L_089E0104:;
    a0 = LD32(s1);
    goto L_089E0108;
L_089E0108:;
    a1 = s1 + 4;
    t_ = s2;
    a2 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0114;
L_089E0114:;
    a0 = LD32(s0+12);
    goto L_089E0118;
L_089E0118:;
    cnd_ = a0 == 0;
    if (cnd_) { ST8(s0+8, 0); goto L_089E0178; }
    goto L_089E0120;
L_089E0120:;
    v0 = LD32(s0+16);
    cnd_ = v0 == 0;
    s1 = 0 + 0;
    if (cnd_) { goto L_089E0164; }
    goto L_089E012C;
L_089E012C:;
    v0 = s1 << 2;
    goto L_089E0130;
L_089E0130:;
    v0 = v0 + a0;
    a1 = LD32(v0);
    a0 = s0 + 0;
    s1 = s1 + 1;
    v0 = func_08AC74B4(a0, a1);
    goto L_089E0144;
L_089E0144:;
    a0 = v0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E014C;
L_089E014C:;
    v0 = LD32(s0+16);
    v0 = s1 < v0;
    cnd_ = v0 == 0;
    a0 = LD32(s0+12);
    if (cnd_) { goto L_089E0164; }
    goto L_089E015C;
L_089E015C:;
    v0 = s1 << 2;
    goto L_089E0130;
L_089E0164:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E0194; }
    goto L_089E016C;
L_089E016C:;
    ST32(s0+12, 0);
    goto L_089E0170;
L_089E0170:;
    ST32(s0+16, 0);
    ST8(s0+8, 0);
    goto L_089E0178;
L_089E0178:;
    v0 = LD32(sp);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E0194:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E019C;
L_089E019C:;
    ST32(s0+12, 0);
    goto L_089E0170;
L_089E01A4:;
    a2 = s2 + 0;
    a3 = sp + 0;
    { rv_t r_ = func_08AC7728(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E01B0;
L_089E01B0:;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s0+12); goto L_089E0118; }
    goto L_089E01B8;
L_089E01B8:;
    a1 = LD32(s1+12);
    goto L_089E00E4;
}

/* 089E01C0 */
rv_t func_089E01C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E01C0:;
    sp = sp - 48;
    v1 = 0x10000u;
    v0 = LD32(a0+72);
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E01F4; }
    goto L_089E01E4;
L_089E01E4:;
    v0 = LD32(a0+112);
    v0 = v0 & 0x4;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_089E02F8; }
    goto L_089E01F4;
L_089E01F4:;
    v1 = LD32(s0);
    goto L_089E01F8;
L_089E01F8:;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0204;
L_089E0204:;
    cnd_ = v0 != 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_089E02E4; }
    goto L_089E020C;
L_089E020C:;
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0218;
L_089E0218:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089E024C; }
    goto L_089E0220;
L_089E0220:;
    v0 = LD32(s0+112);
    v0 = v0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089E02B8; }
    goto L_089E0230;
L_089E0230:;
    v1 = LD32(s1);
    goto L_089E0234;
L_089E0234:;
    a0 = s1 + 0;
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0244;
L_089E0244:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E0298; }
    goto L_089E024C;
L_089E024C:;
    a0 = LD32(s0+112);
    v0 = a0 & 0x80;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_089E0298; }
    goto L_089E025C;
L_089E025C:;
    v0 = LD32(s0+72);
    v1 = 0x10000u;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_089E0298; }
    goto L_089E0270;
L_089E0270:;
    v0 = a0 & 0x4;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E0298; }
    goto L_089E027C;
L_089E027C:;
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E028C;
L_089E028C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E0298; }
    goto L_089E0294;
L_089E0294:;
    a0 = 0 + 0;
    goto L_089E0298;
L_089E0298:;
    v0 = a0 + 0;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089E02B0:;
    a0 = s0 + 0;
    goto L_089E0298;
L_089E02B8:;
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E02C4;
L_089E02C4:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089E0234; }
    goto L_089E02CC;
L_089E02CC:;
    v1 = LD32(s0);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E02DC;
L_089E02DC:;
    v1 = LD32(s1);
    goto L_089E0234;
L_089E02E4:;
    v0 = LD32(v1+68);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E02F0;
L_089E02F0:;
    v1 = LD32(s0);
    goto L_089E020C;
L_089E02F8:;
    v0 = LD32(v1+48);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0304;
L_089E0304:;
    cnd_ = v0 != 0;
    v1 = LD32(s0);
    if (cnd_) { goto L_089E01F8; }
    goto L_089E030C;
L_089E030C:;
    a0 = s0 + 0;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E031C;
L_089E031C:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0+4); goto L_089E0334; }
    goto L_089E0324;
L_089E0324:;
    v0 = LD32(s0+112);
    v0 = v0 | 0x1000;
    ST32(s0+112, v0);
    goto L_089E02B0;
L_089E0334:;
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089E0354; }
    goto L_089E0340;
L_089E0340:;
    v1 = LD32(a0);
    v0 = LD32(v1+276);
    t_ = v0;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0350;
L_089E0350:;
    v0 = D_08B285A0 - (-31328);
    goto L_089E0354;
L_089E0354:;
    f6 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+108));
    f2 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f0 = f0 - f6;
    f4 = BITSF(LD32(sp+8));
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    ST32(s0+108, FBITS(f0));
    f1 = BITSF(LD32(v0+23196));
    f0 = BITSF(LD32(v1+4));
    f5 = BITSF(LD32(v1+8));
    f2 = f2 - f1;
    f3 = f3 - f0;
    f4 = f4 - f5;
    v0 = D_08AEF188 - (-3704);
    f1 = f2 * f2;
    f0 = f3 * f3;
    f5 = f4 * f4;
    ST32(sp+16, FBITS(f2));
    f1 = f1 + f0;
    f0 = BITSF(LD32(v0-3704));
    ST32(sp+20, FBITS(f3));
    f1 = f1 + f5;
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f4));
    if (cnd_) { goto L_089E0414; }
    goto L_089E03C4;
L_089E03C4:;
    f0 = BITSF(LD32(s0+104));
    f0 = f0 - f6;
    goto L_089E03CC;
L_089E03CC:;
    ST32(s0+104, FBITS(f0));
    f1 = BITSF(0);
    f0 = BITSF(LD32(s0+104));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s0); goto L_089E0400; }
    goto L_089E03E8;
L_089E03E8:;
    f0 = BITSF(LD32(s0+108));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = s0 + 0; goto L_089E0298; }
    goto L_089E03FC;
L_089E03FC:;
    v1 = LD32(s0);
    goto L_089E0400;
L_089E0400:;
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E040C;
L_089E040C:;
    a0 = 0 + 0;
    goto L_089E0298;
L_089E0414:;
    v0 = D_08AEF18C - (-3700);
    f0 = BITSF(LD32(v0-3700));
    goto L_089E03CC;
}

/* 089E0420 */
rv_t func_089E0420(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E0420:;
    sp = sp - 32;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E0450; }
    goto L_089E0440;
L_089E0440:;
    v0 = LD32(a0+112);
    v0 = v0 & 0x20;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_089E0468; }
    goto L_089E0450;
L_089E0450:;
    v0 = 1;
    goto L_089E0454;
L_089E0454:;
    goto L_089E0458;
L_089E0458:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E0468:;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0474;
L_089E0474:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089E0484; }
    goto L_089E047C;
L_089E047C:;
    v0 = 0 + 0;
    goto L_089E0454;
L_089E0484:;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0490;
L_089E0490:;
    a1 = v0 + 0;
    a0 = sp + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E049C;
L_089E049C:;
    a2 = LD32(s0+112);
    v0 = 0x10000u;
    v0 = v0 | 0x2000;
    v0 = a2 & v0;
    v1 = 0x10000u;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = s0 + 128; goto L_089E0520; }
    goto L_089E04B8;
L_089E04B8:;
    v1 = LD32(s1);
    goto L_089E04BC;
L_089E04BC:;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v1 = LD32(v0+100);
    cnd_ = v1 == 0;
    v0 = 1;
    if (cnd_) { goto L_089E0454; }
    goto L_089E04D0;
L_089E04D0:;
    a1 = LD32(s0+68);
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089E0458; }
    goto L_089E04DC;
L_089E04DC:;
    v0 = a2 & 0x200;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089E0458; }
    goto L_089E04E8;
L_089E04E8:;
    a0 = v1 + 52;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E04F4;
L_089E04F4:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E0500; }
    goto L_089E04FC;
L_089E04FC:;
    a0 = LD32(v0);
    goto L_089E0500;
L_089E0500:;
    cnd_ = a0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089E0454; }
    goto L_089E0508;
L_089E0508:;
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0518;
L_089E0518:;
    goto L_089E0458;
L_089E0520:;
    v0 = LD32(s0+128);
    v1 = LD32(a0+4);
    {v[4]=BITSF(v0);}
    a1 = LD32(a0+12);
    {v[5]=BITSF(v1);}
    v0 = LD32(a0+8);
    v1 = LD32(sp+4);
    {v[6]=BITSF(v0);}
    v0 = LD32(sp);
    {v[7]=BITSF(a1);}
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+8);
    {v[1]=BITSF(v1);}
    v1 = LD32(sp+12);
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(v1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v1 = D_08AEF194 - (-3692);
    v0 = D_08AEF190 - (-3696);
    f0 = BITSF(LD32(v1-3692));
    f1 = BITSF(LD32(v0-3696));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    v0 = 0 + 0;
    if (cnd_) { goto L_089E0454; }
    goto L_089E0594;
L_089E0594:;
    v1 = LD32(s1);
    goto L_089E04BC;
}

/* 089E059C */
rv_t func_089E059C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E059C:;
    sp = sp - 64;
    s0 = a0 + 0;
    v0 = LD32(a0+4);
    a0 = LD32(v0+52);
    cnd_ = a0 == 0;
    s1 = a1 & 0xff;
    if (cnd_) { goto L_089E05D0; }
    goto L_089E05C0;
L_089E05C0:;
    v0 = LD32(s0+112);
    v0 = v0 & 0x1020;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_089E05E8; }
    goto L_089E05D0;
L_089E05D0:;
    v0 = 1;
    goto L_089E05D4;
L_089E05D4:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089E05E8:;
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E05F4;
L_089E05F4:;
    f6 = BITSF(LD32(v0+8));
    f5 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(s0+124));
    f1 = BITSF(LD32(s0+116));
    v0 = D_08AEF198 - (-3688);
    ST32(sp+20, FBITS(f0));
    ST32(sp, FBITS(f5));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f6));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    cnd_ = s1 != 0;
    f4 = BITSF(LD32(v0-3688));
    if (cnd_) { goto L_089E0630; }
    goto L_089E062C;
L_089E062C:;
    f4 = f4 * f4;
    goto L_089E0630;
L_089E0630:;
    v0 = D_08B28598 - (-31336);
    v1 = D_08AEF19C - (-3684);
    f3 = BITSF(LD32(v0-31336));
    f0 = BITSF(LD32(v1-3684));
    fcc = FCMP(f3, f0, 12);
    cnd_ = !fcc;
    f1 = f5 - f1;
    if (cnd_) { goto L_089E0660; }
    goto L_089E0650;
L_089E0650:;
    v0 = D_08AEF1A0 - (-3680);
    f0 = BITSF(LD32(v0-3680));
    f0 = f3 * f0;
    f4 = f4 / f0;
    goto L_089E0660;
L_089E0660:;
    f2 = f6 - f2;
    ST32(sp+36, 0);
    v0 = 1;
    f0 = f1 * f1;
    f3 = f2 * f2;
    ST32(sp+32, FBITS(f1));
    f0 = f0 + f3;
    fcc = FCMP(f0, f4, 12);
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_089E0690; }
    goto L_089E068C;
L_089E068C:;
    v0 = 0 + 0;
    goto L_089E0690;
L_089E0690:;
    v0 = v0 & 0xff;
    goto L_089E05D4;
}

/* 089E0698 */
rv_t func_089E0698(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E0698:;
    sp = sp - 64;
    s3 = a0 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s2 = a1 + 0;
    if (cnd_) { goto L_089E0710; }
    goto L_089E06C8;
L_089E06C8:;
    v1 = LD32(a0);
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E06D8;
L_089E06D8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089E0844; }
    goto L_089E06E0;
L_089E06E0:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s0 = LD32(v0+100);
    cnd_ = s0 == 0;
    if (cnd_) { ST32(s2, 0); goto L_089E0708; }
    goto L_089E06F8;
L_089E06F8:;
    a1 = LD32(s3+68);
    cnd_ = a1 != 0;
    a0 = s0 + 52;
    if (cnd_) { goto L_089E0730; }
    goto L_089E0704;
L_089E0704:;
    ST32(s2, 0);
    goto L_089E0708;
L_089E0708:;
    ST32(s2+8, 0);
    ST32(s2+4, 0);
    goto L_089E0710;
L_089E0710:;
    goto L_089E0714;
L_089E0714:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089E0730:;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E0738;
L_089E0738:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E0744; }
    goto L_089E0740;
L_089E0740:;
    a0 = LD32(v0);
    goto L_089E0744;
L_089E0744:;
    v0 = LD32(s3+112);
    v1 = 0 < a0;
    v0 = (v0 >> 7) & 0x1;
    v1 = v1 & v0;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089E0828; }
    goto L_089E075C;
L_089E075C:;
    a1 = LD32(s0+16);
    goto L_089E0760;
L_089E0760:;
    cnd_ = a1 == 0;
    s1 = s0 + 76;
    if (cnd_) { goto L_089E0790; }
    goto L_089E0768;
L_089E0768:;
    v0 = D_08B285AC - (-31316);
    s4 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s4;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E0794; }
    goto L_089E077C;
L_089E077C:;
    v0 = LD32(s1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEF1A4 - (-3676);
    if (cnd_) { goto L_089E0810; }
    goto L_089E078C;
L_089E078C:;
    ST32(s0+220, s4);
    goto L_089E0790;
L_089E0790:;
    a0 = s1 + 0;
    goto L_089E0794;
L_089E0794:;
    a1 = s2 + 0;
    { rv_t r_ = func_088166EC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E079C;
L_089E079C:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089E0714; }
    goto L_089E07A8;
L_089E07A8:;
    {v[112]=BITSF(LD32(s3+(128)));}
    {v[113]=BITSF(LD32(s3+(132)));}
    {v[114]=BITSF(LD32(s3+(136)));}
    {v[115]=BITSF(LD32(s3+(140)));}
    {v[116]=BITSF(LD32(s2+(0)));}
    {v[117]=BITSF(LD32(s2+(4)));}
    {v[118]=BITSF(LD32(s2+(8)));}
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
    {ST32(s2+(0),FBITS(v[120]));}
    {ST32(s2+(4),FBITS(v[121]));}
    {ST32(s2+(8),FBITS(v[122]));}
    goto L_089E0714;
L_089E0810:;
    f12 = BITSF(LD32(v0-3676));
    a0 = s1 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0820;
L_089E0820:;
    ST32(s0+220, s4);
    goto L_089E0790;
L_089E0828:;
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0834;
L_089E0834:;
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s2, 0); goto L_089E0708; }
    goto L_089E083C;
L_089E083C:;
    a1 = LD32(s0+16);
    goto L_089E0760;
L_089E0844:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+244);
    t_ = v0;
    s0 = s3 + 116;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0858;
L_089E0858:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s3+116));
    f5 = BITSF(LD32(v0+4));
    f3 = f3 - f1;
    f2 = f2 - f0;
    f4 = BITSF(LD32(s0+4));
    ST32(s2+4, 0);
    {u32 a_=sp+(16);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f4 = f4 - f5;
    f6 = BITSF(LD32(s2+4));
    v0 = FBITS(f2);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(s1);}
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(s2, FBITS(f2));
    f5 = f6;
    fcc = FCMP(f0, f6, 2);
    ST32(s2+8, FBITS(f3));
    ST32(sp+4, FBITS(f4));
    ST32(sp, FBITS(f2));
    ST32(sp+8, FBITS(f3));
    cnd_ = fcc;
    f4 = BITSF(LD32(s3+100));
    if (cnd_) { goto L_089E0918; }
    goto L_089E08CC;
L_089E08CC:;
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
    {v0=FBITS(v[1]);}
    f0 = BITSF(v0);
    ST32(sp, FBITS(f2));
    f6 = f0;
    ST32(sp+8, FBITS(f3));
    ST32(s2+4, v0);
    ST32(s2, FBITS(f2));
    ST32(s2+8, FBITS(f3));
    ST32(sp+4, v0);
    goto L_089E0918;
L_089E0918:;
    v0 = D_08AEF1A4 - (-3676);
    f0 = BITSF(LD32(v0-3676));
    fcc = FCMP(f5, f0, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = BITSF(LD32(s2)); goto L_089E0948; }
    goto L_089E0930;
L_089E0930:;
    v0 = D_08AEF1A8 - (-3672);
    f0 = BITSF(LD32(v0-3672));
    f0 = f5 + f0;
    f0 = f0 * f0;
    f4 = f4 * f0;
    f0 = BITSF(LD32(s2));
    goto L_089E0948;
L_089E0948:;
    f1 = BITSF(LD32(s2+8));
    f2 = f6 * f4;
    f0 = f0 * f4;
    f1 = f1 * f4;
    ST32(s2+4, FBITS(f2));
    ST32(s2+8, FBITS(f1));
    ST32(s2, FBITS(f0));
    goto L_089E0710;
}

/* 089E0968 */
rv_t func_089E0968(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr81 = v[81], vr82 = v[82], vr83 = v[83], vr85 = v[85], vr86 = v[86], vr87 = v[87], vr92 = v[92], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr99 = v[99], vr100 = v[100], vr106 = v[106], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr120 = v[120], vr124 = v[124];
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_089E0968:;
    sp = sp - 160;
    s2 = a1 + 0;
    a2 = LD32(a0+112);
    v0 = (a2 >> 16) & 0x1;
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E0A08; }
    goto L_089E0998;
L_089E0998:;
    v0 = LD32(a0+4);
    s1 = LD32(v0+52);
    cnd_ = s1 == 0;
    v0 = a2 & 0x20;
    if (cnd_) { goto L_089E0FA4; }
    goto L_089E09A8;
L_089E09A8:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(a0); goto L_089E0A28; }
    goto L_089E09B0;
L_089E09B0:;
    v1 = LD32(s1);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr81=v[81];vr82=v[82];vr83=v[83];vr85=v[85];vr86=v[86];vr87=v[87];vr92=v[92];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];vr124=v[124];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E09C0;
L_089E09C0:;
    f0 = BITSF(LD32(v0+32));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    f3 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(v0+12));
    f5 = BITSF(LD32(v0+16));
    f6 = BITSF(LD32(v0+20));
    f7 = BITSF(LD32(v0+24));
    f8 = BITSF(LD32(v0+28));
    ST32(s2+32, FBITS(f0));
    ST32(s2, FBITS(f1));
    ST32(s2+4, FBITS(f2));
    ST32(s2+8, FBITS(f3));
    ST32(s2+12, FBITS(f4));
    ST32(s2+16, FBITS(f5));
    ST32(s2+20, FBITS(f6));
    ST32(s2+24, FBITS(f7));
    ST32(s2+28, FBITS(f8));
    goto L_089E0A08;
L_089E0A08:;
    goto L_089E0A0C;
L_089E0A0C:;
    sp = sp + 160;
    { v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;return (rv_t){ v0, v1, f0 }; }
L_089E0A28:;
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ({ v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr81=v[81];vr82=v[82];vr83=v[83];vr85=v[85];vr86=v[86];vr87=v[87];vr92=v[92];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];vr124=v[124];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0A34;
L_089E0A34:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s1); goto L_089E0BE4; }
    goto L_089E0A3C;
L_089E0A3C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+32);
    t_ = v0;
    s0 = sp + 16;
    { rv_t r_ = ({ v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr81=v[81];vr82=v[82];vr83=v[83];vr85=v[85];vr86=v[86];vr87=v[87];vr92=v[92];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];vr124=v[124];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0A54;
L_089E0A54:;
    a0 = s0 + 0;
    a1 = sp + 0;
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0A60;
L_089E0A60:;
    a1 = s0 + 0;
    a0 = sp + 64;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0A6C;
L_089E0A6C:;
    v1 = LD32(s1);
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr81=v[81];vr82=v[82];vr83=v[83];vr85=v[85];vr86=v[86];vr87=v[87];vr92=v[92];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];vr124=v[124];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0A7C;
L_089E0A7C:;
    a1 = v0 + 0;
    a0 = sp + 80;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0A88;
L_089E0A88:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    v0 = D_08AEF1AC - (-3668);
    f0 = BITSF(LD32(v0-3668));
    v1 = D_08AEF1B0 - (-3664);
    f2 = BITSF(LD32(v1-3664));
    f1 = f1 * f0;
    v1 = FBITS(f2);
    v0 = FBITS(f1);
    {vr112=BITSF(LD32(sp+(80)));}
    {vr113=BITSF(LD32(sp+(84)));}
    {vr114=BITSF(LD32(sp+(88)));}
    {vr115=BITSF(LD32(sp+(92)));}
    {v[116]=BITSF(LD32(sp+(64)));}
    {v[117]=BITSF(LD32(sp+(68)));}
    {v[118]=BITSF(LD32(sp+(72)));}
    {v[119]=BITSF(LD32(sp+(76)));}
    {vr124=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=v[0];vr97=(float)0;}
    {float s0=v[0];vr98=(float)1;}
    {float s0=vr97;float t0=vr96;float d0=(s0>=t0?1.f:0.f);vr99=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=vr98;float t0=vr124;float d0=s0-t0;v[125]=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089E0B18; }
    goto L_089E0AF8;
L_089E0AF8:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=vr98;float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=v[125];float t0=vr100;vr124=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;v[125]=s1*t0;}
    goto L_089E0B18;
L_089E0B18:;
    {float s0=vr99;float t0=vr99;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089E0B2C; }
    goto L_089E0B24;
L_089E0B24:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_089E0B2C;
L_089E0B2C:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=v[125];v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=vr124;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=v[80];float s1=vr81;float s2=vr82;float s3=vr83;float t0=v[84];float t1=vr85;float t2=vr86;float t3=vr87;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=vr120;float s1=v[121];float s2=v[122];float s3=v[123];float t0=vr120;float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089E0B54; }
    goto L_089E0B48;
L_089E0B48:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=v[121];float s2=v[122];float s3=v[123];float t0=vr92;vr120=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_089E0B54;
L_089E0B54:;
    {ST32(sp+(80),FBITS(vr120));}
    {ST32(sp+(84),FBITS(v[121]));}
    {ST32(sp+(88),FBITS(v[122]));}
    {ST32(sp+(92),FBITS(v[123]));}
    {vr112=BITSF(LD32(sp+(80)));}
    {vr113=BITSF(LD32(sp+(84)));}
    {vr114=BITSF(LD32(sp+(88)));}
    {vr115=BITSF(LD32(sp+(92)));}
    {float s0=v[0];vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=v[80];float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;v[105]=d0;}
    {float s0=vr106;float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;v[102]=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(s2+(0),FBITS(vr96));}
    {ST32(s2+(4),FBITS(vr97));}
    {ST32(s2+(8),FBITS(vr98));}
    {ST32(s2+(12),FBITS(vr100));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(vr106));}
    goto L_089E0A0C;
L_089E0BE4:;
    v0 = LD32(v1+240);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ({ v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr81=v[81];vr82=v[82];vr83=v[83];vr85=v[85];vr86=v[86];vr87=v[87];vr92=v[92];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];vr124=v[124];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0BF0;
L_089E0BF0:;
    a1 = v0 + 0;
    a0 = sp + 80;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0BFC;
L_089E0BFC:;
    v0 = LD32(s0+112);
    v0 = v0 & 0x2000;
    cnd_ = v0 == 0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089E0DC8; }
    goto L_089E0C0C;
L_089E0C0C:;
    v0 = LD32(s0+128);
    v1 = LD32(s0+132);
    a0 = LD32(s0+136);
    a1 = LD32(s0+140);
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+72, a0);
    ST32(sp+76, a1);
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    s1 = LD32(v0+100);
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089E0D30; }
    goto L_089E0C44;
L_089E0C44:;
    a1 = LD32(s1+16);
    cnd_ = a1 == 0;
    s3 = s1 + 76;
    if (cnd_) { goto L_089E0C78; }
    goto L_089E0C50;
L_089E0C50:;
    v0 = D_08B285AC - (-31316);
    s4 = LD32(v0-31316);
    v1 = LD32(s1+220);
    cnd_ = v1 == s4;
    a0 = s3 + 0;
    if (cnd_) { goto L_089E0C7C; }
    goto L_089E0C64;
L_089E0C64:;
    v0 = LD32(s3+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEF1B4 - (-3660);
    if (cnd_) { goto L_089E0DB0; }
    goto L_089E0C74;
L_089E0C74:;
    ST32(s1+220, s4);
    goto L_089E0C78;
L_089E0C78:;
    a0 = s3 + 0;
    goto L_089E0C7C;
L_089E0C7C:;
    a2 = sp + 64;
    a1 = 0 + 0;
    { rv_t r_ = func_08816684(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0C88;
L_089E0C88:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    v0 = LD32(sp+64);
    if (cnd_) { goto L_089E0D30; }
    goto L_089E0C94;
L_089E0C94:;
    a0 = s0 + 128;
    a1 = LD32(a0+12);
    v1 = LD32(s0+128);
    {v[8]=BITSF(v1);}
    {v[4]=BITSF(v0);}
    v1 = LD32(sp+68);
    v0 = LD32(sp+72);
    {v[5]=BITSF(v1);}
    v1 = LD32(sp+76);
    {v[6]=BITSF(v0);}
    v0 = LD32(a0+4);
    {v[7]=BITSF(v1);}
    {v[9]=BITSF(v0);}
    v1 = LD32(a0+8);
    {v[10]=BITSF(v1);}
    {v[11]=BITSF(a1);}
    {float s0=v[8];float s1=v[9];float s2=v[10];float s3=v[11];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float d0=s0*t3+s3*t0+s1*t2-s2*t1;float d1=s1*t3+s3*t1+s2*t0-s0*t2;float d2=s2*t3+s3*t2+s0*t1-s1*t0;float d3=s3*t3-s0*t0-s1*t1-s2*t2;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {v0=FBITS(v[3]);}
    {v1=FBITS(v[0]);}
    f4 = BITSF(v0);
    f3 = BITSF(v1);
    {v0=FBITS(v[1]);}
    {v1=FBITS(v[2]);}
    ST32(sp+116, v0);
    ST32(sp+120, v1);
    ST32(sp+112, FBITS(f3));
    ST32(sp+124, FBITS(f4));
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    a0 = LD32(sp+120);
    a1 = LD32(sp+124);
    ST32(sp+64, v0);
    ST32(sp+68, v1);
    ST32(sp+72, a0);
    ST32(sp+76, a1);
    ST32(sp+96, v0);
    ST32(sp+100, v1);
    ST32(sp+104, a0);
    ST32(sp+108, a1);
    goto L_089E0D30;
L_089E0D30:;
    {vr112=BITSF(LD32(sp+(64)));}
    {vr113=BITSF(LD32(sp+(68)));}
    {vr114=BITSF(LD32(sp+(72)));}
    {vr115=BITSF(LD32(sp+(76)));}
    {float s0=v[0];vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=v[80];float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;v[105]=d0;}
    {float s0=vr106;float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;v[102]=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(s2+(0),FBITS(vr96));}
    {ST32(s2+(4),FBITS(vr97));}
    {ST32(s2+(8),FBITS(vr98));}
    {ST32(s2+(12),FBITS(vr100));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(vr106));}
    goto L_089E0A0C;
L_089E0DB0:;
    f12 = BITSF(LD32(v0-3660));
    a0 = s3 + 0;
    a2 = 0 + 0;
    { rv_t r_ = ({ v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;__auto_type vr_t_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr81=v[81];vr82=v[82];vr83=v[83];vr85=v[85];vr86=v[86];vr87=v[87];vr92=v[92];vr96=v[96];vr97=v[97];vr98=v[98];vr99=v[99];vr100=v[100];vr106=v[106];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr120=v[120];vr124=v[124];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E0DC0;
L_089E0DC0:;
    ST32(s1+220, s4);
    goto L_089E0C78;
L_089E0DC8:;
    f1 = BITSF(LD32(v0-31328));
    v0 = D_08AEF1B8 - (-3656);
    f0 = BITSF(LD32(v0-3656));
    v0 = D_08AEF1B0 - (-3664);
    a0 = s0 + 128;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-3664));
    v0 = FBITS(f1);
    v1 = FBITS(f0);
    {vr112=BITSF(LD32(sp+(80)));}
    {vr113=BITSF(LD32(sp+(84)));}
    {vr114=BITSF(LD32(sp+(88)));}
    {vr115=BITSF(LD32(sp+(92)));}
    {v[116]=BITSF(LD32(s0+(128)));}
    {v[117]=BITSF(LD32(s0+(132)));}
    {v[118]=BITSF(LD32(s0+(136)));}
    {v[119]=BITSF(LD32(s0+(140)));}
    {vr124=BITSF(v0);}
    {v[127]=BITSF(v1);}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=v[116];float t1=v[117];float t2=v[118];float t3=v[119];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr96=sum;}
    {float s0=v[0];vr97=(float)0;}
    {float s0=v[0];vr98=(float)1;}
    {float s0=vr97;float t0=vr96;float d0=(s0>=t0?1.f:0.f);vr99=d0;}
    {float s0=vr96;float d0=fabsf(s0);vr96=d0;}
    {float s0=vr98;float t0=vr124;float d0=s0-t0;v[125]=d0;}
    {float s0=vr96;float t0=v[127];u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089E0E58; }
    goto L_089E0E38;
L_089E0E38:;
    {float s0=vr96;float d0=asinf(s0)*0.63661977236f;vr100=d0;}
    {float s0=vr98;float t0=vr100;float d0=s0-t0;vr100=d0;}
    {float s0=vr100;float d0=sinf(s0*1.57079632679f);v[101]=d0;}
    {float s0=vr124;float s1=v[125];float t0=vr100;vr124=s0*t0;v[125]=s1*t0;}
    {float s0=v[101];float d0=1.0f/s0;v[102]=d0;}
    {float s0=vr124;float s1=v[125];float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);v[108]=d0;v[109]=d1;}
    {float s0=v[108];float s1=v[109];float t0=v[102];vr124=s0*t0;v[125]=s1*t0;}
    goto L_089E0E58;
L_089E0E58:;
    {float s0=vr99;float t0=vr99;u32 k0_=(s0!=0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089E0E6C; }
    goto L_089E0E64;
L_089E0E64:;
    {float s0=vr124;float d0=-s0;vr124=d0;}
    goto L_089E0E6C;
L_089E0E6C:;
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=v[125];v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=v[116];float s1=v[117];float s2=v[118];float s3=v[119];float t0=vr124;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=v[80];float s1=vr81;float s2=vr82;float s3=vr83;float t0=v[84];float t1=vr85;float t2=vr86;float t3=vr87;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr120=d0;v[121]=d1;v[122]=d2;v[123]=d3;}
    {float s0=vr120;float s1=v[121];float s2=v[122];float s3=v[123];float t0=vr120;float t1=v[121];float t2=v[122];float t3=v[123];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;vr92=sum;}
    {float s0=vr92;float t0=vr92;u32 k0_=(s0==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = ((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089E0E94; }
    goto L_089E0E88;
L_089E0E88:;
    {float s0=vr92;float d0=1.0f/sqrtf(s0);vr92=d0;}
    {float s0=vr120;float s1=v[121];float s2=v[122];float s3=v[123];float t0=vr92;vr120=s0*t0;v[121]=s1*t0;v[122]=s2*t0;v[123]=s3*t0;}
    goto L_089E0E94;
L_089E0E94:;
    {ST32(sp+(80),FBITS(vr120));}
    {ST32(sp+(84),FBITS(v[121]));}
    {ST32(sp+(88),FBITS(v[122]));}
    {ST32(sp+(92),FBITS(v[123]));}
    {vr112=BITSF(LD32(sp+(80)));}
    {vr113=BITSF(LD32(sp+(84)));}
    {vr114=BITSF(LD32(sp+(88)));}
    {vr115=BITSF(LD32(sp+(92)));}
    {float s0=v[0];vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=v[80];float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;v[105]=d0;}
    {float s0=vr106;float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;v[102]=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(s2+(0),FBITS(vr96));}
    {ST32(s2+(4),FBITS(vr97));}
    {ST32(s2+(8),FBITS(vr98));}
    {ST32(s2+(12),FBITS(vr100));}
    {ST32(s2+(16),FBITS(v[101]));}
    {ST32(s2+(20),FBITS(v[102]));}
    {ST32(s2+(24),FBITS(v[104]));}
    {ST32(s2+(28),FBITS(v[105]));}
    {ST32(s2+(32),FBITS(vr106));}
    v0 = LD32(sp+80);
    v1 = LD32(sp+84);
    {v[4]=BITSF(v0);}
    a1 = LD32(a0+12);
    {v[5]=BITSF(v1);}
    v0 = LD32(sp+88);
    v1 = LD32(sp+92);
    {v[6]=BITSF(v0);}
    v0 = LD32(s0+128);
    {v[7]=BITSF(v1);}
    {v[0]=BITSF(v0);}
    v1 = LD32(a0+4);
    v0 = LD32(a0+8);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {v[3]=BITSF(a1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v1 = D_08AEF1B4 - (-3660);
    v0 = D_08AEF1BC - (-3652);
    f0 = BITSF(LD32(v1-3660));
    f1 = BITSF(LD32(v0-3652));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    v1 = 1;
    if (cnd_) { goto L_089E0F94; }
    goto L_089E0F90;
L_089E0F90:;
    v1 = 0 + 0;
    goto L_089E0F94;
L_089E0F94:;
    v0 = LD32(s0+112);
    v0 = (v0 & ~(0x1u << 13)) | ((v1 & 0x1) << 13);
    ST32(s0+112, v0);
    goto L_089E0A08;
L_089E0FA4:;
    {vr112=BITSF(LD32(a0+(20)));}
    {vr113=BITSF(LD32(a0+(24)));}
    {vr114=BITSF(LD32(a0+(28)));}
    {vr115=BITSF(LD32(a0+(32)));}
    {float s0=v[0];vr120=(float)1;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float s3=vr115;float t0=vr112;float t1=vr113;float t2=vr114;float t3=vr115;float d0=s0+t0;float d1=s1+t1;float d2=s2+t2;float d3=s3+t3;vr96=d0;vr97=d1;vr98=d2;vr99=d3;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr112;v[80]=s0*t0;vr81=s1*t0;vr82=s2*t0;vr83=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr113;v[84]=s0*t0;vr85=s1*t0;vr86=s2*t0;vr87=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr114;v[88]=s0*t0;v[89]=s1*t0;v[90]=s2*t0;v[91]=s3*t0;}
    {float s0=vr96;float s1=vr97;float s2=vr98;float s3=vr99;float t0=vr115;vr92=s0*t0;v[93]=s1*t0;v[94]=s2*t0;v[95]=s3*t0;}
    {float s0=vr120;float t0=vr85;float d0=s0-t0;vr96=d0;}
    {float s0=vr120;float t0=v[80];float d0=s0-t0;vr106=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0+t0;vr100=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0-t0;v[104]=d0;}
    {float s0=vr96;float t0=v[90];float d0=s0-t0;vr96=d0;}
    {float s0=vr81;float t0=v[91];float d0=s0-t0;vr97=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0+t0;v[105]=d0;}
    {float s0=vr106;float t0=v[90];float d0=s0-t0;v[101]=d0;}
    {float s0=vr82;float t0=vr87;float d0=s0+t0;vr98=d0;}
    {float s0=vr86;float t0=vr83;float d0=s0-t0;v[102]=d0;}
    {float s0=vr106;float t0=vr85;float d0=s0-t0;vr106=d0;}
    {ST32(a1+(0),FBITS(vr96));}
    {ST32(a1+(4),FBITS(vr97));}
    {ST32(a1+(8),FBITS(vr98));}
    {ST32(a1+(12),FBITS(vr100));}
    {ST32(a1+(16),FBITS(v[101]));}
    {ST32(a1+(20),FBITS(v[102]));}
    {ST32(a1+(24),FBITS(v[104]));}
    {ST32(a1+(28),FBITS(v[105]));}
    {ST32(a1+(32),FBITS(vr106));}
    goto L_089E0A0C;
    v[81]=vr81;v[82]=vr82;v[83]=vr83;v[85]=vr85;v[86]=vr86;v[87]=vr87;v[92]=vr92;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[99]=vr99;v[100]=vr100;v[106]=vr106;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[120]=vr120;v[124]=vr124;
}

/* 089E1024 */
rv_t func_089E1024(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E1024:;
    sp = sp - 48;
    s2 = a1 + 0;
    v0 = LD32(a0+4);
    s0 = LD32(v0+52);
    cnd_ = s0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089E1198; }
    goto L_089E1054;
L_089E1054:;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+100);
    cnd_ = v0 == 0;
    v0 = a0 + 8;
    if (cnd_) { goto L_089E1198; }
    goto L_089E106C;
L_089E106C:;
    f2 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(a0+8));
    v1 = LD32(a0);
    ST32(s2+4, FBITS(f1));
    ST32(a1, FBITS(f0));
    ST32(s2+8, FBITS(f2));
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1094;
L_089E1094:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E119C; }
    goto L_089E109C;
L_089E109C:;
    v0 = LD32(s1+68);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E11A0; }
    goto L_089E10A8;
L_089E10A8:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    s0 = LD32(v0+100);
    a1 = LD32(s0+16);
    cnd_ = a1 == 0;
    s3 = s0 + 76;
    if (cnd_) { goto L_089E10EC; }
    goto L_089E10C4;
L_089E10C4:;
    v0 = D_08B285AC - (-31316);
    s4 = LD32(v0-31316);
    v1 = LD32(s0+220);
    cnd_ = v1 == s4;
    a0 = s3 + 0;
    if (cnd_) { goto L_089E10F0; }
    goto L_089E10D8;
L_089E10D8:;
    v0 = LD32(s3+16);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v0 = D_08AEF1C0 - (-3648);
    if (cnd_) { goto L_089E11B8; }
    goto L_089E10E8;
L_089E10E8:;
    ST32(s0+220, s4);
    goto L_089E10EC;
L_089E10EC:;
    a0 = s3 + 0;
    goto L_089E10F0;
L_089E10F0:;
    a1 = sp + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_08816684(a0, a1, a2); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E10FC;
L_089E10FC:;
    v0 = v0 & 0xff;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E119C; }
    goto L_089E1108;
L_089E1108:;
    {v[112]=BITSF(LD32(s1+(128)));}
    {v[113]=BITSF(LD32(s1+(132)));}
    {v[114]=BITSF(LD32(s1+(136)));}
    {v[115]=BITSF(LD32(s1+(140)));}
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
    {ST32(sp+(0),FBITS(v[120]));}
    {ST32(sp+(4),FBITS(v[121]));}
    {ST32(sp+(8),FBITS(v[122]));}
    f0 = BITSF(LD32(sp));
    f3 = BITSF(LD32(s2));
    f4 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f3 = f3 + f0;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp+8));
    f4 = f4 + f1;
    f2 = f2 + f0;
    ST32(s2, FBITS(f3));
    ST32(s2+8, FBITS(f2));
    ST32(s2+4, FBITS(f4));
    goto L_089E1198;
L_089E1198:;
    goto L_089E119C;
L_089E119C:;
    goto L_089E11A0;
L_089E11A0:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089E11B8:;
    f12 = BITSF(LD32(v0-3648));
    a0 = s3 + 0;
    a2 = 0 + 0;
    { rv_t r_ = func_088155D0(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E11C8;
L_089E11C8:;
    ST32(s0+220, s4);
    goto L_089E10EC;
}

/* 089E11D0 */
rv_t func_089E11D0(u32 a0, u32 a1, u32 a2)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E11D0:;
    sp = sp - 16;
    v0 = a0 + 116;
    s1 = a0 + 128;
    s0 = a0 + 0;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(v0+8, FBITS(f0));
    a1 = a2 + 0;
    ST32(a0+116, FBITS(f1));
    a0 = s1 + 0;
    ST32(v0+4, FBITS(f2));
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1210;
L_089E1210:;
    v0 = LD32(s0+112);
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = v0 | 0x800;
    v0 = (v0 & ~(0x3u << 12)) | ((0 & 0x3) << 12);
    ST32(s0+112, v0);
    v0 = LD32(v1+60);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1234;
L_089E1234:;
    cnd_ = v0 == 0;
    v1 = s0 + 20;
    if (cnd_) { goto L_089E1248; }
    goto L_089E123C;
L_089E123C:;
    v0 = LD32(s0+112);
    v0 = v0 | 0x1000;
    ST32(s0+112, v0);
    goto L_089E1248;
L_089E1248:;
    t1 = LD32(v1+12);
    a0 = LD32(v1+4);
    a2 = LD32(v1+8);
    v0 = LD32(s0+128);
    v1 = LD32(s0+20);
    {v[4]=BITSF(v0);}
    {v[0]=BITSF(v1);}
    t0 = LD32(s1+12);
    a1 = LD32(s1+4);
    a3 = LD32(s1+8);
    {v[5]=BITSF(a1);}
    {v[1]=BITSF(a0);}
    {v[6]=BITSF(a3);}
    {v[2]=BITSF(a2);}
    {v[7]=BITSF(t0);}
    {v[3]=BITSF(t1);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float t0=v[4];float t1=v[5];float t2=v[6];float t3=v[7];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;sum+=s3*t3;v[0]=sum;}
    {v0=FBITS(v[0]);}
    v0 = (v0 >> 0) & 0x7fffffff;
    f2 = BITSF(v0);
    v1 = D_08AEF1C8 - (-3640);
    v0 = D_08AEF1C4 - (-3644);
    f0 = BITSF(LD32(v1-3640));
    f1 = BITSF(LD32(v0-3644));
    f0 = f0 - f1;
    fcc = FCMP(f0, f2, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089E12C8; }
    goto L_089E12BC;
L_089E12BC:;
    v0 = LD32(s0+112);
    v0 = v0 | 0x2000;
    ST32(s0+112, v0);
    goto L_089E12C8;
L_089E12C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E12D8 */
rv_t func_089E12D8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089E12D8:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2B3EC - (-19476);
    t1 = D_08C2B3FC - (-19460);
    t2 = D_08C2B40C - (-19444);
    a1 = a1 & a0;
    v1 = t0 - 19476;
    a2 = t1 - 19460;
    cnd_ = a1 == 0;
    a3 = t2 - 19444;
    if (cnd_) { goto L_089E1390; }
    goto L_089E1308;
L_089E1308:;
    v0 = D_08AEF1D4 - (-3628);
    f4 = BITSF(LD32(v0-3628));
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
    ST32(t0-19476, FBITS(f2));
    ST32(t1-19460, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-19444, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089E1390;
L_089E1390:;
    return (rv_t){ v0, v1, f0 };
}

/* 089E1398 */
rv_t func_089E1398(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E1398:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E12D8(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E13AC;
L_089E13AC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E13B8 */
void func_089E13B8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E13B8:;
    sp = sp - 48;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = a0 + 0;
    func_08A063EC(a0, a1);
    goto L_089E13E0;
L_089E13E0:;
    a3 = 999;
    v0 = LD32(s0);
    t0 = s3 + 88;
    a1 = (u32)-1;
    ST32(s3, v0);
    v1 = LD32(v0-12);
    a0 = LD32(s0+16);
    v0 = D_08AEF1E0 - (-3616);
    v1 = s3 + v1;
    ST32(v1, a0);
    v1 = D_08AEF1E4 - (-3612);
    a0 = LD32(s3);
    f1 = BITSF(LD32(v0-3616));
    a2 = LD32(s0+20);
    v0 = LD32(a0-16);
    f0 = BITSF(LD32(v1-3612));
    ST32(s3+88, 0);
    v0 = s3 + v0;
    f12 = f1;
    ST32(v0, a2);
    v0 = D_08AEF1E8 - (-3608);
    ST32(s3+84, a3);
    ST32(t0+8, 0);
    ST32(t0+4, 0);
    ST32(s3+128, FBITS(f0));
    ST32(s3+124, FBITS(f0));
    f0 = BITSF(LD32(v0-3608));
    ST32(s3+132, a3);
    v0 = D_08AEF1EC - (-3604);
    ST16(s3+138, a1);
    ST32(s3+104, FBITS(f1));
    ST32(s3+108, a3);
    ST32(s3+112, a1);
    ST32(s3+116, a1);
    ST32(s3+100, 0);
    ST8(s3+120, 0);
    ST8(s3+136, 0);
    ST32(s3+140, 0);
    ST32(s3+144, 0);
    ST32(s3+148, 0);
    ST32(s3+152, 0);
    ST32(s3+156, 0);
    ST32(s3+160, 0);
    ST32(s3+164, FBITS(f0));
    a0 = LD32(s3);
    f0 = BITSF(LD32(v0-3604));
    v0 = (u32)-32767;
    v1 = LD32(a0-16);
    ST32(s3+172, 0);
    v1 = s3 + v1;
    ST32(s3+168, FBITS(f0));
    ST32(s3+176, 0);
    ST16(v1+8, v0);
    a0 = LD32(s3);
    v1 = LD32(a0-12);
    v1 = s3 + v1;
    v0 = LD32(v1+64);
    v0 = v0 | 0x1;
    ST32(v1+64, v0);
    a1 = LD32(s3);
    a0 = LD32(a1-12);
    a0 = s3 + a0;
    func_0886422C(a0, f12);
    goto L_089E14DC;
L_089E14DC:;
    v0 = D_08ADE960 - (-5792);
    s0 = v0 - 5792;
    a0 = s0 + 0;
    { u64 r_ = func_088992A4(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E14EC;
L_089E14EC:;
    cnd_ = v0 == 0;
    a1 = D_08C2B4DC - (-19236);
    if (cnd_) { goto L_089E15BC; }
    goto L_089E14F4;
L_089E14F4:;
    a0 = LD32(s3);
    goto L_089E14F8;
L_089E14F8:;
    s2 = D_08C2B4CC - (-19252);
    s1 = s2 - 19252;
    v0 = LD32(a0-16);
    v1 = LD32(s1+4);
    a0 = 12;
    v0 = s3 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1520;
L_089E1520:;
    a0 = LD32(s2-19252);
    s0 = s0 << 2;
    v1 = LD32(s1+12);
    s0 = s0 + a0;
    a1 = LD32(s0);
    ST32(v0, s3);
    v1 = v1 + 1;
    a0 = 0 + 0;
    ST32(v0+4, a1);
    ST8(v0+8, 0);
    ST32(s0, v0);
    ST32(s1+12, v1);
    v1 = s3 + 180;
    goto L_089E1554;
L_089E1554:;
    a0 = a0 + 1;
    v0 = a0 < 0x5u;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E1554; }
    goto L_089E1568;
L_089E1568:;
    a0 = 0xd0cd0000u;
    a1 = 0x8ee80000u;
    a2 = sp + 0;
    a0 = a0 | 0xc21c;
    a1 = a1 | 0xd26f;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1584;
L_089E1584:;
    v0 = D_08AEF1F0 - (-3600);
    f12 = BITSF(LD32(v0-3600));
    a0 = LD32(sp);
    a1 = 0x2c0c0000u;
    a1 = a1 | 0x7591;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E159C;
L_089E159C:;
    ST32(s3+148, FBITS(f0));
    sp = sp + 48;
    return;
L_089E15BC:;
    a0 = s0 + 0;
    a1 = a1 - 19236;
    a2 = 1;
    a3 = 0 + 0;
    { rv_t r_ = func_088977A0(a0, a1, a2, a3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E15D0;
L_089E15D0:;
    a0 = LD32(s3);
    goto L_089E14F8;
}

/* 089E15D8 */
void func_089E15D8(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E15D8:;
    sp = sp - 16;
    t0 = D_08C2B4CC - (-19252);
    s2 = t0 - 19252;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = LD32(a1);
    ST32(a0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s1+16);
    v0 = a0 + v0;
    ST32(v0, v1);
    a2 = LD32(a0);
    a3 = LD32(s1+20);
    a0 = LD32(s2+4);
    v0 = LD32(a2-16);
    a1 = LD32(t0-19252);
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
    if (cnd_) { goto L_089E1678; }
    goto L_089E165C;
L_089E165C:;
    v0 = LD32(a0);
    goto L_089E1660;
L_089E1660:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_089E169C; }
    goto L_089E1668;
L_089E1668:;
    t1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089E1660; }
    goto L_089E1678;
L_089E1678:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    func_08A0652C(a0, a1, t2, t3);
    goto L_089E1684;
L_089E1684:;
    sp = sp + 16;
    return;
L_089E169C:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089E16AC; }
    goto L_089E16A4;
L_089E16A4:;
    ST8(a0+8, v0);
    goto L_089E1678;
L_089E16AC:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089E16D4; }
    goto L_089E16B4;
L_089E16B4:;
    v0 = LD32(a0+4);
    ST32(t1+4, v0);
    goto L_089E16BC;
L_089E16BC:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E16C4;
L_089E16C4:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089E1678;
L_089E16D4:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_089E16BC;
}

/* 089E16E4 */
rv_t func_089E16E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E16E4:;
    v1 = D_08B04810 - (18448);
    sp = sp - 32;
    v1 = v1 + 18448;
    v0 = v1 + 360;
    s1 = a0 + 0;
    a0 = v1 + 564;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+276, a0);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    ST32(s1+200, v0);
    s0 = D_08B04A90 - (19088);
    s0 = s0 + 19088;
    s3 = s1 + 276;
    func_08AC7C08(a0, a1, t1, t2, t3);
    goto L_089E1738;
L_089E1738:;
    s2 = s1 + 200;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089E174C;
L_089E174C:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E1758;
L_089E1758:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1760;
L_089E1760:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E177C */
rv_t func_089E177C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E177C:;
    v1 = D_08B04810 - (18448);
    sp = sp - 32;
    v1 = v1 + 18448;
    v0 = v1 + 360;
    s1 = a0 + 0;
    a0 = v1 + 564;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+276, a0);
    a0 = D_08C2B4CC - (-19252);
    a0 = a0 - 19252;
    ST32(s1+200, v0);
    s0 = D_08B04A90 - (19088);
    s0 = s0 + 19088;
    s3 = s1 + 276;
    func_08AC7C08(a0, a1, t1, t2, t3);
    goto L_089E17D0;
L_089E17D0:;
    s2 = s1 + 200;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089E17E4;
L_089E17E4:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E17F0;
L_089E17F0:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E17F8;
L_089E17F8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1800;
L_089E1800:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E181C */
rv_t func_089E181C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E181C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0+176);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E1848; }
    goto L_089E1838;
L_089E1838:;
    goto L_089E183C;
L_089E183C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E1848:;
    v0 = LD32(v0);
    v1 = LD32(v0+12);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1858;
L_089E1858:;
    v0 = LD32(s0+172);
    v1 = 4;
    v0 = v0 & 0x5;
    cnd_ = v0 != v1;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E1838; }
    goto L_089E186C;
L_089E186C:;
    v0 = func_089E3BC4(a0);
    goto L_089E1874;
L_089E1874:;
    a1 = 1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E1838; }
    goto L_089E1880;
L_089E1880:;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1888;
L_089E1888:;
    goto L_089E183C;
}

/* 089E1890 */
rv_t func_089E1890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_089E1890:;
    sp = sp - 112;
    s4 = a0 + 0;
    { rv_t r_ = func_08A06744(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E18BC;
L_089E18BC:;
    f2 = BITSF(0);
    f1 = BITSF(LD32(s4+100));
    fcc = FCMP(f2, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v1 = LD32(s4); goto L_089E18F4; }
    goto L_089E18D4;
L_089E18D4:;
    v0 = D_08B2859C - (-31332);
    f0 = BITSF(LD32(v0-31332));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(s4+100, FBITS(f0));
    if (cnd_) { goto L_089E1C5C; }
    goto L_089E18F0;
L_089E18F0:;
    v1 = LD32(s4);
    goto L_089E18F4;
L_089E18F4:;
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(v1-12); goto L_089E1A64; }
    goto L_089E1914;
L_089E1914:;
    a2 = D_08C2C190 - (-15984);
    v0 = a2 - 15984;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    a0 = sp + 0;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089E198C; }
    goto L_089E1940;
L_089E1940:;
    a2 = LD32(a2-15984);
    a3 = a1 + 0;
    goto L_089E1948;
L_089E1948:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089E197C; }
    goto L_089E1960;
L_089E1960:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(sp+8); goto L_089E1990; }
    goto L_089E1970;
L_089E1970:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089E1960; }
    goto L_089E197C;
L_089E197C:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089E1948; }
    goto L_089E198C;
L_089E198C:;
    a0 = LD32(sp+8);
    goto L_089E1990;
L_089E1990:;
    cnd_ = a0 == 0;
    v0 = D_08AEF208 - (-3576);
    if (cnd_) { goto L_089E19D4; }
    goto L_089E1998;
L_089E1998:;
    f20 = BITSF(LD32(v0-3576));
    s0 = LD32(a0);
    goto L_089E19A0;
L_089E19A0:;
    a1 = 1;
    a0 = sp + 0;
    { u64 r_ = func_08ABD538(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E19AC;
L_089E19AC:;
    cnd_ = s0 == 0;
    a0 = LD32(sp+8);
    if (cnd_) { goto L_089E19CC; }
    goto L_089E19B4;
L_089E19B4:;
    f0 = BITSF(LD32(s0+148));
    fcc = FCMP(f0, f20, 2);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s4); goto L_089E1B80; }
    goto L_089E19C8;
L_089E19C8:;
    a0 = LD32(sp+8);
    goto L_089E19CC;
L_089E19CC:;
    cnd_ = a0 != 0;
    if (cnd_) { s0 = LD32(a0); goto L_089E19A0; }
    goto L_089E19D4;
L_089E19D4:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089E1A5C; }
    goto L_089E19E8;
L_089E19E8:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089E1A5C; }
    goto L_089E19F4;
L_089E19F4:;
    v0 = LD32(s1);
    goto L_089E19F8;
L_089E19F8:;
    s5 = s3 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089E1A4C; }
    goto L_089E1A0C;
L_089E1A0C:;
    v0 = LD_U8(s0+8);
    goto L_089E1A10;
L_089E1A10:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089E1B78; }
    goto L_089E1A18;
L_089E1A18:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E1B68; }
    goto L_089E1A20;
L_089E1A20:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089E1A28;
L_089E1A28:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1A34;
L_089E1A34:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089E1A40;
L_089E1A40:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089E1A10; }
    goto L_089E1A48;
L_089E1A48:;
    v1 = LD32(s1+4);
    goto L_089E1A4C;
L_089E1A4C:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E19F8; }
    goto L_089E1A5C;
L_089E1A5C:;
    v1 = LD32(s4);
    v0 = LD32(v1-12);
    goto L_089E1A64;
L_089E1A64:;
    v0 = s4 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { f1 = BITSF(LD32(s4+140)); goto L_089E1A88; }
    goto L_089E1A74;
L_089E1A74:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089E1AD0; }
    goto L_089E1A84;
L_089E1A84:;
    f1 = BITSF(LD32(s4+140));
    goto L_089E1A88;
L_089E1A88:;
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089E1AAC; }
    goto L_089E1A9C;
L_089E1A9C:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    ST32(s4+140, FBITS(f0));
    goto L_089E1AAC;
L_089E1AAC:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089E1AD0:;
    a0 = s4 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1AD8;
L_089E1AD8:;
    cnd_ = v0 == 0;
    if (cnd_) { f1 = BITSF(LD32(s4+140)); goto L_089E1A88; }
    goto L_089E1AE0;
L_089E1AE0:;
    v1 = LD32(s4);
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    a0 = LD32(v0+4);
    { rv_t r_ = func_088BA824(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1AF4;
L_089E1AF4:;
    a0 = s4 + 88;
    v1 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v1-31328));
    f5 = BITSF(LD32(a0+8));
    f4 = BITSF(LD32(a0+4));
    f3 = BITSF(LD32(s4+88));
    a1 = LD32(s4);
    f5 = f5 * f0;
    f3 = f3 * f0;
    f4 = f4 * f0;
    f2 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    v1 = LD32(a1-12);
    f2 = f2 + f5;
    f0 = f0 + f3;
    f1 = f1 + f4;
    v1 = s4 + v1;
    a0 = LD32(v1+4);
    a1 = sp + 16;
    ST32(sp+16, FBITS(f0));
    ST32(sp+20, FBITS(f1));
    ST32(sp+24, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    { rv_t r_ = func_088BAAA4(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1B60;
L_089E1B60:;
    f1 = BITSF(LD32(s4+140));
    goto L_089E1A88;
L_089E1B68:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089E1A28;
L_089E1B78:;
    s0 = LD32(s0+4);
    goto L_089E1A40;
L_089E1B80:;
    ST32(sp+16, 0);
    a0 = LD32(v0-12);
    ST32(sp+20, 0);
    a0 = s4 + a0;
    ST32(sp+24, 0);
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1BA4;
L_089E1BA4:;
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
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1BD8;
L_089E1BD8:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 - f0;
    f2 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    f2 = f2 - f3;
    f0 = f0 - f4;
    v0 = FBITS(f1);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f0);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    ST32(sp+16, FBITS(f1));
    a0 = s0 + 0;
    ST32(sp+20, FBITS(f2));
    ST32(sp+24, FBITS(f0));
    {float s0=v[0];float d0=sqrtf(s0);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f2 = BITSF(LD32(s0+148));
    f1 = BITSF(v0);
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { a0 = LD32(sp+8); goto L_089E19CC; }
    goto L_089E1C4C;
L_089E1C4C:;
    a1 = LD32(s4+12);
    func_08A02228(a0, a1);
    goto L_089E1C54;
L_089E1C54:;
    a0 = LD32(sp+8);
    goto L_089E19CC;
L_089E1C5C:;
    v0 = LD32(s4);
    a0 = LD32(v0-16);
    a0 = s4 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1C6C;
L_089E1C6C:;
    v1 = LD32(s4);
    goto L_089E18F4;
}

/* 089E1C74 */
rv_t func_089E1C74(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E1C74:;
    sp = sp - 64;
    s2 = a1 + 0;
    v1 = LD_U16(a1+16);
    v0 = (s32)v1 < 80;
    cnd_ = v0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089E1DB4; }
    goto L_089E1C9C;
L_089E1C9C:;
    v0 = (s32)v1 < 78;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+176); goto L_089E1D68; }
    goto L_089E1CA8;
L_089E1CA8:;
    v0 = (s32)v1 < 61;
    cnd_ = v0 == 0;
    v0 = 62;
    if (cnd_) { goto L_089E1D88; }
    goto L_089E1CB4;
L_089E1CB4:;
    v0 = (s32)v1 < 57;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+176); goto L_089E1D68; }
    goto L_089E1CC0;
L_089E1CC0:;
    v0 = 27;
    cnd_ = v1 == v0;
    v0 = 28;
    if (cnd_) { goto L_089E1D38; }
    goto L_089E1CCC;
L_089E1CCC:;
    cnd_ = v1 == v0;
    a1 = 8;
    if (cnd_) { goto L_089E1D00; }
    goto L_089E1CD4;
L_089E1CD4:;
    a0 = s1 + 0;
    goto L_089E1CD8;
L_089E1CD8:;
    a1 = s2 + 0;
    { rv_t r_ = func_08A067A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1CE0;
L_089E1CE0:;
    a0 = v0 + 0;
    goto L_089E1CE4;
L_089E1CE4:;
    v0 = a0 + 0;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089E1D00:;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 42;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1D10;
L_089E1D10:;
    s0 = v0 + 0;
    v0 = LD32(v0+24);
    a1 = s0 + 0;
    ST8(v0+4, 0);
    goto L_089E1D20;
L_089E1D20:;
    a0 = LD32(s1+176);
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1D28;
L_089E1D28:;
    a0 = s0 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1D30;
L_089E1D30:;
    a0 = s1 + 0;
    goto L_089E1CD8;
L_089E1D38:;
    a1 = 8;
    a2 = 0 + 0;
    a3 = 0 + 0;
    a0 = 42;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E1D4C;
L_089E1D4C:;
    v1 = LD32(v0+24);
    s0 = v0 + 0;
    a1 = v0 + 0;
    v0 = 1;
    ST8(v1+4, v0);
    goto L_089E1D20;
L_089E1D64:;
    a0 = LD32(s1+176);
    goto L_089E1D68;
L_089E1D68:;
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E1D78; }
    goto L_089E1D70;
L_089E1D70:;
    a0 = 1;
    goto L_089E1CE4;
L_089E1D78:;
    a1 = s2 + 0;
    { rv_t r_ = func_08922AA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1D80;
L_089E1D80:;
    a0 = 1;
    goto L_089E1CE4;
L_089E1D88:;
    cnd_ = v1 == v0;
    v0 = (s32)v1 < 62;
    if (cnd_) { goto L_089E1D64; }
    goto L_089E1D90;
L_089E1D90:;
    cnd_ = v0 != 0;
    a0 = 1;
    if (cnd_) { goto L_089E1CE4; }
    goto L_089E1D98;
L_089E1D98:;
    v0 = 64;
    cnd_ = v1 == v0;
    v0 = 76;
    if (cnd_) { goto L_089E1D64; }
    goto L_089E1DA4;
L_089E1DA4:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089E1CD8; }
    goto L_089E1DAC;
L_089E1DAC:;
    a0 = LD32(s1+176);
    goto L_089E1D68;
L_089E1DB4:;
    v0 = 0x8034;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089E1D64; }
    goto L_089E1DC0;
L_089E1DC0:;
    cnd_ = v0 != 0;
    v0 = 0x8076;
    if (cnd_) { goto L_089E1F3C; }
    goto L_089E1DC8;
L_089E1DC8:;
    v0 = 0x8025;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089E1E18; }
    goto L_089E1DD4;
L_089E1DD4:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x8032; goto L_089E1DE4; }
    goto L_089E1DDC;
L_089E1DDC:;
    v0 = 81;
    goto L_089E1DA4;
L_089E1DE4:;
    v0 = (s32)v1 < (s32)v0;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_089E1CD8; }
    goto L_089E1DF0;
L_089E1DF0:;
    v0 = LD32(a0);
    a3 = 1;
    a0 = a1 + 0;
    v1 = LD32(v0-16);
    a1 = 2;
    v1 = s1 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_088AC9B0(a0, a1, a2, a3, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1E10;
L_089E1E10:;
    a0 = 1;
    goto L_089E1CE4;
L_089E1E18:;
    a1 = LD32(a0);
    v0 = LD32(a1-12);
    v0 = a0 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(s2+24); goto L_089E1E4C; }
    goto L_089E1E30;
L_089E1E30:;
    v1 = LD32(v0);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { s0 = LD32(s2+24); goto L_089E1E4C; }
    goto L_089E1E40;
L_089E1E40:;
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a1+88); goto L_089E1F2C; }
    goto L_089E1E48;
L_089E1E48:;
    s0 = LD32(s2+24);
    goto L_089E1E4C;
L_089E1E4C:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = 1; goto L_089E1CE4; }
    goto L_089E1E54;
L_089E1E54:;
    v1 = LD32(s1);
    a0 = s1 + 0;
    a1 = sp + 0;
    v0 = LD32(v1+36);
    {v[112]=BITSF(LD32(s0+(0)));}
    {v[113]=BITSF(LD32(s0+(4)));}
    {v[114]=BITSF(LD32(s0+(8)));}
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
    t_ = v0;
    {ST32(sp+(32),FBITS(v[106]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1EF8;
L_089E1EF8:;
    v1 = LD32(s1);
    a1 = s0 + 24;
    v0 = LD32(v1+32);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1F0C;
L_089E1F0C:;
    v1 = LD32(s1);
    a1 = s0 + 12;
    a0 = s1 + 0;
    v0 = LD32(v1+128);
    goto L_089E1F1C;
L_089E1F1C:;
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1F24;
L_089E1F24:;
    a0 = 1;
    goto L_089E1CE4;
L_089E1F2C:;
    t_ = v0;
    a1 = 3;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E1F34;
L_089E1F34:;
    s0 = LD32(s2+24);
    goto L_089E1E4C;
L_089E1F3C:;
    cnd_ = v1 == v0;
    v0 = (s32)v0 < (s32)v1;
    if (cnd_) { goto L_089E1D64; }
    goto L_089E1F44;
L_089E1F44:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x807d; goto L_089E1F54; }
    goto L_089E1F4C;
L_089E1F4C:;
    v0 = 0x806e;
    goto L_089E1DA4;
L_089E1F54:;
    cnd_ = v1 == v0;
    v0 = 0x807e;
    if (cnd_) { goto L_089E1F7C; }
    goto L_089E1F5C;
L_089E1F5C:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089E1CD8; }
    goto L_089E1F64;
L_089E1F64:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { a0 = 1; goto L_089E1CE4; }
    goto L_089E1F70;
L_089E1F70:;
    v1 = LD32(a0);
    v0 = LD32(v1+216);
    goto L_089E1F1C;
L_089E1F7C:;
    f1 = BITSF(LD32(a1+8));
    f0 = BITSF(LD32(a0+152));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a0 = 1;
    if (cnd_) { goto L_089E1CE4; }
    goto L_089E1F94;
L_089E1F94:;
    a0 = LD32(a1+24);
    cnd_ = a0 == 0;
    if (cnd_) { ST32(s1+152, FBITS(f1)); goto L_089E1D70; }
    goto L_089E1FA0;
L_089E1FA0:;
    v0 = LD32(a0);
    v1 = LD32(s1+172);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s1+172, v1);
    f0 = BITSF(LD32(a0+4));
    ST32(s1+124, FBITS(f0));
    v0 = LD32(a0);
    v0 = v0 ^ 0x2;
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 4)) | ((v0 & 0x1) << 4);
    ST32(s1+172, v1);
    f1 = BITSF(LD32(a1+8));
    ST32(s1+152, FBITS(f1));
    goto L_089E1D70;
}

/* 089E1FDC */
rv_t func_089E1FDC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E1FDC:;
    sp = sp - 64;
    a3 = a1 + 0;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E2008; }
    goto L_089E1FFC;
L_089E1FFC:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(a3); goto L_089E202C; }
    goto L_089E2008;
L_089E2008:;
    v1 = LD32(a3);
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a3); goto L_089E202C; }
    goto L_089E2018;
L_089E2018:;
    goto L_089E201C;
L_089E201C:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089E202C:;
    t0 = LD32(a3+28);
    t1 = LD32(a3+4);
    v1 = LD32(a3+8);
    a0 = LD32(a3+12);
    a1 = LD32(a3+16);
    a2 = LD32(a3+20);
    a3 = LD32(a3+24);
    t2 = D_08C2B3A4 - (-19548);
    ST32(sp, v0);
    v0 = 999;
    t3 = t2 - 19548;
    ST32(sp+8, v1);
    ST32(sp+12, a0);
    ST32(sp+16, a1);
    ST32(sp+20, a2);
    ST32(sp+24, a3);
    ST32(sp+28, t0);
    cnd_ = t1 == v0;
    ST32(sp+4, t1);
    if (cnd_) { goto L_089E20E8; }
    goto L_089E2078;
L_089E2078:;
    v0 = LD32(t3+4);
    v1 = LD32(t2-19548);
    v0 = v0 - 1;
    v0 = t1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E20C8; }
    goto L_089E209C;
L_089E209C:;
    a0 = LD32(a1);
    goto L_089E20A0;
L_089E20A0:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == t1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089E21EC; }
    goto L_089E20B8;
L_089E20B8:;
    a1 = LD32(a1+4);
    goto L_089E20BC;
L_089E20BC:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089E20A0; }
    goto L_089E20C4;
L_089E20C4:;
    v1 = 0 + 0;
    goto L_089E20C8;
L_089E20C8:;
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089E20E8; }
    goto L_089E20D0;
L_089E20D0:;
    v0 = LD_U8(v1+194);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089E20E8; }
    goto L_089E20DC;
L_089E20DC:;
    v0 = LD_U8(v1+195);
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+128)); goto L_089E2190; }
    goto L_089E20E8;
L_089E20E8:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E20F0;
L_089E20F0:;
    cnd_ = v0 == 0;
    v0 = LD32(s0);
    if (cnd_) { goto L_089E212C; }
    goto L_089E20F8;
L_089E20F8:;
    a0 = s0 + 0;
    v1 = LD32(v0+200);
    t_ = v1;
    a1 = sp + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2108;
L_089E2108:;
    { u64 r_ = func_089E47D0(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2110;
L_089E2110:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089E212C; }
    goto L_089E2118;
L_089E2118:;
    v0 = LD32(sp+28);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E201C; }
    goto L_089E2128;
L_089E2128:;
    v0 = LD32(s0);
    goto L_089E212C;
L_089E212C:;
    a0 = s0 + 0;
    a1 = sp + 0;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f20 = BITSF(LD32(v1+40));
    { rv_t r_ = func_08A069F8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2144;
L_089E2144:;
    v0 = LD_U8(s0+120);
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E217C; }
    goto L_089E2150;
L_089E2150:;
    v0 = LD32(s0);
    goto L_089E2154;
L_089E2154:;
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    f0 = BITSF(LD32(v1+40));
    fcc = FCMP(f20, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089E201C; }
    goto L_089E2170;
L_089E2170:;
    v0 = 1;
    ST8(s0+120, v0);
    goto L_089E201C;
L_089E217C:;
    a1 = sp + 0;
    f12 = f20;
    func_089E22BC(a0, a1);
    goto L_089E2188;
L_089E2188:;
    v0 = LD32(s0);
    goto L_089E2154;
L_089E2190:;
    f1 = BITSF(LD32(sp+12));
    a0 = s0 + 0;
    f1 = f1 * f0;
    ST32(sp+12, FBITS(f1));
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E21A4;
L_089E21A4:;
    cnd_ = v0 == 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_089E20E8; }
    goto L_089E21AC;
L_089E21AC:;
    cnd_ = a0 == 0;
    if (cnd_) { goto L_089E20E8; }
    goto L_089E21B4;
L_089E21B4:;
    f0 = func_08A24E1C(a0);
    goto L_089E21BC;
L_089E21BC:;
    f1 = BITSF(LD32(sp+12));
    f1 = f1 * f0;
    ST32(sp+12, FBITS(f1));
    v0 = func_08979DF4();
    goto L_089E21CC;
L_089E21CC:;
    v1 = 2;
    cnd_ = v0 != v1;
    v0 = D_08B1BDE8 - (-16920);
    if (cnd_) { goto L_089E20E8; }
    goto L_089E21D8;
L_089E21D8:;
    f0 = BITSF(LD32(sp+12));
    f1 = BITSF(LD32(v0-16920));
    f0 = f0 * f1;
    ST32(sp+12, FBITS(f0));
    goto L_089E20E8;
L_089E21EC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089E20B8; }
    goto L_089E21F8;
L_089E21F8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E20BC; }
    goto L_089E2204;
L_089E2204:;
    goto L_089E20C8;
}

/* 089E220C */
rv_t func_089E220C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E220C:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08865344(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2230;
L_089E2230:;
    v1 = LD32(s0);
    s1 = v0 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    v0 = s1 + 0;
    if (cnd_) { goto L_089E2260; }
    goto L_089E224C;
L_089E224C:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E2274; }
    goto L_089E225C;
L_089E225C:;
    v0 = s1 + 0;
    goto L_089E2260;
L_089E2260:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E2274:;
    { u64 r_ = func_089E3B90(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E227C;
L_089E227C:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E225C; }
    goto L_089E2284;
L_089E2284:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2294;
L_089E2294:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = s1 + 0; goto L_089E2260; }
    goto L_089E229C;
L_089E229C:;
    v1 = LD32(s0);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E22B4;
L_089E22B4:;
    v0 = s1 + 0;
    goto L_089E2260;
}

/* 089E22BC */
void func_089E22BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E22BC:;
    sp = sp - 64;
    f0 = BITSF(0);
    s2 = a1 + 0;
    f1 = BITSF(LD32(a0+140));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    s1 = a0 + 0;
    if (cnd_) { goto L_089E231C; }
    goto L_089E22F8;
L_089E22F8:;
    goto L_089E22FC;
L_089E22FC:;
    goto L_089E2300;
L_089E2300:;
    sp = sp + 64;
    return;
L_089E231C:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2324;
L_089E2324:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089E22FC; }
    goto L_089E232C;
L_089E232C:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089E2334;
L_089E2334:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E22FC; }
    goto L_089E233C;
L_089E233C:;
    a2 = LD32(s2+4);
    a0 = D_08C2B4CC - (-19252);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19252;
    if (cnd_) { goto L_089E22FC; }
    goto L_089E2350;
L_089E2350:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19252);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a3 = 0 + 0;
    if (cnd_) { goto L_089E23A0; }
    goto L_089E2374;
L_089E2374:;
    a0 = LD32(a1);
    goto L_089E2378;
L_089E2378:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089E27CC; }
    goto L_089E2390;
L_089E2390:;
    a1 = LD32(a1+4);
    goto L_089E2394;
L_089E2394:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089E2378; }
    goto L_089E239C;
L_089E239C:;
    a3 = 0 + 0;
    goto L_089E23A0;
L_089E23A0:;
    cnd_ = a3 == 0;
    v0 = 0x4b530000u;
    if (cnd_) { goto L_089E22F8; }
    goto L_089E23A8;
L_089E23A8:;
    v1 = LD32(s2+24);
    v0 = v0 | 0xe4cf;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E23B8;
L_089E23B8:;
    cnd_ = v0 != 0;
    v0 = 0xc8d30000u;
    if (cnd_) { goto L_089E26E4; }
    goto L_089E23C0;
L_089E23C0:;
    v0 = 0x23650000u;
    v0 = v0 | 0x8cc3;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E23D0;
L_089E23D0:;
    cnd_ = v0 != 0;
    v0 = 0x36220000u;
    if (cnd_) { goto L_089E267C; }
    goto L_089E23D8;
L_089E23D8:;
    v0 = 0x8060000u;
    v0 = v0 | 0xf719;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E23E8;
L_089E23E8:;
    cnd_ = v0 != 0;
    v0 = 0x10ed0000u;
    if (cnd_) { goto L_089E2654; }
    goto L_089E23F0;
L_089E23F0:;
    v0 = 0x350000u;
    v0 = v0 | 0x4b4d;
    cnd_ = v1 == v0;
    v0 = 0x6740000u;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2400;
L_089E2400:;
    v0 = v0 | 0x326a;
    goto L_089E2404;
L_089E2404:;
    cnd_ = v1 == v0;
    s5 = 1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E240C;
L_089E240C:;
    a1 = LD32(s1);
    v1 = LD32(s1+12);
    a0 = LD32(a3+12);
    v0 = LD32(a1-16);
    a0 = a0 ^ v1;
    v0 = s1 + v0;
    v1 = LD_U16(v0+8);
    v1 = v1 ^ 0x8005;
    s3 = v1 < 0x1u;
    cnd_ = s3 == 0;
    s4 = a0 < 0x1u;
    if (cnd_) { goto L_089E2494; }
    goto L_089E2438;
L_089E2438:;
    v0 = LD32(a1-12);
    f0 = BITSF(0);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { v0 = LD32(a3); goto L_089E2588; }
    goto L_089E2458;
L_089E2458:;
    cnd_ = s3 == 0;
    if (cnd_) { f2 = BITSF(LD32(s1+8)); goto L_089E2498; }
    goto L_089E2460;
L_089E2460:;
    cnd_ = s4 == 0;
    if (cnd_) { f2 = BITSF(LD32(s1+8)); goto L_089E2498; }
    goto L_089E2468;
L_089E2468:;
    cnd_ = s5 == 0;
    if (cnd_) { f2 = BITSF(LD32(s1+8)); goto L_089E2498; }
    goto L_089E2470;
L_089E2470:;
    a1 = LD32(s1);
    f0 = BITSF(0);
    v0 = LD32(a1-12);
    v0 = s1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { a2 = LD32(s2+4); goto L_089E2578; }
    goto L_089E2494;
L_089E2494:;
    f2 = BITSF(LD32(s1+8));
    goto L_089E2498;
L_089E2498:;
    f0 = BITSF(0);
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089E22FC; }
    goto L_089E24AC;
L_089E24AC:;
    v0 = D_08AEF214 - (-3564);
    f0 = BITSF(LD32(v0-3564));
    f1 = BITSF(LD32(s2+12));
    v0 = D_08AEF218 - (-3560);
    f2 = f0 / f2;
    f0 = BITSF(LD32(v0-3560));
    f1 = f1 * f2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    a1 = LD32(s1);
    if (cnd_) { goto L_089E2548; }
    goto L_089E24D8;
L_089E24D8:;
    v0 = LD32(a1-12);
    v0 = s1 + v0;
    f0 = BITSF(LD32(v0+40));
    v0 = D_08AEF21C - (-3556);
    f1 = BITSF(LD32(v0-3556));
    f0 = f0 * f2;
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089E2300; }
    goto L_089E2500;
L_089E2500:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a1-16); goto L_089E254C; }
    goto L_089E2510;
L_089E2510:;
    a1 = D_08B25AC8 - (23240);
    v0 = LD32(a1+23240);
    a2 = a1 + 23240;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    a0 = (v0 >> 1) & 0x1;
    ST32(a2+4, v1);
    cnd_ = a0 == 0;
    ST32(a1+23240, v0);
    if (cnd_) { goto L_089E2300; }
    goto L_089E2544;
L_089E2544:;
    a1 = LD32(s1);
    goto L_089E2548;
L_089E2548:;
    v0 = LD32(a1-16);
    goto L_089E254C;
L_089E254C:;
    a1 = 0x7a040000u;
    a0 = s1 + 0;
    v0 = s1 + v0;
    a2 = LD32(v0+4);
    a1 = a1 | 0x5892;
    goto L_089E2560;
L_089E2560:;
    a3 = 1;
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2568;
L_089E2568:;
    v0 = D_08AEF210 - (-3568);
    f0 = BITSF(LD32(v0-3568));
    ST32(s1+140, FBITS(f0));
    goto L_089E22F8;
L_089E2578:;
    a1 = 0x4b690000u;
    a0 = s1 + 0;
    a1 = a1 | 0x6b0c;
    goto L_089E2560;
L_089E2588:;
    a0 = LD32(v0-12);
    a0 = a3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E25A0;
L_089E25A0:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E25C0;
L_089E25C0:;
    f3 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f1 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f3;
    f1 = f1 - f0;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+8, FBITS(f4));
    v0 = FBITS(f2);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f1);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f3 = BITSF(v0);
    v0 = D_08AEF20C - (-3572);
    f0 = BITSF(LD32(v0-3572));
    ST32(sp, FBITS(f2));
    fcc = FCMP(f0, f3, 12);
    cnd_ = !fcc;
    ST32(sp+4, FBITS(f1));
    if (cnd_) { goto L_089E2458; }
    goto L_089E262C;
L_089E262C:;
    cnd_ = s5 == 0;
    if (cnd_) { goto L_089E2458; }
    goto L_089E2634;
L_089E2634:;
    cnd_ = s4 != 0;
    a1 = 0x52c70000u;
    if (cnd_) { goto L_089E2458; }
    goto L_089E263C;
L_089E263C:;
    a2 = LD32(s2+4);
    a0 = s1 + 0;
    a1 = a1 | 0x7b90;
    goto L_089E2560;
L_089E264C:;
    s5 = 0 + 0;
    goto L_089E240C;
L_089E2654:;
    v0 = v0 | 0xd4e;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2660;
L_089E2660:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x1b670000u; goto L_089E2674; }
    goto L_089E2668;
L_089E2668:;
    v0 = 0x8060000u;
    v0 = v0 | 0xf7ee;
    goto L_089E2404;
L_089E2674:;
    v0 = v0 | 0x90dc;
    goto L_089E2404;
L_089E267C:;
    v0 = v0 | 0x332a;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2688;
L_089E2688:;
    cnd_ = v0 != 0;
    v0 = 0x46650000u;
    if (cnd_) { goto L_089E26BC; }
    goto L_089E2690;
L_089E2690:;
    v0 = 0x2ea50000u;
    v0 = v0 | 0xd87d;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E26A0;
L_089E26A0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x31120000u; goto L_089E26B4; }
    goto L_089E26A8;
L_089E26A8:;
    v0 = 0x25c30000u;
    v0 = v0 | 0x90ed;
    goto L_089E2404;
L_089E26B4:;
    v0 = v0 | 0x5d8a;
    goto L_089E2404;
L_089E26BC:;
    v0 = v0 | 0x7316;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E26C8;
L_089E26C8:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x4b0a0000u; goto L_089E26DC; }
    goto L_089E26D0;
L_089E26D0:;
    v0 = 0x3e2c0000u;
    v0 = v0 | 0x2ac5;
    goto L_089E2404;
L_089E26DC:;
    v0 = v0 | 0x5cc9;
    goto L_089E2404;
L_089E26E4:;
    v0 = v0 | 0x46d4;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E26F0;
L_089E26F0:;
    cnd_ = v0 != 0;
    v0 = 0xf81a0000u;
    if (cnd_) { goto L_089E2764; }
    goto L_089E26F8;
L_089E26F8:;
    v0 = 0x8af70000u;
    v0 = v0 | 0x5923;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2708;
L_089E2708:;
    cnd_ = v0 != 0;
    v0 = 0xb07b0000u;
    if (cnd_) { goto L_089E273C; }
    goto L_089E2710;
L_089E2710:;
    v0 = 0x769b0000u;
    v0 = v0 | 0xead1;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2720;
L_089E2720:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0x7b080000u; goto L_089E2734; }
    goto L_089E2728;
L_089E2728:;
    v0 = 0x536c0000u;
    v0 = v0 | 0x95a9;
    goto L_089E2404;
L_089E2734:;
    v0 = v0 | 0x6e76;
    goto L_089E2404;
L_089E273C:;
    v0 = v0 | 0x16df;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2748;
L_089E2748:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xb39c0000u; goto L_089E275C; }
    goto L_089E2750;
L_089E2750:;
    v0 = 0x8ee80000u;
    v0 = v0 | 0xd26f;
    goto L_089E2404;
L_089E275C:;
    v0 = v0 | 0x40a8;
    goto L_089E2404;
L_089E2764:;
    v0 = v0 | 0xdd30;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2770;
L_089E2770:;
    cnd_ = v0 != 0;
    v0 = 0xfcab0000u;
    if (cnd_) { goto L_089E27A4; }
    goto L_089E2778;
L_089E2778:;
    v0 = 0xe3740000u;
    v0 = v0 | 0xc413;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E2788;
L_089E2788:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xf4a20000u; goto L_089E279C; }
    goto L_089E2790;
L_089E2790:;
    v0 = 0xda0c0000u;
    v0 = v0 | 0xae3b;
    goto L_089E2404;
L_089E279C:;
    v0 = v0 | 0xac2b;
    goto L_089E2404;
L_089E27A4:;
    v0 = v0 | 0x2c09;
    cnd_ = v1 == v0;
    v0 = v0 < v1;
    if (cnd_) { goto L_089E264C; }
    goto L_089E27B0;
L_089E27B0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = 0xfd900000u; goto L_089E27C4; }
    goto L_089E27B8;
L_089E27B8:;
    v0 = 0xf9680000u;
    v0 = v0 | 0xc3bb;
    goto L_089E2404;
L_089E27C4:;
    v0 = v0 | 0x85c9;
    goto L_089E2404;
L_089E27CC:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a3 = a0 + 0;
    if (cnd_) { goto L_089E2390; }
    goto L_089E27D8;
L_089E27D8:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E2394; }
    goto L_089E27E4;
L_089E27E4:;
    goto L_089E23A0;
}

/* 089E27EC */
rv_t func_089E27EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E27EC:;
    sp = sp - 16;
    a2 = LD32(a0);
    v0 = LD32(a2-12);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(a2-12); goto L_089E2820; }
    goto L_089E280C;
L_089E280C:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    a3 = a0 + 88;
    if (cnd_) { goto L_089E284C; }
    goto L_089E281C;
L_089E281C:;
    v0 = LD32(a2-12);
    goto L_089E2820;
L_089E2820:;
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089E283C; }
    goto L_089E2830;
L_089E2830:;
    goto L_089E2834;
L_089E2834:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E283C:;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2844;
L_089E2844:;
    goto L_089E2834;
L_089E284C:;
    f0 = BITSF(LD32(a1+8));
    f1 = BITSF(LD32(a1));
    f2 = BITSF(LD32(a1+4));
    ST32(a3+8, FBITS(f0));
    ST32(a0+88, FBITS(f1));
    ST32(a3+4, FBITS(f2));
    goto L_089E2830;
}

/* 089E2868 */
rv_t func_089E2868(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E2868:;
    sp = sp - 16;
    v1 = LD32(a0);
    a1 = LD32(v1-12);
    v0 = a0 + a1;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    a2 = a0 + 88;
    if (cnd_) { goto L_089E2898; }
    goto L_089E2888;
L_089E2888:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089E28A8; }
    goto L_089E2898;
L_089E2898:;
    { rv_t r_ = func_08A07134(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E28A0;
L_089E28A0:;
    a2 = v0 + 0;
    goto L_089E28A8;
L_089E28A8:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E28B4 */
rv_t func_089E28B4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_089E28B4:;
    sp = sp - 80;
    v0 = D_08AEF220 - (-3552);
    s1 = a0 + 0;
    t3 = 999;
    f0 = BITSF(LD32(v0-3552));
    ST32(a0+100, FBITS(f0));
    t0 = LD32(a1+28);
    a3 = LD32(a1);
    t2 = LD32(a1+4);
    t1 = LD32(a1+8);
    v0 = LD32(a1+12);
    v1 = LD32(a1+16);
    a0 = LD32(a1+20);
    a2 = LD32(a1+24);
    ST32(sp, a3);
    ST32(sp+12, v0);
    ST32(sp+16, v1);
    ST32(sp+20, a0);
    ST32(sp+24, a2);
    ST32(sp+28, t0);
    ST32(sp+4, t2);
    cnd_ = t2 == t3;
    ST32(sp+8, t1);
    if (cnd_) { goto L_089E2934; }
    goto L_089E292C;
L_089E292C:;
    cnd_ = t1 == t3;
    v1 = D_08C2ADE8 - (-21016);
    if (cnd_) { goto L_089E2DDC; }
    goto L_089E2934;
L_089E2934:;
    v1 = LD32(s1);
    goto L_089E2938;
L_089E2938:;
    v0 = LD32(v1+204);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2944;
L_089E2944:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E2964; }
    goto L_089E294C;
L_089E294C:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    cnd_ = a0 != 0;
    a1 = D_08B45A9C - (23196);
    if (cnd_) { goto L_089E2DB4; }
    goto L_089E2964;
L_089E2964:;
    a0 = s1 + 0;
    v0 = func_089E3BC4(a0);
    goto L_089E296C;
L_089E296C:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E29A0; }
    goto L_089E2974;
L_089E2974:;
    a1 = sp + 0;
    { rv_t r_ = func_08A06CF0(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E297C;
L_089E297C:;
    sp = sp + 80;
    return (rv_t){ v0, v1, f0 };
L_089E29A0:;
    a0 = s1 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E29A8;
L_089E29A8:;
    a1 = LD32(sp+4);
    s5 = D_08C2B4CC - (-19252);
    a0 = s5 - 19252;
    a2 = 1;
    s3 = v0 + 0;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E29C0;
L_089E29C0:;
    a0 = s1 + 0;
    s0 = v0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E29CC;
L_089E29CC:;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s1); goto L_089E29F0; }
    goto L_089E29D4;
L_089E29D4:;
    cnd_ = s0 == 0;
    if (cnd_) { a1 = LD32(s1); goto L_089E29F0; }
    goto L_089E29DC;
L_089E29DC:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E29E4;
L_089E29E4:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+84); goto L_089E2AA8; }
    goto L_089E29EC;
L_089E29EC:;
    a1 = LD32(s1);
    goto L_089E29F0;
L_089E29F0:;
    v1 = LD32(s1+84);
    v0 = LD32(sp+8);
    ST32(sp+40, 0);
    ST32(sp+32, v0);
    ST32(sp+36, v1);
    v0 = LD32(a1+168);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2A10;
L_089E2A10:;
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089E2A28; }
    goto L_089E2A18;
L_089E2A18:;
    v0 = LD32(sp+40);
    v0 = v0 | 0x1;
    ST32(sp+40, v0);
    v1 = LD32(s1);
    goto L_089E2A28;
L_089E2A28:;
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2A34;
L_089E2A34:;
    cnd_ = v0 != 0;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_089E2DA8; }
    goto L_089E2A3C;
L_089E2A3C:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v1 = 0x8004;
    v0 = s1 + v0;
    a0 = LD_U16(v0+8);
    cnd_ = a0 == v1;
    v0 = LD32(sp+40);
    if (cnd_) { goto L_089E2DA8; }
    goto L_089E2A58;
L_089E2A58:;
    v0 = LD32(s1+12);
    a3 = sp + 32;
    a0 = 0x8054;
    a1 = 16;
    a2 = 0 + 0;
    ST32(sp+44, v0);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2A74;
L_089E2A74:;
    cnd_ = v0 == 0;
    a3 = v0 + 0;
    if (cnd_) { goto L_089E2AA4; }
    goto L_089E2A7C;
L_089E2A7C:;
    v1 = LD32(v0+28);
    v0 = 8;
    ST32(a3, v0);
    v1 = v1 | 0x1;
    a0 = a3 + 0;
    ST32(a3+28, v1);
    a1 = 1;
    a2 = 1;
    ST32(a3+4, 0);
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2AA4;
L_089E2AA4:;
    a1 = LD32(s1+84);
    goto L_089E2AA8;
L_089E2AA8:;
    s0 = D_08C2A08C - (-24436);
    v0 = 999;
    v1 = s0 - 24436;
    cnd_ = a1 == v0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089E2D80; }
    goto L_089E2ABC;
L_089E2ABC:;
    v0 = LD32(v1+4);
    v1 = LD32(s0-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089E2B00; }
    goto L_089E2AE0;
L_089E2AE0:;
    a0 = LD32(v1);
    goto L_089E2AE4;
L_089E2AE4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089E2D88; }
    goto L_089E2AF0;
L_089E2AF0:;
    v1 = LD32(v1+4);
    goto L_089E2AF4;
L_089E2AF4:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089E2AE4; }
    goto L_089E2AFC;
L_089E2AFC:;
    s2 = 0 + 0;
    goto L_089E2B00;
L_089E2B00:;
    cnd_ = s2 == 0;
    if (cnd_) { a0 = LD32(s1); goto L_089E2B44; }
    goto L_089E2B08;
L_089E2B08:;
    a0 = s2 + 0;
    a1 = 1;
    func_08982F34(a0, a1);
    goto L_089E2B14;
L_089E2B14:;
    v1 = LD32(s2);
    v0 = LD32(v1+72);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2B24;
L_089E2B24:;
    a0 = LD32(s1);
    v1 = 999;
    ST32(s1+84, v1);
    v0 = LD32(a0-12);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    if (cnd_) { v0 = LD32(a0+88); goto L_089E2D74; }
    goto L_089E2B44;
L_089E2B44:;
    v0 = LD32(a0+208);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2B50;
L_089E2B50:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_089E2B7C; }
    goto L_089E2B58;
L_089E2B58:;
    cnd_ = s3 != 0;
    v0 = D_08C29328 - (-27864);
    if (cnd_) { goto L_089E2B70; }
    goto L_089E2B60;
L_089E2B60:;
    a0 = LD32(v0-27864);
    v1 = 5;
    cnd_ = a0 == v1;
    a0 = s0 - 24436;
    if (cnd_) { goto L_089E2B80; }
    goto L_089E2B70;
L_089E2B70:;
    a0 = LD32(s1+12);
    func_089738B8(a0, 0, 0, 0);
    goto L_089E2B78;
L_089E2B78:;
    a1 = LD32(sp+8);
    goto L_089E2B7C;
L_089E2B7C:;
    a0 = s0 - 24436;
    goto L_089E2B80;
L_089E2B80:;
    a2 = 1;
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2B88;
L_089E2B88:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089E2BC8; }
    goto L_089E2B90;
L_089E2B90:;
    a0 = LD32(s1);
    v1 = LD32(v0+88);
    a1 = LD32(s1+12);
    v0 = LD32(a0+212);
    a0 = s1 + 0;
    v1 = v1 ^ a1;
    t_ = v0;
    s3 = v1 < 0x1u;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2BB0;
L_089E2BB0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089E2C88; }
    goto L_089E2BB8;
L_089E2BB8:;
    cnd_ = s2 == 0;
    v0 = 0 < s2;
    if (cnd_) { goto L_089E2BCC; }
    goto L_089E2BC0;
L_089E2BC0:;
    cnd_ = s3 == 0;
    if (cnd_) { a1 = LD32(s2+28); goto L_089E2C48; }
    goto L_089E2BC8;
L_089E2BC8:;
    v0 = 0 < s2;
    goto L_089E2BCC;
L_089E2BCC:;
    v1 = 0 < s0;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E2974; }
    goto L_089E2BDC;
L_089E2BDC:;
    cnd_ = s0 == s2;
    if (cnd_) { v1 = LD32(s2); goto L_089E2C24; }
    goto L_089E2BE4;
L_089E2BE4:;
    v1 = LD32(s0);
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2BF4;
L_089E2BF4:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2C08;
L_089E2C08:;
    a0 = D_08ADE988 - (-5752);
    a0 = a0 - 5752;
    a1 = s0 + 0;
    a2 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, a2, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2C1C;
L_089E2C1C:;
    a0 = s1 + 0;
    goto L_089E2974;
L_089E2C24:;
    v0 = LD32(v1+92);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2C30;
L_089E2C30:;
    a0 = D_08ADE9A4 - (-5724);
    a0 = a0 - 5724;
    a1 = v0 + 0;
    { rv_t r_ = func_08898048(a0, a1, 0, 0, 0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2C40;
L_089E2C40:;
    a0 = s1 + 0;
    goto L_089E2974;
L_089E2C48:;
    a0 = s5 - 19252;
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2C54;
L_089E2C54:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 < s2; goto L_089E2BCC; }
    goto L_089E2C5C;
L_089E2C5C:;
    a0 = v0 + 0;
    v0 = func_089E2FA4(a0);
    goto L_089E2C64;
L_089E2C64:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = 0 < s2; goto L_089E2BCC; }
    goto L_089E2C6C;
L_089E2C6C:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = 1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2C80;
L_089E2C80:;
    v0 = 0 < s2;
    goto L_089E2BCC;
L_089E2C88:;
    a0 = s0 + 0;
    v0 = LD32(v1+76);
    t_ = v0;
    a1 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2C98;
L_089E2C98:;
    cnd_ = s3 != 0;
    a0 = s5 - 19252;
    if (cnd_) { goto L_089E2BB8; }
    goto L_089E2CA0;
L_089E2CA0:;
    a1 = LD32(s0+28);
    a2 = 1;
    { u64 r_ = func_08ABD444(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2CAC;
L_089E2CAC:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_089E2BB8; }
    goto L_089E2CB4;
L_089E2CB4:;
    a0 = v0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2CBC;
L_089E2CBC:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089E2BB8; }
    goto L_089E2CC4;
L_089E2CC4:;
    v1 = LD32(s4);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = s4 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    if (cnd_) { goto L_089E2BB8; }
    goto L_089E2CE8;
L_089E2CE8:;
    v0 = LD_U8(s4+5);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E2BB8; }
    goto L_089E2CF4;
L_089E2CF4:;
    v0 = LD_U8(s4+64);
    cnd_ = v0 == 0;
    v0 = 0x30000u;
    if (cnd_) { goto L_089E2BB8; }
    goto L_089E2D00;
L_089E2D00:;
    v1 = LD32(s1+84);
    v0 = v0 | 0xd3f;
    v0 = v0 < v1;
    cnd_ = v0 == 0;
    a1 = D_08B25AC8 - (23240);
    if (cnd_) { goto L_089E2D54; }
    goto L_089E2D14;
L_089E2D14:;
    v0 = LD32(a1+23240);
    a2 = a1 + 23240;
    v1 = LD32(a2+4);
    a0 = (u32)((s32)v0 >> 16);
    v0 = v0 << 16;
    v0 = v0 + a0;
    v0 = v0 + v1;
    v1 = v1 + v0;
    a0 = (v0 >> 1) & 0x1;
    ST32(a2+4, v1);
    cnd_ = a0 != 0;
    ST32(a1+23240, v0);
    if (cnd_) { goto L_089E2D54; }
    goto L_089E2D44;
L_089E2D44:;
    v0 = D_08C29324 - (-27868);
    v1 = LD_U8(v0-27868);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089E2BB8; }
    goto L_089E2D54;
L_089E2D54:;
    a2 = LD32(s0+28);
    a1 = 0x44db0000u;
    a0 = s4 + 0;
    a1 = a1 | 0x8f1e;
    a3 = 1;
    { rv_t r_ = func_089E3D2C(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2D6C;
L_089E2D6C:;
    goto L_089E2BB8;
L_089E2D74:;
    a1 = 1;
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2D80;
L_089E2D80:;
    a0 = LD32(s1);
    goto L_089E2B44;
L_089E2D88:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089E2AF0; }
    goto L_089E2D94;
L_089E2D94:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089E2AF4; }
    goto L_089E2DA0;
L_089E2DA0:;
    goto L_089E2B00;
L_089E2DA8:;
    v0 = v0 | 0x2;
    ST32(sp+40, v0);
    goto L_089E2A58;
L_089E2DB4:;
    a1 = a1 + 23196;
    { rv_t r_ = func_088BAD34(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2DBC;
L_089E2DBC:;
    v1 = LD32(s1);
    a1 = 1;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2DD4;
L_089E2DD4:;
    goto L_089E2964;
L_089E2DDC:;
    cnd_ = t2 == t1;
    v0 = v1 - 21016;
    if (cnd_) { goto L_089E2934; }
    goto L_089E2DE4;
L_089E2DE4:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-21016);
    v0 = v0 - 1;
    v0 = t2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E2E34; }
    goto L_089E2E08;
L_089E2E08:;
    a0 = LD32(a1);
    goto L_089E2E0C;
L_089E2E0C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == t2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089E2EF0; }
    goto L_089E2E24;
L_089E2E24:;
    a1 = LD32(a1+4);
    goto L_089E2E28;
L_089E2E28:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089E2E0C; }
    goto L_089E2E30;
L_089E2E30:;
    a0 = 0 + 0;
    goto L_089E2E34;
L_089E2E34:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089E2938; }
    goto L_089E2E3C;
L_089E2E3C:;
    v0 = func_089D194C(a0);
    goto L_089E2E44;
L_089E2E44:;
    a2 = v0 + 0;
    a0 = D_08C2B2A8 - (-19800);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19800;
    if (cnd_) { goto L_089E2934; }
    goto L_089E2E58;
L_089E2E58:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19800);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E2EA8; }
    goto L_089E2E7C;
L_089E2E7C:;
    a0 = LD32(a1);
    goto L_089E2E80;
L_089E2E80:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089E2ED0; }
    goto L_089E2E98;
L_089E2E98:;
    a1 = LD32(a1+4);
    goto L_089E2E9C;
L_089E2E9C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089E2E80; }
    goto L_089E2EA4;
L_089E2EA4:;
    a0 = 0 + 0;
    goto L_089E2EA8;
L_089E2EA8:;
    cnd_ = a0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089E2938; }
    goto L_089E2EB0;
L_089E2EB0:;
    v0 = LD32(a0+84);
    ST32(sp+8, v0);
    v1 = LD32(a0);
    v0 = LD32(v1-16);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    ST32(sp+4, v1);
    goto L_089E2934;
L_089E2ED0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E2E9C; }
    goto L_089E2EDC;
L_089E2EDC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E2E9C; }
    goto L_089E2EE8;
L_089E2EE8:;
    goto L_089E2EA8;
L_089E2EF0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E2E28; }
    goto L_089E2EFC;
L_089E2EFC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E2E28; }
    goto L_089E2F08;
L_089E2F08:;
    goto L_089E2E34;
}

/* 089E2F10 */
rv_t func_089E2F10(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E2F10:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D34(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2F30;
L_089E2F30:;
    v0 = LD32(s0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E2F50; }
    goto L_089E2F40;
L_089E2F40:;
    goto L_089E2F44;
L_089E2F44:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E2F50:;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E2F58;
L_089E2F58:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E2F64;
L_089E2F64:;
    goto L_089E2F44;
}

/* 089E2F6C */
u64 func_089E2F6C(u32 a0)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E2F6C:;
    sp = sp - 16;
    v1 = 0 + 0;
    v0 = LD32(a0+176);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E2F94; }
    goto L_089E2F84;
L_089E2F84:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089E2F94:;
    v0 = func_0895661C(a0);
    goto L_089E2F9C;
L_089E2F9C:;
    v1 = v0 + 0;
    goto L_089E2F84;
}

/* 089E2FA4 */
u32 func_089E2FA4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E2FA4:;
    sp = sp - 48;
    s1 = a0 + 0;
    v0 = func_0897364C();
    goto L_089E2FC8;
L_089E2FC8:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E30E0; }
    goto L_089E2FD0;
L_089E2FD0:;
    a2 = D_08C2BF38 - (-16584);
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
    if (cnd_) { goto L_089E3048; }
    goto L_089E2FFC;
L_089E2FFC:;
    a2 = LD32(a2-16584);
    a3 = a1 + 0;
    goto L_089E3004;
L_089E3004:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089E3038; }
    goto L_089E301C;
L_089E301C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    if (cnd_) { s0 = LD32(sp+8); goto L_089E304C; }
    goto L_089E302C;
L_089E302C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089E301C; }
    goto L_089E3038;
L_089E3038:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089E3004; }
    goto L_089E3048;
L_089E3048:;
    s0 = LD32(sp+8);
    goto L_089E304C;
L_089E304C:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_089E311C; }
    goto L_089E3054;
L_089E3054:;
    s1 = LD32(sp);
    goto L_089E3058;
L_089E3058:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089E30DC; }
    goto L_089E3068;
L_089E3068:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089E30DC; }
    goto L_089E3074;
L_089E3074:;
    v0 = LD32(s1);
    goto L_089E3078;
L_089E3078:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089E30CC; }
    goto L_089E308C;
L_089E308C:;
    v0 = LD_U8(s0+8);
    goto L_089E3090;
L_089E3090:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089E3114; }
    goto L_089E3098;
L_089E3098:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E3104; }
    goto L_089E30A0;
L_089E30A0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089E30A8;
L_089E30A8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E30B4;
L_089E30B4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089E30C0;
L_089E30C0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089E3090; }
    goto L_089E30C8;
L_089E30C8:;
    v1 = LD32(s1+4);
    goto L_089E30CC;
L_089E30CC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E3078; }
    goto L_089E30DC;
L_089E30DC:;
    v1 = 0 + 0;
    goto L_089E30E0;
L_089E30E0:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_089E3104:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089E30A8;
L_089E3114:;
    s0 = LD32(s0+4);
    goto L_089E30C0;
L_089E311C:;
    a1 = 1;
    s0 = LD32(s0);
    func_08ABC8D8(a0, a1);
    goto L_089E3128;
L_089E3128:;
    v1 = LD32(s1);
    a0 = LD32(s0+96);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 == v1;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_089E3154; }
    goto L_089E3144;
L_089E3144:;
    cnd_ = s0 != 0;
    if (cnd_) { a0 = sp + 0; goto L_089E311C; }
    goto L_089E314C;
L_089E314C:;
    s1 = LD32(sp);
    goto L_089E3058;
L_089E3154:;
    s1 = LD32(sp);
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089E31DC; }
    goto L_089E3168;
L_089E3168:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089E31DC; }
    goto L_089E3174;
L_089E3174:;
    v0 = LD32(s1);
    goto L_089E3178;
L_089E3178:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089E31CC; }
    goto L_089E318C;
L_089E318C:;
    v0 = LD_U8(s0+8);
    goto L_089E3190;
L_089E3190:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089E31F4; }
    goto L_089E3198;
L_089E3198:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E31E4; }
    goto L_089E31A0;
L_089E31A0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089E31A8;
L_089E31A8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E31B4;
L_089E31B4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089E31C0;
L_089E31C0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089E3190; }
    goto L_089E31C8;
L_089E31C8:;
    v1 = LD32(s1+4);
    goto L_089E31CC;
L_089E31CC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E3178; }
    goto L_089E31DC;
L_089E31DC:;
    v1 = 1;
    goto L_089E30E0;
L_089E31E4:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089E31A8;
L_089E31F4:;
    s0 = LD32(s0+4);
    goto L_089E31C0;
}

/* 089E31FC */
rv_t func_089E31FC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E31FC:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    a0 = a0 + v0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    s0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3224;
L_089E3224:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E324C */
rv_t func_089E324C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[320] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 320);
L_089E324C:;
    sp = sp - 320;
    s3 = a1 + 0;
    s2 = a0 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089E3288; }
    goto L_089E3278;
L_089E3278:;
    v0 = LD32(a0+172);
    s0 = (v0 >> 5) & 0x1;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = LD32(a1+44); goto L_089E32AC; }
    goto L_089E3288;
L_089E3288:;
    goto L_089E328C;
L_089E328C:;
    sp = sp + 320;
    return (rv_t){ v0, v1, f0 };
L_089E32AC:;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = func_089D6FCC(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E32C0;
L_089E32C0:;
    s4 = v0 + 0;
    {u32 a_=sp+(224);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 == 0;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089E3288; }
    goto L_089E32D8;
L_089E32D8:;
    v0 = LD32(s2+12);
    ST32(s4+12, v0);
    v1 = LD32(s2+84);
    ST32(s4+260, v1);
    a0 = LD32(s2);
    v0 = LD32(a0-16);
    v0 = s2 + v0;
    v1 = LD32(v0+4);
    ST32(s4+264, v1);
    v0 = LD_U8(s3+48);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(s2+84); goto L_089E3670; }
    goto L_089E3308;
L_089E3308:;
    v1 = LD32(s4);
    a0 = s4 + 0;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+112);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3328;
L_089E3328:;
    a0 = s4 + 0;
    a1 = 1;
    { rv_t r_ = func_089E3C58(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3334;
L_089E3334:;
    v0 = LD32(s2);
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    a0 = LD32(v0-12);
    {u32 a_=sp+(240);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    a0 = s2 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    v0 = LD32(v1+20);
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    t_ = v0;
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E336C;
L_089E336C:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    s1 = s3 + 24;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    s5 = sp + 112;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3390;
L_089E3390:;
    {u32 a_=sp+(272);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    a1 = LD32(v0+32);
    {u32 a_=sp+(176);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(208);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    {u32 a_=sp+(160);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    a0 = LD32(v0+8);
    {v[49]=BITSF(v1);}
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v1 = LD32(v0+16);
    {v[50]=BITSF(a0);}
    a0 = LD32(v0+12);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(192);v[48]=BITSF(LD32(a_+0));v[49]=BITSF(LD32(a_+4));v[50]=BITSF(LD32(a_+8));v[51]=BITSF(LD32(a_+12));}
    {v[48]=BITSF(a0);}
    a0 = LD32(v0+20);
    {v[49]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[50]=BITSF(a0);}
    {v[32]=BITSF(v1);}
    a0 = LD32(v0+28);
    v1 = LD32(s1+4);
    v0 = LD32(s3+24);
    {v[33]=BITSF(a0);}
    {v[20]=BITSF(v0);}
    a0 = LD32(s1+8);
    {float s0=v[48];float s1=v[49];float s2=v[50];float s3=v[51];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {v[34]=BITSF(a1);}
    {v[21]=BITSF(v1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[22]=BITSF(a0);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v0=FBITS(v[18]);}
    f5 = BITSF(v0);
    {v0=FBITS(v[16]);}
    f1 = BITSF(v0);
    f6 = BITSF(LD32(s3+36));
    f4 = BITSF(v0);
    ST32(sp+32, FBITS(f1));
    {v0=FBITS(v[17]);}
    f3 = BITSF(v0);
    ST32(sp+36, v0);
    ST32(sp+20, v0);
    ST32(sp+40, FBITS(f5));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f5));
    f1 = BITSF(LD32(s0));
    f0 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0+4));
    f1 = f1 + f4;
    f0 = f0 + f5;
    f2 = f2 + f3;
    v0 = LD32(s3+40);
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    ST32(sp+100, FBITS(f6));
    ST32(sp+96, 0);
    ST32(sp+104, 0);
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
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
    {ST32(sp+(48),FBITS(v[96]));}
    {ST32(sp+(52),FBITS(v[97]));}
    {ST32(sp+(56),FBITS(v[98]));}
    {ST32(sp+(60),FBITS(v[100]));}
    {ST32(sp+(64),FBITS(v[101]));}
    {ST32(sp+(68),FBITS(v[102]));}
    {ST32(sp+(72),FBITS(v[104]));}
    {ST32(sp+(76),FBITS(v[105]));}
    {ST32(sp+(80),FBITS(v[106]));}
    cnd_ = v0 != 0;
    v0 = LD32(s2);
    if (cnd_) { goto L_089E35C8; }
    goto L_089E351C;
L_089E351C:;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3534;
L_089E3534:;
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[116]=BITSF(LD32(v0+(12)));}
    {v[117]=BITSF(LD32(v0+(16)));}
    {v[118]=BITSF(LD32(v0+(20)));}
    {v[120]=BITSF(LD32(v0+(24)));}
    {v[121]=BITSF(LD32(v0+(28)));}
    {v[122]=BITSF(LD32(v0+(32)));}
    {v[96]=BITSF(LD32(sp+(48)));}
    {v[97]=BITSF(LD32(sp+(52)));}
    {v[98]=BITSF(LD32(sp+(56)));}
    {v[100]=BITSF(LD32(sp+(60)));}
    {v[101]=BITSF(LD32(sp+(64)));}
    {v[102]=BITSF(LD32(sp+(68)));}
    {v[104]=BITSF(LD32(sp+(72)));}
    {v[105]=BITSF(LD32(sp+(76)));}
    {v[106]=BITSF(LD32(sp+(80)));}
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
    v0 = LD32(s4);
    a0 = s4 + 0;
    a2 = s5 + 0;
    v1 = LD32(v0+16);
    a1 = sp + 0;
    t_ = v1;
    a3 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E35C0;
L_089E35C0:;
    goto L_089E328C;
L_089E35C8:;
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    s5 = sp + 112;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E35E0;
L_089E35E0:;
    a2 = LD32(s3+40);
    a0 = sp + 0;
    a1 = s5 + 0;
    a3 = 0 + 0;
    t0 = 15;
    {v[112]=BITSF(LD32(v0+(0)));}
    {v[113]=BITSF(LD32(v0+(4)));}
    {v[114]=BITSF(LD32(v0+(8)));}
    {v[116]=BITSF(LD32(v0+(12)));}
    {v[117]=BITSF(LD32(v0+(16)));}
    {v[118]=BITSF(LD32(v0+(20)));}
    {v[120]=BITSF(LD32(v0+(24)));}
    {v[121]=BITSF(LD32(v0+(28)));}
    {v[122]=BITSF(LD32(v0+(32)));}
    {v[96]=BITSF(LD32(sp+(48)));}
    {v[97]=BITSF(LD32(sp+(52)));}
    {v[98]=BITSF(LD32(sp+(56)));}
    {v[100]=BITSF(LD32(sp+(60)));}
    {v[101]=BITSF(LD32(sp+(64)));}
    {v[102]=BITSF(LD32(sp+(68)));}
    {v[104]=BITSF(LD32(sp+(72)));}
    {v[105]=BITSF(LD32(sp+(76)));}
    {v[106]=BITSF(LD32(sp+(80)));}
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
    { rv_t r_ = func_088E3730(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3668;
L_089E3668:;
    v0 = LD32(s2);
    goto L_089E351C;
L_089E3670:;
    a0 = D_08C2A08C - (-24436);
    a0 = a0 - 24436;
    a2 = 1;
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { u64 r_ = func_08AC085C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3690;
L_089E3690:;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s4); goto L_089E36E4; }
    goto L_089E3698;
L_089E3698:;
    v1 = LD32(s4);
    a1 = LD32(v0);
    a0 = v0 + 0;
    v0 = LD32(v1-16);
    a2 = LD32(a1+88);
    v0 = s4 + v0;
    t_ = a2;
    a1 = LD32(v0+4);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E36B8;
L_089E36B8:;
    a2 = LD_U8(s3+48);
    a0 = s4 + 0;
    a1 = s2 + 0;
    func_089D3F9C(a0, a1, a2, 0, 0);
    goto L_089E36C8;
L_089E36C8:;
    v0 = LD32(s4+232);
    v0 = (v0 & ~(0x1u << 3)) | ((s0 & 0x1) << 3);
    ST32(s4+232, v0);
    v1 = LD32(s2+172);
    v1 = v1 | 0x20;
    ST32(s2+172, v1);
    goto L_089E3334;
L_089E36E4:;
    a0 = LD32(v0-16);
    a0 = s4 + a0;
    { rv_t r_ = func_088744F8(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E36F0;
L_089E36F0:;
    goto L_089E328C;
}

/* 089E36F8 */
rv_t func_089E36F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E36F8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E371C;
L_089E371C:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_08A07314(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3728;
L_089E3728:;
    f12 = BITSF(LD32(s1+128));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3734;
L_089E3734:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E3748 */
rv_t func_089E3748(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E3748:;
    sp = sp - 32;
    a2 = sp + 0;
    s1 = a0 + 0;
    s0 = a1 + 0;
    a1 = 0 + 0;
    goto L_089E3768;
L_089E3768:;
    v0 = LD32(s0);
    a1 = a1 + 1;
    a0 = a1 < 0x4u;
    v1 = LD_U8(v0);
    v0 = v0 + 1;
    ST32(s0, v0);
    ST8(a2, v1);
    cnd_ = a0 != 0;
    a2 = a2 + 1;
    if (cnd_) { goto L_089E3768; }
    goto L_089E378C;
L_089E378C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A07570(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3798;
L_089E3798:;
    v0 = LD32(sp);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E37D8; }
    goto L_089E37A4;
L_089E37A4:;
    a1 = s1 + 128;
    a2 = 0 + 0;
    goto L_089E37AC;
L_089E37AC:;
    v1 = LD32(s0);
    a2 = a2 + 1;
    a0 = a2 < 0x4u;
    v0 = LD_U8(v1);
    ST8(a1, v0);
    a1 = a1 + 1;
    v0 = LD32(s0);
    v0 = v0 + 1;
    cnd_ = a0 != 0;
    ST32(s0, v0);
    if (cnd_) { goto L_089E37AC; }
    goto L_089E37D4;
L_089E37D4:;
    goto L_089E37D8;
L_089E37D8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E37E8 */
rv_t func_089E37E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E37E8:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 120;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E381C;
L_089E381C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089E3854; }
    goto L_089E3824;
L_089E3824:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E383C; }
    goto L_089E3834;
L_089E3834:;
    func_089E47DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E383C;
L_089E383C:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3854;
L_089E3854:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E3868 */
rv_t func_089E3868(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E3868:;
    sp = sp - 32;
    s3 = a0 + 0;
    a3 = 0 + 0;
    s2 = a1 + 0;
    a1 = 120;
    v0 = LD32(a0);
    a0 = 0x8050;
    v1 = LD32(v0-16);
    v1 = s3 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E38A8;
L_089E38A8:;
    cnd_ = v0 == 0;
    s1 = v0 + 0;
    if (cnd_) { goto L_089E3984; }
    goto L_089E38B0;
L_089E38B0:;
    s0 = LD32(v0+24);
    cnd_ = s0 == 0;
    a0 = D_08C2C31C - (-15588);
    if (cnd_) { goto L_089E3964; }
    goto L_089E38BC;
L_089E38BC:;
    a1 = LD32(s2+4);
    v0 = 999;
    ST32(s0+8, 0);
    v1 = a0 - 15588;
    ST32(s0+4, 0);
    cnd_ = a1 == v0;
    ST32(s0, 0);
    if (cnd_) { goto L_089E3964; }
    goto L_089E38D8;
L_089E38D8:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-15588);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a2 = LD32(v0);
    cnd_ = a2 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E3928; }
    goto L_089E38FC;
L_089E38FC:;
    a0 = LD32(a2);
    goto L_089E3900;
L_089E3900:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089E39A0; }
    goto L_089E3918;
L_089E3918:;
    a2 = LD32(a2+4);
    goto L_089E391C;
L_089E391C:;
    cnd_ = a2 != 0;
    if (cnd_) { a0 = LD32(a2); goto L_089E3900; }
    goto L_089E3924;
L_089E3924:;
    v1 = 0 + 0;
    goto L_089E3928;
L_089E3928:;
    cnd_ = v1 == 0;
    v0 = 3;
    if (cnd_) { goto L_089E3968; }
    goto L_089E3930;
L_089E3930:;
    v0 = LD32(v1);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E394C;
L_089E394C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s0+8, FBITS(f0));
    ST32(s0, FBITS(f1));
    ST32(s0+4, FBITS(f2));
    goto L_089E3964;
L_089E3964:;
    v0 = 3;
    goto L_089E3968;
L_089E3968:;
    ST32(s1, v0);
    a0 = s1 + 0;
    a1 = 1;
    v0 = LD32(s3+84);
    a2 = 1;
    ST32(s1+4, v0);
    { rv_t r_ = func_088AC370(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3984;
L_089E3984:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E39A0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089E3918; }
    goto L_089E39AC;
L_089E39AC:;
    v0 = LD_U8(a2+8);
    cnd_ = v0 != 0;
    if (cnd_) { a2 = LD32(a2+4); goto L_089E391C; }
    goto L_089E39B8;
L_089E39B8:;
    goto L_089E3928;
}

/* 089E39C0 */
rv_t func_089E39C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E39C0:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A07B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E39D4;
L_089E39D4:;
    a1 = 0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    v1 = s0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E3A00; }
    goto L_089E39F0;
L_089E39F0:;
    goto L_089E39F4;
L_089E39F4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E3A00:;
    { u64 r_ = func_088BB208(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3A08;
L_089E3A08:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    v0 = 3;
    a1 = LD32(v1);
    cnd_ = a1 != v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E39F0; }
    goto L_089E3A28;
L_089E3A28:;
    { u64 r_ = func_089E3B90(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3A30;
L_089E3A30:;
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089E39F0; }
    goto L_089E3A38;
L_089E3A38:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3A4C;
L_089E3A4C:;
    goto L_089E39F4;
}

/* 089E3A54 */
rv_t func_089E3A54(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E3A54:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A07ADC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3A68;
L_089E3A68:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089E3A94; }
    goto L_089E3A80;
L_089E3A80:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E3AA0; }
    goto L_089E3A90;
L_089E3A90:;
    goto L_089E3A94;
L_089E3A94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E3AA0:;
    { u64 r_ = func_089E3B90(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3AA8;
L_089E3AA8:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E3A90; }
    goto L_089E3AB0;
L_089E3AB0:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3AC0;
L_089E3AC0:;
    cnd_ = v0 != 0;
    a1 = 1;
    if (cnd_) { goto L_089E3A90; }
    goto L_089E3AC8;
L_089E3AC8:;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    a0 = LD32(v0+4);
    { u64 r_ = func_088BB1D8(a0, a1, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3ADC;
L_089E3ADC:;
    goto L_089E3A94;
}

/* 089E3AE4 */
rv_t func_089E3AE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E3AE4:;
    sp = sp - 16;
    s1 = a1 & 0xff;
    s0 = a0 + 0;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089E3B40; }
    goto L_089E3B00;
L_089E3B00:;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089E3B1C; }
    goto L_089E3B0C;
L_089E3B0C:;
    v0 = LD_U8(a0+64);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s0 + 0; goto L_089E3B44; }
    goto L_089E3B18;
L_089E3B18:;
    v1 = LD32(s0);
    goto L_089E3B1C;
L_089E3B1C:;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 == 0;
    if (cnd_) { a0 = s0 + 0; goto L_089E3B44; }
    goto L_089E3B30;
L_089E3B30:;
    v1 = LD32(v1);
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089E3B60; }
    goto L_089E3B40;
L_089E3B40:;
    a0 = s0 + 0;
    goto L_089E3B44;
L_089E3B44:;
    a1 = s1 + 0;
    { rv_t r_ = func_08A06EF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3B4C;
L_089E3B4C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E3B60:;
    { u64 r_ = func_089E3B90(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3B68;
L_089E3B68:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E3B44; }
    goto L_089E3B70;
L_089E3B70:;
    v1 = LD32(s0);
    v0 = LD32(v1+100);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3B80;
L_089E3B80:;
    cnd_ = v0 == 0;
    if (cnd_) { ST8(s0+6, 0); goto L_089E3B40; }
    goto L_089E3B88;
L_089E3B88:;
    a0 = s0 + 0;
    goto L_089E3B44;
}

/* 089E3B90 */
u64 func_089E3B90(u32 a0)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E3B90:;
    sp = sp - 16;
    s0 = a0 + 0;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3BA4;
L_089E3BA4:;
    v1 = v0 + 0;
    v0 = LD32(s0+84);
    v0 = v0 ^ v1;
    v0 = v0 < 0x1u;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089E3BC4 */
u32 func_089E3BC4(u32 a0)
{
    u32 v0 = 0;
L_089E3BC4:;
    v0 = LD32(a0+84);
    v0 = v0 ^ 0x3e7;
    v0 = 0 < v0;
    return v0;
}

/* 089E3BD4 */
u64 func_089E3BD4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_089E3BD4:;
    a1 = LD32(a0+84);
    a2 = D_08C2C664 - (-14748);
    v0 = 999;
    a0 = a2 - 14748;
    cnd_ = a1 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E3C30; }
    goto L_089E3BEC;
L_089E3BEC:;
    v0 = LD32(a0+4);
    v1 = LD32(a2-14748);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E3C30; }
    goto L_089E3C10;
L_089E3C10:;
    v1 = LD32(a0);
    goto L_089E3C14;
L_089E3C14:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(v1+16); goto L_089E3C38; }
    goto L_089E3C20;
L_089E3C20:;
    a0 = LD32(a0+4);
    goto L_089E3C24;
L_089E3C24:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089E3C14; }
    goto L_089E3C2C;
L_089E3C2C:;
    v1 = 0 + 0;
    goto L_089E3C30;
L_089E3C30:;
    v0 = 0 < v1;
    return (u64)v0 | ((u64)v1 << 32);
L_089E3C38:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089E3C24; }
    goto L_089E3C44;
L_089E3C44:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089E3C24; }
    goto L_089E3C50;
L_089E3C50:;
    goto L_089E3C30;
}

/* 089E3C58 */
rv_t func_089E3C58(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E3C58:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 & 0xff;
    v0 = LD32(a0+172);
    v0 = v0 & 0x1;
    cnd_ = s0 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089E3C9C; }
    goto L_089E3C80;
L_089E3C80:;
    v0 = LD32(a0);
    v1 = LD32(v0+220);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3C90;
L_089E3C90:;
    v0 = LD32(s1+172);
    v0 = (v0 & ~(0x1u << 0)) | ((s0 & 0x1) << 0);
    ST32(s1+172, v0);
    goto L_089E3C9C;
L_089E3C9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E3CB0 */
void func_089E3CB0(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E3CB0:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0+172);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    ST32(sp, a1);
    if (cnd_) { goto L_089E3CEC; }
    goto L_089E3CD4;
L_089E3CD4:;
    v0 = LD32(a0+176);
    a2 = 0 + 0;
    a3 = sp + 0;
    a0 = 0x8074;
    cnd_ = v0 != 0;
    a1 = 4;
    if (cnd_) { goto L_089E3D00; }
    goto L_089E3CEC;
L_089E3CEC:;
    goto L_089E3CF0;
L_089E3CF0:;
    sp = sp + 32;
    return;
L_089E3D00:;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3D08;
L_089E3D08:;
    s1 = v0 + 0;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089E3CEC; }
    goto L_089E3D14;
L_089E3D14:;
    a0 = LD32(s0+176);
    { rv_t r_ = func_08922AA4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3D1C;
L_089E3D1C:;
    a0 = s1 + 0;
    { u64 r_ = func_088ACBAC(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3D24;
L_089E3D24:;
    goto L_089E3CF0;
}

/* 089E3D2C */
rv_t func_089E3D2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E3D2C:;
    sp = sp - 32;
    v0 = a3 + 0;
    a3 = 0 + 0;
    s3 = a2 + 0;
    a2 = 0 + 0;
    s2 = a1 + 0;
    a1 = 8;
    s0 = a0 + 0;
    a0 = 0x807f;
    s1 = v0 & 0xff;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3D6C;
L_089E3D6C:;
    t0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 1;
    cnd_ = v0 == 0;
    a2 = 1;
    if (cnd_) { goto L_089E3DC0; }
    goto L_089E3D80;
L_089E3D80:;
    v1 = LD32(s0);
    t1 = LD32(v0+24);
    v0 = LD32(v1-16);
    v1 = 2;
    v0 = s0 + v0;
    a3 = LD32(v0+4);
    ST32(t0, v1);
    cnd_ = t1 == 0;
    ST32(t0+4, a3);
    if (cnd_) { goto L_089E3DB8; }
    goto L_089E3DA4;
L_089E3DA4:;
    v0 = LD32(t1+4);
    v0 = (v0 & ~(0x1u << 0)) | ((s1 & 0x1) << 0);
    v0 = (v0 & ~(0x7fffffffu << 1)) | ((s3 & 0x7fffffff) << 1);
    ST32(t1, s2);
    ST32(t1+4, v0);
    goto L_089E3DB8;
L_089E3DB8:;
    { rv_t r_ = func_088AC370(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3DC0;
L_089E3DC0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E3DDC */
rv_t func_089E3DDC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E3DDC:;
    sp = sp - 32;
    a1 = sp + 0;
    v0 = LD32(a0);
    ST32(sp, 0);
    v1 = LD32(v0+180);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3E00;
L_089E3E00:;
    v0 = LD32(sp);
    a0 = s0 + 0;
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089E3E20; }
    goto L_089E3E10;
L_089E3E10:;
    goto L_089E3E14;
L_089E3E14:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E3E20:;
    v1 = LD32(s0);
    v0 = LD32(v1+184);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3E30;
L_089E3E30:;
    goto L_089E3E14;
}

/* 089E3E38 */
rv_t func_089E3E38(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E3E38:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0+176);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E3ED4; }
    goto L_089E3E5C;
L_089E3E5C:;
    a1 = 0x31490000u;
    goto L_089E3E60;
L_089E3E60:;
    a0 = s1 + 0;
    a1 = a1 | 0xde91;
    a2 = 0 + 0;
    { u64 r_ = func_0896CEC0(a0, a1, a2, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3E70;
L_089E3E70:;
    ST32(s0+156, v0);
    a1 = 0x4bf80000u;
    a2 = 0 + 0;
    a0 = s1 + 0;
    a1 = a1 | 0xe150;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E3E88;
L_089E3E88:;
    ST32(s0+160, v0);
    a1 = 0xeb310000u;
    a0 = s1 + 0;
    f12 = BITSF(LD32(s0+168));
    a1 = a1 | 0x3190;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3EA0;
L_089E3EA0:;
    ST32(s0+168, FBITS(f0));
    a1 = 0xe5b00000u;
    a0 = s1 + 0;
    f12 = BITSF(LD32(s0+164));
    a1 = a1 | 0xe9a;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3EB8;
L_089E3EB8:;
    ST32(s0+164, FBITS(f0));
    v0 = 1;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E3ED4:;
    v0 = LD32(v0);
    v1 = LD32(v0+28);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E3EE4;
L_089E3EE4:;
    a1 = 0x31490000u;
    goto L_089E3E60;
}

/* 089E3EEC */
u32 func_089E3EEC(u32 a0, u32 a1, u32 a2, u32 a3)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
    u32 hi = 0, lo = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[480] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 480);
L_089E3EEC:;
    sp = sp - 480;
    v0 = D_08B20494 - (1172);
    s0 = v0 + 1172;
    s7 = a3 + 0;
    a3 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp+192, a2);
    a2 = 251;
    fp = a1 + 0;
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_089E3F54;
L_089E3F54:;
    a1 = v0 & 0xffff;
    v1 = LD_U16(s0+10);
    v1 = a1 < v1;
    cnd_ = v1 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089E3F7C; }
    goto L_089E3F68;
L_089E3F68:;
    v1 = LD32(s0+12);
    v0 = a1 << 1;
    v0 = v0 + a1;
    v0 = v0 << 3;
    v0 = v1 + v0;
    goto L_089E3F7C;
L_089E3F7C:;
    s0 = v0 + 0;
    v0 = fp + 0;
    if (s0 != 0) v0 = s0;
    f11 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0));
    f9 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f11));
    v0 = s7 + 0;
    ST32(sp, FBITS(f0));
    cnd_ = s7 == 0;
    ST32(sp+4, FBITS(f9));
    if (cnd_) { goto L_089E46EC; }
    goto L_089E3FA8;
L_089E3FA8:;
    f10 = BITSF(LD32(fp));
    f8 = BITSF(LD32(v0+32));
    f7 = BITSF(LD32(v0));
    fcc = FCMP(f0, f10, 2);
    f1 = BITSF(LD32(v0+8));
    f0 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    ST32(sp+16, FBITS(f7));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+28, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f5));
    ST32(sp+44, FBITS(f6));
    cnd_ = !fcc;
    ST32(sp+48, FBITS(f8));
    if (cnd_) { goto L_089E4024; }
    goto L_089E3FFC;
L_089E3FFC:;
    f0 = BITSF(LD32(fp+4));
    fcc = FCMP(f9, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(fp+4)); goto L_089E4028; }
    goto L_089E4010;
L_089E4010:;
    f0 = BITSF(LD32(fp+8));
    fcc = FCMP(f11, f0, 2);
    cnd_ = fcc;
    if (cnd_) { goto L_089E4060; }
    goto L_089E4024;
L_089E4024:;
    f3 = BITSF(LD32(fp+4));
    goto L_089E4028;
L_089E4028:;
    f4 = BITSF(LD32(fp+8));
    f2 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f2 = f10 - f2;
    f3 = f3 - f0;
    f4 = f4 - f1;
    s2 = sp + 64;
    a0 = sp + 16;
    a1 = s2 + 0;
    ST32(sp+64, FBITS(f2));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, FBITS(f4));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4060;
L_089E4060:;
    cnd_ = s1 == 0;
    a2 = LD32(sp+192);
    if (cnd_) { goto L_089E46CC; }
    goto L_089E4068;
L_089E4068:;
    v1 = LD32(s1);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E4084; }
    goto L_089E4080;
L_089E4080:;
    a0 = LD32(v0+16);
    goto L_089E4084;
L_089E4084:;
    cnd_ = a0 == 0;
    v0 = D_08AEF228 - (-3544);
    if (cnd_) { goto L_089E46C8; }
    goto L_089E408C;
L_089E408C:;
    f24 = BITSF(LD32(v0-3544));
    ST32(sp+196, 0);
    ST32(sp+200, 0);
    goto L_089E4098;
L_089E4098:;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089E40B0; }
    goto L_089E40AC;
L_089E40AC:;
    a2 = LD32(v0+16);
    goto L_089E40B0;
L_089E40B0:;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 == 0;
    t0 = (u32)-1;
    if (cnd_) { goto L_089E40C8; }
    goto L_089E40C4;
L_089E40C4:;
    t0 = LD32(v0+8);
    goto L_089E40C8;
L_089E40C8:;
    a0 = sp + 0;
    a1 = sp + 16;
    a3 = 4100;
    t1 = 0xffff;
    t2 = 1;
    t3 = 1;
    { rv_t r_ = func_088B08D8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E40E4;
L_089E40E4:;
    cnd_ = v0 != 0;
    a2 = LD32(sp+192);
    if (cnd_) { goto L_089E46CC; }
    goto L_089E40EC;
L_089E40EC:;
    f20 = BITSF(0);
    fcc = FCMP(f20, f24, 12);
    cnd_ = !fcc;
    v0 = D_08AEF22C - (-3540);
    if (cnd_) { goto L_089E4198; }
    goto L_089E4100;
L_089E4100:;
    v1 = D_08AEF228 - (-3544);
    f22 = BITSF(LD32(v0-3540));
    f21 = BITSF(LD32(v1-3544));
    s2 = sp + 64;
    v1 = LD32(s1);
    goto L_089E4114;
L_089E4114:;
    f1 = BITSF(LD32(sp+4));
    f0 = BITSF(LD32(sp));
    v0 = LD32(v1-12);
    f1 = f1 - f20;
    a0 = s2 + 0;
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    ST32(sp+64, FBITS(f0));
    f20 = f20 + f22;
    a1 = sp + 16;
    f0 = BITSF(LD32(sp+8));
    a3 = 4100;
    t1 = 0xffff;
    t2 = 1;
    t3 = 1;
    a2 = 0 + 0;
    t0 = (u32)-1;
    ST32(sp+72, FBITS(f0));
    cnd_ = v0 == 0;
    ST32(sp+68, FBITS(f1));
    if (cnd_) { goto L_089E4168; }
    goto L_089E4164;
L_089E4164:;
    a2 = LD32(v0+16);
    goto L_089E4168;
L_089E4168:;
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    v0 = LD32(v0+4);
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(v0+8); goto L_089E417C; }
    goto L_089E417C;
L_089E417C:;
    { rv_t r_ = func_088B08D8(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4184;
L_089E4184:;
    fcc = FCMP(f20, f21, 12);
    cnd_ = v0 != 0;
    a0 = LD32(sp+192);
    if (cnd_) { goto L_089E4658; }
    goto L_089E4190;
L_089E4190:;
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s1); goto L_089E4114; }
    goto L_089E4198;
L_089E4198:;
    a1 = LD32(sp+200);
    v1 = 0 + 0;
    a1 = a1 + 1;
    v0 = (s32)a1 < 21;
    cnd_ = v0 == 0;
    ST32(sp+200, a1);
    if (cnd_) { goto L_089E4610; }
    goto L_089E41B0;
L_089E41B0:;
    cnd_ = s0 == 0;
    v1 = D_08AEF234 - (-3532);
    if (cnd_) { goto L_089E4358; }
    goto L_089E41B8;
L_089E41B8:;
    a1 = LD_U8(s0+20);
    cnd_ = a1 == 0;
    v0 = D_08AEF230 - (-3536);
    if (cnd_) { goto L_089E435C; }
    goto L_089E41C4;
L_089E41C4:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    v0 = a2 + 23232;
    a0 = LD32(v0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a0;
    v0 = v1 >> 1;
    { u32 x_ = v0, y_ = a1; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a0 = a0 + v1;
    v0 = a2 + 23232;
    t2 = LD32(s0+16);
    ST32(a2+23232, v1);
    t1 = 0 + 0;
    ST32(v0+4, a0);
    v0 = D_08B20494 - (1172);
    t3 = v0 + 1172;
    a1 = hi;
    a0 = a1 & 0xffff;
    v0 = a0 << 3;
    goto L_089E4218;
L_089E4218:;
    v0 = v0 + t2;
    t0 = a0 + 1;
    v1 = LDU32(v0);
    a0 = LDU32(v0+4);
    STU32(sp+80, v1);
    STU32(sp+84, a0);
    v1 = t1 + 1;
    t1 = v1 & 0xff;
    a0 = LD_U16(sp+80);
    v1 = LD_U16(t3+10);
    a3 = 0 + 0;
    v0 = a0 << 1;
    v0 = v0 + a0;
    a0 = a0 < v1;
    cnd_ = a0 == 0;
    a1 = v0 << 3;
    if (cnd_) { goto L_089E4270; }
    goto L_089E4268;
L_089E4268:;
    v0 = LD32(t3+12);
    a3 = v0 + a1;
    goto L_089E4270;
L_089E4270:;
    a2 = LD_U8(s0+20);
    v0 = LD32(sp+196);
    { s32 x_ = (s32)t0, y_ = (s32)a2; if (y_ == 0) { lo = x_ < 0 ? 1 : 0xFFFFFFFFu; hi = (u32)x_; } else if (x_ == INT32_MIN && y_ == -1) { lo = 0x80000000u; hi = 0; } else { lo = (u32)(x_ / y_); hi = (u32)(x_ % y_); } }
    v1 = a3 ^ v0;
    v1 = v1 < 0x1u;
    v0 = t1 < a2;
    v0 = v0 & v1;
    a0 = hi;
    cnd_ = v0 == 0;
    a0 = a0 & 0xffff;
    if (cnd_) { goto L_089E42A8; }
    goto L_089E4298;
L_089E4298:;
    v0 = LD_U8(a3+20);
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    v0 = a0 << 3;
    if (cnd_) { goto L_089E4218; }
    goto L_089E42A8;
L_089E42A8:;
    cnd_ = t1 == a2;
    v0 = s0 + 0;
    if (cnd_) { goto L_089E434C; }
    goto L_089E42B0;
L_089E42B0:;
    ST32(sp+196, s0);
    s0 = a3 + 0;
    goto L_089E42B8;
L_089E42B8:;
    cnd_ = s0 == 0;
    if (cnd_) { v1 = LD32(s1); goto L_089E4098; }
    goto L_089E42C0;
L_089E42C0:;
    f0 = BITSF(LD32(s0));
    f5 = BITSF(LD32(fp));
    f1 = BITSF(LD32(s0+4));
    f2 = BITSF(LD32(s0+8));
    fcc = FCMP(f0, f5, 2);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f2));
    if (cnd_) { goto L_089E430C; }
    goto L_089E42E4;
L_089E42E4:;
    f0 = BITSF(LD32(fp+4));
    fcc = FCMP(f1, f0, 2);
    cnd_ = !fcc;
    if (cnd_) { f3 = BITSF(LD32(fp+4)); goto L_089E4310; }
    goto L_089E42F8;
L_089E42F8:;
    f0 = BITSF(LD32(fp+8));
    fcc = FCMP(f2, f0, 2);
    cnd_ = fcc;
    if (cnd_) { v1 = LD32(s1); goto L_089E4098; }
    goto L_089E430C;
L_089E430C:;
    f3 = BITSF(LD32(fp+4));
    goto L_089E4310;
L_089E4310:;
    f4 = BITSF(LD32(fp+8));
    f2 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    f1 = BITSF(LD32(sp+8));
    f2 = f5 - f2;
    f3 = f3 - f0;
    f4 = f4 - f1;
    a0 = sp + 16;
    a1 = sp + 176;
    ST32(sp+176, FBITS(f2));
    ST32(sp+180, FBITS(f3));
    ST32(sp+184, FBITS(f4));
    { rv_t r_ = func_088F82FC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4344;
L_089E4344:;
    v1 = LD32(s1);
    goto L_089E4098;
L_089E434C:;
    s0 = LD32(sp+196);
    ST32(sp+196, v0);
    goto L_089E42B8;
L_089E4358:;
    v0 = D_08AEF230 - (-3536);
    goto L_089E435C;
L_089E435C:;
    f20 = BITSF(LD32(v1-3532));
    v1 = D_08AEF23C - (-3524);
    f23 = BITSF(LD32(v0-3536));
    f21 = BITSF(LD32(v1-3524));
    v0 = D_08AEF238 - (-3528);
    f22 = BITSF(LD32(v0-3528));
    s3 = D_08B25AC8 - (23240);
    v0 = D_08B20494 - (1172);
    s6 = v0 + 1172;
    s5 = 20;
    s4 = s3 + 23240;
    s2 = 0 + 0;
    t0 = LD32(s3+23240);
    goto L_089E4390;
L_089E4390:;
    t2 = LD32(s4+4);
    {u32 a_=sp+(272);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = (u32)((s32)t0 >> 16);
    t0 = t0 << 16;
    t0 = t0 + v0;
    t0 = t0 + t2;
    v0 = t0 >> 1;
    f0 = BITSF(v0);
    t1 = t0 << 16;
    v0 = (u32)((s32)t0 >> 16);
    t2 = t2 + t0;
    t1 = t1 + v0;
    t1 = t1 + t2;
    v1 = t1 >> 1;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    {u32 a_=sp+(256);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(240);v[4]=BITSF(LD32(a_+0));v[5]=BITSF(LD32(a_+4));v[6]=BITSF(LD32(a_+8));v[7]=BITSF(LD32(a_+12));}
    f6 = (float)(s32)FBITS(f0);
    f1 = f1 * f20;
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[56]=d0;v[57]=d1;v[58]=d2;v[59]=d3;}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[60]=d0;v[61]=d1;v[62]=d2;v[63]=d3;}
    f6 = f6 * f20;
    f1 = f1 * f23;
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    ST32(sp+96, 0);
    f6 = f6 * f21;
    {u32 a_=sp+(288);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    ST32(sp+100, FBITS(f1));
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    f6 = f6 + f22;
    ST32(sp+104, 0);
    {u32 a_=sp+(304);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {v[112]=BITSF(LD32(sp+(96)));}
    {v[113]=BITSF(LD32(sp+(100)));}
    {v[114]=BITSF(LD32(sp+(104)));}
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
    {ST32(sp+(112),FBITS(v[96]));}
    {ST32(sp+(116),FBITS(v[97]));}
    {ST32(sp+(120),FBITS(v[98]));}
    {ST32(sp+(124),FBITS(v[100]));}
    {ST32(sp+(128),FBITS(v[101]));}
    {ST32(sp+(132),FBITS(v[102]));}
    {ST32(sp+(136),FBITS(v[104]));}
    {ST32(sp+(140),FBITS(v[105]));}
    {ST32(sp+(144),FBITS(v[106]));}
    v0 = LD32(sp+112);
    v1 = LD32(sp+116);
    {v[64]=BITSF(v0);}
    v0 = LD32(sp+120);
    {v[65]=BITSF(v1);}
    v1 = LD32(sp+128);
    {v[66]=BITSF(v0);}
    v0 = LD32(sp+124);
    {v[0]=BITSF(v0);}
    v0 = LD32(sp+132);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float s3=v[3];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[36]=d0;v[37]=d1;v[38]=d2;v[39]=d3;}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[4]));ST32(a_+4,FBITS(v[5]));ST32(a_+8,FBITS(v[6]));ST32(a_+12,FBITS(v[7]));}
    v0 = LD32(sp+136);
    v1 = LD32(sp+140);
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(208);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[16]));ST32(a_+4,FBITS(v[17]));ST32(a_+8,FBITS(v[18]));ST32(a_+12,FBITS(v[19]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(336);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(320);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(352);ST32(a_+0,FBITS(v[36]));ST32(a_+4,FBITS(v[37]));ST32(a_+8,FBITS(v[38]));ST32(a_+12,FBITS(v[39]));}
    {v[0]=BITSF(v0);}
    {u32 a_=sp+(384);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    v0 = LD32(sp+144);
    {v[1]=BITSF(v1);}
    {v[2]=BITSF(v0);}
    {u32 a_=sp+(368);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[0]));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {u32 a_=sp+(256);v[16]=BITSF(LD32(a_+0));v[17]=BITSF(LD32(a_+4));v[18]=BITSF(LD32(a_+8));v[19]=BITSF(LD32(a_+12));}
    v0 = FBITS(f6);
    f1 = BITSF(LD32(sp));
    f0 = BITSF(LD32(sp+4));
    f2 = BITSF(LD32(sp+8));
    {float s0=v[64];float s1=v[65];float s2=v[66];float s3=v[67];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {float s0=v[36];float s1=v[37];float s2=v[38];float s3=v[39];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {float s0=v[16];float s1=v[17];float s2=v[18];float s3=v[19];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {v[68]=BITSF(s2);}
    {v[69]=BITSF(s2);}
    {v[70]=BITSF(v0);}
    {float t0=v[68];float t1=v[69];float t2=v[70];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    {a0=FBITS(v[16]);}
    {a1=FBITS(v[17]);}
    f4 = BITSF(a0);
    f3 = BITSF(a1);
    f5 = BITSF(v1);
    f1 = f1 + f4;
    f0 = f0 + f3;
    f2 = f2 + f5;
    v0 = t2 + t1;
    a0 = s6 + 0;
    a1 = sp + 0;
    a2 = 251;
    a3 = 0 + 0;
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f0));
    ST32(s4+4, v0);
    ST32(s3+23240, t1);
    ST32(sp+168, FBITS(f6));
    ST32(sp+176, FBITS(f4));
    ST32(sp+180, FBITS(f3));
    ST32(sp+184, v1);
    ST32(sp+64, FBITS(f4));
    ST32(sp+68, FBITS(f3));
    ST32(sp+72, v1);
    ST32(sp+160, 0);
    ST32(sp+164, 0);
    ST32(sp+8, FBITS(f2));
    v0 = func_08804514(a0, a1, a2, a3);
    goto L_089E45C4;
L_089E45C4:;
    a0 = v0 & 0xffff;
    v0 = LD_U16(s6+10);
    v0 = a0 < v0;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089E45EC; }
    goto L_089E45D8;
L_089E45D8:;
    v0 = a0 << 1;
    v1 = LD32(s6+12);
    v0 = v0 + a0;
    v0 = v0 << 3;
    a1 = v1 + v0;
    goto L_089E45EC;
L_089E45EC:;
    s5 = s5 - 1;
    v0 = a1 ^ s0;
    v0 = v0 < 0x1u;
    v1 = (s32)0 < (s32)s5;
    v0 = v0 & v1;
    cnd_ = v0 != 0;
    if (cnd_) { t0 = LD32(s3+23240); goto L_089E4390; }
    goto L_089E4608;
L_089E4608:;
    if (a1 != 0) s0 = a1;
    goto L_089E42B8;
L_089E4610:;
    v0 = v1 + 0;
    sp = sp + 480;
    return v0;
L_089E4658:;
    cnd_ = a0 == 0;
    f0 = BITSF(LD32(sp+64));
    if (cnd_) { goto L_089E4674; }
    goto L_089E4660;
L_089E4660:;
    f1 = BITSF(LD32(sp+72));
    ST32(a0, FBITS(f0));
    f0 = BITSF(LD32(sp+68));
    ST32(a0+8, FBITS(f1));
    ST32(a0+4, FBITS(f0));
    goto L_089E4674;
L_089E4674:;
    cnd_ = s7 == 0;
    f0 = BITSF(LD32(sp+16));
    if (cnd_) { goto L_089E46C0; }
    goto L_089E467C;
L_089E467C:;
    f1 = BITSF(LD32(sp+48));
    ST32(s7, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(s7+32, FBITS(f1));
    ST32(s7+4, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(s7+8, FBITS(f1));
    ST32(s7+12, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+36));
    ST32(s7+16, FBITS(f1));
    ST32(s7+20, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    ST32(s7+24, FBITS(f1));
    ST32(s7+28, FBITS(f0));
    goto L_089E46C0;
L_089E46C0:;
    v1 = 1;
    goto L_089E4610;
L_089E46C8:;
    a2 = LD32(sp+192);
    goto L_089E46CC;
L_089E46CC:;
    cnd_ = a2 == 0;
    f0 = BITSF(LD32(sp));
    if (cnd_) { goto L_089E4674; }
    goto L_089E46D4;
L_089E46D4:;
    f1 = BITSF(LD32(sp+8));
    ST32(a2, FBITS(f0));
    f0 = BITSF(LD32(sp+4));
    ST32(a2+8, FBITS(f1));
    ST32(a2+4, FBITS(f0));
    goto L_089E4674;
L_089E46EC:;
    v0 = D_08B45AA8 - (23208);
    v0 = v0 + 23208;
    goto L_089E3FA8;
}

/* 089E46F8 */
rv_t func_089E46F8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E46F8:;
    sp = sp - 16;
    a2 = LD32(a0+172);
    a3 = LD32(a0);
    ST32(a0+84, a1);
    a2 = (a2 & ~(0x1u << 5)) | ((0 & 0x1) << 5);
    v0 = LD32(a3-12);
    ST32(a0+172, a2);
    v0 = a0 + v0;
    v1 = LD32(v0+4);
    cnd_ = v1 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E473C; }
    goto L_089E472C;
L_089E472C:;
    goto L_089E4730;
L_089E4730:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E473C:;
    v0 = LD32(a3+96);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4748;
L_089E4748:;
    v1 = LD32(s0);
    a1 = v0 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E475C;
L_089E475C:;
    goto L_089E4730;
}

/* 089E4764 */
u32 func_089E4764(u32 a0)
{
    u32 v0 = 0;
L_089E4764:;
    v0 = LD_U8(a0+120);
    ST8(a0+120, 0);
    return v0;
}

/* 089E4770 */
void func_089E4770(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0;
    int cnd_;
L_089E4770:;
    a3 = a0 + 0;
    a2 = 0 + 0;
    goto L_089E4778;
L_089E4778:;
    v1 = a2 << 2;
    v0 = v1 + a1;
    a0 = LD32(v0);
    a2 = a2 + 1;
    v1 = v1 + a3;
    v0 = a2 < 0x5u;
    cnd_ = v0 != 0;
    ST32(v1+180, a0);
    if (cnd_) { goto L_089E4778; }
    goto L_089E4798;
L_089E4798:;
    return;
}

/* 089E47A0 */
u64 func_089E47A0(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
L_089E47A0:;
    a1 = a1 & 0xff;
    cnd_ = a1 == 0;
    v0 = LD32(a0+144);
    if (cnd_) { goto L_089E47B8; }
    goto L_089E47AC;
L_089E47AC:;
    v0 = v0 + 1;
    ST32(a0+144, v0);
    return (u64)v0 | ((u64)v1 << 32);
L_089E47B8:;
    cnd_ = (s32)v0 <= 0;
    v1 = v0 - 1;
    if (cnd_) { goto L_089E47C8; }
    goto L_089E47C0;
L_089E47C0:;
    ST32(a0+144, v1);
    return (u64)v0 | ((u64)v1 << 32);
L_089E47C8:;
    ST32(a0+144, 0);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089E47D0 */
u64 func_089E47D0(void)
{
    u32 v0 = 0, v1 = 0;
L_089E47D0:;
    v1 = D_08C2B4DC - (-19236);
    v0 = LD_U8(v1-19236);
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089E47DC */
void func_089E47DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E47DC:;
    ST32(a0+112, 0);
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_08A08244(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089E47FC;
L_089E47FC:;
    v0 = LD32(s0+84);
    ST32(s1+92, v0);
    v1 = LD32(s0);
    v0 = LD32(v1+164);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4814;
L_089E4814:;
    cnd_ = v0 == 0;
    if (cnd_) { f0 = BITSF(LD32(s0+104)); goto L_089E4828; }
    goto L_089E481C;
L_089E481C:;
    f1 = BITSF(LD32(s0+104));
    f0 = BITSF(LD32(s0+148));
    f0 = f0 * f1;
    goto L_089E4828;
L_089E4828:;
    ST32(s1+96, FBITS(f0));
    a0 = s0 + 0;
    v1 = LD32(s0+112);
    ST32(s1+100, v1);
    v0 = LD32(s0+116);
    ST32(s1+104, v0);
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E4844;
L_089E4844:;
    v1 = LD32(s1+112);
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s1+112, v1);
    a0 = s0 + 0;
    v0 = LD32(s0+132);
    ST32(s1+108, v0);
    v0 = func_089E4764(a0);
    goto L_089E4860;
L_089E4860:;
    v1 = LD32(s1+112);
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s1+112, v1);
    v0 = LD32(s0+172);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s1+112, v1);
    v0 = LD32(s0+144);
    v0 = (s32)0 < (s32)v0;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s1+112, v1);
    f0 = BITSF(LD32(s0+124));
    ST32(s1+116, FBITS(f0));
    v0 = LD32(s0+172);
    v0 = (v0 >> 5) & 0x1;
    v1 = (v1 & ~(0x1u << 4)) | ((v0 & 0x1) << 4);
    ST32(s1+112, v1);
    sp = sp + 16;
    return;
}

/* 089E48B8 */
float func_089E48B8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E48B8:;
    sp = sp - 48;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E48F4;
L_089E48F4:;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E4920; }
    goto L_089E48FC;
L_089E48FC:;
    sp = sp + 48;
    return f0;
L_089E4920:;
    a1 = s0 + 0;
    f12 = f20;
    a2 = 1;
    { rv_t r_ = func_08A083F4(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4930;
L_089E4930:;
    v0 = LD32(s1+112);
    v1 = LD32(s0);
    v0 = v0 & 0x1;
    ST8(s0+194, v0);
    v0 = LD32(v1+220);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E494C;
L_089E494C:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s1+100); goto L_089E4B08; }
    goto L_089E4954;
L_089E4954:;
    v1 = LD32(s0);
    goto L_089E4958;
L_089E4958:;
    a1 = LD32(s1+32);
    v0 = LD32(v1+420);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4968;
L_089E4968:;
    f12 = BITSF(LD32(s1+96));
    a0 = s0 + 0;
    func_089DCF40(a0, f12);
    goto L_089E4974;
L_089E4974:;
    v1 = LD32(s0);
    v0 = LD32(v1+48);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4984;
L_089E4984:;
    s3 = LD32(s1+92);
    cnd_ = s3 == v0;
    s2 = v0 + 0;
    if (cnd_) { goto L_089E499C; }
    goto L_089E4990;
L_089E4990:;
    v0 = LD_U8(s0+232);
    cnd_ = v0 == 0;
    if (cnd_) { v1 = LD32(s0); goto L_089E4A00; }
    goto L_089E499C;
L_089E499C:;
    v0 = LD32(s0);
    goto L_089E49A0;
L_089E49A0:;
    a1 = LD32(s1+112);
    a0 = s0 + 0;
    v1 = LD32(v0+400);
    t_ = v1;
    a1 = (a1 >> 3) & 0x1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E49B4;
L_089E49B4:;
    a0 = LD32(s0+84);
    cnd_ = a0 == 0;
    v0 = D_08AEF240 - (-3520);
    if (cnd_) { goto L_089E49D8; }
    goto L_089E49C0;
L_089E49C0:;
    a1 = s1 + 0;
    f0 = func_08984B04(a0, a1);
    goto L_089E49C8;
L_089E49C8:;
    v0 = LD32(s1+112);
    goto L_089E49CC;
L_089E49CC:;
    v0 = (v0 >> 4) & 0x1;
    ST8(s0+232, v0);
    goto L_089E48FC;
L_089E49D8:;
    f0 = BITSF(LD32(s1+116));
    f1 = BITSF(LD32(v0-3520));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { v0 = LD32(s1+112); goto L_089E49CC; }
    goto L_089E49F0;
L_089E49F0:;
    a0 = s0 + 0;
    { rv_t r_ = func_089DD940(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E49F8;
L_089E49F8:;
    v0 = LD32(s1+112);
    goto L_089E49CC;
L_089E4A00:;
    a0 = s0 + 0;
    a1 = s3 + 0;
    v0 = LD32(v1+396);
    t_ = v0;
    s4 = D_08C29F04 - (-24828);
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4A14;
L_089E4A14:;
    v0 = 999;
    cnd_ = s2 == v0;
    v1 = s4 - 24828;
    if (cnd_) { goto L_089E4A94; }
    goto L_089E4A20;
L_089E4A20:;
    v0 = LD32(v1+4);
    v1 = LD32(s4-24828);
    v0 = v0 - 1;
    v0 = s2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089E4A70; }
    goto L_089E4A44;
L_089E4A44:;
    a0 = LD32(a1);
    goto L_089E4A48;
L_089E4A48:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == s2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089E4AE8; }
    goto L_089E4A60;
L_089E4A60:;
    a1 = LD32(a1+4);
    goto L_089E4A64;
L_089E4A64:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089E4A48; }
    goto L_089E4A6C;
L_089E4A6C:;
    a2 = 0 + 0;
    goto L_089E4A70;
L_089E4A70:;
    cnd_ = a2 == 0;
    a0 = s4 - 24828;
    if (cnd_) { goto L_089E4A98; }
    goto L_089E4A78;
L_089E4A78:;
    v1 = LD32(s0);
    a0 = LD32(a2+4);
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 == v1;
    if (cnd_) { a0 = a2 + 0; goto L_089E4AD0; }
    goto L_089E4A94;
L_089E4A94:;
    a0 = s4 - 24828;
    goto L_089E4A98;
L_089E4A98:;
    a1 = s3 + 0;
    a2 = 1;
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_089E4AA4;
L_089E4AA4:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E499C; }
    goto L_089E4AAC;
L_089E4AAC:;
    v0 = LD32(s0);
    f12 = f20;
    a2 = 0 + 0;
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a1 = LD32(v1+4);
    { rv_t r_ = func_0897E148(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4AC8;
L_089E4AC8:;
    v0 = LD32(s0);
    goto L_089E49A0;
L_089E4AD0:;
    a1 = 999;
    f12 = f20;
    a2 = 0 + 0;
    { rv_t r_ = func_0897E148(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4AE0;
L_089E4AE0:;
    a0 = s4 - 24828;
    goto L_089E4A98;
L_089E4AE8:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    a2 = a0 + 0;
    if (cnd_) { goto L_089E4A60; }
    goto L_089E4AF4;
L_089E4AF4:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E4A64; }
    goto L_089E4B00;
L_089E4B00:;
    goto L_089E4A70;
L_089E4B08:;
    a2 = LD32(s1+104);
    a0 = s0 + 0;
    f0 = func_089DE2B8(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E4B14;
L_089E4B14:;
    v1 = LD32(s0);
    goto L_089E4958;
}

/* 089E4B1C */
float func_089E4B1C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f20 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E4B1C:;
    sp = sp - 32;
    s1 = a0 + 0;
    a0 = a1 + 0;
    s0 = a1 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    f20 = f12;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4B4C;
L_089E4B4C:;
    f12 = f20;
    a2 = 1;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E4B78; }
    goto L_089E4B60;
L_089E4B60:;
    sp = sp + 32;
    return f0;
L_089E4B78:;
    func_08A08530(a0, a1, a2, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E4B80;
L_089E4B80:;
    v1 = LD32(s0);
    v0 = LD32(v1+220);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4B90;
L_089E4B90:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E4BF4; }
    goto L_089E4B98;
L_089E4B98:;
    v1 = LD32(s0);
    goto L_089E4B9C;
L_089E4B9C:;
    a1 = LD32(s1+32);
    v0 = LD32(v1+420);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4BAC;
L_089E4BAC:;
    f12 = BITSF(LD32(s1+96));
    a0 = s0 + 0;
    func_089DCF40(a0, f12);
    goto L_089E4BB8;
L_089E4BB8:;
    v1 = LD32(s0);
    a1 = LD32(s1+108);
    v0 = LD32(v1+404);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4BCC;
L_089E4BCC:;
    v1 = LD32(s0);
    a1 = LD32(s1+112);
    a0 = s0 + 0;
    a2 = LD32(v1+400);
    t_ = a2;
    a1 = (a1 >> 3) & 0x1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4BE4;
L_089E4BE4:;
    v0 = LD32(s1+112);
    v0 = (v0 >> 4) & 0x1;
    ST8(s0+232, v0);
    goto L_089E4B60;
L_089E4BF4:;
    a2 = LD32(s1+104);
    a1 = LD32(s1+100);
    f0 = func_089DE2B8(a0, a1, a2, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E4C00;
L_089E4C00:;
    v1 = LD32(s0);
    goto L_089E4B9C;
}

/* 089E4C08 */
void func_089E4C08(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0;
    u8 stack_[160] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 160);
L_089E4C08:;
    sp = sp - 160;
    f20 = BITSF(0);
    s0 = a0 + 0;
    func_08A08688(a0);
    goto L_089E4C24;
L_089E4C24:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 92;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089E4C48;
L_089E4C48:;
    v1 = D_08AEF248 - (-3512);
    v0 = D_08AEF244 - (-3516);
    f14 = BITSF(LD32(v1-3512));
    f13 = BITSF(LD32(v0-3516));
    t3 = 2;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 96;
    t0 = 32;
    t1 = 8;
    t2 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089E4C80;
L_089E4C80:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 100;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089E4CA4;
L_089E4CA4:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 104;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089E4CC8;
L_089E4CC8:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 108;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089E4CEC;
L_089E4CEC:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 112;
    t0 = 32;
    t1 = 5;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089E4D10;
L_089E4D10:;
    v0 = D_08AEF24C - (-3508);
    f13 = BITSF(LD32(v0-3508));
    f12 = f20;
    a0 = s0 + 0;
    f14 = f20;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 116;
    t0 = 32;
    t1 = 6;
    t2 = 1;
    t3 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089E4D44;
L_089E4D44:;
    sp = sp + 160;
    return;
}

/* 089E4D58 */
rv_t func_089E4D58(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E4D58:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E4E7C; }
    goto L_089E4D8C;
L_089E4D8C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF250 - (-3504);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3504));
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
    t0 = D_08C2B41C - (-19428);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B42C - (-19412);
    a3 = D_08C2B43C - (-19396);
    v1 = t0 - 19428;
    a1 = v0 - 19412;
    a2 = a3 - 19396;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B4CC - (-19252);
    s0 = s3 - 19252;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-19412, FBITS(f5));
    v0 = 4;
    ST32(t0-19428, FBITS(f1));
    ST32(a3-19396, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4E44;
L_089E4E44:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-19252, v0);
    if (cnd_) { goto L_089E4E70; }
    goto L_089E4E54;
L_089E4E54:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E4E5C;
L_089E4E5C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E4E5C; }
    goto L_089E4E70;
L_089E4E70:;
    v0 = s3 - 19252;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E4E7C;
L_089E4E7C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E4EA0; }
    goto L_089E4E90;
L_089E4E90:;
    v0 = D_08C2B4CC - (-19252);
    a0 = LD32(v0-19252);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E4EB8; }
    goto L_089E4EA0;
L_089E4EA0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E4EB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E4EC0;
L_089E4EC0:;
    goto L_089E4EA0;
}

/* 089E4EC8 */
rv_t func_089E4EC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E4EC8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E4D58(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4EDC;
L_089E4EDC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E4EE8 */
rv_t func_089E4EE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E4EE8:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E4D58(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4EFC;
L_089E4EFC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E4F08 */
void func_089E4F08(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E4F08:;
    sp = sp - 32;
    s0 = D_08B05040 - (20544);
    s0 = s0 + 20544;
    s1 = a0 + 0;
    a0 = a0 + 352;
    s3 = D_08C2B510 - (-19184);
    func_08873BF8(a0);
    goto L_089E4F38;
L_089E4F38:;
    a1 = s0 + 28;
    a0 = s1 + 88;
    func_0885D56C(a0, a1);
    goto L_089E4F44;
L_089E4F44:;
    a1 = s0 + 52;
    a0 = s1 + 372;
    s0 = s0 + 4;
    func_0885CDE4(a0, a1, 0, 0, 0);
    goto L_089E4F54;
L_089E4F54:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A03594(a0, a1);
    goto L_089E4F60;
L_089E4F60:;
    v0 = D_08B2BB9C - (-17508);
    t0 = LD32(v0-17508);
    v1 = D_08B04E7C - (20092);
    v1 = v1 + 20092;
    a3 = v1 + 432;
    v0 = v1 + 264;
    a2 = v1 + 376;
    s2 = s3 - 19184;
    a0 = s1 + 84;
    a1 = 3;
    ST32(s1+88, v0);
    ST32(s1+372, a3);
    ST32(s1+352, a2);
    ST32(s1, v1);
    cnd_ = t0 == 0;
    ST32(s1+84, 0);
    if (cnd_) { goto L_089E500C; }
    goto L_089E4FA0;
L_089E4FA0:;
    a1 = LD32(s1);
    goto L_089E4FA4;
L_089E4FA4:;
    v1 = LD32(s2+4);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E4FC4;
L_089E4FC4:;
    a0 = LD32(s3-19184);
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
L_089E500C:;
    func_0884C0A8(a0, a1, a2, a3, t0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E5014;
L_089E5014:;
    a1 = LD32(s1);
    goto L_089E4FA4;
}

/* 089E501C */
rv_t func_089E501C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E501C:;
    sp = sp - 32;
    v0 = D_08B04E7C - (20092);
    v0 = v0 + 20092;
    a2 = v0 + 432;
    v1 = v0 + 264;
    a1 = v0 + 376;
    s1 = a0 + 0;
    s3 = s1 + 88;
    s4 = s1 + 352;
    s2 = s1 + 372;
    a3 = LD32(a0+84);
    ST32(s1, v0);
    a0 = a0 + 84;
    ST32(s1+88, v1);
    ST32(s1+352, a1);
    cnd_ = a3 != 0;
    ST32(s1+372, a2);
    if (cnd_) { goto L_089E50E0; }
    goto L_089E5078;
L_089E5078:;
    a0 = D_08C2B510 - (-19184);
    goto L_089E507C;
L_089E507C:;
    s0 = D_08B05040 - (20544);
    a1 = s1 + 0;
    s0 = s0 + 20544;
    a0 = a0 - 19184;
    func_08AC7E08(a0, a1, t1, t2, t3);
    goto L_089E5090;
L_089E5090:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E509C;
L_089E509C:;
    a1 = s0 + 52;
    a0 = s2 + 0;
    s0 = s0 + 28;
    func_0885CED0(a0, a1);
    goto L_089E50AC;
L_089E50AC:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E50B8;
L_089E50B8:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E50C0;
L_089E50C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E50E0:;
    func_0884CDA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089E50E8;
L_089E50E8:;
    a0 = D_08C2B510 - (-19184);
    goto L_089E507C;
}

/* 089E50F0 */
rv_t func_089E50F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E50F0:;
    sp = sp - 32;
    v0 = D_08B04E7C - (20092);
    v0 = v0 + 20092;
    a2 = v0 + 432;
    v1 = v0 + 264;
    a1 = v0 + 376;
    s1 = a0 + 0;
    s3 = s1 + 88;
    s4 = s1 + 352;
    s2 = s1 + 372;
    a3 = LD32(a0+84);
    ST32(s1, v0);
    a0 = a0 + 84;
    ST32(s1+88, v1);
    ST32(s1+352, a1);
    cnd_ = a3 != 0;
    ST32(s1+372, a2);
    if (cnd_) { goto L_089E51BC; }
    goto L_089E514C;
L_089E514C:;
    a0 = D_08C2B510 - (-19184);
    goto L_089E5150;
L_089E5150:;
    s0 = D_08B05040 - (20544);
    a1 = s1 + 0;
    s0 = s0 + 20544;
    a0 = a0 - 19184;
    func_08AC7E08(a0, a1, t1, t2, t3);
    goto L_089E5164;
L_089E5164:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E5170;
L_089E5170:;
    a1 = s0 + 52;
    a0 = s2 + 0;
    s0 = s0 + 28;
    func_0885CED0(a0, a1);
    goto L_089E5180;
L_089E5180:;
    a1 = s0 + 0;
    a0 = s3 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E518C;
L_089E518C:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5194;
L_089E5194:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E519C;
L_089E519C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E51BC:;
    func_0884CDA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089E51C4;
L_089E51C4:;
    a0 = D_08C2B510 - (-19184);
    goto L_089E5150;
}

/* 089E51CC */
void func_089E51CC(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E51CC:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 420;
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089E5208; }
    goto L_089E51E8;
L_089E51E8:;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E51F0;
L_089E51F0:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    func_089E4F08(a0);
    goto L_089E51FC;
L_089E51FC:;
    a1 = s0 + 0;
    cnd_ = s1 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E521C; }
    goto L_089E5208;
L_089E5208:;
    goto L_089E520C;
L_089E520C:;
    sp = sp + 16;
    return;
L_089E521C:;
    v1 = LD32(s1);
    a2 = LD_U16(s0+18);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    ST16(v0+8, a2);
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5240;
L_089E5240:;
    v1 = LD32(s1);
    a0 = LD32(s1+84);
    v0 = LD32(v1-12);
    v0 = s1 + v0;
    cnd_ = a0 == 0;
    v0 = v0 + 88;
    if (cnd_) { goto L_089E5208; }
    goto L_089E5258;
L_089E5258:;
    v1 = LD32(v0+8);
    cnd_ = v1 == 0;
    if (cnd_) { goto L_089E520C; }
    goto L_089E5264;
L_089E5264:;
    v0 = LD32(v1+20);
    cnd_ = v0 != 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089E5284; }
    goto L_089E5270;
L_089E5270:;
    v0 = LD32(v1+4);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(v1+16); goto L_089E5284; }
    goto L_089E5280;
L_089E5280:;
    a1 = LD32(v1+24);
    goto L_089E5284;
L_089E5284:;
    a0 = LD32(s1+84);
    func_0884B8E0(a0, a1);
    goto L_089E528C;
L_089E528C:;
    goto L_089E520C;
}

/* 089E5294 */
rv_t func_089E5294(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5294:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-20);
    a0 = s0 + a0;
    { rv_t r_ = func_0885D1B8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E52C4;
L_089E52C4:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089E52F0; }
    goto L_089E52D0;
L_089E52D0:;
    s2 = 1;
    goto L_089E52D4;
L_089E52D4:;
    v0 = s2 + 0;
    goto L_089E52D8;
L_089E52D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E52F0:;
    { rv_t r_ = func_08A03F38(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E52F8;
L_089E52F8:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089E52D8; }
    goto L_089E5300;
L_089E5300:;
    s2 = 1;
    goto L_089E52D4;
}

/* 089E5308 */
rv_t func_089E5308(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5308:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-20);
    a0 = s0 + a0;
    { rv_t r_ = func_0885D104(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5328;
L_089E5328:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A03DFC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5330;
L_089E5330:;
    v0 = LD32(s0+84);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089E534C; }
    goto L_089E533C;
L_089E533C:;
    goto L_089E5340;
L_089E5340:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E534C:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5364;
L_089E5364:;
    a0 = LD32(s0+84);
    a1 = v0 + 0;
    func_0884BC34(a0, a1);
    goto L_089E5370;
L_089E5370:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E538C;
L_089E538C:;
    a0 = LD32(s0+84);
    a1 = v0 + 0;
    { rv_t r_ = func_0884BCC0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5398;
L_089E5398:;
    goto L_089E5340;
}

/* 089E53A0 */
rv_t func_089E53A0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E53A0:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E54C4; }
    goto L_089E53D4;
L_089E53D4:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF254 - (-3500);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3500));
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
    t0 = D_08C2B4E0 - (-19232);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B4F0 - (-19216);
    a3 = D_08C2B500 - (-19200);
    v1 = t0 - 19232;
    a1 = v0 - 19216;
    a2 = a3 - 19200;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B510 - (-19184);
    s0 = s3 - 19184;
    ST32(v1+8, FBITS(f5));
    a0 = 16;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-19216, FBITS(f5));
    v0 = 4;
    ST32(t0-19232, FBITS(f1));
    ST32(a3-19200, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E548C;
L_089E548C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-19184, v0);
    if (cnd_) { goto L_089E54B8; }
    goto L_089E549C;
L_089E549C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E54A4;
L_089E54A4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E54A4; }
    goto L_089E54B8;
L_089E54B8:;
    v0 = s3 - 19184;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E54C4;
L_089E54C4:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E54E8; }
    goto L_089E54D8;
L_089E54D8:;
    v0 = D_08C2B510 - (-19184);
    a0 = LD32(v0-19184);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E5500; }
    goto L_089E54E8;
L_089E54E8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E5500:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5508;
L_089E5508:;
    goto L_089E54E8;
}

/* 089E5510 */
rv_t func_089E5510(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5510:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E53A0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5524;
L_089E5524:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5530 */
rv_t func_089E5530(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5530:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E53A0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5544;
L_089E5544:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5550 */
void func_089E5550(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5550:;
    sp = sp - 16;
    s0 = D_08B05770 - (22384);
    s0 = s0 + 22384;
    s1 = a0 + 0;
    a0 = a0 + 160;
    func_08873E94(a0, a1);
    goto L_089E5574;
L_089E5574:;
    a2 = (u32)-1;
    a0 = s1 + 84;
    a1 = s0 + 28;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089E5584;
L_089E5584:;
    a0 = s1 + 188;
    a1 = s0 + 36;
    s0 = s0 + 4;
    func_08860F68(a0, a1, 0, 0);
    goto L_089E5594;
L_089E5594:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A063EC(a0, a1);
    goto L_089E55A0;
L_089E55A0:;
    v0 = D_08B054EC - (21740);
    v0 = v0 + 21740;
    v1 = v0 + 588;
    a0 = v0 + 248;
    a1 = v0 + 452;
    ST32(s1+188, v1);
    ST32(s1+84, a0);
    ST32(s1+160, a1);
    ST32(s1, v0);
    sp = sp + 16;
    return;
}

/* 089E55D8 */
rv_t func_089E55D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E55D8:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-20);
    a0 = s0 + a0;
    { rv_t r_ = func_08861204(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E55F8;
L_089E55F8:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A06744(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5600;
L_089E5600:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5610 */
rv_t func_089E5610(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5610:;
    sp = sp - 16;
    s2 = 0 + 0;
    s1 = a1 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-20);
    a0 = s0 + a0;
    { rv_t r_ = func_08861948(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5640;
L_089E5640:;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089E566C; }
    goto L_089E564C;
L_089E564C:;
    s2 = 1;
    goto L_089E5650;
L_089E5650:;
    v0 = s2 + 0;
    goto L_089E5654;
L_089E5654:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E566C:;
    { rv_t r_ = func_08A067A8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5674;
L_089E5674:;
    cnd_ = v0 == 0;
    v0 = s2 + 0;
    if (cnd_) { goto L_089E5654; }
    goto L_089E567C;
L_089E567C:;
    s2 = 1;
    goto L_089E5650;
}

/* 089E5684 */
rv_t func_089E5684(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5684:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 4;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E56A8;
L_089E56A8:;
    a1 = s1 + 0;
    v1 = LD32(s0);
    a0 = LD32(v1-20);
    a0 = s0 + a0;
    { rv_t r_ = func_088624A0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E56BC;
L_089E56BC:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A07314(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E56C8;
L_089E56C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E56DC */
rv_t func_089E56DC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E56DC:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5704;
L_089E5704:;
    v0 = 4;
    v1 = LD32(sp);
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0); goto L_089E585C; }
    goto L_089E5714;
L_089E5714:;
    v0 = 3;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0); goto L_089E574C; }
    goto L_089E5720;
L_089E5720:;
    v0 = LD32(s0);
    goto L_089E5724;
L_089E5724:;
    a1 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_0886426C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5734;
L_089E5734:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E574C:;
    a1 = s1 + 0;
    s2 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08863284(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5760;
L_089E5760:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A073E0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E576C;
L_089E576C:;
    v0 = LD32(s0);
    a0 = s1 + 0;
    a1 = LD32(v0-20);
    a1 = a1 + 4;
    a1 = s0 + a1;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5784;
L_089E5784:;
    v1 = LD32(s0);
    a0 = s1 + 0;
    a1 = LD32(v1-20);
    a1 = a1 + 16;
    a1 = s0 + a1;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E579C;
L_089E579C:;
    v1 = LD32(s0);
    a0 = s1 + 0;
    a1 = LD32(v1-20);
    a1 = a1 + 76;
    a1 = s0 + a1;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E57B4;
L_089E57B4:;
    v1 = LD32(s0);
    a0 = s1 + 0;
    a1 = LD32(v1-20);
    a1 = a1 + 28;
    a1 = s0 + a1;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E57CC;
L_089E57CC:;
    a0 = s1 + 0;
    a1 = sp + 4;
    ST32(sp+4, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E57DC;
L_089E57DC:;
    a0 = s2 << 2;
    v1 = LD32(s0);
    s2 = s2 + 1;
    a1 = (s32)s2 < 9;
    v0 = LD32(v1-20);
    v1 = LD32(sp+4);
    v0 = s0 + v0;
    a0 = a0 + v0;
    cnd_ = a1 != 0;
    ST32(a0+36, v1);
    if (cnd_) { goto L_089E57CC; }
    goto L_089E5804;
L_089E5804:;
    a0 = s1 + 0;
    a1 = sp + 8;
    ST32(sp+8, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5814;
L_089E5814:;
    v0 = LD32(sp+8);
    cnd_ = v0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089E5720; }
    goto L_089E5820;
L_089E5820:;
    v1 = LD32(s0);
    goto L_089E5824;
L_089E5824:;
    a2 = s2 << 2;
    a0 = s1 + 0;
    v0 = LD32(v1-20);
    s2 = s2 + 1;
    v0 = s0 + v0;
    a1 = LD32(v0+72);
    a1 = a1 + a2;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5844;
L_089E5844:;
    v1 = LD32(sp+8);
    v1 = s2 < v1;
    cnd_ = v1 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089E5824; }
    goto L_089E5854;
L_089E5854:;
    v0 = LD32(s0);
    goto L_089E5724;
L_089E585C:;
    a1 = s1 + 0;
    a0 = LD32(v0-20);
    a0 = s0 + a0;
    { rv_t r_ = func_0886233C(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E586C;
L_089E586C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A073E0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5878;
L_089E5878:;
    v0 = LD32(s0);
    goto L_089E5724;
}

/* 089E5880 */
rv_t func_089E5880(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089E5880:;
    v0 = 0 + 0;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5888 */
rv_t func_089E5888(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089E5888:;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5890 */
rv_t func_089E5890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089E5890:;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5898 */
rv_t func_089E5898(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5898:;
    sp = sp - 16;
    v0 = LD32(a0);
    v1 = LD32(v0-20);
    a0 = a0 + v1;
    { rv_t r_ = func_088625C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E58B0;
L_089E58B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E58BC */
rv_t func_089E58BC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
L_089E58BC:;
    a1 = a1 ^ 0xffff;
    a0 = a0 ^ 0x1;
    a1 = a1 < 0x1u;
    a0 = a0 < 0x1u;
    t0 = D_08C2B520 - (-19168);
    t1 = D_08C2B530 - (-19152);
    t2 = D_08C2B540 - (-19136);
    a1 = a1 & a0;
    v1 = t0 - 19168;
    a2 = t1 - 19152;
    cnd_ = a1 == 0;
    a3 = t2 - 19136;
    if (cnd_) { goto L_089E5974; }
    goto L_089E58EC;
L_089E58EC:;
    v0 = D_08AEF260 - (-3488);
    f4 = BITSF(LD32(v0-3488));
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
    ST32(t0-19168, FBITS(f2));
    ST32(t1-19152, FBITS(f6));
    ST32(a2+12, FBITS(f1));
    ST32(t2-19136, FBITS(f1));
    ST32(a3+8, FBITS(f1));
    ST32(a3+4, FBITS(f1));
    goto L_089E5974;
L_089E5974:;
    return (rv_t){ v0, v1, f0 };
}

/* 089E597C */
rv_t func_089E597C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E597C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E58BC(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5990;
L_089E5990:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E599C */
u64 func_089E599C(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E599C:;
    sp = sp - 64;
    s4 = a0 + 372;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s0 = D_08B05F10 - (24336);
    s0 = s0 + 24336;
    s5 = s1 + 108;
    fp = D_08C2B594 - (-19052);
    s7 = D_08B1BC7C - (-17284);
    s6 = D_08B1BC78 - (-17288);
    s3 = D_08C2B580 - (-19072);
    func_08873BF8(a0);
    goto L_089E59F4;
L_089E59F4:;
    a1 = s0 + 36;
    a0 = s5 + 0;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089E5A04;
L_089E5A04:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089E7128(a0, a1);
    goto L_089E5A10;
L_089E5A10:;
    v1 = D_08B05D78 - (23928);
    v1 = v1 + 23928;
    v0 = v1 + 272;
    ST32(s1+108, v0);
    v0 = 1;
    s2 = s3 - 19072;
    ST8(s1+105, v0);
    v0 = (u32)-32752;
    a2 = v1 + 384;
    ST32(s1, v1);
    a0 = 12;
    ST8(s1+104, 0);
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+372, a2);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5A68;
L_089E5A68:;
    a0 = LD32(s3-19072);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a2 = LD32(s0);
    v1 = v1 + 1;
    ST32(v0, s1);
    f12 = BITSF(0);
    a1 = 0xb1f60000u;
    ST32(v0+4, a2);
    a2 = 0xd8e70000u;
    a3 = 3;
    ST32(s0, v0);
    a0 = s1 + 196;
    a1 = a1 | 0x6e;
    ST8(v0+8, 0);
    v0 = 1;
    a2 = a2 | 0x8f42;
    ST32(s2+12, v1);
    ST8(s5+246, v0);
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5ABC;
L_089E5ABC:;
    a0 = 0x22af0000u;
    a1 = 0xf18d0000u;
    a2 = sp + 0;
    a0 = a0 | 0x2090;
    a1 = a1 | 0xd139;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5AD8;
L_089E5AD8:;
    a1 = 0x21b20000u;
    f12 = BITSF(LD32(s6-17288));
    a0 = LD32(sp);
    a1 = a1 | 0x7cf9;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5AEC;
L_089E5AEC:;
    f1 = f0 * f0;
    f12 = BITSF(LD32(s7-17284));
    a0 = LD32(sp);
    a1 = 0x9d880000u;
    v0 = D_08C2B590 - (-19056);
    a1 = a1 | 0x7fbf;
    ST32(v0-19056, FBITS(f1));
    ST32(s6-17288, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5B10;
L_089E5B10:;
    a1 = 0x58b50000u;
    a2 = LD32(fp-19052);
    a0 = LD32(sp);
    a1 = a1 | 0x5a72;
    ST32(s7-17284, FBITS(f0));
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5B28;
L_089E5B28:;
    ST32(fp-19052, v0);
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089E5B5C */
rv_t func_089E5B5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E5B5C:;
    v1 = D_08B05D78 - (23928);
    sp = sp - 32;
    v1 = v1 + 23928;
    v0 = v1 + 272;
    s1 = a0 + 0;
    a0 = v1 + 384;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+372, a0);
    a0 = D_08C2B580 - (-19072);
    a0 = a0 - 19072;
    ST32(s1+108, v0);
    s0 = D_08B05F10 - (24336);
    s0 = s0 + 24336;
    s3 = s1 + 372;
    func_08AC85BC(a0, a1, t1, t2, t3);
    goto L_089E5BB0;
L_089E5BB0:;
    s2 = s1 + 108;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E720C(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E5BC4;
L_089E5BC4:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E5BD0;
L_089E5BD0:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5BD8;
L_089E5BD8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5BF4 */
rv_t func_089E5BF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E5BF4:;
    v1 = D_08B05D78 - (23928);
    sp = sp - 32;
    v1 = v1 + 23928;
    v0 = v1 + 272;
    s1 = a0 + 0;
    a0 = v1 + 384;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+372, a0);
    a0 = D_08C2B580 - (-19072);
    a0 = a0 - 19072;
    ST32(s1+108, v0);
    s0 = D_08B05F10 - (24336);
    s0 = s0 + 24336;
    s3 = s1 + 372;
    func_08AC85BC(a0, a1, t1, t2, t3);
    goto L_089E5C48;
L_089E5C48:;
    s2 = s1 + 108;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E720C(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E5C5C;
L_089E5C5C:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E5C68;
L_089E5C68:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5C70;
L_089E5C70:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5C78;
L_089E5C78:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E5C94 */
rv_t func_089E5C94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5C94:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A03DFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5CA8;
L_089E5CA8:;
    ST8(s0+104, 0);
    v1 = LD32(s0);
    v0 = LD32(v1+172);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5CBC;
L_089E5CBC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+96); goto L_089E5D44; }
    goto L_089E5CC4;
L_089E5CC4:;
    v0 = LD_U8(s0+105);
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E5D34; }
    goto L_089E5CD0;
L_089E5CD0:;
    v0 = D_08B285A0 - (-31328);
    goto L_089E5CD4;
L_089E5CD4:;
    f2 = BITSF(LD32(s0+92));
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(0);
    a0 = s0 + 0;
    f2 = f2 - f0;
    fcc = FCMP(f2, f1, 14);
    cnd_ = fcc;
    ST32(s0+92, FBITS(f2));
    if (cnd_) { goto L_089E5D1C; }
    goto L_089E5CF8;
L_089E5CF8:;
    ST8(s0+96, 0);
    goto L_089E5CFC;
L_089E5CFC:;
    a0 = s0 + 0;
    func_089E6208(a0);
    goto L_089E5D04;
L_089E5D04:;
    a0 = s0 + 0;
    { rv_t r_ = func_089E5F24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5D0C;
L_089E5D0C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E5D1C:;
    func_089E5D78(a0, 0, 0, 0);
    goto L_089E5D24;
L_089E5D24:;
    a0 = s0 + 0;
    func_08AC84FC(a0);
    goto L_089E5D2C;
L_089E5D2C:;
    ST8(s0+96, 0);
    goto L_089E5CFC;
L_089E5D34:;
    ST8(s0+105, 0);
    func_08AC84FC(a0);
    goto L_089E5D3C;
L_089E5D3C:;
    v0 = D_08B285A0 - (-31328);
    goto L_089E5CD4;
L_089E5D44:;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E5D5C; }
    goto L_089E5D4C;
L_089E5D4C:;
    a0 = s0 + 0;
    func_08AC84FC(a0);
    goto L_089E5D54;
L_089E5D54:;
    goto L_089E5D04;
L_089E5D5C:;
    v0 = LD32(s0);
    v1 = LD32(v0+176);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5D6C;
L_089E5D6C:;
    v0 = 1;
    ST8(s0+96, v0);
    goto L_089E5D4C;
}

/* 089E5D78 */
void func_089E5D78(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E5D78:;
    sp = sp - 48;
    a2 = D_08C2A6C8 - (-22840);
    v1 = a2 - 22840;
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
    if (cnd_) { goto L_089E5E10; }
    goto L_089E5DC4;
L_089E5DC4:;
    a2 = LD32(a2-22840);
    a3 = a1 + 0;
    goto L_089E5DCC;
L_089E5DCC:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089E5E00; }
    goto L_089E5DE4;
L_089E5DE4:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_089E5E14; }
    goto L_089E5DF4;
L_089E5DF4:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089E5DE4; }
    goto L_089E5E00;
L_089E5E00:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089E5DCC; }
    goto L_089E5E10;
L_089E5E10:;
    s0 = LD32(sp+8);
    goto L_089E5E14;
L_089E5E14:;
    cnd_ = s0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089E5E58; }
    goto L_089E5E1C;
L_089E5E1C:;
    s2 = 1;
    s0 = LD32(s0);
    goto L_089E5E24;
L_089E5E24:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5E30;
L_089E5E30:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    v0 = func_089E6078(a0, a1);
    goto L_089E5E3C;
L_089E5E3C:;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E5F14; }
    goto L_089E5E48;
L_089E5E48:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_089E5E24; }
    goto L_089E5E54;
L_089E5E54:;
    s1 = LD32(sp);
    goto L_089E5E58;
L_089E5E58:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089E5EDC; }
    goto L_089E5E68;
L_089E5E68:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089E5EDC; }
    goto L_089E5E74;
L_089E5E74:;
    v0 = LD32(s1);
    goto L_089E5E78;
L_089E5E78:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089E5ECC; }
    goto L_089E5E8C;
L_089E5E8C:;
    v0 = LD_U8(s0+8);
    goto L_089E5E90;
L_089E5E90:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089E5F0C; }
    goto L_089E5E98;
L_089E5E98:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E5EFC; }
    goto L_089E5EA0;
L_089E5EA0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089E5EA8;
L_089E5EA8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E5EB4;
L_089E5EB4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089E5EC0;
L_089E5EC0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089E5E90; }
    goto L_089E5EC8;
L_089E5EC8:;
    v1 = LD32(s1+4);
    goto L_089E5ECC;
L_089E5ECC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E5E78; }
    goto L_089E5EDC;
L_089E5EDC:;
    sp = sp + 48;
    return;
L_089E5EFC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089E5EA8;
L_089E5F0C:;
    s0 = LD32(s0+4);
    goto L_089E5EC0;
L_089E5F14:;
    func_089E61CC(a1);
    goto L_089E5F1C;
L_089E5F1C:;
    ST8(s1+104, s2);
    goto L_089E5E48;
}

/* 089E5F24 */
rv_t func_089E5F24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E5F24:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+172);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5F40;
L_089E5F40:;
    a1 = 0x4e670000u;
    f12 = BITSF(0);
    a1 = a1 | 0x5f88;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a3 = 3;
    if (cnd_) { goto L_089E5F74; }
    goto L_089E5F58;
L_089E5F58:;
    v0 = LD_U8(s0+104);
    a1 = 0xb1f60000u;
    a2 = 0xf5590000u;
    f12 = BITSF(0);
    a1 = a1 | 0x6e;
    cnd_ = v0 == 0;
    a2 = a2 | 0x8698;
    if (cnd_) { goto L_089E5F98; }
    goto L_089E5F74;
L_089E5F74:;
    v0 = LD32(s0);
    goto L_089E5F78;
L_089E5F78:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E5F88;
L_089E5F88:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E5F98:;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a1 = 0xb1f60000u;
    a2 = 0xd8e70000u;
    a1 = a1 | 0x6e;
    a2 = a2 | 0x8f42;
    a3 = 3;
    goto L_089E5F78;
}

/* 089E5FB8 */
rv_t func_089E5FB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_089E5FB8:;
    sp = sp - 96;
    s1 = D_08C2B594 - (-19052);
    v0 = LD32(s1-19052);
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089E5FEC; }
    goto L_089E5FD8;
L_089E5FD8:;
    goto L_089E5FDC;
L_089E5FDC:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089E5FEC:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v0 = func_08875FE8(a0);
    goto L_089E5FFC;
L_089E5FFC:;
    v1 = LD32(s0);
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    a0 = LD32(v1-12);
    ST32(sp, FBITS(f0));
    a1 = 0x5b00000u;
    a0 = s0 + a0;
    v1 = LD32(a0);
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    a3 = sp + 16;
    a1 = a1 | 0x9274;
    ST32(sp+4, FBITS(f1));
    a2 = sp + 0;
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6044;
L_089E6044:;
    v0 = D_08AEF264 - (-3484);
    f0 = BITSF(LD32(v0-3484));
    a2 = LD32(s1-19052);
    a1 = sp + 64;
    a0 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6070;
L_089E6070:;
    goto L_089E5FDC;
}

/* 089E6078 */
u32 func_089E6078(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E6078:;
    sp = sp - 48;
    s2 = a0 + 0;
    s1 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089E60E0; }
    goto L_089E6098;
L_089E6098:;
    v0 = LD_U8(a1+4);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E60E4; }
    goto L_089E60A4;
L_089E60A4:;
    v0 = LD_U8(a1+68);
    cnd_ = v0 == 0;
    if (cnd_) {  goto L_089E60E8; }
    goto L_089E60B0;
L_089E60B0:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+80));
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E60E4; }
    goto L_089E60D4;
L_089E60D4:;
    v0 = LD_U8(a1+196);
    cnd_ = v0 == 0;
    a1 = 1;
    if (cnd_) { goto L_089E6100; }
    goto L_089E60E0;
L_089E60E0:;
    v1 = 0 + 0;
    goto L_089E60E4;
L_089E60E4:;
    goto L_089E60E8;
L_089E60E8:;
    v0 = v1 + 0;
    sp = sp + 48;
    return v0;
L_089E6100:;
    a0 = LD32(s1+236);
    v0 = func_0898582C(a0, a1);
    goto L_089E6108;
L_089E6108:;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E60E0; }
    goto L_089E6110;
L_089E6110:;
    v1 = LD32(s1);
    v0 = LD32(v1+244);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6120;
L_089E6120:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6140;
L_089E6140:;
    f0 = BITSF(LD32(v0+4));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f3 = f3 - f1;
    f2 = f2 - f0;
    v0 = D_08C2B590 - (-19056);
    f6 = BITSF(LD32(v0-19056));
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    a0 = s2 + 0;
    a1 = s1 + 0;
    fcc = FCMP(f0, f6, 14);
    ST32(sp, FBITS(f3));
    ST32(sp+4, FBITS(f2));
    cnd_ = !fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_089E60E0; }
    goto L_089E61B0;
L_089E61B0:;
    v0 = D_08B1BC78 - (-17288);
    f12 = BITSF(LD32(v0-17288));
    v0 = func_089E76D8(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E61BC;
L_089E61BC:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089E60E4; }
    goto L_089E61C4;
L_089E61C4:;
    v1 = 0 + 0;
    goto L_089E60E4;
}

/* 089E61CC */
void func_089E61CC(u32 a1)
{
    u32 v0 = 0, a0 = 0, a2 = 0, s0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E61CC:;
    sp = sp - 16;
    a2 = 1;
    s0 = a1 + 0;
    a0 = LD32(a1+236);
    a1 = 1;
    func_08985954(a0, a1, a2);
    goto L_089E61EC;
L_089E61EC:;
    v0 = LD32(s0+520);
    v0 = v0 | 0x80;
    ST32(s0+520, v0);
    sp = sp + 16;
    return;
}

/* 089E6208 */
void func_089E6208(u32 a0)
{
    u32 v0 = 0, a1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6208:;
    sp = sp - 16;
    s0 = a0 + 0;
    v0 = func_089E6540(a0);
    goto L_089E621C;
L_089E621C:;
    cnd_ = v0 == 0;
    a1 = v0 + 0;
    if (cnd_) { goto L_089E624C; }
    goto L_089E6224;
L_089E6224:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0+100));
    f0 = BITSF(0);
    a0 = s0 + 0;
    f1 = f1 - f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    ST32(s0+100, FBITS(f1));
    if (cnd_) { goto L_089E625C; }
    goto L_089E624C;
L_089E624C:;
    sp = sp + 16;
    return;
L_089E625C:;
    func_089E6274(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E6264;
L_089E6264:;
    v0 = D_08ADE9C8 - (-5688);
    f0 = BITSF(LD32(v0-5688));
    ST32(s0+100, FBITS(f0));
    goto L_089E624C;
}

/* 089E6274 */
void func_089E6274(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0];
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_089E6274:;
    sp = sp - 176;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089E64D0; }
    goto L_089E6294;
L_089E6294:;
    v0 = LD32(a0);
    f20 = BITSF(0);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E62B4;
L_089E62B4:;
    f7 = BITSF(LD32(v0+8));
    f10 = BITSF(LD32(v0+32));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+12));
    f3 = BITSF(LD32(v0+16));
    f4 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0+24));
    f6 = BITSF(LD32(v0+28));
    ST32(sp, FBITS(f0));
    f8 = BITSF(FBITS(f7) ^ 0x80000000u);
    f9 = BITSF(FBITS(f10) ^ 0x80000000u);
    ST32(sp+4, FBITS(f1));
    a0 = s0 + 0;
    ST32(sp+12, FBITS(f2));
    ST32(sp+16, FBITS(f3));
    ST32(sp+20, FBITS(f4));
    ST32(sp+24, FBITS(f5));
    ST32(sp+28, FBITS(f6));
    ST32(sp+8, FBITS(f7));
    ST32(sp+32, FBITS(f10));
    v1 = LD32(s0);
    ST32(sp+48, FBITS(f8));
    ST32(sp+56, FBITS(f9));
    v0 = LD32(v1+244);
    t_ = v0;
    ST32(sp+52, FBITS(f20));
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6320;
L_089E6320:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6340;
L_089E6340:;
    f7 = BITSF(LD32(sp+48));
    f6 = BITSF(LD32(sp+56));
    f4 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f3 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    v0 = FBITS(f7);
    {u32 a_=sp+(96);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    v0 = LD32(sp+52);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f6);
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f5 = f2 - f1;
    f4 = f3 - f4;
    fcc = FCMP(f0, f20, 14);
    f9 = BITSF(v0);
    {u32 a_=sp+(112);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f5);
    ST32(sp+64, FBITS(f5));
    {vr0=BITSF(v0);}
    v0 = 0 + 0;
    ST32(sp+72, FBITS(f4));
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    ST32(sp+68, FBITS(f20));
    {v[2]=BITSF(v0);}
    {float s0=vr0;float s1=v[1];float s2=v[2];float t0=vr0;float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    f8 = BITSF(v0);
    cnd_ = fcc;
    if (cnd_) { goto L_089E64D4; }
    goto L_089E63D0;
L_089E63D0:;
    fcc = FCMP(f0, f20, 14);
    cnd_ = fcc;
    if (cnd_) {  goto L_089E64D8; }
    goto L_089E63E0;
L_089E63E0:;
    f1 = BITSF(LD32(sp));
    f2 = BITSF(LD32(sp+24));
    ST32(sp+84, FBITS(f20));
    f1 = BITSF(FBITS(f1) ^ 0x80000000u);
    f2 = BITSF(FBITS(f2) ^ 0x80000000u);
    a0 = 1;
    f0 = f1 * f5;
    f3 = f2 * f4;
    ST32(sp+80, FBITS(f1));
    f0 = f0 + f3;
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    ST32(sp+88, FBITS(f2));
    if (cnd_) { goto L_089E641C; }
    goto L_089E6418;
L_089E6418:;
    a0 = 0 + 0;
    goto L_089E641C;
L_089E641C:;
    f1 = f9 * f8;
    f2 = f6 * f4;
    f0 = f7 * f5;
    v0 = D_08AEF268 - (-3480);
    f1 = sqrtf(f1);
    f4 = BITSF(LD32(v0-3480));
    f0 = f0 + f2;
    f0 = f0 / f1;
    fcc = FCMP(f4, f0, 12);
    cnd_ = !fcc;
    v0 = D_08AEF26C - (-3476);
    if (cnd_) { goto L_089E6524; }
    goto L_089E644C;
L_089E644C:;
    f0 = f4;
    goto L_089E6450;
L_089E6450:;
    v0 = FBITS(f0);
    {u32 a_=sp+(128);vr0=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {u32 a_=sp+(128);ST32(a_+0,FBITS(vr0));ST32(a_+4,FBITS(v[1]));ST32(a_+8,FBITS(v[2]));ST32(a_+12,FBITS(v[3]));}
    {float s0=vr0;float d0=(s0<-1?-1:(s0>1?1:s0));vr0=d0;}
    {v[4]=1.57079632679f;}
    {float s0=vr0;float d0=asinf(s0)*0.63661977236f;vr0=d0;}
    {float s0=vr0;float d0=1.0f-s0;vr0=d0;}
    {float s0=vr0;float t0=v[4];float d0=s0*t0;vr0=d0;}
    {v0=FBITS(vr0);}
    f12 = BITSF(v0);
    v0 = D_08AEF270 - (-3472);
    f0 = BITSF(LD32(v0-3472));
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) {  goto L_089E64D4; }
    goto L_089E6494;
L_089E6494:;
    v0 = D_08AEF274 - (-3468);
    f0 = BITSF(LD32(v0-3468));
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    v0 = D_08ADE9CC - (-5684);
    if (cnd_) { goto L_089E64E8; }
    goto L_089E64AC;
L_089E64AC:;
    f0 = BITSF(LD32(v0-5684));
    fcc = FCMP(f12, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f0; goto L_089E64C0; }
    goto L_089E64C0;
L_089E64C0:;
    cnd_ = a0 != 0;
    if (cnd_) { f12 = BITSF(FBITS(f12) ^ 0x80000000u); goto L_089E64C8; }
    goto L_089E64C8;
L_089E64C8:;
    a0 = s1 + 0;
    { u64 r_ = ({ v[0]=vr0;__auto_type vr_t_ = func_089E74CC(a0, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); vr0=v[0];vr_t_; }); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E64D0;
L_089E64D0:;
    goto L_089E64D4;
L_089E64D4:;
    goto L_089E64D8;
L_089E64D8:;
    sp = sp + 176;
    { v[0]=vr0;return; }
L_089E64E8:;
    fcc = FCMP(f0, f12, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089E64D4; }
    goto L_089E64F8;
L_089E64F8:;
    v1 = D_08AEF278 - (-3464);
    f0 = BITSF(LD32(v1-3464));
    v0 = D_08ADE9CC - (-5684);
    f1 = BITSF(LD32(v0-5684));
    f12 = f0 - f12;
    fcc = FCMP(f12, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f12 = f1; goto L_089E64C0; }
    goto L_089E651C;
L_089E651C:;
    goto L_089E64C0;
L_089E6524:;
    f1 = BITSF(LD32(v0-3476));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    if (cnd_) { f0 = f1; goto L_089E6450; }
    goto L_089E6538;
L_089E6538:;
    goto L_089E6450;
    v[0]=vr0;
}

/* 089E6540 */
u32 func_089E6540(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E6540:;
    sp = sp - 48;
    v1 = D_08C2A6C8 - (-22840);
    v1 = v1 - 22840;
    a1 = 1;
    s1 = a0 + 0;
    a0 = sp + 0;
    s2 = 0 + 0;
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    v0 = D_08C2B590 - (-19056);
    f20 = BITSF(LD32(v0-19056));
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6594;
L_089E6594:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    a0 = LD32(sp);
    if (cnd_) { goto L_089E65E0; }
    goto L_089E65A0;
L_089E65A0:;
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089E65D0; }
    goto L_089E65B0;
L_089E65B0:;
    v0 = s2 + 0;
    goto L_089E65B4;
L_089E65B4:;
    sp = sp + 48;
    return v0;
L_089E65D0:;
    { u64 r_ = func_08AC3F94(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E65D8;
L_089E65D8:;
    v0 = s2 + 0;
    goto L_089E65B4;
L_089E65E0:;
    s0 = LD32(v0);
    goto L_089E65E4;
L_089E65E4:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08AC3EF0(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E65F0;
L_089E65F0:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    f0 = func_089E7620(a0, a1);
    goto L_089E65FC;
L_089E65FC:;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089E6614; }
    goto L_089E660C;
L_089E660C:;
    f20 = f0;
    s2 = s0 + 0;
    goto L_089E6614;
L_089E6614:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089E65E4; }
    goto L_089E661C;
L_089E661C:;
    a0 = LD32(sp);
    goto L_089E65A0;
}

/* 089E6624 */
rv_t func_089E6624(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6624:;
    sp = sp - 16;
    { rv_t r_ = func_089E7450(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6634;
L_089E6634:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E6640 */
rv_t func_089E6640(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6640:;
    sp = sp - 16;
    v0 = 90;
    a2 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E6678; }
    goto L_089E6660;
L_089E6660:;
    { rv_t r_ = func_089E746C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6668;
L_089E6668:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E6678:;
    v0 = LD32(a1+24);
    a1 = a0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E6698; }
    goto L_089E6688;
L_089E6688:;
    f12 = BITSF(LD32(a2+8));
    a2 = LD_U8(s0+88);
    { rv_t r_ = func_089E7E80(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6694;
L_089E6694:;
    ST8(s0+88, 0);
    goto L_089E6698;
L_089E6698:;
    v0 = 1;
    goto L_089E6668;
}

/* 089E66A0 */
rv_t func_089E66A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E66A0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 392;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E66BC;
L_089E66BC:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_089E599C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E66C8;
L_089E66C8:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089E66E8; }
    goto L_089E66D4;
L_089E66D4:;
    goto L_089E66D8;
L_089E66D8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E66E8:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E66F8;
L_089E66F8:;
    goto L_089E66D8;
}

/* 089E6700 */
rv_t func_089E6700(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E6700:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E6828; }
    goto L_089E6738;
L_089E6738:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF27C - (-3460);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3460));
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
    t0 = D_08C2B550 - (-19120);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B560 - (-19104);
    a3 = D_08C2B570 - (-19088);
    v1 = t0 - 19120;
    a1 = v0 - 19104;
    a2 = a3 - 19088;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B580 - (-19072);
    s0 = s3 - 19072;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-19104, FBITS(f5));
    v0 = 8;
    ST32(t0-19120, FBITS(f1));
    ST32(a3-19088, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E67F0;
L_089E67F0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-19072, v0);
    if (cnd_) { goto L_089E681C; }
    goto L_089E6800;
L_089E6800:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E6808;
L_089E6808:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E6808; }
    goto L_089E681C;
L_089E681C:;
    v0 = s3 - 19072;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E6828;
L_089E6828:;
    a1 = s1 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    v0 = s4 < 0x1u;
    if (cnd_) { goto L_089E6854; }
    goto L_089E683C;
L_089E683C:;
    v0 = D_08B1BC78 - (-17288);
    f0 = BITSF(LD32(v0-17288));
    v0 = D_08C2B590 - (-19056);
    f0 = f0 * f0;
    ST32(v0-19056, FBITS(f0));
    v0 = s4 < 0x1u;
    goto L_089E6854;
L_089E6854:;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E6870; }
    goto L_089E6860;
L_089E6860:;
    v0 = D_08C2B580 - (-19072);
    a0 = LD32(v0-19072);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E688C; }
    goto L_089E6870;
L_089E6870:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E688C:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6894;
L_089E6894:;
    goto L_089E6870;
}

/* 089E689C */
rv_t func_089E689C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E689C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E6700(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E68B0;
L_089E68B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E68BC */
rv_t func_089E68BC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E68BC:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E6700(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E68D0;
L_089E68D0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E68DC */
u64 func_089E68DC(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E68DC:;
    sp = sp - 48;
    s4 = a0 + 376;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s0 = D_08B065E0 - (26080);
    s0 = s0 + 26080;
    s6 = s1 + 112;
    s5 = D_08C2B5D8 - (-18984);
    s3 = D_08C2B5C8 - (-19000);
    func_08873BF8(a0);
    goto L_089E6924;
L_089E6924:;
    a1 = s0 + 36;
    a0 = s6 + 0;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089E6934;
L_089E6934:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089E7128(a0, a1);
    goto L_089E6940;
L_089E6940:;
    v1 = D_08B06448 - (25672);
    v1 = v1 + 25672;
    v0 = v1 + 272;
    ST32(s1+112, v0);
    v0 = 1;
    s2 = s3 - 19000;
    ST8(s1+105, v0);
    v0 = (u32)-32753;
    a2 = v1 + 384;
    ST32(s1, v1);
    a0 = 12;
    ST8(s1+104, 0);
    ST8(s1+106, 0);
    ST32(s1+108, 0);
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+376, a2);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E69A0;
L_089E69A0:;
    a0 = LD32(s3-19000);
    s0 = s0 << 2;
    v1 = LD32(s2+12);
    s0 = s0 + a0;
    a2 = LD32(s0);
    v1 = v1 + 1;
    ST32(v0, s1);
    f12 = BITSF(0);
    a1 = 0xcace0000u;
    ST32(v0+4, a2);
    a3 = 2;
    a0 = s1 + 200;
    ST32(s0, v0);
    a1 = a1 | 0xf359;
    a2 = 0 + 0;
    ST8(v0+8, 0);
    v0 = 1;
    ST32(s2+12, v1);
    ST8(s6+246, v0);
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E69F0;
L_089E69F0:;
    a0 = 0x22af0000u;
    a1 = 0x36f20000u;
    a2 = sp + 0;
    a0 = a0 | 0x2090;
    a1 = a1 | 0x868b;
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6A0C;
L_089E6A0C:;
    a1 = 0x58b50000u;
    a2 = LD32(s5-18984);
    a0 = LD32(sp);
    a1 = a1 | 0x5a72;
    { u64 r_ = func_0896CEC0(a0, a1, a2, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6A20;
L_089E6A20:;
    ST32(s5-18984, v0);
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089E6A4C */
rv_t func_089E6A4C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E6A4C:;
    v1 = D_08B06448 - (25672);
    sp = sp - 32;
    v1 = v1 + 25672;
    v0 = v1 + 272;
    s1 = a0 + 0;
    a0 = v1 + 384;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+376, a0);
    a0 = D_08C2B5C8 - (-19000);
    a0 = a0 - 19000;
    ST32(s1+112, v0);
    s0 = D_08B065E0 - (26080);
    s0 = s0 + 26080;
    s3 = s1 + 376;
    func_08AC8798(a0, a1, t1, t2, t3);
    goto L_089E6AA0;
L_089E6AA0:;
    s2 = s1 + 112;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E720C(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E6AB4;
L_089E6AB4:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E6AC0;
L_089E6AC0:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6AC8;
L_089E6AC8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E6AE4 */
rv_t func_089E6AE4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E6AE4:;
    v1 = D_08B06448 - (25672);
    sp = sp - 32;
    v1 = v1 + 25672;
    v0 = v1 + 272;
    s1 = a0 + 0;
    a0 = v1 + 384;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+376, a0);
    a0 = D_08C2B5C8 - (-19000);
    a0 = a0 - 19000;
    ST32(s1+112, v0);
    s0 = D_08B065E0 - (26080);
    s0 = s0 + 26080;
    s3 = s1 + 376;
    func_08AC8798(a0, a1, t1, t2, t3);
    goto L_089E6B38;
L_089E6B38:;
    s2 = s1 + 112;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E720C(a0, a1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E6B4C;
L_089E6B4C:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E6B58;
L_089E6B58:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6B60;
L_089E6B60:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6B68;
L_089E6B68:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E6B84 */
rv_t func_089E6B84(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6B84:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A03DFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6B98;
L_089E6B98:;
    a0 = s0 + 0;
    func_089E6CFC(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E6BA0;
L_089E6BA0:;
    v1 = LD32(s0);
    v0 = LD32(v1+172);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6BB0;
L_089E6BB0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD_U8(s0+96); goto L_089E6C18; }
    goto L_089E6BB8;
L_089E6BB8:;
    v0 = LD_U8(s0+104);
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+96, 0); goto L_089E6BF0; }
    goto L_089E6BC4;
L_089E6BC4:;
    v0 = D_08B285A0 - (-31328);
    f2 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0+100));
    f0 = BITSF(0);
    a0 = s0 + 0;
    f1 = f1 - f2;
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    ST32(s0+100, FBITS(f1));
    if (cnd_) { goto L_089E6C00; }
    goto L_089E6BEC;
L_089E6BEC:;
    ST8(s0+96, 0);
    goto L_089E6BF0;
L_089E6BF0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E6C00:;
    { u64 r_ = func_089E6DA8(a0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6C08;
L_089E6C08:;
    v0 = D_08ADE9C8 - (-5688);
    f0 = BITSF(LD32(v0-5688));
    ST32(s0+100, FBITS(f0));
    goto L_089E6BEC;
L_089E6C18:;
    cnd_ = v0 != 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089E6BF0; }
    goto L_089E6C20;
L_089E6C20:;
    v0 = LD32(s0);
    v1 = LD32(v0+176);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6C30;
L_089E6C30:;
    v0 = 1;
    ST8(s0+96, v0);
    goto L_089E6BF0;
}

/* 089E6C3C */
rv_t func_089E6C3C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_089E6C3C:;
    sp = sp - 96;
    s1 = D_08C2B5D8 - (-18984);
    v0 = LD32(s1-18984);
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089E6C70; }
    goto L_089E6C5C;
L_089E6C5C:;
    goto L_089E6C60;
L_089E6C60:;
    sp = sp + 96;
    return (rv_t){ v0, v1, f0 };
L_089E6C70:;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v0 = func_08875FE8(a0);
    goto L_089E6C80;
L_089E6C80:;
    v1 = LD32(s0);
    f0 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+8));
    a0 = LD32(v1-12);
    ST32(sp, FBITS(f0));
    a1 = 0x5b00000u;
    a0 = s0 + a0;
    v1 = LD32(a0);
    f1 = BITSF(LD32(v0+4));
    ST32(sp+8, FBITS(f2));
    a3 = sp + 16;
    a1 = a1 | 0x9274;
    ST32(sp+4, FBITS(f1));
    a2 = sp + 0;
    t0 = 1;
    v0 = LD32(v1+60);
    t_ = v0;
    t1 = (u32)-1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6CC8;
L_089E6CC8:;
    v0 = D_08AEF288 - (-3448);
    f0 = BITSF(LD32(v0-3448));
    a2 = LD32(s1-18984);
    a1 = sp + 64;
    a0 = sp + 0;
    a3 = 0 + 0;
    t0 = 15;
    ST32(sp+64, FBITS(f0));
    ST32(sp+68, 0);
    ST32(sp+72, 0);
    { rv_t r_ = func_088E37E0(a0, a1, a2, a3, t0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6CF4;
L_089E6CF4:;
    goto L_089E6C60;
}

/* 089E6CFC */
void func_089E6CFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6CFC:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+172);
    t_ = v0;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6D18;
L_089E6D18:;
    a1 = 0x18290000u;
    f12 = BITSF(0);
    a1 = a1 | 0xe8b3;
    a2 = 0 + 0;
    cnd_ = v0 != 0;
    a3 = 3;
    if (cnd_) { goto L_089E6D4C; }
    goto L_089E6D30;
L_089E6D30:;
    v0 = LD_U8(s0+104);
    a1 = 0xcace0000u;
    a2 = 0x9b0d0000u;
    f12 = BITSF(0);
    a1 = a1 | 0xf359;
    cnd_ = v0 == 0;
    a2 = a2 | 0x8243;
    if (cnd_) { goto L_089E6D70; }
    goto L_089E6D4C;
L_089E6D4C:;
    v0 = LD32(s0);
    goto L_089E6D50;
L_089E6D50:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    a0 = a0 + 88;
    { rv_t r_ = func_088D0B5C(a0, a1, a2, a3, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6D60;
L_089E6D60:;
    sp = sp + 16;
    return;
L_089E6D70:;
    v0 = LD32(s0);
    f12 = BITSF(0);
    a1 = 0xcace0000u;
    a1 = a1 | 0xf359;
    a2 = 0 + 0;
    a3 = 2;
    goto L_089E6D50;
}

/* 089E6D8C */
rv_t func_089E6D8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6D8C:;
    sp = sp - 16;
    { rv_t r_ = func_089E7450(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6D9C;
L_089E6D9C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E6DA8 */
u64 func_089E6DA8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6DA8:;
    sp = sp - 16;
    v0 = LD_U8(a0+106);
    cnd_ = v0 == 0;
    a1 = a0 + 0;
    if (cnd_) { goto L_089E6E18; }
    goto L_089E6DBC;
L_089E6DBC:;
    f1 = BITSF(LD32(a0+108));
    f0 = BITSF(0);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    v0 = D_08AEF28C - (-3444);
    if (cnd_) { goto L_089E6E08; }
    goto L_089E6DD4;
L_089E6DD4:;
    v0 = D_08ADE9CC - (-5684);
    f12 = BITSF(LD32(v0-5684));
    v1 = LD_U8(a0+105);
    f0 = f1 - f12;
    f2 = BITSF(FBITS(f12) ^ 0x80000000u);
    cnd_ = v1 != 0;
    ST32(a0+108, FBITS(f0));
    if (cnd_) { goto L_089E6DF4; }
    goto L_089E6DF0;
L_089E6DF0:;
    f12 = f2;
    goto L_089E6DF4;
L_089E6DF4:;
    { u64 r_ = func_089E74CC(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6DFC;
L_089E6DFC:;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089E6E08:;
    f0 = BITSF(LD32(v0-3444));
    ST8(a0+106, 0);
    goto L_089E6E10;
L_089E6E10:;
    ST32(a1+108, FBITS(f0));
    goto L_089E6DFC;
L_089E6E18:;
    f1 = BITSF(LD32(a0+108));
    f0 = BITSF(0);
    a2 = D_08B25AC0 - (23232);
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a3 = a2 + 23232;
    if (cnd_) { goto L_089E6E44; }
    goto L_089E6E34;
L_089E6E34:;
    v0 = D_08ADE9CC - (-5684);
    f0 = BITSF(LD32(v0-5684));
    f0 = f1 - f0;
    goto L_089E6E10;
L_089E6E44:;
    v0 = 1;
    ST8(a0+106, v0);
    v0 = D_08AEF290 - (-3440);
    a0 = LD32(a2+23232);
    f3 = BITSF(LD32(v0-3440));
    v0 = D_08AEF294 - (-3436);
    v1 = (u32)((s32)a0 >> 16);
    a0 = a0 << 16;
    a0 = a0 + v1;
    v1 = LD32(a3+4);
    f2 = BITSF(LD32(v0-3436));
    a0 = a0 + v1;
    v0 = a0 >> 1;
    f0 = BITSF(v0);
    v0 = D_08AEF298 - (-3432);
    f2 = f2 - f3;
    f1 = (float)(s32)FBITS(f0);
    f0 = BITSF(LD32(v0-3432));
    v1 = v1 + a0;
    ST32(a3+4, v1);
    f1 = f1 * f0;
    ST32(a2+23232, a0);
    f1 = f1 * f2;
    v0 = LD_U8(a1+105);
    f1 = f1 + f3;
    v0 = v0 ^ 0x1;
    ST8(a1+105, v0);
    ST32(a1+108, FBITS(f1));
    goto L_089E6DFC;
}

/* 089E6EB8 */
rv_t func_089E6EB8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6EB8:;
    sp = sp - 16;
    v0 = 90;
    a2 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E6EF0; }
    goto L_089E6ED8;
L_089E6ED8:;
    { rv_t r_ = func_089E746C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6EE0;
L_089E6EE0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E6EF0:;
    v0 = LD32(a1+24);
    a1 = a0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E6F10; }
    goto L_089E6F00;
L_089E6F00:;
    f12 = BITSF(LD32(a2+8));
    a2 = LD_U8(s0+88);
    { rv_t r_ = func_089E8924(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6F0C;
L_089E6F0C:;
    ST8(s0+88, 0);
    goto L_089E6F10;
L_089E6F10:;
    v0 = 1;
    goto L_089E6EE0;
}

/* 089E6F18 */
rv_t func_089E6F18(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E6F18:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 396;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6F34;
L_089E6F34:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { u64 r_ = func_089E68DC(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E6F40;
L_089E6F40:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089E6F60; }
    goto L_089E6F4C;
L_089E6F4C:;
    goto L_089E6F50;
L_089E6F50:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E6F60:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E6F70;
L_089E6F70:;
    goto L_089E6F50;
}

/* 089E6F78 */
rv_t func_089E6F78(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E6F78:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E709C; }
    goto L_089E6FAC;
L_089E6FAC:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF29C - (-3428);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3428));
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
    t0 = D_08C2B598 - (-19048);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B5A8 - (-19032);
    a3 = D_08C2B5B8 - (-19016);
    v1 = t0 - 19048;
    a1 = v0 - 19032;
    a2 = a3 - 19016;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B5C8 - (-19000);
    s0 = s3 - 19000;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-19032, FBITS(f5));
    v0 = 8;
    ST32(t0-19048, FBITS(f1));
    ST32(a3-19016, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7064;
L_089E7064:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-19000, v0);
    if (cnd_) { goto L_089E7090; }
    goto L_089E7074;
L_089E7074:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E707C;
L_089E707C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E707C; }
    goto L_089E7090;
L_089E7090:;
    v0 = s3 - 19000;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E709C;
L_089E709C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E70C0; }
    goto L_089E70B0;
L_089E70B0:;
    v0 = D_08C2B5C8 - (-19000);
    a0 = LD32(v0-19000);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E70D8; }
    goto L_089E70C0;
L_089E70C0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E70D8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E70E0;
L_089E70E0:;
    goto L_089E70C0;
}

/* 089E70E8 */
rv_t func_089E70E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E70E8:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E6F78(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E70FC;
L_089E70FC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7108 */
rv_t func_089E7108(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7108:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E6F78(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E711C;
L_089E711C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7128 */
void func_089E7128(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7128:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = D_08C2B60C - (-18932);
    s2 = s3 - 18932;
    s1 = a0 + 0;
    func_08A03594(a0, a1);
    goto L_089E7158;
L_089E7158:;
    a1 = LD32(s0);
    a0 = 12;
    ST32(s1, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s0+16);
    v0 = s1 + v0;
    ST32(v0, v1);
    a1 = LD32(s1);
    v1 = LD32(s0+20);
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    ST32(v0, v1);
    v0 = 1;
    a1 = LD32(s1);
    ST8(s1+88, v0);
    ST32(s1+84, 0);
    ST32(s1+92, 0);
    ST8(s1+96, 0);
    ST8(s1+97, 0);
    ST32(s1+100, 0);
    v0 = LD32(a1-16);
    v1 = LD32(s2+4);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    v1 = v1 - 1;
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E71C4;
L_089E71C4:;
    a0 = LD32(s3-18932);
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

/* 089E720C */
void func_089E720C(u32 a0, u32 a1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E720C:;
    sp = sp - 16;
    t0 = D_08C2B60C - (-18932);
    s2 = t0 - 18932;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = LD32(a1);
    ST32(a0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s1+16);
    v0 = a0 + v0;
    ST32(v0, v1);
    a2 = LD32(a0);
    a3 = LD32(s1+20);
    a0 = LD32(s2+4);
    v0 = LD32(a2-16);
    a1 = LD32(t0-18932);
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
    if (cnd_) { goto L_089E72AC; }
    goto L_089E7290;
L_089E7290:;
    v0 = LD32(a0);
    goto L_089E7294;
L_089E7294:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_089E72D0; }
    goto L_089E729C;
L_089E729C:;
    t1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089E7294; }
    goto L_089E72AC;
L_089E72AC:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    func_08A0394C(a0, a1, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089E72B8;
L_089E72B8:;
    sp = sp + 16;
    return;
L_089E72D0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089E72E0; }
    goto L_089E72D8;
L_089E72D8:;
    ST8(a0+8, v0);
    goto L_089E72AC;
L_089E72E0:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089E7308; }
    goto L_089E72E8;
L_089E72E8:;
    v0 = LD32(a0+4);
    ST32(t1+4, v0);
    goto L_089E72F0;
L_089E72F0:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E72F8;
L_089E72F8:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089E72AC;
L_089E7308:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_089E72F0;
}

/* 089E7318 */
rv_t func_089E7318(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7318:;
    v1 = D_08B06B18 - (27416);
    sp = sp - 32;
    v1 = v1 + 27416;
    v0 = v1 + 272;
    s1 = a0 + 0;
    a0 = v1 + 384;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+368, a0);
    a0 = D_08C2B60C - (-18932);
    a0 = a0 - 18932;
    ST32(s1+104, v0);
    s0 = D_08B06CB0 - (27824);
    s0 = s0 + 27824;
    s3 = s1 + 368;
    func_08AC8950(a0, a1, t1, t2, t3);
    goto L_089E736C;
L_089E736C:;
    s2 = s1 + 104;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E7380;
L_089E7380:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E738C;
L_089E738C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E7394;
L_089E7394:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E73B0 */
rv_t func_089E73B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E73B0:;
    v1 = D_08B06B18 - (27416);
    sp = sp - 32;
    v1 = v1 + 27416;
    v0 = v1 + 272;
    s1 = a0 + 0;
    a0 = v1 + 384;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+368, a0);
    a0 = D_08C2B60C - (-18932);
    a0 = a0 - 18932;
    ST32(s1+104, v0);
    s0 = D_08B06CB0 - (27824);
    s0 = s0 + 27824;
    s3 = s1 + 368;
    func_08AC8950(a0, a1, t1, t2, t3);
    goto L_089E7404;
L_089E7404:;
    s2 = s1 + 104;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E7418;
L_089E7418:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E7424;
L_089E7424:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E742C;
L_089E742C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E7434;
L_089E7434:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7450 */
rv_t func_089E7450(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7450:;
    sp = sp - 16;
    { rv_t r_ = func_08A03E78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7460;
L_089E7460:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E746C */
rv_t func_089E746C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E746C:;
    sp = sp - 16;
    { rv_t r_ = func_08A03F38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E747C;
L_089E747C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7488 */
rv_t func_089E7488(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7488:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A049C0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E749C;
L_089E749C:;
    a1 = 32;
    v0 = LD32(s0+40);
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E74BC; }
    goto L_089E74AC;
L_089E74AC:;
    goto L_089E74B0;
L_089E74B0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E74BC:;
    v0 = func_088BB56C(a0, a1);
    goto L_089E74C4;
L_089E74C4:;
    goto L_089E74B0;
}

/* 089E74CC */
u64 func_089E74CC(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_089E74CC:;
    sp = sp - 80;
    f2 = BITSF(0);
    s2 = a0 + 0;
    f0 = BITSF(LD32(a0+84));
    f0 = f0 + f12;
    fcc = FCMP(f0, f2, 12);
    cnd_ = !fcc;
    ST32(a0+84, FBITS(f0));
    if (cnd_) { goto L_089E7520; }
    goto L_089E7500;
L_089E7500:;
    v0 = D_08AEF2A8 - (-3416);
    f1 = BITSF(LD32(v0-3416));
    goto L_089E7508;
L_089E7508:;
    f0 = BITSF(LD32(s2+84));
    f0 = f0 + f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    ST32(s2+84, FBITS(f0));
    if (cnd_) { goto L_089E7508; }
    goto L_089E7520;
L_089E7520:;
    v0 = D_08AEF2A8 - (-3416);
    f0 = BITSF(LD32(s2+84));
    f2 = BITSF(LD32(v0-3416));
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    f1 = f0;
    if (cnd_) { goto L_089E7554; }
    goto L_089E753C;
L_089E753C:;
    f0 = f1 - f2;
    fcc = FCMP(f2, f0, 12);
    cnd_ = fcc;
    f1 = f0;
    if (cnd_) { goto L_089E753C; }
    goto L_089E7550;
L_089E7550:;
    ST32(s2+84, FBITS(f0));
    goto L_089E7554;
L_089E7554:;
    {v[4]=0.63661977236f;}
    v0 = FBITS(f0);
    {v[0]=BITSF(v0);}
    {float s0=v[0];float t0=v[4];float d0=s0*t0;v[0]=d0;}
    v0 = LD32(s2);
    v1 = FBITS(f0);
    {v[8]=BITSF(v1);}
    a1 = LD32(v0-12);
    {float s0=v[0];float d0=sinf(s0*1.57079632679f);v[0]=d0;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    {float s0=v[8];float t0=v[4];float d0=s0*t0;v[4]=d0;}
    f3 = BITSF(v0);
    f1 = BITSF(FBITS(f0) ^ 0x80000000u);
    v0 = D_08AEF2AC - (-3412);
    f0 = BITSF(LD32(v0-3412));
    ST32(sp+24, FBITS(f3));
    {float s0=v[4];float d0=cosf(s0*1.57079632679f);v[4]=d0;}
    {v1=FBITS(v[4]);}
    ST32(sp+8, FBITS(f1));
    a1 = s2 + a1;
    s1 = sp + 48;
    ST32(sp+16, FBITS(f0));
    ST32(sp+32, v1);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+12, 0);
    ST32(sp+20, 0);
    ST32(sp+28, 0);
    v1 = LD32(a1);
    v0 = LD32(v1+12);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E75D8;
L_089E75D8:;
    a0 = s1 + 0;
    a1 = sp + 0;
    s0 = v0 + 0;
    { rv_t r_ = func_08AA146C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E75E8;
L_089E75E8:;
    v1 = LD32(s2);
    v0 = D_08B285B4 - (-31308);
    f12 = BITSF(LD32(v0-31308));
    a0 = LD32(v1-12);
    a1 = s0 + 0;
    a2 = s1 + 0;
    a0 = s2 + a0;
    { rv_t r_ = func_08876124(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7608;
L_089E7608:;
    sp = sp + 80;
    return (u64)v0 | ((u64)v1 << 32);
}

/* 089E7620 */
float func_089E7620(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E7620:;
    sp = sp - 48;
    s0 = a0 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1+244);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7644;
L_089E7644:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v0 = LD32(a1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7664;
L_089E7664:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f4 = f4 - f5;
    f3 = f3 - f1;
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
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f4));
    sp = sp + 48;
    return f0;
}

/* 089E76D0 */
rv_t func_089E76D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089E76D0:;
    return (rv_t){ v0, v1, f0 };
}

/* 089E76D8 */
u32 func_089E76D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v;
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_089E76D8:;
    sp = sp - 176;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089E7708; }
    goto L_089E76F8;
L_089E76F8:;
    a0 = a1 + 0;
    { rv_t r_ = func_08A05610(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7700;
L_089E7700:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089E7724; }
    goto L_089E7708;
L_089E7708:;
    v0 = 0 + 0;
    goto L_089E770C;
L_089E770C:;
    sp = sp + 176;
    return v0;
L_089E7724:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A05610(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E772C;
L_089E772C:;
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089E770C; }
    goto L_089E7734;
L_089E7734:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A05610(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E773C;
L_089E773C:;
    a0 = v0 + 0;
    v0 = func_088BAA98(a0);
    goto L_089E7744;
L_089E7744:;
    f3 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0));
    f0 = BITSF(LD32(v0+16));
    v1 = D_08AEF2B0 - (-3408);
    f1 = f1 + f2;
    f0 = f0 + f3;
    f20 = BITSF(LD32(v1-3408));
    f2 = BITSF(LD32(v0+8));
    a0 = s0 + 0;
    f1 = f1 * f20;
    f0 = f0 * f20;
    ST32(sp+4, FBITS(f2));
    ST32(sp, FBITS(f1));
    ST32(sp+8, FBITS(f0));
    { rv_t r_ = func_08A05610(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7784;
L_089E7784:;
    a0 = v0 + 0;
    v0 = func_088BAA98(a0);
    goto L_089E778C;
L_089E778C:;
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+16));
    f7 = BITSF(LD32(v0+8));
    f5 = f5 + f0;
    f6 = f6 + f1;
    f4 = BITSF(LD32(sp));
    f3 = BITSF(LD32(sp+4));
    f5 = f5 * f20;
    f6 = f6 * f20;
    f2 = BITSF(LD32(sp+8));
    f3 = f7 - f3;
    f4 = f5 - f4;
    f2 = f6 - f2;
    {u32 a_=sp+(128);v[12]=BITSF(LD32(a_+0));v[13]=BITSF(LD32(a_+4));v[14]=BITSF(LD32(a_+8));v[15]=BITSF(LD32(a_+12));}
    f12 = BITSF(0);
    v0 = FBITS(f4);
    {v[12]=BITSF(v0);}
    v0 = FBITS(f3);
    {v[13]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[14]=BITSF(v0);}
    {float s0=v[12];float s1=v[13];float s2=v[14];float t0=v[12];float t1=v[13];float t2=v[14];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f5));
    fcc = FCMP(f0, f12, 2);
    ST32(sp+20, FBITS(f7));
    ST32(sp+24, FBITS(f6));
    ST32(sp+32, FBITS(f4));
    ST32(sp+36, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+40, FBITS(f2));
    if (cnd_) { goto L_089E7858; }
    goto L_089E7814;
L_089E7814:;
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
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_089E7858;
L_089E7858:;
    v1 = LD32(s1);
    s0 = sp + 64;
    a2 = sp + 32;
    v0 = LD32(v1-16);
    a1 = sp + 0;
    a0 = s0 + 0;
    v0 = s1 + v0;
    a3 = LD32(v0+4);
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089E787C;
L_089E787C:;
    a0 = s0 + 0;
    { rv_t r_ = func_08834E84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7884;
L_089E7884:;
    v1 = LD_U8(v0+32);
    v0 = v1 < 0x1u;
    goto L_089E770C;
}

/* 089E7890 */
rv_t func_089E7890(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7890:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E79B4; }
    goto L_089E78C4;
L_089E78C4:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF2B4 - (-3404);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3404));
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
    t0 = D_08C2B5DC - (-18980);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B5EC - (-18964);
    a3 = D_08C2B5FC - (-18948);
    v1 = t0 - 18980;
    a1 = v0 - 18964;
    a2 = a3 - 18948;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B60C - (-18932);
    s0 = s3 - 18932;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18964, FBITS(f5));
    v0 = 8;
    ST32(t0-18980, FBITS(f1));
    ST32(a3-18948, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E797C;
L_089E797C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18932, v0);
    if (cnd_) { goto L_089E79A8; }
    goto L_089E798C;
L_089E798C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E7994;
L_089E7994:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E7994; }
    goto L_089E79A8;
L_089E79A8:;
    v0 = s3 - 18932;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E79B4;
L_089E79B4:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E79D8; }
    goto L_089E79C8;
L_089E79C8:;
    v0 = D_08C2B60C - (-18932);
    a0 = LD32(v0-18932);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E79F0; }
    goto L_089E79D8;
L_089E79D8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E79F0:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E79F8;
L_089E79F8:;
    goto L_089E79D8;
}

/* 089E7A00 */
rv_t func_089E7A00(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7A00:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E7890(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7A14;
L_089E7A14:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7A20 */
rv_t func_089E7A20(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7A20:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E7890(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7A34;
L_089E7A34:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7A40 */
void func_089E7A40(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7A40:;
    sp = sp - 32;
    s5 = a0 + 172;
    s1 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08B07248 - (29256);
    s0 = s0 + 29256;
    s2 = s1 + 96;
    s4 = D_08C2B6CC - (-18740);
    func_08873E94(a0, a1);
    goto L_089E7A80;
L_089E7A80:;
    a1 = s0 + 36;
    a0 = s2 + 0;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089E7A94;
L_089E7A94:;
    a2 = 999;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089E8BE4(a0, a1);
    goto L_089E7AA4;
L_089E7AA4:;
    v1 = D_08B07030 - (28720);
    v1 = v1 + 28720;
    v0 = v1 + 260;
    ST32(s1+96, v0);
    a1 = v1 + 464;
    v0 = 1;
    ST32(s1+172, a1);
    a0 = s2 + 0;
    s3 = s4 - 18740;
    ST32(s1, v1);
    ST8(s1+94, v0);
    v0 = LD32(s2+64);
    v0 = v0 | 0x1;
    ST32(s2+64, v0);
    f12 = BITSF(LD32(s1+8));
    func_0886422C(a0, f12);
    goto L_089E7AE4;
L_089E7AE4:;
    v0 = (u32)-32752;
    ST16(s5+8, v0);
    a0 = 12;
    a1 = LD32(s1);
    v1 = LD32(s3+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7B10;
L_089E7B10:;
    a0 = LD32(s4-18740);
    s0 = s0 << 2;
    v1 = LD32(s3+12);
    s0 = s0 + a0;
    a2 = LD32(s0);
    v1 = v1 + 1;
    ST32(s3+12, v1);
    a1 = 0xb1f60000u;
    v1 = 0xd8e70000u;
    ST32(v0+4, a2);
    a1 = a1 | 0x6e;
    v1 = v1 | 0x8f42;
    ST32(s0, v0);
    ST32(v0, s1);
    ST8(v0+8, 0);
    v0 = LD32(s2+8);
    ST32(s2+16, a1);
    v0 = v0 | 0x400;
    ST32(s2+20, v1);
    ST32(s2+8, v0);
    v1 = LD32(s1+96);
    v0 = LD32(v1+120);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7B70;
L_089E7B70:;
    sp = sp + 32;
    return;
}

/* 089E7B94 */
rv_t func_089E7B94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7B94:;
    v1 = D_08B07030 - (28720);
    sp = sp - 32;
    v1 = v1 + 28720;
    v0 = v1 + 260;
    s1 = a0 + 0;
    a0 = v1 + 464;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+172, a0);
    a0 = D_08C2B6CC - (-18740);
    a0 = a0 - 18740;
    ST32(s1+96, v0);
    s0 = D_08B07248 - (29256);
    s0 = s0 + 29256;
    s3 = s1 + 172;
    func_08AC8BE4(a0, a1, t1, t2, t3);
    goto L_089E7BE8;
L_089E7BE8:;
    s2 = s1 + 96;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E8D1C(a0, a1, 0, 0);
    goto L_089E7BFC;
L_089E7BFC:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E7C08;
L_089E7C08:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E7C10;
L_089E7C10:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7C2C */
rv_t func_089E7C2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7C2C:;
    v1 = D_08B07030 - (28720);
    sp = sp - 32;
    v1 = v1 + 28720;
    v0 = v1 + 260;
    s1 = a0 + 0;
    a0 = v1 + 464;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+172, a0);
    a0 = D_08C2B6CC - (-18740);
    a0 = a0 - 18740;
    ST32(s1+96, v0);
    s0 = D_08B07248 - (29256);
    s0 = s0 + 29256;
    s3 = s1 + 172;
    func_08AC8BE4(a0, a1, t1, t2, t3);
    goto L_089E7C80;
L_089E7C80:;
    s2 = s1 + 96;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E8D1C(a0, a1, 0, 0);
    goto L_089E7C94;
L_089E7C94:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E7CA0;
L_089E7CA0:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E7CA8;
L_089E7CA8:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E7CB0;
L_089E7CB0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7CCC */
rv_t func_089E7CCC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7CCC:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E8F60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7CE0;
L_089E7CE0:;
    ST8(s0+94, 0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7CF4 */
rv_t func_089E7CF4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089E7CF4:;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7CFC */
rv_t func_089E7CFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7CFC:;
    a2 = a1 + 0;
    a0 = 0x22af0000u;
    a1 = 0xf18d0000u;
    sp = sp - 16;
    a0 = a0 | 0x2090;
    a1 = a1 | 0xd139;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E7D1C;
L_089E7D1C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7D28 */
rv_t func_089E7D28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7D28:;
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
    goto L_089E7D5C;
L_089E7D5C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089E7D94; }
    goto L_089E7D64;
L_089E7D64:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E7D7C; }
    goto L_089E7D74;
L_089E7D74:;
    func_089E7E34(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E7D7C;
L_089E7D7C:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7D94;
L_089E7D94:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7DA8 */
rv_t func_089E7DA8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7DA8:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 2;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7DCC;
L_089E7DCC:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E93A4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7DD8;
L_089E7DD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7DEC */
rv_t func_089E7DEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7DEC:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7E14;
L_089E7E14:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E93E8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7E20;
L_089E7E20:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7E34 */
void func_089E7E34(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7E34:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_08A08244(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089E7E50;
L_089E7E50:;
    v1 = LD_U8(s1+94);
    v0 = LD32(s0+92);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s0+92, v0);
    v1 = LD_U8(s1+92);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(s0+92, v0);
    sp = sp + 16;
    return;
}

/* 089E7E80 */
rv_t func_089E7E80(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7E80:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    s0 = a0 + 0;
    s1 = a1 + 0;
    { rv_t r_ = func_08A083F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7EA0;
L_089E7EA0:;
    v0 = LD32(s0+92);
    v0 = v0 & 0x1;
    ST8(s1+105, v0);
    v1 = LD32(s0+92);
    v1 = (v1 >> 1) & 0x1;
    ST8(s1+97, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E7ECC */
void func_089E7ECC(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E7ECC:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E7EF0;
L_089E7EF0:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 20;
    t0 = 96;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089E7F0C;
L_089E7F0C:;
    a0 = s2 + 0;
    func_089E7F34(a0);
    goto L_089E7F14;
L_089E7F14:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089E7F1C;
L_089E7F1C:;
    sp = sp + 16;
    return;
}

/* 089E7F34 */
void func_089E7F34(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_089E7F34:;
    sp = sp - 112;
    s0 = a0 + 0;
    func_08A08688(a0);
    goto L_089E7F48;
L_089E7F48:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 92;
    t0 = 32;
    t1 = 2;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_089E7F6C;
L_089E7F6C:;
    sp = sp + 112;
    return;
}

/* 089E7F7C */
rv_t func_089E7F7C(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E7F7C:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E80A0; }
    goto L_089E7FB0;
L_089E7FB0:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF2C8 - (-3384);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3384));
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
    t0 = D_08C2B61C - (-18916);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B62C - (-18900);
    a3 = D_08C2B63C - (-18884);
    v1 = t0 - 18916;
    a1 = v0 - 18900;
    a2 = a3 - 18884;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B6CC - (-18740);
    s0 = s3 - 18740;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18900, FBITS(f5));
    v0 = 8;
    ST32(t0-18916, FBITS(f1));
    ST32(a3-18884, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8068;
L_089E8068:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18740, v0);
    if (cnd_) { goto L_089E8094; }
    goto L_089E8078;
L_089E8078:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E8080;
L_089E8080:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E8080; }
    goto L_089E8094;
L_089E8094:;
    v0 = s3 - 18740;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E80A0;
L_089E80A0:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E80C4; }
    goto L_089E80B4;
L_089E80B4:;
    v0 = D_08C2B6CC - (-18740);
    a0 = LD32(v0-18740);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E80DC; }
    goto L_089E80C4;
L_089E80C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E80DC:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E80E4;
L_089E80E4:;
    goto L_089E80C4;
}

/* 089E80EC */
rv_t func_089E80EC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E80EC:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E7F7C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8100;
L_089E8100:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E810C */
rv_t func_089E810C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E810C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E7F7C(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8120;
L_089E8120:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E812C */
void func_089E812C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E812C:;
    sp = sp - 64;
    s6 = a0 + 172;
    s1 = a0 + 0;
    a0 = s6 + 0;
    s0 = D_08B07A80 - (31360);
    s0 = s0 + 31360;
    s3 = s1 + 96;
    s7 = D_08B1BC80 - (-17280);
    s5 = D_08B1BC84 - (-17276);
    s4 = D_08C2B78C - (-18548);
    func_08873E94(a0, a1);
    goto L_089E817C;
L_089E817C:;
    a1 = s0 + 36;
    a0 = s3 + 0;
    a2 = (u32)-1;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089E8190;
L_089E8190:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    a2 = 999;
    func_089E8BE4(a0, a1);
    goto L_089E81A0;
L_089E81A0:;
    v1 = D_08B07868 - (30824);
    v1 = v1 + 30824;
    v0 = v1 + 260;
    ST32(s1+96, v0);
    v0 = (u32)-32753;
    s2 = s4 - 18548;
    ST32(s1, v1);
    v1 = v1 + 464;
    a0 = 12;
    ST8(s1+94, 0);
    ST16(s6+8, v0);
    s6 = D_08B1BC88 - (-17272);
    a2 = LD32(s1);
    a1 = LD32(s2+4);
    ST32(s1+172, v1);
    a1 = a1 - 1;
    v0 = LD32(a2-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & a1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E81F4;
L_089E81F4:;
    v1 = LD32(s4-18548);
    s0 = s0 << 2;
    a3 = LD32(s2+12);
    s0 = s0 + v1;
    a2 = LD32(s0);
    ST32(v0, s1);
    a0 = 0x22af0000u;
    a1 = 0x36f20000u;
    ST32(v0+4, a2);
    a3 = a3 + 1;
    a2 = sp + 0;
    ST32(s0, v0);
    a0 = a0 | 0x2090;
    a1 = a1 | 0x868b;
    ST8(v0+8, 0);
    ST32(s2+12, a3);
    ST32(sp, 0);
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E823C;
L_089E823C:;
    a1 = 0x9d880000u;
    f12 = BITSF(LD32(s5-17276));
    a0 = LD32(sp);
    a1 = a1 | 0x7fbf;
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8250;
L_089E8250:;
    f12 = BITSF(LD32(s7-17280));
    a0 = LD32(sp);
    a1 = 0x21b20000u;
    a1 = a1 | 0x7cf9;
    ST32(s5-17276, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8268;
L_089E8268:;
    f1 = f0 * f0;
    f12 = BITSF(LD32(s6-17272));
    a0 = LD32(sp);
    a1 = 0xe9140000u;
    a1 = a1 | 0x9bb4;
    v0 = D_08C2B79C - (-18532);
    ST32(v0-18532, FBITS(f1));
    ST32(s7-17280, FBITS(f0));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E828C;
L_089E828C:;
    v1 = 0xcace0000u;
    f1 = BITSF(LD32(s5-17276));
    ST32(s6-17272, FBITS(f0));
    v1 = v1 | 0xf359;
    ST32(s1+84, FBITS(f1));
    v0 = LD32(s3+8);
    ST32(s3+16, v1);
    v0 = v0 | 0x400;
    ST32(s3+8, v0);
    ST32(s3+20, 0);
    v0 = LD32(s1+96);
    v1 = LD32(v0+120);
    t_ = v1;
    a0 = s3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E82C4;
L_089E82C4:;
    sp = sp + 64;
    return;
}

/* 089E82F0 */
rv_t func_089E82F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E82F0:;
    v1 = D_08B07868 - (30824);
    sp = sp - 32;
    v1 = v1 + 30824;
    v0 = v1 + 260;
    s1 = a0 + 0;
    a0 = v1 + 464;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+172, a0);
    a0 = D_08C2B78C - (-18548);
    a0 = a0 - 18548;
    ST32(s1+96, v0);
    s0 = D_08B07A80 - (31360);
    s0 = s0 + 31360;
    s3 = s1 + 172;
    func_08AC8E2C(a0, a1, t1, t2, t3);
    goto L_089E8344;
L_089E8344:;
    s2 = s1 + 96;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E8D1C(a0, a1, 0, 0);
    goto L_089E8358;
L_089E8358:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E8364;
L_089E8364:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E836C;
L_089E836C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8388 */
rv_t func_089E8388(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E8388:;
    v1 = D_08B07868 - (30824);
    sp = sp - 32;
    v1 = v1 + 30824;
    v0 = v1 + 260;
    s1 = a0 + 0;
    a0 = v1 + 464;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+172, a0);
    a0 = D_08C2B78C - (-18548);
    a0 = a0 - 18548;
    ST32(s1+96, v0);
    s0 = D_08B07A80 - (31360);
    s0 = s0 + 31360;
    s3 = s1 + 172;
    func_08AC8E2C(a0, a1, t1, t2, t3);
    goto L_089E83DC;
L_089E83DC:;
    s2 = s1 + 96;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 36;
    func_089E8D1C(a0, a1, 0, 0);
    goto L_089E83F0;
L_089E83F0:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E83FC;
L_089E83FC:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E8404;
L_089E8404:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E840C;
L_089E840C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8428 */
rv_t func_089E8428(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8428:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_089E8F60(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E843C;
L_089E843C:;
    v1 = LD32(s0);
    v0 = LD32(v1+112);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E844C;
L_089E844C:;
    cnd_ = v0 != 0;
    v0 = D_08B1BC84 - (-17276);
    if (cnd_) { goto L_089E84A0; }
    goto L_089E8454;
L_089E8454:;
    v0 = D_08B285A0 - (-31328);
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s0+84));
    a0 = s0 + 0;
    f1 = f1 - f0;
    f0 = BITSF(0);
    fcc = FCMP(f1, f0, 14);
    cnd_ = fcc;
    ST32(s0+84, FBITS(f1));
    if (cnd_) { goto L_089E848C; }
    goto L_089E847C;
L_089E847C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E848C:;
    v0 = LD32(s0);
    v1 = LD32(v0+116);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E849C;
L_089E849C:;
    v0 = D_08B1BC84 - (-17276);
    goto L_089E84A0;
L_089E84A0:;
    f0 = BITSF(LD32(v0-17276));
    ST32(s0+84, FBITS(f0));
    goto L_089E847C;
}

/* 089E84AC */
rv_t func_089E84AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E84AC:;
    sp = sp - 48;
    ST8(a0+94, 0);
    a2 = D_08C2A880 - (-22400);
    v0 = a2 - 22400;
    s1 = a0 + 0;
    a0 = sp + 0;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    ST32(sp+8, 0);
    cnd_ = a1 == 0;
    ST32(sp+4, 0);
    if (cnd_) { goto L_089E8548; }
    goto L_089E84FC;
L_089E84FC:;
    a2 = LD32(a2-22400);
    a3 = a1 + 0;
    goto L_089E8504;
L_089E8504:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089E8538; }
    goto L_089E851C;
L_089E851C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    s0 = LD32(sp+8);
    if (cnd_) { goto L_089E854C; }
    goto L_089E852C;
L_089E852C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089E851C; }
    goto L_089E8538;
L_089E8538:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089E8504; }
    goto L_089E8548;
L_089E8548:;
    s0 = LD32(sp+8);
    goto L_089E854C;
L_089E854C:;
    cnd_ = s0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089E8594; }
    goto L_089E8554;
L_089E8554:;
    s3 = D_08B1BC88 - (-17272);
    s2 = 1;
    s0 = LD32(s0);
    goto L_089E8560;
L_089E8560:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E856C;
L_089E856C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E86E8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8578;
L_089E8578:;
    a1 = s0 + 0;
    cnd_ = v0 != 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E8650; }
    goto L_089E8584;
L_089E8584:;
    s0 = LD32(sp+8);
    cnd_ = s0 != 0;
    if (cnd_) { s0 = LD32(s0); goto L_089E8560; }
    goto L_089E8590;
L_089E8590:;
    s1 = LD32(sp);
    goto L_089E8594;
L_089E8594:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089E8618; }
    goto L_089E85A4;
L_089E85A4:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089E8618; }
    goto L_089E85B0;
L_089E85B0:;
    v0 = LD32(s1);
    goto L_089E85B4;
L_089E85B4:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089E8608; }
    goto L_089E85C8;
L_089E85C8:;
    v0 = LD_U8(s0+8);
    goto L_089E85CC;
L_089E85CC:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089E8648; }
    goto L_089E85D4;
L_089E85D4:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E8638; }
    goto L_089E85DC;
L_089E85DC:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089E85E4;
L_089E85E4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E85F0;
L_089E85F0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089E85FC;
L_089E85FC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089E85CC; }
    goto L_089E8604;
L_089E8604:;
    v1 = LD32(s1+4);
    goto L_089E8608;
L_089E8608:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E85B4; }
    goto L_089E8618;
L_089E8618:;
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
L_089E8638:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089E85E4;
L_089E8648:;
    s0 = LD32(s0+4);
    goto L_089E85FC;
L_089E8650:;
    f12 = BITSF(LD32(s3-17272));
    func_089E868C(a1, f12);
    goto L_089E8658;
L_089E8658:;
    ST8(s1+94, s2);
    goto L_089E8584;
}

/* 089E8660 */
rv_t func_089E8660(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8660:;
    a2 = a1 + 0;
    a0 = 0x22af0000u;
    a1 = 0x36f20000u;
    sp = sp - 16;
    a0 = a0 | 0x2090;
    a1 = a1 | 0x868b;
    { u64 r_ = func_0881C3E0(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E8680;
L_089E8680:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E868C */
void func_089E868C(u32 a1, float f12)
{
    u32 v0 = 0, a0 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E868C:;
    sp = sp - 16;
    v0 = LD32(a1);
    f1 = BITSF(LD32(a1+8));
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    f0 = BITSF(LD32(a0+40));
    f12 = f0 + f12;
    fcc = FCMP(f12, f1, 14);
    cnd_ = fcc;
    s0 = a1 + 0;
    if (cnd_) { goto L_089E86C4; }
    goto L_089E86C0;
L_089E86C0:;
    f12 = f1;
    goto L_089E86C4;
L_089E86C4:;
    func_0886422C(a0, f12);
    goto L_089E86CC;
L_089E86CC:;
    v0 = LD32(s0+200);
    v0 = v0 | 0x10;
    ST32(s0+200, v0);
    sp = sp + 16;
    return;
}

/* 089E86E8 */
rv_t func_089E86E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f12 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E86E8:;
    sp = sp - 16;
    s1 = a0 + 0;
    s0 = a1 + 0;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089E8740; }
    goto L_089E8704;
L_089E8704:;
    v0 = LD_U8(a1+5);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089E8744; }
    goto L_089E8710;
L_089E8710:;
    v0 = LD_U8(a1+64);
    cnd_ = v0 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089E8744; }
    goto L_089E871C;
L_089E871C:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = a1 + 0;
    if (cnd_) { goto L_089E8758; }
    goto L_089E8740;
L_089E8740:;
    v0 = 0 + 0;
    goto L_089E8744;
L_089E8744:;
    goto L_089E8748;
L_089E8748:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E8758:;
    v0 = LD32(v1+168);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, 0.0f, 0.0f, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8764;
L_089E8764:;
    cnd_ = v0 != 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089E8744; }
    goto L_089E876C;
L_089E876C:;
    v1 = LD32(s0);
    f1 = BITSF(LD32(s0+8));
    a0 = s1 + 0;
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    a1 = s0 + 0;
    if (cnd_) { goto L_089E8740; }
    goto L_089E8794;
L_089E8794:;
    { rv_t r_ = func_089E9148(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E879C;
L_089E879C:;
    v0 = D_08C2B79C - (-18532);
    f1 = BITSF(LD32(v0-18532));
    a0 = s1 + 0;
    fcc = FCMP(f0, f1, 14);
    cnd_ = !fcc;
    a1 = s0 + 0;
    if (cnd_) { goto L_089E8740; }
    goto L_089E87B8;
L_089E87B8:;
    v0 = D_08B1BC80 - (-17280);
    f12 = BITSF(LD32(v0-17280));
    { rv_t r_ = func_089E9204(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E87C4;
L_089E87C4:;
    goto L_089E8748;
}

/* 089E87CC */
rv_t func_089E87CC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E87CC:;
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
    goto L_089E8800;
L_089E8800:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089E8838; }
    goto L_089E8808;
L_089E8808:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E8820; }
    goto L_089E8818;
L_089E8818:;
    func_089E88D8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E8820;
L_089E8820:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8838;
L_089E8838:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E884C */
rv_t func_089E884C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E884C:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8870;
L_089E8870:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E93A4(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E887C;
L_089E887C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8890 */
rv_t func_089E8890(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E8890:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E88B8;
L_089E88B8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_089E93E8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E88C4;
L_089E88C4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E88D8 */
void func_089E88D8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E88D8:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_08A08244(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089E88F4;
L_089E88F4:;
    v1 = LD_U8(s1+94);
    v0 = LD32(s0+92);
    v0 = (v0 & ~(0x1u << 0)) | ((v1 & 0x1) << 0);
    ST32(s0+92, v0);
    v1 = LD_U8(s1+92);
    v0 = (v0 & ~(0x1u << 1)) | ((v1 & 0x1) << 1);
    ST32(s0+92, v0);
    sp = sp + 16;
    return;
}

/* 089E8924 */
rv_t func_089E8924(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8924:;
    sp = sp - 16;
    a2 = a2 & 0xff;
    v0 = LD32(a0+92);
    v0 = v0 & 0x1;
    ST8(a1+104, v0);
    v0 = LD32(a0+92);
    v0 = (v0 >> 1) & 0x1;
    ST8(a1+97, v0);
    { rv_t r_ = func_08A083F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E894C;
L_089E894C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8958 */
void func_089E8958(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8958:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E897C;
L_089E897C:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 20;
    t0 = 96;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089E8998;
L_089E8998:;
    a0 = s2 + 0;
    func_089E89C0(a0);
    goto L_089E89A0;
L_089E89A0:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089E89A8;
L_089E89A8:;
    sp = sp + 16;
    return;
}

/* 089E89C0 */
void func_089E89C0(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_089E89C0:;
    sp = sp - 112;
    s0 = a0 + 0;
    func_08A08688(a0);
    goto L_089E89D4;
L_089E89D4:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 16;
    a3 = 92;
    t0 = 32;
    t1 = 2;
    t2 = 0 + 0;
    t3 = 1;
    func_088A631C(a0, a2, a3, t0, t1, t2, t3);
    goto L_089E89F8;
L_089E89F8:;
    sp = sp + 112;
    return;
}

/* 089E8A08 */
rv_t func_089E8A08(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E8A08:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E8B30; }
    goto L_089E8A40;
L_089E8A40:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF2CC - (-3380);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3380));
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
    t0 = D_08C2B6DC - (-18724);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B6EC - (-18708);
    a3 = D_08C2B6FC - (-18692);
    v1 = t0 - 18724;
    a1 = v0 - 18708;
    a2 = a3 - 18692;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B78C - (-18548);
    s0 = s3 - 18548;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18708, FBITS(f5));
    v0 = 8;
    ST32(t0-18724, FBITS(f1));
    ST32(a3-18692, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8AF8;
L_089E8AF8:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18548, v0);
    if (cnd_) { goto L_089E8B24; }
    goto L_089E8B08;
L_089E8B08:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E8B10;
L_089E8B10:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E8B10; }
    goto L_089E8B24;
L_089E8B24:;
    v0 = s3 - 18548;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E8B30;
L_089E8B30:;
    a1 = s1 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    v0 = s4 < 0x1u;
    if (cnd_) { goto L_089E8B5C; }
    goto L_089E8B44;
L_089E8B44:;
    v0 = D_08B1BC80 - (-17280);
    f0 = BITSF(LD32(v0-17280));
    v0 = D_08C2B79C - (-18532);
    f0 = f0 * f0;
    ST32(v0-18532, FBITS(f0));
    v0 = s4 < 0x1u;
    goto L_089E8B5C;
L_089E8B5C:;
    v0 = a1 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E8B78; }
    goto L_089E8B68;
L_089E8B68:;
    v0 = D_08C2B78C - (-18548);
    a0 = LD32(v0-18548);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E8B94; }
    goto L_089E8B78;
L_089E8B78:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E8B94:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E8B9C;
L_089E8B9C:;
    goto L_089E8B78;
}

/* 089E8BA4 */
rv_t func_089E8BA4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8BA4:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E8A08(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8BB8;
L_089E8BB8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8BC4 */
rv_t func_089E8BC4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8BC4:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E8A08(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8BD8;
L_089E8BD8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8BE4 */
void func_089E8BE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E8BE4:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = a1 + 4;
    s3 = D_08C2B850 - (-18352);
    s2 = s3 - 18352;
    s1 = a0 + 0;
    func_08A063EC(a0, a1);
    goto L_089E8C14;
L_089E8C14:;
    a0 = LD32(s0);
    ST32(s1, a0);
    v0 = LD32(a0-12);
    v1 = LD32(s0+16);
    v0 = s1 + v0;
    ST32(v0, v1);
    a0 = LD32(s1);
    v1 = LD32(s0+20);
    v0 = LD32(a0-16);
    v0 = s1 + v0;
    ST32(v0, v1);
    v0 = 1;
    a0 = LD32(s1);
    ST8(s1+93, v0);
    v1 = LD32(a0-12);
    ST32(s1+84, 0);
    v1 = s1 + v1;
    ST32(s1+88, 0);
    ST8(s1+92, 0);
    v0 = LD32(v1+64);
    v0 = v0 | 0x1;
    ST32(v1+64, v0);
    a1 = LD32(s1);
    f12 = BITSF(LD32(s1+8));
    a0 = LD32(a1-12);
    a0 = s1 + a0;
    func_0886422C(a0, f12);
    goto L_089E8C80;
L_089E8C80:;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    a0 = 12;
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8CA4;
L_089E8CA4:;
    a0 = LD32(s3-18352);
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
    v0 = LD32(s1);
    v1 = LD32(v0-12);
    v1 = s1 + v1;
    v0 = LD32(v1+8);
    v0 = v0 | 0x2000;
    ST32(v1+8, v0);
    a0 = LD32(s1);
    v1 = LD32(a0-12);
    s1 = s1 + v1;
    v0 = LD32(s1+8);
    v0 = v0 | 0x200;
    ST32(s1+8, v0);
    sp = sp + 32;
    return;
}

/* 089E8D1C */
void func_089E8D1C(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8D1C:;
    sp = sp - 16;
    t0 = D_08C2B850 - (-18352);
    s2 = t0 - 18352;
    s1 = a1 + 0;
    s0 = a0 + 0;
    a1 = LD32(a1);
    ST32(a0, a1);
    v0 = LD32(a1-12);
    v1 = LD32(s1+16);
    v0 = a0 + v0;
    ST32(v0, v1);
    a2 = LD32(a0);
    a3 = LD32(s1+20);
    a0 = LD32(s2+4);
    v0 = LD32(a2-16);
    a1 = LD32(t0-18352);
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
    if (cnd_) { goto L_089E8DBC; }
    goto L_089E8DA0;
L_089E8DA0:;
    v0 = LD32(a0);
    goto L_089E8DA4;
L_089E8DA4:;
    cnd_ = v0 == s0;
    if (cnd_) { v0 = LD32(s2+8); goto L_089E8DE0; }
    goto L_089E8DAC;
L_089E8DAC:;
    t1 = a0 + 0;
    a0 = LD32(a0+4);
    cnd_ = a0 != 0;
    if (cnd_) { v0 = LD32(a0); goto L_089E8DA4; }
    goto L_089E8DBC;
L_089E8DBC:;
    a1 = s1 + 4;
    a0 = s0 + 0;
    func_08A0652C(a0, a1, t2, t3);
    goto L_089E8DC8;
L_089E8DC8:;
    sp = sp + 16;
    return;
L_089E8DE0:;
    cnd_ = v0 == 0;
    v0 = 1;
    if (cnd_) { goto L_089E8DF0; }
    goto L_089E8DE8;
L_089E8DE8:;
    ST8(a0+8, v0);
    goto L_089E8DBC;
L_089E8DF0:;
    cnd_ = t1 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089E8E18; }
    goto L_089E8DF8;
L_089E8DF8:;
    v0 = LD32(a0+4);
    ST32(t1+4, v0);
    goto L_089E8E00;
L_089E8E00:;
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E8E08;
L_089E8E08:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089E8DBC;
L_089E8E18:;
    v1 = LD32(a0+4);
    v0 = a2 + v0;
    ST32(v0, v1);
    goto L_089E8E00;
}

/* 089E8E28 */
rv_t func_089E8E28(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E8E28:;
    v1 = D_08B080A0 - (-32608);
    sp = sp - 32;
    v1 = v1 - 32608;
    v0 = v1 + 260;
    s1 = a0 + 0;
    a0 = v1 + 464;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+172, a0);
    a0 = D_08C2B850 - (-18352);
    a0 = a0 - 18352;
    ST32(s1+96, v0);
    s0 = D_08B082B8 - (-32072);
    s0 = s0 - 32072;
    s3 = s1 + 172;
    func_08AC9098(a0, a1, t1, t2, t3);
    goto L_089E8E7C;
L_089E8E7C:;
    s2 = s1 + 96;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089E8E90;
L_089E8E90:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E8E9C;
L_089E8E9C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E8EA4;
L_089E8EA4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8EC0 */
rv_t func_089E8EC0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E8EC0:;
    v1 = D_08B080A0 - (-32608);
    sp = sp - 32;
    v1 = v1 - 32608;
    v0 = v1 + 260;
    s1 = a0 + 0;
    a0 = v1 + 464;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+172, a0);
    a0 = D_08C2B850 - (-18352);
    a0 = a0 - 18352;
    ST32(s1+96, v0);
    s0 = D_08B082B8 - (-32072);
    s0 = s0 - 32072;
    s3 = s1 + 172;
    func_08AC9098(a0, a1, t1, t2, t3);
    goto L_089E8F14;
L_089E8F14:;
    s2 = s1 + 96;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089E8F28;
L_089E8F28:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E8F34;
L_089E8F34:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E8F3C;
L_089E8F3C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E8F44;
L_089E8F44:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E8F60 */
rv_t func_089E8F60(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8F60:;
    sp = sp - 16;
    v0 = LD_U8(a0+93);
    cnd_ = v0 != 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089E8FEC; }
    goto L_089E8F78;
L_089E8F78:;
    v1 = LD32(s0);
    v0 = LD32(v1+112);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8F88;
L_089E8F88:;
    cnd_ = v0 != 0;
    v0 = LD_U8(s0+92);
    if (cnd_) { goto L_089E8FB0; }
    goto L_089E8F90;
L_089E8F90:;
    cnd_ = v0 != 0;
    if (cnd_) { ST8(s0+92, 0); goto L_089E8F98; }
    goto L_089E8F98;
L_089E8F98:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A06744(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E8FA0;
L_089E8FA0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E8FB0:;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(s0); goto L_089E8FC4; }
    goto L_089E8FB8;
L_089E8FB8:;
    v0 = 1;
    ST8(s0+92, v0);
    goto L_089E8F98;
L_089E8FC4:;
    f1 = BITSF(LD32(s0+8));
    v0 = LD32(v1-12);
    v0 = s0 + v0;
    f0 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    if (cnd_) { goto L_089E8F98; }
    goto L_089E8FE4;
L_089E8FE4:;
    ST8(s0+92, 0);
    goto L_089E8F98;
L_089E8FEC:;
    func_089E90D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089E8FF4;
L_089E8FF4:;
    ST8(s0+93, 0);
    goto L_089E8F78;
}

/* 089E8FFC */
rv_t func_089E8FFC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E8FFC:;
    sp = sp - 16;
    v0 = 0x8062;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a3 = a0 + 0;
    if (cnd_) { goto L_089E9028; }
    goto L_089E9014;
L_089E9014:;
    { rv_t r_ = func_08A067A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E901C;
L_089E901C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E9028:;
    a1 = LD32(a1+24);
    f12 = BITSF(0);
    cnd_ = a1 == 0;
    v0 = 1;
    if (cnd_) { goto L_089E901C; }
    goto L_089E9038;
L_089E9038:;
    v1 = LD32(a0);
    f0 = BITSF(LD32(a1+8));
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    f1 = BITSF(LD32(v0+40));
    f1 = f1 + f0;
    fcc = FCMP(f1, f12, 12);
    cnd_ = fcc;
    f2 = BITSF(LD32(a0+8));
    if (cnd_) { goto L_089E9074; }
    goto L_089E9060;
L_089E9060:;
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    f12 = f2;
    if (cnd_) { goto L_089E9074; }
    goto L_089E9070;
L_089E9070:;
    f12 = f1;
    goto L_089E9074;
L_089E9074:;
    a0 = LD32(v1-12);
    a0 = a3 + a0;
    func_0886422C(a0, f12);
    goto L_089E9080;
L_089E9080:;
    v0 = 1;
    goto L_089E901C;
}

/* 089E9088 */
rv_t func_089E9088(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E9088:;
    sp = sp - 16;
    s0 = a0 + 0;
    { rv_t r_ = func_08A07B5C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E909C;
L_089E909C:;
    a1 = 32;
    v1 = LD32(s0);
    v0 = LD32(v1-12);
    s0 = s0 + v0;
    v1 = LD32(s0+4);
    cnd_ = v1 != 0;
    a0 = v1 + 0;
    if (cnd_) { goto L_089E90C8; }
    goto L_089E90B8;
L_089E90B8:;
    goto L_089E90BC;
L_089E90BC:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E90C8:;
    v0 = func_088BB56C(a0, a1);
    goto L_089E90D0;
L_089E90D0:;
    goto L_089E90BC;
}

/* 089E90D8 */
void func_089E90D8(u32 a0, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E90D8:;
    sp = sp - 32;
    a1 = sp + 0;
    v0 = LD32(a0);
    ST32(sp, 0);
    v1 = LD32(v0+120);
    t_ = v1;
    s0 = a0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E90FC;
L_089E90FC:;
    v0 = LD32(sp);
    a1 = 0xb7350000u;
    a1 = a1 | 0x25c;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E9120; }
    goto L_089E9110;
L_089E9110:;
    goto L_089E9114;
L_089E9114:;
    sp = sp + 32;
    return;
L_089E9120:;
    f12 = BITSF(LD32(s0+8));
    { rv_t r_ = func_0896CDCC(a0, a1, 0, 0, 0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9128;
L_089E9128:;
    v0 = LD32(s0);
    ST32(s0+8, FBITS(f0));
    f12 = f0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_0886422C(a0, f12);
    goto L_089E9140;
L_089E9140:;
    goto L_089E9114;
}

/* 089E9148 */
rv_t func_089E9148(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089E9148:;
    sp = sp - 48;
    s0 = a0 + 0;
    v1 = LD32(a1);
    v0 = LD32(v1-12);
    a1 = a1 + v0;
    v1 = LD32(a1);
    v0 = LD32(v1+20);
    t_ = v0;
    a0 = a1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9178;
L_089E9178:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v0 = LD32(a1+20);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9198;
L_089E9198:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f4 = BITSF(LD32(s1+8));
    f2 = BITSF(LD32(s1));
    f3 = BITSF(LD32(s1+4));
    f1 = BITSF(LD32(v0+4));
    f2 = f2 - f0;
    f4 = f4 - f5;
    f3 = f3 - f1;
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
    ST32(sp+4, FBITS(f3));
    ST32(sp+8, FBITS(f4));
    sp = sp + 48;
    return (rv_t){ v0, v1, f0 };
}

/* 089E9204 */
rv_t func_089E9204(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f12 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr8 = v[8], vr9 = v[9], vr10 = v[10];
    u8 stack_[176] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 176);
L_089E9204:;
    sp = sp - 176;
    s2 = sp + 64;
    s1 = a0 + 0;
    s0 = a1 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1-12);
    v0 = a0 + v0;
    a0 = LD32(v0+4);
    v0 = func_088BAA98(a0);
    goto L_089E923C;
L_089E923C:;
    f3 = BITSF(LD32(v0+20));
    f2 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+16));
    a0 = LD32(s0);
    f0 = f0 + f2;
    f1 = f1 + f3;
    v1 = D_08AEF2D8 - (-3368);
    f20 = BITSF(LD32(v1-3368));
    a1 = LD32(a0-12);
    f2 = BITSF(LD32(v0+8));
    f0 = f0 * f20;
    s0 = s0 + a1;
    f1 = f1 * f20;
    a0 = LD32(s0+4);
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f1));
    v0 = func_088BAA98(a0);
    goto L_089E9288;
L_089E9288:;
    {u32 a_=sp+(128);vr8=BITSF(LD32(a_+0));vr9=BITSF(LD32(a_+4));vr10=BITSF(LD32(a_+8));v[11]=BITSF(LD32(a_+12));}
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+20));
    f5 = BITSF(LD32(v0));
    f6 = BITSF(LD32(v0+16));
    f7 = BITSF(LD32(v0+8));
    f5 = f5 + f0;
    f6 = f6 + f1;
    f3 = BITSF(LD32(sp));
    f4 = BITSF(LD32(sp+4));
    f5 = f5 * f20;
    f6 = f6 * f20;
    f2 = BITSF(LD32(sp+8));
    f4 = f7 - f4;
    f3 = f5 - f3;
    f2 = f6 - f2;
    f12 = BITSF(0);
    a2 = sp + 32;
    v0 = FBITS(f3);
    {vr8=BITSF(v0);}
    v0 = FBITS(f4);
    {vr9=BITSF(v0);}
    v0 = FBITS(f2);
    {vr10=BITSF(v0);}
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr8;float t1=vr9;float t2=vr10;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    a1 = sp + 0;
    a0 = s2 + 0;
    fcc = FCMP(f0, f12, 2);
    ST32(sp+32, FBITS(f3));
    {float s0=vr0;float d0=sqrtf(s0);v[12]=d0;}
    ST32(sp+36, FBITS(f4));
    ST32(sp+40, FBITS(f2));
    ST32(sp+16, FBITS(f5));
    ST32(sp+20, FBITS(f7));
    cnd_ = fcc;
    ST32(sp+24, FBITS(f6));
    if (cnd_) { goto L_089E9364; }
    goto L_089E9320;
L_089E9320:;
    {float s0=vr0;float s1=v[1];float s2=v[2];float s3=v[3];v[4]=(float)1;v[5]=(float)1;v[6]=(float)1;v[7]=(float)1;}
    {float s0=v[4];float t0=v[12];float d0=s0/t0;vr0=d0;}
    {v0=FBITS(v[12]);}
    f4 = BITSF(v0);
    f12 = f4;
    {float s0=vr8;float s1=vr9;float s2=vr10;float t0=vr0;vr0=s0*t0;v[1]=s1*t0;v[2]=s2*t0;}
    {v0=FBITS(v[2]);}
    f3 = BITSF(v0);
    {v0=FBITS(vr0);}
    f2 = BITSF(v0);
    ST32(sp+56, FBITS(f3));
    {v0=FBITS(v[1]);}
    ST32(sp+48, FBITS(f2));
    ST32(sp+52, v0);
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v0);
    ST32(sp+40, FBITS(f3));
    goto L_089E9364;
L_089E9364:;
    v1 = LD32(s1);
    v0 = LD32(v1-16);
    v0 = s1 + v0;
    a3 = LD32(v0+4);
    func_08834FC0(a0, a1, a2, a3, f12);
    goto L_089E9378;
L_089E9378:;
    a0 = s2 + 0;
    { rv_t r_ = ({ v[0]=vr0;v[8]=vr8;v[9]=vr9;v[10]=vr10;__auto_type vr_t_ = func_08834E84(a0); vr0=v[0];vr8=v[8];vr9=v[9];vr10=v[10];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9380;
L_089E9380:;
    v0 = LD_U8(v0+32);
    v0 = v0 < 0x1u;
    sp = sp + 176;
    { v[0]=vr0;v[8]=vr8;v[9]=vr9;v[10]=vr10;return (rv_t){ v0, v1, f0 }; }
    v[0]=vr0;v[8]=vr8;v[9]=vr9;v[10]=vr10;
}

/* 089E93A4 */
rv_t func_089E93A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E93A4:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 1;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E93C8;
L_089E93C8:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A07314(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E93D4;
L_089E93D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E93E8 */
rv_t func_089E93E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E93E8:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9410;
L_089E9410:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A073E0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E941C;
L_089E941C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E9430 */
rv_t func_089E9430(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E9430:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E9554; }
    goto L_089E9464;
L_089E9464:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF2DC - (-3364);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3364));
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
    t0 = D_08C2B7A0 - (-18528);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B7B0 - (-18512);
    a3 = D_08C2B7C0 - (-18496);
    v1 = t0 - 18528;
    a1 = v0 - 18512;
    a2 = a3 - 18496;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B850 - (-18352);
    s0 = s3 - 18352;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18512, FBITS(f5));
    v0 = 8;
    ST32(t0-18528, FBITS(f1));
    ST32(a3-18496, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E951C;
L_089E951C:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18352, v0);
    if (cnd_) { goto L_089E9548; }
    goto L_089E952C;
L_089E952C:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089E9534;
L_089E9534:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089E9534; }
    goto L_089E9548;
L_089E9548:;
    v0 = s3 - 18352;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089E9554;
L_089E9554:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E9578; }
    goto L_089E9568;
L_089E9568:;
    v0 = D_08C2B850 - (-18352);
    a0 = LD32(v0-18352);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089E9590; }
    goto L_089E9578;
L_089E9578:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E9590:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E9598;
L_089E9598:;
    goto L_089E9578;
}

/* 089E95A0 */
rv_t func_089E95A0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E95A0:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089E9430(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E95B4;
L_089E95B4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E95C0 */
rv_t func_089E95C0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E95C0:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089E9430(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E95D4;
L_089E95D4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089E95E0 */
rv_t func_089E95E0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E95E0:;
    sp = sp - 32;
    s4 = a0 + 384;
    s0 = D_08B08830 - (-30672);
    s0 = s0 - 30672;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2B890 - (-18288);
    func_08873BF8(a0);
    goto L_089E9618;
L_089E9618:;
    a0 = s1 + 120;
    a1 = s0 + 24;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089E9628;
L_089E9628:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A03594(a0, a1);
    goto L_089E9634;
L_089E9634:;
    a1 = D_08B086A0 - (-31072);
    a1 = a1 - 31072;
    v0 = a1 + 264;
    ST32(s1+120, v0);
    v0 = 5;
    v1 = 999;
    ST32(s1+84, v0);
    v0 = 4;
    a2 = a1 + 376;
    ST32(s1+88, v0);
    v0 = D_08AEF2E4 - (-3356);
    s2 = s3 - 18288;
    f0 = BITSF(LD32(v0-3356));
    v0 = (u32)-1;
    ST32(s1+112, v0);
    v0 = (u32)-32760;
    a0 = 12;
    ST32(s1+96, FBITS(f0));
    ST32(s1, a1);
    ST32(s1+92, v1);
    ST32(s1+100, 0);
    ST32(s1+104, 0);
    ST32(s1+108, 0);
    ST32(s1+116, 0);
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+384, a2);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E96BC;
L_089E96BC:;
    a0 = LD32(s3-18288);
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
    goto L_089E96F0;
L_089E96F0:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A536F0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E96F8;
L_089E96F8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089E9718 */
rv_t func_089E9718(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E9718:;
    sp = sp - 32;
    v0 = D_08B086A0 - (-31072);
    v0 = v0 - 31072;
    a1 = v0 + 376;
    v1 = v0 + 264;
    s1 = a0 + 0;
    s2 = s1 + 120;
    s3 = s1 + 384;
    a2 = LD32(a0+108);
    ST32(s1, v0);
    a0 = a2 + 0;
    ST32(s1+120, v1);
    cnd_ = a2 != 0;
    ST32(s1+384, a1);
    if (cnd_) { goto L_089E9808; }
    goto L_089E9764;
L_089E9764:;
    v0 = LD32(s1+104);
    goto L_089E9768;
L_089E9768:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E97F0; }
    goto L_089E9770;
L_089E9770:;
    v1 = LD32(s1+112);
    goto L_089E9774;
L_089E9774:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = s1 + 112;
    if (cnd_) { goto L_089E9788; }
    goto L_089E9780;
L_089E9780:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9788;
L_089E9788:;
    a0 = D_08C2B890 - (-18288);
    a1 = s1 + 0;
    a0 = a0 - 18288;
    func_08AC927C(a0, a1, t1, t2, t3);
    goto L_089E9798;
L_089E9798:;
    s0 = D_08B08830 - (-30672);
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E97A4;
L_089E97A4:;
    s0 = s0 - 30672;
    a0 = s1 + 0;
    func_08A537CC(a0);
    goto L_089E97B0;
L_089E97B0:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E97C0;
L_089E97C0:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E97CC;
L_089E97CC:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E97D4;
L_089E97D4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E97F0:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9800;
L_089E9800:;
    v1 = LD32(s1+112);
    goto L_089E9774;
L_089E9808:;
    v0 = LD32(a2);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9818;
L_089E9818:;
    v0 = LD32(s1+104);
    goto L_089E9768;
}

/* 089E9820 */
rv_t func_089E9820(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089E9820:;
    sp = sp - 32;
    v0 = D_08B086A0 - (-31072);
    v0 = v0 - 31072;
    a1 = v0 + 376;
    v1 = v0 + 264;
    s1 = a0 + 0;
    s2 = s1 + 120;
    s3 = s1 + 384;
    a2 = LD32(a0+108);
    ST32(s1, v0);
    a0 = a2 + 0;
    ST32(s1+120, v1);
    cnd_ = a2 != 0;
    ST32(s1+384, a1);
    if (cnd_) { goto L_089E9918; }
    goto L_089E986C;
L_089E986C:;
    v0 = LD32(s1+104);
    goto L_089E9870;
L_089E9870:;
    cnd_ = v0 != 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E9900; }
    goto L_089E9878;
L_089E9878:;
    v1 = LD32(s1+112);
    goto L_089E987C;
L_089E987C:;
    v0 = (u32)-1;
    cnd_ = v1 == v0;
    a0 = s1 + 112;
    if (cnd_) { goto L_089E9890; }
    goto L_089E9888;
L_089E9888:;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9890;
L_089E9890:;
    a0 = D_08C2B890 - (-18288);
    a1 = s1 + 0;
    a0 = a0 - 18288;
    func_08AC927C(a0, a1, t1, t2, t3);
    goto L_089E98A0;
L_089E98A0:;
    s0 = D_08B08830 - (-30672);
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E98AC;
L_089E98AC:;
    s0 = s0 - 30672;
    a0 = s1 + 0;
    func_08A537CC(a0);
    goto L_089E98B8;
L_089E98B8:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E98C8;
L_089E98C8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089E98D4;
L_089E98D4:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E98DC;
L_089E98DC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E98E4;
L_089E98E4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089E9900:;
    v0 = LD32(v0);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9910;
L_089E9910:;
    v1 = LD32(s1+112);
    goto L_089E987C;
L_089E9918:;
    v0 = LD32(a2);
    v1 = LD32(v0+4);
    t_ = v1;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9928;
L_089E9928:;
    v0 = LD32(s1+104);
    goto L_089E9870;
}

/* 089E9930 */
rv_t func_089E9930(u32 a0, u32 a1, u32 a2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089E9930:;
    sp = sp - 16;
    a3 = a0 + 52;
    s2 = a2 + 0;
    s1 = a0 + 0;
    v1 = LD32(a0+52);
    cnd_ = v1 == 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089E9988; }
    goto L_089E995C;
L_089E995C:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089E9964;
L_089E9964:;
    a0 = v0 + 12;
    a1 = v0 + 8;
    a2 = v0 + 4;
    v0 = s0 < v1;
    cnd_ = v1 == s0;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_089E9994; }
    goto L_089E997C;
L_089E997C:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089E9964; }
    goto L_089E9988;
L_089E9988:;
    a0 = LD32(a3+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089E9A10; }
    goto L_089E9994;
L_089E9994:;
    cnd_ = a2 == 0;
    v0 = 0 + 0;
    if (cnd_) { goto L_089E99A0; }
    goto L_089E999C;
L_089E999C:;
    v0 = LD32(a2);
    goto L_089E99A0;
L_089E99A0:;
    cnd_ = v0 == 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089E99C0; }
    goto L_089E99A8;
L_089E99A8:;
    v0 = LD32(v0+16);
    cnd_ = v0 == s2;
    a0 = s1 + 0;
    if (cnd_) { goto L_089E9A08; }
    goto L_089E99B4;
L_089E99B4:;
    a1 = s0 + 0;
    { rv_t r_ = func_0880AD44(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E99BC;
L_089E99BC:;
    a1 = s0 + 0;
    goto L_089E99C0;
L_089E99C0:;
    a0 = s1 + 0;
    a2 = s2 + 0;
    a3 = 0 + 0;
    t0 = s0 + 0;
    t1 = 0 + 0;
    t2 = 0 + 0;
    { rv_t r_ = func_0880AA90(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E99DC;
L_089E99DC:;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089E9A08; }
    goto L_089E99E4;
L_089E99E4:;
    a1 = 1;
    { u64 r_ = func_08811328(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E99EC;
L_089E99EC:;
    v0 = 1;
    goto L_089E99F0;
L_089E99F0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089E9A08:;
    v0 = 0 + 0;
    goto L_089E99F0;
L_089E9A10:;
    a2 = 1;
    a1 = s0 + 0;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E9A1C;
L_089E9A1C:;
    a2 = v0 + 0;
    goto L_089E9994;
}

/* 089E9A24 */
rv_t func_089E9A24(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089E9A24:;
    sp = sp - 64;
    s1 = a0 + 0;
    { rv_t r_ = func_08A03DFC(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9A44;
L_089E9A44:;
    v1 = D_08C2B880 - (-18304);
    v0 = v1 - 18304;
    f0 = BITSF(LD32(v1-18304));
    f3 = BITSF(LD32(v0+12));
    v1 = LD32(s1);
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f0));
    a0 = s1 + 0;
    v0 = LD32(v1+52);
    ST32(sp+4, FBITS(f1));
    ST32(sp+8, FBITS(f2));
    t_ = v0;
    ST32(sp+12, FBITS(f3));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9A7C;
L_089E9A7C:;
    v1 = 4;
    cnd_ = v0 == v1;
    if (cnd_) { a0 = LD32(s1+112); goto L_089E9B40; }
    goto L_089E9A88;
L_089E9A88:;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E9A90;
L_089E9A90:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_089E9B3C; }
    goto L_089E9AA4;
L_089E9AA4:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E9AF4; }
    goto L_089E9AC8;
L_089E9AC8:;
    a0 = LD32(a1);
    goto L_089E9ACC;
L_089E9ACC:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EA028; }
    goto L_089E9AE4;
L_089E9AE4:;
    a1 = LD32(a1+4);
    goto L_089E9AE8;
L_089E9AE8:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089E9ACC; }
    goto L_089E9AF0;
L_089E9AF0:;
    a0 = 0 + 0;
    goto L_089E9AF4;
L_089E9AF4:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+112); goto L_089E9B40; }
    goto L_089E9AFC;
L_089E9AFC:;
    v1 = LD32(s1);
    s0 = LD32(a0+64);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9B10;
L_089E9B10:;
    cnd_ = s0 == v0;
    v1 = D_08C2B870 - (-18320);
    if (cnd_) { goto L_089EA018; }
    goto L_089E9B18;
L_089E9B18:;
    f2 = BITSF(LD32(v1-18320));
    v0 = v1 - 18320;
    goto L_089E9B20;
L_089E9B20:;
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f3));
    goto L_089E9B3C;
L_089E9B3C:;
    a0 = LD32(s1+112);
    goto L_089E9B40;
L_089E9B40:;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { f1 = BITSF(LD32(s1+100)); goto L_089E9B90; }
    goto L_089E9B4C;
L_089E9B4C:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9B68;
L_089E9B68:;
    a0 = LD32(s1+112);
    s0 = v0 + 0;
    f0 = func_088E0018(a0);
    goto L_089E9B74;
L_089E9B74:;
    f12 = f0;
    a0 = s0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9B80;
L_089E9B80:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EA008; }
    goto L_089E9B88;
L_089E9B88:;
    a0 = LD32(s1+112);
    goto L_089E9B8C;
L_089E9B8C:;
    f1 = BITSF(LD32(s1+100));
    goto L_089E9B90;
L_089E9B90:;
    f0 = BITSF(LD32(s1+96));
    fcc = FCMP(f1, f0, 12);
    cnd_ = !fcc;
    v0 = (u32)-1;
    if (cnd_) { goto L_089E9F84; }
    goto L_089E9BA4;
L_089E9BA4:;
    cnd_ = a0 == v0;
    if (cnd_) { a0 = 0x6e920000u; goto L_089E9F00; }
    goto L_089E9BAC;
L_089E9BAC:;
    v0 = (u32)-1;
    cnd_ = a0 == v0;
    if (cnd_) { s0 = LD32(s1+104); goto L_089E9C40; }
    goto L_089E9BB8;
L_089E9BB8:;
    f1 = BITSF(LD32(s1+96));
    f2 = BITSF(0);
    fcc = FCMP(f1, f2, 2);
    cnd_ = fcc;
    a0 = D_08AEF2E8 - (-3352);
    if (cnd_) { goto L_089E9EF8; }
    goto L_089E9BD0;
L_089E9BD0:;
    f0 = BITSF(LD32(s1+100));
    f12 = f2;
    f0 = f0 / f1;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f1 = BITSF(LD32(a0-3352));
    if (cnd_) { goto L_089E9C00; }
    goto L_089E9BEC;
L_089E9BEC:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f12 = f1;
    if (cnd_) { goto L_089E9C00; }
    goto L_089E9BFC;
L_089E9BFC:;
    f12 = f0;
    goto L_089E9C00;
L_089E9C00:;
    f20 = f12;
    goto L_089E9C04;
L_089E9C04:;
    v1 = LD32(s1+84);
    v0 = 4;
    cnd_ = v1 == v0;
    f0 = BITSF(LD32(a0-3352));
    if (cnd_) { goto L_089E9EF0; }
    goto L_089E9C14;
L_089E9C14:;
    v0 = D_08AEF2EC - (-3348);
    f1 = BITSF(LD32(v0-3348));
    f12 = BITSF(LD32(a0-3352));
    a0 = LD32(s1+112);
    f0 = f20 * f1;
    f20 = f0 + f1;
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9C30;
L_089E9C30:;
    a0 = LD32(s1+112);
    f12 = f20;
    func_088E00E0(a0, f12);
    goto L_089E9C3C;
L_089E9C3C:;
    s0 = LD32(s1+104);
    goto L_089E9C40;
L_089E9C40:;
    cnd_ = s0 != 0;
    v0 = D_08B204FC - (1276);
    if (cnd_) { goto L_089E9C64; }
    goto L_089E9C48;
L_089E9C48:;
    v0 = LD32(s1+116);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E9ECC; }
    goto L_089E9C58;
L_089E9C58:;
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s1+108); goto L_089E9D00; }
    goto L_089E9C60;
L_089E9C60:;
    v0 = D_08B204FC - (1276);
    goto L_089E9C64;
L_089E9C64:;
    v1 = LD32(v0+1276);
    a3 = 0xc950000u;
    t0 = v0 + 1276;
    cnd_ = v1 == 0;
    a3 = a3 | 0x772c;
    if (cnd_) { goto L_089E9CA4; }
    goto L_089E9C78;
L_089E9C78:;
    v0 = v1 + 0;
    v1 = LD32(v0);
    goto L_089E9C80;
L_089E9C80:;
    a0 = v0 + 120;
    a1 = v0 + 116;
    a2 = v0 + 4;
    v0 = a3 < v1;
    cnd_ = v1 == a3;
    if (v0 == 0) a1 = a0;
    if (cnd_) { goto L_089E9CB0; }
    goto L_089E9C98;
L_089E9C98:;
    v0 = LD32(a1);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v0); goto L_089E9C80; }
    goto L_089E9CA4;
L_089E9CA4:;
    a0 = LD32(t0+20);
    cnd_ = a0 != 0;
    a2 = 0 + 0;
    if (cnd_) { goto L_089E9EB4; }
    goto L_089E9CB0;
L_089E9CB0:;
    cnd_ = a2 == 0;
    a0 = LD32(s1+104);
    if (cnd_) { goto L_089E9CE8; }
    goto L_089E9CB8;
L_089E9CB8:;
    f1 = BITSF(LD32(a2+20));
    f0 = BITSF(LD32(s1+100));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089E9E40; }
    goto L_089E9CD0;
L_089E9CD0:;
    a1 = 0xc950000u;
    a1 = a1 | 0x772c;
    a2 = 1;
    goto L_089E9CDC;
L_089E9CDC:;
    { rv_t r_ = func_089E9930(a0, a1, a2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9CE4;
L_089E9CE4:;
    a0 = LD32(s1+104);
    goto L_089E9CE8;
L_089E9CE8:;
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = BITSF(LD32(sp+8));
    a1 = 1;
    { rv_t r_ = func_08809B24(a0, a1, a2, a3, t0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9CFC;
L_089E9CFC:;
    v0 = LD32(s1+108);
    goto L_089E9D00;
L_089E9D00:;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(s1+104); goto L_089E9D54; }
    goto L_089E9D08;
L_089E9D08:;
    a1 = LD32(s1);
    v1 = D_08ADE9DC - (-5668);
    a0 = s1 + 0;
    v0 = LD32(a1+52);
    t_ = v0;
    s2 = v1 - 5668;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9D20;
L_089E9D20:;
    v0 = v0 << 2;
    v0 = v0 + s2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s1+108); goto L_089E9D48; }
    goto L_089E9D34;
L_089E9D34:;
    v0 = LD32(s1+116);
    v0 = (v0 >> 2) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E9DEC; }
    goto L_089E9D44;
L_089E9D44:;
    v0 = LD32(s1+108);
    goto L_089E9D48;
L_089E9D48:;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089E9DB8; }
    goto L_089E9D50;
L_089E9D50:;
    a0 = LD32(s1+104);
    goto L_089E9D54;
L_089E9D54:;
    a1 = 0xc950000u;
    a1 = a1 | 0x772c;
    a0 = a0 + 52;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E9D68;
L_089E9D68:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089E9D74; }
    goto L_089E9D70;
L_089E9D70:;
    v1 = LD32(v0);
    goto L_089E9D74;
L_089E9D74:;
    cnd_ = v1 == 0;
    v0 = D_08AEF2E8 - (-3352);
    if (cnd_) { goto L_089E9DE0; }
    goto L_089E9D7C;
L_089E9D7C:;
    v0 = LD32(v1+16);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    v0 = D_08AEF2E8 - (-3352);
    if (cnd_) { goto L_089E9DD0; }
    goto L_089E9D8C;
L_089E9D8C:;
    f12 = BITSF(LD32(v1+68));
    goto L_089E9D90;
L_089E9D90:;
    a0 = LD32(s1+108);
    goto L_089E9D94;
L_089E9D94:;
    a1 = 0 + 0;
    { rv_t r_ = func_08809AB8(a0, a1, 0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9D9C;
L_089E9D9C:;
    a0 = LD32(s1+108);
    f12 = BITSF(LD32(sp));
    f13 = BITSF(LD32(sp+4));
    f14 = BITSF(LD32(sp+8));
    a1 = 1;
    { rv_t r_ = func_08809B24(a0, a1, 0, 0, 0, 0, 0, 0, f12, f13, f14, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9DB4;
L_089E9DB4:;
    goto L_089E9DB8;
L_089E9DB8:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089E9DD0:;
    f0 = BITSF(LD32(v1+68));
    f1 = BITSF(LD32(v0-3352));
    f12 = f1 - f0;
    goto L_089E9D90;
L_089E9DE0:;
    a0 = LD32(s1+108);
    f12 = BITSF(LD32(v0-3352));
    goto L_089E9D94;
L_089E9DEC:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9DF4;
L_089E9DF4:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9E08;
L_089E9E08:;
    v0 = v0 << 2;
    v0 = v0 + s2;
    a1 = LD32(v0);
    a0 = s0 + 0;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9E1C;
L_089E9E1C:;
    ST32(s1+108, s0);
    a1 = 0x84170000u;
    a2 = 0x10000u;
    a0 = s0 + 0;
    a1 = a1 | 0xbc1a;
    a2 = a2 | 0x1;
    { rv_t r_ = func_089E9930(a0, a1, a2, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9E38;
L_089E9E38:;
    v0 = LD32(s1+108);
    goto L_089E9D48;
L_089E9E40:;
    a1 = 0xc950000u;
    a1 = a1 | 0x772c;
    a0 = a0 + 52;
    a2 = 1;
    { u64 r_ = func_08AA187C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E9E54;
L_089E9E54:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089E9E60; }
    goto L_089E9E5C;
L_089E9E5C:;
    a0 = LD32(v0);
    goto L_089E9E60;
L_089E9E60:;
    cnd_ = a0 == 0;
    if (cnd_) { a0 = LD32(s1+104); goto L_089E9EA4; }
    goto L_089E9E68;
L_089E9E68:;
    v0 = LD32(a0+16);
    v0 = (v0 >> 17) & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { a0 = LD32(s1+104); goto L_089E9E90; }
    goto L_089E9E78;
L_089E9E78:;
    v1 = LD32(a0);
    v0 = LD32(v1+36);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9E88;
L_089E9E88:;
    cnd_ = v0 != 0;
    a0 = LD32(s1+104);
    if (cnd_) { goto L_089E9EA4; }
    goto L_089E9E90;
L_089E9E90:;
    a1 = 0xc950000u;
    a2 = 0x20000u;
    a1 = a1 | 0x772c;
    goto L_089E9E9C;
L_089E9E9C:;
    a2 = a2 | 0x1;
    goto L_089E9CDC;
L_089E9EA4:;
    a1 = 0xdfa40000u;
    a2 = 0x10000u;
    a1 = a1 | 0x70a9;
    goto L_089E9E9C;
L_089E9EB4:;
    a1 = 0xc950000u;
    a2 = 1;
    a1 = a1 | 0x772c;
    { u64 r_ = func_08AA178C(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E9EC4;
L_089E9EC4:;
    a2 = v0 + 0;
    goto L_089E9CB0;
L_089E9ECC:;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9ED4;
L_089E9ED4:;
    a1 = 0xb9f30000u;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = a1 | 0x824a;
    { rv_t r_ = func_08805BA0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9EE8;
L_089E9EE8:;
    ST32(s1+104, s0);
    goto L_089E9C58;
L_089E9EF0:;
    f20 = f0 - f20;
    goto L_089E9C14;
L_089E9EF8:;
    f20 = BITSF(LD32(a0-3352));
    goto L_089E9C04;
L_089E9F00:;
    a0 = a0 | 0x6355;
    a1 = 0 + 0;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089E9F0C;
L_089E9F0C:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089E9F44; }
    goto L_089E9F14;
L_089E9F14:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9F30;
L_089E9F30:;
    f12 = BITSF(LD32(s0+84));
    a0 = v0 + 0;
    { rv_t r_ = func_088DC02C(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9F3C;
L_089E9F3C:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089E9F4C; }
    goto L_089E9F44;
L_089E9F44:;
    a0 = LD32(s1+112);
    goto L_089E9BAC;
L_089E9F4C:;
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9F64;
L_089E9F64:;
    a2 = v0 + 0;
    v0 = D_08AEF2E8 - (-3352);
    f12 = BITSF(LD32(v0-3352));
    a1 = s1 + 112;
    a0 = s0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9F7C;
L_089E9F7C:;
    a0 = LD32(s1+112);
    goto L_089E9BAC;
L_089E9F84:;
    cnd_ = a0 == v0;
    if (cnd_) { s0 = LD32(s1+104); goto L_089E9C40; }
    goto L_089E9F8C;
L_089E9F8C:;
    f0 = func_088E00A8(a0);
    goto L_089E9F94;
L_089E9F94:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f0, 12);
    cnd_ = !fcc;
    f12 = f0;
    if (cnd_) { goto L_089E9FF8; }
    goto L_089E9FA8;
L_089E9FA8:;
    v1 = D_08AEF2F0 - (-3344);
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(v1-3344));
    v0 = D_08AEF2E8 - (-3352);
    a0 = sp + 16;
    f1 = f1 * f0;
    f0 = BITSF(LD32(v0-3352));
    a1 = sp + 20;
    a2 = sp + 24;
    f1 = f12 - f1;
    ST32(sp+20, FBITS(f2));
    ST32(sp+16, FBITS(f1));
    ST32(sp+24, FBITS(f0));
    f0 = func_089EAB14(a0, a1, a2);
    goto L_089E9FE4;
L_089E9FE4:;
    f12 = f0;
    a0 = LD32(s1+112);
    { rv_t r_ = func_088E0060(a0, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089E9FF0;
L_089E9FF0:;
    s0 = LD32(s1+104);
    goto L_089E9C40;
L_089E9FF8:;
    a0 = s1 + 112;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA000;
L_089EA000:;
    s0 = LD32(s1+104);
    goto L_089E9C40;
L_089EA008:;
    a0 = s1 + 112;
    { rv_t r_ = func_088DFE3C(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA010;
L_089EA010:;
    a0 = LD32(s1+112);
    goto L_089E9B8C;
L_089EA018:;
    v1 = D_08C2B860 - (-18336);
    f2 = BITSF(LD32(v1-18336));
    v0 = v1 - 18336;
    goto L_089E9B20;
L_089EA028:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E9AE8; }
    goto L_089EA034;
L_089EA034:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089E9AE8; }
    goto L_089EA040;
L_089EA040:;
    goto L_089E9AF4;
}

/* 089EA048 */
rv_t func_089EA048(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[336] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 336);
L_089EA048:;
    sp = sp - 336;
    s0 = a0 + 0;
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    {u32 a_=sp+(192);ST32(a_+0,FBITS(v[48]));ST32(a_+4,FBITS(v[49]));ST32(a_+8,FBITS(v[50]));ST32(a_+12,FBITS(v[51]));}
    {u32 a_=sp+(208);ST32(a_+0,FBITS(v[52]));ST32(a_+4,FBITS(v[53]));ST32(a_+8,FBITS(v[54]));ST32(a_+12,FBITS(v[55]));}
    {u32 a_=sp+(224);ST32(a_+0,FBITS(v[56]));ST32(a_+4,FBITS(v[57]));ST32(a_+8,FBITS(v[58]));ST32(a_+12,FBITS(v[59]));}
    {u32 a_=sp+(240);ST32(a_+0,FBITS(v[60]));ST32(a_+4,FBITS(v[61]));ST32(a_+8,FBITS(v[62]));ST32(a_+12,FBITS(v[63]));}
    { rv_t r_ = func_08A03E78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA07C;
L_089EA07C:;
    v0 = LD32(s0+104);
    {u32 a_=sp+(256);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    cnd_ = v0 != 0;
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    if (cnd_) { goto L_089EA218; }
    goto L_089EA094;
L_089EA094:;
    v0 = LD32(s0+108);
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089EA0B0; }
    goto L_089EA0A0;
L_089EA0A0:;
    goto L_089EA0A4;
L_089EA0A4:;
    sp = sp + 336;
    return (rv_t){ v0, v1, f0 };
L_089EA0B0:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    {u32 a_=sp+(256);ST32(a_+0,FBITS(v[64]));ST32(a_+4,FBITS(v[65]));ST32(a_+8,FBITS(v[66]));ST32(a_+12,FBITS(v[67]));}
    {u32 a_=sp+(272);ST32(a_+0,FBITS(v[68]));ST32(a_+4,FBITS(v[69]));ST32(a_+8,FBITS(v[70]));ST32(a_+12,FBITS(v[71]));}
    v0 = LD32(v1+16);
    {u32 a_=sp+(288);ST32(a_+0,FBITS(v[72]));ST32(a_+4,FBITS(v[73]));ST32(a_+8,FBITS(v[74]));ST32(a_+12,FBITS(v[75]));}
    t_ = v0;
    {u32 a_=sp+(304);ST32(a_+0,FBITS(v[76]));ST32(a_+4,FBITS(v[77]));ST32(a_+8,FBITS(v[78]));ST32(a_+12,FBITS(v[79]));}
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA0D4;
L_089EA0D4:;
    a1 = LD32(s0);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(144);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a0);}
    a0 = LD32(a1-12);
    v1 = LD32(v0+16);
    a1 = LD32(v0+12);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(160);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a1);}
    a1 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(176);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = D_08C2B8A0 - (-18272);
    a1 = LD32(v0+28);
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    a0 = s0 + a0;
    {v[33]=BITSF(a1);}
    a1 = v1 - 18272;
    a2 = LD32(v0+32);
    {float s0=v[76];float s1=v[77];float s2=v[78];float s3=v[79];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(v1-18272);
    {v[34]=BITSF(a2);}
    v1 = LD32(a1+8);
    a2 = LD32(a0);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(128);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v0);}
    v0 = LD32(a1+4);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = LD32(a2+12);
    {v1=FBITS(v[17]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp, FBITS(f2));
    ST32(sp+4, v1);
    t_ = v0;
    ST32(sp+8, FBITS(f3));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA1A8;
L_089EA1A8:;
    f0 = BITSF(LD32(v0));
    v1 = LD32(s0);
    f1 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    a0 = LD32(v1-12);
    f1 = f1 + f0;
    f2 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    a0 = s0 + a0;
    f2 = f2 + f3;
    f0 = f0 + f4;
    v1 = LD32(a0);
    ST32(sp+32, FBITS(f1));
    ST32(sp+36, FBITS(f2));
    ST32(sp+40, FBITS(f0));
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA1F4;
L_089EA1F4:;
    a2 = v0 + 0;
    v0 = D_08AEF2F4 - (-3340);
    a0 = LD32(s0+108);
    f12 = BITSF(LD32(v0-3340));
    a1 = sp + 32;
    a3 = 0x4000000u;
    { rv_t r_ = func_088067CC(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA210;
L_089EA210:;
    goto L_089EA0A4;
L_089EA218:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA234;
L_089EA234:;
    a1 = LD32(s0);
    a0 = LD32(v0);
    v1 = LD32(v0+4);
    {u32 a_=sp+(80);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a0);}
    a0 = LD32(v0+8);
    {v[33]=BITSF(v1);}
    {v[34]=BITSF(a0);}
    a0 = LD32(a1-12);
    v1 = LD32(v0+16);
    a1 = LD32(v0+12);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[0]=d0;v[1]=d1;v[2]=d2;v[3]=d3;}
    {u32 a_=sp+(96);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(a1);}
    a1 = LD32(v0+20);
    {v[33]=BITSF(v1);}
    v1 = LD32(v0+24);
    {v[34]=BITSF(a1);}
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[4]=d0;v[5]=d1;v[6]=d2;v[7]=d3;}
    {u32 a_=sp+(112);v[32]=BITSF(LD32(a_+0));v[33]=BITSF(LD32(a_+4));v[34]=BITSF(LD32(a_+8));v[35]=BITSF(LD32(a_+12));}
    {v[32]=BITSF(v1);}
    v1 = D_08C2B8AC - (-18260);
    a1 = LD32(v0+28);
    {u32 a_=sp+(240);v[60]=BITSF(LD32(a_+0));v[61]=BITSF(LD32(a_+4));v[62]=BITSF(LD32(a_+8));v[63]=BITSF(LD32(a_+12));}
    a0 = s0 + a0;
    {v[33]=BITSF(a1);}
    a1 = v1 - 18260;
    a2 = LD32(v0+32);
    {float s0=v[60];float s1=v[61];float s2=v[62];float s3=v[63];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[12]=d0;v[13]=d1;v[14]=d2;v[15]=d3;}
    v0 = LD32(v1-18260);
    {v[34]=BITSF(a2);}
    v1 = LD32(a1+8);
    a2 = LD32(a0);
    {float s0=v[32];float s1=v[33];float s2=v[34];float s3=v[35];float d0=s0;float d1=s1;float d2=s2;float d3=s3;v[8]=d0;v[9]=d1;v[10]=d2;v[11]=d3;}
    {u32 a_=sp+(64);v[20]=BITSF(LD32(a_+0));v[21]=BITSF(LD32(a_+4));v[22]=BITSF(LD32(a_+8));v[23]=BITSF(LD32(a_+12));}
    {v[20]=BITSF(v0);}
    v0 = LD32(a1+4);
    {v[21]=BITSF(v0);}
    {v[22]=BITSF(v1);}
    {float t0=v[20];float t1=v[21];float t2=v[22];float o0=0;o0+=v[0]*t0;o0+=v[1]*t1;o0+=v[2]*t2;float o1=0;o1+=v[4]*t0;o1+=v[5]*t1;o1+=v[6]*t2;float o2=0;o2+=v[8]*t0;o2+=v[9]*t1;o2+=v[10]*t2;v[16]=o0;v[17]=o1;v[18]=o2;}
    {v1=FBITS(v[18]);}
    f3 = BITSF(v1);
    {v1=FBITS(v[16]);}
    f2 = BITSF(v1);
    v0 = LD32(a2+12);
    {v1=FBITS(v[17]);}
    ST32(sp+16, FBITS(f2));
    ST32(sp+20, v1);
    ST32(sp+24, FBITS(f3));
    ST32(sp+32, FBITS(f2));
    ST32(sp+36, v1);
    t_ = v0;
    ST32(sp+40, FBITS(f3));
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA308;
L_089EA308:;
    f0 = BITSF(LD32(v0));
    v1 = LD32(s0);
    f1 = BITSF(LD32(sp+16));
    f4 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+4));
    f1 = f1 + f0;
    a0 = LD32(v1-12);
    f2 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    a0 = s0 + a0;
    f2 = f2 + f3;
    f0 = f0 + f4;
    v1 = LD32(a0);
    ST32(sp, FBITS(f1));
    ST32(sp+4, FBITS(f2));
    ST32(sp+8, FBITS(f0));
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA354;
L_089EA354:;
    a2 = v0 + 0;
    v0 = D_08AEF2F4 - (-3340);
    a0 = LD32(s0+104);
    f12 = BITSF(LD32(v0-3340));
    a1 = sp + 0;
    a3 = 0x4000000u;
    { rv_t r_ = func_088067CC(a0, a1, a2, a3, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA370;
L_089EA370:;
    {u32 a_=sp+(304);v[76]=BITSF(LD32(a_+0));v[77]=BITSF(LD32(a_+4));v[78]=BITSF(LD32(a_+8));v[79]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(288);v[72]=BITSF(LD32(a_+0));v[73]=BITSF(LD32(a_+4));v[74]=BITSF(LD32(a_+8));v[75]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(272);v[68]=BITSF(LD32(a_+0));v[69]=BITSF(LD32(a_+4));v[70]=BITSF(LD32(a_+8));v[71]=BITSF(LD32(a_+12));}
    {u32 a_=sp+(256);v[64]=BITSF(LD32(a_+0));v[65]=BITSF(LD32(a_+4));v[66]=BITSF(LD32(a_+8));v[67]=BITSF(LD32(a_+12));}
    goto L_089EA094;
}

/* 089EA384 */
rv_t func_089EA384(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EA384:;
    sp = sp - 16;
    v0 = 90;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a2 = a1 + 0;
    if (cnd_) { goto L_089EA3B0; }
    goto L_089EA39C;
L_089EA39C:;
    { rv_t r_ = func_08A03F38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA3A4;
L_089EA3A4:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EA3B0:;
    v0 = LD32(a1+24);
    a1 = a0 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089EA3C8; }
    goto L_089EA3C0;
L_089EA3C0:;
    f12 = BITSF(LD32(a2+8));
    { rv_t r_ = func_089EDE9C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA3C8;
L_089EA3C8:;
    v0 = 1;
    goto L_089EA3A4;
}

/* 089EA3D0 */
float func_089EA3D0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    float f0 = 0, f12 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[304] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 304);
L_089EA3D0:;
    sp = sp - 304;
    s2 = a1 + 0;
    s3 = LD32(a0+84);
    cnd_ = s3 == a1;
    s1 = a0 + 0;
    if (cnd_) { goto L_089EA63C; }
    goto L_089EA408;
L_089EA408:;
    v0 = 4;
    cnd_ = a1 == v0;
    v0 = D_08C2C3E0 - (-15392);
    if (cnd_) { goto L_089EA4B0; }
    goto L_089EA414;
L_089EA414:;
    v0 = LD32(v0-15392);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089EA48C; }
    goto L_089EA420;
L_089EA420:;
    a2 = LD32(v0+20);
    a1 = D_08C2A6C8 - (-22840);
    v0 = 999;
    a0 = a1 - 22840;
    cnd_ = a2 == v0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EA488; }
    goto L_089EA438;
L_089EA438:;
    v0 = LD32(a0+4);
    v1 = LD32(a1-22840);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EA488; }
    goto L_089EA45C;
L_089EA45C:;
    a0 = LD32(a1);
    goto L_089EA460;
L_089EA460:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EA7E4; }
    goto L_089EA478;
L_089EA478:;
    a1 = LD32(a1+4);
    goto L_089EA47C;
L_089EA47C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089EA460; }
    goto L_089EA484;
L_089EA484:;
    v1 = 0 + 0;
    goto L_089EA488;
L_089EA488:;
    a1 = v1 + 0;
    goto L_089EA48C;
L_089EA48C:;
    cnd_ = a1 == 0;
    if (cnd_) { goto L_089EA4B0; }
    goto L_089EA494;
L_089EA494:;
    v1 = LD32(a1);
    a0 = LD32(s1+92);
    v0 = LD32(v1-16);
    v0 = a1 + v0;
    v1 = LD32(v0+4);
    cnd_ = a0 == v1;
    a0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_089EA7CC; }
    goto L_089EA4B0;
L_089EA4B0:;
    a0 = 1;
    { u64 r_ = func_08973E80(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA4B8;
L_089EA4B8:;
    s7 = v0 + 0;
    v0 = 5;
    cnd_ = s3 == v0;
    ST32(s1+84, s2);
    if (cnd_) { goto L_089EA63C; }
    goto L_089EA4C8;
L_089EA4C8:;
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA4D0;
L_089EA4D0:;
    a0 = D_08C29F04 - (-24828);
    a0 = a0 - 24828;
    a1 = v0 + 0;
    a2 = 1;
    v0 = func_08AC72B0(a0, a1, a2);
    goto L_089EA4E4;
L_089EA4E4:;
    cnd_ = v0 == 0;
    s4 = v0 + 0;
    if (cnd_) { goto L_089EA5DC; }
    goto L_089EA4EC;
L_089EA4EC:;
    a0 = 0x54120000u;
    a1 = 0 + 0;
    a0 = a0 | 0x293b;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA4FC;
L_089EA4FC:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA51C;
L_089EA51C:;
    a2 = v0 + 0;
    v0 = D_08AEF2F8 - (-3336);
    f12 = BITSF(LD32(v0-3336));
    a0 = s0 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA534;
L_089EA534:;
    s4 = LD32(s4+64);
    v0 = 4;
    cnd_ = s4 == v0;
    if (cnd_) { v1 = LD32(s1); goto L_089EA5E0; }
    goto L_089EA544;
L_089EA544:;
    a0 = s4 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA54C;
L_089EA54C:;
    s6 = v0 + 0;
    cnd_ = s3 == s4;
    s5 = 1;
    if (cnd_) { goto L_089EA780; }
    goto L_089EA558;
L_089EA558:;
    cnd_ = s2 == s4;
    a1 = 0 + 0;
    if (cnd_) { goto L_089EA73C; }
    goto L_089EA560;
L_089EA560:;
    a0 = s4 + 0;
    { u64 r_ = func_08A26F88(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA568;
L_089EA568:;
    cnd_ = s3 == v0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089EA700; }
    goto L_089EA570;
L_089EA570:;
    cnd_ = s2 == v0;
    if (cnd_) { goto L_089EA6AC; }
    goto L_089EA578;
L_089EA578:;
    f12 = BITSF(0);
    a0 = s5 + 0;
    a1 = sp + 0;
    a2 = 1;
    { rv_t r_ = func_08A4EDDC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA58C;
L_089EA58C:;
    a0 = 1;
    { u64 r_ = func_08973E80(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA594;
L_089EA594:;
    cnd_ = v0 == s7;
    s0 = v0 + 0;
    if (cnd_) { goto L_089EA5DC; }
    goto L_089EA59C;
L_089EA59C:;
    a0 = s4 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA5A4;
L_089EA5A4:;
    v1 = v0 + 0;
    v0 = 2;
    cnd_ = s0 == v0;
    s2 = 59;
    if (cnd_) { goto L_089EA694; }
    goto L_089EA5B4;
L_089EA5B4:;
    cnd_ = s0 == v1;
    s5 = 2;
    if (cnd_) { goto L_089EA5C4; }
    goto L_089EA5BC;
L_089EA5BC:;
    s2 = 61;
    s5 = 1;
    goto L_089EA5C4;
L_089EA5C4:;
    a0 = s5 + 0;
    a1 = s2 + 0;
    a2 = 0 + 0;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA5D4;
L_089EA5D4:;
    cnd_ = v0 == 0;
    a0 = s5 + 0;
    if (cnd_) { goto L_089EA678; }
    goto L_089EA5DC;
L_089EA5DC:;
    v1 = LD32(s1);
    goto L_089EA5E0;
L_089EA5E0:;
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA5EC;
L_089EA5EC:;
    v1 = D_08ADE9DC - (-5668);
    a0 = LD32(s1+108);
    v0 = v0 << 2;
    v1 = v1 - 5668;
    v0 = v0 + v1;
    cnd_ = a0 == 0;
    a1 = LD32(v0);
    if (cnd_) { goto L_089EA63C; }
    goto L_089EA608;
L_089EA608:;
    v0 = LD32(a0+16);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EA640; }
    goto L_089EA614;
L_089EA614:;
    v0 = LD32(v0+64);
    cnd_ = v0 == a1;
    if (cnd_) { goto L_089EA644; }
    goto L_089EA620;
L_089EA620:;
    cnd_ = a1 != 0;
    if (cnd_) { goto L_089EA668; }
    goto L_089EA628;
L_089EA628:;
    v1 = LD32(a0);
    v0 = LD32(v1+4);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA638;
L_089EA638:;
    ST32(s1+108, 0);
    goto L_089EA63C;
L_089EA63C:;
    goto L_089EA640;
L_089EA640:;
    goto L_089EA644;
L_089EA644:;
    sp = sp + 304;
    return f0;
L_089EA668:;
    a2 = 0 + 0;
    { u64 r_ = func_088065A8(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA670;
L_089EA670:;
    goto L_089EA640;
L_089EA678:;
    f12 = BITSF(0);
    a1 = s2 + 0;
    a2 = 0 + 0;
    a3 = 1;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA68C;
L_089EA68C:;
    v1 = LD32(s1);
    goto L_089EA5E0;
L_089EA694:;
    s2 = 60;
    cnd_ = s7 == v1;
    s5 = 1;
    if (cnd_) { goto L_089EA5C4; }
    goto L_089EA6A0;
L_089EA6A0:;
    s2 = 62;
    s5 = 2;
    goto L_089EA5C4;
L_089EA6AC:;
    a0 = 58;
    v0 = func_0897A064(a0, a1);
    goto L_089EA6B4;
L_089EA6B4:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    s5 = 2;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA6CC;
L_089EA6CC:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA6E4;
L_089EA6E4:;
    a0 = 0x18100000u;
    a1 = s6 + 0;
    a0 = a0 | 0xd7ec;
    goto L_089EA6F0;
L_089EA6F0:;
    a2 = 1;
    { u64 r_ = func_08A6606C(a0, a1, a2, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA6F8;
L_089EA6F8:;
    goto L_089EA578;
L_089EA700:;
    a0 = 57;
    v0 = func_0897A064(a0, a1);
    goto L_089EA708;
L_089EA708:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA71C;
L_089EA71C:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA734;
L_089EA734:;
    goto L_089EA578;
L_089EA73C:;
    a0 = 56;
    v0 = func_0897A064(a0, a1);
    goto L_089EA744;
L_089EA744:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA758;
L_089EA758:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA770;
L_089EA770:;
    a0 = 0xecbe0000u;
    a1 = s6 + 0;
    a0 = a0 | 0x787a;
    goto L_089EA6F0;
L_089EA780:;
    a1 = 0 + 0;
    a0 = 55;
    v0 = func_0897A064(a0, a1);
    goto L_089EA78C;
L_089EA78C:;
    v1 = LD32(s1);
    s0 = v0 + 0;
    a0 = s1 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    s5 = 2;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA7A4;
L_089EA7A4:;
    t0 = v0 + 0;
    a0 = sp + 0;
    a1 = s0 + 0;
    a2 = 128;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA7BC;
L_089EA7BC:;
    a0 = 0x19900000u;
    a1 = s6 + 0;
    a0 = a0 | 0x2240;
    goto L_089EA6F0;
L_089EA7CC:;
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 44;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA7DC;
L_089EA7DC:;
    goto L_089EA4B0;
L_089EA7E4:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089EA478; }
    goto L_089EA7F0;
L_089EA7F0:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EA47C; }
    goto L_089EA7FC;
L_089EA7FC:;
    a1 = v1 + 0;
    goto L_089EA48C;
}

/* 089EA804 */
rv_t func_089EA804(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EA804:;
    sp = sp - 16;
    s1 = a0 + 0;
    v1 = LD32(a0);
    v0 = LD32(v1+164);
    t_ = v0;
    s0 = a3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA828;
L_089EA828:;
    ST32(s0, v0);
    ST8(s0+7, 0);
    ST8(s0+6, 0);
    v0 = LD_U8(s1+4);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EA848; }
    goto L_089EA840;
L_089EA840:;
    v0 = LD_U8(s1+68);
    v1 = 0 < v0;
    goto L_089EA848;
L_089EA848:;
    v0 = 2;
    ST32(s0+8, v0);
    v0 = 1;
    ST8(s0+5, v1);
    ST8(s0+4, v0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EA870 */
rv_t func_089EA870(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EA870:;
    sp = sp - 16;
    v1 = 0 + 0;
    s1 = a1 & 0xff;
    v0 = LD_U8(a0+4);
    cnd_ = v0 == 0;
    s0 = a0 + 0;
    if (cnd_) { goto L_089EA89C; }
    goto L_089EA894;
L_089EA894:;
    v0 = LD_U8(a0+68);
    v1 = 0 < v0;
    goto L_089EA89C;
L_089EA89C:;
    cnd_ = s1 == v1;
    if (cnd_) { a0 = s0 + 0; goto L_089EA8C0; }
    goto L_089EA8A4;
L_089EA8A4:;
    cnd_ = s1 == 0;
    if (cnd_) { goto L_089EA8DC; }
    goto L_089EA8AC;
L_089EA8AC:;
    { rv_t r_ = func_08A58154(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA8B4;
L_089EA8B4:;
    a0 = s0 + 0;
    { rv_t r_ = func_08A536F0(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA8BC;
L_089EA8BC:;
    a0 = s0 + 0;
    goto L_089EA8C0;
L_089EA8C0:;
    a1 = s1 + 0;
    { rv_t r_ = func_08A042E0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA8C8;
L_089EA8C8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EA8DC:;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EA8E4;
L_089EA8E4:;
    a0 = s0 + 0;
    func_08A537CC(a0);
    goto L_089EA8EC;
L_089EA8EC:;
    a0 = s0 + 0;
    goto L_089EA8C0;
}

/* 089EA8F4 */
rv_t func_089EA8F4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EA8F4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 404;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA910;
L_089EA910:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_089E95E0(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA91C;
L_089EA91C:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089EA93C; }
    goto L_089EA928;
L_089EA928:;
    goto L_089EA92C;
L_089EA92C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EA93C:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EA94C;
L_089EA94C:;
    goto L_089EA92C;
}

/* 089EA954 */
rv_t func_089EA954(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EA954:;
    sp = sp - 32;
    s2 = a0 ^ 0x1;
    v1 = s2 < 0x1u;
    s1 = a1 ^ 0xffff;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s4 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EAA7C; }
    goto L_089EA98C;
L_089EA98C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF2FC - (-3332);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3332));
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
    t0 = D_08C2B860 - (-18336);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B870 - (-18320);
    a3 = D_08C2B880 - (-18304);
    v1 = t0 - 18336;
    a1 = v0 - 18320;
    a2 = a3 - 18304;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B890 - (-18288);
    s0 = s3 - 18288;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18320, FBITS(f5));
    v0 = 8;
    ST32(t0-18336, FBITS(f1));
    ST32(a3-18304, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAA44;
L_089EAA44:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18288, v0);
    if (cnd_) { goto L_089EAA70; }
    goto L_089EAA54;
L_089EAA54:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089EAA5C;
L_089EAA5C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089EAA5C; }
    goto L_089EAA70;
L_089EAA70:;
    v0 = s3 - 18288;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089EAA7C;
L_089EAA7C:;
    a3 = s1 < 0x1u;
    v0 = s2 < 0x1u;
    v0 = a3 & v0;
    cnd_ = v0 == 0;
    v0 = s4 < 0x1u;
    if (cnd_) { goto L_089EAACC; }
    goto L_089EAA90;
L_089EAA90:;
    v0 = D_08AEF300 - (-3328);
    f0 = BITSF(LD32(v0-3328));
    v1 = D_08C2B8A0 - (-18272);
    a0 = v1 - 18272;
    v0 = D_08AEF304 - (-3324);
    ST32(a0+4, FBITS(f0));
    a1 = D_08C2B8AC - (-18260);
    a2 = a1 - 18260;
    f0 = BITSF(LD32(v0-3324));
    ST32(a0+8, 0);
    ST32(v1-18272, 0);
    ST32(a1-18260, 0);
    ST32(a2+4, FBITS(f0));
    ST32(a2+8, 0);
    v0 = s4 < 0x1u;
    goto L_089EAACC;
L_089EAACC:;
    v0 = a3 & v0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EAAE8; }
    goto L_089EAAD8;
L_089EAAD8:;
    v0 = D_08C2B890 - (-18288);
    a0 = LD32(v0-18288);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089EAB04; }
    goto L_089EAAE8;
L_089EAAE8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EAB04:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EAB0C;
L_089EAB0C:;
    goto L_089EAAE8;
}

/* 089EAB14 */
float func_089EAB14(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089EAB14:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089EAB40; }
    goto L_089EAB2C;
L_089EAB2C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089EAB40; }
    goto L_089EAB40;
L_089EAB40:;
    return f0;
}

/* 089EAB48 */
rv_t func_089EAB48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EAB48:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089EA954(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAB5C;
L_089EAB5C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EAB68 */
rv_t func_089EAB68(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EAB68:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089EA954(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAB7C;
L_089EAB7C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EAB88 */
void func_089EAB88(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EAB88:;
    sp = sp - 32;
    s4 = a0 + 352;
    s0 = D_08B08D40 - (-29376);
    s0 = s0 - 29376;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s5 = a1 + 0;
    s3 = D_08C2B8E8 - (-18200);
    func_08873BF8(a0);
    goto L_089EABC8;
L_089EABC8:;
    a0 = s1 + 88;
    a1 = s0 + 24;
    s0 = s0 + 4;
    func_0885D56C(a0, a1);
    goto L_089EABD8;
L_089EABD8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A03594(a0, a1);
    goto L_089EABE4;
L_089EABE4:;
    v1 = D_08B08BB0 - (-29776);
    v1 = v1 - 29776;
    v0 = v1 + 264;
    ST32(s1+88, v0);
    v0 = (u32)-32745;
    s2 = s3 - 18200;
    ST32(s1+84, s5);
    a2 = v1 + 376;
    a0 = 12;
    ST32(s1, v1);
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+352, a2);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAC34;
L_089EAC34:;
    a0 = LD32(s3-18200);
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
    goto L_089EAC68;
L_089EAC68:;
    sp = sp + 32;
    return;
}

/* 089EAC8C */
rv_t func_089EAC8C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EAC8C:;
    v1 = D_08B08BB0 - (-29776);
    sp = sp - 32;
    v1 = v1 - 29776;
    v0 = v1 + 264;
    s1 = a0 + 0;
    a0 = v1 + 376;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+352, a0);
    a0 = D_08C2B8E8 - (-18200);
    a0 = a0 - 18200;
    ST32(s1+88, v0);
    s0 = D_08B08D40 - (-29376);
    s0 = s0 - 29376;
    s3 = s1 + 352;
    func_08AC942C(a0, a1, t1, t2, t3);
    goto L_089EACE0;
L_089EACE0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EACE8;
L_089EACE8:;
    s2 = s1 + 88;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EACFC;
L_089EACFC:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EAD08;
L_089EAD08:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EAD10;
L_089EAD10:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EAD2C */
rv_t func_089EAD2C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EAD2C:;
    v1 = D_08B08BB0 - (-29776);
    sp = sp - 32;
    v1 = v1 - 29776;
    v0 = v1 + 264;
    s1 = a0 + 0;
    a0 = v1 + 376;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+352, a0);
    a0 = D_08C2B8E8 - (-18200);
    a0 = a0 - 18200;
    ST32(s1+88, v0);
    s0 = D_08B08D40 - (-29376);
    s0 = s0 - 29376;
    s3 = s1 + 352;
    func_08AC942C(a0, a1, t1, t2, t3);
    goto L_089EAD80;
L_089EAD80:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EAD88;
L_089EAD88:;
    s2 = s1 + 88;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0394C(a0, a1, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EAD9C;
L_089EAD9C:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_0885D658(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EADA8;
L_089EADA8:;
    a0 = s3 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EADB0;
L_089EADB0:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EADB8;
L_089EADB8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EADD4 */
rv_t func_089EADD4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[288] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 288);
L_089EADD4:;
    sp = sp - 288;
    v0 = 90;
    s1 = a0 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089EAF8C; }
    goto L_089EAE00;
L_089EAE00:;
    v0 = 0x8082;
    cnd_ = v1 == v0;
    v0 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_089EAE34; }
    goto L_089EAE0C;
L_089EAE0C:;
    a0 = s1 + 0;
    goto L_089EAE10;
L_089EAE10:;
    a1 = s0 + 0;
    { rv_t r_ = func_08A03F38(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAE18;
L_089EAE18:;
    sp = sp + 288;
    return (rv_t){ v0, v1, f0 };
L_089EAE34:;
    a0 = LD32(v0-28832);
    v1 = 5;
    cnd_ = a0 == v1;
    if (cnd_) { goto L_089EAF44; }
    goto L_089EAE44;
L_089EAE44:;
    s0 = LD32(a1+24);
    cnd_ = s0 == 0;
    if (cnd_) { goto L_089EAF44; }
    goto L_089EAE50;
L_089EAE50:;
    v0 = D_08C2C3E0 - (-15392);
    s3 = LD32(v0-15392);
    cnd_ = s3 == 0;
    if (cnd_) { goto L_089EAF44; }
    goto L_089EAE60;
L_089EAE60:;
    v0 = LD32(s3+20);
    a2 = LD32(s0);
    cnd_ = v0 == a2;
    a0 = D_08C2933C - (-27844);
    if (cnd_) { goto L_089EAF74; }
    goto L_089EAE70;
L_089EAE70:;
    a0 = D_08C2B3A4 - (-19548);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 19548;
    if (cnd_) { goto L_089EAF44; }
    goto L_089EAE80;
L_089EAE80:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-19548);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089EAED0; }
    goto L_089EAEA4;
L_089EAEA4:;
    a0 = LD32(a1);
    goto L_089EAEA8;
L_089EAEA8:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EAF54; }
    goto L_089EAEC0;
L_089EAEC0:;
    a1 = LD32(a1+4);
    goto L_089EAEC4;
L_089EAEC4:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089EAEA8; }
    goto L_089EAECC;
L_089EAECC:;
    s2 = 0 + 0;
    goto L_089EAED0;
L_089EAED0:;
    cnd_ = s2 == 0;
    if (cnd_) { goto L_089EAF44; }
    goto L_089EAED8;
L_089EAED8:;
    a1 = 0 + 0;
    a0 = 436;
    v0 = func_0897A064(a0, a1);
    goto L_089EAEE4;
L_089EAEE4:;
    v1 = LD32(s2);
    s0 = v0 + 0;
    v0 = LD32(v1+88);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAEF8;
L_089EAEF8:;
    t0 = v0 + 0;
    a1 = s0 + 0;
    a2 = 128;
    a0 = sp + 0;
    a3 = 1;
    { rv_t r_ = func_08837590(a0, a1, a2, a3, t0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAF10;
L_089EAF10:;
    v1 = LD32(s2);
    v0 = LD32(v1+52);
    t_ = v0;
    a0 = s2 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAF20;
L_089EAF20:;
    v1 = LD32(s3+24);
    f12 = BITSF(0);
    a0 = 1;
    v0 = v0 ^ v1;
    v1 = 2;
    if (v0 != 0) a0 = v1;
    a1 = sp + 0;
    a2 = 1;
    { rv_t r_ = func_08A4EDDC(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAF44;
L_089EAF44:;
    a0 = s1 + 0;
    { rv_t r_ = func_089EB324(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAF4C;
L_089EAF4C:;
    v0 = 1;
    goto L_089EAE18;
L_089EAF54:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s2 = a0 + 0;
    if (cnd_) { goto L_089EAEC0; }
    goto L_089EAF60;
L_089EAF60:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EAEC4; }
    goto L_089EAF6C;
L_089EAF6C:;
    goto L_089EAED0;
L_089EAF74:;
    a0 = a0 - 27844;
    a0 = a0 + 164;
    a1 = 43;
    { rv_t r_ = func_089775E0(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EAF84;
L_089EAF84:;
    a2 = LD32(s0);
    goto L_089EAE70;
L_089EAF8C:;
    a0 = LD32(a1+24);
    cnd_ = a0 == 0;
    if (cnd_) { a0 = s1 + 0; goto L_089EAE10; }
    goto L_089EAF98;
L_089EAF98:;
    f12 = BITSF(LD32(a1+8));
    a1 = s1 + 0;
    func_089EF968(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089EAFA4;
L_089EAFA4:;
    a0 = s1 + 0;
    goto L_089EAE10;
}

/* 089EAFAC */
void func_089EAFAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_089EAFAC:;
    sp = sp - 96;
    ST32(a0+84, a1);
    v1 = D_08C2B8D8 - (-18216);
    v0 = v1 - 18216;
    s4 = a0 + 0;
    f2 = BITSF(LD32(v1-18216));
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f3));
    { u64 r_ = func_088ACDFC(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB004;
L_089EB004:;
    a2 = v0 + 0;
    a0 = D_08C29F04 - (-24828);
    v0 = 999;
    cnd_ = a2 == v0;
    v1 = a0 - 24828;
    if (cnd_) { goto L_089EB0A8; }
    goto L_089EB018;
L_089EB018:;
    v0 = LD32(v1+4);
    v1 = LD32(a0-24828);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EB068; }
    goto L_089EB03C;
L_089EB03C:;
    a0 = LD32(a1);
    goto L_089EB040;
L_089EB040:;
    v0 = LD32(a0);
    v1 = LD32(v0-12);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EB264; }
    goto L_089EB058;
L_089EB058:;
    a1 = LD32(a1+4);
    goto L_089EB05C;
L_089EB05C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089EB040; }
    goto L_089EB064;
L_089EB064:;
    v1 = 0 + 0;
    goto L_089EB068;
L_089EB068:;
    cnd_ = v1 == 0;
    f0 = BITSF(LD32(sp+12));
    if (cnd_) { goto L_089EB0AC; }
    goto L_089EB070;
L_089EB070:;
    a0 = LD32(v1+64);
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB078;
L_089EB078:;
    v1 = LD32(s4+84);
    cnd_ = v0 == v1;
    v1 = D_08C2B8C8 - (-18232);
    if (cnd_) { goto L_089EB254; }
    goto L_089EB084;
L_089EB084:;
    f2 = BITSF(LD32(v1-18232));
    v0 = v1 - 18232;
    goto L_089EB08C;
L_089EB08C:;
    f3 = BITSF(LD32(v0+12));
    f0 = BITSF(LD32(v0+4));
    f1 = BITSF(LD32(v0+8));
    ST32(sp, FBITS(f2));
    ST32(sp+4, FBITS(f0));
    ST32(sp+8, FBITS(f1));
    ST32(sp+12, FBITS(f3));
    goto L_089EB0A8;
L_089EB0A8:;
    f0 = BITSF(LD32(sp+12));
    goto L_089EB0AC;
L_089EB0AC:;
    f2 = BITSF(0);
    s1 = D_08AEF310 - (-3312);
    s3 = sp + 0;
    fcc = FCMP(f0, f2, 12);
    cnd_ = fcc;
    f1 = BITSF(LD32(s1-3312));
    if (cnd_) { goto L_089EB0DC; }
    goto L_089EB0C8;
L_089EB0C8:;
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    f2 = f1;
    if (cnd_) { goto L_089EB0DC; }
    goto L_089EB0D8;
L_089EB0D8:;
    f2 = f0;
    goto L_089EB0DC;
L_089EB0DC:;
    s2 = D_08AEF314 - (-3308);
    f0 = BITSF(LD32(s2-3308));
    f1 = BITSF(0);
    f2 = f2 * f0;
    fcc = FCMP(f1, f2, 12);
    cnd_ = !fcc;
    s5 = D_08AEF318 - (-3304);
    if (cnd_) { goto L_089EB248; }
    goto L_089EB0FC;
L_089EB0FC:;
    f0 = BITSF(LD32(s5-3304));
    f0 = f2 + f0;
    goto L_089EB104;
L_089EB104:;
    f0 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    a0 = s3 + 0;
    a1 = sp + 16;
    v0 = FBITS(f0);
    f0 = BITSF(LD32(s1-3312));
    a2 = sp + 20;
    s0 = v0 << 8;
    ST32(sp+20, FBITS(f0));
    ST32(sp+16, FBITS(f20));
    f0 = func_089EB504(a0, a1, a2);
    goto L_089EB130;
L_089EB130:;
    f1 = BITSF(LD32(s2-3308));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-3304));
    if (cnd_) { goto L_089EB240; }
    goto L_089EB148;
L_089EB148:;
    f0 = f1 + f0;
    goto L_089EB14C;
L_089EB14C:;
    f0 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    a0 = s3 + 4;
    a1 = sp + 24;
    v0 = FBITS(f0);
    f0 = BITSF(LD32(s1-3312));
    a2 = sp + 28;
    s0 = s0 + v0;
    ST32(sp+28, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+24, FBITS(f20));
    f0 = func_089EB504(a0, a1, a2);
    goto L_089EB17C;
L_089EB17C:;
    f1 = BITSF(LD32(s2-3308));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-3304));
    if (cnd_) { goto L_089EB238; }
    goto L_089EB194;
L_089EB194:;
    f0 = f1 + f0;
    goto L_089EB198;
L_089EB198:;
    f0 = BITSF(F2I(f0, 1));
    f20 = BITSF(0);
    a0 = s3 + 8;
    a1 = sp + 32;
    v0 = FBITS(f0);
    f0 = BITSF(LD32(s1-3312));
    a2 = sp + 36;
    s0 = s0 + v0;
    ST32(sp+36, FBITS(f0));
    s0 = s0 << 8;
    ST32(sp+32, FBITS(f20));
    f0 = func_089EB504(a0, a1, a2);
    goto L_089EB1C8;
L_089EB1C8:;
    f1 = BITSF(LD32(s2-3308));
    f1 = f0 * f1;
    fcc = FCMP(f20, f1, 12);
    cnd_ = !fcc;
    f0 = BITSF(LD32(s5-3304));
    if (cnd_) { goto L_089EB230; }
    goto L_089EB1E0;
L_089EB1E0:;
    f0 = f1 + f0;
    goto L_089EB1E4;
L_089EB1E4:;
    f0 = BITSF(F2I(f0, 1));
    v0 = LD32(s4);
    a2 = 1;
    v1 = FBITS(f0);
    a0 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = s0 + 0;
    a0 = s4 + a0;
    func_0885E6EC(a0, a1, a2);
    goto L_089EB208;
L_089EB208:;
    sp = sp + 96;
    return;
L_089EB230:;
    f0 = f1 - f0;
    goto L_089EB1E4;
L_089EB238:;
    f0 = f1 - f0;
    goto L_089EB198;
L_089EB240:;
    f0 = f1 - f0;
    goto L_089EB14C;
L_089EB248:;
    f0 = BITSF(LD32(s5-3304));
    f0 = f2 - f0;
    goto L_089EB104;
L_089EB254:;
    v1 = D_08C2B8B8 - (-18248);
    f2 = BITSF(LD32(v1-18248));
    v0 = v1 - 18248;
    goto L_089EB08C;
L_089EB264:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089EB058; }
    goto L_089EB270;
L_089EB270:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EB05C; }
    goto L_089EB27C;
L_089EB27C:;
    goto L_089EB068;
}

/* 089EB284 */
rv_t func_089EB284(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB284:;
    sp = sp - 16;
    v1 = LD32(a0);
    v0 = LD32(v1+164);
    t_ = v0;
    s0 = a3 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB2A0;
L_089EB2A0:;
    a0 = 1;
    v1 = 41;
    ST32(s0+8, v1);
    ST32(s0, v0);
    ST8(s0+4, a0);
    ST8(s0+7, 0);
    ST8(s0+6, 0);
    ST8(s0+5, a0);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB2D0 */
rv_t func_089EB2D0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB2D0:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = 372;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB2EC;
L_089EB2EC:;
    s0 = v0 + 0;
    a0 = v0 + 0;
    a1 = 4;
    func_089EAB88(a0, a1);
    goto L_089EB2FC;
L_089EB2FC:;
    v1 = LD32(s0);
    a0 = s0 + 0;
    v0 = LD32(v1+8);
    t_ = v0;
    a1 = s1 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB310;
L_089EB310:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB324 */
rv_t func_089EB324(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f12 = 0;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB324:;
    sp = sp - 16;
    v0 = D_08ADEA70 - (-5520);
    a1 = 1;
    s0 = a0 + 0;
    a0 = LD32(v0-5520);
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB348;
L_089EB348:;
    s1 = v0 + 0;
    v0 = LD32(s0);
    v1 = LD32(v0-12);
    s0 = s0 + v1;
    a1 = LD32(s0);
    v0 = LD32(a1+12);
    t_ = v0;
    a0 = s0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB368;
L_089EB368:;
    a2 = v0 + 0;
    v0 = D_08AEF31C - (-3300);
    f12 = BITSF(LD32(v0-3300));
    a0 = s1 + 0;
    a1 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB380;
L_089EB380:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB394 */
rv_t func_089EB394(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EB394:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EB4B8; }
    goto L_089EB3C8;
L_089EB3C8:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF320 - (-3296);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3296));
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
    t0 = D_08C2B8B8 - (-18248);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B8C8 - (-18232);
    a3 = D_08C2B8D8 - (-18216);
    v1 = t0 - 18248;
    a1 = v0 - 18232;
    a2 = a3 - 18216;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B8E8 - (-18200);
    s0 = s3 - 18200;
    ST32(v1+8, FBITS(f5));
    a0 = 4;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18232, FBITS(f5));
    v0 = 1;
    ST32(t0-18248, FBITS(f1));
    ST32(a3-18216, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB480;
L_089EB480:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18200, v0);
    if (cnd_) { goto L_089EB4AC; }
    goto L_089EB490;
L_089EB490:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089EB498;
L_089EB498:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089EB498; }
    goto L_089EB4AC;
L_089EB4AC:;
    v0 = s3 - 18200;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089EB4B8;
L_089EB4B8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EB4DC; }
    goto L_089EB4CC;
L_089EB4CC:;
    v0 = D_08C2B8E8 - (-18200);
    a0 = LD32(v0-18200);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089EB4F4; }
    goto L_089EB4DC;
L_089EB4DC:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EB4F4:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB4FC;
L_089EB4FC:;
    goto L_089EB4DC;
}

/* 089EB504 */
float func_089EB504(u32 a0, u32 a1, u32 a2)
{
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
L_089EB504:;
    f0 = BITSF(LD32(a1));
    f1 = BITSF(LD32(a0));
    fcc = FCMP(f1, f0, 12);
    cnd_ = fcc;
    if (cnd_) { goto L_089EB530; }
    goto L_089EB51C;
L_089EB51C:;
    f0 = BITSF(LD32(a2));
    fcc = FCMP(f0, f1, 12);
    cnd_ = !fcc;
    if (cnd_) { f0 = f1; goto L_089EB530; }
    goto L_089EB530;
L_089EB530:;
    return f0;
}

/* 089EB538 */
rv_t func_089EB538(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB538:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089EB394(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB54C;
L_089EB54C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB558 */
rv_t func_089EB558(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB558:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089EB394(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB56C;
L_089EB56C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB578 */
rv_t func_089EB578(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EB578:;
    sp = sp - 32;
    s0 = a0 + 140;
    s1 = a0 + 0;
    a0 = s0 + 0;
    s3 = D_08C2B928 - (-18136);
    func_08873BF8(a0);
    goto L_089EB5A4;
L_089EB5A4:;
    a1 = D_08B09128 - (-28376);
    a1 = a1 - 28376;
    a0 = s1 + 0;
    a1 = a1 + 4;
    func_08875A24(a0, a1);
    goto L_089EB5B8;
L_089EB5B8:;
    v0 = D_08AEF330 - (-3280);
    f0 = BITSF(LD32(v0-3280));
    v1 = D_08B090BC - (-28484);
    a2 = 1;
    v1 = v1 - 28484;
    a1 = (u32)-1;
    v0 = 999;
    ST32(s1+116, FBITS(f0));
    a3 = v1 + 84;
    a0 = s1 + 124;
    ST8(s1+121, a2);
    s2 = s3 - 18136;
    ST32(s1+112, FBITS(f0));
    ST8(s1+120, a2);
    ST32(s1+84, v0);
    ST32(s1, v1);
    ST32(s1+92, a1);
    ST8(s1+78, 0);
    ST32(s1+88, a1);
    ST32(s1+96, 0);
    ST32(s1+100, 0);
    ST8(s1+104, 0);
    ST32(s1+108, 0);
    ST32(s1+140, a3);
    a1 = LD32(s0+4);
    func_08A25B58(a0, a1);
    goto L_089EB620;
L_089EB620:;
    v0 = (u32)-32749;
    ST16(s0+8, v0);
    a0 = 12;
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    v0 = LD32(a1-12);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB64C;
L_089EB64C:;
    a0 = LD32(s3-18136);
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
    { rv_t r_ = func_08874C84(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB680;
L_089EB680:;
    a0 = s1 + 0;
    { rv_t r_ = func_08A58368(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB688;
L_089EB688:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB6A4 */
rv_t func_089EB6A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB6A4:;
    v0 = D_08B090BC - (-28484);
    v0 = v0 - 28484;
    v1 = v0 + 84;
    sp = sp - 16;
    ST32(a0+140, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2B928 - (-18136);
    a1 = s0 + 0;
    a0 = a0 - 18136;
    func_08AC9578(a0, a1, t1, t2, t3);
    goto L_089EB6D8;
L_089EB6D8:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_089EB6E4;
L_089EB6E4:;
    a0 = s0 + 0;
    func_08A58414(a0);
    goto L_089EB6EC;
L_089EB6EC:;
    a1 = D_08B09128 - (-28376);
    a1 = a1 - 28376;
    a0 = s0 + 0;
    a1 = a1 + 4;
    s0 = s0 + 140;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_089EB704;
L_089EB704:;
    a0 = s0 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB70C;
L_089EB70C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB71C */
rv_t func_089EB71C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB71C:;
    v0 = D_08B090BC - (-28484);
    v0 = v0 - 28484;
    v1 = v0 + 84;
    sp = sp - 16;
    ST32(a0+140, v1);
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2B928 - (-18136);
    a1 = s0 + 0;
    a0 = a0 - 18136;
    func_08AC9578(a0, a1, t1, t2, t3);
    goto L_089EB754;
L_089EB754:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    func_08874CA8(a0, a1, 0, 0, 0);
    goto L_089EB760;
L_089EB760:;
    a0 = s0 + 0;
    func_08A58414(a0);
    goto L_089EB768;
L_089EB768:;
    a1 = D_08B09128 - (-28376);
    a1 = a1 - 28376;
    a1 = a1 + 4;
    s1 = s0 + 140;
    a0 = s0 + 0;
    func_08875B90(a0, a1, 0, 0, 0);
    goto L_089EB780;
L_089EB780:;
    a0 = s1 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB788;
L_089EB788:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB790;
L_089EB790:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EB7A4 */
rv_t func_089EB7A4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EB7A4:;
    sp = sp - 32;
    s1 = 0 + 0;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_08873E44(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB7D0;
L_089EB7D0:;
    a2 = LD32(s0+84);
    v0 = 999;
    cnd_ = a2 == v0;
    a0 = D_08C2C200 - (-15872);
    if (cnd_) { goto L_089EB868; }
    goto L_089EB7E0;
L_089EB7E0:;
    v1 = a0 - 15872;
    v0 = LD32(v1+4);
    a1 = LD32(a0-15872);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + a1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089EB834; }
    goto L_089EB808;
L_089EB808:;
    a0 = LD32(a1);
    goto L_089EB80C;
L_089EB80C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EB9B0; }
    goto L_089EB824;
L_089EB824:;
    a1 = LD32(a1+4);
    goto L_089EB828;
L_089EB828:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089EB80C; }
    goto L_089EB830;
L_089EB830:;
    a0 = 0 + 0;
    goto L_089EB834;
L_089EB834:;
    cnd_ = a0 == 0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089EB868; }
    goto L_089EB83C;
L_089EB83C:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+16);
    v0 = v0 & 0x1;
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD_U8(s0+78); goto L_089EB86C; }
    goto L_089EB858;
L_089EB858:;
    v0 = 999;
    ST32(s0+84, v0);
    s1 = 0 + 0;
    ST8(s0+78, 0);
    goto L_089EB868;
L_089EB868:;
    v0 = LD_U8(s0+78);
    goto L_089EB86C;
L_089EB86C:;
    cnd_ = v0 == 0;
    v1 = LD32(s0+96);
    if (cnd_) { goto L_089EB8E4; }
    goto L_089EB874;
L_089EB874:;
    cnd_ = v1 != 0;
    v0 = 1;
    if (cnd_) { goto L_089EB8E8; }
    goto L_089EB87C;
L_089EB87C:;
    f2 = BITSF(LD32(s0+112));
    f20 = BITSF(0);
    fcc = FCMP(f20, f2, 12);
    cnd_ = !fcc;
    if (cnd_) { goto L_089EB8E8; }
    goto L_089EB894;
L_089EB894:;
    v0 = D_08B285A0 - (-31328);
    f1 = BITSF(LD32(v0-31328));
    f0 = BITSF(LD32(s0+116));
    f0 = f0 - f1;
    fcc = FCMP(f0, f20, 12);
    cnd_ = !fcc;
    ST32(s0+116, FBITS(f0));
    if (cnd_) { goto L_089EB8E4; }
    goto L_089EB8B4;
L_089EB8B4:;
    a1 = LD32(s0+92);
    v0 = (u32)-1;
    cnd_ = a1 == v0;
    if (cnd_) { ST32(s0+116, FBITS(f2)); goto L_089EB8E4; }
    goto L_089EB8C4;
L_089EB8C4:;
    a2 = LD32(s0+108);
    a0 = 4;
    { u64 r_ = func_08A4EF78(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB8D0;
L_089EB8D0:;
    cnd_ = v0 == 0;
    if (cnd_) { a1 = LD32(s0+92); goto L_089EB994; }
    goto L_089EB8D8;
L_089EB8D8:;
    v1 = LD32(s0+96);
    goto L_089EB8DC;
L_089EB8DC:;
    f2 = BITSF(LD32(s0+112));
    ST32(s0+116, FBITS(f2));
    goto L_089EB8E4;
L_089EB8E4:;
    v0 = 1;
    goto L_089EB8E8;
L_089EB8E8:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s0+100); goto L_089EB94C; }
    goto L_089EB8F0;
L_089EB8F0:;
    v0 = v1 - 1;
    goto L_089EB8F4;
L_089EB8F4:;
    v0 = v0 < 0x2u;
    cnd_ = v0 == 0;
    if (cnd_) { ST32(s0+100, v1); goto L_089EB924; }
    goto L_089EB900;
L_089EB900:;
    v0 = LD32(s0+100);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(s0+100, v1); goto L_089EB924; }
    goto L_089EB90C;
L_089EB90C:;
    cnd_ = s1 == 0;
    if (cnd_) { ST32(s0+100, v1); goto L_089EB924; }
    goto L_089EB914;
L_089EB914:;
    v0 = LD_U8(s0+120);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089EB93C; }
    goto L_089EB920;
L_089EB920:;
    ST32(s0+100, v1);
    goto L_089EB924;
L_089EB924:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EB93C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A58200(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB944;
L_089EB944:;
    v1 = LD32(s0+96);
    goto L_089EB920;
L_089EB94C:;
    cnd_ = v0 != 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_089EB8F4; }
    goto L_089EB954;
L_089EB954:;
    v0 = LD_U8(s0+121);
    cnd_ = v0 == 0;
    v0 = v1 - 1;
    if (cnd_) { goto L_089EB8F4; }
    goto L_089EB960;
L_089EB960:;
    v0 = D_08ADEA78 - (-5512);
    a0 = LD32(v0-5512);
    a1 = 1;
    { u64 r_ = func_088DF960(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EB970;
L_089EB970:;
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089EB98C; }
    goto L_089EB978;
L_089EB978:;
    a0 = v0 + 0;
    v0 = D_08AEF334 - (-3276);
    f12 = BITSF(LD32(v0-3276));
    a2 = 0 + 0;
    { rv_t r_ = func_088DFC78(a0, a1, a2, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB98C;
L_089EB98C:;
    v1 = LD32(s0+96);
    goto L_089EB8F0;
L_089EB994:;
    a2 = LD32(s0+108);
    f12 = f20;
    a0 = 4;
    a3 = 1;
    { rv_t r_ = func_08A4ED60(a0, a1, a2, a3, f12); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EB9A8;
L_089EB9A8:;
    v1 = LD32(s0+96);
    goto L_089EB8DC;
L_089EB9B0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EB828; }
    goto L_089EB9BC;
L_089EB9BC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EB828; }
    goto L_089EB9C8;
L_089EB9C8:;
    goto L_089EB834;
}

/* 089EB9D0 */
u64 func_089EB9D0(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EB9D0:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    v1 = 0 + 0;
    v0 = LD_U8(a0+132);
    a0 = D_08C2C200 - (-15872);
    cnd_ = v0 != 0;
    a0 = a0 - 15872;
    if (cnd_) { goto L_089EBA0C; }
    goto L_089EB9F8;
L_089EB9F8:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (u64)v0 | ((u64)v1 << 32);
L_089EBA0C:;
    a1 = LD32(s0+84);
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EBA14;
L_089EBA14:;
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089EBA54; }
    goto L_089EBA1C;
L_089EBA1C:;
    v1 = LD32(s0+84);
    v0 = 999;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089EBA44; }
    goto L_089EBA2C;
L_089EBA2C:;
    v1 = LD_U8(s0+78);
    goto L_089EBA30;
L_089EBA30:;
    v0 = 1;
    if (v1 != 0) a0 = v0;
    v1 = a0 + 0;
    goto L_089EB9F8;
L_089EBA40:;
    v0 = 999;
    goto L_089EBA44;
L_089EBA44:;
    cnd_ = v1 != v0;
    if (cnd_) { v1 = a0 + 0; goto L_089EB9F8; }
    goto L_089EBA4C;
L_089EBA4C:;
    v1 = LD_U8(s0+78);
    goto L_089EBA30;
L_089EBA54:;
    v1 = LD32(s0+84);
    goto L_089EBA40;
}

/* 089EBA5C */
rv_t func_089EBA5C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
L_089EBA5C:;
    return (rv_t){ v0, v1, f0 };
}

/* 089EBA64 */
rv_t func_089EBA64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EBA64:;
    sp = sp - 16;
    s1 = a0 + 0;
    a0 = a0 + 124;
    s0 = a1 + 0;
    { rv_t r_ = func_08A25B8C(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBA84;
L_089EBA84:;
    cnd_ = v0 != 0;
    v1 = 1;
    if (cnd_) { goto L_089EBAB0; }
    goto L_089EBA8C;
L_089EBA8C:;
    v1 = LD_U16(s0+16);
    v0 = 90;
    cnd_ = v1 == v0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089EBAC8; }
    goto L_089EBA9C;
L_089EBA9C:;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    { rv_t r_ = func_08873DB8(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBAAC;
L_089EBAAC:;
    v1 = v0 + 0;
    goto L_089EBAB0;
L_089EBAB0:;
    v0 = v1 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EBAC8:;
    v0 = LD32(s0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089EBAE0; }
    goto L_089EBAD8;
L_089EBAD8:;
    f12 = BITSF(LD32(s0+8));
    f0 = func_089F0D3C(a0, a1, f12);
    goto L_089EBAE0;
L_089EBAE0:;
    v1 = 1;
    goto L_089EBAB0;
}

/* 089EBAE8 */
rv_t func_089EBAE8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EBAE8:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 160;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBB04;
L_089EBB04:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_089EB578(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBB10;
L_089EBB10:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089EBB30; }
    goto L_089EBB1C;
L_089EBB1C:;
    goto L_089EBB20;
L_089EBB20:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EBB30:;
    v1 = LD32(s1);
    v0 = LD32(v1+52);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBB40;
L_089EBB40:;
    goto L_089EBB20;
}

/* 089EBB48 */
rv_t func_089EBB48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EBB48:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+84);
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EBB6C;
L_089EBB6C:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089EBBA4; }
    goto L_089EBB78;
L_089EBB78:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+12);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBB94;
L_089EBB94:;
    goto L_089EBB98;
L_089EBB98:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EBBA4:;
    { rv_t r_ = func_08875D9C(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBBAC;
L_089EBBAC:;
    goto L_089EBB98;
}

/* 089EBBB4 */
rv_t func_089EBBB4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EBBB4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a2 = 1;
    a1 = LD32(a0+84);
    a0 = D_08C2C200 - (-15872);
    a0 = a0 - 15872;
    { u64 r_ = func_08ABFE80(a0, a1, a2); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EBBD8;
L_089EBBD8:;
    v1 = v0 + 0;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089EBC10; }
    goto L_089EBBE4;
L_089EBBE4:;
    v0 = LD32(v0);
    a0 = LD32(v0-12);
    a0 = v1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBC00;
L_089EBC00:;
    goto L_089EBC04;
L_089EBC04:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EBC10:;
    { rv_t r_ = func_08875DF4(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBC18;
L_089EBC18:;
    goto L_089EBC04;
}

/* 089EBC20 */
void func_089EBC20(u32 a0, u32 a3)
{
    u32 v0 = 0, v1 = 0, a1 = 0;
    int cnd_;
L_089EBC20:;
    v0 = 1;
    ST8(a3+4, v0);
    v1 = (u32)-256;
    v0 = 2;
    ST32(a3+8, v0);
    ST32(a3, v1);
    ST8(a3+7, 0);
    ST8(a3+6, 0);
    v0 = LD_U8(a0+78);
    cnd_ = v0 == 0;
    a1 = 0 + 0;
    if (cnd_) { goto L_089EBC64; }
    goto L_089EBC4C;
L_089EBC4C:;
    v0 = LD_U8(a0+104);
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089EBC64; }
    goto L_089EBC58;
L_089EBC58:;
    v0 = LD32(a0+96);
    cnd_ = v0 == 0;
    if (cnd_) { a1 = 1; goto L_089EBC64; }
    goto L_089EBC64;
L_089EBC64:;
    ST8(a3+5, a1);
    return;
}

/* 089EBC6C */
void func_089EBC6C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0;
L_089EBC6C:;
    v0 = 0x10000u;
    v0 = v0 | 0xffe0;
    a3 = 0x1ffe0000u;
    t1 = (u32)-1;
    v1 = a1 & v0;
    a2 = a1 & a3;
    v1 = v1 ^ v0;
    a2 = a2 ^ a3;
    v0 = (a1 >> 17) & 0xfff;
    t0 = t1 + 0;
    a3 = (a1 >> 5) & 0xfff;
    if (v1 == 0) a3 = t1;
    if (a2 != 0) t0 = v0;
    v1 = a1 & 0x1;
    v0 = a1 >> 31;
    a2 = (a1 >> 1) & 0x1;
    t1 = (a1 >> 2) & 0x7;
    a1 = (a1 >> 30) & 0x1;
    ST8(a0+121, v0);
    ST8(a0+78, v1);
    ST8(a0+104, a2);
    ST32(a0+88, a3);
    ST32(a0+92, t0);
    ST32(a0+96, t1);
    ST8(a0+120, a1);
    return;
}

/* 089EBCD4 */
rv_t func_089EBCD4(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EBCD4:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EBDF8; }
    goto L_089EBD08;
L_089EBD08:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF338 - (-3272);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3272));
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
    t0 = D_08C2B8F8 - (-18184);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B908 - (-18168);
    a3 = D_08C2B918 - (-18152);
    v1 = t0 - 18184;
    a1 = v0 - 18168;
    a2 = a3 - 18152;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B928 - (-18136);
    s0 = s3 - 18136;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18168, FBITS(f5));
    v0 = 8;
    ST32(t0-18184, FBITS(f1));
    ST32(a3-18152, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBDC0;
L_089EBDC0:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18136, v0);
    if (cnd_) { goto L_089EBDEC; }
    goto L_089EBDD0;
L_089EBDD0:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089EBDD8;
L_089EBDD8:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089EBDD8; }
    goto L_089EBDEC;
L_089EBDEC:;
    v0 = s3 - 18136;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089EBDF8;
L_089EBDF8:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EBE1C; }
    goto L_089EBE0C;
L_089EBE0C:;
    v0 = D_08C2B928 - (-18136);
    a0 = LD32(v0-18136);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089EBE34; }
    goto L_089EBE1C;
L_089EBE1C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EBE34:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EBE3C;
L_089EBE3C:;
    goto L_089EBE1C;
}

/* 089EBE44 */
rv_t func_089EBE44(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EBE44:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089EBCD4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBE58;
L_089EBE58:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EBE64 */
rv_t func_089EBE64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EBE64:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089EBCD4(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBE78;
L_089EBE78:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EBE84 */
rv_t func_089EBE84(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EBE84:;
    sp = sp - 32;
    s4 = a0 + 360;
    s0 = D_08B093D8 - (-27688);
    s0 = s0 - 27688;
    s1 = a0 + 0;
    a0 = s4 + 0;
    s3 = D_08C2B968 - (-18072);
    func_08873BF8(a0);
    goto L_089EBEBC;
L_089EBEBC:;
    a0 = s1 + 96;
    a1 = s0 + 44;
    func_0885D56C(a0, a1);
    goto L_089EBEC8;
L_089EBEC8:;
    a0 = s1 + 380;
    a1 = s0 + 68;
    s0 = s0 + 4;
    func_0885EE70(a0, a1);
    goto L_089EBED8;
L_089EBED8:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_089F280C(a0, a1);
    goto L_089EBEE4;
L_089EBEE4:;
    v1 = D_08B09214 - (-28140);
    v1 = v1 - 28140;
    v0 = v1 + 268;
    ST32(s1+96, v0);
    v0 = 2;
    a0 = v1 + 432;
    ST32(s1+84, v0);
    v0 = (u32)-32754;
    s2 = s3 - 18072;
    ST32(s1+380, a0);
    a2 = v1 + 380;
    a0 = 12;
    ST32(s1, v1);
    ST32(s1+88, 0);
    ST32(s1+92, 0);
    ST16(s4+8, v0);
    a1 = LD32(s1);
    v1 = LD32(s2+4);
    ST32(s1+360, a2);
    v1 = v1 - 1;
    v0 = LD32(a1-16);
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EBF48;
L_089EBF48:;
    a0 = LD32(s3-18072);
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
    return (rv_t){ v0, v1, f0 };
}

/* 089EBF94 */
rv_t func_089EBF94(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EBF94:;
    v0 = D_08B09214 - (-28140);
    sp = sp - 32;
    v0 = v0 - 28140;
    a2 = v0 + 432;
    v1 = v0 + 268;
    s1 = a0 + 0;
    a0 = v0 + 380;
    ST32(s1+96, v1);
    a1 = s1 + 0;
    ST32(s1+380, a2);
    ST32(s1+360, a0);
    a0 = D_08C2B968 - (-18072);
    a0 = a0 - 18072;
    ST32(s1, v0);
    s0 = D_08B093D8 - (-27688);
    s0 = s0 - 27688;
    s4 = s1 + 360;
    s3 = s1 + 96;
    func_08AC982C(a0, a1, t1, t2, t3);
    goto L_089EBFF8;
L_089EBFF8:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_089F29FC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EC004;
L_089EC004:;
    a2 = LD32(s0+68);
    a3 = s0 + 68;
    s2 = s1 + 380;
    ST32(s1+380, a2);
    s0 = s0 + 44;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+380);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EC048;
L_089EC048:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC050;
L_089EC050:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EC070 */
rv_t func_089EC070(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EC070:;
    v0 = D_08B09214 - (-28140);
    sp = sp - 32;
    v0 = v0 - 28140;
    a2 = v0 + 432;
    v1 = v0 + 268;
    s1 = a0 + 0;
    a0 = v0 + 380;
    ST32(s1+96, v1);
    a1 = s1 + 0;
    ST32(s1+380, a2);
    ST32(s1+360, a0);
    a0 = D_08C2B968 - (-18072);
    a0 = a0 - 18072;
    ST32(s1, v0);
    s0 = D_08B093D8 - (-27688);
    s0 = s0 - 27688;
    s4 = s1 + 360;
    s3 = s1 + 96;
    func_08AC982C(a0, a1, t1, t2, t3);
    goto L_089EC0D4;
L_089EC0D4:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    func_089F29FC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EC0E0;
L_089EC0E0:;
    a2 = LD32(s0+68);
    a3 = s0 + 68;
    s2 = s1 + 380;
    ST32(s1+380, a2);
    s0 = s0 + 44;
    a1 = s0 + 0;
    v0 = LD32(a2-12);
    v1 = LD32(a3+4);
    a0 = s3 + 0;
    v0 = s2 + v0;
    ST32(v0, v1);
    a2 = LD32(s1+380);
    v1 = LD32(a3+8);
    v0 = LD32(a2-16);
    s2 = s2 + v0;
    ST32(s2, v1);
    func_0885D658(a0, a1, a3, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EC124;
L_089EC124:;
    a0 = s4 + 0;
    { u64 r_ = func_08873C24(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC12C;
L_089EC12C:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC134;
L_089EC134:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EC154 */
rv_t func_089EC154(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EC154:;
    sp = sp - 16;
    { rv_t r_ = func_08A03E78(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC164;
L_089EC164:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EC170 */
rv_t func_089EC170(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EC170:;
    sp = sp - 16;
    v0 = 90;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    a2 = a0 + 0;
    if (cnd_) { goto L_089EC1C4; }
    goto L_089EC188;
L_089EC188:;
    v0 = 0x8055;
    cnd_ = v1 == v0;
    if (cnd_) { a0 = LD32(a1+24); goto L_089EC1A8; }
    goto L_089EC194;
L_089EC194:;
    { rv_t r_ = func_089F2DA4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC19C;
L_089EC19C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EC1A8:;
    cnd_ = a0 == 0;
    if (cnd_) { v0 = 1; goto L_089EC19C; }
    goto L_089EC1B0;
L_089EC1B0:;
    f12 = BITSF(LD32(a1+8));
    a1 = a2 + 0;
    { rv_t r_ = func_089F18C4(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC1BC;
L_089EC1BC:;
    v0 = 1;
    goto L_089EC19C;
L_089EC1C4:;
    a0 = LD32(a1+24);
    cnd_ = a0 == 0;
    if (cnd_) { v0 = 1; goto L_089EC19C; }
    goto L_089EC1D0;
L_089EC1D0:;
    f12 = BITSF(LD32(a1+8));
    a1 = a2 + 0;
    { rv_t r_ = func_089F1784(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC1DC;
L_089EC1DC:;
    v0 = 1;
    goto L_089EC19C;
}

/* 089EC1E4 */
rv_t func_089EC1E4(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EC1E4:;
    sp = sp - 16;
    s0 = a0 + 0;
    a0 = 384;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC200;
L_089EC200:;
    s1 = v0 + 0;
    a0 = v0 + 0;
    { rv_t r_ = func_089EBE84(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC20C;
L_089EC20C:;
    a0 = s1 + 0;
    cnd_ = s1 != 0;
    a1 = s0 + 0;
    if (cnd_) { goto L_089EC22C; }
    goto L_089EC218;
L_089EC218:;
    goto L_089EC21C;
L_089EC21C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EC22C:;
    v1 = LD32(s1);
    v0 = LD32(v1+8);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC23C;
L_089EC23C:;
    goto L_089EC21C;
}

/* 089EC244 */
u32 func_089EC244(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EC244:;
    v0 = a0 + 0;
    sp = sp - 16;
    v0 = v0 & 0x300;
    a0 = (a0 >> 8) & 0x1;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EC26C; }
    goto L_089EC260;
L_089EC260:;
    v0 = func_089EC27C(a0, t1, t2, t3);
    goto L_089EC268;
L_089EC268:;
    v1 = v0 + 0;
    goto L_089EC26C;
L_089EC26C:;
    v0 = v1 + 0;
    sp = sp + 16;
    return v0;
}

/* 089EC27C */
u32 func_089EC27C(u32 a0, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int cnd_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089EC27C:;
    sp = sp - 48;
    a2 = D_08C2B968 - (-18072);
    v1 = a2 - 18072;
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
    if (cnd_) { goto L_089EC318; }
    goto L_089EC2CC;
L_089EC2CC:;
    a2 = LD32(a2-18072);
    a3 = a1 + 0;
    goto L_089EC2D4;
L_089EC2D4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089EC308; }
    goto L_089EC2EC;
L_089EC2EC:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EC31C; }
    goto L_089EC2FC;
L_089EC2FC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089EC2EC; }
    goto L_089EC308;
L_089EC308:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089EC2D4; }
    goto L_089EC318;
L_089EC318:;
    v0 = LD32(sp+8);
    goto L_089EC31C;
L_089EC31C:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089EC354; }
    goto L_089EC324;
L_089EC324:;
    s1 = LD32(v0);
    goto L_089EC328;
L_089EC328:;
    a0 = sp + 0;
    a1 = 1;
    func_08AC98E8(a0, a1);
    goto L_089EC334;
L_089EC334:;
    cnd_ = s1 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EC348; }
    goto L_089EC33C;
L_089EC33C:;
    v0 = LD32(s1+84);
    cnd_ = v0 == s0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EC418; }
    goto L_089EC348;
L_089EC348:;
    cnd_ = v0 != 0;
    if (cnd_) { s1 = LD32(v0); goto L_089EC328; }
    goto L_089EC350;
L_089EC350:;
    s1 = LD32(sp);
    goto L_089EC354;
L_089EC354:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089EC3D8; }
    goto L_089EC364;
L_089EC364:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089EC3D8; }
    goto L_089EC370;
L_089EC370:;
    v0 = LD32(s1);
    goto L_089EC374;
L_089EC374:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089EC3C8; }
    goto L_089EC388;
L_089EC388:;
    v0 = LD_U8(s0+8);
    goto L_089EC38C;
L_089EC38C:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089EC410; }
    goto L_089EC394;
L_089EC394:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089EC400; }
    goto L_089EC39C;
L_089EC39C:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089EC3A4;
L_089EC3A4:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC3B0;
L_089EC3B0:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089EC3BC;
L_089EC3BC:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089EC38C; }
    goto L_089EC3C4;
L_089EC3C4:;
    v1 = LD32(s1+4);
    goto L_089EC3C8;
L_089EC3C8:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089EC374; }
    goto L_089EC3D8;
L_089EC3D8:;
    v0 = 0 + 0;
    goto L_089EC3DC;
L_089EC3DC:;
    sp = sp + 48;
    return v0;
L_089EC400:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089EC3A4;
L_089EC410:;
    s0 = LD32(s0+4);
    goto L_089EC3BC;
L_089EC418:;
    s2 = LD32(sp);
    v0 = LD32(s2+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s2+8, v0);
    if (cnd_) { goto L_089EC4A0; }
    goto L_089EC42C;
L_089EC42C:;
    v1 = LD32(s2+4);
    cnd_ = v1 == 0;
    s4 = 0 + 0;
    if (cnd_) { goto L_089EC4A0; }
    goto L_089EC438;
L_089EC438:;
    v0 = LD32(s2);
    goto L_089EC43C;
L_089EC43C:;
    s5 = s4 << 2;
    v0 = s5 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089EC490; }
    goto L_089EC450;
L_089EC450:;
    v0 = LD_U8(s0+8);
    goto L_089EC454;
L_089EC454:;
    cnd_ = v0 == 0;
    if (cnd_) { s3 = s0 + 0; goto L_089EC4B8; }
    goto L_089EC45C;
L_089EC45C:;
    cnd_ = s3 == 0;
    if (cnd_) { v0 = LD32(s2); goto L_089EC4A8; }
    goto L_089EC464;
L_089EC464:;
    v0 = LD32(s0+4);
    ST32(s3+4, v0);
    goto L_089EC46C;
L_089EC46C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC478;
L_089EC478:;
    v0 = LD32(s2+12);
    v0 = v0 - 1;
    ST32(s2+12, v0);
    goto L_089EC484;
L_089EC484:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089EC454; }
    goto L_089EC48C;
L_089EC48C:;
    v1 = LD32(s2+4);
    goto L_089EC490;
L_089EC490:;
    s4 = s4 + 1;
    v0 = s4 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s2); goto L_089EC43C; }
    goto L_089EC4A0;
L_089EC4A0:;
    v0 = s1 + 0;
    goto L_089EC3DC;
L_089EC4A8:;
    v1 = LD32(s0+4);
    v0 = s5 + v0;
    ST32(v0, v1);
    goto L_089EC46C;
L_089EC4B8:;
    s0 = LD32(s0+4);
    goto L_089EC484;
}

/* 089EC4C0 */
rv_t func_089EC4C0(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EC4C0:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EC5E4; }
    goto L_089EC4F4;
L_089EC4F4:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF33C - (-3268);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3268));
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
    t0 = D_08C2B938 - (-18120);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B948 - (-18104);
    a3 = D_08C2B958 - (-18088);
    v1 = t0 - 18120;
    a1 = v0 - 18104;
    a2 = a3 - 18088;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2B968 - (-18072);
    s0 = s3 - 18072;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18104, FBITS(f5));
    v0 = 8;
    ST32(t0-18120, FBITS(f1));
    ST32(a3-18088, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC5AC;
L_089EC5AC:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-18072, v0);
    if (cnd_) { goto L_089EC5D8; }
    goto L_089EC5BC;
L_089EC5BC:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089EC5C4;
L_089EC5C4:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089EC5C4; }
    goto L_089EC5D8;
L_089EC5D8:;
    v0 = s3 - 18072;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089EC5E4;
L_089EC5E4:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EC608; }
    goto L_089EC5F8;
L_089EC5F8:;
    v0 = D_08C2B968 - (-18072);
    a0 = LD32(v0-18072);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089EC620; }
    goto L_089EC608;
L_089EC608:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EC620:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC628;
L_089EC628:;
    goto L_089EC608;
}

/* 089EC630 */
rv_t func_089EC630(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EC630:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089EC4C0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC644;
L_089EC644:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EC650 */
rv_t func_089EC650(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EC650:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089EC4C0(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC664;
L_089EC664:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EC670 */
void func_089EC670(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0, f20 = 0;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089EC670:;
    sp = sp - 48;
    s5 = a0 + 272;
    s1 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08B09C70 - (-25488);
    s0 = s0 - 25488;
    s2 = s1 + 196;
    s4 = D_08C2BA28 - (-17880);
    s3 = s4 - 17880;
    func_08873E94(a0, a1);
    goto L_089EC6B8;
L_089EC6B8:;
    a2 = (u32)-1;
    a1 = s0 + 24;
    a0 = s2 + 0;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089EC6CC;
L_089EC6CC:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A063EC(a0, a1);
    goto L_089EC6D8;
L_089EC6D8:;
    v0 = D_08AEF350 - (-3248);
    v1 = D_08B09A60 - (-26016);
    f20 = BITSF(LD32(v0-3248));
    v1 = v1 - 26016;
    v0 = v1 + 248;
    a1 = v1 + 452;
    ST32(s1+196, v0);
    v0 = 2;
    a0 = s1 + 92;
    ST32(s1+272, a1);
    ST32(s1+84, v0);
    ST32(s1, v1);
    ST32(s1+88, FBITS(f20));
    func_089EE0B4(a0);
    goto L_089EC710;
L_089EC710:;
    v0 = 4;
    ST32(s1+176, v0);
    v0 = 999;
    v1 = D_08AEF354 - (-3244);
    ST32(s1+184, FBITS(f20));
    a0 = s2 + 0;
    ST32(s1+188, v0);
    ST32(s1+180, 0);
    ST32(s1+192, 0);
    v0 = LD32(s2+64);
    f12 = BITSF(LD32(v1-3244));
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s2+64, v0);
    func_0886422C(a0, f12);
    goto L_089EC748;
L_089EC748:;
    v0 = (u32)-32760;
    ST16(s5+8, v0);
    a0 = 12;
    a1 = LD32(s1);
    v1 = LD32(s3+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC774;
L_089EC774:;
    a0 = LD32(s4-17880);
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
    sp = sp + 48;
    return;
}

/* 089EC7C8 */
rv_t func_089EC7C8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EC7C8:;
    v1 = D_08B09A60 - (-26016);
    sp = sp - 32;
    v1 = v1 - 26016;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+272, a0);
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    ST32(s1+196, v0);
    s0 = D_08B09C70 - (-25488);
    s0 = s0 - 25488;
    s3 = s1 + 272;
    func_08AC9B60(a0, a1, t1, t2, t3);
    goto L_089EC81C;
L_089EC81C:;
    s2 = s1 + 196;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089EC830;
L_089EC830:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EC83C;
L_089EC83C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC844;
L_089EC844:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EC860 */
rv_t func_089EC860(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EC860:;
    v1 = D_08B09A60 - (-26016);
    sp = sp - 32;
    v1 = v1 - 26016;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+272, a0);
    a0 = D_08C2BA28 - (-17880);
    a0 = a0 - 17880;
    ST32(s1+196, v0);
    s0 = D_08B09C70 - (-25488);
    s0 = s0 - 25488;
    s3 = s1 + 272;
    func_08AC9B60(a0, a1, t1, t2, t3);
    goto L_089EC8B4;
L_089EC8B4:;
    s2 = s1 + 196;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089EC8C8;
L_089EC8C8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EC8D4;
L_089EC8D4:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC8DC;
L_089EC8DC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC8E4;
L_089EC8E4:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EC900 */
rv_t func_089EC900(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089EC900:;
    sp = sp - 64;
    s1 = a0 + 0;
    { rv_t r_ = func_08A06744(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EC928;
L_089EC928:;
    v0 = LD32(s1+192);
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089ECB00; }
    goto L_089EC938;
L_089EC938:;
    a2 = D_08C2A880 - (-22400);
    v0 = a2 - 22400;
    v1 = LD32(v0+8);
    a1 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    s2 = 4;
    ST32(v0+8, v1);
    f20 = BITSF(0);
    ST32(sp+4, 0);
    a0 = sp + 0;
    cnd_ = a1 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089EC9B8; }
    goto L_089EC96C;
L_089EC96C:;
    a2 = LD32(a2-22400);
    a3 = a1 + 0;
    goto L_089EC974;
L_089EC974:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089EC9A8; }
    goto L_089EC98C;
L_089EC98C:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EC9BC; }
    goto L_089EC99C;
L_089EC99C:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089EC98C; }
    goto L_089EC9A8;
L_089EC9A8:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089EC974; }
    goto L_089EC9B8;
L_089EC9B8:;
    v0 = LD32(sp+8);
    goto L_089EC9BC;
L_089EC9BC:;
    cnd_ = v0 == 0;
    s3 = 4;
    if (cnd_) { goto L_089ECB4C; }
    goto L_089EC9C4;
L_089EC9C4:;
    s0 = LD32(v0);
    goto L_089EC9C8;
L_089EC9C8:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC9D4;
L_089EC9D4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_089ED04C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EC9E0;
L_089EC9E0:;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089ECA1C; }
    goto L_089EC9E8;
L_089EC9E8:;
    cnd_ = s2 == s3;
    v0 = LD32(s0+12);
    if (cnd_) { goto L_089EC9F8; }
    goto L_089EC9F0;
L_089EC9F0:;
    cnd_ = s2 != v0;
    if (cnd_) { f1 = BITSF(LD32(s1+180)); goto L_089ECA34; }
    goto L_089EC9F8;
L_089EC9F8:;
    v1 = LD32(s0);
    s2 = v0 + 0;
    v0 = LD32(v1-16);
    v0 = s0 + v0;
    v1 = LD32(v0+4);
    ST32(s1+188, v1);
    f0 = BITSF(LD32(s0+312));
    f20 = f20 + f0;
    v0 = LD32(sp+8);
    goto L_089ECA1C;
L_089ECA1C:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089EC9C8; }
    goto L_089ECA24;
L_089ECA24:;
    v0 = 0 + 0;
    cnd_ = v0 == 0;
    v0 = D_08AEF35C - (-3236);
    if (cnd_) { goto L_089ECB50; }
    goto L_089ECA30;
L_089ECA30:;
    f1 = BITSF(LD32(s1+180));
    goto L_089ECA34;
L_089ECA34:;
    f2 = BITSF(0);
    fcc = FCMP(f2, f1, 12);
    cnd_ = fcc;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089ECA5C; }
    goto L_089ECA48;
L_089ECA48:;
    v0 = D_08AEF358 - (-3240);
    f0 = BITSF(LD32(v0-3240));
    ST32(s1+180, FBITS(f0));
    f1 = f0;
    v0 = D_08B285A0 - (-31328);
    goto L_089ECA5C;
L_089ECA5C:;
    f0 = BITSF(LD32(v0-31328));
    f0 = f1 - f0;
    fcc = FCMP(f0, f2, 14);
    cnd_ = fcc;
    ST32(s1+180, FBITS(f0));
    if (cnd_) { goto L_089ECB38; }
    goto L_089ECA74;
L_089ECA74:;
    s1 = LD32(sp);
    goto L_089ECA78;
L_089ECA78:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089ECAFC; }
    goto L_089ECA88;
L_089ECA88:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089ECAFC; }
    goto L_089ECA94;
L_089ECA94:;
    v0 = LD32(s1);
    goto L_089ECA98;
L_089ECA98:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089ECAEC; }
    goto L_089ECAAC;
L_089ECAAC:;
    v0 = LD_U8(s0+8);
    goto L_089ECAB0;
L_089ECAB0:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089ECB30; }
    goto L_089ECAB8;
L_089ECAB8:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089ECB20; }
    goto L_089ECAC0;
L_089ECAC0:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089ECAC8;
L_089ECAC8:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECAD4;
L_089ECAD4:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089ECAE0;
L_089ECAE0:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089ECAB0; }
    goto L_089ECAE8;
L_089ECAE8:;
    v1 = LD32(s1+4);
    goto L_089ECAEC;
L_089ECAEC:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089ECA98; }
    goto L_089ECAFC;
L_089ECAFC:;
    goto L_089ECB00;
L_089ECB00:;
    sp = sp + 64;
    return (rv_t){ v0, v1, f0 };
L_089ECB20:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089ECAC8;
L_089ECB30:;
    s0 = LD32(s0+4);
    goto L_089ECAE0;
L_089ECB38:;
    a0 = s1 + 0;
    a1 = 4;
    { u64 r_ = func_089ECDE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECB44;
L_089ECB44:;
    s1 = LD32(sp);
    goto L_089ECA78;
L_089ECB4C:;
    v0 = D_08AEF35C - (-3236);
    goto L_089ECB50;
L_089ECB50:;
    f0 = BITSF(LD32(v0-3236));
    f2 = f20;
    fcc = FCMP(f20, f0, 14);
    cnd_ = fcc;
    ST32(s1+180, 0);
    if (cnd_) { goto L_089ECB6C; }
    goto L_089ECB68;
L_089ECB68:;
    f2 = f0;
    goto L_089ECB6C;
L_089ECB6C:;
    v0 = 4;
    cnd_ = s2 == v0;
    if (cnd_) { s1 = LD32(sp); goto L_089ECA78; }
    goto L_089ECB78;
L_089ECB78:;
    v1 = LD32(s1+12);
    cnd_ = s2 == v1;
    if (cnd_) { v0 = D_08B285A0 - (-31328); goto L_089ECC1C; }
    goto L_089ECB84;
L_089ECB84:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(s1+176); goto L_089ECBDC; }
    goto L_089ECB8C;
L_089ECB8C:;
    v0 = D_08B285A0 - (-31328);
    goto L_089ECB90;
L_089ECB90:;
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s1+184));
    f0 = f0 * f2;
    f2 = BITSF(0);
    f1 = f1 - f0;
    fcc = FCMP(f1, f2, 14);
    cnd_ = !fcc;
    ST32(s1+184, FBITS(f1));
    if (cnd_) { goto L_089ECBD4; }
    goto L_089ECBB4;
L_089ECBB4:;
    v0 = 4;
    a0 = s1 + 0;
    cnd_ = v1 == v0;
    a1 = s2 + 0;
    if (cnd_) { goto L_089ECBCC; }
    goto L_089ECBC4;
L_089ECBC4:;
    a0 = s1 + 0;
    a1 = 4;
    goto L_089ECBCC;
L_089ECBCC:;
    { u64 r_ = func_089ECDE4(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECBD4;
L_089ECBD4:;
    ST32(s1+176, s2);
    goto L_089ECA74;
L_089ECBDC:;
    cnd_ = v0 == v1;
    if (cnd_) { v0 = D_08B285A0 - (-31328); goto L_089ECB90; }
    goto L_089ECBE4;
L_089ECBE4:;
    cnd_ = s2 == v0;
    v0 = D_08B285A0 - (-31328);
    if (cnd_) { goto L_089ECB8C; }
    goto L_089ECBEC;
L_089ECBEC:;
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s1+184));
    f3 = BITSF(LD32(s1+88));
    f0 = f0 * f2;
    f1 = f1 + f0;
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    ST32(s1+184, FBITS(f1));
    if (cnd_) { goto L_089ECA74; }
    goto L_089ECC10;
L_089ECC10:;
    ST32(s1+176, s2);
    goto L_089ECC14;
L_089ECC14:;
    ST32(s1+184, FBITS(f3));
    goto L_089ECA74;
L_089ECC1C:;
    f0 = BITSF(LD32(v0-31328));
    f1 = BITSF(LD32(s1+184));
    f3 = BITSF(LD32(s1+88));
    f0 = f0 * f2;
    f1 = f1 + f0;
    fcc = FCMP(f3, f1, 14);
    cnd_ = !fcc;
    if (cnd_) { f3 = f1; goto L_089ECC14; }
    goto L_089ECC40;
L_089ECC40:;
    ST32(s1+184, FBITS(f3));
    goto L_089ECA74;
}

/* 089ECC48 */
rv_t func_089ECC48(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089ECC48:;
    sp = sp - 16;
    v0 = 0x800b;
    a2 = a1 + 0;
    v1 = LD_U16(a1+16);
    cnd_ = v1 == v0;
    s1 = a0 + 0;
    if (cnd_) { goto L_089ECD54; }
    goto L_089ECC6C;
L_089ECC6C:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8013;
    if (cnd_) { goto L_089ECCEC; }
    goto L_089ECC78;
L_089ECC78:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = s1 + 0; goto L_089ECCA0; }
    goto L_089ECC84;
L_089ECC84:;
    v0 = (s32)v1 < 5;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089ECCD4; }
    goto L_089ECC90;
L_089ECC90:;
    v0 = 0x800a;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+192); goto L_089ECCC4; }
    goto L_089ECC9C;
L_089ECC9C:;
    a0 = s1 + 0;
    goto L_089ECCA0;
L_089ECCA0:;
    a1 = a2 + 0;
    { rv_t r_ = func_08A067A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ECCA8;
L_089ECCA8:;
    s0 = v0 + 0;
    goto L_089ECCAC;
L_089ECCAC:;
    v0 = s0 + 0;
    goto L_089ECCB0;
L_089ECCB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089ECCC4:;
    s0 = 1;
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    goto L_089ECCCC;
L_089ECCCC:;
    ST32(s1+192, v0);
    goto L_089ECCAC;
L_089ECCD4:;
    { rv_t r_ = func_08A067A8(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ECCDC;
L_089ECCDC:;
    s0 = v0 + 0;
    { u64 r_ = func_0897367C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECCE4;
L_089ECCE4:;
    v0 = s0 + 0;
    goto L_089ECCB0;
L_089ECCEC:;
    cnd_ = v1 == v0;
    if (cnd_) { v0 = LD32(a0+192); goto L_089ECD48; }
    goto L_089ECCF4;
L_089ECCF4:;
    v0 = (s32)v0 < (s32)v1;
    cnd_ = v0 != 0;
    v0 = 0x8014;
    if (cnd_) { goto L_089ECD30; }
    goto L_089ECD00;
L_089ECD00:;
    v0 = 0x800c;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089ECCA0; }
    goto L_089ECD0C;
L_089ECD0C:;
    a1 = LD32(a1+24);
    cnd_ = a1 == 0;
    if (cnd_) { s0 = 1; goto L_089ECCAC; }
    goto L_089ECD18;
L_089ECD18:;
    a0 = LD32(a1+4);
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECD20;
L_089ECD20:;
    ST32(s1+12, v0);
    { u64 r_ = func_0897367C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECD28;
L_089ECD28:;
    s0 = 1;
    goto L_089ECCAC;
L_089ECD30:;
    cnd_ = v1 != v0;
    if (cnd_) { a0 = s1 + 0; goto L_089ECCA0; }
    goto L_089ECD38;
L_089ECD38:;
    v0 = LD32(a0+192);
    s0 = 1;
    v0 = v0 | 0x2;
    goto L_089ECCCC;
L_089ECD48:;
    s0 = 1;
    v0 = (v0 & ~(0x1u << 1)) | ((0 & 0x1) << 1);
    goto L_089ECCCC;
L_089ECD54:;
    v0 = LD32(a0+192);
    s0 = 1;
    v0 = v0 | 0x1;
    goto L_089ECCCC;
}

/* 089ECD64 */
rv_t func_089ECD64(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089ECD64:;
    sp = sp - 16;
    s1 = a0 + 0;
    a1 = 112;
    a3 = 0 + 0;
    v0 = LD32(a0);
    a0 = 90;
    v1 = LD32(v0-16);
    v1 = s1 + v1;
    a2 = LD_U16(v1+8);
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECD98;
L_089ECD98:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089ECDD0; }
    goto L_089ECDA0;
L_089ECDA0:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089ECDB8; }
    goto L_089ECDB0;
L_089ECDB0:;
    func_089EDDEC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089ECDB8;
L_089ECDB8:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ECDD0;
L_089ECDD0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089ECDE4 */
u64 func_089ECDE4(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089ECDE4:;
    sp = sp - 48;
    v0 = 4;
    s2 = a1 + 0;
    s1 = a0 + 0;
    f0 = BITSF(LD32(a0+88));
    ST32(a0+184, FBITS(f0));
    ST32(s1+12, a1);
    cnd_ = a1 == v0;
    ST32(a0+176, v0);
    if (cnd_) { goto L_089ED030; }
    goto L_089ECE1C;
L_089ECE1C:;
    v1 = D_08C2A880 - (-22400);
    v1 = v1 - 22400;
    v0 = LD32(v1+8);
    a1 = 1;
    a0 = sp + 0;
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp, v1);
    ST32(sp+4, 0);
    ST32(sp+8, 0);
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECE48;
L_089ECE48:;
    a1 = LD32(sp+8);
    cnd_ = a1 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089ECE98; }
    goto L_089ECE54;
L_089ECE54:;
    s3 = 999;
    s0 = LD32(a1);
    goto L_089ECE5C;
L_089ECE5C:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC44C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECE68;
L_089ECE68:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { u64 r_ = func_089ED04C(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECE74;
L_089ECE74:;
    cnd_ = v0 == 0;
    a1 = LD32(sp+8);
    if (cnd_) { goto L_089ECE8C; }
    goto L_089ECE7C;
L_089ECE7C:;
    v0 = LD32(s0+12);
    cnd_ = v0 == s2;
    if (cnd_) { a1 = LD32(s0+84); goto L_089ECF18; }
    goto L_089ECE88;
L_089ECE88:;
    a1 = LD32(sp+8);
    goto L_089ECE8C;
L_089ECE8C:;
    cnd_ = a1 != 0;
    if (cnd_) { s0 = LD32(a1); goto L_089ECE5C; }
    goto L_089ECE94;
L_089ECE94:;
    v0 = LD32(s1);
    goto L_089ECE98;
L_089ECE98:;
    a1 = 10000;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ECEA8;
L_089ECEA8:;
    a0 = s2 + 0;
    { u64 r_ = func_08A26FC0(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECEB0;
L_089ECEB0:;
    cnd_ = v0 != 0;
    v0 = LD32(s1);
    if (cnd_) { goto L_089ECF10; }
    goto L_089ECEB8;
L_089ECEB8:;
    a1 = 10002;
    goto L_089ECEBC;
L_089ECEBC:;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ECEC8;
L_089ECEC8:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089ECF00; }
    goto L_089ECEDC;
L_089ECEDC:;
    { u64 r_ = func_0897367C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECEE4;
L_089ECEE4:;
    sp = sp + 48;
    return (u64)v0 | ((u64)v1 << 32);
L_089ECF00:;
    { u64 r_ = func_08ABC4F0(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ECF08;
L_089ECF08:;
    goto L_089ECEDC;
L_089ECF10:;
    a1 = 10003;
    goto L_089ECEBC;
L_089ECF18:;
    v1 = D_08C2C664 - (-14748);
    v0 = v1 - 14748;
    cnd_ = a1 == s3;
    a2 = a1 + 0;
    if (cnd_) { goto L_089ECF80; }
    goto L_089ECF28;
L_089ECF28:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-14748);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a0 = LD32(v0);
    cnd_ = a0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089ECF6C; }
    goto L_089ECF4C;
L_089ECF4C:;
    v1 = LD32(a0);
    goto L_089ECF50;
L_089ECF50:;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089ED010; }
    goto L_089ECF5C;
L_089ECF5C:;
    a0 = LD32(a0+4);
    goto L_089ECF60;
L_089ECF60:;
    cnd_ = a0 != 0;
    if (cnd_) { v1 = LD32(a0); goto L_089ECF50; }
    goto L_089ECF68;
L_089ECF68:;
    v1 = 0 + 0;
    goto L_089ECF6C;
L_089ECF6C:;
    cnd_ = v1 == 0;
    if (cnd_) { v1 = D_08C2A08C - (-24436); goto L_089ECF84; }
    goto L_089ECF74;
L_089ECF74:;
    a0 = LD32(v1+192);
    func_08A64E44(a0);
    goto L_089ECF7C;
L_089ECF7C:;
    a1 = LD32(s0+84);
    goto L_089ECF80;
L_089ECF80:;
    v1 = D_08C2A08C - (-24436);
    goto L_089ECF84;
L_089ECF84:;
    cnd_ = a1 == s3;
    v0 = v1 - 24436;
    if (cnd_) { goto L_089ECE88; }
    goto L_089ECF8C;
L_089ECF8C:;
    v0 = LD32(v0+4);
    v1 = LD32(v1-24436);
    v0 = v0 - 1;
    v0 = a1 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089ECFD0; }
    goto L_089ECFB0;
L_089ECFB0:;
    a0 = LD32(v1);
    goto L_089ECFB4;
L_089ECFB4:;
    v0 = LD32(a0+4);
    cnd_ = v0 == a1;
    if (cnd_) { v0 = LD32(a0+16); goto L_089ECFF0; }
    goto L_089ECFC0;
L_089ECFC0:;
    v1 = LD32(v1+4);
    goto L_089ECFC4;
L_089ECFC4:;
    cnd_ = v1 != 0;
    if (cnd_) { a0 = LD32(v1); goto L_089ECFB4; }
    goto L_089ECFCC;
L_089ECFCC:;
    a0 = 0 + 0;
    goto L_089ECFD0;
L_089ECFD0:;
    cnd_ = a0 == 0;
    if (cnd_) { a1 = LD32(sp+8); goto L_089ECE8C; }
    goto L_089ECFD8;
L_089ECFD8:;
    v1 = LD32(a0);
    v0 = LD32(v1+80);
    t_ = v0;
    a1 = 5;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ECFE8;
L_089ECFE8:;
    a1 = LD32(sp+8);
    goto L_089ECE8C;
L_089ECFF0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089ECFC4; }
    goto L_089ECFFC;
L_089ECFFC:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089ECFC4; }
    goto L_089ED008;
L_089ED008:;
    goto L_089ECFD0;
L_089ED010:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089ECF60; }
    goto L_089ED01C;
L_089ED01C:;
    v0 = LD_U8(a0+8);
    cnd_ = v0 != 0;
    if (cnd_) { a0 = LD32(a0+4); goto L_089ECF60; }
    goto L_089ED028;
L_089ED028:;
    goto L_089ECF6C;
L_089ED030:;
    v0 = LD32(a0);
    a1 = 10001;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED044;
L_089ED044:;
    goto L_089ECEDC;
}

/* 089ED04C */
u64 func_089ED04C(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, t0 = 0, t1 = 0, t2 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089ED04C:;
    sp = sp - 64;
    v0 = D_08ADE9F4 - (-5644);
    s1 = a0 + 0;
    s0 = a1 + 0;
    f0 = BITSF(LD32(v0-5644));
    cnd_ = a1 == 0;
    f20 = f0 * f0;
    if (cnd_) { goto L_089ED0B4; }
    goto L_089ED078;
L_089ED078:;
    v0 = LD_U8(a1+5);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089ED0B8; }
    goto L_089ED084;
L_089ED084:;
    v0 = LD_U8(a1+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089ED0BC; }
    goto L_089ED090;
L_089ED090:;
    v1 = LD32(a1);
    f0 = BITSF(0);
    v0 = LD32(v1-12);
    v0 = a1 + v0;
    f1 = BITSF(LD32(v0+40));
    fcc = FCMP(f1, f0, 14);
    cnd_ = !fcc;
    a0 = a1 + 0;
    if (cnd_) { goto L_089ED0D4; }
    goto L_089ED0B4;
L_089ED0B4:;
    v1 = 0 + 0;
    goto L_089ED0B8;
L_089ED0B8:;
    goto L_089ED0BC;
L_089ED0BC:;
    v0 = v1 + 0;
    sp = sp + 64;
    return (u64)v0 | ((u64)v1 << 32);
L_089ED0D4:;
    v0 = func_089E3BC4(a0);
    goto L_089ED0DC;
L_089ED0DC:;
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089ED0B8; }
    goto L_089ED0E4;
L_089ED0E4:;
    a0 = s0 + 0;
    { u64 r_ = func_089E3BD4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ED0EC;
L_089ED0EC:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089ED108; }
    goto L_089ED0F4;
L_089ED0F4:;
    v0 = LD32(s1+192);
    v0 = v0 & 0x2;
    cnd_ = v0 != 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089ED0B8; }
    goto L_089ED104;
L_089ED104:;
    v0 = LD32(s0);
    goto L_089ED108;
L_089ED108:;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED120;
L_089ED120:;
    s0 = v0 + 0;
    v0 = LD32(s1);
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED140;
L_089ED140:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f2 = BITSF(LD32(s0));
    f3 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f2 = f2 - f0;
    f3 = f3 - f1;
    {u32 a_=sp+(16);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v1 = 1;
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
    fcc = FCMP(f0, f20, 14);
    ST32(sp+4, FBITS(f3));
    cnd_ = fcc;
    ST32(sp+8, FBITS(f4));
    if (cnd_) { goto L_089ED0B8; }
    goto L_089ED1A4;
L_089ED1A4:;
    v1 = 0 + 0;
    goto L_089ED0B8;
}

/* 089ED1AC */
rv_t func_089ED1AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089ED1AC:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 6;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED1D0;
L_089ED1D0:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A07314(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED1DC;
L_089ED1DC:;
    a1 = LD32(s0+84);
    a0 = s1 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED1E8;
L_089ED1E8:;
    f12 = BITSF(LD32(s0+88));
    a0 = s1 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED1F4;
L_089ED1F4:;
    a1 = LD32(s0+192);
    a0 = s1 + 0;
    s0 = s0 + 92;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED204;
L_089ED204:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_089EE110(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED210;
L_089ED210:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089ED224 */
rv_t func_089ED224(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089ED224:;
    sp = sp - 32;
    s1 = a1 + 0;
    a1 = sp + 0;
    s0 = a0 + 0;
    a0 = s1 + 0;
    ST32(sp, 0);
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED24C;
L_089ED24C:;
    a0 = s0 + 0;
    a1 = s1 + 0;
    { rv_t r_ = func_08A073E0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED258;
L_089ED258:;
    v1 = LD32(sp);
    cnd_ = v1 == 0;
    if (cnd_) { v0 = LD32(s0); goto L_089ED350; }
    goto L_089ED264;
L_089ED264:;
    v0 = (s32)v1 < 2;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089ED328; }
    goto L_089ED270;
L_089ED270:;
    v0 = (s32)v1 < 3;
    cnd_ = v0 == 0;
    a0 = s1 + 0;
    if (cnd_) { goto L_089ED2FC; }
    goto L_089ED27C;
L_089ED27C:;
    v0 = (s32)v1 < 4;
    cnd_ = v0 == 0;
    a0 = s0 + 92;
    if (cnd_) { goto L_089ED2EC; }
    goto L_089ED288;
L_089ED288:;
    v0 = (s32)v1 < 6;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s0); goto L_089ED2A8; }
    goto L_089ED294;
L_089ED294:;
    goto L_089ED298;
L_089ED298:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089ED2A8:;
    a1 = 0 + 0;
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    { rv_t r_ = func_088642DC(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED2B8;
L_089ED2B8:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+16);
    t_ = v0;
    a1 = 0 + 0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED2D4;
L_089ED2D4:;
    v1 = LD32(s0);
    a0 = LD32(v1-12);
    a0 = s0 + a0;
    { u64 r_ = func_08864990(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089ED2E4;
L_089ED2E4:;
    goto L_089ED298;
L_089ED2EC:;
    a1 = s1 + 0;
    f0 = func_089EE198(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089ED2F4;
L_089ED2F4:;
    v1 = LD32(sp);
    goto L_089ED288;
L_089ED2FC:;
    a1 = sp + 8;
    ST32(sp+8, 0);
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED308;
L_089ED308:;
    v1 = LD32(sp);
    v0 = (s32)v1 < 5;
    cnd_ = v0 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089ED320; }
    goto L_089ED318;
L_089ED318:;
    ST32(s0+192, v0);
    goto L_089ED27C;
L_089ED320:;
    v0 = 0 < v0;
    goto L_089ED318;
L_089ED328:;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED330;
L_089ED330:;
    a1 = s0 + 88;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED33C;
L_089ED33C:;
    a1 = LD32(sp+4);
    a0 = s0 + 0;
    f0 = func_089EDDAC(a0, a1);
    goto L_089ED348;
L_089ED348:;
    v1 = LD32(sp);
    goto L_089ED270;
L_089ED350:;
    v1 = D_08AEF360 - (-3232);
    f12 = BITSF(LD32(v1-3232));
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    func_0886422C(a0, f12);
    goto L_089ED364;
L_089ED364:;
    v1 = LD32(sp);
    goto L_089ED264;
}

/* 089ED36C */
u32 func_089ED36C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    float f0 = 0, f1 = 0, f2 = 0;
    u32 hi = 0, lo = 0;
    int cnd_;
    u32 t_;
    u8 stack_[96] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 96);
L_089ED36C:;
    sp = sp - 96;
    a3 = a3 & 0xff;
    s4 = a1 + 0;
    s3 = a0 + 0;
    s2 = a2 + 0;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_089ED440; }
    goto L_089ED3A4;
L_089ED3A4:;
    s5 = a0 + 92;
    a0 = s5 + 0;
    v0 = func_089EE0E4(a0);
    goto L_089ED3B0;
L_089ED3B0:;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s3); goto L_089ED444; }
    goto L_089ED3B8;
L_089ED3B8:;
    a2 = D_08B25AC0 - (23232);
    v1 = LD32(a2+23232);
    t0 = a2 + 23232;
    a1 = LD32(t0+4);
    v0 = (u32)((s32)v1 >> 16);
    v1 = v1 << 16;
    v1 = v1 + v0;
    v1 = v1 + a1;
    a0 = v1 >> 1;
    v0 = 100;
    { u32 x_ = a0, y_ = v0; if (y_ == 0) { lo = 0xFFFFFFFFu; hi = x_; } else { lo = x_ / y_; hi = x_ % y_; } }
    a1 = a1 + v1;
    ST32(t0+4, a1);
    s1 = 0 + 0;
    s6 = D_08C2BA38 - (-17864);
    ST32(a2+23232, v1);
    a3 = hi;
    s0 = a3 + 1;
    a1 = s1 + 0;
    goto L_089ED404;
L_089ED404:;
    a0 = s5 + 0;
    v0 = func_089EE0F4(a0, a1);
    goto L_089ED40C;
L_089ED40C:;
    a2 = LD32(v0);
    s1 = s1 + 1;
    a0 = (s32)s1 < 10;
    ST32(sp, a2);
    v1 = LD32(v0+4);
    v0 = 999;
    cnd_ = a2 == v0;
    ST32(sp+4, v1);
    if (cnd_) { goto L_089ED438; }
    goto L_089ED42C;
L_089ED42C:;
    s0 = s0 - v1;
    cnd_ = (s32)s0 <= 0;
    v0 = s6 - 17864;
    if (cnd_) { goto L_089ED4F8; }
    goto L_089ED438;
L_089ED438:;
    cnd_ = a0 != 0;
    a1 = s1 + 0;
    if (cnd_) { goto L_089ED404; }
    goto L_089ED440;
L_089ED440:;
    v0 = LD32(s3);
    goto L_089ED444;
L_089ED444:;
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED45C;
L_089ED45C:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    ST32(s4+8, FBITS(f0));
    a0 = sp + 16;
    a1 = s3 + 0;
    ST32(s4, FBITS(f1));
    ST32(s4+4, FBITS(f2));
    func_089ED630(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089ED480;
L_089ED480:;
    f0 = BITSF(LD32(sp+16));
    f1 = BITSF(LD32(sp+48));
    ST32(s2, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(s2+32, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(s2+8, FBITS(f1));
    ST32(s2+12, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+36));
    ST32(s2+16, FBITS(f1));
    ST32(s2+20, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    ST32(s2+24, FBITS(f1));
    ST32(s2+28, FBITS(f0));
    v0 = LD32(s3+192);
    goto L_089ED4CC;
L_089ED4CC:;
    v0 = (v0 >> 4) & 0x1;
    goto L_089ED4D0;
L_089ED4D0:;
    sp = sp + 96;
    return v0;
L_089ED4F8:;
    v1 = LD32(v0+4);
    a0 = LD32(s6-17864);
    v1 = v1 - 1;
    v1 = a2 & v1;
    v1 = v1 << 2;
    v1 = v1 + a0;
    v1 = LD32(v1);
    cnd_ = v1 == 0;
    s0 = 0 + 0;
    if (cnd_) { goto L_089ED53C; }
    goto L_089ED51C;
L_089ED51C:;
    a1 = LD32(v1);
    goto L_089ED520;
L_089ED520:;
    v0 = LD32(a1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(a1+16); goto L_089ED610; }
    goto L_089ED52C;
L_089ED52C:;
    v1 = LD32(v1+4);
    goto L_089ED530;
L_089ED530:;
    cnd_ = v1 != 0;
    if (cnd_) { a1 = LD32(v1); goto L_089ED520; }
    goto L_089ED538;
L_089ED538:;
    s0 = 0 + 0;
    goto L_089ED53C;
L_089ED53C:;
    cnd_ = s0 == 0;
    if (cnd_) { v0 = LD32(s3); goto L_089ED444; }
    goto L_089ED544;
L_089ED544:;
    v1 = LD_U8(s0+76);
    cnd_ = v1 == 0;
    v0 = s0 + 28;
    if (cnd_) { goto L_089ED5EC; }
    goto L_089ED550;
L_089ED550:;
    f0 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0));
    f2 = BITSF(LD32(v0+4));
    v0 = v1 & 0xff;
    ST32(s4+8, FBITS(f0));
    ST32(s4, FBITS(f1));
    cnd_ = v0 == 0;
    ST32(s4+4, FBITS(f2));
    if (cnd_) { goto L_089ED5D8; }
    goto L_089ED570;
L_089ED570:;
    a0 = sp + 16;
    a1 = s0 + 0;
    func_089EE9C8(a0, a1);
    goto L_089ED57C;
L_089ED57C:;
    f0 = BITSF(LD32(sp+16));
    goto L_089ED580;
L_089ED580:;
    f1 = BITSF(LD32(sp+48));
    ST32(s2, FBITS(f0));
    f0 = BITSF(LD32(sp+20));
    ST32(s2+32, FBITS(f1));
    ST32(s2+4, FBITS(f0));
    f1 = BITSF(LD32(sp+24));
    f0 = BITSF(LD32(sp+28));
    ST32(s2+8, FBITS(f1));
    ST32(s2+12, FBITS(f0));
    f1 = BITSF(LD32(sp+32));
    f0 = BITSF(LD32(sp+36));
    ST32(s2+16, FBITS(f1));
    ST32(s2+20, FBITS(f0));
    f1 = BITSF(LD32(sp+40));
    f0 = BITSF(LD32(sp+44));
    ST32(s2+24, FBITS(f1));
    ST32(s2+28, FBITS(f0));
    v0 = LD_U8(s0+76);
    cnd_ = v0 == 0;
    if (cnd_) { v0 = LD32(s3+192); goto L_089ED4CC; }
    goto L_089ED5D0;
L_089ED5D0:;
    v0 = LD_U8(s0+77);
    goto L_089ED4D0;
L_089ED5D8:;
    a0 = sp + 16;
    a1 = s3 + 0;
    func_089ED630(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089ED5E4;
L_089ED5E4:;
    f0 = BITSF(LD32(sp+16));
    goto L_089ED580;
L_089ED5EC:;
    v0 = LD32(s3);
    a0 = LD32(v0-12);
    a0 = s3 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED608;
L_089ED608:;
    v1 = LD_U8(s0+76);
    goto L_089ED550;
L_089ED610:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    s0 = a1 + 0;
    if (cnd_) { goto L_089ED52C; }
    goto L_089ED61C;
L_089ED61C:;
    v0 = LD_U8(v1+8);
    cnd_ = v0 != 0;
    if (cnd_) { v1 = LD32(v1+4); goto L_089ED530; }
    goto L_089ED628;
L_089ED628:;
    goto L_089ED53C;
}

/* 089ED630 */
void func_089ED630(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[80] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 80);
L_089ED630:;
    v0 = LD32(a1+192);
    sp = sp - 80;
    a2 = D_08B45AA8 - (23208);
    v0 = v0 & 0x10;
    v1 = a2 + 23208;
    s0 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089ED6B0; }
    goto L_089ED654;
L_089ED654:;
    f7 = BITSF(LD32(a2+23208));
    f8 = BITSF(LD32(v1+32));
    f0 = BITSF(LD32(v1+4));
    f1 = BITSF(LD32(v1+8));
    f2 = BITSF(LD32(v1+12));
    f3 = BITSF(LD32(v1+16));
    f4 = BITSF(LD32(v1+20));
    f5 = BITSF(LD32(v1+24));
    f6 = BITSF(LD32(v1+28));
    ST32(a0, FBITS(f7));
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    ST32(a0+12, FBITS(f2));
    ST32(a0+16, FBITS(f3));
    ST32(a0+20, FBITS(f4));
    ST32(a0+24, FBITS(f5));
    ST32(a0+28, FBITS(f6));
    ST32(a0+32, FBITS(f8));
    goto L_089ED69C;
L_089ED69C:;
    v0 = s0 + 0;
    sp = sp + 80;
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return; }
L_089ED6B0:;
    v0 = LD32(a1);
    a0 = LD32(v0-12);
    a0 = a1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+24);
    t_ = v0;
    { rv_t r_ = ({ v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr64=v[64];vr65=v[65];vr66=v[66];vr67=v[67];vr68=v[68];vr69=v[69];vr70=v[70];vr71=v[71];vr73=v[73];vr76=v[76];vr77=v[77];vr78=v[78];vr96=v[96];vr97=v[97];vr98=v[98];vr112=v[112];vr113=v[113];vr114=v[114];vr115=v[115];vr116=v[116];vr117=v[117];vr118=v[118];vr120=v[120];vr121=v[121];vr122=v[122];vr124=v[124];vr125=v[125];vr126=v[126];vr127=v[127];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089ED6CC;
L_089ED6CC:;
    f0 = BITSF(LD32(v0));
    f1 = BITSF(LD32(v0+4));
    f2 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0+12));
    f4 = BITSF(LD32(v0+16));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    f0 = BITSF(LD32(v0+20));
    f1 = BITSF(LD32(v0+24));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    f2 = BITSF(LD32(v0+28));
    f3 = BITSF(LD32(v0+32));
    ST32(sp+16, FBITS(f4));
    ST32(sp+20, FBITS(f0));
    ST32(sp+24, FBITS(f1));
    ST32(sp+28, FBITS(f2));
    ST32(sp+32, FBITS(f3));
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr120=BITSF(LD32(sp+(24)));}
    {vr121=BITSF(LD32(sp+(28)));}
    {vr122=BITSF(LD32(sp+(32)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED994; }
    goto L_089ED750;
L_089ED750:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED8D4; }
    goto L_089ED760;
L_089ED760:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ED7F8; }
    goto L_089ED788;
L_089ED788:;
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
    if (cnd_) { goto L_089ED7D4; }
    goto L_089ED7C4;
L_089ED7C4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089ED7D4;
L_089ED7D4:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED818; }
    goto L_089ED7E4;
L_089ED7E4:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089ED818; }
    goto L_089ED7F4;
L_089ED7F4:;
    goto L_089ED7F8;
L_089ED7F8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED818; }
    goto L_089ED80C;
L_089ED80C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089ED818;
L_089ED818:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ED8A8; }
    goto L_089ED838;
L_089ED838:;
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
    if (cnd_) { goto L_089ED884; }
    goto L_089ED874;
L_089ED874:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089ED884;
L_089ED884:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED8C8; }
    goto L_089ED894;
L_089ED894:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089ED8C8; }
    goto L_089ED8A4;
L_089ED8A4:;
    goto L_089ED8A8;
L_089ED8A8:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED8C8; }
    goto L_089ED8BC;
L_089ED8BC:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089ED8C8;
L_089ED8C8:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_089EDA4C; }
    goto L_089ED8D0;
L_089ED8D0:;
    goto L_089ED8D4;
L_089ED8D4:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089ED968; }
    goto L_089ED8F8;
L_089ED8F8:;
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
    if (cnd_) { goto L_089ED944; }
    goto L_089ED934;
L_089ED934:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089ED944;
L_089ED944:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED988; }
    goto L_089ED954;
L_089ED954:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089ED988; }
    goto L_089ED964;
L_089ED964:;
    goto L_089ED968;
L_089ED968:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089ED988; }
    goto L_089ED97C;
L_089ED97C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089ED988;
L_089ED988:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_089EDA4C; }
    goto L_089ED990;
L_089ED990:;
    goto L_089ED994;
L_089ED994:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089EDA28; }
    goto L_089ED9B8;
L_089ED9B8:;
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
    if (cnd_) { goto L_089EDA04; }
    goto L_089ED9F4;
L_089ED9F4:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089EDA04;
L_089EDA04:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EDA48; }
    goto L_089EDA14;
L_089EDA14:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089EDA48; }
    goto L_089EDA24;
L_089EDA24:;
    goto L_089EDA28;
L_089EDA28:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EDA48; }
    goto L_089EDA3C;
L_089EDA3C:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089EDA48;
L_089EDA48:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_089EDA4C;
L_089EDA4C:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(48),FBITS(vr96));}
    {ST32(sp+(52),FBITS(vr97));}
    {ST32(sp+(56),FBITS(vr98));}
    ST32(sp+48, 0);
    ST32(sp+56, 0);
    {vr112=BITSF(LD32(sp+(48)));}
    {vr113=BITSF(LD32(sp+(52)));}
    {vr114=BITSF(LD32(sp+(56)));}
    {vr115=0.63661977236f;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float t0=vr115;vr112=s0*t0;vr113=s1*t0;vr114=s2*t0;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=cosf(s0*1.57079632679f);float d1=cosf(s1*1.57079632679f);float d2=cosf(s2*1.57079632679f);vr116=d0;vr117=d1;vr118=d2;}
    {float s0=vr112;float s1=vr113;float s2=vr114;float d0=sinf(s0*1.57079632679f);float d1=sinf(s1*1.57079632679f);float d2=sinf(s2*1.57079632679f);vr120=d0;vr121=d1;vr122=d2;}
    {float s0=vr120;float t0=vr121;float d0=s0*t0;vr115=d0;}
    {float s0=vr115;float t0=vr122;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;vr96=t;}
    {float s0=vr115;float t0=vr118;float d0=s0*t0;v[123]=d0;}
    {float s0=vr117;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr118;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float d0=-s0;float d1=-s1;vr126=d0;vr127=d1;}
    {float s0=v[123];float s1=vr127;float t=0;t+=s0;t+=s1;vr97=t;}
    {float s0=vr116;float t0=vr121;float d0=s0*t0;vr98=d0;}
    {float s0=vr116;float t0=vr122;float d0=s0*t0;v[100]=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=vr120;float d0=-s0;v[102]=d0;}
    {float s0=vr120;float t0=vr117;float d0=s0*t0;vr124=d0;}
    {float s0=vr124;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=vr124;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;v[106]=d0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(s0, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(s0+4, FBITS(f1));
    ST32(s0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(sp+16));
    ST32(s0+12, FBITS(f1));
    ST32(s0+16, FBITS(f0));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    ST32(s0+20, FBITS(f1));
    ST32(s0+24, FBITS(f0));
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+32));
    ST32(s0+28, FBITS(f1));
    ST32(s0+32, FBITS(f0));
    goto L_089ED69C;
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}

/* 089EDB40 */
u32 func_089EDB40(u32 a0, u32 a1, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr1 = v[1], vr2 = v[2];
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_089EDB40:;
    sp = sp - 112;
    a3 = D_08C2BA28 - (-17880);
    v0 = a3 - 17880;
    s5 = 0 + 0;
    s2 = a0 + 0;
    a0 = sp + 0;
    s1 = a1 + 0;
    v1 = LD32(v0+8);
    a2 = LD32(v0+4);
    ST32(sp, v0);
    v1 = v1 + 1;
    ST32(v0+8, v1);
    v1 = D_08AEF364 - (-3228);
    f20 = BITSF(LD32(v1-3228));
    ST32(sp+4, 0);
    cnd_ = a2 == 0;
    ST32(sp+8, 0);
    if (cnd_) { goto L_089EDBEC; }
    goto L_089EDBA4;
L_089EDBA4:;
    a3 = LD32(a3-17880);
    goto L_089EDBA8;
L_089EDBA8:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a3;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089EDBDC; }
    goto L_089EDBC0;
L_089EDBC0:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EDBF0; }
    goto L_089EDBD0;
L_089EDBD0:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089EDBC0; }
    goto L_089EDBDC;
L_089EDBDC:;
    v0 = a1 + 1;
    v1 = v0 < a2;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089EDBA8; }
    goto L_089EDBEC;
L_089EDBEC:;
    v0 = LD32(sp+8);
    goto L_089EDBF0;
L_089EDBF0:;
    cnd_ = v0 == 0;
    if (cnd_) { s1 = LD32(sp); goto L_089EDC2C; }
    goto L_089EDBF8;
L_089EDBF8:;
    s0 = LD32(v0);
    goto L_089EDBFC;
L_089EDBFC:;
    cnd_ = s0 == 0;
    if (cnd_) { a0 = sp + 0; goto L_089EDC14; }
    goto L_089EDC04;
L_089EDC04:;
    v0 = LD32(s0+12);
    cnd_ = v0 == s1;
    if (cnd_) { v0 = LD_U8(s0+5); goto L_089EDCF4; }
    goto L_089EDC10;
L_089EDC10:;
    a0 = sp + 0;
    goto L_089EDC14;
L_089EDC14:;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EDC1C;
L_089EDC1C:;
    v0 = LD32(sp+8);
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089EDBFC; }
    goto L_089EDC28;
L_089EDC28:;
    s1 = LD32(sp);
    goto L_089EDC2C;
L_089EDC2C:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089EDCB0; }
    goto L_089EDC3C;
L_089EDC3C:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089EDCB0; }
    goto L_089EDC48;
L_089EDC48:;
    v0 = LD32(s1);
    goto L_089EDC4C;
L_089EDC4C:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089EDCA0; }
    goto L_089EDC60;
L_089EDC60:;
    v0 = LD_U8(s0+8);
    goto L_089EDC64;
L_089EDC64:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089EDCEC; }
    goto L_089EDC6C;
L_089EDC6C:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089EDCDC; }
    goto L_089EDC74;
L_089EDC74:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089EDC7C;
L_089EDC7C:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EDC88;
L_089EDC88:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089EDC94;
L_089EDC94:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089EDC64; }
    goto L_089EDC9C;
L_089EDC9C:;
    v1 = LD32(s1+4);
    goto L_089EDCA0;
L_089EDCA0:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089EDC4C; }
    goto L_089EDCB0;
L_089EDCB0:;
    v0 = s5 + 0;
    sp = sp + 112;
    { v[0]=vr0;v[1]=vr1;v[2]=vr2;return v0; }
L_089EDCDC:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089EDC7C;
L_089EDCEC:;
    s0 = LD32(s0+4);
    goto L_089EDC94;
L_089EDCF4:;
    cnd_ = v0 == 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089EDC14; }
    goto L_089EDCFC;
L_089EDCFC:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EDC14; }
    goto L_089EDD08;
L_089EDD08:;
    v0 = LD32(s0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ({ v[0]=vr0;v[1]=vr1;v[2]=vr2;__auto_type vr_t_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); vr0=v[0];vr1=v[1];vr2=v[2];vr_t_; }); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EDD24;
L_089EDD24:;
    f5 = BITSF(LD32(v0+8));
    f3 = BITSF(LD32(v0));
    f4 = BITSF(LD32(v0+4));
    f0 = BITSF(LD32(s2));
    f1 = BITSF(LD32(s2+4));
    f2 = BITSF(LD32(s2+8));
    f3 = f3 - f0;
    f4 = f4 - f1;
    f5 = f5 - f2;
    {u32 a_=sp+(32);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    v0 = FBITS(f3);
    v1 = FBITS(f4);
    a0 = FBITS(f5);
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {a1=FBITS(vr0);}
    f0 = BITSF(a1);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f20, 12);
    ST32(sp+20, FBITS(f4));
    cnd_ = !fcc;
    ST32(sp+24, FBITS(f5));
    if (cnd_) { goto L_089EDC10; }
    goto L_089EDD84;
L_089EDD84:;
    {u32 a_=sp+(48);vr0=BITSF(LD32(a_+0));vr1=BITSF(LD32(a_+4));vr2=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    {vr0=BITSF(v0);}
    {vr1=BITSF(v1);}
    {vr2=BITSF(a0);}
    {float s0=vr0;float s1=vr1;float s2=vr2;float t0=vr0;float t1=vr1;float t2=vr2;float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;vr0=sum;}
    {v0=FBITS(vr0);}
    f0 = BITSF(v0);
    s5 = s0 + 0;
    f20 = f0;
    goto L_089EDC10;
    v[0]=vr0;v[1]=vr1;v[2]=vr2;
}

/* 089EDDAC */
float func_089EDDAC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EDDAC:;
    sp = sp - 16;
    s0 = a0 + 0;
    ST32(s0+84, a1);
    a0 = a1 + 0;
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EDDC8;
L_089EDDC8:;
    f0 = BITSF(LD32(s0+88));
    ST32(s0+12, v0);
    v0 = 4;
    ST32(s0+184, FBITS(f0));
    ST32(s0+176, v0);
    sp = sp + 16;
    return f0;
}

/* 089EDDEC */
void func_089EDDEC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    int fcc = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EDDEC:;
    sp = sp - 16;
    s1 = a1 + 0;
    s0 = a0 + 0;
    func_08A08244(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089EDE08;
L_089EDE08:;
    f1 = BITSF(LD32(s1+88));
    ST32(s0+92, FBITS(f1));
    f0 = BITSF(LD32(s1+184));
    ST32(s0+96, FBITS(f0));
    f0 = BITSF(0);
    v0 = LD32(s1+12);
    ST32(s0+84, v0);
    v1 = LD32(s1+176);
    ST32(s0+104, v1);
    v0 = LD32(s1+188);
    ST32(s0+108, 0);
    ST32(s0+100, v0);
    f1 = BITSF(LD32(s1+180));
    fcc = FCMP(f0, f1, 12);
    cnd_ = fcc;
    a0 = 1;
    if (cnd_) { goto L_089EDE50; }
    goto L_089EDE4C;
L_089EDE4C:;
    a0 = 0 + 0;
    goto L_089EDE50;
L_089EDE50:;
    ST32(s0+108, a0);
    v1 = a0 + 0;
    v0 = LD32(s1+192);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s0+108, v1);
    v0 = LD32(s1+192);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s0+108, v1);
    v0 = LD32(s1+192);
    v0 = (v0 >> 2) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s0+108, v1);
    sp = sp + 16;
    return;
}

/* 089EDE9C */
rv_t func_089EDE9C(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0, f1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EDE9C:;
    sp = sp - 16;
    a2 = 1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08A083F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EDEBC;
L_089EDEBC:;
    f1 = BITSF(LD32(s1+92));
    a0 = s0 + 0;
    ST32(s0+96, FBITS(f1));
    f0 = BITSF(LD32(s1+96));
    ST32(s0+100, FBITS(f0));
    a1 = LD32(s1+84);
    f0 = func_089EA3D0(a0, a1, 0, 0, 0);
    goto L_089EDED8;
L_089EDED8:;
    v0 = LD32(s1+104);
    v1 = LD32(s0+116);
    ST32(s0+88, v0);
    a0 = LD32(s1+100);
    ST32(s0+92, a0);
    v0 = LD32(s1+108);
    v0 = v0 & 0x1;
    v1 = (v1 & ~(0x1u << 1)) | ((v0 & 0x1) << 1);
    ST32(s0+116, v1);
    v0 = LD32(s1+108);
    v0 = (v0 >> 1) & 0x1;
    v1 = (v1 & ~(0x1u << 0)) | ((v0 & 0x1) << 0);
    ST32(s0+116, v1);
    v0 = LD32(s1+108);
    v0 = (v0 >> 2) & 0x1;
    v1 = (v1 & ~(0x1u << 3)) | ((v0 & 0x1) << 3);
    ST32(s0+116, v1);
    v0 = LD32(s1+108);
    v0 = (v0 >> 3) & 0x1;
    v1 = (v1 & ~(0x1u << 2)) | ((v0 & 0x1) << 2);
    ST32(s0+116, v1);
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EDF40 */
void func_089EDF40(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EDF40:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EDF64;
L_089EDF64:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 24;
    t0 = 112;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089EDF80;
L_089EDF80:;
    a0 = s2 + 0;
    func_089EDFA8(a0);
    goto L_089EDF88;
L_089EDF88:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089EDF90;
L_089EDF90:;
    sp = sp + 16;
    return;
}

/* 089EDFA8 */
void func_089EDFA8(u32 a0)
{
    u32 v0 = 0, a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    float f12 = 0, f13 = 0, f14 = 0, f20 = 0, f21 = 0;
    u8 stack_[144] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 144);
L_089EDFA8:;
    sp = sp - 144;
    s0 = a0 + 0;
    func_08A08688(a0);
    goto L_089EDFC4;
L_089EDFC4:;
    v0 = D_08AEF368 - (-3224);
    f21 = BITSF(LD32(v0-3224));
    f20 = BITSF(0);
    a0 = s0 + 0;
    f13 = f21;
    f12 = f20;
    f14 = f20;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 92;
    t0 = 32;
    t1 = 16;
    t2 = 1;
    t3 = 0 + 0;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089EE000;
L_089EE000:;
    f13 = f21;
    f14 = f20;
    t3 = 1;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 12;
    a3 = 96;
    t0 = 32;
    t1 = 16;
    t2 = 1;
    func_088A63D8(a0, a2, a3, t0, t1, t2, t3, f12, f13, f14);
    goto L_089EE030;
L_089EE030:;
    a0 = s0 + 0;
    f12 = f20;
    a1 = 0 + 0;
    a2 = 18;
    a3 = 100;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089EE054;
L_089EE054:;
    f12 = f20;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 5;
    a3 = 104;
    t0 = 32;
    t1 = 1;
    t2 = 1;
    func_088A61DC(a0, a2, a3, t0, t1, t2, f12);
    goto L_089EE078;
L_089EE078:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 108;
    t0 = 32;
    t1 = 4;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089EE09C;
L_089EE09C:;
    sp = sp + 144;
    return;
}

/* 089EE0B4 */
void func_089EE0B4(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0;
    int cnd_;
L_089EE0B4:;
    v0 = a0 + 0;
    v1 = 9;
    a2 = 999;
    a1 = (u32)-1;
    goto L_089EE0C4;
L_089EE0C4:;
    v1 = v1 - 1;
    ST32(v0, a2);
    ST32(v0+4, 0);
    cnd_ = v1 != a1;
    v0 = v0 + 8;
    if (cnd_) { goto L_089EE0C4; }
    goto L_089EE0D8;
L_089EE0D8:;
    v0 = 10;
    ST32(a0+80, v0);
    return;
}

/* 089EE0E4 */
u32 func_089EE0E4(u32 a0)
{
    u32 v0 = 0;
L_089EE0E4:;
    v0 = LD32(a0+80);
    v0 = v0 ^ 0xa;
    v0 = v0 < 0x1u;
    return v0;
}

/* 089EE0F4 */
u32 func_089EE0F4(u32 a0, u32 a1)
{
    u32 v0 = 0;
    int cnd_;
L_089EE0F4:;
    v0 = a1 < 0xau;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EE108; }
    goto L_089EE100;
L_089EE100:;
    v0 = a1 << 3;
    a0 = a0 + v0;
    goto L_089EE108;
L_089EE108:;
    v0 = a0 + 0;
    return v0;
}

/* 089EE110 */
rv_t func_089EE110(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EE110:;
    sp = sp - 32;
    s3 = 999;
    s2 = a1 + 0;
    a1 = 10;
    s1 = 9;
    s0 = a0 + 0;
    v0 = LD32(a0+80);
    a0 = s2 + 0;
    a1 = a1 - v0;
    { rv_t r_ = func_0882D900(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE14C;
L_089EE14C:;
    v0 = LD32(s0);
    a0 = s2 + 0;
    s1 = s1 - 1;
    cnd_ = v0 == s3;
    a1 = v0 + 0;
    if (cnd_) { goto L_089EE174; }
    goto L_089EE160;
L_089EE160:;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE168;
L_089EE168:;
    a1 = LD32(s0+4);
    a0 = s2 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE174;
L_089EE174:;
    cnd_ = (s32)s1 >= 0;
    s0 = s0 + 8;
    if (cnd_) { goto L_089EE14C; }
    goto L_089EE17C;
L_089EE17C:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EE198 */
float func_089EE198(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0, ra = 0;
    float f0 = 0;
    int cnd_;
    u32 t_;
    u8 stack_[48] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 48);
L_089EE198:;
    sp = sp - 48;
    s1 = a1 + 0;
    a1 = sp + 0;
    s3 = a0 + 0;
    a0 = s1 + 0;
    s2 = 0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE1C8;
L_089EE1C8:;
    v1 = LD32(sp);
    cnd_ = (s32)v1 <= 0;
    s0 = s3 + 0;
    if (cnd_) { goto L_089EE200; }
    goto L_089EE1D4;
L_089EE1D4:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE1E0;
L_089EE1E0:;
    a1 = s0 + 4;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE1EC;
L_089EE1EC:;
    v1 = LD32(sp);
    s2 = s2 + 1;
    v0 = (s32)s2 < (s32)v1;
    cnd_ = v0 != 0;
    s0 = s0 + 8;
    if (cnd_) { goto L_089EE1D4; }
    goto L_089EE200;
L_089EE200:;
    v0 = 10;
    v0 = v0 - v1;
    ST32(s3+80, v0);
    sp = sp + 48;
    return f0;
L_089EE228:;
    sp = sp - 80;
    ST32(sp+64, fp);
    v1 = D_08C2BA28 - (-17880);
    v1 = v1 - 17880;
    ST32(sp+60, s7);
    a0 = sp + 0;
    a1 = 1;
    ST32(sp+56, s6);
    s7 = 0 + 0;
    s6 = 0 + 0;
    ST32(sp+52, s5);
    fp = 0 + 0;
    s5 = 0 + 0;
    ST32(sp+48, s4);
    s4 = 0 + 0;
    ST32(sp+44, s3);
    s3 = 0 + 0;
    ST32(sp+40, s2);
    s2 = 0 + 0;
    ST32(sp+36, s1);
    s1 = 0 + 0;
    ST32(sp+68, ra);
    ST32(sp+32, s0);
    v0 = LD32(v1+8);
    ST32(sp, v1);
    v0 = v0 + 1;
    ST32(v1+8, v0);
    ST32(sp+8, 0);
    ST32(sp+4, 0);
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE2A0;
L_089EE2A0:;
    v0 = LD32(sp+8);
    ST32(sp+16, 0);
    cnd_ = v0 != 0;
    ST32(sp+20, 0);
    if (cnd_) { goto L_089EE368; }
    goto L_089EE2B0;
L_089EE2B0:;
    a0 = D_08ADE9F8 - (-5640);
    goto L_089EE2B4;
L_089EE2B4:;
    a0 = a0 - 5640;
    a1 = s1 + 0;
    a2 = s4 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE2C4;
L_089EE2C4:;
    a0 = D_08ADEA0C - (-5620);
    a0 = a0 - 5620;
    a1 = s2 + 0;
    a2 = s6 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE2D8;
L_089EE2D8:;
    a0 = D_08ADEA20 - (-5600);
    a0 = a0 - 5600;
    a1 = s3 + 0;
    a2 = fp + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE2EC;
L_089EE2EC:;
    a2 = LD32(sp+16);
    a0 = D_08ADEA34 - (-5580);
    a0 = a0 - 5580;
    a1 = s5 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE300;
L_089EE300:;
    a2 = LD32(sp+20);
    a0 = D_08ADEA48 - (-5560);
    a0 = a0 - 5560;
    a1 = s7 + 0;
    { rv_t r_ = func_08898108(a0, a1, a2, a3, t0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE314;
L_089EE314:;
    a0 = LD32(sp);
    v0 = LD32(a0+8);
    v0 = v0 - 1;
    cnd_ = v0 == 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089EE358; }
    goto L_089EE328;
L_089EE328:;
    ra = LD32(sp+68);
    goto L_089EE32C;
L_089EE32C:;
    fp = LD32(sp+64);
    s7 = LD32(sp+60);
    s6 = LD32(sp+56);
    s5 = LD32(sp+52);
    s4 = LD32(sp+48);
    s3 = LD32(sp+44);
    s2 = LD32(sp+40);
    s1 = LD32(sp+36);
    s0 = LD32(sp+32);
    sp = sp + 80;
    return f0;
L_089EE358:;
    { u64 r_ = func_08ABC380(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE360;
L_089EE360:;
    ra = LD32(sp+68);
    goto L_089EE32C;
L_089EE368:;
    s0 = LD32(v0);
    goto L_089EE36C;
L_089EE36C:;
    a0 = sp + 0;
    a1 = 1;
    { u64 r_ = func_08ABC294(a0, a1); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE378;
L_089EE378:;
    v1 = LD32(s0+12);
    v0 = v1 < 0x5u;
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EE3C0; }
    goto L_089EE388;
L_089EE388:;
    v0 = v1 << 2;
    v1 = D_08ADEA5C - (-5540);
    v1 = v1 - 5540;
    v0 = v0 + v1;
    a0 = LD32(v0);
    t_ = a0;
    switch (t_) { case 0x089EE3A4u: goto L_089EE3A4; case 0x089EE3D0u: goto L_089EE3D0; case 0x089EE3F0u: goto L_089EE3F0; case 0x089EE410u: goto L_089EE410; case 0x089EE438u: goto L_089EE438; default: rs_break(0, 0x089ee39c); }
L_089EE3A4:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    s1 = s1 + 1;
    if (cnd_) { goto L_089EE3BC; }
    goto L_089EE3B0;
L_089EE3B0:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 != 0;
    if (cnd_) { s4 = s4 + 1; goto L_089EE3BC; }
    goto L_089EE3BC;
L_089EE3BC:;
    v0 = LD32(sp+8);
    goto L_089EE3C0;
L_089EE3C0:;
    cnd_ = v0 != 0;
    if (cnd_) { s0 = LD32(v0); goto L_089EE36C; }
    goto L_089EE3C8;
L_089EE3C8:;
    a0 = D_08ADE9F8 - (-5640);
    goto L_089EE2B4;
L_089EE3D0:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    s2 = s2 + 1;
    if (cnd_) { goto L_089EE3BC; }
    goto L_089EE3DC;
L_089EE3DC:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 != 0;
    if (cnd_) { s6 = s6 + 1; goto L_089EE3BC; }
    goto L_089EE3E8;
L_089EE3E8:;
    v0 = LD32(sp+8);
    goto L_089EE3C0;
L_089EE3F0:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    s3 = s3 + 1;
    if (cnd_) { goto L_089EE3BC; }
    goto L_089EE3FC;
L_089EE3FC:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 != 0;
    if (cnd_) { fp = fp + 1; goto L_089EE3BC; }
    goto L_089EE408;
L_089EE408:;
    v0 = LD32(sp+8);
    goto L_089EE3C0;
L_089EE410:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    s5 = s5 + 1;
    if (cnd_) { goto L_089EE3BC; }
    goto L_089EE41C;
L_089EE41C:;
    v0 = LD_U8(s0+64);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EE3C0; }
    goto L_089EE428;
L_089EE428:;
    v0 = LD32(sp+16);
    v0 = v0 + 1;
    ST32(sp+16, v0);
    goto L_089EE3BC;
L_089EE438:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    s7 = s7 + 1;
    if (cnd_) { goto L_089EE3BC; }
    goto L_089EE444;
L_089EE444:;
    v0 = LD_U8(s0+64);
    v1 = LD32(sp+20);
    v0 = 0 < v0;
    v1 = v1 + v0;
    ST32(sp+20, v1);
    goto L_089EE3BC;
}

/* 089EE45C */
rv_t func_089EE45C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EE45C:;
    sp = sp - 16;
    a1 = a1 & 0xff;
    s0 = a0 + 0;
    v0 = LD_U8(a0+5);
    cnd_ = v0 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EE488; }
    goto L_089EE480;
L_089EE480:;
    v0 = LD_U8(a0+64);
    v1 = 0 < v0;
    goto L_089EE488;
L_089EE488:;
    s1 = v1 & 0xff;
    { rv_t r_ = func_08A06EF0(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE490;
L_089EE490:;
    v0 = LD_U8(s0+5);
    cnd_ = v0 == 0;
    a0 = 0 + 0;
    if (cnd_) { goto L_089EE4A4; }
    goto L_089EE49C;
L_089EE49C:;
    v0 = LD_U8(s0+64);
    a0 = 0 < v0;
    goto L_089EE4A4;
L_089EE4A4:;
    cnd_ = s1 == a0;
    if (cnd_) { goto L_089EE4B8; }
    goto L_089EE4AC;
L_089EE4AC:;
    { u64 r_ = func_0897367C(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE4B4;
L_089EE4B4:;
    goto L_089EE4B8;
L_089EE4B8:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EE4C8 */
rv_t func_089EE4C8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EE4C8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EE5EC; }
    goto L_089EE4FC;
L_089EE4FC:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF36C - (-3220);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3220));
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
    t0 = D_08C2B978 - (-18056);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2B988 - (-18040);
    a3 = D_08C2B998 - (-18024);
    v1 = t0 - 18056;
    a1 = v0 - 18040;
    a2 = a3 - 18024;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BA28 - (-17880);
    s0 = s3 - 17880;
    ST32(v1+8, FBITS(f5));
    a0 = 32;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-18040, FBITS(f5));
    v0 = 8;
    ST32(t0-18056, FBITS(f1));
    ST32(a3-18024, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE5B4;
L_089EE5B4:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17880, v0);
    if (cnd_) { goto L_089EE5E0; }
    goto L_089EE5C4;
L_089EE5C4:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089EE5CC;
L_089EE5CC:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089EE5CC; }
    goto L_089EE5E0;
L_089EE5E0:;
    v0 = s3 - 17880;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089EE5EC;
L_089EE5EC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EE610; }
    goto L_089EE600;
L_089EE600:;
    v0 = D_08C2BA28 - (-17880);
    a0 = LD32(v0-17880);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089EE628; }
    goto L_089EE610;
L_089EE610:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EE628:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE630;
L_089EE630:;
    goto L_089EE610;
}

/* 089EE638 */
rv_t func_089EE638(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EE638:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089EE4C8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE64C;
L_089EE64C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EE658 */
rv_t func_089EE658(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EE658:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089EE4C8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE66C;
L_089EE66C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EE678 */
void func_089EE678(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EE678:;
    sp = sp - 32;
    s3 = D_08C2BA38 - (-17864);
    s2 = s3 - 17864;
    s1 = a0 + 0;
    func_08873E94(a0, a1);
    goto L_089EE6A0;
L_089EE6A0:;
    v0 = D_08B45A9C - (23196);
    v1 = v0 + 23196;
    f0 = BITSF(LD32(v1+8));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v0+23196));
    v0 = s1 + 28;
    ST32(v0+8, FBITS(f0));
    a2 = D_08B45AA8 - (23208);
    v1 = a2 + 23208;
    ST32(v0+4, FBITS(f1));
    v0 = D_08B0A050 - (-24496);
    v0 = v0 - 24496;
    ST32(s1, v0);
    a1 = s1 + 40;
    v0 = 1;
    ST32(s1+28, FBITS(f2));
    a0 = 12;
    f0 = BITSF(LD32(v1+32));
    f1 = BITSF(LD32(v1+4));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+12));
    f4 = BITSF(LD32(v1+16));
    f5 = BITSF(LD32(v1+20));
    f6 = BITSF(LD32(v1+24));
    f7 = BITSF(LD32(v1+28));
    f8 = BITSF(LD32(a2+23208));
    ST32(a1+32, FBITS(f0));
    ST32(a1+4, FBITS(f1));
    ST32(a1+8, FBITS(f2));
    ST32(a1+12, FBITS(f3));
    ST32(a1+16, FBITS(f4));
    ST32(a1+20, FBITS(f5));
    ST32(a1+24, FBITS(f6));
    ST32(a1+28, FBITS(f7));
    ST32(s1+40, FBITS(f8));
    ST8(s1+76, v0);
    v0 = (u32)-32729;
    v1 = LD32(s2+4);
    s0 = LD32(s1+4);
    ST16(s1+8, v0);
    v1 = v1 - 1;
    s0 = s0 & v1;
    ST8(s1+77, 0);
    s0 = s0 << 2;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE754;
L_089EE754:;
    a0 = LD32(s3-17864);
    v1 = LD32(s2+12);
    ST32(v0, s1);
    s0 = s0 + a0;
    v1 = v1 + 1;
    a1 = LD32(s0);
    ST8(v0+8, 0);
    a0 = s1 + 0;
    ST32(v0+4, a1);
    ST32(s0, v0);
    ST32(s2+12, v1);
    { u64 r_ = func_0887421C(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE784;
L_089EE784:;
    a0 = s1 + 0;
    a1 = 1;
    { rv_t r_ = func_08874390(a0, a1, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE790;
L_089EE790:;
    sp = sp + 32;
    return;
}

/* 089EE7AC */
rv_t func_089EE7AC(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EE7AC:;
    v0 = D_08B0A050 - (-24496);
    v0 = v0 - 24496;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2BA38 - (-17864);
    a1 = s0 + 0;
    a0 = a0 - 17864;
    func_08AC9C2C(a0, a1, t1, t2, t3);
    goto L_089EE7D8;
L_089EE7D8:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE7E0;
L_089EE7E0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EE7F0 */
rv_t func_089EE7F0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EE7F0:;
    v0 = D_08B0A050 - (-24496);
    v0 = v0 - 24496;
    sp = sp - 16;
    ST32(a0, v0);
    s0 = a0 + 0;
    a0 = D_08C2BA38 - (-17864);
    a1 = s0 + 0;
    a0 = a0 - 17864;
    func_08AC9C2C(a0, a1, t1, t2, t3);
    goto L_089EE81C;
L_089EE81C:;
    a0 = s0 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE824;
L_089EE824:;
    a0 = s0 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EE82C;
L_089EE82C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EE83C */
rv_t func_089EE83C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EE83C:;
    sp = sp - 32;
    s0 = a1 + 0;
    v1 = (u32)-1;
    a1 = sp + 0;
    s1 = a0 + 0;
    ST32(sp, v1);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE868;
L_089EE868:;
    a1 = s1 + 28;
    v1 = LD32(sp);
    cnd_ = (s32)v1 < 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089EE884; }
    goto L_089EE878;
L_089EE878:;
    { rv_t r_ = func_0882E074(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE880;
L_089EE880:;
    v1 = LD32(sp);
    goto L_089EE884;
L_089EE884:;
    v0 = 1;
    a1 = s1 + 76;
    cnd_ = v1 == v0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089EE8FC; }
    goto L_089EE894;
L_089EE894:;
    v0 = (s32)v1 < 2;
    a0 = s0 + 0;
    cnd_ = v0 == 0;
    a1 = sp + 4;
    if (cnd_) { goto L_089EE8D8; }
    goto L_089EE8A4;
L_089EE8A4:;
    v0 = (s32)v1 < 3;
    a1 = s1 + 40;
    cnd_ = v0 == 0;
    a0 = s0 + 0;
    if (cnd_) { goto L_089EE8C8; }
    goto L_089EE8B4;
L_089EE8B4:;
    goto L_089EE8B8;
L_089EE8B8:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EE8C8:;
    { rv_t r_ = func_0882E0F4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE8D0;
L_089EE8D0:;
    goto L_089EE8B8;
L_089EE8D8:;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE8E0;
L_089EE8E0:;
    v1 = LD32(sp+4);
    v0 = (v1 >> 1) & 0x1;
    v1 = v1 & 0x1;
    ST8(s1+76, v1);
    ST8(s1+77, v0);
    v1 = LD32(sp);
    goto L_089EE8A4;
L_089EE8FC:;
    { rv_t r_ = func_0882DB50(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE904;
L_089EE904:;
    v1 = LD32(sp);
    goto L_089EE894;
}

/* 089EE90C */
rv_t func_089EE90C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EE90C:;
    sp = sp - 16;
    s1 = a1 + 0;
    a1 = 3;
    s0 = a0 + 0;
    a0 = s1 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE930;
L_089EE930:;
    a1 = s0 + 28;
    a0 = s1 + 0;
    { rv_t r_ = func_0882E0B4(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE93C;
L_089EE93C:;
    a1 = LD_U8(s0+76);
    v1 = LD_U8(s0+77);
    a0 = s1 + 0;
    a1 = 0 < a1;
    v0 = a1 | 0x2;
    if (v1 != 0) a1 = v0;
    s0 = s0 + 40;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE95C;
L_089EE95C:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_0882E164(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE968;
L_089EE968:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EE97C */
rv_t func_089EE97C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EE97C:;
    v1 = LD_U16(a1+16);
    sp = sp - 16;
    v0 = 3;
    cnd_ = v1 == v0;
    a2 = 1;
    if (cnd_) { goto L_089EE9BC; }
    goto L_089EE994;
L_089EE994:;
    v0 = 4;
    cnd_ = v1 == v0;
    if (cnd_) { ST8(a0+76, 0); goto L_089EE9AC; }
    goto L_089EE9A0;
L_089EE9A0:;
    { rv_t r_ = func_08874198(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EE9A8;
L_089EE9A8:;
    a2 = v0 + 0;
    goto L_089EE9AC;
L_089EE9AC:;
    v0 = a2 + 0;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EE9BC:;
    v0 = 1;
    ST8(a0+76, v0);
    goto L_089EE9AC;
}

/* 089EE9C8 */
void func_089EE9C8(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0;
    int cnd_;
    float *v = vfpu_v; /* vfpu_regs: locals */ float vr0 = v[0], vr64 = v[64], vr65 = v[65], vr66 = v[66], vr67 = v[67], vr68 = v[68], vr69 = v[69], vr70 = v[70], vr71 = v[71], vr73 = v[73], vr76 = v[76], vr77 = v[77], vr78 = v[78], vr96 = v[96], vr97 = v[97], vr98 = v[98], vr112 = v[112], vr113 = v[113], vr114 = v[114], vr115 = v[115], vr116 = v[116], vr117 = v[117], vr118 = v[118], vr120 = v[120], vr121 = v[121], vr122 = v[122], vr123 = v[123], vr124 = v[124], vr125 = v[125], vr126 = v[126], vr127 = v[127];
    u8 stack_[64] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 64);
L_089EE9C8:;
    v0 = LD_U8(a1+77);
    a3 = D_08B45AA8 - (23208);
    sp = sp - 64;
    v1 = a1 + 40;
    cnd_ = v0 != 0;
    a2 = a3 + 23208;
    if (cnd_) { goto L_089EEA34; }
    goto L_089EE9E0;
L_089EE9E0:;
    f7 = BITSF(LD32(a3+23208));
    f8 = BITSF(LD32(a2+32));
    f0 = BITSF(LD32(a2+4));
    f1 = BITSF(LD32(a2+8));
    f2 = BITSF(LD32(a2+12));
    f3 = BITSF(LD32(a2+16));
    f4 = BITSF(LD32(a2+20));
    f5 = BITSF(LD32(a2+24));
    f6 = BITSF(LD32(a2+28));
    ST32(a0, FBITS(f7));
    ST32(a0+4, FBITS(f0));
    ST32(a0+8, FBITS(f1));
    ST32(a0+12, FBITS(f2));
    ST32(a0+16, FBITS(f3));
    ST32(a0+20, FBITS(f4));
    ST32(a0+24, FBITS(f5));
    ST32(a0+28, FBITS(f6));
    ST32(a0+32, FBITS(f8));
    goto L_089EEA28;
L_089EEA28:;
    v0 = a0 + 0;
    sp = sp + 64;
    { v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;return; }
L_089EEA34:;
    f1 = BITSF(LD32(v1+4));
    f0 = BITSF(LD32(a1+40));
    f2 = BITSF(LD32(v1+8));
    f3 = BITSF(LD32(v1+12));
    f4 = BITSF(LD32(v1+16));
    f6 = BITSF(LD32(v1+32));
    f5 = BITSF(LD32(v1+20));
    ST32(sp, FBITS(f0));
    ST32(sp+4, FBITS(f1));
    f0 = BITSF(LD32(v1+24));
    f1 = BITSF(LD32(v1+28));
    ST32(sp+8, FBITS(f2));
    ST32(sp+12, FBITS(f3));
    ST32(sp+16, FBITS(f4));
    ST32(sp+24, FBITS(f0));
    ST32(sp+28, FBITS(f1));
    ST32(sp+20, FBITS(f5));
    ST32(sp+32, FBITS(f6));
    {vr112=BITSF(LD32(sp+(0)));}
    {vr113=BITSF(LD32(sp+(4)));}
    {vr114=BITSF(LD32(sp+(8)));}
    {vr116=BITSF(LD32(sp+(12)));}
    {vr117=BITSF(LD32(sp+(16)));}
    {vr118=BITSF(LD32(sp+(20)));}
    {vr120=BITSF(LD32(sp+(24)));}
    {vr121=BITSF(LD32(sp+(28)));}
    {vr122=BITSF(LD32(sp+(32)));}
    {vr124=1.57079632679f;}
    {float s0=vr0;vr125=(float)1;}
    {float s0=-(vr118);float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EECFC; }
    goto L_089EEAB8;
L_089EEAB8:;
    {float s0=vr118;float t0=vr125;u32 k0_=(s0<t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EEC3C; }
    goto L_089EEAC8;
L_089EEAC8:;
    {float s0=-(vr118);float d0=asinf(s0)*0.63661977236f;vr96=d0;}
    {float s0=vr114;float d0=s0;vr64=d0;}
    {float s0=vr122;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089EEB60; }
    goto L_089EEAF0;
L_089EEAF0:;
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
    if (cnd_) { goto L_089EEB3C; }
    goto L_089EEB2C;
L_089EEB2C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089EEB3C;
L_089EEB3C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EEB80; }
    goto L_089EEB4C;
L_089EEB4C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089EEB80; }
    goto L_089EEB5C;
L_089EEB5C:;
    goto L_089EEB60;
L_089EEB60:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EEB80; }
    goto L_089EEB74;
L_089EEB74:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089EEB80;
L_089EEB80:;
    {float s0=vr78;float d0=s0;vr97=d0;}
    {float s0=vr116;float d0=s0;vr64=d0;}
    {float s0=vr117;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089EEC10; }
    goto L_089EEBA0;
L_089EEBA0:;
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
    if (cnd_) { goto L_089EEBEC; }
    goto L_089EEBDC;
L_089EEBDC:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089EEBEC;
L_089EEBEC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EEC30; }
    goto L_089EEBFC;
L_089EEBFC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089EEC30; }
    goto L_089EEC0C;
L_089EEC0C:;
    goto L_089EEC10;
L_089EEC10:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EEC30; }
    goto L_089EEC24;
L_089EEC24:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089EEC30;
L_089EEC30:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_089EEDB4; }
    goto L_089EEC38;
L_089EEC38:;
    goto L_089EEC3C;
L_089EEC3C:;
    {float s0=vr125;float d0=-s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr120;float d0=s0;vr64=d0;}
    {float s0=vr112;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089EECD0; }
    goto L_089EEC60;
L_089EEC60:;
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
    if (cnd_) { goto L_089EECAC; }
    goto L_089EEC9C;
L_089EEC9C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089EECAC;
L_089EECAC:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EECF0; }
    goto L_089EECBC;
L_089EECBC:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089EECF0; }
    goto L_089EECCC;
L_089EECCC:;
    goto L_089EECD0;
L_089EECD0:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EECF0; }
    goto L_089EECE4;
L_089EECE4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089EECF0;
L_089EECF0:;
    cnd_ = 0 == 0;
    {float s0=vr78;float d0=s0;vr98=d0;}
    if (cnd_) { goto L_089EEDB4; }
    goto L_089EECF8;
L_089EECF8:;
    goto L_089EECFC;
L_089EECFC:;
    {float s0=vr125;float d0=s0;vr96=d0;}
    {float s0=vr0;vr97=(float)0;}
    {float s0=vr113;float d0=s0;vr64=d0;}
    {float s0=vr121;float d0=s0;vr65=d0;}
    {float s0=vr0;vr73=(float)1;}
    {float s0=vr64;float s1=vr65;float d0=(float)((s0>0)-(s0<0));float d1=(float)((s1>0)-(s1<0));vr68=d0;vr69=d1;}
    {float s0=vr64;float s1=vr65;float t0=vr64;float t1=vr65;u32 k0_=(s0==0)!=0;u32 k1_=(s1==0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|(k1_<<1)|((k0_|k1_)<<4)|((k0_&k1_)<<5);}
    cnd_ = ((vfpu_cc >> 4) & 1);
    if (cnd_) { goto L_089EED90; }
    goto L_089EED20;
L_089EED20:;
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
    if (cnd_) { goto L_089EED6C; }
    goto L_089EED5C;
L_089EED5C:;
    {float s0=vr68;float t0=vr69;float d0=s0*t0;vr71=d0;}
    {float s0=vr78;float d0=-s0;vr78=d0;}
    {float s0=vr78;float t0=vr71;float d0=s0+t0;vr78=d0;}
    goto L_089EED6C;
L_089EED6C:;
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EEDB0; }
    goto L_089EED7C;
L_089EED7C:;
    {float s0=vr68;float t0=vr68;float d0=s0+t0;vr68=d0;}
    cnd_ = 0 == 0;
    {float s0=vr78;float t0=vr68;float d0=s0-t0;vr78=d0;}
    if (cnd_) { goto L_089EEDB0; }
    goto L_089EED8C;
L_089EED8C:;
    goto L_089EED90;
L_089EED90:;
    {float s0=vr68;float d0=s0;vr78=d0;}
    {float s0=-(vr69);float t0=vr73;u32 k0_=(s0==t0)!=0;vfpu_cc=(vfpu_cc&~0x3Fu)|(k0_<<0)|((k0_)<<4)|((k0_)<<5);}
    cnd_ = !((vfpu_cc >> 0) & 1);
    if (cnd_) { goto L_089EEDB0; }
    goto L_089EEDA4;
L_089EEDA4:;
    {float s0=2.f;float d0=s0;vr78=d0;}
    goto L_089EEDB0;
L_089EEDB0:;
    {float s0=vr78;float d0=s0;vr98=d0;}
    goto L_089EEDB4;
L_089EEDB4:;
    {float s0=vr96;float s1=vr97;float s2=vr98;float t0=vr124;vr96=s0*t0;vr97=s1*t0;vr98=s2*t0;}
    {ST32(sp+(48),FBITS(vr96));}
    {ST32(sp+(52),FBITS(vr97));}
    {ST32(sp+(56),FBITS(vr98));}
    ST32(sp+48, 0);
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
    {float s0=vr116;float t0=vr122;float d0=s0*t0;v[100]=d0;}
    {float s0=vr116;float t0=vr118;float d0=s0*t0;v[101]=d0;}
    {float s0=vr120;float d0=-s0;v[102]=d0;}
    {float s0=vr120;float t0=vr117;float d0=s0*t0;vr124=d0;}
    {float s0=vr124;float t0=vr122;float d0=s0*t0;vr127=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[104]=t;}
    {float s0=vr124;float t0=vr118;float d0=s0*t0;vr127=d0;}
    {float s0=vr121;float t0=vr122;float d0=s0*t0;vr126=d0;}
    {float s0=vr126;float s1=vr127;float t=0;t+=s0;t+=s1;v[105]=t;}
    {float s0=vr116;float t0=vr117;float d0=s0*t0;v[106]=d0;}
    {ST32(sp+(0),FBITS(vr96));}
    {ST32(sp+(4),FBITS(vr97));}
    {ST32(sp+(8),FBITS(vr98));}
    {ST32(sp+(12),FBITS(v[100]));}
    {ST32(sp+(16),FBITS(v[101]));}
    {ST32(sp+(20),FBITS(v[102]));}
    {ST32(sp+(24),FBITS(v[104]));}
    {ST32(sp+(28),FBITS(v[105]));}
    {ST32(sp+(32),FBITS(v[106]));}
    f0 = BITSF(LD32(sp));
    f1 = BITSF(LD32(sp+4));
    ST32(a0, FBITS(f0));
    f0 = BITSF(LD32(sp+8));
    ST32(a0+4, FBITS(f1));
    ST32(a0+8, FBITS(f0));
    f1 = BITSF(LD32(sp+12));
    f0 = BITSF(LD32(sp+16));
    ST32(a0+12, FBITS(f1));
    ST32(a0+16, FBITS(f0));
    f1 = BITSF(LD32(sp+20));
    f0 = BITSF(LD32(sp+24));
    ST32(a0+20, FBITS(f1));
    ST32(a0+24, FBITS(f0));
    f1 = BITSF(LD32(sp+28));
    f0 = BITSF(LD32(sp+32));
    ST32(a0+28, FBITS(f1));
    ST32(a0+32, FBITS(f0));
    goto L_089EEA28;
    v[64]=vr64;v[65]=vr65;v[66]=vr66;v[67]=vr67;v[68]=vr68;v[69]=vr69;v[70]=vr70;v[71]=vr71;v[73]=vr73;v[76]=vr76;v[77]=vr77;v[78]=vr78;v[96]=vr96;v[97]=vr97;v[98]=vr98;v[112]=vr112;v[113]=vr113;v[114]=vr114;v[115]=vr115;v[116]=vr116;v[117]=vr117;v[118]=vr118;v[120]=vr120;v[121]=vr121;v[122]=vr122;v[123]=vr123;v[124]=vr124;v[125]=vr125;v[126]=vr126;v[127]=vr127;
}

/* 089EEEA8 */
rv_t func_089EEEA8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EEEA8:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089EEF28; }
    goto L_089EEEDC;
L_089EEEDC:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EEF00; }
    goto L_089EEEF0;
L_089EEEF0:;
    v0 = D_08C2BA38 - (-17864);
    a0 = LD32(v0-17864);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089EEF18; }
    goto L_089EEF00;
L_089EEF00:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EEF18:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EEF20;
L_089EEF20:;
    goto L_089EEF00;
L_089EEF28:;
    s3 = D_08C2BA38 - (-17864);
    s0 = s3 - 17864;
    a0 = 64;
    v0 = 16;
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EEF40;
L_089EEF40:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17864, v0);
    if (cnd_) { goto L_089EEF6C; }
    goto L_089EEF50;
L_089EEF50:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089EEF58;
L_089EEF58:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089EEF58; }
    goto L_089EEF6C;
L_089EEF6C:;
    v0 = s3 - 17864;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089EEEDC;
}

/* 089EEF7C */
rv_t func_089EEF7C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EEF7C:;
    sp = sp - 16;
    a0 = 1;
    a1 = 0xffff;
    { rv_t r_ = func_089EEEA8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EEF90;
L_089EEF90:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EEF9C */
rv_t func_089EEF9C(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EEF9C:;
    sp = sp - 16;
    a0 = 0 + 0;
    a1 = 0xffff;
    { rv_t r_ = func_089EEEA8(a0, a1, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EEFB0;
L_089EEFB0:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EEFBC */
void func_089EEFBC(u32 a0, u32 a1)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f12 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EEFBC:;
    sp = sp - 32;
    s5 = a0 + 168;
    s1 = a0 + 0;
    a0 = s5 + 0;
    s0 = D_08B0A2B8 - (-23880);
    s0 = s0 - 23880;
    s2 = s1 + 92;
    s4 = D_08C2BAF8 - (-17672);
    func_08873E94(a0, a1);
    goto L_089EEFFC;
L_089EEFFC:;
    a2 = (u32)-1;
    a1 = s0 + 24;
    a0 = s2 + 0;
    s0 = s0 + 4;
    func_088628D0(a0, a1, a2, 0, 0, 0);
    goto L_089EF010;
L_089EF010:;
    a1 = s0 + 0;
    a0 = s1 + 0;
    func_08A063EC(a0, a1);
    goto L_089EF01C;
L_089EF01C:;
    a1 = D_08B0A0A8 - (-24408);
    a1 = a1 - 24408;
    v1 = a1 + 452;
    ST32(s1+168, v1);
    v1 = D_08AEF378 - (-3208);
    v0 = a1 + 248;
    f0 = BITSF(LD32(v1-3208));
    ST32(s1+92, v0);
    v0 = 2;
    v1 = D_08AEF37C - (-3204);
    ST32(s1+88, FBITS(f0));
    a0 = s2 + 0;
    s3 = s4 - 17672;
    ST32(s1, a1);
    ST32(s1+84, v0);
    v0 = LD32(s2+64);
    f12 = BITSF(LD32(v1-3204));
    v0 = (v0 & ~(0x1u << 0)) | ((0 & 0x1) << 0);
    ST32(s2+64, v0);
    func_0886422C(a0, f12);
    goto L_089EF06C;
L_089EF06C:;
    v0 = (u32)-32745;
    ST16(s5+8, v0);
    a0 = 12;
    a1 = LD32(s1);
    v1 = LD32(s3+4);
    v0 = LD32(a1-16);
    v1 = v1 - 1;
    v0 = s1 + v0;
    s0 = LD32(v0+4);
    s0 = s0 & v1;
    { rv_t r_ = func_08A94784(a0, 0, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF098;
L_089EF098:;
    a0 = LD32(s4-17672);
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

/* 089EF0E8 */
rv_t func_089EF0E8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EF0E8:;
    v1 = D_08B0A0A8 - (-24408);
    sp = sp - 32;
    v1 = v1 - 24408;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+168, a0);
    a0 = D_08C2BAF8 - (-17672);
    a0 = a0 - 17672;
    ST32(s1+92, v0);
    s0 = D_08B0A2B8 - (-23880);
    s0 = s0 - 23880;
    s3 = s1 + 168;
    func_08AC9E60(a0, a1, t1, t2, t3);
    goto L_089EF13C;
L_089EF13C:;
    s2 = s1 + 92;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089EF150;
L_089EF150:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EF15C;
L_089EF15C:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EF164;
L_089EF164:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EF180 */
rv_t func_089EF180(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EF180:;
    v1 = D_08B0A0A8 - (-24408);
    sp = sp - 32;
    v1 = v1 - 24408;
    v0 = v1 + 248;
    s1 = a0 + 0;
    a0 = v1 + 452;
    ST32(s1, v1);
    a1 = s1 + 0;
    ST32(s1+168, a0);
    a0 = D_08C2BAF8 - (-17672);
    a0 = a0 - 17672;
    ST32(s1+92, v0);
    s0 = D_08B0A2B8 - (-23880);
    s0 = s0 - 23880;
    s3 = s1 + 168;
    func_08AC9E60(a0, a1, t1, t2, t3);
    goto L_089EF1D4;
L_089EF1D4:;
    s2 = s1 + 92;
    a1 = s0 + 4;
    a0 = s1 + 0;
    s0 = s0 + 24;
    func_08A0652C(a0, a1, 0, 0);
    goto L_089EF1E8;
L_089EF1E8:;
    a1 = s0 + 0;
    a0 = s2 + 0;
    func_088629DC(a0, a1, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EF1F4;
L_089EF1F4:;
    a0 = s3 + 0;
    { u64 r_ = func_08873F2C(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EF1FC;
L_089EF1FC:;
    a0 = s1 + 0;
    { u64 r_ = func_08A94748(a0, 0, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EF204;
L_089EF204:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EF220 */
rv_t func_089EF220(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f20 = 0;
    int fcc = 0;
    int cnd_;
    u32 t_;
    float *v = vfpu_v;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_089EF220:;
    sp = sp - 112;
    s2 = a0 + 0;
    { rv_t r_ = func_08A06744(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF24C;
L_089EF24C:;
    { u64 r_ = func_089739F8(); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EF254;
L_089EF254:;
    cnd_ = v0 != 0;
    if (cnd_) { goto L_089EF284; }
    goto L_089EF25C;
L_089EF25C:;
    goto L_089EF260;
L_089EF260:;
    sp = sp + 112;
    return (rv_t){ v0, v1, f0 };
L_089EF284:;
    a0 = LD32(s2+84);
    { u64 r_ = func_08A26FF4(a0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EF28C;
L_089EF28C:;
    a2 = D_08C2BF38 - (-16584);
    s3 = v0 + 0;
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
    if (cnd_) { goto L_089EF308; }
    goto L_089EF2BC;
L_089EF2BC:;
    a2 = LD32(a2-16584);
    a3 = a1 + 0;
    goto L_089EF2C4;
L_089EF2C4:;
    a1 = LD32(a0+4);
    v0 = a1 << 2;
    v0 = v0 + a2;
    v1 = LD32(v0);
    cnd_ = v1 == 0;
    ST32(a0+8, v1);
    if (cnd_) { goto L_089EF2F8; }
    goto L_089EF2DC;
L_089EF2DC:;
    v1 = LD32(a0+8);
    v0 = LD_U8(v1+8);
    cnd_ = v0 == 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EF30C; }
    goto L_089EF2EC;
L_089EF2EC:;
    v0 = LD32(v1+4);
    cnd_ = v0 != 0;
    ST32(a0+8, v0);
    if (cnd_) { goto L_089EF2DC; }
    goto L_089EF2F8;
L_089EF2F8:;
    v0 = a1 + 1;
    v1 = v0 < a3;
    cnd_ = v1 != 0;
    ST32(a0+4, v0);
    if (cnd_) { goto L_089EF2C4; }
    goto L_089EF308;
L_089EF308:;
    v0 = LD32(sp+8);
    goto L_089EF30C;
L_089EF30C:;
    cnd_ = v0 == 0;
    s1 = LD32(sp);
    if (cnd_) { goto L_089EF400; }
    goto L_089EF314;
L_089EF314:;
    s5 = D_08C29324 - (-27868);
    s4 = 999;
    a0 = sp + 0;
    goto L_089EF320;
L_089EF320:;
    a1 = 1;
    s1 = LD32(v0);
    func_08ABC8D8(a0, a1);
    goto L_089EF32C;
L_089EF32C:;
    v0 = LD_U8(s5-27868);
    cnd_ = v0 == 0;
    a2 = LD32(s1+96);
    if (cnd_) { goto L_089EF65C; }
    goto L_089EF338;
L_089EF338:;
    a0 = D_08C2AA98 - (-21864);
    v0 = a0 - 21864;
    cnd_ = a2 == s4;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EF398; }
    goto L_089EF348;
L_089EF348:;
    v0 = LD32(v0+4);
    v1 = LD32(a0-21864);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EF398; }
    goto L_089EF36C;
L_089EF36C:;
    a0 = LD32(a1);
    goto L_089EF370;
L_089EF370:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EF63C; }
    goto L_089EF388;
L_089EF388:;
    a1 = LD32(a1+4);
    goto L_089EF38C;
L_089EF38C:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089EF370; }
    goto L_089EF394;
L_089EF394:;
    v1 = 0 + 0;
    goto L_089EF398;
L_089EF398:;
    cnd_ = v1 == 0;
    t1 = D_08C28F60 - (-28832);
    if (cnd_) { goto L_089EF3F0; }
    goto L_089EF3A0;
L_089EF3A0:;
    a1 = LD32(s1+12);
    t0 = LD32(v1+12);
    a0 = LD32(t1-28832);
    v0 = a1 ^ s3;
    v1 = a1 ^ t0;
    a2 = v0 < 0x1u;
    v0 = 3;
    cnd_ = a0 == v0;
    a3 = v1 < 0x1u;
    if (cnd_) { goto L_089EF578; }
    goto L_089EF3C4;
L_089EF3C4:;
    v0 = 4;
    goto L_089EF3C8;
L_089EF3C8:;
    cnd_ = a1 == v0;
    if (cnd_) { v1 = LD32(t1-28832); goto L_089EF3DC; }
    goto L_089EF3D0;
L_089EF3D0:;
    cnd_ = a2 != 0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EF3F4; }
    goto L_089EF3D8;
L_089EF3D8:;
    v1 = LD32(t1-28832);
    goto L_089EF3DC;
L_089EF3DC:;
    v0 = 1;
    cnd_ = v1 == v0;
    if (cnd_) { goto L_089EF568; }
    goto L_089EF3E8;
L_089EF3E8:;
    cnd_ = a3 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089EF4A4; }
    goto L_089EF3F0;
L_089EF3F0:;
    v0 = LD32(sp+8);
    goto L_089EF3F4;
L_089EF3F4:;
    cnd_ = v0 != 0;
    a0 = sp + 0;
    if (cnd_) { goto L_089EF320; }
    goto L_089EF3FC;
L_089EF3FC:;
    s1 = LD32(sp);
    goto L_089EF400;
L_089EF400:;
    v0 = LD32(s1+8);
    v0 = v0 - 1;
    cnd_ = v0 != 0;
    ST32(s1+8, v0);
    if (cnd_) { goto L_089EF25C; }
    goto L_089EF410;
L_089EF410:;
    v1 = LD32(s1+4);
    cnd_ = v1 == 0;
    s3 = 0 + 0;
    if (cnd_) { goto L_089EF25C; }
    goto L_089EF41C;
L_089EF41C:;
    v0 = LD32(s1);
    goto L_089EF420;
L_089EF420:;
    s4 = s3 << 2;
    v0 = s4 + v0;
    s0 = LD32(v0);
    cnd_ = s0 == 0;
    s2 = 0 + 0;
    if (cnd_) { goto L_089EF474; }
    goto L_089EF434;
L_089EF434:;
    v0 = LD_U8(s0+8);
    goto L_089EF438;
L_089EF438:;
    cnd_ = v0 == 0;
    if (cnd_) { s2 = s0 + 0; goto L_089EF49C; }
    goto L_089EF440;
L_089EF440:;
    cnd_ = s2 == 0;
    if (cnd_) { v0 = LD32(s1); goto L_089EF48C; }
    goto L_089EF448;
L_089EF448:;
    v0 = LD32(s0+4);
    ST32(s2+4, v0);
    goto L_089EF450;
L_089EF450:;
    a0 = s0 + 0;
    s0 = LD32(s0+4);
    { u64 r_ = func_08A94748(a0, t1, 0, 0); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EF45C;
L_089EF45C:;
    v0 = LD32(s1+12);
    v0 = v0 - 1;
    ST32(s1+12, v0);
    goto L_089EF468;
L_089EF468:;
    cnd_ = s0 != 0;
    if (cnd_) { v0 = LD_U8(s0+8); goto L_089EF438; }
    goto L_089EF470;
L_089EF470:;
    v1 = LD32(s1+4);
    goto L_089EF474;
L_089EF474:;
    s3 = s3 + 1;
    v0 = s3 < v1;
    cnd_ = v0 != 0;
    if (cnd_) { v0 = LD32(s1); goto L_089EF420; }
    goto L_089EF484;
L_089EF484:;
    goto L_089EF260;
L_089EF48C:;
    v1 = LD32(s0+4);
    v0 = s4 + v0;
    ST32(v0, v1);
    goto L_089EF450;
L_089EF49C:;
    s0 = LD32(s0+4);
    goto L_089EF468;
L_089EF4A4:;
    f20 = BITSF(LD32(s2+88));
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f20 = f20 * f20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF4C0;
L_089EF4C0:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF4E0;
L_089EF4E0:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f3 = f3 - f0;
    f2 = f2 - f1;
    {u32 a_=sp+(48);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    ST32(sp+20, FBITS(f2));
    if (cnd_) { goto L_089EF3F0; }
    goto L_089EF544;
L_089EF544:;
    a1 = LD32(s1+96);
    a0 = s2 + 0;
    func_089EF760(a0, a1, 0, 0);
    goto L_089EF550;
L_089EF550:;
    a0 = s1 + 0;
    func_089F73C0(a0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EF558;
L_089EF558:;
    a0 = s2 + 0;
    { rv_t r_ = func_089EF7C8(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF560;
L_089EF560:;
    v0 = LD32(sp+8);
    goto L_089EF3F4;
L_089EF568:;
    cnd_ = s3 != t0;
    v0 = LD32(sp+8);
    if (cnd_) { goto L_089EF3F4; }
    goto L_089EF570;
L_089EF570:;
    goto L_089EF3E8;
L_089EF578:;
    cnd_ = a2 == 0;
    v0 = 4;
    if (cnd_) { goto L_089EF3C8; }
    goto L_089EF580;
L_089EF580:;
    cnd_ = a3 == 0;
    if (cnd_) { goto L_089EF3C8; }
    goto L_089EF588;
L_089EF588:;
    v0 = LD32(s1);
    f20 = BITSF(LD32(s2+88));
    a0 = LD32(v0-12);
    a0 = s1 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    f20 = f20 * f20;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF5A8;
L_089EF5A8:;
    s0 = v0 + 0;
    v0 = LD32(s2);
    a0 = LD32(v0-12);
    a0 = s2 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF5C8;
L_089EF5C8:;
    f0 = BITSF(LD32(v0));
    f5 = BITSF(LD32(v0+8));
    f1 = BITSF(LD32(v0+4));
    f4 = BITSF(LD32(s0+8));
    f3 = BITSF(LD32(s0));
    f2 = BITSF(LD32(s0+4));
    f4 = f4 - f5;
    f3 = f3 - f0;
    f2 = f2 - f1;
    {u32 a_=sp+(32);v[0]=BITSF(LD32(a_+0));v[1]=BITSF(LD32(a_+4));v[2]=BITSF(LD32(a_+8));v[3]=BITSF(LD32(a_+12));}
    ST32(sp+24, FBITS(f4));
    v0 = FBITS(f3);
    {v[0]=BITSF(v0);}
    v0 = FBITS(f2);
    {v[1]=BITSF(v0);}
    v0 = FBITS(f4);
    {v[2]=BITSF(v0);}
    {float s0=v[0];float s1=v[1];float s2=v[2];float t0=v[0];float t1=v[1];float t2=v[2];float sum=0;sum+=s0*t0;sum+=s1*t1;sum+=s2*t2;v[0]=sum;}
    {v0=FBITS(v[0]);}
    f0 = BITSF(v0);
    ST32(sp+16, FBITS(f3));
    fcc = FCMP(f0, f20, 14);
    cnd_ = !fcc;
    ST32(sp+20, FBITS(f2));
    if (cnd_) { goto L_089EF3F0; }
    goto L_089EF62C;
L_089EF62C:;
    a0 = s1 + 0;
    { rv_t r_ = func_089F7894(a0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF634;
L_089EF634:;
    v0 = LD32(sp+8);
    goto L_089EF3F4;
L_089EF63C:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089EF388; }
    goto L_089EF648;
L_089EF648:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EF38C; }
    goto L_089EF654;
L_089EF654:;
    goto L_089EF398;
L_089EF65C:;
    a0 = D_08C2A880 - (-22400);
    v0 = a0 - 22400;
    cnd_ = a2 == s4;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EF398; }
    goto L_089EF66C;
L_089EF66C:;
    v0 = LD32(v0+4);
    v1 = LD32(a0-22400);
    v0 = v0 - 1;
    v0 = a2 & v0;
    v0 = v0 << 2;
    v0 = v0 + v1;
    a1 = LD32(v0);
    cnd_ = a1 == 0;
    v1 = 0 + 0;
    if (cnd_) { goto L_089EF398; }
    goto L_089EF690;
L_089EF690:;
    a0 = LD32(a1);
    goto L_089EF694;
L_089EF694:;
    v0 = LD32(a0);
    v1 = LD32(v0-16);
    v1 = a0 + v1;
    v0 = LD32(v1+4);
    cnd_ = v0 == a2;
    if (cnd_) { v0 = LD32(v1+16); goto L_089EF6C0; }
    goto L_089EF6AC;
L_089EF6AC:;
    a1 = LD32(a1+4);
    goto L_089EF6B0;
L_089EF6B0:;
    cnd_ = a1 != 0;
    if (cnd_) { a0 = LD32(a1); goto L_089EF694; }
    goto L_089EF6B8;
L_089EF6B8:;
    v1 = 0 + 0;
    goto L_089EF398;
L_089EF6C0:;
    v0 = v0 & 0x1;
    cnd_ = v0 != 0;
    v1 = a0 + 0;
    if (cnd_) { goto L_089EF6AC; }
    goto L_089EF6CC;
L_089EF6CC:;
    v0 = LD_U8(a1+8);
    cnd_ = v0 != 0;
    if (cnd_) { a1 = LD32(a1+4); goto L_089EF6B0; }
    goto L_089EF6D8;
L_089EF6D8:;
    goto L_089EF398;
}

/* 089EF6E0 */
rv_t func_089EF6E0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EF6E0:;
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
    goto L_089EF714;
L_089EF714:;
    cnd_ = v0 == 0;
    s0 = v0 + 0;
    if (cnd_) { goto L_089EF74C; }
    goto L_089EF71C;
L_089EF71C:;
    v0 = LD32(v0+24);
    a1 = s1 + 0;
    cnd_ = v0 == 0;
    a0 = v0 + 0;
    if (cnd_) { goto L_089EF734; }
    goto L_089EF72C;
L_089EF72C:;
    func_089EF930(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    goto L_089EF734;
L_089EF734:;
    v0 = LD32(s1);
    a1 = s0 + 0;
    a2 = 2;
    a0 = LD32(v0-16);
    a0 = s1 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF74C;
L_089EF74C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EF760 */
void func_089EF760(u32 a0, u32 a1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EF760:;
    sp = sp - 16;
    a2 = 0 + 0;
    s1 = a1 + 0;
    a1 = 4;
    s0 = a0 + 0;
    a3 = 0 + 0;
    a0 = 0x8082;
    { u64 r_ = func_088ACAD8(a0, a1, a2, a3, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EF78C;
L_089EF78C:;
    a1 = v0 + 0;
    cnd_ = v0 == 0;
    a2 = 2;
    if (cnd_) { goto L_089EF7B4; }
    goto L_089EF798;
L_089EF798:;
    v0 = LD32(v0+24);
    cnd_ = v0 != 0;
    if (cnd_) { ST32(v0, s1); goto L_089EF7A4; }
    goto L_089EF7A4;
L_089EF7A4:;
    v0 = LD32(s0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_08873D6C(a0, a1, a2, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF7B4;
L_089EF7B4:;
    sp = sp + 16;
    return;
}

/* 089EF7C8 */
rv_t func_089EF7C8(u32 a0)
{
    u32 v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0;
    float f0 = 0;
    int cnd_;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EF7C8:;
    sp = sp - 16;
    a1 = 10004;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-16);
    a0 = s0 + a0;
    { rv_t r_ = func_0887514C(a0, a1); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF7EC;
L_089EF7EC:;
    a0 = LD32(s0+84);
    func_08973830(a0);
    goto L_089EF7F4;
L_089EF7F4:;
    v1 = LD32(s0+84);
    a0 = 0x1d6e0000u;
    a1 = 0xb330000u;
    a0 = a0 | 0x50cb;
    a1 = a1 | 0x6e94;
    cnd_ = v1 == 0;
    a3 = 1;
    if (cnd_) { goto L_089EF838; }
    goto L_089EF810;
L_089EF810:;
    a0 = 0xb330000u;
    a1 = 0x1d6e0000u;
    v0 = 1;
    a0 = a0 | 0x6e94;
    cnd_ = v1 == v0;
    a1 = a1 | 0x50cb;
    if (cnd_) { goto L_089EF838; }
    goto L_089EF828;
L_089EF828:;
    goto L_089EF82C;
L_089EF82C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
L_089EF838:;
    v0 = LD32(s0);
    v1 = LD32(v0-16);
    v1 = s0 + v1;
    a2 = LD32(v1+4);
    { rv_t r_ = func_08A66150(a0, a1, a2, a3, 0, 0); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF84C;
L_089EF84C:;
    goto L_089EF82C;
}

/* 089EF854 */
rv_t func_089EF854(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EF854:;
    sp = sp - 16;
    s0 = a1 + 0;
    a1 = 0 + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D88C(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF878;
L_089EF878:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A07314(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF884;
L_089EF884:;
    a1 = LD32(s1+84);
    a0 = s0 + 0;
    { rv_t r_ = func_0882D900(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF890;
L_089EF890:;
    f12 = BITSF(LD32(s1+88));
    a0 = s0 + 0;
    { rv_t r_ = func_0882D974(a0, 0, 0, 0, 0, 0, f12, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF89C;
L_089EF89C:;
    sp = sp + 16;
    return (rv_t){ v0, v1, f0 };
}

/* 089EF8B0 */
rv_t func_089EF8B0(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EF8B0:;
    sp = sp - 32;
    s0 = a1 + 0;
    a1 = sp + 0;
    s1 = a0 + 0;
    a0 = s0 + 0;
    { rv_t r_ = func_0882D854(a0, a1, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF8D4;
L_089EF8D4:;
    a0 = s1 + 0;
    a1 = s0 + 0;
    { rv_t r_ = func_08A073E0(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF8E0;
L_089EF8E0:;
    a0 = s0 + 0;
    a1 = sp + 4;
    { rv_t r_ = func_0882D8C8(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF8EC;
L_089EF8EC:;
    v0 = LD32(sp+4);
    a1 = s1 + 88;
    a0 = s0 + 0;
    ST32(s1+84, v0);
    { rv_t r_ = func_0882D93C(a0, a1, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF900;
L_089EF900:;
    v1 = LD32(s1);
    a0 = LD32(v1-12);
    a0 = s1 + a0;
    a1 = LD32(a0+8);
    a1 = a1 | 0x1004;
    { rv_t r_ = func_08864108(a0, a1, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF918;
L_089EF918:;
    ST8(s1+4, 0);
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
}

/* 089EF930 */
void func_089EF930(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, s0 = 0, s1 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EF930:;
    sp = sp - 16;
    s0 = a1 + 0;
    s1 = a0 + 0;
    func_08A08244(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19);
    goto L_089EF94C;
L_089EF94C:;
    v0 = LD32(s0+84);
    ST32(s1+92, v0);
    sp = sp + 16;
    return;
}

/* 089EF968 */
void func_089EF968(u32 a0, u32 a1, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0, a2 = 0, s0 = 0, s1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EF968:;
    sp = sp - 16;
    a2 = 1;
    s1 = a0 + 0;
    s0 = a1 + 0;
    { rv_t r_ = func_08A083F4(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF988;
L_089EF988:;
    a1 = LD32(s1+92);
    a0 = s0 + 0;
    func_089EAFAC(a0, a1);
    goto L_089EF994;
L_089EF994:;
    sp = sp + 16;
    return;
}

/* 089EF9A8 */
void func_089EF9A8(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
L_089EF9A8:;
    sp = sp - 16;
    s0 = a0 & 0xffff;
    a0 = 20;
    s1 = a1 & 0xffff;
    { rv_t r_ = func_08A94784(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EF9CC;
L_089EF9CC:;
    s2 = v0 + 0;
    a0 = v0 + 0;
    a1 = s0 + 0;
    a2 = s1 + 0;
    a3 = 20;
    t0 = 96;
    func_088A5E94(a0, a1, a2, a3, t0, 0, 0, 0);
    goto L_089EF9E8;
L_089EF9E8:;
    a0 = s2 + 0;
    func_089EFA10(a0);
    goto L_089EF9F0;
L_089EF9F0:;
    a0 = s2 + 0;
    func_088A6464(a0);
    goto L_089EF9F8;
L_089EF9F8:;
    sp = sp + 16;
    return;
}

/* 089EFA10 */
void func_089EFA10(u32 a0)
{
    u32 a1 = 0, a2 = 0, a3 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0, s0 = 0;
    u8 stack_[112] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 112);
L_089EFA10:;
    sp = sp - 112;
    s0 = a0 + 0;
    func_08A08688(a0);
    goto L_089EFA24;
L_089EFA24:;
    a0 = s0 + 0;
    a1 = 0 + 0;
    a2 = 13;
    a3 = 92;
    t0 = 32;
    t1 = 2;
    t2 = 1;
    t3 = 1;
    func_088A6290(a0, a2, a3, t0, t1, t2, t3);
    goto L_089EFA48;
L_089EFA48:;
    sp = sp + 112;
    return;
}

/* 089EFA58 */
rv_t func_089EFA58(u32 a0, u32 a1, u32 t1, u32 t2, u32 t3)
{
    u32 v0 = 0, v1 = 0, a2 = 0, a3 = 0, t0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
    int cnd_;
    u8 stack_[32] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 32);
L_089EFA58:;
    sp = sp - 32;
    v1 = a0 ^ 0x1;
    s1 = a1 ^ 0xffff;
    v1 = v1 < 0x1u;
    v0 = s1 < 0x1u;
    v0 = v0 & v1;
    s2 = a0 + 0;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EFB7C; }
    goto L_089EFA8C;
L_089EFA8C:;
    v1 = 47;
    f0 = BITSF(v1);
    v1 = 255;
    v0 = D_08AEF380 - (-3200);
    f6 = (float)(s32)FBITS(f0);
    f0 = BITSF(v1);
    v1 = 179;
    f3 = BITSF(LD32(v0-3200));
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
    t0 = D_08C2BA48 - (-17848);
    f1 = (float)(s32)FBITS(f0);
    f4 = f4 * f3;
    v0 = D_08C2BA58 - (-17832);
    a3 = D_08C2BA68 - (-17816);
    v1 = t0 - 17848;
    a1 = v0 - 17832;
    a2 = a3 - 17816;
    f1 = f1 * f3;
    ST32(v1+4, FBITS(f4));
    s3 = D_08C2BAF8 - (-17672);
    s0 = s3 - 17672;
    ST32(v1+8, FBITS(f5));
    a0 = 4;
    ST32(a2+12, FBITS(f2));
    ST32(a1+4, FBITS(f6));
    ST32(v1+12, FBITS(f2));
    ST32(a1+8, FBITS(f6));
    ST32(a1+12, FBITS(f2));
    ST32(a2+8, FBITS(f2));
    ST32(a2+4, FBITS(f2));
    ST32(v0-17832, FBITS(f5));
    v0 = 1;
    ST32(t0-17848, FBITS(f1));
    ST32(a3-17816, FBITS(f2));
    ST32(s0+4, v0);
    { rv_t r_ = func_08A94838(a0, t1, t2, t3); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
    goto L_089EFB44;
L_089EFB44:;
    a0 = 0 + 0;
    v1 = LD32(s0+4);
    cnd_ = v1 == 0;
    ST32(s3-17672, v0);
    if (cnd_) { goto L_089EFB70; }
    goto L_089EFB54;
L_089EFB54:;
    a1 = v1 + 0;
    v1 = v0 + 0;
    goto L_089EFB5C;
L_089EFB5C:;
    a0 = a0 + 1;
    v0 = a0 < a1;
    ST32(v1, 0);
    cnd_ = v0 != 0;
    v1 = v1 + 4;
    if (cnd_) { goto L_089EFB5C; }
    goto L_089EFB70;
L_089EFB70:;
    v0 = s3 - 17672;
    ST32(v0+8, 0);
    ST32(v0+12, 0);
    goto L_089EFB7C;
L_089EFB7C:;
    v0 = s1 < 0x1u;
    v1 = s2 < 0x1u;
    v0 = v0 & v1;
    cnd_ = v0 == 0;
    if (cnd_) { goto L_089EFBA0; }
    goto L_089EFB90;
L_089EFB90:;
    v0 = D_08C2BAF8 - (-17672);
    a0 = LD32(v0-17672);
    cnd_ = a0 != 0;
    if (cnd_) { goto L_089EFBB8; }
    goto L_089EFBA0;
L_089EFBA0:;
    sp = sp + 32;
    return (rv_t){ v0, v1, f0 };
L_089EFBB8:;
    { u64 r_ = func_08A94768(a0, t1, t2, t3); v0 = (u32)r_; v1 = (u32)(r_ >> 32); }
    goto L_089EFBC0;
L_089EFBC0:;
    goto L_089EFBA0;
}

/* 089EFBC8 */
rv_t func_089EFBC8(u32 a0, u32 a1, u32 a2, u32 a3, u32 t0, u32 t1, u32 t2, u32 t3, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19)
{
    u32 v0 = 0, v1 = 0;
    float f0 = 0;
    u8 stack_[16] __attribute__((aligned(16)));
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 32);
L_089F0064:;
    sp = sp - 32;
    s0 = a0 + 0;
    v0 = LD32(a0);
    a0 = LD32(v0-12);
    a0 = s0 + a0;
    v1 = LD32(a0);
    v0 = LD32(v1+20);
    t_ = v0;
    { rv_t r_ = ((ifn_t)RS_FPTR(t_))(a0, a1, a2, a3, t0, t1, t2, t3, f12, f13, f14, f15, f16, f17, f18, f19); v0 = r_.v0; v1 = r_.v1; f0 = r_.f0; }
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 32);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
    u32 sp = RS_GADDR(stack_ + 16);
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
